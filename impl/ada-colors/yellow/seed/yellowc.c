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
struct yf1941;
struct yf1946;
struct yf1953;
struct yf1959;
struct yf1964;
struct yf1970;
struct yf1977;
struct yf1984;
struct yf1990;
struct yf1995;
struct yf2000;
struct yf2007;
struct yf2015;
struct yf2021;
struct yf2026;
struct yf2031;
struct yf2036;
struct yf2043;
struct yf2049;
struct yf2055;
struct yf2060;
struct yf2066;
struct yf2071;
struct yf2077;
struct yf2082;
struct yf2089;
struct yf2094;
struct yf2100;
struct yf2105;
struct yf2110;
struct yf2115;
struct yf2120;
struct yf2125;
struct yf2130;
struct yf2136;
struct yf2142;
struct yf2149;
struct yf2154;
struct yf2159;
struct yf2165;
struct yf2170;
struct yf2176;
struct yf2181;
struct yf2186;
struct yf2191;
struct yf2196;
struct yf2201;
struct yf2206;
struct yf2211;
struct yf2217;
struct yf2222;
struct yf2227;
struct yf2233;
struct yf2239;
struct yf2245;
struct yf2251;
struct yf2257;
struct yf2266;
struct yf2273;
struct yf2278;
struct yf2283;
struct yf2288;
struct yf2294;
struct yf2299;
struct yf2304;
struct yf2309;
struct yf2314;
struct yf2319;
struct yf2326;
struct yf2332;
struct yf2338;
struct yf2343;
struct yf2349;
struct yf2355;
struct yf2361;
struct yf2368;
struct yf2375;
struct yf2381;
struct yf2388;
struct yf2395;
struct yf2402;
struct yf2408;
struct yf2414;
struct yf2421;
struct yf2428;
struct yf2435;
struct yf2441;
struct yf2448;
struct yf2454;
struct yf2460;
struct yf2467;
struct yf2473;
struct yf2479;
struct yf2485;
struct yf2491;
struct yf2497;
struct yf2503;
struct yf2510;
struct yf2516;
struct yf2522;
struct yf2528;
struct yf2534;
struct yf2540;
struct yf2547;
struct yf2555;
struct yf2563;
struct yf2570;
struct yf2576;
struct yf2582;
struct yf2589;
struct yf2595;
struct yf2603;
struct yf2609;
struct yf2615;
struct yf2623;
struct yf2629;
struct yf2636;
struct yf2644;
struct yf2652;
struct yf2662;
struct yf2669;
struct yf2677;
struct yf2684;
struct yf2690;
struct yf2698;
struct yf2704;
struct yf2712;
struct yf2719;
struct yf2727;
struct yf2734;
struct yf2739;
struct yf2745;
struct yf2758;
struct yf2769;
struct yf2777;
struct yf2784;
struct yf2790;
struct yf2797;
struct yf2804;
struct yf2812;
struct yf2819;
struct yf2826;
struct yf2832;
struct yf2839;
struct yf2846;
struct yf2854;
struct yf2860;
struct yf2867;
struct yf2874;
struct yf2882;
struct yf2891;
struct yf2899;
struct yf2907;
struct yf2914;
struct yf2922;
struct yf2930;
struct yf2938;
struct yf2949;
struct yf2957;
struct yf2966;
struct yf2972;
struct yf2980;
struct yf2990;
struct yf3000;
struct yf3006;
struct yf3012;
struct yf3020;
struct yf3026;
struct yf3033;
struct yf3039;
struct yf3048;
struct yf3056;
struct yf3062;
struct yf3068;
struct yf3074;
struct yf3081;
struct yf3089;
struct yf3098;
struct yf3104;
struct yf3112;
struct yf3122;
struct yf3128;
struct yf3137;
struct yf3146;
struct yf3155;
struct yf3161;
struct yf3168;
struct yf3177;
struct yf3184;
struct yf3192;
struct yf3198;
struct yf3207;
struct yf3215;
struct yf3222;
struct yf3231;
struct yf3237;
struct yf3248;
struct yf3255;
struct yf3266;
struct yf3272;
struct yf3282;
struct yf3292;
struct yf3302;
struct yf3311;
struct yf3319;
struct yf3327;
struct yf3337;
struct yf3343;
struct yf3348;
struct yf3354;
struct yf3360;
struct yf3366;
struct yf3373;
struct yf3381;
struct yf3388;
struct yf3394;
struct yf3400;
struct yf3406;
struct yf3413;
struct yf3419;
struct yf3425;
struct yf3432;
struct yf3437;
struct yf3443;
struct yf3449;
struct yf3457;
struct yf3463;
struct yf3469;
struct yf3475;
struct yf3481;
struct yf3487;
struct yf3496;
struct yf3504;
struct yf3510;
struct yf3516;
struct yf3523;
struct yf3530;
struct yf3537;
struct yf3545;
struct yf3550;
struct yf3558;
struct yf3564;
struct yf3570;
struct yf3576;
struct yf3583;
struct yf3589;
struct yf3596;
struct yf3603;
struct yf3609;
struct yf3617;
struct yf3626;
struct yf3634;
struct yf3640;
struct yf3647;
struct yf3654;
struct yf3663;
struct yf3670;
struct yf3676;
struct yf3682;
struct yf3688;
struct yf3695;
struct yf3703;
struct yf3710;
struct yf3718;
struct yf3724;
struct yf3733;
struct yf3740;
struct yf3747;
struct yf3753;
struct yf3761;
struct yf3769;
struct yf3776;
struct yf3784;
struct yf3790;
struct yf3796;
struct yf3802;
struct yf3808;
struct yf3813;
struct yf3820;
struct yf3826;
struct yf3832;
struct yf3838;
struct yf3843;
struct yf3849;
struct yf3856;
struct yf3863;
struct yf3870;
struct yf3877;
struct yf3884;
struct yf3892;
struct yf3898;
struct yf3907;
struct yf3915;
struct yf3921;
struct yf3927;
struct yf3934;
struct yf3944;
struct yf3949;
struct yf3955;
struct yf3960;
struct yf3968;
struct yf3974;
struct yf3981;
struct yf3987;
struct yf3994;
struct yf4000;
struct yf4007;
struct yf4013;
struct yf4022;
struct yf4029;
struct yf4035;
struct yf4042;
struct yf4047;
struct yf4054;
struct yf4060;
struct yf4065;
struct yf4070;
struct yf4075;
struct yf4081;
struct yf4087;
struct yf4092;
struct yf4099;
struct yf4106;
struct yf4112;
struct yf4118;
struct yf4126;
struct yf4134;
struct yf4141;
struct yf4149;
struct yf4157;
struct yf4167;
struct yf4175;
struct yf4180;
struct yf4185;
struct yf4190;
struct yf4195;
struct yf8867;
struct yf8874;
struct yf8880;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; rt_int f_t0; rt_int f_t1; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v4200;
rt_int c_4203;
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
rt_int lo4239;
rt_int hi4240;
rt_int c_4242;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v4248;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_4263;
yarr v4265;
rt_int v4267;
rt_int v4270;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v4289;
rt_int lo4300;
rt_int hi4301;
rt_int c_4303;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v4314;
rt_int v4317;
rt_int v4319;
rt_int lo4324;
rt_int hi4325;
rt_int c_4327;
rt_int lo4346;
rt_int hi4347;
rt_int c_4349;
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
rt_int lo4378;
rt_int hi4379;
rt_int c_4381;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4394;
rt_int lo4410;
rt_int hi4411;
rt_int c_4413;
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
void * v4434;
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
rt_int v4448;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4455;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4461;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4471;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4481;
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
rt_int v4493;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4501;
rt_int yu;
};
struct yf1941 { void *up;
rt_int v4505;
rt_int v4507;
rt_int v4509;
rt_int lo4526;
rt_int hi4527;
rt_int c_4529;
rt_int yu;
};
struct yf1946 { void *up;
unsigned char v4538;
rt_int yu;
};
struct yf1953 { void *up;
rt_int p1951;
rt_int p1952;
rt_int yu;
};
struct yf1959 { void *up;
rt_int p1958;
rt_int yu;
};
struct yf1964 { void *up;
rt_int v4555;
rt_int v4557;
rt_int yu;
};
struct yf1970 { void *up;
unsigned char p1969;
rt_int yu;
};
struct yf1977 { void *up;
yarr p1976;
rt_int yu;
};
struct yf1984 { void *up;
rt_int p1982;
rt_int p1983;
rt_int v4587;
rt_int yu;
};
struct yf1990 { void *up;
rt_int p1989;
rt_int v4597;
rt_int v4600;
rt_int v4602;
rt_int v4604;
rt_int v4606;
rt_int v4608;
rt_int v4611;
rt_int v4614;
rt_int v4617;
rt_int v4620;
rt_int v4623;
rt_int v4626;
rt_int v4629;
rt_int lo4667;
rt_int hi4668;
rt_int c_4670;
rt_int lo4699;
rt_int hi4700;
rt_int c_4702;
rt_int lo4709;
rt_int hi4710;
rt_int c_4712;
rt_int yu;
};
struct yf1995 { void *up;
rt_int v4723;
rt_int v4725;
rt_int v4727;
rt_int v4729;
rt_int yu;
};
struct yf2000 { void *up;
unsigned char v4758;
rt_int v4760;
rt_int v4762;
rt_int v4764;
rt_int v4766;
rt_int v4768;
rt_int v4770;
rt_int v4772;
rt_int lo4847;
rt_int hi4848;
rt_int c_4850;
rt_int yu;
};
struct yf2007 { void *up;
rt_int p2005;
rt_int p2006;
void * v4866;
rt_int yu;
};
struct yf2015 { void *up;
void * * p2012;
void * * p2013;
void * p2014;
rt_int yu;
};
struct yf2021 { void *up;
void * p2020;
rt_int v4881;
void * v4884;
rt_int yu;
};
struct yf2026 { void *up;
rt_int yu;
};
struct yf2031 { void *up;
rt_int yu;
};
struct yf2036 { void *up;
rt_int yu;
};
struct yf2043 { void *up;
rt_int p2041;
rt_int p2042;
rt_int v4898;
rt_int yu;
};
struct yf2049 { void *up;
rt_int p2048;
rt_int yu;
};
struct yf2055 { void *up;
rt_int p2054;
rt_int yu;
};
struct yf2060 { void *up;
rt_int yu;
};
struct yf2066 { void *up;
rt_int p2065;
rt_int yu;
};
struct yf2071 { void *up;
rt_int v4921;
rt_int yu;
};
struct yf2077 { void *up;
rt_int p2076;
rt_int v4931;
rt_int yu;
};
struct yf2082 { void *up;
rt_int v4936;
rt_int yu;
};
struct yf2089 { void *up;
rt_int p2087;
rt_int p2088;
rt_int v4943;
rt_int yu;
};
struct yf2094 { void *up;
rt_int v4947;
rt_int yu;
};
struct yf2100 { void *up;
rt_int p2099;
void * v4957;
rt_int yu;
};
struct yf2105 { void *up;
void * v4964;
rt_int yu;
};
struct yf2110 { void *up;
void * v4969;
void * v4971;
void * v4973;
void * v4975;
rt_int v4977;
rt_int yu;
};
struct yf2115 { void *up;
rt_int v4986;
rt_int yu;
};
struct yf2120 { void *up;
void * v4992;
void * v4994;
void * v4996;
void * v4998;
rt_int yu;
};
struct yf2125 { void *up;
void * v5003;
void * v5005;
void * v5007;
void * v5009;
void * v5011;
rt_int yu;
};
struct yf2130 { void *up;
void * v5019;
void * v5021;
void * v5023;
rt_int yu;
};
struct yf2136 { void *up;
rt_int p2135;
void * v5029;
rt_int v5031;
rt_int yu;
};
struct yf2142 { void *up;
rt_int p2141;
rt_int yu;
};
struct yf2149 { void *up;
void * * p2147;
void * * p2148;
rt_int v5052;
void * v5054;
void * v5056;
void * v5058;
rt_int yu;
};
struct yf2154 { void *up;
void * v5062;
rt_int v5064;
rt_int yu;
};
struct yf2159 { void *up;
void * v5069;
void * v5071;
void * v5073;
rt_int v5075;
rt_int v5077;
rt_int v5079;
rt_int yu;
};
struct yf2165 { void *up;
void * p2164;
void * v5095;
void * v5097;
rt_int v5099;
rt_int yu;
};
struct yf2170 { void *up;
void * v5105;
rt_int yu;
};
struct yf2176 { void *up;
rt_int p2175;
rt_int v5117;
rt_int yu;
};
struct yf2181 { void *up;
rt_int v5125;
void * v5127;
rt_int yu;
};
struct yf2186 { void *up;
void * v5136;
void * v5138;
rt_int yu;
};
struct yf2191 { void *up;
void * v5143;
void * v5145;
void * v5147;
rt_int yu;
};
struct yf2196 { void *up;
void * v5152;
void * v5154;
void * v5156;
rt_int v5158;
rt_int yu;
};
struct yf2201 { void *up;
void * v5165;
void * v5167;
void * v5169;
void * v5171;
void * v5173;
void * v5175;
rt_int v5177;
rt_int v5179;
rt_int yu;
};
struct yf2206 { void *up;
void * v5196;
rt_int yu;
};
struct yf2211 { void *up;
rt_int v5201;
rt_int yu;
};
struct yf2217 { void *up;
rt_int p2216;
void * v5210;
void * v5212;
void * v5214;
rt_int v5216;
rt_int yu;
};
struct yf2222 { void *up;
void * v5224;
void * v5226;
void * v5228;
void * v5230;
void * v5232;
void * v5234;
rt_int v5236;
rt_int v5238;
rt_int yu;
};
struct yf2227 { void *up;
rt_int yu;
};
struct yf2233 { void *up;
rt_int p2232;
rt_int yu;
};
struct yf2239 { void *up;
rt_int p2238;
rt_int yu;
};
struct yf2245 { void *up;
rt_int p2244;
rt_int yu;
};
struct yf2251 { void *up;
rt_int p2250;
rt_int yu;
};
struct yf2257 { void *up;
rt_int p2256;
rt_int yu;
};
struct yf2266 { void *up;
rt_int p2262;
void * p2263;
void * p2264;
rt_int p2265;
void * v5292;
rt_int yu;
};
struct yf2273 { void *up;
rt_int p2271;
rt_int p2272;
rt_int v5298;
rt_int yu;
};
struct yf2278 { void *up;
void * v5302;
rt_int v5304;
rt_int v5306;
rt_int yu;
};
struct yf2283 { void *up;
void * v5310;
void * v5312;
rt_int v5314;
rt_int v5316;
rt_int yu;
};
struct yf2288 { void *up;
void * v5322;
rt_int v5324;
rt_int v5326;
rt_int yu;
};
struct yf2294 { void *up;
rt_int p2293;
rt_int v5332;
rt_int yu;
};
struct yf2299 { void *up;
void * v5337;
rt_int v5339;
rt_int v5341;
rt_int yu;
};
struct yf2304 { void *up;
void * v5345;
rt_int v5347;
rt_int v5349;
rt_int yu;
};
struct yf2309 { void *up;
void * v5370;
void * v5372;
void * v5374;
rt_int v5376;
rt_int yu;
};
struct yf2314 { void *up;
rt_int yu;
};
struct yf2319 { void *up;
void * v5383;
void * v5385;
void * v5387;
rt_int v5389;
rt_int yu;
};
struct yf2326 { void *up;
rt_int p2324;
rt_int p2325;
void * v5396;
rt_int yu;
};
struct yf2332 { void *up;
rt_int p2331;
void * v5414;
rt_int yu;
};
struct yf2338 { void *up;
void * p2337;
void * v5421;
rt_int v5423;
rt_int v5426;
rt_int yu;
};
struct yf2343 { void *up;
void * v5438;
void * v5440;
void * v5442;
rt_int v5444;
rt_int yu;
};
struct yf2349 { void *up;
void * p2348;
rt_int yu;
};
struct yf2355 { void *up;
rt_int p2354;
void * v5456;
rt_int yu;
};
struct yf2361 { void *up;
rt_int p2360;
void * v5464;
rt_int yu;
};
struct yf2368 { void *up;
rt_int p2366;
rt_int p2367;
void * v5473;
void * v5475;
rt_int lo5481;
rt_int hi5482;
rt_int c_5484;
rt_int yu;
};
struct yf2375 { void *up;
void * p2373;
void * p2374;
void * v5494;
rt_int yu;
};
struct yf2381 { void *up;
rt_int p2380;
rt_int yu;
};
struct yf2388 { void *up;
void * p2386;
rt_int p2387;
void * v5506;
void * v5508;
rt_int v5510;
rt_int yu;
};
struct yf2395 { void *up;
void * p2393;
rt_int p2394;
void * v5526;
rt_int yu;
};
struct yf2402 { void *up;
void * p2400;
rt_int p2401;
void * v5551;
rt_int yu;
};
struct yf2408 { void *up;
void * p2407;
rt_int yu;
};
struct yf2414 { void *up;
void * p2413;
void * v5566;
rt_int yu;
};
struct yf2421 { void *up;
rt_int p2419;
void * p2420;
void * v5575;
rt_int yu;
};
struct yf2428 { void *up;
void * p2426;
rt_int p2427;
void * v5584;
rt_int v5586;
rt_int yu;
};
struct yf2435 { void *up;
rt_int p2433;
rt_int p2434;
rt_int v5594;
rt_int yu;
};
struct yf2441 { void *up;
rt_int p2440;
rt_int v5609;
rt_int yu;
};
struct yf2448 { void *up;
rt_int p2446;
rt_int p2447;
rt_int v5624;
rt_int yu;
};
struct yf2454 { void *up;
void * p2453;
rt_int v5633;
rt_int yu;
};
struct yf2460 { void *up;
void * p2459;
void * v5641;
rt_int yu;
};
struct yf2467 { void *up;
rt_int p2465;
rt_int p2466;
void * v5648;
rt_int yu;
};
struct yf2473 { void *up;
void * p2472;
void * v5680;
rt_int yu;
};
struct yf2479 { void *up;
void * p2478;
rt_int yu;
};
struct yf2485 { void *up;
void * p2484;
rt_int yu;
};
struct yf2491 { void *up;
void * p2490;
rt_int yu;
};
struct yf2497 { void *up;
void * p2496;
rt_int yu;
};
struct yf2503 { void *up;
void * p2502;
rt_int yu;
};
struct yf2510 { void *up;
void * p2508;
rt_int p2509;
void * v5712;
rt_int yu;
};
struct yf2516 { void *up;
void * p2515;
rt_int yu;
};
struct yf2522 { void *up;
void * p2521;
rt_int v5724;
rt_int yu;
};
struct yf2528 { void *up;
void * p2527;
rt_int v5731;
rt_int yu;
};
struct yf2534 { void *up;
void * p2533;
rt_int v5760;
rt_int yu;
};
struct yf2540 { void *up;
void * p2539;
rt_int yu;
};
struct yf2547 { void *up;
void * p2545;
void * p2546;
rt_int yu;
};
struct yf2555 { void *up;
rt_int p2552;
void * p2553;
void * p2554;
rt_int v5812;
rt_int yu;
};
struct yf2563 { void *up;
rt_int p2560;
void * p2561;
void * p2562;
rt_int yu;
};
struct yf2570 { void *up;
void * p2568;
rt_int p2569;
rt_int yu;
};
struct yf2576 { void *up;
void * p2575;
rt_int v5827;
void * v5829;
void * v5831;
rt_int yu;
};
struct yf2582 { void *up;
void * p2581;
rt_int yu;
};
struct yf2589 { void *up;
void * p2587;
void * p2588;
rt_int yu;
};
struct yf2595 { void *up;
void * p2594;
rt_int yu;
};
struct yf2603 { void *up;
void * p2600;
yarr p2602;
rt_int v5880;
rt_int v5882;
rt_int yu;
};
struct yf2609 { void *up;
void * p2608;
rt_int yu;
};
struct yf2615 { void *up;
void * p2614;
rt_int yu;
};
struct yf2623 { void *up;
void * p2620;
void * p2621;
void * p2622;
void * v5908;
rt_int yu;
};
struct yf2629 { void *up;
void * p2628;
rt_int yu;
};
struct yf2636 { void *up;
rt_int p2634;
rt_int p2635;
rt_int v5920;
rt_int v5922;
rt_int v5924;
rt_int yu;
};
struct yf2644 { void *up;
rt_int p2641;
rt_int p2642;
rt_int p2643;
rt_int v5940;
rt_int v5942;
rt_int yu;
};
struct yf2652 { void *up;
rt_int p2649;
rt_int p2650;
rt_int p2651;
rt_int v5957;
rt_int lo5962;
rt_int hi5963;
rt_int c_5965;
rt_int yu;
};
struct yf2662 { void *up;
void * p2657;
void * p2658;
rt_int p2659;
rt_int * p2659_o;
rt_int p2660;
rt_int * p2660_o;
rt_int p2661;
rt_int * p2661_o;
rt_int v5976;
rt_int v5978;
rt_int v5980;
rt_int v5982;
rt_int v5984;
rt_int v5986;
rt_int yu;
};
struct yf2669 { void *up;
rt_int p2667;
rt_int p2668;
rt_int yu;
};
struct yf2677 { void *up;
void * p2674;
rt_int p2675;
rt_int p2676;
rt_int v6015;
rt_int yu;
};
struct yf2684 { void *up;
void * p2682;
void * p2683;
rt_int v6025;
rt_int v6027;
rt_int v6029;
rt_int v6031;
void * v6033;
void * v6035;
rt_int v6037;
rt_int v6039;
rt_int v6041;
rt_int v6043;
rt_int v6045;
rt_int yu;
};
struct yf2690 { void *up;
void * p2689;
void * v6077;
void * v6079;
rt_int v6081;
rt_int yu;
};
struct yf2698 { void *up;
void * p2695;
rt_int p2696;
rt_int p2697;
rt_int yu;
};
struct yf2704 { void *up;
rt_int p2703;
rt_int v6096;
rt_int yu;
};
struct yf2712 { void *up;
void * p2709;
rt_int p2710;
rt_int p2711;
void * v6106;
void * v6108;
rt_int yu;
};
struct yf2719 { void *up;
void * p2717;
void * p2718;
void * v6116;
void * v6118;
void * v6120;
void * v6122;
void * v6124;
void * v6126;
rt_int yu;
};
struct yf2727 { void *up;
void * p2724;
rt_int p2725;
rt_int p2726;
void * v6155;
void * v6157;
void * v6159;
void * v6161;
void * v6163;
rt_int v6165;
void * v6167;
rt_int v6169;
rt_int v6171;
rt_int yu;
};
struct yf2734 { void *up;
rt_int p2732;
void * p2733;
void * v6218;
void * v6220;
rt_int yu;
};
struct yf2739 { void *up;
void * v6224;
rt_int yu;
};
struct yf2745 { void *up;
void * p2744;
void * v6229;
rt_int v6231;
rt_int v6233;
rt_int yu;
};
struct yf2758 { void *up;
void * p2750;
void * * p2751;
rt_int p2752;
void * p2753;
rt_int p2754;
rt_int p2755;
void * p2756;
rt_int p2757;
void * v6258;
rt_int yu;
};
struct yf2769 { void *up;
void * p2763;
void * * p2764;
void * p2765;
rt_int p2766;
void * p2767;
rt_int p2768;
void * v6271;
void * v6273;
void * v6275;
rt_int yu;
};
struct yf2777 { void *up;
void * p2774;
void * p2775;
rt_int p2776;
void * v6282;
void * v6284;
void * v6286;
void * v6288;
rt_int v6290;
void * v6293;
rt_int v6295;
rt_int v6297;
rt_int yu;
};
struct yf2784 { void *up;
void * p2782;
rt_int p2783;
void * v6347;
rt_int yu;
};
struct yf2790 { void *up;
rt_int p2789;
rt_int v6353;
rt_int v6356;
rt_int yu;
};
struct yf2797 { void *up;
rt_int p2795;
rt_int p2796;
rt_int yu;
};
struct yf2804 { void *up;
void * p2802;
rt_int p2803;
rt_int v6379;
rt_int v6381;
rt_int v6383;
rt_int v6385;
rt_int v6387;
rt_int v6389;
void * v6391;
rt_int yu;
};
struct yf2812 { void *up;
void * p2809;
rt_int p2810;
rt_int p2811;
void * v6441;
rt_int v6443;
rt_int v6446;
rt_int v6449;
rt_int v6452;
rt_int v6455;
rt_int v6458;
ydesc yd_6468;
yarr v6470;
yarr v6472;
ydesc yd_6481;
yarr v6483;
rt_int lo6500;
rt_int hi6501;
rt_int c_6503;
rt_int lo6509;
rt_int hi6510;
rt_int c_6512;
rt_int yu;
};
struct yf2819 { void *up;
void * p2817;
void * p2818;
void * v6527;
rt_int yu;
};
struct yf2826 { void *up;
void * p2824;
void * p2825;
void * v6536;
rt_int v6538;
rt_int v6540;
rt_int v6542;
rt_int yu;
};
struct yf2832 { void *up;
void * p2831;
rt_int v6561;
rt_int v6563;
rt_int yu;
};
struct yf2839 { void *up;
rt_int p2837;
rt_int p2838;
rt_int yu;
};
struct yf2846 { void *up;
rt_int p2844;
void * p2845;
rt_int v6579;
rt_int v6581;
rt_int yu;
};
struct yf2854 { void *up;
void * p2851;
rt_int p2852;
void * p2853;
rt_int v6607;
rt_int yu;
};
struct yf2860 { void *up;
void * p2859;
void * v6629;
rt_int yu;
};
struct yf2867 { void *up;
void * p2865;
rt_int p2866;
void * v6638;
rt_int v6640;
rt_int v6642;
rt_int v6644;
rt_int v6646;
rt_int lo6655;
rt_int hi6656;
rt_int c_6658;
rt_int yu;
};
struct yf2874 { void *up;
void * p2872;
void * p2873;
void * v6697;
void * v6699;
void * v6701;
rt_int v6703;
rt_int v6706;
rt_int yu;
};
struct yf2882 { void *up;
void * p2879;
rt_int p2880;
rt_int p2881;
rt_int v6731;
rt_int v6733;
rt_int yu;
};
struct yf2891 { void *up;
void * p2887;
rt_int p2888;
rt_int p2889;
rt_int * p2889_o;
rt_int p2890;
rt_int v6744;
rt_int v6746;
rt_int v6748;
ydesc yd_6757;
yarr v6759;
unsigned char v6761;
rt_int v6763;
rt_int lo6795;
rt_int hi6796;
rt_int c_6798;
rt_int yu;
};
struct yf2899 { void *up;
void * p2896;
rt_int p2897;
rt_int * p2897_o;
rt_int p2898;
rt_int * p2898_o;
void * v6833;
rt_int v6835;
rt_int v6837;
rt_int v6839;
rt_int v6841;
rt_int v6843;
void * v6845;
rt_int yu;
};
struct yf2907 { void *up;
void * p2904;
rt_int p2905;
rt_int * p2905_o;
rt_int p2906;
rt_int * p2906_o;
void * v6875;
rt_int v6877;
rt_int v6879;
rt_int v6881;
rt_int v6883;
rt_int v6885;
void * v6887;
void * v6889;
rt_int lo6906;
rt_int hi6907;
rt_int c_6909;
rt_int yu;
};
struct yf2914 { void *up;
void * p2912;
void * p2913;
rt_int yu;
};
struct yf2922 { void *up;
rt_int p2919;
void * p2920;
void * p2921;
rt_int v6937;
rt_int v6939;
void * v6941;
void * v6943;
rt_int yu;
};
struct yf2930 { void *up;
rt_int p2927;
void * p2928;
void * p2929;
rt_int v6972;
rt_int v6974;
rt_int v6976;
rt_int v6978;
rt_int v6980;
rt_int v6982;
rt_int yu;
};
struct yf2938 { void *up;
rt_int p2935;
void * p2936;
void * p2937;
rt_int v7029;
rt_int v7031;
rt_int v7033;
rt_int yu;
};
struct yf2949 { void *up;
rt_int * p2943;
void * p2944;
rt_int * p2945;
void * p2946;
void * p2947;
rt_int p2948;
rt_int v7048;
rt_int v7050;
rt_int yu;
};
struct yf2957 { void *up;
void * p2954;
rt_int p2955;
rt_int * p2955_o;
void * p2956;
void * * p2956_o;
rt_int v7057;
rt_int v7059;
rt_int yu;
};
struct yf2966 { void *up;
void * p2962;
rt_int p2963;
rt_int * p2963_o;
rt_int p2964;
rt_int * p2964_o;
rt_int p2965;
rt_int * p2965_o;
rt_int v7073;
rt_int v7075;
rt_int v7077;
rt_int v7079;
rt_int v7081;
rt_int v7083;
rt_int yu;
};
struct yf2972 { void *up;
rt_int p2971;
rt_int yu;
};
struct yf2980 { void *up;
rt_int p2977;
void * p2978;
void * p2979;
rt_int v7104;
rt_int v7106;
rt_int yu;
};
struct yf2990 { void *up;
rt_int p2985;
void * p2986;
rt_int p2987;
void * p2988;
rt_int p2989;
rt_int v7147;
rt_int yu;
};
struct yf3000 { void *up;
rt_int p2995;
void * p2996;
rt_int p2997;
void * p2998;
rt_int p2999;
rt_int yu;
};
struct yf3006 { void *up;
void * p3005;
void * v7169;
void * v7171;
rt_int yu;
};
struct yf3012 { void *up;
void * p3011;
void * v7190;
void * v7192;
rt_int yu;
};
struct yf3020 { void *up;
void * p3017;
rt_int p3018;
rt_int * p3018_o;
void * p3019;
void * * p3019_o;
void * v7201;
rt_int yu;
};
struct yf3026 { void *up;
rt_int p3025;
rt_int yu;
};
struct yf3033 { void *up;
void * p3031;
rt_int p3032;
void * v7212;
rt_int yu;
};
struct yf3039 { void *up;
void * p3038;
void * v7217;
rt_int yu;
};
struct yf3048 { void *up;
void * p3044;
void * p3045;
rt_int p3046;
rt_int * p3046_o;
void * p3047;
void * * p3047_o;
rt_int v7226;
void * v7228;
rt_int v7230;
rt_int v7232;
void * v7234;
void * v7236;
void * v7238;
rt_int v7240;
rt_int v7242;
rt_int yu;
};
struct yf3056 { void *up;
void * p3053;
rt_int * p3054;
void * p3055;
rt_int v7285;
rt_int v7287;
rt_int yu;
};
struct yf3062 { void *up;
void * p3061;
void * v7300;
rt_int yu;
};
struct yf3068 { void *up;
void * p3067;
rt_int v7311;
rt_int yu;
};
struct yf3074 { void *up;
void * p3073;
rt_int v7330;
rt_int yu;
};
struct yf3081 { void *up;
void * p3079;
rt_int p3080;
rt_int yu;
};
struct yf3089 { void *up;
void * p3086;
void * p3087;
rt_int p3088;
void * v7355;
rt_int v7357;
rt_int v7359;
rt_int yu;
};
struct yf3098 { void *up;
void * p3094;
void * p3095;
rt_int p3096;
rt_int * p3096_o;
void * p3097;
void * * p3097_o;
void * v7371;
rt_int yu;
};
struct yf3104 { void *up;
void * p3103;
void * v7380;
rt_int yu;
};
struct yf3112 { void *up;
void * p3109;
rt_int p3110;
rt_int * p3110_o;
void * p3111;
void * * p3111_o;
rt_int v7393;
rt_int v7395;
rt_int v7397;
void * v7399;
void * v7401;
void * v7403;
void * v7405;
rt_int v7407;
rt_int v7409;
rt_int yu;
};
struct yf3122 { void *up;
void * p3117;
rt_int p3118;
void * p3119;
rt_int p3120;
rt_int * p3120_o;
void * p3121;
void * * p3121_o;
rt_int yu;
};
struct yf3128 { void *up;
void * p3127;
void * v7452;
rt_int yu;
};
struct yf3137 { void *up;
yarr p3134;
rt_int p3135;
rt_int p3136;
rt_int yu;
};
struct yf3146 { void *up;
rt_int p3142;
yarr p3144;
rt_int p3145;
rt_int yu;
};
struct yf3155 { void *up;
rt_int p3151;
void * p3152;
rt_int p3153;
void * p3154;
rt_int v7480;
rt_int v7482;
void * v7484;
rt_int yu;
};
struct yf3161 { void *up;
void * p3160;
rt_int yu;
};
struct yf3168 { void *up;
rt_int p3166;
void * p3167;
rt_int yu;
};
struct yf3177 { void *up;
void * p3173;
void * p3174;
rt_int p3175;
rt_int * p3175_o;
void * p3176;
void * * p3176_o;
rt_int v7522;
rt_int v7524;
rt_int v7526;
rt_int v7528;
void * v7530;
void * v7532;
void * v7534;
rt_int v7536;
rt_int yu;
};
struct yf3184 { void *up;
void * p3182;
void * p3183;
rt_int yu;
};
struct yf3192 { void *up;
void * p3189;
rt_int p3190;
rt_int p3191;
void * v7599;
void * v7601;
rt_int v7603;
rt_int v7605;
rt_int yu;
};
struct yf3198 { void *up;
void * p3197;
void * v7617;
rt_int yu;
};
struct yf3207 { void *up;
void * p3203;
void * p3204;
rt_int p3205;
rt_int * p3205_o;
rt_int p3206;
rt_int * p3206_o;
void * v7629;
void * v7631;
void * v7633;
rt_int yu;
};
struct yf3215 { void *up;
void * p3212;
void * p3213;
rt_int p3214;
void * v7648;
rt_int yu;
};
struct yf3222 { void *up;
void * p3220;
void * p3221;
rt_int yu;
};
struct yf3231 { void *up;
void * p3227;
rt_int p3228;
rt_int p3229;
rt_int p3230;
void * v7665;
rt_int v7667;
rt_int v7671;
rt_int v7674;
rt_int v7677;
rt_int v7680;
rt_int v7683;
rt_int v7686;
rt_int yu;
};
struct yf3237 { void *up;
rt_int p3236;
rt_int yu;
};
struct yf3248 { void *up;
void * p3242;
rt_int p3243;
void * p3244;
void * p3245;
rt_int p3246;
rt_int * p3246_o;
void * p3247;
void * * p3247_o;
void * v7746;
void * v7748;
rt_int v7750;
rt_int v7752;
rt_int yu;
};
struct yf3255 { void *up;
void * p3253;
rt_int p3254;
void * v7766;
void * v7768;
rt_int yu;
};
struct yf3266 { void *up;
void * p3260;
void * p3261;
rt_int p3262;
rt_int p3263;
rt_int p3264;
rt_int * p3264_o;
void * p3265;
void * * p3265_o;
rt_int v7779;
rt_int v7781;
rt_int v7783;
rt_int yu;
};
struct yf3272 { void *up;
rt_int p3271;
rt_int yu;
};
struct yf3282 { void *up;
rt_int p3277;
void * p3278;
rt_int p3279;
void * p3280;
rt_int p3281;
void * v7814;
void * v7816;
void * v7818;
void * v7820;
rt_int v7822;
rt_int yu;
};
struct yf3292 { void *up;
rt_int p3287;
void * p3288;
rt_int p3289;
void * p3290;
rt_int p3291;
rt_int v7864;
rt_int yu;
};
struct yf3302 { void *up;
void * p3297;
void * p3298;
rt_int p3299;
rt_int p3300;
rt_int * p3300_o;
void * p3301;
void * * p3301_o;
void * v7873;
void * v7875;
rt_int v7877;
rt_int v7879;
rt_int yu;
};
struct yf3311 { void *up;
void * p3307;
void * p3308;
rt_int p3309;
rt_int * p3309_o;
void * p3310;
void * * p3310_o;
void * v7892;
void * v7894;
rt_int v7896;
rt_int v7898;
rt_int v7900;
void * v7902;
rt_int v7904;
rt_int v7906;
rt_int v7908;
rt_int v7910;
rt_int v7912;
rt_int v7915;
void * v7917;
rt_int v7919;
rt_int yu;
};
struct yf3319 { void *up;
void * p3316;
rt_int p3317;
rt_int p3318;
void * v7981;
void * v7983;
rt_int v7985;
rt_int v7987;
rt_int yu;
};
struct yf3327 { void *up;
yarr p3325;
rt_int p3326;
rt_int v7996;
rt_int yu;
};
struct yf3337 { void *up;
yarr p3333;
rt_int p3334;
yarr p3336;
rt_int v8002;
rt_int yu;
};
struct yf3343 { void *up;
rt_int p3342;
rt_int lo8012;
rt_int hi8013;
rt_int c_8015;
rt_int yu;
};
struct yf3348 { void *up;
rt_int yu;
};
struct yf3354 { void *up;
rt_int p3353;
rt_int yu;
};
struct yf3360 { void *up;
void * p3359;
rt_int v8034;
rt_int yu;
};
struct yf3366 { void *up;
void * p3365;
rt_int v8038;
rt_int v8040;
rt_int v8042;
void * v8044;
void * v8046;
rt_int v8048;
void * v8050;
rt_int v8052;
rt_int yu;
};
struct yf3373 { void *up;
void * p3371;
void * p3372;
void * v8119;
void * v8121;
rt_int v8123;
rt_int v8125;
rt_int v8127;
rt_int v8129;
rt_int yu;
};
struct yf3381 { void *up;
void * p3378;
void * p3379;
void * p3380;
rt_int v8151;
void * v8153;
void * v8155;
void * v8157;
rt_int v8159;
rt_int v8161;
rt_int v8163;
rt_int v8165;
rt_int yu;
};
struct yf3388 { void *up;
void * p3386;
void * p3387;
void * v8178;
void * v8180;
rt_int v8182;
rt_int v8185;
rt_int lo8190;
rt_int hi8191;
rt_int c_8193;
rt_int yu;
};
struct yf3394 { void *up;
void * p3393;
void * v8203;
rt_int v8205;
rt_int yu;
};
struct yf3400 { void *up;
void * p3399;
void * v8213;
rt_int yu;
};
struct yf3406 { void *up;
void * p3405;
rt_int v8227;
void * v8229;
rt_int v8231;
rt_int v8233;
rt_int yu;
};
struct yf3413 { void *up;
void * p3411;
rt_int p3412;
void * v8258;
void * v8260;
rt_int yu;
};
struct yf3419 { void *up;
void * p3418;
void * v8284;
rt_int yu;
};
struct yf3425 { void *up;
void * p3424;
rt_int v8288;
void * v8290;
rt_int yu;
};
struct yf3432 { void *up;
void * p3430;
void * p3431;
rt_int v8296;
rt_int v8298;
void * v8300;
void * v8302;
rt_int v8304;
rt_int yu;
};
struct yf3437 { void *up;
void * v8310;
rt_int v8312;
rt_int yu;
};
struct yf3443 { void *up;
void * p3442;
rt_int v8321;
rt_int v8323;
rt_int v8325;
rt_int v8327;
rt_int v8329;
rt_int v8331;
rt_int v8333;
void * v8335;
void * v8337;
void * v8339;
void * v8341;
rt_int v8343;
rt_int v8345;
rt_int v8347;
rt_int v8349;
void * v8351;
rt_int yu;
};
struct yf3449 { void *up;
void * p3448;
void * v8428;
rt_int v8430;
rt_int v8432;
rt_int v8434;
void * v8436;
rt_int yu;
};
struct yf3457 { void *up;
rt_int p3454;
rt_int p3455;
rt_int p3456;
rt_int yu;
};
struct yf3463 { void *up;
void * p3462;
rt_int v8468;
rt_int v8470;
rt_int v8472;
void * v8474;
void * v8476;
rt_int yu;
};
struct yf3469 { void *up;
void * p3468;
rt_int v8492;
rt_int v8494;
rt_int yu;
};
struct yf3475 { void *up;
void * p3474;
void * v8523;
rt_int yu;
};
struct yf3481 { void *up;
void * p3480;
void * v8538;
rt_int yu;
};
struct yf3487 { void *up;
void * p3486;
void * v8548;
void * v8550;
void * v8552;
rt_int yu;
};
struct yf3496 { void *up;
void * p3492;
void * p3493;
void * * p3493_o;
rt_int p3494;
rt_int * p3494_o;
rt_int p3495;
rt_int * p3495_o;
void * v8560;
void * v8562;
rt_int yu;
};
struct yf3504 { void *up;
void * p3501;
rt_int p3502;
rt_int p3503;
void * v8572;
rt_int yu;
};
struct yf3510 { void *up;
void * p3509;
void * v8577;
rt_int v8579;
rt_int v8581;
void * v8583;
void * v8585;
rt_int yu;
};
struct yf3516 { void *up;
void * p3515;
void * v8590;
rt_int yu;
};
struct yf3523 { void *up;
void * p3521;
rt_int p3522;
void * v8596;
rt_int v8598;
rt_int v8600;
void * v8602;
rt_int yu;
};
struct yf3530 { void *up;
void * p3528;
yarr * p3529;
void * v8607;
rt_int v8609;
void * v8612;
rt_int lo8621;
rt_int hi8622;
rt_int c_8624;
rt_int yu;
};
struct yf3537 { void *up;
void * p3535;
void * p3536;
void * v8638;
void * v8640;
rt_int v8642;
rt_int v8644;
rt_int v8646;
rt_int v8648;
rt_int v8650;
rt_int v8652;
rt_int v8654;
rt_int v8656;
yarr v8658;
yarr v8660;
rt_int v8662;
rt_int v8664;
rt_int v8666;
rt_int v8668;
void * v8670;
void * v8672;
void * v8674;
void * v8676;
rt_int lo8690;
rt_int hi8691;
rt_int c_8693;
rt_int yu;
};
struct yf3545 { void *up;
void * p3542;
rt_int p3543;
rt_int p3544;
void * v8715;
void * v8717;
rt_int v8719;
rt_int v8721;
void * v8723;
void * v8725;
void * v8727;
rt_int v8729;
rt_int v8731;
rt_int yu;
};
struct yf8867 { struct yf3550 *up;
rt_int p8865;
rt_int p8866;
rt_int yu;
};
struct yf8874 { struct yf3550 *up;
rt_int p8872;
rt_int p8873;
void * v8894;
rt_int yu;
};
struct yf8880 { struct yf3550 *up;
rt_int p8879;
rt_int yu;
};
struct yf3550 { void *up;
void * v8747;
void * v8749;
void * v8751;
rt_int v8753;
rt_int v8756;
rt_int v8759;
void * v8762;
rt_int lo8789;
rt_int hi8790;
ydesc yd_8792;
yarr v8794;
yarr v8796;
rt_int lo8802;
rt_int hi8803;
ydesc yd_8805;
yarr v8807;
rt_int lo8813;
rt_int hi8814;
ydesc yd_8816;
yarr v8818;
rt_int lo8824;
rt_int hi8825;
ydesc yd_8827;
yarr v8829;
rt_int lo8835;
rt_int hi8836;
ydesc yd_8838;
yarr v8840;
rt_int lo8846;
rt_int hi8847;
ydesc yd_8849;
yarr v8851;
rt_int v8853;
rt_int v8856;
rt_int v8858;
rt_int v8860;
void * v8862;
rt_int lo8919;
rt_int hi8920;
rt_int c_8922;
rt_int lo8930;
rt_int hi8931;
rt_int c_8933;
rt_int lo8941;
rt_int hi8942;
rt_int c_8944;
rt_int lo8957;
rt_int hi8958;
rt_int c_8960;
rt_int lo8967;
rt_int hi8968;
rt_int c_8970;
rt_int lo8980;
rt_int hi8981;
rt_int c_8983;
rt_int lo8990;
rt_int hi8991;
rt_int c_8993;
rt_int lo9003;
rt_int hi9004;
rt_int c_9006;
rt_int lo9028;
rt_int hi9029;
rt_int c_9031;
rt_int yu;
};
struct yf3558 { void *up;
rt_int p3555;
rt_int p3556;
rt_int p3557;
rt_int lo9044;
rt_int hi9045;
rt_int c_9047;
rt_int yu;
};
struct yf3564 { void *up;
rt_int p3563;
rt_int v9061;
rt_int v9063;
rt_int lo9068;
rt_int hi9069;
rt_int c_9071;
rt_int yu;
};
struct yf3570 { void *up;
void * p3569;
void * v9081;
rt_int v9083;
rt_int v9085;
rt_int yu;
};
struct yf3576 { void *up;
void * p3575;
rt_int v9102;
rt_int yu;
};
struct yf3583 { void *up;
void * p3581;
void * p3582;
rt_int v9110;
rt_int v9112;
rt_int v9115;
rt_int v9117;
rt_int lo9127;
rt_int hi9128;
rt_int c_9130;
rt_int yu;
};
struct yf3589 { void *up;
void * p3588;
rt_int yu;
};
struct yf3596 { void *up;
void * p3594;
rt_int p3595;
void * v9160;
void * v9162;
void * v9164;
void * v9166;
void * v9168;
void * v9170;
void * v9172;
rt_int v9174;
rt_int v9176;
rt_int yu;
};
struct yf3603 { void *up;
void * p3601;
void * p3602;
void * v9231;
void * v9233;
void * v9235;
rt_int v9237;
rt_int yu;
};
struct yf3609 { void *up;
void * p3608;
void * v9245;
yR140 v9247;
yR140 v9249;
rt_int v9251;
rt_int v9253;
rt_int v9255;
rt_int v9257;
rt_int v9259;
rt_int v9261;
rt_int v9263;
void * v9265;
rt_int v9267;
void * v9269;
void * v9271;
rt_int v9273;
rt_int v9275;
yR140 v9277;
rt_int yu;
};
struct yf3617 { void *up;
void * p3614;
void * p3615;
rt_int p3616;
rt_int yu;
};
struct yf3626 { void *up;
void * p3622;
void * p3623;
rt_int p3624;
rt_int p3625;
rt_int yu;
};
struct yf3634 { void *up;
void * p3631;
void * p3632;
rt_int p3633;
rt_int yu;
};
struct yf3640 { void *up;
void * p3639;
rt_int v9366;
void * v9368;
void * v9370;
void * v9372;
void * v9374;
rt_int v9376;
rt_int v9378;
rt_int v9380;
rt_int v9382;
rt_int yu;
};
struct yf3647 { void *up;
void * p3645;
void * p3646;
void * v9406;
rt_int yu;
};
struct yf3654 { void *up;
void * p3652;
void * p3653;
rt_int yu;
};
struct yf3663 { void *up;
void * p3659;
rt_int p3660;
void * p3661;
rt_int p3662;
rt_int v9416;
rt_int lo9429;
rt_int hi9430;
rt_int c_9432;
rt_int yu;
};
struct yf3670 { void *up;
rt_int p3668;
rt_int p3669;
rt_int v9441;
rt_int v9445;
rt_int v9447;
void * v9449;
rt_int lo9454;
rt_int hi9455;
rt_int c_9457;
rt_int lo9464;
rt_int hi9465;
rt_int c_9467;
rt_int yu;
};
struct yf3676 { void *up;
rt_int p3675;
void * v9475;
yR140 v9477;
void * v9479;
rt_int yu;
};
struct yf3682 { void *up;
void * p3681;
void * v9493;
void * v9495;
rt_int v9497;
rt_int v9499;
rt_int yu;
};
struct yf3688 { void *up;
void * p3687;
rt_int yu;
};
struct yf3695 { void *up;
rt_int p3693;
void * p3694;
void * v9509;
rt_int yu;
};
struct yf3703 { void *up;
void * * p3700;
void * p3701;
rt_int p3702;
void * v9516;
void * v9518;
void * v9520;
rt_int yu;
};
struct yf3710 { void *up;
void * p3708;
rt_int p3709;
void * v9530;
rt_int yu;
};
struct yf3718 { void *up;
rt_int p3715;
rt_int p3716;
void * p3717;
void * * p3717_o;
void * v9546;
rt_int yu;
};
struct yf3724 { void *up;
void * p3723;
void * v9564;
rt_int yu;
};
struct yf3733 { void *up;
rt_int p3729;
rt_int p3730;
void * p3731;
rt_int p3732;
void * v9572;
rt_int yu;
};
struct yf3740 { void *up;
rt_int p3738;
void * p3739;
rt_int yu;
};
struct yf3747 { void *up;
void * p3745;
void * p3746;
void * v9585;
rt_int lo9589;
rt_int hi9590;
rt_int c_9592;
rt_int yu;
};
struct yf3753 { void *up;
rt_int p3752;
void * v9599;
rt_int lo9603;
rt_int hi9604;
rt_int c_9606;
rt_int yu;
};
struct yf3761 { void *up;
void * p3758;
void * * p3759;
rt_int p3760;
void * v9615;
void * v9617;
rt_int v9619;
rt_int yu;
};
struct yf3769 { void *up;
void * p3766;
void * * p3767;
rt_int p3768;
void * v9626;
void * v9628;
void * v9630;
rt_int v9632;
void * v9634;
rt_int v9636;
rt_int v9638;
void * v9640;
rt_int yu;
};
struct yf3776 { void *up;
void * p3774;
rt_int p3775;
void * v9675;
void * v9677;
void * v9679;
rt_int yu;
};
struct yf3784 { void *up;
void * p3781;
void * p3782;
rt_int p3783;
void * v9687;
void * v9689;
void * v9691;
void * v9693;
rt_int yu;
};
struct yf3790 { void *up;
void * p3789;
void * v9700;
void * v9702;
void * v9704;
void * v9706;
void * v9708;
void * v9710;
void * v9712;
void * v9714;
void * v9716;
rt_int v9718;
void * v9720;
void * v9722;
rt_int v9724;
rt_int v9726;
rt_int v9728;
rt_int yu;
};
struct yf3796 { void *up;
void * p3795;
void * v9777;
rt_int yu;
};
struct yf3802 { void *up;
void * p3801;
void * v9781;
void * v9783;
void * v9785;
void * v9787;
rt_int v9789;
rt_int v9791;
rt_int v9793;
rt_int v9795;
void * v9797;
rt_int lo9805;
rt_int hi9806;
rt_int c_9808;
rt_int yu;
};
struct yf3808 { void *up;
void * p3807;
void * v9820;
void * v9822;
rt_int yu;
};
struct yf3813 { void *up;
void * v9828;
rt_int yu;
};
struct yf3820 { void *up;
void * p3818;
void * p3819;
rt_int v9839;
rt_int v9841;
rt_int v9843;
rt_int v9845;
rt_int v9847;
void * v9849;
rt_int v9851;
rt_int v9853;
void * v9855;
rt_int v9857;
rt_int v9859;
rt_int v9861;
rt_int v9863;
rt_int v9865;
rt_int v9867;
void * v9869;
void * v9871;
rt_int yu;
};
struct yf3826 { void *up;
rt_int p3825;
rt_int v9935;
rt_int yu;
};
struct yf3832 { void *up;
void * p3831;
rt_int yu;
};
struct yf3838 { void *up;
void * p3837;
rt_int v9948;
rt_int yu;
};
struct yf3843 { void *up;
rt_int yu;
};
struct yf3849 { void *up;
void * p3848;
rt_int yu;
};
struct yf3856 { void *up;
void * p3854;
rt_int p3855;
rt_int yu;
};
struct yf3863 { void *up;
void * p3861;
rt_int p3862;
rt_int yu;
};
struct yf3870 { void *up;
void * p3868;
void * p3869;
rt_int v9992;
rt_int v9994;
rt_int v9996;
rt_int yu;
};
struct yf3877 { void *up;
void * p3875;
rt_int p3876;
void * v10005;
rt_int v10007;
rt_int yu;
};
struct yf3884 { void *up;
void * p3882;
rt_int p3883;
rt_int yu;
};
struct yf3892 { void *up;
yarr p3890;
rt_int p3891;
rt_int yu;
};
struct yf3898 { void *up;
rt_int p3897;
rt_int yu;
};
struct yf3907 { void *up;
void * p3903;
rt_int p3904;
rt_int p3905;
rt_int * p3905_o;
void * p3906;
void * * p3906_o;
rt_int v10034;
rt_int yu;
};
struct yf3915 { void *up;
void * p3912;
rt_int p3913;
rt_int * p3913_o;
void * p3914;
void * * p3914_o;
rt_int yu;
};
struct yf3921 { void *up;
void * p3920;
rt_int v10050;
void * v10052;
rt_int yu;
};
struct yf3927 { void *up;
void * p3926;
void * v10058;
rt_int v10061;
rt_int v10063;
rt_int v10065;
rt_int v10067;
rt_int v10069;
rt_int v10071;
unsigned char v10073;
void * v10075;
ydesc yd_10084;
yarr v10086;
rt_int yu;
};
struct yf3934 { void *up;
void * p3932;
void * p3933;
rt_int v10125;
rt_int v10127;
rt_int v10129;
void * v10131;
rt_int yu;
};
struct yf3944 { void *up;
rt_int p3939;
void * p3940;
rt_int p3941;
rt_int p3942;
rt_int * p3942_o;
void * p3943;
void * * p3943_o;
void * v10143;
rt_int v10145;
rt_int v10147;
rt_int v10149;
rt_int v10151;
rt_int v10153;
void * v10155;
void * v10157;
void * v10159;
void * v10161;
rt_int v10163;
rt_int v10165;
rt_int v10167;
rt_int v10169;
void * v10171;
rt_int v10173;
rt_int lo10187;
rt_int hi10188;
rt_int c_10190;
rt_int yu;
};
struct yf3949 { void *up;
rt_int v10399;
rt_int yu;
};
struct yf3955 { void *up;
rt_int p3954;
ydesc yd_10411;
yarr v10413;
rt_int v10415;
rt_int lo10419;
rt_int hi10420;
rt_int c_10422;
rt_int yu;
};
struct yf3960 { void *up;
rt_int v10428;
rt_int v10430;
void * v10432;
void * v10434;
rt_int lo10449;
rt_int hi10450;
rt_int c_10452;
rt_int yu;
};
struct yf3968 { void *up;
rt_int p3965;
yarr p3967;
rt_int yu;
};
struct yf3974 { void *up;
rt_int p3973;
rt_int v10466;
rt_int lo10473;
rt_int hi10474;
ydesc yd_10476;
yarr v10478;
yfile * v10480;
unsigned char v10482;
rt_int lo10487;
rt_int hi10488;
rt_int c_10490;
rt_int yu;
};
struct yf3981 { void *up;
rt_int p3979;
yR140 p3980;
void * v10503;
rt_int lo10509;
rt_int hi10510;
ydesc yd_10512;
yarr v10514;
yfile * v10516;
rt_int lo10521;
rt_int hi10522;
rt_int c_10524;
rt_int yu;
};
struct yf3987 { void *up;
rt_int p3986;
rt_int v10535;
rt_int yu;
};
struct yf3994 { void *up;
rt_int p3992;
rt_int p3993;
rt_int v10547;
ydesc yd_10556;
yarr v10558;
rt_int v10560;
rt_int yu;
};
struct yf4000 { void *up;
rt_int p3999;
rt_int v10584;
rt_int v10586;
rt_int yu;
};
struct yf4007 { void *up;
rt_int p4005;
rt_int p4006;
yR140 v10599;
rt_int v10601;
rt_int v10603;
rt_int yu;
};
struct yf4013 { void *up;
yR140 p4012;
rt_int v10611;
void * v10614;
rt_int lo10618;
rt_int hi10619;
rt_int c_10621;
rt_int yu;
};
struct yf4022 { void *up;
rt_int p4018;
rt_int p4019;
rt_int p4020;
rt_int p4021;
rt_int v10642;
rt_int v10644;
rt_int yu;
};
struct yf4029 { void *up;
void * p4027;
rt_int p4028;
void * v10667;
void * v10669;
void * v10671;
rt_int yu;
};
struct yf4035 { void *up;
rt_int p4034;
void * v10681;
rt_int yu;
};
struct yf4042 { void *up;
void * p4040;
void * p4041;
void * v10690;
void * v10692;
rt_int v10694;
rt_int yu;
};
struct yf4047 { void *up;
void * v10705;
void * v10707;
void * v10709;
rt_int yu;
};
struct yf4054 { void *up;
rt_int p4052;
rt_int p4053;
rt_int v10715;
rt_int v10717;
rt_int v10719;
void * v10721;
void * v10723;
void * v10725;
rt_int v10727;
rt_int yu;
};
struct yf4060 { void *up;
void * p4059;
void * v10739;
rt_int yu;
};
struct yf4065 { void *up;
void * v10743;
rt_int yu;
};
struct yf4070 { void *up;
void * v10749;
yR140 v10751;
rt_int v10753;
yR140 v10755;
rt_int yu;
};
struct yf4075 { void *up;
void * v10765;
void * v10767;
rt_int v10769;
rt_int v10771;
rt_int v10773;
rt_int v10775;
yR140 v10777;
void * v10779;
rt_int yu;
};
struct yf4081 { void *up;
void * p4080;
void * v10792;
rt_int yu;
};
struct yf4087 { void *up;
rt_int p4086;
void * v10798;
rt_int v10800;
rt_int yu;
};
struct yf4092 { void *up;
void * v10817;
void * v10819;
rt_int v10821;
rt_int v10823;
rt_int v10825;
rt_int v10827;
rt_int v10829;
rt_int v10831;
rt_int v10833;
yR140 v10835;
rt_int yu;
};
struct yf4099 { void *up;
rt_int p4097;
rt_int p4098;
rt_int v10880;
rt_int v10883;
rt_int v10885;
rt_int v10887;
void * v10889;
rt_int v10891;
rt_int yu;
};
struct yf4106 { void *up;
rt_int p4104;
rt_int p4105;
unsigned char v10915;
rt_int lo10920;
rt_int hi10921;
rt_int c_10923;
rt_int lo10931;
rt_int hi10932;
rt_int c_10934;
rt_int yu;
};
struct yf4112 { void *up;
void * p4111;
rt_int yu;
};
struct yf4118 { void *up;
void * p4117;
void * v10947;
rt_int v10949;
rt_int yu;
};
struct yf4126 { void *up;
void * p4123;
void * p4124;
rt_int p4125;
rt_int v10963;
rt_int yu;
};
struct yf4134 { void *up;
void * p4131;
void * p4132;
rt_int p4133;
rt_int v10984;
rt_int yu;
};
struct yf4141 { void *up;
void * p4139;
void * p4140;
rt_int v11006;
rt_int v11008;
rt_int v11010;
rt_int v11012;
rt_int v11014;
rt_int v11016;
void * v11018;
void * v11020;
rt_int v11022;
rt_int v11024;
yR140 v11027;
rt_int yu;
};
struct yf4149 { void *up;
yarr p4147;
void * p4148;
void * v11073;
rt_int yu;
};
struct yf4157 { void *up;
yarr p4155;
rt_int p4156;
void * v11079;
rt_int yu;
};
struct yf4167 { void *up;
yarr p4163;
yarr p4164;
yarr p4165;
rt_int p4166;
void * v11087;
void * v11089;
void * v11091;
rt_int yu;
};
struct yf4175 { void *up;
rt_int p4172;
yarr p4174;
void * v11100;
rt_int yu;
};
struct yf4180 { void *up;
rt_int yu;
};
struct yf4185 { void *up;
void * v11190;
yR140 v11192;
rt_int yu;
};
struct yf4190 { void *up;
rt_int yu;
};
struct yf4195 { void *up;
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
static rt_int v1501;
static rt_int v1504;
static rt_int v1507;
static rt_int v1510;
static rt_int v1513;
static void * v1516;
static ydesc yd_1525;
static yarr v1527;
static ydesc yd_1536;
static yarr v1538;
static ydesc yd_1547;
static yarr v1549;
static rt_int v1551;
static ydesc yd_1561;
static yarr v1563;
static ydesc yd_1572;
static yarr v1574;
static rt_int v1576;
static rt_int v1579;
static ydesc yd_1589;
static yarr v1591;
static ydesc yd_1600;
static yarr v1602;
static rt_int v1604;
static ydesc yd_1614;
static yarr v1616;
static rt_int v1618;
static ydesc yd_1628;
static yarr v1630;
static yarr v1632;
static ydesc yd_1641;
static yarr v1643;
static rt_int v1645;
static rt_int v1648;
static void * v1651;
static ydesc yd_1660;
static yarr v1662;
static yarr v1664;
static rt_int v1666;
static ydesc yd_1676;
static yarr v1678;
static rt_int v1680;
static rt_int v1683;
static rt_int v1686;
static void * v1689;
static rt_int v1691;
static rt_int v1694;
static void * v1697;
static void * v1699;
static rt_int v1701;
static rt_int v1704;
static rt_int v1707;
static rt_int v1710;
static ydesc yd_1720;
static yarr v1722;
static yR140 v1724;
static yR140 v1726;
static rt_int v1728;
static void * v1731;
static void * v1733;
static ydesc yd_1742;
static yarr v1744;
static ydesc yd_1753;
static yarr v1755;
static rt_int v1757;
static ydesc yd_1767;
static yarr v1769;
static ydesc yd_1778;
static yarr v1780;
static ydesc yd_1789;
static yarr v1791;
static ydesc yd_1800;
static yarr v1802;
static ydesc yd_1811;
static yarr v1813;
static ydesc yd_1822;
static yarr v1824;
static ydesc yd_1833;
static yarr v1835;
static ydesc yd_1844;
static yarr v1846;
static yarr v1848;
static ydesc yd_1857;
static yarr v1859;
static rt_int v1861;
static rt_int v1864;
static void * v1867;
static ydesc yd_1876;
static yarr v1878;
static rt_int v1880;
static ydesc yd_1890;
static yarr v1892;
static ydesc yd_1901;
static yarr v1903;
static ydesc yd_1912;
static yarr v1914;
static ydesc yd_1923;
static yarr v1925;
static yarr v1927;
static rt_int v1929;
static void * v1932;
static void * v1934;
static void * v1936;
static void * v1938;
static rt_int c_11224;
static rt_int c_11234;
static rt_int c_11243;
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
static void yr1940_InitWords(void);
static void yr1945_ReadSource(void);
static void yr1950_AddTok(rt_int a_p1951, rt_int a_p1952);
static unsigned char yr1957_At(rt_int a_p1958);
static rt_int yr1963_EndsOperand(void);
static rt_int yr1968_DigitVal(unsigned char a_p1969);
static void yr1974_LexError(yarr a_p1976);
static void yr1981_LexDigits(rt_int a_p1982, rt_int a_p1983);
static void yr1988_LexNumber(rt_int a_p1989);
static void yr1994_LexString(void);
static void yr1999_Lex(void);
static void * yr2004_NewNode(rt_int a_p2005, rt_int a_p2006);
static void yr2011_Link(void * * a_p2012, void * * a_p2013, void * a_p2014);
static rt_int yr2019_Count(void * a_p2020);
static rt_int yr2025_TK(void);
static rt_int yr2030_TV(void);
static rt_int yr2035_TLn(void);
static rt_int yr2040_IsAt(rt_int a_p2041, rt_int a_p2042);
static rt_int yr2047_Is(rt_int a_p2048);
static rt_int yr2053_IsIdAt(rt_int a_p2054);
static void yr2059_Skip(void);
static rt_int yr2064_Accept(rt_int a_p2065);
static rt_int yr2070_TokText(void);
static void yr2075_Expect(rt_int a_p2076);
static rt_int yr2081_Ident(void);
static void yr2086_CloseName(rt_int a_p2087, rt_int a_p2088);
static rt_int yr2093_ExtendedId(void);
static rt_int yr2098_IsLabel(rt_int a_p2099);
static void * yr2104_ImportItem(void);
static void * yr2109_ParseModule(void);
static rt_int yr2114_IsDeclWord(void);
static void * yr2119_ParseBlock(void);
static void * yr2124_ParseHandler(void);
static void * yr2129_ParseNames(void);
static void * yr2134_SimpleEntry(rt_int a_p2135);
static rt_int yr2140_Continues(rt_int a_p2141);
static void yr2146_ParseDeclGroup(void * * a_p2147, void * * a_p2148);
static void * yr2153_ParseDecl(void);
static void * yr2158_ParseDecl1(void);
static void yr2163_ParseFormals(void * a_p2164);
static void * yr2169_ParseFormalRep(void);
static rt_int yr2174_IsStructWord(rt_int a_p2175);
static void * yr2180_ParseRep(void);
static void * yr2185_ParseConcrete(void);
static void * yr2190_ParseIds(void);
static void * yr2195_ParseFieldGroups(void);
static void * yr2200_ParseConcrete1(void);
static void * yr2205_ParseQualifier(void);
static rt_int yr2210_IsStop(void);
static void * yr2215_ParseStatements(rt_int a_p2216);
static void * yr2221_ParseStatement(void);
static rt_int yr2226_OpAt(void);
static rt_int yr2231_IsRel(rt_int a_p2232);
static rt_int yr2237_IsAssocMul(rt_int a_p2238);
static rt_int yr2243_IsNonAssocMul(rt_int a_p2244);
static rt_int yr2249_IsAssocAdd(rt_int a_p2250);
static rt_int yr2255_IsNonAssocAdd(rt_int a_p2256);
static void * yr2261_Bin(rt_int a_p2262, void * a_p2263, void * a_p2264, rt_int a_p2265);
static void yr2270_NeedParens(rt_int a_p2271, rt_int a_p2272);
static void * yr2277_ParseExpr(void);
static void * yr2282_ParseSimple(void);
static void * yr2287_ParseTerm(void);
static rt_int yr2292_IsLiteralAt(rt_int a_p2293);
static void * yr2298_ParseLiteral(void);
static void * yr2303_ParseFactor(void);
static void * yr2308_ParseDesignator(void);
static void yr2313_EXIT_ARGS(void);
static void * yr2318_ParseProgram(void);
static void * yr2323_NewSym(rt_int a_p2324, rt_int a_p2325);
static void yr2330_OpenScope(rt_int a_p2331);
static void yr2336_ReopenScope(void * a_p2337);
static void yr2342_CloseScope(void);
static rt_int yr2347_Visible(void * a_p2348);
static void * yr2353_Find(rt_int a_p2354);
static void * yr2359_FindHere(rt_int a_p2360);
static void * yr2365_Lookup(rt_int a_p2366, rt_int a_p2367);
static rt_int yr2372_AltOf(void * a_p2373, void * a_p2374);
static rt_int yr2379_IsSimple(rt_int a_p2380);
static rt_int yr2385_DeclaredFrom(void * a_p2386, rt_int a_p2387);
static rt_int yr2392_LiteralIn(void * a_p2393, rt_int a_p2394);
static rt_int yr2399_LiteralInGroups(void * a_p2400, rt_int a_p2401);
static rt_int yr2406_Resolved(void * a_p2407);
static rt_int yr2412_Ambiguous(void * a_p2413);
static void * yr2418_FindLit(rt_int a_p2419, void * a_p2420);
static void yr2425_Define(void * a_p2426, rt_int a_p2427);
static rt_int yr2432_Path(rt_int a_p2433, rt_int a_p2434);
static rt_int yr2439_FramePtr(rt_int a_p2440);
static void yr2445_DeclStorage(rt_int a_p2446, rt_int a_p2447);
static rt_int yr2452_SymPath(void * a_p2453);
static void * yr2458_Real(void * a_p2459);
static void * yr2464_NewRep(rt_int a_p2465, rt_int a_p2466);
static void * yr2471_CopyRep(void * a_p2472);
static rt_int yr2477_IsDiscrete(void * a_p2478);
static rt_int yr2483_IsNumeric(void * a_p2484);
static rt_int yr2489_IsArrayLike(void * a_p2490);
static rt_int yr2495_IsString(void * a_p2496);
static rt_int yr2501_Deep(void * a_p2502);
static rt_int yr2507_Holds(void * a_p2508, rt_int a_p2509);
static rt_int yr2514_HoldsSignal(void * a_p2515);
static rt_int yr2520_NonAssignable(void * a_p2521);
static rt_int yr2526_CType(void * a_p2527);
static rt_int yr2532_DescOf(void * a_p2533);
static void yr2538_NewDesc(void * a_p2539);
static rt_int yr2544_SameType(void * a_p2545, void * a_p2546);
static void yr2551_TypeClash(rt_int a_p2552, void * a_p2553, void * a_p2554);
static void yr2559_CheckType(rt_int a_p2560, void * a_p2561, void * a_p2562);
static void yr2567_CheckRepresented(void * a_p2568, rt_int a_p2569);
static rt_int yr2574_SigText(void * a_p2575);
static rt_int yr2580_RepSig(void * a_p2581);
static rt_int yr2586_Identical(void * a_p2587, void * a_p2588);
static rt_int yr2593_IsLiteralNode(void * a_p2594);
static void yr2599_StoreBounds(void * a_p2600, yarr a_p2602);
static rt_int yr2607_LoText(void * a_p2608);
static rt_int yr2613_HiText(void * a_p2614);
static void * yr2619_AdoptLiteral(void * a_p2620, void * a_p2621, void * a_p2622);
static rt_int yr2627_HasQualifier(void * a_p2628);
static rt_int yr2633_Gcd(rt_int a_p2634, rt_int a_p2635);
static rt_int yr2640_MulChk(rt_int a_p2641, rt_int a_p2642, rt_int a_p2643);
static rt_int yr2648_PowChk(rt_int a_p2649, rt_int a_p2650, rt_int a_p2651);
static void yr2656_ScaleRatio(void * a_p2657, void * a_p2658, rt_int * a_p2659, rt_int * a_p2660, rt_int * a_p2661);
static rt_int yr2666_Factor(rt_int a_p2667, rt_int a_p2668);
static void yr2673_SetScale(void * a_p2674, rt_int a_p2675, rt_int a_p2676);
static void yr2681_Qualify(void * a_p2682, void * a_p2683);
static void yr2688_DefineLits(void * a_p2689);
static void yr2694_SetRange(void * a_p2695, rt_int a_p2696, rt_int a_p2697);
static rt_int yr2702_NewTid(rt_int a_p2703);
static void * yr2708_MakeRep(void * a_p2709, rt_int a_p2710, rt_int a_p2711);
static rt_int yr2716_Conforms(void * a_p2717, void * a_p2718);
static void * yr2723_MakeRep1(void * a_p2724, rt_int a_p2725, rt_int a_p2726);
static void yr2731_ResolvePending(rt_int a_p2732, void * a_p2733);
static void yr2738_CheckPending(void);
static void yr2743_BuildArrayDesc(void * a_p2744);
static void yr2749_AddField(void * a_p2750, void * * a_p2751, rt_int a_p2752, void * a_p2753, rt_int a_p2754, rt_int a_p2755, void * a_p2756, rt_int a_p2757);
static void yr2762_AddFields(void * a_p2763, void * * a_p2764, void * a_p2765, rt_int a_p2766, void * a_p2767, rt_int a_p2768);
static void yr2773_MakeRecord(void * a_p2774, void * a_p2775, rt_int a_p2776);
static void * yr2781_FindField(void * a_p2782, rt_int a_p2783);
static rt_int yr2788_BitsFor(rt_int a_p2789);
static rt_int yr2794_RoundUp(rt_int a_p2795, rt_int a_p2796);
static rt_int yr2801_Bits(void * a_p2802, rt_int a_p2803);
static rt_int yr2808_RecordBits(void * a_p2809, rt_int a_p2810, rt_int a_p2811);
static rt_int yr2816_FirstOfVariant(void * a_p2817, void * a_p2818);
static void * yr2823_ApplyStorage(void * a_p2824, void * a_p2825);
static rt_int yr2830_AtAddress(void * a_p2831);
static rt_int yr2836_StoreAt(rt_int a_p2837, rt_int a_p2838);
static rt_int yr2843_ExtentCode(rt_int a_p2844, void * a_p2845);
static rt_int yr2850_SpaceArg(void * a_p2851, rt_int a_p2852, void * a_p2853);
static rt_int yr2858_PackedComponent(void * a_p2859);
static rt_int yr2864_CharOrd(void * a_p2865, rt_int a_p2866);
static void * yr2871_AlphabetFor(void * a_p2872, void * a_p2873);
static rt_int yr2878_CharValue(void * a_p2879, rt_int a_p2880, rt_int a_p2881);
static rt_int yr2886_StringCodes(void * a_p2887, rt_int a_p2888, rt_int * a_p2889, rt_int a_p2890);
static void yr2895_Manifest(void * a_p2896, rt_int * a_p2897, rt_int * a_p2898);
static void yr2903_ManifestStd(void * a_p2904, rt_int * a_p2905, rt_int * a_p2906);
static rt_int yr2911_NeedsConv(void * a_p2912, void * a_p2913);
static rt_int yr2918_ConvertRecord(rt_int a_p2919, void * a_p2920, void * a_p2921);
static rt_int yr2926_ConvertArray(rt_int a_p2927, void * a_p2928, void * a_p2929);
static rt_int yr2934_RescaleCode(rt_int a_p2935, void * a_p2936, void * a_p2937);
static void yr2942_CommonScale(rt_int * a_p2943, void * a_p2944, rt_int * a_p2945, void * a_p2946, void * a_p2947, rt_int a_p2948);
static void yr2953_FixLiteral(void * a_p2954, rt_int * a_p2955, void * * a_p2956);
static void yr2961_ManifestFix(void * a_p2962, rt_int * a_p2963, rt_int * a_p2964, rt_int * a_p2965);
static rt_int yr2970_FloatChk(rt_int a_p2971);
static rt_int yr2976_Convert(rt_int a_p2977, void * a_p2978, void * a_p2979);
static rt_int yr2984_StoreText(rt_int a_p2985, void * a_p2986, rt_int a_p2987, void * a_p2988, rt_int a_p2989);
static void yr2994_Store(rt_int a_p2995, void * a_p2996, rt_int a_p2997, void * a_p2998, rt_int a_p2999);
static rt_int yr3004_IsVariable(void * a_p3005);
static void yr3010_CheckPure(void * a_p3011);
static void yr3016_LValue(void * a_p3017, rt_int * a_p3018, void * * a_p3019);
static rt_int yr3024_Paren(rt_int a_p3025);
static void * yr3030_Lit(void * a_p3031, rt_int a_p3032);
static void * yr3037_Qualifier(void * a_p3038);
static void yr3043_Expr(void * a_p3044, void * a_p3045, rt_int * a_p3046, void * * a_p3047);
static void yr3052_CheckDefined(void * a_p3053, rt_int * a_p3054, void * a_p3055);
static rt_int yr3060_Addressable(void * a_p3061);
static rt_int yr3066_UndefMacro(void * a_p3067);
static rt_int yr3072_UndefValue(void * a_p3073);
static rt_int yr3078_RawCode(void * a_p3079, rt_int a_p3080);
static rt_int yr3085_VariantTest(void * a_p3086, void * a_p3087, rt_int a_p3088);
static void yr3093_NameExpr(void * a_p3094, void * a_p3095, rt_int * a_p3096, void * * a_p3097);
static rt_int yr3102_IsMainStore(void * a_p3103);
static void yr3108_IndexExpr(void * a_p3109, rt_int * a_p3110, void * * a_p3111);
static void yr3116_NegExpr(void * a_p3117, rt_int a_p3118, void * a_p3119, rt_int * a_p3120, void * * a_p3121);
static void * yr3126_Unbounded(void * a_p3127);
static rt_int yr3132_Call2(yarr a_p3134, rt_int a_p3135, rt_int a_p3136);
static rt_int yr3141_Infix(rt_int a_p3142, yarr a_p3144, rt_int a_p3145);
static rt_int yr3150_EqCode(rt_int a_p3151, void * a_p3152, rt_int a_p3153, void * a_p3154);
static rt_int yr3159_IsOrdered(void * a_p3160);
static rt_int yr3165_FixToFloat(rt_int a_p3166, void * a_p3167);
static void yr3172_BinExpr(void * a_p3173, void * a_p3174, rt_int * a_p3175, void * * a_p3176);
static rt_int yr3181_Fits(void * a_p3182, void * a_p3183);
static void * yr3188_Choose(void * a_p3189, rt_int a_p3190, rt_int a_p3191);
static rt_int yr3196_HidesStandard(void * a_p3197);
static void yr3202_CompileArgs(void * a_p3203, void * a_p3204, rt_int * a_p3205, rt_int * a_p3206);
static void yr3211_CheckUnresolved(void * a_p3212, void * a_p3213, rt_int a_p3214);
static rt_int yr3219_SameAsFormal(void * a_p3220, void * a_p3221);
static rt_int yr3226_CallCode(void * a_p3227, rt_int a_p3228, rt_int a_p3229, rt_int a_p3230);
static rt_int yr3235_Num(rt_int a_p3236);
static rt_int yr3241_UserOp(void * a_p3242, rt_int a_p3243, void * a_p3244, void * a_p3245, rt_int * a_p3246, void * * a_p3247);
static void yr3252_NoteCall(void * a_p3253, rt_int a_p3254);
static void yr3259_Directive(void * a_p3260, void * a_p3261, rt_int a_p3262, rt_int a_p3263, rt_int * a_p3264, void * * a_p3265);
static rt_int yr3270_Suppressed(rt_int a_p3271);
static rt_int yr3276_UserAssign(rt_int a_p3277, void * a_p3278, rt_int a_p3279, void * a_p3280, rt_int a_p3281);
static void yr3286_Assign(rt_int a_p3287, void * a_p3288, rt_int a_p3289, void * a_p3290, rt_int a_p3291);
static void yr3296_CallExpr(void * a_p3297, void * a_p3298, rt_int a_p3299, rt_int * a_p3300, void * * a_p3301);
static void yr3306_Denote(void * a_p3307, void * a_p3308, rt_int * a_p3309, void * * a_p3310);
static rt_int yr3315_VariantOf(void * a_p3316, rt_int a_p3317, rt_int a_p3318);
static void yr3323_Emit2(yarr a_p3325, rt_int a_p3326);
static void yr3331_Emit3(yarr a_p3333, rt_int a_p3334, yarr a_p3336);
static void yr3341_PopTo(rt_int a_p3342);
static void yr3347_LeaveBlock(void);
static rt_int yr3352_RaiseCode(rt_int a_p3353);
static void yr3358_BlockStatements(void * a_p3359);
static void yr3364_BlockStatements1(void * a_p3365);
static rt_int yr3370_SameDesig(void * a_p3371, void * a_p3372);
static void yr3377_CheckVariantSelected(void * a_p3378, void * a_p3379, void * a_p3380);
static void yr3385_CheckCaseLabels(void * a_p3386, void * a_p3387);
static rt_int yr3392_Falls(void * a_p3393);
static rt_int yr3398_BlockFalls(void * a_p3399);
static rt_int yr3404_Completes(void * a_p3405);
static rt_int yr3410_Exits(void * a_p3411, rt_int a_p3412);
static void yr3417_Statements(void * a_p3418);
static rt_int yr3423_Cond(void * a_p3424);
static rt_int yr3429_Label(void * a_p3430, void * a_p3431);
static void yr3436_CopyOut(void);
static void yr3441_Statement(void * a_p3442);
static void yr3447_ForStatement(void * a_p3448);
static rt_int yr3453_Join(rt_int a_p3454, rt_int a_p3455, rt_int a_p3456);
static void yr3461_ReturnStatement(void * a_p3462);
static void yr3467_BeginStatement(void * a_p3468);
static void yr3473_PlaceLabel(void * a_p3474);
static void yr3479_GotoStatement(void * a_p3480);
static void yr3485_CheckLabels(void * a_p3486);
static void yr3491_DesigBase(void * a_p3492, void * * a_p3493, rt_int * a_p3494, rt_int * a_p3495);
static void * yr3500_Note(void * a_p3501, rt_int a_p3502, rt_int a_p3503);
static void yr3508_NoteWrite(void * a_p3509);
static void yr3514_NoteFree(void * a_p3515);
static void yr3520_NoteFreeDeref(void * a_p3521, rt_int a_p3522);
static rt_int yr3527_DSteps(void * a_p3528, yarr * a_p3529);
static rt_int yr3534_Overlaps(void * a_p3535, void * a_p3536);
static void yr3541_CheckActuals(void * a_p3542, rt_int a_p3543, rt_int a_p3544);
static void yr3549_CheckEffects(void);
static rt_int yr3554_DynIndex(rt_int a_p3555, rt_int a_p3556, rt_int a_p3557);
static rt_int yr3562_RoutineCName(rt_int a_p3563);
static void * yr3568_FormalRep(void * a_p3569);
static rt_int yr3574_ParamCType(void * a_p3575);
static void yr3580_InstallTrap(void * a_p3581, void * a_p3582);
static rt_int yr3587_DeclType(void * a_p3588);
static void yr3593_RoutineHeader(void * a_p3594, rt_int a_p3595);
static void * yr3600_SameSignature(void * a_p3601, void * a_p3602);
static void yr3607_RoutineBody(void * a_p3608);
static void yr3613_DeclareStorage(void * a_p3614, void * a_p3615, rt_int a_p3616);
static void yr3621_DeclareAt(void * a_p3622, void * a_p3623, rt_int a_p3624, rt_int a_p3625);
static void yr3630_InitStorage(void * a_p3631, void * a_p3632, rt_int a_p3633);
static void yr3638_SimpleDecl(void * a_p3639);
static void yr3644_NoteAlphabet(void * a_p3645, void * a_p3646);
static void yr3651_AtLocation(void * a_p3652, void * a_p3653);
static void yr3658_Defer(void * a_p3659, rt_int a_p3660, void * a_p3661, rt_int a_p3662);
static void yr3667_RunDeferred(rt_int a_p3668, rt_int a_p3669);
static void yr3674_ModuleInit(rt_int a_p3675);
static void yr3680_Declarations(void * a_p3681);
static void yr3686_DeclareRoutine(void * a_p3687);
static void * yr3692_Alias(rt_int a_p3693, void * a_p3694);
static void yr3699_AddLits(void * * a_p3700, void * a_p3701, rt_int a_p3702);
static rt_int yr3707_Provides(void * a_p3708, rt_int a_p3709);
static rt_int yr3714_ImportLater(rt_int a_p3715, rt_int a_p3716, void * * a_p3717);
static void * yr3722_OneDecl(void * a_p3723);
static void * yr3728_Lazy(rt_int a_p3729, rt_int a_p3730, void * a_p3731, rt_int a_p3732);
static void yr3737_SetLazy(rt_int a_p3738, void * a_p3739);
static void yr3744_ResolveFrom(void * a_p3745, void * a_p3746);
static void yr3751_ResolveLater(rt_int a_p3752);
static void yr3757_LazyModule(void * a_p3758, void * * a_p3759, rt_int a_p3760);
static void yr3765_ResolveItem(void * a_p3766, void * * a_p3767, rt_int a_p3768);
static void yr3773_DefineAll(void * a_p3774, rt_int a_p3775);
static void * yr3780_ExtendWith(void * a_p3781, void * a_p3782, rt_int a_p3783);
static void yr3788_CompileModule(void * a_p3789);
static void yr3794_DeclareTemplate(void * a_p3795);
static void yr3800_Instantiate(void * a_p3801);
static void yr3806_DeclareProcess(void * a_p3807);
static void yr3812_AwaitProcesses(void);
static void yr3817_Activate(void * a_p3818, void * a_p3819);
static rt_int yr3824_LifeDepth(rt_int a_p3825);
static rt_int yr3830_MonitorPath(void * a_p3831);
static void yr3836_EnterMonitor(void * a_p3837);
static void yr3842_LeaveMonitor(void);
static void yr3847_TerminateStatement(void * a_p3848);
static void yr3853_DeclareSignal(void * a_p3854, rt_int a_p3855);
static void yr3860_DeclareSignalArray(void * a_p3861, rt_int a_p3862);
static void yr3867_DeviceSignal(void * a_p3868, void * a_p3869);
static void * yr3874_Arg(void * a_p3875, rt_int a_p3876);
static void yr3881_NArgs(void * a_p3882, rt_int a_p3883);
static rt_int yr3888_Call1(yarr a_p3890, rt_int a_p3891);
static rt_int yr3896_Addr(rt_int a_p3897);
static void yr3902_StdVar(void * a_p3903, rt_int a_p3904, rt_int * a_p3905, void * * a_p3906);
static void yr3911_NumArg(void * a_p3912, rt_int * a_p3913, void * * a_p3914);
static rt_int yr3919_IntArg(void * a_p3920);
static void yr3925_CodeInsert(void * a_p3926);
static void * yr3931_ManifestScale(void * a_p3932, void * a_p3933);
static void yr3938_StdCall(rt_int a_p3939, void * a_p3940, rt_int a_p3941, rt_int * a_p3942, void * * a_p3943);
static rt_int yr3948_ArgCount(void);
static rt_int yr3953_ArgTxt(rt_int a_p3954);
static void yr3959_ReadArgs(void);
static rt_int yr3964_LibPath(rt_int a_p3965, yarr a_p3967);
static rt_int yr3972_ReadInto(rt_int a_p3973);
static void yr3978_WriteFile(rt_int a_p3979, yR140 a_p3980);
static rt_int yr3985_ReadLibLine(rt_int a_p3986);
static void yr3991_DigitsIn(rt_int a_p3992, rt_int a_p3993);
static void yr3998_TokenText(rt_int a_p3999);
static yR140 yr4004_TokensText(rt_int a_p4005, rt_int a_p4006);
static rt_int yr4011_Fingerprint(yR140 a_p4012);
static rt_int yr4017_TokEq(rt_int a_p4018, rt_int a_p4019, rt_int a_p4020, rt_int a_p4021);
static void yr4026_CheckSynopsis(void * a_p4027, rt_int a_p4028);
static rt_int yr4033_IsSegment(rt_int a_p4034);
static void yr4039_CheckPairing(void * a_p4040, void * a_p4041);
static void yr4046_PairInInput(void);
static void yr4051_LoadSynopsis(rt_int a_p4052, rt_int a_p4053);
static void yr4058_LoadImports(void * a_p4059);
static void * yr4064_LastSegment(void);
static void yr4069_Interface(void);
static void yr4074_Segment(void);
static rt_int yr4079_UsesText(void * a_p4080);
static void yr4085_WriteSegment(rt_int a_p4086);
static void yr4091_LinkProgram(void);
static void yr4096_CheckUse(rt_int a_p4097, rt_int a_p4098);
static rt_int yr4103_SegKey(rt_int a_p4104, rt_int a_p4105);
static rt_int yr4110_HeaderHash(void * a_p4111);
static rt_int yr4116_ParamList(void * a_p4117);
static void yr4122_SegStorage(void * a_p4123, void * a_p4124, rt_int a_p4125);
static void yr4130_SegRoutine(void * a_p4131, void * a_p4132, rt_int a_p4133);
static void yr4138_SegActivation(void * a_p4139, void * a_p4140);
static void yr4145_StdRep(yarr a_p4147, void * a_p4148);
static void yr4153_StdOp(yarr a_p4155, rt_int a_p4156);
static void * yr4161_LitList(yarr a_p4163, yarr a_p4164, yarr a_p4165, rt_int a_p4166);
static void * yr4171_Abstract(rt_int a_p4172, yarr a_p4174);
static void yr4179_Predefine(void);
static void yr4184_Translate(void);
static void yr4189_WriteProgram(void);
static void yr4194_WriteHead(void);
static rt_int yr8864_At(struct yf3550 *up, rt_int a_p8865, rt_int a_p8866);
static rt_int yr8871_Reaches(struct yf3550 *up, rt_int a_p8872, rt_int a_p8873);
static rt_int yr8878_VName(struct yf3550 *up, rt_int a_p8879);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4200 = Y_UNDEF_I;
F.v4200 = INT64_C(0);
{ rt_int hi4205 = 127;
for (rt_int i4204 = 0; i4204 <= hi4205; i4204++) { F.c_4203 = i4204; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_4203)] = Y_DEFI(F.v4200);
((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v4200))] = F.c_4203;
F.v4200 = y_range(y_add(Y_DEFI(F.v4200), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4204 == hi4205) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv4215 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv4215; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv4220 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv4220; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1020_PoolAdd(unsigned char a_p1021) {
struct yf1022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1021 = a_p1021;
v915 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v915))] = F.p1021;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1026_SB(void) {
struct yf1027 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v955 = y_range(y_add(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))] = Y_DEFI(v941);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1031_SC(unsigned char a_p1032) {
struct yf1033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1032 = a_p1032;
v941 = y_range(y_add(Y_DEFI(v941), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v939).p)[y_ix1(v939, Y_DEFI(v941))] = F.p1032;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1037_SA(yarr a_p1039) {
struct yf1040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1039 = a_p1039;
F.lo4239 = y_low(F.p1039, INT64_C(1));
F.hi4240 = y_high(F.p1039, INT64_C(1));
{ rt_int hi4244 = F.hi4240;
for (rt_int i4243 = F.lo4239; i4243 <= hi4244; i4243++) { F.c_4242 = i4243; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_4242)]));
if (i4243 == hi4244) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_ST(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
F.v4248 = Y_UNDEF_I;
if ((F.p1045 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v4248 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]);
while ((Y_DEFI(F.v4248) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1045)]))))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4248))]));
F.v4248 = y_range(y_add(Y_DEFI(F.v4248), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_4263, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_4263, &F.v4265);
F.v4267 = Y_UNDEF_I;
F.v4267 = INT64_C(0);
F.v4270 = Y_UNDEF_I;
F.v4270 = F.p1051;
if ((Y_DEFI(F.v4270) < INT64_C(0))) {
yr1031_SC(45);
F.v4270 = y_range(y_neg(Y_DEFI(F.v4270)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v4267 = y_range(y_add(Y_DEFI(F.v4267), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v4265).p)[y_ix1(F.v4265, Y_DEFI(F.v4267))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v4270), INT64_C(10))), INT64_C(48)))]);
F.v4270 = y_range(y_div(Y_DEFI(F.v4270), INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v4270) == INT64_C(0))) {
goto yl_4274;
}
}
yl_4274: ;
while ((Y_DEFI(F.v4267) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v4265).p)[y_ix1(F.v4265, Y_DEFI(F.v4267))]));
F.v4267 = y_range(y_sub(Y_DEFI(F.v4267), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4289 = Y_UNDEF_I;
F.v4289 = Y_DEFI(((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))]);
v955 = y_range(y_sub(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = y_range(y_sub(Y_DEFI(v941), Y_DEFI(F.v4289)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4300 = y_add(Y_DEFI(F.v4289), INT64_C(1));
F.hi4301 = Y_DEFI(v941);
{ rt_int hi4305 = F.hi4301;
for (rt_int i4304 = F.lo4300; i4304 <= hi4305; i4304++) { F.c_4303 = i4304; Y_TICK();
yr1020_PoolAdd(Y_DEFB(((unsigned char *)(v939).p)[y_ix1(v939, F.c_4303)]));
if (i4304 == hi4305) break;
}}
v941 = Y_DEFI(F.v4289);
{ rt_int rv4306 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4306; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
yr1037_SA(F.p1063);
{ rt_int rv4309 = yr1056_SE();
y_use = F.yu; return rv4309; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v4314 = Y_UNDEF_I;
F.v4314 = INT64_C(0);
F.v4317 = Y_UNDEF_I;
F.v4319 = Y_UNDEF_I;
F.lo4324 = F.p1069;
F.hi4325 = y_sub((y_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi4329 = F.hi4325;
for (rt_int i4328 = F.lo4324; i4328 <= hi4329; i4328++) { F.c_4327 = i4328; Y_TICK();
F.v4314 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v4314), INT64_C(31))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4327)]))]))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4328 == hi4329) break;
}}
for (;;) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4314))]) == INT64_C(0))) {
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = F.p1069;
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = F.p1070;
((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4314))] = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
{ rt_int rv4339 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4339; }
}
F.v4317 = Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4314))]);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4317))]) == F.p1070)) {
F.v4319 = 1;
F.lo4346 = INT64_C(0);
F.hi4347 = y_sub(F.p1070, INT64_C(1));
{ rt_int hi4351 = F.hi4347;
for (rt_int i4350 = F.lo4346; i4350 <= hi4351; i4350++) { F.c_4349 = i4350; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4317))]), F.c_4349))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(F.p1069, F.c_4349))])))) {
F.v4319 = 0;
}
if (i4350 == hi4351) break;
}}
if (Y_DEFI(F.v4319)) {
{ rt_int rv4355 = y_range(Y_DEFI(F.v4317), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4355; }
}
}
F.v4314 = y_range(y_mod((y_add(Y_DEFI(F.v4314), INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_4335: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv4362 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]));
y_use = F.yu; return rv4362; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv4365 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv4365; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4370 = 1;
y_use = F.yu; return rv4370; }
}
if ((!(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]) == Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1090)])))) {
{ rt_int rv4372 = 0;
y_use = F.yu; return rv4372; }
}
F.lo4378 = INT64_C(0);
F.hi4379 = y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]), INT64_C(1));
{ rt_int hi4383 = F.hi4379;
for (rt_int i4382 = F.lo4378; i4382 <= hi4383; i4382++) { F.c_4381 = i4382; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)]), F.c_4381))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)]), F.c_4381))])))) {
{ rt_int rv4387 = 0;
y_use = F.yu; return rv4387; }
}
if (i4382 == hi4383) break;
}}
{ rt_int rv4389 = 1;
y_use = F.yu; return rv4389; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4394 = Y_UNDEF_I;
F.v4394 = INT64_C(0);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1096)]) < (y_add((y_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4404 = 0;
y_use = F.yu; return rv4404; }
}
F.lo4410 = y_low(F.p1098, INT64_C(1));
F.hi4411 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4415 = F.hi4411;
for (rt_int i4414 = F.lo4410; i4414 <= hi4415; i4414++) { F.c_4413 = i4414; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)]), Y_DEFI(F.v4394)))]) == Y_DEFB(((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4413)])))) {
{ rt_int rv4418 = 0;
y_use = F.yu; return rv4418; }
}
F.v4394 = y_range(y_add(Y_DEFI(F.v4394), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4414 == hi4415) break;
}}
{ rt_int rv4422 = 1;
y_use = F.yu; return rv4422; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4429 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)]), F.p1105)), INT64_C(1)))]);
y_use = F.yu; return rv4429; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
F.v4434 = Y_UNDEF_P;
({ F.v4434 = y_new(sizeof(yR135)); y_initu(&yd_136, y_deref(F.v4434)); });
(*(yR135 *)y_deref(Y_DEFP(F.v4434))) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
if ((Y_DEFP(((*F.p1111)).f_head) == ((void *)0))) {
((*F.p1111)).f_head = Y_DEFP(F.v4434);
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1111)).f_tail)))).f_next = Y_DEFP(F.v4434);
}
((*F.p1111)).f_tail = Y_DEFP(F.v4434);
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
if ((Y_DEFP(((*F.p1127)).f_head) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFP(((*F.p1126)).f_head) == ((void *)0))) {
((*F.p1126)).f_head = Y_DEFP(((*F.p1127)).f_head);
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1126)).f_tail)))).f_next = Y_DEFP(((*F.p1127)).f_head);
}
((*F.p1126)).f_tail = Y_DEFP(((*F.p1127)).f_tail);
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
F.v4448 = Y_UNDEF_I;
F.v4448 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]);
while ((Y_DEFI(F.v4448) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1146)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4448))]); y_put_value(&v911, &y_d_byte, &pv); });
F.v4448 = y_range(y_add(Y_DEFI(F.v4448), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4455 = Y_UNDEF_P;
F.v4455 = Y_DEFP((F.p1152).f_head);
while ((!(Y_DEFP(F.v4455) == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v4455)))).f_t));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
F.v4455 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v4455)))).f_next);
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
F.v4461 = Y_UNDEF_I;
v955 = INT64_C(0);
v941 = INT64_C(0);
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1158);
yr1037_SA(y_str(": ", 2));
yr1044_ST(F.p1159);
F.v4461 = yr1056_SE();
yr1145_WriteTxt(Y_DEFI(F.v4461));
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
F.v4471 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1165);
yr1037_SA(y_str(": warning: ", 11));
yr1044_ST(F.p1166);
F.v4471 = yr1056_SE();
yr1171_WriteTo(&v994, Y_DEFI(F.v4471));
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
yr1026_SB();
yr1037_SA(y_str("/* ", 3));
yr1044_ST(Y_DEFI(F.v4471));
yr1037_SA(y_str(" */", 3));
F.v4471 = yr1056_SE();
yr1110_Put(&v992, Y_DEFI(F.v4471));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4481 = Y_UNDEF_I;
F.v4481 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]);
while ((Y_DEFI(F.v4481) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1173)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4481))]); y_put_value(&(*F.p1172), &y_d_byte, &pv); });
F.v4481 = y_range(y_add(Y_DEFI(F.v4481), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v4493 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p1188);
yr1037_SA(F.p1190);
F.v4493 = yr1056_SE();
yr1157_Fail(F.p1187, Y_DEFI(F.v4493));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = y_range(y_add(Y_DEFI(v958), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4497 = Y_DEFI(v958);
y_use = F.yu; return rv4497; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4501 = Y_UNDEF_I;
F.v4501 = yr1195_NewSerial();
yr1026_SB();
yr1037_SA(F.p1202);
yr1050_SI(Y_DEFI(F.v4501));
{ rt_int rv4502 = yr1056_SE();
y_use = F.yu; return rv4502; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1940_InitWords(void) {
struct yf1941 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4505 = Y_UNDEF_I;
F.v4507 = Y_UNDEF_I;
F.v4509 = Y_UNDEF_I;
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
F.v4509 = yr1056_SE();
v922 = INT64_C(0);
F.v4505 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4509))]);
F.lo4526 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4509))]);
F.hi4527 = y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4509))]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4509))]))), INT64_C(1));
{ rt_int hi4531 = F.hi4527;
for (rt_int i4530 = F.lo4526; i4530 <= hi4531; i4530++) { F.c_4529 = i4530; Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4529)]) == 32)) {
F.v4507 = yr1068_Intern(Y_DEFI(F.v4505), y_range(y_sub(F.c_4529, Y_DEFI(F.v4505)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4505 = y_range(y_add(F.c_4529, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4530 == hi4531) break;
}}
if ((!(Y_DEFI(v922) == v621))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1945_ReadSource(void) {
struct yf1946 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4538 = Y_UNDEF_B;
y_open(&v909, y_str("INPUT", 5), 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4538 = g; });
yr1020_PoolAdd(Y_DEFB(F.v4538));
}
v1219 = Y_DEFI(v915);
y_close(&v909);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1950_AddTok(rt_int a_p1951, rt_int a_p1952) {
struct yf1953 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1951 = a_p1951;
F.p1952 = a_p1952;
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = F.p1951;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = F.p1952;
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(v1225);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1957_At(rt_int a_p1958) {
struct yf1959 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1958 = a_p1958;
if ((F.p1958 > Y_DEFI(v1219))) {
{ unsigned char rv4551 = 0;
y_use = F.yu; return rv4551; }
}
{ unsigned char rv4552 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.p1958)]);
y_use = F.yu; return rv4552; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1963_EndsOperand(void) {
struct yf1964 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4555 = Y_UNDEF_I;
F.v4557 = Y_UNDEF_I;
if ((Y_DEFI(v1213) == INT64_C(0))) {
{ rt_int rv4560 = 0;
y_use = F.yu; return rv4560; }
}
F.v4555 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))]);
F.v4557 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))]);
if ((((((((Y_DEFI(F.v4555) == v207)) || ((Y_DEFI(F.v4555) == v216))) || ((Y_DEFI(F.v4555) == v219))) || ((Y_DEFI(F.v4555) == v222))) || ((Y_DEFI(F.v4555) == v225))) || ((Y_DEFI(F.v4555) == v228)))) {
{ rt_int rv4562 = 1;
y_use = F.yu; return rv4562; }
}
if ((Y_DEFI(F.v4555) == v213)) {
{ rt_int rv4563 = ((((Y_DEFI(F.v4557) == v597)) || ((Y_DEFI(F.v4557) == v603))) || ((Y_DEFI(F.v4557) == v618)));
y_use = F.yu; return rv4563; }
}
if ((Y_DEFI(F.v4555) == v210)) {
{ rt_int rv4564 = (Y_DEFI(F.v4557) == v387);
y_use = F.yu; return rv4564; }
}
{ rt_int rv4566 = 0;
y_use = F.yu; return rv4566; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1968_DigitVal(unsigned char a_p1969) {
struct yf1970 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1969 = a_p1969;
if ((((F.p1969 >= 48)) && ((F.p1969 <= 57)))) {
{ rt_int rv4573 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1969)]), INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4573; }
}
if ((((F.p1969 >= 65)) && ((F.p1969 <= 70)))) {
{ rt_int rv4578 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1969)]), INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4578; }
}
{ rt_int rv4580 = INT64_C(99);
y_use = F.yu; return rv4580; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1974_LexError(yarr a_p1976) {
struct yf1977 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1976 = a_p1976;
yr1178_FailS(Y_DEFI(v1225), F.p1976);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1981_LexDigits(rt_int a_p1982, rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1982 = a_p1982;
F.p1983 = a_p1983;
F.v4587 = Y_UNDEF_I;
while ((yr1014_IsDigit(yr1957_At(Y_DEFI(v1222))) || ((F.p1983 && ((yr1968_DigitVal(yr1957_At(Y_DEFI(v1222))) < INT64_C(16))))))) {
Y_TICK();
if ((yr1968_DigitVal(yr1957_At(Y_DEFI(v1222))) >= F.p1982)) {
yr1026_SB();
yr1031_SC(39);
yr1031_SC(yr1957_At(Y_DEFI(v1222)));
yr1037_SA(y_str("' is not a digit of BASE", 24));
yr1050_SI(F.p1982);
yr1037_SA(y_str(" (IV.B)", 7));
F.v4587 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1225), Y_DEFI(F.v4587));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1988_LexNumber(rt_int a_p1989) {
struct yf1990 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1989 = a_p1989;
F.v4597 = Y_UNDEF_I;
F.v4597 = INT64_C(10);
F.v4600 = Y_UNDEF_I;
F.v4602 = Y_UNDEF_I;
F.v4604 = Y_UNDEF_I;
F.v4606 = Y_UNDEF_I;
F.v4608 = Y_UNDEF_I;
F.v4608 = 0;
F.v4611 = Y_UNDEF_I;
F.v4611 = 0;
F.v4614 = Y_UNDEF_I;
F.v4614 = INT64_C(0);
F.v4617 = Y_UNDEF_I;
F.v4617 = INT64_C(0);
F.v4620 = Y_UNDEF_I;
F.v4620 = INT64_C(0);
F.v4623 = Y_UNDEF_I;
F.v4623 = INT64_C(0);
F.v4626 = Y_UNDEF_I;
F.v4626 = INT64_C(0);
F.v4629 = Y_UNDEF_I;
if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
F.v4597 = Y_DEFI(v1228);
F.v4611 = 1;
}
v1228 = INT64_C(0);
F.v4600 = Y_DEFI(v1222);
yr1981_LexDigits(Y_DEFI(F.v4597), Y_DEFI(F.v4611));
F.v4602 = Y_DEFI(v1222);
if ((Y_DEFI(F.v4602) == Y_DEFI(F.v4600))) {
yr1974_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4604 = Y_DEFI(v1222);
F.v4606 = Y_DEFI(v1222);
if ((((yr1957_At(Y_DEFI(v1222)) == 46)) && ((!(yr1957_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4608 = 1;
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4604 = Y_DEFI(v1222);
yr1981_LexDigits(Y_DEFI(F.v4597), Y_DEFI(F.v4611));
F.v4606 = Y_DEFI(v1222);
}
if ((yr1957_At(Y_DEFI(v1222)) == 80)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4623 = INT64_C(1);
if ((((((yr1957_At(Y_DEFI(v1222)) == 45)) || ((yr1957_At(Y_DEFI(v1222)) == 43)))) && yr1014_IsDigit(yr1957_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1957_At(Y_DEFI(v1222)) == 45)) {
F.v4623 = INT64_C(-1);
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4620 = INT64_C(0);
while (yr1014_IsDigit(yr1957_At(Y_DEFI(v1222)))) {
Y_TICK();
if ((Y_DEFI(F.v4620) > INT64_C(1000))) {
yr1974_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4620 = y_range(y_add((y_mul(Y_DEFI(F.v4620), INT64_C(10))), yr1968_DigitVal(yr1957_At(Y_DEFI(v1222)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4620 = y_range(y_mul(Y_DEFI(F.v4620), Y_DEFI(F.v4623)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4614 = INT64_C(0);
F.v4626 = y_range(y_sub(Y_DEFI(F.v4606), Y_DEFI(F.v4604)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4667 = Y_DEFI(F.v4600);
F.hi4668 = y_sub(Y_DEFI(F.v4606), INT64_C(1));
{ rt_int hi4672 = F.hi4668;
for (rt_int i4671 = F.lo4667; i4671 <= hi4672; i4671++) { F.c_4670 = i4671; Y_TICK();
if ((((F.c_4670 < Y_DEFI(F.v4602))) || ((F.c_4670 >= Y_DEFI(F.v4604))))) {
F.v4617 = yr1968_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4670)]));
if ((Y_DEFI(F.v4614) > (y_div((y_sub(v906, Y_DEFI(F.v4617))), Y_DEFI(F.v4597))))) {
yr1974_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4614 = y_range(y_add((y_mul(Y_DEFI(F.v4614), Y_DEFI(F.v4597))), Y_DEFI(F.v4617)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4671 == hi4672) break;
}}
if (F.p1989) {
F.v4614 = y_range(y_neg(Y_DEFI(F.v4614)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(v1246) >= INT64_C(200000))) {
yr1974_LexError(y_str("too many fixed-point literals", 29));
}
v1246 = y_range(y_add(Y_DEFI(v1246), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(v1246))] = Y_DEFI(F.v4614);
((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(v1246))] = Y_DEFI(F.v4597);
((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(v1246))] = y_range(y_sub(Y_DEFI(F.v4620), Y_DEFI(F.v4626)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1950_AddTok(v219, Y_DEFI(v1246));
y_use = F.yu; return;
}
if (Y_DEFI(F.v4608)) {
if ((!(Y_DEFI(F.v4597) == INT64_C(10)))) {
yr1974_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1957_At(Y_DEFI(v1222)) == 69)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1957_At(Y_DEFI(v1222)) == 45)) || ((yr1957_At(Y_DEFI(v1222)) == 43)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1014_IsDigit(yr1957_At(Y_DEFI(v1222)))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1026_SB();
if (F.p1989) {
yr1037_SA(y_str("-", 1));
}
F.lo4699 = Y_DEFI(F.v4600);
F.hi4700 = y_sub(Y_DEFI(v1222), INT64_C(1));
{ rt_int hi4704 = F.hi4700;
for (rt_int i4703 = F.lo4699; i4703 <= hi4704; i4703++) { F.c_4702 = i4703; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4702)]));
if (i4703 == hi4704) break;
}}
F.v4629 = yr1056_SE();
yr1950_AddTok(v222, Y_DEFI(F.v4629));
y_use = F.yu; return;
}
F.v4614 = INT64_C(0);
F.lo4709 = Y_DEFI(F.v4600);
F.hi4710 = y_sub(Y_DEFI(F.v4602), INT64_C(1));
{ rt_int hi4714 = F.hi4710;
for (rt_int i4713 = F.lo4709; i4713 <= hi4714; i4713++) { F.c_4712 = i4713; Y_TICK();
F.v4617 = yr1968_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4712)]));
if ((Y_DEFI(F.v4614) > (y_div((y_sub(v906, Y_DEFI(F.v4617))), Y_DEFI(F.v4597))))) {
yr1974_LexError(y_str("integer literal too large", 25));
}
F.v4614 = y_range(y_add((y_mul(Y_DEFI(F.v4614), Y_DEFI(F.v4597))), Y_DEFI(F.v4617)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4713 == hi4714) break;
}}
if (F.p1989) {
F.v4614 = y_range(y_neg(Y_DEFI(F.v4614)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1950_AddTok(v216, Y_DEFI(F.v4614));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1994_LexString(void) {
struct yf1995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4723 = Y_UNDEF_I;
F.v4725 = Y_UNDEF_I;
F.v4727 = Y_UNDEF_I;
F.v4729 = Y_UNDEF_I;
yr1026_SB();
for (;;) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1957_At(Y_DEFI(v1222)) == 34))) {
Y_TICK();
if ((((yr1957_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
v927 = 0;
yr1974_LexError(y_str("a string must close on its line", 31));
}
yr1031_SC(yr1957_At(Y_DEFI(v1222)));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4725 = Y_DEFI(v1222);
F.v4727 = INT64_C(0);
F.v4729 = 1;
while (Y_DEFI(F.v4729)) {
Y_TICK();
if (((((yr1957_At(Y_DEFI(F.v4725)) == 32)) || ((yr1957_At(Y_DEFI(F.v4725)) == 9))) || ((yr1957_At(Y_DEFI(F.v4725)) == 13)))) {
F.v4725 = y_range(y_add(Y_DEFI(F.v4725), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1957_At(Y_DEFI(F.v4725)) == 10)) {
F.v4727 = y_range(y_add(Y_DEFI(F.v4727), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4725 = y_range(y_add(Y_DEFI(F.v4725), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4729 = 0;
}
}
if ((!(yr1957_At(Y_DEFI(F.v4725)) == 34))) {
goto yl_4730;
}
v1225 = y_range(y_add(Y_DEFI(v1225), Y_DEFI(F.v4727)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = Y_DEFI(F.v4725);
}
yl_4730: ;
F.v4723 = yr1056_SE();
yr1950_AddTok(v228, Y_DEFI(F.v4723));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1999_Lex(void) {
struct yf2000 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4758 = Y_UNDEF_B;
F.v4760 = Y_UNDEF_I;
F.v4762 = Y_UNDEF_I;
F.v4764 = Y_UNDEF_I;
F.v4766 = Y_UNDEF_I;
F.v4768 = Y_UNDEF_I;
F.v4770 = Y_UNDEF_I;
F.v4772 = Y_UNDEF_I;
v1222 = Y_DEFI(v1216);
while ((Y_DEFI(v1222) <= Y_DEFI(v1219))) {
Y_TICK();
F.v4758 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v1222))]);
if ((Y_DEFB(F.v4758) == 10)) {
v1225 = y_range(y_add(Y_DEFI(v1225), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((Y_DEFB(F.v4758) == 32)) || ((Y_DEFB(F.v4758) == 9))) || ((Y_DEFB(F.v4758) == 13))) || ((Y_DEFB(F.v4758) == 12)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFB(F.v4758) == 40)) && ((yr1957_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1957_At(Y_DEFI(v1222)) == 42)) && ((yr1957_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1957_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
yr1974_LexError(y_str("a comment must close on its line", 32));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1014_IsDigit(Y_DEFB(F.v4758)) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1968_DigitVal(Y_DEFB(F.v4758)) < INT64_C(16))))))) {
yr1988_LexNumber(0);
} else if (((((((Y_DEFB(F.v4758) == 45)) || ((Y_DEFB(F.v4758) == 43)))) && (!yr1963_EndsOperand())) && ((yr1014_IsDigit(yr1957_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1968_DigitVal(yr1957_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1988_LexNumber((Y_DEFB(F.v4758) == 45));
} else if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
yr1974_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1008_IsLetter(Y_DEFB(F.v4758))) {
F.v4760 = Y_DEFI(v1222);
while ((yr1008_IsLetter(yr1957_At(Y_DEFI(v1222))) || yr1014_IsDigit(yr1957_At(Y_DEFI(v1222))))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4768 = yr1068_Intern(Y_DEFI(F.v4760), y_range(y_sub(Y_DEFI(v1222), Y_DEFI(F.v4760)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v4768) == v252)) {
v1228 = INT64_C(2);
} else if ((Y_DEFI(F.v4768) == v255)) {
v1228 = INT64_C(8);
} else if ((Y_DEFI(F.v4768) == v258)) {
v1228 = INT64_C(10);
} else if ((Y_DEFI(F.v4768) == v261)) {
v1228 = INT64_C(16);
} else if ((Y_DEFI(F.v4768) <= v492)) {
yr1950_AddTok(v210, Y_DEFI(F.v4768));
} else {
yr1950_AddTok(v207, Y_DEFI(F.v4768));
}
} else if ((Y_DEFB(F.v4758) == 39)) {
F.v4760 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4762 = Y_DEFI(F.v4760);
while ((!(yr1957_At(Y_DEFI(F.v4762)) == 39))) {
Y_TICK();
if (((((yr1957_At(Y_DEFI(F.v4762)) == 10)) || ((yr1957_At(Y_DEFI(F.v4762)) == 34))) || ((Y_DEFI(F.v4762) > Y_DEFI(v1219))))) {
yr1974_LexError(y_str("bad character literal", 21));
}
F.v4762 = y_range(y_add(Y_DEFI(F.v4762), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4762) == Y_DEFI(F.v4760))) {
yr1974_LexError(y_str("empty character literal", 23));
}
F.v4768 = yr1068_Intern(Y_DEFI(F.v4760), y_range(y_sub(Y_DEFI(F.v4762), Y_DEFI(F.v4760)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1950_AddTok(v225, Y_DEFI(F.v4768));
v1222 = y_range(y_add(Y_DEFI(F.v4762), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v4758) == 34)) {
yr1994_LexString();
} else {
F.v4764 = INT64_C(0);
F.v4762 = y_range(y_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v4764) == INT64_C(0))) && ((Y_DEFI(F.v4762) <= v621)))) {
Y_TICK();
F.v4766 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4762))]);
F.v4772 = 1;
F.lo4847 = INT64_C(0);
F.hi4848 = y_sub(Y_DEFI(F.v4766), INT64_C(1));
{ rt_int hi4852 = F.hi4848;
for (rt_int i4851 = F.lo4847; i4851 <= hi4852; i4851++) { F.c_4850 = i4851; Y_TICK();
if ((!(yr1957_At(y_range(y_add(Y_DEFI(v1222), F.c_4850), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4762))]), F.c_4850))])))) {
F.v4772 = 0;
}
if (i4851 == hi4852) break;
}}
if (Y_DEFI(F.v4772)) {
F.v4764 = Y_DEFI(F.v4762);
}
F.v4762 = y_range(y_add(Y_DEFI(F.v4762), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4764) == INT64_C(0))) {
yr1974_LexError(y_str("a character that is not in the language", 39));
}
yr1950_AddTok(v213, Y_DEFI(F.v4764));
v1222 = y_range(y_add(Y_DEFI(v1222), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4764))])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1950_AddTok(v204, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2004_NewNode(rt_int a_p2005, rt_int a_p2006) {
struct yf2007 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2005 = a_p2005;
F.p2006 = a_p2006;
F.v4866 = Y_UNDEF_P;
({ F.v4866 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v4866)); });
(*(yR105 *)y_deref(Y_DEFP(F.v4866))) = ((yR105){ .f_kind = F.p2005, .f_line = F.p2006, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0), .f_t0 = INT64_C(0), .f_t1 = INT64_C(0) });
{ void * rv4873 = Y_DEFP(F.v4866);
y_use = F.yu; return rv4873; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2011_Link(void * * a_p2012, void * * a_p2013, void * a_p2014) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2012 = a_p2012;
F.p2013 = a_p2013;
F.p2014 = a_p2014;
if ((Y_DEFP((*F.p2012)) == ((void *)0))) {
(*F.p2012) = F.p2014;
} else {
((*(yR105 *)y_deref(Y_DEFP((*F.p2013))))).f_next = F.p2014;
}
(*F.p2013) = F.p2014;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2019_Count(void * a_p2020) {
struct yf2021 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2020 = a_p2020;
F.v4881 = Y_UNDEF_I;
F.v4881 = INT64_C(0);
F.v4884 = Y_UNDEF_P;
F.v4884 = F.p2020;
while ((!(Y_DEFP(F.v4884) == ((void *)0)))) {
Y_TICK();
F.v4881 = y_range(y_add(Y_DEFI(F.v4881), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4884 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4884)))).f_next);
}
{ rt_int rv4887 = Y_DEFI(F.v4881);
y_use = F.yu; return rv4887; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2025_TK(void) {
struct yf2026 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4889 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]);
y_use = F.yu; return rv4889; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2030_TV(void) {
struct yf2031 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4891 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1249))]);
y_use = F.yu; return rv4891; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2035_TLn(void) {
struct yf2036 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4893 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1249))]);
y_use = F.yu; return rv4893; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2040_IsAt(rt_int a_p2041, rt_int a_p2042) {
struct yf2043 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2041 = a_p2041;
F.p2042 = a_p2042;
F.v4898 = Y_UNDEF_I;
F.v4898 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2041))]);
{ rt_int rv4901 = (((((Y_DEFI(F.v4898) == v210)) || ((Y_DEFI(F.v4898) == v213)))) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2041))]) == F.p2042)));
y_use = F.yu; return rv4901; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2047_Is(rt_int a_p2048) {
struct yf2049 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2048 = a_p2048;
{ rt_int rv4905 = yr2040_IsAt(INT64_C(0), F.p2048);
y_use = F.yu; return rv4905; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2053_IsIdAt(rt_int a_p2054) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2054 = a_p2054;
{ rt_int rv4909 = (Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2054))]) == v207);
y_use = F.yu; return rv4909; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2059_Skip(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]) == v204))) {
v1249 = y_range(y_add(Y_DEFI(v1249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2064_Accept(rt_int a_p2065) {
struct yf2066 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2065 = a_p2065;
if (yr2047_Is(F.p2065)) {
yr2059_Skip();
{ rt_int rv4916 = 1;
y_use = F.yu; return rv4916; }
}
{ rt_int rv4918 = 0;
y_use = F.yu; return rv4918; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2070_TokText(void) {
struct yf2071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4921 = Y_UNDEF_I;
F.v4921 = yr2025_TK();
if ((((((Y_DEFI(F.v4921) == v207)) || ((Y_DEFI(F.v4921) == v210))) || ((Y_DEFI(F.v4921) == v213))) || ((Y_DEFI(F.v4921) == v225)))) {
{ rt_int rv4922 = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4922; }
}
if ((Y_DEFI(F.v4921) == v204)) {
{ rt_int rv4924 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv4924; }
}
if ((Y_DEFI(F.v4921) == v216)) {
yr1026_SB();
yr1050_SI(yr2030_TV());
{ rt_int rv4925 = yr1056_SE();
y_use = F.yu; return rv4925; }
}
{ rt_int rv4927 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv4927; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2075_Expect(rt_int a_p2076) {
struct yf2077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2076 = a_p2076;
F.v4931 = Y_UNDEF_I;
if ((!yr2064_Accept(F.p2076))) {
yr1026_SB();
yr1037_SA(y_str("expected ", 9));
yr1044_ST(y_range(F.p2076, INT64_C(0), INT64_C(4000000)));
yr1037_SA(y_str(", found ", 8));
yr1044_ST(yr2070_TokText());
F.v4931 = yr1056_SE();
yr1157_Fail(yr2035_TLn(), Y_DEFI(F.v4931));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2081_Ident(void) {
struct yf2082 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4936 = Y_UNDEF_I;
if ((!(yr2025_TK() == v207))) {
yr1026_SB();
yr1037_SA(y_str("expected an identifier, found ", 30));
yr1044_ST(yr2070_TokText());
F.v4936 = yr1056_SE();
yr1157_Fail(yr2035_TLn(), Y_DEFI(F.v4936));
}
F.v4936 = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
yr2059_Skip();
{ rt_int rv4938 = Y_DEFI(F.v4936);
y_use = F.yu; return rv4938; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2086_CloseName(rt_int a_p2087, rt_int a_p2088) {
struct yf2089 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2087 = a_p2087;
F.p2088 = a_p2088;
F.v4943 = Y_UNDEF_I;
if (((((yr2025_TK() == v207)) || ((yr2025_TK() == v210))) || ((yr2025_TK() == v213)))) {
F.v4943 = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
if ((Y_DEFI(F.v4943) == F.p2087)) {
yr2059_Skip();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p2088, F.p2087, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2093_ExtendedId(void) {
struct yf2094 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4947 = Y_UNDEF_I;
F.v4947 = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
if ((yr2025_TK() == v207)) {
yr2059_Skip();
{ rt_int rv4948 = Y_DEFI(F.v4947);
y_use = F.yu; return rv4948; }
}
if ((((yr2025_TK() == v210)) && (((((((((Y_DEFI(F.v4947) == v390)) || ((Y_DEFI(F.v4947) == v237))) || ((Y_DEFI(F.v4947) == v399))) || ((Y_DEFI(F.v4947) == v276))) || ((Y_DEFI(F.v4947) == v378))) || ((Y_DEFI(F.v4947) == v489))) || ((Y_DEFI(F.v4947) == v360)))))) {
yr2059_Skip();
{ rt_int rv4949 = Y_DEFI(F.v4947);
y_use = F.yu; return rv4949; }
}
if (((((((((((((yr2025_TK() == v213)) && ((!(Y_DEFI(F.v4947) == v594)))) && ((!(Y_DEFI(F.v4947) == v597)))) && ((!(Y_DEFI(F.v4947) == v600)))) && ((!(Y_DEFI(F.v4947) == v603)))) && ((!(Y_DEFI(F.v4947) == v606)))) && ((!(Y_DEFI(F.v4947) == v609)))) && ((!(Y_DEFI(F.v4947) == v612)))) && ((!(Y_DEFI(F.v4947) == v615)))) && ((!(Y_DEFI(F.v4947) == v537)))) && ((!(Y_DEFI(F.v4947) == v534))))) {
yr2059_Skip();
{ rt_int rv4950 = Y_DEFI(F.v4947);
y_use = F.yu; return rv4950; }
}
yr1178_FailS(yr2035_TLn(), y_str("expected a name", 15));
{ rt_int rv4953 = INT64_C(0);
y_use = F.yu; return rv4953; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2098_IsLabel(rt_int a_p2099) {
struct yf2100 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2099 = a_p2099;
F.v4957 = Y_UNDEF_P;
F.v4957 = Y_DEFP(v1252);
while ((!(Y_DEFP(F.v4957) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4957)))).f_name) == F.p2099)) {
{ rt_int rv4959 = 1;
y_use = F.yu; return rv4959; }
}
F.v4957 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4957)))).f_next);
}
{ rt_int rv4961 = 0;
y_use = F.yu; return rv4961; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2104_ImportItem(void) {
struct yf2105 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4964 = Y_UNDEF_P;
F.v4964 = yr2004_NewNode(v627, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4964)))).f_name = yr2093_ExtendedId();
if ((yr2053_IsIdAt(INT64_C(0)) && ((yr2030_TV() == Y_DEFI(v1254))))) {
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4964)))).f_text = yr2081_Ident();
}
if (yr2064_Accept(v243)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4964)))).f_ival = yr2093_ExtendedId();
}
{ void * rv4966 = Y_DEFP(F.v4964);
y_use = F.yu; return rv4966; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2109_ParseModule(void) {
struct yf2110 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4969 = Y_UNDEF_P;
F.v4969 = yr2004_NewNode(v624, yr2035_TLn());
F.v4971 = Y_UNDEF_P;
F.v4971 = ((void *)0);
F.v4973 = Y_UNDEF_P;
F.v4973 = ((void *)0);
F.v4975 = Y_UNDEF_P;
F.v4975 = ((void *)0);
F.v4977 = Y_UNDEF_I;
if (yr2064_Accept(v384)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_flag = INT64_C(1);
} else {
yr2075_Expect(v381);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_name = yr2081_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_t0 = Y_DEFI(v1249);
while (yr2064_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v4971 = yr2104_ImportItem();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_a, &F.v4973, Y_DEFP(F.v4971));
if ((!yr2064_Accept(v606))) {
goto yl_4979;
}
}
yl_4979: ;
yr2075_Expect(v609);
}
while (yr2064_Accept(v336)) {
Y_TICK();
F.v4977 = INT64_C(0);
if ((((yr2047_Is(v396) || yr2047_Is(v474)) || yr2047_Is(v429)) || yr2047_Is(v483))) {
F.v4977 = yr2030_TV();
yr2059_Skip();
}
for (;;) {
Y_TICK();
F.v4971 = yr2104_ImportItem();
((*(yR105 *)y_deref(Y_DEFP(F.v4971)))).f_flag = Y_DEFI(F.v4977);
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_b, &F.v4975, Y_DEFP(F.v4971));
if ((!yr2064_Accept(v606))) {
goto yl_4981;
}
}
yl_4981: ;
yr2075_Expect(v609);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_c = yr2119_ParseBlock();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_flag) == INT64_C(1))) {
yr2075_Expect(v309);
} else {
yr2075_Expect(v306);
}
yr2086_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4969)))).f_line));
{ void * rv4983 = Y_DEFP(F.v4969);
y_use = F.yu; return rv4983; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2114_IsDeclWord(void) {
struct yf2115 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4986 = Y_UNDEF_I;
if ((!(yr2025_TK() == v210))) {
{ rt_int rv4988 = 0;
y_use = F.yu; return rv4988; }
}
F.v4986 = yr2030_TV();
{ rt_int rv4989 = (((((((((((((Y_DEFI(F.v4986) == v270)) || ((Y_DEFI(F.v4986) == v483))) || ((Y_DEFI(F.v4986) == v372))) || ((Y_DEFI(F.v4986) == v477))) || ((Y_DEFI(F.v4986) == v438))) || ((Y_DEFI(F.v4986) == v348))) || ((Y_DEFI(F.v4986) == v420))) || ((Y_DEFI(F.v4986) == v381))) || ((Y_DEFI(F.v4986) == v384))) || ((Y_DEFI(F.v4986) == v465))) || ((Y_DEFI(F.v4986) == v366))) || ((Y_DEFI(F.v4986) == v423)));
y_use = F.yu; return rv4989; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2119_ParseBlock(void) {
struct yf2120 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4992 = Y_UNDEF_P;
F.v4992 = yr2004_NewNode(v630, yr2035_TLn());
F.v4994 = Y_UNDEF_P;
F.v4994 = ((void *)0);
F.v4996 = Y_UNDEF_P;
F.v4996 = Y_DEFP(v1252);
F.v4998 = Y_UNDEF_P;
while (yr2114_IsDeclWord()) {
Y_TICK();
yr2146_ParseDeclGroup(&((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_a, &F.v4994);
while (yr2064_Accept(v609)) {
Y_TICK();
}
}
if (yr2047_Is(v330)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_b = yr2124_ParseHandler();
F.v4998 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_b);
if (yr2064_Accept(v609)) {
}
}
((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_c = yr2215_ParseStatements(1);
v1252 = Y_DEFP(F.v4996);
{ void * rv5000 = Y_DEFP(F.v4992);
y_use = F.yu; return rv5000; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2124_ParseHandler(void) {
struct yf2125 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5003 = Y_UNDEF_P;
F.v5003 = yr2004_NewNode(v633, yr2035_TLn());
F.v5005 = Y_UNDEF_P;
F.v5005 = ((void *)0);
F.v5007 = Y_UNDEF_P;
F.v5007 = ((void *)0);
F.v5009 = Y_UNDEF_P;
F.v5009 = ((void *)0);
F.v5011 = Y_UNDEF_P;
F.v5011 = ((void *)0);
yr2075_Expect(v330);
while (yr2064_Accept(v267)) {
Y_TICK();
F.v5005 = yr2004_NewNode(v636, yr2035_TLn());
F.v5011 = ((void *)0);
for (;;) {
Y_TICK();
F.v5009 = yr2004_NewNode(v669, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5009)))).f_name = yr2081_Ident();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5005)))).f_a, &F.v5011, Y_DEFP(F.v5009));
if ((!yr2064_Accept(v606))) {
goto yl_5012;
}
}
yl_5012: ;
yr2075_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5005)))).f_b = yr2215_ParseStatements(0);
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5003)))).f_a, &F.v5007, Y_DEFP(F.v5005));
}
if (yr2064_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5003)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5003)))).f_b = yr2215_ParseStatements(0);
}
yr2075_Expect(v291);
{ void * rv5016 = Y_DEFP(F.v5003);
y_use = F.yu; return rv5016; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2129_ParseNames(void) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5019 = Y_UNDEF_P;
F.v5019 = ((void *)0);
F.v5021 = Y_UNDEF_P;
F.v5021 = ((void *)0);
F.v5023 = Y_UNDEF_P;
F.v5023 = ((void *)0);
for (;;) {
Y_TICK();
F.v5023 = yr2004_NewNode(v669, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5023)))).f_name = yr2081_Ident();
if (yr2064_Accept(v249)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5023)))).f_a = yr2277_ParseExpr();
}
yr2011_Link(&F.v5019, &F.v5021, Y_DEFP(F.v5023));
if ((!yr2064_Accept(v606))) {
goto yl_5024;
}
}
yl_5024: ;
{ void * rv5025 = Y_DEFP(F.v5019);
y_use = F.yu; return rv5025; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2134_SimpleEntry(rt_int a_p2135) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2135 = a_p2135;
F.v5029 = Y_UNDEF_P;
F.v5031 = Y_UNDEF_I;
F.v5031 = Y_DEFI(v1249);
if ((F.p2135 == v270)) {
F.v5029 = yr2004_NewNode(v639, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_a = yr2129_ParseNames();
yr2075_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_b = yr2180_ParseRep();
yr2075_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_c = yr2277_ParseExpr();
} else if ((F.p2135 == v483)) {
F.v5029 = yr2004_NewNode(v642, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_a = yr2129_ParseNames();
yr2075_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_b = yr2180_ParseRep();
if (yr2064_Accept(v531)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_c = yr2277_ParseExpr();
}
} else if ((F.p2135 == v477)) {
F.v5029 = yr2004_NewNode(v648, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_name = yr2081_Ident();
yr2075_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_b = yr2200_ParseConcrete1();
} else {
F.v5029 = yr2004_NewNode(v651, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_name = yr2081_Ident();
yr2075_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_b = yr2180_ParseRep();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_t0 = Y_DEFI(F.v5031);
((*(yR105 *)y_deref(Y_DEFP(F.v5029)))).f_t1 = Y_DEFI(v1249);
{ void * rv5032 = Y_DEFP(F.v5029);
y_use = F.yu; return rv5032; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2140_Continues(rt_int a_p2141) {
struct yf2142 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2141 = a_p2141;
if ((!((yr2047_Is(v609) && yr2053_IsIdAt(INT64_C(1)))))) {
{ rt_int rv5037 = 0;
y_use = F.yu; return rv5037; }
}
if (yr2098_IsLabel(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(1)))]), INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv5041 = 0;
y_use = F.yu; return rv5041; }
}
if ((((F.p2141 == v270)) || ((F.p2141 == v483)))) {
{ rt_int rv5045 = ((yr2040_IsAt(INT64_C(2), v606) || yr2040_IsAt(INT64_C(2), v612)) || yr2040_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv5045; }
}
{ rt_int rv5047 = yr2040_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv5047; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2146_ParseDeclGroup(void * * a_p2147, void * * a_p2148) {
struct yf2149 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2147 = a_p2147;
F.p2148 = a_p2148;
F.v5052 = Y_UNDEF_I;
F.v5052 = yr2030_TV();
F.v5054 = Y_UNDEF_P;
F.v5056 = Y_UNDEF_P;
F.v5058 = Y_UNDEF_P;
if ((((((Y_DEFI(F.v5052) == v270)) || ((Y_DEFI(F.v5052) == v483))) || ((Y_DEFI(F.v5052) == v477))) || ((Y_DEFI(F.v5052) == v438)))) {
yr2059_Skip();
yr2011_Link(&(*F.p2147), &(*F.p2148), yr2134_SimpleEntry(Y_DEFI(F.v5052)));
while (yr2140_Continues(Y_DEFI(F.v5052))) {
Y_TICK();
yr2059_Skip();
yr2011_Link(&(*F.p2147), &(*F.p2148), yr2134_SimpleEntry(Y_DEFI(F.v5052)));
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v5052) == v372)) {
F.v5054 = yr2004_NewNode(v645, yr2035_TLn());
yr2059_Skip();
F.v5058 = ((void *)0);
for (;;) {
Y_TICK();
F.v5056 = yr2004_NewNode(v669, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5056)))).f_name = yr2081_Ident();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_a, &F.v5058, Y_DEFP(F.v5056));
if ((!yr2064_Accept(v606))) {
goto yl_5059;
}
}
yl_5059: ;
F.v5056 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_a);
while ((!(Y_DEFP(F.v5056) == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_b = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5056)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_b)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5056)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_b)))).f_next = Y_DEFP(v1252);
v1252 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_b);
F.v5056 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5056)))).f_next);
}
((*(yR105 *)y_deref(Y_DEFP(F.v5054)))).f_b = ((void *)0);
yr2011_Link(&(*F.p2147), &(*F.p2148), Y_DEFP(F.v5054));
y_use = F.yu; return;
}
yr2011_Link(&(*F.p2147), &(*F.p2148), yr2153_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2153_ParseDecl(void) {
struct yf2154 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5062 = Y_UNDEF_P;
F.v5064 = Y_UNDEF_I;
F.v5064 = Y_DEFI(v1249);
F.v5062 = yr2158_ParseDecl1();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5062)))).f_kind) == v624))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5062)))).f_t0 = Y_DEFI(F.v5064);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5062)))).f_t1) == INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5062)))).f_t1 = Y_DEFI(v1249);
}
}
{ void * rv5066 = Y_DEFP(F.v5062);
y_use = F.yu; return rv5066; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2158_ParseDecl1(void) {
struct yf2159 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5069 = Y_UNDEF_P;
F.v5071 = Y_UNDEF_P;
F.v5073 = Y_UNDEF_P;
F.v5075 = Y_UNDEF_I;
F.v5075 = yr2030_TV();
F.v5077 = Y_UNDEF_I;
F.v5077 = yr2035_TLn();
F.v5079 = Y_UNDEF_I;
if ((((Y_DEFI(F.v5075) == v348)) || ((Y_DEFI(F.v5075) == v420)))) {
F.v5069 = yr2004_NewNode(v654, Y_DEFI(F.v5077));
yr2059_Skip();
if ((Y_DEFI(F.v5075) == v348)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_flag = INT64_C(1);
}
if ((yr2047_Is(v339) || yr2047_Is(v435))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_ival = yr2030_TV();
yr2059_Skip();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name = yr2093_ExtendedId();
yr2163_ParseFormals(Y_DEFP(F.v5069));
if (yr2064_Accept(v363)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_e = yr2004_NewNode(v669, Y_DEFI(F.v5077));
}
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_c = yr2119_ParseBlock();
if ((Y_DEFI(F.v5075) == v348)) {
yr2075_Expect(v297);
} else {
yr2075_Expect(v312);
}
yr2086_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name), Y_DEFI(F.v5077));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_e) == ((void *)0)))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_t1 = Y_DEFI(v1249);
}
{ void * rv5081 = Y_DEFP(F.v5069);
y_use = F.yu; return rv5081; }
}
if ((((Y_DEFI(F.v5075) == v381)) || ((Y_DEFI(F.v5075) == v384)))) {
{ void * rv5082 = yr2109_ParseModule();
y_use = F.yu; return rv5082; }
}
if ((Y_DEFI(F.v5075) == v465)) {
F.v5069 = yr2004_NewNode(v660, Y_DEFI(F.v5077));
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name = yr2081_Ident();
yr2075_Expect(v594);
F.v5073 = ((void *)0);
for (;;) {
Y_TICK();
F.v5071 = yr2004_NewNode(v669, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5071)))).f_name = yr2081_Ident();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_a, &F.v5073, Y_DEFP(F.v5071));
if ((!yr2064_Accept(v606))) {
goto yl_5083;
}
}
yl_5083: ;
yr2075_Expect(v597);
F.v5079 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_b = yr2109_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_ival = Y_DEFI(F.v5079);
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_flag = Y_DEFI(v1249);
yr2075_Expect(v324);
yr2086_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name), Y_DEFI(F.v5077));
{ void * rv5084 = Y_DEFP(F.v5069);
y_use = F.yu; return rv5084; }
}
if ((Y_DEFI(F.v5075) == v366)) {
F.v5069 = yr2004_NewNode(v663, Y_DEFI(F.v5077));
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name = yr2081_Ident();
yr2075_Expect(v594);
F.v5073 = ((void *)0);
for (;;) {
Y_TICK();
F.v5071 = yr2004_NewNode(v669, yr2035_TLn());
if ((yr2025_TK() == v216)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5071)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5071)))).f_ival = yr2030_TV();
yr2059_Skip();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v5071)))).f_name = yr2093_ExtendedId();
}
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_a, &F.v5073, Y_DEFP(F.v5071));
if ((!yr2064_Accept(v606))) {
goto yl_5085;
}
}
yl_5085: ;
yr2075_Expect(v597);
{ void * rv5087 = Y_DEFP(F.v5069);
y_use = F.yu; return rv5087; }
}
if ((Y_DEFI(F.v5075) == v423)) {
F.v5069 = yr2004_NewNode(v666, Y_DEFI(F.v5077));
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name = yr2081_Ident();
yr2163_ParseFormals(Y_DEFP(F.v5069));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_b) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(F.v5077), y_str("a process returns no value", 26));
}
if (yr2064_Accept(v417)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_d = yr2277_ParseExpr();
}
if (yr2064_Accept(v369)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_e = yr2277_ParseExpr();
}
if (yr2064_Accept(v459)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_x = yr2277_ParseExpr();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_c = yr2119_ParseBlock();
yr2075_Expect(v315);
yr2086_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_name), Y_DEFI(F.v5077));
{ void * rv5089 = Y_DEFP(F.v5069);
y_use = F.yu; return rv5089; }
}
yr1178_FailS(Y_DEFI(F.v5077), y_str("expected a declaration", 22));
{ void * rv5091 = ((void *)0);
y_use = F.yu; return rv5091; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2163_ParseFormals(void * a_p2164) {
struct yf2165 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2164 = a_p2164;
F.v5095 = Y_UNDEF_P;
F.v5095 = ((void *)0);
F.v5097 = Y_UNDEF_P;
F.v5097 = ((void *)0);
F.v5099 = Y_UNDEF_I;
if (yr2064_Accept(v444)) {
((*(yR105 *)y_deref(F.p2164))).f_b = yr2180_ParseRep();
}
yr2075_Expect(v594);
while ((!yr2047_Is(v597))) {
Y_TICK();
if (yr2064_Accept(v270)) {
F.v5099 = v897;
} else if (yr2064_Accept(v405)) {
F.v5099 = v900;
} else if (yr2064_Accept(v483)) {
F.v5099 = v903;
} else {
yr1178_FailS(yr2035_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v5095 = yr2004_NewNode(v657, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5095)))).f_ival = Y_DEFI(F.v5099);
((*(yR105 *)y_deref(Y_DEFP(F.v5095)))).f_a = yr2129_ParseNames();
yr2075_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5095)))).f_b = yr2169_ParseFormalRep();
yr2011_Link(&((*(yR105 *)y_deref(F.p2164))).f_a, &F.v5097, Y_DEFP(F.v5095));
if ((!((((yr2047_Is(v609) || yr2047_Is(v606))) && yr2053_IsIdAt(INT64_C(1)))))) {
goto yl_5101;
}
yr2059_Skip();
}
yl_5101: ;
if ((!yr2064_Accept(v609))) {
if ((!yr2064_Accept(v606))) {
yr2075_Expect(v597);
y_use = F.yu; return;
}
}
}
yr2075_Expect(v597);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2169_ParseFormalRep(void) {
struct yf2170 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5105 = Y_UNDEF_P;
if (((yr2047_Is(v240) && yr2040_IsAt(INT64_C(1), v594)) && ((yr2040_IsAt(INT64_C(3), v273) || ((yr2053_IsIdAt(INT64_C(3)) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(3)))]) == Y_DEFI(v1257))))))))) {
F.v5105 = yr2004_NewNode(v696, yr2035_TLn());
yr2059_Skip();
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5105)))).f_a = yr2277_ParseExpr();
yr2059_Skip();
yr2075_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v5105)))).f_b = yr2180_ParseRep();
yr2075_Expect(v597);
{ void * rv5111 = Y_DEFP(F.v5105);
y_use = F.yu; return rv5111; }
}
if (yr2047_Is(v462)) {
F.v5105 = yr2004_NewNode(v699, yr2035_TLn());
yr2059_Skip();
{ void * rv5112 = Y_DEFP(F.v5105);
y_use = F.yu; return rv5112; }
}
{ void * rv5113 = yr2180_ParseRep();
y_use = F.yu; return rv5113; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2174_IsStructWord(rt_int a_p2175) {
struct yf2176 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2175 = a_p2175;
F.v5117 = Y_UNDEF_I;
F.v5117 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2175))]);
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2175))]) == v210))) {
{ rt_int rv5121 = 0;
y_use = F.yu; return rv5121; }
}
{ rt_int rv5122 = (((((((((Y_DEFI(F.v5117) == v480)) || ((Y_DEFI(F.v5117) == v402))) || ((Y_DEFI(F.v5117) == v234))) || ((Y_DEFI(F.v5117) == v240))) || ((Y_DEFI(F.v5117) == v432))) || ((Y_DEFI(F.v5117) == v342))) || ((Y_DEFI(F.v5117) == v411))) || ((Y_DEFI(F.v5117) == v453)));
y_use = F.yu; return rv5122; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2180_ParseRep(void) {
struct yf2181 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5125 = Y_UNDEF_I;
F.v5127 = Y_UNDEF_P;
if ((yr2053_IsIdAt(INT64_C(0)) && ((yr2174_IsStructWord(INT64_C(1)) || ((yr2053_IsIdAt(INT64_C(1)) && yr2040_IsAt(INT64_C(2), v600))))))) {
F.v5125 = yr2081_Ident();
F.v5127 = yr2185_ParseConcrete();
((*(yR105 *)y_deref(Y_DEFP(F.v5127)))).f_text = Y_DEFI(F.v5125);
{ void * rv5132 = Y_DEFP(F.v5127);
y_use = F.yu; return rv5132; }
}
{ void * rv5133 = yr2185_ParseConcrete();
y_use = F.yu; return rv5133; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2185_ParseConcrete(void) {
struct yf2186 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5136 = Y_UNDEF_P;
F.v5138 = Y_UNDEF_P;
F.v5136 = yr2200_ParseConcrete1();
if ((yr2047_Is(v408) || yr2047_Is(v231))) {
F.v5138 = yr2004_NewNode(v669, yr2035_TLn());
if (yr2064_Accept(v408)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5138)))).f_flag = INT64_C(1);
if (((((yr2025_TK() == v216)) || ((yr2025_TK() == v207))) || yr2047_Is(v594))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5138)))).f_a = yr2282_ParseSimple();
}
}
if (yr2064_Accept(v231)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5138)))).f_b = yr2282_ParseSimple();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5136)))).f_x = Y_DEFP(F.v5138);
}
{ void * rv5140 = Y_DEFP(F.v5136);
y_use = F.yu; return rv5140; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2190_ParseIds(void) {
struct yf2191 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5143 = Y_UNDEF_P;
F.v5143 = ((void *)0);
F.v5145 = Y_UNDEF_P;
F.v5145 = ((void *)0);
F.v5147 = Y_UNDEF_P;
F.v5147 = ((void *)0);
for (;;) {
Y_TICK();
F.v5147 = yr2004_NewNode(v669, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5147)))).f_name = yr2081_Ident();
yr2011_Link(&F.v5143, &F.v5145, Y_DEFP(F.v5147));
if ((!yr2064_Accept(v606))) {
goto yl_5148;
}
}
yl_5148: ;
{ void * rv5149 = Y_DEFP(F.v5143);
y_use = F.yu; return rv5149; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2195_ParseFieldGroups(void) {
struct yf2196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5152 = Y_UNDEF_P;
F.v5152 = ((void *)0);
F.v5154 = Y_UNDEF_P;
F.v5154 = ((void *)0);
F.v5156 = Y_UNDEF_P;
F.v5156 = ((void *)0);
F.v5158 = Y_UNDEF_I;
while ((yr2047_Is(v270) || yr2047_Is(v483))) {
Y_TICK();
F.v5158 = yr2030_TV();
yr2059_Skip();
for (;;) {
Y_TICK();
F.v5156 = yr2004_NewNode(v705, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5156)))).f_ival = Y_DEFI(F.v5158);
((*(yR105 *)y_deref(Y_DEFP(F.v5156)))).f_a = yr2129_ParseNames();
yr2075_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5156)))).f_b = yr2180_ParseRep();
yr2011_Link(&F.v5152, &F.v5154, Y_DEFP(F.v5156));
if ((!((yr2047_Is(v609) && yr2053_IsIdAt(INT64_C(1)))))) {
goto yl_5159;
}
yr2059_Skip();
}
yl_5159: ;
if ((!yr2064_Accept(v609))) {
{ void * rv5161 = Y_DEFP(F.v5152);
y_use = F.yu; return rv5161; }
}
}
{ void * rv5162 = Y_DEFP(F.v5152);
y_use = F.yu; return rv5162; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2200_ParseConcrete1(void) {
struct yf2201 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5165 = Y_UNDEF_P;
F.v5167 = Y_UNDEF_P;
F.v5169 = Y_UNDEF_P;
F.v5171 = Y_UNDEF_P;
F.v5173 = Y_UNDEF_P;
F.v5175 = Y_UNDEF_P;
F.v5177 = Y_UNDEF_I;
F.v5179 = Y_UNDEF_I;
F.v5179 = yr2035_TLn();
if ((yr2025_TK() == v207)) {
F.v5165 = yr2004_NewNode(v672, Y_DEFI(F.v5179));
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_name = yr2081_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_a = yr2205_ParseQualifier();
{ void * rv5180 = Y_DEFP(F.v5165);
y_use = F.yu; return rv5180; }
}
if ((!(yr2025_TK() == v210))) {
yr1178_FailS(Y_DEFI(F.v5179), y_str("expected a representation", 25));
}
F.v5177 = yr2030_TV();
if ((((Y_DEFI(F.v5177) == v480)) || ((Y_DEFI(F.v5177) == v402)))) {
F.v5165 = yr2004_NewNode(v675, Y_DEFI(F.v5179));
if ((Y_DEFI(F.v5177) == v402)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_flag = INT64_C(1);
}
yr2059_Skip();
yr2075_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_a = yr2190_ParseIds();
yr2075_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_b = yr2205_ParseQualifier();
{ void * rv5183 = Y_DEFP(F.v5165);
y_use = F.yu; return rv5183; }
}
if ((Y_DEFI(F.v5177) == v234)) {
F.v5165 = yr2004_NewNode(v678, Y_DEFI(F.v5179));
yr2059_Skip();
yr2075_Expect(v594);
F.v5175 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr2025_TK() == v225))) {
yr1178_FailS(yr2035_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v5173 = yr2004_NewNode(v768, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5173)))).f_text = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
yr2059_Skip();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_a, &F.v5175, Y_DEFP(F.v5173));
if ((!yr2064_Accept(v606))) {
goto yl_5184;
}
}
yl_5184: ;
yr2075_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_b = yr2205_ParseQualifier();
{ void * rv5186 = Y_DEFP(F.v5165);
y_use = F.yu; return rv5186; }
}
if ((Y_DEFI(F.v5177) == v240)) {
F.v5165 = yr2004_NewNode(v681, Y_DEFI(F.v5179));
yr2059_Skip();
yr2075_Expect(v594);
F.v5175 = ((void *)0);
for (;;) {
Y_TICK();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_a, &F.v5175, yr2180_ParseRep());
if ((!yr2064_Accept(v606))) {
goto yl_5187;
}
}
yl_5187: ;
yr2075_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_b = yr2180_ParseRep();
yr2075_Expect(v597);
{ void * rv5188 = Y_DEFP(F.v5165);
y_use = F.yu; return rv5188; }
}
if ((Y_DEFI(F.v5177) == v432)) {
F.v5165 = yr2004_NewNode(v684, Y_DEFI(F.v5179));
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_a = yr2195_ParseFieldGroups();
if (yr2064_Accept(v450)) {
F.v5167 = yr2004_NewNode(v708, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5167)))).f_name = yr2081_Ident();
yr2075_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5167)))).f_b = yr2180_ParseRep();
F.v5171 = ((void *)0);
while (yr2064_Accept(v267)) {
Y_TICK();
F.v5169 = yr2004_NewNode(v711, yr2035_TLn());
F.v5175 = ((void *)0);
for (;;) {
Y_TICK();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5169)))).f_a, &F.v5175, yr2277_ParseExpr());
if ((!yr2064_Accept(v606))) {
goto yl_5189;
}
}
yl_5189: ;
yr2075_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5169)))).f_b = yr2195_ParseFieldGroups();
while (yr2064_Accept(v609)) {
Y_TICK();
}
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5167)))).f_a, &F.v5171, Y_DEFP(F.v5169));
}
yr2075_Expect(v321);
if (yr2064_Accept(v609)) {
}
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_b = Y_DEFP(F.v5167);
}
yr2075_Expect(v318);
{ void * rv5190 = Y_DEFP(F.v5165);
y_use = F.yu; return rv5190; }
}
if (((((Y_DEFI(F.v5177) == v342)) || ((Y_DEFI(F.v5177) == v411))) || ((Y_DEFI(F.v5177) == v453)))) {
if ((Y_DEFI(F.v5177) == v342)) {
F.v5165 = yr2004_NewNode(v687, Y_DEFI(F.v5179));
} else if ((Y_DEFI(F.v5177) == v411)) {
F.v5165 = yr2004_NewNode(v690, Y_DEFI(F.v5179));
} else {
F.v5165 = yr2004_NewNode(v693, Y_DEFI(F.v5179));
}
yr2059_Skip();
yr2075_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v5165)))).f_a = yr2180_ParseRep();
yr2075_Expect(v597);
{ void * rv5191 = Y_DEFP(F.v5165);
y_use = F.yu; return rv5191; }
}
yr1178_FailS(Y_DEFI(F.v5179), y_str("expected a representation", 25));
{ void * rv5193 = ((void *)0);
y_use = F.yu; return rv5193; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2205_ParseQualifier(void) {
struct yf2206 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5196 = Y_UNDEF_P;
if ((!yr2047_Is(v600))) {
{ void * rv5197 = ((void *)0);
y_use = F.yu; return rv5197; }
}
F.v5196 = yr2004_NewNode(v702, yr2035_TLn());
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5196)))).f_a = yr2277_ParseExpr();
yr2075_Expect(v537);
((*(yR105 *)y_deref(Y_DEFP(F.v5196)))).f_b = yr2277_ParseExpr();
yr2075_Expect(v603);
if (yr2064_Accept(v447)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5196)))).f_c = yr2282_ParseSimple();
} else if (yr2064_Accept(v414)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5196)))).f_d = yr2282_ParseSimple();
}
{ void * rv5198 = Y_DEFP(F.v5196);
y_use = F.yu; return rv5198; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2210_IsStop(void) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5201 = Y_UNDEF_I;
if ((yr2025_TK() == v204)) {
{ rt_int rv5203 = 1;
y_use = F.yu; return rv5203; }
}
if ((!(yr2025_TK() == v210))) {
{ rt_int rv5205 = 0;
y_use = F.yu; return rv5205; }
}
F.v5201 = yr2030_TV();
{ rt_int rv5206 = ((((((((((((((((Y_DEFI(F.v5201) == v285)) || ((Y_DEFI(F.v5201) == v282))) || ((Y_DEFI(F.v5201) == v300))) || ((Y_DEFI(F.v5201) == v267))) || ((Y_DEFI(F.v5201) == v321))) || ((Y_DEFI(F.v5201) == v327))) || ((Y_DEFI(F.v5201) == v294))) || ((Y_DEFI(F.v5201) == v303))) || ((Y_DEFI(F.v5201) == v288))) || ((Y_DEFI(F.v5201) == v291))) || ((Y_DEFI(F.v5201) == v312))) || ((Y_DEFI(F.v5201) == v297))) || ((Y_DEFI(F.v5201) == v315))) || ((Y_DEFI(F.v5201) == v306))) || ((Y_DEFI(F.v5201) == v309)));
y_use = F.yu; return rv5206; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2215_ParseStatements(rt_int a_p2216) {
struct yf2217 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2216 = a_p2216;
F.v5210 = Y_UNDEF_P;
F.v5210 = ((void *)0);
F.v5212 = Y_UNDEF_P;
F.v5212 = ((void *)0);
F.v5214 = Y_UNDEF_P;
F.v5214 = ((void *)0);
F.v5216 = Y_UNDEF_I;
for (;;) {
Y_TICK();
while (yr2064_Accept(v609)) {
Y_TICK();
}
if (yr2210_IsStop()) {
goto yl_5217;
}
F.v5216 = INT64_C(0);
if (((F.p2216 && yr2053_IsIdAt(INT64_C(0))) && yr2040_IsAt(INT64_C(1), v612))) {
F.v5216 = yr2081_Ident();
yr2059_Skip();
}
F.v5214 = yr2221_ParseStatement();
((*(yR105 *)y_deref(Y_DEFP(F.v5214)))).f_text = Y_DEFI(F.v5216);
yr2011_Link(&F.v5210, &F.v5212, Y_DEFP(F.v5214));
if ((!yr2047_Is(v609))) {
goto yl_5217;
}
}
yl_5217: ;
{ void * rv5221 = Y_DEFP(F.v5210);
y_use = F.yu; return rv5221; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2221_ParseStatement(void) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5224 = Y_UNDEF_P;
F.v5226 = Y_UNDEF_P;
F.v5228 = Y_UNDEF_P;
F.v5230 = Y_UNDEF_P;
F.v5232 = Y_UNDEF_P;
F.v5234 = Y_UNDEF_P;
F.v5236 = Y_UNDEF_I;
F.v5238 = Y_UNDEF_I;
F.v5238 = yr2035_TLn();
if ((yr2025_TK() == v210)) {
F.v5236 = yr2030_TV();
if ((Y_DEFI(F.v5236) == v246)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v720, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = yr2277_ParseExpr();
{ void * rv5239 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5239; }
}
if ((Y_DEFI(F.v5236) == v351)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v723, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name = yr2081_Ident();
{ void * rv5240 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5240; }
}
if ((Y_DEFI(F.v5236) == v333)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v726, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name = yr2081_Ident();
{ void * rv5241 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5241; }
}
if ((Y_DEFI(F.v5236) == v441)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v729, Y_DEFI(F.v5238));
if ((!((yr2047_Is(v609) || yr2210_IsStop())))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = yr2277_ParseExpr();
}
{ void * rv5242 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5242; }
}
if ((Y_DEFI(F.v5236) == v468)) {
yr2059_Skip();
{ void * rv5243 = yr2004_NewNode(v732, Y_DEFI(F.v5238));
y_use = F.yu; return rv5243; }
}
if ((Y_DEFI(F.v5236) == v426)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v735, Y_DEFI(F.v5238));
if (yr2053_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name = yr2081_Ident();
}
{ void * rv5245 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5245; }
}
if ((Y_DEFI(F.v5236) == v354)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v738, Y_DEFI(F.v5238));
F.v5228 = ((void *)0);
F.v5226 = yr2004_NewNode(v756, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_a = yr2277_ParseExpr();
yr2075_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_b = yr2215_ParseStatements(0);
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a, &F.v5228, Y_DEFP(F.v5226));
while (yr2047_Is(v285)) {
Y_TICK();
F.v5226 = yr2004_NewNode(v756, yr2035_TLn());
yr2059_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_a = yr2277_ParseExpr();
yr2075_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_b = yr2215_ParseStatements(0);
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a, &F.v5228, Y_DEFP(F.v5226));
}
if (yr2064_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b = yr2215_ParseStatements(0);
}
yr2075_Expect(v300);
{ void * rv5250 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5250; }
}
if ((Y_DEFI(F.v5236) == v450)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v741, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = yr2277_ParseExpr();
F.v5228 = ((void *)0);
while (yr2047_Is(v267)) {
Y_TICK();
F.v5226 = yr2004_NewNode(v756, yr2035_TLn());
yr2059_Skip();
F.v5232 = ((void *)0);
for (;;) {
Y_TICK();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_a, &F.v5232, yr2277_ParseExpr());
if ((!yr2064_Accept(v606))) {
goto yl_5251;
}
}
yl_5251: ;
yr2075_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_b = yr2215_ParseStatements(0);
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b, &F.v5228, Y_DEFP(F.v5226));
}
if (yr2064_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_c = yr2215_ParseStatements(0);
}
yr2075_Expect(v321);
{ void * rv5255 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5255; }
}
if ((Y_DEFI(F.v5236) == v486)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v744, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = yr2277_ParseExpr();
yr2075_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b = yr2215_ParseStatements(0);
yr2075_Expect(v327);
{ void * rv5257 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5257; }
}
if ((Y_DEFI(F.v5236) == v345)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v747, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name = yr2081_Ident();
yr2075_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = yr2180_ParseRep();
yr2075_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b = yr2215_ParseStatements(0);
yr2075_Expect(v294);
{ void * rv5259 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5259; }
}
if ((Y_DEFI(F.v5236) == v375)) {
yr2059_Skip();
F.v5224 = yr2004_NewNode(v750, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name = yr2081_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b = yr2215_ParseStatements(0);
yr2075_Expect(v303);
yr2086_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name), Y_DEFI(F.v5238));
{ void * rv5261 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5261; }
}
if ((((Y_DEFI(F.v5236) == v264)) || ((Y_DEFI(F.v5236) == v456)))) {
F.v5224 = yr2004_NewNode(v753, Y_DEFI(F.v5238));
if (yr2064_Accept(v456)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_flag = INT64_C(1);
}
yr2075_Expect(v264);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = yr2119_ParseBlock();
yr2075_Expect(v288);
{ void * rv5263 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5263; }
}
}
F.v5234 = yr2308_ParseDesignator();
if (yr2064_Accept(v531)) {
F.v5224 = yr2004_NewNode(v714, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = Y_DEFP(F.v5234);
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b = yr2277_ParseExpr();
{ void * rv5264 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5264; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5234)))).f_kind) == v780))) {
yr1178_FailS(Y_DEFI(F.v5238), y_str("expected a statement", 20));
}
F.v5224 = yr2004_NewNode(v717, Y_DEFI(F.v5238));
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a = Y_DEFP(F.v5234);
{ void * rv5266 = Y_DEFP(F.v5224);
y_use = F.yu; return rv5266; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2226_OpAt(void) {
struct yf2227 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr2025_TK() == v213)) || ((yr2025_TK() == v210)))) {
{ rt_int rv5268 = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv5268; }
}
{ rt_int rv5270 = INT64_C(0);
y_use = F.yu; return rv5270; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2231_IsRel(rt_int a_p2232) {
struct yf2233 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2232 = a_p2232;
{ rt_int rv5273 = ((((((((((((((((((((F.p2232 == v360)) || ((F.p2232 == v570))) || ((F.p2232 == v585))) || ((F.p2232 == v588))) || ((F.p2232 == v540))) || ((F.p2232 == v591))) || ((F.p2232 == v543))) || ((F.p2232 == v546))) || ((F.p2232 == v501))) || ((F.p2232 == v549))) || ((F.p2232 == v504))) || ((F.p2232 == v552))) || ((F.p2232 == v513))) || ((F.p2232 == v507))) || ((F.p2232 == v495))) || ((F.p2232 == v555))) || ((F.p2232 == v516))) || ((F.p2232 == v510))) || ((F.p2232 == v498)));
y_use = F.yu; return rv5273; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2237_IsAssocMul(rt_int a_p2238) {
struct yf2239 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2238 = a_p2238;
{ rt_int rv5276 = (((F.p2238 == v579)) || ((F.p2238 == v237)));
y_use = F.yu; return rv5276; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2243_IsNonAssocMul(rt_int a_p2244) {
struct yf2245 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2244 = a_p2244;
{ rt_int rv5279 = ((((((((F.p2244 == v582)) || ((F.p2244 == v276))) || ((F.p2244 == v378))) || ((F.p2244 == v558))) || ((F.p2244 == v519))) || ((F.p2244 == v561))) || ((F.p2244 == v522)));
y_use = F.yu; return rv5279; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2249_IsAssocAdd(rt_int a_p2250) {
struct yf2251 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2250 = a_p2250;
{ rt_int rv5282 = (((F.p2250 == v573)) || ((F.p2250 == v399)));
y_use = F.yu; return rv5282; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2255_IsNonAssocAdd(rt_int a_p2256) {
struct yf2257 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2256 = a_p2256;
{ rt_int rv5285 = (((((((F.p2256 == v576)) || ((F.p2256 == v489))) || ((F.p2256 == v564))) || ((F.p2256 == v525))) || ((F.p2256 == v567))) || ((F.p2256 == v528)));
y_use = F.yu; return rv5285; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2261_Bin(rt_int a_p2262, void * a_p2263, void * a_p2264, rt_int a_p2265) {
struct yf2266 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2262 = a_p2262;
F.p2263 = a_p2263;
F.p2264 = a_p2264;
F.p2265 = a_p2265;
F.v5292 = Y_UNDEF_P;
F.v5292 = yr2004_NewNode(v798, F.p2265);
((*(yR105 *)y_deref(Y_DEFP(F.v5292)))).f_name = F.p2262;
((*(yR105 *)y_deref(Y_DEFP(F.v5292)))).f_a = F.p2263;
((*(yR105 *)y_deref(Y_DEFP(F.v5292)))).f_b = F.p2264;
{ void * rv5293 = Y_DEFP(F.v5292);
y_use = F.yu; return rv5293; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2270_NeedParens(rt_int a_p2271, rt_int a_p2272) {
struct yf2273 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2271 = a_p2271;
F.p2272 = a_p2272;
F.v5298 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p2271);
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v5298 = yr1056_SE();
yr1157_Fail(F.p2272, Y_DEFI(F.v5298));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2277_ParseExpr(void) {
struct yf2278 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5302 = Y_UNDEF_P;
F.v5304 = Y_UNDEF_I;
F.v5306 = Y_UNDEF_I;
F.v5306 = yr2035_TLn();
F.v5302 = yr2282_ParseSimple();
F.v5304 = yr2226_OpAt();
if (yr2231_IsRel(Y_DEFI(F.v5304))) {
yr2059_Skip();
F.v5302 = yr2261_Bin(Y_DEFI(F.v5304), Y_DEFP(F.v5302), yr2282_ParseSimple(), Y_DEFI(F.v5306));
if (yr2231_IsRel(yr2226_OpAt())) {
yr2270_NeedParens(Y_DEFI(F.v5304), Y_DEFI(F.v5306));
}
}
{ void * rv5307 = Y_DEFP(F.v5302);
y_use = F.yu; return rv5307; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2282_ParseSimple(void) {
struct yf2283 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5310 = Y_UNDEF_P;
F.v5312 = Y_UNDEF_P;
F.v5314 = Y_UNDEF_I;
F.v5316 = Y_UNDEF_I;
F.v5316 = yr2035_TLn();
if (yr2047_Is(v576)) {
yr2059_Skip();
F.v5312 = yr2004_NewNode(v795, Y_DEFI(F.v5316));
((*(yR105 *)y_deref(Y_DEFP(F.v5312)))).f_a = yr2287_ParseTerm();
F.v5314 = yr2226_OpAt();
if ((yr2249_IsAssocAdd(Y_DEFI(F.v5314)) || yr2255_IsNonAssocAdd(Y_DEFI(F.v5314)))) {
yr2270_NeedParens(y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFI(F.v5316));
}
{ void * rv5317 = Y_DEFP(F.v5312);
y_use = F.yu; return rv5317; }
}
F.v5310 = yr2287_ParseTerm();
F.v5314 = yr2226_OpAt();
if (yr2255_IsNonAssocAdd(Y_DEFI(F.v5314))) {
yr2059_Skip();
F.v5310 = yr2261_Bin(Y_DEFI(F.v5314), Y_DEFP(F.v5310), yr2287_ParseTerm(), Y_DEFI(F.v5316));
if ((yr2249_IsAssocAdd(yr2226_OpAt()) || yr2255_IsNonAssocAdd(yr2226_OpAt()))) {
yr2270_NeedParens(Y_DEFI(F.v5314), Y_DEFI(F.v5316));
}
{ void * rv5318 = Y_DEFP(F.v5310);
y_use = F.yu; return rv5318; }
}
while (yr2249_IsAssocAdd(Y_DEFI(F.v5314))) {
Y_TICK();
yr2059_Skip();
F.v5310 = yr2261_Bin(Y_DEFI(F.v5314), Y_DEFP(F.v5310), yr2287_ParseTerm(), Y_DEFI(F.v5316));
if (yr2255_IsNonAssocAdd(yr2226_OpAt())) {
yr2270_NeedParens(yr2226_OpAt(), Y_DEFI(F.v5316));
}
F.v5314 = yr2226_OpAt();
}
{ void * rv5319 = Y_DEFP(F.v5310);
y_use = F.yu; return rv5319; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2287_ParseTerm(void) {
struct yf2288 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5322 = Y_UNDEF_P;
F.v5324 = Y_UNDEF_I;
F.v5326 = Y_UNDEF_I;
F.v5326 = yr2035_TLn();
F.v5322 = yr2303_ParseFactor();
F.v5324 = yr2226_OpAt();
if (yr2243_IsNonAssocMul(Y_DEFI(F.v5324))) {
yr2059_Skip();
F.v5322 = yr2261_Bin(Y_DEFI(F.v5324), Y_DEFP(F.v5322), yr2303_ParseFactor(), Y_DEFI(F.v5326));
if ((yr2237_IsAssocMul(yr2226_OpAt()) || yr2243_IsNonAssocMul(yr2226_OpAt()))) {
yr2270_NeedParens(Y_DEFI(F.v5324), Y_DEFI(F.v5326));
}
{ void * rv5327 = Y_DEFP(F.v5322);
y_use = F.yu; return rv5327; }
}
while (yr2237_IsAssocMul(Y_DEFI(F.v5324))) {
Y_TICK();
yr2059_Skip();
F.v5322 = yr2261_Bin(Y_DEFI(F.v5324), Y_DEFP(F.v5322), yr2303_ParseFactor(), Y_DEFI(F.v5326));
if (yr2243_IsNonAssocMul(yr2226_OpAt())) {
yr2270_NeedParens(yr2226_OpAt(), Y_DEFI(F.v5326));
}
F.v5324 = yr2226_OpAt();
}
{ void * rv5328 = Y_DEFP(F.v5322);
y_use = F.yu; return rv5328; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2292_IsLiteralAt(rt_int a_p2293) {
struct yf2294 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2293 = a_p2293;
F.v5332 = Y_UNDEF_I;
F.v5332 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2293))]);
{ rt_int rv5334 = (((((((Y_DEFI(F.v5332) == v216)) || ((Y_DEFI(F.v5332) == v219))) || ((Y_DEFI(F.v5332) == v222))) || ((Y_DEFI(F.v5332) == v225))) || ((Y_DEFI(F.v5332) == v228))) || yr2040_IsAt(F.p2293, v387));
y_use = F.yu; return rv5334; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2298_ParseLiteral(void) {
struct yf2299 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5337 = Y_UNDEF_P;
F.v5339 = Y_UNDEF_I;
F.v5339 = yr2025_TK();
F.v5341 = Y_UNDEF_I;
F.v5341 = yr2035_TLn();
if ((Y_DEFI(F.v5339) == v216)) {
F.v5337 = yr2004_NewNode(v759, Y_DEFI(F.v5341));
((*(yR105 *)y_deref(Y_DEFP(F.v5337)))).f_ival = yr2030_TV();
} else if ((Y_DEFI(F.v5339) == v219)) {
F.v5337 = yr2004_NewNode(v762, Y_DEFI(F.v5341));
((*(yR105 *)y_deref(Y_DEFP(F.v5337)))).f_ival = yr2030_TV();
} else if ((Y_DEFI(F.v5339) == v222)) {
F.v5337 = yr2004_NewNode(v765, Y_DEFI(F.v5341));
((*(yR105 *)y_deref(Y_DEFP(F.v5337)))).f_text = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5339) == v225)) {
F.v5337 = yr2004_NewNode(v768, Y_DEFI(F.v5341));
((*(yR105 *)y_deref(Y_DEFP(F.v5337)))).f_text = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5339) == v228)) {
F.v5337 = yr2004_NewNode(v771, Y_DEFI(F.v5341));
((*(yR105 *)y_deref(Y_DEFP(F.v5337)))).f_text = y_range(yr2030_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v5337 = yr2004_NewNode(v774, Y_DEFI(F.v5341));
}
yr2059_Skip();
{ void * rv5342 = Y_DEFP(F.v5337);
y_use = F.yu; return rv5342; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2303_ParseFactor(void) {
struct yf2304 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5345 = Y_UNDEF_P;
F.v5347 = Y_UNDEF_I;
F.v5349 = Y_UNDEF_I;
F.v5349 = yr2035_TLn();
if (yr2047_Is(v390)) {
yr2059_Skip();
F.v5345 = yr2004_NewNode(v792, Y_DEFI(F.v5349));
((*(yR105 *)y_deref(Y_DEFP(F.v5345)))).f_a = yr2303_ParseFactor();
{ void * rv5350 = Y_DEFP(F.v5345);
y_use = F.yu; return rv5350; }
}
if (yr2047_Is(v594)) {
yr2059_Skip();
F.v5345 = yr2004_NewNode(v801, Y_DEFI(F.v5349));
((*(yR105 *)y_deref(Y_DEFP(F.v5345)))).f_a = yr2277_ParseExpr();
yr2075_Expect(v597);
{ void * rv5351 = Y_DEFP(F.v5345);
y_use = F.yu; return rv5351; }
}
if (yr2292_IsLiteralAt(INT64_C(0))) {
{ void * rv5353 = yr2298_ParseLiteral();
y_use = F.yu; return rv5353; }
}
if (yr2053_IsIdAt(INT64_C(0))) {
if ((yr2292_IsLiteralAt(INT64_C(1)) || ((yr2053_IsIdAt(INT64_C(1)) && (!((((((yr2040_IsAt(INT64_C(2), v594) || yr2040_IsAt(INT64_C(2), v600)) || yr2040_IsAt(INT64_C(2), v615)) || yr2040_IsAt(INT64_C(2), v618)) || yr2040_IsAt(INT64_C(2), v531)) || yr2040_IsAt(INT64_C(2), v612)))))))) {
F.v5347 = yr2081_Ident();
if (yr2053_IsIdAt(INT64_C(0))) {
F.v5345 = yr2004_NewNode(v777, Y_DEFI(F.v5349));
((*(yR105 *)y_deref(Y_DEFP(F.v5345)))).f_name = yr2081_Ident();
} else {
F.v5345 = yr2298_ParseLiteral();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5345)))).f_d = yr2004_NewNode(v669, Y_DEFI(F.v5349));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5345)))).f_d)))).f_name = Y_DEFI(F.v5347);
{ void * rv5364 = Y_DEFP(F.v5345);
y_use = F.yu; return rv5364; }
}
{ void * rv5365 = yr2308_ParseDesignator();
y_use = F.yu; return rv5365; }
}
yr1186_FailN(Y_DEFI(F.v5349), yr2070_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv5367 = ((void *)0);
y_use = F.yu; return rv5367; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2308_ParseDesignator(void) {
struct yf2309 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5370 = Y_UNDEF_P;
F.v5372 = Y_UNDEF_P;
F.v5374 = Y_UNDEF_P;
F.v5376 = Y_UNDEF_I;
F.v5376 = yr2035_TLn();
F.v5370 = yr2004_NewNode(v777, Y_DEFI(F.v5376));
((*(yR105 *)y_deref(Y_DEFP(F.v5370)))).f_name = yr2081_Ident();
if (yr2064_Accept(v594)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5370)))).f_kind = v780;
F.v5374 = ((void *)0);
while ((!yr2047_Is(v597))) {
Y_TICK();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5370)))).f_a, &F.v5374, yr2277_ParseExpr());
if ((!yr2064_Accept(v606))) {
yr2313_EXIT_ARGS();
}
}
yr2075_Expect(v597);
}
for (;;) {
Y_TICK();
if (yr2064_Accept(v615)) {
F.v5372 = yr2004_NewNode(v783, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5372)))).f_a = Y_DEFP(F.v5370);
((*(yR105 *)y_deref(Y_DEFP(F.v5372)))).f_name = yr2081_Ident();
F.v5370 = Y_DEFP(F.v5372);
} else if (yr2064_Accept(v600)) {
F.v5372 = yr2004_NewNode(v786, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5372)))).f_a = Y_DEFP(F.v5370);
F.v5374 = ((void *)0);
for (;;) {
Y_TICK();
yr2011_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5372)))).f_b, &F.v5374, yr2277_ParseExpr());
if ((!yr2064_Accept(v606))) {
goto yl_5378;
}
}
yl_5378: ;
yr2075_Expect(v603);
F.v5370 = Y_DEFP(F.v5372);
} else if (yr2064_Accept(v618)) {
F.v5372 = yr2004_NewNode(v789, yr2035_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5372)))).f_a = Y_DEFP(F.v5370);
F.v5370 = Y_DEFP(F.v5372);
} else {
goto yl_5377;
}
}
yl_5377: ;
{ void * rv5379 = Y_DEFP(F.v5370);
y_use = F.yu; return rv5379; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2313_EXIT_ARGS(void) {
struct yf2314 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr2047_Is(v597))) {
yr2075_Expect(v597);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2318_ParseProgram(void) {
struct yf2319 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5383 = Y_UNDEF_P;
F.v5383 = ((void *)0);
F.v5385 = Y_UNDEF_P;
F.v5385 = ((void *)0);
F.v5387 = Y_UNDEF_P;
F.v5387 = ((void *)0);
F.v5389 = Y_UNDEF_I;
while ((!(yr2025_TK() == v204))) {
Y_TICK();
if ((!((yr2047_Is(v381) || yr2047_Is(v384))))) {
yr1178_FailS(yr2035_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
F.v5389 = Y_DEFI(v1249);
F.v5387 = yr2109_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v5387)))).f_x = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5387)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5387)))).f_x)))).f_ival = Y_DEFI(F.v5389);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5387)))).f_x)))).f_flag = Y_DEFI(v1249);
yr2011_Link(&F.v5383, &F.v5385, Y_DEFP(F.v5387));
while (yr2064_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5391 = Y_DEFP(F.v5383);
y_use = F.yu; return rv5391; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2323_NewSym(rt_int a_p2324, rt_int a_p2325) {
struct yf2326 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2324 = a_p2324;
F.p2325 = a_p2325;
F.v5396 = Y_UNDEF_P;
({ F.v5396 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v5396)); });
(*(yR125 *)y_deref(Y_DEFP(F.v5396))) = ((yR125){ .f_kind = F.p2324, .f_name = F.p2325, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1) });
((*(yR125 *)y_deref(Y_DEFP(F.v5396)))).f_serial = yr1195_NewSerial();
{ void * rv5410 = Y_DEFP(F.v5396);
y_use = F.yu; return rv5410; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2330_OpenScope(rt_int a_p2331) {
struct yf2332 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2331 = a_p2331;
F.v5414 = Y_UNDEF_P;
({ F.v5414 = y_new(sizeof(yR130)); y_initu(&yd_131, y_deref(F.v5414)); });
(*(yR130 *)y_deref(Y_DEFP(F.v5414))) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2331, .f_module = ((void *)0), .f_level = Y_DEFI(v1279), .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((Y_DEFI(v1273) >= INT64_C(0))) {
((*(yR130 *)y_deref(Y_DEFP(F.v5414)))).f_up = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))]);
}
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = Y_DEFP(F.v5414);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2336_ReopenScope(void * a_p2337) {
struct yf2338 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2337 = a_p2337;
F.v5421 = Y_UNDEF_P;
F.v5421 = Y_DEFP(((*(yR130 *)y_deref(F.p2337))).f_syms);
F.v5423 = Y_UNDEF_I;
F.v5423 = INT64_C(0);
F.v5426 = Y_UNDEF_I;
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = F.p2337;
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
while ((!(Y_DEFP(F.v5421) == ((void *)0)))) {
Y_TICK();
F.v5423 = y_range(y_add(Y_DEFI(F.v5423), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5423))] = Y_DEFP(F.v5421);
F.v5421 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5421)))).f_stack);
}
while ((Y_DEFI(F.v5423) > INT64_C(0))) {
Y_TICK();
F.v5421 = Y_DEFP(((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5423))]);
F.v5426 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5421)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v5421)))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5426))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5426))] = Y_DEFP(F.v5421);
F.v5423 = y_range(y_sub(Y_DEFI(F.v5423), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2342_CloseScope(void) {
struct yf2343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5438 = Y_UNDEF_P;
F.v5440 = Y_UNDEF_P;
F.v5442 = Y_UNDEF_P;
F.v5444 = Y_UNDEF_I;
F.v5438 = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
while ((!(Y_DEFP(F.v5438) == ((void *)0)))) {
Y_TICK();
F.v5444 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5438)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5440 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5444))]);
F.v5442 = ((void *)0);
while ((((!(Y_DEFP(F.v5440) == ((void *)0)))) && ((!(Y_DEFP(F.v5440) == Y_DEFP(F.v5438)))))) {
Y_TICK();
F.v5442 = Y_DEFP(F.v5440);
F.v5440 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5440)))).f_chain);
}
if ((Y_DEFP(F.v5440) == Y_DEFP(F.v5438))) {
if ((Y_DEFP(F.v5442) == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5444))] = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5438)))).f_chain);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v5442)))).f_chain = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5438)))).f_chain);
}
}
F.v5438 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5438)))).f_stack);
}
v1273 = y_range(y_sub(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2347_Visible(void * a_p2348) {
struct yf2349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2348 = a_p2348;
{ rt_int rv5452 = (((Y_DEFI(((*(yR125 *)y_deref(F.p2348))).f_depth) >= Y_DEFI(v1276))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p2348))).f_depth) == INT64_C(0))));
y_use = F.yu; return rv5452; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2353_Find(rt_int a_p2354) {
struct yf2355 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2354 = a_p2354;
F.v5456 = Y_UNDEF_P;
F.v5456 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2354, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5456) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5456)))).f_name) == F.p2354)) && yr2347_Visible(Y_DEFP(F.v5456)))) {
{ void * rv5459 = Y_DEFP(F.v5456);
y_use = F.yu; return rv5459; }
}
F.v5456 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5456)))).f_chain);
}
{ void * rv5460 = ((void *)0);
y_use = F.yu; return rv5460; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2359_FindHere(rt_int a_p2360) {
struct yf2361 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2360 = a_p2360;
F.v5464 = Y_UNDEF_P;
F.v5464 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2360, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5464) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_name) == F.p2360)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_depth) == Y_DEFI(v1273))))) {
{ void * rv5467 = Y_DEFP(F.v5464);
y_use = F.yu; return rv5467; }
}
F.v5464 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_chain);
}
{ void * rv5468 = ((void *)0);
y_use = F.yu; return rv5468; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2365_Lookup(rt_int a_p2366, rt_int a_p2367) {
struct yf2368 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2366 = a_p2366;
F.p2367 = a_p2367;
F.v5473 = Y_UNDEF_P;
F.v5473 = yr2353_Find(F.p2366);
F.v5475 = Y_UNDEF_P;
if ((!(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]) == ((void *)0)))) {
if ((((Y_DEFP(F.v5473) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_depth) == Y_DEFI(v1273)))))) {
if (yr2385_DeclaredFrom(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]), F.p2366)) {
yr1186_FailN(F.p2367, F.p2366, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((Y_DEFP(F.v5473) == ((void *)0))) {
yr1186_FailN(F.p2367, F.p2366, y_str(" is not declared here", 21));
}
F.lo5481 = INT64_C(1);
F.hi5482 = Y_DEFI(v1328);
{ rt_int hi5486 = F.hi5482;
for (rt_int i5485 = F.lo5481; i5485 <= hi5486; i5485++) { F.c_5484 = i5485; Y_TICK();
if (((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_depth) == Y_DEFI(((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5484)]))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_serial) > Y_DEFI(((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5484)])))) && yr2379_IsSimple(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_kind)))) {
yr1186_FailN(F.p2367, F.p2366, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i5485 == hi5486) break;
}}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_kind) == v894)) {
F.v5475 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_chain);
while ((!(Y_DEFP(F.v5475) == ((void *)0)))) {
Y_TICK();
if ((((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5475)))).f_name) == F.p2366)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5475)))).f_depth) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_depth)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5475)))).f_kind) == v894))) && yr2406_Resolved(Y_DEFP(F.v5475))) && ((!(yr2458_Real(Y_DEFP(F.v5475)) == yr2458_Real(Y_DEFP(F.v5473)))))) && ((!(Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v5473))))).f_kind) == v873))))) {
yr1186_FailN(F.p2367, F.p2366, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v5475 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5475)))).f_chain);
}
}
{ void * rv5489 = Y_DEFP(F.v5473);
y_use = F.yu; return rv5489; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2372_AltOf(void * a_p2373, void * a_p2374) {
struct yf2375 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2373 = a_p2373;
F.p2374 = a_p2374;
F.v5494 = Y_UNDEF_P;
F.v5494 = Y_DEFP(((*(yR125 *)y_deref(F.p2373))).f_alt);
while ((!(Y_DEFP(F.v5494) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(F.v5494) == F.p2374)) {
{ rt_int rv5496 = 1;
y_use = F.yu; return rv5496; }
}
F.v5494 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5494)))).f_alt);
}
{ rt_int rv5498 = 0;
y_use = F.yu; return rv5498; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2379_IsSimple(rt_int a_p2380) {
struct yf2381 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2380 = a_p2380;
{ rt_int rv5501 = (((((((F.p2380 == v861)) || ((F.p2380 == v864))) || ((F.p2380 == v867))) || ((F.p2380 == v870))) || ((F.p2380 == v873))) || ((F.p2380 == v888)));
y_use = F.yu; return rv5501; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2385_DeclaredFrom(void * a_p2386, rt_int a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2386 = a_p2386;
F.p2387 = a_p2387;
F.v5506 = Y_UNDEF_P;
F.v5506 = F.p2386;
F.v5508 = Y_UNDEF_P;
F.v5508 = F.p2386;
F.v5510 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v5506) == ((void *)0)))) {
Y_TICK();
F.v5510 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5506)))).f_kind);
if (((((Y_DEFI(F.v5510) == v639)) || ((Y_DEFI(F.v5510) == v642))) || ((Y_DEFI(F.v5510) == v645)))) {
F.v5508 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5506)))).f_a);
while ((!(Y_DEFP(F.v5508) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5508)))).f_name) == F.p2387)) {
{ rt_int rv5512 = 1;
y_use = F.yu; return rv5512; }
}
F.v5508 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5508)))).f_next);
}
}
if ((((((((Y_DEFI(F.v5510) == v648)) || ((Y_DEFI(F.v5510) == v651))) || ((Y_DEFI(F.v5510) == v654))) || ((Y_DEFI(F.v5510) == v666))) || ((Y_DEFI(F.v5510) == v624))) || ((Y_DEFI(F.v5510) == v660)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5506)))).f_name) == F.p2387)) {
{ rt_int rv5514 = 1;
y_use = F.yu; return rv5514; }
}
}
if ((((((Y_DEFI(F.v5510) == v639)) || ((Y_DEFI(F.v5510) == v642))) || ((Y_DEFI(F.v5510) == v648))) || ((Y_DEFI(F.v5510) == v651)))) {
if (yr2392_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5506)))).f_b), F.p2387)) {
{ rt_int rv5516 = 1;
y_use = F.yu; return rv5516; }
}
}
if ((Y_DEFI(F.v5510) == v624)) {
F.v5508 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5506)))).f_b);
while ((!(Y_DEFP(F.v5508) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5508)))).f_ival) == F.p2387)) || ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5508)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5508)))).f_name) == F.p2387)))))) {
{ rt_int rv5519 = 1;
y_use = F.yu; return rv5519; }
}
F.v5508 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5508)))).f_next);
}
}
F.v5506 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5506)))).f_next);
}
{ rt_int rv5521 = 0;
y_use = F.yu; return rv5521; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2392_LiteralIn(void * a_p2393, rt_int a_p2394) {
struct yf2395 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2393 = a_p2393;
F.p2394 = a_p2394;
F.v5526 = Y_UNDEF_P;
if ((F.p2393 == ((void *)0))) {
{ rt_int rv5528 = 0;
y_use = F.yu; return rv5528; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2393))).f_kind) == v675)) {
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_a);
while ((!(Y_DEFP(F.v5526) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_name) == F.p2394)) {
{ rt_int rv5530 = 1;
y_use = F.yu; return rv5530; }
}
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_next);
}
{ rt_int rv5532 = 0;
y_use = F.yu; return rv5532; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2393))).f_kind) == v681)) {
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_a);
while ((!(Y_DEFP(F.v5526) == ((void *)0)))) {
Y_TICK();
if (yr2392_LiteralIn(Y_DEFP(F.v5526), F.p2394)) {
{ rt_int rv5534 = 1;
y_use = F.yu; return rv5534; }
}
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_next);
}
{ rt_int rv5535 = yr2392_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_b), F.p2394);
y_use = F.yu; return rv5535; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2393))).f_kind) == v684)) {
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_a);
while ((!(Y_DEFP(F.v5526) == ((void *)0)))) {
Y_TICK();
if (yr2392_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_b), F.p2394)) {
{ rt_int rv5537 = 1;
y_use = F.yu; return rv5537; }
}
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_next);
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_b) == ((void *)0)))) {
if (yr2392_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_b)))).f_b), F.p2394)) {
{ rt_int rv5539 = 1;
y_use = F.yu; return rv5539; }
}
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_b)))).f_a);
while ((!(Y_DEFP(F.v5526) == ((void *)0)))) {
Y_TICK();
if (yr2399_LiteralInGroups(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_b), F.p2394)) {
{ rt_int rv5541 = 1;
y_use = F.yu; return rv5541; }
}
F.v5526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5526)))).f_next);
}
}
{ rt_int rv5543 = 0;
y_use = F.yu; return rv5543; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2393))).f_kind) == v687)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2393))).f_kind) == v693)))) {
{ rt_int rv5544 = yr2392_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2393))).f_a), F.p2394);
y_use = F.yu; return rv5544; }
}
{ rt_int rv5546 = 0;
y_use = F.yu; return rv5546; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2399_LiteralInGroups(void * a_p2400, rt_int a_p2401) {
struct yf2402 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2400 = a_p2400;
F.p2401 = a_p2401;
F.v5551 = Y_UNDEF_P;
F.v5551 = F.p2400;
while ((!(Y_DEFP(F.v5551) == ((void *)0)))) {
Y_TICK();
if (yr2392_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5551)))).f_b), F.p2401)) {
{ rt_int rv5553 = 1;
y_use = F.yu; return rv5553; }
}
F.v5551 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5551)))).f_next);
}
{ rt_int rv5555 = 0;
y_use = F.yu; return rv5555; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2406_Resolved(void * a_p2407) {
struct yf2408 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2407 = a_p2407;
if ((!(Y_DEFI(((*(yR125 *)y_deref(F.p2407))).f_kind) == v894))) {
{ rt_int rv5559 = 1;
y_use = F.yu; return rv5559; }
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p2407))).f_target) == ((void *)0))) {
{ rt_int rv5561 = 0;
y_use = F.yu; return rv5561; }
}
{ rt_int rv5562 = yr2406_Resolved(Y_DEFP(((*(yR125 *)y_deref(F.p2407))).f_target));
y_use = F.yu; return rv5562; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2412_Ambiguous(void * a_p2413) {
struct yf2414 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2413 = a_p2413;
F.v5566 = Y_UNDEF_P;
F.v5566 = Y_DEFP(((*(yR125 *)y_deref(F.p2413))).f_chain);
while ((!(Y_DEFP(F.v5566) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5566)))).f_name) == Y_DEFI(((*(yR125 *)y_deref(F.p2413))).f_name))) && yr2347_Visible(Y_DEFP(F.v5566))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5566)))).f_kind) == v873))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5566)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p2413))).f_rep)))).f_tid)))))) {
{ rt_int rv5568 = 1;
y_use = F.yu; return rv5568; }
}
F.v5566 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5566)))).f_chain);
}
{ rt_int rv5570 = 0;
y_use = F.yu; return rv5570; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2418_FindLit(rt_int a_p2419, void * a_p2420) {
struct yf2421 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2419 = a_p2419;
F.p2420 = a_p2420;
F.v5575 = Y_UNDEF_P;
F.v5575 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2419, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5575) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5575)))).f_name) == F.p2419)) && yr2406_Resolved(Y_DEFP(F.v5575)))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v5575))))).f_kind) == v873)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v5575))))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2420))).f_tid))))) {
{ void * rv5578 = Y_DEFP(F.v5575);
y_use = F.yu; return rv5578; }
}
}
F.v5575 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5575)))).f_chain);
}
{ void * rv5579 = ((void *)0);
y_use = F.yu; return rv5579; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2425_Define(void * a_p2426, rt_int a_p2427) {
struct yf2428 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2426 = a_p2426;
F.p2427 = a_p2427;
F.v5584 = Y_UNDEF_P;
F.v5584 = yr2359_FindHere(Y_DEFI(((*(yR125 *)y_deref(F.p2426))).f_name));
F.v5586 = Y_UNDEF_I;
F.v5586 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(F.p2426))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(Y_DEFP(F.v5584) == ((void *)0)))) && (!((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5584)))).f_kind) == v873)) && ((Y_DEFI(((*(yR125 *)y_deref(F.p2426))).f_kind) == v873)))))) && (!(((((Y_DEFI(((*(yR125 *)y_deref(F.p2426))).f_kind) == v876)) && yr2406_Resolved(Y_DEFP(F.v5584))) && yr2372_AltOf(F.p2426, yr2458_Real(Y_DEFP(F.v5584))))))) && (!((((Y_DEFI(((*(yR125 *)y_deref(F.p2426))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5584)))).f_kind) == v894))))))) {
yr1186_FailN(F.p2427, Y_DEFI(((*(yR125 *)y_deref(F.p2426))).f_name), y_str(" is declared twice in this scope", 32));
}
((*(yR125 *)y_deref(F.p2426))).f_depth = Y_DEFI(v1273);
((*(yR125 *)y_deref(F.p2426))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5586))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5586))] = F.p2426;
((*(yR125 *)y_deref(F.p2426))).f_stack = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms = F.p2426;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2432_Path(rt_int a_p2433, rt_int a_p2434) {
struct yf2435 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2433 = a_p2433;
F.p2434 = a_p2434;
F.v5594 = Y_UNDEF_I;
F.v5594 = y_range(y_sub(Y_DEFI(v1279), F.p2433), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2433 == INT64_C(0))) {
{ rt_int rv5597 = F.p2434;
y_use = F.yu; return rv5597; }
}
yr1026_SB();
if ((Y_DEFI(F.v5594) == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
} else {
yr1037_SA(y_str("F.up->", 6));
while ((Y_DEFI(F.v5594) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
F.v5594 = y_range(y_sub(Y_DEFI(F.v5594), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1044_ST(F.p2434);
{ rt_int rv5605 = yr1056_SE();
y_use = F.yu; return rv5605; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2439_FramePtr(rt_int a_p2440) {
struct yf2441 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2440 = a_p2440;
F.v5609 = Y_UNDEF_I;
F.v5609 = y_range(y_sub(Y_DEFI(v1279), F.p2440), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v5609) == INT64_C(0))) {
{ rt_int rv5613 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5613; }
}
yr1026_SB();
yr1037_SA(y_str("F.up", 4));
while ((Y_DEFI(F.v5609) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
F.v5609 = y_range(y_sub(Y_DEFI(F.v5609), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5619 = yr1056_SE();
y_use = F.yu; return rv5619; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2445_DeclStorage(rt_int a_p2446, rt_int a_p2447) {
struct yf2448 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2446 = a_p2446;
F.p2447 = a_p2447;
F.v5624 = Y_UNDEF_I;
yr1026_SB();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
}
yr1044_ST(F.p2446);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p2447);
yr1037_SA(y_str(";", 1));
F.v5624 = yr1056_SE();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1110_Put(&v984, Y_DEFI(F.v5624));
} else {
yr1110_Put(&v998, Y_DEFI(F.v5624));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2452_SymPath(void * a_p2453) {
struct yf2454 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2453 = a_p2453;
F.v5633 = Y_UNDEF_I;
F.v5633 = yr2432_Path(Y_DEFI(((*(yR125 *)y_deref(F.p2453))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p2453))).f_cname));
if (Y_DEFI(((*(yR125 *)y_deref(F.p2453))).f_byref)) {
yr1026_SB();
yr1037_SA(y_str("(*", 2));
yr1044_ST(Y_DEFI(F.v5633));
yr1037_SA(y_str(")", 1));
{ rt_int rv5636 = yr1056_SE();
y_use = F.yu; return rv5636; }
}
{ rt_int rv5637 = Y_DEFI(F.v5633);
y_use = F.yu; return rv5637; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2458_Real(void * a_p2459) {
struct yf2460 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2459 = a_p2459;
F.v5641 = Y_UNDEF_P;
F.v5641 = F.p2459;
while ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5641)))).f_kind) == v894)) {
Y_TICK();
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5641)))).f_target) == ((void *)0))) {
yr1186_FailN(Y_DEFI(v1000), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5641)))).f_name), y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5641 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5641)))).f_target);
}
{ void * rv5643 = Y_DEFP(F.v5641);
y_use = F.yu; return rv5643; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2464_NewRep(rt_int a_p2465, rt_int a_p2466) {
struct yf2467 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2465 = a_p2465;
F.p2466 = a_p2466;
F.v5648 = Y_UNDEF_P;
({ F.v5648 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5648)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5648))) = ((yR110){ .f_kind = F.p2465, .f_tid = F.p2466, .f_tname = F.p2466, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
((*(yR110 *)y_deref(Y_DEFP(F.v5648)))).f_serial = yr1195_NewSerial();
{ void * rv5676 = Y_DEFP(F.v5648);
y_use = F.yu; return rv5676; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2471_CopyRep(void * a_p2472) {
struct yf2473 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2472 = a_p2472;
F.v5680 = Y_UNDEF_P;
({ F.v5680 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5680)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5680))) = (*(yR110 *)y_deref(F.p2472));
((*(yR110 *)y_deref(Y_DEFP(F.v5680)))).f_serial = yr1195_NewSerial();
((*(yR110 *)y_deref(Y_DEFP(F.v5680)))).f_sig = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v5680)))).f_bits = INT64_C(0);
{ void * rv5683 = Y_DEFP(F.v5680);
y_use = F.yu; return rv5683; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2477_IsDiscrete(void * a_p2478) {
struct yf2479 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2478 = a_p2478;
{ rt_int rv5686 = (((((Y_DEFI(((*(yR110 *)y_deref(F.p2478))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2478))).f_kind) == v813))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2478))).f_kind) == v816))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2478))).f_kind) == v819)));
y_use = F.yu; return rv5686; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2483_IsNumeric(void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2484 = a_p2484;
{ rt_int rv5689 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2484))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2484))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2484))).f_kind) == v810)));
y_use = F.yu; return rv5689; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2489_IsArrayLike(void * a_p2490) {
struct yf2491 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2490 = a_p2490;
{ rt_int rv5692 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2490))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2490))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2490))).f_kind) == v846)));
y_use = F.yu; return rv5692; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2495_IsString(void * a_p2496) {
struct yf2497 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2496 = a_p2496;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2496))).f_kind) == v846)) {
{ rt_int rv5696 = 1;
y_use = F.yu; return rv5696; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2496))).f_kind) == v822)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2496))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5698 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2496))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5698; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2496))).f_kind) == v843)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2496))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5700 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2496))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5700; }
}
{ rt_int rv5702 = 0;
y_use = F.yu; return rv5702; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2501_Deep(void * a_p2502) {
struct yf2503 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2502 = a_p2502;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2502))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2502))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2502))).f_kind) == v846)))) {
{ rt_int rv5706 = 1;
y_use = F.yu; return rv5706; }
}
{ rt_int rv5707 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2502))).f_kind) == v825)) && Y_DEFI(((*(yR110 *)y_deref(F.p2502))).f_deep));
y_use = F.yu; return rv5707; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2507_Holds(void * a_p2508, rt_int a_p2509) {
struct yf2510 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2508 = a_p2508;
F.p2509 = a_p2509;
F.v5712 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2508))).f_kind) == v822)) {
{ rt_int rv5713 = (((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2508))).f_elem)))).f_kind) == F.p2509)) || yr2507_Holds(Y_DEFP(((*(yR110 *)y_deref(F.p2508))).f_elem), F.p2509));
y_use = F.yu; return rv5713; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2508))).f_kind) == v825)) {
F.v5712 = Y_DEFP(((*(yR110 *)y_deref(F.p2508))).f_fields);
while ((!(Y_DEFP(F.v5712) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5712)))).f_rep)))).f_kind) == F.p2509)) || yr2507_Holds(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5712)))).f_rep), F.p2509))) {
{ rt_int rv5715 = 1;
y_use = F.yu; return rv5715; }
}
F.v5712 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5712)))).f_next);
}
}
{ rt_int rv5717 = 0;
y_use = F.yu; return rv5717; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2514_HoldsSignal(void * a_p2515) {
struct yf2516 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2515 = a_p2515;
{ rt_int rv5720 = yr2507_Holds(F.p2515, v837);
y_use = F.yu; return rv5720; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2520_NonAssignable(void * a_p2521) {
struct yf2522 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2521 = a_p2521;
F.v5724 = Y_UNDEF_I;
F.v5724 = Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind);
if (((((Y_DEFI(F.v5724) == v837)) || ((Y_DEFI(F.v5724) == v831))) || ((Y_DEFI(F.v5724) == v840)))) {
{ rt_int rv5726 = 1;
y_use = F.yu; return rv5726; }
}
{ rt_int rv5727 = ((yr2507_Holds(F.p2521, v837) || yr2507_Holds(F.p2521, v831)) || yr2507_Holds(F.p2521, v840));
y_use = F.yu; return rv5727; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2526_CType(void * a_p2527) {
struct yf2528 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2527 = a_p2527;
F.v5731 = Y_UNDEF_I;
F.v5731 = Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind);
if (((((Y_DEFI(F.v5731) == v804)) || ((Y_DEFI(F.v5731) == v813))) || ((Y_DEFI(F.v5731) == v816)))) {
{ rt_int rv5733 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5733; }
}
if ((Y_DEFI(F.v5731) == v819)) {
{ rt_int rv5735 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5735; }
}
if ((Y_DEFI(F.v5731) == v810)) {
{ rt_int rv5737 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5737; }
}
if ((Y_DEFI(F.v5731) == v807)) {
{ rt_int rv5739 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5739; }
}
if (((((Y_DEFI(F.v5731) == v822)) || ((Y_DEFI(F.v5731) == v843))) || ((Y_DEFI(F.v5731) == v846)))) {
{ rt_int rv5741 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5741; }
}
if ((Y_DEFI(F.v5731) == v825)) {
{ rt_int rv5742 = Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_cname);
y_use = F.yu; return rv5742; }
}
if ((((Y_DEFI(F.v5731) == v828)) || ((Y_DEFI(F.v5731) == v849)))) {
{ rt_int rv5744 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5744; }
}
if ((Y_DEFI(F.v5731) == v831)) {
{ rt_int rv5746 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5746; }
}
if ((Y_DEFI(F.v5731) == v834)) {
{ rt_int rv5748 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5748; }
}
if ((Y_DEFI(F.v5731) == v837)) {
{ rt_int rv5750 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5750; }
}
if ((Y_DEFI(F.v5731) == v840)) {
{ rt_int rv5752 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5752; }
}
if ((Y_DEFI(F.v5731) == v855)) {
{ rt_int rv5754 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5754; }
}
{ rt_int rv5756 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5756; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2532_DescOf(void * a_p2533) {
struct yf2534 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2533 = a_p2533;
F.v5760 = Y_UNDEF_I;
F.v5760 = Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_kind);
if (((((Y_DEFI(F.v5760) == v804)) || ((Y_DEFI(F.v5760) == v813))) || ((Y_DEFI(F.v5760) == v816)))) {
{ rt_int rv5762 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5762; }
}
if ((((Y_DEFI(F.v5760) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_nlits) >= INT64_C(256))))) {
{ rt_int rv5765 = yr1061_T(y_str("&y_d_byte256", 12));
y_use = F.yu; return rv5765; }
}
if ((Y_DEFI(F.v5760) == v819)) {
{ rt_int rv5767 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5767; }
}
if ((Y_DEFI(F.v5760) == v810)) {
{ rt_int rv5769 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5769; }
}
if ((Y_DEFI(F.v5760) == v807)) {
{ rt_int rv5771 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5771; }
}
if ((((Y_DEFI(F.v5760) == v828)) || ((Y_DEFI(F.v5760) == v849)))) {
{ rt_int rv5773 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5773; }
}
if ((Y_DEFI(F.v5760) == v834)) {
{ rt_int rv5775 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5775; }
}
if ((((Y_DEFI(F.v5760) == v822)) || ((Y_DEFI(F.v5760) == v825)))) {
yr1026_SB();
yr1037_SA(y_str("&", 1));
yr1044_ST(yr2432_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_dname)));
{ rt_int rv5777 = yr1056_SE();
y_use = F.yu; return rv5777; }
}
if ((Y_DEFI(F.v5760) == v846)) {
{ rt_int rv5779 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5779; }
}
if ((Y_DEFI(F.v5760) == v837)) {
{ rt_int rv5781 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5781; }
}
if ((Y_DEFI(F.v5760) == v840)) {
{ rt_int rv5783 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5783; }
}
{ rt_int rv5785 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5785; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2538_NewDesc(void * a_p2539) {
struct yf2540 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2539 = a_p2539;
((*(yR110 *)y_deref(F.p2539))).f_dname = yr1200_Fresh(y_str("yd_", 3));
((*(yR110 *)y_deref(F.p2539))).f_dlevel = Y_DEFI(v1279);
yr2445_DeclStorage(yr1061_T(y_str("ydesc", 5)), Y_DEFI(((*(yR110 *)y_deref(F.p2539))).f_dname));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2544_SameType(void * a_p2545, void * a_p2546) {
struct yf2547 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2545 = a_p2545;
F.p2546 = a_p2546;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2545))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_tid))) {
{ rt_int rv5794 = 1;
y_use = F.yu; return rv5794; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2545))).f_kind) == v846)) && yr2495_IsString(F.p2546))) {
{ rt_int rv5796 = 1;
y_use = F.yu; return rv5796; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_kind) == v846)) && yr2495_IsString(F.p2545))) {
{ rt_int rv5798 = 1;
y_use = F.yu; return rv5798; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2545))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_kind) == v828)))) {
{ rt_int rv5800 = 1;
y_use = F.yu; return rv5800; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2545))).f_kind) == v828)))) {
{ rt_int rv5802 = 1;
y_use = F.yu; return rv5802; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2545))).f_kind) == v858)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_kind) == v858)))) {
{ rt_int rv5804 = 1;
y_use = F.yu; return rv5804; }
}
{ rt_int rv5806 = 0;
y_use = F.yu; return rv5806; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2551_TypeClash(rt_int a_p2552, void * a_p2553, void * a_p2554) {
struct yf2555 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2552 = a_p2552;
F.p2553 = a_p2553;
F.p2554 = a_p2554;
F.v5812 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("type conflict: ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2553))).f_tname));
yr1037_SA(y_str(" expected, ", 11));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2554))).f_tname));
yr1037_SA(y_str(" found", 6));
F.v5812 = yr1056_SE();
yr1157_Fail(F.p2552, Y_DEFI(F.v5812));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2559_CheckType(rt_int a_p2560, void * a_p2561, void * a_p2562) {
struct yf2563 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2560 = a_p2560;
F.p2561 = a_p2561;
F.p2562 = a_p2562;
if ((!yr2544_SameType(F.p2561, F.p2562))) {
yr2551_TypeClash(F.p2560, F.p2561, F.p2562);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2567_CheckRepresented(void * a_p2568, rt_int a_p2569) {
struct yf2570 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2568 = a_p2568;
F.p2569 = a_p2569;
if (Y_DEFI(((*(yR110 *)y_deref(F.p2568))).f_abstract)) {
yr1186_FailN(F.p2569, Y_DEFI(((*(yR110 *)y_deref(F.p2568))).f_tname), y_str(" is a type, not a representation (VI.A.1)", 41));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2574_SigText(void * a_p2575) {
struct yf2576 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2575 = a_p2575;
F.v5827 = Y_UNDEF_I;
F.v5827 = Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_kind);
F.v5829 = Y_UNDEF_P;
F.v5831 = Y_UNDEF_P;
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_tid));
if (((yr2477_IsDiscrete(F.p2575) || ((Y_DEFI(F.v5827) == v810))) || ((Y_DEFI(F.v5827) == v807)))) {
yr1037_SA(y_str("[", 1));
if (Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_hasm)) {
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_mlo));
yr1037_SA(y_str("..", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_mhi));
} else {
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_lo));
yr1037_SA(y_str("..", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_hi));
}
yr1037_SA(y_str("]", 1));
if ((Y_DEFI(F.v5827) == v810)) {
yr1037_SA(y_str("P", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_prec));
}
if ((Y_DEFI(F.v5827) == v807)) {
yr1037_SA(y_str("S", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_fsn));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_fsd));
}
} else if ((Y_DEFI(F.v5827) == v822)) {
yr1037_SA(y_str("(", 1));
F.v5829 = Y_DEFP(((*(yR110 *)y_deref(F.p2575))).f_idx);
while ((!(Y_DEFP(F.v5829) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2580_RepSig(Y_DEFP(F.v5829)));
yr1037_SA(y_str(",", 1));
F.v5829 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5829)))).f_link);
}
yr1037_SA(y_str("OF ", 3));
yr1044_ST(yr2580_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2575))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5827) == v843)) {
yr1037_SA(y_str("(", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_nidx));
yr1037_SA(y_str("D ", 2));
yr1044_ST(yr2580_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2575))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5827) == v825)) {
yr1037_SA(y_str("{", 1));
F.v5831 = Y_DEFP(((*(yR110 *)y_deref(F.p2575))).f_fields);
while ((!(Y_DEFP(F.v5831) == ((void *)0)))) {
Y_TICK();
if (Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5831)))).f_isconst)) {
yr1037_SA(y_str("C ", 2));
} else {
yr1037_SA(y_str("V ", 2));
}
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5831)))).f_name));
yr1037_SA(y_str(":", 1));
yr1044_ST(yr2580_RepSig(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5831)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v5831 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5831)))).f_next);
}
yr1037_SA(y_str("}", 1));
} else if ((((Y_DEFI(F.v5827) == v834)) || ((Y_DEFI(F.v5827) == v831)))) {
yr1037_SA(y_str("(", 1));
yr1044_ST(yr2580_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2575))).f_elem)));
yr1037_SA(y_str(")", 1));
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_packed)) {
yr1037_SA(y_str(" PACKED ", 8));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_pbits));
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_align) == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2575))).f_align));
}
{ rt_int rv5857 = yr1056_SE();
y_use = F.yu; return rv5857; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2580_RepSig(void * a_p2581) {
struct yf2582 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2581 = a_p2581;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2581))).f_sig) == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2581))).f_sig = yr1075_Name(yr2574_SigText(F.p2581));
}
{ rt_int rv5861 = Y_DEFI(((*(yR110 *)y_deref(F.p2581))).f_sig);
y_use = F.yu; return rv5861; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2586_Identical(void * a_p2587, void * a_p2588) {
struct yf2589 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2587 = a_p2587;
F.p2588 = a_p2588;
if ((F.p2587 == F.p2588)) {
{ rt_int rv5866 = 1;
y_use = F.yu; return rv5866; }
}
if ((!yr2544_SameType(F.p2587, F.p2588))) {
{ rt_int rv5868 = 0;
y_use = F.yu; return rv5868; }
}
{ rt_int rv5869 = (yr2580_RepSig(F.p2587) == yr2580_RepSig(F.p2588));
y_use = F.yu; return rv5869; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2593_IsLiteralNode(void * a_p2594) {
struct yf2595 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2594 = a_p2594;
if ((((((Y_DEFI(((*(yR105 *)y_deref(F.p2594))).f_kind) == v759)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2594))).f_kind) == v765))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2594))).f_kind) == v762))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2594))).f_kind) == v768)))) {
{ rt_int rv5872 = (Y_DEFP(((*(yR105 *)y_deref(F.p2594))).f_d) == ((void *)0));
y_use = F.yu; return rv5872; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2594))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2594))).f_kind) == v801)))) {
{ rt_int rv5873 = yr2593_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2594))).f_a));
y_use = F.yu; return rv5873; }
}
{ rt_int rv5875 = 0;
y_use = F.yu; return rv5875; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2599_StoreBounds(void * a_p2600, yarr a_p2602) {
struct yf2603 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2600 = a_p2600;
F.p2602 = a_p2602;
F.v5880 = Y_UNDEF_I;
F.v5882 = Y_UNDEF_I;
F.v5880 = yr1200_Fresh(y_str("lo", 2));
F.v5882 = yr1200_Fresh(y_str("hi", 2));
yr2445_DeclStorage(yr1061_T(F.p2602), Y_DEFI(F.v5880));
yr2445_DeclStorage(yr1061_T(F.p2602), Y_DEFI(F.v5882));
yr1132_Emit(yr3453_Join(yr2432_Path(Y_DEFI(v1279), Y_DEFI(F.v5880)), yr1061_T(y_str(" = ", 3)), yr3453_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_lo), yr1061_T(y_str(";", 1)), INT64_C(0))));
yr1132_Emit(yr3453_Join(yr2432_Path(Y_DEFI(v1279), Y_DEFI(F.v5882)), yr1061_T(y_str(" = ", 3)), yr3453_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_hi), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR110 *)y_deref(F.p2600))).f_lo = Y_DEFI(F.v5880);
((*(yR110 *)y_deref(F.p2600))).f_hi = Y_DEFI(F.v5882);
((*(yR110 *)y_deref(F.p2600))).f_dname = Y_DEFI(F.v5880);
((*(yR110 *)y_deref(F.p2600))).f_dlevel = Y_DEFI(v1279);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2607_LoText(void * a_p2608) {
struct yf2609 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2608 = a_p2608;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_lo) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_kind) == v825))))) {
{ rt_int rv5895 = yr2432_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_lo));
y_use = F.yu; return rv5895; }
}
{ rt_int rv5896 = Y_DEFI(((*(yR110 *)y_deref(F.p2608))).f_lo);
y_use = F.yu; return rv5896; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2613_HiText(void * a_p2614) {
struct yf2615 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2614 = a_p2614;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_hi) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_kind) == v825))))) {
{ rt_int rv5901 = yr2432_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_hi));
y_use = F.yu; return rv5901; }
}
{ rt_int rv5902 = Y_DEFI(((*(yR110 *)y_deref(F.p2614))).f_hi);
y_use = F.yu; return rv5902; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2619_AdoptLiteral(void * a_p2620, void * a_p2621, void * a_p2622) {
struct yf2623 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2620 = a_p2620;
F.p2621 = a_p2621;
F.p2622 = a_p2622;
F.v5908 = Y_UNDEF_P;
if ((((!yr2593_IsLiteralNode(F.p2620)) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2621))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2622))).f_kind))))) || (!yr2483_IsNumeric(F.p2622)))) {
{ void * rv5909 = F.p2621;
y_use = F.yu; return rv5909; }
}
if (yr2627_HasQualifier(F.p2620)) {
{ void * rv5910 = F.p2621;
y_use = F.yu; return rv5910; }
}
F.v5908 = yr2471_CopyRep(F.p2621);
((*(yR110 *)y_deref(Y_DEFP(F.v5908)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(F.p2622))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.v5908)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(F.p2622))).f_tname);
{ void * rv5911 = Y_DEFP(F.v5908);
y_use = F.yu; return rv5911; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2627_HasQualifier(void * a_p2628) {
struct yf2629 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2628 = a_p2628;
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2628))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2628))).f_kind) == v801)))) {
{ rt_int rv5914 = yr2627_HasQualifier(Y_DEFP(((*(yR105 *)y_deref(F.p2628))).f_a));
y_use = F.yu; return rv5914; }
}
{ rt_int rv5915 = (!(Y_DEFP(((*(yR105 *)y_deref(F.p2628))).f_d) == ((void *)0)));
y_use = F.yu; return rv5915; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2633_Gcd(rt_int a_p2634, rt_int a_p2635) {
struct yf2636 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2634 = a_p2634;
F.p2635 = a_p2635;
F.v5920 = Y_UNDEF_I;
F.v5922 = Y_UNDEF_I;
F.v5924 = Y_UNDEF_I;
F.v5920 = F.p2634;
F.v5922 = F.p2635;
if ((Y_DEFI(F.v5920) < INT64_C(0))) {
F.v5920 = y_range(y_neg(Y_DEFI(F.v5920)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v5922) < INT64_C(0))) {
F.v5922 = y_range(y_neg(Y_DEFI(F.v5922)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(Y_DEFI(F.v5922) == INT64_C(0)))) {
Y_TICK();
F.v5924 = y_range(y_mod(Y_DEFI(F.v5920), Y_DEFI(F.v5922)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5920 = Y_DEFI(F.v5922);
F.v5922 = Y_DEFI(F.v5924);
}
if ((Y_DEFI(F.v5920) == INT64_C(0))) {
{ rt_int rv5933 = INT64_C(1);
y_use = F.yu; return rv5933; }
}
{ rt_int rv5934 = Y_DEFI(F.v5920);
y_use = F.yu; return rv5934; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2640_MulChk(rt_int a_p2641, rt_int a_p2642, rt_int a_p2643) {
struct yf2644 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2641 = a_p2641;
F.p2642 = a_p2642;
F.p2643 = a_p2643;
F.v5940 = Y_UNDEF_I;
F.v5942 = Y_UNDEF_I;
F.v5940 = F.p2641;
F.v5942 = F.p2642;
if ((Y_DEFI(F.v5940) < INT64_C(0))) {
F.v5940 = y_range(y_neg(Y_DEFI(F.v5940)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v5942) < INT64_C(0))) {
F.v5942 = y_range(y_neg(Y_DEFI(F.v5942)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(Y_DEFI(F.v5940) == INT64_C(0)))) && ((Y_DEFI(F.v5942) > (y_div(v906, Y_DEFI(F.v5940))))))) {
yr1178_FailS(F.p2643, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5951 = y_range(y_mul(F.p2641, F.p2642), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5951; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2648_PowChk(rt_int a_p2649, rt_int a_p2650, rt_int a_p2651) {
struct yf2652 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2649 = a_p2649;
F.p2650 = a_p2650;
F.p2651 = a_p2651;
F.v5957 = Y_UNDEF_I;
F.v5957 = INT64_C(1);
F.lo5962 = INT64_C(1);
F.hi5963 = F.p2650;
{ rt_int hi5967 = F.hi5963;
for (rt_int i5966 = F.lo5962; i5966 <= hi5967; i5966++) { F.c_5965 = i5966; Y_TICK();
F.v5957 = yr2640_MulChk(Y_DEFI(F.v5957), F.p2649, F.p2651);
if (i5966 == hi5967) break;
}}
{ rt_int rv5968 = Y_DEFI(F.v5957);
y_use = F.yu; return rv5968; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2656_ScaleRatio(void * a_p2657, void * a_p2658, rt_int * a_p2659, rt_int * a_p2660, rt_int * a_p2661) {
struct yf2662 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2657 = a_p2657;
F.p2658 = a_p2658;
F.p2659_o = a_p2659;
F.p2660_o = a_p2660;
F.p2661_o = a_p2661;
F.v5976 = Y_UNDEF_I;
F.v5978 = Y_UNDEF_I;
F.v5980 = Y_UNDEF_I;
F.v5982 = Y_UNDEF_I;
F.v5984 = Y_UNDEF_I;
F.v5986 = Y_UNDEF_I;
F.p2659 = yr1061_T(y_str("1", 1));
F.p2660 = yr1061_T(y_str("1", 1));
F.p2661 = 1;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2657))).f_fsd) == INT64_C(0))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2658))).f_fsd) == INT64_C(0))))) {
(*F.p2659_o) = F.p2659;
(*F.p2660_o) = F.p2660;
(*F.p2661_o) = F.p2661;
y_use = F.yu; return;
}
F.v5976 = yr2633_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2657))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2658))).f_fsn));
F.v5978 = yr2633_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2657))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2658))).f_fsd));
F.v5980 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2657))).f_fsn), Y_DEFI(F.v5976)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5982 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2658))).f_fsd), Y_DEFI(F.v5978)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5984 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2657))).f_fsd), Y_DEFI(F.v5978)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5986 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2658))).f_fsn), Y_DEFI(F.v5976)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2661 = (((((Y_DEFI(F.v5980) == INT64_C(1))) && ((Y_DEFI(F.v5982) == INT64_C(1)))) && ((Y_DEFI(F.v5984) == INT64_C(1)))) && ((Y_DEFI(F.v5986) == INT64_C(1))));
F.p2659 = yr2666_Factor(Y_DEFI(F.v5980), Y_DEFI(F.v5982));
F.p2660 = yr2666_Factor(Y_DEFI(F.v5984), Y_DEFI(F.v5986));
(*F.p2659_o) = F.p2659;
(*F.p2660_o) = F.p2660;
(*F.p2661_o) = F.p2661;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2666_Factor(rt_int a_p2667, rt_int a_p2668) {
struct yf2669 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2667 = a_p2667;
F.p2668 = a_p2668;
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(F.p2667);
yr1037_SA(y_str(")", 1));
if ((!(F.p2668 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
yr1050_SI(F.p2668);
yr1037_SA(y_str(")", 1));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv6009 = yr1056_SE();
y_use = F.yu; return rv6009; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2673_SetScale(void * a_p2674, rt_int a_p2675, rt_int a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2674 = a_p2674;
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.v6015 = Y_UNDEF_I;
F.v6015 = yr2633_Gcd(F.p2675, F.p2676);
((*(yR110 *)y_deref(F.p2674))).f_fsn = y_range(y_div(F.p2675, Y_DEFI(F.v6015)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2674))).f_fsd = y_range(y_div(F.p2676, Y_DEFI(F.v6015)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2674))).f_fsd) < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2674))).f_fsn = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2674))).f_fsn)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2674))).f_fsd = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2674))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2681_Qualify(void * a_p2682, void * a_p2683) {
struct yf2684 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2682 = a_p2682;
F.p2683 = a_p2683;
F.v6025 = Y_UNDEF_I;
F.v6027 = Y_UNDEF_I;
F.v6029 = Y_UNDEF_I;
F.v6031 = Y_UNDEF_I;
F.v6033 = Y_UNDEF_P;
F.v6035 = Y_UNDEF_P;
F.v6037 = Y_UNDEF_I;
F.v6039 = Y_UNDEF_I;
F.v6041 = Y_UNDEF_I;
F.v6043 = Y_UNDEF_I;
F.v6045 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_kind) == v807)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_c) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2961_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_c), &F.v6037, &F.v6043, &F.v6045);
if (((!Y_DEFI(F.v6037)) || ((Y_DEFI(F.v6043) <= INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR110 *)y_deref(F.p2682))).f_fsn = Y_DEFI(F.v6043);
((*(yR110 *)y_deref(F.p2682))).f_fsd = Y_DEFI(F.v6045);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6043));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(F.v6045));
((*(yR110 *)y_deref(F.p2682))).f_scale = yr1056_SE();
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_a), F.p2682, &F.v6025, &F.v6033);
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_b), F.p2682, &F.v6027, &F.v6035);
F.v6033 = yr2619_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_a), Y_DEFP(F.v6033), F.p2682);
F.v6035 = yr2619_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_b), Y_DEFP(F.v6035), F.p2682);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_kind) == v807)) {
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), F.p2682, Y_DEFP(F.v6033));
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), F.p2682, Y_DEFP(F.v6035));
yr2656_ScaleRatio(Y_DEFP(F.v6033), F.p2682, &F.v6029, &F.v6031, &F.v6039);
((*(yR110 *)y_deref(F.p2682))).f_lo = yr3453_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6025), yr3453_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6029), yr3453_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6031), yr1061_T(y_str(", 1)", 4)))));
yr2656_ScaleRatio(Y_DEFP(F.v6035), F.p2682, &F.v6029, &F.v6031, &F.v6039);
((*(yR110 *)y_deref(F.p2682))).f_hi = yr3453_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6027), yr3453_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6029), yr3453_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6031), yr1061_T(y_str(", 0)", 4)))));
((*(yR110 *)y_deref(F.p2682))).f_dname = INT64_C(0);
yr2599_StoreBounds(F.p2682, y_str("yfix", 4));
((*(yR110 *)y_deref(F.p2682))).f_abstract = 0;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_kind) == v810)) {
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), F.p2682, Y_DEFP(F.v6033));
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), F.p2682, Y_DEFP(F.v6035));
((*(yR110 *)y_deref(F.p2682))).f_lo = Y_DEFI(F.v6025);
((*(yR110 *)y_deref(F.p2682))).f_hi = Y_DEFI(F.v6027);
((*(yR110 *)y_deref(F.p2682))).f_dname = INT64_C(0);
if ((!((yr2593_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_a)) && yr2593_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_b)))))) {
yr2599_StoreBounds(F.p2682, y_str("double", 6));
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_d), &F.v6037, &F.v6041);
if ((!Y_DEFI(F.v6037))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("PRECISION is a manifest constant", 32));
}
if ((((Y_DEFI(F.v6041) < INT64_C(1))) || ((Y_DEFI(F.v6041) > INT64_C(15))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6041));
((*(yR110 *)y_deref(F.p2682))).f_prec = yr1056_SE();
((*(yR110 *)y_deref(F.p2682))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2477_IsDiscrete(F.p2682))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_d) == ((void *)0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), F.p2682, Y_DEFP(F.v6033));
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2683))).f_line), F.p2682, Y_DEFP(F.v6035));
((*(yR110 *)y_deref(F.p2682))).f_lo = Y_DEFI(F.v6025);
((*(yR110 *)y_deref(F.p2682))).f_hi = Y_DEFI(F.v6027);
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_a), &F.v6037, &((*(yR110 *)y_deref(F.p2682))).f_mlo);
((*(yR110 *)y_deref(F.p2682))).f_hasm = Y_DEFI(F.v6037);
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2683))).f_b), &F.v6037, &((*(yR110 *)y_deref(F.p2682))).f_mhi);
((*(yR110 *)y_deref(F.p2682))).f_hasm = (Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_hasm) && Y_DEFI(F.v6037));
((*(yR110 *)y_deref(F.p2682))).f_abstract = 0;
((*(yR110 *)y_deref(F.p2682))).f_dname = INT64_C(0);
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_hasm))) {
yr2599_StoreBounds(F.p2682, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2688_DefineLits(void * a_p2689) {
struct yf2690 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2689 = a_p2689;
F.v6077 = Y_UNDEF_P;
F.v6077 = Y_DEFP(((*(yR110 *)y_deref(F.p2689))).f_lits);
F.v6079 = Y_UNDEF_P;
F.v6081 = Y_UNDEF_I;
F.v6081 = INT64_C(0);
while ((!(Y_DEFP(F.v6077) == ((void *)0)))) {
Y_TICK();
if ((!(yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_name)) == ((void *)0)))) {
F.v6079 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_name));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6079)))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6079)))).f_depth) == Y_DEFI(v1273))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_name), y_str(" is declared twice in this scope", 32));
}
}
F.v6079 = yr2323_NewSym(v873, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v6079)))).f_rep = F.p2689;
((*(yR125 *)y_deref(Y_DEFP(F.v6079)))).f_mval = Y_DEFI(F.v6081);
((*(yR125 *)y_deref(Y_DEFP(F.v6079)))).f_hasmv = 1;
yr2425_Define(Y_DEFP(F.v6079), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_line));
F.v6081 = y_range(y_add(Y_DEFI(F.v6081), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6077 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6077)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2694_SetRange(void * a_p2695, rt_int a_p2696, rt_int a_p2697) {
struct yf2698 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2695 = a_p2695;
F.p2696 = a_p2696;
F.p2697 = a_p2697;
yr1026_SB();
yr1050_SI(F.p2696);
((*(yR110 *)y_deref(F.p2695))).f_lo = yr1056_SE();
yr1026_SB();
yr1050_SI(F.p2697);
((*(yR110 *)y_deref(F.p2695))).f_hi = yr1056_SE();
((*(yR110 *)y_deref(F.p2695))).f_mlo = F.p2696;
((*(yR110 *)y_deref(F.p2695))).f_mhi = F.p2697;
((*(yR110 *)y_deref(F.p2695))).f_hasm = 1;
((*(yR110 *)y_deref(F.p2695))).f_dname = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2702_NewTid(rt_int a_p2703) {
struct yf2704 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2703 = a_p2703;
F.v6096 = Y_UNDEF_I;
F.v6096 = yr1195_NewSerial();
yr1026_SB();
if ((!(F.p2703 == INT64_C(0)))) {
yr1044_ST(F.p2703);
} else {
yr1037_SA(y_str("anonymous", 9));
}
yr1037_SA(y_str("#", 1));
yr1050_SI(Y_DEFI(F.v6096));
{ rt_int rv6100 = yr1056_SE();
y_use = F.yu; return rv6100; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2708_MakeRep(void * a_p2709, rt_int a_p2710, rt_int a_p2711) {
struct yf2712 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2709 = a_p2709;
F.p2710 = a_p2710;
F.p2711 = a_p2711;
F.v6106 = Y_UNDEF_P;
F.v6106 = yr2723_MakeRep1(F.p2709, F.p2710, F.p2711);
F.v6108 = Y_UNDEF_P;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2709))).f_x) == ((void *)0)))) {
F.v6106 = yr2823_ApplyStorage(Y_DEFP(F.v6106), Y_DEFP(((*(yR105 *)y_deref(F.p2709))).f_x));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2709))).f_text) == INT64_C(0)))) {
F.v6108 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2709))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2709))).f_line)));
if (((!yr2716_Conforms(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6108)))).f_rep), Y_DEFP(F.v6106))) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2709))).f_kind) == v672)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6106)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6108)))).f_rep)))).f_tid)))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2709))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6108)))).f_rep)))).f_tname), y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv6111 = Y_DEFP(F.v6106);
y_use = F.yu; return rv6111; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2716_Conforms(void * a_p2717, void * a_p2718) {
struct yf2719 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2717 = a_p2717;
F.p2718 = a_p2718;
F.v6116 = Y_UNDEF_P;
F.v6118 = Y_UNDEF_P;
F.v6120 = Y_UNDEF_P;
F.v6122 = Y_UNDEF_P;
F.v6124 = Y_UNDEF_P;
F.v6126 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2718))).f_kind)))) {
{ rt_int rv6128 = 0;
y_use = F.yu; return rv6128; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v825)) {
F.v6116 = Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_fields);
F.v6118 = Y_DEFP(((*(yR110 *)y_deref(F.p2718))).f_fields);
while ((((!(Y_DEFP(F.v6116) == ((void *)0)))) && ((!(Y_DEFP(F.v6118) == ((void *)0)))))) {
Y_TICK();
if (((((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6116)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6118)))).f_name)))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6116)))).f_isconst) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6118)))).f_isconst))))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6116)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6118)))).f_variant)))))) {
{ rt_int rv6130 = 0;
y_use = F.yu; return rv6130; }
}
if ((!yr2544_SameType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6116)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6118)))).f_rep)))) {
{ rt_int rv6132 = 0;
y_use = F.yu; return rv6132; }
}
F.v6116 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6116)))).f_next);
F.v6118 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6118)))).f_next);
}
{ rt_int rv6133 = (((Y_DEFP(F.v6116) == ((void *)0))) && ((Y_DEFP(F.v6118) == ((void *)0))));
y_use = F.yu; return rv6133; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v822)) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p2718))).f_nidx)))) {
{ rt_int rv6135 = 0;
y_use = F.yu; return rv6135; }
}
F.v6120 = Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_idx);
F.v6122 = Y_DEFP(((*(yR110 *)y_deref(F.p2718))).f_idx);
while ((!(Y_DEFP(F.v6120) == ((void *)0)))) {
Y_TICK();
if ((!yr2586_Identical(Y_DEFP(F.v6120), Y_DEFP(F.v6122)))) {
{ rt_int rv6137 = 0;
y_use = F.yu; return rv6137; }
}
F.v6120 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6120)))).f_link);
F.v6122 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6122)))).f_link);
}
{ rt_int rv6138 = yr2544_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2718))).f_elem));
y_use = F.yu; return rv6138; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v816)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v819)))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_nlits) == Y_DEFI(((*(yR110 *)y_deref(F.p2718))).f_nlits)))) {
{ rt_int rv6140 = 0;
y_use = F.yu; return rv6140; }
}
F.v6124 = Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_lits);
F.v6126 = Y_DEFP(((*(yR110 *)y_deref(F.p2718))).f_lits);
while ((((!(Y_DEFP(F.v6124) == ((void *)0)))) && ((!(Y_DEFP(F.v6126) == ((void *)0)))))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6124)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6126)))).f_name)))) || (!yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6124)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6126)))).f_text))))) {
{ rt_int rv6142 = 0;
y_use = F.yu; return rv6142; }
}
F.v6124 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6124)))).f_next);
F.v6126 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6126)))).f_next);
}
{ rt_int rv6144 = 1;
y_use = F.yu; return rv6144; }
}
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v834)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v831))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2717))).f_kind) == v828)))) {
if ((((Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_elem) == ((void *)0))) || ((Y_DEFP(((*(yR110 *)y_deref(F.p2718))).f_elem) == ((void *)0))))) {
{ rt_int rv6146 = 1;
y_use = F.yu; return rv6146; }
}
{ rt_int rv6147 = yr2544_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2718))).f_elem));
y_use = F.yu; return rv6147; }
}
{ rt_int rv6149 = 1;
y_use = F.yu; return rv6149; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2723_MakeRep1(void * a_p2724, rt_int a_p2725, rt_int a_p2726) {
struct yf2727 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2724 = a_p2724;
F.p2725 = a_p2725;
F.p2726 = a_p2726;
F.v6155 = Y_UNDEF_P;
F.v6157 = Y_UNDEF_P;
F.v6159 = Y_UNDEF_P;
F.v6161 = Y_UNDEF_P;
F.v6163 = Y_UNDEF_P;
F.v6165 = Y_UNDEF_I;
F.v6165 = Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_kind);
F.v6167 = Y_UNDEF_P;
F.v6169 = Y_UNDEF_I;
F.v6171 = Y_UNDEF_I;
F.v6169 = INT64_C(0);
F.v6171 = F.p2725;
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_text) == INT64_C(0)))) {
F.v6163 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_text), y_str(" is not a type", 14));
}
F.v6169 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_rep)))).f_tid);
F.v6171 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_rep)))).f_tname);
}
if ((Y_DEFI(F.v6165) == v672)) {
F.v6163 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_name), y_str(" is not a representation", 24));
}
F.v6155 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6163)))).f_rep);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a) == ((void *)0)))) {
F.v6155 = yr2471_CopyRep(Y_DEFP(F.v6155));
yr2681_Qualify(Y_DEFP(F.v6155), Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a));
}
{ void * rv6176 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6176; }
}
if ((Y_DEFI(F.v6169) == INT64_C(0))) {
F.v6169 = yr2702_NewTid(F.p2725);
if ((Y_DEFI(F.v6171) == INT64_C(0))) {
F.v6171 = Y_DEFI(F.v6169);
}
}
if ((Y_DEFI(F.v6165) == v675)) {
F.v6155 = yr2464_NewRep(v816, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_ordered = (Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_flag) == INT64_C(1));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nlits = yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a));
yr2694_SetRange(Y_DEFP(F.v6155), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2688_DefineLits(Y_DEFP(F.v6155));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_b) == ((void *)0)))) {
yr2681_Qualify(Y_DEFP(F.v6155), Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_b));
}
{ void * rv6183 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6183; }
}
if ((Y_DEFI(F.v6165) == v678)) {
F.v6155 = yr2464_NewRep(v819, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nlits = yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nlits) > INT64_C(256))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line), y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2694_SetRange(Y_DEFP(F.v6155), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_b) == ((void *)0)))) {
yr2681_Qualify(Y_DEFP(F.v6155), Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_b));
}
{ void * rv6190 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6190; }
}
if ((Y_DEFI(F.v6165) == v681)) {
F.v6155 = yr2464_NewRep(v822, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
F.v6167 = Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a);
F.v6161 = ((void *)0);
while ((!(Y_DEFP(F.v6167) == ((void *)0)))) {
Y_TICK();
F.v6159 = yr2471_CopyRep(yr2708_MakeRep(Y_DEFP(F.v6167), INT64_C(0), 0));
if ((!yr2477_IsDiscrete(Y_DEFP(F.v6159)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6167)))).f_line), y_str("an index is an integer or scalar representation", 47));
}
yr2567_CheckRepresented(Y_DEFP(F.v6159), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6167)))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v6159)))).f_link = ((void *)0);
if ((Y_DEFP(F.v6161) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_idx = Y_DEFP(F.v6159);
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6161)))).f_link = Y_DEFP(F.v6159);
}
F.v6161 = Y_DEFP(F.v6159);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nidx = y_range(y_add(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nidx), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6167 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6167)))).f_next);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_nidx) > INT64_C(8))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line), y_str("this implementation takes arrays of up to 8 dimensions", 54));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_b), INT64_C(0), F.p2726);
if ((!F.p2726)) {
yr2567_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line));
yr2743_BuildArrayDesc(Y_DEFP(F.v6155));
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_abstract = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem)))).f_abstract);
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_abstract))) {
yr2743_BuildArrayDesc(Y_DEFP(F.v6155));
}
}
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_deep = 1;
{ void * rv6200 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6200; }
}
if ((Y_DEFI(F.v6165) == v684)) {
F.v6155 = yr2464_NewRep(v825, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
yr2773_MakeRecord(Y_DEFP(F.v6155), F.p2724, F.p2726);
{ void * rv6201 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6201; }
}
if (((((Y_DEFI(F.v6165) == v690)) || ((Y_DEFI(F.v6165) == v687))) || ((Y_DEFI(F.v6165) == v693)))) {
if ((Y_DEFI(F.v6165) == v690)) {
F.v6155 = yr2464_NewRep(v828, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a)))).f_kind) == v672)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a)))).f_a) == ((void *)0)))) && ((yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a)))).f_name)) == ((void *)0))))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_forward = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a)))).f_name);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_fwdscope = Y_DEFI(v1273);
F.v6167 = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v6167)))).f_rep = Y_DEFP(F.v6155);
((*(yR105 *)y_deref(Y_DEFP(F.v6167)))).f_next = Y_DEFP(v1364);
v1364 = Y_DEFP(F.v6167);
{ void * rv6202 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6202; }
}
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a), INT64_C(0), 0);
{ void * rv6205 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6205; }
}
if ((Y_DEFI(F.v6165) == v687)) {
F.v6155 = yr2464_NewRep(v831, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a), INT64_C(0), F.p2726);
{ void * rv6207 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6207; }
}
F.v6155 = yr2464_NewRep(v834, Y_DEFI(F.v6169));
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_tname = Y_DEFI(F.v6171);
((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2724))).f_a), INT64_C(0), 0);
if ((!yr2477_IsDiscrete(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line), y_str("a set is of an integer or scalar representation", 47));
}
yr2567_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6155)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line));
{ void * rv6211 = Y_DEFP(F.v6155);
y_use = F.yu; return rv6211; }
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2724))).f_line), y_str("this representation is not translated", 37));
{ void * rv6213 = ((void *)0);
y_use = F.yu; return rv6213; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2731_ResolvePending(rt_int a_p2732, void * a_p2733) {
struct yf2734 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2732 = a_p2732;
F.p2733 = a_p2733;
F.v6218 = Y_UNDEF_P;
F.v6218 = Y_DEFP(v1364);
F.v6220 = Y_UNDEF_P;
F.v6220 = ((void *)0);
while ((!(Y_DEFP(F.v6218) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6218)))).f_rep)))).f_forward) == F.p2732)) {
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6218)))).f_rep)))).f_elem = F.p2733;
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6218)))).f_rep)))).f_forward = INT64_C(0);
if ((Y_DEFP(F.v6220) == ((void *)0))) {
v1364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6218)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v6220)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6218)))).f_next);
}
} else {
F.v6220 = Y_DEFP(F.v6218);
}
F.v6218 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6218)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2738_CheckPending(void) {
struct yf2739 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v6224 = Y_UNDEF_P;
F.v6224 = Y_DEFP(v1364);
while ((!(Y_DEFP(F.v6224) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6224)))).f_rep)))).f_fwdscope) >= Y_DEFI(v1273))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6224)))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6224)))).f_rep)))).f_forward), y_str(" is named by a pointer but not declared", 39));
}
F.v6224 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6224)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2743_BuildArrayDesc(void * a_p2744) {
struct yf2745 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2744 = a_p2744;
F.v6229 = Y_UNDEF_P;
F.v6231 = Y_UNDEF_I;
F.v6233 = Y_UNDEF_I;
yr2538_NewDesc(F.p2744);
yr1026_SB();
yr1037_SA(y_str("{ rt_int lo[", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2744))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v6229 = Y_DEFP(((*(yR110 *)y_deref(F.p2744))).f_idx);
F.v6233 = 1;
while ((!(Y_DEFP(F.v6229) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6233))) {
yr1037_SA(y_str(", ", 2));
}
F.v6233 = 0;
yr1044_ST(yr2607_LoText(Y_DEFP(F.v6229)));
F.v6229 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6229)))).f_link);
}
yr1037_SA(y_str("}, hi[", 6));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2744))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v6229 = Y_DEFP(((*(yR110 *)y_deref(F.p2744))).f_idx);
F.v6233 = 1;
while ((!(Y_DEFP(F.v6229) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6233))) {
yr1037_SA(y_str(", ", 2));
}
F.v6233 = 0;
yr1044_ST(yr2613_HiText(Y_DEFP(F.v6229)));
F.v6229 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6229)))).f_link);
}
yr1037_SA(y_str("}; y_desc_array(", 16));
yr1044_ST(yr2532_DescOf(F.p2744));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2744))).f_nidx));
yr1037_SA(y_str(", lo, hi, ", 10));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2744))).f_elem)));
yr1037_SA(y_str("); }", 4));
F.v6231 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6231));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2749_AddField(void * a_p2750, void * * a_p2751, rt_int a_p2752, void * a_p2753, rt_int a_p2754, rt_int a_p2755, void * a_p2756, rt_int a_p2757) {
struct yf2758 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2750 = a_p2750;
F.p2751 = a_p2751;
F.p2752 = a_p2752;
F.p2753 = a_p2753;
F.p2754 = a_p2754;
F.p2755 = a_p2755;
F.p2756 = a_p2756;
F.p2757 = a_p2757;
F.v6258 = Y_UNDEF_P;
F.v6258 = Y_DEFP(((*(yR110 *)y_deref(F.p2750))).f_fields);
while ((!(Y_DEFP(F.v6258) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6258)))).f_name) == F.p2752)) {
yr1186_FailN(F.p2757, F.p2752, y_str(" is a component twice", 21));
}
F.v6258 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6258)))).f_next);
}
({ F.v6258 = y_new(sizeof(yR115)); y_initu(&yd_116, y_deref(F.v6258)); });
(*(yR115 *)y_deref(Y_DEFP(F.v6258))) = ((yR115){ .f_name = F.p2752, .f_rep = F.p2753, .f_isconst = F.p2754, .f_variant = F.p2755, .f_labels = F.p2756, .f_next = ((void *)0), .f_at = INT64_C(-1) });
if ((Y_DEFP((*F.p2751)) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2750))).f_fields = Y_DEFP(F.v6258);
} else {
((*(yR115 *)y_deref(Y_DEFP((*F.p2751))))).f_next = Y_DEFP(F.v6258);
}
(*F.p2751) = Y_DEFP(F.v6258);
if (yr2501_Deep(F.p2753)) {
((*(yR110 *)y_deref(F.p2750))).f_deep = 1;
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2753))).f_abstract)) {
((*(yR110 *)y_deref(F.p2750))).f_abstract = 1;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2762_AddFields(void * a_p2763, void * * a_p2764, void * a_p2765, rt_int a_p2766, void * a_p2767, rt_int a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2763 = a_p2763;
F.p2764 = a_p2764;
F.p2765 = a_p2765;
F.p2766 = a_p2766;
F.p2767 = a_p2767;
F.p2768 = a_p2768;
F.v6271 = Y_UNDEF_P;
F.v6271 = F.p2765;
F.v6273 = Y_UNDEF_P;
F.v6273 = F.p2765;
F.v6275 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v6271) == ((void *)0)))) {
Y_TICK();
F.v6275 = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6271)))).f_b), INT64_C(0), F.p2768);
if ((!F.p2768)) {
yr2567_CheckRepresented(Y_DEFP(F.v6275), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6271)))).f_line));
}
F.v6273 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6271)))).f_a);
while ((!(Y_DEFP(F.v6273) == ((void *)0)))) {
Y_TICK();
yr2749_AddField(F.p2763, &(*F.p2764), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_name), Y_DEFP(F.v6275), (Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6271)))).f_ival) == v270), F.p2766, F.p2767, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_line));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_a) == ((void *)0)))) {
((*(yR115 *)y_deref(Y_DEFP((*F.p2764))))).f_at = yr2830_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_a));
}
F.v6273 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_next);
}
F.v6271 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6271)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2773_MakeRecord(void * a_p2774, void * a_p2775, rt_int a_p2776) {
struct yf2777 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2774 = a_p2774;
F.p2775 = a_p2775;
F.p2776 = a_p2776;
F.v6282 = Y_UNDEF_P;
F.v6282 = ((void *)0);
F.v6284 = Y_UNDEF_P;
F.v6286 = Y_UNDEF_P;
F.v6288 = Y_UNDEF_P;
F.v6290 = Y_UNDEF_I;
F.v6290 = INT64_C(0);
F.v6293 = Y_UNDEF_P;
F.v6295 = Y_UNDEF_I;
F.v6297 = Y_UNDEF_I;
F.v6297 = INT64_C(0);
yr2762_AddFields(F.p2774, &F.v6282, Y_DEFP(((*(yR105 *)y_deref(F.p2775))).f_a), INT64_C(0), ((void *)0), F.p2776);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2775))).f_b) == ((void *)0)))) {
F.v6284 = Y_DEFP(((*(yR105 *)y_deref(F.p2775))).f_b);
F.v6288 = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_b), INT64_C(0), 0);
if ((!yr2477_IsDiscrete(Y_DEFP(F.v6288)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_line), y_str("the case-selection component is integer or scalar", 49));
}
yr2749_AddField(F.p2774, &F.v6282, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_name), Y_DEFP(F.v6288), 1, INT64_C(0), ((void *)0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_line));
((*(yR110 *)y_deref(F.p2774))).f_selector = Y_DEFP(F.v6282);
F.v6286 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_a);
while ((!(Y_DEFP(F.v6286) == ((void *)0)))) {
Y_TICK();
F.v6290 = y_range(y_add(Y_DEFI(F.v6290), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2762_AddFields(F.p2774, &F.v6282, Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6286)))).f_b), Y_DEFI(F.v6290), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6286)))).f_a), F.p2776);
F.v6286 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6286)))).f_next);
}
}
if ((F.p2776 && Y_DEFI(((*(yR110 *)y_deref(F.p2774))).f_abstract))) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2774))).f_abstract = 0;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p2775))).f_line);
F.v6290 = yr2808_RecordBits(F.p2774, 0, 1);
F.v6290 = INT64_C(0);
((*(yR110 *)y_deref(F.p2774))).f_cname = yr1200_Fresh(y_str("yR", 2));
yr1026_SB();
yr1037_SA(y_str("typedef struct ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2774))).f_cname));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2774))).f_cname));
yr1037_SA(y_str(";", 1));
F.v6295 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v6295));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2774))).f_cname));
yr1037_SA(y_str(" {", 2));
F.v6293 = Y_DEFP(((*(yR110 *)y_deref(F.p2774))).f_fields);
while ((!(Y_DEFP(F.v6293) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_rep)));
yr1037_SA(y_str(" f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_name));
yr1037_SA(y_str(";", 1));
F.v6297 = y_range(y_add(Y_DEFI(F.v6297), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6293 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_next);
}
if ((Y_DEFI(F.v6297) == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
}
yr1037_SA(y_str(" };", 3));
F.v6295 = yr1056_SE();
yr1110_Put(&v980, Y_DEFI(F.v6295));
yr2538_NewDesc(F.p2774);
yr1026_SB();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
F.v6293 = Y_DEFP(((*(yR110 *)y_deref(F.p2774))).f_fields);
while ((!(Y_DEFP(F.v6293) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2774))).f_cname));
yr1037_SA(y_str(", f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_name));
yr1037_SA(y_str("), ", 3));
F.v6293 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_next);
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1050_SI(y_range(y_add(Y_DEFI(F.v6297), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" * sizeof *f);", 14));
F.v6290 = INT64_C(0);
F.v6293 = Y_DEFP(((*(yR110 *)y_deref(F.p2774))).f_fields);
while ((!(Y_DEFP(F.v6293) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
yr1050_SI(Y_DEFI(F.v6290));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v6290 = y_range(y_add(Y_DEFI(F.v6290), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6293 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6293)))).f_next);
}
yr1037_SA(y_str(" y_desc_record(", 15));
yr1044_ST(yr2532_DescOf(F.p2774));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2774))).f_cname));
yr1037_SA(y_str("), ", 3));
yr1050_SI(Y_DEFI(F.v6297));
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v6295 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6295));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2781_FindField(void * a_p2782, rt_int a_p2783) {
struct yf2784 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2782 = a_p2782;
F.p2783 = a_p2783;
F.v6347 = Y_UNDEF_P;
F.v6347 = Y_DEFP(((*(yR110 *)y_deref(F.p2782))).f_fields);
while ((!(Y_DEFP(F.v6347) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6347)))).f_name) == F.p2783)) {
{ void * rv6348 = Y_DEFP(F.v6347);
y_use = F.yu; return rv6348; }
}
F.v6347 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6347)))).f_next);
}
{ void * rv6349 = ((void *)0);
y_use = F.yu; return rv6349; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2788_BitsFor(rt_int a_p2789) {
struct yf2790 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2789 = a_p2789;
F.v6353 = Y_UNDEF_I;
F.v6353 = INT64_C(1);
F.v6356 = Y_UNDEF_I;
F.v6356 = INT64_C(2);
while ((((Y_DEFI(F.v6356) <= F.p2789)) && ((Y_DEFI(F.v6353) < INT64_C(63))))) {
Y_TICK();
F.v6353 = y_range(y_add(Y_DEFI(F.v6353), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6356 = y_range(y_mul(Y_DEFI(F.v6356), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv6363 = Y_DEFI(F.v6353);
y_use = F.yu; return rv6363; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2794_RoundUp(rt_int a_p2795, rt_int a_p2796) {
struct yf2797 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2795 = a_p2795;
F.p2796 = a_p2796;
if ((F.p2796 <= INT64_C(1))) {
{ rt_int rv6368 = F.p2795;
y_use = F.yu; return rv6368; }
}
{ rt_int rv6374 = y_range(y_mul((y_div((y_sub((y_add(F.p2795, F.p2796)), INT64_C(1))), F.p2796)), F.p2796), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6374; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2801_Bits(void * a_p2802, rt_int a_p2803) {
struct yf2804 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2802 = a_p2802;
F.p2803 = a_p2803;
F.v6379 = Y_UNDEF_I;
F.v6379 = Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_kind);
F.v6381 = Y_UNDEF_I;
F.v6381 = (F.p2803 || Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_packed));
F.v6383 = Y_UNDEF_I;
F.v6385 = Y_UNDEF_I;
F.v6387 = Y_UNDEF_I;
F.v6389 = Y_UNDEF_I;
F.v6391 = Y_UNDEF_P;
if (((!Y_DEFI(F.v6381)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_bits) == INT64_C(0)))))) {
{ rt_int rv6393 = Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_bits);
y_use = F.yu; return rv6393; }
}
F.v6383 = INT64_C(64);
if (yr2477_IsDiscrete(F.p2802)) {
if (Y_DEFI(F.v6381)) {
if (((((Y_DEFI(F.v6379) == v816)) || ((Y_DEFI(F.v6379) == v819))) || ((Y_DEFI(F.v6379) == v813)))) {
F.v6383 = yr2788_BitsFor(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
} else if (Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_hasm)) {
F.v6387 = Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_mlo);
F.v6389 = Y_DEFI(((*(yR110 *)y_deref(F.p2802))).f_mhi);
if ((Y_DEFI(F.v6387) >= INT64_C(0))) {
F.v6383 = yr2788_BitsFor(Y_DEFI(F.v6389));
} else if (((y_sub(INT64_C(-1), Y_DEFI(F.v6387))) > Y_DEFI(F.v6389))) {
F.v6383 = y_range(y_add(INT64_C(1), yr2788_BitsFor(y_range(y_sub(INT64_C(-1), Y_DEFI(F.v6387)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6383 = y_range(y_add(INT64_C(1), yr2788_BitsFor(Y_DEFI(F.v6389))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
} else if ((Y_DEFI(F.v6379) == v807)) {
F.v6383 = INT64_C(128);
} else if ((((Y_DEFI(F.v6379) == v828)) || ((Y_DEFI(F.v6379) == v849)))) {
if (Y_DEFI(F.v6381)) {
F.v6383 = INT64_C(24);
}
} else if ((Y_DEFI(F.v6379) == v834)) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_elem)))).f_hasm)) {
F.v6385 = y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_elem)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_elem)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6385) > (y_div(v906, INT64_C(2))))) {
F.v6383 = INT64_C(-1);
} else if (Y_DEFI(F.v6381)) {
F.v6383 = Y_DEFI(F.v6385);
} else {
F.v6383 = yr2794_RoundUp(Y_DEFI(F.v6385), INT64_C(64));
}
} else {
F.v6383 = INT64_C(-1);
}
} else if ((Y_DEFI(F.v6379) == v822)) {
F.v6385 = INT64_C(1);
F.v6391 = Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_idx);
while ((!(Y_DEFP(F.v6391) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6391)))).f_hasm))) {
{ rt_int rv6418 = INT64_C(-1);
y_use = F.yu; return rv6418; }
}
F.v6385 = y_range(y_mul(Y_DEFI(F.v6385), (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6391)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6391)))).f_mlo))), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6385) > INT64_C(100000000000))) {
{ rt_int rv6425 = INT64_C(-1);
y_use = F.yu; return rv6425; }
}
F.v6391 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6391)))).f_link);
}
F.v6383 = yr2801_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_elem), Y_DEFI(F.v6381));
if ((Y_DEFI(F.v6383) < INT64_C(0))) {
{ rt_int rv6428 = INT64_C(-1);
y_use = F.yu; return rv6428; }
}
if (((!Y_DEFI(F.v6381)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_elem)))).f_packed)))) {
F.v6383 = yr2794_RoundUp(Y_DEFI(F.v6383), INT64_C(64));
}
F.v6383 = yr2794_RoundUp(Y_DEFI(F.v6383), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2802))).f_elem)))).f_align));
F.v6383 = y_range(y_mul(Y_DEFI(F.v6383), Y_DEFI(F.v6385)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6379) == v825)) {
F.v6383 = yr2808_RecordBits(F.p2802, Y_DEFI(F.v6381), 0);
} else if (((((Y_DEFI(F.v6379) == v843)) || ((Y_DEFI(F.v6379) == v846))) || ((Y_DEFI(F.v6379) == v855)))) {
F.v6383 = INT64_C(-1);
}
if ((((Y_DEFI(F.v6383) > INT64_C(0))) && (!Y_DEFI(F.v6381)))) {
F.v6383 = yr2794_RoundUp(Y_DEFI(F.v6383), INT64_C(64));
}
if ((!Y_DEFI(F.v6381))) {
((*(yR110 *)y_deref(F.p2802))).f_bits = Y_DEFI(F.v6383);
}
{ rt_int rv6435 = Y_DEFI(F.v6383);
y_use = F.yu; return rv6435; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2808_RecordBits(void * a_p2809, rt_int a_p2810, rt_int a_p2811) {
struct yf2812 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2809 = a_p2809;
F.p2810 = a_p2810;
F.p2811 = a_p2811;
F.v6441 = Y_UNDEF_P;
F.v6443 = Y_UNDEF_I;
F.v6443 = INT64_C(0);
F.v6446 = Y_UNDEF_I;
F.v6446 = INT64_C(0);
F.v6449 = Y_UNDEF_I;
F.v6449 = INT64_C(0);
F.v6452 = Y_UNDEF_I;
F.v6452 = INT64_C(0);
F.v6455 = Y_UNDEF_I;
F.v6455 = INT64_C(0);
F.v6458 = Y_UNDEF_I;
F.v6458 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6468, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6468, &F.v6470);
y_initu(&F.yd_6468, &F.v6472);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6481, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_6481, &F.v6483);
F.v6441 = Y_DEFP(((*(yR110 *)y_deref(F.p2809))).f_fields);
while ((!(Y_DEFP(F.v6441) == ((void *)0)))) {
Y_TICK();
F.v6449 = yr2801_Bits(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_rep), F.p2810);
if ((Y_DEFI(F.v6449) < INT64_C(0))) {
{ rt_int rv6486 = INT64_C(-1);
y_use = F.yu; return rv6486; }
}
if (((!F.p2810) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_rep)))).f_packed)))) {
F.v6449 = yr2794_RoundUp(Y_DEFI(F.v6449), INT64_C(64));
}
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_variant) == INT64_C(0)))) {
if ((Y_DEFI(F.v6455) == INT64_C(0))) {
F.v6455 = Y_DEFI(F.v6443);
}
if (yr2816_FirstOfVariant(F.p2809, Y_DEFP(F.v6441))) {
F.v6443 = Y_DEFI(F.v6455);
}
}
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_at) >= INT64_C(0))) {
F.v6452 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_at);
} else if ((F.p2810 || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_rep)))).f_packed))) {
F.v6452 = yr2794_RoundUp(Y_DEFI(F.v6443), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_rep)))).f_align));
} else {
F.v6452 = yr2794_RoundUp(Y_DEFI(F.v6443), INT64_C(64));
}
if ((F.p2811 && ((Y_DEFI(F.v6458) < INT64_C(512))))) {
F.v6458 = y_range(y_add(Y_DEFI(F.v6458), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6470).p)[y_ix1(F.v6470, Y_DEFI(F.v6458))] = Y_DEFI(F.v6452);
((rt_int *)(F.v6472).p)[y_ix1(F.v6472, Y_DEFI(F.v6458))] = y_range(y_add(Y_DEFI(F.v6452), Y_DEFI(F.v6449)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(F.v6483).p)[y_ix1(F.v6483, Y_DEFI(F.v6458))] = Y_DEFP(F.v6441);
}
F.v6443 = y_range(y_add(Y_DEFI(F.v6452), Y_DEFI(F.v6449)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6443) > Y_DEFI(F.v6446))) {
F.v6446 = Y_DEFI(F.v6443);
}
F.v6441 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6441)))).f_next);
}
if (F.p2811) {
F.lo6500 = INT64_C(1);
F.hi6501 = Y_DEFI(F.v6458);
{ rt_int hi6505 = F.hi6501;
for (rt_int i6504 = F.lo6500; i6504 <= hi6505; i6504++) { F.c_6503 = i6504; Y_TICK();
F.lo6509 = y_add(F.c_6503, INT64_C(1));
F.hi6510 = Y_DEFI(F.v6458);
{ rt_int hi6514 = F.hi6510;
for (rt_int i6513 = F.lo6509; i6513 <= hi6514; i6513++) { F.c_6512 = i6513; Y_TICK();
if ((((((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6503)])))).f_at) >= INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6512)])))).f_at) >= INT64_C(0))))) && ((Y_DEFI(((rt_int *)(F.v6470).p)[y_ix1(F.v6470, F.c_6503)]) < Y_DEFI(((rt_int *)(F.v6472).p)[y_ix1(F.v6472, F.c_6512)])))) && ((Y_DEFI(((rt_int *)(F.v6470).p)[y_ix1(F.v6470, F.c_6512)]) < Y_DEFI(((rt_int *)(F.v6472).p)[y_ix1(F.v6472, F.c_6503)])))) && (((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6503)])))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6512)])))).f_variant) == INT64_C(0)))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6503)])))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6512)])))).f_variant))))))) {
yr1157_Fail(Y_DEFI(v1000), yr3453_Join(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6512)])))).f_name), yr3453_Join(yr1061_T(y_str(" overlaps ", 10)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6483).p)[y_ix1(F.v6483, F.c_6503)])))).f_name), INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
}
if (i6513 == hi6514) break;
}}
if (i6504 == hi6505) break;
}}
}
{ rt_int rv6522 = Y_DEFI(F.v6446);
y_use = F.yu; return rv6522; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2816_FirstOfVariant(void * a_p2817, void * a_p2818) {
struct yf2819 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2817 = a_p2817;
F.p2818 = a_p2818;
F.v6527 = Y_UNDEF_P;
F.v6527 = Y_DEFP(((*(yR110 *)y_deref(F.p2817))).f_fields);
while ((!(Y_DEFP(F.v6527) == F.p2818))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6527)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(F.p2818))).f_variant))) {
{ rt_int rv6529 = 0;
y_use = F.yu; return rv6529; }
}
F.v6527 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6527)))).f_next);
}
{ rt_int rv6531 = 1;
y_use = F.yu; return rv6531; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2823_ApplyStorage(void * a_p2824, void * a_p2825) {
struct yf2826 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2824 = a_p2824;
F.p2825 = a_p2825;
F.v6536 = Y_UNDEF_P;
F.v6536 = yr2471_CopyRep(F.p2824);
F.v6538 = Y_UNDEF_I;
F.v6540 = Y_UNDEF_I;
F.v6542 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2825))).f_flag) == INT64_C(1))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6536)))).f_packed = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2825))).f_a) == ((void *)0)))) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2825))).f_a), &F.v6538, &F.v6540);
if (((!Y_DEFI(F.v6538)) || ((Y_DEFI(F.v6540) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2825))).f_line), y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6536)))).f_pbits = Y_DEFI(F.v6540);
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2825))).f_b) == ((void *)0)))) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2825))).f_b), &F.v6538, &F.v6540);
if ((((!Y_DEFI(F.v6538)) || ((Y_DEFI(F.v6540) < INT64_C(1)))) || ((Y_DEFI(F.v6540) > INT64_C(64))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2825))).f_line), y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6536)))).f_align = Y_DEFI(F.v6540);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6536)))).f_pbits) > INT64_C(0))) {
F.v6542 = yr2801_Bits(Y_DEFP(F.v6536), 1);
if ((Y_DEFI(F.v6542) < INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2825))).f_line), y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
}
if ((Y_DEFI(F.v6542) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6536)))).f_pbits))) {
yr1026_SB();
yr1037_SA(y_str("this representation needs ", 26));
yr1050_SI(Y_DEFI(F.v6542));
yr1037_SA(y_str(" bits, more than PACKED ", 24));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6536)))).f_pbits));
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p2825))).f_line), yr1056_SE());
}
}
{ void * rv6557 = Y_DEFP(F.v6536);
y_use = F.yu; return rv6557; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2830_AtAddress(void * a_p2831) {
struct yf2832 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2831 = a_p2831;
F.v6561 = Y_UNDEF_I;
F.v6563 = Y_UNDEF_I;
yr2895_Manifest(F.p2831, &F.v6561, &F.v6563);
if (((!Y_DEFI(F.v6561)) || ((Y_DEFI(F.v6563) < INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_line), y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
}
{ rt_int rv6566 = Y_DEFI(F.v6563);
y_use = F.yu; return rv6566; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2836_StoreAt(rt_int a_p2837, rt_int a_p2838) {
struct yf2839 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2837 = a_p2837;
F.p2838 = a_p2838;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(F.p2837);
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
yr1050_SI(F.p2838);
yr1037_SA(y_str("), sizeof(", 10));
yr1044_ST(F.p2837);
yr1037_SA(y_str(")))", 3));
{ rt_int rv6574 = yr1056_SE();
y_use = F.yu; return rv6574; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2843_ExtentCode(rt_int a_p2844, void * a_p2845) {
struct yf2846 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2844 = a_p2844;
F.p2845 = a_p2845;
F.v6579 = Y_UNDEF_I;
F.v6581 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2845))).f_kind) == v855)) {
{ rt_int rv6584 = yr3453_Join(yr1061_T(y_str("(", 1)), F.p2844, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6584; }
}
F.v6579 = yr2801_Bits(F.p2845, 0);
if ((Y_DEFI(F.v6579) >= INT64_C(0))) {
{ rt_int rv6591 = yr3235_Num(y_range(y_div((y_add(Y_DEFI(F.v6579), INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6591; }
}
if (yr2489_IsArrayLike(F.p2845)) {
F.v6581 = yr2801_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2845))).f_elem), Y_DEFI(((*(yR110 *)y_deref(F.p2845))).f_packed));
if ((Y_DEFI(F.v6581) >= INT64_C(0))) {
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2845))).f_packed))) {
F.v6581 = yr2794_RoundUp(Y_DEFI(F.v6581), INT64_C(64));
}
yr1026_SB();
yr1037_SA(y_str("((y_count(", 10));
yr1044_ST(F.p2844);
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2845))).f_nidx));
yr1037_SA(y_str(") * INT64_C(", 12));
yr1050_SI(Y_DEFI(F.v6581));
yr1037_SA(y_str(") + 63) / 64)", 13));
{ rt_int rv6598 = yr1056_SE();
y_use = F.yu; return rv6598; }
}
}
{ rt_int rv6601 = yr3453_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2844, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6601; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2850_SpaceArg(void * a_p2851, rt_int a_p2852, void * a_p2853) {
struct yf2854 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2851 = a_p2851;
F.p2852 = a_p2852;
F.p2853 = a_p2853;
F.v6607 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2853))).f_kind) == v855)) {
{ rt_int rv6608 = F.p2852;
y_use = F.yu; return rv6608; }
}
if ((yr3004_IsVariable(F.p2851) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2851))).f_kind) == v777)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2853))).f_kind) == v846))))))) {
{ rt_int rv6612 = yr3453_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), yr3078_RawCode(F.p2851, F.p2852), yr3453_Join(yr1061_T(y_str("), ", 3)), yr2843_ExtentCode(F.p2852, F.p2853), yr1061_T(y_str(" })", 3))));
y_use = F.yu; return rv6612; }
}
F.v6607 = yr1200_Fresh(y_str("sp", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2526_CType(F.p2853));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2852);
yr1037_SA(y_str("; void *", 8));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str("); memcpy(", 10));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str("c, &", 4));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str(", sizeof ", 9));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str("); (yspace){ ", 13));
yr1044_ST(Y_DEFI(F.v6607));
yr1037_SA(y_str("c, ", 3));
yr1044_ST(yr2843_ExtentCode(Y_DEFI(F.v6607), F.p2853));
yr1037_SA(y_str(" }; })", 6));
{ rt_int rv6625 = yr1056_SE();
y_use = F.yu; return rv6625; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2858_PackedComponent(void * a_p2859) {
struct yf2860 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2859 = a_p2859;
F.v6629 = Y_UNDEF_P;
F.v6629 = F.p2859;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_kind) == v801)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_kind) == v801))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_a)))).f_rep) == ((void *)0)))) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_a)))).f_rep)))).f_packed)) {
{ rt_int rv6631 = 1;
y_use = F.yu; return rv6631; }
}
}
}
F.v6629 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6629)))).f_a);
}
{ rt_int rv6633 = 0;
y_use = F.yu; return rv6633; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2864_CharOrd(void * a_p2865, rt_int a_p2866) {
struct yf2867 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2865 = a_p2865;
F.p2866 = a_p2866;
F.v6638 = Y_UNDEF_P;
F.v6640 = Y_UNDEF_I;
F.v6642 = Y_UNDEF_I;
F.v6644 = Y_UNDEF_I;
F.v6646 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2865))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_tid))) {
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2866)]) == INT64_C(1))) {
{ rt_int rv6649 = Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2866, INT64_C(1)))]);
y_use = F.yu; return rv6649; }
}
F.v6640 = INT64_C(0);
F.v6644 = INT64_C(1);
F.lo6655 = INT64_C(1);
F.hi6656 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v1513))]);
{ rt_int hi6660 = F.hi6656;
for (rt_int i6659 = F.lo6655; i6659 <= hi6660; i6659++) { F.c_6658 = i6659; Y_TICK();
if ((yr1103_TChar(Y_DEFI(v1513), y_range(F.c_6658, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6646 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v1513))]), (y_sub(Y_DEFI(F.v6644), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_6658, Y_DEFI(F.v6644)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v6646) == F.p2866)) {
if ((Y_DEFI(F.v6640) < INT64_C(32))) {
{ rt_int rv6667 = Y_DEFI(F.v6640);
y_use = F.yu; return rv6667; }
}
if ((Y_DEFI(F.v6640) == INT64_C(32))) {
{ rt_int rv6670 = INT64_C(32);
y_use = F.yu; return rv6670; }
}
if ((Y_DEFI(F.v6640) == INT64_C(33))) {
{ rt_int rv6673 = INT64_C(127);
y_use = F.yu; return rv6673; }
}
if ((Y_DEFI(F.v6640) == INT64_C(34))) {
{ rt_int rv6676 = INT64_C(39);
y_use = F.yu; return rv6676; }
}
{ rt_int rv6678 = INT64_C(34);
y_use = F.yu; return rv6678; }
}
F.v6640 = y_range(y_add(Y_DEFI(F.v6640), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6644 = y_range(y_add(F.c_6658, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i6659 == hi6660) break;
}}
{ rt_int rv6684 = INT64_C(-1);
y_use = F.yu; return rv6684; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2865))).f_kind) == v819))) {
{ rt_int rv6686 = INT64_C(-1);
y_use = F.yu; return rv6686; }
}
F.v6638 = Y_DEFP(((*(yR110 *)y_deref(F.p2865))).f_lits);
F.v6642 = INT64_C(0);
while ((!(Y_DEFP(F.v6638) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6638)))).f_text), F.p2866)) {
{ rt_int rv6688 = Y_DEFI(F.v6642);
y_use = F.yu; return rv6688; }
}
F.v6642 = y_range(y_add(Y_DEFI(F.v6642), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6638 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6638)))).f_next);
}
{ rt_int rv6692 = INT64_C(-1);
y_use = F.yu; return rv6692; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2871_AlphabetFor(void * a_p2872, void * a_p2873) {
struct yf2874 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2872 = a_p2872;
F.p2873 = a_p2873;
F.v6697 = Y_UNDEF_P;
F.v6699 = Y_UNDEF_P;
F.v6701 = Y_UNDEF_P;
F.v6701 = ((void *)0);
F.v6703 = Y_UNDEF_I;
F.v6703 = INT64_C(0);
F.v6706 = Y_UNDEF_I;
F.v6706 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2872))).f_d) == ((void *)0)))) {
F.v6697 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2872))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_line)));
if ((((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_kind) == v870))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_rep)))).f_kind) == v819))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2872))).f_d)))).f_name), y_str(" is not an alphabet", 19));
}
{ void * rv6709 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_rep);
y_use = F.yu; return rv6709; }
}
F.v6706 = INT64_C(1);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_kind) == v771)) || ((yr2864_CharOrd(Y_DEFP(v1346), Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_text)) >= INT64_C(0))))) {
F.v6703 = INT64_C(1);
F.v6701 = Y_DEFP(v1346);
}
F.v6699 = Y_DEFP(v1516);
while ((!(Y_DEFP(F.v6699) == ((void *)0)))) {
Y_TICK();
F.v6697 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6699)))).f_name));
if ((!(Y_DEFP(F.v6697) == ((void *)0)))) {
F.v6697 = yr2458_Real(Y_DEFP(F.v6697));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_kind) == v870)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6697)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6699)))).f_rep)))).f_tid))))) {
F.v6706 = y_range(y_add(Y_DEFI(F.v6706), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_kind) == v768)) && ((yr2864_CharOrd(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6699)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_text)) >= INT64_C(0))))) {
F.v6703 = y_range(y_add(Y_DEFI(F.v6703), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6701 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6699)))).f_rep);
}
}
}
F.v6699 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6699)))).f_next);
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_kind) == v771)) && ((Y_DEFI(F.v6706) > INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_line), y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((Y_DEFI(F.v6703) > INT64_C(1))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_line), yr3453_Join(yr1061_T(y_str("'", 1)), Y_DEFI(((*(yR105 *)y_deref(F.p2872))).f_text), yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((Y_DEFP(F.v6701) == ((void *)0))) {
{ void * rv6724 = Y_DEFP(v1346);
y_use = F.yu; return rv6724; }
}
{ void * rv6725 = Y_DEFP(F.v6701);
y_use = F.yu; return rv6725; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2878_CharValue(void * a_p2879, rt_int a_p2880, rt_int a_p2881) {
struct yf2882 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2879 = a_p2879;
F.p2880 = a_p2880;
F.p2881 = a_p2881;
F.v6731 = Y_UNDEF_I;
F.v6731 = yr2864_CharOrd(F.p2879, F.p2880);
F.v6733 = Y_UNDEF_I;
if ((Y_DEFI(F.v6731) < INT64_C(0))) {
yr1026_SB();
yr1037_SA(y_str("'", 1));
yr1044_ST(F.p2880);
yr1037_SA(y_str("' is not a character of ", 24));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2879))).f_tname));
F.v6733 = yr1056_SE();
yr1157_Fail(F.p2881, Y_DEFI(F.v6733));
}
{ rt_int rv6737 = Y_DEFI(F.v6731);
y_use = F.yu; return rv6737; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2886_StringCodes(void * a_p2887, rt_int a_p2888, rt_int * a_p2889, rt_int a_p2890) {
struct yf2891 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2887 = a_p2887;
F.p2888 = a_p2888;
F.p2889_o = a_p2889;
F.p2890 = a_p2890;
F.v6744 = Y_UNDEF_I;
F.v6746 = Y_UNDEF_I;
F.v6748 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_6757, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6757, &F.v6759);
F.v6761 = Y_UNDEF_B;
F.v6763 = Y_UNDEF_I;
F.p2889 = INT64_C(0);
F.v6744 = INT64_C(1);
while ((Y_DEFI(F.v6744) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2888)]))) {
Y_TICK();
F.v6761 = yr1103_TChar(F.p2888, Y_DEFI(F.v6744));
if ((Y_DEFB(F.v6761) == 39)) {
F.v6746 = y_range(y_add(Y_DEFI(F.v6744), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v6746) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2888)]))) && ((!(yr1103_TChar(F.p2888, Y_DEFI(F.v6746)) == 39))))) {
Y_TICK();
F.v6746 = y_range(y_add(Y_DEFI(F.v6746), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v6746) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2888)]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(F.p2890, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v6763 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2888)]), Y_DEFI(F.v6744)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v6746), Y_DEFI(F.v6744))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6748 = yr2878_CharValue(F.p2887, Y_DEFI(F.v6763), F.p2890);
F.v6744 = y_range(y_add(Y_DEFI(F.v6746), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6763 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2888)]), (y_sub(Y_DEFI(F.v6744), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v6748 = yr2878_CharValue(F.p2887, Y_DEFI(F.v6763), F.p2890);
F.v6744 = y_range(y_add(Y_DEFI(F.v6744), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.p2889) >= INT64_C(65536))) {
yr1178_FailS(F.p2890, y_str("this implementation takes string literals of up to 65536 characters", 67));
}
F.p2889 = y_range(y_add(Y_DEFI(F.p2889), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6759).p)[y_ix1(F.v6759, Y_DEFI(F.p2889))] = Y_DEFI(F.v6748);
}
yr1026_SB();
yr1031_SC(34);
F.lo6795 = INT64_C(1);
F.hi6796 = Y_DEFI(F.p2889);
{ rt_int hi6800 = F.hi6796;
for (rt_int i6799 = F.lo6795; i6799 <= hi6800; i6799++) { F.c_6798 = i6799; Y_TICK();
F.v6748 = Y_DEFI(((rt_int *)(F.v6759).p)[y_ix1(F.v6759, F.c_6798)]);
if ((((Y_DEFI(F.v6748) == INT64_C(34))) || ((Y_DEFI(F.v6748) == INT64_C(92))))) {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6748))]));
} else if (((((Y_DEFI(F.v6748) >= INT64_C(32))) && ((Y_DEFI(F.v6748) < INT64_C(127)))) && (((((!(Y_DEFI(F.v6748) == INT64_C(63)))) || ((F.c_6798 == INT64_C(1)))) || ((!(Y_DEFI(((rt_int *)(F.v6759).p)[y_ix1(F.v6759, y_sub(F.c_6798, INT64_C(1)))]) == INT64_C(63)))))))) {
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6748))]));
} else {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_div(Y_DEFI(F.v6748), INT64_C(64)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod((y_div(Y_DEFI(F.v6748), INT64_C(8))), INT64_C(8)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod(Y_DEFI(F.v6748), INT64_C(8)))))]));
}
if (i6799 == hi6800) break;
}}
yr1031_SC(34);
{ rt_int rv6827 = yr1056_SE();
(*F.p2889_o) = F.p2889;
y_use = F.yu; return rv6827; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2895_Manifest(void * a_p2896, rt_int * a_p2897, rt_int * a_p2898) {
struct yf2899 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2896 = a_p2896;
F.p2897_o = a_p2897;
F.p2898_o = a_p2898;
F.v6833 = Y_UNDEF_P;
F.v6835 = Y_UNDEF_I;
F.v6837 = Y_UNDEF_I;
F.v6839 = Y_UNDEF_I;
F.v6841 = Y_UNDEF_I;
F.v6843 = Y_UNDEF_I;
F.v6845 = Y_UNDEF_P;
F.p2897 = 0;
F.p2898 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v759)) {
F.p2897 = 1;
F.p2898 = Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_ival);
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v768)) {
F.v6845 = yr2871_AlphabetFor(F.p2896, ((void *)0));
F.p2898 = yr2864_CharOrd(Y_DEFP(F.v6845), Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_text));
F.p2897 = (Y_DEFI(F.p2898) >= INT64_C(0));
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_d) == ((void *)0)))) {
F.v6833 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_line)));
F.v6833 = yr2418_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_name), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6833)))).f_rep));
} else {
F.v6833 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_name));
}
if ((Y_DEFP(F.v6833) == ((void *)0))) {
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
F.v6833 = yr2458_Real(Y_DEFP(F.v6833));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6833)))).f_kind) == v873)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6833)))).f_kind) == v864)))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6833)))).f_hasmv))) {
F.p2897 = 1;
F.p2898 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6833)))).f_mval);
}
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v801)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_a), &F.p2897, &F.p2898);
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v795)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_a), &F.p2897, &F.p2898);
F.p2898 = y_range(y_neg(Y_DEFI(F.p2898)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v798)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_a), &F.v6839, &F.v6835);
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_b), &F.v6841, &F.v6837);
if ((!((Y_DEFI(F.v6839) && Y_DEFI(F.v6841))))) {
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
F.v6843 = Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_name);
F.p2897 = 1;
if ((Y_DEFI(F.v6843) == v573)) {
F.p2898 = y_range(y_add(Y_DEFI(F.v6835), Y_DEFI(F.v6837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6843) == v576)) {
F.p2898 = y_range(y_sub(Y_DEFI(F.v6835), Y_DEFI(F.v6837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6843) == v579)) {
F.p2898 = y_range(y_mul(Y_DEFI(F.v6835), Y_DEFI(F.v6837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6843) == v276)) && ((!(Y_DEFI(F.v6837) == INT64_C(0)))))) {
F.p2898 = y_range(y_div(Y_DEFI(F.v6835), Y_DEFI(F.v6837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6843) == v378)) && ((!(Y_DEFI(F.v6837) == INT64_C(0)))))) {
F.p2898 = y_range(y_mod(Y_DEFI(F.v6835), Y_DEFI(F.v6837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6843) == v237)) {
F.p2898 = y_range(y_mul(Y_DEFI(F.v6835), Y_DEFI(F.v6837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6843) == v399)) {
F.p2898 = y_range(y_sub((y_add(Y_DEFI(F.v6835), Y_DEFI(F.v6837))), (y_mul(Y_DEFI(F.v6835), Y_DEFI(F.v6837)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6843) == v489)) {
F.p2898 = y_range(y_mod((y_add(Y_DEFI(F.v6835), Y_DEFI(F.v6837))), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2897 = 0;
}
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v792)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2896))).f_a), &F.p2897, &F.p2898);
F.p2898 = y_range(y_sub(INT64_C(1), Y_DEFI(F.p2898)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2896))).f_kind) == v780)) {
yr2903_ManifestStd(F.p2896, &F.p2897, &F.p2898);
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
}
(*F.p2897_o) = F.p2897;
(*F.p2898_o) = F.p2898;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2903_ManifestStd(void * a_p2904, rt_int * a_p2905, rt_int * a_p2906) {
struct yf2907 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2904 = a_p2904;
F.p2905_o = a_p2905;
F.p2906_o = a_p2906;
F.v6875 = Y_UNDEF_P;
F.v6877 = Y_UNDEF_I;
F.v6879 = Y_UNDEF_I;
F.v6881 = Y_UNDEF_I;
F.v6883 = Y_UNDEF_I;
F.v6885 = Y_UNDEF_I;
F.v6887 = Y_UNDEF_P;
F.v6889 = Y_UNDEF_P;
F.p2905 = 0;
F.p2906 = INT64_C(0);
F.v6875 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2904))).f_name));
if ((Y_DEFP(F.v6875) == ((void *)0))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
F.v6875 = yr2458_Real(Y_DEFP(F.v6875));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6875)))).f_kind) == v891))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
F.v6877 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6875)))).f_mval);
if ((((((Y_DEFI(F.v6877) == v1372)) || ((Y_DEFI(F.v6877) == v1375))) || ((Y_DEFI(F.v6877) == v1378))) || ((Y_DEFI(F.v6877) == v1381)))) {
if ((!(yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2904))).f_a)) == INT64_C(1)))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2904))).f_a), ((void *)0), &F.v6885, &F.v6887);
if ((!yr2477_IsDiscrete(Y_DEFP(F.v6887)))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6877) == v1378)) || ((Y_DEFI(F.v6877) == v1381)))) {
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_elem) == ((void *)0)))) {
F.v6887 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_elem);
}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_hasm))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
F.p2905 = 1;
if ((Y_DEFI(F.v6877) == v1378)) {
F.p2906 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_mlo);
} else {
F.p2906 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_mhi);
}
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2904))).f_a), &F.v6881, &F.p2906);
if ((!Y_DEFI(F.v6881))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v6877) == v1372)) {
F.p2906 = y_range(y_add(Y_DEFI(F.p2906), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2906 = y_range(y_sub(Y_DEFI(F.p2906), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_elem) == ((void *)0)))) {
F.v6887 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_elem);
}
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_kind) == v804))) && ((((Y_DEFI(F.p2906) < INT64_C(0))) || ((Y_DEFI(F.p2906) >= Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_nlits))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2904))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2904))).f_name), y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2905 = 1;
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6877) == v1366)) || ((Y_DEFI(F.v6877) == v1369)))) {
if ((!(yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2904))).f_a)) == INT64_C(2)))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2904))).f_a)))).f_next), &F.v6883, &F.v6879);
if ((!Y_DEFI(F.v6883))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2904))).f_a), ((void *)0), &F.v6885, &F.v6887);
if (((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_kind) == v822))) || ((Y_DEFI(F.v6879) < INT64_C(1)))) || ((Y_DEFI(F.v6879) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_nidx))))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
F.v6889 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6887)))).f_idx);
F.lo6906 = INT64_C(2);
F.hi6907 = Y_DEFI(F.v6879);
{ rt_int hi6911 = F.hi6907;
for (rt_int i6910 = F.lo6906; i6910 <= hi6911; i6910++) { F.c_6909 = i6910; Y_TICK();
F.v6889 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6889)))).f_link);
if (i6910 == hi6911) break;
}}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6889)))).f_hasm))) {
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
F.p2905 = 1;
if ((Y_DEFI(F.v6877) == v1366)) {
F.p2906 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6889)))).f_mlo);
} else {
F.p2906 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6889)))).f_mhi);
}
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
}
(*F.p2905_o) = F.p2905;
(*F.p2906_o) = F.p2906;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2911_NeedsConv(void * a_p2912, void * a_p2913) {
struct yf2914 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2912 = a_p2912;
F.p2913 = a_p2913;
if ((F.p2912 == F.p2913)) {
{ rt_int rv6917 = 0;
y_use = F.yu; return rv6917; }
}
if (yr2477_IsDiscrete(F.p2912)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_lo) == INT64_C(0))) {
{ rt_int rv6920 = 0;
y_use = F.yu; return rv6920; }
}
{ rt_int rv6921 = (!((((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_hasm) && Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_hasm)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_mlo) <= Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_mlo)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_mhi) <= Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_mhi))))));
y_use = F.yu; return rv6921; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_kind) == v810)) {
{ rt_int rv6923 = (!(Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_lo) == INT64_C(0)));
y_use = F.yu; return rv6923; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_kind) == v807)) {
{ rt_int rv6925 = ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_lo) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_fsn) == Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_fsn))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_fsd) == Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_fsd)))));
y_use = F.yu; return rv6925; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_kind) == v825)) {
{ rt_int rv6926 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v825)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_cname) == Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_cname)))));
y_use = F.yu; return rv6926; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2912))).f_kind) == v843)))) {
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v822))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v843))))) {
{ rt_int rv6928 = 0;
y_use = F.yu; return rv6928; }
}
{ rt_int rv6929 = yr2911_NeedsConv(Y_DEFP(((*(yR110 *)y_deref(F.p2912))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2913))).f_elem));
y_use = F.yu; return rv6929; }
}
{ rt_int rv6931 = 0;
y_use = F.yu; return rv6931; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2918_ConvertRecord(rt_int a_p2919, void * a_p2920, void * a_p2921) {
struct yf2922 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2919 = a_p2919;
F.p2920 = a_p2920;
F.p2921 = a_p2921;
F.v6937 = Y_UNDEF_I;
F.v6939 = Y_UNDEF_I;
F.v6941 = Y_UNDEF_P;
F.v6943 = Y_UNDEF_P;
F.v6937 = yr1200_Fresh(y_str("cs", 2));
F.v6939 = yr1200_Fresh(y_str("cd", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2526_CType(F.p2921));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6937));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2919);
yr1037_SA(y_str("; ", 2));
yr1044_ST(yr2526_CType(F.p2920));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6939));
yr1037_SA(y_str("; memset(&", 10));
yr1044_ST(Y_DEFI(F.v6939));
yr1037_SA(y_str(", 0, sizeof ", 12));
yr1044_ST(Y_DEFI(F.v6939));
yr1037_SA(y_str(");", 2));
F.v6941 = Y_DEFP(((*(yR110 *)y_deref(F.p2920))).f_fields);
while ((!(Y_DEFP(F.v6941) == ((void *)0)))) {
Y_TICK();
F.v6943 = yr2781_FindField(F.p2921, Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6941)))).f_name));
if ((!(Y_DEFP(F.v6943) == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6943)))).f_variant) == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
yr1044_ST(yr3085_VariantTest(F.p2921, Y_DEFP(F.v6943), yr3453_Join(yr1061_T(y_str("(&", 2)), Y_DEFI(F.v6937), yr1061_T(y_str(")", 1)))));
yr1037_SA(y_str(") ", 2));
}
yr1044_ST(Y_DEFI(F.v6939));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6941)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2976_Convert(yr3453_Join(Y_DEFI(F.v6937), yr1061_T(y_str(".f_", 3)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6941)))).f_name)), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6941)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6943)))).f_rep)));
yr1037_SA(y_str(";", 1));
}
F.v6941 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6941)))).f_next);
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6939));
yr1037_SA(y_str("; })", 4));
{ rt_int rv6966 = yr1056_SE();
y_use = F.yu; return rv6966; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2926_ConvertArray(rt_int a_p2927, void * a_p2928, void * a_p2929) {
struct yf2930 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2927 = a_p2927;
F.p2928 = a_p2928;
F.p2929 = a_p2929;
F.v6972 = Y_UNDEF_I;
F.v6974 = Y_UNDEF_I;
F.v6976 = Y_UNDEF_I;
F.v6978 = Y_UNDEF_I;
F.v6980 = Y_UNDEF_I;
F.v6982 = Y_UNDEF_I;
F.v6972 = yr1200_Fresh(y_str("cs", 2));
F.v6974 = yr1200_Fresh(y_str("cd", 2));
F.v6976 = yr1200_Fresh(y_str("ck", 2));
F.v6978 = yr1200_Fresh(y_str("cn", 2));
F.v6980 = yr2526_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2928))).f_elem));
F.v6982 = yr2526_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2929))).f_elem));
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v6972));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2927);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v6974));
yr1037_SA(y_str("; rt_int ", 9));
yr1044_ST(Y_DEFI(F.v6978));
yr1037_SA(y_str(" = y_count(", 11));
yr1044_ST(Y_DEFI(F.v6972));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2929))).f_nidx));
yr1037_SA(y_str(");", 2));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2928))).f_kind) == v822)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2532_DescOf(F.p2928));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v6974));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v6974));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2928))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1044_ST(Y_DEFI(F.v6978));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("array lengths differ", 20));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
} else {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6974));
yr1037_SA(y_str(" = y_like(", 10));
yr1044_ST(Y_DEFI(F.v6972));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2929))).f_nidx));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2928))).f_elem)));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" for (rt_int ", 13));
yr1044_ST(Y_DEFI(F.v6976));
yr1037_SA(y_str(" = 0; ", 6));
yr1044_ST(Y_DEFI(F.v6976));
yr1037_SA(y_str(" < ", 3));
yr1044_ST(Y_DEFI(F.v6978));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v6976));
yr1037_SA(y_str("++) ((", 6));
yr1044_ST(Y_DEFI(F.v6980));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v6974));
yr1037_SA(y_str(".p)[", 4));
yr1044_ST(Y_DEFI(F.v6976));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2976_Convert(yr3453_Join(yr1061_T(y_str("((", 2)), Y_DEFI(F.v6982), yr3453_Join(yr1061_T(y_str(" *)", 3)), Y_DEFI(F.v6972), yr3453_Join(yr1061_T(y_str(".p)[", 4)), Y_DEFI(F.v6976), yr1061_T(y_str("]", 1))))), Y_DEFP(((*(yR110 *)y_deref(F.p2928))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2929))).f_elem)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v6974));
yr1037_SA(y_str("; })", 4));
{ rt_int rv7023 = yr1056_SE();
y_use = F.yu; return rv7023; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2934_RescaleCode(rt_int a_p2935, void * a_p2936, void * a_p2937) {
struct yf2938 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2935 = a_p2935;
F.p2936 = a_p2936;
F.p2937 = a_p2937;
F.v7029 = Y_UNDEF_I;
F.v7031 = Y_UNDEF_I;
F.v7033 = Y_UNDEF_I;
yr2656_ScaleRatio(F.p2936, F.p2937, &F.v7029, &F.v7031, &F.v7033);
if (Y_DEFI(F.v7033)) {
{ rt_int rv7034 = F.p2935;
y_use = F.yu; return rv7034; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_conv(", 11));
yr1044_ST(F.p2935);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7029));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7031));
yr1037_SA(y_str(")", 1));
{ rt_int rv7039 = yr1056_SE();
y_use = F.yu; return rv7039; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2942_CommonScale(rt_int * a_p2943, void * a_p2944, rt_int * a_p2945, void * a_p2946, void * a_p2947, rt_int a_p2948) {
struct yf2949 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2943 = a_p2943;
F.p2944 = a_p2944;
F.p2945 = a_p2945;
F.p2946 = a_p2946;
F.p2947 = a_p2947;
F.p2948 = a_p2948;
F.v7048 = Y_UNDEF_I;
F.v7050 = Y_UNDEF_I;
F.v7048 = yr2633_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2944))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2946))).f_fsn));
F.v7050 = yr2640_MulChk(y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2944))).f_fsd), yr2633_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2944))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2946))).f_fsd))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR110 *)y_deref(F.p2946))).f_fsd), F.p2948);
yr2673_SetScale(F.p2947, Y_DEFI(F.v7048), Y_DEFI(F.v7050));
(*F.p2943) = yr2934_RescaleCode(Y_DEFI((*F.p2943)), F.p2944, F.p2947);
(*F.p2945) = yr2934_RescaleCode(Y_DEFI((*F.p2945)), F.p2946, F.p2947);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2953_FixLiteral(void * a_p2954, rt_int * a_p2955, void * * a_p2956) {
struct yf2957 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2954 = a_p2954;
F.p2955_o = a_p2955;
F.p2956_o = a_p2956;
F.v7057 = Y_UNDEF_I;
F.v7057 = Y_DEFI(((*(yR105 *)y_deref(F.p2954))).f_ival);
F.v7059 = Y_UNDEF_I;
F.v7059 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7057))]);
F.p2956 = yr2471_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.p2956)))).f_abstract = 0;
if ((Y_DEFI(F.v7059) >= INT64_C(0))) {
yr2673_SetScale(Y_DEFP(F.p2956), yr2648_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7057))]), Y_DEFI(F.v7059), Y_DEFI(((*(yR105 *)y_deref(F.p2954))).f_line)), INT64_C(1));
} else {
yr2673_SetScale(Y_DEFP(F.p2956), INT64_C(1), yr2648_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7057))]), y_range(y_neg(Y_DEFI(F.v7059)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2954))).f_line)));
}
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7057))]));
yr1037_SA(y_str("))", 2));
F.p2955 = yr1056_SE();
(*F.p2955_o) = F.p2955;
(*F.p2956_o) = F.p2956;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2961_ManifestFix(void * a_p2962, rt_int * a_p2963, rt_int * a_p2964, rt_int * a_p2965) {
struct yf2966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2962 = a_p2962;
F.p2963_o = a_p2963;
F.p2964_o = a_p2964;
F.p2965_o = a_p2965;
F.v7073 = Y_UNDEF_I;
F.v7075 = Y_UNDEF_I;
F.v7077 = Y_UNDEF_I;
F.v7079 = Y_UNDEF_I;
F.v7081 = Y_UNDEF_I;
F.v7083 = Y_UNDEF_I;
F.p2963 = 0;
F.p2964 = INT64_C(0);
F.p2965 = INT64_C(1);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_kind) == v762)) {
F.v7073 = Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_ival);
F.v7075 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7073))]);
F.p2964 = Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7073))]);
if ((Y_DEFI(F.v7075) >= INT64_C(0))) {
F.p2964 = yr2640_MulChk(Y_DEFI(F.p2964), yr2648_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7073))]), Y_DEFI(F.v7075), Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_line)), Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_line));
} else {
F.p2965 = yr2648_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7073))]), y_range(y_neg(Y_DEFI(F.v7075)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_line));
}
F.p2963 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_kind) == v759)) {
F.p2964 = Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_ival);
F.p2963 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_kind) == v801)) {
yr2961_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2962))).f_a), &F.p2963, &F.p2964, &F.p2965);
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_kind) == v795)) {
yr2961_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2962))).f_a), &F.p2963, &F.p2964, &F.p2965);
F.p2964 = y_range(y_neg(Y_DEFI(F.p2964)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_kind) == v798)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_name) == v579)))) {
yr2961_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2962))).f_a), &F.p2963, &F.p2964, &F.p2965);
yr2961_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2962))).f_b), &F.v7083, &F.v7079, &F.v7081);
F.p2963 = (Y_DEFI(F.p2963) && Y_DEFI(F.v7083));
F.p2964 = yr2640_MulChk(Y_DEFI(F.p2964), Y_DEFI(F.v7079), Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_line));
F.p2965 = yr2640_MulChk(Y_DEFI(F.p2965), Y_DEFI(F.v7081), Y_DEFI(((*(yR105 *)y_deref(F.p2962))).f_line));
}
F.v7077 = yr2633_Gcd(Y_DEFI(F.p2964), Y_DEFI(F.p2965));
F.p2964 = y_range(y_div(Y_DEFI(F.p2964), Y_DEFI(F.v7077)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2965 = y_range(y_div(Y_DEFI(F.p2965), Y_DEFI(F.v7077)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2963_o) = F.p2963;
(*F.p2964_o) = F.p2964;
(*F.p2965_o) = F.p2965;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2970_FloatChk(rt_int a_p2971) {
struct yf2972 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2971 = a_p2971;
{ rt_int rv7098 = yr3453_Join(yr1061_T(y_str("y_fchk(", 7)), F.p2971, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv7098; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2976_Convert(rt_int a_p2977, void * a_p2978, void * a_p2979) {
struct yf2980 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2977 = a_p2977;
F.p2978 = a_p2978;
F.p2979 = a_p2979;
F.v7104 = Y_UNDEF_I;
F.v7106 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2979))).f_kind) == v846)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v822))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_nidx) == INT64_C(1))))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2978))).f_idx)))).f_hasm) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2979))).f_nlits) == (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2978))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2978))).f_idx)))).f_mlo))), INT64_C(1)))))))) {
yr1026_SB();
yr1037_SA(y_str("a string of ", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2979))).f_nlits));
yr1037_SA(y_str(" characters for an array of ", 28));
yr1050_SI(y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2978))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2978))).f_idx)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" (VI.B.1)", 9));
F.v7104 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1000), Y_DEFI(F.v7104));
}
}
if ((!yr2911_NeedsConv(F.p2978, F.p2979))) {
{ rt_int rv7117 = F.p2977;
y_use = F.yu; return rv7117; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v825)) {
{ rt_int rv7118 = yr2918_ConvertRecord(F.p2977, F.p2978, F.p2979);
y_use = F.yu; return rv7118; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v843)))) {
{ rt_int rv7119 = yr2926_ConvertArray(F.p2977, F.p2978, F.p2979);
y_use = F.yu; return rv7119; }
}
if (yr3270_Suppressed(v1480)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v807)) {
{ rt_int rv7120 = yr2934_RescaleCode(F.p2977, F.p2979, F.p2978);
y_use = F.yu; return rv7120; }
}
{ rt_int rv7121 = F.p2977;
y_use = F.yu; return rv7121; }
}
if (yr2477_IsDiscrete(F.p2978)) {
yr1026_SB();
yr1037_SA(y_str("y_range(", 8));
yr1044_ST(F.p2977);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2607_LoText(F.p2978));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2613_HiText(F.p2978));
yr1037_SA(y_str(")", 1));
{ rt_int rv7126 = yr1056_SE();
y_use = F.yu; return rv7126; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_frange(", 9));
yr1044_ST(F.p2977);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2607_LoText(F.p2978));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2613_HiText(F.p2978));
yr1037_SA(y_str(")", 1));
{ rt_int rv7131 = yr1056_SE();
y_use = F.yu; return rv7131; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_kind) == v807)) {
F.v7104 = yr2934_RescaleCode(F.p2977, F.p2979, F.p2978);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2978))).f_lo) == INT64_C(0))) {
{ rt_int rv7133 = Y_DEFI(F.v7104);
y_use = F.yu; return rv7133; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_range(", 12));
yr1044_ST(Y_DEFI(F.v7104));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2607_LoText(F.p2978));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2613_HiText(F.p2978));
yr1037_SA(y_str(")", 1));
{ rt_int rv7138 = yr1056_SE();
y_use = F.yu; return rv7138; }
}
{ rt_int rv7139 = F.p2977;
y_use = F.yu; return rv7139; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2984_StoreText(rt_int a_p2985, void * a_p2986, rt_int a_p2987, void * a_p2988, rt_int a_p2989) {
struct yf2990 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2985 = a_p2985;
F.p2986 = a_p2986;
F.p2987 = a_p2987;
F.p2988 = a_p2988;
F.p2989 = a_p2989;
F.v7147 = Y_UNDEF_I;
yr2559_CheckType(F.p2989, F.p2986, F.p2988);
if (yr2501_Deep(F.p2986)) {
F.v7147 = yr1200_Fresh(y_str("t", 1));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2526_CType(F.p2986));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7147));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2976_Convert(F.p2987, F.p2986, F.p2988));
yr1037_SA(y_str("; y_store(", 10));
yr1044_ST(yr2532_DescOf(F.p2986));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.p2985);
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7147));
yr1037_SA(y_str("); }", 4));
{ rt_int rv7156 = yr1056_SE();
y_use = F.yu; return rv7156; }
}
yr1026_SB();
yr1044_ST(F.p2985);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2976_Convert(F.p2987, F.p2986, F.p2988));
yr1037_SA(y_str(";", 1));
{ rt_int rv7159 = yr1056_SE();
y_use = F.yu; return rv7159; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2994_Store(rt_int a_p2995, void * a_p2996, rt_int a_p2997, void * a_p2998, rt_int a_p2999) {
struct yf3000 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2995 = a_p2995;
F.p2996 = a_p2996;
F.p2997 = a_p2997;
F.p2998 = a_p2998;
F.p2999 = a_p2999;
yr1132_Emit(yr2984_StoreText(F.p2995, F.p2996, F.p2997, F.p2998, F.p2999));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3004_IsVariable(void * a_p3005) {
struct yf3006 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3005 = a_p3005;
F.v7169 = Y_UNDEF_P;
F.v7171 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_kind) == v777)) {
F.v7169 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_name));
if ((Y_DEFP(F.v7169) == ((void *)0))) {
{ rt_int rv7173 = 0;
y_use = F.yu; return rv7173; }
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7169)))).f_readonly)) {
{ rt_int rv7175 = 0;
y_use = F.yu; return rv7175; }
}
{ rt_int rv7176 = (Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v7169))))).f_kind) == v861);
y_use = F.yu; return rv7176; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_kind) == v789)) {
{ rt_int rv7178 = (Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_flag) == INT64_C(0));
y_use = F.yu; return rv7178; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_kind) == v786)) {
{ rt_int rv7179 = (yr3102_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3005))).f_a)) || yr3004_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p3005))).f_a)));
y_use = F.yu; return rv7179; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_kind) == v783)) {
if ((!yr3004_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p3005))).f_a)))) {
{ rt_int rv7181 = 0;
y_use = F.yu; return rv7181; }
}
F.v7171 = yr2781_FindField(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3005))).f_a)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p3005))).f_name));
if ((Y_DEFP(F.v7171) == ((void *)0))) {
{ rt_int rv7183 = 0;
y_use = F.yu; return rv7183; }
}
{ rt_int rv7184 = (!Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7171)))).f_isconst));
y_use = F.yu; return rv7184; }
}
{ rt_int rv7186 = 0;
y_use = F.yu; return rv7186; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3010_CheckPure(void * a_p3011) {
struct yf3012 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3011 = a_p3011;
F.v7190 = Y_UNDEF_P;
F.v7190 = F.p3011;
F.v7192 = Y_UNDEF_P;
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_func))) {
y_use = F.yu; return;
}
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_kind) == v786)))) {
Y_TICK();
F.v7190 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_kind) == v789)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_flag) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3011))).f_line), y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_kind) == v777)) {
F.v7192 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_name));
if ((!(Y_DEFP(F.v7192) == ((void *)0)))) {
F.v7192 = yr2458_Real(Y_DEFP(F.v7192));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7192)))).f_level) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_level))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3011))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7190)))).f_name), y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3016_LValue(void * a_p3017, rt_int * a_p3018, void * * a_p3019) {
struct yf3020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3017 = a_p3017;
F.p3018_o = a_p3018;
F.p3019_o = a_p3019;
F.v7201 = Y_UNDEF_P;
F.v7201 = Y_DEFP(v1689);
v1689 = F.p3017;
yr3043_Expr(F.p3017, ((void *)0), &F.p3018, &F.p3019);
v1689 = Y_DEFP(F.v7201);
if ((!yr3004_IsVariable(F.p3017))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3017))).f_line), y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p3018_o) = F.p3018;
(*F.p3019_o) = F.p3019;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3024_Paren(rt_int a_p3025) {
struct yf3026 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3025 = a_p3025;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3025);
yr1037_SA(y_str(")", 1));
{ rt_int rv7207 = yr1056_SE();
y_use = F.yu; return rv7207; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3030_Lit(void * a_p3031, rt_int a_p3032) {
struct yf3033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3031 = a_p3031;
F.p3032 = a_p3032;
F.v7212 = Y_UNDEF_P;
F.v7212 = yr2471_CopyRep(F.p3031);
yr2694_SetRange(Y_DEFP(F.v7212), F.p3032, F.p3032);
((*(yR110 *)y_deref(Y_DEFP(F.v7212)))).f_elem = F.p3031;
{ void * rv7213 = Y_DEFP(F.v7212);
y_use = F.yu; return rv7213; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3037_Qualifier(void * a_p3038) {
struct yf3039 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3038 = a_p3038;
F.v7217 = Y_UNDEF_P;
F.v7217 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3038))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3038))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7217)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7217)))).f_kind) == v870))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3038))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3038))).f_d)))).f_name), y_str(" is not a type", 14));
}
{ void * rv7219 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7217)))).f_rep);
y_use = F.yu; return rv7219; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3043_Expr(void * a_p3044, void * a_p3045, rt_int * a_p3046, void * * a_p3047) {
struct yf3048 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3044 = a_p3044;
F.p3045 = a_p3045;
F.p3046_o = a_p3046;
F.p3047_o = a_p3047;
F.v7226 = Y_UNDEF_I;
F.v7226 = Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_kind);
F.v7228 = Y_UNDEF_P;
F.v7230 = Y_UNDEF_I;
F.v7232 = Y_UNDEF_I;
F.v7234 = Y_UNDEF_P;
F.v7236 = Y_UNDEF_P;
F.v7238 = Y_UNDEF_P;
F.v7240 = Y_UNDEF_I;
F.v7242 = Y_UNDEF_I;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line);
if ((Y_DEFI(F.v7226) == v801)) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), F.p3045, &F.v7230, &F.p3047);
F.p3046 = yr3024_Paren(Y_DEFI(F.v7230));
} else if ((Y_DEFI(F.v7226) == v759)) {
F.p3047 = yr3030_Lit(Y_DEFP(v1342), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_ival));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_d) == ((void *)0)))) {
F.v7236 = yr3037_Qualifier(F.p3044);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_tname);
}
yr1026_SB();
yr1037_SA(y_str("INT64_C(", 8));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_ival));
yr1037_SA(y_str(")", 1));
F.p3046 = yr1056_SE();
} else if ((Y_DEFI(F.v7226) == v768)) {
F.v7236 = yr2871_AlphabetFor(F.p3044, F.p3045);
F.v7242 = yr2878_CharValue(Y_DEFP(F.v7236), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line));
F.p3047 = yr3030_Lit(Y_DEFP(F.v7236), Y_DEFI(F.v7242));
yr1026_SB();
yr1050_SI(Y_DEFI(F.v7242));
F.p3046 = yr1056_SE();
} else if ((Y_DEFI(F.v7226) == v771)) {
F.v7236 = yr2871_AlphabetFor(F.p3044, F.p3045);
F.v7230 = yr2886_StringCodes(Y_DEFP(F.v7236), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_text), &F.v7240, Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line));
F.p3047 = yr2464_NewRep(v846, yr1061_T(y_str("string", 6)));
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_tname = yr1061_T(y_str("a string literal", 16));
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_elem = Y_DEFP(F.v7236);
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_nidx = INT64_C(1);
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_nlits = Y_DEFI(F.v7240);
yr1026_SB();
yr1037_SA(y_str("y_str(", 6));
yr1044_ST(Y_DEFI(F.v7230));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v7240));
yr1037_SA(y_str(")", 1));
F.p3046 = yr1056_SE();
} else if ((Y_DEFI(F.v7226) == v765)) {
F.p3047 = Y_DEFP(v1354);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_d) == ((void *)0)))) {
F.p3047 = yr3037_Qualifier(F.p3044);
}
F.p3046 = yr3024_Paren(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_text));
} else if ((Y_DEFI(F.v7226) == v762)) {
yr2953_FixLiteral(F.p3044, &F.p3046, &F.p3047);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_d) == ((void *)0)))) {
F.v7236 = yr3037_Qualifier(F.p3044);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_kind) == v807))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_tname);
}
} else if ((Y_DEFI(F.v7226) == v774)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p3047 = yr3037_Qualifier(F.p3044);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3047)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("NIL of a type that is not a pointer", 35));
}
F.p3046 = yr1061_T(y_str("((void *)0)", 11));
} else if ((Y_DEFI(F.v7226) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_d) == ((void *)0)))) {
F.v7236 = yr3037_Qualifier(F.p3044);
F.v7228 = yr2418_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name), Y_DEFP(F.v7236));
if ((Y_DEFP(F.v7228) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name), y_str(" is not a literal of that type", 30));
}
} else {
F.v7228 = yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line));
}
yr3093_NameExpr(F.p3044, Y_DEFP(F.v7228), &F.p3046, &F.p3047);
} else if ((Y_DEFI(F.v7226) == v780)) {
yr3296_CallExpr(F.p3044, F.p3045, 0, &F.p3046, &F.p3047);
} else if ((Y_DEFI(F.v7226) == v783)) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), ((void *)0), &F.v7230, &F.v7236);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a)))).f_rep = Y_DEFP(F.v7236);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_kind) == v825))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name), y_str(": a component of something that is not a record", 47));
}
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_tname), y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v7238 = yr2781_FindField(Y_DEFP(F.v7236), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name));
if ((Y_DEFP(F.v7238) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name), y_str(" is not a component of this record", 34));
}
F.p3047 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7238)))).f_rep);
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7238)))).f_variant) == INT64_C(0)))) {
yr3377_CheckVariantSelected(F.p3044, Y_DEFP(F.v7236), Y_DEFP(F.v7238));
F.v7232 = yr1200_Fresh(y_str("vr", 2));
yr1026_SB();
yr1037_SA(y_str("(*({ ", 5));
yr1044_ST(yr2526_CType(Y_DEFP(F.v7236)));
yr1037_SA(y_str(" *", 2));
yr1044_ST(Y_DEFI(F.v7232));
yr1037_SA(y_str(" = &", 4));
yr1044_ST(yr3024_Paren(Y_DEFI(F.v7230)));
yr1037_SA(y_str("; if (!(", 8));
yr1044_ST(yr3085_VariantTest(Y_DEFP(F.v7236), Y_DEFP(F.v7238), Y_DEFI(F.v7232)));
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1044_ST(Y_DEFI(F.v7232));
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name));
yr1037_SA(y_str("; }))", 5));
F.p3046 = yr1056_SE();
} else {
yr1026_SB();
yr1044_ST(yr3024_Paren(Y_DEFI(F.v7230)));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_name));
F.p3046 = yr1056_SE();
}
} else if ((((Y_DEFI(F.v7226) == v789)) && yr3241_UserOp(F.p3044, y_range(v618, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), ((void *)0), &F.p3046, &F.p3047))) {
((*(yR105 *)y_deref(F.p3044))).f_flag = INT64_C(1);
} else if ((Y_DEFI(F.v7226) == v789)) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), ((void *)0), &F.v7230, &F.v7236);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("^ of something that is not a pointer", 36));
}
yr3520_NoteFreeDeref(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_tid));
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_forward), y_str(" is not declared", 16));
}
F.p3047 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7236)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(yr2526_CType(Y_DEFP(F.p3047)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v7230));
yr1037_SA(y_str("))", 2));
F.p3046 = yr1056_SE();
} else if ((Y_DEFI(F.v7226) == v786)) {
yr3108_IndexExpr(F.p3044, &F.p3046, &F.p3047);
} else if ((((Y_DEFI(F.v7226) == v792)) && yr3241_UserOp(F.p3044, y_range(v390, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), ((void *)0), &F.p3046, &F.p3047))) {
F.p3047 = Y_DEFP(F.p3047);
} else if ((Y_DEFI(F.v7226) == v792)) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), Y_DEFP(v1344), &F.v7230, &F.v7236);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7236));
F.p3047 = Y_DEFP(v1344);
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.v7230));
yr1037_SA(y_str(")", 1));
F.p3046 = yr1056_SE();
} else if ((Y_DEFI(F.v7226) == v795)) {
if ((!yr3241_UserOp(F.p3044, y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), ((void *)0), &F.p3046, &F.p3047))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), F.p3045, &F.v7230, &F.v7236);
yr3116_NegExpr(F.p3044, Y_DEFI(F.v7230), Y_DEFP(F.v7236), &F.p3046, &F.p3047);
}
} else if ((Y_DEFI(F.v7226) == v798)) {
yr3172_BinExpr(F.p3044, F.p3045, &F.p3046, &F.p3047);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("not an expression", 17));
}
((*(yR105 *)y_deref(F.p3044))).f_rep = Y_DEFP(F.p3047);
yr3052_CheckDefined(F.p3044, &F.p3046, Y_DEFP(F.p3047));
(*F.p3046_o) = F.p3046;
(*F.p3047_o) = F.p3047;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3052_CheckDefined(void * a_p3053, rt_int * a_p3054, void * a_p3055) {
struct yf3056 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3053 = a_p3053;
F.p3054 = a_p3054;
F.p3055 = a_p3055;
F.v7285 = Y_UNDEF_I;
F.v7285 = Y_DEFI(((*(yR105 *)y_deref(F.p3053))).f_kind);
F.v7287 = Y_UNDEF_I;
F.v7287 = INT64_C(0);
if ((((((Y_DEFI(F.v7285) == v777)) || ((Y_DEFI(F.v7285) == v783))) || ((Y_DEFI(F.v7285) == v786))) || ((Y_DEFI(F.v7285) == v789)))) {
((*(yR105 *)y_deref(F.p3053))).f_text = INT64_C(0);
} else {
y_use = F.yu; return;
}
if ((F.p3053 == Y_DEFP(v1689))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7285) == v777)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3053))).f_ival) == INT64_C(1)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7285) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3053))).f_flag) == INT64_C(0)))))) {
y_use = F.yu; return;
}
if (yr3270_Suppressed(v1489)) {
y_use = F.yu; return;
}
F.v7287 = yr3066_UndefMacro(F.p3055);
if ((Y_DEFI(F.v7287) == INT64_C(0))) {
y_use = F.yu; return;
}
((*(yR105 *)y_deref(F.p3053))).f_text = Y_DEFI((*F.p3054));
if ((!yr3060_Addressable(F.p3053))) {
yr1026_SB();
yr1037_SA(y_str("y_vchk_", 7));
yr1031_SC(yr1103_TChar(Y_DEFI(F.v7287), INT64_C(6)));
yr1037_SA(y_str("(", 1));
F.v7287 = yr1056_SE();
}
(*F.p3054) = yr3453_Join(Y_DEFI(F.v7287), Y_DEFI((*F.p3054)), yr1061_T(y_str(")", 1)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3060_Addressable(void * a_p3061) {
struct yf3062 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3061 = a_p3061;
F.v7300 = Y_UNDEF_P;
F.v7300 = F.p3061;
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7300)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7300)))).f_kind) == v801)))) {
Y_TICK();
F.v7300 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7300)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7300)))).f_kind) == v780)) {
{ rt_int rv7302 = 0;
y_use = F.yu; return rv7302; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7300)))).f_kind) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7300)))).f_flag) == INT64_C(0)))))) {
{ rt_int rv7305 = 0;
y_use = F.yu; return rv7305; }
}
{ rt_int rv7307 = 1;
y_use = F.yu; return rv7307; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3066_UndefMacro(void * a_p3067) {
struct yf3068 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3067 = a_p3067;
F.v7311 = Y_UNDEF_I;
F.v7311 = Y_DEFI(((*(yR110 *)y_deref(F.p3067))).f_kind);
if (((((Y_DEFI(F.v7311) == v804)) || ((Y_DEFI(F.v7311) == v813))) || ((Y_DEFI(F.v7311) == v816)))) {
{ rt_int rv7313 = yr1061_T(y_str("Y_DEFI(", 7));
y_use = F.yu; return rv7313; }
}
if ((((Y_DEFI(F.v7311) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3067))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7316 = yr1061_T(y_str("Y_DEFB(", 7));
y_use = F.yu; return rv7316; }
}
if ((Y_DEFI(F.v7311) == v810)) {
{ rt_int rv7318 = yr1061_T(y_str("Y_DEFF(", 7));
y_use = F.yu; return rv7318; }
}
if ((Y_DEFI(F.v7311) == v807)) {
{ rt_int rv7320 = yr1061_T(y_str("Y_DEFX(", 7));
y_use = F.yu; return rv7320; }
}
if ((Y_DEFI(F.v7311) == v828)) {
{ rt_int rv7322 = yr1061_T(y_str("Y_DEFP(", 7));
y_use = F.yu; return rv7322; }
}
if ((Y_DEFI(F.v7311) == v834)) {
{ rt_int rv7324 = yr1061_T(y_str("Y_DEFS(", 7));
y_use = F.yu; return rv7324; }
}
{ rt_int rv7326 = INT64_C(0);
y_use = F.yu; return rv7326; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3072_UndefValue(void * a_p3073) {
struct yf3074 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3073 = a_p3073;
F.v7330 = Y_UNDEF_I;
F.v7330 = Y_DEFI(((*(yR110 *)y_deref(F.p3073))).f_kind);
if (((((Y_DEFI(F.v7330) == v804)) || ((Y_DEFI(F.v7330) == v813))) || ((Y_DEFI(F.v7330) == v816)))) {
{ rt_int rv7332 = yr1061_T(y_str("Y_UNDEF_I", 9));
y_use = F.yu; return rv7332; }
}
if ((((Y_DEFI(F.v7330) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3073))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7335 = yr1061_T(y_str("Y_UNDEF_B", 9));
y_use = F.yu; return rv7335; }
}
if ((Y_DEFI(F.v7330) == v810)) {
{ rt_int rv7337 = yr1061_T(y_str("Y_UNDEF_F_VALUE", 15));
y_use = F.yu; return rv7337; }
}
if ((Y_DEFI(F.v7330) == v807)) {
{ rt_int rv7339 = yr1061_T(y_str("Y_UNDEF_X", 9));
y_use = F.yu; return rv7339; }
}
if ((Y_DEFI(F.v7330) == v828)) {
{ rt_int rv7341 = yr1061_T(y_str("Y_UNDEF_P", 9));
y_use = F.yu; return rv7341; }
}
{ rt_int rv7343 = INT64_C(0);
y_use = F.yu; return rv7343; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3078_RawCode(void * a_p3079, rt_int a_p3080) {
struct yf3081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3079 = a_p3079;
F.p3080 = a_p3080;
if ((((((((Y_DEFI(((*(yR105 *)y_deref(F.p3079))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3079))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3079))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3079))).f_kind) == v789)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3079))).f_text) == INT64_C(0)))))) {
{ rt_int rv7348 = Y_DEFI(((*(yR105 *)y_deref(F.p3079))).f_text);
y_use = F.yu; return rv7348; }
}
{ rt_int rv7349 = F.p3080;
y_use = F.yu; return rv7349; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3085_VariantTest(void * a_p3086, void * a_p3087, rt_int a_p3088) {
struct yf3089 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3086 = a_p3086;
F.p3087 = a_p3087;
F.p3088 = a_p3088;
F.v7355 = Y_UNDEF_P;
F.v7355 = Y_DEFP(((*(yR115 *)y_deref(F.p3087))).f_labels);
F.v7357 = Y_UNDEF_I;
F.v7359 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("0", 1));
while ((!(Y_DEFP(F.v7355) == ((void *)0)))) {
Y_TICK();
yr2895_Manifest(Y_DEFP(F.v7355), &F.v7357, &F.v7359);
yr1037_SA(y_str(" || ", 4));
yr1044_ST(F.p3088);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3086))).f_selector)))).f_name));
yr1037_SA(y_str(" == ", 4));
yr1050_SI(Y_DEFI(F.v7359));
F.v7355 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7355)))).f_next);
}
{ rt_int rv7364 = yr1056_SE();
y_use = F.yu; return rv7364; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3093_NameExpr(void * a_p3094, void * a_p3095, rt_int * a_p3096, void * * a_p3097) {
struct yf3098 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3094 = a_p3094;
F.p3095 = a_p3095;
F.p3096_o = a_p3096;
F.p3097_o = a_p3097;
F.v7371 = Y_UNDEF_P;
F.v7371 = yr2458_Real(F.p3095);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_kind) == v873)) {
if ((((Y_DEFP(((*(yR105 *)y_deref(F.p3094))).f_d) == ((void *)0))) && yr2412_Ambiguous(Y_DEFP(F.v7371)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3094))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3094))).f_name), y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p3097 = yr3030_Lit(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_rep), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_mval));
yr1026_SB();
yr1050_SI(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_mval));
F.p3096 = yr1056_SE();
(*F.p3096_o) = F.p3096;
(*F.p3097_o) = F.p3097;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_kind) == v864)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_kind) == v861)) {
((*(yR105 *)y_deref(F.p3094))).f_ival = INT64_C(1);
} else {
((*(yR105 *)y_deref(F.p3094))).f_ival = INT64_C(0);
}
yr3514_NoteFree(Y_DEFP(F.v7371));
F.p3097 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_rep);
F.p3096 = yr2452_SymPath(Y_DEFP(F.v7371));
(*F.p3096_o) = F.p3096;
(*F.p3097_o) = F.p3097;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7371)))).f_kind) == v876)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3094))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3094))).f_name), y_str(" is a routine: a call needs ()", 30));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3094))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3094))).f_name), y_str(" is not a value", 15));
(*F.p3096_o) = F.p3096;
(*F.p3097_o) = F.p3097;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3102_IsMainStore(void * a_p3103) {
struct yf3104 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3103 = a_p3103;
F.v7380 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3103))).f_kind) == v777))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3103))).f_d) == ((void *)0)))))) {
{ rt_int rv7382 = 0;
y_use = F.yu; return rv7382; }
}
F.v7380 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3103))).f_name));
if ((Y_DEFP(F.v7380) == ((void *)0))) {
{ rt_int rv7384 = 0;
y_use = F.yu; return rv7384; }
}
if ((!yr2406_Resolved(Y_DEFP(F.v7380)))) {
{ rt_int rv7386 = 0;
y_use = F.yu; return rv7386; }
}
F.v7380 = yr2458_Real(Y_DEFP(F.v7380));
{ rt_int rv7387 = (((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7380)))).f_kind) == v891)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7380)))).f_mval) == v1477)));
y_use = F.yu; return rv7387; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3108_IndexExpr(void * a_p3109, rt_int * a_p3110, void * * a_p3111) {
struct yf3112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3109 = a_p3109;
F.p3110_o = a_p3110;
F.p3111_o = a_p3111;
F.v7393 = Y_UNDEF_I;
F.v7395 = Y_UNDEF_I;
F.v7397 = Y_UNDEF_I;
F.v7399 = Y_UNDEF_P;
F.v7401 = Y_UNDEF_P;
F.v7403 = Y_UNDEF_P;
F.v7405 = Y_UNDEF_P;
F.v7407 = Y_UNDEF_I;
F.v7409 = Y_UNDEF_I;
if (yr3102_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_a))) {
if ((!(yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_b)) == INT64_C(1)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3109))).f_line), y_str("MAIN_STORE_ARRAY has one subscript", 34));
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_b), Y_DEFP(v1934), &F.v7395, &F.v7401);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3109))).f_line), Y_DEFP(v1934), Y_DEFP(F.v7401));
F.p3111 = Y_DEFP(v1936);
F.p3110 = yr3453_Join(yr1061_T(y_str("(*y_mem_word(", 13)), Y_DEFI(F.v7395), yr1061_T(y_str("))", 2)));
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_a), ((void *)0), &F.v7393, &F.v7399);
if ((!yr2489_IsArrayLike(Y_DEFP(F.v7399)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3109))).f_line), y_str("[] of something that is not an array", 36));
}
F.v7407 = yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_b));
if ((!(Y_DEFI(F.v7407) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7399)))).f_nidx)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3109))).f_line), y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p3111 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7399)))).f_elem);
F.v7409 = (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_a)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_a)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_a)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_a)))).f_kind) == v789)));
if (Y_DEFI(F.v7409)) {
F.v7397 = Y_DEFI(F.v7393);
} else {
F.v7397 = yr1200_Fresh(y_str("ya", 2));
}
yr1026_SB();
if ((!Y_DEFI(F.v7409))) {
yr1037_SA(y_str("(*({ yarr ", 10));
yr1044_ST(Y_DEFI(F.v7397));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7393));
yr1037_SA(y_str("; &", 3));
}
yr1037_SA(y_str("((", 2));
yr1044_ST(yr2526_CType(Y_DEFP(F.p3111)));
yr1037_SA(y_str(" *)(", 4));
yr1044_ST(Y_DEFI(F.v7397));
yr1037_SA(y_str(").p)[y_ix", 9));
yr1050_SI(Y_DEFI(F.v7407));
yr1037_SA(y_str("(", 1));
yr1044_ST(Y_DEFI(F.v7397));
F.p3110 = yr1056_SE();
F.v7405 = Y_DEFP(((*(yR105 *)y_deref(F.p3109))).f_b);
F.v7403 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7399)))).f_idx);
while ((!(Y_DEFP(F.v7405) == ((void *)0)))) {
Y_TICK();
yr3043_Expr(Y_DEFP(F.v7405), Y_DEFP(F.v7403), &F.v7395, &F.v7401);
if ((((!(Y_DEFP(F.v7403) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7399)))).f_kind) == v822)))) {
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7405)))).f_line), Y_DEFP(F.v7403), Y_DEFP(F.v7401));
} else if ((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7401)))).f_kind) == v804)) || yr2477_IsDiscrete(Y_DEFP(F.v7401)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7405)))).f_line), y_str("a subscript is an integer or scalar value", 41));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3110));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7395));
F.p3110 = yr1056_SE();
if ((!(Y_DEFP(F.v7403) == ((void *)0)))) {
F.v7403 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7403)))).f_link);
}
F.v7405 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7405)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3110));
yr1037_SA(y_str(")]", 2));
if ((!Y_DEFI(F.v7409))) {
yr1037_SA(y_str("; }))", 5));
}
F.p3110 = yr1056_SE();
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3116_NegExpr(void * a_p3117, rt_int a_p3118, void * a_p3119, rt_int * a_p3120, void * * a_p3121) {
struct yf3122 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3117 = a_p3117;
F.p3118 = a_p3118;
F.p3119 = a_p3119;
F.p3120_o = a_p3120;
F.p3121_o = a_p3121;
yr1026_SB();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3119))).f_kind) == v804)) {
F.p3121 = yr2471_CopyRep(F.p3119);
((*(yR110 *)y_deref(Y_DEFP(F.p3121)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.p3121)))).f_hasm = 0;
if (yr3270_Suppressed(v1483)) {
yr1037_SA(y_str("Y_NEGW(", 7));
} else {
yr1037_SA(y_str("y_neg(", 6));
}
yr1044_ST(F.p3118);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3119))).f_kind) == v810)) {
F.p3121 = yr2471_CopyRep(F.p3119);
((*(yR110 *)y_deref(Y_DEFP(F.p3121)))).f_lo = INT64_C(0);
yr1037_SA(y_str("(-", 2));
yr1044_ST(F.p3118);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3119))).f_kind) == v807)) {
F.p3121 = yr2471_CopyRep(F.p3119);
((*(yR110 *)y_deref(Y_DEFP(F.p3121)))).f_lo = INT64_C(0);
yr1037_SA(y_str("y_fix_neg(", 10));
yr1044_ST(F.p3118);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3119))).f_kind) == v834)) {
F.p3121 = F.p3119;
yr1037_SA(y_str("y_set_compl(", 12));
yr1044_ST(F.p3118);
yr1037_SA(y_str(")", 1));
} else {
v927 = 0;
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3117))).f_line), y_str("- of something that is not a number or a set", 44));
}
F.p3120 = yr1056_SE();
(*F.p3120_o) = F.p3120;
(*F.p3121_o) = F.p3121;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3126_Unbounded(void * a_p3127) {
struct yf3128 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3127 = a_p3127;
F.v7452 = Y_UNDEF_P;
F.v7452 = yr2471_CopyRep(F.p3127);
((*(yR110 *)y_deref(Y_DEFP(F.v7452)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7452)))).f_hi = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7452)))).f_hasm = 0;
{ void * rv7456 = Y_DEFP(F.v7452);
y_use = F.yu; return rv7456; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3132_Call2(yarr a_p3134, rt_int a_p3135, rt_int a_p3136) {
struct yf3137 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3134 = a_p3134;
F.p3135 = a_p3135;
F.p3136 = a_p3136;
yr1026_SB();
yr1037_SA(F.p3134);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3135);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p3136);
yr1037_SA(y_str(")", 1));
{ rt_int rv7464 = yr1056_SE();
y_use = F.yu; return rv7464; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3141_Infix(rt_int a_p3142, yarr a_p3144, rt_int a_p3145) {
struct yf3146 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3142 = a_p3142;
F.p3144 = a_p3144;
F.p3145 = a_p3145;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3142);
yr1037_SA(y_str(" ", 1));
yr1037_SA(F.p3144);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p3145);
yr1037_SA(y_str(")", 1));
{ rt_int rv7473 = yr1056_SE();
y_use = F.yu; return rv7473; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3150_EqCode(rt_int a_p3151, void * a_p3152, rt_int a_p3153, void * a_p3154) {
struct yf3155 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3151 = a_p3151;
F.p3152 = a_p3152;
F.p3153 = a_p3153;
F.p3154 = a_p3154;
F.v7480 = Y_UNDEF_I;
F.v7482 = Y_UNDEF_I;
F.v7484 = Y_UNDEF_P;
F.v7484 = F.p3152;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3152))).f_kind) == v846)) {
F.v7484 = F.p3154;
}
if ((((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v825))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v846)))) {
F.v7480 = yr1200_Fresh(y_str("e", 1));
F.v7482 = yr1200_Fresh(y_str("e", 1));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2526_CType(Y_DEFP(F.v7484)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7480));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3151);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7482));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3153);
yr1037_SA(y_str("; y_eq(", 7));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v843)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_elem)));
yr1037_SA(y_str(")", 1));
} else {
yr1044_ST(yr2532_DescOf(Y_DEFP(F.v7484)));
}
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7480));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7482));
yr1037_SA(y_str("); })", 5));
{ rt_int rv7498 = yr1056_SE();
y_use = F.yu; return rv7498; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_kind) == v834)) {
{ rt_int rv7500 = yr3132_Call2(y_str("y_set_eq", 8), F.p3151, F.p3153);
y_use = F.yu; return rv7500; }
}
{ rt_int rv7502 = yr3141_Infix(F.p3151, y_str("==", 2), F.p3153);
y_use = F.yu; return rv7502; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3159_IsOrdered(void * a_p3160) {
struct yf3161 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3160 = a_p3160;
if ((((((Y_DEFI(((*(yR110 *)y_deref(F.p3160))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3160))).f_kind) == v810))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3160))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3160))).f_kind) == v819)))) {
{ rt_int rv7506 = 1;
y_use = F.yu; return rv7506; }
}
{ rt_int rv7507 = (((Y_DEFI(((*(yR110 *)y_deref(F.p3160))).f_kind) == v816)) && Y_DEFI(((*(yR110 *)y_deref(F.p3160))).f_ordered));
y_use = F.yu; return rv7507; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3165_FixToFloat(rt_int a_p3166, void * a_p3167) {
struct yf3168 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3166 = a_p3166;
F.p3167 = a_p3167;
yr1026_SB();
yr1037_SA(y_str("y_fix_float(", 12));
yr1044_ST(F.p3166);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3167))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3167))).f_fsd));
yr1037_SA(y_str("))", 2));
{ rt_int rv7515 = yr1056_SE();
y_use = F.yu; return rv7515; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3172_BinExpr(void * a_p3173, void * a_p3174, rt_int * a_p3175, void * * a_p3176) {
struct yf3177 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3173 = a_p3173;
F.p3174 = a_p3174;
F.p3175_o = a_p3175;
F.p3176_o = a_p3176;
F.v7522 = Y_UNDEF_I;
F.v7522 = Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_name);
F.v7524 = Y_UNDEF_I;
F.v7526 = Y_UNDEF_I;
F.v7528 = Y_UNDEF_I;
F.v7530 = Y_UNDEF_P;
F.v7532 = Y_UNDEF_P;
F.v7534 = Y_UNDEF_P;
F.v7536 = Y_UNDEF_I;
if (yr3241_UserOp(F.p3173, Y_DEFI(F.v7522), Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b), &F.p3175, &F.p3176)) {
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7522) == v237)) || ((Y_DEFI(F.v7522) == v399)))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a), Y_DEFP(v1344), &F.v7524, &F.v7530);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7530));
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b), Y_DEFP(v1344), &F.v7526, &F.v7532);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7532));
F.p3176 = Y_DEFP(v1344);
if ((Y_DEFI(F.v7522) == v237)) {
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str("&&", 2), Y_DEFI(F.v7526));
} else {
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str("||", 2), Y_DEFI(F.v7526));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7522) == v360)) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b), ((void *)0), &F.v7526, &F.v7532);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7532)))).f_kind) == v834))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("IN needs a set on its right", 27));
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7532)))).f_elem), &F.v7524, &F.v7530);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7532)))).f_elem), Y_DEFP(F.v7530));
F.p3176 = Y_DEFP(v1344);
F.p3175 = yr3132_Call2(y_str("y_set_in", 8), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
F.v7534 = ((void *)0);
if (((((((((!(F.p3174 == ((void *)0)))) && ((!(Y_DEFI(F.v7522) == v585)))) && ((!(Y_DEFI(F.v7522) == v570)))) && ((!(Y_DEFI(F.v7522) == v588)))) && ((!(Y_DEFI(F.v7522) == v540)))) && ((!(Y_DEFI(F.v7522) == v591)))) && ((!(Y_DEFI(F.v7522) == v543))))) {
F.v7534 = F.p3174;
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a), Y_DEFP(F.v7534), &F.v7524, &F.v7530);
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b), Y_DEFP(F.v7530), &F.v7526, &F.v7532);
if ((((Y_DEFI(F.v7522) == v585)) || ((Y_DEFI(F.v7522) == v570)))) {
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(F.v7530), Y_DEFP(F.v7532));
if (yr2520_NonAssignable(Y_DEFP(F.v7530))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_opaque) && (((y_div(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_tname), y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p3176 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_kind) == v807)) {
yr2942_CommonScale(&F.v7524, Y_DEFP(F.v7530), &F.v7526, Y_DEFP(F.v7532), yr3126_Unbounded(Y_DEFP(F.v7530)), Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line));
}
F.p3175 = yr3150_EqCode(Y_DEFI(F.v7524), Y_DEFP(F.v7530), Y_DEFI(F.v7526), Y_DEFP(F.v7532));
if ((Y_DEFI(F.v7522) == v570)) {
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.p3175));
yr1037_SA(y_str(")", 1));
F.p3175 = yr1056_SE();
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((((((Y_DEFI(F.v7522) == v588)) || ((Y_DEFI(F.v7522) == v540))) || ((Y_DEFI(F.v7522) == v591))) || ((Y_DEFI(F.v7522) == v543)))) {
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(F.v7530), Y_DEFP(F.v7532));
if ((!yr3159_IsOrdered(Y_DEFP(F.v7530)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p3176 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_kind) == v807)) {
yr2942_CommonScale(&F.v7524, Y_DEFP(F.v7530), &F.v7526, Y_DEFP(F.v7532), yr3126_Unbounded(Y_DEFP(F.v7530)), Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line));
}
if ((Y_DEFI(F.v7522) == v588)) {
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str("<", 1), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v540)) {
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str("<=", 2), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v591)) {
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str(">", 1), Y_DEFI(F.v7526));
} else {
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str(">=", 2), Y_DEFI(F.v7526));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(F.v7530), Y_DEFP(F.v7532));
F.v7536 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_kind);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_kind) == v846)) {
F.v7536 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7532)))).f_kind);
}
if ((Y_DEFI(F.v7522) == v489)) {
if ((Y_DEFI(F.v7536) == v813)) {
F.p3176 = Y_DEFP(v1344);
F.p3175 = yr3141_Infix(Y_DEFI(F.v7524), y_str("!=", 2), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7536) == v834)) {
F.p3176 = Y_DEFP(F.v7530);
F.p3175 = yr3132_Call2(y_str("y_set_xor", 9), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7536) == v834)) {
F.p3176 = Y_DEFP(F.v7530);
if ((Y_DEFI(F.v7522) == v573)) {
F.p3175 = yr3132_Call2(y_str("y_set_union", 11), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v576)) {
F.p3175 = yr3132_Call2(y_str("y_set_diff", 10), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v579)) {
F.p3175 = yr3132_Call2(y_str("y_set_inter", 11), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("this operator does not apply to sets", 36));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7536) == v804)) {
F.p3176 = yr3126_Unbounded(Y_DEFP(F.v7530));
if ((yr3270_Suppressed(v1483) && (((((Y_DEFI(F.v7522) == v573)) || ((Y_DEFI(F.v7522) == v576))) || ((Y_DEFI(F.v7522) == v579)))))) {
if ((Y_DEFI(F.v7522) == v573)) {
F.p3175 = yr3132_Call2(y_str("Y_ADDW", 6), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v576)) {
F.p3175 = yr3132_Call2(y_str("Y_SUBW", 6), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else {
F.p3175 = yr3132_Call2(y_str("Y_MULW", 6), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
}
} else if ((Y_DEFI(F.v7522) == v573)) {
F.p3175 = yr3132_Call2(y_str("y_add", 5), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v576)) {
F.p3175 = yr3132_Call2(y_str("y_sub", 5), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v579)) {
F.p3175 = yr3132_Call2(y_str("y_mul", 5), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v276)) {
F.p3175 = yr3132_Call2(y_str("y_div", 5), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v378)) {
F.p3175 = yr3132_Call2(y_str("y_mod", 5), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v582)) {
F.p3176 = Y_DEFP(v1354);
yr1026_SB();
yr1037_SA(y_str("y_fdiv((double)(", 16));
yr1044_ST(Y_DEFI(F.v7524));
yr1037_SA(y_str("), (double)(", 12));
yr1044_ST(Y_DEFI(F.v7526));
yr1037_SA(y_str("))", 2));
F.p3175 = yr1056_SE();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFI(F.v7522), y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7536) == v810)) {
F.p3176 = yr3126_Unbounded(Y_DEFP(F.v7530));
if ((Y_DEFI(F.v7522) == v573)) {
F.p3175 = yr2970_FloatChk(yr3141_Infix(Y_DEFI(F.v7524), y_str("+", 1), Y_DEFI(F.v7526)));
} else if ((Y_DEFI(F.v7522) == v576)) {
F.p3175 = yr2970_FloatChk(yr3141_Infix(Y_DEFI(F.v7524), y_str("-", 1), Y_DEFI(F.v7526)));
} else if ((Y_DEFI(F.v7522) == v579)) {
F.p3175 = yr2970_FloatChk(yr3141_Infix(Y_DEFI(F.v7524), y_str("*", 1), Y_DEFI(F.v7526)));
} else if ((Y_DEFI(F.v7522) == v582)) {
F.p3176 = Y_DEFP(v1354);
F.p3175 = yr2970_FloatChk(yr3132_Call2(y_str("y_fdiv", 6), Y_DEFI(F.v7524), Y_DEFI(F.v7526)));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFI(F.v7522), y_str(" does not apply to these numbers", 32));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7536) == v807)) {
F.p3176 = yr3126_Unbounded(Y_DEFP(F.v7530));
if ((((Y_DEFI(F.v7522) == v573)) || ((Y_DEFI(F.v7522) == v576)))) {
yr2942_CommonScale(&F.v7524, Y_DEFP(F.v7530), &F.v7526, Y_DEFP(F.v7532), Y_DEFP(F.p3176), Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line));
if ((Y_DEFI(F.v7522) == v573)) {
F.p3175 = yr3132_Call2(y_str("y_fix_add", 9), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else {
F.p3175 = yr3132_Call2(y_str("y_fix_sub", 9), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
}
} else if ((Y_DEFI(F.v7522) == v579)) {
yr2673_SetScale(Y_DEFP(F.p3176), yr2640_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7532)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line)), yr2640_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7530)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7532)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line)));
F.p3175 = yr3132_Call2(y_str("y_fix_mul", 9), Y_DEFI(F.v7524), Y_DEFI(F.v7526));
} else if ((Y_DEFI(F.v7522) == v582)) {
F.p3176 = Y_DEFP(v1354);
F.p3175 = yr2970_FloatChk(yr3132_Call2(y_str("y_fdiv", 6), yr3165_FixToFloat(Y_DEFI(F.v7524), Y_DEFP(F.v7530)), yr3165_FixToFloat(Y_DEFI(F.v7526), Y_DEFP(F.v7532))));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFI(F.v7522), y_str(" does not apply to these numbers", 32));
}
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFI(F.v7522), y_str(" does not apply to these values", 31));
(*F.p3175_o) = F.p3175;
(*F.p3176_o) = F.p3176;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3181_Fits(void * a_p3182, void * a_p3183) {
struct yf3184 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3182 = a_p3182;
F.p3183 = a_p3183;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3182))).f_kind) == v843)) {
if ((!yr2489_IsArrayLike(F.p3183))) {
{ rt_int rv7587 = 0;
y_use = F.yu; return rv7587; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3183))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p3182))).f_nidx)))) {
{ rt_int rv7589 = 0;
y_use = F.yu; return rv7589; }
}
{ rt_int rv7590 = yr2544_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p3182))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3183))).f_elem));
y_use = F.yu; return rv7590; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3182))).f_kind) == v855)) {
{ rt_int rv7592 = 1;
y_use = F.yu; return rv7592; }
}
{ rt_int rv7593 = yr2544_SameType(F.p3182, F.p3183);
y_use = F.yu; return rv7593; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3188_Choose(void * a_p3189, rt_int a_p3190, rt_int a_p3191) {
struct yf3192 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3189 = a_p3189;
F.p3190 = a_p3190;
F.p3191 = a_p3191;
F.v7599 = Y_UNDEF_P;
F.v7599 = F.p3189;
F.v7601 = Y_UNDEF_P;
F.v7603 = Y_UNDEF_I;
F.v7605 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7599) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7599)))).f_nparams) == F.p3191)) {
F.v7603 = 1;
F.v7601 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7599)))).f_params);
F.v7605 = INT64_C(1);
while ((!(Y_DEFP(F.v7601) == ((void *)0)))) {
Y_TICK();
if ((!yr3181_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7601)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, y_add(F.p3190, Y_DEFI(F.v7605)))])))) {
F.v7603 = 0;
}
F.v7605 = y_range(y_add(Y_DEFI(F.v7605), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7601 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7601)))).f_next);
}
if (Y_DEFI(F.v7603)) {
{ void * rv7612 = Y_DEFP(F.v7599);
y_use = F.yu; return rv7612; }
}
}
F.v7599 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7599)))).f_alt);
}
{ void * rv7613 = ((void *)0);
y_use = F.yu; return rv7613; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3196_HidesStandard(void * a_p3197) {
struct yf3198 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3197 = a_p3197;
F.v7617 = Y_UNDEF_P;
F.v7617 = F.p3197;
while ((!(Y_DEFP(F.v7617) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7617)))).f_decl) == ((void *)0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7617)))).f_decl)))).f_ival) == INT64_C(0))))) {
{ rt_int rv7620 = 1;
y_use = F.yu; return rv7620; }
}
F.v7617 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7617)))).f_alt);
}
{ rt_int rv7622 = 0;
y_use = F.yu; return rv7622; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3202_CompileArgs(void * a_p3203, void * a_p3204, rt_int * a_p3205, rt_int * a_p3206) {
struct yf3207 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3203 = a_p3203;
F.p3204 = a_p3204;
F.p3205_o = a_p3205;
F.p3206_o = a_p3206;
F.v7629 = Y_UNDEF_P;
F.v7629 = F.p3203;
F.v7631 = Y_UNDEF_P;
F.v7631 = ((void *)0);
F.v7633 = Y_UNDEF_P;
F.p3205 = Y_DEFI(v1551);
F.p3206 = INT64_C(0);
if ((!(F.p3204 == ((void *)0)))) {
F.v7631 = Y_DEFP(((*(yR125 *)y_deref(F.p3204))).f_params);
}
while ((!(Y_DEFP(F.v7629) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(v1551) >= INT64_C(4000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7629)))).f_line), y_str("calls nested too deeply", 23));
}
F.p3206 = y_range(y_add(Y_DEFI(F.p3206), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1551 = y_range(y_add(Y_DEFI(F.p3205), Y_DEFI(F.p3206)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7633 = ((void *)0);
if ((!(Y_DEFP(F.v7631) == ((void *)0)))) {
F.v7633 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7631)))).f_rep);
F.v7631 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7631)))).f_next);
}
yr3043_Expr(Y_DEFP(F.v7629), Y_DEFP(F.v7633), &((rt_int *)(v1527).p)[y_ix1(v1527, y_add(Y_DEFI(F.p3205), Y_DEFI(F.p3206)))], &((void * *)(v1538).p)[y_ix1(v1538, y_add(Y_DEFI(F.p3205), Y_DEFI(F.p3206)))]);
((void * *)(v1549).p)[y_ix1(v1549, y_add(Y_DEFI(F.p3205), Y_DEFI(F.p3206)))] = Y_DEFP(F.v7629);
F.v7629 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7629)))).f_next);
}
(*F.p3205_o) = F.p3205;
(*F.p3206_o) = F.p3206;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3211_CheckUnresolved(void * a_p3212, void * a_p3213, rt_int a_p3214) {
struct yf3215 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3212 = a_p3212;
F.p3213 = a_p3213;
F.p3214 = a_p3214;
F.v7648 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p3212))).f_kind) == v843))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3213))).f_kind) == v822))))) {
y_use = F.yu; return;
}
F.v7648 = Y_DEFP(((*(yR110 *)y_deref(F.p3213))).f_idx);
while ((!(Y_DEFP(F.v7648) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7648)))).f_kind) == v804))) {
yr1178_FailS(F.p3214, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v7648 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7648)))).f_link);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3219_SameAsFormal(void * a_p3220, void * a_p3221) {
struct yf3222 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3220 = a_p3220;
F.p3221 = a_p3221;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3220))).f_kind) == v855)) {
{ rt_int rv7654 = 1;
y_use = F.yu; return rv7654; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3220))).f_kind) == v843)) {
if ((!((((Y_DEFI(((*(yR110 *)y_deref(F.p3221))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3221))).f_kind) == v843)))))) {
{ rt_int rv7656 = 0;
y_use = F.yu; return rv7656; }
}
{ rt_int rv7657 = yr2586_Identical(Y_DEFP(((*(yR110 *)y_deref(F.p3220))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3221))).f_elem));
y_use = F.yu; return rv7657; }
}
{ rt_int rv7658 = yr2586_Identical(F.p3220, F.p3221);
y_use = F.yu; return rv7658; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3226_CallCode(void * a_p3227, rt_int a_p3228, rt_int a_p3229, rt_int a_p3230) {
struct yf3231 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3227 = a_p3227;
F.p3228 = a_p3228;
F.p3229 = a_p3229;
F.p3230 = a_p3230;
F.v7665 = Y_UNDEF_P;
F.v7665 = Y_DEFP(((*(yR125 *)y_deref(F.p3227))).f_params);
F.v7667 = Y_UNDEF_I;
F.v7667 = y_range(y_add(F.p3228, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7671 = Y_UNDEF_I;
F.v7671 = 1;
F.v7674 = Y_UNDEF_I;
F.v7674 = INT64_C(0);
F.v7677 = Y_UNDEF_I;
F.v7677 = INT64_C(0);
F.v7680 = Y_UNDEF_I;
F.v7680 = INT64_C(0);
F.v7683 = Y_UNDEF_I;
F.v7683 = INT64_C(0);
F.v7686 = Y_UNDEF_I;
F.v7686 = INT64_C(0);
if ((!(F.p3229 == Y_DEFI(((*(yR125 *)y_deref(F.p3227))).f_nparams)))) {
yr1186_FailN(F.p3230, Y_DEFI(((*(yR125 *)y_deref(F.p3227))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3541_CheckActuals(F.p3227, F.p3228, F.p3230);
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3227))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3227))).f_level) > INT64_C(1))) {
yr1044_ST(yr2439_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3227))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7671 = 0;
}
while ((!(Y_DEFP(F.v7665) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v7671))) {
yr1037_SA(y_str(", ", 2));
}
F.v7671 = 0;
if ((!yr3181_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))])))) {
v927 = 0;
yr2551_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))]));
}
yr3211_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep)))).f_kind) == v855)) {
if (((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_cls) == v897))) && (!yr3004_IsVariable(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))])))).f_kind) == v855))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr1044_ST(yr2850_SpaceArg(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7667))]), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_cls) == v897)) {
yr1044_ST(yr2976_Convert(Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7667))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))])));
} else {
if ((!yr3004_IsVariable(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))) {
v927 = 0;
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr3010_CheckPure(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))]));
yr3508_NoteWrite(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))]));
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_cls) == v903)) && yr2858_PackedComponent(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_name), y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
}
if (yr3219_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))]))) {
yr1037_SA(y_str("&", 1));
yr1044_ST(yr3078_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7667))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_cls) == v903)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v7680 = yr1200_Fresh(y_str("yo", 2));
F.v7674 = yr3453_Join(Y_DEFI(F.v7674), yr3453_Join(yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep)), yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7680)), yr1061_T(y_str(";", 1)));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep)))).f_kind) == v843)) {
F.v7674 = yr3453_Join(Y_DEFI(F.v7674), yr3453_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7680), yr1061_T(y_str(" = y_like(", 10))), yr3453_Join(yr3078_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7667))])), yr3453_Join(yr1061_T(y_str(", ", 2)), yr3235_Num(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))])))).f_nidx)), yr1061_T(y_str(", ", 2))), yr3453_Join(yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep)))).f_elem)), yr1061_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2501_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep))) {
F.v7674 = yr3453_Join(Y_DEFI(F.v7674), yr3453_Join(yr1061_T(y_str(" y_init(", 8)), yr2532_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep)), yr1061_T(y_str(", &", 3))), yr3453_Join(Y_DEFI(F.v7680), yr1061_T(y_str(");", 2)), INT64_C(0)));
}
F.v7677 = yr3453_Join(Y_DEFI(F.v7677), yr1061_T(y_str(" ", 1)), yr2984_StoreText(yr3078_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7667))])), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7667))]), Y_DEFI(F.v7680), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7667))])))).f_line)));
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7680));
}
}
F.v7667 = y_range(y_add(Y_DEFI(F.v7667), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7665 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7665)))).f_next);
}
yr1037_SA(y_str(")", 1));
v1551 = F.p3228;
F.v7683 = yr1056_SE();
if ((Y_DEFI(F.v7674) == INT64_C(0))) {
{ rt_int rv7722 = Y_DEFI(F.v7683);
y_use = F.yu; return rv7722; }
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v7674));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3227))).f_ret)))).f_kind) == v852)) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7683));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7677));
yr1037_SA(y_str(" })", 3));
} else {
F.v7686 = yr1200_Fresh(y_str("yv", 2));
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR125 *)y_deref(F.p3227))).f_ret)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7686));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7683));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7677));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7686));
yr1037_SA(y_str("; })", 4));
}
{ rt_int rv7734 = yr1056_SE();
y_use = F.yu; return rv7734; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3235_Num(rt_int a_p3236) {
struct yf3237 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3236 = a_p3236;
yr1026_SB();
yr1050_SI(F.p3236);
{ rt_int rv7737 = yr1056_SE();
y_use = F.yu; return rv7737; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3241_UserOp(void * a_p3242, rt_int a_p3243, void * a_p3244, void * a_p3245, rt_int * a_p3246, void * * a_p3247) {
struct yf3248 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3242 = a_p3242;
F.p3243 = a_p3243;
F.p3244 = a_p3244;
F.p3245 = a_p3245;
F.p3246_o = a_p3246;
F.p3247_o = a_p3247;
F.v7746 = Y_UNDEF_P;
F.v7748 = Y_UNDEF_P;
F.v7750 = Y_UNDEF_I;
F.v7752 = Y_UNDEF_I;
F.v7746 = yr2353_Find(F.p3243);
if ((Y_DEFP(F.v7746) == ((void *)0))) {
{ rt_int rv7754 = 0;
(*F.p3246_o) = F.p3246;
(*F.p3247_o) = F.p3247;
y_use = F.yu; return rv7754; }
}
F.v7746 = yr2458_Real(Y_DEFP(F.v7746));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7746)))).f_kind) == v876))) {
{ rt_int rv7756 = 0;
(*F.p3246_o) = F.p3246;
(*F.p3247_o) = F.p3247;
y_use = F.yu; return rv7756; }
}
((*(yR105 *)y_deref(F.p3244))).f_next = F.p3245;
if ((!(F.p3245 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3245))).f_next = ((void *)0);
}
yr3202_CompileArgs(F.p3244, ((void *)0), &F.v7750, &F.v7752);
F.v7748 = yr3188_Choose(Y_DEFP(F.v7746), Y_DEFI(F.v7750), Y_DEFI(F.v7752));
if ((Y_DEFP(F.v7748) == ((void *)0))) {
v1551 = Y_DEFI(F.v7750);
if (yr3196_HidesStandard(Y_DEFP(F.v7746))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3242))).f_line), F.p3243, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv7759 = 0;
(*F.p3246_o) = F.p3246;
(*F.p3247_o) = F.p3247;
y_use = F.yu; return rv7759; }
}
yr3252_NoteCall(Y_DEFP(F.v7748), Y_DEFI(((*(yR105 *)y_deref(F.p3242))).f_line));
F.p3246 = yr3226_CallCode(Y_DEFP(F.v7748), Y_DEFI(F.v7750), Y_DEFI(F.v7752), Y_DEFI(((*(yR105 *)y_deref(F.p3242))).f_line));
F.p3247 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7748)))).f_ret);
{ rt_int rv7761 = 1;
(*F.p3246_o) = F.p3246;
(*F.p3247_o) = F.p3247;
y_use = F.yu; return rv7761; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3252_NoteCall(void * a_p3253, rt_int a_p3254) {
struct yf3255 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3253 = a_p3253;
F.p3254 = a_p3254;
F.v7766 = Y_UNDEF_P;
F.v7768 = Y_UNDEF_P;
F.v7768 = F.p3253;
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7768)))).f_kind) == v876)) && ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7768)))).f_target) == ((void *)0)))))) {
F.v7768 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7768)))).f_target);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7768)))).f_func))) {
v1683 = y_range(y_add(Y_DEFI(v1683), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
F.v7766 = yr2004_NewNode(v669, F.p3254);
((*(yR105 *)y_deref(Y_DEFP(F.v7766)))).f_sym = Y_DEFP(F.v7768);
((*(yR105 *)y_deref(Y_DEFP(F.v7766)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_calls);
((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_calls = Y_DEFP(F.v7766);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3259_Directive(void * a_p3260, void * a_p3261, rt_int a_p3262, rt_int a_p3263, rt_int * a_p3264, void * * a_p3265) {
struct yf3266 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3260 = a_p3260;
F.p3261 = a_p3261;
F.p3262 = a_p3262;
F.p3263 = a_p3263;
F.p3264_o = a_p3264;
F.p3265_o = a_p3265;
F.v7779 = Y_UNDEF_I;
F.v7781 = Y_UNDEF_I;
F.v7783 = Y_UNDEF_I;
v1551 = F.p3262;
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3261))).f_a), &F.v7779, &F.v7781);
if (((!Y_DEFI(F.v7779)) || ((!(F.p3263 == INT64_C(1)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3261))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3261))).f_name), y_str(" takes a manifest TRAP_KIND (XIV.XIII.2)", 40));
}
F.v7783 = INT64_C(0);
if ((Y_DEFI(F.v7781) == INT64_C(0))) {
F.v7783 = v1480;
} else if ((Y_DEFI(F.v7781) == INT64_C(1))) {
F.v7783 = v1483;
} else if ((Y_DEFI(F.v7781) == INT64_C(2))) {
F.v7783 = v1486;
} else if ((Y_DEFI(F.v7781) == INT64_C(6))) {
F.v7783 = v1489;
}
F.p3265 = Y_DEFP(v1348);
F.p3264 = yr1061_T(y_str("((void)0)", 9));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3260))).f_mval) == v1504)) {
if ((!yr3270_Suppressed(Y_DEFI(F.v7783)))) {
v1686 = y_range(y_add(Y_DEFI(v1686), Y_DEFI(F.v7783)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else if ((Y_DEFI(((*(yR125 *)y_deref(F.p3260))).f_mval) == v1507)) {
if (yr3270_Suppressed(Y_DEFI(F.v7783))) {
v1686 = y_range(y_sub(Y_DEFI(v1686), Y_DEFI(F.v7783)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else {
F.p3265 = Y_DEFP(v1344);
if ((yr3270_Suppressed(Y_DEFI(F.v7783)) && ((!(Y_DEFI(F.v7783) == INT64_C(0)))))) {
F.p3264 = yr1061_T(y_str("1", 1));
} else {
F.p3264 = yr1061_T(y_str("0", 1));
}
}
(*F.p3264_o) = F.p3264;
(*F.p3265_o) = F.p3265;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3270_Suppressed(rt_int a_p3271) {
struct yf3272 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3271 = a_p3271;
if ((F.p3271 == INT64_C(0))) {
{ rt_int rv7801 = 0;
y_use = F.yu; return rv7801; }
}
{ rt_int rv7806 = ((y_mod((y_div(Y_DEFI(v1686), F.p3271)), INT64_C(2))) == INT64_C(1));
y_use = F.yu; return rv7806; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3276_UserAssign(rt_int a_p3277, void * a_p3278, rt_int a_p3279, void * a_p3280, rt_int a_p3281) {
struct yf3282 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3277 = a_p3277;
F.p3278 = a_p3278;
F.p3279 = a_p3279;
F.p3280 = a_p3280;
F.p3281 = a_p3281;
F.v7814 = Y_UNDEF_P;
F.v7816 = Y_UNDEF_P;
F.v7818 = Y_UNDEF_P;
F.v7820 = Y_UNDEF_P;
F.v7822 = Y_UNDEF_I;
F.v7814 = yr2353_Find(y_range(v531, INT64_C(0), INT64_C(4000000)));
if ((Y_DEFP(F.v7814) == ((void *)0))) {
{ rt_int rv7824 = INT64_C(0);
y_use = F.yu; return rv7824; }
}
F.v7814 = yr2458_Real(Y_DEFP(F.v7814));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7814)))).f_kind) == v876))) {
{ rt_int rv7826 = INT64_C(0);
y_use = F.yu; return rv7826; }
}
F.v7816 = Y_DEFP(F.v7814);
while ((!(Y_DEFP(F.v7816) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_nparams) == INT64_C(2))) {
F.v7818 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_params);
F.v7820 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_next);
if ((((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_cls) == v897))) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7820)))).f_cls) == v897))) && yr2544_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep), F.p3278)) && yr2544_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7820)))).f_rep), F.p3280))) {
if ((Y_DEFP(v1651) == Y_DEFP(F.v7816))) {
{ rt_int rv7829 = INT64_C(0);
y_use = F.yu; return rv7829; }
}
yr3252_NoteCall(Y_DEFP(F.v7816), F.p3281);
yr1026_SB();
if (yr2586_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep), F.p3278)) {
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2439_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.p3277);
} else {
F.v7822 = yr1200_Fresh(y_str("yo", 2));
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7822));
yr1037_SA(y_str(";", 1));
if (yr2501_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep))) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep)));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7822));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2439_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7822));
}
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2976_Convert(F.p3279, Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7820)))).f_rep), F.p3280));
yr1037_SA(y_str(");", 2));
if ((!yr2586_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep), F.p3278))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2984_StoreText(F.p3277, F.p3278, Y_DEFI(F.v7822), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7818)))).f_rep), F.p3281));
yr1037_SA(y_str(" }", 2));
}
{ rt_int rv7854 = yr1056_SE();
y_use = F.yu; return rv7854; }
}
}
F.v7816 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7816)))).f_alt);
}
{ rt_int rv7856 = INT64_C(0);
y_use = F.yu; return rv7856; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3286_Assign(rt_int a_p3287, void * a_p3288, rt_int a_p3289, void * a_p3290, rt_int a_p3291) {
struct yf3292 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3287 = a_p3287;
F.p3288 = a_p3288;
F.p3289 = a_p3289;
F.p3290 = a_p3290;
F.p3291 = a_p3291;
F.v7864 = Y_UNDEF_I;
F.v7864 = yr3276_UserAssign(F.p3287, F.p3288, F.p3289, F.p3290, F.p3291);
if ((!(Y_DEFI(F.v7864) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v7864));
} else {
yr2994_Store(F.p3287, F.p3288, F.p3289, F.p3290, F.p3291);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3296_CallExpr(void * a_p3297, void * a_p3298, rt_int a_p3299, rt_int * a_p3300, void * * a_p3301) {
struct yf3302 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3297 = a_p3297;
F.p3298 = a_p3298;
F.p3299 = a_p3299;
F.p3300_o = a_p3300;
F.p3301_o = a_p3301;
F.v7873 = Y_UNDEF_P;
F.v7875 = Y_UNDEF_P;
F.v7877 = Y_UNDEF_I;
F.v7879 = Y_UNDEF_I;
F.v7873 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line)));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_kind) == v891)) {
yr3938_StdCall(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_mval), F.p3297, F.p3299, &F.p3300, &F.p3301);
(*F.p3300_o) = F.p3300;
(*F.p3301_o) = F.p3301;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_kind) == v870)))) {
if (F.p3299) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), y_str("a value is not a statement", 26));
}
yr3306_Denote(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_rep), F.p3297, &F.p3300, &F.p3301);
(*F.p3300_o) = F.p3300;
(*F.p3301_o) = F.p3301;
y_use = F.yu; return;
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_kind) == v876))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_name), y_str(" is not a routine", 17));
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7873)))).f_alt) == ((void *)0))) {
yr3202_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3297))).f_a), Y_DEFP(F.v7873), &F.v7877, &F.v7879);
F.v7875 = Y_DEFP(F.v7873);
} else {
yr3202_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3297))).f_a), ((void *)0), &F.v7877, &F.v7879);
F.v7875 = yr3188_Choose(Y_DEFP(F.v7873), Y_DEFI(F.v7877), Y_DEFI(F.v7879));
if ((Y_DEFP(F.v7875) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_name), y_str(": no definition takes actuals of these types", 44));
}
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v7875))))).f_mval) == INT64_C(0)))) {
yr3259_Directive(yr2458_Real(Y_DEFP(F.v7875)), F.p3297, Y_DEFI(F.v7877), Y_DEFI(F.v7879), &F.p3300, &F.p3301);
(*F.p3300_o) = F.p3300;
(*F.p3301_o) = F.p3301;
y_use = F.yu; return;
}
yr3252_NoteCall(Y_DEFP(F.v7875), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line));
F.p3300 = yr3226_CallCode(Y_DEFP(F.v7875), Y_DEFI(F.v7877), Y_DEFI(F.v7879), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line));
F.p3301 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7875)))).f_ret);
if ((F.p3299 && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3301)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_name), y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3299) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3301)))).f_kind) == v852)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_name), y_str(" returns no value", 17));
}
(*F.p3300_o) = F.p3300;
(*F.p3301_o) = F.p3301;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3306_Denote(void * a_p3307, void * a_p3308, rt_int * a_p3309, void * * a_p3310) {
struct yf3311 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3307 = a_p3307;
F.p3308 = a_p3308;
F.p3309_o = a_p3309;
F.p3310_o = a_p3310;
F.v7892 = Y_UNDEF_P;
F.v7892 = Y_DEFP(((*(yR105 *)y_deref(F.p3308))).f_a);
F.v7894 = Y_UNDEF_P;
F.v7896 = Y_UNDEF_I;
F.v7898 = Y_UNDEF_I;
F.v7900 = Y_UNDEF_I;
F.v7902 = Y_UNDEF_P;
F.v7904 = Y_UNDEF_I;
F.v7906 = Y_UNDEF_I;
F.v7908 = Y_UNDEF_I;
F.v7910 = Y_UNDEF_I;
F.v7912 = Y_UNDEF_I;
F.v7912 = INT64_C(0);
F.v7915 = Y_UNDEF_I;
F.v7917 = Y_UNDEF_P;
F.v7919 = Y_UNDEF_I;
F.v7919 = 1;
F.p3310 = F.p3307;
if (Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_abstract)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3308))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_tname), y_str(" has no representation to denote a value of", 43));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_kind) == v825)) {
if (Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3308))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_tname), y_str(" is opaque here (X.B.3)", 23));
}
yr1026_SB();
yr1037_SA(y_str("((", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_cname));
yr1037_SA(y_str("){ ", 3));
F.v7898 = yr1056_SE();
F.v7894 = Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_fields);
while ((!(Y_DEFP(F.v7894) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_variant) == Y_DEFI(F.v7912))))) {
if ((Y_DEFP(F.v7892) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3308))).f_line), y_str("too few components in this record value", 39));
}
yr3043_Expr(Y_DEFP(F.v7892), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_rep), &F.v7896, &F.v7902);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_line), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_rep), Y_DEFP(F.v7902));
if ((Y_DEFP(F.v7894) == Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_selector))) {
yr2895_Manifest(Y_DEFP(F.v7892), &F.v7910, &F.v7915);
if ((!Y_DEFI(F.v7910))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_line), y_str("the case-selection value is a manifest constant", 47));
}
F.v7912 = yr3315_VariantOf(F.p3307, Y_DEFI(F.v7915), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_line));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7898));
if ((!Y_DEFI(F.v7919))) {
yr1037_SA(y_str(", ", 2));
}
F.v7919 = 0;
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2976_Convert(Y_DEFI(F.v7896), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_rep), Y_DEFP(F.v7902)));
F.v7898 = yr1056_SE();
F.v7892 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_next);
}
F.v7894 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7894)))).f_next);
}
if ((!(Y_DEFP(F.v7892) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3308))).f_line), y_str("too many components in this record value", 40));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str(" })", 3));
F.p3309 = yr1056_SE();
(*F.p3309_o) = F.p3309;
(*F.p3310_o) = F.p3310;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_kind) == v822)) {
F.v7904 = yr2019_Count(Y_DEFP(F.v7892));
F.v7898 = yr1200_Fresh(y_str("da", 2));
if ((Y_DEFI(F.v7904) == INT64_C(1))) {
yr3043_Expr(Y_DEFP(F.v7892), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), &F.v7896, &F.v7902);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), Y_DEFP(F.v7902));
F.v7900 = yr1200_Fresh(y_str("dv", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7900));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2976_Convert(Y_DEFI(F.v7896), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), Y_DEFP(F.v7902)));
yr1037_SA(y_str("; y_fill(", 9));
yr1044_ST(yr2532_DescOf(F.p3307));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7900));
yr1037_SA(y_str("); })", 5));
F.p3309 = yr1056_SE();
(*F.p3309_o) = F.p3309;
(*F.p3310_o) = F.p3310;
y_use = F.yu; return;
}
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str("; y_init(", 9));
yr1044_ST(yr2532_DescOf(F.p3307));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1050_SI(Y_DEFI(F.v7904));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("wrong number of components", 26));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
F.p3309 = yr1056_SE();
F.v7908 = INT64_C(0);
while ((!(Y_DEFP(F.v7892) == ((void *)0)))) {
Y_TICK();
yr3043_Expr(Y_DEFP(F.v7892), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), &F.v7896, &F.v7902);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), Y_DEFP(F.v7902));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3309));
if (yr2501_Deep(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem))) {
yr1037_SA(y_str(" { ", 3));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(" dv = ", 6));
yr1044_ST(Y_DEFI(F.v7896));
yr1037_SA(y_str("; y_copy(", 9));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(", &((", 5));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v7908));
yr1037_SA(y_str("], &dv); }", 10));
} else {
yr1037_SA(y_str(" ((", 3));
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v7908));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2976_Convert(Y_DEFI(F.v7896), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), Y_DEFP(F.v7902)));
yr1037_SA(y_str(";", 1));
}
F.p3309 = yr1056_SE();
F.v7908 = y_range(y_add(Y_DEFI(F.v7908), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7892 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3309));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7898));
yr1037_SA(y_str("; })", 4));
F.p3309 = yr1056_SE();
(*F.p3309_o) = F.p3309;
(*F.p3310_o) = F.p3310;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_kind) == v834)) {
yr1026_SB();
yr1037_SA(y_str("y_set_new(", 10));
yr1044_ST(yr2607_LoText(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2613_HiText(Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem)));
yr1037_SA(y_str(")", 1));
F.p3309 = yr1056_SE();
while ((!(Y_DEFP(F.v7892) == ((void *)0)))) {
Y_TICK();
yr3043_Expr(Y_DEFP(F.v7892), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), &F.v7896, &F.v7902);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3307))).f_elem), Y_DEFP(F.v7902));
F.p3309 = yr3132_Call2(y_str("y_set_add", 9), Y_DEFI(F.p3309), Y_DEFI(F.v7896));
F.v7892 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7892)))).f_next);
}
(*F.p3309_o) = F.p3309;
(*F.p3310_o) = F.p3310;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3308))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3307))).f_tname), y_str(" has no denotations of values", 29));
(*F.p3309_o) = F.p3309;
(*F.p3310_o) = F.p3310;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3315_VariantOf(void * a_p3316, rt_int a_p3317, rt_int a_p3318) {
struct yf3319 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3316 = a_p3316;
F.p3317 = a_p3317;
F.p3318 = a_p3318;
F.v7981 = Y_UNDEF_P;
F.v7981 = Y_DEFP(((*(yR110 *)y_deref(F.p3316))).f_fields);
F.v7983 = Y_UNDEF_P;
F.v7985 = Y_UNDEF_I;
F.v7987 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7981) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7981)))).f_variant) == INT64_C(0)))) {
F.v7983 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7981)))).f_labels);
while ((!(Y_DEFP(F.v7983) == ((void *)0)))) {
Y_TICK();
yr2895_Manifest(Y_DEFP(F.v7983), &F.v7985, &F.v7987);
if ((Y_DEFI(F.v7985) && ((Y_DEFI(F.v7987) == F.p3317)))) {
{ rt_int rv7989 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7981)))).f_variant);
y_use = F.yu; return rv7989; }
}
F.v7983 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7983)))).f_next);
}
}
F.v7981 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7981)))).f_next);
}
{ rt_int rv7991 = INT64_C(-1);
y_use = F.yu; return rv7991; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3323_Emit2(yarr a_p3325, rt_int a_p3326) {
struct yf3327 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3325 = a_p3325;
F.p3326 = a_p3326;
F.v7996 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3325);
yr1044_ST(F.p3326);
F.v7996 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v7996));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3331_Emit3(yarr a_p3333, rt_int a_p3334, yarr a_p3336) {
struct yf3337 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3333 = a_p3333;
F.p3334 = a_p3334;
F.p3336 = a_p3336;
F.v8002 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3333);
yr1044_ST(F.p3334);
yr1037_SA(F.p3336);
F.v8002 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8002));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3341_PopTo(rt_int a_p3342) {
struct yf3343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3342 = a_p3342;
if ((Y_DEFI(v1576) > F.p3342)) {
yr3331_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1563).p)[y_ix1(v1563, y_add(F.p3342, INT64_C(1)))]), y_str(".prev;", 6));
}
F.lo8012 = y_add(F.p3342, INT64_C(1));
F.hi8013 = Y_DEFI(v1576);
{ rt_int hi8017 = F.hi8013;
for (rt_int i8016 = F.lo8012; i8016 <= hi8017; i8016++) { F.c_8015 = i8016; Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1574).p)[y_ix1(v1574, F.c_8015)]) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(((rt_int *)(v1574).p)[y_ix1(v1574, F.c_8015)]));
}
if (i8016 == hi8017) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3347_LeaveBlock(void) {
struct yf3348 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFI(v1604) > INT64_C(0))) {
if ((!(Y_DEFI(((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))]) == INT64_C(0)))) {
yr3331_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))]), y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3352_RaiseCode(rt_int a_p3353) {
struct yf3354 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3353 = a_p3353;
yr1026_SB();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
yr1031_SC(34);
yr1044_ST(F.p3353);
yr1031_SC(34);
yr1037_SA(y_str("));", 3));
{ rt_int rv8030 = yr1056_SE();
y_use = F.yu; return rv8030; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3358_BlockStatements(void * a_p3359) {
struct yf3360 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3359 = a_p3359;
F.v8034 = Y_UNDEF_I;
F.v8034 = Y_DEFI(v1686);
yr3364_BlockStatements1(F.p3359);
v1686 = Y_DEFI(F.v8034);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3364_BlockStatements1(void * a_p3365) {
struct yf3366 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3365 = a_p3365;
F.v8038 = Y_UNDEF_I;
F.v8040 = Y_UNDEF_I;
F.v8042 = Y_UNDEF_I;
F.v8044 = Y_UNDEF_P;
F.v8046 = Y_UNDEF_P;
F.v8048 = Y_UNDEF_I;
F.v8050 = Y_UNDEF_P;
F.v8050 = Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_a);
F.v8052 = Y_UNDEF_I;
F.v8052 = INT64_C(0);
while ((!(Y_DEFP(F.v8050) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8050)))).f_kind) == v645)) && ((Y_DEFI(F.v8052) == INT64_C(0))))) {
F.v8052 = yr1200_Fresh(y_str("xs", 2));
yr3331_Emit3(y_str("rt_frame *", 10), Y_DEFI(F.v8052), y_str(" = rt_xtop;", 11));
}
F.v8050 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8050)))).f_next);
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_b) == ((void *)0))) {
v1604 = y_range(y_add(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))] = INT64_C(0);
((rt_int *)(v1602).p)[y_ix1(v1602, Y_DEFI(v1604))] = Y_DEFI(F.v8052);
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_c));
v1604 = y_range(y_sub(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3485_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_a));
y_use = F.yu; return;
}
v1680 = 1;
F.v8038 = yr1200_Fresh(y_str("xf", 2));
yr3331_Emit3(y_str("{ rt_frame ", 11), Y_DEFI(F.v8038), y_str(";", 1));
yr3331_Emit3(y_str("if (RT_TRY(", 11), Y_DEFI(F.v8038), y_str(")) {", 4));
v1576 = y_range(y_add(Y_DEFI(v1576), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1563).p)[y_ix1(v1563, Y_DEFI(v1576))] = Y_DEFI(F.v8038);
((rt_int *)(v1574).p)[y_ix1(v1574, Y_DEFI(v1576))] = INT64_C(0);
v1604 = y_range(y_add(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))] = Y_DEFI(F.v8038);
((rt_int *)(v1602).p)[y_ix1(v1602, Y_DEFI(v1604))] = Y_DEFI(F.v8052);
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_c));
v1604 = y_range(y_sub(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1576 = y_range(y_sub(Y_DEFI(v1576), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3485_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_a));
yr3331_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8038), y_str(");", 2));
yr1138_EmitS(y_str("} else {", 8));
yr3331_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8038), y_str(");", 2));
if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
}
F.v8040 = yr1200_Fresh(y_str("xc", 2));
yr3331_Emit3(y_str("int ", 4), Y_DEFI(F.v8040), y_str(" = rt_xcur;", 11));
v1604 = y_range(y_add(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))] = INT64_C(0);
((rt_int *)(v1602).p)[y_ix1(v1602, Y_DEFI(v1604))] = INT64_C(0);
v1618 = y_range(y_add(Y_DEFI(v1618), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1616).p)[y_ix1(v1616, Y_DEFI(v1618))] = Y_DEFI(F.v8040);
F.v8048 = 1;
F.v8044 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8044) == ((void *)0)))) {
Y_TICK();
yr1026_SB();
if (Y_DEFI(F.v8048)) {
yr1037_SA(y_str("if (", 4));
} else {
yr1037_SA(y_str("} else if (", 11));
}
F.v8048 = 0;
F.v8046 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8044)))).f_a);
while ((!(Y_DEFP(F.v8046) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(F.v8040));
yr1037_SA(y_str(" == rt_exc(", 11));
yr1031_SC(34);
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_name));
yr1031_SC(34);
yr1037_SA(y_str(")", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_next) == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
}
F.v8046 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_next);
}
yr1037_SA(y_str(") {", 3));
F.v8042 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8042));
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8044)))).f_b));
F.v8044 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8044)))).f_next);
}
if ((!Y_DEFI(F.v8048))) {
yr1138_EmitS(y_str("} else {", 8));
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_b)))).f_flag) == INT64_C(1))) {
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_b)))).f_b));
} else {
yr3331_Emit3(y_str("rt_raise(", 9), Y_DEFI(F.v8040), y_str(");", 2));
}
if ((!Y_DEFI(F.v8048))) {
yr1138_EmitS(y_str("}", 1));
}
v1618 = y_range(y_sub(Y_DEFI(v1618), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1604 = y_range(y_sub(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3370_SameDesig(void * a_p3371, void * a_p3372) {
struct yf3373 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3371 = a_p3371;
F.p3372 = a_p3372;
F.v8119 = Y_UNDEF_P;
F.v8121 = Y_UNDEF_P;
F.v8123 = Y_UNDEF_I;
F.v8125 = Y_UNDEF_I;
F.v8127 = Y_UNDEF_I;
F.v8129 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_kind) == v801)) {
{ rt_int rv8130 = yr3370_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3371))).f_a), F.p3372);
y_use = F.yu; return rv8130; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3372))).f_kind) == v801)) {
{ rt_int rv8131 = yr3370_SameDesig(F.p3371, Y_DEFP(((*(yR105 *)y_deref(F.p3372))).f_a));
y_use = F.yu; return rv8131; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(F.p3372))).f_kind)))) {
{ rt_int rv8133 = 0;
y_use = F.yu; return rv8133; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_kind) == v777)) {
{ rt_int rv8134 = ((((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3372))).f_name))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3371))).f_d) == ((void *)0)))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3372))).f_d) == ((void *)0))));
y_use = F.yu; return rv8134; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_kind) == v783)) {
{ rt_int rv8135 = (((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3372))).f_name))) && yr3370_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3371))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3372))).f_a)));
y_use = F.yu; return rv8135; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_kind) == v789)) {
{ rt_int rv8136 = yr3370_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3371))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3372))).f_a));
y_use = F.yu; return rv8136; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3371))).f_kind) == v786)) {
if ((!yr3370_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3371))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3372))).f_a)))) {
{ rt_int rv8138 = 0;
y_use = F.yu; return rv8138; }
}
F.v8119 = Y_DEFP(((*(yR105 *)y_deref(F.p3371))).f_b);
F.v8121 = Y_DEFP(((*(yR105 *)y_deref(F.p3372))).f_b);
while ((((!(Y_DEFP(F.v8119) == ((void *)0)))) && ((!(Y_DEFP(F.v8121) == ((void *)0)))))) {
Y_TICK();
yr2895_Manifest(Y_DEFP(F.v8119), &F.v8123, &F.v8127);
yr2895_Manifest(Y_DEFP(F.v8121), &F.v8125, &F.v8129);
if ((Y_DEFI(F.v8123) && Y_DEFI(F.v8125))) {
if ((!(Y_DEFI(F.v8127) == Y_DEFI(F.v8129)))) {
{ rt_int rv8140 = 0;
y_use = F.yu; return rv8140; }
}
} else if ((!yr3370_SameDesig(Y_DEFP(F.v8119), Y_DEFP(F.v8121)))) {
{ rt_int rv8142 = 0;
y_use = F.yu; return rv8142; }
}
F.v8119 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8119)))).f_next);
F.v8121 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8121)))).f_next);
}
{ rt_int rv8143 = (((Y_DEFP(F.v8119) == ((void *)0))) && ((Y_DEFP(F.v8121) == ((void *)0))));
y_use = F.yu; return rv8143; }
}
{ rt_int rv8145 = 0;
y_use = F.yu; return rv8145; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3377_CheckVariantSelected(void * a_p3378, void * a_p3379, void * a_p3380) {
struct yf3381 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3378 = a_p3378;
F.p3379 = a_p3379;
F.p3380 = a_p3380;
F.v8151 = Y_UNDEF_I;
F.v8151 = Y_DEFI(v1666);
F.v8153 = Y_UNDEF_P;
F.v8155 = Y_UNDEF_P;
F.v8157 = Y_UNDEF_P;
F.v8159 = Y_UNDEF_I;
F.v8161 = Y_UNDEF_I;
F.v8163 = Y_UNDEF_I;
F.v8165 = Y_UNDEF_I;
while ((Y_DEFI(F.v8151) > INT64_C(0))) {
Y_TICK();
F.v8153 = Y_DEFP(((void * *)(v1662).p)[y_ix1(v1662, Y_DEFI(F.v8151))]);
while ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8153)))).f_kind) == v801)) {
Y_TICK();
F.v8153 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8153)))).f_a);
}
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8153)))).f_kind) == v783)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8153)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3379))).f_selector)))).f_name)))) && yr3370_SameDesig(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8153)))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3378))).f_a)))) {
F.v8155 = Y_DEFP(((void * *)(v1664).p)[y_ix1(v1664, Y_DEFI(F.v8151))]);
if ((Y_DEFP(F.v8155) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3378))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3378))).f_name), y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(Y_DEFP(F.v8155) == ((void *)0)))) {
Y_TICK();
F.v8159 = yr3429_Label(Y_DEFP(F.v8155), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3379))).f_selector)))).f_rep));
F.v8165 = 0;
F.v8157 = Y_DEFP(((*(yR115 *)y_deref(F.p3380))).f_labels);
while ((!(Y_DEFP(F.v8157) == ((void *)0)))) {
Y_TICK();
yr2895_Manifest(Y_DEFP(F.v8157), &F.v8163, &F.v8161);
if ((Y_DEFI(F.v8163) && ((Y_DEFI(F.v8161) == Y_DEFI(F.v8159))))) {
F.v8165 = 1;
}
F.v8157 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8157)))).f_next);
}
if ((!Y_DEFI(F.v8165))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3378))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3378))).f_name), y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v8155 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8155)))).f_next);
}
y_use = F.yu; return;
}
F.v8151 = y_range(y_sub(Y_DEFI(F.v8151), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3378))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3378))).f_name), y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3385_CheckCaseLabels(void * a_p3386, void * a_p3387) {
struct yf3388 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3386 = a_p3386;
F.p3387 = a_p3387;
F.v8178 = Y_UNDEF_P;
F.v8178 = Y_DEFP(((*(yR105 *)y_deref(F.p3386))).f_b);
F.v8180 = Y_UNDEF_P;
F.v8180 = Y_DEFP(((*(yR105 *)y_deref(F.p3386))).f_b);
F.v8182 = Y_UNDEF_I;
F.v8182 = INT64_C(0);
F.v8185 = Y_UNDEF_I;
F.v8185 = INT64_C(0);
while ((!(Y_DEFP(F.v8178) == ((void *)0)))) {
Y_TICK();
F.v8180 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8178)))).f_a);
while ((!(Y_DEFP(F.v8180) == ((void *)0)))) {
Y_TICK();
F.v8185 = yr3429_Label(Y_DEFP(F.v8180), F.p3387);
F.lo8190 = INT64_C(1);
F.hi8191 = Y_DEFI(F.v8182);
{ rt_int hi8195 = F.hi8191;
for (rt_int i8194 = F.lo8190; i8194 <= hi8195; i8194++) { F.c_8193 = i8194; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1678).p)[y_ix1(v1678, F.c_8193)]) == Y_DEFI(F.v8185))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8180)))).f_line), y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i8194 == hi8195) break;
}}
if ((Y_DEFI(F.v8182) < INT64_C(4096))) {
F.v8182 = y_range(y_add(Y_DEFI(F.v8182), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1678).p)[y_ix1(v1678, Y_DEFI(F.v8182))] = Y_DEFI(F.v8185);
}
F.v8180 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8180)))).f_next);
}
F.v8178 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8178)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3392_Falls(void * a_p3393) {
struct yf3394 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3393 = a_p3393;
F.v8203 = Y_UNDEF_P;
F.v8203 = F.p3393;
F.v8205 = Y_UNDEF_I;
F.v8205 = 1;
while ((!(Y_DEFP(F.v8203) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8203)))).f_text) == INT64_C(0)))) {
F.v8205 = 1;
}
if (Y_DEFI(F.v8205)) {
F.v8205 = yr3404_Completes(Y_DEFP(F.v8203));
}
F.v8203 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8203)))).f_next);
}
{ rt_int rv8209 = Y_DEFI(F.v8205);
y_use = F.yu; return rv8209; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3398_BlockFalls(void * a_p3399) {
struct yf3400 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3399 = a_p3399;
F.v8213 = Y_UNDEF_P;
if (yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3399))).f_c))) {
{ rt_int rv8215 = 1;
y_use = F.yu; return rv8215; }
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3399))).f_b) == ((void *)0))) {
{ rt_int rv8217 = 0;
y_use = F.yu; return rv8217; }
}
F.v8213 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3399))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8213) == ((void *)0)))) {
Y_TICK();
if (yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8213)))).f_b))) {
{ rt_int rv8219 = 1;
y_use = F.yu; return rv8219; }
}
F.v8213 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8213)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3399))).f_b)))).f_flag) == INT64_C(1))) {
{ rt_int rv8221 = yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3399))).f_b)))).f_b));
y_use = F.yu; return rv8221; }
}
{ rt_int rv8223 = 0;
y_use = F.yu; return rv8223; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3404_Completes(void * a_p3405) {
struct yf3406 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3405 = a_p3405;
F.v8227 = Y_UNDEF_I;
F.v8227 = Y_DEFI(((*(yR105 *)y_deref(F.p3405))).f_kind);
F.v8229 = Y_UNDEF_P;
F.v8231 = Y_UNDEF_I;
F.v8233 = Y_UNDEF_I;
if (((((((Y_DEFI(F.v8227) == v729)) || ((Y_DEFI(F.v8227) == v732))) || ((Y_DEFI(F.v8227) == v735))) || ((Y_DEFI(F.v8227) == v723))) || ((Y_DEFI(F.v8227) == v726)))) {
{ rt_int rv8235 = 0;
y_use = F.yu; return rv8235; }
}
if ((Y_DEFI(F.v8227) == v738)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3405))).f_flag) == INT64_C(1)))) {
{ rt_int rv8238 = 1;
y_use = F.yu; return rv8238; }
}
F.v8229 = Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_a);
while ((!(Y_DEFP(F.v8229) == ((void *)0)))) {
Y_TICK();
if (yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8229)))).f_b))) {
{ rt_int rv8240 = 1;
y_use = F.yu; return rv8240; }
}
F.v8229 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8229)))).f_next);
}
{ rt_int rv8241 = yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_b));
y_use = F.yu; return rv8241; }
}
if ((Y_DEFI(F.v8227) == v741)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3405))).f_flag) == INT64_C(1)))) {
{ rt_int rv8244 = 1;
y_use = F.yu; return rv8244; }
}
F.v8229 = Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_b);
while ((!(Y_DEFP(F.v8229) == ((void *)0)))) {
Y_TICK();
if (yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8229)))).f_b))) {
{ rt_int rv8246 = 1;
y_use = F.yu; return rv8246; }
}
F.v8229 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8229)))).f_next);
}
{ rt_int rv8247 = yr3392_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_c));
y_use = F.yu; return rv8247; }
}
if ((Y_DEFI(F.v8227) == v744)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_a), &F.v8231, &F.v8233);
{ rt_int rv8249 = (!((Y_DEFI(F.v8231) && ((Y_DEFI(F.v8233) == INT64_C(1))))));
y_use = F.yu; return rv8249; }
}
if ((Y_DEFI(F.v8227) == v750)) {
{ rt_int rv8250 = yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3405))).f_name));
y_use = F.yu; return rv8250; }
}
if ((Y_DEFI(F.v8227) == v753)) {
{ rt_int rv8251 = yr3398_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3405))).f_a));
y_use = F.yu; return rv8251; }
}
{ rt_int rv8253 = 1;
y_use = F.yu; return rv8253; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3410_Exits(void * a_p3411, rt_int a_p3412) {
struct yf3413 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3411 = a_p3411;
F.p3412 = a_p3412;
F.v8258 = Y_UNDEF_P;
F.v8258 = F.p3411;
F.v8260 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8258) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v726)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_name) == F.p3412)))) {
{ rt_int rv8262 = 1;
y_use = F.yu; return rv8262; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v738)) {
F.v8260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_a);
while ((!(Y_DEFP(F.v8260) == ((void *)0)))) {
Y_TICK();
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8260)))).f_b), F.p3412)) {
{ rt_int rv8264 = 1;
y_use = F.yu; return rv8264; }
}
F.v8260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8260)))).f_next);
}
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_b), F.p3412)) {
{ rt_int rv8266 = 1;
y_use = F.yu; return rv8266; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v741)) {
F.v8260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_b);
while ((!(Y_DEFP(F.v8260) == ((void *)0)))) {
Y_TICK();
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8260)))).f_b), F.p3412)) {
{ rt_int rv8268 = 1;
y_use = F.yu; return rv8268; }
}
F.v8260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8260)))).f_next);
}
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_c), F.p3412)) {
{ rt_int rv8270 = 1;
y_use = F.yu; return rv8270; }
}
} else if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v744)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v747))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v750)))) {
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_b), F.p3412)) {
{ rt_int rv8272 = 1;
y_use = F.yu; return rv8272; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_kind) == v753)) {
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_a)))).f_c), F.p3412)) {
{ rt_int rv8274 = 1;
y_use = F.yu; return rv8274; }
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_a)))).f_b) == ((void *)0)))) {
F.v8260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_a)))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8260) == ((void *)0)))) {
Y_TICK();
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8260)))).f_b), F.p3412)) {
{ rt_int rv8276 = 1;
y_use = F.yu; return rv8276; }
}
F.v8260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8260)))).f_next);
}
if (yr3410_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_a)))).f_b)))).f_b), F.p3412)) {
{ rt_int rv8278 = 1;
y_use = F.yu; return rv8278; }
}
}
}
F.v8258 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8258)))).f_next);
}
{ rt_int rv8280 = 0;
y_use = F.yu; return rv8280; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3417_Statements(void * a_p3418) {
struct yf3419 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3418 = a_p3418;
F.v8284 = Y_UNDEF_P;
F.v8284 = F.p3418;
while ((!(Y_DEFP(F.v8284) == ((void *)0)))) {
Y_TICK();
yr3441_Statement(Y_DEFP(F.v8284));
F.v8284 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8284)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3423_Cond(void * a_p3424) {
struct yf3425 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3424 = a_p3424;
F.v8288 = Y_UNDEF_I;
F.v8290 = Y_UNDEF_P;
yr3043_Expr(F.p3424, Y_DEFP(v1344), &F.v8288, &F.v8290);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3424))).f_line), Y_DEFP(v1344), Y_DEFP(F.v8290));
{ rt_int rv8291 = Y_DEFI(F.v8288);
y_use = F.yu; return rv8291; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3429_Label(void * a_p3430, void * a_p3431) {
struct yf3432 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3430 = a_p3430;
F.p3431 = a_p3431;
F.v8296 = Y_UNDEF_I;
F.v8298 = Y_UNDEF_I;
F.v8300 = Y_UNDEF_P;
F.v8302 = Y_UNDEF_P;
F.v8304 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR105 *)y_deref(F.p3430))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3430))).f_d) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3431))).f_kind) == v816)))) {
F.v8300 = yr2418_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3430))).f_name), F.p3431);
if ((!(Y_DEFP(F.v8300) == ((void *)0)))) {
{ rt_int rv8305 = Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v8300))))).f_mval);
y_use = F.yu; return rv8305; }
}
}
yr3043_Expr(F.p3430, F.p3431, &F.v8304, &F.v8302);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3430))).f_line), F.p3431, Y_DEFP(F.v8302));
yr2895_Manifest(F.p3430, &F.v8296, &F.v8298);
if ((!Y_DEFI(F.v8296))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3430))).f_line), y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv8307 = Y_DEFI(F.v8298);
y_use = F.yu; return rv8307; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3436_CopyOut(void) {
struct yf3437 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8310 = Y_UNDEF_P;
F.v8312 = Y_UNDEF_I;
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
F.v8310 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_params);
while ((!(Y_DEFP(F.v8310) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_cls) == v900)) {
yr1026_SB();
yr1037_SA(y_str("(*F.", 4));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_cname));
yr1037_SA(y_str("_o)", 3));
F.v8312 = yr1056_SE();
if ((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_path) == INT64_C(0)))) {
yr3286_Assign(Y_DEFI(F.v8312), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_rep), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_path), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_rep), INT64_C(0));
} else {
yr3286_Assign(Y_DEFI(F.v8312), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_rep), yr2432_Path(Y_DEFI(v1279), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_cname)), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_rep), INT64_C(0));
}
}
F.v8310 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8310)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3441_Statement(void * a_p3442) {
struct yf3443 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3442 = a_p3442;
F.v8321 = Y_UNDEF_I;
F.v8321 = Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_kind);
F.v8323 = Y_UNDEF_I;
F.v8325 = Y_UNDEF_I;
F.v8327 = Y_UNDEF_I;
F.v8329 = Y_UNDEF_I;
F.v8331 = Y_UNDEF_I;
F.v8333 = Y_UNDEF_I;
F.v8335 = Y_UNDEF_P;
F.v8337 = Y_UNDEF_P;
F.v8339 = Y_UNDEF_P;
F.v8341 = Y_UNDEF_P;
F.v8343 = Y_UNDEF_I;
F.v8345 = Y_UNDEF_I;
F.v8347 = Y_UNDEF_I;
F.v8349 = Y_UNDEF_I;
F.v8351 = Y_UNDEF_P;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_text) == INT64_C(0)))) {
yr3473_PlaceLabel(F.p3442);
}
if ((Y_DEFI(F.v8321) == v714)) {
yr3016_LValue(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a), &F.v8323, &F.v8335);
yr3010_CheckPure(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a));
yr3508_NoteWrite(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8335)))).f_kind) == v837)) || yr2514_HoldsSignal(Y_DEFP(F.v8335)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2520_NonAssignable(Y_DEFP(F.v8335))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b), Y_DEFP(F.v8335), &F.v8325, &F.v8337);
F.v8327 = yr3276_UserAssign(Y_DEFI(F.v8323), Y_DEFP(F.v8335), Y_DEFI(F.v8325), Y_DEFP(F.v8337), Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line));
if ((!(Y_DEFI(F.v8327) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v8327));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8335)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8335)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8335)))).f_tname), y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2994_Store(Y_DEFI(F.v8323), Y_DEFP(F.v8335), Y_DEFI(F.v8325), Y_DEFP(F.v8337), Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line));
}
} else if ((Y_DEFI(F.v8321) == v717)) {
F.v8351 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a)))).f_name));
if ((!(Y_DEFP(F.v8351) == ((void *)0)))) {
F.v8351 = yr2458_Real(Y_DEFP(F.v8351));
}
if (((((!(Y_DEFP(F.v8351) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8351)))).f_kind) == v885))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8351)))).f_hasmv))) {
yr3202_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a)))).f_a), Y_DEFP(F.v8351), &F.v8347, &F.v8349);
yr1132_Emit(yr3453_Join(yr3226_CallCode(Y_DEFP(F.v8351), Y_DEFI(F.v8347), Y_DEFI(F.v8349), Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line)), yr1061_T(y_str(";", 1)), INT64_C(0)));
} else if ((((!(Y_DEFP(F.v8351) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8351)))).f_kind) == v885)))) {
yr3817_Activate(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a), Y_DEFP(F.v8351));
} else {
yr3296_CallExpr(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a), ((void *)0), 1, &F.v8323, &F.v8335);
yr3323_Emit2(y_str("", 0), Y_DEFI(F.v8323));
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8323));
yr1037_SA(y_str(";", 1));
F.v8327 = yr1056_SE();
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = Y_DEFI(F.v8327);
}
} else if ((Y_DEFI(F.v8321) == v738)) {
F.v8343 = 1;
F.v8339 = Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a);
while ((!(Y_DEFP(F.v8339) == ((void *)0)))) {
Y_TICK();
F.v8323 = yr3423_Cond(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_a));
if (Y_DEFI(F.v8343)) {
yr3331_Emit3(y_str("if (", 4), Y_DEFI(F.v8323), y_str(") {", 3));
} else {
yr3331_Emit3(y_str("} else if (", 11), Y_DEFI(F.v8323), y_str(") {", 3));
}
F.v8343 = 0;
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_b));
F.v8339 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_flag) == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b));
}
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8321) == v744)) {
F.v8323 = yr3423_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a));
yr3331_Emit3(y_str("while (", 7), Y_DEFI(F.v8323), y_str(") {", 3));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8321) == v750)) {
F.v8329 = yr1200_Fresh(y_str("yl_", 3));
v1645 = y_range(y_add(Y_DEFI(v1645), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1630).p)[y_ix1(v1630, Y_DEFI(v1645))] = Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_name);
((rt_int *)(v1632).p)[y_ix1(v1632, Y_DEFI(v1645))] = Y_DEFI(F.v8329);
((rt_int *)(v1643).p)[y_ix1(v1643, Y_DEFI(v1645))] = Y_DEFI(v1576);
yr1138_EmitS(y_str("for (;;) {", 10));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b));
yr1138_EmitS(y_str("}", 1));
yr3331_Emit3(y_str("", 0), Y_DEFI(F.v8329), y_str(": ;", 3));
v1645 = y_range(y_sub(Y_DEFI(v1645), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v8321) == v726)) {
F.v8345 = 0;
F.v8347 = Y_DEFI(v1645);
while ((((Y_DEFI(F.v8347) > Y_DEFI(v1648))) && (!Y_DEFI(F.v8345)))) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v1630).p)[y_ix1(v1630, Y_DEFI(F.v8347))]) == Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_name))) {
F.v8345 = 1;
yr3341_PopTo(Y_DEFI(((rt_int *)(v1643).p)[y_ix1(v1643, Y_DEFI(F.v8347))]));
yr3331_Emit3(y_str("goto ", 5), Y_DEFI(((rt_int *)(v1632).p)[y_ix1(v1632, Y_DEFI(F.v8347))]), y_str(";", 1));
}
F.v8347 = y_range(y_sub(Y_DEFI(F.v8347), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!Y_DEFI(F.v8345))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_name), y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((Y_DEFI(F.v8321) == v747)) {
yr3447_ForStatement(F.p3442);
} else if ((Y_DEFI(F.v8321) == v741)) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a), ((void *)0), &F.v8323, &F.v8335);
if ((!yr2477_IsDiscrete(Y_DEFP(F.v8335)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3385_CheckCaseLabels(F.p3442, Y_DEFP(F.v8335));
yr3331_Emit3(y_str("switch (", 8), Y_DEFI(F.v8323), y_str(") {", 3));
F.v8339 = Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b);
while ((!(Y_DEFP(F.v8339) == ((void *)0)))) {
Y_TICK();
F.v8341 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_a);
while ((!(Y_DEFP(F.v8341) == ((void *)0)))) {
Y_TICK();
F.v8349 = yr3429_Label(Y_DEFP(F.v8341), Y_DEFP(F.v8335));
yr1026_SB();
yr1037_SA(y_str("case ", 5));
yr1050_SI(Y_DEFI(F.v8349));
yr1037_SA(y_str(":", 1));
F.v8327 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8327));
F.v8341 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8341)))).f_next);
}
yr1138_EmitS(y_str("{", 1));
v1666 = y_range(y_add(Y_DEFI(v1666), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1662).p)[y_ix1(v1662, Y_DEFI(v1666))] = Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a);
((void * *)(v1664).p)[y_ix1(v1664, Y_DEFI(v1666))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_a);
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_b));
v1666 = y_range(y_sub(Y_DEFI(v1666), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
F.v8339 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8339)))).f_next);
}
yr1138_EmitS(y_str("default: {", 10));
v1666 = y_range(y_add(Y_DEFI(v1666), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1662).p)[y_ix1(v1662, Y_DEFI(v1666))] = Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a);
((void * *)(v1664).p)[y_ix1(v1664, Y_DEFI(v1666))] = ((void *)0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_flag) == INT64_C(1))) {
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_c));
}
v1666 = y_range(y_sub(Y_DEFI(v1666), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8321) == v729)) {
yr3461_ReturnStatement(F.p3442);
} else if ((Y_DEFI(F.v8321) == v735)) {
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_name) == INT64_C(0))) {
if ((Y_DEFI(v1618) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3331_Emit3(y_str("rt_raise(", 9), Y_DEFI(((rt_int *)(v1616).p)[y_ix1(v1616, Y_DEFI(v1618))]), y_str(");", 2));
} else {
yr3347_LeaveBlock();
yr1132_Emit(yr3352_RaiseCode(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_name)));
}
} else if ((((Y_DEFI(F.v8321) == v720)) && yr3270_Suppressed(v1486))) {
F.v8347 = INT64_C(0);
} else if ((Y_DEFI(F.v8321) == v720)) {
F.v8347 = Y_DEFI(v1683);
F.v8323 = yr3423_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a));
if ((!(Y_DEFI(v1683) == Y_DEFI(F.v8347)))) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3331_Emit3(y_str("if (!(", 6), Y_DEFI(F.v8323), y_str(")) {", 4));
yr3347_LeaveBlock();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((Y_DEFI(F.v8321) == v753)) {
yr3467_BeginStatement(F.p3442);
} else if ((Y_DEFI(F.v8321) == v732)) {
yr3847_TerminateStatement(F.p3442);
} else if ((Y_DEFI(F.v8321) == v723)) {
yr3479_GotoStatement(F.p3442);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3442))).f_line), y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3447_ForStatement(void * a_p3448) {
struct yf3449 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3448 = a_p3448;
F.v8428 = Y_UNDEF_P;
F.v8430 = Y_UNDEF_I;
F.v8432 = Y_UNDEF_I;
F.v8434 = Y_UNDEF_I;
F.v8436 = Y_UNDEF_P;
F.v8428 = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_a), INT64_C(0), 0);
if ((((!yr2477_IsDiscrete(Y_DEFP(F.v8428))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8428)))).f_kind) == v813))) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8428)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8428)))).f_ordered)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_line), y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2567_CheckRepresented(Y_DEFP(F.v8428), Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_line));
yr2330_OpenScope(0);
F.v8436 = yr2323_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v8436)))).f_rep = Y_DEFP(F.v8428);
((*(yR125 *)y_deref(Y_DEFP(F.v8436)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v8436)))).f_cname = yr1200_Fresh(y_str("c_", 2));
yr2445_DeclStorage(yr1061_T(y_str("rt_int", 6)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8436)))).f_cname));
yr2425_Define(Y_DEFP(F.v8436), Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_line));
F.v8430 = yr1200_Fresh(y_str("i", 1));
F.v8432 = yr1200_Fresh(y_str("hi", 2));
yr1026_SB();
yr1037_SA(y_str("{ rt_int ", 9));
yr1044_ST(Y_DEFI(F.v8432));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2613_HiText(Y_DEFP(F.v8428)));
yr1037_SA(y_str(";", 1));
F.v8434 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8434));
yr1026_SB();
yr1037_SA(y_str("for (rt_int ", 12));
yr1044_ST(Y_DEFI(F.v8430));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2607_LoText(Y_DEFP(F.v8428)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8430));
yr1037_SA(y_str(" <= ", 4));
yr1044_ST(Y_DEFI(F.v8432));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8430));
yr1037_SA(y_str("++) { ", 6));
yr1044_ST(yr2452_SymPath(Y_DEFP(F.v8436)));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v8430));
yr1037_SA(y_str("; Y_TICK();", 11));
F.v8434 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8434));
yr3417_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_b));
yr3331_Emit3(y_str("if (", 4), Y_DEFI(F.v8430), y_str(" == ", 4));
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = yr3453_Join(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t), Y_DEFI(F.v8432), yr1061_T(y_str(") break;", 8)));
yr1138_EmitS(y_str("}}", 2));
yr2342_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3453_Join(rt_int a_p3454, rt_int a_p3455, rt_int a_p3456) {
struct yf3457 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3454 = a_p3454;
F.p3455 = a_p3455;
F.p3456 = a_p3456;
yr1026_SB();
yr1044_ST(F.p3454);
yr1044_ST(F.p3455);
yr1044_ST(F.p3456);
{ rt_int rv8464 = yr1056_SE();
y_use = F.yu; return rv8464; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3461_ReturnStatement(void * a_p3462) {
struct yf3463 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3462 = a_p3462;
F.v8468 = Y_UNDEF_I;
F.v8470 = Y_UNDEF_I;
F.v8472 = Y_UNDEF_I;
F.v8474 = Y_UNDEF_P;
F.v8476 = Y_UNDEF_P;
if ((Y_DEFP(v1651) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3462))).f_line), y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_kind) == v885)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3462))).f_line), y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v8476 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_ret);
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3462))).f_a) == ((void *)0))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8476)))).f_kind) == v852))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3462))).f_line), y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3436_CopyOut();
yr3842_LeaveMonitor();
yr3341_PopTo(Y_DEFI(v1579));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8476)))).f_kind) == v852)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3462))).f_line), y_str("this routine returns no value (IX.A.6)", 38));
}
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3462))).f_a), Y_DEFP(F.v8476), &F.v8468, &F.v8474);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3462))).f_line), Y_DEFP(F.v8476), Y_DEFP(F.v8474));
F.v8472 = yr1200_Fresh(y_str("rv", 2));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2526_CType(Y_DEFP(F.v8476)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v8472));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2976_Convert(Y_DEFI(F.v8468), Y_DEFP(F.v8476), Y_DEFP(F.v8474)));
yr1037_SA(y_str(";", 1));
F.v8470 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8470));
yr3436_CopyOut();
yr3842_LeaveMonitor();
yr3341_PopTo(Y_DEFI(v1579));
yr3331_Emit3(y_str("y_use = F.yu; return ", 21), Y_DEFI(F.v8472), y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3467_BeginStatement(void * a_p3468) {
struct yf3469 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3468 = a_p3468;
F.v8492 = Y_UNDEF_I;
F.v8494 = Y_UNDEF_I;
yr1138_EmitS(y_str("{", 1));
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3468))).f_flag) == INT64_C(1))) {
F.v8492 = yr1200_Fresh(y_str("sf", 2));
F.v8494 = yr1200_Fresh(y_str("ys", 2));
v1680 = 1;
yr1132_Emit(yr3453_Join(yr1061_T(y_str("int ", 4)), Y_DEFI(F.v8494), yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v8492), yr1061_T(y_str(";", 1))));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), Y_DEFI(F.v8492), yr3453_Join(yr1061_T(y_str(")) { RT_POP(", 12)), Y_DEFI(F.v8492), yr3453_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8494), yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1576 = y_range(y_add(Y_DEFI(v1576), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1563).p)[y_ix1(v1563, Y_DEFI(v1576))] = Y_DEFI(F.v8492);
((rt_int *)(v1574).p)[y_ix1(v1574, Y_DEFI(v1576))] = yr3453_Join(yr1061_T(y_str("y_sim_depth = ", 14)), Y_DEFI(F.v8494), yr1061_T(y_str(";", 1)));
}
yr2330_OpenScope(0);
yr3680_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3468))).f_a)))).f_a));
yr3358_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3468))).f_a));
yr3812_AwaitProcesses();
yr2342_CloseScope();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3468))).f_flag) == INT64_C(1))) {
v1576 = y_range(y_sub(Y_DEFI(v1576), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("RT_POP(", 7)), Y_DEFI(F.v8492), yr3453_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8494), yr1061_T(y_str(";", 1)))));
}
yr1138_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3473_PlaceLabel(void * a_p3474) {
struct yf3475 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3474 = a_p3474;
F.v8523 = Y_UNDEF_P;
F.v8523 = yr2359_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3474))).f_text));
if ((((Y_DEFP(F.v8523) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8523)))).f_kind) == v888))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3474))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3474))).f_text), y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8523)))).f_hasmv)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3474))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3474))).f_text), y_str(" labels two statements", 22));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8523)))).f_hasmv = 1;
yr3331_Emit3(y_str("", 0), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8523)))).f_cname), y_str(": ;", 3));
if ((!(Y_DEFI(((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))]) == INT64_C(0)))) {
yr3331_Emit3(y_str("rt_xtop = &", 11), Y_DEFI(((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))]), y_str(";", 1));
} else if ((!(Y_DEFI(((rt_int *)(v1602).p)[y_ix1(v1602, Y_DEFI(v1604))]) == INT64_C(0)))) {
yr3331_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1602).p)[y_ix1(v1602, Y_DEFI(v1604))]), y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3479_GotoStatement(void * a_p3480) {
struct yf3481 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3480 = a_p3480;
F.v8538 = Y_UNDEF_P;
F.v8538 = yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8538)))).f_kind) == v888))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name), y_str(" is not a label", 15));
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8538)))).f_level) == Y_DEFI(v1279)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name), y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8538)))).f_readonly = 1;
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3331_Emit3(y_str("goto ", 5), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8538)))).f_cname), y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3485_CheckLabels(void * a_p3486) {
struct yf3487 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3486 = a_p3486;
F.v8548 = Y_UNDEF_P;
F.v8548 = F.p3486;
F.v8550 = Y_UNDEF_P;
F.v8552 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8548) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8548)))).f_kind) == v645)) {
F.v8550 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8548)))).f_a);
while ((!(Y_DEFP(F.v8550) == ((void *)0)))) {
Y_TICK();
F.v8552 = yr2359_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8550)))).f_name));
if ((((((!(Y_DEFP(F.v8552) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8552)))).f_kind) == v888))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8552)))).f_readonly)) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8552)))).f_hasmv)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8550)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8550)))).f_name), y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v8550 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8550)))).f_next);
}
}
F.v8548 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8548)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3491_DesigBase(void * a_p3492, void * * a_p3493, rt_int * a_p3494, rt_int * a_p3495) {
struct yf3496 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3492 = a_p3492;
F.p3493_o = a_p3493;
F.p3494_o = a_p3494;
F.p3495_o = a_p3495;
F.v8560 = Y_UNDEF_P;
F.v8560 = F.p3492;
F.v8562 = Y_UNDEF_P;
F.p3493 = ((void *)0);
F.p3494 = 0;
F.p3495 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_kind) == v786)))) {
F.v8560 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_a);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_kind) == v789)) {
if ((!Y_DEFI(F.p3494))) {
F.p3494 = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_a)))).f_rep) == ((void *)0)))) {
F.p3495 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_a)))).f_rep)))).f_tid);
}
}
F.v8560 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_a);
} else {
goto yl_8565;
}
}
yl_8565: ;
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_d) == ((void *)0))))) {
F.v8562 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8560)))).f_name));
if ((!(Y_DEFP(F.v8562) == ((void *)0)))) {
if (yr2406_Resolved(Y_DEFP(F.v8562))) {
F.v8562 = yr2458_Real(Y_DEFP(F.v8562));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8562)))).f_kind) == v861)) {
F.p3493 = Y_DEFP(F.v8562);
}
}
}
}
(*F.p3493_o) = F.p3493;
(*F.p3494_o) = F.p3494;
(*F.p3495_o) = F.p3495;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3500_Note(void * a_p3501, rt_int a_p3502, rt_int a_p3503) {
struct yf3504 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3501 = a_p3501;
F.p3502 = a_p3502;
F.p3503 = a_p3503;
F.v8572 = Y_UNDEF_P;
F.v8572 = yr2004_NewNode(v669, F.p3503);
((*(yR105 *)y_deref(Y_DEFP(F.v8572)))).f_sym = F.p3501;
((*(yR105 *)y_deref(Y_DEFP(F.v8572)))).f_name = F.p3502;
{ void * rv8573 = Y_DEFP(F.v8572);
y_use = F.yu; return rv8573; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3508_NoteWrite(void * a_p3509) {
struct yf3510 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3509 = a_p3509;
F.v8577 = Y_UNDEF_P;
F.v8579 = Y_UNDEF_I;
F.v8581 = Y_UNDEF_I;
F.v8583 = Y_UNDEF_P;
F.v8585 = Y_UNDEF_P;
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
yr3491_DesigBase(F.p3509, &F.v8577, &F.v8579, &F.v8581);
if (Y_DEFI(F.v8579)) {
F.v8577 = ((void *)0);
} else if ((((Y_DEFP(F.v8577) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8577)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_level))))) {
y_use = F.yu; return;
}
F.v8583 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_writes);
while ((!(Y_DEFP(F.v8583) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_sym) == Y_DEFP(F.v8577))) {
y_use = F.yu; return;
}
F.v8583 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_next);
}
F.v8585 = yr3500_Note(Y_DEFP(F.v8577), INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(F.p3509))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8585)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_writes);
((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_writes = Y_DEFP(F.v8585);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3514_NoteFree(void * a_p3515) {
struct yf3516 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3515 = a_p3515;
F.v8590 = Y_UNDEF_P;
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3515))).f_kind) == v861))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p3515))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_level))))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3515))).f_seen) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_serial))) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3515))).f_seen = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_serial);
F.v8590 = yr3500_Note(F.p3515, INT64_C(0), Y_DEFI(v1000));
((*(yR105 *)y_deref(Y_DEFP(F.v8590)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_frees = Y_DEFP(F.v8590);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3520_NoteFreeDeref(void * a_p3521, rt_int a_p3522) {
struct yf3523 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3521 = a_p3521;
F.p3522 = a_p3522;
F.v8596 = Y_UNDEF_P;
F.v8598 = Y_UNDEF_I;
F.v8600 = Y_UNDEF_I;
F.v8602 = Y_UNDEF_P;
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
yr3491_DesigBase(F.p3521, &F.v8596, &F.v8598, &F.v8600);
if ((((Y_DEFP(F.v8596) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8596)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_level))))) {
y_use = F.yu; return;
}
F.v8602 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_frees);
while ((!(Y_DEFP(F.v8602) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8602)))).f_sym) == ((void *)0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8602)))).f_name) == F.p3522)))) {
y_use = F.yu; return;
}
F.v8602 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8602)))).f_next);
}
F.v8602 = yr3500_Note(((void *)0), F.p3522, Y_DEFI(((*(yR105 *)y_deref(F.p3521))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8602)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_frees = Y_DEFP(F.v8602);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3527_DSteps(void * a_p3528, yarr * a_p3529) {
struct yf3530 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3528 = a_p3528;
F.p3529 = a_p3529;
F.v8607 = Y_UNDEF_P;
F.v8607 = F.p3528;
F.v8609 = Y_UNDEF_I;
F.v8609 = INT64_C(0);
F.v8612 = Y_UNDEF_P;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8607)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8607)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8607)))).f_kind) == v786)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8607)))).f_kind) == v801))) {
if ((Y_DEFI(F.v8609) < INT64_C(64))) {
F.v8609 = y_range(y_add(Y_DEFI(F.v8609), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3529)).p)[y_ix1((*F.p3529), Y_DEFI(F.v8609))] = Y_DEFP(F.v8607);
}
}
F.v8607 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8607)))).f_a);
}
F.lo8621 = INT64_C(1);
F.hi8622 = y_div(Y_DEFI(F.v8609), INT64_C(2));
{ rt_int hi8626 = F.hi8622;
for (rt_int i8625 = F.lo8621; i8625 <= hi8626; i8625++) { F.c_8624 = i8625; Y_TICK();
F.v8612 = Y_DEFP(((void * *)((*F.p3529)).p)[y_ix1((*F.p3529), F.c_8624)]);
((void * *)((*F.p3529)).p)[y_ix1((*F.p3529), F.c_8624)] = Y_DEFP(((void * *)((*F.p3529)).p)[y_ix1((*F.p3529), y_sub((y_add(Y_DEFI(F.v8609), INT64_C(1))), F.c_8624))]);
((void * *)((*F.p3529)).p)[y_ix1((*F.p3529), y_sub((y_add(Y_DEFI(F.v8609), INT64_C(1))), F.c_8624))] = Y_DEFP(F.v8612);
if (i8625 == hi8626) break;
}}
{ rt_int rv8633 = Y_DEFI(F.v8609);
y_use = F.yu; return rv8633; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3534_Overlaps(void * a_p3535, void * a_p3536) {
struct yf3537 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3535 = a_p3535;
F.p3536 = a_p3536;
F.v8638 = Y_UNDEF_P;
F.v8640 = Y_UNDEF_P;
F.v8642 = Y_UNDEF_I;
F.v8644 = Y_UNDEF_I;
F.v8646 = Y_UNDEF_I;
F.v8648 = Y_UNDEF_I;
F.v8650 = Y_UNDEF_I;
F.v8652 = Y_UNDEF_I;
F.v8654 = Y_UNDEF_I;
F.v8656 = Y_UNDEF_I;
y_initu(&yd_201, &F.v8658);
y_initu(&yd_201, &F.v8660);
F.v8662 = Y_UNDEF_I;
F.v8664 = Y_UNDEF_I;
F.v8666 = Y_UNDEF_I;
F.v8668 = Y_UNDEF_I;
F.v8670 = Y_UNDEF_P;
F.v8672 = Y_UNDEF_P;
F.v8674 = Y_UNDEF_P;
F.v8676 = Y_UNDEF_P;
yr3491_DesigBase(F.p3535, &F.v8638, &F.v8642, &F.v8654);
yr3491_DesigBase(F.p3536, &F.v8640, &F.v8644, &F.v8656);
if ((!(Y_DEFI(F.v8642) == Y_DEFI(F.v8644)))) {
if (((Y_DEFI(F.v8642) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3535))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3536))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3536))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3536))).f_rep)))).f_tid) == Y_DEFI(F.v8654))))) {
{ rt_int rv8678 = 1;
y_use = F.yu; return rv8678; }
}
}
if (((Y_DEFI(F.v8644) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3536))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3535))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3535))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3535))).f_rep)))).f_tid) == Y_DEFI(F.v8656))))) {
{ rt_int rv8680 = 1;
y_use = F.yu; return rv8680; }
}
}
{ rt_int rv8682 = 0;
y_use = F.yu; return rv8682; }
}
if (Y_DEFI(F.v8642)) {
if ((!(Y_DEFI(F.v8654) == Y_DEFI(F.v8656)))) {
{ rt_int rv8684 = 0;
y_use = F.yu; return rv8684; }
}
} else if ((((Y_DEFP(F.v8638) == ((void *)0))) || ((!(Y_DEFP(F.v8638) == Y_DEFP(F.v8640)))))) {
{ rt_int rv8686 = 0;
y_use = F.yu; return rv8686; }
}
F.v8662 = yr3527_DSteps(F.p3535, &F.v8658);
F.v8664 = yr3527_DSteps(F.p3536, &F.v8660);
F.lo8690 = INT64_C(1);
F.hi8691 = Y_DEFI(F.v8662);
{ rt_int hi8695 = F.hi8691;
for (rt_int i8694 = F.lo8690; i8694 <= hi8695; i8694++) { F.c_8693 = i8694; Y_TICK();
if ((F.c_8693 <= Y_DEFI(F.v8664))) {
F.v8670 = Y_DEFP(((void * *)(F.v8658).p)[y_ix1(F.v8658, F.c_8693)]);
F.v8672 = Y_DEFP(((void * *)(F.v8660).p)[y_ix1(F.v8660, F.c_8693)]);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8670)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8672)))).f_kind)))) {
{ rt_int rv8697 = 1;
y_use = F.yu; return rv8697; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8670)))).f_kind) == v783)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8670)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8672)))).f_name)))) {
{ rt_int rv8699 = 0;
y_use = F.yu; return rv8699; }
}
} else {
F.v8650 = 1;
F.v8652 = 0;
F.v8674 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8670)))).f_b);
F.v8676 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8672)))).f_b);
while ((((!(Y_DEFP(F.v8674) == ((void *)0)))) && ((!(Y_DEFP(F.v8676) == ((void *)0)))))) {
Y_TICK();
yr2895_Manifest(Y_DEFP(F.v8674), &F.v8646, &F.v8666);
yr2895_Manifest(Y_DEFP(F.v8676), &F.v8648, &F.v8668);
if ((Y_DEFI(F.v8646) && Y_DEFI(F.v8648))) {
if ((!(Y_DEFI(F.v8666) == Y_DEFI(F.v8668)))) {
F.v8652 = 1;
}
} else {
F.v8650 = 0;
}
F.v8674 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8674)))).f_next);
F.v8676 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8676)))).f_next);
}
if ((!Y_DEFI(F.v8650))) {
{ rt_int rv8705 = 1;
y_use = F.yu; return rv8705; }
}
if (Y_DEFI(F.v8652)) {
{ rt_int rv8707 = 0;
y_use = F.yu; return rv8707; }
}
}
}
if (i8694 == hi8695) break;
}}
{ rt_int rv8709 = 1;
y_use = F.yu; return rv8709; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3541_CheckActuals(void * a_p3542, rt_int a_p3543, rt_int a_p3544) {
struct yf3545 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3542 = a_p3542;
F.p3543 = a_p3543;
F.p3544 = a_p3544;
F.v8715 = Y_UNDEF_P;
F.v8717 = Y_UNDEF_P;
F.v8719 = Y_UNDEF_I;
F.v8721 = Y_UNDEF_I;
F.v8723 = Y_UNDEF_P;
F.v8725 = Y_UNDEF_P;
F.v8727 = Y_UNDEF_P;
F.v8729 = Y_UNDEF_I;
F.v8731 = Y_UNDEF_I;
F.v8715 = Y_DEFP(((*(yR125 *)y_deref(F.p3542))).f_params);
F.v8719 = y_range(y_add(F.p3543, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8723 = ((void *)0);
while ((!(Y_DEFP(F.v8715) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_cls) == v897))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_rep)))).f_kind) == v855))))) {
F.v8717 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_next);
F.v8721 = y_range(y_add(Y_DEFI(F.v8719), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v8717) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_cls) == v903)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8717)))).f_cls) == v903)))) {
if (yr3534_Overlaps(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8719))]), Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8721))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8721))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8717)))).f_name), y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_cls) == v900)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8717)))).f_cls) == v900)))) {
if (yr3370_SameDesig(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8719))]), Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8721))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8721))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8717)))).f_name), y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v8717 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8717)))).f_next);
F.v8721 = y_range(y_add(Y_DEFI(F.v8721), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_cls) == v903)) {
yr3491_DesigBase(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8719))]), &F.v8727, &F.v8729, &F.v8731);
F.v8725 = yr3500_Note(Y_DEFP(F.v8727), Y_DEFI(F.v8731), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8719))])))).f_line));
if (Y_DEFI(F.v8729)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_flag = INT64_C(1);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8719))])))).f_kind) == v789)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_ival = INT64_C(1);
}
if ((Y_DEFP(F.v8723) == ((void *)0))) {
F.v8723 = yr3500_Note(F.p3542, INT64_C(0), F.p3544);
((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_next = Y_DEFP(v1733);
v1733 = Y_DEFP(F.v8723);
}
((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_a);
((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_a = Y_DEFP(F.v8725);
}
}
F.v8719 = y_range(y_add(Y_DEFI(F.v8719), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8715 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8715)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8864_At(struct yf3550 *up, rt_int a_p8865, rt_int a_p8866) {
struct yf8867 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8865 = a_p8865;
F.p8866 = a_p8866;
{ rt_int rv8889 = y_range(y_add((y_mul(F.p8865, (y_add(Y_DEFI(F.up->v8756), INT64_C(1))))), F.p8866), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv8889; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8871_Reaches(struct yf3550 *up, rt_int a_p8872, rt_int a_p8873) {
struct yf8874 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8872 = a_p8872;
F.p8873 = a_p8873;
F.v8894 = Y_UNDEF_P;
F.v8894 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8840).p)[y_ix1(F.up->v8840, F.p8873)])))).f_calls);
if (Y_DEFI(((rt_int *)(F.up->v8851).p)[y_ix1(F.up->v8851, F.p8873)])) {
{ rt_int rv8896 = 0;
y_use = F.yu; return rv8896; }
}
((rt_int *)(F.up->v8851).p)[y_ix1(F.up->v8851, F.p8873)] = 1;
while ((!(Y_DEFP(F.v8894) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8894)))).f_sym)))).f_vix) > INT64_C(0))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8894)))).f_sym)))).f_vix) == F.p8872)) {
{ rt_int rv8900 = 1;
y_use = F.yu; return rv8900; }
}
if (yr8871_Reaches(F.up, F.p8872, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8894)))).f_sym)))).f_vix))) {
{ rt_int rv8902 = 1;
y_use = F.yu; return rv8902; }
}
}
F.v8894 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8894)))).f_next);
}
{ rt_int rv8904 = 0;
y_use = F.yu; return rv8904; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8878_VName(struct yf3550 *up, rt_int a_p8879) {
struct yf8880 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8879 = a_p8879;
if ((Y_DEFP(((void * *)(F.up->v8818).p)[y_ix1(F.up->v8818, F.p8879)]) == ((void *)0))) {
{ rt_int rv8908 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv8908; }
}
{ rt_int rv8909 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8818).p)[y_ix1(F.up->v8818, F.p8879)])))).f_name);
y_use = F.yu; return rv8909; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3549_CheckEffects(void) {
struct yf3550 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8747 = Y_UNDEF_P;
F.v8749 = Y_UNDEF_P;
F.v8751 = Y_UNDEF_P;
F.v8753 = Y_UNDEF_I;
F.v8753 = INT64_C(0);
F.v8756 = Y_UNDEF_I;
F.v8756 = INT64_C(0);
F.v8759 = Y_UNDEF_I;
F.v8759 = INT64_C(0);
F.v8762 = Y_UNDEF_P;
F.v8759 = INT64_C(1);
F.v8756 = INT64_C(1);
F.v8747 = Y_DEFP(v1731);
while ((!(Y_DEFP(F.v8747) == ((void *)0)))) {
Y_TICK();
F.v8753 = y_range(y_add(Y_DEFI(F.v8753), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_sym)))).f_vix = Y_DEFI(F.v8753);
F.v8749 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_sym)))).f_writes);
while ((!(Y_DEFP(F.v8749) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix) == INT64_C(0))))) {
F.v8756 = y_range(y_add(Y_DEFI(F.v8756), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix = Y_DEFI(F.v8756);
}
F.v8749 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_next);
}
F.v8749 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_sym)))).f_frees);
while ((!(Y_DEFP(F.v8749) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym) == ((void *)0)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix) == INT64_C(0))) {
F.v8756 = y_range(y_add(Y_DEFI(F.v8756), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix = Y_DEFI(F.v8756);
}
} else if ((yr3554_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_name), Y_DEFI(F.v8756), 0) == INT64_C(0))) {
F.v8756 = y_range(y_add(Y_DEFI(F.v8756), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_ival = yr3554_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_name), Y_DEFI(F.v8756), 1);
}
F.v8749 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_next);
}
F.v8747 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_next);
}
if ((Y_DEFI(F.v8753) == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo8789 = INT64_C(0);
F.hi8790 = y_mul((y_add(Y_DEFI(F.v8753), INT64_C(1))), (y_add(Y_DEFI(F.v8756), INT64_C(1))));
{ rt_int lo[1] = {F.lo8789}, hi[1] = {F.hi8790}; y_desc_array(&F.yd_8792, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8792, &F.v8794);
y_initu(&F.yd_8792, &F.v8796);
F.lo8802 = INT64_C(0);
F.hi8803 = Y_DEFI(F.v8756);
{ rt_int lo[1] = {F.lo8802}, hi[1] = {F.hi8803}; y_desc_array(&F.yd_8805, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8805, &F.v8807);
F.lo8813 = INT64_C(0);
F.hi8814 = Y_DEFI(F.v8756);
{ rt_int lo[1] = {F.lo8813}, hi[1] = {F.hi8814}; y_desc_array(&F.yd_8816, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8816, &F.v8818);
F.lo8824 = INT64_C(0);
F.hi8825 = Y_DEFI(F.v8756);
{ rt_int lo[1] = {F.lo8824}, hi[1] = {F.hi8825}; y_desc_array(&F.yd_8827, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8827, &F.v8829);
F.lo8835 = INT64_C(0);
F.hi8836 = Y_DEFI(F.v8753);
{ rt_int lo[1] = {F.lo8835}, hi[1] = {F.hi8836}; y_desc_array(&F.yd_8838, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8838, &F.v8840);
F.lo8846 = INT64_C(0);
F.hi8847 = Y_DEFI(F.v8753);
{ rt_int lo[1] = {F.lo8846}, hi[1] = {F.hi8847}; y_desc_array(&F.yd_8849, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8849, &F.v8851);
F.v8853 = Y_UNDEF_I;
F.v8853 = 1;
F.v8856 = Y_UNDEF_I;
F.v8858 = Y_UNDEF_I;
F.v8860 = Y_UNDEF_I;
F.v8862 = Y_UNDEF_P;
F.lo8919 = INT64_C(0);
F.hi8920 = y_mul((y_add(Y_DEFI(F.v8753), INT64_C(1))), (y_add(Y_DEFI(F.v8756), INT64_C(1))));
{ rt_int hi8924 = F.hi8920;
for (rt_int i8923 = F.lo8919; i8923 <= hi8924; i8923++) { F.c_8922 = i8923; Y_TICK();
((rt_int *)(F.v8794).p)[y_ix1(F.v8794, F.c_8922)] = 0;
((rt_int *)(F.v8796).p)[y_ix1(F.v8796, F.c_8922)] = 0;
if (i8923 == hi8924) break;
}}
F.lo8930 = INT64_C(0);
F.hi8931 = Y_DEFI(F.v8756);
{ rt_int hi8935 = F.hi8931;
for (rt_int i8934 = F.lo8930; i8934 <= hi8935; i8934++) { F.c_8933 = i8934; Y_TICK();
((rt_int *)(F.v8807).p)[y_ix1(F.v8807, F.c_8933)] = INT64_C(-1);
((void * *)(F.v8818).p)[y_ix1(F.v8818, F.c_8933)] = ((void *)0);
((rt_int *)(F.v8829).p)[y_ix1(F.v8829, F.c_8933)] = INT64_C(0);
if (i8934 == hi8935) break;
}}
F.lo8941 = INT64_C(0);
F.hi8942 = Y_DEFI(F.v8753);
{ rt_int hi8946 = F.hi8942;
for (rt_int i8945 = F.lo8941; i8945 <= hi8946; i8945++) { F.c_8944 = i8945; Y_TICK();
((rt_int *)(F.v8851).p)[y_ix1(F.v8851, F.c_8944)] = 0;
if (i8945 == hi8946) break;
}}
F.v8747 = Y_DEFP(v1731);
while ((!(Y_DEFP(F.v8747) == ((void *)0)))) {
Y_TICK();
F.v8762 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_sym);
((void * *)(F.v8840).p)[y_ix1(F.v8840, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_vix))] = Y_DEFP(F.v8762);
F.v8749 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_writes);
while ((!(Y_DEFP(F.v8749) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym) == ((void *)0))) {
F.v8858 = INT64_C(1);
} else {
F.v8858 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix);
}
((rt_int *)(F.v8794).p)[y_ix1(F.v8794, yr8864_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_vix), Y_DEFI(F.v8858)))] = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym) == ((void *)0)))) {
((rt_int *)(F.v8807).p)[y_ix1(F.v8807, Y_DEFI(F.v8858))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_level);
((void * *)(F.v8818).p)[y_ix1(F.v8818, Y_DEFI(F.v8858))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym);
}
F.v8749 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_next);
}
F.v8749 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_frees);
while ((!(Y_DEFP(F.v8749) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym) == ((void *)0))) {
F.v8858 = yr3554_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_name), INT64_C(0), 0);
((rt_int *)(F.v8829).p)[y_ix1(F.v8829, Y_DEFI(F.v8858))] = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_name);
} else {
F.v8858 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix);
((rt_int *)(F.v8807).p)[y_ix1(F.v8807, Y_DEFI(F.v8858))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_level);
((void * *)(F.v8818).p)[y_ix1(F.v8818, Y_DEFI(F.v8858))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym);
}
((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_vix), Y_DEFI(F.v8858)))] = 1;
F.v8749 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_next);
}
F.v8747 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_next);
}
while (Y_DEFI(F.v8853)) {
Y_TICK();
F.v8853 = 0;
F.lo8957 = INT64_C(1);
F.hi8958 = Y_DEFI(F.v8753);
{ rt_int hi8962 = F.hi8958;
for (rt_int i8961 = F.lo8957; i8961 <= hi8962; i8961++) { F.c_8960 = i8961; Y_TICK();
F.v8751 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8840).p)[y_ix1(F.v8840, F.c_8960)])))).f_calls);
while ((!(Y_DEFP(F.v8751) == ((void *)0)))) {
Y_TICK();
F.v8860 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8751)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8860) > INT64_C(0))) {
F.lo8967 = INT64_C(1);
F.hi8968 = Y_DEFI(F.v8756);
{ rt_int hi8972 = F.hi8968;
for (rt_int i8971 = F.lo8967; i8971 <= hi8972; i8971++) { F.c_8970 = i8971; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8807).p)[y_ix1(F.v8807, F.c_8970)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8840).p)[y_ix1(F.v8840, F.c_8960)])))).f_level))) {
if ((Y_DEFI(((rt_int *)(F.v8794).p)[y_ix1(F.v8794, yr8864_At(&F, Y_DEFI(F.v8860), y_range(F.c_8970, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8794).p)[y_ix1(F.v8794, yr8864_At(&F, y_range(F.c_8960, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8970, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8794).p)[y_ix1(F.v8794, yr8864_At(&F, y_range(F.c_8960, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8970, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8853 = 1;
}
if ((Y_DEFI(((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, Y_DEFI(F.v8860), y_range(F.c_8970, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, y_range(F.c_8960, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8970, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, y_range(F.c_8960, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8970, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8853 = 1;
}
}
if (i8971 == hi8972) break;
}}
}
F.v8751 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8751)))).f_next);
}
if (i8961 == hi8962) break;
}}
}
F.lo8980 = INT64_C(1);
F.hi8981 = Y_DEFI(F.v8753);
{ rt_int hi8985 = F.hi8981;
for (rt_int i8984 = F.lo8980; i8984 <= hi8985; i8984++) { F.c_8983 = i8984; Y_TICK();
F.v8762 = Y_DEFP(((void * *)(F.v8840).p)[y_ix1(F.v8840, F.c_8983)]);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_func)) {
F.v8751 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_calls);
while ((!(Y_DEFP(F.v8751) == ((void *)0)))) {
Y_TICK();
F.v8860 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8751)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8860) > INT64_C(0))) {
F.lo8990 = INT64_C(1);
F.hi8991 = Y_DEFI(F.v8756);
{ rt_int hi8995 = F.hi8991;
for (rt_int i8994 = F.lo8990; i8994 <= hi8995; i8994++) { F.c_8993 = i8994; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8794).p)[y_ix1(F.v8794, yr8864_At(&F, Y_DEFI(F.v8860), y_range(F.c_8993, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFI(((rt_int *)(F.v8807).p)[y_ix1(F.v8807, F.c_8993)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_level))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8751)))).f_line), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_name), yr3453_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8751)))).f_sym)))).f_name), INT64_C(0)), yr3453_Join(yr1061_T(y_str(", which assigns to ", 19)), yr8878_VName(&F, y_range(F.c_8993, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
}
if (i8994 == hi8995) break;
}}
}
F.v8751 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8751)))).f_next);
}
}
if ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_decl) == ((void *)0)))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_decl)))).f_e) == ((void *)0)))) {
F.lo9003 = INT64_C(0);
F.hi9004 = Y_DEFI(F.v8753);
{ rt_int hi9008 = F.hi9004;
for (rt_int i9007 = F.lo9003; i9007 <= hi9008; i9007++) { F.c_9006 = i9007; Y_TICK();
((rt_int *)(F.v8851).p)[y_ix1(F.v8851, F.c_9006)] = 0;
if (i9007 == hi9008) break;
}}
if (yr8871_Reaches(&F, y_range(F.c_8983, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8983, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_decl)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8762)))).f_name), y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i8984 == hi8985) break;
}}
F.v8747 = Y_DEFP(v1733);
while ((!(Y_DEFP(F.v8747) == ((void *)0)))) {
Y_TICK();
F.v8862 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_sym);
F.v8860 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8862)))).f_vix);
if ((Y_DEFI(F.v8860) > INT64_C(0))) {
F.v8749 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_a);
while ((!(Y_DEFP(F.v8749) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_flag) == INT64_C(0))) && ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym) == ((void *)0)))))) {
F.v8858 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8858) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, Y_DEFI(F.v8860), Y_DEFI(F.v8858)))])) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_line), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_sym)))).f_name), yr3453_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8862)))).f_name), INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v8856 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_flag) == INT64_C(1))) {
F.v8856 = yr3554_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_name), INT64_C(0), 0);
}
if ((Y_DEFI(F.v8856) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, Y_DEFI(F.v8860), Y_DEFI(F.v8856)))])) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8862)))).f_name), y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_flag) == INT64_C(1))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_ival) == INT64_C(1))))) {
F.lo9028 = INT64_C(1);
F.hi9029 = Y_DEFI(F.v8756);
{ rt_int hi9033 = F.hi9029;
for (rt_int i9032 = F.lo9028; i9032 <= hi9033; i9032++) { F.c_9031 = i9032; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8796).p)[y_ix1(F.v8796, yr8864_At(&F, Y_DEFI(F.v8860), y_range(F.c_9031, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.v8818).p)[y_ix1(F.v8818, F.c_9031)]) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8818).p)[y_ix1(F.v8818, F.c_9031)])))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8818).p)[y_ix1(F.v8818, F.c_9031)])))).f_rep)))).f_tid) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_name))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_line), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8862)))).f_name), yr3453_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8818).p)[y_ix1(F.v8818, F.c_9031)])))).f_name), INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i9032 == hi9033) break;
}}
}
F.v8749 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8749)))).f_next);
}
}
F.v8747 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8747)))).f_next);
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3554_DynIndex(rt_int a_p3555, rt_int a_p3556, rt_int a_p3557) {
struct yf3558 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3555 = a_p3555;
F.p3556 = a_p3556;
F.p3557 = a_p3557;
F.lo9044 = INT64_C(1);
F.hi9045 = Y_DEFI(v1757);
{ rt_int hi9049 = F.hi9045;
for (rt_int i9048 = F.lo9044; i9048 <= hi9049; i9048++) { F.c_9047 = i9048; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1744).p)[y_ix1(v1744, F.c_9047)]) == F.p3555)) {
{ rt_int rv9050 = Y_DEFI(((rt_int *)(v1755).p)[y_ix1(v1755, F.c_9047)]);
y_use = F.yu; return rv9050; }
}
if (i9048 == hi9049) break;
}}
if ((!F.p3557)) {
{ rt_int rv9052 = INT64_C(0);
y_use = F.yu; return rv9052; }
}
if ((Y_DEFI(v1757) >= INT64_C(4096))) {
yr1178_FailS(Y_DEFI(v1000), y_str("too many pointer types for this implementation", 46));
}
v1757 = y_range(y_add(Y_DEFI(v1757), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1744).p)[y_ix1(v1744, Y_DEFI(v1757))] = F.p3555;
((rt_int *)(v1755).p)[y_ix1(v1755, Y_DEFI(v1757))] = F.p3556;
{ rt_int rv9057 = F.p3556;
y_use = F.yu; return rv9057; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3562_RoutineCName(rt_int a_p3563) {
struct yf3564 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3563 = a_p3563;
F.v9061 = Y_UNDEF_I;
F.v9061 = yr1195_NewSerial();
F.v9063 = Y_UNDEF_I;
F.v9063 = 1;
F.lo9068 = INT64_C(1);
F.hi9069 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3563)]);
{ rt_int hi9073 = F.hi9069;
for (rt_int i9072 = F.lo9068; i9072 <= hi9073; i9072++) { F.c_9071 = i9072; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3563, y_range(F.c_9071, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3563, y_range(F.c_9071, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v9063 = 0;
}
if (i9072 == hi9073) break;
}}
yr1026_SB();
yr1037_SA(y_str("yr", 2));
yr1050_SI(Y_DEFI(F.v9061));
if (Y_DEFI(F.v9063)) {
yr1037_SA(y_str("_", 1));
yr1044_ST(F.p3563);
}
{ rt_int rv9077 = yr1056_SE();
y_use = F.yu; return rv9077; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3568_FormalRep(void * a_p3569) {
struct yf3570 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3569 = a_p3569;
F.v9081 = Y_UNDEF_P;
F.v9083 = Y_UNDEF_I;
F.v9085 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3569))).f_kind) == v696)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3569))).f_a), &F.v9083, &F.v9085);
if ((((!Y_DEFI(F.v9083)) || ((Y_DEFI(F.v9085) < INT64_C(1)))) || ((Y_DEFI(F.v9085) > INT64_C(8))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3569))).f_line), y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
}
F.v9081 = yr2464_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
((*(yR110 *)y_deref(Y_DEFP(F.v9081)))).f_nidx = Y_DEFI(F.v9085);
((*(yR110 *)y_deref(Y_DEFP(F.v9081)))).f_elem = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3569))).f_b), INT64_C(0), 0);
yr2567_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9081)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p3569))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v9081)))).f_deep = 1;
{ void * rv9093 = Y_DEFP(F.v9081);
y_use = F.yu; return rv9093; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3569))).f_kind) == v699)) {
{ void * rv9095 = yr2464_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv9095; }
}
F.v9081 = yr2708_MakeRep(F.p3569, INT64_C(0), 0);
yr2567_CheckRepresented(Y_DEFP(F.v9081), Y_DEFI(((*(yR105 *)y_deref(F.p3569))).f_line));
{ void * rv9098 = Y_DEFP(F.v9081);
y_use = F.yu; return rv9098; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3574_ParamCType(void * a_p3575) {
struct yf3576 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3575 = a_p3575;
F.v9102 = Y_UNDEF_I;
F.v9102 = yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3575))).f_rep));
if ((((Y_DEFI(((*(yR120 *)y_deref(F.p3575))).f_cls) == v897)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(F.p3575))).f_rep)))).f_kind) == v855)))) {
{ rt_int rv9103 = Y_DEFI(F.v9102);
y_use = F.yu; return rv9103; }
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9102));
yr1037_SA(y_str(" *", 2));
{ rt_int rv9105 = yr1056_SE();
y_use = F.yu; return rv9105; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3580_InstallTrap(void * a_p3581, void * a_p3582) {
struct yf3583 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3581 = a_p3581;
F.p3582 = a_p3582;
F.v9110 = Y_UNDEF_I;
F.v9112 = Y_UNDEF_I;
F.v9112 = 0;
F.v9115 = Y_UNDEF_I;
F.v9117 = Y_UNDEF_I;
F.v9117 = INT64_C(1);
F.v9110 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9115 = yr1061_T(y_str("OUT_OF_RANGE OVERFLOW ZERO_DIVIDE INVALID_POINTER FIXED_NOT_REPRESENTABLE TOO_MANY_PROCESS_INSTANCES TOO_LITTLE_LOCAL_STORAGE ADDRESS_VIOLATION UNINITIALIZED ", 158));
F.lo9127 = INT64_C(1);
F.hi9128 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9115))]);
{ rt_int hi9132 = F.hi9128;
for (rt_int i9131 = F.lo9127; i9131 <= hi9132; i9131++) { F.c_9130 = i9131; Y_TICK();
if ((yr1103_TChar(Y_DEFI(F.v9115), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
if ((yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v9115))]), (y_sub(Y_DEFI(F.v9117), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_9130, Y_DEFI(F.v9117)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFI(F.v9110))) {
F.v9112 = 1;
}
F.v9117 = y_range(y_add(F.c_9130, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i9131 == hi9132) break;
}}
if ((!Y_DEFI(F.v9112))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_line), Y_DEFI(F.v9110), y_str(" is not a trap of this implementation (XIV.X.3)", 47));
}
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((!(Y_DEFI(v1273) == INT64_C(2)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_name), y_str(": a trap handler is declared in the outermost scope of a program (XIV.X.3)", 74));
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3581))).f_nparams) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3581))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3582))).f_name), y_str(": a trap handler of this implementation is a procedure without parameters (XIV.X.3)", 83));
}
yr1026_SB();
yr1037_SA(y_str("y_trap_install(rt_exc(", 22));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v9110));
yr1031_SC(34);
yr1037_SA(y_str("), ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3581))).f_cname));
yr1037_SA(y_str(");", 2));
yr1132_Emit(yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3587_DeclType(void * a_p3588) {
struct yf3589 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3588 = a_p3588;
if ((Y_DEFI(((*(yR120 *)y_deref(F.p3588))).f_cls) == v900)) {
{ rt_int rv9154 = yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3588))).f_rep));
y_use = F.yu; return rv9154; }
}
{ rt_int rv9155 = yr3574_ParamCType(F.p3588);
y_use = F.yu; return rv9155; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3593_RoutineHeader(void * a_p3594, rt_int a_p3595) {
struct yf3596 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3594 = a_p3594;
F.p3595 = a_p3595;
F.v9160 = Y_UNDEF_P;
F.v9162 = Y_UNDEF_P;
F.v9164 = Y_UNDEF_P;
F.v9166 = Y_UNDEF_P;
F.v9168 = Y_UNDEF_P;
F.v9170 = Y_UNDEF_P;
F.v9172 = Y_UNDEF_P;
F.v9174 = Y_UNDEF_I;
F.v9176 = Y_UNDEF_I;
F.v9176 = 1;
F.v9160 = yr2323_NewSym(F.p3595, Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_decl = F.p3594;
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_func = (Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_flag) == INT64_C(1));
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_level = y_range(y_add(Y_DEFI(v1279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_cname = yr3562_RoutineCName(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3594))).f_b) == ((void *)0)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_ret = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3594))).f_b), INT64_C(0), 0);
yr2567_CheckRepresented(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_ret), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line));
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_ret = Y_DEFP(v1348);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_func)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v9170 = ((void *)0);
F.v9164 = Y_DEFP(((*(yR105 *)y_deref(F.p3594))).f_a);
while ((!(Y_DEFP(F.v9164) == ((void *)0)))) {
Y_TICK();
F.v9172 = yr3568_FormalRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_b));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_func) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_ival) == v897))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3595 == v885)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_ival) == v900)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str(": a process has no OUT parameters", 33));
}
F.v9166 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_a);
while ((!(Y_DEFP(F.v9166) == ((void *)0)))) {
Y_TICK();
({ F.v9168 = y_new(sizeof(yR120)); y_initu(&yd_121, y_deref(F.v9168)); });
(*(yR120 *)y_deref(Y_DEFP(F.v9168))) = ((yR120){ .f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9166)))).f_name), .f_cls = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_ival), .f_rep = Y_DEFP(F.v9172), .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9166)))).f_a) == ((void *)0)))) {
((*(yR120 *)y_deref(Y_DEFP(F.v9168)))).f_at = yr2830_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9166)))).f_a));
}
if ((Y_DEFP(F.v9170) == ((void *)0))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_params = Y_DEFP(F.v9168);
} else {
((*(yR120 *)y_deref(Y_DEFP(F.v9170)))).f_next = Y_DEFP(F.v9168);
}
F.v9170 = Y_DEFP(F.v9168);
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_nparams = y_range(y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_nparams), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9166 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9166)))).f_next);
}
F.v9164 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_next);
}
F.v9162 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name));
if ((!(Y_DEFP(F.v9162) == ((void *)0)))) {
F.v9162 = yr2458_Real(Y_DEFP(F.v9162));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_ival) == INT64_C(0))) && ((!(Y_DEFP(F.v9162) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9162)))).f_kind) == v891)) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line), yr3453_Join(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_ival) == INT64_C(0)))) && ((!(Y_DEFP(F.v9162) == ((void *)0))))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9162)))).f_kind) == v876)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_alt = Y_DEFP(F.v9162);
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9162)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_ival) == v339)) && ((!(yr3600_SameSignature(Y_DEFP(F.v9160), Y_DEFP(F.v9162)) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_ival) == v435)) && ((yr3600_SameSignature(Y_DEFP(F.v9160), Y_DEFP(F.v9162)) == ((void *)0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR105 *)y_deref(F.p3594))).f_sym = Y_DEFP(F.v9160);
yr2425_Define(Y_DEFP(F.v9160), Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line));
if ((((!(Y_DEFI(v1728) == INT64_C(0)))) && yr1088_TEq(Y_DEFI(v1728), yr1061_T(y_str("CompilerStatus", 14))))) {
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), yr1061_T(y_str("SUPPRESS_TRAP", 13)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_mval = v1504;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), yr1061_T(y_str("RESTORE_TRAP", 12)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_mval = v1507;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), yr1061_T(y_str("TRAP_SUPPRESSED", 15)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_mval = v1510;
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_ival) == v435)) && yr1095_TStarts(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_name), y_str("TRAP_", 5)))) {
yr3580_InstallTrap(Y_DEFP(F.v9160), F.p3594);
}
F.v9164 = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_sym = Y_DEFP(F.v9160);
((*(yR105 *)y_deref(Y_DEFP(F.v9164)))).f_next = Y_DEFP(v1731);
v1731 = Y_DEFP(F.v9164);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_level))] = yr1200_Fresh(y_str("yf", 2));
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_members = yr2323_NewSym(v891, Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_level))]));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_level))]));
yr1037_SA(y_str(";", 1));
F.v9174 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v9174));
yr1026_SB();
yr1037_SA(y_str("static ", 7));
if ((F.p3595 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_ret)));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_cname));
yr1037_SA(y_str("(", 1));
F.v9174 = yr1056_SE();
if ((F.p3595 == v885)) {
F.v9174 = yr3453_Join(Y_DEFI(F.v9174), yr1061_T(y_str("void *arg", 9)), INT64_C(0));
F.v9176 = 0;
} else if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9174));
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))]));
yr1037_SA(y_str(" *up", 4));
F.v9174 = yr1056_SE();
F.v9176 = 0;
}
F.v9168 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_params);
while ((((!(Y_DEFP(F.v9168) == ((void *)0)))) && ((!(F.p3595 == v885))))) {
Y_TICK();
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9174));
if ((!Y_DEFI(F.v9176))) {
yr1037_SA(y_str(", ", 2));
}
F.v9176 = 0;
yr1044_ST(yr3574_ParamCType(Y_DEFP(F.v9168)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9168)))).f_cname));
F.v9174 = yr1056_SE();
F.v9168 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9168)))).f_next);
}
if (Y_DEFI(F.v9176)) {
F.v9174 = yr3453_Join(Y_DEFI(F.v9174), yr1061_T(y_str("void", 4)), INT64_C(0));
}
F.v9174 = yr3453_Join(Y_DEFI(F.v9174), yr1061_T(y_str(")", 1)), INT64_C(0));
((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_mnext = yr2323_NewSym(v891, Y_DEFI(F.v9174));
yr1110_Put(&v986, yr3453_Join(Y_DEFI(F.v9174), yr1061_T(y_str(";", 1)), INT64_C(0)));
yr4130_SegRoutine(Y_DEFP(F.v9160), F.p3594, F.p3595);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3600_SameSignature(void * a_p3601, void * a_p3602) {
struct yf3603 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3601 = a_p3601;
F.p3602 = a_p3602;
F.v9231 = Y_UNDEF_P;
F.v9231 = F.p3602;
F.v9233 = Y_UNDEF_P;
F.v9235 = Y_UNDEF_P;
F.v9237 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9231) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9231)))).f_nparams) == Y_DEFI(((*(yR125 *)y_deref(F.p3601))).f_nparams))) {
F.v9237 = 1;
F.v9233 = Y_DEFP(((*(yR125 *)y_deref(F.p3601))).f_params);
F.v9235 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9231)))).f_params);
while ((!(Y_DEFP(F.v9233) == ((void *)0)))) {
Y_TICK();
if ((!yr2544_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9233)))).f_rep), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9235)))).f_rep)))) {
F.v9237 = 0;
}
F.v9233 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9233)))).f_next);
F.v9235 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9235)))).f_next);
}
if (Y_DEFI(F.v9237)) {
{ void * rv9240 = Y_DEFP(F.v9231);
y_use = F.yu; return rv9240; }
}
}
F.v9231 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9231)))).f_alt);
}
{ void * rv9241 = ((void *)0);
y_use = F.yu; return rv9241; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3607_RoutineBody(void * a_p3608) {
struct yf3609 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3608 = a_p3608;
F.v9245 = Y_UNDEF_P;
F.v9245 = Y_DEFP(((*(yR105 *)y_deref(F.p3608))).f_sym);
y_initu(&yd_141, &F.v9247);
y_initu(&yd_141, &F.v9249);
F.v9251 = Y_UNDEF_I;
F.v9253 = Y_UNDEF_I;
F.v9255 = Y_UNDEF_I;
F.v9257 = Y_UNDEF_I;
F.v9259 = Y_UNDEF_I;
F.v9261 = Y_UNDEF_I;
F.v9263 = Y_UNDEF_I;
F.v9265 = Y_UNDEF_P;
F.v9267 = Y_UNDEF_I;
F.v9269 = Y_UNDEF_P;
F.v9271 = Y_UNDEF_P;
F.v9273 = Y_UNDEF_I;
F.v9275 = Y_UNDEF_I;
y_initu(&yd_141, &F.v9277);
F.v9247 = v996;
F.v9249 = v998;
F.v9251 = Y_DEFI(v1279);
F.v9253 = Y_DEFI(v1576);
F.v9255 = Y_DEFI(v1579);
F.v9257 = Y_DEFI(v1604);
F.v9259 = Y_DEFI(v1618);
F.v9261 = Y_DEFI(v1645);
F.v9263 = Y_DEFI(v1648);
F.v9265 = Y_DEFP(v1651);
F.v9267 = Y_DEFI(v1680);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v9277 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1279 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_level);
F.v9273 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_members)))).f_name);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(F.v9273);
v1579 = Y_DEFI(v1576);
v1648 = Y_DEFI(v1645);
v1618 = INT64_C(0);
v1651 = Y_DEFP(F.v9245);
v1680 = 0;
yr2330_OpenScope(0);
v1328 = y_range(y_add(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1324).p)[y_ix1(v1324, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_depth);
((rt_int *)(v1326).p)[y_ix1(v1326, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_serial);
F.v9269 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_params);
while ((!(Y_DEFP(F.v9269) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cls) == v897)) {
F.v9271 = yr2323_NewSym(v864, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_name));
} else {
F.v9271 = yr2323_NewSym(v861, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_name));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_rep = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep);
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_cname = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_kind) == v885)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_byref = (((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cls) == v903)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)))).f_kind) == v855))));
yr2445_DeclStorage(yr3574_ParamCType(Y_DEFP(F.v9269)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname));
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)))).f_kind) == v855)) {
yr2445_DeclStorage(yr1061_T(y_str("yspace", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr3453_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cls) == v903)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_byref = 1;
yr2445_DeclStorage(yr3574_ParamCType(Y_DEFP(F.v9269)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr3453_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cls) == v900)) {
yr2445_DeclStorage(yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname));
yr2445_DeclStorage(yr3574_ParamCType(Y_DEFP(F.v9269)), yr3453_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str("_o", 2)), INT64_C(0)));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr3453_Join(yr1061_T(y_str("_o = a_", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(";", 1)))));
if ((yr2501_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)))).f_kind) == v843))))) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_init(", 7)), yr2532_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)), yr3453_Join(yr1061_T(y_str(", &F.", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(");", 2)))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr3453_Join(yr1061_T(y_str(" = *a_", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(";", 1)))));
}
} else {
yr2445_DeclStorage(yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr3453_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(";", 1)))));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_at) >= INT64_C(0))) {
F.v9275 = yr2836_StoreAt(yr3587_DeclType(Y_DEFP(F.v9269)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_at));
yr1132_Emit(yr3453_Join(Y_DEFI(F.v9275), yr1061_T(y_str(" = F.", 5)), yr3453_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_level = INT64_C(0);
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_cname = Y_DEFI(F.v9275);
((*(yR125 *)y_deref(Y_DEFP(F.v9271)))).f_at = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_at);
((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_path = Y_DEFI(F.v9275);
}
yr2425_Define(Y_DEFP(F.v9271), Y_DEFI(((*(yR105 *)y_deref(F.p3608))).f_line));
F.v9269 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9269)))).f_next);
}
yr3836_EnterMonitor(Y_DEFP(F.v9245));
yr3680_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3608))).f_c)))).f_a));
if (yr3398_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3608))).f_c))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_kind) == v885)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3608))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3608))).f_name), y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3608))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3608))).f_name), y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3358_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3608))).f_c));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_kind) == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3812_AwaitProcesses();
yr2342_CloseScope();
v1328 = y_range(y_sub(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(F.v9273));
yr1037_SA(y_str(" {", 2));
if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, y_sub(Y_DEFI(v1279), INT64_C(1)))]));
yr1037_SA(y_str(" *up;", 5));
} else {
yr1037_SA(y_str(" void *up;", 10));
}
F.v9275 = yr1056_SE();
yr1110_Put(&v982, Y_DEFI(F.v9275));
yr1125_Append(&v982, &v998);
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
yr1117_PutS(&v982, y_str("};", 2));
yr1110_Put(&F.v9277, yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_mnext)))).f_name), yr1061_T(y_str(" {", 2)), INT64_C(0)));
if (Y_DEFI(v1680)) {
yr1117_PutS(&F.v9277, y_str("volatile", 8));
}
yr1110_Put(&F.v9277, yr3453_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(F.v9273), yr1061_T(y_str(" F;", 3))));
yr1117_PutS(&F.v9277, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9245)))).f_kind) == v885)) {
yr1110_Put(&F.v9277, yr3453_Join(yr1061_T(y_str("F = *(struct ", 13)), Y_DEFI(F.v9273), yr1061_T(y_str(" *)arg;", 7))));
} else if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1117_PutS(&F.v9277, y_str("F.up = up;", 10));
}
yr1117_PutS(&F.v9277, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1125_Append(&F.v9277, &v996);
yr1117_PutS(&F.v9277, y_str("}", 1));
yr1125_Append(&v988, &F.v9277);
v996 = F.v9247;
v998 = F.v9249;
v1279 = Y_DEFI(F.v9251);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = yr1200_Fresh(y_str("unused", 6));
if ((!(Y_DEFP(F.v9265) == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9265)))).f_members)))).f_name);
}
v1576 = Y_DEFI(F.v9253);
v1579 = Y_DEFI(F.v9255);
v1604 = Y_DEFI(F.v9257);
v1618 = Y_DEFI(F.v9259);
v1645 = Y_DEFI(F.v9261);
v1648 = Y_DEFI(F.v9263);
v1651 = Y_DEFP(F.v9265);
v1680 = Y_DEFI(F.v9267);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3613_DeclareStorage(void * a_p3614, void * a_p3615, rt_int a_p3616) {
struct yf3617 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3614 = a_p3614;
F.p3615 = a_p3615;
F.p3616 = a_p3616;
((*(yR125 *)y_deref(F.p3614))).f_rep = F.p3615;
((*(yR125 *)y_deref(F.p3614))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(F.p3614))).f_cname = yr1200_Fresh(y_str("v", 1));
yr2445_DeclStorage(yr2526_CType(F.p3615), Y_DEFI(((*(yR125 *)y_deref(F.p3614))).f_cname));
yr3630_InitStorage(F.p3614, F.p3615, F.p3616);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3621_DeclareAt(void * a_p3622, void * a_p3623, rt_int a_p3624, rt_int a_p3625) {
struct yf3626 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3622 = a_p3622;
F.p3623 = a_p3623;
F.p3624 = a_p3624;
F.p3625 = a_p3625;
((*(yR125 *)y_deref(F.p3622))).f_rep = F.p3623;
((*(yR125 *)y_deref(F.p3622))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.p3622))).f_at = F.p3624;
((*(yR125 *)y_deref(F.p3622))).f_cname = yr2836_StoreAt(yr2526_CType(F.p3623), F.p3624);
yr3630_InitStorage(F.p3622, F.p3623, F.p3625);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3630_InitStorage(void * a_p3631, void * a_p3632, rt_int a_p3633) {
struct yf3634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3631 = a_p3631;
F.p3632 = a_p3632;
F.p3633 = a_p3633;
if ((yr2501_Deep(F.p3632) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3632))).f_kind) == v825)))) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_initu(", 8)), yr2532_DescOf(F.p3632), yr3453_Join(yr1061_T(y_str(", &", 3)), yr2452_SymPath(F.p3631), yr1061_T(y_str(");", 2)))));
} else if ((!(yr3072_UndefValue(F.p3632) == INT64_C(0)))) {
yr1132_Emit(yr3453_Join(yr2452_SymPath(F.p3631), yr1061_T(y_str(" = ", 3)), yr3453_Join(yr3072_UndefValue(F.p3632), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3632))).f_kind) == v837)) {
yr3853_DeclareSignal(F.p3631, F.p3633);
}
if (yr2514_HoldsSignal(F.p3632)) {
yr3860_DeclareSignalArray(F.p3631, F.p3633);
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3632))).f_kind) == v840)) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2452_SymPath(F.p3631), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3638_SimpleDecl(void * a_p3639) {
struct yf3640 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3639 = a_p3639;
F.v9366 = Y_UNDEF_I;
F.v9366 = Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_kind);
F.v9368 = Y_UNDEF_P;
F.v9370 = Y_UNDEF_P;
F.v9372 = Y_UNDEF_P;
F.v9374 = Y_UNDEF_P;
F.v9376 = Y_UNDEF_I;
F.v9378 = Y_UNDEF_I;
F.v9380 = Y_UNDEF_I;
F.v9382 = Y_UNDEF_I;
if ((((Y_DEFI(F.v9366) == v639)) || ((Y_DEFI(F.v9366) == v642)))) {
F.v9368 = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_b), INT64_C(0), 0);
yr2567_CheckRepresented(Y_DEFP(F.v9368), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
if ((((Y_DEFI(F.v9366) == v639)) && yr2520_NonAssignable(Y_DEFP(F.v9368)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line), y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v9372 = Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_a);
while ((!(Y_DEFP(F.v9372) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(F.v9366) == v639)) {
F.v9374 = yr2323_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_name));
} else {
F.v9374 = yr2323_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_name));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_a) == ((void *)0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_kind) == v837))))) {
yr3621_DeclareAt(Y_DEFP(F.v9374), Y_DEFP(F.v9368), yr2830_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_a)), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
} else if ((((Y_DEFI(v1704) > INT64_C(0))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_rep = Y_DEFP(F.v9368);
yr4122_SegStorage(Y_DEFP(F.v9374), Y_DEFP(F.v9368), Y_DEFI(F.v9366));
} else {
yr3613_DeclareStorage(Y_DEFP(F.v9374), Y_DEFP(F.v9368), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_a) == ((void *)0))) {
yr4122_SegStorage(Y_DEFP(F.v9374), Y_DEFP(F.v9368), Y_DEFI(F.v9366));
}
}
if (((((!(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_c) == ((void *)0)))) && ((Y_DEFI(v1704) > INT64_C(0)))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_c), &F.v9380, &F.v9382);
if (((((Y_DEFI(F.v9366) == v639)) && Y_DEFI(F.v9380)) && yr2477_IsDiscrete(Y_DEFP(F.v9368)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_mval = Y_DEFI(F.v9382);
}
} else if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_c) == ((void *)0)))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_c), Y_DEFP(F.v9368), &F.v9376, &F.v9370);
if ((Y_DEFI(F.v9366) == v639)) {
yr2994_Store(yr2452_SymPath(Y_DEFP(F.v9374)), Y_DEFP(F.v9368), Y_DEFI(F.v9376), Y_DEFP(F.v9370), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
} else {
F.v9378 = yr3276_UserAssign(yr2452_SymPath(Y_DEFP(F.v9374)), Y_DEFP(F.v9368), Y_DEFI(F.v9376), Y_DEFP(F.v9370), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
if ((!(Y_DEFI(F.v9378) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v9378));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_tname), y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2994_Store(yr2452_SymPath(Y_DEFP(F.v9374)), Y_DEFP(F.v9368), Y_DEFI(F.v9376), Y_DEFP(F.v9370), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
}
}
if ((Y_DEFI(F.v9366) == v639)) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_c), &F.v9380, &F.v9382);
if ((Y_DEFI(F.v9380) && yr2477_IsDiscrete(Y_DEFP(F.v9368)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_mval = Y_DEFI(F.v9382);
}
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_a) == ((void *)0)))) {
yr3651_AtLocation(Y_DEFP(F.v9374), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_a));
}
yr2425_Define(Y_DEFP(F.v9374), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_line));
F.v9372 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_next);
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9366) == v651)) {
F.v9368 = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name), 0);
yr2567_CheckRepresented(Y_DEFP(F.v9368), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
F.v9374 = yr2323_NewSym(v867, Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_rep = Y_DEFP(F.v9368);
yr2425_Define(Y_DEFP(F.v9374), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
yr2731_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name), Y_DEFP(F.v9368));
yr3644_NoteAlphabet(F.p3639, Y_DEFP(F.v9368));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9366) == v648)) {
F.v9368 = yr2708_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name), 1);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_b)))).f_kind) == v672)) {
F.v9368 = yr2471_CopyRep(Y_DEFP(F.v9368));
((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_tid = yr2702_NewTid(Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name));
((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_tname = Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name);
if (((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_kind) == v810)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_b)))).f_a) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v9368)))).f_abstract = 1;
}
}
}
F.v9374 = yr2323_NewSym(v870, Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_rep = Y_DEFP(F.v9368);
yr2425_Define(Y_DEFP(F.v9374), Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line));
yr2731_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_name), Y_DEFP(F.v9368));
yr3644_NoteAlphabet(F.p3639, Y_DEFP(F.v9368));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9366) == v645)) {
F.v9372 = Y_DEFP(((*(yR105 *)y_deref(F.p3639))).f_a);
while ((!(Y_DEFP(F.v9372) == ((void *)0)))) {
Y_TICK();
F.v9374 = yr2323_NewSym(v888, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9374)))).f_cname = yr1200_Fresh(y_str("lab", 3));
yr2425_Define(Y_DEFP(F.v9374), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_line));
F.v9372 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9372)))).f_next);
}
y_use = F.yu; return;
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3639))).f_line), y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3644_NoteAlphabet(void * a_p3645, void * a_p3646) {
struct yf3647 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3645 = a_p3645;
F.p3646 = a_p3646;
F.v9406 = Y_UNDEF_P;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3646))).f_kind) == v819)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3645))).f_b)))).f_kind) == v678)))) {
F.v9406 = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3645))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9406)))).f_name = Y_DEFI(((*(yR105 *)y_deref(F.p3645))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v9406)))).f_rep = F.p3646;
((*(yR105 *)y_deref(Y_DEFP(F.v9406)))).f_next = Y_DEFP(v1516);
v1516 = Y_DEFP(F.v9406);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3651_AtLocation(void * a_p3652, void * a_p3653) {
struct yf3654 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3652 = a_p3652;
F.p3653 = a_p3653;
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3652))).f_rep)))).f_kind) == v837)) {
yr3867_DeviceSignal(F.p3652, F.p3653);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3658_Defer(void * a_p3659, rt_int a_p3660, void * a_p3661, rt_int a_p3662) {
struct yf3663 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3659 = a_p3659;
F.p3660 = a_p3660;
F.p3661 = a_p3661;
F.p3662 = a_p3662;
F.v9416 = Y_UNDEF_I;
F.v9416 = Y_DEFI(v1273);
if ((Y_DEFI(v1861) >= INT64_C(20000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_line), y_str("too many routines for this implementation", 41));
}
v1861 = y_range(y_add(Y_DEFI(v1861), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1769).p)[y_ix1(v1769, Y_DEFI(v1861))] = F.p3659;
((rt_int *)(v1780).p)[y_ix1(v1780, Y_DEFI(v1861))] = F.p3660;
((rt_int *)(v1791).p)[y_ix1(v1791, Y_DEFI(v1861))] = Y_DEFI(v1276);
((void * *)(v1802).p)[y_ix1(v1802, Y_DEFI(v1861))] = Y_DEFP(v1867);
((void * *)(v1813).p)[y_ix1(v1813, Y_DEFI(v1861))] = F.p3661;
((rt_int *)(v1824).p)[y_ix1(v1824, Y_DEFI(v1861))] = F.p3662;
((rt_int *)(v1835).p)[y_ix1(v1835, Y_DEFI(v1861))] = Y_DEFI(v1686);
while (Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9416))])))).f_closed)) {
Y_TICK();
F.v9416 = y_range(y_sub(Y_DEFI(F.v9416), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1846).p)[y_ix1(v1846, Y_DEFI(v1861))] = y_range(y_add(Y_DEFI(v1864), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1848).p)[y_ix1(v1848, Y_DEFI(v1861))] = y_range(y_sub(Y_DEFI(v1273), Y_DEFI(F.v9416)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9429 = y_add(Y_DEFI(F.v9416), INT64_C(1));
F.hi9430 = Y_DEFI(v1273);
{ rt_int hi9434 = F.hi9430;
for (rt_int i9433 = F.lo9429; i9433 <= hi9434; i9433++) { F.c_9432 = i9433; Y_TICK();
v1864 = y_range(y_add(Y_DEFI(v1864), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1859).p)[y_ix1(v1859, Y_DEFI(v1864))] = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, F.c_9432)]);
if (i9433 == hi9434) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3667_RunDeferred(rt_int a_p3668, rt_int a_p3669) {
struct yf3670 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3668 = a_p3668;
F.p3669 = a_p3669;
F.v9441 = Y_UNDEF_I;
F.v9441 = y_range(y_add(F.p3668, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9445 = Y_UNDEF_I;
F.v9447 = Y_UNDEF_I;
F.v9449 = Y_UNDEF_P;
while ((Y_DEFI(F.v9441) <= Y_DEFI(v1861))) {
Y_TICK();
F.lo9454 = Y_DEFI(((rt_int *)(v1846).p)[y_ix1(v1846, Y_DEFI(F.v9441))]);
F.hi9455 = y_sub((y_add(Y_DEFI(((rt_int *)(v1846).p)[y_ix1(v1846, Y_DEFI(F.v9441))]), Y_DEFI(((rt_int *)(v1848).p)[y_ix1(v1848, Y_DEFI(F.v9441))]))), INT64_C(1));
{ rt_int hi9459 = F.hi9455;
for (rt_int i9458 = F.lo9454; i9458 <= hi9459; i9458++) { F.c_9457 = i9458; Y_TICK();
yr2336_ReopenScope(Y_DEFP(((void * *)(v1859).p)[y_ix1(v1859, F.c_9457)]));
if (i9458 == hi9459) break;
}}
F.v9445 = Y_DEFI(v1276);
F.v9449 = Y_DEFP(v1867);
F.v9447 = Y_DEFI(v1686);
v1276 = Y_DEFI(((rt_int *)(v1791).p)[y_ix1(v1791, Y_DEFI(F.v9441))]);
v1867 = Y_DEFP(((void * *)(v1802).p)[y_ix1(v1802, Y_DEFI(F.v9441))]);
v1686 = Y_DEFI(((rt_int *)(v1835).p)[y_ix1(v1835, Y_DEFI(F.v9441))]);
if ((Y_DEFI(((rt_int *)(v1780).p)[y_ix1(v1780, Y_DEFI(F.v9441))]) == INT64_C(1))) {
yr3607_RoutineBody(Y_DEFP(((void * *)(v1769).p)[y_ix1(v1769, Y_DEFI(F.v9441))]));
} else {
yr3674_ModuleInit(Y_DEFI(F.v9441));
}
v1276 = Y_DEFI(F.v9445);
v1867 = Y_DEFP(F.v9449);
v1686 = Y_DEFI(F.v9447);
F.lo9464 = INT64_C(1);
F.hi9465 = Y_DEFI(((rt_int *)(v1848).p)[y_ix1(v1848, Y_DEFI(F.v9441))]);
{ rt_int hi9469 = F.hi9465;
for (rt_int i9468 = F.lo9464; i9468 <= hi9469; i9468++) { F.c_9467 = i9468; Y_TICK();
yr2342_CloseScope();
if (i9468 == hi9469) break;
}}
F.v9441 = y_range(y_add(Y_DEFI(F.v9441), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1861 = F.p3668;
v1864 = F.p3669;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3674_ModuleInit(rt_int a_p3675) {
struct yf3676 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3675 = a_p3675;
F.v9475 = Y_UNDEF_P;
F.v9475 = Y_DEFP(((void * *)(v1769).p)[y_ix1(v1769, F.p3675)]);
y_initu(&yd_141, &F.v9477);
F.v9477 = v996;
F.v9479 = Y_UNDEF_P;
F.v9479 = Y_DEFP(((void * *)(v1813).p)[y_ix1(v1813, F.p3675)]);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (Y_DEFI(((rt_int *)(v1824).p)[y_ix1(v1824, F.p3675)])) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3830_MonitorPath(Y_DEFP(v1867)), yr1061_T(y_str(");", 2))));
}
v1604 = y_range(y_add(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1604))] = INT64_C(0);
((rt_int *)(v1602).p)[y_ix1(v1602, Y_DEFI(v1604))] = INT64_C(0);
yr3358_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9475)))).f_c));
v1604 = y_range(y_sub(Y_DEFI(v1604), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (Y_DEFI(((rt_int *)(v1824).p)[y_ix1(v1824, F.p3675)])) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3830_MonitorPath(Y_DEFP(v1867)), yr1061_T(y_str(");", 2))));
}
if ((!(Y_DEFP((v996).f_head) == ((void *)0)))) {
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_next = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v9479)))).f_next);
((*(yR135 *)y_deref(Y_DEFP(F.v9479)))).f_next = Y_DEFP((v996).f_head);
if ((Y_DEFP((F.v9477).f_tail) == Y_DEFP(F.v9479))) {
(F.v9477).f_tail = Y_DEFP((v996).f_tail);
}
}
v996 = F.v9477;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3680_Declarations(void * a_p3681) {
struct yf3682 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3681 = a_p3681;
F.v9493 = Y_UNDEF_P;
F.v9493 = F.p3681;
F.v9495 = Y_UNDEF_P;
F.v9495 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
F.v9497 = Y_UNDEF_I;
F.v9497 = Y_DEFI(v1861);
F.v9499 = Y_UNDEF_I;
F.v9499 = Y_DEFI(v1864);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = F.p3681;
while ((!(Y_DEFP(F.v9493) == ((void *)0)))) {
Y_TICK();
v1000 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_line);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = Y_DEFP(F.v9493);
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_kind) == v666)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_sym) == ((void *)0))) {
yr3686_DeclareRoutine(Y_DEFP(F.v9493));
}
} else if (((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_kind) == v624))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_ival) == INT64_C(0))) {
yr3788_CompileModule(Y_DEFP(F.v9493));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_kind) == v660)) {
yr3794_DeclareTemplate(Y_DEFP(F.v9493));
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_kind) == v663)) {
yr3800_Instantiate(Y_DEFP(F.v9493));
} else {
yr3638_SimpleDecl(Y_DEFP(F.v9493));
}
F.v9493 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9493)))).f_next);
}
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(F.v9495);
yr2738_CheckPending();
yr3751_ResolveLater(Y_DEFI(v1273));
if ((!Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_closed))) {
yr3667_RunDeferred(Y_DEFI(F.v9497), Y_DEFI(F.v9499));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3686_DeclareRoutine(void * a_p3687) {
struct yf3688 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3687 = a_p3687;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3687))).f_kind) == v654)) {
yr3593_RoutineHeader(F.p3687, v876);
} else {
yr3593_RoutineHeader(F.p3687, v885);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3687))).f_kind) == v666)) {
yr3806_DeclareProcess(F.p3687);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3687))).f_sym)))).f_hasmv))) {
yr3658_Defer(F.p3687, INT64_C(1), ((void *)0), 0);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3692_Alias(rt_int a_p3693, void * a_p3694) {
struct yf3695 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3693 = a_p3693;
F.p3694 = a_p3694;
F.v9509 = Y_UNDEF_P;
F.v9509 = yr2323_NewSym(v894, F.p3693);
((*(yR125 *)y_deref(Y_DEFP(F.v9509)))).f_target = F.p3694;
((*(yR125 *)y_deref(Y_DEFP(F.v9509)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3694))).f_readonly);
{ void * rv9510 = Y_DEFP(F.v9509);
y_use = F.yu; return rv9510; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3699_AddLits(void * * a_p3700, void * a_p3701, rt_int a_p3702) {
struct yf3703 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3700 = a_p3700;
F.p3701 = a_p3701;
F.p3702 = a_p3702;
F.v9516 = Y_UNDEF_P;
F.v9518 = Y_UNDEF_P;
F.v9520 = Y_UNDEF_P;
if ((((F.p3702 > INT64_C(8))) || Y_DEFI(((*(yR110 *)y_deref(F.p3701))).f_opaque))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3701))).f_kind) == v816)) {
F.v9516 = Y_DEFP(((*(yR110 *)y_deref(F.p3701))).f_lits);
while ((!(Y_DEFP(F.v9516) == ((void *)0)))) {
Y_TICK();
F.v9518 = yr2418_FindLit(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9516)))).f_name), F.p3701);
if ((!(Y_DEFP(F.v9518) == ((void *)0)))) {
F.v9518 = yr3692_Alias(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9516)))).f_name), Y_DEFP(F.v9518));
((*(yR125 *)y_deref(Y_DEFP(F.v9518)))).f_mnext = Y_DEFP((*F.p3700));
(*F.p3700) = Y_DEFP(F.v9518);
}
F.v9516 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9516)))).f_next);
}
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3701))).f_kind) == v825)) {
F.v9520 = Y_DEFP(((*(yR110 *)y_deref(F.p3701))).f_fields);
while ((!(Y_DEFP(F.v9520) == ((void *)0)))) {
Y_TICK();
yr3699_AddLits(&(*F.p3700), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9520)))).f_rep), y_range(y_add(F.p3702, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9520 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9520)))).f_next);
}
} else if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3701))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3701))).f_kind) == v834))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3701))).f_kind) == v831)))) {
yr3699_AddLits(&(*F.p3700), Y_DEFP(((*(yR110 *)y_deref(F.p3701))).f_elem), y_range(y_add(F.p3702, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3707_Provides(void * a_p3708, rt_int a_p3709) {
struct yf3710 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3708 = a_p3708;
F.p3709 = a_p3709;
F.v9530 = Y_UNDEF_P;
F.v9530 = Y_DEFP(((*(yR105 *)y_deref(F.p3708))).f_b);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3708))).f_name) == F.p3709)) {
{ rt_int rv9532 = 1;
y_use = F.yu; return rv9532; }
}
while ((!(Y_DEFP(F.v9530) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9530)))).f_ival) == INT64_C(0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9530)))).f_ival) == F.p3709)))) {
{ rt_int rv9535 = 1;
y_use = F.yu; return rv9535; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9530)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9530)))).f_name) == F.p3709)))) {
{ rt_int rv9538 = 1;
y_use = F.yu; return rv9538; }
}
F.v9530 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9530)))).f_next);
}
{ rt_int rv9540 = 0;
y_use = F.yu; return rv9540; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3714_ImportLater(rt_int a_p3715, rt_int a_p3716, void * * a_p3717) {
struct yf3718 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3715 = a_p3715;
F.p3716 = a_p3716;
F.p3717_o = a_p3717;
F.v9546 = Y_UNDEF_P;
F.p3717 = ((void *)0);
if ((Y_DEFI(v1273) < INT64_C(0))) {
{ rt_int rv9549 = INT64_C(0);
(*F.p3717_o) = F.p3717;
y_use = F.yu; return rv9549; }
}
F.v9546 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9546) == ((void *)0)))) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_kind) == v624)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_ival) == INT64_C(2))))) && yr3707_Provides(Y_DEFP(F.v9546), F.p3715))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_ival) == INT64_C(1))) {
F.p3717 = Y_DEFP(F.v9546);
{ rt_int rv9553 = INT64_C(2);
(*F.p3717_o) = F.p3717;
y_use = F.yu; return rv9553; }
}
yr3788_CompileModule(Y_DEFP(F.v9546));
{ rt_int rv9555 = INT64_C(1);
(*F.p3717_o) = F.p3717;
y_use = F.yu; return rv9555; }
}
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_kind) == v666)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_name) == F.p3715)))) {
{ rt_int rv9557 = INT64_C(3);
(*F.p3717_o) = F.p3717;
y_use = F.yu; return rv9557; }
}
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_kind) == v624))) && yr2385_DeclaredFrom(yr3722_OneDecl(Y_DEFP(F.v9546)), F.p3715))) {
yr1186_FailN(F.p3716, F.p3715, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v9546 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9546)))).f_next);
}
{ rt_int rv9560 = INT64_C(0);
(*F.p3717_o) = F.p3717;
y_use = F.yu; return rv9560; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3722_OneDecl(void * a_p3723) {
struct yf3724 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3723 = a_p3723;
F.v9564 = Y_UNDEF_P;
({ F.v9564 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v9564)); });
(*(yR105 *)y_deref(Y_DEFP(F.v9564))) = (*(yR105 *)y_deref(F.p3723));
((*(yR105 *)y_deref(Y_DEFP(F.v9564)))).f_next = ((void *)0);
{ void * rv9565 = Y_DEFP(F.v9564);
y_use = F.yu; return rv9565; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3728_Lazy(rt_int a_p3729, rt_int a_p3730, void * a_p3731, rt_int a_p3732) {
struct yf3733 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3729 = a_p3729;
F.p3730 = a_p3730;
F.p3731 = a_p3731;
F.p3732 = a_p3732;
F.v9572 = Y_UNDEF_P;
F.v9572 = yr2323_NewSym(v894, F.p3729);
if ((Y_DEFI(v1929) >= INT64_C(10000))) {
yr1178_FailS(F.p3732, y_str("too many imports translated later", 33));
}
v1929 = y_range(y_add(Y_DEFI(v1929), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1892).p)[y_ix1(v1892, Y_DEFI(v1929))] = Y_DEFP(F.v9572);
((rt_int *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1929))] = F.p3730;
((void * *)(v1914).p)[y_ix1(v1914, Y_DEFI(v1929))] = F.p3731;
((rt_int *)(v1925).p)[y_ix1(v1925, Y_DEFI(v1929))] = Y_DEFI(v1273);
((rt_int *)(v1927).p)[y_ix1(v1927, Y_DEFI(v1929))] = F.p3732;
{ void * rv9577 = Y_DEFP(F.v9572);
y_use = F.yu; return rv9577; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3737_SetLazy(rt_int a_p3738, void * a_p3739) {
struct yf3740 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3738 = a_p3738;
F.p3739 = a_p3739;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1892).p)[y_ix1(v1892, F.p3738)])))).f_target = F.p3739;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1892).p)[y_ix1(v1892, F.p3738)])))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3739))).f_readonly);
((void * *)(v1892).p)[y_ix1(v1892, F.p3738)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3744_ResolveFrom(void * a_p3745, void * a_p3746) {
struct yf3747 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3745 = a_p3745;
F.p3746 = a_p3746;
F.v9585 = Y_UNDEF_P;
F.lo9589 = INT64_C(1);
F.hi9590 = Y_DEFI(v1929);
{ rt_int hi9594 = F.hi9590;
for (rt_int i9593 = F.lo9589; i9593 <= hi9594; i9593++) { F.c_9592 = i9593; Y_TICK();
if ((((!(Y_DEFP(((void * *)(v1892).p)[y_ix1(v1892, F.c_9592)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1914).p)[y_ix1(v1914, F.c_9592)]) == F.p3745)))) {
F.v9585 = Y_DEFP(((*(yR125 *)y_deref(F.p3746))).f_members);
while ((((!(Y_DEFP(F.v9585) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9585)))).f_name) == Y_DEFI(((rt_int *)(v1903).p)[y_ix1(v1903, F.c_9592)])))))) {
Y_TICK();
F.v9585 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9585)))).f_mnext);
}
if ((Y_DEFP(F.v9585) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1927).p)[y_ix1(v1927, F.c_9592)]), Y_DEFI(((rt_int *)(v1903).p)[y_ix1(v1903, F.c_9592)]), y_str(" is not exported by that module", 31));
}
yr3737_SetLazy(y_range(F.c_9592, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9585));
}
if (i9593 == hi9594) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3751_ResolveLater(rt_int a_p3752) {
struct yf3753 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3752 = a_p3752;
F.v9599 = Y_UNDEF_P;
F.lo9603 = INT64_C(1);
F.hi9604 = Y_DEFI(v1929);
{ rt_int hi9608 = F.hi9604;
for (rt_int i9607 = F.lo9603; i9607 <= hi9608; i9607++) { F.c_9606 = i9607; Y_TICK();
if (((((!(Y_DEFP(((void * *)(v1892).p)[y_ix1(v1892, F.c_9606)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1914).p)[y_ix1(v1914, F.c_9606)]) == ((void *)0)))) && ((Y_DEFI(((rt_int *)(v1925).p)[y_ix1(v1925, F.c_9606)]) == F.p3752)))) {
F.v9599 = yr2353_Find(Y_DEFI(((rt_int *)(v1903).p)[y_ix1(v1903, F.c_9606)]));
if ((Y_DEFP(F.v9599) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1927).p)[y_ix1(v1927, F.c_9606)]), Y_DEFI(((rt_int *)(v1903).p)[y_ix1(v1903, F.c_9606)]), y_str(" is not declared around this module (X.B.2)", 43));
}
yr3737_SetLazy(y_range(F.c_9606, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9599));
}
if (i9607 == hi9608) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3757_LazyModule(void * a_p3758, void * * a_p3759, rt_int a_p3760) {
struct yf3761 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3758 = a_p3758;
F.p3759 = a_p3759;
F.p3760 = a_p3760;
F.v9615 = Y_UNDEF_P;
F.v9615 = Y_DEFP(((*(yR105 *)y_deref(F.p3758))).f_b);
F.v9617 = Y_UNDEF_P;
F.v9619 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9615) == ((void *)0)))) {
Y_TICK();
F.v9619 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9615)))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9615)))).f_ival) == INT64_C(0)))) {
F.v9619 = y_range(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9615)))).f_ival), INT64_C(0), INT64_C(4000000));
}
if (((((!(Y_DEFI(F.v9619) == v531))) && ((!(Y_DEFI(F.v9619) == v585)))) && ((!(Y_DEFI(F.v9619) == v570))))) {
F.v9617 = yr3728_Lazy(Y_DEFI(F.v9619), Y_DEFI(F.v9619), F.p3758, F.p3760);
((*(yR125 *)y_deref(Y_DEFP(F.v9617)))).f_mnext = Y_DEFP((*F.p3759));
(*F.p3759) = Y_DEFP(F.v9617);
}
F.v9615 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9615)))).f_next);
}
F.v9617 = yr3728_Lazy(Y_DEFI(((*(yR105 *)y_deref(F.p3758))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3758))).f_name), ((void *)0), F.p3760);
((*(yR125 *)y_deref(Y_DEFP(F.v9617)))).f_mnext = Y_DEFP((*F.p3759));
(*F.p3759) = Y_DEFP(F.v9617);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3765_ResolveItem(void * a_p3766, void * * a_p3767, rt_int a_p3768) {
struct yf3769 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3766 = a_p3766;
F.p3767 = a_p3767;
F.p3768 = a_p3768;
F.v9626 = Y_UNDEF_P;
F.v9628 = Y_UNDEF_P;
F.v9630 = Y_UNDEF_P;
F.v9632 = Y_UNDEF_I;
F.v9634 = Y_UNDEF_P;
F.v9636 = Y_UNDEF_I;
F.v9636 = Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_flag);
F.v9638 = Y_UNDEF_I;
F.v9640 = Y_UNDEF_P;
if (((F.p3768 && ((Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text) == INT64_C(0)))) && (((((Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name) == v531)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name) == v585))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name) == v570)))))) {
if ((yr2359_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name)) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v9632 = Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_ival) == INT64_C(0)))) {
F.v9632 = y_range(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_ival), INT64_C(0), INT64_C(4000000));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text) == INT64_C(0)))) {
if ((((!F.p3768)) && ((yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text)) == ((void *)0))))) {
F.v9638 = yr3714_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), &F.v9640);
if ((Y_DEFI(F.v9638) == INT64_C(2))) {
F.v9630 = yr3728_Lazy(Y_DEFI(F.v9632), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), Y_DEFP(F.v9640), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_mnext = Y_DEFP((*F.p3767));
(*F.p3767) = Y_DEFP(F.v9630);
y_use = F.yu; return;
}
}
F.v9628 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line)));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v879))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text), y_str(" is not a module", 16));
}
F.v9626 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_members);
while ((((!(Y_DEFP(F.v9626) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name)))))) {
Y_TICK();
F.v9626 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_mnext);
}
if ((Y_DEFP(F.v9626) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), y_str(" is not exported by that module", 31));
}
} else {
if (F.p3768) {
F.v9626 = yr2359_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name));
} else {
F.v9626 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name));
}
if ((((Y_DEFP(F.v9626) == ((void *)0))) && (!F.p3768))) {
F.v9638 = yr3714_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), &F.v9640);
if ((((Y_DEFI(F.v9638) == INT64_C(2))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9640)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name))))) {
if ((((!(Y_DEFI(F.v9636) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3757_LazyModule(Y_DEFP(F.v9640), &(*F.p3767), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9638) >= INT64_C(2))) {
F.v9630 = yr3728_Lazy(Y_DEFI(F.v9632), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), Y_DEFP(F.v9640), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_mnext = Y_DEFP((*F.p3767));
(*F.p3767) = Y_DEFP(F.v9630);
y_use = F.yu; return;
}
F.v9626 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name));
}
if ((F.p3768 && ((!(Y_DEFP(F.v9626) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_mval) == INT64_C(1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((Y_DEFP(F.v9626) == ((void *)0))) {
if (F.p3768) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), y_str(" is not declared in this module", 31));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v9628 = yr2458_Real(Y_DEFP(F.v9626));
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v879)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_text) == INT64_C(0))))) {
if ((((!(Y_DEFI(F.v9636) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v9630 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_members);
while ((!(Y_DEFP(F.v9630) == ((void *)0)))) {
Y_TICK();
F.v9626 = yr3692_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_name), Y_DEFP(F.v9630));
((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_mnext = Y_DEFP((*F.p3767));
(*F.p3767) = Y_DEFP(F.v9626);
F.v9630 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_mnext);
}
if ((!F.p3768)) {
F.v9626 = yr3692_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_name), Y_DEFP(F.v9628));
((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_mnext = Y_DEFP((*F.p3767));
(*F.p3767) = Y_DEFP(F.v9626);
}
y_use = F.yu; return;
}
F.v9630 = yr3692_Alias(Y_DEFI(F.v9632), Y_DEFP(F.v9626));
if (F.p3768) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v870)))) {
if ((((Y_DEFI(F.v9636) == v429)) || ((Y_DEFI(F.v9636) == v483)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), y_str("READONLY and VAR are for variables", 34));
}
if ((((Y_DEFI(F.v9636) == v474)) && Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep)))).f_opaque))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(Y_DEFI(F.v9636) == v474))) || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep)))).f_opaque))) {
F.v9634 = yr2471_CopyRep(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(F.v9634)))).f_opaque = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v9634)))).f_opaqueops = Y_DEFI(v1880);
((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_target = yr2323_NewSym(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_target)))).f_rep = Y_DEFP(F.v9634);
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_target)))).f_decl = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_decl);
} else {
yr3699_AddLits(&(*F.p3767), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep), INT64_C(0));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v864)))) {
if ((((Y_DEFI(F.v9636) == v396)) || ((Y_DEFI(F.v9636) == v474)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((Y_DEFI(F.v9636) == v483)) && ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v864)) || Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_readonly))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_name), y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(Y_DEFI(F.v9636) == v483))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_readonly = 1;
}
} else if ((!(Y_DEFI(F.v9636) == INT64_C(0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v861)) && ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep)))).f_kind) == v837)) || yr2514_HoldsSignal(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3766))).f_line), y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_kind) == v870)))) {
yr3699_AddLits(&(*F.p3767), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9628)))).f_rep), INT64_C(0));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9630)))).f_mnext = Y_DEFP((*F.p3767));
(*F.p3767) = Y_DEFP(F.v9630);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3773_DefineAll(void * a_p3774, rt_int a_p3775) {
struct yf3776 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3774 = a_p3774;
F.p3775 = a_p3775;
F.v9675 = Y_UNDEF_P;
F.v9675 = F.p3774;
F.v9677 = Y_UNDEF_P;
F.v9677 = F.p3774;
F.v9679 = Y_UNDEF_P;
F.v9679 = F.p3774;
while ((!(Y_DEFP(F.v9675) == ((void *)0)))) {
Y_TICK();
F.v9677 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9675)))).f_mnext);
F.v9679 = yr2359_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9675)))).f_name));
if (((!yr2406_Resolved(Y_DEFP(F.v9675))) || ((((!(Y_DEFP(F.v9679) == ((void *)0)))) && (!yr2406_Resolved(Y_DEFP(F.v9679))))))) {
if ((!(Y_DEFP(F.v9679) == ((void *)0)))) {
yr1186_FailN(F.p3775, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9675)))).f_name), y_str(" comes into this scope twice", 28));
}
yr2425_Define(Y_DEFP(F.v9675), F.p3775);
} else if ((((Y_DEFP(F.v9679) == ((void *)0))) || ((!(yr2458_Real(Y_DEFP(F.v9679)) == yr2458_Real(Y_DEFP(F.v9675))))))) {
if (((((!(Y_DEFP(F.v9679) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v9675))))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v9679))))).f_kind) == v873)))) {
yr2425_Define(Y_DEFP(F.v9675), F.p3775);
} else if ((Y_DEFP(F.v9679) == ((void *)0))) {
yr2425_Define(Y_DEFP(F.v9675), F.p3775);
} else {
yr1186_FailN(F.p3775, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9675)))).f_name), y_str(" comes into this scope twice", 28));
}
}
F.v9675 = Y_DEFP(F.v9677);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3780_ExtendWith(void * a_p3781, void * a_p3782, rt_int a_p3783) {
struct yf3784 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3781 = a_p3781;
F.p3782 = a_p3782;
F.p3783 = a_p3783;
F.v9687 = Y_UNDEF_P;
F.v9687 = ((void *)0);
F.v9689 = Y_UNDEF_P;
F.v9689 = ((void *)0);
F.v9691 = Y_UNDEF_P;
F.v9691 = ((void *)0);
F.v9693 = Y_UNDEF_P;
F.v9693 = ((void *)0);
F.v9693 = F.p3781;
while ((!(Y_DEFP(F.v9693) == ((void *)0)))) {
Y_TICK();
if ((!(yr3600_SameSignature(Y_DEFP(F.v9693), F.p3782) == ((void *)0)))) {
yr1186_FailN(F.p3783, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9693)))).f_name), y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9693)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3782))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(F.p3783, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9693)))).f_name), y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v9691 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v9691)); });
(*(yR125 *)y_deref(Y_DEFP(F.v9691))) = (*(yR125 *)y_deref(Y_DEFP(F.v9693)));
((*(yR125 *)y_deref(Y_DEFP(F.v9691)))).f_target = Y_DEFP(F.v9693);
((*(yR125 *)y_deref(Y_DEFP(F.v9691)))).f_alt = ((void *)0);
if ((Y_DEFP(F.v9689) == ((void *)0))) {
F.v9687 = Y_DEFP(F.v9691);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9689)))).f_alt = Y_DEFP(F.v9691);
}
F.v9689 = Y_DEFP(F.v9691);
F.v9693 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9693)))).f_alt);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9689)))).f_alt = F.p3782;
{ void * rv9696 = Y_DEFP(F.v9687);
y_use = F.yu; return rv9696; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3788_CompileModule(void * a_p3789) {
struct yf3790 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3789 = a_p3789;
F.v9700 = Y_UNDEF_P;
F.v9702 = Y_UNDEF_P;
F.v9704 = Y_UNDEF_P;
F.v9706 = Y_UNDEF_P;
F.v9708 = Y_UNDEF_P;
F.v9710 = Y_UNDEF_P;
F.v9712 = Y_UNDEF_P;
F.v9714 = Y_UNDEF_P;
F.v9716 = Y_UNDEF_P;
F.v9718 = Y_UNDEF_I;
F.v9720 = Y_UNDEF_P;
F.v9722 = Y_UNDEF_P;
F.v9724 = Y_UNDEF_I;
F.v9726 = Y_UNDEF_I;
F.v9728 = Y_UNDEF_I;
F.v9728 = 0;
((*(yR105 *)y_deref(F.p3789))).f_ival = INT64_C(1);
F.v9718 = Y_DEFI(v1728);
F.v9700 = ((void *)0);
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(F.p3789))).f_a);
while ((!(Y_DEFP(F.v9720) == ((void *)0)))) {
Y_TICK();
yr3765_ResolveItem(Y_DEFP(F.v9720), &F.v9700, 0);
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_next);
}
F.v9710 = Y_DEFP(v1867);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_flag) == INT64_C(1))) && ((Y_DEFP(v1867) == ((void *)0))))) {
F.v9712 = yr2323_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9712)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9712)))).f_cname = yr1200_Fresh(y_str("mon", 3));
((*(yR125 *)y_deref(Y_DEFP(F.v9712)))).f_rep = Y_DEFP(v1348);
yr2445_DeclStorage(yr1061_T(y_str("ymon", 4)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9712)))).f_cname));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2432_Path(Y_DEFI(v1279), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9712)))).f_cname)), yr1061_T(y_str(");", 2))));
v1867 = Y_DEFP(F.v9712);
F.v9728 = 1;
}
yr2330_OpenScope(1);
v1728 = Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name);
if ((Y_DEFI(v1710) >= INT64_C(64))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line), y_str("modules nested too deeply", 25));
}
v1710 = y_range(y_add(Y_DEFI(v1710), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1722).p)[y_ix1(v1722, Y_DEFI(v1710))] = Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3789))).f_d) == ((void *)0)))) {
v1704 = y_range(y_add(Y_DEFI(v1704), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((Y_DEFI(v1710) == INT64_C(1))) && ((!(Y_DEFI(v1701) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name) == Y_DEFI(v1701))))) {
v1707 = y_range(y_add(Y_DEFI(v1707), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))] = ((void *)0);
F.v9724 = Y_DEFI(v1276);
v1276 = Y_DEFI(v1273);
F.v9704 = Y_DEFP(F.v9700);
while ((!(Y_DEFP(F.v9704) == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(Y_DEFP(F.v9704)))).f_mval = INT64_C(1);
F.v9704 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9704)))).f_mnext);
}
yr3773_DefineAll(Y_DEFP(F.v9700), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line));
yr3680_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3789))).f_c)))).f_a));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("/* ", 3)), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name), yr1061_T(y_str(" */", 3))));
if ((Y_DEFI(v1704) == INT64_C(0))) {
yr3658_Defer(F.p3789, INT64_C(2), Y_DEFP((v996).f_tail), Y_DEFI(F.v9728));
}
v1880 = INT64_C(0);
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(F.p3789))).f_b);
while ((!(Y_DEFP(F.v9720) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_text) == INT64_C(0))) && ((yr2359_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_name)) == ((void *)0))))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_name) == v531)) {
v1880 = y_range(y_add(Y_DEFI(v1880), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_name) == v585)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_name) == v570)))) {
if (((y_div(Y_DEFI(v1880), INT64_C(2))) == INT64_C(0))) {
v1880 = y_range(y_add(Y_DEFI(v1880), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_next);
}
F.v9702 = ((void *)0);
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(F.p3789))).f_b);
while ((!(Y_DEFP(F.v9720) == ((void *)0)))) {
Y_TICK();
yr3765_ResolveItem(Y_DEFP(F.v9720), &F.v9702, 1);
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9720)))).f_next);
}
F.v9722 = Y_DEFP(((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))]);
v1276 = Y_DEFI(F.v9724);
v1728 = Y_DEFI(F.v9718);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3789))).f_d) == ((void *)0)))) {
v1704 = y_range(y_sub(Y_DEFI(v1704), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((Y_DEFI(v1710) == INT64_C(1))) && ((!(Y_DEFI(v1701) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name) == Y_DEFI(v1701))))) {
v1707 = y_range(y_sub(Y_DEFI(v1707), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1710 = y_range(y_sub(Y_DEFI(v1710), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2342_CloseScope();
while ((!(Y_DEFP(F.v9722) == ((void *)0)))) {
Y_TICK();
F.v9720 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9722)))).f_next);
((*(yR105 *)y_deref(Y_DEFP(F.v9722)))).f_next = Y_DEFP(((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))]);
((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))] = Y_DEFP(F.v9722);
F.v9722 = Y_DEFP(F.v9720);
}
v1867 = Y_DEFP(F.v9710);
F.v9706 = yr2323_NewSym(v879, Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9706)))).f_members = Y_DEFP(F.v9702);
yr2425_Define(Y_DEFP(F.v9706), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line));
F.v9708 = Y_DEFP(F.v9702);
F.v9702 = ((void *)0);
while ((!(Y_DEFP(F.v9708) == ((void *)0)))) {
Y_TICK();
F.v9714 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_mnext);
F.v9704 = yr3692_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name), Y_DEFP(F.v9708));
((*(yR125 *)y_deref(Y_DEFP(F.v9704)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_readonly);
((*(yR125 *)y_deref(Y_DEFP(F.v9704)))).f_mnext = Y_DEFP(F.v9702);
F.v9702 = Y_DEFP(F.v9704);
F.v9708 = Y_DEFP(F.v9714);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9706)))).f_members = Y_DEFP(F.v9702);
((*(yR105 *)y_deref(F.p3789))).f_ival = INT64_C(2);
yr3744_ResolveFrom(F.p3789, Y_DEFP(F.v9706));
F.v9708 = Y_DEFP(F.v9702);
while ((!(Y_DEFP(F.v9708) == ((void *)0)))) {
Y_TICK();
F.v9714 = yr3692_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name), Y_DEFP(F.v9708));
((*(yR125 *)y_deref(Y_DEFP(F.v9714)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_readonly);
F.v9716 = yr2353_Find(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name));
if ((!(Y_DEFP(F.v9716) == ((void *)0)))) {
if ((!yr2406_Resolved(Y_DEFP(F.v9716)))) {
F.v9716 = ((void *)0);
} else {
F.v9716 = yr2458_Real(Y_DEFP(F.v9716));
}
}
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v9708))))).f_kind) == v876)) && ((!(Y_DEFP(F.v9716) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9716)))).f_kind) == v876)) {
F.v9714 = yr3780_ExtendWith(yr2458_Real(Y_DEFP(F.v9708)), Y_DEFP(F.v9716), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line));
}
}
if ((yr2359_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name)) == ((void *)0))) {
yr2425_Define(Y_DEFP(F.v9714), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line));
} else if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9714)))).f_kind) == v876)) {
yr2425_Define(Y_DEFP(F.v9714), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line));
} else if ((((Y_DEFI(((*(yR125 *)y_deref(yr2359_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name))))).f_kind) == v894)) && ((!(yr2458_Real(yr2359_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name))) == yr2458_Real(Y_DEFP(F.v9708))))))) {
yr2425_Define(Y_DEFP(F.v9714), Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line));
} else if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2458_Real(Y_DEFP(F.v9708))))).f_kind) == v873))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3789))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_name), y_str(" is exported into a scope that has it already", 45));
}
F.v9708 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9708)))).f_mnext);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3794_DeclareTemplate(void * a_p3795) {
struct yf3796 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3795 = a_p3795;
F.v9777 = Y_UNDEF_P;
F.v9777 = yr2323_NewSym(v882, Y_DEFI(((*(yR105 *)y_deref(F.p3795))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9777)))).f_decl = F.p3795;
yr2425_Define(Y_DEFP(F.v9777), Y_DEFI(((*(yR105 *)y_deref(F.p3795))).f_line));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3800_Instantiate(void * a_p3801) {
struct yf3802 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3801 = a_p3801;
F.v9781 = Y_UNDEF_P;
F.v9781 = yr2458_Real(yr2365_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_line)));
F.v9783 = Y_UNDEF_P;
F.v9785 = Y_UNDEF_P;
F.v9787 = Y_UNDEF_P;
F.v9789 = Y_UNDEF_I;
F.v9791 = Y_UNDEF_I;
F.v9793 = Y_UNDEF_I;
F.v9795 = Y_UNDEF_I;
F.v9797 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9781)))).f_kind) == v882))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_name), y_str(" is not a template", 18));
}
F.v9783 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9781)))).f_decl);
if ((!(yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9783)))).f_a)) == yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3801))).f_a))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_name), y_str(": the number of actuals is wrong", 32));
}
F.v9789 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9805 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9783)))).f_ival);
F.hi9806 = y_sub(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9783)))).f_flag), INT64_C(1));
{ rt_int hi9810 = F.hi9806;
for (rt_int i9809 = F.lo9805; i9809 <= hi9810; i9809++) { F.c_9808 = i9809; Y_TICK();
F.v9793 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.c_9808)]);
F.v9795 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.c_9808)]);
if ((Y_DEFI(F.v9793) == v207)) {
F.v9785 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9783)))).f_a);
F.v9787 = Y_DEFP(((*(yR105 *)y_deref(F.p3801))).f_a);
while ((!(Y_DEFP(F.v9785) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9785)))).f_name) == Y_DEFI(F.v9795))) && ((Y_DEFI(F.v9793) == v207)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9787)))).f_flag) == INT64_C(1))) {
F.v9793 = v216;
F.v9795 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9787)))).f_ival);
} else {
F.v9795 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9787)))).f_name);
if ((Y_DEFI(F.v9795) <= v492)) {
F.v9793 = v210;
} else if ((Y_DEFI(F.v9795) <= v621)) {
F.v9793 = v213;
}
}
}
F.v9785 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9785)))).f_next);
F.v9787 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9787)))).f_next);
}
}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = Y_DEFI(F.v9793);
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = Y_DEFI(F.v9795);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, F.c_9808)]);
if (i9809 == hi9810) break;
}}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = v204;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = INT64_C(0);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((*(yR105 *)y_deref(F.p3801))).f_line);
F.v9791 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v9789);
F.v9797 = yr2109_ParseModule();
v1249 = Y_DEFI(F.v9791);
yr3788_CompileModule(Y_DEFP(F.v9797));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3806_DeclareProcess(void * a_p3807) {
struct yf3808 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3807 = a_p3807;
F.v9820 = Y_UNDEF_P;
F.v9820 = Y_DEFP(((*(yR105 *)y_deref(F.p3807))).f_sym);
F.v9822 = Y_UNDEF_P;
((*(yR125 *)y_deref(Y_DEFP(F.v9820)))).f_monitor = Y_DEFP(v1867);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9820)))).f_hasmv)) {
y_use = F.yu; return;
}
yr2445_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9820)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0)));
yr4138_SegActivation(Y_DEFP(F.v9820), F.p3807);
F.v9822 = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3807))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9822)))).f_sym = Y_DEFP(F.v9820);
((*(yR105 *)y_deref(Y_DEFP(F.v9822)))).f_next = Y_DEFP(((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))]);
((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))] = Y_DEFP(F.v9822);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3812_AwaitProcesses(void) {
struct yf3813 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9828 = Y_UNDEF_P;
F.v9828 = Y_DEFP(((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9828) == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3453_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2432_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9828)))).f_sym)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9828)))).f_sym)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
F.v9828 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9828)))).f_next);
}
((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3817_Activate(void * a_p3818, void * a_p3819) {
struct yf3820 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3818 = a_p3818;
F.p3819 = a_p3819;
F.v9839 = Y_UNDEF_I;
F.v9841 = Y_UNDEF_I;
F.v9843 = Y_UNDEF_I;
F.v9845 = Y_UNDEF_I;
F.v9847 = Y_UNDEF_I;
F.v9849 = Y_UNDEF_P;
F.v9851 = Y_UNDEF_I;
F.v9853 = Y_UNDEF_I;
F.v9855 = Y_UNDEF_P;
F.v9857 = Y_UNDEF_I;
F.v9859 = Y_UNDEF_I;
F.v9861 = Y_UNDEF_I;
F.v9863 = Y_UNDEF_I;
F.v9865 = Y_UNDEF_I;
F.v9867 = Y_UNDEF_I;
F.v9869 = Y_UNDEF_P;
F.v9869 = Y_DEFP(((*(yR125 *)y_deref(F.p3819))).f_decl);
F.v9871 = Y_UNDEF_P;
yr3202_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3818))).f_a), F.p3819, &F.v9839, &F.v9841);
if ((!(Y_DEFI(F.v9841) == Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_nparams)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3818))).f_line), Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3252_NoteCall(F.p3819, Y_DEFI(((*(yR105 *)y_deref(F.p3818))).f_line));
yr3541_CheckActuals(F.p3819, Y_DEFI(F.v9839), Y_DEFI(((*(yR105 *)y_deref(F.p3818))).f_line));
F.v9857 = yr1200_Fresh(y_str("pf", 2));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("{ struct ", 9)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3819))).f_members)))).f_name), yr3453_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v9857), yr3453_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), Y_DEFI(F.v9857), yr1061_T(y_str(");", 2))))));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_level) > INT64_C(1))) {
yr1132_Emit(yr3453_Join(Y_DEFI(F.v9857), yr1061_T(y_str("->up = ", 7)), yr3453_Join(yr2439_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9855 = Y_DEFP(((*(yR125 *)y_deref(F.p3819))).f_params);
F.v9843 = y_range(y_add(Y_DEFI(F.v9839), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v9855) == ((void *)0)))) {
Y_TICK();
if ((!yr3181_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))])))) {
yr2551_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))]));
}
F.v9863 = yr3453_Join(Y_DEFI(F.v9857), yr1061_T(y_str("->", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_cname));
yr3211_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep)))).f_kind) == v855)) {
yr1132_Emit(yr3453_Join(Y_DEFI(F.v9863), yr1061_T(y_str(" = ", 3)), yr3453_Join(yr2850_SpaceArg(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9843))]), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_cls) == v903)) {
if ((!yr3004_IsVariable(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_name), y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr3219_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3508_NoteWrite(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))]));
yr3491_DesigBase(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))]), &F.v9849, &F.v9851, &F.v9853);
if ((((!(Y_DEFP(F.v9849) == ((void *)0)))) && (!Y_DEFI(F.v9851)))) {
if ((yr3824_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9849)))).f_depth)) > yr3824_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9849)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1132_Emit(yr3453_Join(Y_DEFI(F.v9863), yr1061_T(y_str(" = &", 4)), yr3453_Join(yr3078_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9843))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9843))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2501_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep))) {
F.v9859 = yr1200_Fresh(y_str("t", 1));
yr1132_Emit(yr3453_Join(yr1061_T(y_str("{ ", 2)), yr2526_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep)), yr3453_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v9859), yr3453_Join(yr1061_T(y_str(" = ", 3)), yr2976_Convert(Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9843))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))])), yr1061_T(y_str(";", 1))))));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep)))).f_elem)), yr3453_Join(yr1061_T(y_str("), &", 4)), Y_DEFI(F.v9863), yr3453_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9859), yr1061_T(y_str("); }", 4))))));
} else {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_copy(", 7)), yr2532_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep)), yr3453_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9863), yr3453_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9859), yr1061_T(y_str("); }", 4))))));
}
} else {
yr1132_Emit(yr3453_Join(Y_DEFI(F.v9863), yr1061_T(y_str(" = ", 3)), yr3453_Join(yr2976_Convert(Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9843))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9843))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9843 = y_range(y_add(Y_DEFI(F.v9843), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9855 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9855)))).f_next);
}
v1551 = Y_DEFI(F.v9839);
F.v9865 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_e) == ((void *)0)))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_e), Y_DEFP(v1342), &F.v9865, &F.v9871);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v9871));
}
F.v9867 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_d) == ((void *)0)))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_d), Y_DEFP(v1342), &F.v9861, &F.v9871);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v9871));
F.v9867 = yr3453_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v9861), INT64_C(0));
}
F.v9845 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_x) == ((void *)0)))) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_x), &F.v9847, &F.v9845);
if (((!Y_DEFI(F.v9847)) || ((Y_DEFI(F.v9845) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9869)))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(yr2432_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9865));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9867));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v9845));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3819))).f_cname));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9857));
yr1037_SA(y_str("); }", 4));
F.v9859 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9859));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3824_LifeDepth(rt_int a_p3825) {
struct yf3826 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3825 = a_p3825;
F.v9935 = Y_UNDEF_I;
F.v9935 = F.p3825;
while ((((Y_DEFI(F.v9935) > INT64_C(1))) && Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9935))])))).f_closed))) {
Y_TICK();
F.v9935 = y_range(y_sub(Y_DEFI(F.v9935), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv9939 = Y_DEFI(F.v9935);
y_use = F.yu; return rv9939; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3830_MonitorPath(void * a_p3831) {
struct yf3832 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3831 = a_p3831;
{ rt_int rv9944 = yr3453_Join(yr1061_T(y_str("&", 1)), yr2432_Path(Y_DEFI(((*(yR125 *)y_deref(F.p3831))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p3831))).f_cname)), INT64_C(0));
y_use = F.yu; return rv9944; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3836_EnterMonitor(void * a_p3837) {
struct yf3838 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3837 = a_p3837;
F.v9948 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3837))).f_kind) == v876)) {
((*(yR125 *)y_deref(F.p3837))).f_monitor = Y_DEFP(v1867);
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p3837))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3830_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3837))).f_monitor)), yr1061_T(y_str(");", 2))));
F.v9948 = yr1200_Fresh(y_str("mf", 2));
v1680 = 1;
yr1132_Emit(yr3453_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v9948), yr1061_T(y_str(";", 1))));
yr1026_SB();
yr1037_SA(y_str("if (!RT_TRY(", 12));
yr1044_ST(Y_DEFI(F.v9948));
yr1037_SA(y_str(")) { RT_POP(", 12));
yr1044_ST(Y_DEFI(F.v9948));
yr1037_SA(y_str("); ", 3));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3837))).f_kind) == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
}
yr1044_ST(yr3830_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3837))).f_monitor)));
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1132_Emit(yr1056_SE());
v1576 = y_range(y_add(Y_DEFI(v1576), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1563).p)[y_ix1(v1563, Y_DEFI(v1576))] = Y_DEFI(F.v9948);
((rt_int *)(v1574).p)[y_ix1(v1574, Y_DEFI(v1576))] = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3842_LeaveMonitor(void) {
struct yf3843 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFP(v1651) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_kind) == v885)) {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3830_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_monitor)), yr1061_T(y_str(");", 2))));
} else {
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3830_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_monitor)), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3847_TerminateStatement(void * a_p3848) {
struct yf3849 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3848 = a_p3848;
if ((((Y_DEFP(v1651) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1651)))).f_kind) == v885))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3848))).f_line), y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3812_AwaitProcesses();
yr3842_LeaveMonitor();
yr3341_PopTo(Y_DEFI(v1579));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3853_DeclareSignal(void * a_p3854, rt_int a_p3855) {
struct yf3856 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3854 = a_p3854;
F.p3855 = a_p3855;
if ((Y_DEFP(v1867) == ((void *)0))) {
yr1178_FailS(F.p3855, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR125 *)y_deref(F.p3854))).f_rep = yr2471_CopyRep(Y_DEFP(((*(yR125 *)y_deref(F.p3854))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3854))).f_rep)))).f_monitor = Y_DEFP(v1867);
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2452_SymPath(F.p3854), yr3453_Join(yr1061_T(y_str(", ", 2)), yr3830_MonitorPath(Y_DEFP(v1867)), yr1061_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3860_DeclareSignalArray(void * a_p3861, rt_int a_p3862) {
struct yf3863 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3861 = a_p3861;
F.p3862 = a_p3862;
if ((Y_DEFP(v1867) == ((void *)0))) {
yr1178_FailS(F.p3862, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1132_Emit(yr3453_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2532_DescOf(Y_DEFP(((*(yR125 *)y_deref(F.p3861))).f_rep)), yr3453_Join(yr1061_T(y_str(", &", 3)), yr2452_SymPath(F.p3861), yr3453_Join(yr1061_T(y_str(", ", 2)), yr3830_MonitorPath(Y_DEFP(v1867)), yr1061_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3867_DeviceSignal(void * a_p3868, void * a_p3869) {
struct yf3870 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3868 = a_p3868;
F.p3869 = a_p3869;
F.v9992 = Y_UNDEF_I;
F.v9994 = Y_UNDEF_I;
F.v9996 = Y_UNDEF_I;
yr2895_Manifest(F.p3869, &F.v9992, &F.v9994);
if ((!Y_DEFI(F.v9992))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3869))).f_line), y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1026_SB();
yr1037_SA(y_str("y_device(&", 10));
yr1044_ST(yr2452_SymPath(F.p3868));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v9994));
yr1037_SA(y_str(");", 2));
F.v9996 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9996));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3874_Arg(void * a_p3875, rt_int a_p3876) {
struct yf3877 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3875 = a_p3875;
F.p3876 = a_p3876;
F.v10005 = Y_UNDEF_P;
F.v10005 = Y_DEFP(((*(yR105 *)y_deref(F.p3875))).f_a);
F.v10007 = Y_UNDEF_I;
F.v10007 = INT64_C(1);
while ((((!(Y_DEFP(F.v10005) == ((void *)0)))) && ((Y_DEFI(F.v10007) < F.p3876)))) {
Y_TICK();
F.v10005 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10005)))).f_next);
F.v10007 = y_range(y_add(Y_DEFI(F.v10007), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(F.v10005) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(": too few actual parameters", 27));
}
{ void * rv10012 = Y_DEFP(F.v10005);
y_use = F.yu; return rv10012; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3881_NArgs(void * a_p3882, rt_int a_p3883) {
struct yf3884 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3882 = a_p3882;
F.p3883 = a_p3883;
if ((!(yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3882))).f_a)) == F.p3883))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3882))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3882))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3888_Call1(yarr a_p3890, rt_int a_p3891) {
struct yf3892 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3890 = a_p3890;
F.p3891 = a_p3891;
yr1026_SB();
yr1037_SA(F.p3890);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3891);
yr1037_SA(y_str(")", 1));
{ rt_int rv10022 = yr1056_SE();
y_use = F.yu; return rv10022; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3896_Addr(rt_int a_p3897) {
struct yf3898 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3897 = a_p3897;
{ rt_int rv10027 = yr3453_Join(yr1061_T(y_str("&", 1)), F.p3897, INT64_C(0));
y_use = F.yu; return rv10027; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3902_StdVar(void * a_p3903, rt_int a_p3904, rt_int * a_p3905, void * * a_p3906) {
struct yf3907 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3903 = a_p3903;
F.p3904 = a_p3904;
F.p3905_o = a_p3905;
F.p3906_o = a_p3906;
F.v10034 = Y_UNDEF_I;
yr3016_LValue(F.p3903, &F.p3905, &F.p3906);
yr3508_NoteWrite(F.p3903);
if ((((!(F.p3904 == v858))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3906)))).f_kind) == F.p3904))))) {
yr1026_SB();
yr1037_SA(y_str("a ", 2));
if ((F.p3904 == v831)) {
yr1037_SA(y_str("file", 4));
} else if ((F.p3904 == v837)) {
yr1037_SA(y_str("signal", 6));
} else if ((F.p3904 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3904 == v828)) {
yr1037_SA(y_str("pointer", 7));
} else {
yr1037_SA(y_str("variable", 8));
}
yr1037_SA(y_str(" is needed here", 15));
F.v10034 = yr1056_SE();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p3903))).f_line), Y_DEFI(F.v10034));
}
(*F.p3905_o) = F.p3905;
(*F.p3906_o) = F.p3906;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3911_NumArg(void * a_p3912, rt_int * a_p3913, void * * a_p3914) {
struct yf3915 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3912 = a_p3912;
F.p3913_o = a_p3913;
F.p3914_o = a_p3914;
yr3043_Expr(F.p3912, ((void *)0), &F.p3913, &F.p3914);
if ((!yr2483_IsNumeric(Y_DEFP(F.p3914)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3912))).f_line), y_str("a number is needed here", 23));
}
(*F.p3913_o) = F.p3913;
(*F.p3914_o) = F.p3914;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3919_IntArg(void * a_p3920) {
struct yf3921 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3920 = a_p3920;
F.v10050 = Y_UNDEF_I;
F.v10052 = Y_UNDEF_P;
yr3043_Expr(F.p3920, Y_DEFP(v1342), &F.v10050, &F.v10052);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10052)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3920))).f_line), y_str("an integer is needed here", 25));
}
{ rt_int rv10054 = Y_DEFI(F.v10050);
y_use = F.yu; return rv10054; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3925_CodeInsert(void * a_p3926) {
struct yf3927 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3926 = a_p3926;
F.v10058 = Y_UNDEF_P;
F.v10058 = yr3874_Arg(F.p3926, INT64_C(1));
F.v10061 = Y_UNDEF_I;
F.v10063 = Y_UNDEF_I;
F.v10065 = Y_UNDEF_I;
F.v10067 = Y_UNDEF_I;
F.v10069 = Y_UNDEF_I;
F.v10071 = Y_UNDEF_I;
F.v10073 = Y_UNDEF_B;
F.v10075 = Y_UNDEF_P;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_10084, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_10084, &F.v10086);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10058)))).f_kind) == v771))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3926))).f_line), y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v10061 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10058)))).f_text);
F.v10071 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10061))]);
yr1026_SB();
F.v10067 = INT64_C(1);
while ((Y_DEFI(F.v10067) <= Y_DEFI(F.v10071))) {
Y_TICK();
F.v10073 = yr1103_TChar(Y_DEFI(F.v10061), Y_DEFI(F.v10067));
if ((Y_DEFB(F.v10073) == 39)) {
F.v10069 = y_range(y_add(Y_DEFI(F.v10067), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v10069) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10061))]))) && ((!(yr1103_TChar(Y_DEFI(F.v10061), Y_DEFI(F.v10069)) == 39))))) {
Y_TICK();
F.v10069 = y_range(y_add(Y_DEFI(F.v10069), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v10069) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10061))]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3926))).f_line), y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v10063 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10061))]), Y_DEFI(F.v10067)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10069), Y_DEFI(F.v10067))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, yr2878_CharValue(Y_DEFP(v1346), Y_DEFI(F.v10063), Y_DEFI(((*(yR105 *)y_deref(F.p3926))).f_line)))]));
F.v10067 = y_range(y_add(Y_DEFI(F.v10069), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v10073) == 36)) {
F.v10069 = y_range(y_add(Y_DEFI(F.v10067), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v10069) <= Y_DEFI(F.v10071))) && ((yr1008_IsLetter(yr1103_TChar(Y_DEFI(F.v10061), Y_DEFI(F.v10069))) || yr1014_IsDigit(yr1103_TChar(Y_DEFI(F.v10061), Y_DEFI(F.v10069))))))) {
Y_TICK();
F.v10069 = y_range(y_add(Y_DEFI(F.v10069), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10063 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10061))]), Y_DEFI(F.v10067)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10069), Y_DEFI(F.v10067))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10075 = yr2353_Find(Y_DEFI(F.v10063));
if ((Y_DEFP(F.v10075) == ((void *)0))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3926))).f_line), Y_DEFI(F.v10063), y_str(" in a code insert is not declared here", 38));
}
F.v10075 = yr2458_Real(Y_DEFP(F.v10075));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10075)))).f_kind) == v861))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10075)))).f_kind) == v864))))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3926))).f_line), Y_DEFI(F.v10063), y_str(" in a code insert is not a variable or constant", 47));
}
yr1044_ST(yr3024_Paren(yr2452_SymPath(Y_DEFP(F.v10075))));
F.v10067 = Y_DEFI(F.v10069);
} else {
yr1031_SC(Y_DEFB(F.v10073));
F.v10067 = y_range(y_add(Y_DEFI(F.v10067), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v10065 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v10065));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3931_ManifestScale(void * a_p3932, void * a_p3933) {
struct yf3934 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3932 = a_p3932;
F.p3933 = a_p3933;
F.v10125 = Y_UNDEF_I;
F.v10127 = Y_UNDEF_I;
F.v10129 = Y_UNDEF_I;
F.v10131 = Y_UNDEF_P;
yr2961_ManifestFix(F.p3932, &F.v10125, &F.v10127, &F.v10129);
if (((!Y_DEFI(F.v10125)) || ((Y_DEFI(F.v10127) <= INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3933))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3933))).f_name), y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v10131 = yr2471_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.v10131)))).f_abstract = 0;
yr2673_SetScale(Y_DEFP(F.v10131), Y_DEFI(F.v10127), Y_DEFI(F.v10129));
{ void * rv10135 = Y_DEFP(F.v10131);
y_use = F.yu; return rv10135; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3938_StdCall(rt_int a_p3939, void * a_p3940, rt_int a_p3941, rt_int * a_p3942, void * * a_p3943) {
struct yf3944 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3939 = a_p3939;
F.p3940 = a_p3940;
F.p3941 = a_p3941;
F.p3942_o = a_p3942;
F.p3943_o = a_p3943;
F.v10143 = Y_UNDEF_P;
F.v10145 = Y_UNDEF_I;
F.v10147 = Y_UNDEF_I;
F.v10149 = Y_UNDEF_I;
F.v10151 = Y_UNDEF_I;
F.v10153 = Y_UNDEF_I;
F.v10155 = Y_UNDEF_P;
F.v10157 = Y_UNDEF_P;
F.v10159 = Y_UNDEF_P;
F.v10161 = Y_UNDEF_P;
F.v10163 = Y_UNDEF_I;
F.v10165 = Y_UNDEF_I;
F.v10167 = Y_UNDEF_I;
F.v10169 = Y_UNDEF_I;
F.v10171 = Y_UNDEF_P;
F.v10173 = Y_UNDEF_I;
F.p3943 = Y_DEFP(v1348);
F.p3942 = yr1061_T(y_str("((void)0)", 9));
F.v10173 = (((((((((((((((((F.p3939 == v1384)) || ((F.p3939 == v1387))) || ((F.p3939 == v1390))) || ((F.p3939 == v1393))) || ((F.p3939 == v1396))) || ((F.p3939 == v1402))) || ((F.p3939 == v1411))) || ((F.p3939 == v1417))) || ((F.p3939 == v1420))) || ((F.p3939 == v1444))) || ((F.p3939 == v1447))) || ((F.p3939 == v1456))) || ((F.p3939 == v1459))) || ((F.p3939 == v1462))) || ((F.p3939 == v1465))) || ((F.p3939 == v1474)));
if ((F.p3941 && (!Y_DEFI(F.v10173)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_name), y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3941) && Y_DEFI(F.v10173))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_name), y_str(" returns no value", 17));
}
if ((((F.p3939 == v1366)) || ((F.p3939 == v1369)))) {
yr3881_NArgs(F.p3940, INT64_C(2));
yr3043_Expr(yr3874_Arg(F.p3940, INT64_C(1)), ((void *)0), &F.v10145, &F.v10155);
if ((!yr2489_IsArrayLike(Y_DEFP(F.v10155)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_name), y_str(" of something that is not an array", 34));
}
F.v10147 = yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(2)));
yr2895_Manifest(yr3874_Arg(F.p3940, INT64_C(2)), &F.v10169, &F.v10167);
F.p3943 = yr3126_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(F.v10169) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v822)))) {
if ((((Y_DEFI(F.v10167) < INT64_C(1))) || ((Y_DEFI(F.v10167) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_nidx))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("no such dimension", 17));
}
F.v10161 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_idx);
F.lo10187 = INT64_C(2);
F.hi10188 = Y_DEFI(F.v10167);
{ rt_int hi10192 = F.hi10188;
for (rt_int i10191 = F.lo10187; i10191 <= hi10192; i10191++) { F.c_10190 = i10191; Y_TICK();
F.v10161 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10161)))).f_link);
if (i10191 == hi10192) break;
}}
F.p3943 = Y_DEFP(F.v10161);
}
if ((F.p3939 == v1366)) {
F.p3942 = yr3132_Call2(y_str("y_low", 5), Y_DEFI(F.v10145), Y_DEFI(F.v10147));
} else {
F.p3942 = yr3132_Call2(y_str("y_high", 6), Y_DEFI(F.v10145), Y_DEFI(F.v10147));
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((((((F.p3939 == v1372)) || ((F.p3939 == v1375))) || ((F.p3939 == v1378))) || ((F.p3939 == v1381)))) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3043_Expr(yr3874_Arg(F.p3940, INT64_C(1)), ((void *)0), &F.v10145, &F.v10155);
if ((!yr2477_IsDiscrete(Y_DEFP(F.v10155)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_name), y_str(" of something that is not integer or scalar", 43));
}
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v813)) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_ordered)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_name), y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem) == ((void *)0)))) {
F.v10155 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem);
}
if ((((((F.p3939 == v1378)) || ((F.p3939 == v1381)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v804)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3939 == v1378)) {
F.p3943 = Y_DEFP(F.v10155);
F.p3942 = yr2607_LoText(Y_DEFP(F.v10155));
} else if ((F.p3939 == v1381)) {
F.p3943 = Y_DEFP(F.v10155);
F.p3942 = yr2613_HiText(Y_DEFP(F.v10155));
} else {
F.p3943 = yr3126_Unbounded(Y_DEFP(F.v10155));
yr1026_SB();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v804))) {
yr1037_SA(y_str("y_range(", 8));
}
if ((F.p3939 == v1372)) {
yr1037_SA(y_str("y_add(", 6));
} else {
yr1037_SA(y_str("y_sub(", 6));
}
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", 1)", 4));
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v804))) {
yr1037_SA(y_str(", 0, ", 5));
yr1050_SI(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(")", 1));
}
F.p3942 = yr1056_SE();
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1384)) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v828, &F.v10145, &F.v10155);
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_forward), y_str(" is not declared", 16));
}
F.v10161 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(" = y_new(sizeof(", 16));
yr1044_ST(yr2526_CType(Y_DEFP(F.v10161)));
yr1037_SA(y_str("));", 3));
if ((yr2501_Deep(Y_DEFP(F.v10161)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10161)))).f_kind) == v825)))) {
yr1037_SA(y_str(" y_initu(", 9));
yr1044_ST(yr2532_DescOf(Y_DEFP(F.v10161)));
yr1037_SA(y_str(", y_deref(", 10));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str("));", 3));
} else if ((!(yr3072_UndefValue(Y_DEFP(F.v10161)) == INT64_C(0)))) {
yr1037_SA(y_str(" *(", 3));
yr1044_ST(yr2526_CType(Y_DEFP(F.v10161)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(") = ", 4));
yr1044_ST(yr3072_UndefValue(Y_DEFP(F.v10161)));
yr1037_SA(y_str(";", 1));
}
yr1037_SA(y_str(" })", 3));
F.p3942 = yr1056_SE();
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1462)) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v828, &F.v10145, &F.v10155);
F.p3942 = yr3453_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), Y_DEFI(F.v10145), yr1061_T(y_str("))", 2)));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1387)) {
yr3881_NArgs(F.p3940, INT64_C(3));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v831, &F.v10145, &F.v10155);
yr3043_Expr(yr3874_Arg(F.p3940, INT64_C(2)), Y_DEFP(v1346), &F.v10147, &F.v10157);
if ((!yr2495_IsString(Y_DEFP(F.v10157)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr3043_Expr(yr3874_Arg(F.p3940, INT64_C(3)), Y_DEFP(v1932), &F.v10149, &F.v10159);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFP(v1932), Y_DEFP(F.v10159));
yr1026_SB();
yr1037_SA(y_str("y_open(&", 8));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10147));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10149));
yr1037_SA(y_str(")", 1));
F.p3942 = yr1056_SE();
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((((F.p3939 == v1390)) || ((F.p3939 == v1399)))) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v831, &F.v10145, &F.v10155);
if ((F.p3939 == v1390)) {
F.p3942 = yr3888_Call1(y_str("y_close", 7), yr3896_Addr(Y_DEFI(F.v10145)));
} else {
F.p3943 = Y_DEFP(v1344);
F.p3942 = yr3888_Call1(y_str("y_check_eof", 11), yr3896_Addr(Y_DEFI(F.v10145)));
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1393)) {
yr3881_NArgs(F.p3940, INT64_C(2));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v831, &F.v10145, &F.v10155);
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(2)), v858, &F.v10147, &F.v10157);
F.v10161 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFP(F.v10161), Y_DEFP(F.v10157));
if (yr2520_NonAssignable(Y_DEFP(F.v10161))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2526_CType(Y_DEFP(F.v10161)));
yr1037_SA(y_str(" g; ", 4));
if (yr2501_Deep(Y_DEFP(F.v10161))) {
yr1037_SA(y_str("y_init(", 7));
yr1044_ST(yr2532_DescOf(Y_DEFP(F.v10161)));
yr1037_SA(y_str(", &g); ", 7));
}
yr1037_SA(y_str("y_get_value(&", 13));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2532_DescOf(Y_DEFP(F.v10161)));
yr1037_SA(y_str(", &g); ", 7));
yr1044_ST(yr2984_StoreText(Y_DEFI(F.v10147), Y_DEFP(F.v10157), yr1061_T(y_str("g", 1)), Y_DEFP(F.v10161), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line)));
yr1037_SA(y_str(" })", 3));
F.p3942 = yr1056_SE();
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1396)) {
yr3881_NArgs(F.p3940, INT64_C(2));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v831, &F.v10145, &F.v10155);
F.v10161 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem);
yr3043_Expr(yr3874_Arg(F.p3940, INT64_C(2)), Y_DEFP(F.v10161), &F.v10147, &F.v10157);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFP(F.v10161), Y_DEFP(F.v10157));
if (yr2520_NonAssignable(Y_DEFP(F.v10161))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2526_CType(Y_DEFP(F.v10161)));
yr1037_SA(y_str(" pv = ", 6));
yr1044_ST(yr2976_Convert(Y_DEFI(F.v10147), Y_DEFP(F.v10161), Y_DEFP(F.v10157)));
yr1037_SA(y_str("; y_put_value(&", 15));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2532_DescOf(Y_DEFP(F.v10161)));
yr1037_SA(y_str(", &pv); })", 10));
F.p3942 = yr1056_SE();
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1402)) {
F.v10163 = yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3940))).f_a));
if ((((Y_DEFI(F.v10163) < INT64_C(5))) || ((!((y_mod((y_sub(Y_DEFI(F.v10163), INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("MOVE takes an object, an index and triples", 42));
}
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v858, &F.v10145, &F.v10155);
if (((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v843))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_nidx) == INT64_C(1)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("MOVE works on one-dimensional arrays", 36));
}
F.v10147 = yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(2)));
F.v10153 = yr1200_Fresh(y_str("at", 2));
yr1026_SB();
yr1037_SA(y_str("({ rt_int ", 10));
yr1044_ST(Y_DEFI(F.v10153));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v10147));
yr1037_SA(y_str(";", 1));
F.p3942 = yr1056_SE();
F.v10165 = INT64_C(3);
while ((Y_DEFI(F.v10165) < Y_DEFI(F.v10163))) {
Y_TICK();
yr3043_Expr(yr3874_Arg(F.p3940, Y_DEFI(F.v10165)), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem), &F.v10149, &F.v10159);
if (((!yr2489_IsArrayLike(Y_DEFP(F.v10159))) || (!yr2544_SameType(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10159)))).f_elem))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("MOVE: the components differ in type", 35));
}
F.v10151 = yr3919_IntArg(yr3874_Arg(F.p3940, y_range(y_add(Y_DEFI(F.v10165), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v10147 = yr3919_IntArg(yr3874_Arg(F.p3940, y_range(y_add(Y_DEFI(F.v10165), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3942));
yr1037_SA(y_str(" { rt_int mi = ", 15));
yr1044_ST(Y_DEFI(F.v10151));
yr1037_SA(y_str(", mj = ", 7));
yr1044_ST(Y_DEFI(F.v10147));
yr1037_SA(y_str("; y_move(&", 10));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10153));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10149));
yr1037_SA(y_str(", mi, mj, ", 10));
yr1044_ST(yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_elem)));
yr1037_SA(y_str("); if (mj >= mi) ", 17));
yr1044_ST(Y_DEFI(F.v10153));
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
F.p3942 = yr1056_SE();
F.v10165 = y_range(y_add(Y_DEFI(F.v10165), INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3942 = yr3453_Join(Y_DEFI(F.p3942), yr1061_T(y_str(" })", 3)), INT64_C(0));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((((F.p3939 == v1405)) || ((F.p3939 == v1408)))) {
yr3881_NArgs(F.p3940, INT64_C(2));
F.v10145 = yr3423_Cond(yr3874_Arg(F.p3940, INT64_C(1)));
F.v10147 = yr3423_Cond(yr3874_Arg(F.p3940, INT64_C(2)));
F.p3943 = Y_DEFP(v1344);
if ((F.p3939 == v1405)) {
F.p3942 = yr3141_Infix(yr3024_Paren(yr3141_Infix(Y_DEFI(F.v10145), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr3024_Paren(yr3141_Infix(Y_DEFI(F.v10147), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
} else {
F.p3942 = yr3141_Infix(yr3024_Paren(yr3141_Infix(Y_DEFI(F.v10145), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr3024_Paren(yr3141_Infix(Y_DEFI(F.v10147), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1411)) {
yr3881_NArgs(F.p3940, INT64_C(1));
F.p3942 = yr3888_Call1(y_str("rt_delay", 8), yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(1))));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1414)) {
yr3881_NArgs(F.p3940, INT64_C(0));
F.p3943 = yr3126_Unbounded(Y_DEFP(v1342));
F.p3942 = yr1061_T(y_str("rt_time()", 9));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if (((((F.p3939 == v1417)) || ((F.p3939 == v1420))) || ((F.p3939 == v1423)))) {
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v837, &F.v10145, &F.v10155);
if ((F.p3939 == v1417)) {
if ((yr2019_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3940))).f_a)) == INT64_C(1))) {
F.v10147 = yr1061_T(y_str("1", 1));
} else {
yr3881_NArgs(F.p3940, INT64_C(2));
F.v10147 = yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(2)));
}
F.p3942 = yr3132_Call2(y_str("y_wait", 6), yr3896_Addr(Y_DEFI(F.v10145)), Y_DEFI(F.v10147));
} else {
yr3881_NArgs(F.p3940, INT64_C(1));
if ((F.p3939 == v1420)) {
F.p3942 = yr3888_Call1(y_str("y_send", 6), yr3896_Addr(Y_DEFI(F.v10145)));
} else {
F.p3943 = Y_DEFP(v1344);
F.p3942 = yr3888_Call1(y_str("y_awaited", 9), yr3896_Addr(Y_DEFI(F.v10145)));
}
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if (((((F.p3939 == v1426)) || ((F.p3939 == v1429))) || ((F.p3939 == v1432)))) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3911_NumArg(yr3874_Arg(F.p3940, INT64_C(1)), &F.v10145, &F.v10155);
F.p3943 = yr3126_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v804)) {
F.p3942 = Y_DEFI(F.v10145);
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v807)) {
yr1026_SB();
if ((F.p3939 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3939 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
}
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3942 = yr1056_SE();
} else if ((F.p3939 == v1426)) {
F.p3942 = yr3888_Call1(y_str("y_floor", 7), Y_DEFI(F.v10145));
} else if ((F.p3939 == v1429)) {
F.p3942 = yr3888_Call1(y_str("y_ceiling", 9), Y_DEFI(F.v10145));
} else {
F.p3942 = yr3888_Call1(y_str("y_near_integer", 14), Y_DEFI(F.v10145));
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1438)) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3911_NumArg(yr3874_Arg(F.p3940, INT64_C(1)), &F.v10145, &F.v10155);
F.p3943 = Y_DEFP(v1354);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v807)) {
F.p3942 = yr3165_FixToFloat(Y_DEFI(F.v10145), Y_DEFP(F.v10155));
} else {
F.p3942 = yr3453_Join(yr1061_T(y_str("((double)(", 10)), Y_DEFI(F.v10145), yr1061_T(y_str("))", 2)));
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1435)) {
yr3881_NArgs(F.p3940, INT64_C(2));
yr3911_NumArg(yr3874_Arg(F.p3940, INT64_C(1)), &F.v10145, &F.v10155);
F.p3943 = yr3931_ManifestScale(yr3874_Arg(F.p3940, INT64_C(2)), F.p3940);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_fix_of_float(", 15));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3943)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3943)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3942 = yr1056_SE();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v804)) {
F.v10159 = yr2471_CopyRep(Y_DEFP(v1356));
yr2673_SetScale(Y_DEFP(F.v10159), INT64_C(1), INT64_C(1));
F.v10145 = yr3453_Join(yr1061_T(y_str("((yfix)(", 8)), Y_DEFI(F.v10145), yr1061_T(y_str("))", 2)));
} else {
F.v10159 = Y_DEFP(F.v10155);
}
yr2656_ScaleRatio(Y_DEFP(F.v10159), Y_DEFP(F.p3943), &F.v10151, &F.v10153, &F.v10169);
yr1026_SB();
yr1037_SA(y_str("y_fix_near(", 11));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10151));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10153));
yr1037_SA(y_str(")", 1));
F.p3942 = yr1056_SE();
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1441)) {
yr3881_NArgs(F.p3940, INT64_C(3));
yr3911_NumArg(yr3874_Arg(F.p3940, INT64_C(1)), &F.v10145, &F.v10155);
yr3911_NumArg(yr3874_Arg(F.p3940, INT64_C(2)), &F.v10147, &F.v10157);
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v807))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10157)))).f_kind) == v807))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFP(F.v10155), Y_DEFP(F.v10157));
F.p3943 = yr3931_ManifestScale(yr3874_Arg(F.p3940, INT64_C(3)), F.p3940);
((*(yR110 *)y_deref(Y_DEFP(F.p3943)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3943)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_tname);
F.v10159 = yr2471_CopyRep(Y_DEFP(v1356));
yr2673_SetScale(Y_DEFP(F.v10159), yr2640_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10157)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3943)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line)), yr2640_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10157)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3943)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line)));
yr2656_ScaleRatio(Y_DEFP(F.v10155), Y_DEFP(F.v10159), &F.v10151, &F.v10153, &F.v10169);
yr1026_SB();
yr1037_SA(y_str("y_fix_div(", 10));
yr1044_ST(Y_DEFI(F.v10145));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10147));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10151));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10153));
yr1037_SA(y_str(")", 1));
F.p3942 = yr1056_SE();
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1450)) {
v1683 = y_range(y_add(Y_DEFI(v1683), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3939 == v1444)) || ((F.p3939 == v1447))) || ((F.p3939 == v1450)))) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v840, &F.v10145, &F.v10155);
if ((F.p3939 == v1444)) {
F.p3942 = yr3888_Call1(y_str("rt_region_enter", 15), yr3896_Addr(Y_DEFI(F.v10145)));
} else if ((F.p3939 == v1447)) {
F.p3942 = yr3888_Call1(y_str("rt_region_leave", 15), yr3896_Addr(Y_DEFI(F.v10145)));
} else {
F.p3943 = Y_DEFP(v1344);
F.p3942 = yr3888_Call1(y_str("y_cond_claim", 12), yr3896_Addr(Y_DEFI(F.v10145)));
}
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1453)) {
yr3881_NArgs(F.p3940, INT64_C(0));
F.p3943 = yr3126_Unbounded(Y_DEFP(v1342));
F.p3942 = yr1061_T(y_str("y_self()", 8));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1456)) {
yr3881_NArgs(F.p3940, INT64_C(2));
F.p3942 = yr3132_Call2(y_str("y_change_priority", 17), yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(1))), yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(2))));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1459)) {
yr3881_NArgs(F.p3940, INT64_C(1));
F.p3942 = yr3888_Call1(y_str("y_raise_termination", 19), yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(1))));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1465)) {
yr3881_NArgs(F.p3940, INT64_C(1));
yr3925_CodeInsert(F.p3940);
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((((F.p3939 == v1468)) || ((F.p3939 == v1471)))) {
yr3881_NArgs(F.p3940, INT64_C(1));
F.v10171 = yr3874_Arg(F.p3940, INT64_C(1));
yr3043_Expr(Y_DEFP(F.v10171), ((void *)0), &F.v10145, &F.v10155);
if ((F.p3939 == v1471)) {
F.p3943 = yr3126_Unbounded(Y_DEFP(v1342));
F.p3942 = yr2843_ExtentCode(Y_DEFI(F.v10145), Y_DEFP(F.v10155));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
F.p3943 = Y_DEFP(v1934);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v855)) {
F.p3942 = yr3453_Join(yr1061_T(y_str("y_addr((", 8)), Y_DEFI(F.v10145), yr3453_Join(yr1061_T(y_str(").p, (", 6)), Y_DEFI(F.v10145), yr1061_T(y_str(").words)", 8))));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10171)))).f_kind) == v777)) {
F.v10143 = yr2353_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10171)))).f_name));
if ((!(Y_DEFP(F.v10143) == ((void *)0)))) {
if (yr2406_Resolved(Y_DEFP(F.v10143))) {
F.v10143 = yr2458_Real(Y_DEFP(F.v10143));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10143)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10143)))).f_kind) == v864)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10143)))).f_at) >= INT64_C(0))))) {
F.p3942 = yr3235_Num(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10143)))).f_at));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
}
}
}
if (((!((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10171)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10171)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10171)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10171)))).f_kind) == v789))))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10155)))).f_kind) == v846)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
}
F.p3942 = yr3453_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), yr3078_RawCode(Y_DEFP(F.v10171), Y_DEFI(F.v10145)), yr3453_Join(yr1061_T(y_str("), ", 3)), yr2843_ExtentCode(Y_DEFI(F.v10145), Y_DEFP(F.v10155)), yr1061_T(y_str(")", 1))));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1474)) {
yr3881_NArgs(F.p3940, INT64_C(2));
yr3902_StdVar(yr3874_Arg(F.p3940, INT64_C(1)), v828, &F.v10145, &F.v10155);
F.v10147 = yr3919_IntArg(yr3874_Arg(F.p3940, INT64_C(2)));
F.p3942 = yr3453_Join(yr1061_T(y_str("(", 1)), Y_DEFI(F.v10145), yr3453_Join(yr1061_T(y_str(" = y_cell(y_mem_ptr(", 20)), Y_DEFI(F.v10147), yr1061_T(y_str(")))", 3))));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
}
if ((F.p3939 == v1477)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3940))).f_name), y_str(" is not translated", 18));
(*F.p3942_o) = F.p3942;
(*F.p3943_o) = F.p3943;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3948_ArgCount(void) {
struct yf3949 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10399 = Y_UNDEF_I;
(F.v10399) = rt_argc();
((void)0);
{ rt_int rv10400 = Y_DEFI(F.v10399);
y_use = F.yu; return rv10400; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3953_ArgTxt(rt_int a_p3954) {
struct yf3955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3954 = a_p3954;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_10411, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10411, &F.v10413);
F.v10415 = Y_UNDEF_I;
{ rstr s = rt_arg((F.p3954)); (F.v10415) = s.len > 4096 ? 4096 : s.len; memcpy((F.v10413).p, s.p, (size_t)(F.v10415)); }
((void)0);
yr1026_SB();
F.lo10419 = INT64_C(1);
F.hi10420 = Y_DEFI(F.v10415);
{ rt_int hi10424 = F.hi10420;
for (rt_int i10423 = F.lo10419; i10423 <= hi10424; i10423++) { F.c_10422 = i10423; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10413).p)[y_ix1(F.v10413, F.c_10422)]));
if (i10423 == hi10424) break;
}}
{ rt_int rv10425 = yr1056_SE();
y_use = F.yu; return rv10425; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3959_ReadArgs(void) {
struct yf3960 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10428 = Y_UNDEF_I;
F.v10428 = yr3948_ArgCount();
F.v10430 = Y_UNDEF_I;
F.v10432 = Y_UNDEF_P;
F.v10432 = ((void *)0);
F.v10434 = Y_UNDEF_P;
F.v10434 = ((void *)0);
if ((Y_DEFI(F.v10428) == INT64_C(1))) {
y_use = F.yu; return;
}
if ((Y_DEFI(F.v10428) < INT64_C(3))) {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
}
F.v10430 = yr3953_ArgTxt(INT64_C(1));
v1694 = yr3953_ArgTxt(INT64_C(2));
if (yr1088_TEq(Y_DEFI(F.v10430), yr1061_T(y_str("-i", 2)))) {
v1691 = v1495;
} else if (yr1088_TEq(Y_DEFI(F.v10430), yr1061_T(y_str("-c", 2)))) {
v1691 = v1498;
} else if (yr1088_TEq(Y_DEFI(F.v10430), yr1061_T(y_str("-l", 2)))) {
v1691 = v1501;
F.lo10449 = INT64_C(3);
F.hi10450 = y_sub(Y_DEFI(F.v10428), INT64_C(1));
{ rt_int hi10454 = F.hi10450;
for (rt_int i10453 = F.lo10449; i10453 <= hi10454; i10453++) { F.c_10452 = i10453; Y_TICK();
F.v10432 = yr2004_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v10432)))).f_name = yr1075_Name(yr3953_ArgTxt(y_range(F.c_10452, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr2011_Link(&v1697, &F.v10434, Y_DEFP(F.v10432));
if (i10453 == hi10454) break;
}}
} else {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3964_LibPath(rt_int a_p3965, yarr a_p3967) {
struct yf3968 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3965 = a_p3965;
F.p3967 = a_p3967;
yr1026_SB();
yr1044_ST(Y_DEFI(v1694));
yr1037_SA(y_str("/", 1));
yr1044_ST(F.p3965);
yr1037_SA(F.p3967);
{ rt_int rv10462 = yr1056_SE();
y_use = F.yu; return rv10462; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3972_ReadInto(rt_int a_p3973) {
volatile
struct yf3974 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3973 = a_p3973;
F.v10466 = Y_UNDEF_I;
F.v10466 = 1;
{
F.lo10473 = INT64_C(1);
F.hi10474 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3973)]);
{ rt_int lo[1] = {F.lo10473}, hi[1] = {F.hi10474}; y_desc_array(&F.yd_10476, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10476, &F.v10478);
F.v10482 = Y_UNDEF_B;
{ rt_frame xf10483;
if (RT_TRY(xf10483)) {
F.lo10487 = INT64_C(1);
F.hi10488 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3973)]);
{ rt_int hi10492 = F.hi10488;
for (rt_int i10491 = F.lo10487; i10491 <= hi10492; i10491++) { F.c_10490 = i10491; Y_TICK();
((unsigned char *)(F.v10478).p)[y_ix1(F.v10478, F.c_10490)] = yr1103_TChar(F.p3973, y_range(F.c_10490, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if (i10491 == hi10492) break;
}}
y_open(&F.v10480, F.v10478, 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&F.v10480))) {
Y_TICK();
({ unsigned char g; y_get_value(&F.v10480, &y_d_byte, &g); F.v10482 = g; });
yr1020_PoolAdd(Y_DEFB(F.v10482));
}
v1219 = Y_DEFI(v915);
y_close(&F.v10480);
RT_POP(xf10483);
} else {
RT_POP(xf10483);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10496 = rt_xcur;
if (xc10496 == rt_exc("FILE_ERROR")) {
F.v10466 = 0;
} else {
rt_raise(xc10496);
}
}}
}
{ rt_int rv10498 = Y_DEFI(F.v10466);
y_use = F.yu; return rv10498; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3978_WriteFile(rt_int a_p3979, yR140 a_p3980) {
volatile
struct yf3981 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3979 = a_p3979;
F.p3980 = a_p3980;
F.v10503 = Y_UNDEF_P;
F.v10503 = Y_DEFP((F.p3980).f_head);
{
F.lo10509 = INT64_C(1);
F.hi10510 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3979)]);
{ rt_int lo[1] = {F.lo10509}, hi[1] = {F.hi10510}; y_desc_array(&F.yd_10512, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10512, &F.v10514);
{ rt_frame xf10517;
if (RT_TRY(xf10517)) {
F.lo10521 = INT64_C(1);
F.hi10522 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3979)]);
{ rt_int hi10526 = F.hi10522;
for (rt_int i10525 = F.lo10521; i10525 <= hi10526; i10525++) { F.c_10524 = i10525; Y_TICK();
((unsigned char *)(F.v10514).p)[y_ix1(F.v10514, F.c_10524)] = yr1103_TChar(F.p3979, y_range(F.c_10524, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if (i10525 == hi10526) break;
}}
y_open(&F.v10516, F.v10514, 1);
while ((!(Y_DEFP(F.v10503) == ((void *)0)))) {
Y_TICK();
yr1171_WriteTo(&F.v10516, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10503)))).f_t));
({ unsigned char pv = 10; y_put_value(&F.v10516, &y_d_byte, &pv); });
F.v10503 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10503)))).f_next);
}
y_close(&F.v10516);
RT_POP(xf10517);
} else {
RT_POP(xf10517);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10529 = rt_xcur;
if (xc10529 == rt_exc("FILE_ERROR")) {
yr1186_FailN(INT64_C(0), F.p3979, y_str(" cannot be written", 18));
} else {
rt_raise(xc10529);
}
}}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3985_ReadLibLine(rt_int a_p3986) {
struct yf3987 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3986 = a_p3986;
F.v10535 = Y_UNDEF_I;
if ((!yr3972_ReadInto(F.p3986))) {
{ rt_int rv10537 = INT64_C(0);
y_use = F.yu; return rv10537; }
}
F.v10535 = Y_DEFI(v1216);
while ((((Y_DEFI(F.v10535) <= Y_DEFI(v1219))) && ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v10535))]) == 10))))) {
Y_TICK();
F.v10535 = y_range(y_add(Y_DEFI(F.v10535), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10542 = yr1068_Intern(Y_DEFI(v1216), y_range(y_sub(Y_DEFI(F.v10535), Y_DEFI(v1216)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv10542; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3991_DigitsIn(rt_int a_p3992, rt_int a_p3993) {
struct yf3994 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3992 = a_p3992;
F.p3993 = a_p3993;
F.v10547 = Y_UNDEF_I;
F.v10547 = F.p3992;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(70)}; y_desc_array(&F.yd_10556, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10556, &F.v10558);
F.v10560 = Y_UNDEF_I;
F.v10560 = INT64_C(0);
if ((Y_DEFI(F.v10547) < INT64_C(0))) {
yr1031_SC(45);
F.v10547 = y_range(y_neg(Y_DEFI(F.v10547)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v10560 = y_range(y_add(Y_DEFI(F.v10560), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((y_mod(Y_DEFI(F.v10547), F.p3993)) < INT64_C(10))) {
((unsigned char *)(F.v10558).p)[y_ix1(F.v10558, Y_DEFI(F.v10560))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10547), F.p3993)), INT64_C(48)))]);
} else {
((unsigned char *)(F.v10558).p)[y_ix1(F.v10558, Y_DEFI(F.v10560))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10547), F.p3993)), INT64_C(55)))]);
}
F.v10547 = y_range(y_div(Y_DEFI(F.v10547), F.p3993), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v10547) == INT64_C(0))) {
goto yl_10565;
}
}
yl_10565: ;
while ((Y_DEFI(F.v10560) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10558).p)[y_ix1(F.v10558, Y_DEFI(F.v10560))]));
F.v10560 = y_range(y_sub(Y_DEFI(F.v10560), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3998_TokenText(rt_int a_p3999) {
struct yf4000 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3999 = a_p3999;
F.v10584 = Y_UNDEF_I;
F.v10584 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.p3999)]);
F.v10586 = Y_UNDEF_I;
F.v10586 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.p3999)]);
if ((((((Y_DEFI(F.v10584) == v207)) || ((Y_DEFI(F.v10584) == v210))) || ((Y_DEFI(F.v10584) == v213))) || ((Y_DEFI(F.v10584) == v222)))) {
yr1044_ST(y_range(Y_DEFI(F.v10586), INT64_C(0), INT64_C(4000000)));
} else if ((Y_DEFI(F.v10584) == v216)) {
yr1050_SI(Y_DEFI(F.v10586));
} else if ((Y_DEFI(F.v10584) == v219)) {
if ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10586))]) == INT64_C(10)))) {
yr1037_SA(y_str("BASE", 4));
yr1050_SI(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10586))]));
yr1037_SA(y_str(" ", 1));
}
yr3991_DigitsIn(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v10586))]), Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10586))]));
yr1037_SA(y_str("P", 1));
yr1050_SI(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v10586))]));
} else if ((Y_DEFI(F.v10584) == v225)) {
yr1031_SC(39);
yr1044_ST(y_range(Y_DEFI(F.v10586), INT64_C(0), INT64_C(4000000)));
yr1031_SC(39);
} else if ((Y_DEFI(F.v10584) == v228)) {
yr1031_SC(34);
yr1044_ST(y_range(Y_DEFI(F.v10586), INT64_C(0), INT64_C(4000000)));
yr1031_SC(34);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static yR140 yr4004_TokensText(rt_int a_p4005, rt_int a_p4006) {
struct yf4007 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4005 = a_p4005;
F.p4006 = a_p4006;
y_initu(&yd_141, &F.v10599);
F.v10599 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v10601 = Y_UNDEF_I;
F.v10601 = F.p4005;
F.v10603 = Y_UNDEF_I;
while ((Y_DEFI(F.v10601) < F.p4006)) {
Y_TICK();
F.v10603 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v10601))]);
yr1026_SB();
while ((((Y_DEFI(F.v10601) < F.p4006)) && ((Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v10601))]) == Y_DEFI(F.v10603))))) {
Y_TICK();
yr3998_TokenText(Y_DEFI(F.v10601));
yr1037_SA(y_str(" ", 1));
F.v10601 = y_range(y_add(Y_DEFI(F.v10601), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1110_Put(&F.v10599, yr1056_SE());
}
{ yR140 rv10607 = F.v10599;
y_use = F.yu; return rv10607; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4011_Fingerprint(yR140 a_p4012) {
struct yf4013 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4012 = a_p4012;
F.v10611 = Y_UNDEF_I;
F.v10611 = INT64_C(7);
F.v10614 = Y_UNDEF_P;
F.v10614 = Y_DEFP((F.p4012).f_head);
while ((!(Y_DEFP(F.v10614) == ((void *)0)))) {
Y_TICK();
F.lo10618 = INT64_C(1);
F.hi10619 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10614)))).f_t))]);
{ rt_int hi10623 = F.hi10619;
for (rt_int i10622 = F.lo10618; i10622 <= hi10623; i10622++) { F.c_10621 = i10622; Y_TICK();
F.v10611 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v10611), INT64_C(131))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10614)))).f_t), y_range(F.c_10621, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i10622 == hi10623) break;
}}
F.v10611 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v10611), INT64_C(131))), INT64_C(10))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10614 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10614)))).f_next);
}
{ rt_int rv10635 = Y_DEFI(F.v10611);
y_use = F.yu; return rv10635; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4017_TokEq(rt_int a_p4018, rt_int a_p4019, rt_int a_p4020, rt_int a_p4021) {
struct yf4022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4018 = a_p4018;
F.p4019 = a_p4019;
F.p4020 = a_p4020;
F.p4021 = a_p4021;
F.v10642 = Y_UNDEF_I;
F.v10644 = Y_UNDEF_I;
if ((!((y_sub(F.p4019, F.p4018)) == (y_sub(F.p4021, F.p4020))))) {
{ rt_int rv10648 = 0;
y_use = F.yu; return rv10648; }
}
F.v10642 = F.p4018;
F.v10644 = F.p4020;
while ((Y_DEFI(F.v10642) < F.p4019)) {
Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10642))]) == Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10644))])))) {
{ rt_int rv10650 = 0;
y_use = F.yu; return rv10650; }
}
if ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10642))]) == v219)) {
if (((((!(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10642))]))]) == Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10644))]))])))) || ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10642))]))]) == Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10644))]))]))))) || ((!(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10642))]))]) == Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10644))]))])))))) {
{ rt_int rv10652 = 0;
y_use = F.yu; return rv10652; }
}
} else if (((((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10642))]) == v228)) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10642))]) == v222))) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10642))]) == v225)))) {
if ((!yr1088_TEq(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10642))]), INT64_C(0), INT64_C(4000000)), y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10644))]), INT64_C(0), INT64_C(4000000))))) {
{ rt_int rv10654 = 0;
y_use = F.yu; return rv10654; }
}
} else if ((!(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10642))]) == Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10644))])))) {
{ rt_int rv10656 = 0;
y_use = F.yu; return rv10656; }
}
F.v10642 = y_range(y_add(Y_DEFI(F.v10642), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10644 = y_range(y_add(Y_DEFI(F.v10644), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10662 = 1;
y_use = F.yu; return rv10662; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4026_CheckSynopsis(void * a_p4027, rt_int a_p4028) {
struct yf4029 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4027 = a_p4027;
F.p4028 = a_p4028;
F.v10667 = Y_UNDEF_P;
F.v10669 = Y_UNDEF_P;
F.v10671 = Y_UNDEF_P;
F.v10671 = Y_DEFP(((*(yR105 *)y_deref(F.p4027))).f_c);
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10671)))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10671)))).f_b) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4027))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4027))).f_name), y_str(": a synopsis has declarations only, no statements (XIII.B)", 58));
}
if (F.p4028) {
F.v10669 = Y_DEFP(((*(yR105 *)y_deref(F.p4027))).f_a);
while ((!(Y_DEFP(F.v10669) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10669)))).f_text) == INT64_C(0))) && (!yr4033_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10669)))).f_name))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10669)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10669)))).f_name), y_str(" is not a segment: a synopsis imports segments and what they export (XIII.C)", 76));
}
F.v10669 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10669)))).f_next);
}
}
F.v10667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10671)))).f_a);
while ((!(Y_DEFP(F.v10667) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_kind) == v654)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_e) == ((void *)0))))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_kind) == v666)))) {
if (((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_c)))).f_a) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_c)))).f_b) == ((void *)0))))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_c)))).f_c) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_name), y_str(": a synopsis gives the header of a routine, not its body (XIII.E)", 65));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_kind) == v624)) {
yr4026_CheckSynopsis(Y_DEFP(F.v10667), 0);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_kind) == v660)) {
yr4026_CheckSynopsis(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_b), 0);
}
F.v10667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4033_IsSegment(rt_int a_p4034) {
struct yf4035 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4034 = a_p4034;
F.v10681 = Y_UNDEF_P;
F.v10681 = Y_DEFP(v1938);
while ((!(Y_DEFP(F.v10681) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10681)))).f_name) == F.p4034)) {
{ rt_int rv10683 = 1;
y_use = F.yu; return rv10683; }
}
F.v10681 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10681)))).f_next);
}
{ rt_int rv10685 = 0;
y_use = F.yu; return rv10685; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4039_CheckPairing(void * a_p4040, void * a_p4041) {
struct yf4042 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4040 = a_p4040;
F.p4041 = a_p4041;
F.v10690 = Y_UNDEF_P;
F.v10692 = Y_UNDEF_P;
F.v10694 = Y_UNDEF_I;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p4040))).f_flag) == Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_flag)))) || (!yr4017_TokEq(Y_DEFI(((*(yR105 *)y_deref(F.p4040))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4040))).f_t1), Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_t1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_name), y_str(": the segment imports and exports what its synopsis does, and nothing else (XIII.C)", 83));
}
F.v10690 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4040))).f_c)))).f_a);
while ((!(Y_DEFP(F.v10690) == ((void *)0)))) {
Y_TICK();
F.v10694 = 0;
F.v10692 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4041))).f_c)))).f_a);
while ((((!(Y_DEFP(F.v10692) == ((void *)0)))) && (!Y_DEFI(F.v10694)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_kind))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_kind) == v624)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_name))) {
yr4039_CheckPairing(Y_DEFP(F.v10690), Y_DEFP(F.v10692));
F.v10694 = 1;
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_kind) == v660)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_name))) {
yr4039_CheckPairing(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_b), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_b));
F.v10694 = 1;
}
} else if (yr4017_TokEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_t1), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_t1))) {
F.v10694 = 1;
}
}
F.v10692 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10692)))).f_next);
}
if ((!Y_DEFI(F.v10694))) {
yr1026_SB();
yr1037_SA(y_str("the declaration of line ", 24));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_line));
yr1037_SA(y_str(" of the synopsis of ", 20));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_name));
yr1037_SA(y_str(" is not in the segment as it is there (XIII.I)", 46));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p4041))).f_line), yr1056_SE());
}
F.v10690 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10690)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4046_PairInInput(void) {
struct yf4047 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10705 = Y_UNDEF_P;
F.v10707 = Y_UNDEF_P;
F.v10709 = Y_UNDEF_P;
F.v10709 = ((void *)0);
F.v10705 = Y_DEFP(v1938);
while ((!(Y_DEFP(F.v10705) == ((void *)0)))) {
Y_TICK();
F.v10707 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10705)))).f_next);
while ((((!(Y_DEFP(F.v10707) == ((void *)0)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10707)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10705)))).f_name)))))) {
Y_TICK();
F.v10707 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10707)))).f_next);
}
if ((!(Y_DEFP(F.v10707) == ((void *)0)))) {
yr4026_CheckSynopsis(Y_DEFP(F.v10705), 1);
yr4039_CheckPairing(Y_DEFP(F.v10705), Y_DEFP(F.v10707));
if ((Y_DEFP(F.v10709) == ((void *)0))) {
v1938 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10705)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v10709)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10705)))).f_next);
}
} else {
F.v10709 = Y_DEFP(F.v10705);
}
F.v10705 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10705)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4051_LoadSynopsis(rt_int a_p4052, rt_int a_p4053) {
struct yf4054 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4052 = a_p4052;
F.p4053 = a_p4053;
F.v10715 = Y_UNDEF_I;
F.v10717 = Y_UNDEF_I;
F.v10719 = Y_UNDEF_I;
F.v10721 = Y_UNDEF_P;
F.v10723 = Y_UNDEF_P;
F.v10725 = Y_UNDEF_P;
F.v10727 = Y_UNDEF_I;
if (yr4033_IsSegment(F.p4052)) {
y_use = F.yu; return;
}
F.v10727 = yr3985_ReadLibLine(yr3964_LibPath(F.p4052, y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10727) == INT64_C(0))) || (!yr3972_ReadInto(yr3964_LibPath(F.p4052, y_str(".ysyn", 5)))))) {
yr1186_FailN(F.p4053, F.p4052, y_str(" is not a segment of the library: no synopsis of it there (XIII.I)", 66));
}
F.v10715 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10719 = Y_DEFI(v1225);
v1225 = INT64_C(1);
yr1999_Lex();
v1225 = Y_DEFI(F.v10719);
F.v10717 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v10715);
F.v10721 = yr2109_ParseModule();
v1249 = Y_DEFI(F.v10717);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10721)))).f_name) == F.p4052))) {
yr1186_FailN(F.p4053, F.p4052, y_str(": its synopsis in the library is of another module", 50));
}
((*(yR105 *)y_deref(Y_DEFP(F.v10721)))).f_d = yr2004_NewNode(v669, F.p4053);
((*(yR105 *)y_deref(Y_DEFP(F.v10721)))).f_next = Y_DEFP(v1938);
v1938 = Y_DEFP(F.v10721);
F.v10725 = yr2004_NewNode(v669, F.p4053);
((*(yR105 *)y_deref(Y_DEFP(F.v10725)))).f_name = F.p4052;
((*(yR105 *)y_deref(Y_DEFP(F.v10725)))).f_text = Y_DEFI(F.v10727);
((*(yR105 *)y_deref(Y_DEFP(F.v10725)))).f_next = Y_DEFP(v1699);
v1699 = Y_DEFP(F.v10725);
yr4058_LoadImports(Y_DEFP(F.v10721));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4058_LoadImports(void * a_p4059) {
struct yf4060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4059 = a_p4059;
F.v10739 = Y_UNDEF_P;
F.v10739 = Y_DEFP(((*(yR105 *)y_deref(F.p4059))).f_a);
while ((!(Y_DEFP(F.v10739) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_text) == INT64_C(0)))) {
yr4051_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_line));
} else if ((!yr4033_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_name)))) {
yr4051_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_line));
}
F.v10739 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10739)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4064_LastSegment(void) {
struct yf4065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10743 = Y_UNDEF_P;
F.v10743 = Y_DEFP(v1938);
if ((Y_DEFP(F.v10743) == ((void *)0))) {
yr1178_FailS(INT64_C(0), y_str("no segment", 10));
}
while ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10743)))).f_next) == ((void *)0)))) {
Y_TICK();
F.v10743 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10743)))).f_next);
}
{ void * rv10746 = Y_DEFP(F.v10743);
y_use = F.yu; return rv10746; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4069_Interface(void) {
struct yf4070 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10749 = Y_UNDEF_P;
F.v10749 = yr4064_LastSegment();
y_initu(&yd_141, &F.v10751);
F.v10753 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10755);
F.v10755 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr4058_LoadImports(Y_DEFP(F.v10749));
yr4026_CheckSynopsis(Y_DEFP(F.v10749), 1);
((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_d = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_line));
yr4184_Translate();
F.v10751 = yr4004_TokensText(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_x)))).f_ival), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_x)))).f_flag));
F.v10753 = yr4011_Fingerprint(F.v10751);
yr3978_WriteFile(yr3964_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_name), y_str(".ysyn", 5)), F.v10751);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v10753));
yr1110_Put(&F.v10755, yr1056_SE());
yr3978_WriteFile(yr3964_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_name), y_str(".yfp", 4)), F.v10755);
yr1026_SB();
yr1037_SA(y_str("/* the synopsis of ", 19));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10749)))).f_name));
yr1037_SA(y_str(", fingerprint ", 14));
yr1050_SI(Y_DEFI(F.v10753));
yr1037_SA(y_str(" */", 3));
yr1145_WriteTxt(yr1056_SE());
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4074_Segment(void) {
struct yf4075 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10765 = Y_UNDEF_P;
F.v10765 = yr4064_LastSegment();
F.v10767 = Y_UNDEF_P;
F.v10769 = Y_UNDEF_I;
F.v10771 = Y_UNDEF_I;
F.v10773 = Y_UNDEF_I;
F.v10775 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10777);
F.v10777 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v10779 = Y_UNDEF_P;
v1701 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name);
F.v10769 = yr3985_ReadLibLine(yr3964_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name), y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10769) == INT64_C(0))) || (!yr3972_ReadInto(yr3964_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name), y_str(".ysyn", 5)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name), y_str(": its synopsis is not in the library; translate it with -i first (XIII.I)", 73));
}
F.v10771 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10775 = Y_DEFI(v1225);
v1225 = INT64_C(1);
yr1999_Lex();
v1225 = Y_DEFI(F.v10775);
F.v10773 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v10771);
F.v10767 = yr2109_ParseModule();
v1249 = Y_DEFI(F.v10773);
yr4039_CheckPairing(Y_DEFP(F.v10767), Y_DEFP(F.v10765));
F.v10779 = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v10779)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v10779)))).f_text = Y_DEFI(F.v10769);
((*(yR105 *)y_deref(Y_DEFP(F.v10779)))).f_next = Y_DEFP(v1699);
v1699 = Y_DEFP(F.v10779);
yr4058_LoadImports(Y_DEFP(F.v10765));
yr4184_Translate();
F.v10779 = Y_DEFP(v1699);
while ((!(Y_DEFP(F.v10779) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10777, yr3453_Join(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10779)))).f_name), yr1061_T(y_str(" ", 1)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10779)))).f_text)));
F.v10779 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10779)))).f_next);
}
yr3978_WriteFile(yr3964_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name), y_str(".yuse", 5)), F.v10777);
yr4085_WriteSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10765)))).f_name));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4079_UsesText(void * a_p4080) {
struct yf4081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4080 = a_p4080;
F.v10792 = Y_UNDEF_P;
F.v10792 = F.p4080;
yr1026_SB();
while ((!(Y_DEFP(F.v10792) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10792)))).f_t));
yr1037_SA(y_str(";", 1));
F.v10792 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10792)))).f_next);
}
{ rt_int rv10794 = yr1056_SE();
y_use = F.yu; return rv10794; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4085_WriteSegment(rt_int a_p4086) {
struct yf4087 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4086 = a_p4086;
F.v10798 = Y_UNDEF_P;
F.v10798 = Y_DEFP(v1699);
F.v10800 = Y_UNDEF_I;
yr1117_PutS(&v990, y_str("static void y_elaborate(void) {", 31));
yr1125_Append(&v990, &v996);
yr1117_PutS(&v990, y_str("}", 1));
yr1110_Put(&v990, yr3453_Join(yr1061_T(y_str("void ys_", 8)), F.p4086, yr1061_T(y_str("_init(void) { y_elaborate(); }", 30))));
yr1110_Put(&v990, yr3453_Join(yr1061_T(y_str("void ys_", 8)), F.p4086, yr1061_T(y_str("_await(void) {", 14))));
yr1125_Append(&v990, &v1726);
yr1117_PutS(&v990, y_str("}", 1));
yr1026_SB();
yr1037_SA(y_str("const char ys_", 14));
yr1044_ST(F.p4086);
yr1037_SA(y_str("_uses[] = ", 10));
yr1031_SC(34);
while ((!(Y_DEFP(F.v10798) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10798)))).f_name));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10798)))).f_text));
yr1037_SA(y_str(";", 1));
F.v10798 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10798)))).f_next);
}
yr1031_SC(34);
yr1037_SA(y_str(";", 1));
yr1110_Put(&v990, yr1056_SE());
yr4194_WriteHead();
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4091_LinkProgram(void) {
struct yf4092 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10817 = Y_UNDEF_P;
F.v10819 = Y_UNDEF_P;
F.v10821 = Y_UNDEF_I;
F.v10823 = Y_UNDEF_I;
F.v10825 = Y_UNDEF_I;
F.v10827 = Y_UNDEF_I;
F.v10829 = Y_UNDEF_I;
F.v10831 = Y_UNDEF_I;
F.v10833 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10835);
F.v10835 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr1117_PutS(&F.v10835, y_str("#include <stdio.h>", 18));
yr1117_PutS(&F.v10835, y_str("#include <stdlib.h>", 19));
yr1117_PutS(&F.v10835, y_str("#include <string.h>", 19));
yr1117_PutS(&F.v10835, y_str("#include \"paleo.h\"", 18));
F.v10817 = Y_DEFP(v1697);
while ((!(Y_DEFP(F.v10817) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10835, yr3453_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), yr1061_T(y_str("_init(void);", 12))));
yr1110_Put(&F.v10835, yr3453_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), yr1061_T(y_str("_await(void);", 13))));
yr1110_Put(&F.v10835, yr3453_Join(yr1061_T(y_str("extern const char ys_", 21)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), yr1061_T(y_str("_uses[];", 8))));
F.v10817 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_next);
}
yr1117_PutS(&F.v10835, y_str("int main(int argc, char **argv) {", 33));
yr1117_PutS(&F.v10835, y_str("y_lang();", 9));
yr1117_PutS(&F.v10835, y_str("rt_init(argc, argv);", 20));
F.v10817 = Y_DEFP(v1697);
while ((!(Y_DEFP(F.v10817) == ((void *)0)))) {
Y_TICK();
if ((!yr3972_ReadInto(yr3964_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), y_str(".yuse", 5))))) {
yr1186_FailN(INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), y_str(" has not been translated as a segment of this library (XIII.I)", 62));
}
yr1026_SB();
F.v10831 = Y_DEFI(v1216);
F.v10829 = Y_DEFI(F.v10831);
F.v10833 = Y_DEFI(v1219);
while ((Y_DEFI(F.v10831) <= Y_DEFI(F.v10833))) {
Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v10831))]) == 10)) {
F.v10827 = yr1068_Intern(Y_DEFI(F.v10829), y_range(y_sub(Y_DEFI(F.v10831), Y_DEFI(F.v10829)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr4096_CheckUse(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), Y_DEFI(F.v10827));
yr1044_ST(Y_DEFI(F.v10827));
yr1037_SA(y_str(";", 1));
F.v10829 = y_range(y_add(Y_DEFI(F.v10831), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10831 = y_range(y_add(Y_DEFI(F.v10831), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10821 = yr1056_SE();
yr1026_SB();
yr1037_SA(y_str("if (strcmp(ys_", 14));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name));
yr1037_SA(y_str("_uses, ", 7));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v10821));
yr1031_SC(34);
yr1037_SA(y_str(") != 0) { fprintf(stderr, ", 26));
yr1031_SC(34);
yr1037_SA(y_str("*** segment ", 12));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name));
yr1037_SA(y_str(" is out of date: translate it again (XIII.I)\\n", 46));
yr1031_SC(34);
yr1037_SA(y_str("); exit(2); }", 13));
yr1110_Put(&F.v10835, yr1056_SE());
F.v10817 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_next);
}
F.v10817 = Y_DEFP(v1697);
while ((!(Y_DEFP(F.v10817) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10835, yr3453_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), yr1061_T(y_str("_init();", 8))));
F.v10817 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_next);
}
F.v10817 = Y_DEFP(v1697);
while ((!(Y_DEFP(F.v10817) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10835, yr3453_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_name), yr1061_T(y_str("_await();", 9))));
F.v10817 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10817)))).f_next);
}
yr1117_PutS(&F.v10835, y_str("rt_main_done();", 15));
yr1117_PutS(&F.v10835, y_str("return 0;", 9));
yr1117_PutS(&F.v10835, y_str("}", 1));
yr1151_WriteBuf(F.v10835);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4096_CheckUse(rt_int a_p4097, rt_int a_p4098) {
struct yf4099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4097 = a_p4097;
F.p4098 = a_p4098;
F.v10880 = Y_UNDEF_I;
F.v10880 = INT64_C(1);
F.v10883 = Y_UNDEF_I;
F.v10885 = Y_UNDEF_I;
F.v10887 = Y_UNDEF_I;
F.v10889 = Y_UNDEF_P;
F.v10889 = Y_DEFP(v1697);
F.v10891 = Y_UNDEF_I;
F.v10891 = 0;
while ((((Y_DEFI(F.v10880) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4098)]))) && ((!(yr1103_TChar(F.p4098, Y_DEFI(F.v10880)) == 32))))) {
Y_TICK();
F.v10880 = y_range(y_add(Y_DEFI(F.v10880), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10883 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4098)]), y_range(y_sub(Y_DEFI(F.v10880), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10885 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4098)]), Y_DEFI(F.v10880)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4098)]), Y_DEFI(F.v10880)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10887 = yr3985_ReadLibLine(yr3964_LibPath(Y_DEFI(F.v10883), y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10887) == INT64_C(0))) || ((!(Y_DEFI(F.v10887) == Y_DEFI(F.v10885)))))) {
yr1157_Fail(INT64_C(0), yr3453_Join(F.p4097, yr3453_Join(yr1061_T(y_str(" was translated with an outdated synopsis of ", 45)), Y_DEFI(F.v10883), INT64_C(0)), yr1061_T(y_str(": translate it again (XIII.I)", 29))));
}
while ((!(Y_DEFP(F.v10889) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10889)))).f_name) == Y_DEFI(F.v10883))) {
F.v10891 = 1;
}
F.v10889 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10889)))).f_next);
}
if ((!Y_DEFI(F.v10891))) {
yr1157_Fail(INT64_C(0), yr3453_Join(F.p4097, yr1061_T(y_str(" imports the segment ", 21)), yr3453_Join(Y_DEFI(F.v10883), yr1061_T(y_str(", which is not linked (XIII.A)", 30)), INT64_C(0))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4103_SegKey(rt_int a_p4104, rt_int a_p4105) {
struct yf4106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4104 = a_p4104;
F.p4105 = a_p4105;
F.v10915 = Y_UNDEF_B;
yr1026_SB();
yr1037_SA(y_str("ys", 2));
F.lo10920 = INT64_C(1);
F.hi10921 = Y_DEFI(v1710);
{ rt_int hi10925 = F.hi10921;
for (rt_int i10924 = F.lo10920; i10924 <= hi10925; i10924++) { F.c_10923 = i10924; Y_TICK();
yr1037_SA(y_str("_", 1));
yr1044_ST(Y_DEFI(((rt_int *)(v1722).p)[y_ix1(v1722, F.c_10923)]));
if (i10924 == hi10925) break;
}}
yr1037_SA(y_str("__", 2));
F.lo10931 = INT64_C(1);
F.hi10932 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4104)]);
{ rt_int hi10936 = F.hi10932;
for (rt_int i10935 = F.lo10931; i10935 <= hi10936; i10935++) { F.c_10934 = i10935; Y_TICK();
F.v10915 = yr1103_TChar(F.p4104, y_range(F.c_10934, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((yr1008_IsLetter(Y_DEFB(F.v10915)) || yr1014_IsDigit(Y_DEFB(F.v10915)))) {
yr1031_SC(Y_DEFB(F.v10915));
} else {
yr1037_SA(y_str("_x", 2));
yr1050_SI(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(F.v10915))]));
}
if (i10935 == hi10936) break;
}}
if ((!(F.p4105 == INT64_C(0)))) {
yr1037_SA(y_str("__", 2));
yr1050_SI(F.p4105);
}
{ rt_int rv10940 = yr1056_SE();
y_use = F.yu; return rv10940; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4110_HeaderHash(void * a_p4111) {
struct yf4112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4111 = a_p4111;
{ rt_int rv10943 = yr4011_Fingerprint(yr4004_TokensText(Y_DEFI(((*(yR105 *)y_deref(F.p4111))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4111))).f_t1)));
y_use = F.yu; return rv10943; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4116_ParamList(void * a_p4117) {
struct yf4118 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4117 = a_p4117;
F.v10947 = Y_UNDEF_P;
F.v10947 = Y_DEFP(((*(yR125 *)y_deref(F.p4117))).f_params);
F.v10949 = Y_UNDEF_I;
F.v10949 = 1;
yr1026_SB();
yr1037_SA(y_str("(", 1));
while ((!(Y_DEFP(F.v10947) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v10949))) {
yr1037_SA(y_str(", ", 2));
}
F.v10949 = 0;
yr1044_ST(yr3574_ParamCType(Y_DEFP(F.v10947)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10947)))).f_cname));
F.v10947 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10947)))).f_next);
}
if (Y_DEFI(F.v10949)) {
yr1037_SA(y_str("void", 4));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv10957 = yr1056_SE();
y_use = F.yu; return rv10957; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4122_SegStorage(void * a_p4123, void * a_p4124, rt_int a_p4125) {
struct yf4126 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4123 = a_p4123;
F.p4124 = a_p4124;
F.p4125 = a_p4125;
F.v10963 = Y_UNDEF_I;
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((Y_DEFI(v1710) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v10963 = yr4103_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4123))).f_name), INT64_C(0));
if ((Y_DEFI(v1704) > INT64_C(0))) {
yr1110_Put(&v984, yr3453_Join(yr1061_T(y_str("extern ", 7)), yr2526_CType(F.p4124), yr3453_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v10963), yr1061_T(y_str(";", 1)))));
((*(yR125 *)y_deref(F.p4123))).f_cname = yr3453_Join(yr1061_T(y_str("(*", 2)), Y_DEFI(F.v10963), yr1061_T(y_str(")", 1)));
((*(yR125 *)y_deref(F.p4123))).f_level = INT64_C(0);
} else if ((Y_DEFI(v1707) > INT64_C(0))) {
yr1110_Put(&v1724, yr3453_Join(yr2526_CType(F.p4124), yr3453_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v10963), yr1061_T(y_str(" = &", 4))), yr3453_Join(Y_DEFI(((*(yR125 *)y_deref(F.p4123))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4130_SegRoutine(void * a_p4131, void * a_p4132, rt_int a_p4133) {
struct yf4134 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4131 = a_p4131;
F.p4132 = a_p4132;
F.p4133 = a_p4133;
F.v10984 = Y_UNDEF_I;
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4131))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1710) == INT64_C(0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4132))).f_e) == ((void *)0)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(v1704) == INT64_C(0))) && ((Y_DEFI(v1707) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v10984 = yr4103_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4131))).f_name), yr4110_HeaderHash(F.p4132));
if ((F.p4133 == v885)) {
F.v10984 = yr3453_Join(Y_DEFI(F.v10984), yr1061_T(y_str("_act", 4)), INT64_C(0));
}
if ((Y_DEFI(v1704) > INT64_C(0))) {
((*(yR125 *)y_deref(F.p4131))).f_hasmv = 1;
yr1026_SB();
yr1037_SA(y_str("extern ", 7));
if ((F.p4133 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4131))).f_ret)));
}
yr1037_SA(y_str(" (*", 3));
yr1044_ST(Y_DEFI(F.v10984));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4116_ParamList(F.p4131));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v986, yr1056_SE());
((*(yR125 *)y_deref(F.p4131))).f_cname = Y_DEFI(F.v10984);
if ((!Y_DEFI(((*(yR125 *)y_deref(F.p4131))).f_func))) {
((*(yR125 *)y_deref(F.p4131))).f_writes = yr2004_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p4132))).f_line));
}
} else if ((F.p4133 == v876)) {
yr1026_SB();
yr1044_ST(yr2526_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4131))).f_ret)));
yr1037_SA(y_str(" (*", 3));
yr1044_ST(Y_DEFI(F.v10984));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4116_ParamList(F.p4131));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4131))).f_cname));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v1724, yr1056_SE());
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4138_SegActivation(void * a_p4139, void * a_p4140) {
struct yf4141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4139 = a_p4139;
F.p4140 = a_p4140;
F.v11006 = Y_UNDEF_I;
F.v11008 = Y_UNDEF_I;
F.v11010 = Y_UNDEF_I;
F.v11012 = Y_UNDEF_I;
F.v11014 = Y_UNDEF_I;
F.v11016 = Y_UNDEF_I;
F.v11018 = Y_UNDEF_P;
F.v11020 = Y_UNDEF_P;
F.v11022 = Y_UNDEF_I;
F.v11024 = Y_UNDEF_I;
F.v11024 = INT64_C(0);
y_initu(&yd_141, &F.v11027);
F.v11027 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4139))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1710) == INT64_C(0)))) || ((Y_DEFI(v1707) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11006 = yr3453_Join(yr4103_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4139))).f_name), yr4110_HeaderHash(F.p4140)), yr1061_T(y_str("_act", 4)), INT64_C(0));
F.v11008 = yr1200_Fresh(y_str("ysa", 3));
yr1110_Put(&F.v11027, yr3453_Join(yr1061_T(y_str("static void ", 12)), Y_DEFI(F.v11008), yr4116_ParamList(F.p4139)));
F.v11010 = yr1061_T(y_str("pf", 2));
yr1117_PutS(&F.v11027, y_str("{", 1));
yr1110_Put(&F.v11027, yr3453_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p4139))).f_members)))).f_name), yr3453_Join(yr1061_T(y_str(" *pf = rt_alloc(sizeof *pf);", 28)), INT64_C(0), INT64_C(0))));
F.v11018 = Y_DEFP(((*(yR125 *)y_deref(F.p4139))).f_params);
while ((!(Y_DEFP(F.v11018) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cls) == v897)) && yr2501_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_rep)))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_rep)))).f_kind) == v843)) {
yr1110_Put(&F.v11027, yr3453_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2532_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_rep)))).f_elem)), yr3453_Join(yr1061_T(y_str("), &pf->", 8)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cname), yr3453_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cname), yr1061_T(y_str(");", 2))))));
} else {
yr1110_Put(&F.v11027, yr3453_Join(yr1061_T(y_str("y_copy(", 7)), yr2532_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_rep)), yr3453_Join(yr1061_T(y_str(", &pf->", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cname), yr3453_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cname), yr1061_T(y_str(");", 2))))));
}
} else {
yr1110_Put(&F.v11027, yr3453_Join(yr1061_T(y_str("pf->", 4)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cname), yr3453_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_cname), yr1061_T(y_str(";", 1)))));
}
F.v11018 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11018)))).f_next);
}
F.v11012 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4140))).f_e) == ((void *)0)))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4140))).f_e), Y_DEFP(v1342), &F.v11012, &F.v11020);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4140))).f_line), Y_DEFP(v1342), Y_DEFP(F.v11020));
}
F.v11014 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4140))).f_d) == ((void *)0)))) {
yr3043_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4140))).f_d), Y_DEFP(v1342), &F.v11016, &F.v11020);
yr2559_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4140))).f_line), Y_DEFP(v1342), Y_DEFP(F.v11020));
F.v11014 = yr3453_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v11016), INT64_C(0));
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4140))).f_x) == ((void *)0)))) {
yr2895_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p4140))).f_x), &F.v11022, &F.v11024);
if (((!Y_DEFI(F.v11022)) || ((Y_DEFI(F.v11024) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4140))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4139))).f_cname));
yr1037_SA(y_str("_d, ", 4));
yr1044_ST(Y_DEFI(F.v11012));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v11014));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v11024));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4139))).f_cname));
yr1037_SA(y_str(", pf);", 6));
yr1110_Put(&F.v11027, yr1056_SE());
yr1117_PutS(&F.v11027, y_str("}", 1));
yr1125_Append(&v988, &F.v11027);
yr1026_SB();
yr1037_SA(y_str("void (*", 7));
yr1044_ST(Y_DEFI(F.v11006));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4116_ParamList(F.p4139));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v11008));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v1724, yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4145_StdRep(yarr a_p4147, void * a_p4148) {
struct yf4149 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4147 = a_p4147;
F.p4148 = a_p4148;
F.v11073 = Y_UNDEF_P;
F.v11073 = yr2323_NewSym(v870, yr1081_N(F.p4147));
((*(yR125 *)y_deref(Y_DEFP(F.v11073)))).f_rep = F.p4148;
yr2425_Define(Y_DEFP(F.v11073), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4153_StdOp(yarr a_p4155, rt_int a_p4156) {
struct yf4157 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4155 = a_p4155;
F.p4156 = a_p4156;
F.v11079 = Y_UNDEF_P;
F.v11079 = yr2323_NewSym(v891, yr1081_N(F.p4155));
((*(yR125 *)y_deref(Y_DEFP(F.v11079)))).f_mval = F.p4156;
yr2425_Define(Y_DEFP(F.v11079), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4161_LitList(yarr a_p4163, yarr a_p4164, yarr a_p4165, rt_int a_p4166) {
struct yf4167 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4163 = a_p4163;
F.p4164 = a_p4164;
F.p4165 = a_p4165;
F.p4166 = a_p4166;
F.v11087 = Y_UNDEF_P;
F.v11087 = ((void *)0);
F.v11089 = Y_UNDEF_P;
F.v11089 = ((void *)0);
F.v11091 = Y_UNDEF_P;
F.v11091 = ((void *)0);
F.v11091 = yr2004_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11091)))).f_name = yr1081_N(F.p4163);
yr2011_Link(&F.v11087, &F.v11089, Y_DEFP(F.v11091));
F.v11091 = yr2004_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11091)))).f_name = yr1081_N(F.p4164);
yr2011_Link(&F.v11087, &F.v11089, Y_DEFP(F.v11091));
if (F.p4166) {
F.v11091 = yr2004_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11091)))).f_name = yr1081_N(F.p4165);
yr2011_Link(&F.v11087, &F.v11089, Y_DEFP(F.v11091));
}
{ void * rv11095 = Y_DEFP(F.v11087);
y_use = F.yu; return rv11095; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr4171_Abstract(rt_int a_p4172, yarr a_p4174) {
struct yf4175 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4172 = a_p4172;
F.p4174 = a_p4174;
F.v11100 = Y_UNDEF_P;
F.v11100 = yr2464_NewRep(F.p4172, yr1081_N(F.p4174));
((*(yR110 *)y_deref(Y_DEFP(F.v11100)))).f_abstract = 1;
{ void * rv11102 = Y_DEFP(F.v11100);
y_use = F.yu; return rv11102; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4179_Predefine(void) {
struct yf4180 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2330_OpenScope(0);
((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))] = ((void *)0);
v1342 = yr4171_Abstract(v804, y_str("INTEGER", 7));
v1356 = yr4171_Abstract(v807, y_str("FIXED", 5));
v1354 = yr4171_Abstract(v810, y_str("FLOATING", 8));
v1358 = yr2464_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
v1360 = yr2464_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
v1348 = yr2464_NewRep(v852, yr1081_N(y_str("no value", 8)));
v1362 = yr2464_NewRep(v858, yr1081_N(y_str("any", 3)));
v1344 = yr2464_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_lits = yr4161_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_nlits = INT64_C(2);
yr2694_SetRange(Y_DEFP(v1344), INT64_C(0), INT64_C(1));
yr2688_DefineLits(Y_DEFP(v1344));
v1346 = yr2464_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_nlits = INT64_C(128);
yr2694_SetRange(Y_DEFP(v1346), INT64_C(0), INT64_C(127));
v1932 = yr2464_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
((*(yR110 *)y_deref(Y_DEFP(v1932)))).f_lits = yr4161_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR110 *)y_deref(Y_DEFP(v1932)))).f_nlits = INT64_C(3);
yr2694_SetRange(Y_DEFP(v1932), INT64_C(0), INT64_C(2));
yr2688_DefineLits(Y_DEFP(v1932));
yr4145_StdRep(y_str("INTEGER", 7), Y_DEFP(v1342));
yr4145_StdRep(y_str("FIXED", 5), Y_DEFP(v1356));
yr4145_StdRep(y_str("FLOATING", 8), Y_DEFP(v1354));
yr4145_StdRep(y_str("BOOLEAN", 7), Y_DEFP(v1344));
yr4145_StdRep(y_str("SIGNAL", 6), Y_DEFP(v1358));
yr4145_StdRep(y_str("SEMAPHORE", 9), Y_DEFP(v1360));
yr4145_StdRep(y_str("ASCII", 5), Y_DEFP(v1346));
yr4145_StdRep(y_str("STANDARD_ALPHABET", 17), Y_DEFP(v1346));
yr4145_StdRep(y_str("OPEN_MODE", 9), Y_DEFP(v1932));
v1934 = yr2464_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1934)))).f_tname = yr1081_N(y_str("ADDRESS", 7));
yr2694_SetRange(Y_DEFP(v1934), INT64_C(0), INT64_C(16777215));
v1936 = yr2464_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1936)))).f_tname = yr1081_N(y_str("WORD", 4));
yr2694_SetRange(Y_DEFP(v1936), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr4145_StdRep(y_str("ADDRESS", 7), Y_DEFP(v1934));
yr4145_StdRep(y_str("WORD", 4), Y_DEFP(v1936));
yr4153_StdOp(y_str("MAKE_POINTER", 12), v1474);
yr4153_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
yr4153_StdOp(y_str("LOW", 3), v1366);
yr4153_StdOp(y_str("HIGH", 4), v1369);
yr4153_StdOp(y_str("SUCC", 4), v1372);
yr4153_StdOp(y_str("PRED", 4), v1375);
yr4153_StdOp(y_str("FIRST", 5), v1378);
yr4153_StdOp(y_str("LAST", 4), v1381);
yr4153_StdOp(y_str("NEW", 3), v1384);
yr4153_StdOp(y_str("OPEN", 4), v1387);
yr4153_StdOp(y_str("CLOSE", 5), v1390);
yr4153_StdOp(y_str("GET", 3), v1393);
yr4153_StdOp(y_str("PUT", 3), v1396);
yr4153_StdOp(y_str("CHECK_EOF", 9), v1399);
yr4153_StdOp(y_str("MOVE", 4), v1402);
yr4153_StdOp(y_str("AND_LONG", 8), v1405);
yr4153_StdOp(y_str("OR_LONG", 7), v1408);
yr4153_StdOp(y_str("DELAY", 5), v1411);
yr4153_StdOp(y_str("CLOCK_TIME", 10), v1414);
yr4153_StdOp(y_str("WAIT", 4), v1417);
yr4153_StdOp(y_str("SEND", 4), v1420);
yr4153_StdOp(y_str("AWAITED", 7), v1423);
yr4153_StdOp(y_str("FLOOR", 5), v1426);
yr4153_StdOp(y_str("CEILING", 7), v1429);
yr4153_StdOp(y_str("NEAR_INTEGER", 12), v1432);
yr4153_StdOp(y_str("NEAR_FIXED", 10), v1435);
yr4153_StdOp(y_str("NEAR_FLOATING", 13), v1438);
yr4153_StdOp(y_str("FIXED_DIV", 9), v1441);
yr4153_StdOp(y_str("CLAIM", 5), v1444);
yr4153_StdOp(y_str("RELEASE", 7), v1447);
yr4153_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
yr4153_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
yr4153_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
yr4153_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
yr4153_StdOp(y_str("FREE_POINTER", 12), v1462);
yr4153_StdOp(y_str("C_CODE_INSERT", 13), v1465);
yr4153_StdOp(y_str("ADDR", 4), v1468);
yr4153_StdOp(y_str("EXTENT", 6), v1471);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4184_Translate(void) {
struct yf4185 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11190 = Y_UNDEF_P;
F.v11190 = Y_DEFP(v1938);
y_initu(&yd_141, &F.v11192);
yr2330_OpenScope(0);
((void * *)(v1878).p)[y_ix1(v1878, Y_DEFI(v1273))] = ((void *)0);
v1279 = INT64_C(0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(v1938);
while ((!(Y_DEFP(F.v11190) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11190)))).f_ival) == INT64_C(0))) {
yr3788_CompileModule(Y_DEFP(F.v11190));
}
F.v11190 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11190)))).f_next);
}
yr3751_ResolveLater(Y_DEFI(v1273));
yr3667_RunDeferred(INT64_C(0), INT64_C(0));
yr3549_CheckEffects();
if ((Y_DEFI(v1691) == v1498)) {
F.v11192 = v996;
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr3812_AwaitProcesses();
v1726 = v996;
v996 = F.v11192;
} else {
yr3812_AwaitProcesses();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4189_WriteProgram(void) {
struct yf4190 F;
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
yr4194_WriteHead();
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4194_WriteHead(void) {
struct yf4195 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
yr1151_WriteBuf(v1724);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR105, f_kind), offsetof(yR105, f_line), offsetof(yR105, f_ival), offsetof(yR105, f_flag), offsetof(yR105, f_name), offsetof(yR105, f_text), offsetof(yR105, f_a), offsetof(yR105, f_b), offsetof(yR105, f_c), offsetof(yR105, f_d), offsetof(yR105, f_e), offsetof(yR105, f_next), offsetof(yR105, f_rep), offsetof(yR105, f_sym), offsetof(yR105, f_x), offsetof(yR105, f_t0), offsetof(yR105, f_t1), 0}; const ydesc **f = rt_alloc(18 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_int; y_desc_record(&yd_106, sizeof(yR105), 17, o, (const ydesc *const *)f); }
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
v204 = Y_UNDEF_I;
v204 = INT64_C(0);
v207 = Y_UNDEF_I;
v207 = INT64_C(1);
v210 = Y_UNDEF_I;
v210 = INT64_C(2);
v213 = Y_UNDEF_I;
v213 = INT64_C(3);
v216 = Y_UNDEF_I;
v216 = INT64_C(4);
v219 = Y_UNDEF_I;
v219 = INT64_C(5);
v222 = Y_UNDEF_I;
v222 = INT64_C(6);
v225 = Y_UNDEF_I;
v225 = INT64_C(7);
v228 = Y_UNDEF_I;
v228 = INT64_C(8);
v231 = Y_UNDEF_I;
v231 = INT64_C(1);
v234 = Y_UNDEF_I;
v234 = INT64_C(2);
v237 = Y_UNDEF_I;
v237 = INT64_C(3);
v240 = Y_UNDEF_I;
v240 = INT64_C(4);
v243 = Y_UNDEF_I;
v243 = INT64_C(5);
v246 = Y_UNDEF_I;
v246 = INT64_C(6);
v249 = Y_UNDEF_I;
v249 = INT64_C(7);
v252 = Y_UNDEF_I;
v252 = INT64_C(8);
v255 = Y_UNDEF_I;
v255 = INT64_C(9);
v258 = Y_UNDEF_I;
v258 = INT64_C(10);
v261 = Y_UNDEF_I;
v261 = INT64_C(11);
v264 = Y_UNDEF_I;
v264 = INT64_C(12);
v267 = Y_UNDEF_I;
v267 = INT64_C(13);
v270 = Y_UNDEF_I;
v270 = INT64_C(14);
v273 = Y_UNDEF_I;
v273 = INT64_C(15);
v276 = Y_UNDEF_I;
v276 = INT64_C(16);
v279 = Y_UNDEF_I;
v279 = INT64_C(17);
v282 = Y_UNDEF_I;
v282 = INT64_C(18);
v285 = Y_UNDEF_I;
v285 = INT64_C(19);
v288 = Y_UNDEF_I;
v288 = INT64_C(20);
v291 = Y_UNDEF_I;
v291 = INT64_C(21);
v294 = Y_UNDEF_I;
v294 = INT64_C(22);
v297 = Y_UNDEF_I;
v297 = INT64_C(23);
v300 = Y_UNDEF_I;
v300 = INT64_C(24);
v303 = Y_UNDEF_I;
v303 = INT64_C(25);
v306 = Y_UNDEF_I;
v306 = INT64_C(26);
v309 = Y_UNDEF_I;
v309 = INT64_C(27);
v312 = Y_UNDEF_I;
v312 = INT64_C(28);
v315 = Y_UNDEF_I;
v315 = INT64_C(29);
v318 = Y_UNDEF_I;
v318 = INT64_C(30);
v321 = Y_UNDEF_I;
v321 = INT64_C(31);
v324 = Y_UNDEF_I;
v324 = INT64_C(32);
v327 = Y_UNDEF_I;
v327 = INT64_C(33);
v330 = Y_UNDEF_I;
v330 = INT64_C(34);
v333 = Y_UNDEF_I;
v333 = INT64_C(35);
v336 = Y_UNDEF_I;
v336 = INT64_C(36);
v339 = Y_UNDEF_I;
v339 = INT64_C(37);
v342 = Y_UNDEF_I;
v342 = INT64_C(38);
v345 = Y_UNDEF_I;
v345 = INT64_C(39);
v348 = Y_UNDEF_I;
v348 = INT64_C(40);
v351 = Y_UNDEF_I;
v351 = INT64_C(41);
v354 = Y_UNDEF_I;
v354 = INT64_C(42);
v357 = Y_UNDEF_I;
v357 = INT64_C(43);
v360 = Y_UNDEF_I;
v360 = INT64_C(44);
v363 = Y_UNDEF_I;
v363 = INT64_C(45);
v366 = Y_UNDEF_I;
v366 = INT64_C(46);
v369 = Y_UNDEF_I;
v369 = INT64_C(47);
v372 = Y_UNDEF_I;
v372 = INT64_C(48);
v375 = Y_UNDEF_I;
v375 = INT64_C(49);
v378 = Y_UNDEF_I;
v378 = INT64_C(50);
v381 = Y_UNDEF_I;
v381 = INT64_C(51);
v384 = Y_UNDEF_I;
v384 = INT64_C(52);
v387 = Y_UNDEF_I;
v387 = INT64_C(53);
v390 = Y_UNDEF_I;
v390 = INT64_C(54);
v393 = Y_UNDEF_I;
v393 = INT64_C(55);
v396 = Y_UNDEF_I;
v396 = INT64_C(56);
v399 = Y_UNDEF_I;
v399 = INT64_C(57);
v402 = Y_UNDEF_I;
v402 = INT64_C(58);
v405 = Y_UNDEF_I;
v405 = INT64_C(59);
v408 = Y_UNDEF_I;
v408 = INT64_C(60);
v411 = Y_UNDEF_I;
v411 = INT64_C(61);
v414 = Y_UNDEF_I;
v414 = INT64_C(62);
v417 = Y_UNDEF_I;
v417 = INT64_C(63);
v420 = Y_UNDEF_I;
v420 = INT64_C(64);
v423 = Y_UNDEF_I;
v423 = INT64_C(65);
v426 = Y_UNDEF_I;
v426 = INT64_C(66);
v429 = Y_UNDEF_I;
v429 = INT64_C(67);
v432 = Y_UNDEF_I;
v432 = INT64_C(68);
v435 = Y_UNDEF_I;
v435 = INT64_C(69);
v438 = Y_UNDEF_I;
v438 = INT64_C(70);
v441 = Y_UNDEF_I;
v441 = INT64_C(71);
v444 = Y_UNDEF_I;
v444 = INT64_C(72);
v447 = Y_UNDEF_I;
v447 = INT64_C(73);
v450 = Y_UNDEF_I;
v450 = INT64_C(74);
v453 = Y_UNDEF_I;
v453 = INT64_C(75);
v456 = Y_UNDEF_I;
v456 = INT64_C(76);
v459 = Y_UNDEF_I;
v459 = INT64_C(77);
v462 = Y_UNDEF_I;
v462 = INT64_C(78);
v465 = Y_UNDEF_I;
v465 = INT64_C(79);
v468 = Y_UNDEF_I;
v468 = INT64_C(80);
v471 = Y_UNDEF_I;
v471 = INT64_C(81);
v474 = Y_UNDEF_I;
v474 = INT64_C(82);
v477 = Y_UNDEF_I;
v477 = INT64_C(83);
v480 = Y_UNDEF_I;
v480 = INT64_C(84);
v483 = Y_UNDEF_I;
v483 = INT64_C(85);
v486 = Y_UNDEF_I;
v486 = INT64_C(86);
v489 = Y_UNDEF_I;
v489 = INT64_C(87);
v492 = Y_UNDEF_I;
v492 = INT64_C(87);
v495 = Y_UNDEF_I;
v495 = INT64_C(88);
v498 = Y_UNDEF_I;
v498 = INT64_C(89);
v501 = Y_UNDEF_I;
v501 = INT64_C(90);
v504 = Y_UNDEF_I;
v504 = INT64_C(91);
v507 = Y_UNDEF_I;
v507 = INT64_C(92);
v510 = Y_UNDEF_I;
v510 = INT64_C(93);
v513 = Y_UNDEF_I;
v513 = INT64_C(94);
v516 = Y_UNDEF_I;
v516 = INT64_C(95);
v519 = Y_UNDEF_I;
v519 = INT64_C(96);
v522 = Y_UNDEF_I;
v522 = INT64_C(97);
v525 = Y_UNDEF_I;
v525 = INT64_C(98);
v528 = Y_UNDEF_I;
v528 = INT64_C(99);
v531 = Y_UNDEF_I;
v531 = INT64_C(100);
v534 = Y_UNDEF_I;
v534 = INT64_C(101);
v537 = Y_UNDEF_I;
v537 = INT64_C(102);
v540 = Y_UNDEF_I;
v540 = INT64_C(103);
v543 = Y_UNDEF_I;
v543 = INT64_C(104);
v546 = Y_UNDEF_I;
v546 = INT64_C(105);
v549 = Y_UNDEF_I;
v549 = INT64_C(106);
v552 = Y_UNDEF_I;
v552 = INT64_C(107);
v555 = Y_UNDEF_I;
v555 = INT64_C(108);
v558 = Y_UNDEF_I;
v558 = INT64_C(109);
v561 = Y_UNDEF_I;
v561 = INT64_C(110);
v564 = Y_UNDEF_I;
v564 = INT64_C(111);
v567 = Y_UNDEF_I;
v567 = INT64_C(112);
v570 = Y_UNDEF_I;
v570 = INT64_C(113);
v573 = Y_UNDEF_I;
v573 = INT64_C(114);
v576 = Y_UNDEF_I;
v576 = INT64_C(115);
v579 = Y_UNDEF_I;
v579 = INT64_C(116);
v582 = Y_UNDEF_I;
v582 = INT64_C(117);
v585 = Y_UNDEF_I;
v585 = INT64_C(118);
v588 = Y_UNDEF_I;
v588 = INT64_C(119);
v591 = Y_UNDEF_I;
v591 = INT64_C(120);
v594 = Y_UNDEF_I;
v594 = INT64_C(121);
v597 = Y_UNDEF_I;
v597 = INT64_C(122);
v600 = Y_UNDEF_I;
v600 = INT64_C(123);
v603 = Y_UNDEF_I;
v603 = INT64_C(124);
v606 = Y_UNDEF_I;
v606 = INT64_C(125);
v609 = Y_UNDEF_I;
v609 = INT64_C(126);
v612 = Y_UNDEF_I;
v612 = INT64_C(127);
v615 = Y_UNDEF_I;
v615 = INT64_C(128);
v618 = Y_UNDEF_I;
v618 = INT64_C(129);
v621 = Y_UNDEF_I;
v621 = INT64_C(129);
v624 = Y_UNDEF_I;
v624 = INT64_C(1);
v627 = Y_UNDEF_I;
v627 = INT64_C(2);
v630 = Y_UNDEF_I;
v630 = INT64_C(3);
v633 = Y_UNDEF_I;
v633 = INT64_C(4);
v636 = Y_UNDEF_I;
v636 = INT64_C(5);
v639 = Y_UNDEF_I;
v639 = INT64_C(6);
v642 = Y_UNDEF_I;
v642 = INT64_C(7);
v645 = Y_UNDEF_I;
v645 = INT64_C(8);
v648 = Y_UNDEF_I;
v648 = INT64_C(9);
v651 = Y_UNDEF_I;
v651 = INT64_C(10);
v654 = Y_UNDEF_I;
v654 = INT64_C(11);
v657 = Y_UNDEF_I;
v657 = INT64_C(12);
v660 = Y_UNDEF_I;
v660 = INT64_C(13);
v663 = Y_UNDEF_I;
v663 = INT64_C(14);
v666 = Y_UNDEF_I;
v666 = INT64_C(15);
v669 = Y_UNDEF_I;
v669 = INT64_C(16);
v672 = Y_UNDEF_I;
v672 = INT64_C(20);
v675 = Y_UNDEF_I;
v675 = INT64_C(21);
v678 = Y_UNDEF_I;
v678 = INT64_C(22);
v681 = Y_UNDEF_I;
v681 = INT64_C(23);
v684 = Y_UNDEF_I;
v684 = INT64_C(24);
v687 = Y_UNDEF_I;
v687 = INT64_C(25);
v690 = Y_UNDEF_I;
v690 = INT64_C(26);
v693 = Y_UNDEF_I;
v693 = INT64_C(27);
v696 = Y_UNDEF_I;
v696 = INT64_C(28);
v699 = Y_UNDEF_I;
v699 = INT64_C(29);
v702 = Y_UNDEF_I;
v702 = INT64_C(30);
v705 = Y_UNDEF_I;
v705 = INT64_C(31);
v708 = Y_UNDEF_I;
v708 = INT64_C(32);
v711 = Y_UNDEF_I;
v711 = INT64_C(33);
v714 = Y_UNDEF_I;
v714 = INT64_C(40);
v717 = Y_UNDEF_I;
v717 = INT64_C(41);
v720 = Y_UNDEF_I;
v720 = INT64_C(42);
v723 = Y_UNDEF_I;
v723 = INT64_C(43);
v726 = Y_UNDEF_I;
v726 = INT64_C(44);
v729 = Y_UNDEF_I;
v729 = INT64_C(45);
v732 = Y_UNDEF_I;
v732 = INT64_C(46);
v735 = Y_UNDEF_I;
v735 = INT64_C(47);
v738 = Y_UNDEF_I;
v738 = INT64_C(48);
v741 = Y_UNDEF_I;
v741 = INT64_C(49);
v744 = Y_UNDEF_I;
v744 = INT64_C(50);
v747 = Y_UNDEF_I;
v747 = INT64_C(51);
v750 = Y_UNDEF_I;
v750 = INT64_C(52);
v753 = Y_UNDEF_I;
v753 = INT64_C(53);
v756 = Y_UNDEF_I;
v756 = INT64_C(54);
v759 = Y_UNDEF_I;
v759 = INT64_C(60);
v762 = Y_UNDEF_I;
v762 = INT64_C(61);
v765 = Y_UNDEF_I;
v765 = INT64_C(62);
v768 = Y_UNDEF_I;
v768 = INT64_C(63);
v771 = Y_UNDEF_I;
v771 = INT64_C(64);
v774 = Y_UNDEF_I;
v774 = INT64_C(65);
v777 = Y_UNDEF_I;
v777 = INT64_C(66);
v780 = Y_UNDEF_I;
v780 = INT64_C(67);
v783 = Y_UNDEF_I;
v783 = INT64_C(68);
v786 = Y_UNDEF_I;
v786 = INT64_C(69);
v789 = Y_UNDEF_I;
v789 = INT64_C(70);
v792 = Y_UNDEF_I;
v792 = INT64_C(71);
v795 = Y_UNDEF_I;
v795 = INT64_C(72);
v798 = Y_UNDEF_I;
v798 = INT64_C(73);
v801 = Y_UNDEF_I;
v801 = INT64_C(74);
v804 = Y_UNDEF_I;
v804 = INT64_C(1);
v807 = Y_UNDEF_I;
v807 = INT64_C(2);
v810 = Y_UNDEF_I;
v810 = INT64_C(3);
v813 = Y_UNDEF_I;
v813 = INT64_C(4);
v816 = Y_UNDEF_I;
v816 = INT64_C(5);
v819 = Y_UNDEF_I;
v819 = INT64_C(6);
v822 = Y_UNDEF_I;
v822 = INT64_C(7);
v825 = Y_UNDEF_I;
v825 = INT64_C(8);
v828 = Y_UNDEF_I;
v828 = INT64_C(9);
v831 = Y_UNDEF_I;
v831 = INT64_C(10);
v834 = Y_UNDEF_I;
v834 = INT64_C(11);
v837 = Y_UNDEF_I;
v837 = INT64_C(12);
v840 = Y_UNDEF_I;
v840 = INT64_C(13);
v843 = Y_UNDEF_I;
v843 = INT64_C(14);
v846 = Y_UNDEF_I;
v846 = INT64_C(15);
v849 = Y_UNDEF_I;
v849 = INT64_C(16);
v852 = Y_UNDEF_I;
v852 = INT64_C(17);
v855 = Y_UNDEF_I;
v855 = INT64_C(18);
v858 = Y_UNDEF_I;
v858 = INT64_C(19);
v861 = Y_UNDEF_I;
v861 = INT64_C(1);
v864 = Y_UNDEF_I;
v864 = INT64_C(2);
v867 = Y_UNDEF_I;
v867 = INT64_C(3);
v870 = Y_UNDEF_I;
v870 = INT64_C(4);
v873 = Y_UNDEF_I;
v873 = INT64_C(5);
v876 = Y_UNDEF_I;
v876 = INT64_C(6);
v879 = Y_UNDEF_I;
v879 = INT64_C(7);
v882 = Y_UNDEF_I;
v882 = INT64_C(8);
v885 = Y_UNDEF_I;
v885 = INT64_C(9);
v888 = Y_UNDEF_I;
v888 = INT64_C(10);
v891 = Y_UNDEF_I;
v891 = INT64_C(11);
v894 = Y_UNDEF_I;
v894 = INT64_C(12);
v897 = Y_UNDEF_I;
v897 = INT64_C(1);
v900 = Y_UNDEF_I;
v900 = INT64_C(2);
v903 = Y_UNDEF_I;
v903 = INT64_C(3);
v906 = Y_UNDEF_I;
v906 = INT64_C(9223372036854775807);
y_initu(&yd_151, &v913);
v915 = Y_UNDEF_I;
v915 = INT64_C(0);
y_initu(&yd_161, &v918);
y_initu(&yd_161, &v920);
v922 = Y_UNDEF_I;
v922 = INT64_C(0);
y_initu(&yd_181, &v925);
v927 = Y_UNDEF_I;
v927 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_937, 1, lo, hi, &y_d_byte); }
y_initu(&yd_937, &v939);
v941 = Y_UNDEF_I;
v941 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_951, 1, lo, hi, &y_d_int); }
y_initu(&yd_951, &v953);
v955 = Y_UNDEF_I;
v955 = INT64_C(0);
v958 = Y_UNDEF_I;
v958 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_963, 1, lo, hi, &y_d_int); }
y_initu(&yd_963, &v965);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_974, 1, lo, hi, &y_d_byte); }
y_initu(&yd_974, &v976);
y_initu(&yd_141, &v978);
y_initu(&yd_141, &v980);
y_initu(&yd_141, &v982);
y_initu(&yd_141, &v984);
y_initu(&yd_141, &v986);
y_initu(&yd_141, &v988);
y_initu(&yd_141, &v990);
y_initu(&yd_141, &v992);
y_initu(&yd_141, &v996);
y_initu(&yd_141, &v998);
v1000 = Y_UNDEF_I;
v1000 = INT64_C(0);
y_initu(&yd_171, &v1207);
y_initu(&yd_171, &v1209);
y_initu(&yd_171, &v1211);
v1213 = Y_UNDEF_I;
v1213 = INT64_C(0);
v1216 = Y_UNDEF_I;
v1216 = INT64_C(0);
v1219 = Y_UNDEF_I;
v1219 = INT64_C(0);
v1222 = Y_UNDEF_I;
v1222 = INT64_C(0);
v1225 = Y_UNDEF_I;
v1225 = INT64_C(1);
v1228 = Y_UNDEF_I;
v1228 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1238, 1, lo, hi, &y_d_int); }
y_initu(&yd_1238, &v1240);
y_initu(&yd_1238, &v1242);
y_initu(&yd_1238, &v1244);
v1246 = Y_UNDEF_I;
v1246 = INT64_C(0);
v1249 = Y_UNDEF_I;
v1249 = INT64_C(1);
v1252 = Y_UNDEF_P;
v1252 = ((void *)0);
v1254 = Y_UNDEF_I;
v1254 = INT64_C(0);
v1257 = Y_UNDEF_I;
v1257 = INT64_C(0);
y_initu(&yd_191, &v1260);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1269, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1269, &v1271);
v1273 = Y_UNDEF_I;
v1273 = INT64_C(-1);
v1276 = Y_UNDEF_I;
v1276 = INT64_C(0);
v1279 = Y_UNDEF_I;
v1279 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1289, 1, lo, hi, &y_d_int); }
y_initu(&yd_1289, &v1291);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1300, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1300, &v1302);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1311, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1311, &v1313);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1322, 1, lo, hi, &y_d_int); }
y_initu(&yd_1322, &v1324);
y_initu(&yd_1322, &v1326);
v1328 = Y_UNDEF_I;
v1328 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1338, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1338, &v1340);
v1342 = Y_UNDEF_P;
v1344 = Y_UNDEF_P;
v1346 = Y_UNDEF_P;
v1348 = Y_UNDEF_P;
v1350 = Y_UNDEF_P;
v1352 = Y_UNDEF_P;
v1354 = Y_UNDEF_P;
v1356 = Y_UNDEF_P;
v1358 = Y_UNDEF_P;
v1360 = Y_UNDEF_P;
v1362 = Y_UNDEF_P;
v1364 = Y_UNDEF_P;
v1364 = ((void *)0);
v1366 = Y_UNDEF_I;
v1366 = INT64_C(1);
v1369 = Y_UNDEF_I;
v1369 = INT64_C(2);
v1372 = Y_UNDEF_I;
v1372 = INT64_C(3);
v1375 = Y_UNDEF_I;
v1375 = INT64_C(4);
v1378 = Y_UNDEF_I;
v1378 = INT64_C(5);
v1381 = Y_UNDEF_I;
v1381 = INT64_C(6);
v1384 = Y_UNDEF_I;
v1384 = INT64_C(7);
v1387 = Y_UNDEF_I;
v1387 = INT64_C(8);
v1390 = Y_UNDEF_I;
v1390 = INT64_C(9);
v1393 = Y_UNDEF_I;
v1393 = INT64_C(10);
v1396 = Y_UNDEF_I;
v1396 = INT64_C(11);
v1399 = Y_UNDEF_I;
v1399 = INT64_C(12);
v1402 = Y_UNDEF_I;
v1402 = INT64_C(13);
v1405 = Y_UNDEF_I;
v1405 = INT64_C(14);
v1408 = Y_UNDEF_I;
v1408 = INT64_C(15);
v1411 = Y_UNDEF_I;
v1411 = INT64_C(16);
v1414 = Y_UNDEF_I;
v1414 = INT64_C(17);
v1417 = Y_UNDEF_I;
v1417 = INT64_C(18);
v1420 = Y_UNDEF_I;
v1420 = INT64_C(19);
v1423 = Y_UNDEF_I;
v1423 = INT64_C(20);
v1426 = Y_UNDEF_I;
v1426 = INT64_C(21);
v1429 = Y_UNDEF_I;
v1429 = INT64_C(22);
v1432 = Y_UNDEF_I;
v1432 = INT64_C(23);
v1435 = Y_UNDEF_I;
v1435 = INT64_C(24);
v1438 = Y_UNDEF_I;
v1438 = INT64_C(25);
v1441 = Y_UNDEF_I;
v1441 = INT64_C(26);
v1444 = Y_UNDEF_I;
v1444 = INT64_C(27);
v1447 = Y_UNDEF_I;
v1447 = INT64_C(28);
v1450 = Y_UNDEF_I;
v1450 = INT64_C(29);
v1453 = Y_UNDEF_I;
v1453 = INT64_C(30);
v1456 = Y_UNDEF_I;
v1456 = INT64_C(31);
v1459 = Y_UNDEF_I;
v1459 = INT64_C(32);
v1462 = Y_UNDEF_I;
v1462 = INT64_C(33);
v1465 = Y_UNDEF_I;
v1465 = INT64_C(34);
v1468 = Y_UNDEF_I;
v1468 = INT64_C(35);
v1471 = Y_UNDEF_I;
v1471 = INT64_C(36);
v1474 = Y_UNDEF_I;
v1474 = INT64_C(37);
v1477 = Y_UNDEF_I;
v1477 = INT64_C(38);
v1480 = Y_UNDEF_I;
v1480 = INT64_C(1);
v1483 = Y_UNDEF_I;
v1483 = INT64_C(2);
v1486 = Y_UNDEF_I;
v1486 = INT64_C(4);
v1489 = Y_UNDEF_I;
v1489 = INT64_C(8);
v1492 = Y_UNDEF_I;
v1492 = INT64_C(0);
v1495 = Y_UNDEF_I;
v1495 = INT64_C(1);
v1498 = Y_UNDEF_I;
v1498 = INT64_C(2);
v1501 = Y_UNDEF_I;
v1501 = INT64_C(3);
v1504 = Y_UNDEF_I;
v1504 = INT64_C(1);
v1507 = Y_UNDEF_I;
v1507 = INT64_C(2);
v1510 = Y_UNDEF_I;
v1510 = INT64_C(3);
v1513 = Y_UNDEF_I;
v1513 = INT64_C(0);
v1516 = Y_UNDEF_P;
v1516 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1525, 1, lo, hi, &y_d_int); }
y_initu(&yd_1525, &v1527);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1536, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1536, &v1538);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1547, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1547, &v1549);
v1551 = Y_UNDEF_I;
v1551 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1561, 1, lo, hi, &y_d_int); }
y_initu(&yd_1561, &v1563);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1572, 1, lo, hi, &y_d_int); }
y_initu(&yd_1572, &v1574);
v1576 = Y_UNDEF_I;
v1576 = INT64_C(0);
v1579 = Y_UNDEF_I;
v1579 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1589, 1, lo, hi, &y_d_int); }
y_initu(&yd_1589, &v1591);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1600, 1, lo, hi, &y_d_int); }
y_initu(&yd_1600, &v1602);
v1604 = Y_UNDEF_I;
v1604 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1614, 1, lo, hi, &y_d_int); }
y_initu(&yd_1614, &v1616);
v1618 = Y_UNDEF_I;
v1618 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1628, 1, lo, hi, &y_d_int); }
y_initu(&yd_1628, &v1630);
y_initu(&yd_1628, &v1632);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1641, 1, lo, hi, &y_d_int); }
y_initu(&yd_1641, &v1643);
v1645 = Y_UNDEF_I;
v1645 = INT64_C(0);
v1648 = Y_UNDEF_I;
v1648 = INT64_C(0);
v1651 = Y_UNDEF_P;
v1651 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1660, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1660, &v1662);
y_initu(&yd_1660, &v1664);
v1666 = Y_UNDEF_I;
v1666 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1676, 1, lo, hi, &y_d_int); }
y_initu(&yd_1676, &v1678);
v1680 = Y_UNDEF_I;
v1680 = 0;
v1683 = Y_UNDEF_I;
v1683 = INT64_C(0);
v1686 = Y_UNDEF_I;
v1686 = INT64_C(0);
v1689 = Y_UNDEF_P;
v1689 = ((void *)0);
v1691 = Y_UNDEF_I;
v1691 = INT64_C(0);
v1694 = Y_UNDEF_I;
v1694 = INT64_C(0);
v1697 = Y_UNDEF_P;
v1697 = ((void *)0);
v1699 = Y_UNDEF_P;
v1699 = ((void *)0);
v1701 = Y_UNDEF_I;
v1701 = INT64_C(0);
v1704 = Y_UNDEF_I;
v1704 = INT64_C(0);
v1707 = Y_UNDEF_I;
v1707 = INT64_C(0);
v1710 = Y_UNDEF_I;
v1710 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64)}; y_desc_array(&yd_1720, 1, lo, hi, &y_d_int); }
y_initu(&yd_1720, &v1722);
y_initu(&yd_141, &v1724);
y_initu(&yd_141, &v1726);
v1728 = Y_UNDEF_I;
v1728 = INT64_C(0);
v1731 = Y_UNDEF_P;
v1731 = ((void *)0);
v1733 = Y_UNDEF_P;
v1733 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1742, 1, lo, hi, &y_d_int); }
y_initu(&yd_1742, &v1744);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1753, 1, lo, hi, &y_d_int); }
y_initu(&yd_1753, &v1755);
v1757 = Y_UNDEF_I;
v1757 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1767, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1767, &v1769);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1778, 1, lo, hi, &y_d_int); }
y_initu(&yd_1778, &v1780);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1789, 1, lo, hi, &y_d_int); }
y_initu(&yd_1789, &v1791);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1800, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1800, &v1802);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1811, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1811, &v1813);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1822, 1, lo, hi, &y_d_int); }
y_initu(&yd_1822, &v1824);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1833, 1, lo, hi, &y_d_int); }
y_initu(&yd_1833, &v1835);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1844, 1, lo, hi, &y_d_int); }
y_initu(&yd_1844, &v1846);
y_initu(&yd_1844, &v1848);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1857, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1857, &v1859);
v1861 = Y_UNDEF_I;
v1861 = INT64_C(0);
v1864 = Y_UNDEF_I;
v1864 = INT64_C(0);
v1867 = Y_UNDEF_P;
v1867 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1876, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1876, &v1878);
v1880 = Y_UNDEF_I;
v1880 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1890, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1890, &v1892);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1901, 1, lo, hi, &y_d_int); }
y_initu(&yd_1901, &v1903);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1912, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1912, &v1914);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1923, 1, lo, hi, &y_d_int); }
y_initu(&yd_1923, &v1925);
y_initu(&yd_1923, &v1927);
v1929 = Y_UNDEF_I;
v1929 = INT64_C(0);
v1932 = Y_UNDEF_P;
v1934 = Y_UNDEF_P;
v1936 = Y_UNDEF_P;
v1938 = Y_UNDEF_P;
/* yellowc */
{ rt_int hi11226 = INT64_C(262143);
for (rt_int i11225 = INT64_C(0); i11225 <= hi11226; i11225++) { c_11224 = i11225; Y_TICK();
((rt_int *)(v925).p)[y_ix1(v925, c_11224)] = INT64_C(0);
if (i11225 == hi11226) break;
}}
{ rt_int hi11236 = INT64_C(8191);
for (rt_int i11235 = INT64_C(0); i11235 <= hi11236; i11235++) { c_11234 = i11235; Y_TICK();
((void * *)(v1260).p)[y_ix1(v1260, c_11234)] = ((void *)0);
if (i11235 == hi11236) break;
}}
{ rt_int hi11245 = INT64_C(400);
for (rt_int i11244 = INT64_C(0); i11244 <= hi11245; i11244++) { c_11243 = i11244; Y_TICK();
((void * *)(v1302).p)[y_ix1(v1302, c_11243)] = ((void *)0);
((void * *)(v1313).p)[y_ix1(v1313, c_11243)] = ((void *)0);
((void * *)(v1878).p)[y_ix1(v1878, c_11243)] = ((void *)0);
if (i11244 == hi11245) break;
}}
v978 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v980 = v978;
v982 = v978;
v984 = v978;
v986 = v978;
v988 = v978;
v990 = v978;
v992 = v978;
v1724 = v978;
v1726 = v978;
v996 = v978;
v998 = v978;
yr1003_InitChars();
yr1940_InitWords();
v1254 = yr1081_N(y_str("FROM", 4));
v1257 = yr1081_N(y_str("DIMENSION", 9));
v1513 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v911, y_str("OUTPUT", 6), 1);
y_open(&v994, y_str("ERROR", 5), 1);
yr3959_ReadArgs();
if ((Y_DEFI(v1691) == v1501)) {
yr4091_LinkProgram();
} else {
yr1945_ReadSource();
yr1999_Lex();
v1938 = yr2318_ParseProgram();
yr4179_Predefine();
if ((Y_DEFI(v1691) == v1495)) {
yr4069_Interface();
} else if ((Y_DEFI(v1691) == v1498)) {
yr4074_Segment();
} else {
yr4046_PairInInput();
yr4184_Translate();
yr4189_WriteProgram();
}
}
y_close(&v911);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
