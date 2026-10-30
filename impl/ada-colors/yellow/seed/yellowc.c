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
struct yf1966;
struct yf1971;
struct yf1978;
struct yf1984;
struct yf1989;
struct yf1995;
struct yf2002;
struct yf2009;
struct yf2015;
struct yf2020;
struct yf2025;
struct yf2032;
struct yf2040;
struct yf2046;
struct yf2051;
struct yf2056;
struct yf2061;
struct yf2068;
struct yf2074;
struct yf2080;
struct yf2085;
struct yf2091;
struct yf2096;
struct yf2102;
struct yf2107;
struct yf2114;
struct yf2119;
struct yf2125;
struct yf2130;
struct yf2135;
struct yf2140;
struct yf2145;
struct yf2150;
struct yf2155;
struct yf2161;
struct yf2167;
struct yf2174;
struct yf2179;
struct yf2184;
struct yf2190;
struct yf2195;
struct yf2201;
struct yf2206;
struct yf2211;
struct yf2216;
struct yf2221;
struct yf2226;
struct yf2231;
struct yf2236;
struct yf2242;
struct yf2247;
struct yf2252;
struct yf2258;
struct yf2264;
struct yf2270;
struct yf2276;
struct yf2282;
struct yf2291;
struct yf2298;
struct yf2303;
struct yf2308;
struct yf2313;
struct yf2319;
struct yf2324;
struct yf2329;
struct yf2334;
struct yf2339;
struct yf2344;
struct yf2351;
struct yf2357;
struct yf2363;
struct yf2368;
struct yf2374;
struct yf2380;
struct yf2386;
struct yf2393;
struct yf2400;
struct yf2406;
struct yf2413;
struct yf2420;
struct yf2427;
struct yf2433;
struct yf2439;
struct yf2446;
struct yf2453;
struct yf2460;
struct yf2466;
struct yf2473;
struct yf2479;
struct yf2485;
struct yf2492;
struct yf2498;
struct yf2504;
struct yf2510;
struct yf2516;
struct yf2522;
struct yf2528;
struct yf2535;
struct yf2541;
struct yf2547;
struct yf2553;
struct yf2559;
struct yf2565;
struct yf2572;
struct yf2580;
struct yf2588;
struct yf2595;
struct yf2601;
struct yf2607;
struct yf2614;
struct yf2620;
struct yf2628;
struct yf2634;
struct yf2640;
struct yf2648;
struct yf2654;
struct yf2661;
struct yf2669;
struct yf2677;
struct yf2687;
struct yf2694;
struct yf2702;
struct yf2709;
struct yf2715;
struct yf2723;
struct yf2729;
struct yf2737;
struct yf2744;
struct yf2752;
struct yf2759;
struct yf2764;
struct yf2770;
struct yf2783;
struct yf2794;
struct yf2802;
struct yf2809;
struct yf2815;
struct yf2822;
struct yf2829;
struct yf2837;
struct yf2844;
struct yf2851;
struct yf2857;
struct yf2863;
struct yf2869;
struct yf2875;
struct yf2883;
struct yf2890;
struct yf2896;
struct yf2903;
struct yf2910;
struct yf2918;
struct yf2924;
struct yf2931;
struct yf2938;
struct yf2946;
struct yf2955;
struct yf2963;
struct yf2971;
struct yf2978;
struct yf2986;
struct yf2994;
struct yf3002;
struct yf3013;
struct yf3021;
struct yf3030;
struct yf3036;
struct yf3044;
struct yf3054;
struct yf3064;
struct yf3070;
struct yf3076;
struct yf3084;
struct yf3090;
struct yf3097;
struct yf3103;
struct yf3112;
struct yf3120;
struct yf3126;
struct yf3132;
struct yf3138;
struct yf3145;
struct yf3153;
struct yf3162;
struct yf3168;
struct yf3176;
struct yf3186;
struct yf3192;
struct yf3201;
struct yf3209;
struct yf3218;
struct yf3227;
struct yf3233;
struct yf3238;
struct yf3245;
struct yf3254;
struct yf3261;
struct yf3269;
struct yf3275;
struct yf3284;
struct yf3292;
struct yf3299;
struct yf3308;
struct yf3314;
struct yf3325;
struct yf3332;
struct yf3343;
struct yf3349;
struct yf3359;
struct yf3369;
struct yf3379;
struct yf3388;
struct yf3396;
struct yf3404;
struct yf3414;
struct yf3420;
struct yf3425;
struct yf3431;
struct yf3437;
struct yf3443;
struct yf3450;
struct yf3458;
struct yf3465;
struct yf3471;
struct yf3477;
struct yf3483;
struct yf3490;
struct yf3496;
struct yf3502;
struct yf3509;
struct yf3514;
struct yf3520;
struct yf3526;
struct yf3534;
struct yf3540;
struct yf3546;
struct yf3552;
struct yf3558;
struct yf3564;
struct yf3573;
struct yf3581;
struct yf3587;
struct yf3593;
struct yf3600;
struct yf3607;
struct yf3614;
struct yf3622;
struct yf3627;
struct yf3635;
struct yf3641;
struct yf3647;
struct yf3653;
struct yf3660;
struct yf3666;
struct yf3673;
struct yf3680;
struct yf3686;
struct yf3694;
struct yf3703;
struct yf3711;
struct yf3717;
struct yf3724;
struct yf3731;
struct yf3740;
struct yf3747;
struct yf3753;
struct yf3759;
struct yf3765;
struct yf3772;
struct yf3780;
struct yf3787;
struct yf3795;
struct yf3801;
struct yf3810;
struct yf3817;
struct yf3824;
struct yf3830;
struct yf3838;
struct yf3846;
struct yf3853;
struct yf3861;
struct yf3867;
struct yf3873;
struct yf3879;
struct yf3885;
struct yf3890;
struct yf3897;
struct yf3905;
struct yf3911;
struct yf3917;
struct yf3923;
struct yf3928;
struct yf3934;
struct yf3941;
struct yf3948;
struct yf3955;
struct yf3962;
struct yf3969;
struct yf3977;
struct yf3983;
struct yf3992;
struct yf4000;
struct yf4006;
struct yf4012;
struct yf4019;
struct yf4029;
struct yf4034;
struct yf4040;
struct yf4045;
struct yf4053;
struct yf4059;
struct yf4066;
struct yf4072;
struct yf4079;
struct yf4085;
struct yf4092;
struct yf4098;
struct yf4107;
struct yf4114;
struct yf4120;
struct yf4127;
struct yf4132;
struct yf4139;
struct yf4145;
struct yf4150;
struct yf4155;
struct yf4160;
struct yf4166;
struct yf4172;
struct yf4177;
struct yf4184;
struct yf4191;
struct yf4197;
struct yf4203;
struct yf4211;
struct yf4219;
struct yf4226;
struct yf4232;
struct yf4238;
struct yf4243;
struct yf4249;
struct yf4257;
struct yf4265;
struct yf4273;
struct yf4283;
struct yf4291;
struct yf4296;
struct yf4301;
struct yf4306;
struct yf4311;
struct yf9165;
struct yf9172;
struct yf9177;
struct yf9183;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; rt_int f_t0; rt_int f_t1; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; rt_int f_skey; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v4316;
rt_int c_4319;
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
rt_int lo4355;
rt_int hi4356;
rt_int c_4358;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v4364;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_4379;
yarr v4381;
rt_int v4383;
rt_int v4386;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v4405;
rt_int lo4416;
rt_int hi4417;
rt_int c_4419;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v4430;
rt_int v4433;
rt_int v4435;
rt_int lo4440;
rt_int hi4441;
rt_int c_4443;
rt_int lo4462;
rt_int hi4463;
rt_int c_4465;
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
rt_int lo4494;
rt_int hi4495;
rt_int c_4497;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4510;
rt_int lo4526;
rt_int hi4527;
rt_int c_4529;
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
void * v4550;
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
rt_int v4564;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4571;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4577;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4587;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4597;
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
rt_int v4609;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4617;
rt_int yu;
};
struct yf1966 { void *up;
rt_int v4621;
rt_int v4623;
rt_int v4625;
rt_int lo4642;
rt_int hi4643;
rt_int c_4645;
rt_int yu;
};
struct yf1971 { void *up;
unsigned char v4654;
rt_int yu;
};
struct yf1978 { void *up;
rt_int p1976;
rt_int p1977;
rt_int yu;
};
struct yf1984 { void *up;
rt_int p1983;
rt_int yu;
};
struct yf1989 { void *up;
rt_int v4671;
rt_int v4673;
rt_int yu;
};
struct yf1995 { void *up;
unsigned char p1994;
rt_int yu;
};
struct yf2002 { void *up;
yarr p2001;
rt_int yu;
};
struct yf2009 { void *up;
rt_int p2007;
rt_int p2008;
rt_int v4703;
rt_int yu;
};
struct yf2015 { void *up;
rt_int p2014;
rt_int v4713;
rt_int v4716;
rt_int v4718;
rt_int v4720;
rt_int v4722;
rt_int v4724;
rt_int v4727;
rt_int v4730;
rt_int v4733;
rt_int v4736;
rt_int v4739;
rt_int v4742;
rt_int v4745;
rt_int lo4783;
rt_int hi4784;
rt_int c_4786;
rt_int lo4815;
rt_int hi4816;
rt_int c_4818;
rt_int lo4825;
rt_int hi4826;
rt_int c_4828;
rt_int yu;
};
struct yf2020 { void *up;
rt_int v4839;
rt_int v4841;
rt_int v4843;
rt_int v4845;
rt_int yu;
};
struct yf2025 { void *up;
unsigned char v4874;
rt_int v4876;
rt_int v4878;
rt_int v4880;
rt_int v4882;
rt_int v4884;
rt_int v4886;
rt_int v4888;
rt_int lo4963;
rt_int hi4964;
rt_int c_4966;
rt_int yu;
};
struct yf2032 { void *up;
rt_int p2030;
rt_int p2031;
void * v4982;
rt_int yu;
};
struct yf2040 { void *up;
void * * p2037;
void * * p2038;
void * p2039;
rt_int yu;
};
struct yf2046 { void *up;
void * p2045;
rt_int v4997;
void * v5000;
rt_int yu;
};
struct yf2051 { void *up;
rt_int yu;
};
struct yf2056 { void *up;
rt_int yu;
};
struct yf2061 { void *up;
rt_int yu;
};
struct yf2068 { void *up;
rt_int p2066;
rt_int p2067;
rt_int v5014;
rt_int yu;
};
struct yf2074 { void *up;
rt_int p2073;
rt_int yu;
};
struct yf2080 { void *up;
rt_int p2079;
rt_int yu;
};
struct yf2085 { void *up;
rt_int yu;
};
struct yf2091 { void *up;
rt_int p2090;
rt_int yu;
};
struct yf2096 { void *up;
rt_int v5037;
rt_int yu;
};
struct yf2102 { void *up;
rt_int p2101;
rt_int v5047;
rt_int yu;
};
struct yf2107 { void *up;
rt_int v5052;
rt_int yu;
};
struct yf2114 { void *up;
rt_int p2112;
rt_int p2113;
rt_int v5059;
rt_int yu;
};
struct yf2119 { void *up;
rt_int v5063;
rt_int yu;
};
struct yf2125 { void *up;
rt_int p2124;
void * v5073;
rt_int yu;
};
struct yf2130 { void *up;
void * v5080;
rt_int yu;
};
struct yf2135 { void *up;
void * v5085;
void * v5087;
void * v5089;
void * v5091;
rt_int v5093;
rt_int yu;
};
struct yf2140 { void *up;
rt_int v5102;
rt_int yu;
};
struct yf2145 { void *up;
void * v5108;
void * v5110;
void * v5112;
void * v5114;
rt_int yu;
};
struct yf2150 { void *up;
void * v5119;
void * v5121;
void * v5123;
void * v5125;
void * v5127;
rt_int yu;
};
struct yf2155 { void *up;
void * v5135;
void * v5137;
void * v5139;
rt_int yu;
};
struct yf2161 { void *up;
rt_int p2160;
void * v5145;
rt_int v5147;
rt_int yu;
};
struct yf2167 { void *up;
rt_int p2166;
rt_int yu;
};
struct yf2174 { void *up;
void * * p2172;
void * * p2173;
rt_int v5168;
void * v5170;
void * v5172;
void * v5174;
rt_int yu;
};
struct yf2179 { void *up;
void * v5178;
rt_int v5180;
rt_int yu;
};
struct yf2184 { void *up;
void * v5185;
void * v5187;
void * v5189;
rt_int v5191;
rt_int v5193;
rt_int v5195;
rt_int yu;
};
struct yf2190 { void *up;
void * p2189;
void * v5211;
void * v5213;
rt_int v5215;
rt_int yu;
};
struct yf2195 { void *up;
void * v5221;
rt_int yu;
};
struct yf2201 { void *up;
rt_int p2200;
rt_int v5233;
rt_int yu;
};
struct yf2206 { void *up;
rt_int v5241;
void * v5243;
rt_int yu;
};
struct yf2211 { void *up;
void * v5252;
void * v5254;
rt_int yu;
};
struct yf2216 { void *up;
void * v5259;
void * v5261;
void * v5263;
rt_int yu;
};
struct yf2221 { void *up;
void * v5268;
void * v5270;
void * v5272;
rt_int v5274;
rt_int yu;
};
struct yf2226 { void *up;
void * v5281;
void * v5283;
void * v5285;
void * v5287;
void * v5289;
void * v5291;
rt_int v5293;
rt_int v5295;
rt_int yu;
};
struct yf2231 { void *up;
void * v5312;
rt_int yu;
};
struct yf2236 { void *up;
rt_int v5317;
rt_int yu;
};
struct yf2242 { void *up;
rt_int p2241;
void * v5326;
void * v5328;
void * v5330;
rt_int v5332;
rt_int yu;
};
struct yf2247 { void *up;
void * v5340;
void * v5342;
void * v5344;
void * v5346;
void * v5348;
void * v5350;
rt_int v5352;
rt_int v5354;
rt_int yu;
};
struct yf2252 { void *up;
rt_int yu;
};
struct yf2258 { void *up;
rt_int p2257;
rt_int yu;
};
struct yf2264 { void *up;
rt_int p2263;
rt_int yu;
};
struct yf2270 { void *up;
rt_int p2269;
rt_int yu;
};
struct yf2276 { void *up;
rt_int p2275;
rt_int yu;
};
struct yf2282 { void *up;
rt_int p2281;
rt_int yu;
};
struct yf2291 { void *up;
rt_int p2287;
void * p2288;
void * p2289;
rt_int p2290;
void * v5408;
rt_int yu;
};
struct yf2298 { void *up;
rt_int p2296;
rt_int p2297;
rt_int v5414;
rt_int yu;
};
struct yf2303 { void *up;
void * v5418;
rt_int v5420;
rt_int v5422;
rt_int yu;
};
struct yf2308 { void *up;
void * v5426;
void * v5428;
rt_int v5430;
rt_int v5432;
rt_int yu;
};
struct yf2313 { void *up;
void * v5438;
rt_int v5440;
rt_int v5442;
rt_int yu;
};
struct yf2319 { void *up;
rt_int p2318;
rt_int v5448;
rt_int yu;
};
struct yf2324 { void *up;
void * v5453;
rt_int v5455;
rt_int v5457;
rt_int yu;
};
struct yf2329 { void *up;
void * v5461;
rt_int v5463;
rt_int v5465;
rt_int yu;
};
struct yf2334 { void *up;
void * v5486;
void * v5488;
void * v5490;
rt_int v5492;
rt_int yu;
};
struct yf2339 { void *up;
rt_int yu;
};
struct yf2344 { void *up;
void * v5499;
void * v5501;
void * v5503;
rt_int v5505;
rt_int yu;
};
struct yf2351 { void *up;
rt_int p2349;
rt_int p2350;
void * v5512;
rt_int yu;
};
struct yf2357 { void *up;
rt_int p2356;
void * v5531;
rt_int yu;
};
struct yf2363 { void *up;
void * p2362;
void * v5538;
rt_int v5540;
rt_int v5543;
rt_int yu;
};
struct yf2368 { void *up;
void * v5555;
void * v5557;
void * v5559;
rt_int v5561;
rt_int yu;
};
struct yf2374 { void *up;
void * p2373;
rt_int yu;
};
struct yf2380 { void *up;
rt_int p2379;
void * v5573;
rt_int yu;
};
struct yf2386 { void *up;
rt_int p2385;
void * v5581;
rt_int yu;
};
struct yf2393 { void *up;
rt_int p2391;
rt_int p2392;
void * v5590;
void * v5592;
rt_int lo5598;
rt_int hi5599;
rt_int c_5601;
rt_int yu;
};
struct yf2400 { void *up;
void * p2398;
void * p2399;
void * v5611;
rt_int yu;
};
struct yf2406 { void *up;
rt_int p2405;
rt_int yu;
};
struct yf2413 { void *up;
void * p2411;
rt_int p2412;
void * v5623;
void * v5625;
rt_int v5627;
rt_int yu;
};
struct yf2420 { void *up;
void * p2418;
rt_int p2419;
void * v5643;
rt_int yu;
};
struct yf2427 { void *up;
void * p2425;
rt_int p2426;
void * v5668;
rt_int yu;
};
struct yf2433 { void *up;
void * p2432;
rt_int yu;
};
struct yf2439 { void *up;
void * p2438;
void * v5683;
rt_int yu;
};
struct yf2446 { void *up;
rt_int p2444;
void * p2445;
void * v5692;
rt_int yu;
};
struct yf2453 { void *up;
void * p2451;
rt_int p2452;
void * v5701;
rt_int v5703;
rt_int yu;
};
struct yf2460 { void *up;
rt_int p2458;
rt_int p2459;
rt_int v5711;
rt_int yu;
};
struct yf2466 { void *up;
rt_int p2465;
rt_int v5726;
rt_int yu;
};
struct yf2473 { void *up;
rt_int p2471;
rt_int p2472;
rt_int v5741;
rt_int yu;
};
struct yf2479 { void *up;
void * p2478;
rt_int v5750;
rt_int yu;
};
struct yf2485 { void *up;
void * p2484;
void * v5758;
rt_int yu;
};
struct yf2492 { void *up;
rt_int p2490;
rt_int p2491;
void * v5765;
rt_int yu;
};
struct yf2498 { void *up;
void * p2497;
void * v5797;
rt_int yu;
};
struct yf2504 { void *up;
void * p2503;
rt_int yu;
};
struct yf2510 { void *up;
void * p2509;
rt_int yu;
};
struct yf2516 { void *up;
void * p2515;
rt_int yu;
};
struct yf2522 { void *up;
void * p2521;
rt_int yu;
};
struct yf2528 { void *up;
void * p2527;
rt_int yu;
};
struct yf2535 { void *up;
void * p2533;
rt_int p2534;
void * v5829;
rt_int yu;
};
struct yf2541 { void *up;
void * p2540;
rt_int yu;
};
struct yf2547 { void *up;
void * p2546;
rt_int v5841;
rt_int yu;
};
struct yf2553 { void *up;
void * p2552;
rt_int v5848;
rt_int yu;
};
struct yf2559 { void *up;
void * p2558;
rt_int v5877;
rt_int yu;
};
struct yf2565 { void *up;
void * p2564;
rt_int yu;
};
struct yf2572 { void *up;
void * p2570;
void * p2571;
rt_int yu;
};
struct yf2580 { void *up;
rt_int p2577;
void * p2578;
void * p2579;
rt_int v5929;
rt_int yu;
};
struct yf2588 { void *up;
rt_int p2585;
void * p2586;
void * p2587;
rt_int yu;
};
struct yf2595 { void *up;
void * p2593;
rt_int p2594;
rt_int yu;
};
struct yf2601 { void *up;
void * p2600;
rt_int v5944;
void * v5946;
void * v5948;
rt_int yu;
};
struct yf2607 { void *up;
void * p2606;
rt_int yu;
};
struct yf2614 { void *up;
void * p2612;
void * p2613;
rt_int yu;
};
struct yf2620 { void *up;
void * p2619;
rt_int yu;
};
struct yf2628 { void *up;
void * p2625;
yarr p2627;
rt_int v5997;
rt_int v5999;
rt_int yu;
};
struct yf2634 { void *up;
void * p2633;
rt_int yu;
};
struct yf2640 { void *up;
void * p2639;
rt_int yu;
};
struct yf2648 { void *up;
void * p2645;
void * p2646;
void * p2647;
void * v6025;
rt_int yu;
};
struct yf2654 { void *up;
void * p2653;
rt_int yu;
};
struct yf2661 { void *up;
rt_int p2659;
rt_int p2660;
rt_int v6037;
rt_int v6039;
rt_int v6041;
rt_int yu;
};
struct yf2669 { void *up;
rt_int p2666;
rt_int p2667;
rt_int p2668;
rt_int v6057;
rt_int v6059;
rt_int yu;
};
struct yf2677 { void *up;
rt_int p2674;
rt_int p2675;
rt_int p2676;
rt_int v6074;
rt_int lo6079;
rt_int hi6080;
rt_int c_6082;
rt_int yu;
};
struct yf2687 { void *up;
void * p2682;
void * p2683;
rt_int p2684;
rt_int * p2684_o;
rt_int p2685;
rt_int * p2685_o;
rt_int p2686;
rt_int * p2686_o;
rt_int v6093;
rt_int v6095;
rt_int v6097;
rt_int v6099;
rt_int v6101;
rt_int v6103;
rt_int yu;
};
struct yf2694 { void *up;
rt_int p2692;
rt_int p2693;
rt_int yu;
};
struct yf2702 { void *up;
void * p2699;
rt_int p2700;
rt_int p2701;
rt_int v6132;
rt_int yu;
};
struct yf2709 { void *up;
void * p2707;
void * p2708;
rt_int v6142;
rt_int v6144;
rt_int v6146;
rt_int v6148;
void * v6150;
void * v6152;
rt_int v6154;
rt_int v6156;
rt_int v6158;
rt_int v6160;
rt_int v6162;
rt_int yu;
};
struct yf2715 { void *up;
void * p2714;
void * v6194;
void * v6196;
rt_int v6198;
rt_int yu;
};
struct yf2723 { void *up;
void * p2720;
rt_int p2721;
rt_int p2722;
rt_int yu;
};
struct yf2729 { void *up;
rt_int p2728;
rt_int v6213;
rt_int yu;
};
struct yf2737 { void *up;
void * p2734;
rt_int p2735;
rt_int p2736;
void * v6223;
void * v6225;
rt_int yu;
};
struct yf2744 { void *up;
void * p2742;
void * p2743;
void * v6233;
void * v6235;
void * v6237;
void * v6239;
void * v6241;
void * v6243;
rt_int yu;
};
struct yf2752 { void *up;
void * p2749;
rt_int p2750;
rt_int p2751;
void * v6272;
void * v6274;
void * v6276;
void * v6278;
void * v6280;
rt_int v6282;
void * v6284;
rt_int v6286;
rt_int v6288;
rt_int yu;
};
struct yf2759 { void *up;
rt_int p2757;
void * p2758;
void * v6335;
void * v6337;
rt_int yu;
};
struct yf2764 { void *up;
void * v6341;
rt_int yu;
};
struct yf2770 { void *up;
void * p2769;
void * v6346;
rt_int v6348;
rt_int v6350;
rt_int yu;
};
struct yf2783 { void *up;
void * p2775;
void * * p2776;
rt_int p2777;
void * p2778;
rt_int p2779;
rt_int p2780;
void * p2781;
rt_int p2782;
void * v6375;
rt_int yu;
};
struct yf2794 { void *up;
void * p2788;
void * * p2789;
void * p2790;
rt_int p2791;
void * p2792;
rt_int p2793;
void * v6388;
void * v6390;
void * v6392;
rt_int yu;
};
struct yf2802 { void *up;
void * p2799;
void * p2800;
rt_int p2801;
void * v6399;
void * v6401;
void * v6403;
void * v6405;
rt_int v6407;
void * v6410;
rt_int v6412;
rt_int v6414;
rt_int yu;
};
struct yf2809 { void *up;
void * p2807;
rt_int p2808;
void * v6464;
rt_int yu;
};
struct yf2815 { void *up;
rt_int p2814;
rt_int v6470;
rt_int v6473;
rt_int yu;
};
struct yf2822 { void *up;
rt_int p2820;
rt_int p2821;
rt_int yu;
};
struct yf2829 { void *up;
void * p2827;
rt_int p2828;
rt_int v6496;
rt_int v6498;
rt_int v6500;
rt_int v6502;
rt_int v6504;
rt_int v6506;
void * v6508;
rt_int yu;
};
struct yf2837 { void *up;
void * p2834;
rt_int p2835;
rt_int p2836;
void * v6558;
rt_int v6560;
rt_int v6563;
rt_int v6566;
rt_int v6569;
rt_int v6572;
rt_int v6575;
ydesc yd_6585;
yarr v6587;
yarr v6589;
ydesc yd_6598;
yarr v6600;
rt_int lo6617;
rt_int hi6618;
rt_int c_6620;
rt_int lo6626;
rt_int hi6627;
rt_int c_6629;
rt_int yu;
};
struct yf2844 { void *up;
void * p2842;
void * p2843;
void * v6644;
rt_int yu;
};
struct yf2851 { void *up;
void * p2849;
rt_int p2850;
rt_int v6653;
rt_int v6655;
rt_int v6657;
rt_int v6659;
rt_int v6661;
void * v6663;
rt_int v6665;
rt_int v6668;
rt_int v6671;
rt_int yu;
};
struct yf2857 { void *up;
void * p2856;
void * v6714;
rt_int v6716;
rt_int v6719;
rt_int v6722;
rt_int v6724;
rt_int yu;
};
struct yf2863 { void *up;
void * p2862;
rt_int v6737;
rt_int yu;
};
struct yf2869 { void *up;
void * p2868;
rt_int yu;
};
struct yf2875 { void *up;
void * p2874;
rt_int v6749;
rt_int yu;
};
struct yf2883 { void *up;
void * p2880;
rt_int p2881;
void * p2882;
void * v6758;
rt_int v6760;
rt_int v6763;
rt_int v6765;
rt_int v6767;
void * v6769;
rt_int yu;
};
struct yf2890 { void *up;
void * p2888;
void * p2889;
void * v6789;
rt_int v6791;
rt_int v6793;
rt_int v6795;
rt_int yu;
};
struct yf2896 { void *up;
void * p2895;
rt_int v6814;
rt_int v6816;
rt_int yu;
};
struct yf2903 { void *up;
rt_int p2901;
rt_int p2902;
rt_int yu;
};
struct yf2910 { void *up;
rt_int p2908;
void * p2909;
rt_int v6832;
rt_int v6834;
rt_int yu;
};
struct yf2918 { void *up;
void * p2915;
rt_int p2916;
void * p2917;
rt_int v6860;
rt_int yu;
};
struct yf2924 { void *up;
void * p2923;
void * v6886;
rt_int yu;
};
struct yf2931 { void *up;
void * p2929;
rt_int p2930;
void * v6895;
rt_int v6897;
rt_int v6899;
rt_int v6901;
rt_int v6903;
rt_int lo6912;
rt_int hi6913;
rt_int c_6915;
rt_int yu;
};
struct yf2938 { void *up;
void * p2936;
void * p2937;
void * v6954;
void * v6956;
void * v6958;
rt_int v6960;
rt_int v6963;
rt_int yu;
};
struct yf2946 { void *up;
void * p2943;
rt_int p2944;
rt_int p2945;
rt_int v6988;
rt_int v6990;
rt_int yu;
};
struct yf2955 { void *up;
void * p2951;
rt_int p2952;
rt_int p2953;
rt_int * p2953_o;
rt_int p2954;
rt_int v7001;
rt_int v7003;
rt_int v7005;
ydesc yd_7014;
yarr v7016;
unsigned char v7018;
rt_int v7020;
rt_int lo7052;
rt_int hi7053;
rt_int c_7055;
rt_int yu;
};
struct yf2963 { void *up;
void * p2960;
rt_int p2961;
rt_int * p2961_o;
rt_int p2962;
rt_int * p2962_o;
void * v7090;
rt_int v7092;
rt_int v7094;
rt_int v7096;
rt_int v7098;
rt_int v7100;
void * v7102;
rt_int yu;
};
struct yf2971 { void *up;
void * p2968;
rt_int p2969;
rt_int * p2969_o;
rt_int p2970;
rt_int * p2970_o;
void * v7132;
rt_int v7134;
rt_int v7136;
rt_int v7138;
rt_int v7140;
rt_int v7142;
void * v7144;
void * v7146;
rt_int lo7163;
rt_int hi7164;
rt_int c_7166;
rt_int yu;
};
struct yf2978 { void *up;
void * p2976;
void * p2977;
rt_int yu;
};
struct yf2986 { void *up;
rt_int p2983;
void * p2984;
void * p2985;
rt_int v7194;
rt_int v7196;
void * v7198;
void * v7200;
rt_int yu;
};
struct yf2994 { void *up;
rt_int p2991;
void * p2992;
void * p2993;
rt_int v7229;
rt_int v7231;
rt_int v7233;
rt_int v7235;
rt_int v7237;
rt_int v7239;
rt_int yu;
};
struct yf3002 { void *up;
rt_int p2999;
void * p3000;
void * p3001;
rt_int v7286;
rt_int v7288;
rt_int v7290;
rt_int yu;
};
struct yf3013 { void *up;
rt_int * p3007;
void * p3008;
rt_int * p3009;
void * p3010;
void * p3011;
rt_int p3012;
rt_int v7305;
rt_int v7307;
rt_int yu;
};
struct yf3021 { void *up;
void * p3018;
rt_int p3019;
rt_int * p3019_o;
void * p3020;
void * * p3020_o;
rt_int v7314;
rt_int v7316;
rt_int yu;
};
struct yf3030 { void *up;
void * p3026;
rt_int p3027;
rt_int * p3027_o;
rt_int p3028;
rt_int * p3028_o;
rt_int p3029;
rt_int * p3029_o;
rt_int v7330;
rt_int v7332;
rt_int v7334;
rt_int v7336;
rt_int v7338;
rt_int v7340;
rt_int yu;
};
struct yf3036 { void *up;
rt_int p3035;
rt_int yu;
};
struct yf3044 { void *up;
rt_int p3041;
void * p3042;
void * p3043;
rt_int v7361;
rt_int v7363;
rt_int yu;
};
struct yf3054 { void *up;
rt_int p3049;
void * p3050;
rt_int p3051;
void * p3052;
rt_int p3053;
rt_int v7404;
rt_int yu;
};
struct yf3064 { void *up;
rt_int p3059;
void * p3060;
rt_int p3061;
void * p3062;
rt_int p3063;
rt_int yu;
};
struct yf3070 { void *up;
void * p3069;
void * v7426;
void * v7428;
rt_int yu;
};
struct yf3076 { void *up;
void * p3075;
void * v7447;
void * v7449;
rt_int yu;
};
struct yf3084 { void *up;
void * p3081;
rt_int p3082;
rt_int * p3082_o;
void * p3083;
void * * p3083_o;
void * v7458;
rt_int yu;
};
struct yf3090 { void *up;
rt_int p3089;
rt_int yu;
};
struct yf3097 { void *up;
void * p3095;
rt_int p3096;
void * v7469;
rt_int yu;
};
struct yf3103 { void *up;
void * p3102;
void * v7474;
rt_int yu;
};
struct yf3112 { void *up;
void * p3108;
void * p3109;
rt_int p3110;
rt_int * p3110_o;
void * p3111;
void * * p3111_o;
rt_int v7483;
void * v7485;
rt_int v7487;
rt_int v7489;
void * v7491;
void * v7493;
void * v7495;
rt_int v7497;
rt_int v7499;
rt_int yu;
};
struct yf3120 { void *up;
void * p3117;
rt_int * p3118;
void * p3119;
rt_int v7547;
rt_int v7549;
rt_int yu;
};
struct yf3126 { void *up;
void * p3125;
void * v7562;
rt_int yu;
};
struct yf3132 { void *up;
void * p3131;
rt_int v7573;
rt_int yu;
};
struct yf3138 { void *up;
void * p3137;
rt_int v7592;
rt_int yu;
};
struct yf3145 { void *up;
void * p3143;
rt_int p3144;
rt_int yu;
};
struct yf3153 { void *up;
void * p3150;
void * p3151;
rt_int p3152;
void * v7617;
rt_int v7619;
rt_int v7621;
rt_int yu;
};
struct yf3162 { void *up;
void * p3158;
void * p3159;
rt_int p3160;
rt_int * p3160_o;
void * p3161;
void * * p3161_o;
void * v7633;
rt_int yu;
};
struct yf3168 { void *up;
void * p3167;
void * v7642;
rt_int yu;
};
struct yf3176 { void *up;
void * p3173;
rt_int p3174;
rt_int * p3174_o;
void * p3175;
void * * p3175_o;
rt_int v7655;
rt_int v7657;
rt_int v7659;
void * v7661;
void * v7663;
void * v7665;
void * v7667;
rt_int v7669;
rt_int v7671;
rt_int yu;
};
struct yf3186 { void *up;
void * p3181;
rt_int p3182;
void * p3183;
rt_int p3184;
rt_int * p3184_o;
void * p3185;
void * * p3185_o;
rt_int yu;
};
struct yf3192 { void *up;
void * p3191;
void * v7717;
rt_int yu;
};
struct yf3201 { void *up;
yarr p3198;
rt_int p3199;
rt_int p3200;
rt_int yu;
};
struct yf3209 { void *up;
rt_int p3206;
rt_int p3207;
rt_int p3208;
rt_int yu;
};
struct yf3218 { void *up;
rt_int p3214;
yarr p3216;
rt_int p3217;
rt_int yu;
};
struct yf3227 { void *up;
rt_int p3223;
void * p3224;
rt_int p3225;
void * p3226;
rt_int v7753;
rt_int v7755;
void * v7757;
rt_int yu;
};
struct yf3233 { void *up;
void * p3232;
rt_int yu;
};
struct yf3238 { void *up;
rt_int yu;
};
struct yf3245 { void *up;
rt_int p3243;
void * p3244;
rt_int yu;
};
struct yf3254 { void *up;
void * p3250;
void * p3251;
rt_int p3252;
rt_int * p3252_o;
void * p3253;
void * * p3253_o;
rt_int v7800;
rt_int v7802;
rt_int v7804;
rt_int v7806;
void * v7808;
void * v7810;
void * v7812;
rt_int v7814;
rt_int yu;
};
struct yf3261 { void *up;
void * p3259;
void * p3260;
rt_int yu;
};
struct yf3269 { void *up;
void * p3266;
rt_int p3267;
rt_int p3268;
void * v7878;
void * v7880;
rt_int v7882;
rt_int v7884;
rt_int yu;
};
struct yf3275 { void *up;
void * p3274;
void * v7896;
rt_int yu;
};
struct yf3284 { void *up;
void * p3280;
void * p3281;
rt_int p3282;
rt_int * p3282_o;
rt_int p3283;
rt_int * p3283_o;
void * v7908;
void * v7910;
void * v7912;
rt_int yu;
};
struct yf3292 { void *up;
void * p3289;
void * p3290;
rt_int p3291;
void * v7927;
rt_int yu;
};
struct yf3299 { void *up;
void * p3297;
void * p3298;
rt_int yu;
};
struct yf3308 { void *up;
void * p3304;
rt_int p3305;
rt_int p3306;
rt_int p3307;
void * v7944;
rt_int v7946;
rt_int v7950;
rt_int v7953;
rt_int v7956;
rt_int v7959;
rt_int v7962;
rt_int v7965;
rt_int yu;
};
struct yf3314 { void *up;
rt_int p3313;
rt_int yu;
};
struct yf3325 { void *up;
void * p3319;
rt_int p3320;
void * p3321;
void * p3322;
rt_int p3323;
rt_int * p3323_o;
void * p3324;
void * * p3324_o;
void * v8025;
void * v8027;
rt_int v8029;
rt_int v8031;
rt_int yu;
};
struct yf3332 { void *up;
void * p3330;
rt_int p3331;
void * v8045;
void * v8047;
rt_int yu;
};
struct yf3343 { void *up;
void * p3337;
void * p3338;
rt_int p3339;
rt_int p3340;
rt_int p3341;
rt_int * p3341_o;
void * p3342;
void * * p3342_o;
rt_int v8058;
rt_int v8060;
rt_int v8062;
rt_int yu;
};
struct yf3349 { void *up;
rt_int p3348;
rt_int yu;
};
struct yf3359 { void *up;
rt_int p3354;
void * p3355;
rt_int p3356;
void * p3357;
rt_int p3358;
void * v8096;
void * v8098;
void * v8100;
void * v8102;
rt_int v8104;
rt_int yu;
};
struct yf3369 { void *up;
rt_int p3364;
void * p3365;
rt_int p3366;
void * p3367;
rt_int p3368;
rt_int v8146;
rt_int yu;
};
struct yf3379 { void *up;
void * p3374;
void * p3375;
rt_int p3376;
rt_int p3377;
rt_int * p3377_o;
void * p3378;
void * * p3378_o;
void * v8155;
void * v8157;
rt_int v8159;
rt_int v8161;
rt_int yu;
};
struct yf3388 { void *up;
void * p3384;
void * p3385;
rt_int p3386;
rt_int * p3386_o;
void * p3387;
void * * p3387_o;
void * v8174;
void * v8176;
rt_int v8178;
rt_int v8180;
rt_int v8182;
void * v8184;
rt_int v8186;
rt_int v8188;
rt_int v8190;
rt_int v8192;
rt_int v8194;
rt_int v8197;
void * v8199;
rt_int v8201;
rt_int yu;
};
struct yf3396 { void *up;
void * p3393;
rt_int p3394;
rt_int p3395;
void * v8263;
void * v8265;
rt_int v8267;
rt_int v8269;
rt_int yu;
};
struct yf3404 { void *up;
yarr p3402;
rt_int p3403;
rt_int v8278;
rt_int yu;
};
struct yf3414 { void *up;
yarr p3410;
rt_int p3411;
yarr p3413;
rt_int v8284;
rt_int yu;
};
struct yf3420 { void *up;
rt_int p3419;
rt_int lo8294;
rt_int hi8295;
rt_int c_8297;
rt_int yu;
};
struct yf3425 { void *up;
rt_int yu;
};
struct yf3431 { void *up;
rt_int p3430;
rt_int yu;
};
struct yf3437 { void *up;
void * p3436;
rt_int v8316;
rt_int yu;
};
struct yf3443 { void *up;
void * p3442;
rt_int v8320;
rt_int v8322;
rt_int v8324;
void * v8326;
void * v8328;
rt_int v8330;
void * v8332;
rt_int v8334;
rt_int yu;
};
struct yf3450 { void *up;
void * p3448;
void * p3449;
void * v8401;
void * v8403;
rt_int v8405;
rt_int v8407;
rt_int v8409;
rt_int v8411;
rt_int yu;
};
struct yf3458 { void *up;
void * p3455;
void * p3456;
void * p3457;
rt_int v8433;
void * v8435;
void * v8437;
void * v8439;
rt_int v8441;
rt_int v8443;
rt_int v8445;
rt_int v8447;
rt_int yu;
};
struct yf3465 { void *up;
void * p3463;
void * p3464;
void * v8460;
void * v8462;
rt_int v8464;
rt_int v8467;
rt_int lo8472;
rt_int hi8473;
rt_int c_8475;
rt_int yu;
};
struct yf3471 { void *up;
void * p3470;
void * v8485;
rt_int v8487;
rt_int yu;
};
struct yf3477 { void *up;
void * p3476;
void * v8495;
rt_int yu;
};
struct yf3483 { void *up;
void * p3482;
rt_int v8509;
void * v8511;
rt_int v8513;
rt_int v8515;
rt_int yu;
};
struct yf3490 { void *up;
void * p3488;
rt_int p3489;
void * v8540;
void * v8542;
rt_int yu;
};
struct yf3496 { void *up;
void * p3495;
void * v8566;
rt_int yu;
};
struct yf3502 { void *up;
void * p3501;
rt_int v8570;
void * v8572;
rt_int yu;
};
struct yf3509 { void *up;
void * p3507;
void * p3508;
rt_int v8578;
rt_int v8580;
void * v8582;
void * v8584;
rt_int v8586;
rt_int yu;
};
struct yf3514 { void *up;
void * v8592;
rt_int v8594;
rt_int yu;
};
struct yf3520 { void *up;
void * p3519;
rt_int v8603;
rt_int v8605;
rt_int v8607;
rt_int v8609;
rt_int v8611;
rt_int v8613;
rt_int v8615;
void * v8617;
void * v8619;
void * v8621;
void * v8623;
rt_int v8625;
rt_int v8627;
rt_int v8629;
rt_int v8631;
void * v8633;
rt_int yu;
};
struct yf3526 { void *up;
void * p3525;
void * v8718;
rt_int v8720;
rt_int v8722;
rt_int v8724;
void * v8726;
rt_int yu;
};
struct yf3534 { void *up;
rt_int p3531;
rt_int p3532;
rt_int p3533;
rt_int yu;
};
struct yf3540 { void *up;
void * p3539;
rt_int v8758;
rt_int v8760;
rt_int v8762;
void * v8764;
void * v8766;
rt_int yu;
};
struct yf3546 { void *up;
void * p3545;
rt_int v8782;
rt_int v8784;
rt_int yu;
};
struct yf3552 { void *up;
void * p3551;
void * v8817;
rt_int yu;
};
struct yf3558 { void *up;
void * p3557;
void * v8832;
rt_int yu;
};
struct yf3564 { void *up;
void * p3563;
void * v8846;
void * v8848;
void * v8850;
rt_int yu;
};
struct yf3573 { void *up;
void * p3569;
void * p3570;
void * * p3570_o;
rt_int p3571;
rt_int * p3571_o;
rt_int p3572;
rt_int * p3572_o;
void * v8858;
void * v8860;
rt_int yu;
};
struct yf3581 { void *up;
void * p3578;
rt_int p3579;
rt_int p3580;
void * v8870;
rt_int yu;
};
struct yf3587 { void *up;
void * p3586;
void * v8875;
rt_int v8877;
rt_int v8879;
void * v8881;
void * v8883;
rt_int yu;
};
struct yf3593 { void *up;
void * p3592;
void * v8888;
rt_int yu;
};
struct yf3600 { void *up;
void * p3598;
rt_int p3599;
void * v8894;
rt_int v8896;
rt_int v8898;
void * v8900;
rt_int yu;
};
struct yf3607 { void *up;
void * p3605;
yarr * p3606;
void * v8905;
rt_int v8907;
void * v8910;
rt_int lo8919;
rt_int hi8920;
rt_int c_8922;
rt_int yu;
};
struct yf3614 { void *up;
void * p3612;
void * p3613;
void * v8936;
void * v8938;
rt_int v8940;
rt_int v8942;
rt_int v8944;
rt_int v8946;
rt_int v8948;
rt_int v8950;
rt_int v8952;
rt_int v8954;
yarr v8956;
yarr v8958;
rt_int v8960;
rt_int v8962;
rt_int v8964;
rt_int v8966;
void * v8968;
void * v8970;
void * v8972;
void * v8974;
rt_int lo8988;
rt_int hi8989;
rt_int c_8991;
rt_int yu;
};
struct yf3622 { void *up;
void * p3619;
rt_int p3620;
rt_int p3621;
void * v9013;
void * v9015;
rt_int v9017;
rt_int v9019;
void * v9021;
void * v9023;
void * v9025;
rt_int v9027;
rt_int v9029;
rt_int yu;
};
struct yf9165 { struct yf3627 *up;
rt_int p9163;
rt_int p9164;
rt_int yu;
};
struct yf9172 { struct yf3627 *up;
rt_int p9170;
rt_int p9171;
void * v9197;
rt_int yu;
};
struct yf9177 { struct yf3627 *up;
yR140 v9210;
rt_int v9212;
rt_int v9214;
void * v9216;
rt_int lo9220;
rt_int hi9221;
rt_int c_9223;
rt_int lo9232;
rt_int hi9233;
rt_int c_9235;
rt_int lo9247;
rt_int hi9248;
rt_int c_9250;
rt_int yu;
};
struct yf9183 { struct yf3627 *up;
rt_int p9182;
rt_int yu;
};
struct yf3627 { void *up;
void * v9045;
void * v9047;
void * v9049;
rt_int v9051;
rt_int v9054;
rt_int v9057;
void * v9060;
rt_int lo9087;
rt_int hi9088;
ydesc yd_9090;
yarr v9092;
yarr v9094;
rt_int lo9100;
rt_int hi9101;
ydesc yd_9103;
yarr v9105;
rt_int lo9111;
rt_int hi9112;
ydesc yd_9114;
yarr v9116;
rt_int lo9122;
rt_int hi9123;
ydesc yd_9125;
yarr v9127;
rt_int lo9133;
rt_int hi9134;
ydesc yd_9136;
yarr v9138;
rt_int lo9144;
rt_int hi9145;
ydesc yd_9147;
yarr v9149;
rt_int v9151;
rt_int v9154;
rt_int v9156;
rt_int v9158;
void * v9160;
rt_int lo9270;
rt_int hi9271;
rt_int c_9273;
rt_int lo9281;
rt_int hi9282;
rt_int c_9284;
rt_int lo9292;
rt_int hi9293;
rt_int c_9295;
rt_int lo9308;
rt_int hi9309;
rt_int c_9311;
rt_int lo9318;
rt_int hi9319;
rt_int c_9321;
rt_int lo9331;
rt_int hi9332;
rt_int c_9334;
rt_int lo9341;
rt_int hi9342;
rt_int c_9344;
rt_int lo9354;
rt_int hi9355;
rt_int c_9357;
rt_int lo9389;
rt_int hi9390;
rt_int c_9392;
rt_int yu;
};
struct yf3635 { void *up;
rt_int p3632;
rt_int p3633;
rt_int p3634;
rt_int lo9405;
rt_int hi9406;
rt_int c_9408;
rt_int yu;
};
struct yf3641 { void *up;
rt_int p3640;
rt_int v9422;
rt_int v9424;
rt_int lo9429;
rt_int hi9430;
rt_int c_9432;
rt_int yu;
};
struct yf3647 { void *up;
void * p3646;
void * v9442;
rt_int v9444;
rt_int v9446;
rt_int yu;
};
struct yf3653 { void *up;
void * p3652;
rt_int v9463;
rt_int yu;
};
struct yf3660 { void *up;
void * p3658;
void * p3659;
rt_int v9471;
rt_int v9473;
rt_int v9476;
rt_int v9478;
rt_int lo9488;
rt_int hi9489;
rt_int c_9491;
rt_int yu;
};
struct yf3666 { void *up;
void * p3665;
rt_int yu;
};
struct yf3673 { void *up;
void * p3671;
rt_int p3672;
void * v9521;
void * v9523;
void * v9525;
void * v9527;
void * v9529;
void * v9531;
void * v9533;
rt_int v9535;
rt_int v9537;
rt_int yu;
};
struct yf3680 { void *up;
void * p3678;
void * p3679;
void * v9592;
void * v9594;
void * v9596;
rt_int v9598;
rt_int yu;
};
struct yf3686 { void *up;
void * p3685;
void * v9606;
yR140 v9608;
yR140 v9610;
rt_int v9612;
rt_int v9614;
rt_int v9616;
rt_int v9618;
rt_int v9620;
rt_int v9622;
rt_int v9624;
void * v9626;
rt_int v9628;
void * v9630;
void * v9632;
rt_int v9634;
rt_int v9636;
yR140 v9638;
rt_int yu;
};
struct yf3694 { void *up;
void * p3691;
void * p3692;
rt_int p3693;
rt_int yu;
};
struct yf3703 { void *up;
void * p3699;
void * p3700;
rt_int p3701;
rt_int p3702;
rt_int v9728;
rt_int v9730;
rt_int v9732;
rt_int yu;
};
struct yf3711 { void *up;
void * p3708;
void * p3709;
rt_int p3710;
rt_int yu;
};
struct yf3717 { void *up;
void * p3716;
rt_int v9763;
void * v9765;
void * v9767;
void * v9769;
void * v9771;
rt_int v9773;
rt_int v9775;
rt_int v9777;
rt_int v9779;
rt_int yu;
};
struct yf3724 { void *up;
void * p3722;
void * p3723;
void * v9803;
rt_int yu;
};
struct yf3731 { void *up;
void * p3729;
void * p3730;
rt_int yu;
};
struct yf3740 { void *up;
void * p3736;
rt_int p3737;
void * p3738;
rt_int p3739;
rt_int v9813;
rt_int lo9826;
rt_int hi9827;
rt_int c_9829;
rt_int yu;
};
struct yf3747 { void *up;
rt_int p3745;
rt_int p3746;
rt_int v9838;
rt_int v9842;
rt_int v9844;
void * v9846;
rt_int lo9851;
rt_int hi9852;
rt_int c_9854;
rt_int lo9861;
rt_int hi9862;
rt_int c_9864;
rt_int yu;
};
struct yf3753 { void *up;
rt_int p3752;
void * v9872;
yR140 v9874;
void * v9876;
rt_int yu;
};
struct yf3759 { void *up;
void * p3758;
void * v9890;
void * v9892;
rt_int v9894;
rt_int v9896;
rt_int yu;
};
struct yf3765 { void *up;
void * p3764;
rt_int yu;
};
struct yf3772 { void *up;
rt_int p3770;
void * p3771;
void * v9906;
rt_int yu;
};
struct yf3780 { void *up;
void * * p3777;
void * p3778;
rt_int p3779;
void * v9913;
void * v9915;
void * v9917;
rt_int yu;
};
struct yf3787 { void *up;
void * p3785;
rt_int p3786;
void * v9927;
rt_int yu;
};
struct yf3795 { void *up;
rt_int p3792;
rt_int p3793;
void * p3794;
void * * p3794_o;
void * v9943;
rt_int yu;
};
struct yf3801 { void *up;
void * p3800;
void * v9961;
rt_int yu;
};
struct yf3810 { void *up;
rt_int p3806;
rt_int p3807;
void * p3808;
rt_int p3809;
void * v9969;
rt_int yu;
};
struct yf3817 { void *up;
rt_int p3815;
void * p3816;
rt_int yu;
};
struct yf3824 { void *up;
void * p3822;
void * p3823;
void * v9982;
rt_int lo9986;
rt_int hi9987;
rt_int c_9989;
rt_int yu;
};
struct yf3830 { void *up;
rt_int p3829;
void * v9996;
rt_int lo10000;
rt_int hi10001;
rt_int c_10003;
rt_int yu;
};
struct yf3838 { void *up;
void * p3835;
void * * p3836;
rt_int p3837;
void * v10012;
void * v10014;
rt_int v10016;
rt_int yu;
};
struct yf3846 { void *up;
void * p3843;
void * * p3844;
rt_int p3845;
void * v10023;
void * v10025;
void * v10027;
rt_int v10029;
void * v10031;
rt_int v10033;
rt_int v10035;
void * v10037;
rt_int yu;
};
struct yf3853 { void *up;
void * p3851;
rt_int p3852;
void * v10072;
void * v10074;
void * v10076;
rt_int yu;
};
struct yf3861 { void *up;
void * p3858;
void * p3859;
rt_int p3860;
void * v10084;
void * v10086;
void * v10088;
void * v10090;
rt_int yu;
};
struct yf3867 { void *up;
void * p3866;
void * v10097;
void * v10099;
void * v10101;
void * v10103;
void * v10105;
void * v10107;
void * v10109;
void * v10111;
void * v10113;
rt_int v10115;
void * v10117;
void * v10119;
rt_int v10121;
rt_int v10123;
rt_int v10125;
rt_int yu;
};
struct yf3873 { void *up;
void * p3872;
void * v10174;
rt_int yu;
};
struct yf3879 { void *up;
void * p3878;
void * v10178;
void * v10180;
void * v10182;
void * v10184;
rt_int v10186;
rt_int v10188;
rt_int v10190;
rt_int v10192;
void * v10194;
rt_int lo10202;
rt_int hi10203;
rt_int c_10205;
rt_int yu;
};
struct yf3885 { void *up;
void * p3884;
void * v10217;
void * v10219;
rt_int yu;
};
struct yf3890 { void *up;
void * v10225;
rt_int yu;
};
struct yf3897 { void *up;
void * p3895;
void * p3896;
rt_int v10236;
rt_int v10238;
rt_int v10240;
rt_int v10242;
rt_int v10244;
void * v10246;
rt_int v10248;
rt_int v10250;
void * v10252;
rt_int v10254;
rt_int v10256;
rt_int v10258;
rt_int v10260;
rt_int v10262;
rt_int v10264;
void * v10266;
void * v10268;
rt_int yu;
};
struct yf3905 { void *up;
void * p3902;
rt_int p3903;
rt_int p3904;
void * v10334;
rt_int v10336;
void * v10340;
rt_int v10342;
rt_int v10344;
rt_int yu;
};
struct yf3911 { void *up;
rt_int p3910;
rt_int v10352;
rt_int yu;
};
struct yf3917 { void *up;
void * p3916;
rt_int yu;
};
struct yf3923 { void *up;
void * p3922;
rt_int v10365;
rt_int yu;
};
struct yf3928 { void *up;
rt_int yu;
};
struct yf3934 { void *up;
void * p3933;
rt_int yu;
};
struct yf3941 { void *up;
void * p3939;
rt_int p3940;
rt_int yu;
};
struct yf3948 { void *up;
void * p3946;
rt_int p3947;
rt_int yu;
};
struct yf3955 { void *up;
void * p3953;
void * p3954;
rt_int v10409;
rt_int v10411;
rt_int v10413;
rt_int yu;
};
struct yf3962 { void *up;
void * p3960;
rt_int p3961;
void * v10422;
rt_int v10424;
rt_int yu;
};
struct yf3969 { void *up;
void * p3967;
rt_int p3968;
rt_int yu;
};
struct yf3977 { void *up;
yarr p3975;
rt_int p3976;
rt_int yu;
};
struct yf3983 { void *up;
rt_int p3982;
rt_int yu;
};
struct yf3992 { void *up;
void * p3988;
rt_int p3989;
rt_int p3990;
rt_int * p3990_o;
void * p3991;
void * * p3991_o;
rt_int v10451;
rt_int yu;
};
struct yf4000 { void *up;
void * p3997;
rt_int p3998;
rt_int * p3998_o;
void * p3999;
void * * p3999_o;
rt_int yu;
};
struct yf4006 { void *up;
void * p4005;
rt_int v10467;
void * v10469;
rt_int yu;
};
struct yf4012 { void *up;
void * p4011;
void * v10475;
rt_int v10478;
rt_int v10480;
rt_int v10482;
rt_int v10484;
rt_int v10486;
rt_int v10488;
unsigned char v10490;
void * v10492;
ydesc yd_10501;
yarr v10503;
rt_int yu;
};
struct yf4019 { void *up;
void * p4017;
void * p4018;
rt_int v10542;
rt_int v10544;
rt_int v10546;
void * v10548;
rt_int yu;
};
struct yf4029 { void *up;
rt_int p4024;
void * p4025;
rt_int p4026;
rt_int p4027;
rt_int * p4027_o;
void * p4028;
void * * p4028_o;
void * v10560;
rt_int v10562;
rt_int v10564;
rt_int v10566;
rt_int v10568;
rt_int v10570;
void * v10572;
void * v10574;
void * v10576;
void * v10578;
rt_int v10580;
rt_int v10582;
rt_int v10584;
rt_int v10586;
void * v10588;
rt_int v10590;
rt_int lo10604;
rt_int hi10605;
rt_int c_10607;
rt_int yu;
};
struct yf4034 { void *up;
rt_int v10818;
rt_int yu;
};
struct yf4040 { void *up;
rt_int p4039;
ydesc yd_10830;
yarr v10832;
rt_int v10834;
rt_int lo10838;
rt_int hi10839;
rt_int c_10841;
rt_int yu;
};
struct yf4045 { void *up;
rt_int v10847;
rt_int v10849;
void * v10851;
void * v10853;
rt_int lo10868;
rt_int hi10869;
rt_int c_10871;
rt_int yu;
};
struct yf4053 { void *up;
rt_int p4050;
yarr p4052;
rt_int yu;
};
struct yf4059 { void *up;
rt_int p4058;
rt_int v10885;
rt_int lo10892;
rt_int hi10893;
ydesc yd_10895;
yarr v10897;
yfile * v10899;
unsigned char v10901;
rt_int lo10906;
rt_int hi10907;
rt_int c_10909;
rt_int yu;
};
struct yf4066 { void *up;
rt_int p4064;
yR140 p4065;
void * v10922;
rt_int lo10928;
rt_int hi10929;
ydesc yd_10931;
yarr v10933;
yfile * v10935;
rt_int lo10940;
rt_int hi10941;
rt_int c_10943;
rt_int yu;
};
struct yf4072 { void *up;
rt_int p4071;
rt_int v10954;
rt_int yu;
};
struct yf4079 { void *up;
rt_int p4077;
rt_int p4078;
rt_int v10966;
ydesc yd_10975;
yarr v10977;
rt_int v10979;
rt_int yu;
};
struct yf4085 { void *up;
rt_int p4084;
rt_int v11003;
rt_int v11005;
rt_int yu;
};
struct yf4092 { void *up;
rt_int p4090;
rt_int p4091;
yR140 v11018;
rt_int v11020;
rt_int v11022;
rt_int yu;
};
struct yf4098 { void *up;
yR140 p4097;
rt_int v11030;
void * v11033;
rt_int lo11037;
rt_int hi11038;
rt_int c_11040;
rt_int yu;
};
struct yf4107 { void *up;
rt_int p4103;
rt_int p4104;
rt_int p4105;
rt_int p4106;
rt_int v11061;
rt_int v11063;
rt_int yu;
};
struct yf4114 { void *up;
void * p4112;
rt_int p4113;
void * v11086;
void * v11088;
void * v11090;
rt_int yu;
};
struct yf4120 { void *up;
rt_int p4119;
void * v11100;
rt_int yu;
};
struct yf4127 { void *up;
void * p4125;
void * p4126;
void * v11109;
void * v11111;
rt_int v11113;
rt_int yu;
};
struct yf4132 { void *up;
void * v11124;
void * v11126;
void * v11128;
rt_int yu;
};
struct yf4139 { void *up;
rt_int p4137;
rt_int p4138;
rt_int v11134;
rt_int v11136;
rt_int v11138;
void * v11140;
void * v11142;
void * v11144;
rt_int v11146;
rt_int yu;
};
struct yf4145 { void *up;
void * p4144;
void * v11158;
rt_int yu;
};
struct yf4150 { void *up;
void * v11162;
rt_int yu;
};
struct yf4155 { void *up;
void * v11168;
yR140 v11170;
rt_int v11172;
yR140 v11174;
rt_int yu;
};
struct yf4160 { void *up;
void * v11184;
void * v11186;
rt_int v11188;
rt_int v11190;
rt_int v11192;
rt_int v11194;
yR140 v11196;
void * v11198;
rt_int yu;
};
struct yf4166 { void *up;
void * p4165;
void * v11211;
rt_int yu;
};
struct yf4172 { void *up;
rt_int p4171;
void * v11217;
rt_int v11219;
rt_int yu;
};
struct yf4177 { void *up;
void * v11235;
void * v11237;
rt_int v11239;
rt_int v11241;
rt_int v11243;
rt_int v11245;
rt_int v11247;
rt_int v11249;
rt_int v11251;
yR140 v11253;
rt_int yu;
};
struct yf4184 { void *up;
rt_int p4182;
rt_int p4183;
rt_int v11298;
rt_int v11301;
rt_int v11304;
rt_int v11306;
rt_int v11308;
rt_int v11310;
void * v11312;
rt_int v11314;
rt_int yu;
};
struct yf4191 { void *up;
rt_int p4189;
rt_int p4190;
unsigned char v11352;
rt_int lo11357;
rt_int hi11358;
rt_int c_11360;
rt_int lo11368;
rt_int hi11369;
rt_int c_11371;
rt_int yu;
};
struct yf4197 { void *up;
void * p4196;
rt_int yu;
};
struct yf4203 { void *up;
void * p4202;
void * v11384;
rt_int v11386;
rt_int yu;
};
struct yf4211 { void *up;
void * p4208;
void * p4209;
rt_int p4210;
rt_int v11400;
void * v11402;
rt_int yu;
};
struct yf4219 { void *up;
void * p4216;
void * p4217;
rt_int p4218;
rt_int v11426;
rt_int yu;
};
struct yf4226 { void *up;
void * p4224;
void * p4225;
rt_int v11448;
rt_int v11450;
rt_int v11452;
rt_int v11454;
rt_int v11456;
rt_int v11458;
void * v11460;
void * v11462;
rt_int v11464;
rt_int v11466;
yR140 v11469;
rt_int yu;
};
struct yf4232 { void *up;
void * p4231;
rt_int yu;
};
struct yf4238 { void *up;
rt_int p4237;
rt_int v11521;
rt_int lo11527;
rt_int hi11528;
rt_int c_11530;
rt_int yu;
};
struct yf4243 { void *up;
void * v11541;
rt_int yu;
};
struct yf4249 { void *up;
rt_int p4248;
rt_int v11546;
rt_int v11548;
rt_int v11550;
ydesc yd_11559;
yarr v11561;
rt_int v11563;
rt_int yu;
};
struct yf4257 { void *up;
yarr p4255;
rt_int p4256;
void * v11583;
void * v11585;
void * v11587;
void * v11589;
rt_int lo11597;
rt_int hi11598;
rt_int c_11600;
rt_int yu;
};
struct yf4265 { void *up;
yarr p4263;
void * p4264;
void * v11612;
rt_int yu;
};
struct yf4273 { void *up;
yarr p4271;
rt_int p4272;
void * v11618;
rt_int yu;
};
struct yf4283 { void *up;
yarr p4279;
yarr p4280;
yarr p4281;
rt_int p4282;
void * v11626;
void * v11628;
void * v11630;
rt_int yu;
};
struct yf4291 { void *up;
rt_int p4288;
yarr p4290;
void * v11639;
rt_int yu;
};
struct yf4296 { void *up;
rt_int yu;
};
struct yf4301 { void *up;
void * v11729;
yR140 v11731;
rt_int yu;
};
struct yf4306 { void *up;
rt_int yu;
};
struct yf4311 { void *up;
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
static rt_int v1516;
static rt_int v1519;
static rt_int v1522;
static void * v1525;
static ydesc yd_1534;
static yarr v1536;
static ydesc yd_1545;
static yarr v1547;
static ydesc yd_1556;
static yarr v1558;
static rt_int v1560;
static ydesc yd_1570;
static yarr v1572;
static ydesc yd_1581;
static yarr v1583;
static ydesc yd_1592;
static yarr v1594;
static rt_int v1596;
static rt_int v1599;
static rt_int v1602;
static ydesc yd_1612;
static yarr v1614;
static ydesc yd_1623;
static yarr v1625;
static rt_int v1627;
static ydesc yd_1637;
static yarr v1639;
static rt_int v1641;
static ydesc yd_1651;
static yarr v1653;
static yarr v1655;
static ydesc yd_1664;
static yarr v1666;
static rt_int v1668;
static rt_int v1671;
static void * v1674;
static ydesc yd_1683;
static yarr v1685;
static yarr v1687;
static rt_int v1689;
static ydesc yd_1699;
static yarr v1701;
static rt_int v1703;
static rt_int v1706;
static rt_int v1709;
static void * v1712;
static rt_int v1714;
static rt_int v1717;
static void * v1720;
static void * v1722;
static rt_int v1724;
static rt_int v1727;
static rt_int v1730;
static rt_int v1733;
static ydesc yd_1743;
static yarr v1745;
static yR140 v1747;
static yR140 v1749;
static void * v1751;
static rt_int v1753;
static void * v1756;
static void * v1758;
static ydesc yd_1767;
static yarr v1769;
static ydesc yd_1778;
static yarr v1780;
static rt_int v1782;
static ydesc yd_1792;
static yarr v1794;
static ydesc yd_1803;
static yarr v1805;
static ydesc yd_1814;
static yarr v1816;
static ydesc yd_1825;
static yarr v1827;
static ydesc yd_1836;
static yarr v1838;
static ydesc yd_1847;
static yarr v1849;
static ydesc yd_1858;
static yarr v1860;
static ydesc yd_1869;
static yarr v1871;
static yarr v1873;
static ydesc yd_1882;
static yarr v1884;
static rt_int v1886;
static rt_int v1889;
static void * v1892;
static ydesc yd_1901;
static yarr v1903;
static rt_int v1905;
static ydesc yd_1915;
static yarr v1917;
static ydesc yd_1926;
static yarr v1928;
static ydesc yd_1937;
static yarr v1939;
static ydesc yd_1948;
static yarr v1950;
static yarr v1952;
static rt_int v1954;
static void * v1957;
static void * v1959;
static void * v1961;
static void * v1963;
static rt_int c_11763;
static rt_int c_11773;
static rt_int c_11782;
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
static void yr1965_InitWords(void);
static void yr1970_ReadSource(void);
static void yr1975_AddTok(rt_int a_p1976, rt_int a_p1977);
static unsigned char yr1982_At(rt_int a_p1983);
static rt_int yr1988_EndsOperand(void);
static rt_int yr1993_DigitVal(unsigned char a_p1994);
static void yr1999_LexError(yarr a_p2001);
static void yr2006_LexDigits(rt_int a_p2007, rt_int a_p2008);
static void yr2013_LexNumber(rt_int a_p2014);
static void yr2019_LexString(void);
static void yr2024_Lex(void);
static void * yr2029_NewNode(rt_int a_p2030, rt_int a_p2031);
static void yr2036_Link(void * * a_p2037, void * * a_p2038, void * a_p2039);
static rt_int yr2044_Count(void * a_p2045);
static rt_int yr2050_TK(void);
static rt_int yr2055_TV(void);
static rt_int yr2060_TLn(void);
static rt_int yr2065_IsAt(rt_int a_p2066, rt_int a_p2067);
static rt_int yr2072_Is(rt_int a_p2073);
static rt_int yr2078_IsIdAt(rt_int a_p2079);
static void yr2084_Skip(void);
static rt_int yr2089_Accept(rt_int a_p2090);
static rt_int yr2095_TokText(void);
static void yr2100_Expect(rt_int a_p2101);
static rt_int yr2106_Ident(void);
static void yr2111_CloseName(rt_int a_p2112, rt_int a_p2113);
static rt_int yr2118_ExtendedId(void);
static rt_int yr2123_IsLabel(rt_int a_p2124);
static void * yr2129_ImportItem(void);
static void * yr2134_ParseModule(void);
static rt_int yr2139_IsDeclWord(void);
static void * yr2144_ParseBlock(void);
static void * yr2149_ParseHandler(void);
static void * yr2154_ParseNames(void);
static void * yr2159_SimpleEntry(rt_int a_p2160);
static rt_int yr2165_Continues(rt_int a_p2166);
static void yr2171_ParseDeclGroup(void * * a_p2172, void * * a_p2173);
static void * yr2178_ParseDecl(void);
static void * yr2183_ParseDecl1(void);
static void yr2188_ParseFormals(void * a_p2189);
static void * yr2194_ParseFormalRep(void);
static rt_int yr2199_IsStructWord(rt_int a_p2200);
static void * yr2205_ParseRep(void);
static void * yr2210_ParseConcrete(void);
static void * yr2215_ParseIds(void);
static void * yr2220_ParseFieldGroups(void);
static void * yr2225_ParseConcrete1(void);
static void * yr2230_ParseQualifier(void);
static rt_int yr2235_IsStop(void);
static void * yr2240_ParseStatements(rt_int a_p2241);
static void * yr2246_ParseStatement(void);
static rt_int yr2251_OpAt(void);
static rt_int yr2256_IsRel(rt_int a_p2257);
static rt_int yr2262_IsAssocMul(rt_int a_p2263);
static rt_int yr2268_IsNonAssocMul(rt_int a_p2269);
static rt_int yr2274_IsAssocAdd(rt_int a_p2275);
static rt_int yr2280_IsNonAssocAdd(rt_int a_p2281);
static void * yr2286_Bin(rt_int a_p2287, void * a_p2288, void * a_p2289, rt_int a_p2290);
static void yr2295_NeedParens(rt_int a_p2296, rt_int a_p2297);
static void * yr2302_ParseExpr(void);
static void * yr2307_ParseSimple(void);
static void * yr2312_ParseTerm(void);
static rt_int yr2317_IsLiteralAt(rt_int a_p2318);
static void * yr2323_ParseLiteral(void);
static void * yr2328_ParseFactor(void);
static void * yr2333_ParseDesignator(void);
static void yr2338_EXIT_ARGS(void);
static void * yr2343_ParseProgram(void);
static void * yr2348_NewSym(rt_int a_p2349, rt_int a_p2350);
static void yr2355_OpenScope(rt_int a_p2356);
static void yr2361_ReopenScope(void * a_p2362);
static void yr2367_CloseScope(void);
static rt_int yr2372_Visible(void * a_p2373);
static void * yr2378_Find(rt_int a_p2379);
static void * yr2384_FindHere(rt_int a_p2385);
static void * yr2390_Lookup(rt_int a_p2391, rt_int a_p2392);
static rt_int yr2397_AltOf(void * a_p2398, void * a_p2399);
static rt_int yr2404_IsSimple(rt_int a_p2405);
static rt_int yr2410_DeclaredFrom(void * a_p2411, rt_int a_p2412);
static rt_int yr2417_LiteralIn(void * a_p2418, rt_int a_p2419);
static rt_int yr2424_LiteralInGroups(void * a_p2425, rt_int a_p2426);
static rt_int yr2431_Resolved(void * a_p2432);
static rt_int yr2437_Ambiguous(void * a_p2438);
static void * yr2443_FindLit(rt_int a_p2444, void * a_p2445);
static void yr2450_Define(void * a_p2451, rt_int a_p2452);
static rt_int yr2457_Path(rt_int a_p2458, rt_int a_p2459);
static rt_int yr2464_FramePtr(rt_int a_p2465);
static void yr2470_DeclStorage(rt_int a_p2471, rt_int a_p2472);
static rt_int yr2477_SymPath(void * a_p2478);
static void * yr2483_Real(void * a_p2484);
static void * yr2489_NewRep(rt_int a_p2490, rt_int a_p2491);
static void * yr2496_CopyRep(void * a_p2497);
static rt_int yr2502_IsDiscrete(void * a_p2503);
static rt_int yr2508_IsNumeric(void * a_p2509);
static rt_int yr2514_IsArrayLike(void * a_p2515);
static rt_int yr2520_IsString(void * a_p2521);
static rt_int yr2526_Deep(void * a_p2527);
static rt_int yr2532_Holds(void * a_p2533, rt_int a_p2534);
static rt_int yr2539_HoldsSignal(void * a_p2540);
static rt_int yr2545_NonAssignable(void * a_p2546);
static rt_int yr2551_CType(void * a_p2552);
static rt_int yr2557_DescOf(void * a_p2558);
static void yr2563_NewDesc(void * a_p2564);
static rt_int yr2569_SameType(void * a_p2570, void * a_p2571);
static void yr2576_TypeClash(rt_int a_p2577, void * a_p2578, void * a_p2579);
static void yr2584_CheckType(rt_int a_p2585, void * a_p2586, void * a_p2587);
static void yr2592_CheckRepresented(void * a_p2593, rt_int a_p2594);
static rt_int yr2599_SigText(void * a_p2600);
static rt_int yr2605_RepSig(void * a_p2606);
static rt_int yr2611_Identical(void * a_p2612, void * a_p2613);
static rt_int yr2618_IsLiteralNode(void * a_p2619);
static void yr2624_StoreBounds(void * a_p2625, yarr a_p2627);
static rt_int yr2632_LoText(void * a_p2633);
static rt_int yr2638_HiText(void * a_p2639);
static void * yr2644_AdoptLiteral(void * a_p2645, void * a_p2646, void * a_p2647);
static rt_int yr2652_HasQualifier(void * a_p2653);
static rt_int yr2658_Gcd(rt_int a_p2659, rt_int a_p2660);
static rt_int yr2665_MulChk(rt_int a_p2666, rt_int a_p2667, rt_int a_p2668);
static rt_int yr2673_PowChk(rt_int a_p2674, rt_int a_p2675, rt_int a_p2676);
static void yr2681_ScaleRatio(void * a_p2682, void * a_p2683, rt_int * a_p2684, rt_int * a_p2685, rt_int * a_p2686);
static rt_int yr2691_Factor(rt_int a_p2692, rt_int a_p2693);
static void yr2698_SetScale(void * a_p2699, rt_int a_p2700, rt_int a_p2701);
static void yr2706_Qualify(void * a_p2707, void * a_p2708);
static void yr2713_DefineLits(void * a_p2714);
static void yr2719_SetRange(void * a_p2720, rt_int a_p2721, rt_int a_p2722);
static rt_int yr2727_NewTid(rt_int a_p2728);
static void * yr2733_MakeRep(void * a_p2734, rt_int a_p2735, rt_int a_p2736);
static rt_int yr2741_Conforms(void * a_p2742, void * a_p2743);
static void * yr2748_MakeRep1(void * a_p2749, rt_int a_p2750, rt_int a_p2751);
static void yr2756_ResolvePending(rt_int a_p2757, void * a_p2758);
static void yr2763_CheckPending(void);
static void yr2768_BuildArrayDesc(void * a_p2769);
static void yr2774_AddField(void * a_p2775, void * * a_p2776, rt_int a_p2777, void * a_p2778, rt_int a_p2779, rt_int a_p2780, void * a_p2781, rt_int a_p2782);
static void yr2787_AddFields(void * a_p2788, void * * a_p2789, void * a_p2790, rt_int a_p2791, void * a_p2792, rt_int a_p2793);
static void yr2798_MakeRecord(void * a_p2799, void * a_p2800, rt_int a_p2801);
static void * yr2806_FindField(void * a_p2807, rt_int a_p2808);
static rt_int yr2813_BitsFor(rt_int a_p2814);
static rt_int yr2819_RoundUp(rt_int a_p2820, rt_int a_p2821);
static rt_int yr2826_Bits(void * a_p2827, rt_int a_p2828);
static rt_int yr2833_RecordBits(void * a_p2834, rt_int a_p2835, rt_int a_p2836);
static rt_int yr2841_FirstOfVariant(void * a_p2842, void * a_p2843);
static rt_int yr2848_LayOf(void * a_p2849, rt_int a_p2850);
static rt_int yr2855_LayField(void * a_p2856);
static rt_int yr2861_LayLit(void * a_p2862);
static rt_int yr2867_LayDesc(void * a_p2868);
static rt_int yr2873_WordExact(void * a_p2874);
static rt_int yr2879_AddrCode(void * a_p2880, rt_int a_p2881, void * a_p2882);
static void * yr2887_ApplyStorage(void * a_p2888, void * a_p2889);
static rt_int yr2894_AtAddress(void * a_p2895);
static rt_int yr2900_StoreAt(rt_int a_p2901, rt_int a_p2902);
static rt_int yr2907_ExtentCode(rt_int a_p2908, void * a_p2909);
static rt_int yr2914_SpaceArg(void * a_p2915, rt_int a_p2916, void * a_p2917);
static rt_int yr2922_PackedComponent(void * a_p2923);
static rt_int yr2928_CharOrd(void * a_p2929, rt_int a_p2930);
static void * yr2935_AlphabetFor(void * a_p2936, void * a_p2937);
static rt_int yr2942_CharValue(void * a_p2943, rt_int a_p2944, rt_int a_p2945);
static rt_int yr2950_StringCodes(void * a_p2951, rt_int a_p2952, rt_int * a_p2953, rt_int a_p2954);
static void yr2959_Manifest(void * a_p2960, rt_int * a_p2961, rt_int * a_p2962);
static void yr2967_ManifestStd(void * a_p2968, rt_int * a_p2969, rt_int * a_p2970);
static rt_int yr2975_NeedsConv(void * a_p2976, void * a_p2977);
static rt_int yr2982_ConvertRecord(rt_int a_p2983, void * a_p2984, void * a_p2985);
static rt_int yr2990_ConvertArray(rt_int a_p2991, void * a_p2992, void * a_p2993);
static rt_int yr2998_RescaleCode(rt_int a_p2999, void * a_p3000, void * a_p3001);
static void yr3006_CommonScale(rt_int * a_p3007, void * a_p3008, rt_int * a_p3009, void * a_p3010, void * a_p3011, rt_int a_p3012);
static void yr3017_FixLiteral(void * a_p3018, rt_int * a_p3019, void * * a_p3020);
static void yr3025_ManifestFix(void * a_p3026, rt_int * a_p3027, rt_int * a_p3028, rt_int * a_p3029);
static rt_int yr3034_FloatChk(rt_int a_p3035);
static rt_int yr3040_Convert(rt_int a_p3041, void * a_p3042, void * a_p3043);
static rt_int yr3048_StoreText(rt_int a_p3049, void * a_p3050, rt_int a_p3051, void * a_p3052, rt_int a_p3053);
static void yr3058_Store(rt_int a_p3059, void * a_p3060, rt_int a_p3061, void * a_p3062, rt_int a_p3063);
static rt_int yr3068_IsVariable(void * a_p3069);
static void yr3074_CheckPure(void * a_p3075);
static void yr3080_LValue(void * a_p3081, rt_int * a_p3082, void * * a_p3083);
static rt_int yr3088_Paren(rt_int a_p3089);
static void * yr3094_Lit(void * a_p3095, rt_int a_p3096);
static void * yr3101_Qualifier(void * a_p3102);
static void yr3107_Expr(void * a_p3108, void * a_p3109, rt_int * a_p3110, void * * a_p3111);
static void yr3116_CheckDefined(void * a_p3117, rt_int * a_p3118, void * a_p3119);
static rt_int yr3124_Addressable(void * a_p3125);
static rt_int yr3130_UndefMacro(void * a_p3131);
static rt_int yr3136_UndefValue(void * a_p3137);
static rt_int yr3142_RawCode(void * a_p3143, rt_int a_p3144);
static rt_int yr3149_VariantTest(void * a_p3150, void * a_p3151, rt_int a_p3152);
static void yr3157_NameExpr(void * a_p3158, void * a_p3159, rt_int * a_p3160, void * * a_p3161);
static rt_int yr3166_IsMainStore(void * a_p3167);
static void yr3172_IndexExpr(void * a_p3173, rt_int * a_p3174, void * * a_p3175);
static void yr3180_NegExpr(void * a_p3181, rt_int a_p3182, void * a_p3183, rt_int * a_p3184, void * * a_p3185);
static void * yr3190_Unbounded(void * a_p3191);
static rt_int yr3196_Call2(yarr a_p3198, rt_int a_p3199, rt_int a_p3200);
static rt_int yr3205_Call2T(rt_int a_p3206, rt_int a_p3207, rt_int a_p3208);
static rt_int yr3213_Infix(rt_int a_p3214, yarr a_p3216, rt_int a_p3217);
static rt_int yr3222_EqCode(rt_int a_p3223, void * a_p3224, rt_int a_p3225, void * a_p3226);
static rt_int yr3231_IsOrdered(void * a_p3232);
static rt_int yr3237_FDivName(void);
static rt_int yr3242_FixToFloat(rt_int a_p3243, void * a_p3244);
static void yr3249_BinExpr(void * a_p3250, void * a_p3251, rt_int * a_p3252, void * * a_p3253);
static rt_int yr3258_Fits(void * a_p3259, void * a_p3260);
static void * yr3265_Choose(void * a_p3266, rt_int a_p3267, rt_int a_p3268);
static rt_int yr3273_HidesStandard(void * a_p3274);
static void yr3279_CompileArgs(void * a_p3280, void * a_p3281, rt_int * a_p3282, rt_int * a_p3283);
static void yr3288_CheckUnresolved(void * a_p3289, void * a_p3290, rt_int a_p3291);
static rt_int yr3296_SameAsFormal(void * a_p3297, void * a_p3298);
static rt_int yr3303_CallCode(void * a_p3304, rt_int a_p3305, rt_int a_p3306, rt_int a_p3307);
static rt_int yr3312_Num(rt_int a_p3313);
static rt_int yr3318_UserOp(void * a_p3319, rt_int a_p3320, void * a_p3321, void * a_p3322, rt_int * a_p3323, void * * a_p3324);
static void yr3329_NoteCall(void * a_p3330, rt_int a_p3331);
static void yr3336_Directive(void * a_p3337, void * a_p3338, rt_int a_p3339, rt_int a_p3340, rt_int * a_p3341, void * * a_p3342);
static rt_int yr3347_Suppressed(rt_int a_p3348);
static rt_int yr3353_UserAssign(rt_int a_p3354, void * a_p3355, rt_int a_p3356, void * a_p3357, rt_int a_p3358);
static void yr3363_Assign(rt_int a_p3364, void * a_p3365, rt_int a_p3366, void * a_p3367, rt_int a_p3368);
static void yr3373_CallExpr(void * a_p3374, void * a_p3375, rt_int a_p3376, rt_int * a_p3377, void * * a_p3378);
static void yr3383_Denote(void * a_p3384, void * a_p3385, rt_int * a_p3386, void * * a_p3387);
static rt_int yr3392_VariantOf(void * a_p3393, rt_int a_p3394, rt_int a_p3395);
static void yr3400_Emit2(yarr a_p3402, rt_int a_p3403);
static void yr3408_Emit3(yarr a_p3410, rt_int a_p3411, yarr a_p3413);
static void yr3418_PopTo(rt_int a_p3419);
static void yr3424_LeaveBlock(void);
static rt_int yr3429_RaiseCode(rt_int a_p3430);
static void yr3435_BlockStatements(void * a_p3436);
static void yr3441_BlockStatements1(void * a_p3442);
static rt_int yr3447_SameDesig(void * a_p3448, void * a_p3449);
static void yr3454_CheckVariantSelected(void * a_p3455, void * a_p3456, void * a_p3457);
static void yr3462_CheckCaseLabels(void * a_p3463, void * a_p3464);
static rt_int yr3469_Falls(void * a_p3470);
static rt_int yr3475_BlockFalls(void * a_p3476);
static rt_int yr3481_Completes(void * a_p3482);
static rt_int yr3487_Exits(void * a_p3488, rt_int a_p3489);
static void yr3494_Statements(void * a_p3495);
static rt_int yr3500_Cond(void * a_p3501);
static rt_int yr3506_Label(void * a_p3507, void * a_p3508);
static void yr3513_CopyOut(void);
static void yr3518_Statement(void * a_p3519);
static void yr3524_ForStatement(void * a_p3525);
static rt_int yr3530_Join(rt_int a_p3531, rt_int a_p3532, rt_int a_p3533);
static void yr3538_ReturnStatement(void * a_p3539);
static void yr3544_BeginStatement(void * a_p3545);
static void yr3550_PlaceLabel(void * a_p3551);
static void yr3556_GotoStatement(void * a_p3557);
static void yr3562_CheckLabels(void * a_p3563);
static void yr3568_DesigBase(void * a_p3569, void * * a_p3570, rt_int * a_p3571, rt_int * a_p3572);
static void * yr3577_Note(void * a_p3578, rt_int a_p3579, rt_int a_p3580);
static void yr3585_NoteWrite(void * a_p3586);
static void yr3591_NoteFree(void * a_p3592);
static void yr3597_NoteFreeDeref(void * a_p3598, rt_int a_p3599);
static rt_int yr3604_DSteps(void * a_p3605, yarr * a_p3606);
static rt_int yr3611_Overlaps(void * a_p3612, void * a_p3613);
static void yr3618_CheckActuals(void * a_p3619, rt_int a_p3620, rt_int a_p3621);
static void yr3626_CheckEffects(void);
static rt_int yr3631_DynIndex(rt_int a_p3632, rt_int a_p3633, rt_int a_p3634);
static rt_int yr3639_RoutineCName(rt_int a_p3640);
static void * yr3645_FormalRep(void * a_p3646);
static rt_int yr3651_ParamCType(void * a_p3652);
static void yr3657_InstallTrap(void * a_p3658, void * a_p3659);
static rt_int yr3664_DeclType(void * a_p3665);
static void yr3670_RoutineHeader(void * a_p3671, rt_int a_p3672);
static void * yr3677_SameSignature(void * a_p3678, void * a_p3679);
static void yr3684_RoutineBody(void * a_p3685);
static void yr3690_DeclareStorage(void * a_p3691, void * a_p3692, rt_int a_p3693);
static void yr3698_DeclareAt(void * a_p3699, void * a_p3700, rt_int a_p3701, rt_int a_p3702);
static void yr3707_InitStorage(void * a_p3708, void * a_p3709, rt_int a_p3710);
static void yr3715_SimpleDecl(void * a_p3716);
static void yr3721_NoteAlphabet(void * a_p3722, void * a_p3723);
static void yr3728_AtLocation(void * a_p3729, void * a_p3730);
static void yr3735_Defer(void * a_p3736, rt_int a_p3737, void * a_p3738, rt_int a_p3739);
static void yr3744_RunDeferred(rt_int a_p3745, rt_int a_p3746);
static void yr3751_ModuleInit(rt_int a_p3752);
static void yr3757_Declarations(void * a_p3758);
static void yr3763_DeclareRoutine(void * a_p3764);
static void * yr3769_Alias(rt_int a_p3770, void * a_p3771);
static void yr3776_AddLits(void * * a_p3777, void * a_p3778, rt_int a_p3779);
static rt_int yr3784_Provides(void * a_p3785, rt_int a_p3786);
static rt_int yr3791_ImportLater(rt_int a_p3792, rt_int a_p3793, void * * a_p3794);
static void * yr3799_OneDecl(void * a_p3800);
static void * yr3805_Lazy(rt_int a_p3806, rt_int a_p3807, void * a_p3808, rt_int a_p3809);
static void yr3814_SetLazy(rt_int a_p3815, void * a_p3816);
static void yr3821_ResolveFrom(void * a_p3822, void * a_p3823);
static void yr3828_ResolveLater(rt_int a_p3829);
static void yr3834_LazyModule(void * a_p3835, void * * a_p3836, rt_int a_p3837);
static void yr3842_ResolveItem(void * a_p3843, void * * a_p3844, rt_int a_p3845);
static void yr3850_DefineAll(void * a_p3851, rt_int a_p3852);
static void * yr3857_ExtendWith(void * a_p3858, void * a_p3859, rt_int a_p3860);
static void yr3865_CompileModule(void * a_p3866);
static void yr3871_DeclareTemplate(void * a_p3872);
static void yr3877_Instantiate(void * a_p3878);
static void yr3883_DeclareProcess(void * a_p3884);
static void yr3889_AwaitProcesses(void);
static void yr3894_Activate(void * a_p3895, void * a_p3896);
static void yr3901_CheckLifeScope(void * a_p3902, rt_int a_p3903, rt_int a_p3904);
static rt_int yr3909_LifeDepth(rt_int a_p3910);
static rt_int yr3915_MonitorPath(void * a_p3916);
static void yr3921_EnterMonitor(void * a_p3922);
static void yr3927_LeaveMonitor(void);
static void yr3932_TerminateStatement(void * a_p3933);
static void yr3938_DeclareSignal(void * a_p3939, rt_int a_p3940);
static void yr3945_DeclareSignalArray(void * a_p3946, rt_int a_p3947);
static void yr3952_DeviceSignal(void * a_p3953, void * a_p3954);
static void * yr3959_Arg(void * a_p3960, rt_int a_p3961);
static void yr3966_NArgs(void * a_p3967, rt_int a_p3968);
static rt_int yr3973_Call1(yarr a_p3975, rt_int a_p3976);
static rt_int yr3981_Addr(rt_int a_p3982);
static void yr3987_StdVar(void * a_p3988, rt_int a_p3989, rt_int * a_p3990, void * * a_p3991);
static void yr3996_NumArg(void * a_p3997, rt_int * a_p3998, void * * a_p3999);
static rt_int yr4004_IntArg(void * a_p4005);
static void yr4010_CodeInsert(void * a_p4011);
static void * yr4016_ManifestScale(void * a_p4017, void * a_p4018);
static void yr4023_StdCall(rt_int a_p4024, void * a_p4025, rt_int a_p4026, rt_int * a_p4027, void * * a_p4028);
static rt_int yr4033_ArgCount(void);
static rt_int yr4038_ArgTxt(rt_int a_p4039);
static void yr4044_ReadArgs(void);
static rt_int yr4049_LibPath(rt_int a_p4050, yarr a_p4052);
static rt_int yr4057_ReadInto(rt_int a_p4058);
static void yr4063_WriteFile(rt_int a_p4064, yR140 a_p4065);
static rt_int yr4070_ReadLibLine(rt_int a_p4071);
static void yr4076_DigitsIn(rt_int a_p4077, rt_int a_p4078);
static void yr4083_TokenText(rt_int a_p4084);
static yR140 yr4089_TokensText(rt_int a_p4090, rt_int a_p4091);
static rt_int yr4096_Fingerprint(yR140 a_p4097);
static rt_int yr4102_TokEq(rt_int a_p4103, rt_int a_p4104, rt_int a_p4105, rt_int a_p4106);
static void yr4111_CheckSynopsis(void * a_p4112, rt_int a_p4113);
static rt_int yr4118_IsSegment(rt_int a_p4119);
static void yr4124_CheckPairing(void * a_p4125, void * a_p4126);
static void yr4131_PairInInput(void);
static void yr4136_LoadSynopsis(rt_int a_p4137, rt_int a_p4138);
static void yr4143_LoadImports(void * a_p4144);
static void * yr4149_LastSegment(void);
static void yr4154_Interface(void);
static void yr4159_Segment(void);
static rt_int yr4164_UsesText(void * a_p4165);
static void yr4170_WriteSegment(rt_int a_p4171);
static void yr4176_LinkProgram(void);
static void yr4181_CheckUse(rt_int a_p4182, rt_int a_p4183);
static rt_int yr4188_SegKey(rt_int a_p4189, rt_int a_p4190);
static rt_int yr4195_HeaderHash(void * a_p4196);
static rt_int yr4201_ParamList(void * a_p4202);
static void yr4207_SegStorage(void * a_p4208, void * a_p4209, rt_int a_p4210);
static void yr4215_SegRoutine(void * a_p4216, void * a_p4217, rt_int a_p4218);
static void yr4223_SegActivation(void * a_p4224, void * a_p4225);
static rt_int yr4230_UseLine(void * a_p4231);
static rt_int yr4236_FactsPrint(rt_int a_p4237);
static void yr4242_ApplyFacts(void);
static void yr4247_ApplyFile(rt_int a_p4248);
static void yr4253_ApplyLine(yarr a_p4255, rt_int a_p4256);
static void yr4261_StdRep(yarr a_p4263, void * a_p4264);
static void yr4269_StdOp(yarr a_p4271, rt_int a_p4272);
static void * yr4277_LitList(yarr a_p4279, yarr a_p4280, yarr a_p4281, rt_int a_p4282);
static void * yr4287_Abstract(rt_int a_p4288, yarr a_p4290);
static void yr4295_Predefine(void);
static void yr4300_Translate(void);
static void yr4305_WriteProgram(void);
static void yr4310_WriteHead(void);
static rt_int yr9162_At(struct yf3627 *up, rt_int a_p9163, rt_int a_p9164);
static rt_int yr9169_Reaches(struct yf3627 *up, rt_int a_p9170, rt_int a_p9171);
static void yr9176_WriteFacts(struct yf3627 *up);
static rt_int yr9181_VName(struct yf3627 *up, rt_int a_p9182);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4316 = Y_UNDEF_I;
F.v4316 = INT64_C(0);
{ rt_int hi4321 = 127;
for (rt_int i4320 = 0; i4320 <= hi4321; i4320++) { F.c_4319 = i4320; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_4319)] = Y_DEFI(F.v4316);
Y_FLUSH();
((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v4316))] = F.c_4319;
Y_FLUSH();
F.v4316 = y_range(y_add(Y_DEFI(F.v4316), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (i4320 == hi4321) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv4331 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv4331; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv4336 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv4336; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1020_PoolAdd(unsigned char a_p1021) {
struct yf1022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1021 = a_p1021;
v915 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v915))] = F.p1021;
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1026_SB(void) {
struct yf1027 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v955 = y_range(y_add(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))] = Y_DEFI(v941);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1031_SC(unsigned char a_p1032) {
struct yf1033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1032 = a_p1032;
v941 = y_range(y_add(Y_DEFI(v941), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((unsigned char *)(v939).p)[y_ix1(v939, Y_DEFI(v941))] = F.p1032;
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1037_SA(yarr a_p1039) {
struct yf1040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1039 = a_p1039;
F.lo4355 = y_low(F.p1039, INT64_C(1));
F.hi4356 = y_high(F.p1039, INT64_C(1));
{ rt_int hi4360 = F.hi4356;
for (rt_int i4359 = F.lo4355; i4359 <= hi4360; i4359++) { F.c_4358 = i4359; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_4358)]));
Y_FLUSH();
if (i4359 == hi4360) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_ST(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
F.v4364 = Y_UNDEF_I;
if ((F.p1045 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v4364 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]);
Y_FLUSH();
while ((Y_DEFI(F.v4364) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1045)]))))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4364))]));
Y_FLUSH();
F.v4364 = y_range(y_add(Y_DEFI(F.v4364), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_4379, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_4379, &F.v4381);
F.v4383 = Y_UNDEF_I;
F.v4383 = INT64_C(0);
F.v4386 = Y_UNDEF_I;
F.v4386 = F.p1051;
if ((Y_DEFI(F.v4386) < INT64_C(0))) {
yr1031_SC(45);
Y_FLUSH();
F.v4386 = y_range(y_neg(Y_DEFI(F.v4386)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
for (;;) {
Y_TICK();
F.v4383 = y_range(y_add(Y_DEFI(F.v4383), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((unsigned char *)(F.v4381).p)[y_ix1(F.v4381, Y_DEFI(F.v4383))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v4386), INT64_C(10))), INT64_C(48)))]);
Y_FLUSH();
F.v4386 = y_range(y_div(Y_DEFI(F.v4386), INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((Y_DEFI(F.v4386) == INT64_C(0))) {
goto yl_4390;
}
}
yl_4390: ;
while ((Y_DEFI(F.v4383) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v4381).p)[y_ix1(F.v4381, Y_DEFI(F.v4383))]));
Y_FLUSH();
F.v4383 = y_range(y_sub(Y_DEFI(F.v4383), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4405 = Y_UNDEF_I;
F.v4405 = Y_DEFI(((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))]);
v955 = y_range(y_sub(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = y_range(y_sub(Y_DEFI(v941), Y_DEFI(F.v4405)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.lo4416 = y_add(Y_DEFI(F.v4405), INT64_C(1));
F.hi4417 = Y_DEFI(v941);
{ rt_int hi4421 = F.hi4417;
for (rt_int i4420 = F.lo4416; i4420 <= hi4421; i4420++) { F.c_4419 = i4420; Y_TICK();
yr1020_PoolAdd(Y_DEFB(((unsigned char *)(v939).p)[y_ix1(v939, F.c_4419)]));
Y_FLUSH();
if (i4420 == hi4421) break;
}}
v941 = Y_DEFI(F.v4405);
Y_FLUSH();
{ rt_int rv4422 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4422; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
Y_FLUSH();
yr1037_SA(F.p1063);
Y_FLUSH();
{ rt_int rv4425 = yr1056_SE();
y_use = F.yu; return rv4425; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v4430 = Y_UNDEF_I;
F.v4430 = INT64_C(0);
F.v4433 = Y_UNDEF_I;
F.v4435 = Y_UNDEF_I;
F.lo4440 = F.p1069;
F.hi4441 = y_sub((y_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi4445 = F.hi4441;
for (rt_int i4444 = F.lo4440; i4444 <= hi4445; i4444++) { F.c_4443 = i4444; Y_TICK();
F.v4430 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v4430), INT64_C(31))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4443)]))]))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (i4444 == hi4445) break;
}}
for (;;) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4430))]) == INT64_C(0))) {
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = F.p1069;
Y_FLUSH();
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = F.p1070;
Y_FLUSH();
((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4430))] = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
{ rt_int rv4455 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4455; }
}
F.v4433 = Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4430))]);
Y_FLUSH();
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4433))]) == F.p1070)) {
F.v4435 = 1;
Y_FLUSH();
F.lo4462 = INT64_C(0);
F.hi4463 = y_sub(F.p1070, INT64_C(1));
{ rt_int hi4467 = F.hi4463;
for (rt_int i4466 = F.lo4462; i4466 <= hi4467; i4466++) { F.c_4465 = i4466; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4433))]), F.c_4465))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(F.p1069, F.c_4465))])))) {
F.v4435 = 0;
Y_FLUSH();
}
if (i4466 == hi4467) break;
}}
if (Y_DEFI(F.v4435)) {
{ rt_int rv4471 = y_range(Y_DEFI(F.v4433), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4471; }
}
}
F.v4430 = y_range(y_mod((y_add(Y_DEFI(F.v4430), INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
yl_4451: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv4478 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]));
y_use = F.yu; return rv4478; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv4481 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv4481; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4486 = 1;
y_use = F.yu; return rv4486; }
}
if ((!(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]) == Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1090)])))) {
{ rt_int rv4488 = 0;
y_use = F.yu; return rv4488; }
}
F.lo4494 = INT64_C(0);
F.hi4495 = y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]), INT64_C(1));
{ rt_int hi4499 = F.hi4495;
for (rt_int i4498 = F.lo4494; i4498 <= hi4499; i4498++) { F.c_4497 = i4498; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)]), F.c_4497))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)]), F.c_4497))])))) {
{ rt_int rv4503 = 0;
y_use = F.yu; return rv4503; }
}
if (i4498 == hi4499) break;
}}
{ rt_int rv4505 = 1;
y_use = F.yu; return rv4505; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4510 = Y_UNDEF_I;
F.v4510 = INT64_C(0);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1096)]) < (y_add((y_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4520 = 0;
y_use = F.yu; return rv4520; }
}
F.lo4526 = y_low(F.p1098, INT64_C(1));
F.hi4527 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4531 = F.hi4527;
for (rt_int i4530 = F.lo4526; i4530 <= hi4531; i4530++) { F.c_4529 = i4530; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)]), Y_DEFI(F.v4510)))]) == Y_DEFB(((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4529)])))) {
{ rt_int rv4534 = 0;
y_use = F.yu; return rv4534; }
}
F.v4510 = y_range(y_add(Y_DEFI(F.v4510), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (i4530 == hi4531) break;
}}
{ rt_int rv4538 = 1;
y_use = F.yu; return rv4538; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4545 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)]), F.p1105)), INT64_C(1)))]);
y_use = F.yu; return rv4545; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
F.v4550 = Y_UNDEF_P;
({ F.v4550 = y_new_l(sizeof(yR135), "r0,0,2,-1(-1,0,0:i0,0,64;-1,0,0:p0,0,64;)", &yd_136); y_initu(&yd_136, y_deref(F.v4550)); });
Y_FLUSH();
(*(yR135 *)y_deref(Y_DEFP(F.v4550))) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
Y_FLUSH();
if ((Y_DEFP(((*F.p1111)).f_head) == ((void *)0))) {
((*F.p1111)).f_head = Y_DEFP(F.v4550);
Y_FLUSH();
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1111)).f_tail)))).f_next = Y_DEFP(F.v4550);
Y_FLUSH();
}
((*F.p1111)).f_tail = Y_DEFP(F.v4550);
Y_FLUSH();
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
Y_FLUSH();
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
Y_FLUSH();
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1126)).f_tail)))).f_next = Y_DEFP(((*F.p1127)).f_head);
Y_FLUSH();
}
((*F.p1126)).f_tail = Y_DEFP(((*F.p1127)).f_tail);
Y_FLUSH();
((*F.p1127)).f_head = ((void *)0);
Y_FLUSH();
((*F.p1127)).f_tail = ((void *)0);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1132_Emit(rt_int a_p1133) {
struct yf1134 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1133 = a_p1133;
yr1110_Put(&v996, F.p1133);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1138_EmitS(yarr a_p1140) {
struct yf1141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1140 = a_p1140;
yr1110_Put(&v996, yr1061_T(F.p1140));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1145_WriteTxt(rt_int a_p1146) {
struct yf1147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1146 = a_p1146;
F.v4564 = Y_UNDEF_I;
F.v4564 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]);
while ((Y_DEFI(F.v4564) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1146)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4564))]); y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
F.v4564 = y_range(y_add(Y_DEFI(F.v4564), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4571 = Y_UNDEF_P;
F.v4571 = Y_DEFP((F.p1152).f_head);
while ((!(Y_DEFP(F.v4571) == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v4571)))).f_t));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
F.v4571 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v4571)))).f_next);
Y_FLUSH();
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
F.v4577 = Y_UNDEF_I;
v955 = INT64_C(0);
Y_FLUSH();
v941 = INT64_C(0);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("line ", 5));
Y_FLUSH();
yr1050_SI(F.p1158);
Y_FLUSH();
yr1037_SA(y_str(": ", 2));
Y_FLUSH();
yr1044_ST(F.p1159);
Y_FLUSH();
F.v4577 = yr1056_SE();
Y_FLUSH();
yr1145_WriteTxt(Y_DEFI(F.v4577));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
y_close(&v911);
Y_FLUSH();
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1164_Warn(rt_int a_p1165, rt_int a_p1166) {
struct yf1167 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1165 = a_p1165;
F.p1166 = a_p1166;
F.v4587 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("line ", 5));
Y_FLUSH();
yr1050_SI(F.p1165);
Y_FLUSH();
yr1037_SA(y_str(": warning: ", 11));
Y_FLUSH();
yr1044_ST(F.p1166);
Y_FLUSH();
F.v4587 = yr1056_SE();
Y_FLUSH();
yr1171_WriteTo(&v994, Y_DEFI(F.v4587));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("/* ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v4587));
Y_FLUSH();
yr1037_SA(y_str(" */", 3));
Y_FLUSH();
F.v4587 = yr1056_SE();
Y_FLUSH();
yr1110_Put(&v992, Y_DEFI(F.v4587));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4597 = Y_UNDEF_I;
F.v4597 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]);
while ((Y_DEFI(F.v4597) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1173)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4597))]); y_put_value(&(*F.p1172), &y_d_byte, &pv); });
Y_FLUSH();
F.v4597 = y_range(y_add(Y_DEFI(F.v4597), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
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
Y_FLUSH();
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
F.v4609 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1044_ST(F.p1188);
Y_FLUSH();
yr1037_SA(F.p1190);
Y_FLUSH();
F.v4609 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(F.p1187, Y_DEFI(F.v4609));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = y_range(y_add(Y_DEFI(v958), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
{ rt_int rv4613 = Y_DEFI(v958);
y_use = F.yu; return rv4613; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4617 = Y_UNDEF_I;
F.v4617 = yr1195_NewSerial();
yr1026_SB();
Y_FLUSH();
yr1037_SA(F.p1202);
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v4617));
Y_FLUSH();
{ rt_int rv4618 = yr1056_SE();
y_use = F.yu; return rv4618; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1965_InitWords(void) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4621 = Y_UNDEF_I;
F.v4623 = Y_UNDEF_I;
F.v4625 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
Y_FLUSH();
yr1037_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
Y_FLUSH();
yr1037_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
Y_FLUSH();
yr1037_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
Y_FLUSH();
yr1037_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
Y_FLUSH();
yr1037_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
Y_FLUSH();
yr1037_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
Y_FLUSH();
yr1037_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
Y_FLUSH();
yr1037_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
Y_FLUSH();
yr1037_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := => .. <= >= ## == << >> ", 77));
Y_FLUSH();
yr1037_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
Y_FLUSH();
F.v4625 = yr1056_SE();
Y_FLUSH();
v922 = INT64_C(0);
Y_FLUSH();
F.v4621 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4625))]);
Y_FLUSH();
F.lo4642 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4625))]);
F.hi4643 = y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4625))]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4625))]))), INT64_C(1));
{ rt_int hi4647 = F.hi4643;
for (rt_int i4646 = F.lo4642; i4646 <= hi4647; i4646++) { F.c_4645 = i4646; Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4645)]) == 32)) {
F.v4623 = yr1068_Intern(Y_DEFI(F.v4621), y_range(y_sub(F.c_4645, Y_DEFI(F.v4621)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v4621 = y_range(y_add(F.c_4645, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (i4646 == hi4647) break;
}}
if ((!(Y_DEFI(v922) == v621))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1970_ReadSource(void) {
struct yf1971 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4654 = Y_UNDEF_B;
y_open(&v909, y_str("INPUT", 5), 0);
Y_FLUSH();
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4654 = g; });
Y_FLUSH();
yr1020_PoolAdd(Y_DEFB(F.v4654));
Y_FLUSH();
}
v1219 = Y_DEFI(v915);
Y_FLUSH();
y_close(&v909);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1975_AddTok(rt_int a_p1976, rt_int a_p1977) {
struct yf1978 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1976 = a_p1976;
F.p1977 = a_p1977;
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = F.p1976;
Y_FLUSH();
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = F.p1977;
Y_FLUSH();
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(v1225);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1982_At(rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1983 = a_p1983;
if ((F.p1983 > Y_DEFI(v1219))) {
{ unsigned char rv4667 = 0;
y_use = F.yu; return rv4667; }
}
{ unsigned char rv4668 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.p1983)]);
y_use = F.yu; return rv4668; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1988_EndsOperand(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4671 = Y_UNDEF_I;
F.v4673 = Y_UNDEF_I;
if ((Y_DEFI(v1213) == INT64_C(0))) {
{ rt_int rv4676 = 0;
y_use = F.yu; return rv4676; }
}
F.v4671 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))]);
Y_FLUSH();
F.v4673 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))]);
Y_FLUSH();
if ((((((((Y_DEFI(F.v4671) == v207)) || ((Y_DEFI(F.v4671) == v216))) || ((Y_DEFI(F.v4671) == v219))) || ((Y_DEFI(F.v4671) == v222))) || ((Y_DEFI(F.v4671) == v225))) || ((Y_DEFI(F.v4671) == v228)))) {
{ rt_int rv4678 = 1;
y_use = F.yu; return rv4678; }
}
if ((Y_DEFI(F.v4671) == v213)) {
{ rt_int rv4679 = ((((Y_DEFI(F.v4673) == v597)) || ((Y_DEFI(F.v4673) == v603))) || ((Y_DEFI(F.v4673) == v618)));
y_use = F.yu; return rv4679; }
}
if ((Y_DEFI(F.v4671) == v210)) {
{ rt_int rv4680 = (Y_DEFI(F.v4673) == v387);
y_use = F.yu; return rv4680; }
}
{ rt_int rv4682 = 0;
y_use = F.yu; return rv4682; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1993_DigitVal(unsigned char a_p1994) {
struct yf1995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1994 = a_p1994;
if ((((F.p1994 >= 48)) && ((F.p1994 <= 57)))) {
{ rt_int rv4689 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1994)]), INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4689; }
}
if ((((F.p1994 >= 65)) && ((F.p1994 <= 70)))) {
{ rt_int rv4694 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1994)]), INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4694; }
}
{ rt_int rv4696 = INT64_C(99);
y_use = F.yu; return rv4696; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1999_LexError(yarr a_p2001) {
struct yf2002 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2001 = a_p2001;
yr1178_FailS(Y_DEFI(v1225), F.p2001);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2006_LexDigits(rt_int a_p2007, rt_int a_p2008) {
struct yf2009 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2007 = a_p2007;
F.p2008 = a_p2008;
F.v4703 = Y_UNDEF_I;
while ((yr1014_IsDigit(yr1982_At(Y_DEFI(v1222))) || ((F.p2008 && ((yr1993_DigitVal(yr1982_At(Y_DEFI(v1222))) < INT64_C(16))))))) {
Y_TICK();
if ((yr1993_DigitVal(yr1982_At(Y_DEFI(v1222))) >= F.p2007)) {
yr1026_SB();
Y_FLUSH();
yr1031_SC(39);
Y_FLUSH();
yr1031_SC(yr1982_At(Y_DEFI(v1222)));
Y_FLUSH();
yr1037_SA(y_str("' is not a digit of BASE", 24));
Y_FLUSH();
yr1050_SI(F.p2007);
Y_FLUSH();
yr1037_SA(y_str(" (IV.B)", 7));
Y_FLUSH();
F.v4703 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(Y_DEFI(v1225), Y_DEFI(F.v4703));
Y_FLUSH();
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2013_LexNumber(rt_int a_p2014) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2014 = a_p2014;
F.v4713 = Y_UNDEF_I;
F.v4713 = INT64_C(10);
F.v4716 = Y_UNDEF_I;
F.v4718 = Y_UNDEF_I;
F.v4720 = Y_UNDEF_I;
F.v4722 = Y_UNDEF_I;
F.v4724 = Y_UNDEF_I;
F.v4724 = 0;
F.v4727 = Y_UNDEF_I;
F.v4727 = 0;
F.v4730 = Y_UNDEF_I;
F.v4730 = INT64_C(0);
F.v4733 = Y_UNDEF_I;
F.v4733 = INT64_C(0);
F.v4736 = Y_UNDEF_I;
F.v4736 = INT64_C(0);
F.v4739 = Y_UNDEF_I;
F.v4739 = INT64_C(0);
F.v4742 = Y_UNDEF_I;
F.v4742 = INT64_C(0);
F.v4745 = Y_UNDEF_I;
if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
F.v4713 = Y_DEFI(v1228);
Y_FLUSH();
F.v4727 = 1;
Y_FLUSH();
}
v1228 = INT64_C(0);
Y_FLUSH();
F.v4716 = Y_DEFI(v1222);
Y_FLUSH();
yr2006_LexDigits(Y_DEFI(F.v4713), Y_DEFI(F.v4727));
Y_FLUSH();
F.v4718 = Y_DEFI(v1222);
Y_FLUSH();
if ((Y_DEFI(F.v4718) == Y_DEFI(F.v4716))) {
yr1999_LexError(y_str("a number has at least one digit (IV.B)", 38));
Y_FLUSH();
}
F.v4720 = Y_DEFI(v1222);
Y_FLUSH();
F.v4722 = Y_DEFI(v1222);
Y_FLUSH();
if ((((yr1982_At(Y_DEFI(v1222)) == 46)) && ((!(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4724 = 1;
Y_FLUSH();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v4720 = Y_DEFI(v1222);
Y_FLUSH();
yr2006_LexDigits(Y_DEFI(F.v4713), Y_DEFI(F.v4727));
Y_FLUSH();
F.v4722 = Y_DEFI(v1222);
Y_FLUSH();
}
if ((yr1982_At(Y_DEFI(v1222)) == 80)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v4739 = INT64_C(1);
Y_FLUSH();
if ((((((yr1982_At(Y_DEFI(v1222)) == 45)) || ((yr1982_At(Y_DEFI(v1222)) == 43)))) && yr1014_IsDigit(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1982_At(Y_DEFI(v1222)) == 45)) {
F.v4739 = INT64_C(-1);
Y_FLUSH();
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v4736 = INT64_C(0);
Y_FLUSH();
while (yr1014_IsDigit(yr1982_At(Y_DEFI(v1222)))) {
Y_TICK();
if ((Y_DEFI(F.v4736) > INT64_C(1000))) {
yr1999_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
Y_FLUSH();
}
F.v4736 = y_range(y_add((y_mul(Y_DEFI(F.v4736), INT64_C(10))), yr1993_DigitVal(yr1982_At(Y_DEFI(v1222)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v4736 = y_range(y_mul(Y_DEFI(F.v4736), Y_DEFI(F.v4739)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v4730 = INT64_C(0);
Y_FLUSH();
F.v4742 = y_range(y_sub(Y_DEFI(F.v4722), Y_DEFI(F.v4720)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.lo4783 = Y_DEFI(F.v4716);
F.hi4784 = y_sub(Y_DEFI(F.v4722), INT64_C(1));
{ rt_int hi4788 = F.hi4784;
for (rt_int i4787 = F.lo4783; i4787 <= hi4788; i4787++) { F.c_4786 = i4787; Y_TICK();
if ((((F.c_4786 < Y_DEFI(F.v4718))) || ((F.c_4786 >= Y_DEFI(F.v4720))))) {
F.v4733 = yr1993_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4786)]));
Y_FLUSH();
if ((Y_DEFI(F.v4730) > (y_div((y_sub(v906, Y_DEFI(F.v4733))), Y_DEFI(F.v4713))))) {
yr1999_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
Y_FLUSH();
}
F.v4730 = y_range(y_add((y_mul(Y_DEFI(F.v4730), Y_DEFI(F.v4713))), Y_DEFI(F.v4733)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (i4787 == hi4788) break;
}}
if (F.p2014) {
F.v4730 = y_range(y_neg(Y_DEFI(F.v4730)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(v1246) >= INT64_C(200000))) {
yr1999_LexError(y_str("too many fixed-point literals", 29));
Y_FLUSH();
}
v1246 = y_range(y_add(Y_DEFI(v1246), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(v1246))] = Y_DEFI(F.v4730);
Y_FLUSH();
((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(v1246))] = Y_DEFI(F.v4713);
Y_FLUSH();
((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(v1246))] = y_range(y_sub(Y_DEFI(F.v4736), Y_DEFI(F.v4742)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr1975_AddTok(v219, Y_DEFI(v1246));
Y_FLUSH();
y_use = F.yu; return;
}
if (Y_DEFI(F.v4724)) {
if ((!(Y_DEFI(F.v4713) == INT64_C(10)))) {
yr1999_LexError(y_str("a floating-point literal is decimal", 35));
Y_FLUSH();
}
if ((yr1982_At(Y_DEFI(v1222)) == 69)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((((yr1982_At(Y_DEFI(v1222)) == 45)) || ((yr1982_At(Y_DEFI(v1222)) == 43)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
while (yr1014_IsDigit(yr1982_At(Y_DEFI(v1222)))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
}
yr1026_SB();
Y_FLUSH();
if (F.p2014) {
yr1037_SA(y_str("-", 1));
Y_FLUSH();
}
F.lo4815 = Y_DEFI(F.v4716);
F.hi4816 = y_sub(Y_DEFI(v1222), INT64_C(1));
{ rt_int hi4820 = F.hi4816;
for (rt_int i4819 = F.lo4815; i4819 <= hi4820; i4819++) { F.c_4818 = i4819; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4818)]));
Y_FLUSH();
if (i4819 == hi4820) break;
}}
F.v4745 = yr1056_SE();
Y_FLUSH();
yr1975_AddTok(v222, Y_DEFI(F.v4745));
Y_FLUSH();
y_use = F.yu; return;
}
F.v4730 = INT64_C(0);
Y_FLUSH();
F.lo4825 = Y_DEFI(F.v4716);
F.hi4826 = y_sub(Y_DEFI(F.v4718), INT64_C(1));
{ rt_int hi4830 = F.hi4826;
for (rt_int i4829 = F.lo4825; i4829 <= hi4830; i4829++) { F.c_4828 = i4829; Y_TICK();
F.v4733 = yr1993_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4828)]));
Y_FLUSH();
if ((Y_DEFI(F.v4730) > (y_div((y_sub(v906, Y_DEFI(F.v4733))), Y_DEFI(F.v4713))))) {
yr1999_LexError(y_str("integer literal too large", 25));
Y_FLUSH();
}
F.v4730 = y_range(y_add((y_mul(Y_DEFI(F.v4730), Y_DEFI(F.v4713))), Y_DEFI(F.v4733)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (i4829 == hi4830) break;
}}
if (F.p2014) {
F.v4730 = y_range(y_neg(Y_DEFI(F.v4730)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
yr1975_AddTok(v216, Y_DEFI(F.v4730));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2019_LexString(void) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4839 = Y_UNDEF_I;
F.v4841 = Y_UNDEF_I;
F.v4843 = Y_UNDEF_I;
F.v4845 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
for (;;) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((!(yr1982_At(Y_DEFI(v1222)) == 34))) {
Y_TICK();
if ((((yr1982_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
v927 = 0;
Y_FLUSH();
yr1999_LexError(y_str("a string must close on its line", 31));
Y_FLUSH();
}
yr1031_SC(yr1982_At(Y_DEFI(v1222)));
Y_FLUSH();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v4841 = Y_DEFI(v1222);
Y_FLUSH();
F.v4843 = INT64_C(0);
Y_FLUSH();
F.v4845 = 1;
Y_FLUSH();
while (Y_DEFI(F.v4845)) {
Y_TICK();
if (((((yr1982_At(Y_DEFI(F.v4841)) == 32)) || ((yr1982_At(Y_DEFI(F.v4841)) == 9))) || ((yr1982_At(Y_DEFI(F.v4841)) == 13)))) {
F.v4841 = y_range(y_add(Y_DEFI(F.v4841), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((yr1982_At(Y_DEFI(F.v4841)) == 10)) {
F.v4843 = y_range(y_add(Y_DEFI(F.v4843), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v4841 = y_range(y_add(Y_DEFI(F.v4841), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else {
F.v4845 = 0;
Y_FLUSH();
}
}
if ((!(yr1982_At(Y_DEFI(F.v4841)) == 34))) {
goto yl_4846;
}
v1225 = y_range(y_add(Y_DEFI(v1225), Y_DEFI(F.v4843)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1222 = Y_DEFI(F.v4841);
Y_FLUSH();
}
yl_4846: ;
F.v4839 = yr1056_SE();
Y_FLUSH();
yr1975_AddTok(v228, Y_DEFI(F.v4839));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2024_Lex(void) {
struct yf2025 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4874 = Y_UNDEF_B;
F.v4876 = Y_UNDEF_I;
F.v4878 = Y_UNDEF_I;
F.v4880 = Y_UNDEF_I;
F.v4882 = Y_UNDEF_I;
F.v4884 = Y_UNDEF_I;
F.v4886 = Y_UNDEF_I;
F.v4888 = Y_UNDEF_I;
v1222 = Y_DEFI(v1216);
Y_FLUSH();
while ((Y_DEFI(v1222) <= Y_DEFI(v1219))) {
Y_TICK();
F.v4874 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v1222))]);
Y_FLUSH();
if ((Y_DEFB(F.v4874) == 10)) {
v1225 = y_range(y_add(Y_DEFI(v1225), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((((((Y_DEFB(F.v4874) == 32)) || ((Y_DEFB(F.v4874) == 9))) || ((Y_DEFB(F.v4874) == 13))) || ((Y_DEFB(F.v4874) == 12)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((((Y_DEFB(F.v4874) == 40)) && ((yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((!((((yr1982_At(Y_DEFI(v1222)) == 42)) && ((yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1982_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
yr1999_LexError(y_str("a comment must close on its line", 32));
Y_FLUSH();
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((yr1014_IsDigit(Y_DEFB(F.v4874)) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1993_DigitVal(Y_DEFB(F.v4874)) < INT64_C(16))))))) {
yr2013_LexNumber(0);
Y_FLUSH();
} else if (((((((Y_DEFB(F.v4874) == 45)) || ((Y_DEFB(F.v4874) == 43)))) && (!yr1988_EndsOperand())) && ((yr1014_IsDigit(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1993_DigitVal(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr2013_LexNumber((Y_DEFB(F.v4874) == 45));
Y_FLUSH();
} else if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
yr1999_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
Y_FLUSH();
} else if (yr1008_IsLetter(Y_DEFB(F.v4874))) {
F.v4876 = Y_DEFI(v1222);
Y_FLUSH();
while ((yr1008_IsLetter(yr1982_At(Y_DEFI(v1222))) || yr1014_IsDigit(yr1982_At(Y_DEFI(v1222))))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v4884 = yr1068_Intern(Y_DEFI(F.v4876), y_range(y_sub(Y_DEFI(v1222), Y_DEFI(F.v4876)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
if ((Y_DEFI(F.v4884) == v252)) {
v1228 = INT64_C(2);
Y_FLUSH();
} else if ((Y_DEFI(F.v4884) == v255)) {
v1228 = INT64_C(8);
Y_FLUSH();
} else if ((Y_DEFI(F.v4884) == v258)) {
v1228 = INT64_C(10);
Y_FLUSH();
} else if ((Y_DEFI(F.v4884) == v261)) {
v1228 = INT64_C(16);
Y_FLUSH();
} else if ((Y_DEFI(F.v4884) <= v492)) {
yr1975_AddTok(v210, Y_DEFI(F.v4884));
Y_FLUSH();
} else {
yr1975_AddTok(v207, Y_DEFI(F.v4884));
Y_FLUSH();
}
} else if ((Y_DEFB(F.v4874) == 39)) {
F.v4876 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v4878 = Y_DEFI(F.v4876);
Y_FLUSH();
while ((!(yr1982_At(Y_DEFI(F.v4878)) == 39))) {
Y_TICK();
if (((((yr1982_At(Y_DEFI(F.v4878)) == 10)) || ((yr1982_At(Y_DEFI(F.v4878)) == 34))) || ((Y_DEFI(F.v4878) > Y_DEFI(v1219))))) {
yr1999_LexError(y_str("bad character literal", 21));
Y_FLUSH();
}
F.v4878 = y_range(y_add(Y_DEFI(F.v4878), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.v4878) == Y_DEFI(F.v4876))) {
yr1999_LexError(y_str("empty character literal", 23));
Y_FLUSH();
}
F.v4884 = yr1068_Intern(Y_DEFI(F.v4876), y_range(y_sub(Y_DEFI(F.v4878), Y_DEFI(F.v4876)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr1975_AddTok(v225, Y_DEFI(F.v4884));
Y_FLUSH();
v1222 = y_range(y_add(Y_DEFI(F.v4878), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFB(F.v4874) == 34)) {
yr2019_LexString();
Y_FLUSH();
} else {
F.v4880 = INT64_C(0);
Y_FLUSH();
F.v4878 = y_range(y_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((((Y_DEFI(F.v4880) == INT64_C(0))) && ((Y_DEFI(F.v4878) <= v621)))) {
Y_TICK();
F.v4882 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4878))]);
Y_FLUSH();
F.v4888 = 1;
Y_FLUSH();
F.lo4963 = INT64_C(0);
F.hi4964 = y_sub(Y_DEFI(F.v4882), INT64_C(1));
{ rt_int hi4968 = F.hi4964;
for (rt_int i4967 = F.lo4963; i4967 <= hi4968; i4967++) { F.c_4966 = i4967; Y_TICK();
if ((!(yr1982_At(y_range(y_add(Y_DEFI(v1222), F.c_4966), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4878))]), F.c_4966))])))) {
F.v4888 = 0;
Y_FLUSH();
}
if (i4967 == hi4968) break;
}}
if (Y_DEFI(F.v4888)) {
F.v4880 = Y_DEFI(F.v4878);
Y_FLUSH();
}
F.v4878 = y_range(y_add(Y_DEFI(F.v4878), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.v4880) == INT64_C(0))) {
yr1999_LexError(y_str("a character that is not in the language", 39));
Y_FLUSH();
}
yr1975_AddTok(v213, Y_DEFI(F.v4880));
Y_FLUSH();
v1222 = y_range(y_add(Y_DEFI(v1222), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4880))])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
}
yr1975_AddTok(v204, INT64_C(0));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2029_NewNode(rt_int a_p2030, rt_int a_p2031) {
struct yf2032 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2030 = a_p2030;
F.p2031 = a_p2031;
F.v4982 = Y_UNDEF_P;
({ F.v4982 = y_new_l(sizeof(yR105), "r0,0,17,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_106); y_initu(&yd_106, y_deref(F.v4982)); });
Y_FLUSH();
(*(yR105 *)y_deref(Y_DEFP(F.v4982))) = ((yR105){ .f_kind = F.p2030, .f_line = F.p2031, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0), .f_t0 = INT64_C(0), .f_t1 = INT64_C(0) });
Y_FLUSH();
{ void * rv4989 = Y_DEFP(F.v4982);
y_use = F.yu; return rv4989; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2036_Link(void * * a_p2037, void * * a_p2038, void * a_p2039) {
struct yf2040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2037 = a_p2037;
F.p2038 = a_p2038;
F.p2039 = a_p2039;
if ((Y_DEFP((*F.p2037)) == ((void *)0))) {
(*F.p2037) = F.p2039;
Y_FLUSH();
} else {
((*(yR105 *)y_deref(Y_DEFP((*F.p2038))))).f_next = F.p2039;
Y_FLUSH();
}
(*F.p2038) = F.p2039;
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2044_Count(void * a_p2045) {
struct yf2046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2045 = a_p2045;
F.v4997 = Y_UNDEF_I;
F.v4997 = INT64_C(0);
F.v5000 = Y_UNDEF_P;
F.v5000 = F.p2045;
while ((!(Y_DEFP(F.v5000) == ((void *)0)))) {
Y_TICK();
F.v4997 = y_range(y_add(Y_DEFI(F.v4997), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v5000 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5000)))).f_next);
Y_FLUSH();
}
{ rt_int rv5003 = Y_DEFI(F.v4997);
y_use = F.yu; return rv5003; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2050_TK(void) {
struct yf2051 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv5005 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]);
y_use = F.yu; return rv5005; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2055_TV(void) {
struct yf2056 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv5007 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1249))]);
y_use = F.yu; return rv5007; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2060_TLn(void) {
struct yf2061 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv5009 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1249))]);
y_use = F.yu; return rv5009; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2065_IsAt(rt_int a_p2066, rt_int a_p2067) {
struct yf2068 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2066 = a_p2066;
F.p2067 = a_p2067;
F.v5014 = Y_UNDEF_I;
F.v5014 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2066))]);
{ rt_int rv5017 = (((((Y_DEFI(F.v5014) == v210)) || ((Y_DEFI(F.v5014) == v213)))) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2066))]) == F.p2067)));
y_use = F.yu; return rv5017; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2072_Is(rt_int a_p2073) {
struct yf2074 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2073 = a_p2073;
{ rt_int rv5021 = yr2065_IsAt(INT64_C(0), F.p2073);
y_use = F.yu; return rv5021; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2078_IsIdAt(rt_int a_p2079) {
struct yf2080 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2079 = a_p2079;
{ rt_int rv5025 = (Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2079))]) == v207);
y_use = F.yu; return rv5025; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2084_Skip(void) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]) == v204))) {
v1249 = y_range(y_add(Y_DEFI(v1249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2089_Accept(rt_int a_p2090) {
struct yf2091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2090 = a_p2090;
if (yr2072_Is(F.p2090)) {
yr2084_Skip();
Y_FLUSH();
{ rt_int rv5032 = 1;
y_use = F.yu; return rv5032; }
}
{ rt_int rv5034 = 0;
y_use = F.yu; return rv5034; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2095_TokText(void) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5037 = Y_UNDEF_I;
F.v5037 = yr2050_TK();
if ((((((Y_DEFI(F.v5037) == v207)) || ((Y_DEFI(F.v5037) == v210))) || ((Y_DEFI(F.v5037) == v213))) || ((Y_DEFI(F.v5037) == v225)))) {
{ rt_int rv5038 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv5038; }
}
if ((Y_DEFI(F.v5037) == v204)) {
{ rt_int rv5040 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv5040; }
}
if ((Y_DEFI(F.v5037) == v216)) {
yr1026_SB();
Y_FLUSH();
yr1050_SI(yr2055_TV());
Y_FLUSH();
{ rt_int rv5041 = yr1056_SE();
y_use = F.yu; return rv5041; }
}
{ rt_int rv5043 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv5043; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2100_Expect(rt_int a_p2101) {
struct yf2102 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2101 = a_p2101;
F.v5047 = Y_UNDEF_I;
if ((!yr2089_Accept(F.p2101))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("expected ", 9));
Y_FLUSH();
yr1044_ST(y_range(F.p2101, INT64_C(0), INT64_C(4000000)));
Y_FLUSH();
yr1037_SA(y_str(", found ", 8));
Y_FLUSH();
yr1044_ST(yr2095_TokText());
Y_FLUSH();
F.v5047 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(yr2060_TLn(), Y_DEFI(F.v5047));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2106_Ident(void) {
struct yf2107 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5052 = Y_UNDEF_I;
if ((!(yr2050_TK() == v207))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("expected an identifier, found ", 30));
Y_FLUSH();
yr1044_ST(yr2095_TokText());
Y_FLUSH();
F.v5052 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(yr2060_TLn(), Y_DEFI(F.v5052));
Y_FLUSH();
}
F.v5052 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
{ rt_int rv5054 = Y_DEFI(F.v5052);
y_use = F.yu; return rv5054; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2111_CloseName(rt_int a_p2112, rt_int a_p2113) {
struct yf2114 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2112 = a_p2112;
F.p2113 = a_p2113;
F.v5059 = Y_UNDEF_I;
if (((((yr2050_TK() == v207)) || ((yr2050_TK() == v210))) || ((yr2050_TK() == v213)))) {
F.v5059 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
if ((Y_DEFI(F.v5059) == F.p2112)) {
yr2084_Skip();
Y_FLUSH();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p2113, F.p2112, y_str(" is closed with another name", 28));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2118_ExtendedId(void) {
struct yf2119 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5063 = Y_UNDEF_I;
F.v5063 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
if ((yr2050_TK() == v207)) {
yr2084_Skip();
Y_FLUSH();
{ rt_int rv5064 = Y_DEFI(F.v5063);
y_use = F.yu; return rv5064; }
}
if ((((yr2050_TK() == v210)) && (((((((((Y_DEFI(F.v5063) == v390)) || ((Y_DEFI(F.v5063) == v237))) || ((Y_DEFI(F.v5063) == v399))) || ((Y_DEFI(F.v5063) == v276))) || ((Y_DEFI(F.v5063) == v378))) || ((Y_DEFI(F.v5063) == v489))) || ((Y_DEFI(F.v5063) == v360)))))) {
yr2084_Skip();
Y_FLUSH();
{ rt_int rv5065 = Y_DEFI(F.v5063);
y_use = F.yu; return rv5065; }
}
if (((((((((((((yr2050_TK() == v213)) && ((!(Y_DEFI(F.v5063) == v594)))) && ((!(Y_DEFI(F.v5063) == v597)))) && ((!(Y_DEFI(F.v5063) == v600)))) && ((!(Y_DEFI(F.v5063) == v603)))) && ((!(Y_DEFI(F.v5063) == v606)))) && ((!(Y_DEFI(F.v5063) == v609)))) && ((!(Y_DEFI(F.v5063) == v612)))) && ((!(Y_DEFI(F.v5063) == v615)))) && ((!(Y_DEFI(F.v5063) == v537)))) && ((!(Y_DEFI(F.v5063) == v534))))) {
yr2084_Skip();
Y_FLUSH();
{ rt_int rv5066 = Y_DEFI(F.v5063);
y_use = F.yu; return rv5066; }
}
yr1178_FailS(yr2060_TLn(), y_str("expected a name", 15));
Y_FLUSH();
{ rt_int rv5069 = INT64_C(0);
y_use = F.yu; return rv5069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2123_IsLabel(rt_int a_p2124) {
struct yf2125 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2124 = a_p2124;
F.v5073 = Y_UNDEF_P;
F.v5073 = Y_DEFP(v1252);
while ((!(Y_DEFP(F.v5073) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5073)))).f_name) == F.p2124)) {
{ rt_int rv5075 = 1;
y_use = F.yu; return rv5075; }
}
F.v5073 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5073)))).f_next);
Y_FLUSH();
}
{ rt_int rv5077 = 0;
y_use = F.yu; return rv5077; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2129_ImportItem(void) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5080 = Y_UNDEF_P;
F.v5080 = yr2029_NewNode(v627, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5080)))).f_name = yr2118_ExtendedId();
Y_FLUSH();
if ((yr2078_IsIdAt(INT64_C(0)) && ((yr2055_TV() == Y_DEFI(v1254))))) {
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5080)))).f_text = yr2106_Ident();
Y_FLUSH();
}
if (yr2089_Accept(v243)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5080)))).f_ival = yr2118_ExtendedId();
Y_FLUSH();
}
{ void * rv5082 = Y_DEFP(F.v5080);
y_use = F.yu; return rv5082; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2134_ParseModule(void) {
struct yf2135 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5085 = Y_UNDEF_P;
F.v5085 = yr2029_NewNode(v624, yr2060_TLn());
F.v5087 = Y_UNDEF_P;
F.v5087 = ((void *)0);
F.v5089 = Y_UNDEF_P;
F.v5089 = ((void *)0);
F.v5091 = Y_UNDEF_P;
F.v5091 = ((void *)0);
F.v5093 = Y_UNDEF_I;
if (yr2089_Accept(v384)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_flag = INT64_C(1);
Y_FLUSH();
} else {
yr2100_Expect(v381);
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_name = yr2106_Ident();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_t0 = Y_DEFI(v1249);
Y_FLUSH();
while (yr2089_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v5087 = yr2129_ImportItem();
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_a, &F.v5089, Y_DEFP(F.v5087));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5095;
}
}
yl_5095: ;
yr2100_Expect(v609);
Y_FLUSH();
}
while (yr2089_Accept(v336)) {
Y_TICK();
F.v5093 = INT64_C(0);
Y_FLUSH();
if ((((yr2072_Is(v396) || yr2072_Is(v474)) || yr2072_Is(v429)) || yr2072_Is(v483))) {
F.v5093 = yr2055_TV();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
}
for (;;) {
Y_TICK();
F.v5087 = yr2129_ImportItem();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5087)))).f_flag = Y_DEFI(F.v5093);
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_b, &F.v5091, Y_DEFP(F.v5087));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5097;
}
}
yl_5097: ;
yr2100_Expect(v609);
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_t1 = Y_DEFI(v1249);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_c = yr2144_ParseBlock();
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_flag) == INT64_C(1))) {
yr2100_Expect(v309);
Y_FLUSH();
} else {
yr2100_Expect(v306);
Y_FLUSH();
}
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5085)))).f_line));
Y_FLUSH();
{ void * rv5099 = Y_DEFP(F.v5085);
y_use = F.yu; return rv5099; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2139_IsDeclWord(void) {
struct yf2140 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5102 = Y_UNDEF_I;
if ((!(yr2050_TK() == v210))) {
{ rt_int rv5104 = 0;
y_use = F.yu; return rv5104; }
}
F.v5102 = yr2055_TV();
Y_FLUSH();
{ rt_int rv5105 = (((((((((((((Y_DEFI(F.v5102) == v270)) || ((Y_DEFI(F.v5102) == v483))) || ((Y_DEFI(F.v5102) == v372))) || ((Y_DEFI(F.v5102) == v477))) || ((Y_DEFI(F.v5102) == v438))) || ((Y_DEFI(F.v5102) == v348))) || ((Y_DEFI(F.v5102) == v420))) || ((Y_DEFI(F.v5102) == v381))) || ((Y_DEFI(F.v5102) == v384))) || ((Y_DEFI(F.v5102) == v465))) || ((Y_DEFI(F.v5102) == v366))) || ((Y_DEFI(F.v5102) == v423)));
y_use = F.yu; return rv5105; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2144_ParseBlock(void) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5108 = Y_UNDEF_P;
F.v5108 = yr2029_NewNode(v630, yr2060_TLn());
F.v5110 = Y_UNDEF_P;
F.v5110 = ((void *)0);
F.v5112 = Y_UNDEF_P;
F.v5112 = Y_DEFP(v1252);
F.v5114 = Y_UNDEF_P;
while (yr2139_IsDeclWord()) {
Y_TICK();
yr2171_ParseDeclGroup(&((*(yR105 *)y_deref(Y_DEFP(F.v5108)))).f_a, &F.v5110);
Y_FLUSH();
while (yr2089_Accept(v609)) {
Y_TICK();
}
}
if (yr2072_Is(v330)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5108)))).f_b = yr2149_ParseHandler();
Y_FLUSH();
F.v5114 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5108)))).f_b);
Y_FLUSH();
if (yr2089_Accept(v609)) {
}
}
((*(yR105 *)y_deref(Y_DEFP(F.v5108)))).f_c = yr2240_ParseStatements(1);
Y_FLUSH();
v1252 = Y_DEFP(F.v5112);
Y_FLUSH();
{ void * rv5116 = Y_DEFP(F.v5108);
y_use = F.yu; return rv5116; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2149_ParseHandler(void) {
struct yf2150 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5119 = Y_UNDEF_P;
F.v5119 = yr2029_NewNode(v633, yr2060_TLn());
F.v5121 = Y_UNDEF_P;
F.v5121 = ((void *)0);
F.v5123 = Y_UNDEF_P;
F.v5123 = ((void *)0);
F.v5125 = Y_UNDEF_P;
F.v5125 = ((void *)0);
F.v5127 = Y_UNDEF_P;
F.v5127 = ((void *)0);
yr2100_Expect(v330);
Y_FLUSH();
while (yr2089_Accept(v267)) {
Y_TICK();
F.v5121 = yr2029_NewNode(v636, yr2060_TLn());
Y_FLUSH();
F.v5127 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
F.v5125 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5125)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5121)))).f_a, &F.v5127, Y_DEFP(F.v5125));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5128;
}
}
yl_5128: ;
yr2100_Expect(v534);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5121)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5119)))).f_a, &F.v5123, Y_DEFP(F.v5121));
Y_FLUSH();
}
if (yr2089_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5119)))).f_flag = INT64_C(1);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5119)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
}
yr2100_Expect(v291);
Y_FLUSH();
{ void * rv5132 = Y_DEFP(F.v5119);
y_use = F.yu; return rv5132; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2154_ParseNames(void) {
struct yf2155 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5135 = Y_UNDEF_P;
F.v5135 = ((void *)0);
F.v5137 = Y_UNDEF_P;
F.v5137 = ((void *)0);
F.v5139 = Y_UNDEF_P;
F.v5139 = ((void *)0);
for (;;) {
Y_TICK();
F.v5139 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5139)))).f_name = yr2106_Ident();
Y_FLUSH();
if (yr2089_Accept(v249)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5139)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
}
yr2036_Link(&F.v5135, &F.v5137, Y_DEFP(F.v5139));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5140;
}
}
yl_5140: ;
{ void * rv5141 = Y_DEFP(F.v5135);
y_use = F.yu; return rv5141; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2159_SimpleEntry(rt_int a_p2160) {
struct yf2161 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2160 = a_p2160;
F.v5145 = Y_UNDEF_P;
F.v5147 = Y_UNDEF_I;
F.v5147 = Y_DEFI(v1249);
if ((F.p2160 == v270)) {
F.v5145 = yr2029_NewNode(v639, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_a = yr2154_ParseNames();
Y_FLUSH();
yr2100_Expect(v612);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_b = yr2205_ParseRep();
Y_FLUSH();
yr2100_Expect(v585);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_c = yr2302_ParseExpr();
Y_FLUSH();
} else if ((F.p2160 == v483)) {
F.v5145 = yr2029_NewNode(v642, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_a = yr2154_ParseNames();
Y_FLUSH();
yr2100_Expect(v612);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_b = yr2205_ParseRep();
Y_FLUSH();
if (yr2089_Accept(v531)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_c = yr2302_ParseExpr();
Y_FLUSH();
}
} else if ((F.p2160 == v477)) {
F.v5145 = yr2029_NewNode(v648, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2100_Expect(v585);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_b = yr2225_ParseConcrete1();
Y_FLUSH();
} else {
F.v5145 = yr2029_NewNode(v651, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2100_Expect(v585);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_b = yr2205_ParseRep();
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_t0 = Y_DEFI(F.v5147);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_t1 = Y_DEFI(v1249);
Y_FLUSH();
{ void * rv5148 = Y_DEFP(F.v5145);
y_use = F.yu; return rv5148; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2165_Continues(rt_int a_p2166) {
struct yf2167 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2166 = a_p2166;
if ((!((yr2072_Is(v609) && yr2078_IsIdAt(INT64_C(1)))))) {
{ rt_int rv5153 = 0;
y_use = F.yu; return rv5153; }
}
if (yr2123_IsLabel(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(1)))]), INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv5157 = 0;
y_use = F.yu; return rv5157; }
}
if ((((F.p2166 == v270)) || ((F.p2166 == v483)))) {
{ rt_int rv5161 = ((yr2065_IsAt(INT64_C(2), v606) || yr2065_IsAt(INT64_C(2), v612)) || yr2065_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv5161; }
}
{ rt_int rv5163 = yr2065_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv5163; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2171_ParseDeclGroup(void * * a_p2172, void * * a_p2173) {
struct yf2174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2172 = a_p2172;
F.p2173 = a_p2173;
F.v5168 = Y_UNDEF_I;
F.v5168 = yr2055_TV();
F.v5170 = Y_UNDEF_P;
F.v5172 = Y_UNDEF_P;
F.v5174 = Y_UNDEF_P;
if ((((((Y_DEFI(F.v5168) == v270)) || ((Y_DEFI(F.v5168) == v483))) || ((Y_DEFI(F.v5168) == v477))) || ((Y_DEFI(F.v5168) == v438)))) {
yr2084_Skip();
Y_FLUSH();
yr2036_Link(&(*F.p2172), &(*F.p2173), yr2159_SimpleEntry(Y_DEFI(F.v5168)));
Y_FLUSH();
while (yr2165_Continues(Y_DEFI(F.v5168))) {
Y_TICK();
yr2084_Skip();
Y_FLUSH();
yr2036_Link(&(*F.p2172), &(*F.p2173), yr2159_SimpleEntry(Y_DEFI(F.v5168)));
Y_FLUSH();
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v5168) == v372)) {
F.v5170 = yr2029_NewNode(v645, yr2060_TLn());
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
F.v5174 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
F.v5172 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_a, &F.v5174, Y_DEFP(F.v5172));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5175;
}
}
yl_5175: ;
F.v5172 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v5172) == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_b = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_b)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_name);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_b)))).f_next = Y_DEFP(v1252);
Y_FLUSH();
v1252 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_b);
Y_FLUSH();
F.v5172 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_next);
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5170)))).f_b = ((void *)0);
Y_FLUSH();
yr2036_Link(&(*F.p2172), &(*F.p2173), Y_DEFP(F.v5170));
Y_FLUSH();
y_use = F.yu; return;
}
yr2036_Link(&(*F.p2172), &(*F.p2173), yr2178_ParseDecl());
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2178_ParseDecl(void) {
struct yf2179 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5178 = Y_UNDEF_P;
F.v5180 = Y_UNDEF_I;
F.v5180 = Y_DEFI(v1249);
F.v5178 = yr2183_ParseDecl1();
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5178)))).f_kind) == v624))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5178)))).f_t0 = Y_DEFI(F.v5180);
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5178)))).f_t1) == INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5178)))).f_t1 = Y_DEFI(v1249);
Y_FLUSH();
}
}
{ void * rv5182 = Y_DEFP(F.v5178);
y_use = F.yu; return rv5182; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2183_ParseDecl1(void) {
struct yf2184 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5185 = Y_UNDEF_P;
F.v5187 = Y_UNDEF_P;
F.v5189 = Y_UNDEF_P;
F.v5191 = Y_UNDEF_I;
F.v5191 = yr2055_TV();
F.v5193 = Y_UNDEF_I;
F.v5193 = yr2060_TLn();
F.v5195 = Y_UNDEF_I;
if ((((Y_DEFI(F.v5191) == v348)) || ((Y_DEFI(F.v5191) == v420)))) {
F.v5185 = yr2029_NewNode(v654, Y_DEFI(F.v5193));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
if ((Y_DEFI(F.v5191) == v348)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_flag = INT64_C(1);
Y_FLUSH();
}
if ((yr2072_Is(v339) || yr2072_Is(v435))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_ival = yr2055_TV();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name = yr2118_ExtendedId();
Y_FLUSH();
yr2188_ParseFormals(Y_DEFP(F.v5185));
Y_FLUSH();
if (yr2089_Accept(v363)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_e = yr2029_NewNode(v669, Y_DEFI(F.v5193));
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_t1 = Y_DEFI(v1249);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_c = yr2144_ParseBlock();
Y_FLUSH();
if ((Y_DEFI(F.v5191) == v348)) {
yr2100_Expect(v297);
Y_FLUSH();
} else {
yr2100_Expect(v312);
Y_FLUSH();
}
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name), Y_DEFI(F.v5193));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_e) == ((void *)0)))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_t1 = Y_DEFI(v1249);
Y_FLUSH();
}
{ void * rv5197 = Y_DEFP(F.v5185);
y_use = F.yu; return rv5197; }
}
if ((((Y_DEFI(F.v5191) == v381)) || ((Y_DEFI(F.v5191) == v384)))) {
{ void * rv5198 = yr2134_ParseModule();
y_use = F.yu; return rv5198; }
}
if ((Y_DEFI(F.v5191) == v465)) {
F.v5185 = yr2029_NewNode(v660, Y_DEFI(F.v5193));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2100_Expect(v594);
Y_FLUSH();
F.v5189 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
F.v5187 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5187)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_a, &F.v5189, Y_DEFP(F.v5187));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5199;
}
}
yl_5199: ;
yr2100_Expect(v597);
Y_FLUSH();
F.v5195 = Y_DEFI(v1249);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_b = yr2134_ParseModule();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_ival = Y_DEFI(F.v5195);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_flag = Y_DEFI(v1249);
Y_FLUSH();
yr2100_Expect(v324);
Y_FLUSH();
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name), Y_DEFI(F.v5193));
Y_FLUSH();
{ void * rv5200 = Y_DEFP(F.v5185);
y_use = F.yu; return rv5200; }
}
if ((Y_DEFI(F.v5191) == v366)) {
F.v5185 = yr2029_NewNode(v663, Y_DEFI(F.v5193));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2100_Expect(v594);
Y_FLUSH();
F.v5189 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
F.v5187 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
if ((yr2050_TK() == v216)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5187)))).f_flag = INT64_C(1);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5187)))).f_ival = yr2055_TV();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v5187)))).f_name = yr2118_ExtendedId();
Y_FLUSH();
}
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_a, &F.v5189, Y_DEFP(F.v5187));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5201;
}
}
yl_5201: ;
yr2100_Expect(v597);
Y_FLUSH();
{ void * rv5203 = Y_DEFP(F.v5185);
y_use = F.yu; return rv5203; }
}
if ((Y_DEFI(F.v5191) == v423)) {
F.v5185 = yr2029_NewNode(v666, Y_DEFI(F.v5193));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2188_ParseFormals(Y_DEFP(F.v5185));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_b) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(F.v5193), y_str("a process returns no value", 26));
Y_FLUSH();
}
if (yr2089_Accept(v417)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_d = yr2302_ParseExpr();
Y_FLUSH();
}
if (yr2089_Accept(v369)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_e = yr2302_ParseExpr();
Y_FLUSH();
}
if (yr2089_Accept(v459)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_x = yr2302_ParseExpr();
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_t1 = Y_DEFI(v1249);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_c = yr2144_ParseBlock();
Y_FLUSH();
yr2100_Expect(v315);
Y_FLUSH();
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_name), Y_DEFI(F.v5193));
Y_FLUSH();
{ void * rv5205 = Y_DEFP(F.v5185);
y_use = F.yu; return rv5205; }
}
yr1178_FailS(Y_DEFI(F.v5193), y_str("expected a declaration", 22));
Y_FLUSH();
{ void * rv5207 = ((void *)0);
y_use = F.yu; return rv5207; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2188_ParseFormals(void * a_p2189) {
struct yf2190 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2189 = a_p2189;
F.v5211 = Y_UNDEF_P;
F.v5211 = ((void *)0);
F.v5213 = Y_UNDEF_P;
F.v5213 = ((void *)0);
F.v5215 = Y_UNDEF_I;
if (yr2089_Accept(v444)) {
((*(yR105 *)y_deref(F.p2189))).f_b = yr2205_ParseRep();
Y_FLUSH();
}
yr2100_Expect(v594);
Y_FLUSH();
while ((!yr2072_Is(v597))) {
Y_TICK();
if (yr2089_Accept(v270)) {
F.v5215 = v897;
Y_FLUSH();
} else if (yr2089_Accept(v405)) {
F.v5215 = v900;
Y_FLUSH();
} else if (yr2089_Accept(v483)) {
F.v5215 = v903;
Y_FLUSH();
} else {
yr1178_FailS(yr2060_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
Y_FLUSH();
}
for (;;) {
Y_TICK();
F.v5211 = yr2029_NewNode(v657, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5211)))).f_ival = Y_DEFI(F.v5215);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5211)))).f_a = yr2154_ParseNames();
Y_FLUSH();
yr2100_Expect(v612);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5211)))).f_b = yr2194_ParseFormalRep();
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(F.p2189))).f_a, &F.v5213, Y_DEFP(F.v5211));
Y_FLUSH();
if ((!((((yr2072_Is(v609) || yr2072_Is(v606))) && yr2078_IsIdAt(INT64_C(1)))))) {
goto yl_5217;
}
yr2084_Skip();
Y_FLUSH();
}
yl_5217: ;
if ((!yr2089_Accept(v609))) {
if ((!yr2089_Accept(v606))) {
yr2100_Expect(v597);
Y_FLUSH();
y_use = F.yu; return;
}
}
}
yr2100_Expect(v597);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2194_ParseFormalRep(void) {
struct yf2195 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5221 = Y_UNDEF_P;
if (((yr2072_Is(v240) && yr2065_IsAt(INT64_C(1), v594)) && ((yr2065_IsAt(INT64_C(3), v273) || ((yr2078_IsIdAt(INT64_C(3)) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(3)))]) == Y_DEFI(v1257))))))))) {
F.v5221 = yr2029_NewNode(v696, yr2060_TLn());
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5221)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
yr2100_Expect(v393);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5221)))).f_b = yr2205_ParseRep();
Y_FLUSH();
yr2100_Expect(v597);
Y_FLUSH();
{ void * rv5227 = Y_DEFP(F.v5221);
y_use = F.yu; return rv5227; }
}
if (yr2072_Is(v462)) {
F.v5221 = yr2029_NewNode(v699, yr2060_TLn());
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
{ void * rv5228 = Y_DEFP(F.v5221);
y_use = F.yu; return rv5228; }
}
{ void * rv5229 = yr2205_ParseRep();
y_use = F.yu; return rv5229; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2199_IsStructWord(rt_int a_p2200) {
struct yf2201 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2200 = a_p2200;
F.v5233 = Y_UNDEF_I;
F.v5233 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2200))]);
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2200))]) == v210))) {
{ rt_int rv5237 = 0;
y_use = F.yu; return rv5237; }
}
{ rt_int rv5238 = (((((((((Y_DEFI(F.v5233) == v480)) || ((Y_DEFI(F.v5233) == v402))) || ((Y_DEFI(F.v5233) == v234))) || ((Y_DEFI(F.v5233) == v240))) || ((Y_DEFI(F.v5233) == v432))) || ((Y_DEFI(F.v5233) == v342))) || ((Y_DEFI(F.v5233) == v411))) || ((Y_DEFI(F.v5233) == v453)));
y_use = F.yu; return rv5238; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2205_ParseRep(void) {
struct yf2206 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5241 = Y_UNDEF_I;
F.v5243 = Y_UNDEF_P;
if ((yr2078_IsIdAt(INT64_C(0)) && ((yr2199_IsStructWord(INT64_C(1)) || ((yr2078_IsIdAt(INT64_C(1)) && yr2065_IsAt(INT64_C(2), v600))))))) {
F.v5241 = yr2106_Ident();
Y_FLUSH();
F.v5243 = yr2210_ParseConcrete();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5243)))).f_text = Y_DEFI(F.v5241);
Y_FLUSH();
{ void * rv5248 = Y_DEFP(F.v5243);
y_use = F.yu; return rv5248; }
}
{ void * rv5249 = yr2210_ParseConcrete();
y_use = F.yu; return rv5249; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2210_ParseConcrete(void) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5252 = Y_UNDEF_P;
F.v5254 = Y_UNDEF_P;
F.v5252 = yr2225_ParseConcrete1();
Y_FLUSH();
if ((yr2072_Is(v408) || yr2072_Is(v231))) {
F.v5254 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
if (yr2089_Accept(v408)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5254)))).f_flag = INT64_C(1);
Y_FLUSH();
if (((((yr2050_TK() == v216)) || ((yr2050_TK() == v207))) || yr2072_Is(v594))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5254)))).f_a = yr2307_ParseSimple();
Y_FLUSH();
}
}
if (yr2089_Accept(v231)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5254)))).f_b = yr2307_ParseSimple();
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5252)))).f_x = Y_DEFP(F.v5254);
Y_FLUSH();
}
{ void * rv5256 = Y_DEFP(F.v5252);
y_use = F.yu; return rv5256; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2215_ParseIds(void) {
struct yf2216 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5259 = Y_UNDEF_P;
F.v5259 = ((void *)0);
F.v5261 = Y_UNDEF_P;
F.v5261 = ((void *)0);
F.v5263 = Y_UNDEF_P;
F.v5263 = ((void *)0);
for (;;) {
Y_TICK();
F.v5263 = yr2029_NewNode(v669, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5263)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2036_Link(&F.v5259, &F.v5261, Y_DEFP(F.v5263));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5264;
}
}
yl_5264: ;
{ void * rv5265 = Y_DEFP(F.v5259);
y_use = F.yu; return rv5265; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2220_ParseFieldGroups(void) {
struct yf2221 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5268 = Y_UNDEF_P;
F.v5268 = ((void *)0);
F.v5270 = Y_UNDEF_P;
F.v5270 = ((void *)0);
F.v5272 = Y_UNDEF_P;
F.v5272 = ((void *)0);
F.v5274 = Y_UNDEF_I;
while ((yr2072_Is(v270) || yr2072_Is(v483))) {
Y_TICK();
F.v5274 = yr2055_TV();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
for (;;) {
Y_TICK();
F.v5272 = yr2029_NewNode(v705, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5272)))).f_ival = Y_DEFI(F.v5274);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5272)))).f_a = yr2154_ParseNames();
Y_FLUSH();
yr2100_Expect(v612);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5272)))).f_b = yr2205_ParseRep();
Y_FLUSH();
yr2036_Link(&F.v5268, &F.v5270, Y_DEFP(F.v5272));
Y_FLUSH();
if ((!((yr2072_Is(v609) && yr2078_IsIdAt(INT64_C(1)))))) {
goto yl_5275;
}
yr2084_Skip();
Y_FLUSH();
}
yl_5275: ;
if ((!yr2089_Accept(v609))) {
{ void * rv5277 = Y_DEFP(F.v5268);
y_use = F.yu; return rv5277; }
}
}
{ void * rv5278 = Y_DEFP(F.v5268);
y_use = F.yu; return rv5278; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2225_ParseConcrete1(void) {
struct yf2226 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5281 = Y_UNDEF_P;
F.v5283 = Y_UNDEF_P;
F.v5285 = Y_UNDEF_P;
F.v5287 = Y_UNDEF_P;
F.v5289 = Y_UNDEF_P;
F.v5291 = Y_UNDEF_P;
F.v5293 = Y_UNDEF_I;
F.v5295 = Y_UNDEF_I;
F.v5295 = yr2060_TLn();
if ((yr2050_TK() == v207)) {
F.v5281 = yr2029_NewNode(v672, Y_DEFI(F.v5295));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_name = yr2106_Ident();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a = yr2230_ParseQualifier();
Y_FLUSH();
{ void * rv5296 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5296; }
}
if ((!(yr2050_TK() == v210))) {
yr1178_FailS(Y_DEFI(F.v5295), y_str("expected a representation", 25));
Y_FLUSH();
}
F.v5293 = yr2055_TV();
Y_FLUSH();
if ((((Y_DEFI(F.v5293) == v480)) || ((Y_DEFI(F.v5293) == v402)))) {
F.v5281 = yr2029_NewNode(v675, Y_DEFI(F.v5295));
Y_FLUSH();
if ((Y_DEFI(F.v5293) == v402)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_flag = INT64_C(1);
Y_FLUSH();
}
yr2084_Skip();
Y_FLUSH();
yr2100_Expect(v594);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a = yr2215_ParseIds();
Y_FLUSH();
yr2100_Expect(v597);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_b = yr2230_ParseQualifier();
Y_FLUSH();
{ void * rv5299 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5299; }
}
if ((Y_DEFI(F.v5293) == v234)) {
F.v5281 = yr2029_NewNode(v678, Y_DEFI(F.v5295));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
yr2100_Expect(v594);
Y_FLUSH();
F.v5291 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
if ((!(yr2050_TK() == v225))) {
yr1178_FailS(yr2060_TLn(), y_str("an ALPHABET lists character literals", 36));
Y_FLUSH();
}
F.v5289 = yr2029_NewNode(v768, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5289)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a, &F.v5291, Y_DEFP(F.v5289));
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5300;
}
}
yl_5300: ;
yr2100_Expect(v597);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_b = yr2230_ParseQualifier();
Y_FLUSH();
{ void * rv5302 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5302; }
}
if ((Y_DEFI(F.v5293) == v240)) {
F.v5281 = yr2029_NewNode(v681, Y_DEFI(F.v5295));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
yr2100_Expect(v594);
Y_FLUSH();
F.v5291 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a, &F.v5291, yr2205_ParseRep());
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5303;
}
}
yl_5303: ;
yr2100_Expect(v393);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_b = yr2205_ParseRep();
Y_FLUSH();
yr2100_Expect(v597);
Y_FLUSH();
{ void * rv5304 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5304; }
}
if ((Y_DEFI(F.v5293) == v432)) {
F.v5281 = yr2029_NewNode(v684, Y_DEFI(F.v5295));
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a = yr2220_ParseFieldGroups();
Y_FLUSH();
if (yr2089_Accept(v450)) {
F.v5283 = yr2029_NewNode(v708, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5283)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2100_Expect(v612);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5283)))).f_b = yr2205_ParseRep();
Y_FLUSH();
F.v5287 = ((void *)0);
Y_FLUSH();
while (yr2089_Accept(v267)) {
Y_TICK();
F.v5285 = yr2029_NewNode(v711, yr2060_TLn());
Y_FLUSH();
F.v5291 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5285)))).f_a, &F.v5291, yr2302_ParseExpr());
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5305;
}
}
yl_5305: ;
yr2100_Expect(v534);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5285)))).f_b = yr2220_ParseFieldGroups();
Y_FLUSH();
while (yr2089_Accept(v609)) {
Y_TICK();
}
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5283)))).f_a, &F.v5287, Y_DEFP(F.v5285));
Y_FLUSH();
}
yr2100_Expect(v321);
Y_FLUSH();
if (yr2089_Accept(v609)) {
}
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_b = Y_DEFP(F.v5283);
Y_FLUSH();
}
yr2100_Expect(v318);
Y_FLUSH();
{ void * rv5306 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5306; }
}
if (((((Y_DEFI(F.v5293) == v342)) || ((Y_DEFI(F.v5293) == v411))) || ((Y_DEFI(F.v5293) == v453)))) {
if ((Y_DEFI(F.v5293) == v342)) {
F.v5281 = yr2029_NewNode(v687, Y_DEFI(F.v5295));
Y_FLUSH();
} else if ((Y_DEFI(F.v5293) == v411)) {
F.v5281 = yr2029_NewNode(v690, Y_DEFI(F.v5295));
Y_FLUSH();
} else {
F.v5281 = yr2029_NewNode(v693, Y_DEFI(F.v5295));
Y_FLUSH();
}
yr2084_Skip();
Y_FLUSH();
yr2100_Expect(v594);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a = yr2205_ParseRep();
Y_FLUSH();
yr2100_Expect(v597);
Y_FLUSH();
{ void * rv5307 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5307; }
}
yr1178_FailS(Y_DEFI(F.v5295), y_str("expected a representation", 25));
Y_FLUSH();
{ void * rv5309 = ((void *)0);
y_use = F.yu; return rv5309; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2230_ParseQualifier(void) {
struct yf2231 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5312 = Y_UNDEF_P;
if ((!yr2072_Is(v600))) {
{ void * rv5313 = ((void *)0);
y_use = F.yu; return rv5313; }
}
F.v5312 = yr2029_NewNode(v702, yr2060_TLn());
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5312)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
yr2100_Expect(v537);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5312)))).f_b = yr2302_ParseExpr();
Y_FLUSH();
yr2100_Expect(v603);
Y_FLUSH();
if (yr2089_Accept(v447)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5312)))).f_c = yr2307_ParseSimple();
Y_FLUSH();
} else if (yr2089_Accept(v414)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5312)))).f_d = yr2307_ParseSimple();
Y_FLUSH();
}
{ void * rv5314 = Y_DEFP(F.v5312);
y_use = F.yu; return rv5314; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2235_IsStop(void) {
struct yf2236 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5317 = Y_UNDEF_I;
if ((yr2050_TK() == v204)) {
{ rt_int rv5319 = 1;
y_use = F.yu; return rv5319; }
}
if ((!(yr2050_TK() == v210))) {
{ rt_int rv5321 = 0;
y_use = F.yu; return rv5321; }
}
F.v5317 = yr2055_TV();
Y_FLUSH();
{ rt_int rv5322 = ((((((((((((((((Y_DEFI(F.v5317) == v285)) || ((Y_DEFI(F.v5317) == v282))) || ((Y_DEFI(F.v5317) == v300))) || ((Y_DEFI(F.v5317) == v267))) || ((Y_DEFI(F.v5317) == v321))) || ((Y_DEFI(F.v5317) == v327))) || ((Y_DEFI(F.v5317) == v294))) || ((Y_DEFI(F.v5317) == v303))) || ((Y_DEFI(F.v5317) == v288))) || ((Y_DEFI(F.v5317) == v291))) || ((Y_DEFI(F.v5317) == v312))) || ((Y_DEFI(F.v5317) == v297))) || ((Y_DEFI(F.v5317) == v315))) || ((Y_DEFI(F.v5317) == v306))) || ((Y_DEFI(F.v5317) == v309)));
y_use = F.yu; return rv5322; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2240_ParseStatements(rt_int a_p2241) {
struct yf2242 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2241 = a_p2241;
F.v5326 = Y_UNDEF_P;
F.v5326 = ((void *)0);
F.v5328 = Y_UNDEF_P;
F.v5328 = ((void *)0);
F.v5330 = Y_UNDEF_P;
F.v5330 = ((void *)0);
F.v5332 = Y_UNDEF_I;
for (;;) {
Y_TICK();
while (yr2089_Accept(v609)) {
Y_TICK();
}
if (yr2235_IsStop()) {
goto yl_5333;
}
F.v5332 = INT64_C(0);
Y_FLUSH();
if (((F.p2241 && yr2078_IsIdAt(INT64_C(0))) && yr2065_IsAt(INT64_C(1), v612))) {
F.v5332 = yr2106_Ident();
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
}
F.v5330 = yr2246_ParseStatement();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5330)))).f_text = Y_DEFI(F.v5332);
Y_FLUSH();
yr2036_Link(&F.v5326, &F.v5328, Y_DEFP(F.v5330));
Y_FLUSH();
if ((!yr2072_Is(v609))) {
goto yl_5333;
}
}
yl_5333: ;
{ void * rv5337 = Y_DEFP(F.v5326);
y_use = F.yu; return rv5337; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2246_ParseStatement(void) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5340 = Y_UNDEF_P;
F.v5342 = Y_UNDEF_P;
F.v5344 = Y_UNDEF_P;
F.v5346 = Y_UNDEF_P;
F.v5348 = Y_UNDEF_P;
F.v5350 = Y_UNDEF_P;
F.v5352 = Y_UNDEF_I;
F.v5354 = Y_UNDEF_I;
F.v5354 = yr2060_TLn();
if ((yr2050_TK() == v210)) {
F.v5352 = yr2055_TV();
Y_FLUSH();
if ((Y_DEFI(F.v5352) == v246)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v720, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
{ void * rv5355 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5355; }
}
if ((Y_DEFI(F.v5352) == v351)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v723, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_name = yr2106_Ident();
Y_FLUSH();
{ void * rv5356 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5356; }
}
if ((Y_DEFI(F.v5352) == v333)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v726, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_name = yr2106_Ident();
Y_FLUSH();
{ void * rv5357 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5357; }
}
if ((Y_DEFI(F.v5352) == v441)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v729, Y_DEFI(F.v5354));
Y_FLUSH();
if ((!((yr2072_Is(v609) || yr2235_IsStop())))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
}
{ void * rv5358 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5358; }
}
if ((Y_DEFI(F.v5352) == v468)) {
yr2084_Skip();
Y_FLUSH();
{ void * rv5359 = yr2029_NewNode(v732, Y_DEFI(F.v5354));
y_use = F.yu; return rv5359; }
}
if ((Y_DEFI(F.v5352) == v426)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v735, Y_DEFI(F.v5354));
Y_FLUSH();
if (yr2078_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_name = yr2106_Ident();
Y_FLUSH();
}
{ void * rv5361 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5361; }
}
if ((Y_DEFI(F.v5352) == v354)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v738, Y_DEFI(F.v5354));
Y_FLUSH();
F.v5344 = ((void *)0);
Y_FLUSH();
F.v5342 = yr2029_NewNode(v756, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5342)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
yr2100_Expect(v471);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5342)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a, &F.v5344, Y_DEFP(F.v5342));
Y_FLUSH();
while (yr2072_Is(v285)) {
Y_TICK();
F.v5342 = yr2029_NewNode(v756, yr2060_TLn());
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5342)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
yr2100_Expect(v471);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5342)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a, &F.v5344, Y_DEFP(F.v5342));
Y_FLUSH();
}
if (yr2089_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_flag = INT64_C(1);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
}
yr2100_Expect(v300);
Y_FLUSH();
{ void * rv5366 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5366; }
}
if ((Y_DEFI(F.v5352) == v450)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v741, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
F.v5344 = ((void *)0);
Y_FLUSH();
while (yr2072_Is(v267)) {
Y_TICK();
F.v5342 = yr2029_NewNode(v756, yr2060_TLn());
Y_FLUSH();
yr2084_Skip();
Y_FLUSH();
F.v5348 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5342)))).f_a, &F.v5348, yr2302_ParseExpr());
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5367;
}
}
yl_5367: ;
yr2100_Expect(v534);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5342)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_b, &F.v5344, Y_DEFP(F.v5342));
Y_FLUSH();
}
if (yr2089_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_flag = INT64_C(1);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_c = yr2240_ParseStatements(0);
Y_FLUSH();
}
yr2100_Expect(v321);
Y_FLUSH();
{ void * rv5371 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5371; }
}
if ((Y_DEFI(F.v5352) == v486)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v744, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
yr2100_Expect(v279);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2100_Expect(v327);
Y_FLUSH();
{ void * rv5373 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5373; }
}
if ((Y_DEFI(F.v5352) == v345)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v747, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_name = yr2106_Ident();
Y_FLUSH();
yr2100_Expect(v612);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = yr2205_ParseRep();
Y_FLUSH();
yr2100_Expect(v279);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2100_Expect(v294);
Y_FLUSH();
{ void * rv5375 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5375; }
}
if ((Y_DEFI(F.v5352) == v375)) {
yr2084_Skip();
Y_FLUSH();
F.v5340 = yr2029_NewNode(v750, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_name = yr2106_Ident();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_b = yr2240_ParseStatements(0);
Y_FLUSH();
yr2100_Expect(v303);
Y_FLUSH();
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_name), Y_DEFI(F.v5354));
Y_FLUSH();
{ void * rv5377 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5377; }
}
if ((((Y_DEFI(F.v5352) == v264)) || ((Y_DEFI(F.v5352) == v456)))) {
F.v5340 = yr2029_NewNode(v753, Y_DEFI(F.v5354));
Y_FLUSH();
if (yr2089_Accept(v456)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_flag = INT64_C(1);
Y_FLUSH();
}
yr2100_Expect(v264);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = yr2144_ParseBlock();
Y_FLUSH();
yr2100_Expect(v288);
Y_FLUSH();
{ void * rv5379 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5379; }
}
}
F.v5350 = yr2333_ParseDesignator();
Y_FLUSH();
if (yr2089_Accept(v531)) {
F.v5340 = yr2029_NewNode(v714, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = Y_DEFP(F.v5350);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_b = yr2302_ParseExpr();
Y_FLUSH();
{ void * rv5380 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5380; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5350)))).f_kind) == v780))) {
yr1178_FailS(Y_DEFI(F.v5354), y_str("expected a statement", 20));
Y_FLUSH();
}
F.v5340 = yr2029_NewNode(v717, Y_DEFI(F.v5354));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5340)))).f_a = Y_DEFP(F.v5350);
Y_FLUSH();
{ void * rv5382 = Y_DEFP(F.v5340);
y_use = F.yu; return rv5382; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_OpAt(void) {
struct yf2252 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr2050_TK() == v213)) || ((yr2050_TK() == v210)))) {
{ rt_int rv5384 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv5384; }
}
{ rt_int rv5386 = INT64_C(0);
y_use = F.yu; return rv5386; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2256_IsRel(rt_int a_p2257) {
struct yf2258 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2257 = a_p2257;
{ rt_int rv5389 = ((((((((((((((((((((F.p2257 == v360)) || ((F.p2257 == v570))) || ((F.p2257 == v585))) || ((F.p2257 == v588))) || ((F.p2257 == v540))) || ((F.p2257 == v591))) || ((F.p2257 == v543))) || ((F.p2257 == v546))) || ((F.p2257 == v501))) || ((F.p2257 == v549))) || ((F.p2257 == v504))) || ((F.p2257 == v552))) || ((F.p2257 == v513))) || ((F.p2257 == v507))) || ((F.p2257 == v495))) || ((F.p2257 == v555))) || ((F.p2257 == v516))) || ((F.p2257 == v510))) || ((F.p2257 == v498)));
y_use = F.yu; return rv5389; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2262_IsAssocMul(rt_int a_p2263) {
struct yf2264 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2263 = a_p2263;
{ rt_int rv5392 = (((F.p2263 == v579)) || ((F.p2263 == v237)));
y_use = F.yu; return rv5392; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2268_IsNonAssocMul(rt_int a_p2269) {
struct yf2270 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2269 = a_p2269;
{ rt_int rv5395 = ((((((((F.p2269 == v582)) || ((F.p2269 == v276))) || ((F.p2269 == v378))) || ((F.p2269 == v558))) || ((F.p2269 == v519))) || ((F.p2269 == v561))) || ((F.p2269 == v522)));
y_use = F.yu; return rv5395; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2274_IsAssocAdd(rt_int a_p2275) {
struct yf2276 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2275 = a_p2275;
{ rt_int rv5398 = (((F.p2275 == v573)) || ((F.p2275 == v399)));
y_use = F.yu; return rv5398; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2280_IsNonAssocAdd(rt_int a_p2281) {
struct yf2282 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2281 = a_p2281;
{ rt_int rv5401 = (((((((F.p2281 == v576)) || ((F.p2281 == v489))) || ((F.p2281 == v564))) || ((F.p2281 == v525))) || ((F.p2281 == v567))) || ((F.p2281 == v528)));
y_use = F.yu; return rv5401; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2286_Bin(rt_int a_p2287, void * a_p2288, void * a_p2289, rt_int a_p2290) {
struct yf2291 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2287 = a_p2287;
F.p2288 = a_p2288;
F.p2289 = a_p2289;
F.p2290 = a_p2290;
F.v5408 = Y_UNDEF_P;
F.v5408 = yr2029_NewNode(v798, F.p2290);
((*(yR105 *)y_deref(Y_DEFP(F.v5408)))).f_name = F.p2287;
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5408)))).f_a = F.p2288;
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5408)))).f_b = F.p2289;
Y_FLUSH();
{ void * rv5409 = Y_DEFP(F.v5408);
y_use = F.yu; return rv5409; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2295_NeedParens(rt_int a_p2296, rt_int a_p2297) {
struct yf2298 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2296 = a_p2296;
F.p2297 = a_p2297;
F.v5414 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1044_ST(F.p2296);
Y_FLUSH();
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
Y_FLUSH();
F.v5414 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(F.p2297, Y_DEFI(F.v5414));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2302_ParseExpr(void) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5418 = Y_UNDEF_P;
F.v5420 = Y_UNDEF_I;
F.v5422 = Y_UNDEF_I;
F.v5422 = yr2060_TLn();
F.v5418 = yr2307_ParseSimple();
Y_FLUSH();
F.v5420 = yr2251_OpAt();
Y_FLUSH();
if (yr2256_IsRel(Y_DEFI(F.v5420))) {
yr2084_Skip();
Y_FLUSH();
F.v5418 = yr2286_Bin(Y_DEFI(F.v5420), Y_DEFP(F.v5418), yr2307_ParseSimple(), Y_DEFI(F.v5422));
Y_FLUSH();
if (yr2256_IsRel(yr2251_OpAt())) {
yr2295_NeedParens(Y_DEFI(F.v5420), Y_DEFI(F.v5422));
Y_FLUSH();
}
}
{ void * rv5423 = Y_DEFP(F.v5418);
y_use = F.yu; return rv5423; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2307_ParseSimple(void) {
struct yf2308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5426 = Y_UNDEF_P;
F.v5428 = Y_UNDEF_P;
F.v5430 = Y_UNDEF_I;
F.v5432 = Y_UNDEF_I;
F.v5432 = yr2060_TLn();
if (yr2072_Is(v576)) {
yr2084_Skip();
Y_FLUSH();
F.v5428 = yr2029_NewNode(v795, Y_DEFI(F.v5432));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5428)))).f_a = yr2312_ParseTerm();
Y_FLUSH();
F.v5430 = yr2251_OpAt();
Y_FLUSH();
if ((yr2274_IsAssocAdd(Y_DEFI(F.v5430)) || yr2280_IsNonAssocAdd(Y_DEFI(F.v5430)))) {
yr2295_NeedParens(y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFI(F.v5432));
Y_FLUSH();
}
{ void * rv5433 = Y_DEFP(F.v5428);
y_use = F.yu; return rv5433; }
}
F.v5426 = yr2312_ParseTerm();
Y_FLUSH();
F.v5430 = yr2251_OpAt();
Y_FLUSH();
if (yr2280_IsNonAssocAdd(Y_DEFI(F.v5430))) {
yr2084_Skip();
Y_FLUSH();
F.v5426 = yr2286_Bin(Y_DEFI(F.v5430), Y_DEFP(F.v5426), yr2312_ParseTerm(), Y_DEFI(F.v5432));
Y_FLUSH();
if ((yr2274_IsAssocAdd(yr2251_OpAt()) || yr2280_IsNonAssocAdd(yr2251_OpAt()))) {
yr2295_NeedParens(Y_DEFI(F.v5430), Y_DEFI(F.v5432));
Y_FLUSH();
}
{ void * rv5434 = Y_DEFP(F.v5426);
y_use = F.yu; return rv5434; }
}
while (yr2274_IsAssocAdd(Y_DEFI(F.v5430))) {
Y_TICK();
yr2084_Skip();
Y_FLUSH();
F.v5426 = yr2286_Bin(Y_DEFI(F.v5430), Y_DEFP(F.v5426), yr2312_ParseTerm(), Y_DEFI(F.v5432));
Y_FLUSH();
if (yr2280_IsNonAssocAdd(yr2251_OpAt())) {
yr2295_NeedParens(yr2251_OpAt(), Y_DEFI(F.v5432));
Y_FLUSH();
}
F.v5430 = yr2251_OpAt();
Y_FLUSH();
}
{ void * rv5435 = Y_DEFP(F.v5426);
y_use = F.yu; return rv5435; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2312_ParseTerm(void) {
struct yf2313 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5438 = Y_UNDEF_P;
F.v5440 = Y_UNDEF_I;
F.v5442 = Y_UNDEF_I;
F.v5442 = yr2060_TLn();
F.v5438 = yr2328_ParseFactor();
Y_FLUSH();
F.v5440 = yr2251_OpAt();
Y_FLUSH();
if (yr2268_IsNonAssocMul(Y_DEFI(F.v5440))) {
yr2084_Skip();
Y_FLUSH();
F.v5438 = yr2286_Bin(Y_DEFI(F.v5440), Y_DEFP(F.v5438), yr2328_ParseFactor(), Y_DEFI(F.v5442));
Y_FLUSH();
if ((yr2262_IsAssocMul(yr2251_OpAt()) || yr2268_IsNonAssocMul(yr2251_OpAt()))) {
yr2295_NeedParens(Y_DEFI(F.v5440), Y_DEFI(F.v5442));
Y_FLUSH();
}
{ void * rv5443 = Y_DEFP(F.v5438);
y_use = F.yu; return rv5443; }
}
while (yr2262_IsAssocMul(Y_DEFI(F.v5440))) {
Y_TICK();
yr2084_Skip();
Y_FLUSH();
F.v5438 = yr2286_Bin(Y_DEFI(F.v5440), Y_DEFP(F.v5438), yr2328_ParseFactor(), Y_DEFI(F.v5442));
Y_FLUSH();
if (yr2268_IsNonAssocMul(yr2251_OpAt())) {
yr2295_NeedParens(yr2251_OpAt(), Y_DEFI(F.v5442));
Y_FLUSH();
}
F.v5440 = yr2251_OpAt();
Y_FLUSH();
}
{ void * rv5444 = Y_DEFP(F.v5438);
y_use = F.yu; return rv5444; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2317_IsLiteralAt(rt_int a_p2318) {
struct yf2319 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2318 = a_p2318;
F.v5448 = Y_UNDEF_I;
F.v5448 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2318))]);
{ rt_int rv5450 = (((((((Y_DEFI(F.v5448) == v216)) || ((Y_DEFI(F.v5448) == v219))) || ((Y_DEFI(F.v5448) == v222))) || ((Y_DEFI(F.v5448) == v225))) || ((Y_DEFI(F.v5448) == v228))) || yr2065_IsAt(F.p2318, v387));
y_use = F.yu; return rv5450; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2323_ParseLiteral(void) {
struct yf2324 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5453 = Y_UNDEF_P;
F.v5455 = Y_UNDEF_I;
F.v5455 = yr2050_TK();
F.v5457 = Y_UNDEF_I;
F.v5457 = yr2060_TLn();
if ((Y_DEFI(F.v5455) == v216)) {
F.v5453 = yr2029_NewNode(v759, Y_DEFI(F.v5457));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5453)))).f_ival = yr2055_TV();
Y_FLUSH();
} else if ((Y_DEFI(F.v5455) == v219)) {
F.v5453 = yr2029_NewNode(v762, Y_DEFI(F.v5457));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5453)))).f_ival = yr2055_TV();
Y_FLUSH();
} else if ((Y_DEFI(F.v5455) == v222)) {
F.v5453 = yr2029_NewNode(v765, Y_DEFI(F.v5457));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5453)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
} else if ((Y_DEFI(F.v5455) == v225)) {
F.v5453 = yr2029_NewNode(v768, Y_DEFI(F.v5457));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5453)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
} else if ((Y_DEFI(F.v5455) == v228)) {
F.v5453 = yr2029_NewNode(v771, Y_DEFI(F.v5457));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5453)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
} else {
F.v5453 = yr2029_NewNode(v774, Y_DEFI(F.v5457));
Y_FLUSH();
}
yr2084_Skip();
Y_FLUSH();
{ void * rv5458 = Y_DEFP(F.v5453);
y_use = F.yu; return rv5458; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2328_ParseFactor(void) {
struct yf2329 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5461 = Y_UNDEF_P;
F.v5463 = Y_UNDEF_I;
F.v5465 = Y_UNDEF_I;
F.v5465 = yr2060_TLn();
if (yr2072_Is(v390)) {
yr2084_Skip();
Y_FLUSH();
F.v5461 = yr2029_NewNode(v792, Y_DEFI(F.v5465));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5461)))).f_a = yr2328_ParseFactor();
Y_FLUSH();
{ void * rv5466 = Y_DEFP(F.v5461);
y_use = F.yu; return rv5466; }
}
if (yr2072_Is(v594)) {
yr2084_Skip();
Y_FLUSH();
F.v5461 = yr2029_NewNode(v801, Y_DEFI(F.v5465));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5461)))).f_a = yr2302_ParseExpr();
Y_FLUSH();
yr2100_Expect(v597);
Y_FLUSH();
{ void * rv5467 = Y_DEFP(F.v5461);
y_use = F.yu; return rv5467; }
}
if (yr2317_IsLiteralAt(INT64_C(0))) {
{ void * rv5469 = yr2323_ParseLiteral();
y_use = F.yu; return rv5469; }
}
if (yr2078_IsIdAt(INT64_C(0))) {
if ((yr2317_IsLiteralAt(INT64_C(1)) || ((yr2078_IsIdAt(INT64_C(1)) && (!((((((yr2065_IsAt(INT64_C(2), v594) || yr2065_IsAt(INT64_C(2), v600)) || yr2065_IsAt(INT64_C(2), v615)) || yr2065_IsAt(INT64_C(2), v618)) || yr2065_IsAt(INT64_C(2), v531)) || yr2065_IsAt(INT64_C(2), v612)))))))) {
F.v5463 = yr2106_Ident();
Y_FLUSH();
if (yr2078_IsIdAt(INT64_C(0))) {
F.v5461 = yr2029_NewNode(v777, Y_DEFI(F.v5465));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5461)))).f_name = yr2106_Ident();
Y_FLUSH();
} else {
F.v5461 = yr2323_ParseLiteral();
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5461)))).f_d = yr2029_NewNode(v669, Y_DEFI(F.v5465));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5461)))).f_d)))).f_name = Y_DEFI(F.v5463);
Y_FLUSH();
{ void * rv5480 = Y_DEFP(F.v5461);
y_use = F.yu; return rv5480; }
}
{ void * rv5481 = yr2333_ParseDesignator();
y_use = F.yu; return rv5481; }
}
yr1186_FailN(Y_DEFI(F.v5465), yr2095_TokText(), y_str(" cannot begin an operand", 24));
Y_FLUSH();
{ void * rv5483 = ((void *)0);
y_use = F.yu; return rv5483; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2333_ParseDesignator(void) {
struct yf2334 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5486 = Y_UNDEF_P;
F.v5488 = Y_UNDEF_P;
F.v5490 = Y_UNDEF_P;
F.v5492 = Y_UNDEF_I;
F.v5492 = yr2060_TLn();
F.v5486 = yr2029_NewNode(v777, Y_DEFI(F.v5492));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5486)))).f_name = yr2106_Ident();
Y_FLUSH();
if (yr2089_Accept(v594)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5486)))).f_kind = v780;
Y_FLUSH();
F.v5490 = ((void *)0);
Y_FLUSH();
while ((!yr2072_Is(v597))) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5486)))).f_a, &F.v5490, yr2302_ParseExpr());
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
yr2338_EXIT_ARGS();
Y_FLUSH();
}
}
yr2100_Expect(v597);
Y_FLUSH();
}
for (;;) {
Y_TICK();
if (yr2089_Accept(v615)) {
F.v5488 = yr2029_NewNode(v783, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5488)))).f_a = Y_DEFP(F.v5486);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5488)))).f_name = yr2106_Ident();
Y_FLUSH();
F.v5486 = Y_DEFP(F.v5488);
Y_FLUSH();
} else if (yr2089_Accept(v600)) {
F.v5488 = yr2029_NewNode(v786, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5488)))).f_a = Y_DEFP(F.v5486);
Y_FLUSH();
F.v5490 = ((void *)0);
Y_FLUSH();
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5488)))).f_b, &F.v5490, yr2302_ParseExpr());
Y_FLUSH();
if ((!yr2089_Accept(v606))) {
goto yl_5494;
}
}
yl_5494: ;
yr2100_Expect(v603);
Y_FLUSH();
F.v5486 = Y_DEFP(F.v5488);
Y_FLUSH();
} else if (yr2089_Accept(v618)) {
F.v5488 = yr2029_NewNode(v789, yr2060_TLn());
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5488)))).f_a = Y_DEFP(F.v5486);
Y_FLUSH();
F.v5486 = Y_DEFP(F.v5488);
Y_FLUSH();
} else {
goto yl_5493;
}
}
yl_5493: ;
{ void * rv5495 = Y_DEFP(F.v5486);
y_use = F.yu; return rv5495; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2338_EXIT_ARGS(void) {
struct yf2339 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr2072_Is(v597))) {
yr2100_Expect(v597);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2343_ParseProgram(void) {
struct yf2344 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5499 = Y_UNDEF_P;
F.v5499 = ((void *)0);
F.v5501 = Y_UNDEF_P;
F.v5501 = ((void *)0);
F.v5503 = Y_UNDEF_P;
F.v5503 = ((void *)0);
F.v5505 = Y_UNDEF_I;
while ((!(yr2050_TK() == v204))) {
Y_TICK();
if ((!((yr2072_Is(v381) || yr2072_Is(v384))))) {
yr1178_FailS(yr2060_TLn(), y_str("a segment is a module (XIII.A)", 30));
Y_FLUSH();
}
F.v5505 = Y_DEFI(v1249);
Y_FLUSH();
F.v5503 = yr2134_ParseModule();
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v5503)))).f_x = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5503)))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5503)))).f_x)))).f_ival = Y_DEFI(F.v5505);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5503)))).f_x)))).f_flag = Y_DEFI(v1249);
Y_FLUSH();
yr2036_Link(&F.v5499, &F.v5501, Y_DEFP(F.v5503));
Y_FLUSH();
while (yr2089_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5507 = Y_DEFP(F.v5499);
y_use = F.yu; return rv5507; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2348_NewSym(rt_int a_p2349, rt_int a_p2350) {
struct yf2351 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2349 = a_p2349;
F.p2350 = a_p2350;
F.v5512 = Y_UNDEF_P;
({ F.v5512 = y_new_l(sizeof(yR125), "r0,0,30,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:u0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_126); y_initu(&yd_126, y_deref(F.v5512)); });
Y_FLUSH();
(*(yR125 *)y_deref(Y_DEFP(F.v5512))) = ((yR125){ .f_kind = F.p2349, .f_name = F.p2350, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1), .f_skey = INT64_C(0) });
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v5512)))).f_serial = yr1195_NewSerial();
Y_FLUSH();
{ void * rv5527 = Y_DEFP(F.v5512);
y_use = F.yu; return rv5527; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2355_OpenScope(rt_int a_p2356) {
struct yf2357 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2356 = a_p2356;
F.v5531 = Y_UNDEF_P;
({ F.v5531 = y_new_l(sizeof(yR130), "r0,0,6,-1(-1,0,0:p0,0,64;-1,0,0:u0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;)", &yd_131); y_initu(&yd_131, y_deref(F.v5531)); });
Y_FLUSH();
(*(yR130 *)y_deref(Y_DEFP(F.v5531))) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2356, .f_module = ((void *)0), .f_level = Y_DEFI(v1279), .f_deferred = ((void *)0), .f_up = ((void *)0) });
Y_FLUSH();
if ((Y_DEFI(v1273) >= INT64_C(0))) {
((*(yR130 *)y_deref(Y_DEFP(F.v5531)))).f_up = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))]);
Y_FLUSH();
}
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = Y_DEFP(F.v5531);
Y_FLUSH();
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2361_ReopenScope(void * a_p2362) {
struct yf2363 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2362 = a_p2362;
F.v5538 = Y_UNDEF_P;
F.v5538 = Y_DEFP(((*(yR130 *)y_deref(F.p2362))).f_syms);
F.v5540 = Y_UNDEF_I;
F.v5540 = INT64_C(0);
F.v5543 = Y_UNDEF_I;
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = F.p2362;
Y_FLUSH();
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
while ((!(Y_DEFP(F.v5538) == ((void *)0)))) {
Y_TICK();
F.v5540 = y_range(y_add(Y_DEFI(F.v5540), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5540))] = Y_DEFP(F.v5538);
Y_FLUSH();
F.v5538 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5538)))).f_stack);
Y_FLUSH();
}
while ((Y_DEFI(F.v5540) > INT64_C(0))) {
Y_TICK();
F.v5538 = Y_DEFP(((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5540))]);
Y_FLUSH();
F.v5543 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5538)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v5538)))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5543))]);
Y_FLUSH();
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5543))] = Y_DEFP(F.v5538);
Y_FLUSH();
F.v5540 = y_range(y_sub(Y_DEFI(F.v5540), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2367_CloseScope(void) {
struct yf2368 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5555 = Y_UNDEF_P;
F.v5557 = Y_UNDEF_P;
F.v5559 = Y_UNDEF_P;
F.v5561 = Y_UNDEF_I;
F.v5555 = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
Y_FLUSH();
while ((!(Y_DEFP(F.v5555) == ((void *)0)))) {
Y_TICK();
F.v5561 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v5557 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5561))]);
Y_FLUSH();
F.v5559 = ((void *)0);
Y_FLUSH();
while ((((!(Y_DEFP(F.v5557) == ((void *)0)))) && ((!(Y_DEFP(F.v5557) == Y_DEFP(F.v5555)))))) {
Y_TICK();
F.v5559 = Y_DEFP(F.v5557);
Y_FLUSH();
F.v5557 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5557)))).f_chain);
Y_FLUSH();
}
if ((Y_DEFP(F.v5557) == Y_DEFP(F.v5555))) {
if ((Y_DEFP(F.v5559) == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5561))] = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_chain);
Y_FLUSH();
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v5559)))).f_chain = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_chain);
Y_FLUSH();
}
}
F.v5555 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_stack);
Y_FLUSH();
}
v1273 = y_range(y_sub(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2372_Visible(void * a_p2373) {
struct yf2374 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2373 = a_p2373;
{ rt_int rv5569 = (((Y_DEFI(((*(yR125 *)y_deref(F.p2373))).f_depth) >= Y_DEFI(v1276))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p2373))).f_depth) == INT64_C(0))));
y_use = F.yu; return rv5569; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2378_Find(rt_int a_p2379) {
struct yf2380 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2379 = a_p2379;
F.v5573 = Y_UNDEF_P;
F.v5573 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2379, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5573) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5573)))).f_name) == F.p2379)) && yr2372_Visible(Y_DEFP(F.v5573)))) {
{ void * rv5576 = Y_DEFP(F.v5573);
y_use = F.yu; return rv5576; }
}
F.v5573 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5573)))).f_chain);
Y_FLUSH();
}
{ void * rv5577 = ((void *)0);
y_use = F.yu; return rv5577; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2384_FindHere(rt_int a_p2385) {
struct yf2386 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2385 = a_p2385;
F.v5581 = Y_UNDEF_P;
F.v5581 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2385, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5581) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5581)))).f_name) == F.p2385)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5581)))).f_depth) == Y_DEFI(v1273))))) {
{ void * rv5584 = Y_DEFP(F.v5581);
y_use = F.yu; return rv5584; }
}
F.v5581 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5581)))).f_chain);
Y_FLUSH();
}
{ void * rv5585 = ((void *)0);
y_use = F.yu; return rv5585; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2390_Lookup(rt_int a_p2391, rt_int a_p2392) {
struct yf2393 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2391 = a_p2391;
F.p2392 = a_p2392;
F.v5590 = Y_UNDEF_P;
F.v5590 = yr2378_Find(F.p2391);
F.v5592 = Y_UNDEF_P;
if ((!(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]) == ((void *)0)))) {
if ((((Y_DEFP(F.v5590) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_depth) == Y_DEFI(v1273)))))) {
if (yr2410_DeclaredFrom(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]), F.p2391)) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is used before its declaration in this scope (VII.I)", 53));
Y_FLUSH();
}
}
}
if ((Y_DEFP(F.v5590) == ((void *)0))) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is not declared here", 21));
Y_FLUSH();
}
F.lo5598 = INT64_C(1);
F.hi5599 = Y_DEFI(v1328);
{ rt_int hi5603 = F.hi5599;
for (rt_int i5602 = F.lo5598; i5602 <= hi5603; i5602++) { F.c_5601 = i5602; Y_TICK();
if (((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_depth) == Y_DEFI(((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5601)]))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_serial) > Y_DEFI(((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5601)])))) && yr2404_IsSimple(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_kind)))) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
Y_FLUSH();
}
if (i5602 == hi5603) break;
}}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_kind) == v894)) {
F.v5592 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_chain);
Y_FLUSH();
while ((!(Y_DEFP(F.v5592) == ((void *)0)))) {
Y_TICK();
if ((((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5592)))).f_name) == F.p2391)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5592)))).f_depth) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5590)))).f_depth)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5592)))).f_kind) == v894))) && yr2431_Resolved(Y_DEFP(F.v5592))) && ((!(yr2483_Real(Y_DEFP(F.v5592)) == yr2483_Real(Y_DEFP(F.v5590)))))) && ((!(Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v5590))))).f_kind) == v873))))) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
Y_FLUSH();
}
F.v5592 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5592)))).f_chain);
Y_FLUSH();
}
}
{ void * rv5606 = Y_DEFP(F.v5590);
y_use = F.yu; return rv5606; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2397_AltOf(void * a_p2398, void * a_p2399) {
struct yf2400 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2398 = a_p2398;
F.p2399 = a_p2399;
F.v5611 = Y_UNDEF_P;
F.v5611 = Y_DEFP(((*(yR125 *)y_deref(F.p2398))).f_alt);
while ((!(Y_DEFP(F.v5611) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(F.v5611) == F.p2399)) {
{ rt_int rv5613 = 1;
y_use = F.yu; return rv5613; }
}
F.v5611 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5611)))).f_alt);
Y_FLUSH();
}
{ rt_int rv5615 = 0;
y_use = F.yu; return rv5615; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2404_IsSimple(rt_int a_p2405) {
struct yf2406 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2405 = a_p2405;
{ rt_int rv5618 = (((((((F.p2405 == v861)) || ((F.p2405 == v864))) || ((F.p2405 == v867))) || ((F.p2405 == v870))) || ((F.p2405 == v873))) || ((F.p2405 == v888)));
y_use = F.yu; return rv5618; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2410_DeclaredFrom(void * a_p2411, rt_int a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2411 = a_p2411;
F.p2412 = a_p2412;
F.v5623 = Y_UNDEF_P;
F.v5623 = F.p2411;
F.v5625 = Y_UNDEF_P;
F.v5625 = F.p2411;
F.v5627 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v5623) == ((void *)0)))) {
Y_TICK();
F.v5627 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5623)))).f_kind);
Y_FLUSH();
if (((((Y_DEFI(F.v5627) == v639)) || ((Y_DEFI(F.v5627) == v642))) || ((Y_DEFI(F.v5627) == v645)))) {
F.v5625 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5623)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v5625) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5625)))).f_name) == F.p2412)) {
{ rt_int rv5629 = 1;
y_use = F.yu; return rv5629; }
}
F.v5625 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5625)))).f_next);
Y_FLUSH();
}
}
if ((((((((Y_DEFI(F.v5627) == v648)) || ((Y_DEFI(F.v5627) == v651))) || ((Y_DEFI(F.v5627) == v654))) || ((Y_DEFI(F.v5627) == v666))) || ((Y_DEFI(F.v5627) == v624))) || ((Y_DEFI(F.v5627) == v660)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5623)))).f_name) == F.p2412)) {
{ rt_int rv5631 = 1;
y_use = F.yu; return rv5631; }
}
}
if ((((((Y_DEFI(F.v5627) == v639)) || ((Y_DEFI(F.v5627) == v642))) || ((Y_DEFI(F.v5627) == v648))) || ((Y_DEFI(F.v5627) == v651)))) {
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5623)))).f_b), F.p2412)) {
{ rt_int rv5633 = 1;
y_use = F.yu; return rv5633; }
}
}
if ((Y_DEFI(F.v5627) == v624)) {
F.v5625 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5623)))).f_b);
Y_FLUSH();
while ((!(Y_DEFP(F.v5625) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5625)))).f_ival) == F.p2412)) || ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5625)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5625)))).f_name) == F.p2412)))))) {
{ rt_int rv5636 = 1;
y_use = F.yu; return rv5636; }
}
F.v5625 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5625)))).f_next);
Y_FLUSH();
}
}
F.v5623 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5623)))).f_next);
Y_FLUSH();
}
{ rt_int rv5638 = 0;
y_use = F.yu; return rv5638; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2417_LiteralIn(void * a_p2418, rt_int a_p2419) {
struct yf2420 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2418 = a_p2418;
F.p2419 = a_p2419;
F.v5643 = Y_UNDEF_P;
if ((F.p2418 == ((void *)0))) {
{ rt_int rv5645 = 0;
y_use = F.yu; return rv5645; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v675)) {
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v5643) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_name) == F.p2419)) {
{ rt_int rv5647 = 1;
y_use = F.yu; return rv5647; }
}
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_next);
Y_FLUSH();
}
{ rt_int rv5649 = 0;
y_use = F.yu; return rv5649; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v681)) {
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v5643) == ((void *)0)))) {
Y_TICK();
if (yr2417_LiteralIn(Y_DEFP(F.v5643), F.p2419)) {
{ rt_int rv5651 = 1;
y_use = F.yu; return rv5651; }
}
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_next);
Y_FLUSH();
}
{ rt_int rv5652 = yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b), F.p2419);
y_use = F.yu; return rv5652; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v684)) {
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v5643) == ((void *)0)))) {
Y_TICK();
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_b), F.p2419)) {
{ rt_int rv5654 = 1;
y_use = F.yu; return rv5654; }
}
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_next);
Y_FLUSH();
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b) == ((void *)0)))) {
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b)))).f_b), F.p2419)) {
{ rt_int rv5656 = 1;
y_use = F.yu; return rv5656; }
}
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v5643) == ((void *)0)))) {
Y_TICK();
if (yr2424_LiteralInGroups(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_b), F.p2419)) {
{ rt_int rv5658 = 1;
y_use = F.yu; return rv5658; }
}
F.v5643 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5643)))).f_next);
Y_FLUSH();
}
}
{ rt_int rv5660 = 0;
y_use = F.yu; return rv5660; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v687)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v693)))) {
{ rt_int rv5661 = yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a), F.p2419);
y_use = F.yu; return rv5661; }
}
{ rt_int rv5663 = 0;
y_use = F.yu; return rv5663; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2424_LiteralInGroups(void * a_p2425, rt_int a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2425 = a_p2425;
F.p2426 = a_p2426;
F.v5668 = Y_UNDEF_P;
F.v5668 = F.p2425;
while ((!(Y_DEFP(F.v5668) == ((void *)0)))) {
Y_TICK();
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5668)))).f_b), F.p2426)) {
{ rt_int rv5670 = 1;
y_use = F.yu; return rv5670; }
}
F.v5668 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5668)))).f_next);
Y_FLUSH();
}
{ rt_int rv5672 = 0;
y_use = F.yu; return rv5672; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2431_Resolved(void * a_p2432) {
struct yf2433 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2432 = a_p2432;
if ((!(Y_DEFI(((*(yR125 *)y_deref(F.p2432))).f_kind) == v894))) {
{ rt_int rv5676 = 1;
y_use = F.yu; return rv5676; }
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p2432))).f_target) == ((void *)0))) {
{ rt_int rv5678 = 0;
y_use = F.yu; return rv5678; }
}
{ rt_int rv5679 = yr2431_Resolved(Y_DEFP(((*(yR125 *)y_deref(F.p2432))).f_target));
y_use = F.yu; return rv5679; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2437_Ambiguous(void * a_p2438) {
struct yf2439 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2438 = a_p2438;
F.v5683 = Y_UNDEF_P;
F.v5683 = Y_DEFP(((*(yR125 *)y_deref(F.p2438))).f_chain);
while ((!(Y_DEFP(F.v5683) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5683)))).f_name) == Y_DEFI(((*(yR125 *)y_deref(F.p2438))).f_name))) && yr2372_Visible(Y_DEFP(F.v5683))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5683)))).f_kind) == v873))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5683)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p2438))).f_rep)))).f_tid)))))) {
{ rt_int rv5685 = 1;
y_use = F.yu; return rv5685; }
}
F.v5683 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5683)))).f_chain);
Y_FLUSH();
}
{ rt_int rv5687 = 0;
y_use = F.yu; return rv5687; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2443_FindLit(rt_int a_p2444, void * a_p2445) {
struct yf2446 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2444 = a_p2444;
F.p2445 = a_p2445;
F.v5692 = Y_UNDEF_P;
F.v5692 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2444, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5692) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5692)))).f_name) == F.p2444)) && yr2431_Resolved(Y_DEFP(F.v5692)))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v5692))))).f_kind) == v873)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v5692))))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2445))).f_tid))))) {
{ void * rv5695 = Y_DEFP(F.v5692);
y_use = F.yu; return rv5695; }
}
}
F.v5692 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5692)))).f_chain);
Y_FLUSH();
}
{ void * rv5696 = ((void *)0);
y_use = F.yu; return rv5696; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2450_Define(void * a_p2451, rt_int a_p2452) {
struct yf2453 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2451 = a_p2451;
F.p2452 = a_p2452;
F.v5701 = Y_UNDEF_P;
F.v5701 = yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_name));
F.v5703 = Y_UNDEF_I;
F.v5703 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(Y_DEFP(F.v5701) == ((void *)0)))) && (!((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5701)))).f_kind) == v873)) && ((Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_kind) == v873)))))) && (!(((((Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_kind) == v876)) && yr2431_Resolved(Y_DEFP(F.v5701))) && yr2397_AltOf(F.p2451, yr2483_Real(Y_DEFP(F.v5701))))))) && (!((((Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5701)))).f_kind) == v894))))))) {
yr1186_FailN(F.p2452, Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_name), y_str(" is declared twice in this scope", 32));
Y_FLUSH();
}
((*(yR125 *)y_deref(F.p2451))).f_depth = Y_DEFI(v1273);
Y_FLUSH();
((*(yR125 *)y_deref(F.p2451))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5703))]);
Y_FLUSH();
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5703))] = F.p2451;
Y_FLUSH();
((*(yR125 *)y_deref(F.p2451))).f_stack = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
Y_FLUSH();
((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms = F.p2451;
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2457_Path(rt_int a_p2458, rt_int a_p2459) {
struct yf2460 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2458 = a_p2458;
F.p2459 = a_p2459;
F.v5711 = Y_UNDEF_I;
F.v5711 = y_range(y_sub(Y_DEFI(v1279), F.p2458), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2458 == INT64_C(0))) {
{ rt_int rv5714 = F.p2459;
y_use = F.yu; return rv5714; }
}
yr1026_SB();
Y_FLUSH();
if ((Y_DEFI(F.v5711) == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
Y_FLUSH();
} else {
yr1037_SA(y_str("F.up->", 6));
Y_FLUSH();
while ((Y_DEFI(F.v5711) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
Y_FLUSH();
F.v5711 = y_range(y_sub(Y_DEFI(F.v5711), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
}
yr1044_ST(F.p2459);
Y_FLUSH();
{ rt_int rv5722 = yr1056_SE();
y_use = F.yu; return rv5722; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2464_FramePtr(rt_int a_p2465) {
struct yf2466 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2465 = a_p2465;
F.v5726 = Y_UNDEF_I;
F.v5726 = y_range(y_sub(Y_DEFI(v1279), F.p2465), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v5726) == INT64_C(0))) {
{ rt_int rv5730 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5730; }
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("F.up", 4));
Y_FLUSH();
while ((Y_DEFI(F.v5726) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
Y_FLUSH();
F.v5726 = y_range(y_sub(Y_DEFI(F.v5726), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
{ rt_int rv5736 = yr1056_SE();
y_use = F.yu; return rv5736; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2470_DeclStorage(rt_int a_p2471, rt_int a_p2472) {
struct yf2473 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2471 = a_p2471;
F.p2472 = a_p2472;
F.v5741 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
Y_FLUSH();
}
yr1044_ST(F.p2471);
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(F.p2472);
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v5741 = yr1056_SE();
Y_FLUSH();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1110_Put(&v984, Y_DEFI(F.v5741));
Y_FLUSH();
} else {
yr1110_Put(&v998, Y_DEFI(F.v5741));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2477_SymPath(void * a_p2478) {
struct yf2479 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2478 = a_p2478;
F.v5750 = Y_UNDEF_I;
F.v5750 = yr2457_Path(Y_DEFI(((*(yR125 *)y_deref(F.p2478))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p2478))).f_cname));
if (Y_DEFI(((*(yR125 *)y_deref(F.p2478))).f_byref)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(*", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v5750));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv5753 = yr1056_SE();
y_use = F.yu; return rv5753; }
}
{ rt_int rv5754 = Y_DEFI(F.v5750);
y_use = F.yu; return rv5754; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2483_Real(void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2484 = a_p2484;
F.v5758 = Y_UNDEF_P;
F.v5758 = F.p2484;
while ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5758)))).f_kind) == v894)) {
Y_TICK();
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5758)))).f_target) == ((void *)0))) {
yr1186_FailN(Y_DEFI(v1000), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5758)))).f_name), y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
Y_FLUSH();
}
F.v5758 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5758)))).f_target);
Y_FLUSH();
}
{ void * rv5760 = Y_DEFP(F.v5758);
y_use = F.yu; return rv5760; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2489_NewRep(rt_int a_p2490, rt_int a_p2491) {
struct yf2492 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2490 = a_p2490;
F.p2491 = a_p2491;
F.v5765 = Y_UNDEF_P;
({ F.v5765 = y_new_l(sizeof(yR110), "r0,0,37,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:u0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_111); y_initu(&yd_111, y_deref(F.v5765)); });
Y_FLUSH();
(*(yR110 *)y_deref(Y_DEFP(F.v5765))) = ((yR110){ .f_kind = F.p2490, .f_tid = F.p2491, .f_tname = F.p2491, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v5765)))).f_serial = yr1195_NewSerial();
Y_FLUSH();
{ void * rv5793 = Y_DEFP(F.v5765);
y_use = F.yu; return rv5793; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2496_CopyRep(void * a_p2497) {
struct yf2498 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2497 = a_p2497;
F.v5797 = Y_UNDEF_P;
({ F.v5797 = y_new_l(sizeof(yR110), "r0,0,37,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:u0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_111); y_initu(&yd_111, y_deref(F.v5797)); });
Y_FLUSH();
(*(yR110 *)y_deref(Y_DEFP(F.v5797))) = (*(yR110 *)y_deref(F.p2497));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v5797)))).f_serial = yr1195_NewSerial();
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v5797)))).f_sig = INT64_C(0);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v5797)))).f_bits = INT64_C(0);
Y_FLUSH();
{ void * rv5800 = Y_DEFP(F.v5797);
y_use = F.yu; return rv5800; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2502_IsDiscrete(void * a_p2503) {
struct yf2504 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2503 = a_p2503;
{ rt_int rv5803 = (((((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v813))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v816))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v819)));
y_use = F.yu; return rv5803; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2508_IsNumeric(void * a_p2509) {
struct yf2510 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2509 = a_p2509;
{ rt_int rv5806 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2509))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2509))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2509))).f_kind) == v810)));
y_use = F.yu; return rv5806; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2514_IsArrayLike(void * a_p2515) {
struct yf2516 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2515 = a_p2515;
{ rt_int rv5809 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2515))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2515))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2515))).f_kind) == v846)));
y_use = F.yu; return rv5809; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2520_IsString(void * a_p2521) {
struct yf2522 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2521 = a_p2521;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind) == v846)) {
{ rt_int rv5813 = 1;
y_use = F.yu; return rv5813; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind) == v822)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5815 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2521))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5815; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind) == v843)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5817 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2521))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5817; }
}
{ rt_int rv5819 = 0;
y_use = F.yu; return rv5819; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2526_Deep(void * a_p2527) {
struct yf2528 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2527 = a_p2527;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v846)))) {
{ rt_int rv5823 = 1;
y_use = F.yu; return rv5823; }
}
{ rt_int rv5824 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v825)) && Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_deep));
y_use = F.yu; return rv5824; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2532_Holds(void * a_p2533, rt_int a_p2534) {
struct yf2535 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2533 = a_p2533;
F.p2534 = a_p2534;
F.v5829 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_kind) == v822)) {
{ rt_int rv5830 = (((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2533))).f_elem)))).f_kind) == F.p2534)) || yr2532_Holds(Y_DEFP(((*(yR110 *)y_deref(F.p2533))).f_elem), F.p2534));
y_use = F.yu; return rv5830; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_kind) == v825)) {
F.v5829 = Y_DEFP(((*(yR110 *)y_deref(F.p2533))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v5829) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5829)))).f_rep)))).f_kind) == F.p2534)) || yr2532_Holds(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5829)))).f_rep), F.p2534))) {
{ rt_int rv5832 = 1;
y_use = F.yu; return rv5832; }
}
F.v5829 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5829)))).f_next);
Y_FLUSH();
}
}
{ rt_int rv5834 = 0;
y_use = F.yu; return rv5834; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2539_HoldsSignal(void * a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2540 = a_p2540;
{ rt_int rv5837 = yr2532_Holds(F.p2540, v837);
y_use = F.yu; return rv5837; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2545_NonAssignable(void * a_p2546) {
struct yf2547 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2546 = a_p2546;
F.v5841 = Y_UNDEF_I;
F.v5841 = Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_kind);
if (((((Y_DEFI(F.v5841) == v837)) || ((Y_DEFI(F.v5841) == v831))) || ((Y_DEFI(F.v5841) == v840)))) {
{ rt_int rv5843 = 1;
y_use = F.yu; return rv5843; }
}
{ rt_int rv5844 = ((yr2532_Holds(F.p2546, v837) || yr2532_Holds(F.p2546, v831)) || yr2532_Holds(F.p2546, v840));
y_use = F.yu; return rv5844; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2551_CType(void * a_p2552) {
struct yf2553 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2552 = a_p2552;
F.v5848 = Y_UNDEF_I;
F.v5848 = Y_DEFI(((*(yR110 *)y_deref(F.p2552))).f_kind);
if (((((Y_DEFI(F.v5848) == v804)) || ((Y_DEFI(F.v5848) == v813))) || ((Y_DEFI(F.v5848) == v816)))) {
{ rt_int rv5850 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5850; }
}
if ((Y_DEFI(F.v5848) == v819)) {
{ rt_int rv5852 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5852; }
}
if ((Y_DEFI(F.v5848) == v810)) {
{ rt_int rv5854 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5854; }
}
if ((Y_DEFI(F.v5848) == v807)) {
{ rt_int rv5856 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5856; }
}
if (((((Y_DEFI(F.v5848) == v822)) || ((Y_DEFI(F.v5848) == v843))) || ((Y_DEFI(F.v5848) == v846)))) {
{ rt_int rv5858 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5858; }
}
if ((Y_DEFI(F.v5848) == v825)) {
{ rt_int rv5859 = Y_DEFI(((*(yR110 *)y_deref(F.p2552))).f_cname);
y_use = F.yu; return rv5859; }
}
if ((((Y_DEFI(F.v5848) == v828)) || ((Y_DEFI(F.v5848) == v849)))) {
{ rt_int rv5861 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5861; }
}
if ((Y_DEFI(F.v5848) == v831)) {
{ rt_int rv5863 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5863; }
}
if ((Y_DEFI(F.v5848) == v834)) {
{ rt_int rv5865 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5865; }
}
if ((Y_DEFI(F.v5848) == v837)) {
{ rt_int rv5867 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5867; }
}
if ((Y_DEFI(F.v5848) == v840)) {
{ rt_int rv5869 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5869; }
}
if ((Y_DEFI(F.v5848) == v855)) {
{ rt_int rv5871 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5871; }
}
{ rt_int rv5873 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5873; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2557_DescOf(void * a_p2558) {
struct yf2559 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2558 = a_p2558;
F.v5877 = Y_UNDEF_I;
F.v5877 = Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_kind);
if (((((Y_DEFI(F.v5877) == v804)) || ((Y_DEFI(F.v5877) == v813))) || ((Y_DEFI(F.v5877) == v816)))) {
{ rt_int rv5879 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5879; }
}
if ((((Y_DEFI(F.v5877) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_nlits) >= INT64_C(256))))) {
{ rt_int rv5882 = yr1061_T(y_str("&y_d_byte256", 12));
y_use = F.yu; return rv5882; }
}
if ((Y_DEFI(F.v5877) == v819)) {
{ rt_int rv5884 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5884; }
}
if ((Y_DEFI(F.v5877) == v810)) {
{ rt_int rv5886 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5886; }
}
if ((Y_DEFI(F.v5877) == v807)) {
{ rt_int rv5888 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5888; }
}
if ((((Y_DEFI(F.v5877) == v828)) || ((Y_DEFI(F.v5877) == v849)))) {
{ rt_int rv5890 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5890; }
}
if ((Y_DEFI(F.v5877) == v834)) {
{ rt_int rv5892 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5892; }
}
if ((((Y_DEFI(F.v5877) == v822)) || ((Y_DEFI(F.v5877) == v825)))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("&", 1));
Y_FLUSH();
yr1044_ST(yr2457_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_dname)));
Y_FLUSH();
{ rt_int rv5894 = yr1056_SE();
y_use = F.yu; return rv5894; }
}
if ((Y_DEFI(F.v5877) == v846)) {
{ rt_int rv5896 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5896; }
}
if ((Y_DEFI(F.v5877) == v837)) {
{ rt_int rv5898 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5898; }
}
if ((Y_DEFI(F.v5877) == v840)) {
{ rt_int rv5900 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5900; }
}
{ rt_int rv5902 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5902; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2563_NewDesc(void * a_p2564) {
struct yf2565 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2564 = a_p2564;
((*(yR110 *)y_deref(F.p2564))).f_dname = yr1200_Fresh(y_str("yd_", 3));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2564))).f_dlevel = Y_DEFI(v1279);
Y_FLUSH();
yr2470_DeclStorage(yr1061_T(y_str("ydesc", 5)), Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_dname));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2569_SameType(void * a_p2570, void * a_p2571) {
struct yf2572 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2570 = a_p2570;
F.p2571 = a_p2571;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_tid))) {
{ rt_int rv5911 = 1;
y_use = F.yu; return rv5911; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v846)) && yr2520_IsString(F.p2571))) {
{ rt_int rv5913 = 1;
y_use = F.yu; return rv5913; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v846)) && yr2520_IsString(F.p2570))) {
{ rt_int rv5915 = 1;
y_use = F.yu; return rv5915; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v828)))) {
{ rt_int rv5917 = 1;
y_use = F.yu; return rv5917; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v828)))) {
{ rt_int rv5919 = 1;
y_use = F.yu; return rv5919; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v858)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v858)))) {
{ rt_int rv5921 = 1;
y_use = F.yu; return rv5921; }
}
{ rt_int rv5923 = 0;
y_use = F.yu; return rv5923; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2576_TypeClash(rt_int a_p2577, void * a_p2578, void * a_p2579) {
struct yf2580 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2577 = a_p2577;
F.p2578 = a_p2578;
F.p2579 = a_p2579;
F.v5929 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("type conflict: ", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2578))).f_tname));
Y_FLUSH();
yr1037_SA(y_str(" expected, ", 11));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2579))).f_tname));
Y_FLUSH();
yr1037_SA(y_str(" found", 6));
Y_FLUSH();
F.v5929 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(F.p2577, Y_DEFI(F.v5929));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2584_CheckType(rt_int a_p2585, void * a_p2586, void * a_p2587) {
struct yf2588 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2585 = a_p2585;
F.p2586 = a_p2586;
F.p2587 = a_p2587;
if ((!yr2569_SameType(F.p2586, F.p2587))) {
yr2576_TypeClash(F.p2585, F.p2586, F.p2587);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2592_CheckRepresented(void * a_p2593, rt_int a_p2594) {
struct yf2595 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2593 = a_p2593;
F.p2594 = a_p2594;
if (Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_abstract)) {
yr1186_FailN(F.p2594, Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_tname), y_str(" is a type, not a representation (VI.A.1)", 41));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2599_SigText(void * a_p2600) {
struct yf2601 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2600 = a_p2600;
F.v5944 = Y_UNDEF_I;
F.v5944 = Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_kind);
F.v5946 = Y_UNDEF_P;
F.v5948 = Y_UNDEF_P;
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_tid));
Y_FLUSH();
if (((yr2502_IsDiscrete(F.p2600) || ((Y_DEFI(F.v5944) == v810))) || ((Y_DEFI(F.v5944) == v807)))) {
yr1037_SA(y_str("[", 1));
Y_FLUSH();
if (Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_hasm)) {
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_mlo));
Y_FLUSH();
yr1037_SA(y_str("..", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_mhi));
Y_FLUSH();
} else {
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_lo));
Y_FLUSH();
yr1037_SA(y_str("..", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_hi));
Y_FLUSH();
}
yr1037_SA(y_str("]", 1));
Y_FLUSH();
if ((Y_DEFI(F.v5944) == v810)) {
yr1037_SA(y_str("P", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_prec));
Y_FLUSH();
}
if ((Y_DEFI(F.v5944) == v807)) {
yr1037_SA(y_str("S", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_fsn));
Y_FLUSH();
yr1037_SA(y_str("/", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_fsd));
Y_FLUSH();
}
} else if ((Y_DEFI(F.v5944) == v822)) {
yr1037_SA(y_str("(", 1));
Y_FLUSH();
F.v5946 = Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_idx);
Y_FLUSH();
while ((!(Y_DEFP(F.v5946) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2605_RepSig(Y_DEFP(F.v5946)));
Y_FLUSH();
yr1037_SA(y_str(",", 1));
Y_FLUSH();
F.v5946 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5946)))).f_link);
Y_FLUSH();
}
yr1037_SA(y_str("OF ", 3));
Y_FLUSH();
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v5944) == v843)) {
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str("D ", 2));
Y_FLUSH();
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v5944) == v825)) {
yr1037_SA(y_str("{", 1));
Y_FLUSH();
F.v5948 = Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v5948) == ((void *)0)))) {
Y_TICK();
if (Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5948)))).f_isconst)) {
yr1037_SA(y_str("C ", 2));
Y_FLUSH();
} else {
yr1037_SA(y_str("V ", 2));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5948)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(":", 1));
Y_FLUSH();
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5948)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v5948 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5948)))).f_next);
Y_FLUSH();
}
yr1037_SA(y_str("}", 1));
Y_FLUSH();
} else if ((((Y_DEFI(F.v5944) == v834)) || ((Y_DEFI(F.v5944) == v831)))) {
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_packed)) {
yr1037_SA(y_str(" PACKED ", 8));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_pbits));
Y_FLUSH();
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_align) == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_align));
Y_FLUSH();
}
{ rt_int rv5974 = yr1056_SE();
y_use = F.yu; return rv5974; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2605_RepSig(void * a_p2606) {
struct yf2607 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2606 = a_p2606;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2606))).f_sig) == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2606))).f_sig = yr1075_Name(yr2599_SigText(F.p2606));
Y_FLUSH();
}
{ rt_int rv5978 = Y_DEFI(((*(yR110 *)y_deref(F.p2606))).f_sig);
y_use = F.yu; return rv5978; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2611_Identical(void * a_p2612, void * a_p2613) {
struct yf2614 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2612 = a_p2612;
F.p2613 = a_p2613;
if ((F.p2612 == F.p2613)) {
{ rt_int rv5983 = 1;
y_use = F.yu; return rv5983; }
}
if ((!yr2569_SameType(F.p2612, F.p2613))) {
{ rt_int rv5985 = 0;
y_use = F.yu; return rv5985; }
}
{ rt_int rv5986 = (yr2605_RepSig(F.p2612) == yr2605_RepSig(F.p2613));
y_use = F.yu; return rv5986; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2618_IsLiteralNode(void * a_p2619) {
struct yf2620 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2619 = a_p2619;
if ((((((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v759)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v765))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v762))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v768)))) {
{ rt_int rv5989 = (Y_DEFP(((*(yR105 *)y_deref(F.p2619))).f_d) == ((void *)0));
y_use = F.yu; return rv5989; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v801)))) {
{ rt_int rv5990 = yr2618_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2619))).f_a));
y_use = F.yu; return rv5990; }
}
{ rt_int rv5992 = 0;
y_use = F.yu; return rv5992; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2624_StoreBounds(void * a_p2625, yarr a_p2627) {
struct yf2628 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2625 = a_p2625;
F.p2627 = a_p2627;
F.v5997 = Y_UNDEF_I;
F.v5999 = Y_UNDEF_I;
F.v5997 = yr1200_Fresh(y_str("lo", 2));
Y_FLUSH();
F.v5999 = yr1200_Fresh(y_str("hi", 2));
Y_FLUSH();
yr2470_DeclStorage(yr1061_T(F.p2627), Y_DEFI(F.v5997));
Y_FLUSH();
yr2470_DeclStorage(yr1061_T(F.p2627), Y_DEFI(F.v5999));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr2457_Path(Y_DEFI(v1279), Y_DEFI(F.v5997)), yr1061_T(y_str(" = ", 3)), yr3530_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2625))).f_lo), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr2457_Path(Y_DEFI(v1279), Y_DEFI(F.v5999)), yr1061_T(y_str(" = ", 3)), yr3530_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2625))).f_hi), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2625))).f_lo = Y_DEFI(F.v5997);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2625))).f_hi = Y_DEFI(F.v5999);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2625))).f_dname = Y_DEFI(F.v5997);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2625))).f_dlevel = Y_DEFI(v1279);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2632_LoText(void * a_p2633) {
struct yf2634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2633 = a_p2633;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_lo) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_kind) == v825))))) {
{ rt_int rv6012 = yr2457_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_lo));
y_use = F.yu; return rv6012; }
}
{ rt_int rv6013 = Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_lo);
y_use = F.yu; return rv6013; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2638_HiText(void * a_p2639) {
struct yf2640 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2639 = a_p2639;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_hi) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_kind) == v825))))) {
{ rt_int rv6018 = yr2457_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_hi));
y_use = F.yu; return rv6018; }
}
{ rt_int rv6019 = Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_hi);
y_use = F.yu; return rv6019; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2644_AdoptLiteral(void * a_p2645, void * a_p2646, void * a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2645 = a_p2645;
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.v6025 = Y_UNDEF_P;
if ((((!yr2618_IsLiteralNode(F.p2645)) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_kind))))) || (!yr2508_IsNumeric(F.p2647)))) {
{ void * rv6026 = F.p2646;
y_use = F.yu; return rv6026; }
}
if (yr2652_HasQualifier(F.p2645)) {
{ void * rv6027 = F.p2646;
y_use = F.yu; return rv6027; }
}
F.v6025 = yr2496_CopyRep(F.p2646);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6025)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_tid);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6025)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_tname);
Y_FLUSH();
{ void * rv6028 = Y_DEFP(F.v6025);
y_use = F.yu; return rv6028; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2652_HasQualifier(void * a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2653 = a_p2653;
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2653))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2653))).f_kind) == v801)))) {
{ rt_int rv6031 = yr2652_HasQualifier(Y_DEFP(((*(yR105 *)y_deref(F.p2653))).f_a));
y_use = F.yu; return rv6031; }
}
{ rt_int rv6032 = (!(Y_DEFP(((*(yR105 *)y_deref(F.p2653))).f_d) == ((void *)0)));
y_use = F.yu; return rv6032; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2658_Gcd(rt_int a_p2659, rt_int a_p2660) {
struct yf2661 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2659 = a_p2659;
F.p2660 = a_p2660;
F.v6037 = Y_UNDEF_I;
F.v6039 = Y_UNDEF_I;
F.v6041 = Y_UNDEF_I;
F.v6037 = F.p2659;
Y_FLUSH();
F.v6039 = F.p2660;
Y_FLUSH();
if ((Y_DEFI(F.v6037) < INT64_C(0))) {
F.v6037 = y_range(y_neg(Y_DEFI(F.v6037)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.v6039) < INT64_C(0))) {
F.v6039 = y_range(y_neg(Y_DEFI(F.v6039)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
while ((!(Y_DEFI(F.v6039) == INT64_C(0)))) {
Y_TICK();
F.v6041 = y_range(y_mod(Y_DEFI(F.v6037), Y_DEFI(F.v6039)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6037 = Y_DEFI(F.v6039);
Y_FLUSH();
F.v6039 = Y_DEFI(F.v6041);
Y_FLUSH();
}
if ((Y_DEFI(F.v6037) == INT64_C(0))) {
{ rt_int rv6050 = INT64_C(1);
y_use = F.yu; return rv6050; }
}
{ rt_int rv6051 = Y_DEFI(F.v6037);
y_use = F.yu; return rv6051; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2665_MulChk(rt_int a_p2666, rt_int a_p2667, rt_int a_p2668) {
struct yf2669 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2666 = a_p2666;
F.p2667 = a_p2667;
F.p2668 = a_p2668;
F.v6057 = Y_UNDEF_I;
F.v6059 = Y_UNDEF_I;
F.v6057 = F.p2666;
Y_FLUSH();
F.v6059 = F.p2667;
Y_FLUSH();
if ((Y_DEFI(F.v6057) < INT64_C(0))) {
F.v6057 = y_range(y_neg(Y_DEFI(F.v6057)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.v6059) < INT64_C(0))) {
F.v6059 = y_range(y_neg(Y_DEFI(F.v6059)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((((!(Y_DEFI(F.v6057) == INT64_C(0)))) && ((Y_DEFI(F.v6059) > (y_div(v906, Y_DEFI(F.v6057))))))) {
yr1178_FailS(F.p2668, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
Y_FLUSH();
}
{ rt_int rv6068 = y_range(y_mul(F.p2666, F.p2667), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6068; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2673_PowChk(rt_int a_p2674, rt_int a_p2675, rt_int a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2674 = a_p2674;
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.v6074 = Y_UNDEF_I;
F.v6074 = INT64_C(1);
F.lo6079 = INT64_C(1);
F.hi6080 = F.p2675;
{ rt_int hi6084 = F.hi6080;
for (rt_int i6083 = F.lo6079; i6083 <= hi6084; i6083++) { F.c_6082 = i6083; Y_TICK();
F.v6074 = yr2665_MulChk(Y_DEFI(F.v6074), F.p2674, F.p2676);
Y_FLUSH();
if (i6083 == hi6084) break;
}}
{ rt_int rv6085 = Y_DEFI(F.v6074);
y_use = F.yu; return rv6085; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2681_ScaleRatio(void * a_p2682, void * a_p2683, rt_int * a_p2684, rt_int * a_p2685, rt_int * a_p2686) {
struct yf2687 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2682 = a_p2682;
F.p2683 = a_p2683;
F.p2684_o = a_p2684;
F.p2685_o = a_p2685;
F.p2686_o = a_p2686;
F.v6093 = Y_UNDEF_I;
F.v6095 = Y_UNDEF_I;
F.v6097 = Y_UNDEF_I;
F.v6099 = Y_UNDEF_I;
F.v6101 = Y_UNDEF_I;
F.v6103 = Y_UNDEF_I;
F.p2684 = yr1061_T(y_str("1", 1));
Y_FLUSH();
F.p2685 = yr1061_T(y_str("1", 1));
Y_FLUSH();
F.p2686 = 1;
Y_FLUSH();
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsd) == INT64_C(0))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsd) == INT64_C(0))))) {
(*F.p2684_o) = F.p2684;
(*F.p2685_o) = F.p2685;
(*F.p2686_o) = F.p2686;
y_use = F.yu; return;
}
F.v6093 = yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsn));
Y_FLUSH();
F.v6095 = yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsd));
Y_FLUSH();
F.v6097 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsn), Y_DEFI(F.v6093)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6099 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsd), Y_DEFI(F.v6095)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6101 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsd), Y_DEFI(F.v6095)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6103 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsn), Y_DEFI(F.v6093)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.p2686 = (((((Y_DEFI(F.v6097) == INT64_C(1))) && ((Y_DEFI(F.v6099) == INT64_C(1)))) && ((Y_DEFI(F.v6101) == INT64_C(1)))) && ((Y_DEFI(F.v6103) == INT64_C(1))));
Y_FLUSH();
F.p2684 = yr2691_Factor(Y_DEFI(F.v6097), Y_DEFI(F.v6099));
Y_FLUSH();
F.p2685 = yr2691_Factor(Y_DEFI(F.v6101), Y_DEFI(F.v6103));
Y_FLUSH();
(*F.p2684_o) = F.p2684;
(*F.p2685_o) = F.p2685;
(*F.p2686_o) = F.p2686;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2691_Factor(rt_int a_p2692, rt_int a_p2693) {
struct yf2694 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2692 = a_p2692;
F.p2693 = a_p2693;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
Y_FLUSH();
yr1050_SI(F.p2692);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
if ((!(F.p2693 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
Y_FLUSH();
yr1050_SI(F.p2693);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
}
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv6126 = yr1056_SE();
y_use = F.yu; return rv6126; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2698_SetScale(void * a_p2699, rt_int a_p2700, rt_int a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2699 = a_p2699;
F.p2700 = a_p2700;
F.p2701 = a_p2701;
F.v6132 = Y_UNDEF_I;
F.v6132 = yr2658_Gcd(F.p2700, F.p2701);
((*(yR110 *)y_deref(F.p2699))).f_fsn = y_range(y_div(F.p2700, Y_DEFI(F.v6132)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2699))).f_fsd = y_range(y_div(F.p2701, Y_DEFI(F.v6132)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2699))).f_fsd) < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2699))).f_fsn = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2699))).f_fsn)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2699))).f_fsd = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2699))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2706_Qualify(void * a_p2707, void * a_p2708) {
struct yf2709 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2707 = a_p2707;
F.p2708 = a_p2708;
F.v6142 = Y_UNDEF_I;
F.v6144 = Y_UNDEF_I;
F.v6146 = Y_UNDEF_I;
F.v6148 = Y_UNDEF_I;
F.v6150 = Y_UNDEF_P;
F.v6152 = Y_UNDEF_P;
F.v6154 = Y_UNDEF_I;
F.v6156 = Y_UNDEF_I;
F.v6158 = Y_UNDEF_I;
F.v6160 = Y_UNDEF_I;
F.v6162 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind) == v807)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_c) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("FIXED needs SCALE (VI.A.1.b)", 28));
Y_FLUSH();
}
yr3025_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_c), &F.v6154, &F.v6160, &F.v6162);
Y_FLUSH();
if (((!Y_DEFI(F.v6154)) || ((Y_DEFI(F.v6160) <= INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
Y_FLUSH();
}
((*(yR110 *)y_deref(F.p2707))).f_fsn = Y_DEFI(F.v6160);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_fsd = Y_DEFI(F.v6162);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6160));
Y_FLUSH();
yr1037_SA(y_str("/", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6162));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_scale = yr1056_SE();
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a), F.p2707, &F.v6142, &F.v6150);
Y_FLUSH();
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b), F.p2707, &F.v6144, &F.v6152);
Y_FLUSH();
F.v6150 = yr2644_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a), Y_DEFP(F.v6150), F.p2707);
Y_FLUSH();
F.v6152 = yr2644_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b), Y_DEFP(F.v6152), F.p2707);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind) == v807)) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6150));
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6152));
Y_FLUSH();
yr2681_ScaleRatio(Y_DEFP(F.v6150), F.p2707, &F.v6146, &F.v6148, &F.v6156);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_lo = yr3530_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6142), yr3530_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6146), yr3530_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6148), yr1061_T(y_str(", 1)", 4)))));
Y_FLUSH();
yr2681_ScaleRatio(Y_DEFP(F.v6152), F.p2707, &F.v6146, &F.v6148, &F.v6156);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_hi = yr3530_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6144), yr3530_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6146), yr3530_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6148), yr1061_T(y_str(", 0)", 4)))));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_dname = INT64_C(0);
Y_FLUSH();
yr2624_StoreBounds(F.p2707, y_str("yfix", 4));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_abstract = 0;
Y_FLUSH();
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind) == v810)) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6150));
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6152));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_lo = Y_DEFI(F.v6142);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_hi = Y_DEFI(F.v6144);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_dname = INT64_C(0);
Y_FLUSH();
if ((!((yr2618_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a)) && yr2618_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b)))))) {
yr2624_StoreBounds(F.p2707, y_str("double", 6));
Y_FLUSH();
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
Y_FLUSH();
}
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_d), &F.v6154, &F.v6158);
Y_FLUSH();
if ((!Y_DEFI(F.v6154))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("PRECISION is a manifest constant", 32));
Y_FLUSH();
}
if ((((Y_DEFI(F.v6158) < INT64_C(1))) || ((Y_DEFI(F.v6158) > INT64_C(15))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6158));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_prec = yr1056_SE();
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_abstract = 0;
Y_FLUSH();
y_use = F.yu; return;
}
if ((!yr2502_IsDiscrete(F.p2707))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("only a scalar or integer representation takes a range", 53));
Y_FLUSH();
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_d) == ((void *)0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("SCALE and PRECISION qualify numbers", 35));
Y_FLUSH();
}
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6150));
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6152));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_lo = Y_DEFI(F.v6142);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_hi = Y_DEFI(F.v6144);
Y_FLUSH();
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a), &F.v6154, &((*(yR110 *)y_deref(F.p2707))).f_mlo);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_hasm = Y_DEFI(F.v6154);
Y_FLUSH();
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b), &F.v6154, &((*(yR110 *)y_deref(F.p2707))).f_mhi);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_hasm = (Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_hasm) && Y_DEFI(F.v6154));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_abstract = 0;
Y_FLUSH();
((*(yR110 *)y_deref(F.p2707))).f_dname = INT64_C(0);
Y_FLUSH();
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_hasm))) {
yr2624_StoreBounds(F.p2707, y_str("rt_int", 6));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2713_DefineLits(void * a_p2714) {
struct yf2715 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2714 = a_p2714;
F.v6194 = Y_UNDEF_P;
F.v6194 = Y_DEFP(((*(yR110 *)y_deref(F.p2714))).f_lits);
F.v6196 = Y_UNDEF_P;
F.v6198 = Y_UNDEF_I;
F.v6198 = INT64_C(0);
while ((!(Y_DEFP(F.v6194) == ((void *)0)))) {
Y_TICK();
if ((!(yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_name)) == ((void *)0)))) {
F.v6196 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_name));
Y_FLUSH();
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6196)))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6196)))).f_depth) == Y_DEFI(v1273))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_name), y_str(" is declared twice in this scope", 32));
Y_FLUSH();
}
}
F.v6196 = yr2348_NewSym(v873, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v6196)))).f_rep = F.p2714;
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v6196)))).f_mval = Y_DEFI(F.v6198);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v6196)))).f_hasmv = 1;
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v6196), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_line));
Y_FLUSH();
F.v6198 = y_range(y_add(Y_DEFI(F.v6198), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6194 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6194)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2719_SetRange(void * a_p2720, rt_int a_p2721, rt_int a_p2722) {
struct yf2723 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2720 = a_p2720;
F.p2721 = a_p2721;
F.p2722 = a_p2722;
yr1026_SB();
Y_FLUSH();
yr1050_SI(F.p2721);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2720))).f_lo = yr1056_SE();
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1050_SI(F.p2722);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2720))).f_hi = yr1056_SE();
Y_FLUSH();
((*(yR110 *)y_deref(F.p2720))).f_mlo = F.p2721;
Y_FLUSH();
((*(yR110 *)y_deref(F.p2720))).f_mhi = F.p2722;
Y_FLUSH();
((*(yR110 *)y_deref(F.p2720))).f_hasm = 1;
Y_FLUSH();
((*(yR110 *)y_deref(F.p2720))).f_dname = INT64_C(0);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2727_NewTid(rt_int a_p2728) {
struct yf2729 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2728 = a_p2728;
F.v6213 = Y_UNDEF_I;
F.v6213 = yr1195_NewSerial();
yr1026_SB();
Y_FLUSH();
if ((!(F.p2728 == INT64_C(0)))) {
yr1044_ST(F.p2728);
Y_FLUSH();
} else {
yr1037_SA(y_str("anonymous", 9));
Y_FLUSH();
}
yr1037_SA(y_str("#", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6213));
Y_FLUSH();
{ rt_int rv6217 = yr1056_SE();
y_use = F.yu; return rv6217; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2733_MakeRep(void * a_p2734, rt_int a_p2735, rt_int a_p2736) {
struct yf2737 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2734 = a_p2734;
F.p2735 = a_p2735;
F.p2736 = a_p2736;
F.v6223 = Y_UNDEF_P;
F.v6223 = yr2748_MakeRep1(F.p2734, F.p2735, F.p2736);
F.v6225 = Y_UNDEF_P;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2734))).f_x) == ((void *)0)))) {
F.v6223 = yr2887_ApplyStorage(Y_DEFP(F.v6223), Y_DEFP(((*(yR105 *)y_deref(F.p2734))).f_x));
Y_FLUSH();
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_text) == INT64_C(0)))) {
F.v6225 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_line)));
Y_FLUSH();
if (((!yr2741_Conforms(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6225)))).f_rep), Y_DEFP(F.v6223))) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_kind) == v672)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6223)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6225)))).f_rep)))).f_tid)))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6225)))).f_rep)))).f_tname), y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
Y_FLUSH();
}
}
{ void * rv6228 = Y_DEFP(F.v6223);
y_use = F.yu; return rv6228; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2741_Conforms(void * a_p2742, void * a_p2743) {
struct yf2744 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2742 = a_p2742;
F.p2743 = a_p2743;
F.v6233 = Y_UNDEF_P;
F.v6235 = Y_UNDEF_P;
F.v6237 = Y_UNDEF_P;
F.v6239 = Y_UNDEF_P;
F.v6241 = Y_UNDEF_P;
F.v6243 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2743))).f_kind)))) {
{ rt_int rv6245 = 0;
y_use = F.yu; return rv6245; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v825)) {
F.v6233 = Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_fields);
Y_FLUSH();
F.v6235 = Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_fields);
Y_FLUSH();
while ((((!(Y_DEFP(F.v6233) == ((void *)0)))) && ((!(Y_DEFP(F.v6235) == ((void *)0)))))) {
Y_TICK();
if (((((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6233)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6235)))).f_name)))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6233)))).f_isconst) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6235)))).f_isconst))))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6233)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6235)))).f_variant)))))) {
{ rt_int rv6247 = 0;
y_use = F.yu; return rv6247; }
}
if ((!yr2569_SameType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6233)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6235)))).f_rep)))) {
{ rt_int rv6249 = 0;
y_use = F.yu; return rv6249; }
}
F.v6233 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6233)))).f_next);
Y_FLUSH();
F.v6235 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6235)))).f_next);
Y_FLUSH();
}
{ rt_int rv6250 = (((Y_DEFP(F.v6233) == ((void *)0))) && ((Y_DEFP(F.v6235) == ((void *)0))));
y_use = F.yu; return rv6250; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v822)) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p2743))).f_nidx)))) {
{ rt_int rv6252 = 0;
y_use = F.yu; return rv6252; }
}
F.v6237 = Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_idx);
Y_FLUSH();
F.v6239 = Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_idx);
Y_FLUSH();
while ((!(Y_DEFP(F.v6237) == ((void *)0)))) {
Y_TICK();
if ((!yr2611_Identical(Y_DEFP(F.v6237), Y_DEFP(F.v6239)))) {
{ rt_int rv6254 = 0;
y_use = F.yu; return rv6254; }
}
F.v6237 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6237)))).f_link);
Y_FLUSH();
F.v6239 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6239)))).f_link);
Y_FLUSH();
}
{ rt_int rv6255 = yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_elem));
y_use = F.yu; return rv6255; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v816)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v819)))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_nlits) == Y_DEFI(((*(yR110 *)y_deref(F.p2743))).f_nlits)))) {
{ rt_int rv6257 = 0;
y_use = F.yu; return rv6257; }
}
F.v6241 = Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_lits);
Y_FLUSH();
F.v6243 = Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_lits);
Y_FLUSH();
while ((((!(Y_DEFP(F.v6241) == ((void *)0)))) && ((!(Y_DEFP(F.v6243) == ((void *)0)))))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6241)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6243)))).f_name)))) || (!yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6241)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6243)))).f_text))))) {
{ rt_int rv6259 = 0;
y_use = F.yu; return rv6259; }
}
F.v6241 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6241)))).f_next);
Y_FLUSH();
F.v6243 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6243)))).f_next);
Y_FLUSH();
}
{ rt_int rv6261 = 1;
y_use = F.yu; return rv6261; }
}
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v834)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v831))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v828)))) {
if ((((Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_elem) == ((void *)0))) || ((Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_elem) == ((void *)0))))) {
{ rt_int rv6263 = 1;
y_use = F.yu; return rv6263; }
}
{ rt_int rv6264 = yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_elem));
y_use = F.yu; return rv6264; }
}
{ rt_int rv6266 = 1;
y_use = F.yu; return rv6266; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2748_MakeRep1(void * a_p2749, rt_int a_p2750, rt_int a_p2751) {
struct yf2752 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2749 = a_p2749;
F.p2750 = a_p2750;
F.p2751 = a_p2751;
F.v6272 = Y_UNDEF_P;
F.v6274 = Y_UNDEF_P;
F.v6276 = Y_UNDEF_P;
F.v6278 = Y_UNDEF_P;
F.v6280 = Y_UNDEF_P;
F.v6282 = Y_UNDEF_I;
F.v6282 = Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_kind);
F.v6284 = Y_UNDEF_P;
F.v6286 = Y_UNDEF_I;
F.v6288 = Y_UNDEF_I;
F.v6286 = INT64_C(0);
Y_FLUSH();
F.v6288 = F.p2750;
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_text) == INT64_C(0)))) {
F.v6280 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line)));
Y_FLUSH();
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_text), y_str(" is not a type", 14));
Y_FLUSH();
}
F.v6286 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_rep)))).f_tid);
Y_FLUSH();
F.v6288 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_rep)))).f_tname);
Y_FLUSH();
}
if ((Y_DEFI(F.v6282) == v672)) {
F.v6280 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line)));
Y_FLUSH();
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_name), y_str(" is not a representation", 24));
Y_FLUSH();
}
F.v6272 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6280)))).f_rep);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a) == ((void *)0)))) {
F.v6272 = yr2496_CopyRep(Y_DEFP(F.v6272));
Y_FLUSH();
yr2706_Qualify(Y_DEFP(F.v6272), Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a));
Y_FLUSH();
}
{ void * rv6293 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6293; }
}
if ((Y_DEFI(F.v6286) == INT64_C(0))) {
F.v6286 = yr2727_NewTid(F.p2750);
Y_FLUSH();
if ((Y_DEFI(F.v6288) == INT64_C(0))) {
F.v6288 = Y_DEFI(F.v6286);
Y_FLUSH();
}
}
if ((Y_DEFI(F.v6282) == v675)) {
F.v6272 = yr2489_NewRep(v816, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_ordered = (Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_flag) == INT64_C(1));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nlits = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a));
Y_FLUSH();
yr2719_SetRange(Y_DEFP(F.v6272), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr2713_DefineLits(Y_DEFP(F.v6272));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b) == ((void *)0)))) {
yr2706_Qualify(Y_DEFP(F.v6272), Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b));
Y_FLUSH();
}
{ void * rv6300 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6300; }
}
if ((Y_DEFI(F.v6282) == v678)) {
F.v6272 = yr2489_NewRep(v819, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_ordered = 1;
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nlits = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nlits) > INT64_C(256))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("this implementation takes alphabets of up to 256 characters", 59));
Y_FLUSH();
}
yr2719_SetRange(Y_DEFP(F.v6272), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b) == ((void *)0)))) {
yr2706_Qualify(Y_DEFP(F.v6272), Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b));
Y_FLUSH();
}
{ void * rv6307 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6307; }
}
if ((Y_DEFI(F.v6282) == v681)) {
F.v6272 = yr2489_NewRep(v822, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
F.v6284 = Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a);
Y_FLUSH();
F.v6278 = ((void *)0);
Y_FLUSH();
while ((!(Y_DEFP(F.v6284) == ((void *)0)))) {
Y_TICK();
F.v6276 = yr2496_CopyRep(yr2733_MakeRep(Y_DEFP(F.v6284), INT64_C(0), 0));
Y_FLUSH();
if ((!yr2502_IsDiscrete(Y_DEFP(F.v6276)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_line), y_str("an index is an integer or scalar representation", 47));
Y_FLUSH();
}
yr2592_CheckRepresented(Y_DEFP(F.v6276), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_line));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6276)))).f_link = ((void *)0);
Y_FLUSH();
if ((Y_DEFP(F.v6278) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_idx = Y_DEFP(F.v6276);
Y_FLUSH();
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6278)))).f_link = Y_DEFP(F.v6276);
Y_FLUSH();
}
F.v6278 = Y_DEFP(F.v6276);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nidx = y_range(y_add(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nidx), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6284 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_next);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_nidx) > INT64_C(8))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("this implementation takes arrays of up to 8 dimensions", 54));
Y_FLUSH();
}
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b), INT64_C(0), F.p2751);
Y_FLUSH();
if ((!F.p2751)) {
yr2592_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line));
Y_FLUSH();
yr2768_BuildArrayDesc(Y_DEFP(F.v6272));
Y_FLUSH();
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_abstract = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem)))).f_abstract);
Y_FLUSH();
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_abstract))) {
yr2768_BuildArrayDesc(Y_DEFP(F.v6272));
Y_FLUSH();
}
}
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_deep = 1;
Y_FLUSH();
{ void * rv6317 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6317; }
}
if ((Y_DEFI(F.v6282) == v684)) {
F.v6272 = yr2489_NewRep(v825, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
yr2798_MakeRecord(Y_DEFP(F.v6272), F.p2749, F.p2751);
Y_FLUSH();
{ void * rv6318 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6318; }
}
if (((((Y_DEFI(F.v6282) == v690)) || ((Y_DEFI(F.v6282) == v687))) || ((Y_DEFI(F.v6282) == v693)))) {
if ((Y_DEFI(F.v6282) == v690)) {
F.v6272 = yr2489_NewRep(v828, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_kind) == v672)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_a) == ((void *)0)))) && ((yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_name)) == ((void *)0))))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_forward = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_name);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_fwdscope = Y_DEFI(v1273);
Y_FLUSH();
F.v6284 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_rep = Y_DEFP(F.v6272);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v6284)))).f_next = Y_DEFP(v1364);
Y_FLUSH();
v1364 = Y_DEFP(F.v6284);
Y_FLUSH();
{ void * rv6319 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6319; }
}
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a), INT64_C(0), 0);
Y_FLUSH();
{ void * rv6322 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6322; }
}
if ((Y_DEFI(F.v6282) == v687)) {
F.v6272 = yr2489_NewRep(v831, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a), INT64_C(0), F.p2751);
Y_FLUSH();
{ void * rv6324 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6324; }
}
F.v6272 = yr2489_NewRep(v834, Y_DEFI(F.v6286));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_tname = Y_DEFI(F.v6288);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a), INT64_C(0), 0);
Y_FLUSH();
if ((!yr2502_IsDiscrete(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("a set is of an integer or scalar representation", 47));
Y_FLUSH();
}
yr2592_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6272)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line));
Y_FLUSH();
{ void * rv6328 = Y_DEFP(F.v6272);
y_use = F.yu; return rv6328; }
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("this representation is not translated", 37));
Y_FLUSH();
{ void * rv6330 = ((void *)0);
y_use = F.yu; return rv6330; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2756_ResolvePending(rt_int a_p2757, void * a_p2758) {
struct yf2759 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2757 = a_p2757;
F.p2758 = a_p2758;
F.v6335 = Y_UNDEF_P;
F.v6335 = Y_DEFP(v1364);
F.v6337 = Y_UNDEF_P;
F.v6337 = ((void *)0);
while ((!(Y_DEFP(F.v6335) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6335)))).f_rep)))).f_forward) == F.p2757)) {
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6335)))).f_rep)))).f_elem = F.p2758;
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6335)))).f_rep)))).f_forward = INT64_C(0);
Y_FLUSH();
if ((Y_DEFP(F.v6337) == ((void *)0))) {
v1364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6335)))).f_next);
Y_FLUSH();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v6337)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6335)))).f_next);
Y_FLUSH();
}
} else {
F.v6337 = Y_DEFP(F.v6335);
Y_FLUSH();
}
F.v6335 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6335)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2763_CheckPending(void) {
struct yf2764 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v6341 = Y_UNDEF_P;
F.v6341 = Y_DEFP(v1364);
while ((!(Y_DEFP(F.v6341) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6341)))).f_rep)))).f_fwdscope) >= Y_DEFI(v1273))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6341)))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6341)))).f_rep)))).f_forward), y_str(" is named by a pointer but not declared", 39));
Y_FLUSH();
}
F.v6341 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6341)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2768_BuildArrayDesc(void * a_p2769) {
struct yf2770 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2769 = a_p2769;
F.v6346 = Y_UNDEF_P;
F.v6348 = Y_UNDEF_I;
F.v6350 = Y_UNDEF_I;
yr2563_NewDesc(F.p2769);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("{ rt_int lo[", 12));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2769))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str("] = {", 5));
Y_FLUSH();
F.v6346 = Y_DEFP(((*(yR110 *)y_deref(F.p2769))).f_idx);
Y_FLUSH();
F.v6350 = 1;
Y_FLUSH();
while ((!(Y_DEFP(F.v6346) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6350))) {
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
F.v6350 = 0;
Y_FLUSH();
yr1044_ST(yr2632_LoText(Y_DEFP(F.v6346)));
Y_FLUSH();
F.v6346 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6346)))).f_link);
Y_FLUSH();
}
yr1037_SA(y_str("}, hi[", 6));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2769))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str("] = {", 5));
Y_FLUSH();
F.v6346 = Y_DEFP(((*(yR110 *)y_deref(F.p2769))).f_idx);
Y_FLUSH();
F.v6350 = 1;
Y_FLUSH();
while ((!(Y_DEFP(F.v6346) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6350))) {
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
F.v6350 = 0;
Y_FLUSH();
yr1044_ST(yr2638_HiText(Y_DEFP(F.v6346)));
Y_FLUSH();
F.v6346 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6346)))).f_link);
Y_FLUSH();
}
yr1037_SA(y_str("}; y_desc_array(", 16));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(F.p2769));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2769))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str(", lo, hi, ", 10));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2769))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str("); }", 4));
Y_FLUSH();
F.v6348 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v6348));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2774_AddField(void * a_p2775, void * * a_p2776, rt_int a_p2777, void * a_p2778, rt_int a_p2779, rt_int a_p2780, void * a_p2781, rt_int a_p2782) {
struct yf2783 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2775 = a_p2775;
F.p2776 = a_p2776;
F.p2777 = a_p2777;
F.p2778 = a_p2778;
F.p2779 = a_p2779;
F.p2780 = a_p2780;
F.p2781 = a_p2781;
F.p2782 = a_p2782;
F.v6375 = Y_UNDEF_P;
F.v6375 = Y_DEFP(((*(yR110 *)y_deref(F.p2775))).f_fields);
while ((!(Y_DEFP(F.v6375) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6375)))).f_name) == F.p2777)) {
yr1186_FailN(F.p2782, F.p2777, y_str(" is a component twice", 21));
Y_FLUSH();
}
F.v6375 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6375)))).f_next);
Y_FLUSH();
}
({ F.v6375 = y_new_l(sizeof(yR115), "r0,0,7,-1(-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;)", &yd_116); y_initu(&yd_116, y_deref(F.v6375)); });
Y_FLUSH();
(*(yR115 *)y_deref(Y_DEFP(F.v6375))) = ((yR115){ .f_name = F.p2777, .f_rep = F.p2778, .f_isconst = F.p2779, .f_variant = F.p2780, .f_labels = F.p2781, .f_next = ((void *)0), .f_at = INT64_C(-1) });
Y_FLUSH();
if ((Y_DEFP((*F.p2776)) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2775))).f_fields = Y_DEFP(F.v6375);
Y_FLUSH();
} else {
((*(yR115 *)y_deref(Y_DEFP((*F.p2776))))).f_next = Y_DEFP(F.v6375);
Y_FLUSH();
}
(*F.p2776) = Y_DEFP(F.v6375);
Y_FLUSH();
if (yr2526_Deep(F.p2778)) {
((*(yR110 *)y_deref(F.p2775))).f_deep = 1;
Y_FLUSH();
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2778))).f_abstract)) {
((*(yR110 *)y_deref(F.p2775))).f_abstract = 1;
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2787_AddFields(void * a_p2788, void * * a_p2789, void * a_p2790, rt_int a_p2791, void * a_p2792, rt_int a_p2793) {
struct yf2794 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2788 = a_p2788;
F.p2789 = a_p2789;
F.p2790 = a_p2790;
F.p2791 = a_p2791;
F.p2792 = a_p2792;
F.p2793 = a_p2793;
F.v6388 = Y_UNDEF_P;
F.v6388 = F.p2790;
F.v6390 = Y_UNDEF_P;
F.v6390 = F.p2790;
F.v6392 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v6388) == ((void *)0)))) {
Y_TICK();
F.v6392 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6388)))).f_b), INT64_C(0), F.p2793);
Y_FLUSH();
if ((!F.p2793)) {
yr2592_CheckRepresented(Y_DEFP(F.v6392), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6388)))).f_line));
Y_FLUSH();
}
F.v6390 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6388)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v6390) == ((void *)0)))) {
Y_TICK();
yr2774_AddField(F.p2788, &(*F.p2789), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6390)))).f_name), Y_DEFP(F.v6392), (Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6388)))).f_ival) == v270), F.p2791, F.p2792, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6390)))).f_line));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6390)))).f_a) == ((void *)0)))) {
((*(yR115 *)y_deref(Y_DEFP((*F.p2789))))).f_at = yr2894_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6390)))).f_a));
Y_FLUSH();
}
F.v6390 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6390)))).f_next);
Y_FLUSH();
}
F.v6388 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6388)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2798_MakeRecord(void * a_p2799, void * a_p2800, rt_int a_p2801) {
struct yf2802 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2799 = a_p2799;
F.p2800 = a_p2800;
F.p2801 = a_p2801;
F.v6399 = Y_UNDEF_P;
F.v6399 = ((void *)0);
F.v6401 = Y_UNDEF_P;
F.v6403 = Y_UNDEF_P;
F.v6405 = Y_UNDEF_P;
F.v6407 = Y_UNDEF_I;
F.v6407 = INT64_C(0);
F.v6410 = Y_UNDEF_P;
F.v6412 = Y_UNDEF_I;
F.v6414 = Y_UNDEF_I;
F.v6414 = INT64_C(0);
yr2787_AddFields(F.p2799, &F.v6399, Y_DEFP(((*(yR105 *)y_deref(F.p2800))).f_a), INT64_C(0), ((void *)0), F.p2801);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2800))).f_b) == ((void *)0)))) {
F.v6401 = Y_DEFP(((*(yR105 *)y_deref(F.p2800))).f_b);
Y_FLUSH();
F.v6405 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6401)))).f_b), INT64_C(0), 0);
Y_FLUSH();
if ((!yr2502_IsDiscrete(Y_DEFP(F.v6405)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6401)))).f_line), y_str("the case-selection component is integer or scalar", 49));
Y_FLUSH();
}
yr2774_AddField(F.p2799, &F.v6399, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6401)))).f_name), Y_DEFP(F.v6405), 1, INT64_C(0), ((void *)0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6401)))).f_line));
Y_FLUSH();
((*(yR110 *)y_deref(F.p2799))).f_selector = Y_DEFP(F.v6399);
Y_FLUSH();
F.v6403 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6401)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v6403) == ((void *)0)))) {
Y_TICK();
F.v6407 = y_range(y_add(Y_DEFI(F.v6407), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr2787_AddFields(F.p2799, &F.v6399, Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6403)))).f_b), Y_DEFI(F.v6407), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6403)))).f_a), F.p2801);
Y_FLUSH();
F.v6403 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6403)))).f_next);
Y_FLUSH();
}
}
if ((F.p2801 && Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_abstract))) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2799))).f_abstract = 0;
Y_FLUSH();
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p2800))).f_line);
Y_FLUSH();
F.v6407 = yr2833_RecordBits(F.p2799, 0, 1);
Y_FLUSH();
F.v6407 = INT64_C(0);
Y_FLUSH();
((*(yR110 *)y_deref(F.p2799))).f_cname = yr1200_Fresh(y_str("yR", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("typedef struct ", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v6412 = yr1056_SE();
Y_FLUSH();
yr1110_Put(&v978, Y_DEFI(F.v6412));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("struct ", 7));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(" {", 2));
Y_FLUSH();
F.v6410 = Y_DEFP(((*(yR110 *)y_deref(F.p2799))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v6410) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(" f_", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v6414 = y_range(y_add(Y_DEFI(F.v6414), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6410 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_next);
Y_FLUSH();
}
if ((Y_DEFI(F.v6414) == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
Y_FLUSH();
}
yr1037_SA(y_str(" };", 3));
Y_FLUSH();
F.v6412 = yr1056_SE();
Y_FLUSH();
yr1110_Put(&v980, Y_DEFI(F.v6412));
Y_FLUSH();
yr2563_NewDesc(F.p2799);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
Y_FLUSH();
F.v6410 = Y_DEFP(((*(yR110 *)y_deref(F.p2799))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v6410) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(", f_", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_name));
Y_FLUSH();
yr1037_SA(y_str("), ", 3));
Y_FLUSH();
F.v6410 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_next);
Y_FLUSH();
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
Y_FLUSH();
yr1050_SI(y_range(y_add(Y_DEFI(F.v6414), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr1037_SA(y_str(" * sizeof *f);", 14));
Y_FLUSH();
F.v6407 = INT64_C(0);
Y_FLUSH();
F.v6410 = Y_DEFP(((*(yR110 *)y_deref(F.p2799))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v6410) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6407));
Y_FLUSH();
yr1037_SA(y_str("] = ", 4));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v6407 = y_range(y_add(Y_DEFI(F.v6407), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6410 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6410)))).f_next);
Y_FLUSH();
}
yr1037_SA(y_str(" y_desc_record(", 15));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(F.p2799));
Y_FLUSH();
yr1037_SA(y_str(", sizeof(", 9));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("), ", 3));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6414));
Y_FLUSH();
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
Y_FLUSH();
F.v6412 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v6412));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2806_FindField(void * a_p2807, rt_int a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2807 = a_p2807;
F.p2808 = a_p2808;
F.v6464 = Y_UNDEF_P;
F.v6464 = Y_DEFP(((*(yR110 *)y_deref(F.p2807))).f_fields);
while ((!(Y_DEFP(F.v6464) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6464)))).f_name) == F.p2808)) {
{ void * rv6465 = Y_DEFP(F.v6464);
y_use = F.yu; return rv6465; }
}
F.v6464 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6464)))).f_next);
Y_FLUSH();
}
{ void * rv6466 = ((void *)0);
y_use = F.yu; return rv6466; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2813_BitsFor(rt_int a_p2814) {
struct yf2815 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2814 = a_p2814;
F.v6470 = Y_UNDEF_I;
F.v6470 = INT64_C(1);
F.v6473 = Y_UNDEF_I;
F.v6473 = INT64_C(2);
while ((((Y_DEFI(F.v6473) <= F.p2814)) && ((Y_DEFI(F.v6470) < INT64_C(63))))) {
Y_TICK();
F.v6470 = y_range(y_add(Y_DEFI(F.v6470), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6473 = y_range(y_mul(Y_DEFI(F.v6473), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
{ rt_int rv6480 = Y_DEFI(F.v6470);
y_use = F.yu; return rv6480; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2819_RoundUp(rt_int a_p2820, rt_int a_p2821) {
struct yf2822 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2820 = a_p2820;
F.p2821 = a_p2821;
if ((F.p2821 <= INT64_C(1))) {
{ rt_int rv6485 = F.p2820;
y_use = F.yu; return rv6485; }
}
{ rt_int rv6491 = y_range(y_mul((y_div((y_sub((y_add(F.p2820, F.p2821)), INT64_C(1))), F.p2821)), F.p2821), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6491; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2826_Bits(void * a_p2827, rt_int a_p2828) {
struct yf2829 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2827 = a_p2827;
F.p2828 = a_p2828;
F.v6496 = Y_UNDEF_I;
F.v6496 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_kind);
F.v6498 = Y_UNDEF_I;
F.v6498 = (F.p2828 || Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_packed));
F.v6500 = Y_UNDEF_I;
F.v6502 = Y_UNDEF_I;
F.v6504 = Y_UNDEF_I;
F.v6506 = Y_UNDEF_I;
F.v6508 = Y_UNDEF_P;
if (((!Y_DEFI(F.v6498)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_bits) == INT64_C(0)))))) {
{ rt_int rv6510 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_bits);
y_use = F.yu; return rv6510; }
}
F.v6500 = INT64_C(64);
Y_FLUSH();
if (yr2502_IsDiscrete(F.p2827)) {
if (Y_DEFI(F.v6498)) {
if (((((Y_DEFI(F.v6496) == v816)) || ((Y_DEFI(F.v6496) == v819))) || ((Y_DEFI(F.v6496) == v813)))) {
F.v6500 = yr2813_BitsFor(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
} else if (Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_hasm)) {
F.v6504 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_mlo);
Y_FLUSH();
F.v6506 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_mhi);
Y_FLUSH();
if ((Y_DEFI(F.v6504) >= INT64_C(0))) {
F.v6500 = yr2813_BitsFor(Y_DEFI(F.v6506));
Y_FLUSH();
} else if (((y_sub(INT64_C(-1), Y_DEFI(F.v6504))) > Y_DEFI(F.v6506))) {
F.v6500 = y_range(y_add(INT64_C(1), yr2813_BitsFor(y_range(y_sub(INT64_C(-1), Y_DEFI(F.v6504)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else {
F.v6500 = y_range(y_add(INT64_C(1), yr2813_BitsFor(Y_DEFI(F.v6506))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
}
}
} else if ((Y_DEFI(F.v6496) == v807)) {
F.v6500 = INT64_C(128);
Y_FLUSH();
} else if ((((Y_DEFI(F.v6496) == v828)) || ((Y_DEFI(F.v6496) == v849)))) {
if (Y_DEFI(F.v6498)) {
F.v6500 = INT64_C(24);
Y_FLUSH();
}
} else if ((Y_DEFI(F.v6496) == v834)) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_hasm)) {
F.v6502 = y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((Y_DEFI(F.v6502) > (y_div(v906, INT64_C(2))))) {
F.v6500 = INT64_C(-1);
Y_FLUSH();
} else if (Y_DEFI(F.v6498)) {
F.v6500 = Y_DEFI(F.v6502);
Y_FLUSH();
} else {
F.v6500 = yr2819_RoundUp(Y_DEFI(F.v6502), INT64_C(64));
Y_FLUSH();
}
} else {
F.v6500 = INT64_C(-1);
Y_FLUSH();
}
} else if ((Y_DEFI(F.v6496) == v822)) {
F.v6502 = INT64_C(1);
Y_FLUSH();
F.v6508 = Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_idx);
Y_FLUSH();
while ((!(Y_DEFP(F.v6508) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6508)))).f_hasm))) {
{ rt_int rv6535 = INT64_C(-1);
y_use = F.yu; return rv6535; }
}
F.v6502 = y_range(y_mul(Y_DEFI(F.v6502), (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6508)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6508)))).f_mlo))), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((Y_DEFI(F.v6502) > INT64_C(100000000000))) {
{ rt_int rv6542 = INT64_C(-1);
y_use = F.yu; return rv6542; }
}
F.v6508 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6508)))).f_link);
Y_FLUSH();
}
F.v6500 = yr2826_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem), Y_DEFI(F.v6498));
Y_FLUSH();
if ((Y_DEFI(F.v6500) < INT64_C(0))) {
{ rt_int rv6545 = INT64_C(-1);
y_use = F.yu; return rv6545; }
}
if (((!Y_DEFI(F.v6498)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_packed)))) {
F.v6500 = yr2819_RoundUp(Y_DEFI(F.v6500), INT64_C(64));
Y_FLUSH();
}
F.v6500 = yr2819_RoundUp(Y_DEFI(F.v6500), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_align));
Y_FLUSH();
F.v6500 = y_range(y_mul(Y_DEFI(F.v6500), Y_DEFI(F.v6502)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v6496) == v825)) {
F.v6500 = yr2833_RecordBits(F.p2827, Y_DEFI(F.v6498), 0);
Y_FLUSH();
} else if (((((Y_DEFI(F.v6496) == v843)) || ((Y_DEFI(F.v6496) == v846))) || ((Y_DEFI(F.v6496) == v855)))) {
F.v6500 = INT64_C(-1);
Y_FLUSH();
}
if ((((Y_DEFI(F.v6500) > INT64_C(0))) && (!Y_DEFI(F.v6498)))) {
F.v6500 = yr2819_RoundUp(Y_DEFI(F.v6500), INT64_C(64));
Y_FLUSH();
}
if ((!Y_DEFI(F.v6498))) {
((*(yR110 *)y_deref(F.p2827))).f_bits = Y_DEFI(F.v6500);
Y_FLUSH();
}
{ rt_int rv6552 = Y_DEFI(F.v6500);
y_use = F.yu; return rv6552; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2833_RecordBits(void * a_p2834, rt_int a_p2835, rt_int a_p2836) {
struct yf2837 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2834 = a_p2834;
F.p2835 = a_p2835;
F.p2836 = a_p2836;
F.v6558 = Y_UNDEF_P;
F.v6560 = Y_UNDEF_I;
F.v6560 = INT64_C(0);
F.v6563 = Y_UNDEF_I;
F.v6563 = INT64_C(0);
F.v6566 = Y_UNDEF_I;
F.v6566 = INT64_C(0);
F.v6569 = Y_UNDEF_I;
F.v6569 = INT64_C(0);
F.v6572 = Y_UNDEF_I;
F.v6572 = INT64_C(0);
F.v6575 = Y_UNDEF_I;
F.v6575 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6585, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6585, &F.v6587);
y_initu(&F.yd_6585, &F.v6589);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6598, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_6598, &F.v6600);
F.v6558 = Y_DEFP(((*(yR110 *)y_deref(F.p2834))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v6558) == ((void *)0)))) {
Y_TICK();
F.v6566 = yr2826_Bits(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_rep), F.p2835);
Y_FLUSH();
if ((Y_DEFI(F.v6566) < INT64_C(0))) {
{ rt_int rv6603 = INT64_C(-1);
y_use = F.yu; return rv6603; }
}
if (((!F.p2835) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_rep)))).f_packed)))) {
F.v6566 = yr2819_RoundUp(Y_DEFI(F.v6566), INT64_C(64));
Y_FLUSH();
}
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_variant) == INT64_C(0)))) {
if ((Y_DEFI(F.v6572) == INT64_C(0))) {
F.v6572 = Y_DEFI(F.v6560);
Y_FLUSH();
}
if (yr2841_FirstOfVariant(F.p2834, Y_DEFP(F.v6558))) {
F.v6560 = Y_DEFI(F.v6572);
Y_FLUSH();
}
}
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_at) >= INT64_C(0))) {
F.v6569 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_at);
Y_FLUSH();
} else if ((F.p2835 || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_rep)))).f_packed))) {
F.v6569 = yr2819_RoundUp(Y_DEFI(F.v6560), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_rep)))).f_align));
Y_FLUSH();
} else {
F.v6569 = yr2819_RoundUp(Y_DEFI(F.v6560), INT64_C(64));
Y_FLUSH();
}
if ((F.p2836 && ((Y_DEFI(F.v6575) < INT64_C(512))))) {
F.v6575 = y_range(y_add(Y_DEFI(F.v6575), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(F.v6587).p)[y_ix1(F.v6587, Y_DEFI(F.v6575))] = Y_DEFI(F.v6569);
Y_FLUSH();
((rt_int *)(F.v6589).p)[y_ix1(F.v6589, Y_DEFI(F.v6575))] = y_range(y_add(Y_DEFI(F.v6569), Y_DEFI(F.v6566)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(F.v6600).p)[y_ix1(F.v6600, Y_DEFI(F.v6575))] = Y_DEFP(F.v6558);
Y_FLUSH();
}
F.v6560 = y_range(y_add(Y_DEFI(F.v6569), Y_DEFI(F.v6566)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((Y_DEFI(F.v6560) > Y_DEFI(F.v6563))) {
F.v6563 = Y_DEFI(F.v6560);
Y_FLUSH();
}
F.v6558 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6558)))).f_next);
Y_FLUSH();
}
if (F.p2836) {
F.lo6617 = INT64_C(1);
F.hi6618 = Y_DEFI(F.v6575);
{ rt_int hi6622 = F.hi6618;
for (rt_int i6621 = F.lo6617; i6621 <= hi6622; i6621++) { F.c_6620 = i6621; Y_TICK();
F.lo6626 = y_add(F.c_6620, INT64_C(1));
F.hi6627 = Y_DEFI(F.v6575);
{ rt_int hi6631 = F.hi6627;
for (rt_int i6630 = F.lo6626; i6630 <= hi6631; i6630++) { F.c_6629 = i6630; Y_TICK();
if ((((((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6620)])))).f_at) >= INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6629)])))).f_at) >= INT64_C(0))))) && ((Y_DEFI(((rt_int *)(F.v6587).p)[y_ix1(F.v6587, F.c_6620)]) < Y_DEFI(((rt_int *)(F.v6589).p)[y_ix1(F.v6589, F.c_6629)])))) && ((Y_DEFI(((rt_int *)(F.v6587).p)[y_ix1(F.v6587, F.c_6629)]) < Y_DEFI(((rt_int *)(F.v6589).p)[y_ix1(F.v6589, F.c_6620)])))) && (((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6620)])))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6629)])))).f_variant) == INT64_C(0)))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6620)])))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6629)])))).f_variant))))))) {
yr1157_Fail(Y_DEFI(v1000), yr3530_Join(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6629)])))).f_name), yr3530_Join(yr1061_T(y_str(" overlaps ", 10)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6600).p)[y_ix1(F.v6600, F.c_6620)])))).f_name), INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
Y_FLUSH();
}
if (i6630 == hi6631) break;
}}
if (i6621 == hi6622) break;
}}
}
{ rt_int rv6639 = Y_DEFI(F.v6563);
y_use = F.yu; return rv6639; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2841_FirstOfVariant(void * a_p2842, void * a_p2843) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2842 = a_p2842;
F.p2843 = a_p2843;
F.v6644 = Y_UNDEF_P;
F.v6644 = Y_DEFP(((*(yR110 *)y_deref(F.p2842))).f_fields);
while ((!(Y_DEFP(F.v6644) == F.p2843))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6644)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(F.p2843))).f_variant))) {
{ rt_int rv6646 = 0;
y_use = F.yu; return rv6646; }
}
F.v6644 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6644)))).f_next);
Y_FLUSH();
}
{ rt_int rv6648 = 1;
y_use = F.yu; return rv6648; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2848_LayOf(void * a_p2849, rt_int a_p2850) {
struct yf2851 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2849 = a_p2849;
F.p2850 = a_p2850;
F.v6653 = Y_UNDEF_I;
F.v6653 = Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_kind);
F.v6655 = Y_UNDEF_I;
F.v6655 = (F.p2850 || Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_packed));
F.v6657 = Y_UNDEF_I;
F.v6659 = Y_UNDEF_I;
F.v6661 = Y_UNDEF_I;
F.v6663 = Y_UNDEF_P;
F.v6665 = Y_UNDEF_I;
F.v6665 = INT64_C(0);
F.v6668 = Y_UNDEF_I;
F.v6668 = INT64_C(0);
F.v6671 = Y_UNDEF_I;
F.v6671 = INT64_C(-1);
yr1026_SB();
Y_FLUSH();
if (Y_DEFI(F.v6655)) {
yr1037_SA(y_str("1,", 2));
Y_FLUSH();
} else {
yr1037_SA(y_str("0,", 2));
Y_FLUSH();
}
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_align));
Y_FLUSH();
yr1037_SA(y_str(",", 1));
Y_FLUSH();
F.v6657 = yr1056_SE();
Y_FLUSH();
if (((((Y_DEFI(F.v6653) == v822)) || ((Y_DEFI(F.v6653) == v843))) || ((Y_DEFI(F.v6653) == v846)))) {
if ((((Y_DEFI(F.v6653) == v846)) || ((Y_DEFP(((*(yR110 *)y_deref(F.p2849))).f_elem) == ((void *)0))))) {
if (Y_DEFI(F.v6655)) {
F.v6659 = yr1061_T(y_str("c1,0,8", 6));
Y_FLUSH();
} else {
F.v6659 = yr1061_T(y_str("c0,0,64", 7));
Y_FLUSH();
}
} else {
F.v6659 = yr2848_LayOf(Y_DEFP(((*(yR110 *)y_deref(F.p2849))).f_elem), Y_DEFI(F.v6655));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
if ((Y_DEFI(F.v6653) == v843)) {
yr1037_SA(y_str("A", 1));
Y_FLUSH();
} else {
yr1037_SA(y_str("a", 1));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(F.v6657));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_nidx) > INT64_C(0))) {
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_nidx));
Y_FLUSH();
} else {
yr1050_SI(INT64_C(1));
Y_FLUSH();
}
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6659));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv6684 = yr1056_SE();
y_use = F.yu; return rv6684; }
}
if ((Y_DEFI(F.v6653) == v825)) {
F.v6659 = INT64_C(0);
Y_FLUSH();
F.v6663 = Y_DEFP(((*(yR110 *)y_deref(F.p2849))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v6663) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(F.v6663) == Y_DEFP(((*(yR110 *)y_deref(F.p2849))).f_selector))) {
F.v6671 = Y_DEFI(F.v6665);
Y_FLUSH();
}
F.v6665 = y_range(y_add(Y_DEFI(F.v6665), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6661 = yr2848_LayOf(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6663)))).f_rep), Y_DEFI(F.v6655));
Y_FLUSH();
F.v6659 = yr3530_Join(Y_DEFI(F.v6659), yr2855_LayField(Y_DEFP(F.v6663)), yr3530_Join(Y_DEFI(F.v6661), yr1061_T(y_str(";", 1)), INT64_C(0)));
Y_FLUSH();
F.v6663 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6663)))).f_next);
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("r", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6657));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6665));
Y_FLUSH();
yr1037_SA(y_str(",", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6671));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6659));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv6694 = yr1056_SE();
y_use = F.yu; return rv6694; }
}
F.v6668 = yr2826_Bits(F.p2849, F.p2850);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
if ((Y_DEFI(F.v6668) < INT64_C(0))) {
yr1037_SA(y_str("o", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6657));
Y_FLUSH();
yr1037_SA(y_str("64", 2));
Y_FLUSH();
} else {
if ((((Y_DEFI(F.v6653) == v813)) || ((Y_DEFI(F.v6653) == v816)))) {
yr1037_SA(y_str("u", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v6653) == v804)) {
if (((Y_DEFI(F.v6655) && Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_hasm)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2849))).f_mlo) >= INT64_C(0))))) {
yr1037_SA(y_str("u", 1));
Y_FLUSH();
} else {
yr1037_SA(y_str("i", 1));
Y_FLUSH();
}
} else if ((Y_DEFI(F.v6653) == v819)) {
yr1037_SA(y_str("c", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v6653) == v810)) {
yr1037_SA(y_str("f", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v6653) == v807)) {
yr1037_SA(y_str("x", 1));
Y_FLUSH();
} else if ((((Y_DEFI(F.v6653) == v828)) || ((Y_DEFI(F.v6653) == v849)))) {
yr1037_SA(y_str("p", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v6653) == v834)) {
yr1037_SA(y_str("s", 1));
Y_FLUSH();
} else {
yr1037_SA(y_str("o", 1));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(F.v6657));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6668));
Y_FLUSH();
if ((Y_DEFI(F.v6653) == v834)) {
yr1037_SA(y_str(",", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2849))).f_elem)))).f_mlo));
Y_FLUSH();
yr1037_SA(y_str(",", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2849))).f_elem)))).f_mhi));
Y_FLUSH();
}
}
{ rt_int rv6710 = yr1056_SE();
y_use = F.yu; return rv6710; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2855_LayField(void * a_p2856) {
struct yf2857 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2856 = a_p2856;
F.v6714 = Y_UNDEF_P;
F.v6714 = Y_DEFP(((*(yR115 *)y_deref(F.p2856))).f_labels);
F.v6716 = Y_UNDEF_I;
F.v6716 = INT64_C(0);
F.v6719 = Y_UNDEF_I;
F.v6719 = INT64_C(0);
F.v6722 = Y_UNDEF_I;
F.v6724 = Y_UNDEF_I;
F.v6724 = INT64_C(0);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR115 *)y_deref(F.p2856))).f_variant) == INT64_C(0)))) {
while ((!(Y_DEFP(F.v6714) == ((void *)0)))) {
Y_TICK();
yr2959_Manifest(Y_DEFP(F.v6714), &F.v6722, &F.v6719);
Y_FLUSH();
F.v6716 = y_range(y_add(Y_DEFI(F.v6716), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6724 = yr3530_Join(Y_DEFI(F.v6724), yr1061_T(y_str(",", 1)), yr3312_Num(Y_DEFI(F.v6719)));
Y_FLUSH();
F.v6714 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6714)))).f_next);
Y_FLUSH();
}
}
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR115 *)y_deref(F.p2856))).f_at));
Y_FLUSH();
yr1037_SA(y_str(",", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR115 *)y_deref(F.p2856))).f_variant));
Y_FLUSH();
yr1037_SA(y_str(",", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6716));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6724));
Y_FLUSH();
yr1037_SA(y_str(":", 1));
Y_FLUSH();
{ rt_int rv6733 = yr1056_SE();
y_use = F.yu; return rv6733; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2861_LayLit(void * a_p2862) {
struct yf2863 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2862 = a_p2862;
F.v6737 = Y_UNDEF_I;
F.v6737 = yr2848_LayOf(F.p2862, 0);
yr1026_SB();
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6737));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
{ rt_int rv6741 = yr1056_SE();
y_use = F.yu; return rv6741; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2867_LayDesc(void * a_p2868) {
struct yf2869 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2868 = a_p2868;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2868))).f_kind) == v843)) && ((!(Y_DEFP(((*(yR110 *)y_deref(F.p2868))).f_elem) == ((void *)0)))))) {
{ rt_int rv6744 = yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2868))).f_elem));
y_use = F.yu; return rv6744; }
}
{ rt_int rv6745 = yr2557_DescOf(F.p2868);
y_use = F.yu; return rv6745; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2873_WordExact(void * a_p2874) {
struct yf2875 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2874 = a_p2874;
F.v6749 = Y_UNDEF_I;
F.v6749 = Y_DEFI(((*(yR110 *)y_deref(F.p2874))).f_kind);
if (Y_DEFI(((*(yR110 *)y_deref(F.p2874))).f_packed)) {
{ rt_int rv6751 = 0;
y_use = F.yu; return rv6751; }
}
{ rt_int rv6752 = ((((((Y_DEFI(F.v6749) == v804)) || ((Y_DEFI(F.v6749) == v813))) || ((Y_DEFI(F.v6749) == v816))) || ((Y_DEFI(F.v6749) == v810))) || ((Y_DEFI(F.v6749) == v807)));
y_use = F.yu; return rv6752; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2879_AddrCode(void * a_p2880, rt_int a_p2881, void * a_p2882) {
struct yf2883 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2880 = a_p2880;
F.p2881 = a_p2881;
F.p2882 = a_p2882;
F.v6758 = Y_UNDEF_P;
F.v6758 = F.p2880;
F.v6760 = Y_UNDEF_I;
F.v6760 = INT64_C(0);
F.v6763 = Y_UNDEF_I;
F.v6765 = Y_UNDEF_I;
F.v6767 = Y_UNDEF_I;
F.v6769 = Y_UNDEF_P;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_kind) == v801)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_kind) == v801))) {
F.v6760 = y_range(y_add(Y_DEFI(F.v6760), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v6758 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_a);
Y_FLUSH();
}
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_kind) == v777))) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6758)))).f_kind) == v789))))) {
{ rt_int rv6775 = yr3530_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), yr3142_RawCode(F.p2880, F.p2881), yr3530_Join(yr1061_T(y_str("), ", 3)), yr2907_ExtentCode(F.p2881, F.p2882), yr1061_T(y_str(")", 1))));
y_use = F.yu; return rv6775; }
}
if ((Y_DEFP(F.v6758) == F.p2880)) {
F.v6763 = yr3142_RawCode(F.p2880, F.p2881);
Y_FLUSH();
F.v6769 = F.p2882;
Y_FLUSH();
} else {
yr3107_Expr(Y_DEFP(F.v6758), ((void *)0), &F.v6763, &F.v6769);
Y_FLUSH();
F.v6763 = yr3142_RawCode(Y_DEFP(F.v6758), Y_DEFI(F.v6763));
Y_FLUSH();
}
F.v6765 = yr3530_Join(yr2861_LayLit(Y_DEFP(F.v6769)), yr1061_T(y_str(", ", 2)), yr2867_LayDesc(Y_DEFP(F.v6769)));
Y_FLUSH();
F.v6767 = yr3530_Join(yr1061_T(y_str(", ", 2)), yr2861_LayLit(F.p2882), yr1061_T(y_str(", ", 2)));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_addr_v((void *)&(", 19));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6763));
Y_FLUSH();
yr1037_SA(y_str("), ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6765));
Y_FLUSH();
yr1037_SA(y_str(", (void *)&(", 12));
Y_FLUSH();
yr1044_ST(yr3142_RawCode(F.p2880, F.p2881));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6767));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6760));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv6784 = yr1056_SE();
y_use = F.yu; return rv6784; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2887_ApplyStorage(void * a_p2888, void * a_p2889) {
struct yf2890 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2888 = a_p2888;
F.p2889 = a_p2889;
F.v6789 = Y_UNDEF_P;
F.v6789 = yr2496_CopyRep(F.p2888);
F.v6791 = Y_UNDEF_I;
F.v6793 = Y_UNDEF_I;
F.v6795 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_flag) == INT64_C(1))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6789)))).f_packed = 1;
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2889))).f_a) == ((void *)0)))) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2889))).f_a), &F.v6791, &F.v6793);
Y_FLUSH();
if (((!Y_DEFI(F.v6791)) || ((Y_DEFI(F.v6793) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_line), y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
Y_FLUSH();
}
((*(yR110 *)y_deref(Y_DEFP(F.v6789)))).f_pbits = Y_DEFI(F.v6793);
Y_FLUSH();
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2889))).f_b) == ((void *)0)))) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2889))).f_b), &F.v6791, &F.v6793);
Y_FLUSH();
if ((((!Y_DEFI(F.v6791)) || ((Y_DEFI(F.v6793) < INT64_C(1)))) || ((Y_DEFI(F.v6793) > INT64_C(64))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_line), y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
Y_FLUSH();
}
((*(yR110 *)y_deref(Y_DEFP(F.v6789)))).f_align = Y_DEFI(F.v6793);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6789)))).f_pbits) > INT64_C(0))) {
F.v6795 = yr2826_Bits(Y_DEFP(F.v6789), 1);
Y_FLUSH();
if ((Y_DEFI(F.v6795) < INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_line), y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
Y_FLUSH();
}
if ((Y_DEFI(F.v6795) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6789)))).f_pbits))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("this representation needs ", 26));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6795));
Y_FLUSH();
yr1037_SA(y_str(" bits, more than PACKED ", 24));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6789)))).f_pbits));
Y_FLUSH();
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
Y_FLUSH();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_line), yr1056_SE());
Y_FLUSH();
}
}
{ void * rv6810 = Y_DEFP(F.v6789);
y_use = F.yu; return rv6810; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2894_AtAddress(void * a_p2895) {
struct yf2896 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2895 = a_p2895;
F.v6814 = Y_UNDEF_I;
F.v6816 = Y_UNDEF_I;
yr2959_Manifest(F.p2895, &F.v6814, &F.v6816);
Y_FLUSH();
if (((!Y_DEFI(F.v6814)) || ((Y_DEFI(F.v6816) < INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2895))).f_line), y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
Y_FLUSH();
}
{ rt_int rv6819 = Y_DEFI(F.v6816);
y_use = F.yu; return rv6819; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2900_StoreAt(rt_int a_p2901, rt_int a_p2902) {
struct yf2903 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2901 = a_p2901;
F.p2902 = a_p2902;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(*(", 3));
Y_FLUSH();
yr1044_ST(F.p2901);
Y_FLUSH();
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
Y_FLUSH();
yr1050_SI(F.p2902);
Y_FLUSH();
yr1037_SA(y_str("), sizeof(", 10));
Y_FLUSH();
yr1044_ST(F.p2901);
Y_FLUSH();
yr1037_SA(y_str(")))", 3));
Y_FLUSH();
{ rt_int rv6827 = yr1056_SE();
y_use = F.yu; return rv6827; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2907_ExtentCode(rt_int a_p2908, void * a_p2909) {
struct yf2910 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2908 = a_p2908;
F.p2909 = a_p2909;
F.v6832 = Y_UNDEF_I;
F.v6834 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2909))).f_kind) == v855)) {
{ rt_int rv6837 = yr3530_Join(yr1061_T(y_str("(", 1)), F.p2908, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6837; }
}
F.v6832 = yr2826_Bits(F.p2909, 0);
Y_FLUSH();
if ((Y_DEFI(F.v6832) >= INT64_C(0))) {
{ rt_int rv6844 = yr3312_Num(y_range(y_div((y_add(Y_DEFI(F.v6832), INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6844; }
}
if (yr2514_IsArrayLike(F.p2909)) {
F.v6834 = yr2826_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2909))).f_elem), Y_DEFI(((*(yR110 *)y_deref(F.p2909))).f_packed));
Y_FLUSH();
if ((Y_DEFI(F.v6834) >= INT64_C(0))) {
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2909))).f_packed))) {
F.v6834 = yr2819_RoundUp(Y_DEFI(F.v6834), INT64_C(64));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("((y_count(", 10));
Y_FLUSH();
yr1044_ST(F.p2908);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2909))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str(") * INT64_C(", 12));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v6834));
Y_FLUSH();
yr1037_SA(y_str(") + 63) / 64)", 13));
Y_FLUSH();
{ rt_int rv6851 = yr1056_SE();
y_use = F.yu; return rv6851; }
}
}
{ rt_int rv6854 = yr3530_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2908, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6854; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2914_SpaceArg(void * a_p2915, rt_int a_p2916, void * a_p2917) {
struct yf2918 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2915 = a_p2915;
F.p2916 = a_p2916;
F.p2917 = a_p2917;
F.v6860 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2917))).f_kind) == v855)) {
{ rt_int rv6861 = F.p2916;
y_use = F.yu; return rv6861; }
}
if ((yr3068_IsVariable(F.p2915) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2915))).f_kind) == v777)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2917))).f_kind) == v846))))))) {
{ rt_int rv6867 = yr3530_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), yr3142_RawCode(F.p2915, F.p2916), yr3530_Join(yr1061_T(y_str("), ", 3)), yr2907_ExtentCode(F.p2916, F.p2917), yr3530_Join(yr1061_T(y_str(", ", 2)), yr2861_LayLit(F.p2917), yr3530_Join(yr1061_T(y_str(", ", 2)), yr2867_LayDesc(F.p2917), yr1061_T(y_str(" })", 3))))));
y_use = F.yu; return rv6867; }
}
F.v6860 = yr1200_Fresh(y_str("sp", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(F.p2917));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(F.p2916);
Y_FLUSH();
yr1037_SA(y_str("; void *", 8));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str("); memcpy(", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str("c, &", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str(", sizeof ", 9));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str("); (yspace){ ", 13));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v6860));
Y_FLUSH();
yr1037_SA(y_str("c, ", 3));
Y_FLUSH();
yr1044_ST(yr2907_ExtentCode(Y_DEFI(F.v6860), F.p2917));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(F.p2917));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2867_LayDesc(F.p2917));
Y_FLUSH();
yr1037_SA(y_str(" }; })", 6));
Y_FLUSH();
{ rt_int rv6882 = yr1056_SE();
y_use = F.yu; return rv6882; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2922_PackedComponent(void * a_p2923) {
struct yf2924 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2923 = a_p2923;
F.v6886 = Y_UNDEF_P;
F.v6886 = F.p2923;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_kind) == v801)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_kind) == v801))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_a)))).f_rep) == ((void *)0)))) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_a)))).f_rep)))).f_packed)) {
{ rt_int rv6888 = 1;
y_use = F.yu; return rv6888; }
}
}
}
F.v6886 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6886)))).f_a);
Y_FLUSH();
}
{ rt_int rv6890 = 0;
y_use = F.yu; return rv6890; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2928_CharOrd(void * a_p2929, rt_int a_p2930) {
struct yf2931 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2929 = a_p2929;
F.p2930 = a_p2930;
F.v6895 = Y_UNDEF_P;
F.v6897 = Y_UNDEF_I;
F.v6899 = Y_UNDEF_I;
F.v6901 = Y_UNDEF_I;
F.v6903 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2929))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_tid))) {
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2930)]) == INT64_C(1))) {
{ rt_int rv6906 = Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2930, INT64_C(1)))]);
y_use = F.yu; return rv6906; }
}
F.v6897 = INT64_C(0);
Y_FLUSH();
F.v6901 = INT64_C(1);
Y_FLUSH();
F.lo6912 = INT64_C(1);
F.hi6913 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v1522))]);
{ rt_int hi6917 = F.hi6913;
for (rt_int i6916 = F.lo6912; i6916 <= hi6917; i6916++) { F.c_6915 = i6916; Y_TICK();
if ((yr1103_TChar(Y_DEFI(v1522), y_range(F.c_6915, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6903 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v1522))]), (y_sub(Y_DEFI(F.v6901), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_6915, Y_DEFI(F.v6901)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
if ((Y_DEFI(F.v6903) == F.p2930)) {
if ((Y_DEFI(F.v6897) < INT64_C(32))) {
{ rt_int rv6924 = Y_DEFI(F.v6897);
y_use = F.yu; return rv6924; }
}
if ((Y_DEFI(F.v6897) == INT64_C(32))) {
{ rt_int rv6927 = INT64_C(32);
y_use = F.yu; return rv6927; }
}
if ((Y_DEFI(F.v6897) == INT64_C(33))) {
{ rt_int rv6930 = INT64_C(127);
y_use = F.yu; return rv6930; }
}
if ((Y_DEFI(F.v6897) == INT64_C(34))) {
{ rt_int rv6933 = INT64_C(39);
y_use = F.yu; return rv6933; }
}
{ rt_int rv6935 = INT64_C(34);
y_use = F.yu; return rv6935; }
}
F.v6897 = y_range(y_add(Y_DEFI(F.v6897), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6901 = y_range(y_add(F.c_6915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (i6916 == hi6917) break;
}}
{ rt_int rv6941 = INT64_C(-1);
y_use = F.yu; return rv6941; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2929))).f_kind) == v819))) {
{ rt_int rv6943 = INT64_C(-1);
y_use = F.yu; return rv6943; }
}
F.v6895 = Y_DEFP(((*(yR110 *)y_deref(F.p2929))).f_lits);
Y_FLUSH();
F.v6899 = INT64_C(0);
Y_FLUSH();
while ((!(Y_DEFP(F.v6895) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6895)))).f_text), F.p2930)) {
{ rt_int rv6945 = Y_DEFI(F.v6899);
y_use = F.yu; return rv6945; }
}
F.v6899 = y_range(y_add(Y_DEFI(F.v6899), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6895 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6895)))).f_next);
Y_FLUSH();
}
{ rt_int rv6949 = INT64_C(-1);
y_use = F.yu; return rv6949; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2935_AlphabetFor(void * a_p2936, void * a_p2937) {
struct yf2938 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2936 = a_p2936;
F.p2937 = a_p2937;
F.v6954 = Y_UNDEF_P;
F.v6956 = Y_UNDEF_P;
F.v6958 = Y_UNDEF_P;
F.v6958 = ((void *)0);
F.v6960 = Y_UNDEF_I;
F.v6960 = INT64_C(0);
F.v6963 = Y_UNDEF_I;
F.v6963 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2936))).f_d) == ((void *)0)))) {
F.v6954 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2936))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_line)));
Y_FLUSH();
if ((((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v870))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_rep)))).f_kind) == v819))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2936))).f_d)))).f_name), y_str(" is not an alphabet", 19));
Y_FLUSH();
}
{ void * rv6966 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_rep);
y_use = F.yu; return rv6966; }
}
F.v6963 = INT64_C(1);
Y_FLUSH();
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_kind) == v771)) || ((yr2928_CharOrd(Y_DEFP(v1346), Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_text)) >= INT64_C(0))))) {
F.v6960 = INT64_C(1);
Y_FLUSH();
F.v6958 = Y_DEFP(v1346);
Y_FLUSH();
}
F.v6956 = Y_DEFP(v1525);
Y_FLUSH();
while ((!(Y_DEFP(F.v6956) == ((void *)0)))) {
Y_TICK();
F.v6954 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6956)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v6954) == ((void *)0)))) {
F.v6954 = yr2483_Real(Y_DEFP(F.v6954));
Y_FLUSH();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v870)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6954)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6956)))).f_rep)))).f_tid))))) {
F.v6963 = y_range(y_add(Y_DEFI(F.v6963), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_kind) == v768)) && ((yr2928_CharOrd(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6956)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_text)) >= INT64_C(0))))) {
F.v6960 = y_range(y_add(Y_DEFI(F.v6960), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v6958 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6956)))).f_rep);
Y_FLUSH();
}
}
}
F.v6956 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6956)))).f_next);
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_kind) == v771)) && ((Y_DEFI(F.v6963) > INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_line), y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
Y_FLUSH();
}
if ((Y_DEFI(F.v6960) > INT64_C(1))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_line), yr3530_Join(yr1061_T(y_str("'", 1)), Y_DEFI(((*(yR105 *)y_deref(F.p2936))).f_text), yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
Y_FLUSH();
}
if ((Y_DEFP(F.v6958) == ((void *)0))) {
{ void * rv6981 = Y_DEFP(v1346);
y_use = F.yu; return rv6981; }
}
{ void * rv6982 = Y_DEFP(F.v6958);
y_use = F.yu; return rv6982; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2942_CharValue(void * a_p2943, rt_int a_p2944, rt_int a_p2945) {
struct yf2946 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2943 = a_p2943;
F.p2944 = a_p2944;
F.p2945 = a_p2945;
F.v6988 = Y_UNDEF_I;
F.v6988 = yr2928_CharOrd(F.p2943, F.p2944);
F.v6990 = Y_UNDEF_I;
if ((Y_DEFI(F.v6988) < INT64_C(0))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("'", 1));
Y_FLUSH();
yr1044_ST(F.p2944);
Y_FLUSH();
yr1037_SA(y_str("' is not a character of ", 24));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2943))).f_tname));
Y_FLUSH();
F.v6990 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(F.p2945, Y_DEFI(F.v6990));
Y_FLUSH();
}
{ rt_int rv6994 = Y_DEFI(F.v6988);
y_use = F.yu; return rv6994; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2950_StringCodes(void * a_p2951, rt_int a_p2952, rt_int * a_p2953, rt_int a_p2954) {
struct yf2955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2951 = a_p2951;
F.p2952 = a_p2952;
F.p2953_o = a_p2953;
F.p2954 = a_p2954;
F.v7001 = Y_UNDEF_I;
F.v7003 = Y_UNDEF_I;
F.v7005 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_7014, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_7014, &F.v7016);
F.v7018 = Y_UNDEF_B;
F.v7020 = Y_UNDEF_I;
F.p2953 = INT64_C(0);
Y_FLUSH();
F.v7001 = INT64_C(1);
Y_FLUSH();
while ((Y_DEFI(F.v7001) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2952)]))) {
Y_TICK();
F.v7018 = yr1103_TChar(F.p2952, Y_DEFI(F.v7001));
Y_FLUSH();
if ((Y_DEFB(F.v7018) == 39)) {
F.v7003 = y_range(y_add(Y_DEFI(F.v7001), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((((Y_DEFI(F.v7003) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2952)]))) && ((!(yr1103_TChar(F.p2952, Y_DEFI(F.v7003)) == 39))))) {
Y_TICK();
F.v7003 = y_range(y_add(Y_DEFI(F.v7003), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.v7003) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2952)]))) {
v941 = INT64_C(0);
Y_FLUSH();
v955 = INT64_C(0);
Y_FLUSH();
yr1178_FailS(F.p2954, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
Y_FLUSH();
}
F.v7020 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2952)]), Y_DEFI(F.v7001)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v7003), Y_DEFI(F.v7001))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v7005 = yr2942_CharValue(F.p2951, Y_DEFI(F.v7020), F.p2954);
Y_FLUSH();
F.v7001 = y_range(y_add(Y_DEFI(F.v7003), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else {
F.v7020 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2952)]), (y_sub(Y_DEFI(F.v7001), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
Y_FLUSH();
F.v7005 = yr2942_CharValue(F.p2951, Y_DEFI(F.v7020), F.p2954);
Y_FLUSH();
F.v7001 = y_range(y_add(Y_DEFI(F.v7001), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.p2953) >= INT64_C(65536))) {
yr1178_FailS(F.p2954, y_str("this implementation takes string literals of up to 65536 characters", 67));
Y_FLUSH();
}
F.p2953 = y_range(y_add(Y_DEFI(F.p2953), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(F.v7016).p)[y_ix1(F.v7016, Y_DEFI(F.p2953))] = Y_DEFI(F.v7005);
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
F.lo7052 = INT64_C(1);
F.hi7053 = Y_DEFI(F.p2953);
{ rt_int hi7057 = F.hi7053;
for (rt_int i7056 = F.lo7052; i7056 <= hi7057; i7056++) { F.c_7055 = i7056; Y_TICK();
F.v7005 = Y_DEFI(((rt_int *)(F.v7016).p)[y_ix1(F.v7016, F.c_7055)]);
Y_FLUSH();
if ((((Y_DEFI(F.v7005) == INT64_C(34))) || ((Y_DEFI(F.v7005) == INT64_C(92))))) {
yr1031_SC(92);
Y_FLUSH();
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v7005))]));
Y_FLUSH();
} else if (((((Y_DEFI(F.v7005) >= INT64_C(32))) && ((Y_DEFI(F.v7005) < INT64_C(127)))) && (((((!(Y_DEFI(F.v7005) == INT64_C(63)))) || ((F.c_7055 == INT64_C(1)))) || ((!(Y_DEFI(((rt_int *)(F.v7016).p)[y_ix1(F.v7016, y_sub(F.c_7055, INT64_C(1)))]) == INT64_C(63)))))))) {
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v7005))]));
Y_FLUSH();
} else {
yr1031_SC(92);
Y_FLUSH();
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_div(Y_DEFI(F.v7005), INT64_C(64)))))]));
Y_FLUSH();
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod((y_div(Y_DEFI(F.v7005), INT64_C(8))), INT64_C(8)))))]));
Y_FLUSH();
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod(Y_DEFI(F.v7005), INT64_C(8)))))]));
Y_FLUSH();
}
if (i7056 == hi7057) break;
}}
yr1031_SC(34);
Y_FLUSH();
{ rt_int rv7084 = yr1056_SE();
(*F.p2953_o) = F.p2953;
y_use = F.yu; return rv7084; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2959_Manifest(void * a_p2960, rt_int * a_p2961, rt_int * a_p2962) {
struct yf2963 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2960 = a_p2960;
F.p2961_o = a_p2961;
F.p2962_o = a_p2962;
F.v7090 = Y_UNDEF_P;
F.v7092 = Y_UNDEF_I;
F.v7094 = Y_UNDEF_I;
F.v7096 = Y_UNDEF_I;
F.v7098 = Y_UNDEF_I;
F.v7100 = Y_UNDEF_I;
F.v7102 = Y_UNDEF_P;
F.p2961 = 0;
Y_FLUSH();
F.p2962 = INT64_C(0);
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v759)) {
F.p2961 = 1;
Y_FLUSH();
F.p2962 = Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_ival);
Y_FLUSH();
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v768)) {
F.v7102 = yr2935_AlphabetFor(F.p2960, ((void *)0));
Y_FLUSH();
F.p2962 = yr2928_CharOrd(Y_DEFP(F.v7102), Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_text));
Y_FLUSH();
F.p2961 = (Y_DEFI(F.p2962) >= INT64_C(0));
Y_FLUSH();
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_d) == ((void *)0)))) {
F.v7090 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_line)));
Y_FLUSH();
F.v7090 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_name), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7090)))).f_rep));
Y_FLUSH();
} else {
F.v7090 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_name));
Y_FLUSH();
}
if ((Y_DEFP(F.v7090) == ((void *)0))) {
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
F.v7090 = yr2483_Real(Y_DEFP(F.v7090));
Y_FLUSH();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7090)))).f_kind) == v873)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7090)))).f_kind) == v864)))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7090)))).f_hasmv))) {
F.p2961 = 1;
Y_FLUSH();
F.p2962 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7090)))).f_mval);
Y_FLUSH();
}
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v801)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_a), &F.p2961, &F.p2962);
Y_FLUSH();
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v795)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_a), &F.p2961, &F.p2962);
Y_FLUSH();
F.p2962 = y_range(y_neg(Y_DEFI(F.p2962)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v798)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_a), &F.v7096, &F.v7092);
Y_FLUSH();
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_b), &F.v7098, &F.v7094);
Y_FLUSH();
if ((!((Y_DEFI(F.v7096) && Y_DEFI(F.v7098))))) {
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
F.v7100 = Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_name);
Y_FLUSH();
F.p2961 = 1;
Y_FLUSH();
if ((Y_DEFI(F.v7100) == v573)) {
F.p2962 = y_range(y_add(Y_DEFI(F.v7092), Y_DEFI(F.v7094)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v7100) == v576)) {
F.p2962 = y_range(y_sub(Y_DEFI(F.v7092), Y_DEFI(F.v7094)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v7100) == v579)) {
F.p2962 = y_range(y_mul(Y_DEFI(F.v7092), Y_DEFI(F.v7094)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((((Y_DEFI(F.v7100) == v276)) && ((!(Y_DEFI(F.v7094) == INT64_C(0)))))) {
F.p2962 = y_range(y_div(Y_DEFI(F.v7092), Y_DEFI(F.v7094)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((((Y_DEFI(F.v7100) == v378)) && ((!(Y_DEFI(F.v7094) == INT64_C(0)))))) {
F.p2962 = y_range(y_mod(Y_DEFI(F.v7092), Y_DEFI(F.v7094)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v7100) == v237)) {
F.p2962 = y_range(y_mul(Y_DEFI(F.v7092), Y_DEFI(F.v7094)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v7100) == v399)) {
F.p2962 = y_range(y_sub((y_add(Y_DEFI(F.v7092), Y_DEFI(F.v7094))), (y_mul(Y_DEFI(F.v7092), Y_DEFI(F.v7094)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v7100) == v489)) {
F.p2962 = y_range(y_mod((y_add(Y_DEFI(F.v7092), Y_DEFI(F.v7094))), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else {
F.p2961 = 0;
Y_FLUSH();
}
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v792)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2960))).f_a), &F.p2961, &F.p2962);
Y_FLUSH();
F.p2962 = y_range(y_sub(INT64_C(1), Y_DEFI(F.p2962)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2960))).f_kind) == v780)) {
yr2967_ManifestStd(F.p2960, &F.p2961, &F.p2962);
Y_FLUSH();
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
}
(*F.p2961_o) = F.p2961;
(*F.p2962_o) = F.p2962;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2967_ManifestStd(void * a_p2968, rt_int * a_p2969, rt_int * a_p2970) {
struct yf2971 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2968 = a_p2968;
F.p2969_o = a_p2969;
F.p2970_o = a_p2970;
F.v7132 = Y_UNDEF_P;
F.v7134 = Y_UNDEF_I;
F.v7136 = Y_UNDEF_I;
F.v7138 = Y_UNDEF_I;
F.v7140 = Y_UNDEF_I;
F.v7142 = Y_UNDEF_I;
F.v7144 = Y_UNDEF_P;
F.v7146 = Y_UNDEF_P;
F.p2969 = 0;
Y_FLUSH();
F.p2970 = INT64_C(0);
Y_FLUSH();
F.v7132 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2968))).f_name));
Y_FLUSH();
if ((Y_DEFP(F.v7132) == ((void *)0))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
F.v7132 = yr2483_Real(Y_DEFP(F.v7132));
Y_FLUSH();
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7132)))).f_kind) == v891))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
F.v7134 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7132)))).f_mval);
Y_FLUSH();
if ((((((Y_DEFI(F.v7134) == v1372)) || ((Y_DEFI(F.v7134) == v1375))) || ((Y_DEFI(F.v7134) == v1378))) || ((Y_DEFI(F.v7134) == v1381)))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2968))).f_a)) == INT64_C(1)))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2968))).f_a), ((void *)0), &F.v7142, &F.v7144);
Y_FLUSH();
if ((!yr2502_IsDiscrete(Y_DEFP(F.v7144)))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7134) == v1378)) || ((Y_DEFI(F.v7134) == v1381)))) {
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_elem) == ((void *)0)))) {
F.v7144 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_elem);
Y_FLUSH();
}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_hasm))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
F.p2969 = 1;
Y_FLUSH();
if ((Y_DEFI(F.v7134) == v1378)) {
F.p2970 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_mlo);
Y_FLUSH();
} else {
F.p2970 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_mhi);
Y_FLUSH();
}
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2968))).f_a), &F.v7138, &F.p2970);
Y_FLUSH();
if ((!Y_DEFI(F.v7138))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7134) == v1372)) {
F.p2970 = y_range(y_add(Y_DEFI(F.p2970), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else {
F.p2970 = y_range(y_sub(Y_DEFI(F.p2970), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_elem) == ((void *)0)))) {
F.v7144 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_elem);
Y_FLUSH();
}
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_kind) == v804))) && ((((Y_DEFI(F.p2970) < INT64_C(0))) || ((Y_DEFI(F.p2970) >= Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_nlits))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2968))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2968))).f_name), y_str(" goes beyond the end of the enumeration (XI)", 44));
Y_FLUSH();
}
F.p2969 = 1;
Y_FLUSH();
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7134) == v1366)) || ((Y_DEFI(F.v7134) == v1369)))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2968))).f_a)) == INT64_C(2)))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2968))).f_a)))).f_next), &F.v7140, &F.v7136);
Y_FLUSH();
if ((!Y_DEFI(F.v7140))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2968))).f_a), ((void *)0), &F.v7142, &F.v7144);
Y_FLUSH();
if (((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_kind) == v822))) || ((Y_DEFI(F.v7136) < INT64_C(1)))) || ((Y_DEFI(F.v7136) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_nidx))))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
F.v7146 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7144)))).f_idx);
Y_FLUSH();
F.lo7163 = INT64_C(2);
F.hi7164 = Y_DEFI(F.v7136);
{ rt_int hi7168 = F.hi7164;
for (rt_int i7167 = F.lo7163; i7167 <= hi7168; i7167++) { F.c_7166 = i7167; Y_TICK();
F.v7146 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7146)))).f_link);
Y_FLUSH();
if (i7167 == hi7168) break;
}}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7146)))).f_hasm))) {
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
F.p2969 = 1;
Y_FLUSH();
if ((Y_DEFI(F.v7134) == v1366)) {
F.p2970 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7146)))).f_mlo);
Y_FLUSH();
} else {
F.p2970 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7146)))).f_mhi);
Y_FLUSH();
}
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
}
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2975_NeedsConv(void * a_p2976, void * a_p2977) {
struct yf2978 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2976 = a_p2976;
F.p2977 = a_p2977;
if ((F.p2976 == F.p2977)) {
{ rt_int rv7174 = 0;
y_use = F.yu; return rv7174; }
}
if (yr2502_IsDiscrete(F.p2976)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_lo) == INT64_C(0))) {
{ rt_int rv7177 = 0;
y_use = F.yu; return rv7177; }
}
{ rt_int rv7178 = (!((((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_hasm) && Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_hasm)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_mlo) <= Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_mlo)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_mhi) <= Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_mhi))))));
y_use = F.yu; return rv7178; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_kind) == v810)) {
{ rt_int rv7180 = (!(Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_lo) == INT64_C(0)));
y_use = F.yu; return rv7180; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_kind) == v807)) {
{ rt_int rv7182 = ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_lo) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_fsn) == Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_fsn))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_fsd) == Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_fsd)))));
y_use = F.yu; return rv7182; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_kind) == v825)) {
{ rt_int rv7183 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_kind) == v825)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_cname) == Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_cname)))));
y_use = F.yu; return rv7183; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2976))).f_kind) == v843)))) {
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_kind) == v822))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2977))).f_kind) == v843))))) {
{ rt_int rv7185 = 0;
y_use = F.yu; return rv7185; }
}
{ rt_int rv7186 = yr2975_NeedsConv(Y_DEFP(((*(yR110 *)y_deref(F.p2976))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2977))).f_elem));
y_use = F.yu; return rv7186; }
}
{ rt_int rv7188 = 0;
y_use = F.yu; return rv7188; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2982_ConvertRecord(rt_int a_p2983, void * a_p2984, void * a_p2985) {
struct yf2986 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2983 = a_p2983;
F.p2984 = a_p2984;
F.p2985 = a_p2985;
F.v7194 = Y_UNDEF_I;
F.v7196 = Y_UNDEF_I;
F.v7198 = Y_UNDEF_P;
F.v7200 = Y_UNDEF_P;
F.v7194 = yr1200_Fresh(y_str("cs", 2));
Y_FLUSH();
F.v7196 = yr1200_Fresh(y_str("cd", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(F.p2985));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7194));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(F.p2983);
Y_FLUSH();
yr1037_SA(y_str("; ", 2));
Y_FLUSH();
yr1044_ST(yr2551_CType(F.p2984));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7196));
Y_FLUSH();
yr1037_SA(y_str("; memset(&", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7196));
Y_FLUSH();
yr1037_SA(y_str(", 0, sizeof ", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7196));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
F.v7198 = Y_DEFP(((*(yR110 *)y_deref(F.p2984))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v7198) == ((void *)0)))) {
Y_TICK();
F.v7200 = yr2806_FindField(F.p2985, Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7198)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v7200) == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7200)))).f_variant) == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
Y_FLUSH();
yr1044_ST(yr3149_VariantTest(F.p2985, Y_DEFP(F.v7200), yr3530_Join(yr1061_T(y_str("(&", 2)), Y_DEFI(F.v7194), yr1061_T(y_str(")", 1)))));
Y_FLUSH();
yr1037_SA(y_str(") ", 2));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(F.v7196));
Y_FLUSH();
yr1037_SA(y_str(".f_", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7198)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr3040_Convert(yr3530_Join(Y_DEFI(F.v7194), yr1061_T(y_str(".f_", 3)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7198)))).f_name)), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7198)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7200)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
}
F.v7198 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7198)))).f_next);
Y_FLUSH();
}
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7196));
Y_FLUSH();
yr1037_SA(y_str("; })", 4));
Y_FLUSH();
{ rt_int rv7223 = yr1056_SE();
y_use = F.yu; return rv7223; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2990_ConvertArray(rt_int a_p2991, void * a_p2992, void * a_p2993) {
struct yf2994 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2991 = a_p2991;
F.p2992 = a_p2992;
F.p2993 = a_p2993;
F.v7229 = Y_UNDEF_I;
F.v7231 = Y_UNDEF_I;
F.v7233 = Y_UNDEF_I;
F.v7235 = Y_UNDEF_I;
F.v7237 = Y_UNDEF_I;
F.v7239 = Y_UNDEF_I;
F.v7229 = yr1200_Fresh(y_str("cs", 2));
Y_FLUSH();
F.v7231 = yr1200_Fresh(y_str("cd", 2));
Y_FLUSH();
F.v7233 = yr1200_Fresh(y_str("ck", 2));
Y_FLUSH();
F.v7235 = yr1200_Fresh(y_str("cn", 2));
Y_FLUSH();
F.v7237 = yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2992))).f_elem));
Y_FLUSH();
F.v7239 = yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2993))).f_elem));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ yarr ", 8));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7229));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(F.p2991);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7231));
Y_FLUSH();
yr1037_SA(y_str("; rt_int ", 9));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7235));
Y_FLUSH();
yr1037_SA(y_str(" = y_count(", 11));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7229));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2993))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2992))).f_kind) == v822)) {
yr1037_SA(y_str(" y_init(", 8));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(F.p2992));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7231));
Y_FLUSH();
yr1037_SA(y_str("); if (y_count(", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7231));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2992))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str(") != ", 5));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7235));
Y_FLUSH();
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str("array lengths differ", 20));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
} else {
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7231));
Y_FLUSH();
yr1037_SA(y_str(" = y_like(", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7229));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2993))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2992))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
}
yr1037_SA(y_str(" for (rt_int ", 13));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7233));
Y_FLUSH();
yr1037_SA(y_str(" = 0; ", 6));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7233));
Y_FLUSH();
yr1037_SA(y_str(" < ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7235));
Y_FLUSH();
yr1037_SA(y_str("; ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7233));
Y_FLUSH();
yr1037_SA(y_str("++) ((", 6));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7237));
Y_FLUSH();
yr1037_SA(y_str(" *)", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7231));
Y_FLUSH();
yr1037_SA(y_str(".p)[", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7233));
Y_FLUSH();
yr1037_SA(y_str("] = ", 4));
Y_FLUSH();
yr1044_ST(yr3040_Convert(yr3530_Join(yr1061_T(y_str("((", 2)), Y_DEFI(F.v7239), yr3530_Join(yr1061_T(y_str(" *)", 3)), Y_DEFI(F.v7229), yr3530_Join(yr1061_T(y_str(".p)[", 4)), Y_DEFI(F.v7233), yr1061_T(y_str("]", 1))))), Y_DEFP(((*(yR110 *)y_deref(F.p2992))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2993))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str("; ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7231));
Y_FLUSH();
yr1037_SA(y_str("; })", 4));
Y_FLUSH();
{ rt_int rv7280 = yr1056_SE();
y_use = F.yu; return rv7280; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2998_RescaleCode(rt_int a_p2999, void * a_p3000, void * a_p3001) {
struct yf3002 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2999 = a_p2999;
F.p3000 = a_p3000;
F.p3001 = a_p3001;
F.v7286 = Y_UNDEF_I;
F.v7288 = Y_UNDEF_I;
F.v7290 = Y_UNDEF_I;
yr2681_ScaleRatio(F.p3000, F.p3001, &F.v7286, &F.v7288, &F.v7290);
Y_FLUSH();
if (Y_DEFI(F.v7290)) {
{ rt_int rv7291 = F.p2999;
y_use = F.yu; return rv7291; }
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_fix_conv(", 11));
Y_FLUSH();
yr1044_ST(F.p2999);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7286));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7288));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7296 = yr1056_SE();
y_use = F.yu; return rv7296; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3006_CommonScale(rt_int * a_p3007, void * a_p3008, rt_int * a_p3009, void * a_p3010, void * a_p3011, rt_int a_p3012) {
struct yf3013 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3007 = a_p3007;
F.p3008 = a_p3008;
F.p3009 = a_p3009;
F.p3010 = a_p3010;
F.p3011 = a_p3011;
F.p3012 = a_p3012;
F.v7305 = Y_UNDEF_I;
F.v7307 = Y_UNDEF_I;
F.v7305 = yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p3008))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p3010))).f_fsn));
Y_FLUSH();
F.v7307 = yr2665_MulChk(y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p3008))).f_fsd), yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p3008))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p3010))).f_fsd))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR110 *)y_deref(F.p3010))).f_fsd), F.p3012);
Y_FLUSH();
yr2698_SetScale(F.p3011, Y_DEFI(F.v7305), Y_DEFI(F.v7307));
Y_FLUSH();
(*F.p3007) = yr2998_RescaleCode(Y_DEFI((*F.p3007)), F.p3008, F.p3011);
Y_FLUSH();
(*F.p3009) = yr2998_RescaleCode(Y_DEFI((*F.p3009)), F.p3010, F.p3011);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3017_FixLiteral(void * a_p3018, rt_int * a_p3019, void * * a_p3020) {
struct yf3021 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3018 = a_p3018;
F.p3019_o = a_p3019;
F.p3020_o = a_p3020;
F.v7314 = Y_UNDEF_I;
F.v7314 = Y_DEFI(((*(yR105 *)y_deref(F.p3018))).f_ival);
F.v7316 = Y_UNDEF_I;
F.v7316 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7314))]);
F.p3020 = yr2496_CopyRep(Y_DEFP(v1356));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3020)))).f_abstract = 0;
Y_FLUSH();
if ((Y_DEFI(F.v7316) >= INT64_C(0))) {
yr2698_SetScale(Y_DEFP(F.p3020), yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7314))]), Y_DEFI(F.v7316), Y_DEFI(((*(yR105 *)y_deref(F.p3018))).f_line)), INT64_C(1));
Y_FLUSH();
} else {
yr2698_SetScale(Y_DEFP(F.p3020), INT64_C(1), yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7314))]), y_range(y_neg(Y_DEFI(F.v7316)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p3018))).f_line)));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
Y_FLUSH();
yr1050_SI(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7314))]));
Y_FLUSH();
yr1037_SA(y_str("))", 2));
Y_FLUSH();
F.p3019 = yr1056_SE();
Y_FLUSH();
(*F.p3019_o) = F.p3019;
(*F.p3020_o) = F.p3020;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3025_ManifestFix(void * a_p3026, rt_int * a_p3027, rt_int * a_p3028, rt_int * a_p3029) {
struct yf3030 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3026 = a_p3026;
F.p3027_o = a_p3027;
F.p3028_o = a_p3028;
F.p3029_o = a_p3029;
F.v7330 = Y_UNDEF_I;
F.v7332 = Y_UNDEF_I;
F.v7334 = Y_UNDEF_I;
F.v7336 = Y_UNDEF_I;
F.v7338 = Y_UNDEF_I;
F.v7340 = Y_UNDEF_I;
F.p3027 = 0;
Y_FLUSH();
F.p3028 = INT64_C(0);
Y_FLUSH();
F.p3029 = INT64_C(1);
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_kind) == v762)) {
F.v7330 = Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_ival);
Y_FLUSH();
F.v7332 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7330))]);
Y_FLUSH();
F.p3028 = Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7330))]);
Y_FLUSH();
if ((Y_DEFI(F.v7332) >= INT64_C(0))) {
F.p3028 = yr2665_MulChk(Y_DEFI(F.p3028), yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7330))]), Y_DEFI(F.v7332), Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_line)), Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_line));
Y_FLUSH();
} else {
F.p3029 = yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7330))]), y_range(y_neg(Y_DEFI(F.v7332)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_line));
Y_FLUSH();
}
F.p3027 = 1;
Y_FLUSH();
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_kind) == v759)) {
F.p3028 = Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_ival);
Y_FLUSH();
F.p3027 = 1;
Y_FLUSH();
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_kind) == v801)) {
yr3025_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p3026))).f_a), &F.p3027, &F.p3028, &F.p3029);
Y_FLUSH();
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_kind) == v795)) {
yr3025_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p3026))).f_a), &F.p3027, &F.p3028, &F.p3029);
Y_FLUSH();
F.p3028 = y_range(y_neg(Y_DEFI(F.p3028)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_kind) == v798)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_name) == v579)))) {
yr3025_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p3026))).f_a), &F.p3027, &F.p3028, &F.p3029);
Y_FLUSH();
yr3025_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p3026))).f_b), &F.v7340, &F.v7336, &F.v7338);
Y_FLUSH();
F.p3027 = (Y_DEFI(F.p3027) && Y_DEFI(F.v7340));
Y_FLUSH();
F.p3028 = yr2665_MulChk(Y_DEFI(F.p3028), Y_DEFI(F.v7336), Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_line));
Y_FLUSH();
F.p3029 = yr2665_MulChk(Y_DEFI(F.p3029), Y_DEFI(F.v7338), Y_DEFI(((*(yR105 *)y_deref(F.p3026))).f_line));
Y_FLUSH();
}
F.v7334 = yr2658_Gcd(Y_DEFI(F.p3028), Y_DEFI(F.p3029));
Y_FLUSH();
F.p3028 = y_range(y_div(Y_DEFI(F.p3028), Y_DEFI(F.v7334)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.p3029 = y_range(y_div(Y_DEFI(F.p3029), Y_DEFI(F.v7334)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
(*F.p3027_o) = F.p3027;
(*F.p3028_o) = F.p3028;
(*F.p3029_o) = F.p3029;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3034_FloatChk(rt_int a_p3035) {
struct yf3036 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3035 = a_p3035;
{ rt_int rv7355 = yr3530_Join(yr1061_T(y_str("y_fchk(", 7)), F.p3035, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv7355; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3040_Convert(rt_int a_p3041, void * a_p3042, void * a_p3043) {
struct yf3044 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3041 = a_p3041;
F.p3042 = a_p3042;
F.p3043 = a_p3043;
F.v7361 = Y_UNDEF_I;
F.v7363 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3043))).f_kind) == v846)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v822))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_nidx) == INT64_C(1))))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3042))).f_idx)))).f_hasm) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3043))).f_nlits) == (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3042))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3042))).f_idx)))).f_mlo))), INT64_C(1)))))))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("a string of ", 12));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3043))).f_nlits));
Y_FLUSH();
yr1037_SA(y_str(" characters for an array of ", 28));
Y_FLUSH();
yr1050_SI(y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3042))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3042))).f_idx)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr1037_SA(y_str(" (VI.B.1)", 9));
Y_FLUSH();
F.v7361 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(Y_DEFI(v1000), Y_DEFI(F.v7361));
Y_FLUSH();
}
}
if ((!yr2975_NeedsConv(F.p3042, F.p3043))) {
{ rt_int rv7374 = F.p3041;
y_use = F.yu; return rv7374; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v825)) {
{ rt_int rv7375 = yr2982_ConvertRecord(F.p3041, F.p3042, F.p3043);
y_use = F.yu; return rv7375; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v843)))) {
{ rt_int rv7376 = yr2990_ConvertArray(F.p3041, F.p3042, F.p3043);
y_use = F.yu; return rv7376; }
}
if (yr3347_Suppressed(v1480)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v807)) {
{ rt_int rv7377 = yr2998_RescaleCode(F.p3041, F.p3043, F.p3042);
y_use = F.yu; return rv7377; }
}
{ rt_int rv7378 = F.p3041;
y_use = F.yu; return rv7378; }
}
if (yr2502_IsDiscrete(F.p3042)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_range(", 8));
Y_FLUSH();
yr1044_ST(F.p3041);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2632_LoText(F.p3042));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2638_HiText(F.p3042));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7383 = yr1056_SE();
y_use = F.yu; return rv7383; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v810)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_frange(", 9));
Y_FLUSH();
yr1044_ST(F.p3041);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2632_LoText(F.p3042));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2638_HiText(F.p3042));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7388 = yr1056_SE();
y_use = F.yu; return rv7388; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_kind) == v807)) {
F.v7361 = yr2998_RescaleCode(F.p3041, F.p3043, F.p3042);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3042))).f_lo) == INT64_C(0))) {
{ rt_int rv7390 = Y_DEFI(F.v7361);
y_use = F.yu; return rv7390; }
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_fix_range(", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7361));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2632_LoText(F.p3042));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2638_HiText(F.p3042));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7395 = yr1056_SE();
y_use = F.yu; return rv7395; }
}
{ rt_int rv7396 = F.p3041;
y_use = F.yu; return rv7396; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3048_StoreText(rt_int a_p3049, void * a_p3050, rt_int a_p3051, void * a_p3052, rt_int a_p3053) {
struct yf3054 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3049 = a_p3049;
F.p3050 = a_p3050;
F.p3051 = a_p3051;
F.p3052 = a_p3052;
F.p3053 = a_p3053;
F.v7404 = Y_UNDEF_I;
yr2584_CheckType(F.p3053, F.p3050, F.p3052);
Y_FLUSH();
if (yr2526_Deep(F.p3050)) {
F.v7404 = yr1200_Fresh(y_str("t", 1));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("{ ", 2));
Y_FLUSH();
yr1044_ST(yr2551_CType(F.p3050));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7404));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr3040_Convert(F.p3051, F.p3050, F.p3052));
Y_FLUSH();
yr1037_SA(y_str("; y_store(", 10));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(F.p3050));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(F.p3049);
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7404));
Y_FLUSH();
yr1037_SA(y_str("); }", 4));
Y_FLUSH();
{ rt_int rv7413 = yr1056_SE();
y_use = F.yu; return rv7413; }
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(F.p3049);
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr3040_Convert(F.p3051, F.p3050, F.p3052));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
{ rt_int rv7416 = yr1056_SE();
y_use = F.yu; return rv7416; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3058_Store(rt_int a_p3059, void * a_p3060, rt_int a_p3061, void * a_p3062, rt_int a_p3063) {
struct yf3064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3059 = a_p3059;
F.p3060 = a_p3060;
F.p3061 = a_p3061;
F.p3062 = a_p3062;
F.p3063 = a_p3063;
yr1132_Emit(yr3048_StoreText(F.p3059, F.p3060, F.p3061, F.p3062, F.p3063));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3068_IsVariable(void * a_p3069) {
struct yf3070 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3069 = a_p3069;
F.v7426 = Y_UNDEF_P;
F.v7428 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_kind) == v777)) {
F.v7426 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name));
Y_FLUSH();
if ((Y_DEFP(F.v7426) == ((void *)0))) {
{ rt_int rv7430 = 0;
y_use = F.yu; return rv7430; }
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7426)))).f_readonly)) {
{ rt_int rv7432 = 0;
y_use = F.yu; return rv7432; }
}
{ rt_int rv7433 = (Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v7426))))).f_kind) == v861);
y_use = F.yu; return rv7433; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_kind) == v789)) {
{ rt_int rv7435 = (Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_flag) == INT64_C(0));
y_use = F.yu; return rv7435; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_kind) == v786)) {
{ rt_int rv7436 = (yr3166_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a)) || yr3068_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a)));
y_use = F.yu; return rv7436; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_kind) == v783)) {
if ((!yr3068_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a)))) {
{ rt_int rv7438 = 0;
y_use = F.yu; return rv7438; }
}
F.v7428 = yr2806_FindField(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name));
Y_FLUSH();
if ((Y_DEFP(F.v7428) == ((void *)0))) {
{ rt_int rv7440 = 0;
y_use = F.yu; return rv7440; }
}
{ rt_int rv7441 = (!Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7428)))).f_isconst));
y_use = F.yu; return rv7441; }
}
{ rt_int rv7443 = 0;
y_use = F.yu; return rv7443; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3074_CheckPure(void * a_p3075) {
struct yf3076 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3075 = a_p3075;
F.v7447 = Y_UNDEF_P;
F.v7447 = F.p3075;
F.v7449 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_func))) {
y_use = F.yu; return;
}
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_kind) == v786)))) {
Y_TICK();
F.v7447 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_a);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_kind) == v789)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_flag) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3075))).f_line), y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
Y_FLUSH();
}
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_kind) == v777)) {
F.v7449 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v7449) == ((void *)0)))) {
F.v7449 = yr2483_Real(Y_DEFP(F.v7449));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7449)))).f_level) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3075))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7447)))).f_name), y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
Y_FLUSH();
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3080_LValue(void * a_p3081, rt_int * a_p3082, void * * a_p3083) {
struct yf3084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3081 = a_p3081;
F.p3082_o = a_p3082;
F.p3083_o = a_p3083;
F.v7458 = Y_UNDEF_P;
F.v7458 = Y_DEFP(v1712);
v1712 = F.p3081;
Y_FLUSH();
yr3107_Expr(F.p3081, ((void *)0), &F.p3082, &F.p3083);
Y_FLUSH();
v1712 = Y_DEFP(F.v7458);
Y_FLUSH();
if ((!yr3068_IsVariable(F.p3081))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3081))).f_line), y_str("a variable is needed here (IX.A.1)", 34));
Y_FLUSH();
}
(*F.p3082_o) = F.p3082;
(*F.p3083_o) = F.p3083;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3088_Paren(rt_int a_p3089) {
struct yf3090 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3089 = a_p3089;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(F.p3089);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7464 = yr1056_SE();
y_use = F.yu; return rv7464; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3094_Lit(void * a_p3095, rt_int a_p3096) {
struct yf3097 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3095 = a_p3095;
F.p3096 = a_p3096;
F.v7469 = Y_UNDEF_P;
F.v7469 = yr2496_CopyRep(F.p3095);
yr2719_SetRange(Y_DEFP(F.v7469), F.p3096, F.p3096);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v7469)))).f_elem = F.p3095;
Y_FLUSH();
{ void * rv7470 = Y_DEFP(F.v7469);
y_use = F.yu; return rv7470; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3101_Qualifier(void * a_p3102) {
struct yf3103 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3102 = a_p3102;
F.v7474 = Y_UNDEF_P;
F.v7474 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3102))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3102))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7474)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7474)))).f_kind) == v870))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3102))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3102))).f_d)))).f_name), y_str(" is not a type", 14));
Y_FLUSH();
}
{ void * rv7476 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7474)))).f_rep);
y_use = F.yu; return rv7476; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3107_Expr(void * a_p3108, void * a_p3109, rt_int * a_p3110, void * * a_p3111) {
struct yf3112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3108 = a_p3108;
F.p3109 = a_p3109;
F.p3110_o = a_p3110;
F.p3111_o = a_p3111;
F.v7483 = Y_UNDEF_I;
F.v7483 = Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_kind);
F.v7485 = Y_UNDEF_P;
F.v7487 = Y_UNDEF_I;
F.v7489 = Y_UNDEF_I;
F.v7491 = Y_UNDEF_P;
F.v7493 = Y_UNDEF_P;
F.v7495 = Y_UNDEF_P;
F.v7497 = Y_UNDEF_I;
F.v7499 = Y_UNDEF_I;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line);
Y_FLUSH();
if ((Y_DEFI(F.v7483) == v801)) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), F.p3109, &F.v7487, &F.p3111);
Y_FLUSH();
F.p3110 = yr3088_Paren(Y_DEFI(F.v7487));
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v759)) {
F.p3111 = yr3094_Lit(Y_DEFP(v1342), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_ival));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_d) == ((void *)0)))) {
F.v7493 = yr3101_Qualifier(F.p3108);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("an integer literal qualified by a type that is not INTEGER", 58));
Y_FLUSH();
}
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_tid);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_tname);
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("INT64_C(", 8));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_ival));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p3110 = yr1056_SE();
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v768)) {
F.v7493 = yr2935_AlphabetFor(F.p3108, F.p3109);
Y_FLUSH();
F.v7499 = yr2942_CharValue(Y_DEFP(F.v7493), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line));
Y_FLUSH();
F.p3111 = yr3094_Lit(Y_DEFP(F.v7493), Y_DEFI(F.v7499));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v7499));
Y_FLUSH();
F.p3110 = yr1056_SE();
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v771)) {
F.v7493 = yr2935_AlphabetFor(F.p3108, F.p3109);
Y_FLUSH();
F.v7487 = yr2950_StringCodes(Y_DEFP(F.v7493), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_text), &F.v7497, Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line));
Y_FLUSH();
F.p3111 = yr2489_NewRep(v846, yr1061_T(y_str("string", 6)));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_tname = yr1061_T(y_str("a string literal", 16));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_elem = Y_DEFP(F.v7493);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_nidx = INT64_C(1);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_nlits = Y_DEFI(F.v7497);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_str(", 6));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7487));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v7497));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p3110 = yr1056_SE();
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v765)) {
F.p3111 = Y_DEFP(v1354);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_d) == ((void *)0)))) {
F.p3111 = yr3101_Qualifier(F.p3108);
Y_FLUSH();
}
F.p3110 = yr3088_Paren(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_text));
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v762)) {
yr3017_FixLiteral(F.p3108, &F.p3110, &F.p3111);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_d) == ((void *)0)))) {
F.v7493 = yr3101_Qualifier(F.p3108);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_kind) == v807))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
Y_FLUSH();
}
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_tid);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_tname);
Y_FLUSH();
}
} else if ((Y_DEFI(F.v7483) == v774)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
Y_FLUSH();
}
F.p3111 = yr3101_Qualifier(F.p3108);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3111)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("NIL of a type that is not a pointer", 35));
Y_FLUSH();
}
F.p3110 = yr1061_T(y_str("((void *)0)", 11));
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_d) == ((void *)0)))) {
F.v7493 = yr3101_Qualifier(F.p3108);
Y_FLUSH();
F.v7485 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name), Y_DEFP(F.v7493));
Y_FLUSH();
if ((Y_DEFP(F.v7485) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name), y_str(" is not a literal of that type", 30));
Y_FLUSH();
}
} else {
F.v7485 = yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line));
Y_FLUSH();
}
yr3157_NameExpr(F.p3108, Y_DEFP(F.v7485), &F.p3110, &F.p3111);
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v780)) {
yr3373_CallExpr(F.p3108, F.p3109, 0, &F.p3110, &F.p3111);
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v783)) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), ((void *)0), &F.v7487, &F.v7493);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a)))).f_rep = Y_DEFP(F.v7493);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_kind) == v825))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name), y_str(": a component of something that is not a record", 47));
Y_FLUSH();
}
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_tname), y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
Y_FLUSH();
}
F.v7495 = yr2806_FindField(Y_DEFP(F.v7493), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name));
Y_FLUSH();
if ((Y_DEFP(F.v7495) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name), y_str(" is not a component of this record", 34));
Y_FLUSH();
}
F.p3111 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7495)))).f_rep);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7495)))).f_variant) == INT64_C(0)))) {
yr3454_CheckVariantSelected(F.p3108, Y_DEFP(F.v7493), Y_DEFP(F.v7495));
Y_FLUSH();
F.v7489 = yr1200_Fresh(y_str("vr", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(*({ ", 5));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v7493)));
Y_FLUSH();
yr1037_SA(y_str(" *", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7489));
Y_FLUSH();
yr1037_SA(y_str(" = &", 4));
Y_FLUSH();
yr1044_ST(yr3088_Paren(Y_DEFI(F.v7487)));
Y_FLUSH();
yr1037_SA(y_str("; if (!(", 8));
Y_FLUSH();
yr1044_ST(yr3149_VariantTest(Y_DEFP(F.v7493), Y_DEFP(F.v7495), Y_DEFI(F.v7489)));
Y_FLUSH();
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7489));
Y_FLUSH();
yr1037_SA(y_str("->f_", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name));
Y_FLUSH();
yr1037_SA(y_str("; }))", 5));
Y_FLUSH();
F.p3110 = yr1056_SE();
Y_FLUSH();
} else {
yr1026_SB();
Y_FLUSH();
yr1044_ST(yr3088_Paren(Y_DEFI(F.v7487)));
Y_FLUSH();
yr1037_SA(y_str(".f_", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name));
Y_FLUSH();
F.p3110 = yr1056_SE();
Y_FLUSH();
}
} else if ((((Y_DEFI(F.v7483) == v789)) && yr3318_UserOp(F.p3108, y_range(v618, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), ((void *)0), &F.p3110, &F.p3111))) {
((*(yR105 *)y_deref(F.p3108))).f_flag = INT64_C(1);
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v789)) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), ((void *)0), &F.v7487, &F.v7493);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("^ of something that is not a pointer", 36));
Y_FLUSH();
}
yr3597_NoteFreeDeref(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_tid));
Y_FLUSH();
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_forward), y_str(" is not declared", 16));
Y_FLUSH();
}
F.p3111 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7493)))).f_elem);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(*(", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.p3111)));
Y_FLUSH();
if (yr3347_Suppressed(v1495)) {
yr1037_SA(y_str(" *)y_derefw(", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7487));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(Y_DEFP(F.p3111)));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.p3111)));
Y_FLUSH();
if (yr2873_WordExact(Y_DEFP(F.p3111))) {
yr1037_SA(y_str(", 1))", 5));
Y_FLUSH();
} else {
yr1037_SA(y_str(", 0))", 5));
Y_FLUSH();
}
} else {
yr1037_SA(y_str(" *)y_deref(", 11));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7487));
Y_FLUSH();
yr1037_SA(y_str("))", 2));
Y_FLUSH();
}
F.p3110 = yr1056_SE();
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v786)) {
yr3172_IndexExpr(F.p3108, &F.p3110, &F.p3111);
Y_FLUSH();
} else if ((((Y_DEFI(F.v7483) == v792)) && yr3318_UserOp(F.p3108, y_range(v390, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), ((void *)0), &F.p3110, &F.p3111))) {
F.p3111 = Y_DEFP(F.p3111);
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v792)) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), Y_DEFP(v1344), &F.v7487, &F.v7493);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7493));
Y_FLUSH();
F.p3111 = Y_DEFP(v1344);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(!", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7487));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p3110 = yr1056_SE();
Y_FLUSH();
} else if ((Y_DEFI(F.v7483) == v795)) {
if ((!yr3318_UserOp(F.p3108, y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), ((void *)0), &F.p3110, &F.p3111))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), F.p3109, &F.v7487, &F.v7493);
Y_FLUSH();
yr3180_NegExpr(F.p3108, Y_DEFI(F.v7487), Y_DEFP(F.v7493), &F.p3110, &F.p3111);
Y_FLUSH();
}
} else if ((Y_DEFI(F.v7483) == v798)) {
yr3249_BinExpr(F.p3108, F.p3109, &F.p3110, &F.p3111);
Y_FLUSH();
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("not an expression", 17));
Y_FLUSH();
}
((*(yR105 *)y_deref(F.p3108))).f_rep = Y_DEFP(F.p3111);
Y_FLUSH();
yr3116_CheckDefined(F.p3108, &F.p3110, Y_DEFP(F.p3111));
Y_FLUSH();
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3116_CheckDefined(void * a_p3117, rt_int * a_p3118, void * a_p3119) {
struct yf3120 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3117 = a_p3117;
F.p3118 = a_p3118;
F.p3119 = a_p3119;
F.v7547 = Y_UNDEF_I;
F.v7547 = Y_DEFI(((*(yR105 *)y_deref(F.p3117))).f_kind);
F.v7549 = Y_UNDEF_I;
F.v7549 = INT64_C(0);
if ((((Y_DEFI(F.v7547) == v786)) && yr3166_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3117))).f_a)))) {
y_use = F.yu; return;
}
if ((((((Y_DEFI(F.v7547) == v777)) || ((Y_DEFI(F.v7547) == v783))) || ((Y_DEFI(F.v7547) == v786))) || ((Y_DEFI(F.v7547) == v789)))) {
((*(yR105 *)y_deref(F.p3117))).f_text = INT64_C(0);
Y_FLUSH();
} else {
y_use = F.yu; return;
}
if ((F.p3117 == Y_DEFP(v1712))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7547) == v777)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3117))).f_ival) == INT64_C(1)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7547) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3117))).f_flag) == INT64_C(0)))))) {
y_use = F.yu; return;
}
if (yr3347_Suppressed(v1489)) {
y_use = F.yu; return;
}
F.v7549 = yr3130_UndefMacro(F.p3119);
Y_FLUSH();
if ((Y_DEFI(F.v7549) == INT64_C(0))) {
y_use = F.yu; return;
}
((*(yR105 *)y_deref(F.p3117))).f_text = Y_DEFI((*F.p3118));
Y_FLUSH();
if ((!yr3124_Addressable(F.p3117))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_vchk_", 7));
Y_FLUSH();
yr1031_SC(yr1103_TChar(Y_DEFI(F.v7549), INT64_C(6)));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
F.v7549 = yr1056_SE();
Y_FLUSH();
}
(*F.p3118) = yr3530_Join(Y_DEFI(F.v7549), Y_DEFI((*F.p3118)), yr1061_T(y_str(")", 1)));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3124_Addressable(void * a_p3125) {
struct yf3126 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3125 = a_p3125;
F.v7562 = Y_UNDEF_P;
F.v7562 = F.p3125;
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7562)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7562)))).f_kind) == v801)))) {
Y_TICK();
F.v7562 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7562)))).f_a);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7562)))).f_kind) == v780)) {
{ rt_int rv7564 = 0;
y_use = F.yu; return rv7564; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7562)))).f_kind) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7562)))).f_flag) == INT64_C(0)))))) {
{ rt_int rv7567 = 0;
y_use = F.yu; return rv7567; }
}
{ rt_int rv7569 = 1;
y_use = F.yu; return rv7569; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3130_UndefMacro(void * a_p3131) {
struct yf3132 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3131 = a_p3131;
F.v7573 = Y_UNDEF_I;
F.v7573 = Y_DEFI(((*(yR110 *)y_deref(F.p3131))).f_kind);
if (((((Y_DEFI(F.v7573) == v804)) || ((Y_DEFI(F.v7573) == v813))) || ((Y_DEFI(F.v7573) == v816)))) {
{ rt_int rv7575 = yr1061_T(y_str("Y_DEFI(", 7));
y_use = F.yu; return rv7575; }
}
if ((((Y_DEFI(F.v7573) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3131))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7578 = yr1061_T(y_str("Y_DEFB(", 7));
y_use = F.yu; return rv7578; }
}
if ((Y_DEFI(F.v7573) == v810)) {
{ rt_int rv7580 = yr1061_T(y_str("Y_DEFF(", 7));
y_use = F.yu; return rv7580; }
}
if ((Y_DEFI(F.v7573) == v807)) {
{ rt_int rv7582 = yr1061_T(y_str("Y_DEFX(", 7));
y_use = F.yu; return rv7582; }
}
if ((Y_DEFI(F.v7573) == v828)) {
{ rt_int rv7584 = yr1061_T(y_str("Y_DEFP(", 7));
y_use = F.yu; return rv7584; }
}
if ((Y_DEFI(F.v7573) == v834)) {
{ rt_int rv7586 = yr1061_T(y_str("Y_DEFS(", 7));
y_use = F.yu; return rv7586; }
}
{ rt_int rv7588 = INT64_C(0);
y_use = F.yu; return rv7588; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3136_UndefValue(void * a_p3137) {
struct yf3138 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3137 = a_p3137;
F.v7592 = Y_UNDEF_I;
F.v7592 = Y_DEFI(((*(yR110 *)y_deref(F.p3137))).f_kind);
if (((((Y_DEFI(F.v7592) == v804)) || ((Y_DEFI(F.v7592) == v813))) || ((Y_DEFI(F.v7592) == v816)))) {
{ rt_int rv7594 = yr1061_T(y_str("Y_UNDEF_I", 9));
y_use = F.yu; return rv7594; }
}
if ((((Y_DEFI(F.v7592) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3137))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7597 = yr1061_T(y_str("Y_UNDEF_B", 9));
y_use = F.yu; return rv7597; }
}
if ((Y_DEFI(F.v7592) == v810)) {
{ rt_int rv7599 = yr1061_T(y_str("Y_UNDEF_F_VALUE", 15));
y_use = F.yu; return rv7599; }
}
if ((Y_DEFI(F.v7592) == v807)) {
{ rt_int rv7601 = yr1061_T(y_str("Y_UNDEF_X", 9));
y_use = F.yu; return rv7601; }
}
if ((Y_DEFI(F.v7592) == v828)) {
{ rt_int rv7603 = yr1061_T(y_str("Y_UNDEF_P", 9));
y_use = F.yu; return rv7603; }
}
{ rt_int rv7605 = INT64_C(0);
y_use = F.yu; return rv7605; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3142_RawCode(void * a_p3143, rt_int a_p3144) {
struct yf3145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3143 = a_p3143;
F.p3144 = a_p3144;
if ((((((((Y_DEFI(((*(yR105 *)y_deref(F.p3143))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3143))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3143))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3143))).f_kind) == v789)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3143))).f_text) == INT64_C(0)))))) {
{ rt_int rv7610 = Y_DEFI(((*(yR105 *)y_deref(F.p3143))).f_text);
y_use = F.yu; return rv7610; }
}
{ rt_int rv7611 = F.p3144;
y_use = F.yu; return rv7611; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3149_VariantTest(void * a_p3150, void * a_p3151, rt_int a_p3152) {
struct yf3153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3150 = a_p3150;
F.p3151 = a_p3151;
F.p3152 = a_p3152;
F.v7617 = Y_UNDEF_P;
F.v7617 = Y_DEFP(((*(yR115 *)y_deref(F.p3151))).f_labels);
F.v7619 = Y_UNDEF_I;
F.v7621 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("0", 1));
Y_FLUSH();
while ((!(Y_DEFP(F.v7617) == ((void *)0)))) {
Y_TICK();
yr2959_Manifest(Y_DEFP(F.v7617), &F.v7619, &F.v7621);
Y_FLUSH();
yr1037_SA(y_str(" || ", 4));
Y_FLUSH();
yr1044_ST(F.p3152);
Y_FLUSH();
yr1037_SA(y_str("->f_", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3150))).f_selector)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(" == ", 4));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v7621));
Y_FLUSH();
F.v7617 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7617)))).f_next);
Y_FLUSH();
}
{ rt_int rv7626 = yr1056_SE();
y_use = F.yu; return rv7626; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3157_NameExpr(void * a_p3158, void * a_p3159, rt_int * a_p3160, void * * a_p3161) {
struct yf3162 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3158 = a_p3158;
F.p3159 = a_p3159;
F.p3160_o = a_p3160;
F.p3161_o = a_p3161;
F.v7633 = Y_UNDEF_P;
F.v7633 = yr2483_Real(F.p3159);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_kind) == v873)) {
if ((((Y_DEFP(((*(yR105 *)y_deref(F.p3158))).f_d) == ((void *)0))) && yr2437_Ambiguous(Y_DEFP(F.v7633)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3158))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3158))).f_name), y_str(" names values of two types here: qualify it (VI.A.3)", 52));
Y_FLUSH();
}
F.p3161 = yr3094_Lit(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_rep), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_mval));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_mval));
Y_FLUSH();
F.p3160 = yr1056_SE();
Y_FLUSH();
(*F.p3160_o) = F.p3160;
(*F.p3161_o) = F.p3161;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_kind) == v864)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_kind) == v861)) {
((*(yR105 *)y_deref(F.p3158))).f_ival = INT64_C(1);
Y_FLUSH();
} else {
((*(yR105 *)y_deref(F.p3158))).f_ival = INT64_C(0);
Y_FLUSH();
}
yr3591_NoteFree(Y_DEFP(F.v7633));
Y_FLUSH();
F.p3161 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_rep);
Y_FLUSH();
F.p3160 = yr2477_SymPath(Y_DEFP(F.v7633));
Y_FLUSH();
(*F.p3160_o) = F.p3160;
(*F.p3161_o) = F.p3161;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7633)))).f_kind) == v876)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3158))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3158))).f_name), y_str(" is a routine: a call needs ()", 30));
Y_FLUSH();
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3158))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3158))).f_name), y_str(" is not a value", 15));
Y_FLUSH();
(*F.p3160_o) = F.p3160;
(*F.p3161_o) = F.p3161;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3166_IsMainStore(void * a_p3167) {
struct yf3168 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3167 = a_p3167;
F.v7642 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3167))).f_kind) == v777))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3167))).f_d) == ((void *)0)))))) {
{ rt_int rv7644 = 0;
y_use = F.yu; return rv7644; }
}
F.v7642 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3167))).f_name));
Y_FLUSH();
if ((Y_DEFP(F.v7642) == ((void *)0))) {
{ rt_int rv7646 = 0;
y_use = F.yu; return rv7646; }
}
if ((!yr2431_Resolved(Y_DEFP(F.v7642)))) {
{ rt_int rv7648 = 0;
y_use = F.yu; return rv7648; }
}
F.v7642 = yr2483_Real(Y_DEFP(F.v7642));
Y_FLUSH();
{ rt_int rv7649 = (((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7642)))).f_kind) == v891)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7642)))).f_mval) == v1477)));
y_use = F.yu; return rv7649; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3172_IndexExpr(void * a_p3173, rt_int * a_p3174, void * * a_p3175) {
struct yf3176 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3173 = a_p3173;
F.p3174_o = a_p3174;
F.p3175_o = a_p3175;
F.v7655 = Y_UNDEF_I;
F.v7657 = Y_UNDEF_I;
F.v7659 = Y_UNDEF_I;
F.v7661 = Y_UNDEF_P;
F.v7663 = Y_UNDEF_P;
F.v7665 = Y_UNDEF_P;
F.v7667 = Y_UNDEF_P;
F.v7669 = Y_UNDEF_I;
F.v7671 = Y_UNDEF_I;
if (yr3166_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b)) == INT64_C(1)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("MAIN_STORE_ARRAY has one subscript", 34));
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b), Y_DEFP(v1959), &F.v7657, &F.v7663);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), Y_DEFP(v1959), Y_DEFP(F.v7663));
Y_FLUSH();
F.p3175 = Y_DEFP(v1961);
Y_FLUSH();
((*(yR105 *)y_deref(F.p3173))).f_text = yr3530_Join(yr1061_T(y_str("(*y_mem_word(", 13)), Y_DEFI(F.v7657), yr1061_T(y_str("))", 2)));
Y_FLUSH();
if ((F.p3173 == Y_DEFP(v1712))) {
F.p3174 = Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_text);
Y_FLUSH();
} else {
F.p3174 = yr3530_Join(yr1061_T(y_str("y_mem_get(", 10)), Y_DEFI(F.v7657), yr1061_T(y_str(")", 1)));
Y_FLUSH();
}
(*F.p3174_o) = F.p3174;
(*F.p3175_o) = F.p3175;
y_use = F.yu; return;
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a), ((void *)0), &F.v7655, &F.v7661);
Y_FLUSH();
if ((!yr2514_IsArrayLike(Y_DEFP(F.v7661)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("[] of something that is not an array", 36));
Y_FLUSH();
}
F.v7669 = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b));
Y_FLUSH();
if ((!(Y_DEFI(F.v7669) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7661)))).f_nidx)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3173))).f_line), y_str("the number of subscripts is not the number of dimensions", 56));
Y_FLUSH();
}
F.p3175 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7661)))).f_elem);
Y_FLUSH();
F.v7671 = (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_a)))).f_kind) == v789)));
Y_FLUSH();
if (Y_DEFI(F.v7671)) {
F.v7659 = Y_DEFI(F.v7655);
Y_FLUSH();
} else {
F.v7659 = yr1200_Fresh(y_str("ya", 2));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
if ((!Y_DEFI(F.v7671))) {
yr1037_SA(y_str("(*({ yarr ", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7659));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7655));
Y_FLUSH();
yr1037_SA(y_str("; &", 3));
Y_FLUSH();
}
yr1037_SA(y_str("((", 2));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.p3175)));
Y_FLUSH();
yr1037_SA(y_str(" *)(", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7659));
Y_FLUSH();
yr1037_SA(y_str(").p)[y_ix", 9));
Y_FLUSH();
if (yr3347_Suppressed(v1492)) {
yr1037_SA(y_str("w", 1));
Y_FLUSH();
}
yr1050_SI(Y_DEFI(F.v7669));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7659));
Y_FLUSH();
F.p3174 = yr1056_SE();
Y_FLUSH();
F.v7667 = Y_DEFP(((*(yR105 *)y_deref(F.p3173))).f_b);
Y_FLUSH();
F.v7665 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7661)))).f_idx);
Y_FLUSH();
while ((!(Y_DEFP(F.v7667) == ((void *)0)))) {
Y_TICK();
yr3107_Expr(Y_DEFP(F.v7667), Y_DEFP(F.v7665), &F.v7657, &F.v7663);
Y_FLUSH();
if ((((!(Y_DEFP(F.v7665) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7661)))).f_kind) == v822)))) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7667)))).f_line), Y_DEFP(F.v7665), Y_DEFP(F.v7663));
Y_FLUSH();
} else if ((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7663)))).f_kind) == v804)) || yr2502_IsDiscrete(Y_DEFP(F.v7663)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7667)))).f_line), y_str("a subscript is an integer or scalar value", 41));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.p3174));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7657));
Y_FLUSH();
F.p3174 = yr1056_SE();
Y_FLUSH();
if ((!(Y_DEFP(F.v7665) == ((void *)0)))) {
F.v7665 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7665)))).f_link);
Y_FLUSH();
}
F.v7667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7667)))).f_next);
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.p3174));
Y_FLUSH();
yr1037_SA(y_str(")]", 2));
Y_FLUSH();
if ((!Y_DEFI(F.v7671))) {
yr1037_SA(y_str("; }))", 5));
Y_FLUSH();
}
F.p3174 = yr1056_SE();
Y_FLUSH();
(*F.p3174_o) = F.p3174;
(*F.p3175_o) = F.p3175;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3180_NegExpr(void * a_p3181, rt_int a_p3182, void * a_p3183, rt_int * a_p3184, void * * a_p3185) {
struct yf3186 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3181 = a_p3181;
F.p3182 = a_p3182;
F.p3183 = a_p3183;
F.p3184_o = a_p3184;
F.p3185_o = a_p3185;
yr1026_SB();
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3183))).f_kind) == v804)) {
F.p3185 = yr2496_CopyRep(F.p3183);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3185)))).f_lo = INT64_C(0);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3185)))).f_hasm = 0;
Y_FLUSH();
if (yr3347_Suppressed(v1483)) {
yr1037_SA(y_str("Y_NEGW(", 7));
Y_FLUSH();
} else {
yr1037_SA(y_str("y_neg(", 6));
Y_FLUSH();
}
yr1044_ST(F.p3182);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3183))).f_kind) == v810)) {
F.p3185 = yr2496_CopyRep(F.p3183);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3185)))).f_lo = INT64_C(0);
Y_FLUSH();
yr1037_SA(y_str("(-", 2));
Y_FLUSH();
yr1044_ST(F.p3182);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3183))).f_kind) == v807)) {
F.p3185 = yr2496_CopyRep(F.p3183);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p3185)))).f_lo = INT64_C(0);
Y_FLUSH();
yr1037_SA(y_str("y_fix_neg(", 10));
Y_FLUSH();
yr1044_ST(F.p3182);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3183))).f_kind) == v834)) {
F.p3185 = F.p3183;
Y_FLUSH();
yr1037_SA(y_str("y_set_compl(", 12));
Y_FLUSH();
yr1044_ST(F.p3182);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else {
v927 = 0;
Y_FLUSH();
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3181))).f_line), y_str("- of something that is not a number or a set", 44));
Y_FLUSH();
}
F.p3184 = yr1056_SE();
Y_FLUSH();
(*F.p3184_o) = F.p3184;
(*F.p3185_o) = F.p3185;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3190_Unbounded(void * a_p3191) {
struct yf3192 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3191 = a_p3191;
F.v7717 = Y_UNDEF_P;
F.v7717 = yr2496_CopyRep(F.p3191);
((*(yR110 *)y_deref(Y_DEFP(F.v7717)))).f_lo = INT64_C(0);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v7717)))).f_hi = INT64_C(0);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v7717)))).f_hasm = 0;
Y_FLUSH();
{ void * rv7721 = Y_DEFP(F.v7717);
y_use = F.yu; return rv7721; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3196_Call2(yarr a_p3198, rt_int a_p3199, rt_int a_p3200) {
struct yf3201 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3198 = a_p3198;
F.p3199 = a_p3199;
F.p3200 = a_p3200;
yr1026_SB();
Y_FLUSH();
yr1037_SA(F.p3198);
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(F.p3199);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(F.p3200);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7729 = yr1056_SE();
y_use = F.yu; return rv7729; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3205_Call2T(rt_int a_p3206, rt_int a_p3207, rt_int a_p3208) {
struct yf3209 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3206 = a_p3206;
F.p3207 = a_p3207;
F.p3208 = a_p3208;
yr1026_SB();
Y_FLUSH();
yr1044_ST(F.p3206);
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(F.p3207);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(F.p3208);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7737 = yr1056_SE();
y_use = F.yu; return rv7737; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3213_Infix(rt_int a_p3214, yarr a_p3216, rt_int a_p3217) {
struct yf3218 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3214 = a_p3214;
F.p3216 = a_p3216;
F.p3217 = a_p3217;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(F.p3214);
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1037_SA(F.p3216);
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(F.p3217);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv7746 = yr1056_SE();
y_use = F.yu; return rv7746; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3222_EqCode(rt_int a_p3223, void * a_p3224, rt_int a_p3225, void * a_p3226) {
struct yf3227 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3223 = a_p3223;
F.p3224 = a_p3224;
F.p3225 = a_p3225;
F.p3226 = a_p3226;
F.v7753 = Y_UNDEF_I;
F.v7755 = Y_UNDEF_I;
F.v7757 = Y_UNDEF_P;
F.v7757 = F.p3224;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3224))).f_kind) == v846)) {
F.v7757 = F.p3226;
Y_FLUSH();
}
if ((((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v825))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v846)))) {
F.v7753 = yr1200_Fresh(y_str("e", 1));
Y_FLUSH();
F.v7755 = yr1200_Fresh(y_str("e", 1));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v7757)));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7753));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(F.p3223);
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7755));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(F.p3225);
Y_FLUSH();
yr1037_SA(y_str("; y_eq(", 7));
Y_FLUSH();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v843)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
} else {
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v7757)));
Y_FLUSH();
}
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7753));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7755));
Y_FLUSH();
yr1037_SA(y_str("); })", 5));
Y_FLUSH();
{ rt_int rv7771 = yr1056_SE();
y_use = F.yu; return rv7771; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v834)) {
{ rt_int rv7773 = yr3196_Call2(y_str("y_set_eq", 8), F.p3223, F.p3225);
y_use = F.yu; return rv7773; }
}
{ rt_int rv7775 = yr3213_Infix(F.p3223, y_str("==", 2), F.p3225);
y_use = F.yu; return rv7775; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3231_IsOrdered(void * a_p3232) {
struct yf3233 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3232 = a_p3232;
if ((((((Y_DEFI(((*(yR110 *)y_deref(F.p3232))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3232))).f_kind) == v810))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3232))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3232))).f_kind) == v819)))) {
{ rt_int rv7779 = 1;
y_use = F.yu; return rv7779; }
}
{ rt_int rv7780 = (((Y_DEFI(((*(yR110 *)y_deref(F.p3232))).f_kind) == v816)) && Y_DEFI(((*(yR110 *)y_deref(F.p3232))).f_ordered));
y_use = F.yu; return rv7780; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3237_FDivName(void) {
struct yf3238 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if (yr3347_Suppressed(v1498)) {
{ rt_int rv7783 = yr1061_T(y_str("y_fdivw", 7));
y_use = F.yu; return rv7783; }
}
{ rt_int rv7785 = yr1061_T(y_str("y_fdiv", 6));
y_use = F.yu; return rv7785; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3242_FixToFloat(rt_int a_p3243, void * a_p3244) {
struct yf3245 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3243 = a_p3243;
F.p3244 = a_p3244;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_fix_float(", 12));
Y_FLUSH();
yr1044_ST(F.p3243);
Y_FLUSH();
yr1037_SA(y_str(", INT64_C(", 10));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3244))).f_fsn));
Y_FLUSH();
yr1037_SA(y_str("), INT64_C(", 11));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3244))).f_fsd));
Y_FLUSH();
yr1037_SA(y_str("))", 2));
Y_FLUSH();
{ rt_int rv7793 = yr1056_SE();
y_use = F.yu; return rv7793; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3249_BinExpr(void * a_p3250, void * a_p3251, rt_int * a_p3252, void * * a_p3253) {
struct yf3254 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3250 = a_p3250;
F.p3251 = a_p3251;
F.p3252_o = a_p3252;
F.p3253_o = a_p3253;
F.v7800 = Y_UNDEF_I;
F.v7800 = Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_name);
F.v7802 = Y_UNDEF_I;
F.v7804 = Y_UNDEF_I;
F.v7806 = Y_UNDEF_I;
F.v7808 = Y_UNDEF_P;
F.v7810 = Y_UNDEF_P;
F.v7812 = Y_UNDEF_P;
F.v7814 = Y_UNDEF_I;
if (yr3318_UserOp(F.p3250, Y_DEFI(F.v7800), Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_b), &F.p3252, &F.p3253)) {
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7800) == v237)) || ((Y_DEFI(F.v7800) == v399)))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_a), Y_DEFP(v1344), &F.v7802, &F.v7808);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7808));
Y_FLUSH();
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_b), Y_DEFP(v1344), &F.v7804, &F.v7810);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7810));
Y_FLUSH();
F.p3253 = Y_DEFP(v1344);
Y_FLUSH();
if ((Y_DEFI(F.v7800) == v237)) {
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str("&&", 2), Y_DEFI(F.v7804));
Y_FLUSH();
} else {
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str("||", 2), Y_DEFI(F.v7804));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7800) == v360)) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_b), ((void *)0), &F.v7804, &F.v7810);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7810)))).f_kind) == v834))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), y_str("IN needs a set on its right", 27));
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_a), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7810)))).f_elem), &F.v7802, &F.v7808);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7810)))).f_elem), Y_DEFP(F.v7808));
Y_FLUSH();
F.p3253 = Y_DEFP(v1344);
Y_FLUSH();
F.p3252 = yr3196_Call2(y_str("y_set_in", 8), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
F.v7812 = ((void *)0);
Y_FLUSH();
if (((((((((!(F.p3251 == ((void *)0)))) && ((!(Y_DEFI(F.v7800) == v585)))) && ((!(Y_DEFI(F.v7800) == v570)))) && ((!(Y_DEFI(F.v7800) == v588)))) && ((!(Y_DEFI(F.v7800) == v540)))) && ((!(Y_DEFI(F.v7800) == v591)))) && ((!(Y_DEFI(F.v7800) == v543))))) {
F.v7812 = F.p3251;
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_a), Y_DEFP(F.v7812), &F.v7802, &F.v7808);
Y_FLUSH();
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_b), Y_DEFP(F.v7808), &F.v7804, &F.v7810);
Y_FLUSH();
if ((((Y_DEFI(F.v7800) == v585)) || ((Y_DEFI(F.v7800) == v570)))) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFP(F.v7808), Y_DEFP(F.v7810));
Y_FLUSH();
if (yr2545_NonAssignable(Y_DEFP(F.v7808))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_opaque) && (((y_div(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_tname), y_str(" is opaque here: = is not exported (X.B.3)", 42));
Y_FLUSH();
}
F.p3253 = Y_DEFP(v1344);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_kind) == v807)) {
yr3006_CommonScale(&F.v7802, Y_DEFP(F.v7808), &F.v7804, Y_DEFP(F.v7810), yr3190_Unbounded(Y_DEFP(F.v7808)), Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line));
Y_FLUSH();
}
F.p3252 = yr3222_EqCode(Y_DEFI(F.v7802), Y_DEFP(F.v7808), Y_DEFI(F.v7804), Y_DEFP(F.v7810));
Y_FLUSH();
if ((Y_DEFI(F.v7800) == v570)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(!", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.p3252));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p3252 = yr1056_SE();
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((((((Y_DEFI(F.v7800) == v588)) || ((Y_DEFI(F.v7800) == v540))) || ((Y_DEFI(F.v7800) == v591))) || ((Y_DEFI(F.v7800) == v543)))) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFP(F.v7808), Y_DEFP(F.v7810));
Y_FLUSH();
if ((!yr3231_IsOrdered(Y_DEFP(F.v7808)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
Y_FLUSH();
}
F.p3253 = Y_DEFP(v1344);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_kind) == v807)) {
yr3006_CommonScale(&F.v7802, Y_DEFP(F.v7808), &F.v7804, Y_DEFP(F.v7810), yr3190_Unbounded(Y_DEFP(F.v7808)), Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line));
Y_FLUSH();
}
if ((Y_DEFI(F.v7800) == v588)) {
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str("<", 1), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v540)) {
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str("<=", 2), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v591)) {
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str(">", 1), Y_DEFI(F.v7804));
Y_FLUSH();
} else {
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str(">=", 2), Y_DEFI(F.v7804));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFP(F.v7808), Y_DEFP(F.v7810));
Y_FLUSH();
F.v7814 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_kind);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_kind) == v846)) {
F.v7814 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7810)))).f_kind);
Y_FLUSH();
}
if ((Y_DEFI(F.v7800) == v489)) {
if ((Y_DEFI(F.v7814) == v813)) {
F.p3253 = Y_DEFP(v1344);
Y_FLUSH();
F.p3252 = yr3213_Infix(Y_DEFI(F.v7802), y_str("!=", 2), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7814) == v834)) {
F.p3253 = Y_DEFP(F.v7808);
Y_FLUSH();
F.p3252 = yr3196_Call2(y_str("y_set_xor", 9), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), y_str("XOR applies to BOOLEAN values and sets", 38));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7814) == v834)) {
F.p3253 = Y_DEFP(F.v7808);
Y_FLUSH();
if ((Y_DEFI(F.v7800) == v573)) {
F.p3252 = yr3196_Call2(y_str("y_set_union", 11), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v576)) {
F.p3252 = yr3196_Call2(y_str("y_set_diff", 10), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v579)) {
F.p3252 = yr3196_Call2(y_str("y_set_inter", 11), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), y_str("this operator does not apply to sets", 36));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7814) == v804)) {
F.p3253 = yr3190_Unbounded(Y_DEFP(F.v7808));
Y_FLUSH();
if ((yr3347_Suppressed(v1483) && (((((Y_DEFI(F.v7800) == v573)) || ((Y_DEFI(F.v7800) == v576))) || ((Y_DEFI(F.v7800) == v579)))))) {
if ((Y_DEFI(F.v7800) == v573)) {
F.p3252 = yr3196_Call2(y_str("Y_ADDW", 6), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v576)) {
F.p3252 = yr3196_Call2(y_str("Y_SUBW", 6), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else {
F.p3252 = yr3196_Call2(y_str("Y_MULW", 6), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
}
} else if ((Y_DEFI(F.v7800) == v573)) {
F.p3252 = yr3196_Call2(y_str("y_add", 5), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v576)) {
F.p3252 = yr3196_Call2(y_str("y_sub", 5), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v579)) {
F.p3252 = yr3196_Call2(y_str("y_mul", 5), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((((Y_DEFI(F.v7800) == v276)) && yr3347_Suppressed(v1498))) {
F.p3252 = yr3196_Call2(y_str("y_divw", 6), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((((Y_DEFI(F.v7800) == v378)) && yr3347_Suppressed(v1498))) {
F.p3252 = yr3196_Call2(y_str("y_modw", 6), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v276)) {
F.p3252 = yr3196_Call2(y_str("y_div", 5), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v378)) {
F.p3252 = yr3196_Call2(y_str("y_mod", 5), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v582)) {
F.p3253 = Y_DEFP(v1354);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
if (yr3347_Suppressed(v1498)) {
yr1037_SA(y_str("y_fdivw((double)(", 17));
Y_FLUSH();
} else {
yr1037_SA(y_str("y_fdiv((double)(", 16));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(F.v7802));
Y_FLUSH();
yr1037_SA(y_str("), (double)(", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7804));
Y_FLUSH();
yr1037_SA(y_str("))", 2));
Y_FLUSH();
F.p3252 = yr1056_SE();
Y_FLUSH();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFI(F.v7800), y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7814) == v810)) {
F.p3253 = yr3190_Unbounded(Y_DEFP(F.v7808));
Y_FLUSH();
if ((Y_DEFI(F.v7800) == v573)) {
F.p3252 = yr3034_FloatChk(yr3213_Infix(Y_DEFI(F.v7802), y_str("+", 1), Y_DEFI(F.v7804)));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v576)) {
F.p3252 = yr3034_FloatChk(yr3213_Infix(Y_DEFI(F.v7802), y_str("-", 1), Y_DEFI(F.v7804)));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v579)) {
F.p3252 = yr3034_FloatChk(yr3213_Infix(Y_DEFI(F.v7802), y_str("*", 1), Y_DEFI(F.v7804)));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v582)) {
F.p3253 = Y_DEFP(v1354);
Y_FLUSH();
F.p3252 = yr3034_FloatChk(yr3205_Call2T(yr3237_FDivName(), Y_DEFI(F.v7802), Y_DEFI(F.v7804)));
Y_FLUSH();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFI(F.v7800), y_str(" does not apply to these numbers", 32));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7814) == v807)) {
F.p3253 = yr3190_Unbounded(Y_DEFP(F.v7808));
Y_FLUSH();
if ((((Y_DEFI(F.v7800) == v573)) || ((Y_DEFI(F.v7800) == v576)))) {
yr3006_CommonScale(&F.v7802, Y_DEFP(F.v7808), &F.v7804, Y_DEFP(F.v7810), Y_DEFP(F.p3253), Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line));
Y_FLUSH();
if ((Y_DEFI(F.v7800) == v573)) {
F.p3252 = yr3196_Call2(y_str("y_fix_add", 9), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else {
F.p3252 = yr3196_Call2(y_str("y_fix_sub", 9), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
}
} else if ((Y_DEFI(F.v7800) == v579)) {
yr2698_SetScale(Y_DEFP(F.p3253), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7810)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line)), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7808)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7810)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line)));
Y_FLUSH();
F.p3252 = yr3196_Call2(y_str("y_fix_mul", 9), Y_DEFI(F.v7802), Y_DEFI(F.v7804));
Y_FLUSH();
} else if ((Y_DEFI(F.v7800) == v582)) {
F.p3253 = Y_DEFP(v1354);
Y_FLUSH();
F.p3252 = yr3034_FloatChk(yr3205_Call2T(yr3237_FDivName(), yr3242_FixToFloat(Y_DEFI(F.v7802), Y_DEFP(F.v7808)), yr3242_FixToFloat(Y_DEFI(F.v7804), Y_DEFP(F.v7810))));
Y_FLUSH();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFI(F.v7800), y_str(" does not apply to these numbers", 32));
Y_FLUSH();
}
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFI(F.v7800), y_str(" does not apply to these values", 31));
Y_FLUSH();
(*F.p3252_o) = F.p3252;
(*F.p3253_o) = F.p3253;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3258_Fits(void * a_p3259, void * a_p3260) {
struct yf3261 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3259 = a_p3259;
F.p3260 = a_p3260;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3259))).f_kind) == v843)) {
if ((!yr2514_IsArrayLike(F.p3260))) {
{ rt_int rv7866 = 0;
y_use = F.yu; return rv7866; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3260))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p3259))).f_nidx)))) {
{ rt_int rv7868 = 0;
y_use = F.yu; return rv7868; }
}
{ rt_int rv7869 = yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p3259))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3260))).f_elem));
y_use = F.yu; return rv7869; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3259))).f_kind) == v855)) {
{ rt_int rv7871 = 1;
y_use = F.yu; return rv7871; }
}
{ rt_int rv7872 = yr2569_SameType(F.p3259, F.p3260);
y_use = F.yu; return rv7872; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3265_Choose(void * a_p3266, rt_int a_p3267, rt_int a_p3268) {
struct yf3269 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3266 = a_p3266;
F.p3267 = a_p3267;
F.p3268 = a_p3268;
F.v7878 = Y_UNDEF_P;
F.v7878 = F.p3266;
F.v7880 = Y_UNDEF_P;
F.v7882 = Y_UNDEF_I;
F.v7884 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7878) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7878)))).f_nparams) == F.p3268)) {
F.v7882 = 1;
Y_FLUSH();
F.v7880 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7878)))).f_params);
Y_FLUSH();
F.v7884 = INT64_C(1);
Y_FLUSH();
while ((!(Y_DEFP(F.v7880) == ((void *)0)))) {
Y_TICK();
if ((!yr3258_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7880)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, y_add(F.p3267, Y_DEFI(F.v7884)))])))) {
F.v7882 = 0;
Y_FLUSH();
}
F.v7884 = y_range(y_add(Y_DEFI(F.v7884), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v7880 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7880)))).f_next);
Y_FLUSH();
}
if (Y_DEFI(F.v7882)) {
{ void * rv7891 = Y_DEFP(F.v7878);
y_use = F.yu; return rv7891; }
}
}
F.v7878 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7878)))).f_alt);
Y_FLUSH();
}
{ void * rv7892 = ((void *)0);
y_use = F.yu; return rv7892; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3273_HidesStandard(void * a_p3274) {
struct yf3275 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3274 = a_p3274;
F.v7896 = Y_UNDEF_P;
F.v7896 = F.p3274;
while ((!(Y_DEFP(F.v7896) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7896)))).f_decl) == ((void *)0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7896)))).f_decl)))).f_ival) == INT64_C(0))))) {
{ rt_int rv7899 = 1;
y_use = F.yu; return rv7899; }
}
F.v7896 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7896)))).f_alt);
Y_FLUSH();
}
{ rt_int rv7901 = 0;
y_use = F.yu; return rv7901; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3279_CompileArgs(void * a_p3280, void * a_p3281, rt_int * a_p3282, rt_int * a_p3283) {
struct yf3284 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3280 = a_p3280;
F.p3281 = a_p3281;
F.p3282_o = a_p3282;
F.p3283_o = a_p3283;
F.v7908 = Y_UNDEF_P;
F.v7908 = F.p3280;
F.v7910 = Y_UNDEF_P;
F.v7910 = ((void *)0);
F.v7912 = Y_UNDEF_P;
F.p3282 = Y_DEFI(v1560);
Y_FLUSH();
F.p3283 = INT64_C(0);
Y_FLUSH();
if ((!(F.p3281 == ((void *)0)))) {
F.v7910 = Y_DEFP(((*(yR125 *)y_deref(F.p3281))).f_params);
Y_FLUSH();
}
while ((!(Y_DEFP(F.v7908) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(v1560) >= INT64_C(4000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7908)))).f_line), y_str("calls nested too deeply", 23));
Y_FLUSH();
}
F.p3283 = y_range(y_add(Y_DEFI(F.p3283), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1560 = y_range(y_add(Y_DEFI(F.p3282), Y_DEFI(F.p3283)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v7912 = ((void *)0);
Y_FLUSH();
if ((!(Y_DEFP(F.v7910) == ((void *)0)))) {
F.v7912 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7910)))).f_rep);
Y_FLUSH();
F.v7910 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7910)))).f_next);
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(F.v7908), Y_DEFP(F.v7912), &((rt_int *)(v1536).p)[y_ix1(v1536, y_add(Y_DEFI(F.p3282), Y_DEFI(F.p3283)))], &((void * *)(v1547).p)[y_ix1(v1547, y_add(Y_DEFI(F.p3282), Y_DEFI(F.p3283)))]);
Y_FLUSH();
((void * *)(v1558).p)[y_ix1(v1558, y_add(Y_DEFI(F.p3282), Y_DEFI(F.p3283)))] = Y_DEFP(F.v7908);
Y_FLUSH();
F.v7908 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7908)))).f_next);
Y_FLUSH();
}
(*F.p3282_o) = F.p3282;
(*F.p3283_o) = F.p3283;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3288_CheckUnresolved(void * a_p3289, void * a_p3290, rt_int a_p3291) {
struct yf3292 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3289 = a_p3289;
F.p3290 = a_p3290;
F.p3291 = a_p3291;
F.v7927 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p3289))).f_kind) == v843))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3290))).f_kind) == v822))))) {
y_use = F.yu; return;
}
F.v7927 = Y_DEFP(((*(yR110 *)y_deref(F.p3290))).f_idx);
Y_FLUSH();
while ((!(Y_DEFP(F.v7927) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7927)))).f_kind) == v804))) {
yr1178_FailS(F.p3291, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
Y_FLUSH();
}
F.v7927 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7927)))).f_link);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3296_SameAsFormal(void * a_p3297, void * a_p3298) {
struct yf3299 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3297 = a_p3297;
F.p3298 = a_p3298;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3297))).f_kind) == v855)) {
{ rt_int rv7933 = 1;
y_use = F.yu; return rv7933; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3297))).f_kind) == v843)) {
if ((!((((Y_DEFI(((*(yR110 *)y_deref(F.p3298))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3298))).f_kind) == v843)))))) {
{ rt_int rv7935 = 0;
y_use = F.yu; return rv7935; }
}
{ rt_int rv7936 = yr2611_Identical(Y_DEFP(((*(yR110 *)y_deref(F.p3297))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3298))).f_elem));
y_use = F.yu; return rv7936; }
}
{ rt_int rv7937 = yr2611_Identical(F.p3297, F.p3298);
y_use = F.yu; return rv7937; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3303_CallCode(void * a_p3304, rt_int a_p3305, rt_int a_p3306, rt_int a_p3307) {
struct yf3308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3304 = a_p3304;
F.p3305 = a_p3305;
F.p3306 = a_p3306;
F.p3307 = a_p3307;
F.v7944 = Y_UNDEF_P;
F.v7944 = Y_DEFP(((*(yR125 *)y_deref(F.p3304))).f_params);
F.v7946 = Y_UNDEF_I;
F.v7946 = y_range(y_add(F.p3305, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7950 = Y_UNDEF_I;
F.v7950 = 1;
F.v7953 = Y_UNDEF_I;
F.v7953 = INT64_C(0);
F.v7956 = Y_UNDEF_I;
F.v7956 = INT64_C(0);
F.v7959 = Y_UNDEF_I;
F.v7959 = INT64_C(0);
F.v7962 = Y_UNDEF_I;
F.v7962 = INT64_C(0);
F.v7965 = Y_UNDEF_I;
F.v7965 = INT64_C(0);
if ((!(F.p3306 == Y_DEFI(((*(yR125 *)y_deref(F.p3304))).f_nparams)))) {
yr1186_FailN(F.p3307, Y_DEFI(((*(yR125 *)y_deref(F.p3304))).f_name), y_str(": the number of actual parameters is wrong", 42));
Y_FLUSH();
}
yr3618_CheckActuals(F.p3304, F.p3305, F.p3307);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3304))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3304))).f_level) > INT64_C(1))) {
yr1044_ST(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3304))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
Y_FLUSH();
F.v7950 = 0;
Y_FLUSH();
}
while ((!(Y_DEFP(F.v7944) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v7950))) {
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
F.v7950 = 0;
Y_FLUSH();
if ((!yr3258_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))])))) {
v927 = 0;
Y_FLUSH();
yr2576_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))]));
Y_FLUSH();
}
yr3288_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep)))).f_kind) == v855)) {
if (((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_cls) == v897))) && (!yr3068_IsVariable(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))])))).f_kind) == v855))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
Y_FLUSH();
}
yr1044_ST(yr2914_SpaceArg(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7946))]), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))])));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_cls) == v897)) {
yr1044_ST(yr3040_Convert(Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7946))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))])));
Y_FLUSH();
} else {
if ((!yr3068_IsVariable(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))) {
v927 = 0;
Y_FLUSH();
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
Y_FLUSH();
}
yr3074_CheckPure(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))]));
Y_FLUSH();
yr3585_NoteWrite(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))]));
Y_FLUSH();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_cls) == v903)) && yr2922_PackedComponent(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_name), y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
Y_FLUSH();
}
if (yr3296_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))]))) {
yr1037_SA(y_str("&", 1));
Y_FLUSH();
yr1044_ST(yr3142_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7946))])));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_cls) == v903)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
Y_FLUSH();
} else {
F.v7959 = yr1200_Fresh(y_str("yo", 2));
Y_FLUSH();
F.v7953 = yr3530_Join(Y_DEFI(F.v7953), yr3530_Join(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep)), yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7959)), yr1061_T(y_str(";", 1)));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep)))).f_kind) == v843)) {
F.v7953 = yr3530_Join(Y_DEFI(F.v7953), yr3530_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7959), yr1061_T(y_str(" = y_like(", 10))), yr3530_Join(yr3142_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7946))])), yr3530_Join(yr1061_T(y_str(", ", 2)), yr3312_Num(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))])))).f_nidx)), yr1061_T(y_str(", ", 2))), yr3530_Join(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep)))).f_elem)), yr1061_T(y_str(");", 2)), INT64_C(0))));
Y_FLUSH();
} else if (yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep))) {
F.v7953 = yr3530_Join(Y_DEFI(F.v7953), yr3530_Join(yr1061_T(y_str(" y_init(", 8)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep)), yr1061_T(y_str(", &", 3))), yr3530_Join(Y_DEFI(F.v7959), yr1061_T(y_str(");", 2)), INT64_C(0)));
Y_FLUSH();
}
F.v7956 = yr3530_Join(Y_DEFI(F.v7956), yr1061_T(y_str(" ", 1)), yr3048_StoreText(yr3142_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7946))])), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7946))]), Y_DEFI(F.v7959), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7946))])))).f_line)));
Y_FLUSH();
yr1037_SA(y_str("&", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7959));
Y_FLUSH();
}
}
F.v7946 = y_range(y_add(Y_DEFI(F.v7946), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v7944 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7944)))).f_next);
Y_FLUSH();
}
yr1037_SA(y_str(")", 1));
Y_FLUSH();
v1560 = F.p3305;
Y_FLUSH();
F.v7962 = yr1056_SE();
Y_FLUSH();
if ((Y_DEFI(F.v7953) == INT64_C(0))) {
{ rt_int rv8001 = Y_DEFI(F.v7962);
y_use = F.yu; return rv8001; }
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7953));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3304))).f_ret)))).f_kind) == v852)) {
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7962));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7956));
Y_FLUSH();
yr1037_SA(y_str(" })", 3));
Y_FLUSH();
} else {
F.v7965 = yr1200_Fresh(y_str("yv", 2));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(F.p3304))).f_ret)));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7965));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7962));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7956));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v7965));
Y_FLUSH();
yr1037_SA(y_str("; })", 4));
Y_FLUSH();
}
{ rt_int rv8013 = yr1056_SE();
y_use = F.yu; return rv8013; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3312_Num(rt_int a_p3313) {
struct yf3314 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3313 = a_p3313;
yr1026_SB();
Y_FLUSH();
yr1050_SI(F.p3313);
Y_FLUSH();
{ rt_int rv8016 = yr1056_SE();
y_use = F.yu; return rv8016; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3318_UserOp(void * a_p3319, rt_int a_p3320, void * a_p3321, void * a_p3322, rt_int * a_p3323, void * * a_p3324) {
struct yf3325 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3319 = a_p3319;
F.p3320 = a_p3320;
F.p3321 = a_p3321;
F.p3322 = a_p3322;
F.p3323_o = a_p3323;
F.p3324_o = a_p3324;
F.v8025 = Y_UNDEF_P;
F.v8027 = Y_UNDEF_P;
F.v8029 = Y_UNDEF_I;
F.v8031 = Y_UNDEF_I;
F.v8025 = yr2378_Find(F.p3320);
Y_FLUSH();
if ((Y_DEFP(F.v8025) == ((void *)0))) {
{ rt_int rv8033 = 0;
(*F.p3323_o) = F.p3323;
(*F.p3324_o) = F.p3324;
y_use = F.yu; return rv8033; }
}
F.v8025 = yr2483_Real(Y_DEFP(F.v8025));
Y_FLUSH();
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8025)))).f_kind) == v876))) {
{ rt_int rv8035 = 0;
(*F.p3323_o) = F.p3323;
(*F.p3324_o) = F.p3324;
y_use = F.yu; return rv8035; }
}
((*(yR105 *)y_deref(F.p3321))).f_next = F.p3322;
Y_FLUSH();
if ((!(F.p3322 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3322))).f_next = ((void *)0);
Y_FLUSH();
}
yr3279_CompileArgs(F.p3321, ((void *)0), &F.v8029, &F.v8031);
Y_FLUSH();
F.v8027 = yr3265_Choose(Y_DEFP(F.v8025), Y_DEFI(F.v8029), Y_DEFI(F.v8031));
Y_FLUSH();
if ((Y_DEFP(F.v8027) == ((void *)0))) {
v1560 = Y_DEFI(F.v8029);
Y_FLUSH();
if (yr3273_HidesStandard(Y_DEFP(F.v8025))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3319))).f_line), F.p3320, y_str(": no definition takes operands of these types", 45));
Y_FLUSH();
}
{ rt_int rv8038 = 0;
(*F.p3323_o) = F.p3323;
(*F.p3324_o) = F.p3324;
y_use = F.yu; return rv8038; }
}
yr3329_NoteCall(Y_DEFP(F.v8027), Y_DEFI(((*(yR105 *)y_deref(F.p3319))).f_line));
Y_FLUSH();
F.p3323 = yr3303_CallCode(Y_DEFP(F.v8027), Y_DEFI(F.v8029), Y_DEFI(F.v8031), Y_DEFI(((*(yR105 *)y_deref(F.p3319))).f_line));
Y_FLUSH();
F.p3324 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8027)))).f_ret);
Y_FLUSH();
{ rt_int rv8040 = 1;
(*F.p3323_o) = F.p3323;
(*F.p3324_o) = F.p3324;
y_use = F.yu; return rv8040; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3329_NoteCall(void * a_p3330, rt_int a_p3331) {
struct yf3332 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3330 = a_p3330;
F.p3331 = a_p3331;
F.v8045 = Y_UNDEF_P;
F.v8047 = Y_UNDEF_P;
F.v8047 = F.p3330;
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8047)))).f_kind) == v876)) && ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8047)))).f_target) == ((void *)0)))))) {
F.v8047 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8047)))).f_target);
Y_FLUSH();
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8047)))).f_func))) {
v1706 = y_range(y_add(Y_DEFI(v1706), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
F.v8045 = yr2029_NewNode(v669, F.p3331);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v8045)))).f_sym = Y_DEFP(F.v8047);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v8045)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_calls);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_calls = Y_DEFP(F.v8045);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3336_Directive(void * a_p3337, void * a_p3338, rt_int a_p3339, rt_int a_p3340, rt_int * a_p3341, void * * a_p3342) {
struct yf3343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3337 = a_p3337;
F.p3338 = a_p3338;
F.p3339 = a_p3339;
F.p3340 = a_p3340;
F.p3341_o = a_p3341;
F.p3342_o = a_p3342;
F.v8058 = Y_UNDEF_I;
F.v8060 = Y_UNDEF_I;
F.v8062 = Y_UNDEF_I;
v1560 = F.p3339;
Y_FLUSH();
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3338))).f_a), &F.v8058, &F.v8060);
Y_FLUSH();
if (((!Y_DEFI(F.v8058)) || ((!(F.p3340 == INT64_C(1)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3338))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3338))).f_name), y_str(" takes a manifest TRAP_KIND (XIV.XIII.2)", 40));
Y_FLUSH();
}
F.v8062 = INT64_C(0);
Y_FLUSH();
if ((Y_DEFI(F.v8060) == INT64_C(0))) {
F.v8062 = v1480;
Y_FLUSH();
} else if ((Y_DEFI(F.v8060) == INT64_C(1))) {
F.v8062 = v1483;
Y_FLUSH();
} else if ((Y_DEFI(F.v8060) == INT64_C(2))) {
F.v8062 = v1486;
Y_FLUSH();
} else if ((Y_DEFI(F.v8060) == INT64_C(3))) {
F.v8062 = v1492;
Y_FLUSH();
} else if ((Y_DEFI(F.v8060) == INT64_C(4))) {
F.v8062 = v1495;
Y_FLUSH();
} else if ((Y_DEFI(F.v8060) == INT64_C(5))) {
F.v8062 = v1498;
Y_FLUSH();
} else if ((Y_DEFI(F.v8060) == INT64_C(6))) {
F.v8062 = v1489;
Y_FLUSH();
}
F.p3342 = Y_DEFP(v1348);
Y_FLUSH();
F.p3341 = yr1061_T(y_str("((void)0)", 9));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3337))).f_mval) == v1513)) {
if ((!yr3347_Suppressed(Y_DEFI(F.v8062)))) {
v1709 = y_range(y_add(Y_DEFI(v1709), Y_DEFI(F.v8062)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
} else if ((Y_DEFI(((*(yR125 *)y_deref(F.p3337))).f_mval) == v1516)) {
if (yr3347_Suppressed(Y_DEFI(F.v8062))) {
v1709 = y_range(y_sub(Y_DEFI(v1709), Y_DEFI(F.v8062)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
} else {
F.p3342 = Y_DEFP(v1344);
Y_FLUSH();
if ((yr3347_Suppressed(Y_DEFI(F.v8062)) && ((!(Y_DEFI(F.v8062) == INT64_C(0)))))) {
F.p3341 = yr1061_T(y_str("1", 1));
Y_FLUSH();
} else {
F.p3341 = yr1061_T(y_str("0", 1));
Y_FLUSH();
}
}
(*F.p3341_o) = F.p3341;
(*F.p3342_o) = F.p3342;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3347_Suppressed(rt_int a_p3348) {
struct yf3349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3348 = a_p3348;
if ((F.p3348 == INT64_C(0))) {
{ rt_int rv8083 = 0;
y_use = F.yu; return rv8083; }
}
{ rt_int rv8088 = ((y_mod((y_div(Y_DEFI(v1709), F.p3348)), INT64_C(2))) == INT64_C(1));
y_use = F.yu; return rv8088; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3353_UserAssign(rt_int a_p3354, void * a_p3355, rt_int a_p3356, void * a_p3357, rt_int a_p3358) {
struct yf3359 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3354 = a_p3354;
F.p3355 = a_p3355;
F.p3356 = a_p3356;
F.p3357 = a_p3357;
F.p3358 = a_p3358;
F.v8096 = Y_UNDEF_P;
F.v8098 = Y_UNDEF_P;
F.v8100 = Y_UNDEF_P;
F.v8102 = Y_UNDEF_P;
F.v8104 = Y_UNDEF_I;
F.v8096 = yr2378_Find(y_range(v531, INT64_C(0), INT64_C(4000000)));
Y_FLUSH();
if ((Y_DEFP(F.v8096) == ((void *)0))) {
{ rt_int rv8106 = INT64_C(0);
y_use = F.yu; return rv8106; }
}
F.v8096 = yr2483_Real(Y_DEFP(F.v8096));
Y_FLUSH();
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8096)))).f_kind) == v876))) {
{ rt_int rv8108 = INT64_C(0);
y_use = F.yu; return rv8108; }
}
F.v8098 = Y_DEFP(F.v8096);
Y_FLUSH();
while ((!(Y_DEFP(F.v8098) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_nparams) == INT64_C(2))) {
F.v8100 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_params);
Y_FLUSH();
F.v8102 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_next);
Y_FLUSH();
if ((((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_cls) == v897))) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8102)))).f_cls) == v897))) && yr2569_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep), F.p3355)) && yr2569_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8102)))).f_rep), F.p3357))) {
if ((Y_DEFP(v1674) == Y_DEFP(F.v8098))) {
{ rt_int rv8111 = INT64_C(0);
y_use = F.yu; return rv8111; }
}
yr3329_NoteCall(Y_DEFP(F.v8098), F.p3358);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
if (yr2611_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep), F.p3355)) {
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
yr1037_SA(y_str("&", 1));
Y_FLUSH();
yr1044_ST(F.p3354);
Y_FLUSH();
} else {
F.v8104 = yr1200_Fresh(y_str("yo", 2));
Y_FLUSH();
yr1037_SA(y_str("{ ", 2));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8104));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
if (yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep))) {
yr1037_SA(y_str(" y_init(", 8));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8104));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
}
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
yr1037_SA(y_str("&", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8104));
Y_FLUSH();
}
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr3040_Convert(F.p3356, Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8102)))).f_rep), F.p3357));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
if ((!yr2611_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep), F.p3355))) {
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(yr3048_StoreText(F.p3354, F.p3355, Y_DEFI(F.v8104), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8100)))).f_rep), F.p3358));
Y_FLUSH();
yr1037_SA(y_str(" }", 2));
Y_FLUSH();
}
{ rt_int rv8136 = yr1056_SE();
y_use = F.yu; return rv8136; }
}
}
F.v8098 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8098)))).f_alt);
Y_FLUSH();
}
{ rt_int rv8138 = INT64_C(0);
y_use = F.yu; return rv8138; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3363_Assign(rt_int a_p3364, void * a_p3365, rt_int a_p3366, void * a_p3367, rt_int a_p3368) {
struct yf3369 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3364 = a_p3364;
F.p3365 = a_p3365;
F.p3366 = a_p3366;
F.p3367 = a_p3367;
F.p3368 = a_p3368;
F.v8146 = Y_UNDEF_I;
F.v8146 = yr3353_UserAssign(F.p3364, F.p3365, F.p3366, F.p3367, F.p3368);
if ((!(Y_DEFI(F.v8146) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v8146));
Y_FLUSH();
} else {
yr3058_Store(F.p3364, F.p3365, F.p3366, F.p3367, F.p3368);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3373_CallExpr(void * a_p3374, void * a_p3375, rt_int a_p3376, rt_int * a_p3377, void * * a_p3378) {
struct yf3379 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3374 = a_p3374;
F.p3375 = a_p3375;
F.p3376 = a_p3376;
F.p3377_o = a_p3377;
F.p3378_o = a_p3378;
F.v8155 = Y_UNDEF_P;
F.v8157 = Y_UNDEF_P;
F.v8159 = Y_UNDEF_I;
F.v8161 = Y_UNDEF_I;
F.v8155 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line)));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_kind) == v891)) {
yr4023_StdCall(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_mval), F.p3374, F.p3376, &F.p3377, &F.p3378);
Y_FLUSH();
(*F.p3377_o) = F.p3377;
(*F.p3378_o) = F.p3378;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_kind) == v870)))) {
if (F.p3376) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line), y_str("a value is not a statement", 26));
Y_FLUSH();
}
yr3383_Denote(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_rep), F.p3374, &F.p3377, &F.p3378);
Y_FLUSH();
(*F.p3377_o) = F.p3377;
(*F.p3378_o) = F.p3378;
y_use = F.yu; return;
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_kind) == v876))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_name), y_str(" is not a routine", 17));
Y_FLUSH();
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8155)))).f_alt) == ((void *)0))) {
yr3279_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3374))).f_a), Y_DEFP(F.v8155), &F.v8159, &F.v8161);
Y_FLUSH();
F.v8157 = Y_DEFP(F.v8155);
Y_FLUSH();
} else {
yr3279_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3374))).f_a), ((void *)0), &F.v8159, &F.v8161);
Y_FLUSH();
F.v8157 = yr3265_Choose(Y_DEFP(F.v8155), Y_DEFI(F.v8159), Y_DEFI(F.v8161));
Y_FLUSH();
if ((Y_DEFP(F.v8157) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_name), y_str(": no definition takes actuals of these types", 44));
Y_FLUSH();
}
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v8157))))).f_mval) == INT64_C(0)))) {
yr3336_Directive(yr2483_Real(Y_DEFP(F.v8157)), F.p3374, Y_DEFI(F.v8159), Y_DEFI(F.v8161), &F.p3377, &F.p3378);
Y_FLUSH();
(*F.p3377_o) = F.p3377;
(*F.p3378_o) = F.p3378;
y_use = F.yu; return;
}
yr3329_NoteCall(Y_DEFP(F.v8157), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line));
Y_FLUSH();
F.p3377 = yr3303_CallCode(Y_DEFP(F.v8157), Y_DEFI(F.v8159), Y_DEFI(F.v8161), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line));
Y_FLUSH();
F.p3378 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8157)))).f_ret);
Y_FLUSH();
if ((F.p3376 && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3378)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_name), y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
Y_FLUSH();
}
if (((!F.p3376) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3378)))).f_kind) == v852)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3374))).f_name), y_str(" returns no value", 17));
Y_FLUSH();
}
(*F.p3377_o) = F.p3377;
(*F.p3378_o) = F.p3378;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3383_Denote(void * a_p3384, void * a_p3385, rt_int * a_p3386, void * * a_p3387) {
struct yf3388 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3384 = a_p3384;
F.p3385 = a_p3385;
F.p3386_o = a_p3386;
F.p3387_o = a_p3387;
F.v8174 = Y_UNDEF_P;
F.v8174 = Y_DEFP(((*(yR105 *)y_deref(F.p3385))).f_a);
F.v8176 = Y_UNDEF_P;
F.v8178 = Y_UNDEF_I;
F.v8180 = Y_UNDEF_I;
F.v8182 = Y_UNDEF_I;
F.v8184 = Y_UNDEF_P;
F.v8186 = Y_UNDEF_I;
F.v8188 = Y_UNDEF_I;
F.v8190 = Y_UNDEF_I;
F.v8192 = Y_UNDEF_I;
F.v8194 = Y_UNDEF_I;
F.v8194 = INT64_C(0);
F.v8197 = Y_UNDEF_I;
F.v8199 = Y_UNDEF_P;
F.v8201 = Y_UNDEF_I;
F.v8201 = 1;
F.p3387 = F.p3384;
Y_FLUSH();
if (Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_abstract)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3385))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_tname), y_str(" has no representation to denote a value of", 43));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_kind) == v825)) {
if (Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3385))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_tname), y_str(" is opaque here (X.B.3)", 23));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("((", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("){ ", 3));
Y_FLUSH();
F.v8180 = yr1056_SE();
Y_FLUSH();
F.v8176 = Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v8176) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_variant) == Y_DEFI(F.v8194))))) {
if ((Y_DEFP(F.v8174) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3385))).f_line), y_str("too few components in this record value", 39));
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(F.v8174), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_rep), &F.v8178, &F.v8184);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_line), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_rep), Y_DEFP(F.v8184));
Y_FLUSH();
if ((Y_DEFP(F.v8176) == Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_selector))) {
yr2959_Manifest(Y_DEFP(F.v8174), &F.v8192, &F.v8197);
Y_FLUSH();
if ((!Y_DEFI(F.v8192))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_line), y_str("the case-selection value is a manifest constant", 47));
Y_FLUSH();
}
F.v8194 = yr3392_VariantOf(F.p3384, Y_DEFI(F.v8197), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_line));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
if ((!Y_DEFI(F.v8201))) {
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
F.v8201 = 0;
Y_FLUSH();
yr1037_SA(y_str(".f_", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr3040_Convert(Y_DEFI(F.v8178), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_rep), Y_DEFP(F.v8184)));
Y_FLUSH();
F.v8180 = yr1056_SE();
Y_FLUSH();
F.v8174 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_next);
Y_FLUSH();
}
F.v8176 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8176)))).f_next);
Y_FLUSH();
}
if ((!(Y_DEFP(F.v8174) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3385))).f_line), y_str("too many components in this record value", 40));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str(" })", 3));
Y_FLUSH();
F.p3386 = yr1056_SE();
Y_FLUSH();
(*F.p3386_o) = F.p3386;
(*F.p3387_o) = F.p3387;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_kind) == v822)) {
F.v8186 = yr2044_Count(Y_DEFP(F.v8174));
Y_FLUSH();
F.v8180 = yr1200_Fresh(y_str("da", 2));
Y_FLUSH();
if ((Y_DEFI(F.v8186) == INT64_C(1))) {
yr3107_Expr(Y_DEFP(F.v8174), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), &F.v8178, &F.v8184);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), Y_DEFP(F.v8184));
Y_FLUSH();
F.v8182 = yr1200_Fresh(y_str("dv", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8182));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr3040_Convert(Y_DEFI(F.v8178), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), Y_DEFP(F.v8184)));
Y_FLUSH();
yr1037_SA(y_str("; y_fill(", 9));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(F.p3384));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8182));
Y_FLUSH();
yr1037_SA(y_str("); })", 5));
Y_FLUSH();
F.p3386 = yr1056_SE();
Y_FLUSH();
(*F.p3386_o) = F.p3386;
(*F.p3387_o) = F.p3387;
y_use = F.yu; return;
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ yarr ", 8));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str("; y_init(", 9));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(F.p3384));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str("); if (y_count(", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_nidx));
Y_FLUSH();
yr1037_SA(y_str(") != ", 5));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v8186));
Y_FLUSH();
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str("wrong number of components", 26));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
F.p3386 = yr1056_SE();
Y_FLUSH();
F.v8190 = INT64_C(0);
Y_FLUSH();
while ((!(Y_DEFP(F.v8174) == ((void *)0)))) {
Y_TICK();
yr3107_Expr(Y_DEFP(F.v8174), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), &F.v8178, &F.v8184);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), Y_DEFP(F.v8184));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.p3386));
Y_FLUSH();
if (yr2526_Deep(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem))) {
yr1037_SA(y_str(" { ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(" dv = ", 6));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8178));
Y_FLUSH();
yr1037_SA(y_str("; y_copy(", 9));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(", &((", 5));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(" *)", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str(".p)[", 4));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v8190));
Y_FLUSH();
yr1037_SA(y_str("], &dv); }", 10));
Y_FLUSH();
} else {
yr1037_SA(y_str(" ((", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(" *)", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str(".p)[", 4));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v8190));
Y_FLUSH();
yr1037_SA(y_str("] = ", 4));
Y_FLUSH();
yr1044_ST(yr3040_Convert(Y_DEFI(F.v8178), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), Y_DEFP(F.v8184)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
}
F.p3386 = yr1056_SE();
Y_FLUSH();
F.v8190 = y_range(y_add(Y_DEFI(F.v8190), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v8174 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_next);
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.p3386));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8180));
Y_FLUSH();
yr1037_SA(y_str("; })", 4));
Y_FLUSH();
F.p3386 = yr1056_SE();
Y_FLUSH();
(*F.p3386_o) = F.p3386;
(*F.p3387_o) = F.p3387;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_kind) == v834)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_set_new(", 10));
Y_FLUSH();
yr1044_ST(yr2632_LoText(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2638_HiText(Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p3386 = yr1056_SE();
Y_FLUSH();
while ((!(Y_DEFP(F.v8174) == ((void *)0)))) {
Y_TICK();
yr3107_Expr(Y_DEFP(F.v8174), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), &F.v8178, &F.v8184);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3384))).f_elem), Y_DEFP(F.v8184));
Y_FLUSH();
F.p3386 = yr3196_Call2(y_str("y_set_add", 9), Y_DEFI(F.p3386), Y_DEFI(F.v8178));
Y_FLUSH();
F.v8174 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8174)))).f_next);
Y_FLUSH();
}
(*F.p3386_o) = F.p3386;
(*F.p3387_o) = F.p3387;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3385))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3384))).f_tname), y_str(" has no denotations of values", 29));
Y_FLUSH();
(*F.p3386_o) = F.p3386;
(*F.p3387_o) = F.p3387;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3392_VariantOf(void * a_p3393, rt_int a_p3394, rt_int a_p3395) {
struct yf3396 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3393 = a_p3393;
F.p3394 = a_p3394;
F.p3395 = a_p3395;
F.v8263 = Y_UNDEF_P;
F.v8263 = Y_DEFP(((*(yR110 *)y_deref(F.p3393))).f_fields);
F.v8265 = Y_UNDEF_P;
F.v8267 = Y_UNDEF_I;
F.v8269 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v8263) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8263)))).f_variant) == INT64_C(0)))) {
F.v8265 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8263)))).f_labels);
Y_FLUSH();
while ((!(Y_DEFP(F.v8265) == ((void *)0)))) {
Y_TICK();
yr2959_Manifest(Y_DEFP(F.v8265), &F.v8267, &F.v8269);
Y_FLUSH();
if ((Y_DEFI(F.v8267) && ((Y_DEFI(F.v8269) == F.p3394)))) {
{ rt_int rv8271 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8263)))).f_variant);
y_use = F.yu; return rv8271; }
}
F.v8265 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8265)))).f_next);
Y_FLUSH();
}
}
F.v8263 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8263)))).f_next);
Y_FLUSH();
}
{ rt_int rv8273 = INT64_C(-1);
y_use = F.yu; return rv8273; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3400_Emit2(yarr a_p3402, rt_int a_p3403) {
struct yf3404 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3402 = a_p3402;
F.p3403 = a_p3403;
F.v8278 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1037_SA(F.p3402);
Y_FLUSH();
yr1044_ST(F.p3403);
Y_FLUSH();
F.v8278 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8278));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3408_Emit3(yarr a_p3410, rt_int a_p3411, yarr a_p3413) {
struct yf3414 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3410 = a_p3410;
F.p3411 = a_p3411;
F.p3413 = a_p3413;
F.v8284 = Y_UNDEF_I;
yr1026_SB();
Y_FLUSH();
yr1037_SA(F.p3410);
Y_FLUSH();
yr1044_ST(F.p3411);
Y_FLUSH();
yr1037_SA(F.p3413);
Y_FLUSH();
F.v8284 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8284));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3418_PopTo(rt_int a_p3419) {
struct yf3420 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3419 = a_p3419;
if ((Y_DEFI(v1599) > F.p3419)) {
yr3408_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1572).p)[y_ix1(v1572, y_add(F.p3419, INT64_C(1)))]), y_str(".prev;", 6));
Y_FLUSH();
}
F.lo8294 = y_add(F.p3419, INT64_C(1));
F.hi8295 = Y_DEFI(v1599);
{ rt_int hi8299 = F.hi8295;
for (rt_int i8298 = F.lo8294; i8298 <= hi8299; i8298++) { F.c_8297 = i8298; Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1583).p)[y_ix1(v1583, F.c_8297)]) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(((rt_int *)(v1583).p)[y_ix1(v1583, F.c_8297)]));
Y_FLUSH();
}
if (i8298 == hi8299) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3424_LeaveBlock(void) {
struct yf3425 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFI(v1627) > INT64_C(0))) {
if ((!(Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]) == INT64_C(0)))) {
yr3408_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]), y_str(".prev;", 6));
Y_FLUSH();
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3429_RaiseCode(rt_int a_p3430) {
struct yf3431 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3430 = a_p3430;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1044_ST(F.p3430);
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str("));", 3));
Y_FLUSH();
{ rt_int rv8312 = yr1056_SE();
y_use = F.yu; return rv8312; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3435_BlockStatements(void * a_p3436) {
struct yf3437 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3436 = a_p3436;
F.v8316 = Y_UNDEF_I;
F.v8316 = Y_DEFI(v1709);
yr3441_BlockStatements1(F.p3436);
Y_FLUSH();
v1709 = Y_DEFI(F.v8316);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3441_BlockStatements1(void * a_p3442) {
struct yf3443 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3442 = a_p3442;
F.v8320 = Y_UNDEF_I;
F.v8322 = Y_UNDEF_I;
F.v8324 = Y_UNDEF_I;
F.v8326 = Y_UNDEF_P;
F.v8328 = Y_UNDEF_P;
F.v8330 = Y_UNDEF_I;
F.v8332 = Y_UNDEF_P;
F.v8332 = Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a);
F.v8334 = Y_UNDEF_I;
F.v8334 = INT64_C(0);
while ((!(Y_DEFP(F.v8332) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8332)))).f_kind) == v645)) && ((Y_DEFI(F.v8334) == INT64_C(0))))) {
F.v8334 = yr1200_Fresh(y_str("xs", 2));
Y_FLUSH();
yr3408_Emit3(y_str("rt_frame *", 10), Y_DEFI(F.v8334), y_str(" = rt_xtop;", 11));
Y_FLUSH();
}
F.v8332 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8332)))).f_next);
Y_FLUSH();
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b) == ((void *)0))) {
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = INT64_C(0);
Y_FLUSH();
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = Y_DEFI(F.v8334);
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_c));
Y_FLUSH();
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr3562_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a));
Y_FLUSH();
y_use = F.yu; return;
}
v1703 = 1;
Y_FLUSH();
F.v8320 = yr1200_Fresh(y_str("xf", 2));
Y_FLUSH();
yr3408_Emit3(y_str("{ rt_frame ", 11), Y_DEFI(F.v8320), y_str(";", 1));
Y_FLUSH();
yr3408_Emit3(y_str("if (RT_TRY(", 11), Y_DEFI(F.v8320), y_str(")) {", 4));
Y_FLUSH();
v1599 = y_range(y_add(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1572).p)[y_ix1(v1572, Y_DEFI(v1599))] = Y_DEFI(F.v8320);
Y_FLUSH();
((rt_int *)(v1583).p)[y_ix1(v1583, Y_DEFI(v1599))] = INT64_C(0);
Y_FLUSH();
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = Y_DEFI(F.v8320);
Y_FLUSH();
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = Y_DEFI(F.v8334);
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_c));
Y_FLUSH();
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1599 = y_range(y_sub(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr3562_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_a));
Y_FLUSH();
yr3408_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8320), y_str(");", 2));
Y_FLUSH();
yr1138_EmitS(y_str("} else {", 8));
Y_FLUSH();
yr3408_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8320), y_str(");", 2));
Y_FLUSH();
if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
Y_FLUSH();
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
Y_FLUSH();
}
F.v8322 = yr1200_Fresh(y_str("xc", 2));
Y_FLUSH();
yr3408_Emit3(y_str("int ", 4), Y_DEFI(F.v8322), y_str(" = rt_xcur;", 11));
Y_FLUSH();
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = INT64_C(0);
Y_FLUSH();
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = INT64_C(0);
Y_FLUSH();
v1641 = y_range(y_add(Y_DEFI(v1641), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1639).p)[y_ix1(v1639, Y_DEFI(v1641))] = Y_DEFI(F.v8322);
Y_FLUSH();
F.v8330 = 1;
Y_FLUSH();
F.v8326 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8326) == ((void *)0)))) {
Y_TICK();
yr1026_SB();
Y_FLUSH();
if (Y_DEFI(F.v8330)) {
yr1037_SA(y_str("if (", 4));
Y_FLUSH();
} else {
yr1037_SA(y_str("} else if (", 11));
Y_FLUSH();
}
F.v8330 = 0;
Y_FLUSH();
F.v8328 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8326)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8328) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(F.v8322));
Y_FLUSH();
yr1037_SA(y_str(" == rt_exc(", 11));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_name));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_next) == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
Y_FLUSH();
}
F.v8328 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_next);
Y_FLUSH();
}
yr1037_SA(y_str(") {", 3));
Y_FLUSH();
F.v8324 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8324));
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8326)))).f_b));
Y_FLUSH();
F.v8326 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8326)))).f_next);
Y_FLUSH();
}
if ((!Y_DEFI(F.v8330))) {
yr1138_EmitS(y_str("} else {", 8));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b)))).f_flag) == INT64_C(1))) {
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3442))).f_b)))).f_b));
Y_FLUSH();
} else {
yr3408_Emit3(y_str("rt_raise(", 9), Y_DEFI(F.v8322), y_str(");", 2));
Y_FLUSH();
}
if ((!Y_DEFI(F.v8330))) {
yr1138_EmitS(y_str("}", 1));
Y_FLUSH();
}
v1641 = y_range(y_sub(Y_DEFI(v1641), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr1138_EmitS(y_str("}}", 2));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3447_SameDesig(void * a_p3448, void * a_p3449) {
struct yf3450 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3448 = a_p3448;
F.p3449 = a_p3449;
F.v8401 = Y_UNDEF_P;
F.v8403 = Y_UNDEF_P;
F.v8405 = Y_UNDEF_I;
F.v8407 = Y_UNDEF_I;
F.v8409 = Y_UNDEF_I;
F.v8411 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_kind) == v801)) {
{ rt_int rv8412 = yr3447_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_a), F.p3449);
y_use = F.yu; return rv8412; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3449))).f_kind) == v801)) {
{ rt_int rv8413 = yr3447_SameDesig(F.p3448, Y_DEFP(((*(yR105 *)y_deref(F.p3449))).f_a));
y_use = F.yu; return rv8413; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(F.p3449))).f_kind)))) {
{ rt_int rv8415 = 0;
y_use = F.yu; return rv8415; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_kind) == v777)) {
{ rt_int rv8416 = ((((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3449))).f_name))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_d) == ((void *)0)))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3449))).f_d) == ((void *)0))));
y_use = F.yu; return rv8416; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_kind) == v783)) {
{ rt_int rv8417 = (((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3449))).f_name))) && yr3447_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3449))).f_a)));
y_use = F.yu; return rv8417; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_kind) == v789)) {
{ rt_int rv8418 = yr3447_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3449))).f_a));
y_use = F.yu; return rv8418; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3448))).f_kind) == v786)) {
if ((!yr3447_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3449))).f_a)))) {
{ rt_int rv8420 = 0;
y_use = F.yu; return rv8420; }
}
F.v8401 = Y_DEFP(((*(yR105 *)y_deref(F.p3448))).f_b);
Y_FLUSH();
F.v8403 = Y_DEFP(((*(yR105 *)y_deref(F.p3449))).f_b);
Y_FLUSH();
while ((((!(Y_DEFP(F.v8401) == ((void *)0)))) && ((!(Y_DEFP(F.v8403) == ((void *)0)))))) {
Y_TICK();
yr2959_Manifest(Y_DEFP(F.v8401), &F.v8405, &F.v8409);
Y_FLUSH();
yr2959_Manifest(Y_DEFP(F.v8403), &F.v8407, &F.v8411);
Y_FLUSH();
if ((Y_DEFI(F.v8405) && Y_DEFI(F.v8407))) {
if ((!(Y_DEFI(F.v8409) == Y_DEFI(F.v8411)))) {
{ rt_int rv8422 = 0;
y_use = F.yu; return rv8422; }
}
} else if ((!yr3447_SameDesig(Y_DEFP(F.v8401), Y_DEFP(F.v8403)))) {
{ rt_int rv8424 = 0;
y_use = F.yu; return rv8424; }
}
F.v8401 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8401)))).f_next);
Y_FLUSH();
F.v8403 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8403)))).f_next);
Y_FLUSH();
}
{ rt_int rv8425 = (((Y_DEFP(F.v8401) == ((void *)0))) && ((Y_DEFP(F.v8403) == ((void *)0))));
y_use = F.yu; return rv8425; }
}
{ rt_int rv8427 = 0;
y_use = F.yu; return rv8427; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3454_CheckVariantSelected(void * a_p3455, void * a_p3456, void * a_p3457) {
struct yf3458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3455 = a_p3455;
F.p3456 = a_p3456;
F.p3457 = a_p3457;
F.v8433 = Y_UNDEF_I;
F.v8433 = Y_DEFI(v1689);
F.v8435 = Y_UNDEF_P;
F.v8437 = Y_UNDEF_P;
F.v8439 = Y_UNDEF_P;
F.v8441 = Y_UNDEF_I;
F.v8443 = Y_UNDEF_I;
F.v8445 = Y_UNDEF_I;
F.v8447 = Y_UNDEF_I;
while ((Y_DEFI(F.v8433) > INT64_C(0))) {
Y_TICK();
F.v8435 = Y_DEFP(((void * *)(v1685).p)[y_ix1(v1685, Y_DEFI(F.v8433))]);
Y_FLUSH();
while ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8435)))).f_kind) == v801)) {
Y_TICK();
F.v8435 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8435)))).f_a);
Y_FLUSH();
}
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8435)))).f_kind) == v783)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8435)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3456))).f_selector)))).f_name)))) && yr3447_SameDesig(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8435)))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3455))).f_a)))) {
F.v8437 = Y_DEFP(((void * *)(v1687).p)[y_ix1(v1687, Y_DEFI(F.v8433))]);
Y_FLUSH();
if ((Y_DEFP(F.v8437) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3455))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3455))).f_name), y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
Y_FLUSH();
}
while ((!(Y_DEFP(F.v8437) == ((void *)0)))) {
Y_TICK();
F.v8441 = yr3506_Label(Y_DEFP(F.v8437), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3456))).f_selector)))).f_rep));
Y_FLUSH();
F.v8447 = 0;
Y_FLUSH();
F.v8439 = Y_DEFP(((*(yR115 *)y_deref(F.p3457))).f_labels);
Y_FLUSH();
while ((!(Y_DEFP(F.v8439) == ((void *)0)))) {
Y_TICK();
yr2959_Manifest(Y_DEFP(F.v8439), &F.v8445, &F.v8443);
Y_FLUSH();
if ((Y_DEFI(F.v8445) && ((Y_DEFI(F.v8443) == Y_DEFI(F.v8441))))) {
F.v8447 = 1;
Y_FLUSH();
}
F.v8439 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8439)))).f_next);
Y_FLUSH();
}
if ((!Y_DEFI(F.v8447))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3455))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3455))).f_name), y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
Y_FLUSH();
}
F.v8437 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8437)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
}
F.v8433 = y_range(y_sub(Y_DEFI(F.v8433), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3455))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3455))).f_name), y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3462_CheckCaseLabels(void * a_p3463, void * a_p3464) {
struct yf3465 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3463 = a_p3463;
F.p3464 = a_p3464;
F.v8460 = Y_UNDEF_P;
F.v8460 = Y_DEFP(((*(yR105 *)y_deref(F.p3463))).f_b);
F.v8462 = Y_UNDEF_P;
F.v8462 = Y_DEFP(((*(yR105 *)y_deref(F.p3463))).f_b);
F.v8464 = Y_UNDEF_I;
F.v8464 = INT64_C(0);
F.v8467 = Y_UNDEF_I;
F.v8467 = INT64_C(0);
while ((!(Y_DEFP(F.v8460) == ((void *)0)))) {
Y_TICK();
F.v8462 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8460)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8462) == ((void *)0)))) {
Y_TICK();
F.v8467 = yr3506_Label(Y_DEFP(F.v8462), F.p3464);
Y_FLUSH();
F.lo8472 = INT64_C(1);
F.hi8473 = Y_DEFI(F.v8464);
{ rt_int hi8477 = F.hi8473;
for (rt_int i8476 = F.lo8472; i8476 <= hi8477; i8476++) { F.c_8475 = i8476; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1701).p)[y_ix1(v1701, F.c_8475)]) == Y_DEFI(F.v8467))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8462)))).f_line), y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
Y_FLUSH();
}
if (i8476 == hi8477) break;
}}
if ((Y_DEFI(F.v8464) < INT64_C(4096))) {
F.v8464 = y_range(y_add(Y_DEFI(F.v8464), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1701).p)[y_ix1(v1701, Y_DEFI(F.v8464))] = Y_DEFI(F.v8467);
Y_FLUSH();
}
F.v8462 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8462)))).f_next);
Y_FLUSH();
}
F.v8460 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8460)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3469_Falls(void * a_p3470) {
struct yf3471 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3470 = a_p3470;
F.v8485 = Y_UNDEF_P;
F.v8485 = F.p3470;
F.v8487 = Y_UNDEF_I;
F.v8487 = 1;
while ((!(Y_DEFP(F.v8485) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8485)))).f_text) == INT64_C(0)))) {
F.v8487 = 1;
Y_FLUSH();
}
if (Y_DEFI(F.v8487)) {
F.v8487 = yr3481_Completes(Y_DEFP(F.v8485));
Y_FLUSH();
}
F.v8485 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8485)))).f_next);
Y_FLUSH();
}
{ rt_int rv8491 = Y_DEFI(F.v8487);
y_use = F.yu; return rv8491; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3475_BlockFalls(void * a_p3476) {
struct yf3477 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3476 = a_p3476;
F.v8495 = Y_UNDEF_P;
if (yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3476))).f_c))) {
{ rt_int rv8497 = 1;
y_use = F.yu; return rv8497; }
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3476))).f_b) == ((void *)0))) {
{ rt_int rv8499 = 0;
y_use = F.yu; return rv8499; }
}
F.v8495 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3476))).f_b)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8495) == ((void *)0)))) {
Y_TICK();
if (yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8495)))).f_b))) {
{ rt_int rv8501 = 1;
y_use = F.yu; return rv8501; }
}
F.v8495 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8495)))).f_next);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3476))).f_b)))).f_flag) == INT64_C(1))) {
{ rt_int rv8503 = yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3476))).f_b)))).f_b));
y_use = F.yu; return rv8503; }
}
{ rt_int rv8505 = 0;
y_use = F.yu; return rv8505; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3481_Completes(void * a_p3482) {
struct yf3483 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3482 = a_p3482;
F.v8509 = Y_UNDEF_I;
F.v8509 = Y_DEFI(((*(yR105 *)y_deref(F.p3482))).f_kind);
F.v8511 = Y_UNDEF_P;
F.v8513 = Y_UNDEF_I;
F.v8515 = Y_UNDEF_I;
if (((((((Y_DEFI(F.v8509) == v729)) || ((Y_DEFI(F.v8509) == v732))) || ((Y_DEFI(F.v8509) == v735))) || ((Y_DEFI(F.v8509) == v723))) || ((Y_DEFI(F.v8509) == v726)))) {
{ rt_int rv8517 = 0;
y_use = F.yu; return rv8517; }
}
if ((Y_DEFI(F.v8509) == v738)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3482))).f_flag) == INT64_C(1)))) {
{ rt_int rv8520 = 1;
y_use = F.yu; return rv8520; }
}
F.v8511 = Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8511) == ((void *)0)))) {
Y_TICK();
if (yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8511)))).f_b))) {
{ rt_int rv8522 = 1;
y_use = F.yu; return rv8522; }
}
F.v8511 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8511)))).f_next);
Y_FLUSH();
}
{ rt_int rv8523 = yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_b));
y_use = F.yu; return rv8523; }
}
if ((Y_DEFI(F.v8509) == v741)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3482))).f_flag) == INT64_C(1)))) {
{ rt_int rv8526 = 1;
y_use = F.yu; return rv8526; }
}
F.v8511 = Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_b);
Y_FLUSH();
while ((!(Y_DEFP(F.v8511) == ((void *)0)))) {
Y_TICK();
if (yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8511)))).f_b))) {
{ rt_int rv8528 = 1;
y_use = F.yu; return rv8528; }
}
F.v8511 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8511)))).f_next);
Y_FLUSH();
}
{ rt_int rv8529 = yr3469_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_c));
y_use = F.yu; return rv8529; }
}
if ((Y_DEFI(F.v8509) == v744)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_a), &F.v8513, &F.v8515);
Y_FLUSH();
{ rt_int rv8531 = (!((Y_DEFI(F.v8513) && ((Y_DEFI(F.v8515) == INT64_C(1))))));
y_use = F.yu; return rv8531; }
}
if ((Y_DEFI(F.v8509) == v750)) {
{ rt_int rv8532 = yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3482))).f_name));
y_use = F.yu; return rv8532; }
}
if ((Y_DEFI(F.v8509) == v753)) {
{ rt_int rv8533 = yr3475_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3482))).f_a));
y_use = F.yu; return rv8533; }
}
{ rt_int rv8535 = 1;
y_use = F.yu; return rv8535; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3487_Exits(void * a_p3488, rt_int a_p3489) {
struct yf3490 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3488 = a_p3488;
F.p3489 = a_p3489;
F.v8540 = Y_UNDEF_P;
F.v8540 = F.p3488;
F.v8542 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8540) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v726)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_name) == F.p3489)))) {
{ rt_int rv8544 = 1;
y_use = F.yu; return rv8544; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v738)) {
F.v8542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8542) == ((void *)0)))) {
Y_TICK();
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8542)))).f_b), F.p3489)) {
{ rt_int rv8546 = 1;
y_use = F.yu; return rv8546; }
}
F.v8542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8542)))).f_next);
Y_FLUSH();
}
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_b), F.p3489)) {
{ rt_int rv8548 = 1;
y_use = F.yu; return rv8548; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v741)) {
F.v8542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_b);
Y_FLUSH();
while ((!(Y_DEFP(F.v8542) == ((void *)0)))) {
Y_TICK();
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8542)))).f_b), F.p3489)) {
{ rt_int rv8550 = 1;
y_use = F.yu; return rv8550; }
}
F.v8542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8542)))).f_next);
Y_FLUSH();
}
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_c), F.p3489)) {
{ rt_int rv8552 = 1;
y_use = F.yu; return rv8552; }
}
} else if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v744)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v747))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v750)))) {
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_b), F.p3489)) {
{ rt_int rv8554 = 1;
y_use = F.yu; return rv8554; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_kind) == v753)) {
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_a)))).f_c), F.p3489)) {
{ rt_int rv8556 = 1;
y_use = F.yu; return rv8556; }
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_a)))).f_b) == ((void *)0)))) {
F.v8542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_a)))).f_b)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8542) == ((void *)0)))) {
Y_TICK();
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8542)))).f_b), F.p3489)) {
{ rt_int rv8558 = 1;
y_use = F.yu; return rv8558; }
}
F.v8542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8542)))).f_next);
Y_FLUSH();
}
if (yr3487_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_a)))).f_b)))).f_b), F.p3489)) {
{ rt_int rv8560 = 1;
y_use = F.yu; return rv8560; }
}
}
}
F.v8540 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8540)))).f_next);
Y_FLUSH();
}
{ rt_int rv8562 = 0;
y_use = F.yu; return rv8562; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3494_Statements(void * a_p3495) {
struct yf3496 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3495 = a_p3495;
F.v8566 = Y_UNDEF_P;
F.v8566 = F.p3495;
while ((!(Y_DEFP(F.v8566) == ((void *)0)))) {
Y_TICK();
yr3518_Statement(Y_DEFP(F.v8566));
Y_FLUSH();
F.v8566 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8566)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3500_Cond(void * a_p3501) {
struct yf3502 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3501 = a_p3501;
F.v8570 = Y_UNDEF_I;
F.v8572 = Y_UNDEF_P;
yr3107_Expr(F.p3501, Y_DEFP(v1344), &F.v8570, &F.v8572);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3501))).f_line), Y_DEFP(v1344), Y_DEFP(F.v8572));
Y_FLUSH();
{ rt_int rv8573 = Y_DEFI(F.v8570);
y_use = F.yu; return rv8573; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3506_Label(void * a_p3507, void * a_p3508) {
struct yf3509 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3507 = a_p3507;
F.p3508 = a_p3508;
F.v8578 = Y_UNDEF_I;
F.v8580 = Y_UNDEF_I;
F.v8582 = Y_UNDEF_P;
F.v8584 = Y_UNDEF_P;
F.v8586 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR105 *)y_deref(F.p3507))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3507))).f_d) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3508))).f_kind) == v816)))) {
F.v8582 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3507))).f_name), F.p3508);
Y_FLUSH();
if ((!(Y_DEFP(F.v8582) == ((void *)0)))) {
{ rt_int rv8587 = Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v8582))))).f_mval);
y_use = F.yu; return rv8587; }
}
}
yr3107_Expr(F.p3507, F.p3508, &F.v8586, &F.v8584);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3507))).f_line), F.p3508, Y_DEFP(F.v8584));
Y_FLUSH();
yr2959_Manifest(F.p3507, &F.v8578, &F.v8580);
Y_FLUSH();
if ((!Y_DEFI(F.v8578))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3507))).f_line), y_str("a CASE label is a manifest constant (IX.B.1)", 44));
Y_FLUSH();
}
{ rt_int rv8589 = Y_DEFI(F.v8580);
y_use = F.yu; return rv8589; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3513_CopyOut(void) {
struct yf3514 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8592 = Y_UNDEF_P;
F.v8594 = Y_UNDEF_I;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
F.v8592 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_params);
Y_FLUSH();
while ((!(Y_DEFP(F.v8592) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_cls) == v900)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(*F.", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("_o)", 3));
Y_FLUSH();
F.v8594 = yr1056_SE();
Y_FLUSH();
if ((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_path) == INT64_C(0)))) {
yr3363_Assign(Y_DEFI(F.v8594), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_rep), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_path), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_rep), INT64_C(0));
Y_FLUSH();
} else {
yr3363_Assign(Y_DEFI(F.v8594), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_rep), yr2457_Path(Y_DEFI(v1279), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_cname)), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_rep), INT64_C(0));
Y_FLUSH();
}
}
F.v8592 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8592)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3518_Statement(void * a_p3519) {
struct yf3520 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3519 = a_p3519;
F.v8603 = Y_UNDEF_I;
F.v8603 = Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_kind);
F.v8605 = Y_UNDEF_I;
F.v8607 = Y_UNDEF_I;
F.v8609 = Y_UNDEF_I;
F.v8611 = Y_UNDEF_I;
F.v8613 = Y_UNDEF_I;
F.v8615 = Y_UNDEF_I;
F.v8617 = Y_UNDEF_P;
F.v8619 = Y_UNDEF_P;
F.v8621 = Y_UNDEF_P;
F.v8623 = Y_UNDEF_P;
F.v8625 = Y_UNDEF_I;
F.v8627 = Y_UNDEF_I;
F.v8629 = Y_UNDEF_I;
F.v8631 = Y_UNDEF_I;
F.v8633 = Y_UNDEF_P;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_text) == INT64_C(0)))) {
yr3550_PlaceLabel(F.p3519);
Y_FLUSH();
}
if (((((Y_DEFI(F.v8603) == v714)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a)))).f_kind) == v786))) && yr3166_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a)))).f_a)))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a)))).f_b)) == INT64_C(1)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), y_str("MAIN_STORE_ARRAY has one subscript", 34));
Y_FLUSH();
}
yr3074_CheckPure(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a));
Y_FLUSH();
yr3585_NoteWrite(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a));
Y_FLUSH();
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a)))).f_b), Y_DEFP(v1959), &F.v8605, &F.v8617);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), Y_DEFP(v1959), Y_DEFP(F.v8617));
Y_FLUSH();
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_b), Y_DEFP(v1961), &F.v8607, &F.v8619);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), Y_DEFP(v1961), Y_DEFP(F.v8619));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mem_set(", 10)), Y_DEFI(F.v8605), yr3530_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v8607), yr1061_T(y_str(");", 2)))));
Y_FLUSH();
yr1138_EmitS(y_str("Y_FLUSH();", 10));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v714)) {
yr3080_LValue(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a), &F.v8605, &F.v8617);
Y_FLUSH();
yr3074_CheckPure(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a));
Y_FLUSH();
yr3585_NoteWrite(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a));
Y_FLUSH();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8617)))).f_kind) == v837)) || yr2539_HoldsSignal(Y_DEFP(F.v8617)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), y_str("assignment is not defined for signals (VI.A.1.d)", 48));
Y_FLUSH();
}
if (yr2545_NonAssignable(Y_DEFP(F.v8617))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_b), Y_DEFP(F.v8617), &F.v8607, &F.v8619);
Y_FLUSH();
F.v8609 = yr3353_UserAssign(Y_DEFI(F.v8605), Y_DEFP(F.v8617), Y_DEFI(F.v8607), Y_DEFP(F.v8619), Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line));
Y_FLUSH();
if ((!(Y_DEFI(F.v8609) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v8609));
Y_FLUSH();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8617)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8617)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8617)))).f_tname), y_str(" is opaque here: := is not exported (X.B.3)", 43));
Y_FLUSH();
}
yr3058_Store(Y_DEFI(F.v8605), Y_DEFP(F.v8617), Y_DEFI(F.v8607), Y_DEFP(F.v8619), Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line));
Y_FLUSH();
}
yr1138_EmitS(y_str("Y_FLUSH();", 10));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v717)) {
F.v8633 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v8633) == ((void *)0)))) {
F.v8633 = yr2483_Real(Y_DEFP(F.v8633));
Y_FLUSH();
}
if (((((!(Y_DEFP(F.v8633) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8633)))).f_kind) == v885))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8633)))).f_hasmv))) {
yr3279_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a)))).f_a), Y_DEFP(F.v8633), &F.v8629, &F.v8631);
Y_FLUSH();
yr3901_CheckLifeScope(Y_DEFP(F.v8633), Y_DEFI(F.v8629), Y_DEFI(F.v8631));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr3303_CallCode(Y_DEFP(F.v8633), Y_DEFI(F.v8629), Y_DEFI(F.v8631), Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line)), yr1061_T(y_str(";", 1)), INT64_C(0)));
Y_FLUSH();
} else if ((((!(Y_DEFP(F.v8633) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8633)))).f_kind) == v885)))) {
yr3894_Activate(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a), Y_DEFP(F.v8633));
Y_FLUSH();
} else {
yr3373_CallExpr(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a), ((void *)0), 1, &F.v8605, &F.v8617);
Y_FLUSH();
yr3400_Emit2(y_str("", 0), Y_DEFI(F.v8605));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8605));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v8609 = yr1056_SE();
Y_FLUSH();
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = Y_DEFI(F.v8609);
Y_FLUSH();
yr1138_EmitS(y_str("Y_FLUSH();", 10));
Y_FLUSH();
}
} else if ((Y_DEFI(F.v8603) == v738)) {
F.v8625 = 1;
Y_FLUSH();
F.v8621 = Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8621) == ((void *)0)))) {
Y_TICK();
F.v8605 = yr3500_Cond(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_a));
Y_FLUSH();
if (Y_DEFI(F.v8625)) {
yr3408_Emit3(y_str("if (", 4), Y_DEFI(F.v8605), y_str(") {", 3));
Y_FLUSH();
} else {
yr3408_Emit3(y_str("} else if (", 11), Y_DEFI(F.v8605), y_str(") {", 3));
Y_FLUSH();
}
F.v8625 = 0;
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_b));
Y_FLUSH();
F.v8621 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_next);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_flag) == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_b));
Y_FLUSH();
}
yr1138_EmitS(y_str("}", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v744)) {
F.v8605 = yr3500_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a));
Y_FLUSH();
yr3408_Emit3(y_str("while (", 7), Y_DEFI(F.v8605), y_str(") {", 3));
Y_FLUSH();
yr1138_EmitS(y_str("Y_TICK();", 9));
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_b));
Y_FLUSH();
yr1138_EmitS(y_str("}", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v750)) {
F.v8611 = yr1200_Fresh(y_str("yl_", 3));
Y_FLUSH();
v1668 = y_range(y_add(Y_DEFI(v1668), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1653).p)[y_ix1(v1653, Y_DEFI(v1668))] = Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_name);
Y_FLUSH();
((rt_int *)(v1655).p)[y_ix1(v1655, Y_DEFI(v1668))] = Y_DEFI(F.v8611);
Y_FLUSH();
((rt_int *)(v1666).p)[y_ix1(v1666, Y_DEFI(v1668))] = Y_DEFI(v1599);
Y_FLUSH();
yr1138_EmitS(y_str("for (;;) {", 10));
Y_FLUSH();
yr1138_EmitS(y_str("Y_TICK();", 9));
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_b));
Y_FLUSH();
yr1138_EmitS(y_str("}", 1));
Y_FLUSH();
yr3408_Emit3(y_str("", 0), Y_DEFI(F.v8611), y_str(": ;", 3));
Y_FLUSH();
v1668 = y_range(y_sub(Y_DEFI(v1668), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v726)) {
F.v8627 = 0;
Y_FLUSH();
F.v8629 = Y_DEFI(v1668);
Y_FLUSH();
while ((((Y_DEFI(F.v8629) > Y_DEFI(v1671))) && (!Y_DEFI(F.v8627)))) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v1653).p)[y_ix1(v1653, Y_DEFI(F.v8629))]) == Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_name))) {
F.v8627 = 1;
Y_FLUSH();
yr3418_PopTo(Y_DEFI(((rt_int *)(v1666).p)[y_ix1(v1666, Y_DEFI(F.v8629))]));
Y_FLUSH();
yr3408_Emit3(y_str("goto ", 5), Y_DEFI(((rt_int *)(v1655).p)[y_ix1(v1655, Y_DEFI(F.v8629))]), y_str(";", 1));
Y_FLUSH();
}
F.v8629 = y_range(y_sub(Y_DEFI(F.v8629), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((!Y_DEFI(F.v8627))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_name), y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
Y_FLUSH();
}
} else if ((Y_DEFI(F.v8603) == v747)) {
yr3524_ForStatement(F.p3519);
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v741)) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a), ((void *)0), &F.v8605, &F.v8617);
Y_FLUSH();
if ((!yr2502_IsDiscrete(Y_DEFP(F.v8617)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), y_str("SELECT on a value that is not integer or scalar", 47));
Y_FLUSH();
}
yr3462_CheckCaseLabels(F.p3519, Y_DEFP(F.v8617));
Y_FLUSH();
yr3408_Emit3(y_str("switch (", 8), Y_DEFI(F.v8605), y_str(") {", 3));
Y_FLUSH();
F.v8621 = Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_b);
Y_FLUSH();
while ((!(Y_DEFP(F.v8621) == ((void *)0)))) {
Y_TICK();
F.v8623 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8623) == ((void *)0)))) {
Y_TICK();
F.v8631 = yr3506_Label(Y_DEFP(F.v8623), Y_DEFP(F.v8617));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("case ", 5));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v8631));
Y_FLUSH();
yr1037_SA(y_str(":", 1));
Y_FLUSH();
F.v8609 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8609));
Y_FLUSH();
F.v8623 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8623)))).f_next);
Y_FLUSH();
}
yr1138_EmitS(y_str("{", 1));
Y_FLUSH();
v1689 = y_range(y_add(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1685).p)[y_ix1(v1685, Y_DEFI(v1689))] = Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a);
Y_FLUSH();
((void * *)(v1687).p)[y_ix1(v1687, Y_DEFI(v1689))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_a);
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_b));
Y_FLUSH();
v1689 = y_range(y_sub(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr1138_EmitS(y_str("} break;", 8));
Y_FLUSH();
F.v8621 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8621)))).f_next);
Y_FLUSH();
}
yr1138_EmitS(y_str("default: {", 10));
Y_FLUSH();
v1689 = y_range(y_add(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1685).p)[y_ix1(v1685, Y_DEFI(v1689))] = Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a);
Y_FLUSH();
((void * *)(v1687).p)[y_ix1(v1687, Y_DEFI(v1689))] = ((void *)0);
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_flag) == INT64_C(1))) {
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_c));
Y_FLUSH();
}
v1689 = y_range(y_sub(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr1138_EmitS(y_str("} break;", 8));
Y_FLUSH();
yr1138_EmitS(y_str("}", 1));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v729)) {
yr3538_ReturnStatement(F.p3519);
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v735)) {
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_name) == INT64_C(0))) {
if ((Y_DEFI(v1641) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
Y_FLUSH();
}
yr3408_Emit3(y_str("rt_raise(", 9), Y_DEFI(((rt_int *)(v1639).p)[y_ix1(v1639, Y_DEFI(v1641))]), y_str(");", 2));
Y_FLUSH();
} else {
yr3424_LeaveBlock();
Y_FLUSH();
yr1132_Emit(yr3429_RaiseCode(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_name)));
Y_FLUSH();
}
} else if ((((Y_DEFI(F.v8603) == v720)) && yr3347_Suppressed(v1486))) {
F.v8629 = INT64_C(0);
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v720)) {
F.v8629 = Y_DEFI(v1706);
Y_FLUSH();
F.v8605 = yr3500_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3519))).f_a));
Y_FLUSH();
if ((!(Y_DEFI(v1706) == Y_DEFI(F.v8629)))) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
Y_FLUSH();
}
yr3408_Emit3(y_str("if (!(", 6), Y_DEFI(F.v8605), y_str(")) {", 4));
Y_FLUSH();
yr3424_LeaveBlock();
Y_FLUSH();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v753)) {
yr3544_BeginStatement(F.p3519);
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v732)) {
yr3932_TerminateStatement(F.p3519);
Y_FLUSH();
} else if ((Y_DEFI(F.v8603) == v723)) {
yr3556_GotoStatement(F.p3519);
Y_FLUSH();
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3519))).f_line), y_str("not a statement", 15));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3524_ForStatement(void * a_p3525) {
struct yf3526 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3525 = a_p3525;
F.v8718 = Y_UNDEF_P;
F.v8720 = Y_UNDEF_I;
F.v8722 = Y_UNDEF_I;
F.v8724 = Y_UNDEF_I;
F.v8726 = Y_UNDEF_P;
F.v8718 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3525))).f_a), INT64_C(0), 0);
Y_FLUSH();
if ((((!yr2502_IsDiscrete(Y_DEFP(F.v8718))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8718)))).f_kind) == v813))) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8718)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8718)))).f_ordered)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3525))).f_line), y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
Y_FLUSH();
}
yr2592_CheckRepresented(Y_DEFP(F.v8718), Y_DEFI(((*(yR105 *)y_deref(F.p3525))).f_line));
Y_FLUSH();
yr2355_OpenScope(0);
Y_FLUSH();
F.v8726 = yr2348_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(F.p3525))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v8726)))).f_rep = Y_DEFP(F.v8718);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v8726)))).f_level = Y_DEFI(v1279);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v8726)))).f_cname = yr1200_Fresh(y_str("c_", 2));
Y_FLUSH();
yr2470_DeclStorage(yr1061_T(y_str("rt_int", 6)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8726)))).f_cname));
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v8726), Y_DEFI(((*(yR105 *)y_deref(F.p3525))).f_line));
Y_FLUSH();
F.v8720 = yr1200_Fresh(y_str("i", 1));
Y_FLUSH();
F.v8722 = yr1200_Fresh(y_str("hi", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("{ rt_int ", 9));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8722));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr2638_HiText(Y_DEFP(F.v8718)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v8724 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8724));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("for (rt_int ", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8720));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr2632_LoText(Y_DEFP(F.v8718)));
Y_FLUSH();
yr1037_SA(y_str("; ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8720));
Y_FLUSH();
yr1037_SA(y_str(" <= ", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8722));
Y_FLUSH();
yr1037_SA(y_str("; ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8720));
Y_FLUSH();
yr1037_SA(y_str("++) { ", 6));
Y_FLUSH();
yr1044_ST(yr2477_SymPath(Y_DEFP(F.v8726)));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8720));
Y_FLUSH();
yr1037_SA(y_str("; Y_TICK();", 11));
Y_FLUSH();
F.v8724 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8724));
Y_FLUSH();
yr3494_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3525))).f_b));
Y_FLUSH();
yr3408_Emit3(y_str("if (", 4), Y_DEFI(F.v8720), y_str(" == ", 4));
Y_FLUSH();
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = yr3530_Join(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t), Y_DEFI(F.v8722), yr1061_T(y_str(") break;", 8)));
Y_FLUSH();
yr1138_EmitS(y_str("}}", 2));
Y_FLUSH();
yr2367_CloseScope();
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3530_Join(rt_int a_p3531, rt_int a_p3532, rt_int a_p3533) {
struct yf3534 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3531 = a_p3531;
F.p3532 = a_p3532;
F.p3533 = a_p3533;
yr1026_SB();
Y_FLUSH();
yr1044_ST(F.p3531);
Y_FLUSH();
yr1044_ST(F.p3532);
Y_FLUSH();
yr1044_ST(F.p3533);
Y_FLUSH();
{ rt_int rv8754 = yr1056_SE();
y_use = F.yu; return rv8754; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3538_ReturnStatement(void * a_p3539) {
struct yf3540 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3539 = a_p3539;
F.v8758 = Y_UNDEF_I;
F.v8760 = Y_UNDEF_I;
F.v8762 = Y_UNDEF_I;
F.v8764 = Y_UNDEF_P;
F.v8766 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3539))).f_line), y_str("RETURN outside a routine (IX.A.6)", 33));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_kind) == v885)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3539))).f_line), y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
Y_FLUSH();
}
F.v8766 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_ret);
Y_FLUSH();
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3539))).f_a) == ((void *)0))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8766)))).f_kind) == v852))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3539))).f_line), y_str("RETURN needs a value here (IX.A.6)", 34));
Y_FLUSH();
}
yr3513_CopyOut();
Y_FLUSH();
yr3927_LeaveMonitor();
Y_FLUSH();
yr3418_PopTo(Y_DEFI(v1602));
Y_FLUSH();
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
Y_FLUSH();
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8766)))).f_kind) == v852)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3539))).f_line), y_str("this routine returns no value (IX.A.6)", 38));
Y_FLUSH();
}
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3539))).f_a), Y_DEFP(F.v8766), &F.v8758, &F.v8764);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3539))).f_line), Y_DEFP(F.v8766), Y_DEFP(F.v8764));
Y_FLUSH();
F.v8762 = yr1200_Fresh(y_str("rv", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("{ ", 2));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v8766)));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v8762));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(yr3040_Convert(Y_DEFI(F.v8758), Y_DEFP(F.v8766), Y_DEFP(F.v8764)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v8760 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v8760));
Y_FLUSH();
yr3513_CopyOut();
Y_FLUSH();
yr3927_LeaveMonitor();
Y_FLUSH();
yr3418_PopTo(Y_DEFI(v1602));
Y_FLUSH();
yr3408_Emit3(y_str("y_use = F.yu; return ", 21), Y_DEFI(F.v8762), y_str("; }", 3));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3544_BeginStatement(void * a_p3545) {
struct yf3546 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3545 = a_p3545;
F.v8782 = Y_UNDEF_I;
F.v8784 = Y_UNDEF_I;
yr1138_EmitS(y_str("{", 1));
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3545))).f_flag) == INT64_C(1))) {
F.v8782 = yr1200_Fresh(y_str("sf", 2));
Y_FLUSH();
F.v8784 = yr1200_Fresh(y_str("ys", 2));
Y_FLUSH();
v1703 = 1;
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("int ", 4)), Y_DEFI(F.v8784), yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v8782), yr1061_T(y_str(";", 1))));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), Y_DEFI(F.v8782), yr3530_Join(yr1061_T(y_str(")) { RT_POP(", 12)), Y_DEFI(F.v8782), yr3530_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8784), yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
Y_FLUSH();
v1599 = y_range(y_add(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1572).p)[y_ix1(v1572, Y_DEFI(v1599))] = Y_DEFI(F.v8782);
Y_FLUSH();
((rt_int *)(v1583).p)[y_ix1(v1583, Y_DEFI(v1599))] = yr3530_Join(yr1061_T(y_str("y_sim_depth = ", 14)), Y_DEFI(F.v8784), yr1061_T(y_str(";", 1)));
Y_FLUSH();
v1596 = y_range(y_add(Y_DEFI(v1596), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1594).p)[y_ix1(v1594, Y_DEFI(v1596))] = Y_DEFI(F.v8784);
Y_FLUSH();
}
yr2355_OpenScope(0);
Y_FLUSH();
yr3757_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3545))).f_a)))).f_a));
Y_FLUSH();
yr3435_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3545))).f_a));
Y_FLUSH();
yr3889_AwaitProcesses();
Y_FLUSH();
yr2367_CloseScope();
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3545))).f_flag) == INT64_C(1))) {
v1596 = y_range(y_sub(Y_DEFI(v1596), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
v1599 = y_range(y_sub(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("RT_POP(", 7)), Y_DEFI(F.v8782), yr3530_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8784), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
}
yr1138_EmitS(y_str("}", 1));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3550_PlaceLabel(void * a_p3551) {
struct yf3552 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3551 = a_p3551;
F.v8817 = Y_UNDEF_P;
F.v8817 = yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3551))).f_text));
if ((((Y_DEFP(F.v8817) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8817)))).f_kind) == v888))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3551))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3551))).f_text), y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
Y_FLUSH();
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8817)))).f_hasmv)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3551))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3551))).f_text), y_str(" labels two statements", 22));
Y_FLUSH();
}
((*(yR125 *)y_deref(Y_DEFP(F.v8817)))).f_hasmv = 1;
Y_FLUSH();
yr3408_Emit3(y_str("", 0), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8817)))).f_cname), y_str(": ;", 3));
Y_FLUSH();
if ((!(Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]) == INT64_C(0)))) {
yr3408_Emit3(y_str("rt_xtop = &", 11), Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]), y_str(";", 1));
Y_FLUSH();
} else if ((!(Y_DEFI(((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))]) == INT64_C(0)))) {
yr3408_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))]), y_str(";", 1));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3556_GotoStatement(void * a_p3557) {
struct yf3558 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3557 = a_p3557;
F.v8832 = Y_UNDEF_P;
F.v8832 = yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3557))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3557))).f_line));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8832)))).f_kind) == v888))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3557))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3557))).f_name), y_str(" is not a label", 15));
Y_FLUSH();
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8832)))).f_level) == Y_DEFI(v1279)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3557))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3557))).f_name), y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
Y_FLUSH();
}
((*(yR125 *)y_deref(Y_DEFP(F.v8832)))).f_readonly = 1;
Y_FLUSH();
yr1138_EmitS(y_str("Y_TICK();", 9));
Y_FLUSH();
if ((Y_DEFI(v1596) > Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8832)))).f_mval))) {
yr3408_Emit3(y_str("y_sim_depth = ", 14), Y_DEFI(((rt_int *)(v1594).p)[y_ix1(v1594, y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8832)))).f_mval), INT64_C(1)))]), y_str(";", 1));
Y_FLUSH();
}
yr3408_Emit3(y_str("goto ", 5), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8832)))).f_cname), y_str(";", 1));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3562_CheckLabels(void * a_p3563) {
struct yf3564 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3563 = a_p3563;
F.v8846 = Y_UNDEF_P;
F.v8846 = F.p3563;
F.v8848 = Y_UNDEF_P;
F.v8850 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8846) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8846)))).f_kind) == v645)) {
F.v8848 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8846)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v8848) == ((void *)0)))) {
Y_TICK();
F.v8850 = yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8848)))).f_name));
Y_FLUSH();
if ((((((!(Y_DEFP(F.v8850) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8850)))).f_kind) == v888))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8850)))).f_readonly)) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8850)))).f_hasmv)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8848)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8848)))).f_name), y_str(" is the target of a GOTO but labels no statement of its block", 61));
Y_FLUSH();
}
F.v8848 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8848)))).f_next);
Y_FLUSH();
}
}
F.v8846 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8846)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3568_DesigBase(void * a_p3569, void * * a_p3570, rt_int * a_p3571, rt_int * a_p3572) {
struct yf3573 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3569 = a_p3569;
F.p3570_o = a_p3570;
F.p3571_o = a_p3571;
F.p3572_o = a_p3572;
F.v8858 = Y_UNDEF_P;
F.v8858 = F.p3569;
F.v8860 = Y_UNDEF_P;
F.p3570 = ((void *)0);
Y_FLUSH();
F.p3571 = 0;
Y_FLUSH();
F.p3572 = INT64_C(0);
Y_FLUSH();
for (;;) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_kind) == v786)))) {
F.v8858 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_a);
Y_FLUSH();
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_kind) == v789)) {
if ((!Y_DEFI(F.p3571))) {
F.p3571 = 1;
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_a)))).f_rep) == ((void *)0)))) {
F.p3572 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_a)))).f_rep)))).f_tid);
Y_FLUSH();
}
}
F.v8858 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_a);
Y_FLUSH();
} else {
goto yl_8863;
}
}
yl_8863: ;
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_d) == ((void *)0))))) {
F.v8860 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v8860) == ((void *)0)))) {
if (yr2431_Resolved(Y_DEFP(F.v8860))) {
F.v8860 = yr2483_Real(Y_DEFP(F.v8860));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8860)))).f_kind) == v861)) {
F.p3570 = Y_DEFP(F.v8860);
Y_FLUSH();
}
}
}
}
(*F.p3570_o) = F.p3570;
(*F.p3571_o) = F.p3571;
(*F.p3572_o) = F.p3572;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3577_Note(void * a_p3578, rt_int a_p3579, rt_int a_p3580) {
struct yf3581 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3578 = a_p3578;
F.p3579 = a_p3579;
F.p3580 = a_p3580;
F.v8870 = Y_UNDEF_P;
F.v8870 = yr2029_NewNode(v669, F.p3580);
((*(yR105 *)y_deref(Y_DEFP(F.v8870)))).f_sym = F.p3578;
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v8870)))).f_name = F.p3579;
Y_FLUSH();
{ void * rv8871 = Y_DEFP(F.v8870);
y_use = F.yu; return rv8871; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3585_NoteWrite(void * a_p3586) {
struct yf3587 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3586 = a_p3586;
F.v8875 = Y_UNDEF_P;
F.v8877 = Y_UNDEF_I;
F.v8879 = Y_UNDEF_I;
F.v8881 = Y_UNDEF_P;
F.v8883 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
yr3568_DesigBase(F.p3586, &F.v8875, &F.v8877, &F.v8879);
Y_FLUSH();
if (Y_DEFI(F.v8877)) {
F.v8875 = ((void *)0);
Y_FLUSH();
} else if ((((Y_DEFP(F.v8875) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8875)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))))) {
y_use = F.yu; return;
}
F.v8881 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_writes);
Y_FLUSH();
while ((!(Y_DEFP(F.v8881) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8881)))).f_sym) == Y_DEFP(F.v8875))) {
y_use = F.yu; return;
}
F.v8881 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8881)))).f_next);
Y_FLUSH();
}
F.v8883 = yr3577_Note(Y_DEFP(F.v8875), INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(F.p3586))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v8883)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_writes);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_writes = Y_DEFP(F.v8883);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3591_NoteFree(void * a_p3592) {
struct yf3593 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3592 = a_p3592;
F.v8888 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3592))).f_kind) == v861))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p3592))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3592))).f_seen) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_serial))) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3592))).f_seen = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_serial);
Y_FLUSH();
F.v8888 = yr3577_Note(F.p3592, INT64_C(0), Y_DEFI(v1000));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v8888)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees = Y_DEFP(F.v8888);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3597_NoteFreeDeref(void * a_p3598, rt_int a_p3599) {
struct yf3600 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3598 = a_p3598;
F.p3599 = a_p3599;
F.v8894 = Y_UNDEF_P;
F.v8896 = Y_UNDEF_I;
F.v8898 = Y_UNDEF_I;
F.v8900 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
yr3568_DesigBase(F.p3598, &F.v8894, &F.v8896, &F.v8898);
Y_FLUSH();
if ((((Y_DEFP(F.v8894) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8894)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))))) {
y_use = F.yu; return;
}
F.v8900 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees);
Y_FLUSH();
while ((!(Y_DEFP(F.v8900) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8900)))).f_sym) == ((void *)0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8900)))).f_name) == F.p3599)))) {
y_use = F.yu; return;
}
F.v8900 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8900)))).f_next);
Y_FLUSH();
}
F.v8900 = yr3577_Note(((void *)0), F.p3599, Y_DEFI(((*(yR105 *)y_deref(F.p3598))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v8900)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees = Y_DEFP(F.v8900);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3604_DSteps(void * a_p3605, yarr * a_p3606) {
struct yf3607 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3605 = a_p3605;
F.p3606 = a_p3606;
F.v8905 = Y_UNDEF_P;
F.v8905 = F.p3605;
F.v8907 = Y_UNDEF_I;
F.v8907 = INT64_C(0);
F.v8910 = Y_UNDEF_P;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8905)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8905)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8905)))).f_kind) == v786)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8905)))).f_kind) == v801))) {
if ((Y_DEFI(F.v8907) < INT64_C(64))) {
F.v8907 = y_range(y_add(Y_DEFI(F.v8907), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)((*F.p3606)).p)[y_ix1((*F.p3606), Y_DEFI(F.v8907))] = Y_DEFP(F.v8905);
Y_FLUSH();
}
}
F.v8905 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8905)))).f_a);
Y_FLUSH();
}
F.lo8919 = INT64_C(1);
F.hi8920 = y_div(Y_DEFI(F.v8907), INT64_C(2));
{ rt_int hi8924 = F.hi8920;
for (rt_int i8923 = F.lo8919; i8923 <= hi8924; i8923++) { F.c_8922 = i8923; Y_TICK();
F.v8910 = Y_DEFP(((void * *)((*F.p3606)).p)[y_ix1((*F.p3606), F.c_8922)]);
Y_FLUSH();
((void * *)((*F.p3606)).p)[y_ix1((*F.p3606), F.c_8922)] = Y_DEFP(((void * *)((*F.p3606)).p)[y_ix1((*F.p3606), y_sub((y_add(Y_DEFI(F.v8907), INT64_C(1))), F.c_8922))]);
Y_FLUSH();
((void * *)((*F.p3606)).p)[y_ix1((*F.p3606), y_sub((y_add(Y_DEFI(F.v8907), INT64_C(1))), F.c_8922))] = Y_DEFP(F.v8910);
Y_FLUSH();
if (i8923 == hi8924) break;
}}
{ rt_int rv8931 = Y_DEFI(F.v8907);
y_use = F.yu; return rv8931; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3611_Overlaps(void * a_p3612, void * a_p3613) {
struct yf3614 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3612 = a_p3612;
F.p3613 = a_p3613;
F.v8936 = Y_UNDEF_P;
F.v8938 = Y_UNDEF_P;
F.v8940 = Y_UNDEF_I;
F.v8942 = Y_UNDEF_I;
F.v8944 = Y_UNDEF_I;
F.v8946 = Y_UNDEF_I;
F.v8948 = Y_UNDEF_I;
F.v8950 = Y_UNDEF_I;
F.v8952 = Y_UNDEF_I;
F.v8954 = Y_UNDEF_I;
y_initu(&yd_201, &F.v8956);
y_initu(&yd_201, &F.v8958);
F.v8960 = Y_UNDEF_I;
F.v8962 = Y_UNDEF_I;
F.v8964 = Y_UNDEF_I;
F.v8966 = Y_UNDEF_I;
F.v8968 = Y_UNDEF_P;
F.v8970 = Y_UNDEF_P;
F.v8972 = Y_UNDEF_P;
F.v8974 = Y_UNDEF_P;
yr3568_DesigBase(F.p3612, &F.v8936, &F.v8940, &F.v8952);
Y_FLUSH();
yr3568_DesigBase(F.p3613, &F.v8938, &F.v8942, &F.v8954);
Y_FLUSH();
if ((!(Y_DEFI(F.v8940) == Y_DEFI(F.v8942)))) {
if (((Y_DEFI(F.v8940) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3612))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3613))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3613))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3613))).f_rep)))).f_tid) == Y_DEFI(F.v8952))))) {
{ rt_int rv8976 = 1;
y_use = F.yu; return rv8976; }
}
}
if (((Y_DEFI(F.v8942) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3613))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3612))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3612))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3612))).f_rep)))).f_tid) == Y_DEFI(F.v8954))))) {
{ rt_int rv8978 = 1;
y_use = F.yu; return rv8978; }
}
}
{ rt_int rv8980 = 0;
y_use = F.yu; return rv8980; }
}
if (Y_DEFI(F.v8940)) {
if ((!(Y_DEFI(F.v8952) == Y_DEFI(F.v8954)))) {
{ rt_int rv8982 = 0;
y_use = F.yu; return rv8982; }
}
} else if ((((Y_DEFP(F.v8936) == ((void *)0))) || ((!(Y_DEFP(F.v8936) == Y_DEFP(F.v8938)))))) {
{ rt_int rv8984 = 0;
y_use = F.yu; return rv8984; }
}
F.v8960 = yr3604_DSteps(F.p3612, &F.v8956);
Y_FLUSH();
F.v8962 = yr3604_DSteps(F.p3613, &F.v8958);
Y_FLUSH();
F.lo8988 = INT64_C(1);
F.hi8989 = Y_DEFI(F.v8960);
{ rt_int hi8993 = F.hi8989;
for (rt_int i8992 = F.lo8988; i8992 <= hi8993; i8992++) { F.c_8991 = i8992; Y_TICK();
if ((F.c_8991 <= Y_DEFI(F.v8962))) {
F.v8968 = Y_DEFP(((void * *)(F.v8956).p)[y_ix1(F.v8956, F.c_8991)]);
Y_FLUSH();
F.v8970 = Y_DEFP(((void * *)(F.v8958).p)[y_ix1(F.v8958, F.c_8991)]);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8968)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8970)))).f_kind)))) {
{ rt_int rv8995 = 1;
y_use = F.yu; return rv8995; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8968)))).f_kind) == v783)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8968)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8970)))).f_name)))) {
{ rt_int rv8997 = 0;
y_use = F.yu; return rv8997; }
}
} else {
F.v8948 = 1;
Y_FLUSH();
F.v8950 = 0;
Y_FLUSH();
F.v8972 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8968)))).f_b);
Y_FLUSH();
F.v8974 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8970)))).f_b);
Y_FLUSH();
while ((((!(Y_DEFP(F.v8972) == ((void *)0)))) && ((!(Y_DEFP(F.v8974) == ((void *)0)))))) {
Y_TICK();
yr2959_Manifest(Y_DEFP(F.v8972), &F.v8944, &F.v8964);
Y_FLUSH();
yr2959_Manifest(Y_DEFP(F.v8974), &F.v8946, &F.v8966);
Y_FLUSH();
if ((Y_DEFI(F.v8944) && Y_DEFI(F.v8946))) {
if ((!(Y_DEFI(F.v8964) == Y_DEFI(F.v8966)))) {
F.v8950 = 1;
Y_FLUSH();
}
} else {
F.v8948 = 0;
Y_FLUSH();
}
F.v8972 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8972)))).f_next);
Y_FLUSH();
F.v8974 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8974)))).f_next);
Y_FLUSH();
}
if ((!Y_DEFI(F.v8948))) {
{ rt_int rv9003 = 1;
y_use = F.yu; return rv9003; }
}
if (Y_DEFI(F.v8950)) {
{ rt_int rv9005 = 0;
y_use = F.yu; return rv9005; }
}
}
}
if (i8992 == hi8993) break;
}}
{ rt_int rv9007 = 1;
y_use = F.yu; return rv9007; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3618_CheckActuals(void * a_p3619, rt_int a_p3620, rt_int a_p3621) {
struct yf3622 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3619 = a_p3619;
F.p3620 = a_p3620;
F.p3621 = a_p3621;
F.v9013 = Y_UNDEF_P;
F.v9015 = Y_UNDEF_P;
F.v9017 = Y_UNDEF_I;
F.v9019 = Y_UNDEF_I;
F.v9021 = Y_UNDEF_P;
F.v9023 = Y_UNDEF_P;
F.v9025 = Y_UNDEF_P;
F.v9027 = Y_UNDEF_I;
F.v9029 = Y_UNDEF_I;
F.v9013 = Y_DEFP(((*(yR125 *)y_deref(F.p3619))).f_params);
Y_FLUSH();
F.v9017 = y_range(y_add(F.p3620, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v9021 = ((void *)0);
Y_FLUSH();
while ((!(Y_DEFP(F.v9013) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_cls) == v897))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_rep)))).f_kind) == v855))))) {
F.v9015 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_next);
Y_FLUSH();
F.v9019 = y_range(y_add(Y_DEFI(F.v9017), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((!(Y_DEFP(F.v9015) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_cls) == v903)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9015)))).f_cls) == v903)))) {
if (yr3611_Overlaps(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9017))]), Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9019))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9019))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9015)))).f_name), y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
Y_FLUSH();
}
}
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_cls) == v900)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9015)))).f_cls) == v900)))) {
if (yr3447_SameDesig(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9017))]), Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9019))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9019))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9015)))).f_name), y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
Y_FLUSH();
}
}
F.v9015 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9015)))).f_next);
Y_FLUSH();
F.v9019 = y_range(y_add(Y_DEFI(F.v9019), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_cls) == v903)) {
yr3568_DesigBase(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9017))]), &F.v9025, &F.v9027, &F.v9029);
Y_FLUSH();
F.v9023 = yr3577_Note(Y_DEFP(F.v9025), Y_DEFI(F.v9029), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9017))])))).f_line));
Y_FLUSH();
if (Y_DEFI(F.v9027)) {
((*(yR105 *)y_deref(Y_DEFP(F.v9023)))).f_flag = INT64_C(1);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v9017))])))).f_kind) == v789)) {
((*(yR105 *)y_deref(Y_DEFP(F.v9023)))).f_ival = INT64_C(1);
Y_FLUSH();
}
if ((Y_DEFP(F.v9021) == ((void *)0))) {
F.v9021 = yr3577_Note(F.p3619, INT64_C(0), F.p3621);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9021)))).f_next = Y_DEFP(v1758);
Y_FLUSH();
v1758 = Y_DEFP(F.v9021);
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v9023)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9021)))).f_a);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9021)))).f_a = Y_DEFP(F.v9023);
Y_FLUSH();
}
}
F.v9017 = y_range(y_add(Y_DEFI(F.v9017), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v9013 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9013)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr9162_At(struct yf3627 *up, rt_int a_p9163, rt_int a_p9164) {
struct yf9165 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p9163 = a_p9163;
F.p9164 = a_p9164;
{ rt_int rv9192 = y_range(y_add((y_mul(F.p9163, (y_add(Y_DEFI(F.up->v9054), INT64_C(1))))), F.p9164), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv9192; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr9169_Reaches(struct yf3627 *up, rt_int a_p9170, rt_int a_p9171) {
struct yf9172 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p9170 = a_p9170;
F.p9171 = a_p9171;
F.v9197 = Y_UNDEF_P;
F.v9197 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v9138).p)[y_ix1(F.up->v9138, F.p9171)])))).f_calls);
if (Y_DEFI(((rt_int *)(F.up->v9149).p)[y_ix1(F.up->v9149, F.p9171)])) {
{ rt_int rv9199 = 0;
y_use = F.yu; return rv9199; }
}
((rt_int *)(F.up->v9149).p)[y_ix1(F.up->v9149, F.p9171)] = 1;
Y_FLUSH();
while ((!(Y_DEFP(F.v9197) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9197)))).f_sym)))).f_vix) > INT64_C(0))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9197)))).f_sym)))).f_vix) == F.p9170)) {
{ rt_int rv9203 = 1;
y_use = F.yu; return rv9203; }
}
if (yr9169_Reaches(F.up, F.p9170, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9197)))).f_sym)))).f_vix))) {
{ rt_int rv9205 = 1;
y_use = F.yu; return rv9205; }
}
}
F.v9197 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9197)))).f_next);
Y_FLUSH();
}
{ rt_int rv9207 = 0;
y_use = F.yu; return rv9207; }
rt_raise(Y_X_NO_RETURN);
}
static void yr9176_WriteFacts(struct yf3627 *up) {
struct yf9177 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
y_initu(&yd_141, &F.v9210);
F.v9210 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v9212 = Y_UNDEF_I;
F.v9214 = Y_UNDEF_I;
F.v9216 = Y_UNDEF_P;
F.lo9220 = INT64_C(1);
F.hi9221 = Y_DEFI(F.up->v9051);
{ rt_int hi9225 = F.hi9221;
for (rt_int i9224 = F.lo9220; i9224 <= hi9225; i9224++) { F.c_9223 = i9224; Y_TICK();
F.v9216 = Y_DEFP(((void * *)(F.up->v9138).p)[y_ix1(F.up->v9138, F.c_9223)]);
Y_FLUSH();
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9216)))).f_skey) == INT64_C(0)))) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9216)))).f_hasmv)))) {
F.v9212 = 1;
Y_FLUSH();
F.v9214 = 0;
Y_FLUSH();
F.lo9232 = INT64_C(1);
F.hi9233 = Y_DEFI(F.up->v9054);
{ rt_int hi9237 = F.hi9233;
for (rt_int i9236 = F.lo9232; i9236 <= hi9237; i9236++) { F.c_9235 = i9236; Y_TICK();
if (Y_DEFI(((rt_int *)(F.up->v9092).p)[y_ix1(F.up->v9092, yr9162_At(F.up, y_range(F.c_9223, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9235, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])) {
F.v9212 = 0;
Y_FLUSH();
}
if (((Y_DEFI(((rt_int *)(F.up->v9094).p)[y_ix1(F.up->v9094, yr9162_At(F.up, y_range(F.c_9223, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9235, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFP(((void * *)(F.up->v9116).p)[y_ix1(F.up->v9116, F.c_9235)]) == ((void *)0)))) && ((!(F.c_9235 == INT64_C(1)))))) {
F.v9214 = 1;
Y_FLUSH();
}
if (i9236 == hi9237) break;
}}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9216)))).f_skey));
Y_FLUSH();
if (Y_DEFI(F.v9212)) {
yr1037_SA(y_str(" P", 2));
Y_FLUSH();
} else {
yr1037_SA(y_str(" I", 2));
Y_FLUSH();
}
if (Y_DEFI(F.v9214)) {
yr1037_SA(y_str(" D", 2));
Y_FLUSH();
}
F.lo9247 = INT64_C(1);
F.hi9248 = Y_DEFI(F.up->v9054);
{ rt_int hi9252 = F.hi9248;
for (rt_int i9251 = F.lo9247; i9251 <= hi9252; i9251++) { F.c_9250 = i9251; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.up->v9094).p)[y_ix1(F.up->v9094, yr9162_At(F.up, y_range(F.c_9223, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9250, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.up->v9116).p)[y_ix1(F.up->v9116, F.c_9250)]) == ((void *)0)))))) {
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v9116).p)[y_ix1(F.up->v9116, F.c_9250)])))).f_skey) == INT64_C(0)))) {
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v9116).p)[y_ix1(F.up->v9116, F.c_9250)])))).f_skey));
Y_FLUSH();
}
}
if (i9251 == hi9252) break;
}}
yr1110_Put(&F.v9210, yr1056_SE());
Y_FLUSH();
}
if (i9224 == hi9225) break;
}}
yr4063_WriteFile(yr4049_LibPath(Y_DEFI(v1724), y_str(".yfx", 4)), F.v9210);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr9181_VName(struct yf3627 *up, rt_int a_p9182) {
struct yf9183 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p9182 = a_p9182;
if ((Y_DEFP(((void * *)(F.up->v9116).p)[y_ix1(F.up->v9116, F.p9182)]) == ((void *)0))) {
{ rt_int rv9259 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv9259; }
}
{ rt_int rv9260 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v9116).p)[y_ix1(F.up->v9116, F.p9182)])))).f_name);
y_use = F.yu; return rv9260; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3626_CheckEffects(void) {
struct yf3627 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9045 = Y_UNDEF_P;
F.v9047 = Y_UNDEF_P;
F.v9049 = Y_UNDEF_P;
F.v9051 = Y_UNDEF_I;
F.v9051 = INT64_C(0);
F.v9054 = Y_UNDEF_I;
F.v9054 = INT64_C(0);
F.v9057 = Y_UNDEF_I;
F.v9057 = INT64_C(0);
F.v9060 = Y_UNDEF_P;
F.v9057 = INT64_C(1);
Y_FLUSH();
F.v9054 = INT64_C(1);
Y_FLUSH();
F.v9045 = Y_DEFP(v1756);
Y_FLUSH();
while ((!(Y_DEFP(F.v9045) == ((void *)0)))) {
Y_TICK();
F.v9051 = y_range(y_add(Y_DEFI(F.v9051), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_sym)))).f_vix = Y_DEFI(F.v9051);
Y_FLUSH();
F.v9047 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_sym)))).f_writes);
Y_FLUSH();
while ((!(Y_DEFP(F.v9047) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix) == INT64_C(0))))) {
F.v9054 = y_range(y_add(Y_DEFI(F.v9054), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix = Y_DEFI(F.v9054);
Y_FLUSH();
}
F.v9047 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_next);
Y_FLUSH();
}
F.v9047 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_sym)))).f_frees);
Y_FLUSH();
while ((!(Y_DEFP(F.v9047) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym) == ((void *)0)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix) == INT64_C(0))) {
F.v9054 = y_range(y_add(Y_DEFI(F.v9054), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix = Y_DEFI(F.v9054);
Y_FLUSH();
}
} else if ((yr3631_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_name), Y_DEFI(F.v9054), 0) == INT64_C(0))) {
F.v9054 = y_range(y_add(Y_DEFI(F.v9054), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_ival = yr3631_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_name), Y_DEFI(F.v9054), 1);
Y_FLUSH();
}
F.v9047 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_next);
Y_FLUSH();
}
F.v9045 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_next);
Y_FLUSH();
}
if ((Y_DEFI(F.v9051) == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo9087 = INT64_C(0);
F.hi9088 = y_mul((y_add(Y_DEFI(F.v9051), INT64_C(1))), (y_add(Y_DEFI(F.v9054), INT64_C(1))));
{ rt_int lo[1] = {F.lo9087}, hi[1] = {F.hi9088}; y_desc_array(&F.yd_9090, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_9090, &F.v9092);
y_initu(&F.yd_9090, &F.v9094);
F.lo9100 = INT64_C(0);
F.hi9101 = Y_DEFI(F.v9054);
{ rt_int lo[1] = {F.lo9100}, hi[1] = {F.hi9101}; y_desc_array(&F.yd_9103, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_9103, &F.v9105);
F.lo9111 = INT64_C(0);
F.hi9112 = Y_DEFI(F.v9054);
{ rt_int lo[1] = {F.lo9111}, hi[1] = {F.hi9112}; y_desc_array(&F.yd_9114, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_9114, &F.v9116);
F.lo9122 = INT64_C(0);
F.hi9123 = Y_DEFI(F.v9054);
{ rt_int lo[1] = {F.lo9122}, hi[1] = {F.hi9123}; y_desc_array(&F.yd_9125, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_9125, &F.v9127);
F.lo9133 = INT64_C(0);
F.hi9134 = Y_DEFI(F.v9051);
{ rt_int lo[1] = {F.lo9133}, hi[1] = {F.hi9134}; y_desc_array(&F.yd_9136, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_9136, &F.v9138);
F.lo9144 = INT64_C(0);
F.hi9145 = Y_DEFI(F.v9051);
{ rt_int lo[1] = {F.lo9144}, hi[1] = {F.hi9145}; y_desc_array(&F.yd_9147, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_9147, &F.v9149);
F.v9151 = Y_UNDEF_I;
F.v9151 = 1;
F.v9154 = Y_UNDEF_I;
F.v9156 = Y_UNDEF_I;
F.v9158 = Y_UNDEF_I;
F.v9160 = Y_UNDEF_P;
F.lo9270 = INT64_C(0);
F.hi9271 = y_mul((y_add(Y_DEFI(F.v9051), INT64_C(1))), (y_add(Y_DEFI(F.v9054), INT64_C(1))));
{ rt_int hi9275 = F.hi9271;
for (rt_int i9274 = F.lo9270; i9274 <= hi9275; i9274++) { F.c_9273 = i9274; Y_TICK();
((rt_int *)(F.v9092).p)[y_ix1(F.v9092, F.c_9273)] = 0;
Y_FLUSH();
((rt_int *)(F.v9094).p)[y_ix1(F.v9094, F.c_9273)] = 0;
Y_FLUSH();
if (i9274 == hi9275) break;
}}
F.lo9281 = INT64_C(0);
F.hi9282 = Y_DEFI(F.v9054);
{ rt_int hi9286 = F.hi9282;
for (rt_int i9285 = F.lo9281; i9285 <= hi9286; i9285++) { F.c_9284 = i9285; Y_TICK();
((rt_int *)(F.v9105).p)[y_ix1(F.v9105, F.c_9284)] = INT64_C(-1);
Y_FLUSH();
((void * *)(F.v9116).p)[y_ix1(F.v9116, F.c_9284)] = ((void *)0);
Y_FLUSH();
((rt_int *)(F.v9127).p)[y_ix1(F.v9127, F.c_9284)] = INT64_C(0);
Y_FLUSH();
if (i9285 == hi9286) break;
}}
F.lo9292 = INT64_C(0);
F.hi9293 = Y_DEFI(F.v9051);
{ rt_int hi9297 = F.hi9293;
for (rt_int i9296 = F.lo9292; i9296 <= hi9297; i9296++) { F.c_9295 = i9296; Y_TICK();
((rt_int *)(F.v9149).p)[y_ix1(F.v9149, F.c_9295)] = 0;
Y_FLUSH();
if (i9296 == hi9297) break;
}}
F.v9045 = Y_DEFP(v1756);
Y_FLUSH();
while ((!(Y_DEFP(F.v9045) == ((void *)0)))) {
Y_TICK();
F.v9060 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_sym);
Y_FLUSH();
((void * *)(F.v9138).p)[y_ix1(F.v9138, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_vix))] = Y_DEFP(F.v9060);
Y_FLUSH();
F.v9047 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_writes);
Y_FLUSH();
while ((!(Y_DEFP(F.v9047) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym) == ((void *)0))) {
F.v9156 = INT64_C(1);
Y_FLUSH();
} else {
F.v9156 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix);
Y_FLUSH();
}
((rt_int *)(F.v9092).p)[y_ix1(F.v9092, yr9162_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_vix), Y_DEFI(F.v9156)))] = 1;
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym) == ((void *)0)))) {
((rt_int *)(F.v9105).p)[y_ix1(F.v9105, Y_DEFI(F.v9156))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_level);
Y_FLUSH();
((void * *)(F.v9116).p)[y_ix1(F.v9116, Y_DEFI(F.v9156))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym);
Y_FLUSH();
}
F.v9047 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_next);
Y_FLUSH();
}
F.v9047 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_frees);
Y_FLUSH();
while ((!(Y_DEFP(F.v9047) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym) == ((void *)0))) {
F.v9156 = yr3631_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_name), INT64_C(0), 0);
Y_FLUSH();
((rt_int *)(F.v9127).p)[y_ix1(F.v9127, Y_DEFI(F.v9156))] = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_name);
Y_FLUSH();
} else {
F.v9156 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix);
Y_FLUSH();
((rt_int *)(F.v9105).p)[y_ix1(F.v9105, Y_DEFI(F.v9156))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_level);
Y_FLUSH();
((void * *)(F.v9116).p)[y_ix1(F.v9116, Y_DEFI(F.v9156))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym);
Y_FLUSH();
}
((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_vix), Y_DEFI(F.v9156)))] = 1;
Y_FLUSH();
F.v9047 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_next);
Y_FLUSH();
}
F.v9045 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_next);
Y_FLUSH();
}
while (Y_DEFI(F.v9151)) {
Y_TICK();
F.v9151 = 0;
Y_FLUSH();
F.lo9308 = INT64_C(1);
F.hi9309 = Y_DEFI(F.v9051);
{ rt_int hi9313 = F.hi9309;
for (rt_int i9312 = F.lo9308; i9312 <= hi9313; i9312++) { F.c_9311 = i9312; Y_TICK();
F.v9049 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v9138).p)[y_ix1(F.v9138, F.c_9311)])))).f_calls);
Y_FLUSH();
while ((!(Y_DEFP(F.v9049) == ((void *)0)))) {
Y_TICK();
F.v9158 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9049)))).f_sym)))).f_vix);
Y_FLUSH();
if ((Y_DEFI(F.v9158) > INT64_C(0))) {
F.lo9318 = INT64_C(1);
F.hi9319 = Y_DEFI(F.v9054);
{ rt_int hi9323 = F.hi9319;
for (rt_int i9322 = F.lo9318; i9322 <= hi9323; i9322++) { F.c_9321 = i9322; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v9105).p)[y_ix1(F.v9105, F.c_9321)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v9138).p)[y_ix1(F.v9138, F.c_9311)])))).f_level))) {
if ((Y_DEFI(((rt_int *)(F.v9092).p)[y_ix1(F.v9092, yr9162_At(&F, Y_DEFI(F.v9158), y_range(F.c_9321, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v9092).p)[y_ix1(F.v9092, yr9162_At(&F, y_range(F.c_9311, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9321, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v9092).p)[y_ix1(F.v9092, yr9162_At(&F, y_range(F.c_9311, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9321, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
Y_FLUSH();
F.v9151 = 1;
Y_FLUSH();
}
if ((Y_DEFI(((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, Y_DEFI(F.v9158), y_range(F.c_9321, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, y_range(F.c_9311, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9321, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, y_range(F.c_9311, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9321, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
Y_FLUSH();
F.v9151 = 1;
Y_FLUSH();
}
}
if (i9322 == hi9323) break;
}}
}
F.v9049 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9049)))).f_next);
Y_FLUSH();
}
if (i9312 == hi9313) break;
}}
}
F.lo9331 = INT64_C(1);
F.hi9332 = Y_DEFI(F.v9051);
{ rt_int hi9336 = F.hi9332;
for (rt_int i9335 = F.lo9331; i9335 <= hi9336; i9335++) { F.c_9334 = i9335; Y_TICK();
F.v9060 = Y_DEFP(((void * *)(F.v9138).p)[y_ix1(F.v9138, F.c_9334)]);
Y_FLUSH();
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_func)) {
F.v9049 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_calls);
Y_FLUSH();
while ((!(Y_DEFP(F.v9049) == ((void *)0)))) {
Y_TICK();
F.v9158 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9049)))).f_sym)))).f_vix);
Y_FLUSH();
if ((Y_DEFI(F.v9158) > INT64_C(0))) {
F.lo9341 = INT64_C(1);
F.hi9342 = Y_DEFI(F.v9054);
{ rt_int hi9346 = F.hi9342;
for (rt_int i9345 = F.lo9341; i9345 <= hi9346; i9345++) { F.c_9344 = i9345; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v9092).p)[y_ix1(F.v9092, yr9162_At(&F, Y_DEFI(F.v9158), y_range(F.c_9344, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFI(((rt_int *)(F.v9105).p)[y_ix1(F.v9105, F.c_9344)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_level))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9049)))).f_line), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_name), yr3530_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9049)))).f_sym)))).f_name), INT64_C(0)), yr3530_Join(yr1061_T(y_str(", which assigns to ", 19)), yr9181_VName(&F, y_range(F.c_9344, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
Y_FLUSH();
}
if (i9345 == hi9346) break;
}}
}
F.v9049 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9049)))).f_next);
Y_FLUSH();
}
}
if ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_decl) == ((void *)0)))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_decl)))).f_e) == ((void *)0)))) {
F.lo9354 = INT64_C(0);
F.hi9355 = Y_DEFI(F.v9051);
{ rt_int hi9359 = F.hi9355;
for (rt_int i9358 = F.lo9354; i9358 <= hi9359; i9358++) { F.c_9357 = i9358; Y_TICK();
((rt_int *)(F.v9149).p)[y_ix1(F.v9149, F.c_9357)] = 0;
Y_FLUSH();
if (i9358 == hi9359) break;
}}
if (yr9169_Reaches(&F, y_range(F.c_9334, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9334, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_decl)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9060)))).f_name), y_str(" is INLINE and calls itself (X.A.5)", 35));
Y_FLUSH();
}
}
}
if (i9335 == hi9336) break;
}}
if ((Y_DEFI(v1714) == v1507)) {
yr9176_WriteFacts(&F);
Y_FLUSH();
}
F.v9045 = Y_DEFP(v1758);
Y_FLUSH();
while ((!(Y_DEFP(F.v9045) == ((void *)0)))) {
Y_TICK();
F.v9160 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_sym);
Y_FLUSH();
F.v9158 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_vix);
Y_FLUSH();
if ((Y_DEFI(F.v9158) > INT64_C(0))) {
F.v9047 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v9047) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_flag) == INT64_C(0))) && ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym) == ((void *)0)))))) {
F.v9156 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_vix);
Y_FLUSH();
if ((Y_DEFI(F.v9156) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, Y_DEFI(F.v9158), Y_DEFI(F.v9156)))])) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_line), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_sym)))).f_name), yr3530_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_name), INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
Y_FLUSH();
}
}
}
F.v9154 = INT64_C(0);
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_flag) == INT64_C(1))) {
F.v9154 = yr3631_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_name), INT64_C(0), 0);
Y_FLUSH();
if ((yr3631_DynIndex(yr1081_N(y_str("*", 1)), INT64_C(0), 0) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, Y_DEFI(F.v9158), yr3631_DynIndex(yr1081_N(y_str("*", 1)), INT64_C(0), 0)))])) {
F.v9154 = yr3631_DynIndex(yr1081_N(y_str("*", 1)), INT64_C(0), 0);
Y_FLUSH();
}
}
}
if ((Y_DEFI(F.v9154) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, Y_DEFI(F.v9158), Y_DEFI(F.v9154)))])) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_name), y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
Y_FLUSH();
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_flag) == INT64_C(1))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_ival) == INT64_C(1))))) {
F.lo9389 = INT64_C(1);
F.hi9390 = Y_DEFI(F.v9054);
{ rt_int hi9394 = F.hi9390;
for (rt_int i9393 = F.lo9389; i9393 <= hi9394; i9393++) { F.c_9392 = i9393; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v9094).p)[y_ix1(F.v9094, yr9162_At(&F, Y_DEFI(F.v9158), y_range(F.c_9392, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.v9116).p)[y_ix1(F.v9116, F.c_9392)]) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v9116).p)[y_ix1(F.v9116, F.c_9392)])))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v9116).p)[y_ix1(F.v9116, F.c_9392)])))).f_rep)))).f_tid) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_name))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_line), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9160)))).f_name), yr3530_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v9116).p)[y_ix1(F.v9116, F.c_9392)])))).f_name), INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
Y_FLUSH();
}
}
if (i9393 == hi9394) break;
}}
}
F.v9047 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9047)))).f_next);
Y_FLUSH();
}
}
F.v9045 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9045)))).f_next);
Y_FLUSH();
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3631_DynIndex(rt_int a_p3632, rt_int a_p3633, rt_int a_p3634) {
struct yf3635 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3632 = a_p3632;
F.p3633 = a_p3633;
F.p3634 = a_p3634;
F.lo9405 = INT64_C(1);
F.hi9406 = Y_DEFI(v1782);
{ rt_int hi9410 = F.hi9406;
for (rt_int i9409 = F.lo9405; i9409 <= hi9410; i9409++) { F.c_9408 = i9409; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1769).p)[y_ix1(v1769, F.c_9408)]) == F.p3632)) {
{ rt_int rv9411 = Y_DEFI(((rt_int *)(v1780).p)[y_ix1(v1780, F.c_9408)]);
y_use = F.yu; return rv9411; }
}
if (i9409 == hi9410) break;
}}
if ((!F.p3634)) {
{ rt_int rv9413 = INT64_C(0);
y_use = F.yu; return rv9413; }
}
if ((Y_DEFI(v1782) >= INT64_C(4096))) {
yr1178_FailS(Y_DEFI(v1000), y_str("too many pointer types for this implementation", 46));
Y_FLUSH();
}
v1782 = y_range(y_add(Y_DEFI(v1782), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1769).p)[y_ix1(v1769, Y_DEFI(v1782))] = F.p3632;
Y_FLUSH();
((rt_int *)(v1780).p)[y_ix1(v1780, Y_DEFI(v1782))] = F.p3633;
Y_FLUSH();
{ rt_int rv9418 = F.p3633;
y_use = F.yu; return rv9418; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3639_RoutineCName(rt_int a_p3640) {
struct yf3641 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3640 = a_p3640;
F.v9422 = Y_UNDEF_I;
F.v9422 = yr1195_NewSerial();
F.v9424 = Y_UNDEF_I;
F.v9424 = 1;
F.lo9429 = INT64_C(1);
F.hi9430 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3640)]);
{ rt_int hi9434 = F.hi9430;
for (rt_int i9433 = F.lo9429; i9433 <= hi9434; i9433++) { F.c_9432 = i9433; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3640, y_range(F.c_9432, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3640, y_range(F.c_9432, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v9424 = 0;
Y_FLUSH();
}
if (i9433 == hi9434) break;
}}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("yr", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v9422));
Y_FLUSH();
if (Y_DEFI(F.v9424)) {
yr1037_SA(y_str("_", 1));
Y_FLUSH();
yr1044_ST(F.p3640);
Y_FLUSH();
}
{ rt_int rv9438 = yr1056_SE();
y_use = F.yu; return rv9438; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3645_FormalRep(void * a_p3646) {
struct yf3647 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3646 = a_p3646;
F.v9442 = Y_UNDEF_P;
F.v9444 = Y_UNDEF_I;
F.v9446 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_kind) == v696)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3646))).f_a), &F.v9444, &F.v9446);
Y_FLUSH();
if ((((!Y_DEFI(F.v9444)) || ((Y_DEFI(F.v9446) < INT64_C(1)))) || ((Y_DEFI(F.v9446) > INT64_C(8))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_line), y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
Y_FLUSH();
}
F.v9442 = yr2489_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v9442)))).f_nidx = Y_DEFI(F.v9446);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v9442)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3646))).f_b), INT64_C(0), 0);
Y_FLUSH();
yr2592_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9442)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_line));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v9442)))).f_deep = 1;
Y_FLUSH();
{ void * rv9454 = Y_DEFP(F.v9442);
y_use = F.yu; return rv9454; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_kind) == v699)) {
{ void * rv9456 = yr2489_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv9456; }
}
F.v9442 = yr2733_MakeRep(F.p3646, INT64_C(0), 0);
Y_FLUSH();
yr2592_CheckRepresented(Y_DEFP(F.v9442), Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_line));
Y_FLUSH();
{ void * rv9459 = Y_DEFP(F.v9442);
y_use = F.yu; return rv9459; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3651_ParamCType(void * a_p3652) {
struct yf3653 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3652 = a_p3652;
F.v9463 = Y_UNDEF_I;
F.v9463 = yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3652))).f_rep));
if ((((Y_DEFI(((*(yR120 *)y_deref(F.p3652))).f_cls) == v897)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(F.p3652))).f_rep)))).f_kind) == v855)))) {
{ rt_int rv9464 = Y_DEFI(F.v9463);
y_use = F.yu; return rv9464; }
}
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9463));
Y_FLUSH();
yr1037_SA(y_str(" *", 2));
Y_FLUSH();
{ rt_int rv9466 = yr1056_SE();
y_use = F.yu; return rv9466; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3657_InstallTrap(void * a_p3658, void * a_p3659) {
struct yf3660 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3658 = a_p3658;
F.p3659 = a_p3659;
F.v9471 = Y_UNDEF_I;
F.v9473 = Y_UNDEF_I;
F.v9473 = 0;
F.v9476 = Y_UNDEF_I;
F.v9478 = Y_UNDEF_I;
F.v9478 = INT64_C(1);
F.v9471 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v9476 = yr1061_T(y_str("OUT_OF_RANGE OVERFLOW ZERO_DIVIDE INVALID_POINTER FIXED_NOT_REPRESENTABLE TOO_MANY_PROCESS_INSTANCES TOO_LITTLE_LOCAL_STORAGE ADDRESS_VIOLATION UNINITIALIZED ", 158));
Y_FLUSH();
F.lo9488 = INT64_C(1);
F.hi9489 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9476))]);
{ rt_int hi9493 = F.hi9489;
for (rt_int i9492 = F.lo9488; i9492 <= hi9493; i9492++) { F.c_9491 = i9492; Y_TICK();
if ((yr1103_TChar(Y_DEFI(F.v9476), y_range(F.c_9491, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
if ((yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v9476))]), (y_sub(Y_DEFI(F.v9478), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_9491, Y_DEFI(F.v9478)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFI(F.v9471))) {
F.v9473 = 1;
Y_FLUSH();
}
F.v9478 = y_range(y_add(F.c_9491, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (i9492 == hi9493) break;
}}
if ((!Y_DEFI(F.v9473))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_line), Y_DEFI(F.v9471), y_str(" is not a trap of this implementation (XIV.X.3)", 47));
Y_FLUSH();
}
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((!(Y_DEFI(v1273) == INT64_C(2)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_name), y_str(": a trap handler is declared in the outermost scope of a program (XIV.X.3)", 74));
Y_FLUSH();
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3658))).f_nparams) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3658))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3659))).f_name), y_str(": a trap handler of this implementation is a procedure without parameters (XIV.X.3)", 83));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_trap_install(rt_exc(", 22));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9471));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str("), ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3658))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
yr1132_Emit(yr1056_SE());
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3664_DeclType(void * a_p3665) {
struct yf3666 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3665 = a_p3665;
if ((Y_DEFI(((*(yR120 *)y_deref(F.p3665))).f_cls) == v900)) {
{ rt_int rv9515 = yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3665))).f_rep));
y_use = F.yu; return rv9515; }
}
{ rt_int rv9516 = yr3651_ParamCType(F.p3665);
y_use = F.yu; return rv9516; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3670_RoutineHeader(void * a_p3671, rt_int a_p3672) {
struct yf3673 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3671 = a_p3671;
F.p3672 = a_p3672;
F.v9521 = Y_UNDEF_P;
F.v9523 = Y_UNDEF_P;
F.v9525 = Y_UNDEF_P;
F.v9527 = Y_UNDEF_P;
F.v9529 = Y_UNDEF_P;
F.v9531 = Y_UNDEF_P;
F.v9533 = Y_UNDEF_P;
F.v9535 = Y_UNDEF_I;
F.v9537 = Y_UNDEF_I;
F.v9537 = 1;
F.v9521 = yr2348_NewSym(F.p3672, Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_decl = F.p3671;
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_func = (Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_flag) == INT64_C(1));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_level = y_range(y_add(Y_DEFI(v1279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_cname = yr3639_RoutineCName(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3671))).f_b) == ((void *)0)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_ret = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3671))).f_b), INT64_C(0), 0);
Y_FLUSH();
yr2592_CheckRepresented(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_ret), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line));
Y_FLUSH();
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_ret = Y_DEFP(v1348);
Y_FLUSH();
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_func)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
Y_FLUSH();
}
}
F.v9531 = ((void *)0);
Y_FLUSH();
F.v9525 = Y_DEFP(((*(yR105 *)y_deref(F.p3671))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v9525) == ((void *)0)))) {
Y_TICK();
F.v9533 = yr3645_FormalRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_b));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_func) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_ival) == v897))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
Y_FLUSH();
}
if ((((F.p3672 == v885)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_ival) == v900)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str(": a process has no OUT parameters", 33));
Y_FLUSH();
}
F.v9527 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v9527) == ((void *)0)))) {
Y_TICK();
({ F.v9529 = y_new_l(sizeof(yR120), "r0,0,7,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_121); y_initu(&yd_121, y_deref(F.v9529)); });
Y_FLUSH();
(*(yR120 *)y_deref(Y_DEFP(F.v9529))) = ((yR120){ .f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9527)))).f_name), .f_cls = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_ival), .f_rep = Y_DEFP(F.v9533), .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9527)))).f_a) == ((void *)0)))) {
((*(yR120 *)y_deref(Y_DEFP(F.v9529)))).f_at = yr2894_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9527)))).f_a));
Y_FLUSH();
}
if ((Y_DEFP(F.v9531) == ((void *)0))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_params = Y_DEFP(F.v9529);
Y_FLUSH();
} else {
((*(yR120 *)y_deref(Y_DEFP(F.v9531)))).f_next = Y_DEFP(F.v9529);
Y_FLUSH();
}
F.v9531 = Y_DEFP(F.v9529);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_nparams = y_range(y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_nparams), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v9527 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9527)))).f_next);
Y_FLUSH();
}
F.v9525 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_next);
Y_FLUSH();
}
F.v9523 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v9523) == ((void *)0)))) {
F.v9523 = yr2483_Real(Y_DEFP(F.v9523));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_ival) == INT64_C(0))) && ((!(Y_DEFP(F.v9523) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9523)))).f_kind) == v891)) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line), yr3530_Join(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
Y_FLUSH();
}
}
if (((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_ival) == INT64_C(0)))) && ((!(Y_DEFP(F.v9523) == ((void *)0))))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9523)))).f_kind) == v876)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_alt = Y_DEFP(F.v9523);
Y_FLUSH();
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9523)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_ival) == v339)) && ((!(yr3677_SameSignature(Y_DEFP(F.v9521), Y_DEFP(F.v9523)) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_ival) == v435)) && ((yr3677_SameSignature(Y_DEFP(F.v9521), Y_DEFP(F.v9523)) == ((void *)0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str(" REPLACES no definition for these parameter types", 49));
Y_FLUSH();
}
}
((*(yR105 *)y_deref(F.p3671))).f_sym = Y_DEFP(F.v9521);
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v9521), Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line));
Y_FLUSH();
if ((((!(Y_DEFI(v1753) == INT64_C(0)))) && yr1088_TEq(Y_DEFI(v1753), yr1061_T(y_str("CompilerStatus", 14))))) {
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), yr1061_T(y_str("SUPPRESS_TRAP", 13)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_mval = v1513;
Y_FLUSH();
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), yr1061_T(y_str("RESTORE_TRAP", 12)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_mval = v1516;
Y_FLUSH();
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), yr1061_T(y_str("TRAP_SUPPRESSED", 15)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_mval = v1519;
Y_FLUSH();
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_ival) == v435)) && yr1095_TStarts(Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_name), y_str("TRAP_", 5)))) {
yr3657_InstallTrap(Y_DEFP(F.v9521), F.p3671);
Y_FLUSH();
}
F.v9525 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3671))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_sym = Y_DEFP(F.v9521);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9525)))).f_next = Y_DEFP(v1756);
Y_FLUSH();
v1756 = Y_DEFP(F.v9525);
Y_FLUSH();
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_level))] = yr1200_Fresh(y_str("yf", 2));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_members = yr2348_NewSym(v891, Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_level))]));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("struct ", 7));
Y_FLUSH();
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_level))]));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v9535 = yr1056_SE();
Y_FLUSH();
yr1110_Put(&v978, Y_DEFI(F.v9535));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("static ", 7));
Y_FLUSH();
if ((F.p3672 == v885)) {
yr1037_SA(y_str("void", 4));
Y_FLUSH();
} else {
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_ret)));
Y_FLUSH();
}
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
F.v9535 = yr1056_SE();
Y_FLUSH();
if ((F.p3672 == v885)) {
F.v9535 = yr3530_Join(Y_DEFI(F.v9535), yr1061_T(y_str("void *arg", 9)), INT64_C(0));
Y_FLUSH();
F.v9537 = 0;
Y_FLUSH();
} else if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9535));
Y_FLUSH();
yr1037_SA(y_str("struct ", 7));
Y_FLUSH();
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))]));
Y_FLUSH();
yr1037_SA(y_str(" *up", 4));
Y_FLUSH();
F.v9535 = yr1056_SE();
Y_FLUSH();
F.v9537 = 0;
Y_FLUSH();
}
F.v9529 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_params);
Y_FLUSH();
while ((((!(Y_DEFP(F.v9529) == ((void *)0)))) && ((!(F.p3672 == v885))))) {
Y_TICK();
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9535));
Y_FLUSH();
if ((!Y_DEFI(F.v9537))) {
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
F.v9537 = 0;
Y_FLUSH();
yr1044_ST(yr3651_ParamCType(Y_DEFP(F.v9529)));
Y_FLUSH();
yr1037_SA(y_str(" a_", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9529)))).f_cname));
Y_FLUSH();
F.v9535 = yr1056_SE();
Y_FLUSH();
F.v9529 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9529)))).f_next);
Y_FLUSH();
}
if (Y_DEFI(F.v9537)) {
F.v9535 = yr3530_Join(Y_DEFI(F.v9535), yr1061_T(y_str("void", 4)), INT64_C(0));
Y_FLUSH();
}
F.v9535 = yr3530_Join(Y_DEFI(F.v9535), yr1061_T(y_str(")", 1)), INT64_C(0));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9521)))).f_mnext = yr2348_NewSym(v891, Y_DEFI(F.v9535));
Y_FLUSH();
yr1110_Put(&v986, yr3530_Join(Y_DEFI(F.v9535), yr1061_T(y_str(";", 1)), INT64_C(0)));
Y_FLUSH();
yr4215_SegRoutine(Y_DEFP(F.v9521), F.p3671, F.p3672);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3677_SameSignature(void * a_p3678, void * a_p3679) {
struct yf3680 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3678 = a_p3678;
F.p3679 = a_p3679;
F.v9592 = Y_UNDEF_P;
F.v9592 = F.p3679;
F.v9594 = Y_UNDEF_P;
F.v9596 = Y_UNDEF_P;
F.v9598 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9592) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9592)))).f_nparams) == Y_DEFI(((*(yR125 *)y_deref(F.p3678))).f_nparams))) {
F.v9598 = 1;
Y_FLUSH();
F.v9594 = Y_DEFP(((*(yR125 *)y_deref(F.p3678))).f_params);
Y_FLUSH();
F.v9596 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9592)))).f_params);
Y_FLUSH();
while ((!(Y_DEFP(F.v9594) == ((void *)0)))) {
Y_TICK();
if ((!yr2569_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9594)))).f_rep), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9596)))).f_rep)))) {
F.v9598 = 0;
Y_FLUSH();
}
F.v9594 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9594)))).f_next);
Y_FLUSH();
F.v9596 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9596)))).f_next);
Y_FLUSH();
}
if (Y_DEFI(F.v9598)) {
{ void * rv9601 = Y_DEFP(F.v9592);
y_use = F.yu; return rv9601; }
}
}
F.v9592 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9592)))).f_alt);
Y_FLUSH();
}
{ void * rv9602 = ((void *)0);
y_use = F.yu; return rv9602; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3684_RoutineBody(void * a_p3685) {
struct yf3686 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3685 = a_p3685;
F.v9606 = Y_UNDEF_P;
F.v9606 = Y_DEFP(((*(yR105 *)y_deref(F.p3685))).f_sym);
y_initu(&yd_141, &F.v9608);
y_initu(&yd_141, &F.v9610);
F.v9612 = Y_UNDEF_I;
F.v9614 = Y_UNDEF_I;
F.v9616 = Y_UNDEF_I;
F.v9618 = Y_UNDEF_I;
F.v9620 = Y_UNDEF_I;
F.v9622 = Y_UNDEF_I;
F.v9624 = Y_UNDEF_I;
F.v9626 = Y_UNDEF_P;
F.v9628 = Y_UNDEF_I;
F.v9630 = Y_UNDEF_P;
F.v9632 = Y_UNDEF_P;
F.v9634 = Y_UNDEF_I;
F.v9636 = Y_UNDEF_I;
y_initu(&yd_141, &F.v9638);
F.v9608 = v996;
Y_FLUSH();
F.v9610 = v998;
Y_FLUSH();
F.v9612 = Y_DEFI(v1279);
Y_FLUSH();
F.v9614 = Y_DEFI(v1599);
Y_FLUSH();
F.v9616 = Y_DEFI(v1602);
Y_FLUSH();
F.v9618 = Y_DEFI(v1627);
Y_FLUSH();
F.v9620 = Y_DEFI(v1641);
Y_FLUSH();
F.v9622 = Y_DEFI(v1668);
Y_FLUSH();
F.v9624 = Y_DEFI(v1671);
Y_FLUSH();
F.v9626 = Y_DEFP(v1674);
Y_FLUSH();
F.v9628 = Y_DEFI(v1703);
Y_FLUSH();
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
Y_FLUSH();
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
Y_FLUSH();
F.v9638 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
Y_FLUSH();
v1279 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_level);
Y_FLUSH();
F.v9634 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_members)))).f_name);
Y_FLUSH();
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(F.v9634);
Y_FLUSH();
v1602 = Y_DEFI(v1599);
Y_FLUSH();
v1671 = Y_DEFI(v1668);
Y_FLUSH();
v1641 = INT64_C(0);
Y_FLUSH();
v1674 = Y_DEFP(F.v9606);
Y_FLUSH();
v1703 = 0;
Y_FLUSH();
yr2355_OpenScope(0);
Y_FLUSH();
v1328 = y_range(y_add(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1324).p)[y_ix1(v1324, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_depth);
Y_FLUSH();
((rt_int *)(v1326).p)[y_ix1(v1326, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_serial);
Y_FLUSH();
F.v9630 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_params);
Y_FLUSH();
while ((!(Y_DEFP(F.v9630) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v897)) {
F.v9632 = yr2348_NewSym(v864, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_name));
Y_FLUSH();
} else {
F.v9632 = yr2348_NewSym(v861, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_name));
Y_FLUSH();
}
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_rep = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_level = Y_DEFI(v1279);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_cname = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname);
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_kind) == v885)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_byref = (((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v903)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)))).f_kind) == v855))));
Y_FLUSH();
yr2470_DeclStorage(yr3651_ParamCType(Y_DEFP(F.v9630)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)))).f_kind) == v855)) {
yr2470_DeclStorage(yr1061_T(y_str("yspace", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr3530_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v903)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_byref = 1;
Y_FLUSH();
yr2470_DeclStorage(yr3651_ParamCType(Y_DEFP(F.v9630)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr3530_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v900)) {
yr2470_DeclStorage(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname));
Y_FLUSH();
yr2470_DeclStorage(yr3651_ParamCType(Y_DEFP(F.v9630)), yr3530_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str("_o", 2)), INT64_C(0)));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr3530_Join(yr1061_T(y_str("_o = a_", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
if ((yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)))).f_kind) == v843))))) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_init(", 7)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)), yr3530_Join(yr1061_T(y_str(", &F.", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(");", 2)))));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr3530_Join(yr1061_T(y_str(" = *a_", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
}
} else {
yr2470_DeclStorage(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr3530_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at) >= INT64_C(0))) && ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v903)) || ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v900)))))) {
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cls) == v900)) {
F.v9636 = yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str("_o", 2)));
Y_FLUSH();
} else {
F.v9636 = yr3530_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), INT64_C(0));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_mem_set(INT64_C(", 18));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at));
Y_FLUSH();
yr1037_SA(y_str("), y_addr_v((void *)", 20));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9636));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2867_LayDesc(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(", (void *)", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9636));
Y_FLUSH();
yr1037_SA(y_str(", NULL, 0));", 12));
Y_FLUSH();
yr1132_Emit(yr1056_SE());
Y_FLUSH();
} else if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at) >= INT64_C(0))) && (!yr2873_WordExact(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep))))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_view_put(&F.", 14));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2867_LayDesc(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_rep)));
Y_FLUSH();
yr1037_SA(y_str(", INT64_C(", 10));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at));
Y_FLUSH();
yr1037_SA(y_str("));", 3));
Y_FLUSH();
yr1132_Emit(yr1056_SE());
Y_FLUSH();
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at) >= INT64_C(0))) {
F.v9636 = yr2900_StoreAt(yr3664_DeclType(Y_DEFP(F.v9630)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at));
Y_FLUSH();
yr1132_Emit(yr3530_Join(Y_DEFI(F.v9636), yr1061_T(y_str(" = F.", 5)), yr3530_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_level = INT64_C(0);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_cname = Y_DEFI(F.v9636);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9632)))).f_at = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_at);
Y_FLUSH();
((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_path = Y_DEFI(F.v9636);
Y_FLUSH();
}
yr2450_Define(Y_DEFP(F.v9632), Y_DEFI(((*(yR105 *)y_deref(F.p3685))).f_line));
Y_FLUSH();
F.v9630 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9630)))).f_next);
Y_FLUSH();
}
yr3921_EnterMonitor(Y_DEFP(F.v9606));
Y_FLUSH();
yr3757_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3685))).f_c)))).f_a));
Y_FLUSH();
if (yr3475_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3685))).f_c))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_kind) == v885)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3685))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3685))).f_name), y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
Y_FLUSH();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3685))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3685))).f_name), y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
Y_FLUSH();
}
}
yr3435_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3685))).f_c));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_kind) == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
Y_FLUSH();
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
Y_FLUSH();
}
yr3889_AwaitProcesses();
Y_FLUSH();
yr2367_CloseScope();
Y_FLUSH();
v1328 = y_range(y_sub(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("struct ", 7));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9634));
Y_FLUSH();
yr1037_SA(y_str(" {", 2));
Y_FLUSH();
if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
Y_FLUSH();
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, y_sub(Y_DEFI(v1279), INT64_C(1)))]));
Y_FLUSH();
yr1037_SA(y_str(" *up;", 5));
Y_FLUSH();
} else {
yr1037_SA(y_str(" void *up;", 10));
Y_FLUSH();
}
F.v9636 = yr1056_SE();
Y_FLUSH();
yr1110_Put(&v982, Y_DEFI(F.v9636));
Y_FLUSH();
yr1125_Append(&v982, &v998);
Y_FLUSH();
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
Y_FLUSH();
yr1117_PutS(&v982, y_str("};", 2));
Y_FLUSH();
yr1110_Put(&F.v9638, yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_mnext)))).f_name), yr1061_T(y_str(" {", 2)), INT64_C(0)));
Y_FLUSH();
if (Y_DEFI(v1703)) {
yr1117_PutS(&F.v9638, y_str("volatile", 8));
Y_FLUSH();
}
yr1110_Put(&F.v9638, yr3530_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(F.v9634), yr1061_T(y_str(" F;", 3))));
Y_FLUSH();
yr1117_PutS(&F.v9638, y_str("memset((void *)&F, 0, sizeof F);", 32));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_kind) == v885)) {
yr1110_Put(&F.v9638, yr3530_Join(yr1061_T(y_str("F = *(struct ", 13)), Y_DEFI(F.v9634), yr1061_T(y_str(" *)arg;", 7))));
Y_FLUSH();
} else if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1117_PutS(&F.v9638, y_str("F.up = up;", 10));
Y_FLUSH();
}
yr1117_PutS(&F.v9638, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
Y_FLUSH();
yr1125_Append(&F.v9638, &v996);
Y_FLUSH();
yr1117_PutS(&F.v9638, y_str("}", 1));
Y_FLUSH();
yr1125_Append(&v988, &F.v9638);
Y_FLUSH();
v996 = F.v9608;
Y_FLUSH();
v998 = F.v9610;
Y_FLUSH();
v1279 = Y_DEFI(F.v9612);
Y_FLUSH();
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = yr1200_Fresh(y_str("unused", 6));
Y_FLUSH();
if ((!(Y_DEFP(F.v9626) == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9626)))).f_members)))).f_name);
Y_FLUSH();
}
v1599 = Y_DEFI(F.v9614);
Y_FLUSH();
v1602 = Y_DEFI(F.v9616);
Y_FLUSH();
v1627 = Y_DEFI(F.v9618);
Y_FLUSH();
v1641 = Y_DEFI(F.v9620);
Y_FLUSH();
v1668 = Y_DEFI(F.v9622);
Y_FLUSH();
v1671 = Y_DEFI(F.v9624);
Y_FLUSH();
v1674 = Y_DEFP(F.v9626);
Y_FLUSH();
v1703 = Y_DEFI(F.v9628);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3690_DeclareStorage(void * a_p3691, void * a_p3692, rt_int a_p3693) {
struct yf3694 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3691 = a_p3691;
F.p3692 = a_p3692;
F.p3693 = a_p3693;
((*(yR125 *)y_deref(F.p3691))).f_rep = F.p3692;
Y_FLUSH();
((*(yR125 *)y_deref(F.p3691))).f_level = Y_DEFI(v1279);
Y_FLUSH();
((*(yR125 *)y_deref(F.p3691))).f_cname = yr1200_Fresh(y_str("v", 1));
Y_FLUSH();
yr2470_DeclStorage(yr2551_CType(F.p3692), Y_DEFI(((*(yR125 *)y_deref(F.p3691))).f_cname));
Y_FLUSH();
yr3707_InitStorage(F.p3691, F.p3692, F.p3693);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3698_DeclareAt(void * a_p3699, void * a_p3700, rt_int a_p3701, rt_int a_p3702) {
struct yf3703 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3699 = a_p3699;
F.p3700 = a_p3700;
F.p3701 = a_p3701;
F.p3702 = a_p3702;
F.v9728 = Y_UNDEF_I;
F.v9730 = Y_UNDEF_I;
F.v9732 = Y_UNDEF_I;
((*(yR125 *)y_deref(F.p3699))).f_rep = F.p3700;
Y_FLUSH();
((*(yR125 *)y_deref(F.p3699))).f_level = INT64_C(0);
Y_FLUSH();
((*(yR125 *)y_deref(F.p3699))).f_at = F.p3701;
Y_FLUSH();
if (((yr2873_WordExact(F.p3700) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3700))).f_kind) == v840))) || yr2539_HoldsSignal(F.p3700))) {
((*(yR125 *)y_deref(F.p3699))).f_cname = yr2900_StoreAt(yr2551_CType(F.p3700), F.p3701);
Y_FLUSH();
yr3707_InitStorage(F.p3699, F.p3700, F.p3702);
Y_FLUSH();
y_use = F.yu; return;
}
F.v9728 = yr1200_Fresh(y_str("yat", 3));
Y_FLUSH();
F.v9730 = yr1200_Fresh(y_str("yvw", 3));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("static ", 7));
Y_FLUSH();
yr1044_ST(yr2551_CType(F.p3700));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9728));
Y_FLUSH();
yr1037_SA(y_str("; static yview *", 16));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9730));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v9732 = yr1056_SE();
Y_FLUSH();
yr1110_Put(&v984, Y_DEFI(F.v9732));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(*(", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(F.p3700));
Y_FLUSH();
yr1037_SA(y_str(" *)y_view(&", 11));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9730));
Y_FLUSH();
yr1037_SA(y_str(", &", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v9728));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(F.p3700));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2867_LayDesc(F.p3700));
Y_FLUSH();
yr1037_SA(y_str(", INT64_C(", 10));
Y_FLUSH();
yr1050_SI(F.p3701);
Y_FLUSH();
yr1037_SA(y_str(")))", 3));
Y_FLUSH();
((*(yR125 *)y_deref(F.p3699))).f_cname = yr1056_SE();
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3707_InitStorage(void * a_p3708, void * a_p3709, rt_int a_p3710) {
struct yf3711 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3708 = a_p3708;
F.p3709 = a_p3709;
F.p3710 = a_p3710;
if ((yr2526_Deep(F.p3709) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3709))).f_kind) == v825)))) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_initu(", 8)), yr2557_DescOf(F.p3709), yr3530_Join(yr1061_T(y_str(", &", 3)), yr2477_SymPath(F.p3708), yr1061_T(y_str(");", 2)))));
Y_FLUSH();
} else if ((!(yr3136_UndefValue(F.p3709) == INT64_C(0)))) {
yr1132_Emit(yr3530_Join(yr2477_SymPath(F.p3708), yr1061_T(y_str(" = ", 3)), yr3530_Join(yr3136_UndefValue(F.p3709), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3709))).f_kind) == v837)) {
yr3938_DeclareSignal(F.p3708, F.p3710);
Y_FLUSH();
}
if (yr2539_HoldsSignal(F.p3709)) {
yr3945_DeclareSignalArray(F.p3708, F.p3710);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3709))).f_kind) == v840)) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2477_SymPath(F.p3708), yr1061_T(y_str(");", 2))));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3715_SimpleDecl(void * a_p3716) {
struct yf3717 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3716 = a_p3716;
F.v9763 = Y_UNDEF_I;
F.v9763 = Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_kind);
F.v9765 = Y_UNDEF_P;
F.v9767 = Y_UNDEF_P;
F.v9769 = Y_UNDEF_P;
F.v9771 = Y_UNDEF_P;
F.v9773 = Y_UNDEF_I;
F.v9775 = Y_UNDEF_I;
F.v9777 = Y_UNDEF_I;
F.v9779 = Y_UNDEF_I;
if ((((Y_DEFI(F.v9763) == v639)) || ((Y_DEFI(F.v9763) == v642)))) {
F.v9765 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_b), INT64_C(0), 0);
Y_FLUSH();
yr2592_CheckRepresented(Y_DEFP(F.v9765), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
if ((((Y_DEFI(F.v9763) == v639)) && yr2545_NonAssignable(Y_DEFP(F.v9765)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line), y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
Y_FLUSH();
}
F.v9769 = Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v9769) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(F.v9763) == v639)) {
F.v9771 = yr2348_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_name));
Y_FLUSH();
} else {
F.v9771 = yr2348_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_name));
Y_FLUSH();
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_a) == ((void *)0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_kind) == v837))))) {
yr3698_DeclareAt(Y_DEFP(F.v9771), Y_DEFP(F.v9765), yr2894_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_a)), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
} else if ((((Y_DEFI(v1727) > INT64_C(0))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_rep = Y_DEFP(F.v9765);
Y_FLUSH();
yr4207_SegStorage(Y_DEFP(F.v9771), Y_DEFP(F.v9765), Y_DEFI(F.v9763));
Y_FLUSH();
} else {
yr3690_DeclareStorage(Y_DEFP(F.v9771), Y_DEFP(F.v9765), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_a) == ((void *)0))) {
yr4207_SegStorage(Y_DEFP(F.v9771), Y_DEFP(F.v9765), Y_DEFI(F.v9763));
Y_FLUSH();
}
}
if (((((!(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_c) == ((void *)0)))) && ((Y_DEFI(v1727) > INT64_C(0)))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_c), &F.v9777, &F.v9779);
Y_FLUSH();
if (((((Y_DEFI(F.v9763) == v639)) && Y_DEFI(F.v9777)) && yr2502_IsDiscrete(Y_DEFP(F.v9765)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_hasmv = 1;
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_mval = Y_DEFI(F.v9779);
Y_FLUSH();
}
} else if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_c) == ((void *)0)))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_c), Y_DEFP(F.v9765), &F.v9773, &F.v9767);
Y_FLUSH();
if ((Y_DEFI(F.v9763) == v639)) {
yr3058_Store(yr2477_SymPath(Y_DEFP(F.v9771)), Y_DEFP(F.v9765), Y_DEFI(F.v9773), Y_DEFP(F.v9767), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
} else {
F.v9775 = yr3353_UserAssign(yr2477_SymPath(Y_DEFP(F.v9771)), Y_DEFP(F.v9765), Y_DEFI(F.v9773), Y_DEFP(F.v9767), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
if ((!(Y_DEFI(F.v9775) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v9775));
Y_FLUSH();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_tname), y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
Y_FLUSH();
}
yr3058_Store(yr2477_SymPath(Y_DEFP(F.v9771)), Y_DEFP(F.v9765), Y_DEFI(F.v9773), Y_DEFP(F.v9767), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
}
}
if ((Y_DEFI(F.v9763) == v639)) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_c), &F.v9777, &F.v9779);
Y_FLUSH();
if ((Y_DEFI(F.v9777) && yr2502_IsDiscrete(Y_DEFP(F.v9765)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_hasmv = 1;
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_mval = Y_DEFI(F.v9779);
Y_FLUSH();
}
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_a) == ((void *)0)))) {
yr3728_AtLocation(Y_DEFP(F.v9771), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_a));
Y_FLUSH();
}
yr2450_Define(Y_DEFP(F.v9771), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_line));
Y_FLUSH();
F.v9769 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9763) == v651)) {
F.v9765 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name), 0);
Y_FLUSH();
yr2592_CheckRepresented(Y_DEFP(F.v9765), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
F.v9771 = yr2348_NewSym(v867, Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_rep = Y_DEFP(F.v9765);
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v9771), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
yr2756_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name), Y_DEFP(F.v9765));
Y_FLUSH();
yr3721_NoteAlphabet(F.p3716, Y_DEFP(F.v9765));
Y_FLUSH();
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9763) == v648)) {
F.v9765 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name), 1);
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_b)))).f_kind) == v672)) {
F.v9765 = yr2496_CopyRep(Y_DEFP(F.v9765));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_tid = yr2727_NewTid(Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_tname = Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name);
Y_FLUSH();
if (((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_kind) == v810)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_b)))).f_a) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v9765)))).f_abstract = 1;
Y_FLUSH();
}
}
}
F.v9771 = yr2348_NewSym(v870, Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_rep = Y_DEFP(F.v9765);
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v9771), Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line));
Y_FLUSH();
yr2756_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_name), Y_DEFP(F.v9765));
Y_FLUSH();
yr3721_NoteAlphabet(F.p3716, Y_DEFP(F.v9765));
Y_FLUSH();
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9763) == v645)) {
F.v9769 = Y_DEFP(((*(yR105 *)y_deref(F.p3716))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v9769) == ((void *)0)))) {
Y_TICK();
F.v9771 = yr2348_NewSym(v888, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_level = Y_DEFI(v1279);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_mval = Y_DEFI(v1596);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9771)))).f_cname = yr1200_Fresh(y_str("lab", 3));
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v9771), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_line));
Y_FLUSH();
F.v9769 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9769)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3716))).f_line), y_str("not a simple declaration", 24));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3721_NoteAlphabet(void * a_p3722, void * a_p3723) {
struct yf3724 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3722 = a_p3722;
F.p3723 = a_p3723;
F.v9803 = Y_UNDEF_P;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3723))).f_kind) == v819)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3722))).f_b)))).f_kind) == v678)))) {
F.v9803 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3722))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9803)))).f_name = Y_DEFI(((*(yR105 *)y_deref(F.p3722))).f_name);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9803)))).f_rep = F.p3723;
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9803)))).f_next = Y_DEFP(v1525);
Y_FLUSH();
v1525 = Y_DEFP(F.v9803);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3728_AtLocation(void * a_p3729, void * a_p3730) {
struct yf3731 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3729 = a_p3729;
F.p3730 = a_p3730;
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3729))).f_rep)))).f_kind) == v837)) {
yr3952_DeviceSignal(F.p3729, F.p3730);
Y_FLUSH();
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3735_Defer(void * a_p3736, rt_int a_p3737, void * a_p3738, rt_int a_p3739) {
struct yf3740 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3736 = a_p3736;
F.p3737 = a_p3737;
F.p3738 = a_p3738;
F.p3739 = a_p3739;
F.v9813 = Y_UNDEF_I;
F.v9813 = Y_DEFI(v1273);
if ((Y_DEFI(v1886) >= INT64_C(20000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_line), y_str("too many routines for this implementation", 41));
Y_FLUSH();
}
v1886 = y_range(y_add(Y_DEFI(v1886), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1794).p)[y_ix1(v1794, Y_DEFI(v1886))] = F.p3736;
Y_FLUSH();
((rt_int *)(v1805).p)[y_ix1(v1805, Y_DEFI(v1886))] = F.p3737;
Y_FLUSH();
((rt_int *)(v1816).p)[y_ix1(v1816, Y_DEFI(v1886))] = Y_DEFI(v1276);
Y_FLUSH();
((void * *)(v1827).p)[y_ix1(v1827, Y_DEFI(v1886))] = Y_DEFP(v1892);
Y_FLUSH();
((void * *)(v1838).p)[y_ix1(v1838, Y_DEFI(v1886))] = F.p3738;
Y_FLUSH();
((rt_int *)(v1849).p)[y_ix1(v1849, Y_DEFI(v1886))] = F.p3739;
Y_FLUSH();
((rt_int *)(v1860).p)[y_ix1(v1860, Y_DEFI(v1886))] = Y_DEFI(v1709);
Y_FLUSH();
while (Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9813))])))).f_closed)) {
Y_TICK();
F.v9813 = y_range(y_sub(Y_DEFI(F.v9813), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
((rt_int *)(v1871).p)[y_ix1(v1871, Y_DEFI(v1886))] = y_range(y_add(Y_DEFI(v1889), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1873).p)[y_ix1(v1873, Y_DEFI(v1886))] = y_range(y_sub(Y_DEFI(v1273), Y_DEFI(F.v9813)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.lo9826 = y_add(Y_DEFI(F.v9813), INT64_C(1));
F.hi9827 = Y_DEFI(v1273);
{ rt_int hi9831 = F.hi9827;
for (rt_int i9830 = F.lo9826; i9830 <= hi9831; i9830++) { F.c_9829 = i9830; Y_TICK();
v1889 = y_range(y_add(Y_DEFI(v1889), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1884).p)[y_ix1(v1884, Y_DEFI(v1889))] = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, F.c_9829)]);
Y_FLUSH();
if (i9830 == hi9831) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3744_RunDeferred(rt_int a_p3745, rt_int a_p3746) {
struct yf3747 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3745 = a_p3745;
F.p3746 = a_p3746;
F.v9838 = Y_UNDEF_I;
F.v9838 = y_range(y_add(F.p3745, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9842 = Y_UNDEF_I;
F.v9844 = Y_UNDEF_I;
F.v9846 = Y_UNDEF_P;
while ((Y_DEFI(F.v9838) <= Y_DEFI(v1886))) {
Y_TICK();
F.lo9851 = Y_DEFI(((rt_int *)(v1871).p)[y_ix1(v1871, Y_DEFI(F.v9838))]);
F.hi9852 = y_sub((y_add(Y_DEFI(((rt_int *)(v1871).p)[y_ix1(v1871, Y_DEFI(F.v9838))]), Y_DEFI(((rt_int *)(v1873).p)[y_ix1(v1873, Y_DEFI(F.v9838))]))), INT64_C(1));
{ rt_int hi9856 = F.hi9852;
for (rt_int i9855 = F.lo9851; i9855 <= hi9856; i9855++) { F.c_9854 = i9855; Y_TICK();
yr2361_ReopenScope(Y_DEFP(((void * *)(v1884).p)[y_ix1(v1884, F.c_9854)]));
Y_FLUSH();
if (i9855 == hi9856) break;
}}
F.v9842 = Y_DEFI(v1276);
Y_FLUSH();
F.v9846 = Y_DEFP(v1892);
Y_FLUSH();
F.v9844 = Y_DEFI(v1709);
Y_FLUSH();
v1276 = Y_DEFI(((rt_int *)(v1816).p)[y_ix1(v1816, Y_DEFI(F.v9838))]);
Y_FLUSH();
v1892 = Y_DEFP(((void * *)(v1827).p)[y_ix1(v1827, Y_DEFI(F.v9838))]);
Y_FLUSH();
v1709 = Y_DEFI(((rt_int *)(v1860).p)[y_ix1(v1860, Y_DEFI(F.v9838))]);
Y_FLUSH();
if ((Y_DEFI(((rt_int *)(v1805).p)[y_ix1(v1805, Y_DEFI(F.v9838))]) == INT64_C(1))) {
yr3684_RoutineBody(Y_DEFP(((void * *)(v1794).p)[y_ix1(v1794, Y_DEFI(F.v9838))]));
Y_FLUSH();
} else {
yr3751_ModuleInit(Y_DEFI(F.v9838));
Y_FLUSH();
}
v1276 = Y_DEFI(F.v9842);
Y_FLUSH();
v1892 = Y_DEFP(F.v9846);
Y_FLUSH();
v1709 = Y_DEFI(F.v9844);
Y_FLUSH();
F.lo9861 = INT64_C(1);
F.hi9862 = Y_DEFI(((rt_int *)(v1873).p)[y_ix1(v1873, Y_DEFI(F.v9838))]);
{ rt_int hi9866 = F.hi9862;
for (rt_int i9865 = F.lo9861; i9865 <= hi9866; i9865++) { F.c_9864 = i9865; Y_TICK();
yr2367_CloseScope();
Y_FLUSH();
if (i9865 == hi9866) break;
}}
F.v9838 = y_range(y_add(Y_DEFI(F.v9838), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
v1886 = F.p3745;
Y_FLUSH();
v1889 = F.p3746;
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3751_ModuleInit(rt_int a_p3752) {
struct yf3753 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3752 = a_p3752;
F.v9872 = Y_UNDEF_P;
F.v9872 = Y_DEFP(((void * *)(v1794).p)[y_ix1(v1794, F.p3752)]);
y_initu(&yd_141, &F.v9874);
F.v9874 = v996;
F.v9876 = Y_UNDEF_P;
F.v9876 = Y_DEFP(((void * *)(v1838).p)[y_ix1(v1838, F.p3752)]);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
Y_FLUSH();
if (Y_DEFI(((rt_int *)(v1849).p)[y_ix1(v1849, F.p3752)])) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3915_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2))));
Y_FLUSH();
}
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = INT64_C(0);
Y_FLUSH();
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = INT64_C(0);
Y_FLUSH();
yr3435_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9872)))).f_c));
Y_FLUSH();
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (Y_DEFI(((rt_int *)(v1849).p)[y_ix1(v1849, F.p3752)])) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3915_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2))));
Y_FLUSH();
}
if ((!(Y_DEFP((v996).f_head) == ((void *)0)))) {
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_next = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v9876)))).f_next);
Y_FLUSH();
((*(yR135 *)y_deref(Y_DEFP(F.v9876)))).f_next = Y_DEFP((v996).f_head);
Y_FLUSH();
if ((Y_DEFP((F.v9874).f_tail) == Y_DEFP(F.v9876))) {
(F.v9874).f_tail = Y_DEFP((v996).f_tail);
Y_FLUSH();
}
}
v996 = F.v9874;
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3757_Declarations(void * a_p3758) {
struct yf3759 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3758 = a_p3758;
F.v9890 = Y_UNDEF_P;
F.v9890 = F.p3758;
F.v9892 = Y_UNDEF_P;
F.v9892 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
F.v9894 = Y_UNDEF_I;
F.v9894 = Y_DEFI(v1886);
F.v9896 = Y_UNDEF_I;
F.v9896 = Y_DEFI(v1889);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = F.p3758;
Y_FLUSH();
while ((!(Y_DEFP(F.v9890) == ((void *)0)))) {
Y_TICK();
v1000 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_line);
Y_FLUSH();
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = Y_DEFP(F.v9890);
Y_FLUSH();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_kind) == v666)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_sym) == ((void *)0))) {
yr3763_DeclareRoutine(Y_DEFP(F.v9890));
Y_FLUSH();
}
} else if (((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_kind) == v624))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_ival) == INT64_C(0))) {
yr3865_CompileModule(Y_DEFP(F.v9890));
Y_FLUSH();
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_kind) == v660)) {
yr3871_DeclareTemplate(Y_DEFP(F.v9890));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_kind) == v663)) {
yr3877_Instantiate(Y_DEFP(F.v9890));
Y_FLUSH();
} else {
yr3715_SimpleDecl(Y_DEFP(F.v9890));
Y_FLUSH();
}
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_next);
Y_FLUSH();
}
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(F.v9892);
Y_FLUSH();
yr2763_CheckPending();
Y_FLUSH();
yr3828_ResolveLater(Y_DEFI(v1273));
Y_FLUSH();
if ((!Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_closed))) {
yr3744_RunDeferred(Y_DEFI(F.v9894), Y_DEFI(F.v9896));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3763_DeclareRoutine(void * a_p3764) {
struct yf3765 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3764 = a_p3764;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3764))).f_kind) == v654)) {
yr3670_RoutineHeader(F.p3764, v876);
Y_FLUSH();
} else {
yr3670_RoutineHeader(F.p3764, v885);
Y_FLUSH();
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3764))).f_kind) == v666)) {
yr3883_DeclareProcess(F.p3764);
Y_FLUSH();
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3764))).f_sym)))).f_hasmv))) {
yr3735_Defer(F.p3764, INT64_C(1), ((void *)0), 0);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3769_Alias(rt_int a_p3770, void * a_p3771) {
struct yf3772 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3770 = a_p3770;
F.p3771 = a_p3771;
F.v9906 = Y_UNDEF_P;
F.v9906 = yr2348_NewSym(v894, F.p3770);
((*(yR125 *)y_deref(Y_DEFP(F.v9906)))).f_target = F.p3771;
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9906)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3771))).f_readonly);
Y_FLUSH();
{ void * rv9907 = Y_DEFP(F.v9906);
y_use = F.yu; return rv9907; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3776_AddLits(void * * a_p3777, void * a_p3778, rt_int a_p3779) {
struct yf3780 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3777 = a_p3777;
F.p3778 = a_p3778;
F.p3779 = a_p3779;
F.v9913 = Y_UNDEF_P;
F.v9915 = Y_UNDEF_P;
F.v9917 = Y_UNDEF_P;
if ((((F.p3779 > INT64_C(8))) || Y_DEFI(((*(yR110 *)y_deref(F.p3778))).f_opaque))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3778))).f_kind) == v816)) {
F.v9913 = Y_DEFP(((*(yR110 *)y_deref(F.p3778))).f_lits);
Y_FLUSH();
while ((!(Y_DEFP(F.v9913) == ((void *)0)))) {
Y_TICK();
F.v9915 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9913)))).f_name), F.p3778);
Y_FLUSH();
if ((!(Y_DEFP(F.v9915) == ((void *)0)))) {
F.v9915 = yr3769_Alias(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9913)))).f_name), Y_DEFP(F.v9915));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v9915)))).f_mnext = Y_DEFP((*F.p3777));
Y_FLUSH();
(*F.p3777) = Y_DEFP(F.v9915);
Y_FLUSH();
}
F.v9913 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9913)))).f_next);
Y_FLUSH();
}
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3778))).f_kind) == v825)) {
F.v9917 = Y_DEFP(((*(yR110 *)y_deref(F.p3778))).f_fields);
Y_FLUSH();
while ((!(Y_DEFP(F.v9917) == ((void *)0)))) {
Y_TICK();
yr3776_AddLits(&(*F.p3777), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9917)))).f_rep), y_range(y_add(F.p3779, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v9917 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9917)))).f_next);
Y_FLUSH();
}
} else if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3778))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3778))).f_kind) == v834))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3778))).f_kind) == v831)))) {
yr3776_AddLits(&(*F.p3777), Y_DEFP(((*(yR110 *)y_deref(F.p3778))).f_elem), y_range(y_add(F.p3779, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3784_Provides(void * a_p3785, rt_int a_p3786) {
struct yf3787 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3785 = a_p3785;
F.p3786 = a_p3786;
F.v9927 = Y_UNDEF_P;
F.v9927 = Y_DEFP(((*(yR105 *)y_deref(F.p3785))).f_b);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3785))).f_name) == F.p3786)) {
{ rt_int rv9929 = 1;
y_use = F.yu; return rv9929; }
}
while ((!(Y_DEFP(F.v9927) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9927)))).f_ival) == INT64_C(0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9927)))).f_ival) == F.p3786)))) {
{ rt_int rv9932 = 1;
y_use = F.yu; return rv9932; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9927)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9927)))).f_name) == F.p3786)))) {
{ rt_int rv9935 = 1;
y_use = F.yu; return rv9935; }
}
F.v9927 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9927)))).f_next);
Y_FLUSH();
}
{ rt_int rv9937 = 0;
y_use = F.yu; return rv9937; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3791_ImportLater(rt_int a_p3792, rt_int a_p3793, void * * a_p3794) {
struct yf3795 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3792 = a_p3792;
F.p3793 = a_p3793;
F.p3794_o = a_p3794;
F.v9943 = Y_UNDEF_P;
F.p3794 = ((void *)0);
Y_FLUSH();
if ((Y_DEFI(v1273) < INT64_C(0))) {
{ rt_int rv9946 = INT64_C(0);
(*F.p3794_o) = F.p3794;
y_use = F.yu; return rv9946; }
}
F.v9943 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
Y_FLUSH();
while ((!(Y_DEFP(F.v9943) == ((void *)0)))) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_kind) == v624)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_ival) == INT64_C(2))))) && yr3784_Provides(Y_DEFP(F.v9943), F.p3792))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_ival) == INT64_C(1))) {
F.p3794 = Y_DEFP(F.v9943);
Y_FLUSH();
{ rt_int rv9950 = INT64_C(2);
(*F.p3794_o) = F.p3794;
y_use = F.yu; return rv9950; }
}
yr3865_CompileModule(Y_DEFP(F.v9943));
Y_FLUSH();
{ rt_int rv9952 = INT64_C(1);
(*F.p3794_o) = F.p3794;
y_use = F.yu; return rv9952; }
}
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_kind) == v666)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_name) == F.p3792)))) {
{ rt_int rv9954 = INT64_C(3);
(*F.p3794_o) = F.p3794;
y_use = F.yu; return rv9954; }
}
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_kind) == v624))) && yr2410_DeclaredFrom(yr3799_OneDecl(Y_DEFP(F.v9943)), F.p3792))) {
yr1186_FailN(F.p3793, F.p3792, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
Y_FLUSH();
}
F.v9943 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9943)))).f_next);
Y_FLUSH();
}
{ rt_int rv9957 = INT64_C(0);
(*F.p3794_o) = F.p3794;
y_use = F.yu; return rv9957; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3799_OneDecl(void * a_p3800) {
struct yf3801 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3800 = a_p3800;
F.v9961 = Y_UNDEF_P;
({ F.v9961 = y_new_l(sizeof(yR105), "r0,0,17,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_106); y_initu(&yd_106, y_deref(F.v9961)); });
Y_FLUSH();
(*(yR105 *)y_deref(Y_DEFP(F.v9961))) = (*(yR105 *)y_deref(F.p3800));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v9961)))).f_next = ((void *)0);
Y_FLUSH();
{ void * rv9962 = Y_DEFP(F.v9961);
y_use = F.yu; return rv9962; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3805_Lazy(rt_int a_p3806, rt_int a_p3807, void * a_p3808, rt_int a_p3809) {
struct yf3810 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3806 = a_p3806;
F.p3807 = a_p3807;
F.p3808 = a_p3808;
F.p3809 = a_p3809;
F.v9969 = Y_UNDEF_P;
F.v9969 = yr2348_NewSym(v894, F.p3806);
if ((Y_DEFI(v1954) >= INT64_C(10000))) {
yr1178_FailS(F.p3809, y_str("too many imports translated later", 33));
Y_FLUSH();
}
v1954 = y_range(y_add(Y_DEFI(v1954), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((void * *)(v1917).p)[y_ix1(v1917, Y_DEFI(v1954))] = Y_DEFP(F.v9969);
Y_FLUSH();
((rt_int *)(v1928).p)[y_ix1(v1928, Y_DEFI(v1954))] = F.p3807;
Y_FLUSH();
((void * *)(v1939).p)[y_ix1(v1939, Y_DEFI(v1954))] = F.p3808;
Y_FLUSH();
((rt_int *)(v1950).p)[y_ix1(v1950, Y_DEFI(v1954))] = Y_DEFI(v1273);
Y_FLUSH();
((rt_int *)(v1952).p)[y_ix1(v1952, Y_DEFI(v1954))] = F.p3809;
Y_FLUSH();
{ void * rv9974 = Y_DEFP(F.v9969);
y_use = F.yu; return rv9974; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3814_SetLazy(rt_int a_p3815, void * a_p3816) {
struct yf3817 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3815 = a_p3815;
F.p3816 = a_p3816;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.p3815)])))).f_target = F.p3816;
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.p3815)])))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3816))).f_readonly);
Y_FLUSH();
((void * *)(v1917).p)[y_ix1(v1917, F.p3815)] = ((void *)0);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3821_ResolveFrom(void * a_p3822, void * a_p3823) {
struct yf3824 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3822 = a_p3822;
F.p3823 = a_p3823;
F.v9982 = Y_UNDEF_P;
F.lo9986 = INT64_C(1);
F.hi9987 = Y_DEFI(v1954);
{ rt_int hi9991 = F.hi9987;
for (rt_int i9990 = F.lo9986; i9990 <= hi9991; i9990++) { F.c_9989 = i9990; Y_TICK();
if ((((!(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.c_9989)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1939).p)[y_ix1(v1939, F.c_9989)]) == F.p3822)))) {
F.v9982 = Y_DEFP(((*(yR125 *)y_deref(F.p3823))).f_members);
Y_FLUSH();
while ((((!(Y_DEFP(F.v9982) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9982)))).f_name) == Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_9989)])))))) {
Y_TICK();
F.v9982 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9982)))).f_mnext);
Y_FLUSH();
}
if ((Y_DEFP(F.v9982) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1952).p)[y_ix1(v1952, F.c_9989)]), Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_9989)]), y_str(" is not exported by that module", 31));
Y_FLUSH();
}
yr3814_SetLazy(y_range(F.c_9989, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9982));
Y_FLUSH();
}
if (i9990 == hi9991) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3828_ResolveLater(rt_int a_p3829) {
struct yf3830 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3829 = a_p3829;
F.v9996 = Y_UNDEF_P;
F.lo10000 = INT64_C(1);
F.hi10001 = Y_DEFI(v1954);
{ rt_int hi10005 = F.hi10001;
for (rt_int i10004 = F.lo10000; i10004 <= hi10005; i10004++) { F.c_10003 = i10004; Y_TICK();
if (((((!(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.c_10003)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1939).p)[y_ix1(v1939, F.c_10003)]) == ((void *)0)))) && ((Y_DEFI(((rt_int *)(v1950).p)[y_ix1(v1950, F.c_10003)]) == F.p3829)))) {
F.v9996 = yr2378_Find(Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_10003)]));
Y_FLUSH();
if ((Y_DEFP(F.v9996) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1952).p)[y_ix1(v1952, F.c_10003)]), Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_10003)]), y_str(" is not declared around this module (X.B.2)", 43));
Y_FLUSH();
}
yr3814_SetLazy(y_range(F.c_10003, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9996));
Y_FLUSH();
}
if (i10004 == hi10005) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3834_LazyModule(void * a_p3835, void * * a_p3836, rt_int a_p3837) {
struct yf3838 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3835 = a_p3835;
F.p3836 = a_p3836;
F.p3837 = a_p3837;
F.v10012 = Y_UNDEF_P;
F.v10012 = Y_DEFP(((*(yR105 *)y_deref(F.p3835))).f_b);
F.v10014 = Y_UNDEF_P;
F.v10016 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v10012) == ((void *)0)))) {
Y_TICK();
F.v10016 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10012)))).f_name);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10012)))).f_ival) == INT64_C(0)))) {
F.v10016 = y_range(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10012)))).f_ival), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
}
if (((((!(Y_DEFI(F.v10016) == v531))) && ((!(Y_DEFI(F.v10016) == v585)))) && ((!(Y_DEFI(F.v10016) == v570))))) {
F.v10014 = yr3805_Lazy(Y_DEFI(F.v10016), Y_DEFI(F.v10016), F.p3835, F.p3837);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10014)))).f_mnext = Y_DEFP((*F.p3836));
Y_FLUSH();
(*F.p3836) = Y_DEFP(F.v10014);
Y_FLUSH();
}
F.v10012 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10012)))).f_next);
Y_FLUSH();
}
F.v10014 = yr3805_Lazy(Y_DEFI(((*(yR105 *)y_deref(F.p3835))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3835))).f_name), ((void *)0), F.p3837);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10014)))).f_mnext = Y_DEFP((*F.p3836));
Y_FLUSH();
(*F.p3836) = Y_DEFP(F.v10014);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3842_ResolveItem(void * a_p3843, void * * a_p3844, rt_int a_p3845) {
struct yf3846 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3843 = a_p3843;
F.p3844 = a_p3844;
F.p3845 = a_p3845;
F.v10023 = Y_UNDEF_P;
F.v10025 = Y_UNDEF_P;
F.v10027 = Y_UNDEF_P;
F.v10029 = Y_UNDEF_I;
F.v10031 = Y_UNDEF_P;
F.v10033 = Y_UNDEF_I;
F.v10033 = Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_flag);
F.v10035 = Y_UNDEF_I;
F.v10037 = Y_UNDEF_P;
if (((F.p3845 && ((Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text) == INT64_C(0)))) && (((((Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name) == v531)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name) == v585))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name) == v570)))))) {
if ((yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name)) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v10029 = Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_ival) == INT64_C(0)))) {
F.v10029 = y_range(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_ival), INT64_C(0), INT64_C(4000000));
Y_FLUSH();
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text) == INT64_C(0)))) {
if ((((!F.p3845)) && ((yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text)) == ((void *)0))))) {
F.v10035 = yr3791_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), &F.v10037);
Y_FLUSH();
if ((Y_DEFI(F.v10035) == INT64_C(2))) {
F.v10027 = yr3805_Lazy(Y_DEFI(F.v10029), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), Y_DEFP(F.v10037), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_mnext = Y_DEFP((*F.p3844));
Y_FLUSH();
(*F.p3844) = Y_DEFP(F.v10027);
Y_FLUSH();
y_use = F.yu; return;
}
}
F.v10025 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line)));
Y_FLUSH();
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v879))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text), y_str(" is not a module", 16));
Y_FLUSH();
}
F.v10023 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_members);
Y_FLUSH();
while ((((!(Y_DEFP(F.v10023) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name)))))) {
Y_TICK();
F.v10023 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_mnext);
Y_FLUSH();
}
if ((Y_DEFP(F.v10023) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), y_str(" is not exported by that module", 31));
Y_FLUSH();
}
} else {
if (F.p3845) {
F.v10023 = yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name));
Y_FLUSH();
} else {
F.v10023 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name));
Y_FLUSH();
}
if ((((Y_DEFP(F.v10023) == ((void *)0))) && (!F.p3845))) {
F.v10035 = yr3791_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), &F.v10037);
Y_FLUSH();
if ((((Y_DEFI(F.v10035) == INT64_C(2))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10037)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name))))) {
if ((((!(Y_DEFI(F.v10033) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
Y_FLUSH();
}
yr3834_LazyModule(Y_DEFP(F.v10037), &(*F.p3844), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line));
Y_FLUSH();
y_use = F.yu; return;
}
if ((Y_DEFI(F.v10035) >= INT64_C(2))) {
F.v10027 = yr3805_Lazy(Y_DEFI(F.v10029), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), Y_DEFP(F.v10037), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_mnext = Y_DEFP((*F.p3844));
Y_FLUSH();
(*F.p3844) = Y_DEFP(F.v10027);
Y_FLUSH();
y_use = F.yu; return;
}
F.v10023 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name));
Y_FLUSH();
}
if ((F.p3845 && ((!(Y_DEFP(F.v10023) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_mval) == INT64_C(1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
Y_FLUSH();
}
}
if ((Y_DEFP(F.v10023) == ((void *)0))) {
if (F.p3845) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), y_str(" is not declared in this module", 31));
Y_FLUSH();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), y_str(" is not declared around this module (X.B.2)", 43));
Y_FLUSH();
}
}
}
F.v10025 = yr2483_Real(Y_DEFP(F.v10023));
Y_FLUSH();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v879)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_text) == INT64_C(0))))) {
if ((((!(Y_DEFI(F.v10033) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
Y_FLUSH();
}
F.v10027 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_members);
Y_FLUSH();
while ((!(Y_DEFP(F.v10027) == ((void *)0)))) {
Y_TICK();
F.v10023 = yr3769_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_name), Y_DEFP(F.v10027));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_mnext = Y_DEFP((*F.p3844));
Y_FLUSH();
(*F.p3844) = Y_DEFP(F.v10023);
Y_FLUSH();
F.v10027 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_mnext);
Y_FLUSH();
}
if ((!F.p3845)) {
F.v10023 = yr3769_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_name), Y_DEFP(F.v10025));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_mnext = Y_DEFP((*F.p3844));
Y_FLUSH();
(*F.p3844) = Y_DEFP(F.v10023);
Y_FLUSH();
}
y_use = F.yu; return;
}
F.v10027 = yr3769_Alias(Y_DEFI(F.v10029), Y_DEFP(F.v10023));
Y_FLUSH();
if (F.p3845) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v870)))) {
if ((((Y_DEFI(F.v10033) == v429)) || ((Y_DEFI(F.v10033) == v483)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), y_str("READONLY and VAR are for variables", 34));
Y_FLUSH();
}
if ((((Y_DEFI(F.v10033) == v474)) && Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))).f_opaque))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
Y_FLUSH();
}
if ((((!(Y_DEFI(F.v10033) == v474))) || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))).f_opaque))) {
F.v10031 = yr2496_CopyRep(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v10031)))).f_opaque = 1;
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v10031)))).f_opaqueops = Y_DEFI(v1905);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_target = yr2348_NewSym(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_target)))).f_rep = Y_DEFP(F.v10031);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_target)))).f_decl = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_decl);
Y_FLUSH();
} else {
yr3776_AddLits(&(*F.p3844), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep), INT64_C(0));
Y_FLUSH();
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v864)))) {
if ((((Y_DEFI(F.v10033) == v396)) || ((Y_DEFI(F.v10033) == v474)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), y_str("OPAQUE and TRANSPARENT are for types", 36));
Y_FLUSH();
}
if ((((Y_DEFI(F.v10033) == v483)) && ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v864)) || Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10023)))).f_readonly))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_name), y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
Y_FLUSH();
}
if ((!(Y_DEFI(F.v10033) == v483))) {
((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_readonly = 1;
Y_FLUSH();
}
} else if ((!(Y_DEFI(F.v10033) == INT64_C(0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), y_str("an attribute is for a type, a representation or a variable", 58));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v861)) && ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))).f_kind) == v837)) || yr2539_HoldsSignal(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3843))).f_line), y_str("a signal may not be exported from its monitor (X.E.4)", 53));
Y_FLUSH();
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_kind) == v870)))) {
yr3776_AddLits(&(*F.p3844), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10025)))).f_rep), INT64_C(0));
Y_FLUSH();
}
((*(yR125 *)y_deref(Y_DEFP(F.v10027)))).f_mnext = Y_DEFP((*F.p3844));
Y_FLUSH();
(*F.p3844) = Y_DEFP(F.v10027);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3850_DefineAll(void * a_p3851, rt_int a_p3852) {
struct yf3853 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3851 = a_p3851;
F.p3852 = a_p3852;
F.v10072 = Y_UNDEF_P;
F.v10072 = F.p3851;
F.v10074 = Y_UNDEF_P;
F.v10074 = F.p3851;
F.v10076 = Y_UNDEF_P;
F.v10076 = F.p3851;
while ((!(Y_DEFP(F.v10072) == ((void *)0)))) {
Y_TICK();
F.v10074 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10072)))).f_mnext);
Y_FLUSH();
F.v10076 = yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10072)))).f_name));
Y_FLUSH();
if (((!yr2431_Resolved(Y_DEFP(F.v10072))) || ((((!(Y_DEFP(F.v10076) == ((void *)0)))) && (!yr2431_Resolved(Y_DEFP(F.v10076))))))) {
if ((!(Y_DEFP(F.v10076) == ((void *)0)))) {
yr1186_FailN(F.p3852, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10072)))).f_name), y_str(" comes into this scope twice", 28));
Y_FLUSH();
}
yr2450_Define(Y_DEFP(F.v10072), F.p3852);
Y_FLUSH();
} else if ((((Y_DEFP(F.v10076) == ((void *)0))) || ((!(yr2483_Real(Y_DEFP(F.v10076)) == yr2483_Real(Y_DEFP(F.v10072))))))) {
if (((((!(Y_DEFP(F.v10076) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v10072))))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v10076))))).f_kind) == v873)))) {
yr2450_Define(Y_DEFP(F.v10072), F.p3852);
Y_FLUSH();
} else if ((Y_DEFP(F.v10076) == ((void *)0))) {
yr2450_Define(Y_DEFP(F.v10072), F.p3852);
Y_FLUSH();
} else {
yr1186_FailN(F.p3852, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10072)))).f_name), y_str(" comes into this scope twice", 28));
Y_FLUSH();
}
}
F.v10072 = Y_DEFP(F.v10074);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3857_ExtendWith(void * a_p3858, void * a_p3859, rt_int a_p3860) {
struct yf3861 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3858 = a_p3858;
F.p3859 = a_p3859;
F.p3860 = a_p3860;
F.v10084 = Y_UNDEF_P;
F.v10084 = ((void *)0);
F.v10086 = Y_UNDEF_P;
F.v10086 = ((void *)0);
F.v10088 = Y_UNDEF_P;
F.v10088 = ((void *)0);
F.v10090 = Y_UNDEF_P;
F.v10090 = ((void *)0);
F.v10090 = F.p3858;
Y_FLUSH();
while ((!(Y_DEFP(F.v10090) == ((void *)0)))) {
Y_TICK();
if ((!(yr3677_SameSignature(Y_DEFP(F.v10090), F.p3859) == ((void *)0)))) {
yr1186_FailN(F.p3860, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10090)))).f_name), y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
Y_FLUSH();
}
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10090)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3859))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(F.p3860, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10090)))).f_name), y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
Y_FLUSH();
}
({ F.v10088 = y_new_l(sizeof(yR125), "r0,0,30,-1(-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:u0,0,64;-1,0,0:i0,0,64;-1,0,0:u0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:u0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:p0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;-1,0,0:i0,0,64;)", &yd_126); y_initu(&yd_126, y_deref(F.v10088)); });
Y_FLUSH();
(*(yR125 *)y_deref(Y_DEFP(F.v10088))) = (*(yR125 *)y_deref(Y_DEFP(F.v10090)));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10088)))).f_target = Y_DEFP(F.v10090);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10088)))).f_alt = ((void *)0);
Y_FLUSH();
if ((Y_DEFP(F.v10086) == ((void *)0))) {
F.v10084 = Y_DEFP(F.v10088);
Y_FLUSH();
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v10086)))).f_alt = Y_DEFP(F.v10088);
Y_FLUSH();
}
F.v10086 = Y_DEFP(F.v10088);
Y_FLUSH();
F.v10090 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10090)))).f_alt);
Y_FLUSH();
}
((*(yR125 *)y_deref(Y_DEFP(F.v10086)))).f_alt = F.p3859;
Y_FLUSH();
{ void * rv10093 = Y_DEFP(F.v10084);
y_use = F.yu; return rv10093; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3865_CompileModule(void * a_p3866) {
struct yf3867 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3866 = a_p3866;
F.v10097 = Y_UNDEF_P;
F.v10099 = Y_UNDEF_P;
F.v10101 = Y_UNDEF_P;
F.v10103 = Y_UNDEF_P;
F.v10105 = Y_UNDEF_P;
F.v10107 = Y_UNDEF_P;
F.v10109 = Y_UNDEF_P;
F.v10111 = Y_UNDEF_P;
F.v10113 = Y_UNDEF_P;
F.v10115 = Y_UNDEF_I;
F.v10117 = Y_UNDEF_P;
F.v10119 = Y_UNDEF_P;
F.v10121 = Y_UNDEF_I;
F.v10123 = Y_UNDEF_I;
F.v10125 = Y_UNDEF_I;
F.v10125 = 0;
((*(yR105 *)y_deref(F.p3866))).f_ival = INT64_C(1);
Y_FLUSH();
F.v10115 = Y_DEFI(v1753);
Y_FLUSH();
F.v10097 = ((void *)0);
Y_FLUSH();
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(F.p3866))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v10117) == ((void *)0)))) {
Y_TICK();
yr3842_ResolveItem(Y_DEFP(F.v10117), &F.v10097, 0);
Y_FLUSH();
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_next);
Y_FLUSH();
}
F.v10107 = Y_DEFP(v1892);
Y_FLUSH();
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_flag) == INT64_C(1))) && ((Y_DEFP(v1892) == ((void *)0))))) {
F.v10109 = yr2348_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10109)))).f_level = Y_DEFI(v1279);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10109)))).f_cname = yr1200_Fresh(y_str("mon", 3));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10109)))).f_rep = Y_DEFP(v1348);
Y_FLUSH();
yr2470_DeclStorage(yr1061_T(y_str("ymon", 4)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10109)))).f_cname));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2457_Path(Y_DEFI(v1279), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10109)))).f_cname)), yr1061_T(y_str(");", 2))));
Y_FLUSH();
v1892 = Y_DEFP(F.v10109);
Y_FLUSH();
F.v10125 = 1;
Y_FLUSH();
}
yr2355_OpenScope(1);
Y_FLUSH();
v1753 = Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name);
Y_FLUSH();
if ((Y_DEFI(v1733) >= INT64_C(64))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line), y_str("modules nested too deeply", 25));
Y_FLUSH();
}
v1733 = y_range(y_add(Y_DEFI(v1733), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1745).p)[y_ix1(v1745, Y_DEFI(v1733))] = Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3866))).f_d) == ((void *)0)))) {
v1727 = y_range(y_add(Y_DEFI(v1727), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (((((Y_DEFI(v1733) == INT64_C(1))) && ((!(Y_DEFI(v1724) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name) == Y_DEFI(v1724))))) {
v1730 = y_range(y_add(Y_DEFI(v1730), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
F.v10121 = Y_DEFI(v1276);
Y_FLUSH();
v1276 = Y_DEFI(v1273);
Y_FLUSH();
F.v10101 = Y_DEFP(F.v10097);
Y_FLUSH();
while ((!(Y_DEFP(F.v10101) == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(Y_DEFP(F.v10101)))).f_mval = INT64_C(1);
Y_FLUSH();
F.v10101 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10101)))).f_mnext);
Y_FLUSH();
}
yr3850_DefineAll(Y_DEFP(F.v10097), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line));
Y_FLUSH();
yr3757_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3866))).f_c)))).f_a));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("/* ", 3)), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name), yr1061_T(y_str(" */", 3))));
Y_FLUSH();
if ((Y_DEFI(v1727) == INT64_C(0))) {
yr3735_Defer(F.p3866, INT64_C(2), Y_DEFP((v996).f_tail), Y_DEFI(F.v10125));
Y_FLUSH();
}
v1905 = INT64_C(0);
Y_FLUSH();
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(F.p3866))).f_b);
Y_FLUSH();
while ((!(Y_DEFP(F.v10117) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_text) == INT64_C(0))) && ((yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_name)) == ((void *)0))))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_name) == v531)) {
v1905 = y_range(y_add(Y_DEFI(v1905), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_name) == v585)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_name) == v570)))) {
if (((y_div(Y_DEFI(v1905), INT64_C(2))) == INT64_C(0))) {
v1905 = y_range(y_add(Y_DEFI(v1905), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
}
}
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_next);
Y_FLUSH();
}
F.v10099 = ((void *)0);
Y_FLUSH();
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(F.p3866))).f_b);
Y_FLUSH();
while ((!(Y_DEFP(F.v10117) == ((void *)0)))) {
Y_TICK();
yr3842_ResolveItem(Y_DEFP(F.v10117), &F.v10099, 1);
Y_FLUSH();
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10117)))).f_next);
Y_FLUSH();
}
F.v10119 = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
Y_FLUSH();
v1276 = Y_DEFI(F.v10121);
Y_FLUSH();
v1753 = Y_DEFI(F.v10115);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3866))).f_d) == ((void *)0)))) {
v1727 = y_range(y_sub(Y_DEFI(v1727), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (((((Y_DEFI(v1733) == INT64_C(1))) && ((!(Y_DEFI(v1724) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name) == Y_DEFI(v1724))))) {
v1730 = y_range(y_sub(Y_DEFI(v1730), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
v1733 = y_range(y_sub(Y_DEFI(v1733), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr2367_CloseScope();
Y_FLUSH();
while ((!(Y_DEFP(F.v10119) == ((void *)0)))) {
Y_TICK();
F.v10117 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10119)))).f_next);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v10119)))).f_next = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
Y_FLUSH();
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = Y_DEFP(F.v10119);
Y_FLUSH();
F.v10119 = Y_DEFP(F.v10117);
Y_FLUSH();
}
v1892 = Y_DEFP(F.v10107);
Y_FLUSH();
F.v10103 = yr2348_NewSym(v879, Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_name));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10103)))).f_members = Y_DEFP(F.v10099);
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v10103), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line));
Y_FLUSH();
F.v10105 = Y_DEFP(F.v10099);
Y_FLUSH();
F.v10099 = ((void *)0);
Y_FLUSH();
while ((!(Y_DEFP(F.v10105) == ((void *)0)))) {
Y_TICK();
F.v10111 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_mnext);
Y_FLUSH();
F.v10101 = yr3769_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name), Y_DEFP(F.v10105));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10101)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_readonly);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10101)))).f_mnext = Y_DEFP(F.v10099);
Y_FLUSH();
F.v10099 = Y_DEFP(F.v10101);
Y_FLUSH();
F.v10105 = Y_DEFP(F.v10111);
Y_FLUSH();
}
((*(yR125 *)y_deref(Y_DEFP(F.v10103)))).f_members = Y_DEFP(F.v10099);
Y_FLUSH();
((*(yR105 *)y_deref(F.p3866))).f_ival = INT64_C(2);
Y_FLUSH();
yr3821_ResolveFrom(F.p3866, Y_DEFP(F.v10103));
Y_FLUSH();
F.v10105 = Y_DEFP(F.v10099);
Y_FLUSH();
while ((!(Y_DEFP(F.v10105) == ((void *)0)))) {
Y_TICK();
F.v10111 = yr3769_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name), Y_DEFP(F.v10105));
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v10111)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_readonly);
Y_FLUSH();
F.v10113 = yr2378_Find(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v10113) == ((void *)0)))) {
if ((!yr2431_Resolved(Y_DEFP(F.v10113)))) {
F.v10113 = ((void *)0);
Y_FLUSH();
} else {
F.v10113 = yr2483_Real(Y_DEFP(F.v10113));
Y_FLUSH();
}
}
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v10105))))).f_kind) == v876)) && ((!(Y_DEFP(F.v10113) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10113)))).f_kind) == v876)) {
F.v10111 = yr3857_ExtendWith(yr2483_Real(Y_DEFP(F.v10105)), Y_DEFP(F.v10113), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line));
Y_FLUSH();
}
}
if ((yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name)) == ((void *)0))) {
yr2450_Define(Y_DEFP(F.v10111), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10111)))).f_kind) == v876)) {
yr2450_Define(Y_DEFP(F.v10111), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line));
Y_FLUSH();
} else if ((((Y_DEFI(((*(yR125 *)y_deref(yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name))))).f_kind) == v894)) && ((!(yr2483_Real(yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name))) == yr2483_Real(Y_DEFP(F.v10105))))))) {
yr2450_Define(Y_DEFP(F.v10111), Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line));
Y_FLUSH();
} else if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v10105))))).f_kind) == v873))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3866))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_name), y_str(" is exported into a scope that has it already", 45));
Y_FLUSH();
}
F.v10105 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10105)))).f_mnext);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3871_DeclareTemplate(void * a_p3872) {
struct yf3873 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3872 = a_p3872;
F.v10174 = Y_UNDEF_P;
F.v10174 = yr2348_NewSym(v882, Y_DEFI(((*(yR105 *)y_deref(F.p3872))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v10174)))).f_decl = F.p3872;
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v10174), Y_DEFI(((*(yR105 *)y_deref(F.p3872))).f_line));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3877_Instantiate(void * a_p3878) {
struct yf3879 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3878 = a_p3878;
F.v10178 = Y_UNDEF_P;
F.v10178 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_line)));
F.v10180 = Y_UNDEF_P;
F.v10182 = Y_UNDEF_P;
F.v10184 = Y_UNDEF_P;
F.v10186 = Y_UNDEF_I;
F.v10188 = Y_UNDEF_I;
F.v10190 = Y_UNDEF_I;
F.v10192 = Y_UNDEF_I;
F.v10194 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10178)))).f_kind) == v882))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_name), y_str(" is not a template", 18));
Y_FLUSH();
}
F.v10180 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v10178)))).f_decl);
Y_FLUSH();
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10180)))).f_a)) == yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3878))).f_a))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_name), y_str(": the number of actuals is wrong", 32));
Y_FLUSH();
}
F.v10186 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.lo10202 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10180)))).f_ival);
F.hi10203 = y_sub(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10180)))).f_flag), INT64_C(1));
{ rt_int hi10207 = F.hi10203;
for (rt_int i10206 = F.lo10202; i10206 <= hi10207; i10206++) { F.c_10205 = i10206; Y_TICK();
F.v10190 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.c_10205)]);
Y_FLUSH();
F.v10192 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.c_10205)]);
Y_FLUSH();
if ((Y_DEFI(F.v10190) == v207)) {
F.v10182 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10180)))).f_a);
Y_FLUSH();
F.v10184 = Y_DEFP(((*(yR105 *)y_deref(F.p3878))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v10182) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10182)))).f_name) == Y_DEFI(F.v10192))) && ((Y_DEFI(F.v10190) == v207)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10184)))).f_flag) == INT64_C(1))) {
F.v10190 = v216;
Y_FLUSH();
F.v10192 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10184)))).f_ival);
Y_FLUSH();
} else {
F.v10192 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10184)))).f_name);
Y_FLUSH();
if ((Y_DEFI(F.v10192) <= v492)) {
F.v10190 = v210;
Y_FLUSH();
} else if ((Y_DEFI(F.v10192) <= v621)) {
F.v10190 = v213;
Y_FLUSH();
}
}
}
F.v10182 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10182)))).f_next);
Y_FLUSH();
F.v10184 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10184)))).f_next);
Y_FLUSH();
}
}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = Y_DEFI(F.v10190);
Y_FLUSH();
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = Y_DEFI(F.v10192);
Y_FLUSH();
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, F.c_10205)]);
Y_FLUSH();
if (i10206 == hi10207) break;
}}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = v204;
Y_FLUSH();
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = INT64_C(0);
Y_FLUSH();
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((*(yR105 *)y_deref(F.p3878))).f_line);
Y_FLUSH();
F.v10188 = Y_DEFI(v1249);
Y_FLUSH();
v1249 = Y_DEFI(F.v10186);
Y_FLUSH();
F.v10194 = yr2134_ParseModule();
Y_FLUSH();
v1249 = Y_DEFI(F.v10188);
Y_FLUSH();
yr3865_CompileModule(Y_DEFP(F.v10194));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3883_DeclareProcess(void * a_p3884) {
struct yf3885 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3884 = a_p3884;
F.v10217 = Y_UNDEF_P;
F.v10217 = Y_DEFP(((*(yR105 *)y_deref(F.p3884))).f_sym);
F.v10219 = Y_UNDEF_P;
((*(yR125 *)y_deref(Y_DEFP(F.v10217)))).f_monitor = Y_DEFP(v1892);
Y_FLUSH();
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10217)))).f_hasmv)) {
y_use = F.yu; return;
}
yr2470_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10217)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0)));
Y_FLUSH();
yr4223_SegActivation(Y_DEFP(F.v10217), F.p3884);
Y_FLUSH();
F.v10219 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3884))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v10219)))).f_sym = Y_DEFP(F.v10217);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v10219)))).f_next = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
Y_FLUSH();
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = Y_DEFP(F.v10219);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3889_AwaitProcesses(void) {
struct yf3890 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10225 = Y_UNDEF_P;
F.v10225 = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v10225) == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2457_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10225)))).f_sym)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10225)))).f_sym)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
Y_FLUSH();
F.v10225 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10225)))).f_next);
Y_FLUSH();
}
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3894_Activate(void * a_p3895, void * a_p3896) {
struct yf3897 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3895 = a_p3895;
F.p3896 = a_p3896;
F.v10236 = Y_UNDEF_I;
F.v10238 = Y_UNDEF_I;
F.v10240 = Y_UNDEF_I;
F.v10242 = Y_UNDEF_I;
F.v10244 = Y_UNDEF_I;
F.v10246 = Y_UNDEF_P;
F.v10248 = Y_UNDEF_I;
F.v10250 = Y_UNDEF_I;
F.v10252 = Y_UNDEF_P;
F.v10254 = Y_UNDEF_I;
F.v10256 = Y_UNDEF_I;
F.v10258 = Y_UNDEF_I;
F.v10260 = Y_UNDEF_I;
F.v10262 = Y_UNDEF_I;
F.v10264 = Y_UNDEF_I;
F.v10266 = Y_UNDEF_P;
F.v10266 = Y_DEFP(((*(yR125 *)y_deref(F.p3896))).f_decl);
F.v10268 = Y_UNDEF_P;
yr3279_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3895))).f_a), F.p3896, &F.v10236, &F.v10238);
Y_FLUSH();
if ((!(Y_DEFI(F.v10238) == Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_nparams)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3895))).f_line), Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_name), y_str(": the number of actual parameters is wrong", 42));
Y_FLUSH();
}
yr3329_NoteCall(F.p3896, Y_DEFI(((*(yR105 *)y_deref(F.p3895))).f_line));
Y_FLUSH();
yr3618_CheckActuals(F.p3896, Y_DEFI(F.v10236), Y_DEFI(((*(yR105 *)y_deref(F.p3895))).f_line));
Y_FLUSH();
F.v10254 = yr1200_Fresh(y_str("pf", 2));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("{ struct ", 9)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3896))).f_members)))).f_name), yr3530_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v10254), yr3530_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), Y_DEFI(F.v10254), yr1061_T(y_str(");", 2))))));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_level) > INT64_C(1))) {
yr1132_Emit(yr3530_Join(Y_DEFI(F.v10254), yr1061_T(y_str("->up = ", 7)), yr3530_Join(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
}
F.v10252 = Y_DEFP(((*(yR125 *)y_deref(F.p3896))).f_params);
Y_FLUSH();
F.v10240 = y_range(y_add(Y_DEFI(F.v10236), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((!(Y_DEFP(F.v10252) == ((void *)0)))) {
Y_TICK();
if ((!yr3258_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))])))) {
yr2576_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))]));
Y_FLUSH();
}
F.v10260 = yr3530_Join(Y_DEFI(F.v10254), yr1061_T(y_str("->", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_cname));
Y_FLUSH();
yr3288_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))])))).f_line));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep)))).f_kind) == v855)) {
yr1132_Emit(yr3530_Join(Y_DEFI(F.v10260), yr1061_T(y_str(" = ", 3)), yr3530_Join(yr2914_SpaceArg(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10240))]), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_cls) == v903)) {
if ((!yr3068_IsVariable(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_name), y_str(": the actual of a VAR parameter must be a variable", 50));
Y_FLUSH();
}
if ((!yr3296_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
Y_FLUSH();
}
yr3585_NoteWrite(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))]));
Y_FLUSH();
yr3568_DesigBase(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))]), &F.v10246, &F.v10248, &F.v10250);
Y_FLUSH();
if ((((!(Y_DEFP(F.v10246) == ((void *)0)))) && (!Y_DEFI(F.v10248)))) {
if ((yr3909_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10246)))).f_depth)) > yr3909_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10246)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
Y_FLUSH();
}
}
yr1132_Emit(yr3530_Join(Y_DEFI(F.v10260), yr1061_T(y_str(" = &", 4)), yr3530_Join(yr3142_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10240))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10240))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
} else if (yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep))) {
F.v10256 = yr1200_Fresh(y_str("t", 1));
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("{ ", 2)), yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep)), yr3530_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v10256), yr3530_Join(yr1061_T(y_str(" = ", 3)), yr3040_Convert(Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10240))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))])), yr1061_T(y_str(";", 1))))));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep)))).f_elem)), yr3530_Join(yr1061_T(y_str("), &", 4)), Y_DEFI(F.v10260), yr3530_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v10256), yr1061_T(y_str("); }", 4))))));
Y_FLUSH();
} else {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_copy(", 7)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep)), yr3530_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v10260), yr3530_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v10256), yr1061_T(y_str("); }", 4))))));
Y_FLUSH();
}
} else {
yr1132_Emit(yr3530_Join(Y_DEFI(F.v10260), yr1061_T(y_str(" = ", 3)), yr3530_Join(yr3040_Convert(Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10240))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10240))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
}
F.v10240 = y_range(y_add(Y_DEFI(F.v10240), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v10252 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10252)))).f_next);
Y_FLUSH();
}
v1560 = Y_DEFI(F.v10236);
Y_FLUSH();
F.v10262 = yr1061_T(y_str("0", 1));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_e) == ((void *)0)))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_e), Y_DEFP(v1342), &F.v10262, &F.v10268);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v10268));
Y_FLUSH();
}
F.v10264 = yr1061_T(y_str("0, 0", 4));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_d) == ((void *)0)))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_d), Y_DEFP(v1342), &F.v10258, &F.v10268);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v10268));
Y_FLUSH();
F.v10264 = yr3530_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v10258), INT64_C(0));
Y_FLUSH();
}
F.v10242 = INT64_C(0);
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_x) == ((void *)0)))) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_x), &F.v10244, &F.v10242);
Y_FLUSH();
if (((!Y_DEFI(F.v10244)) || ((Y_DEFI(F.v10242) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10266)))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
Y_FLUSH();
}
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_create(&", 10));
Y_FLUSH();
yr1044_ST(yr2457_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10262));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10264));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v10242));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3896))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10254));
Y_FLUSH();
yr1037_SA(y_str("); }", 4));
Y_FLUSH();
F.v10256 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v10256));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3901_CheckLifeScope(void * a_p3902, rt_int a_p3903, rt_int a_p3904) {
struct yf3905 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3902 = a_p3902;
F.p3903 = a_p3903;
F.p3904 = a_p3904;
F.v10334 = Y_UNDEF_P;
F.v10334 = Y_DEFP(((*(yR125 *)y_deref(F.p3902))).f_params);
F.v10336 = Y_UNDEF_I;
F.v10336 = y_range(y_add(F.p3903, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10340 = Y_UNDEF_P;
F.v10342 = Y_UNDEF_I;
F.v10344 = Y_UNDEF_I;
while ((((!(Y_DEFP(F.v10334) == ((void *)0)))) && ((Y_DEFI(F.v10336) <= y_add(F.p3903, F.p3904))))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10334)))).f_cls) == v903)) {
yr3568_DesigBase(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10336))]), &F.v10340, &F.v10342, &F.v10344);
Y_FLUSH();
if ((((!(Y_DEFP(F.v10340) == ((void *)0)))) && (!Y_DEFI(F.v10342)))) {
if ((yr3909_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10340)))).f_depth)) > yr3909_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3902))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10336))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10340)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
Y_FLUSH();
}
}
}
F.v10336 = y_range(y_add(Y_DEFI(F.v10336), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v10334 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10334)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3909_LifeDepth(rt_int a_p3910) {
struct yf3911 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3910 = a_p3910;
F.v10352 = Y_UNDEF_I;
F.v10352 = F.p3910;
while ((((Y_DEFI(F.v10352) > INT64_C(1))) && Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v10352))])))).f_closed))) {
Y_TICK();
F.v10352 = y_range(y_sub(Y_DEFI(F.v10352), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
{ rt_int rv10356 = Y_DEFI(F.v10352);
y_use = F.yu; return rv10356; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3915_MonitorPath(void * a_p3916) {
struct yf3917 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3916 = a_p3916;
{ rt_int rv10361 = yr3530_Join(yr1061_T(y_str("&", 1)), yr2457_Path(Y_DEFI(((*(yR125 *)y_deref(F.p3916))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p3916))).f_cname)), INT64_C(0));
y_use = F.yu; return rv10361; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3921_EnterMonitor(void * a_p3922) {
struct yf3923 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3922 = a_p3922;
F.v10365 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3922))).f_kind) == v876)) {
((*(yR125 *)y_deref(F.p3922))).f_monitor = Y_DEFP(v1892);
Y_FLUSH();
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p3922))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3915_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3922))).f_monitor)), yr1061_T(y_str(");", 2))));
Y_FLUSH();
F.v10365 = yr1200_Fresh(y_str("mf", 2));
Y_FLUSH();
v1703 = 1;
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v10365), yr1061_T(y_str(";", 1))));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("if (!RT_TRY(", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10365));
Y_FLUSH();
yr1037_SA(y_str(")) { RT_POP(", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10365));
Y_FLUSH();
yr1037_SA(y_str("); ", 3));
Y_FLUSH();
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3922))).f_kind) == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
Y_FLUSH();
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
Y_FLUSH();
}
yr1044_ST(yr3915_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3922))).f_monitor)));
Y_FLUSH();
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
Y_FLUSH();
yr1132_Emit(yr1056_SE());
Y_FLUSH();
v1599 = y_range(y_add(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(v1572).p)[y_ix1(v1572, Y_DEFI(v1599))] = Y_DEFI(F.v10365);
Y_FLUSH();
((rt_int *)(v1583).p)[y_ix1(v1583, Y_DEFI(v1599))] = INT64_C(0);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3927_LeaveMonitor(void) {
struct yf3928 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_kind) == v885)) {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3915_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_monitor)), yr1061_T(y_str(");", 2))));
Y_FLUSH();
} else {
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3915_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_monitor)), yr1061_T(y_str(");", 2))));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3932_TerminateStatement(void * a_p3933) {
struct yf3934 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3933 = a_p3933;
if ((((Y_DEFP(v1674) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_kind) == v885))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3933))).f_line), y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
Y_FLUSH();
}
yr3889_AwaitProcesses();
Y_FLUSH();
yr3927_LeaveMonitor();
Y_FLUSH();
yr3418_PopTo(Y_DEFI(v1602));
Y_FLUSH();
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3938_DeclareSignal(void * a_p3939, rt_int a_p3940) {
struct yf3941 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3939 = a_p3939;
F.p3940 = a_p3940;
if ((Y_DEFP(v1892) == ((void *)0))) {
yr1178_FailS(F.p3940, y_str("signal variables are declared in a monitor (X.E.4)", 50));
Y_FLUSH();
}
((*(yR125 *)y_deref(F.p3939))).f_rep = yr2496_CopyRep(Y_DEFP(((*(yR125 *)y_deref(F.p3939))).f_rep));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3939))).f_rep)))).f_monitor = Y_DEFP(v1892);
Y_FLUSH();
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2477_SymPath(F.p3939), yr3530_Join(yr1061_T(y_str(", ", 2)), yr3915_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2)))));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3945_DeclareSignalArray(void * a_p3946, rt_int a_p3947) {
struct yf3948 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3946 = a_p3946;
F.p3947 = a_p3947;
if ((Y_DEFP(v1892) == ((void *)0))) {
yr1178_FailS(F.p3947, y_str("signal variables are declared in a monitor (X.E.4)", 50));
Y_FLUSH();
}
yr1132_Emit(yr3530_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2557_DescOf(Y_DEFP(((*(yR125 *)y_deref(F.p3946))).f_rep)), yr3530_Join(yr1061_T(y_str(", &", 3)), yr2477_SymPath(F.p3946), yr3530_Join(yr1061_T(y_str(", ", 2)), yr3915_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2))))));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3952_DeviceSignal(void * a_p3953, void * a_p3954) {
struct yf3955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3953 = a_p3953;
F.p3954 = a_p3954;
F.v10409 = Y_UNDEF_I;
F.v10411 = Y_UNDEF_I;
F.v10413 = Y_UNDEF_I;
yr2959_Manifest(F.p3954, &F.v10409, &F.v10411);
Y_FLUSH();
if ((!Y_DEFI(F.v10409))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3954))).f_line), y_str("an AT location is a manifest constant (XIV.VII)", 47));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_device(&", 10));
Y_FLUSH();
yr1044_ST(yr2477_SymPath(F.p3953));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v10411));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
F.v10413 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v10413));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3959_Arg(void * a_p3960, rt_int a_p3961) {
struct yf3962 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3960 = a_p3960;
F.p3961 = a_p3961;
F.v10422 = Y_UNDEF_P;
F.v10422 = Y_DEFP(((*(yR105 *)y_deref(F.p3960))).f_a);
F.v10424 = Y_UNDEF_I;
F.v10424 = INT64_C(1);
while ((((!(Y_DEFP(F.v10422) == ((void *)0)))) && ((Y_DEFI(F.v10424) < F.p3961)))) {
Y_TICK();
F.v10422 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10422)))).f_next);
Y_FLUSH();
F.v10424 = y_range(y_add(Y_DEFI(F.v10424), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFP(F.v10422) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3960))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3960))).f_name), y_str(": too few actual parameters", 27));
Y_FLUSH();
}
{ void * rv10429 = Y_DEFP(F.v10422);
y_use = F.yu; return rv10429; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3966_NArgs(void * a_p3967, rt_int a_p3968) {
struct yf3969 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3967 = a_p3967;
F.p3968 = a_p3968;
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3967))).f_a)) == F.p3968))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3967))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3967))).f_name), y_str(": the number of actual parameters is wrong", 42));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3973_Call1(yarr a_p3975, rt_int a_p3976) {
struct yf3977 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3975 = a_p3975;
F.p3976 = a_p3976;
yr1026_SB();
Y_FLUSH();
yr1037_SA(F.p3975);
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(F.p3976);
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv10439 = yr1056_SE();
y_use = F.yu; return rv10439; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3981_Addr(rt_int a_p3982) {
struct yf3983 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3982 = a_p3982;
{ rt_int rv10444 = yr3530_Join(yr1061_T(y_str("&", 1)), F.p3982, INT64_C(0));
y_use = F.yu; return rv10444; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3987_StdVar(void * a_p3988, rt_int a_p3989, rt_int * a_p3990, void * * a_p3991) {
struct yf3992 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3988 = a_p3988;
F.p3989 = a_p3989;
F.p3990_o = a_p3990;
F.p3991_o = a_p3991;
F.v10451 = Y_UNDEF_I;
yr3080_LValue(F.p3988, &F.p3990, &F.p3991);
Y_FLUSH();
yr3585_NoteWrite(F.p3988);
Y_FLUSH();
if ((((!(F.p3989 == v858))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3991)))).f_kind) == F.p3989))))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("a ", 2));
Y_FLUSH();
if ((F.p3989 == v831)) {
yr1037_SA(y_str("file", 4));
Y_FLUSH();
} else if ((F.p3989 == v837)) {
yr1037_SA(y_str("signal", 6));
Y_FLUSH();
} else if ((F.p3989 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
Y_FLUSH();
} else if ((F.p3989 == v828)) {
yr1037_SA(y_str("pointer", 7));
Y_FLUSH();
} else {
yr1037_SA(y_str("variable", 8));
Y_FLUSH();
}
yr1037_SA(y_str(" is needed here", 15));
Y_FLUSH();
F.v10451 = yr1056_SE();
Y_FLUSH();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p3988))).f_line), Y_DEFI(F.v10451));
Y_FLUSH();
}
(*F.p3990_o) = F.p3990;
(*F.p3991_o) = F.p3991;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3996_NumArg(void * a_p3997, rt_int * a_p3998, void * * a_p3999) {
struct yf4000 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3997 = a_p3997;
F.p3998_o = a_p3998;
F.p3999_o = a_p3999;
yr3107_Expr(F.p3997, ((void *)0), &F.p3998, &F.p3999);
Y_FLUSH();
if ((!yr2508_IsNumeric(Y_DEFP(F.p3999)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3997))).f_line), y_str("a number is needed here", 23));
Y_FLUSH();
}
(*F.p3998_o) = F.p3998;
(*F.p3999_o) = F.p3999;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4004_IntArg(void * a_p4005) {
struct yf4006 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4005 = a_p4005;
F.v10467 = Y_UNDEF_I;
F.v10469 = Y_UNDEF_P;
yr3107_Expr(F.p4005, Y_DEFP(v1342), &F.v10467, &F.v10469);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10469)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4005))).f_line), y_str("an integer is needed here", 25));
Y_FLUSH();
}
{ rt_int rv10471 = Y_DEFI(F.v10467);
y_use = F.yu; return rv10471; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4010_CodeInsert(void * a_p4011) {
struct yf4012 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4011 = a_p4011;
F.v10475 = Y_UNDEF_P;
F.v10475 = yr3959_Arg(F.p4011, INT64_C(1));
F.v10478 = Y_UNDEF_I;
F.v10480 = Y_UNDEF_I;
F.v10482 = Y_UNDEF_I;
F.v10484 = Y_UNDEF_I;
F.v10486 = Y_UNDEF_I;
F.v10488 = Y_UNDEF_I;
F.v10490 = Y_UNDEF_B;
F.v10492 = Y_UNDEF_P;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_10501, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_10501, &F.v10503);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10475)))).f_kind) == v771))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4011))).f_line), y_str("a code insert takes a string literal (XIV.XI.5)", 47));
Y_FLUSH();
}
F.v10478 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10475)))).f_text);
Y_FLUSH();
F.v10488 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10478))]);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
F.v10484 = INT64_C(1);
Y_FLUSH();
while ((Y_DEFI(F.v10484) <= Y_DEFI(F.v10488))) {
Y_TICK();
F.v10490 = yr1103_TChar(Y_DEFI(F.v10478), Y_DEFI(F.v10484));
Y_FLUSH();
if ((Y_DEFB(F.v10490) == 39)) {
F.v10486 = y_range(y_add(Y_DEFI(F.v10484), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((((Y_DEFI(F.v10486) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10478))]))) && ((!(yr1103_TChar(Y_DEFI(F.v10478), Y_DEFI(F.v10486)) == 39))))) {
Y_TICK();
F.v10486 = y_range(y_add(Y_DEFI(F.v10486), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if ((Y_DEFI(F.v10486) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10478))]))) {
v941 = INT64_C(0);
Y_FLUSH();
v955 = INT64_C(0);
Y_FLUSH();
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4011))).f_line), y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
Y_FLUSH();
}
F.v10480 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10478))]), Y_DEFI(F.v10484)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10486), Y_DEFI(F.v10484))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, yr2942_CharValue(Y_DEFP(v1346), Y_DEFI(F.v10480), Y_DEFI(((*(yR105 *)y_deref(F.p4011))).f_line)))]));
Y_FLUSH();
F.v10484 = y_range(y_add(Y_DEFI(F.v10486), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
} else if ((Y_DEFB(F.v10490) == 36)) {
F.v10486 = y_range(y_add(Y_DEFI(F.v10484), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((((Y_DEFI(F.v10486) <= Y_DEFI(F.v10488))) && ((yr1008_IsLetter(yr1103_TChar(Y_DEFI(F.v10478), Y_DEFI(F.v10486))) || yr1014_IsDigit(yr1103_TChar(Y_DEFI(F.v10478), Y_DEFI(F.v10486))))))) {
Y_TICK();
F.v10486 = y_range(y_add(Y_DEFI(F.v10486), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v10480 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10478))]), Y_DEFI(F.v10484)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10486), Y_DEFI(F.v10484))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v10492 = yr2378_Find(Y_DEFI(F.v10480));
Y_FLUSH();
if ((Y_DEFP(F.v10492) == ((void *)0))) {
v941 = INT64_C(0);
Y_FLUSH();
v955 = INT64_C(0);
Y_FLUSH();
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4011))).f_line), Y_DEFI(F.v10480), y_str(" in a code insert is not declared here", 38));
Y_FLUSH();
}
F.v10492 = yr2483_Real(Y_DEFP(F.v10492));
Y_FLUSH();
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10492)))).f_kind) == v861))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10492)))).f_kind) == v864))))) {
v941 = INT64_C(0);
Y_FLUSH();
v955 = INT64_C(0);
Y_FLUSH();
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4011))).f_line), Y_DEFI(F.v10480), y_str(" in a code insert is not a variable or constant", 47));
Y_FLUSH();
}
yr1044_ST(yr3088_Paren(yr2477_SymPath(Y_DEFP(F.v10492))));
Y_FLUSH();
F.v10484 = Y_DEFI(F.v10486);
Y_FLUSH();
} else {
yr1031_SC(Y_DEFB(F.v10490));
Y_FLUSH();
F.v10484 = y_range(y_add(Y_DEFI(F.v10484), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
}
F.v10482 = yr1056_SE();
Y_FLUSH();
yr1132_Emit(Y_DEFI(F.v10482));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4016_ManifestScale(void * a_p4017, void * a_p4018) {
struct yf4019 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4017 = a_p4017;
F.p4018 = a_p4018;
F.v10542 = Y_UNDEF_I;
F.v10544 = Y_UNDEF_I;
F.v10546 = Y_UNDEF_I;
F.v10548 = Y_UNDEF_P;
yr3025_ManifestFix(F.p4017, &F.v10542, &F.v10544, &F.v10546);
Y_FLUSH();
if (((!Y_DEFI(F.v10542)) || ((Y_DEFI(F.v10544) <= INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4018))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4018))).f_name), y_str(": the scale is a positive manifest constant (XI)", 48));
Y_FLUSH();
}
F.v10548 = yr2496_CopyRep(Y_DEFP(v1356));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.v10548)))).f_abstract = 0;
Y_FLUSH();
yr2698_SetScale(Y_DEFP(F.v10548), Y_DEFI(F.v10544), Y_DEFI(F.v10546));
Y_FLUSH();
{ void * rv10552 = Y_DEFP(F.v10548);
y_use = F.yu; return rv10552; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4023_StdCall(rt_int a_p4024, void * a_p4025, rt_int a_p4026, rt_int * a_p4027, void * * a_p4028) {
struct yf4029 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4024 = a_p4024;
F.p4025 = a_p4025;
F.p4026 = a_p4026;
F.p4027_o = a_p4027;
F.p4028_o = a_p4028;
F.v10560 = Y_UNDEF_P;
F.v10562 = Y_UNDEF_I;
F.v10564 = Y_UNDEF_I;
F.v10566 = Y_UNDEF_I;
F.v10568 = Y_UNDEF_I;
F.v10570 = Y_UNDEF_I;
F.v10572 = Y_UNDEF_P;
F.v10574 = Y_UNDEF_P;
F.v10576 = Y_UNDEF_P;
F.v10578 = Y_UNDEF_P;
F.v10580 = Y_UNDEF_I;
F.v10582 = Y_UNDEF_I;
F.v10584 = Y_UNDEF_I;
F.v10586 = Y_UNDEF_I;
F.v10588 = Y_UNDEF_P;
F.v10590 = Y_UNDEF_I;
F.p4028 = Y_DEFP(v1348);
Y_FLUSH();
F.p4027 = yr1061_T(y_str("((void)0)", 9));
Y_FLUSH();
F.v10590 = (((((((((((((((((F.p4024 == v1384)) || ((F.p4024 == v1387))) || ((F.p4024 == v1390))) || ((F.p4024 == v1393))) || ((F.p4024 == v1396))) || ((F.p4024 == v1402))) || ((F.p4024 == v1411))) || ((F.p4024 == v1417))) || ((F.p4024 == v1420))) || ((F.p4024 == v1444))) || ((F.p4024 == v1447))) || ((F.p4024 == v1456))) || ((F.p4024 == v1459))) || ((F.p4024 == v1462))) || ((F.p4024 == v1465))) || ((F.p4024 == v1474)));
Y_FLUSH();
if ((F.p4026 && (!Y_DEFI(F.v10590)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_name), y_str(" returns a value: it is called in an expression", 47));
Y_FLUSH();
}
if (((!F.p4026) && Y_DEFI(F.v10590))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_name), y_str(" returns no value", 17));
Y_FLUSH();
}
if ((((F.p4024 == v1366)) || ((F.p4024 == v1369)))) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
yr3107_Expr(yr3959_Arg(F.p4025, INT64_C(1)), ((void *)0), &F.v10562, &F.v10572);
Y_FLUSH();
if ((!yr2514_IsArrayLike(Y_DEFP(F.v10572)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_name), y_str(" of something that is not an array", 34));
Y_FLUSH();
}
F.v10564 = yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(2)));
Y_FLUSH();
yr2959_Manifest(yr3959_Arg(F.p4025, INT64_C(2)), &F.v10586, &F.v10584);
Y_FLUSH();
F.p4028 = yr3190_Unbounded(Y_DEFP(v1342));
Y_FLUSH();
if ((Y_DEFI(F.v10586) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v822)))) {
if ((((Y_DEFI(F.v10584) < INT64_C(1))) || ((Y_DEFI(F.v10584) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_nidx))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("no such dimension", 17));
Y_FLUSH();
}
F.v10578 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_idx);
Y_FLUSH();
F.lo10604 = INT64_C(2);
F.hi10605 = Y_DEFI(F.v10584);
{ rt_int hi10609 = F.hi10605;
for (rt_int i10608 = F.lo10604; i10608 <= hi10609; i10608++) { F.c_10607 = i10608; Y_TICK();
F.v10578 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10578)))).f_link);
Y_FLUSH();
if (i10608 == hi10609) break;
}}
F.p4028 = Y_DEFP(F.v10578);
Y_FLUSH();
}
if ((F.p4024 == v1366)) {
F.p4027 = yr3196_Call2(y_str("y_low", 5), Y_DEFI(F.v10562), Y_DEFI(F.v10564));
Y_FLUSH();
} else {
F.p4027 = yr3196_Call2(y_str("y_high", 6), Y_DEFI(F.v10562), Y_DEFI(F.v10564));
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((((((F.p4024 == v1372)) || ((F.p4024 == v1375))) || ((F.p4024 == v1378))) || ((F.p4024 == v1381)))) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3107_Expr(yr3959_Arg(F.p4025, INT64_C(1)), ((void *)0), &F.v10562, &F.v10572);
Y_FLUSH();
if ((!yr2502_IsDiscrete(Y_DEFP(F.v10572)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_name), y_str(" of something that is not integer or scalar", 43));
Y_FLUSH();
}
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v813)) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_ordered)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_name), y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
Y_FLUSH();
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem) == ((void *)0)))) {
F.v10572 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem);
Y_FLUSH();
}
if ((((((F.p4024 == v1378)) || ((F.p4024 == v1381)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v804)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
Y_FLUSH();
}
if ((F.p4024 == v1378)) {
F.p4028 = Y_DEFP(F.v10572);
Y_FLUSH();
F.p4027 = yr2632_LoText(Y_DEFP(F.v10572));
Y_FLUSH();
} else if ((F.p4024 == v1381)) {
F.p4028 = Y_DEFP(F.v10572);
Y_FLUSH();
F.p4027 = yr2638_HiText(Y_DEFP(F.v10572));
Y_FLUSH();
} else {
F.p4028 = yr3190_Unbounded(Y_DEFP(F.v10572));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v804))) {
yr1037_SA(y_str("y_range(", 8));
Y_FLUSH();
}
if ((F.p4024 == v1372)) {
yr1037_SA(y_str("y_add(", 6));
Y_FLUSH();
} else {
yr1037_SA(y_str("y_sub(", 6));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", 1)", 4));
Y_FLUSH();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v804))) {
yr1037_SA(y_str(", 0, ", 5));
Y_FLUSH();
yr1050_SI(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
}
F.p4027 = yr1056_SE();
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1384)) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v828, &F.v10562, &F.v10572);
Y_FLUSH();
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_forward), y_str(" is not declared", 16));
Y_FLUSH();
}
F.v10578 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(" = y_new_l(sizeof(", 18));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str("), ", 3));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(");", 2));
Y_FLUSH();
if ((yr2526_Deep(Y_DEFP(F.v10578)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10578)))).f_kind) == v825)))) {
yr1037_SA(y_str(" y_initu(", 9));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(", y_deref(", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str("));", 3));
Y_FLUSH();
} else if ((!(yr3136_UndefValue(Y_DEFP(F.v10578)) == INT64_C(0)))) {
yr1037_SA(y_str(" *(", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(" *)y_deref(", 11));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(") = ", 4));
Y_FLUSH();
yr1044_ST(yr3136_UndefValue(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
}
yr1037_SA(y_str(" })", 3));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1462)) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v828, &F.v10562, &F.v10572);
Y_FLUSH();
F.p4027 = yr3530_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), Y_DEFI(F.v10562), yr1061_T(y_str("))", 2)));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1387)) {
yr3966_NArgs(F.p4025, INT64_C(3));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v831, &F.v10562, &F.v10572);
Y_FLUSH();
yr3107_Expr(yr3959_Arg(F.p4025, INT64_C(2)), Y_DEFP(v1346), &F.v10564, &F.v10574);
Y_FLUSH();
if ((!yr2520_IsString(Y_DEFP(F.v10574)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("OPEN takes the name of the file as a string (XII.A)", 51));
Y_FLUSH();
}
yr3107_Expr(yr3959_Arg(F.p4025, INT64_C(3)), Y_DEFP(v1957), &F.v10566, &F.v10576);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFP(v1957), Y_DEFP(F.v10576));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_open(&", 8));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10564));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10566));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((((F.p4024 == v1390)) || ((F.p4024 == v1399)))) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v831, &F.v10562, &F.v10572);
Y_FLUSH();
if ((F.p4024 == v1390)) {
F.p4027 = yr3973_Call1(y_str("y_close", 7), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
} else {
F.p4028 = Y_DEFP(v1344);
Y_FLUSH();
F.p4027 = yr3973_Call1(y_str("y_check_eof", 11), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1393)) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v831, &F.v10562, &F.v10572);
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(2)), v858, &F.v10564, &F.v10574);
Y_FLUSH();
F.v10578 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFP(F.v10578), Y_DEFP(F.v10574));
Y_FLUSH();
if (yr2545_NonAssignable(Y_DEFP(F.v10578))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(" g; ", 4));
Y_FLUSH();
if (yr2526_Deep(Y_DEFP(F.v10578))) {
yr1037_SA(y_str("y_init(", 7));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(", &g); ", 7));
Y_FLUSH();
}
yr1037_SA(y_str("y_get_value(&", 13));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(", &g); ", 7));
Y_FLUSH();
yr1044_ST(yr3048_StoreText(Y_DEFI(F.v10564), Y_DEFP(F.v10574), yr1061_T(y_str("g", 1)), Y_DEFP(F.v10578), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line)));
Y_FLUSH();
yr1037_SA(y_str(" })", 3));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1396)) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v831, &F.v10562, &F.v10572);
Y_FLUSH();
F.v10578 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem);
Y_FLUSH();
yr3107_Expr(yr3959_Arg(F.p4025, INT64_C(2)), Y_DEFP(F.v10578), &F.v10564, &F.v10574);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFP(F.v10578), Y_DEFP(F.v10574));
Y_FLUSH();
if (yr2545_NonAssignable(Y_DEFP(F.v10578))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ ", 3));
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(" pv = ", 6));
Y_FLUSH();
yr1044_ST(yr3040_Convert(Y_DEFI(F.v10564), Y_DEFP(F.v10578), Y_DEFP(F.v10574)));
Y_FLUSH();
yr1037_SA(y_str("; y_put_value(&", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(", &pv); })", 10));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1402)) {
F.v10580 = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p4025))).f_a));
Y_FLUSH();
if ((((Y_DEFI(F.v10580) < INT64_C(5))) || ((!((y_mod((y_sub(Y_DEFI(F.v10580), INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("MOVE takes an object, an index and triples", 42));
Y_FLUSH();
}
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v858, &F.v10562, &F.v10572);
Y_FLUSH();
if (((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v843))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_nidx) == INT64_C(1)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("MOVE works on one-dimensional arrays", 36));
Y_FLUSH();
}
F.v10564 = yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(2)));
Y_FLUSH();
F.v10570 = yr1200_Fresh(y_str("at", 2));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("({ rt_int ", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10570));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10564));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
F.v10582 = INT64_C(3);
Y_FLUSH();
while ((Y_DEFI(F.v10582) < Y_DEFI(F.v10580))) {
Y_TICK();
yr3107_Expr(yr3959_Arg(F.p4025, Y_DEFI(F.v10582)), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem), &F.v10566, &F.v10576);
Y_FLUSH();
if (((!yr2514_IsArrayLike(Y_DEFP(F.v10576))) || (!yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10576)))).f_elem))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("MOVE: the components differ in type", 35));
Y_FLUSH();
}
F.v10568 = yr4004_IntArg(yr3959_Arg(F.p4025, y_range(y_add(Y_DEFI(F.v10582), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
Y_FLUSH();
F.v10564 = yr4004_IntArg(yr3959_Arg(F.p4025, y_range(y_add(Y_DEFI(F.v10582), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(F.p4027));
Y_FLUSH();
yr1037_SA(y_str(" { rt_int mi = ", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10568));
Y_FLUSH();
yr1037_SA(y_str(", mj = ", 7));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10564));
Y_FLUSH();
yr1037_SA(y_str("; y_move(&", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10570));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10566));
Y_FLUSH();
yr1037_SA(y_str(", mi, mj, ", 10));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem)));
Y_FLUSH();
yr1037_SA(y_str("); if (mj >= mi) ", 17));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10570));
Y_FLUSH();
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
F.v10582 = y_range(y_add(Y_DEFI(F.v10582), INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.p4027 = yr3530_Join(Y_DEFI(F.p4027), yr1061_T(y_str(" })", 3)), INT64_C(0));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((((F.p4024 == v1405)) || ((F.p4024 == v1408)))) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
F.v10562 = yr3500_Cond(yr3959_Arg(F.p4025, INT64_C(1)));
Y_FLUSH();
F.v10564 = yr3500_Cond(yr3959_Arg(F.p4025, INT64_C(2)));
Y_FLUSH();
F.p4028 = Y_DEFP(v1344);
Y_FLUSH();
if ((F.p4024 == v1405)) {
F.p4027 = yr3213_Infix(yr3088_Paren(yr3213_Infix(Y_DEFI(F.v10562), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr3088_Paren(yr3213_Infix(Y_DEFI(F.v10564), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
Y_FLUSH();
} else {
F.p4027 = yr3213_Infix(yr3088_Paren(yr3213_Infix(Y_DEFI(F.v10562), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr3088_Paren(yr3213_Infix(Y_DEFI(F.v10564), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1411)) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
F.p4027 = yr3973_Call1(y_str("rt_delay", 8), yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(1))));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1414)) {
yr3966_NArgs(F.p4025, INT64_C(0));
Y_FLUSH();
F.p4028 = yr3190_Unbounded(Y_DEFP(v1342));
Y_FLUSH();
F.p4027 = yr1061_T(y_str("rt_time()", 9));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if (((((F.p4024 == v1417)) || ((F.p4024 == v1420))) || ((F.p4024 == v1423)))) {
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v837, &F.v10562, &F.v10572);
Y_FLUSH();
if ((F.p4024 == v1417)) {
if ((yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p4025))).f_a)) == INT64_C(1))) {
F.v10564 = yr1061_T(y_str("1", 1));
Y_FLUSH();
} else {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
F.v10564 = yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(2)));
Y_FLUSH();
}
F.p4027 = yr3196_Call2(y_str("y_wait", 6), yr3981_Addr(Y_DEFI(F.v10562)), Y_DEFI(F.v10564));
Y_FLUSH();
} else {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
if ((F.p4024 == v1420)) {
F.p4027 = yr3973_Call1(y_str("y_send", 6), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
} else {
F.p4028 = Y_DEFP(v1344);
Y_FLUSH();
F.p4027 = yr3973_Call1(y_str("y_awaited", 9), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
}
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if (((((F.p4024 == v1426)) || ((F.p4024 == v1429))) || ((F.p4024 == v1432)))) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3996_NumArg(yr3959_Arg(F.p4025, INT64_C(1)), &F.v10562, &F.v10572);
Y_FLUSH();
F.p4028 = yr3190_Unbounded(Y_DEFP(v1342));
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v804)) {
F.p4027 = Y_DEFI(F.v10562);
Y_FLUSH();
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v807)) {
yr1026_SB();
Y_FLUSH();
if ((F.p4024 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
Y_FLUSH();
} else if ((F.p4024 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
Y_FLUSH();
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
Y_FLUSH();
}
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", INT64_C(", 10));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_fsn));
Y_FLUSH();
yr1037_SA(y_str("), INT64_C(", 11));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_fsd));
Y_FLUSH();
yr1037_SA(y_str("))", 2));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
} else if ((F.p4024 == v1426)) {
F.p4027 = yr3973_Call1(y_str("y_floor", 7), Y_DEFI(F.v10562));
Y_FLUSH();
} else if ((F.p4024 == v1429)) {
F.p4027 = yr3973_Call1(y_str("y_ceiling", 9), Y_DEFI(F.v10562));
Y_FLUSH();
} else {
F.p4027 = yr3973_Call1(y_str("y_near_integer", 14), Y_DEFI(F.v10562));
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1438)) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3996_NumArg(yr3959_Arg(F.p4025, INT64_C(1)), &F.v10562, &F.v10572);
Y_FLUSH();
F.p4028 = Y_DEFP(v1354);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v807)) {
F.p4027 = yr3242_FixToFloat(Y_DEFI(F.v10562), Y_DEFP(F.v10572));
Y_FLUSH();
} else {
F.p4027 = yr3530_Join(yr1061_T(y_str("((double)(", 10)), Y_DEFI(F.v10562), yr1061_T(y_str("))", 2)));
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1435)) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
yr3996_NumArg(yr3959_Arg(F.p4025, INT64_C(1)), &F.v10562, &F.v10572);
Y_FLUSH();
F.p4028 = yr4016_ManifestScale(yr3959_Arg(F.p4025, INT64_C(2)), F.p4025);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v810)) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_fix_of_float(", 15));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", INT64_C(", 10));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p4028)))).f_fsn));
Y_FLUSH();
yr1037_SA(y_str("), INT64_C(", 11));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p4028)))).f_fsd));
Y_FLUSH();
yr1037_SA(y_str("))", 2));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v804)) {
F.v10576 = yr2496_CopyRep(Y_DEFP(v1356));
Y_FLUSH();
yr2698_SetScale(Y_DEFP(F.v10576), INT64_C(1), INT64_C(1));
Y_FLUSH();
F.v10562 = yr3530_Join(yr1061_T(y_str("((yfix)(", 8)), Y_DEFI(F.v10562), yr1061_T(y_str("))", 2)));
Y_FLUSH();
} else {
F.v10576 = Y_DEFP(F.v10572);
Y_FLUSH();
}
yr2681_ScaleRatio(Y_DEFP(F.v10576), Y_DEFP(F.p4028), &F.v10568, &F.v10570, &F.v10586);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_fix_near(", 11));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10568));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10570));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1441)) {
yr3966_NArgs(F.p4025, INT64_C(3));
Y_FLUSH();
yr3996_NumArg(yr3959_Arg(F.p4025, INT64_C(1)), &F.v10562, &F.v10572);
Y_FLUSH();
yr3996_NumArg(yr3959_Arg(F.p4025, INT64_C(2)), &F.v10564, &F.v10574);
Y_FLUSH();
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v807))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10574)))).f_kind) == v807))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
Y_FLUSH();
}
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFP(F.v10572), Y_DEFP(F.v10574));
Y_FLUSH();
F.p4028 = yr4016_ManifestScale(yr3959_Arg(F.p4025, INT64_C(3)), F.p4025);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p4028)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_tid);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(F.p4028)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_tname);
Y_FLUSH();
F.v10576 = yr2496_CopyRep(Y_DEFP(v1356));
Y_FLUSH();
yr2698_SetScale(Y_DEFP(F.v10576), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10574)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p4028)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line)), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10574)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p4028)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line)));
Y_FLUSH();
yr2681_ScaleRatio(Y_DEFP(F.v10572), Y_DEFP(F.v10576), &F.v10568, &F.v10570, &F.v10586);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_fix_div(", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10564));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10568));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10570));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
F.p4027 = yr1056_SE();
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1450)) {
v1706 = y_range(y_add(Y_DEFI(v1706), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
if (((((F.p4024 == v1444)) || ((F.p4024 == v1447))) || ((F.p4024 == v1450)))) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v840, &F.v10562, &F.v10572);
Y_FLUSH();
if ((F.p4024 == v1444)) {
F.p4027 = yr3973_Call1(y_str("rt_region_enter", 15), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
} else if ((F.p4024 == v1447)) {
F.p4027 = yr3973_Call1(y_str("rt_region_leave", 15), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
} else {
F.p4028 = Y_DEFP(v1344);
Y_FLUSH();
F.p4027 = yr3973_Call1(y_str("y_cond_claim", 12), yr3981_Addr(Y_DEFI(F.v10562)));
Y_FLUSH();
}
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1453)) {
yr3966_NArgs(F.p4025, INT64_C(0));
Y_FLUSH();
F.p4028 = yr3190_Unbounded(Y_DEFP(v1342));
Y_FLUSH();
F.p4027 = yr1061_T(y_str("y_self()", 8));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1456)) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
F.p4027 = yr3196_Call2(y_str("y_change_priority", 17), yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(1))), yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(2))));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1459)) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
F.p4027 = yr3973_Call1(y_str("y_raise_termination", 19), yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(1))));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1465)) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
yr4010_CodeInsert(F.p4025);
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((((F.p4024 == v1468)) || ((F.p4024 == v1471)))) {
yr3966_NArgs(F.p4025, INT64_C(1));
Y_FLUSH();
F.v10588 = yr3959_Arg(F.p4025, INT64_C(1));
Y_FLUSH();
yr3107_Expr(Y_DEFP(F.v10588), ((void *)0), &F.v10562, &F.v10572);
Y_FLUSH();
if ((F.p4024 == v1471)) {
F.p4028 = yr3190_Unbounded(Y_DEFP(v1342));
Y_FLUSH();
F.p4027 = yr2907_ExtentCode(Y_DEFI(F.v10562), Y_DEFP(F.v10572));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
F.p4028 = Y_DEFP(v1959);
Y_FLUSH();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v855)) {
F.p4027 = yr3530_Join(yr1061_T(y_str("y_addr_s(", 9)), Y_DEFI(F.v10562), yr1061_T(y_str(")", 1)));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10588)))).f_kind) == v777)) {
F.v10560 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10588)))).f_name));
Y_FLUSH();
if ((!(Y_DEFP(F.v10560) == ((void *)0)))) {
if (yr2431_Resolved(Y_DEFP(F.v10560))) {
F.v10560 = yr2483_Real(Y_DEFP(F.v10560));
Y_FLUSH();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10560)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10560)))).f_kind) == v864)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10560)))).f_at) >= INT64_C(0))))) {
F.p4027 = yr3312_Num(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10560)))).f_at));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
}
}
}
if (((!((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10588)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10588)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10588)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10588)))).f_kind) == v789))))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_kind) == v846)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
Y_FLUSH();
}
F.p4027 = yr2879_AddrCode(Y_DEFP(F.v10588), Y_DEFI(F.v10562), Y_DEFP(F.v10572));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1474)) {
yr3966_NArgs(F.p4025, INT64_C(2));
Y_FLUSH();
yr3987_StdVar(yr3959_Arg(F.p4025, INT64_C(1)), v828, &F.v10562, &F.v10572);
Y_FLUSH();
F.v10564 = yr4004_IntArg(yr3959_Arg(F.p4025, INT64_C(2)));
Y_FLUSH();
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_forward), y_str(" is not declared", 16));
Y_FLUSH();
}
F.v10578 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10572)))).f_elem);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10562));
Y_FLUSH();
yr1037_SA(y_str(" = y_make_ptr(", 14));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v10564));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2861_LayLit(Y_DEFP(F.v10578)));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10578)));
Y_FLUSH();
if (yr2873_WordExact(Y_DEFP(F.v10578))) {
yr1037_SA(y_str(", 1))", 5));
Y_FLUSH();
} else {
yr1037_SA(y_str(", 0))", 5));
Y_FLUSH();
}
F.p4027 = yr1056_SE();
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
}
if ((F.p4024 == v1477)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
Y_FLUSH();
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4025))).f_name), y_str(" is not translated", 18));
Y_FLUSH();
(*F.p4027_o) = F.p4027;
(*F.p4028_o) = F.p4028;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4033_ArgCount(void) {
struct yf4034 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10818 = Y_UNDEF_I;
(F.v10818) = rt_argc();
((void)0);
Y_FLUSH();
{ rt_int rv10819 = Y_DEFI(F.v10818);
y_use = F.yu; return rv10819; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4038_ArgTxt(rt_int a_p4039) {
struct yf4040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4039 = a_p4039;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_10830, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10830, &F.v10832);
F.v10834 = Y_UNDEF_I;
{ rstr s = rt_arg((F.p4039)); (F.v10834) = s.len > 4096 ? 4096 : s.len; memcpy((F.v10832).p, s.p, (size_t)(F.v10834)); }
((void)0);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
F.lo10838 = INT64_C(1);
F.hi10839 = Y_DEFI(F.v10834);
{ rt_int hi10843 = F.hi10839;
for (rt_int i10842 = F.lo10838; i10842 <= hi10843; i10842++) { F.c_10841 = i10842; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10832).p)[y_ix1(F.v10832, F.c_10841)]));
Y_FLUSH();
if (i10842 == hi10843) break;
}}
{ rt_int rv10844 = yr1056_SE();
y_use = F.yu; return rv10844; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4044_ReadArgs(void) {
struct yf4045 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10847 = Y_UNDEF_I;
F.v10847 = yr4033_ArgCount();
F.v10849 = Y_UNDEF_I;
F.v10851 = Y_UNDEF_P;
F.v10851 = ((void *)0);
F.v10853 = Y_UNDEF_P;
F.v10853 = ((void *)0);
if ((Y_DEFI(F.v10847) == INT64_C(1))) {
y_use = F.yu; return;
}
if ((Y_DEFI(F.v10847) < INT64_C(3))) {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
Y_FLUSH();
}
F.v10849 = yr4038_ArgTxt(INT64_C(1));
Y_FLUSH();
v1717 = yr4038_ArgTxt(INT64_C(2));
Y_FLUSH();
if (yr1088_TEq(Y_DEFI(F.v10849), yr1061_T(y_str("-i", 2)))) {
v1714 = v1504;
Y_FLUSH();
} else if (yr1088_TEq(Y_DEFI(F.v10849), yr1061_T(y_str("-c", 2)))) {
v1714 = v1507;
Y_FLUSH();
} else if (yr1088_TEq(Y_DEFI(F.v10849), yr1061_T(y_str("-l", 2)))) {
v1714 = v1510;
Y_FLUSH();
F.lo10868 = INT64_C(3);
F.hi10869 = y_sub(Y_DEFI(F.v10847), INT64_C(1));
{ rt_int hi10873 = F.hi10869;
for (rt_int i10872 = F.lo10868; i10872 <= hi10873; i10872++) { F.c_10871 = i10872; Y_TICK();
F.v10851 = yr2029_NewNode(v669, INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v10851)))).f_name = yr1075_Name(yr4038_ArgTxt(y_range(F.c_10871, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
Y_FLUSH();
yr2036_Link(&v1720, &F.v10853, Y_DEFP(F.v10851));
Y_FLUSH();
if (i10872 == hi10873) break;
}}
} else {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4049_LibPath(rt_int a_p4050, yarr a_p4052) {
struct yf4053 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4050 = a_p4050;
F.p4052 = a_p4052;
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(v1717));
Y_FLUSH();
yr1037_SA(y_str("/", 1));
Y_FLUSH();
yr1044_ST(F.p4050);
Y_FLUSH();
yr1037_SA(F.p4052);
Y_FLUSH();
{ rt_int rv10881 = yr1056_SE();
y_use = F.yu; return rv10881; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4057_ReadInto(rt_int a_p4058) {
volatile
struct yf4059 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4058 = a_p4058;
F.v10885 = Y_UNDEF_I;
F.v10885 = 1;
{
F.lo10892 = INT64_C(1);
F.hi10893 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4058)]);
{ rt_int lo[1] = {F.lo10892}, hi[1] = {F.hi10893}; y_desc_array(&F.yd_10895, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10895, &F.v10897);
F.v10901 = Y_UNDEF_B;
{ rt_frame xf10902;
if (RT_TRY(xf10902)) {
F.lo10906 = INT64_C(1);
F.hi10907 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4058)]);
{ rt_int hi10911 = F.hi10907;
for (rt_int i10910 = F.lo10906; i10910 <= hi10911; i10910++) { F.c_10909 = i10910; Y_TICK();
((unsigned char *)(F.v10897).p)[y_ix1(F.v10897, F.c_10909)] = yr1103_TChar(F.p4058, y_range(F.c_10909, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
if (i10910 == hi10911) break;
}}
y_open(&F.v10899, F.v10897, 0);
Y_FLUSH();
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((!y_check_eof(&F.v10899))) {
Y_TICK();
({ unsigned char g; y_get_value(&F.v10899, &y_d_byte, &g); F.v10901 = g; });
Y_FLUSH();
yr1020_PoolAdd(Y_DEFB(F.v10901));
Y_FLUSH();
}
v1219 = Y_DEFI(v915);
Y_FLUSH();
y_close(&F.v10899);
Y_FLUSH();
RT_POP(xf10902);
} else {
RT_POP(xf10902);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10915 = rt_xcur;
if (xc10915 == rt_exc("FILE_ERROR")) {
F.v10885 = 0;
Y_FLUSH();
} else {
rt_raise(xc10915);
}
}}
}
{ rt_int rv10917 = Y_DEFI(F.v10885);
y_use = F.yu; return rv10917; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4063_WriteFile(rt_int a_p4064, yR140 a_p4065) {
volatile
struct yf4066 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4064 = a_p4064;
F.p4065 = a_p4065;
F.v10922 = Y_UNDEF_P;
F.v10922 = Y_DEFP((F.p4065).f_head);
{
F.lo10928 = INT64_C(1);
F.hi10929 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4064)]);
{ rt_int lo[1] = {F.lo10928}, hi[1] = {F.hi10929}; y_desc_array(&F.yd_10931, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10931, &F.v10933);
{ rt_frame xf10936;
if (RT_TRY(xf10936)) {
F.lo10940 = INT64_C(1);
F.hi10941 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4064)]);
{ rt_int hi10945 = F.hi10941;
for (rt_int i10944 = F.lo10940; i10944 <= hi10945; i10944++) { F.c_10943 = i10944; Y_TICK();
((unsigned char *)(F.v10933).p)[y_ix1(F.v10933, F.c_10943)] = yr1103_TChar(F.p4064, y_range(F.c_10943, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
if (i10944 == hi10945) break;
}}
y_open(&F.v10935, F.v10933, 1);
Y_FLUSH();
while ((!(Y_DEFP(F.v10922) == ((void *)0)))) {
Y_TICK();
yr1171_WriteTo(&F.v10935, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10922)))).f_t));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&F.v10935, &y_d_byte, &pv); });
Y_FLUSH();
F.v10922 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10922)))).f_next);
Y_FLUSH();
}
y_close(&F.v10935);
Y_FLUSH();
RT_POP(xf10936);
} else {
RT_POP(xf10936);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10948 = rt_xcur;
if (xc10948 == rt_exc("FILE_ERROR")) {
yr1186_FailN(INT64_C(0), F.p4064, y_str(" cannot be written", 18));
Y_FLUSH();
} else {
rt_raise(xc10948);
}
}}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4070_ReadLibLine(rt_int a_p4071) {
struct yf4072 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4071 = a_p4071;
F.v10954 = Y_UNDEF_I;
if ((!yr4057_ReadInto(F.p4071))) {
{ rt_int rv10956 = INT64_C(0);
y_use = F.yu; return rv10956; }
}
F.v10954 = Y_DEFI(v1216);
Y_FLUSH();
while ((((Y_DEFI(F.v10954) <= Y_DEFI(v1219))) && ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v10954))]) == 10))))) {
Y_TICK();
F.v10954 = y_range(y_add(Y_DEFI(F.v10954), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
{ rt_int rv10961 = yr1068_Intern(Y_DEFI(v1216), y_range(y_sub(Y_DEFI(F.v10954), Y_DEFI(v1216)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv10961; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4076_DigitsIn(rt_int a_p4077, rt_int a_p4078) {
struct yf4079 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4077 = a_p4077;
F.p4078 = a_p4078;
F.v10966 = Y_UNDEF_I;
F.v10966 = F.p4077;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(70)}; y_desc_array(&F.yd_10975, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10975, &F.v10977);
F.v10979 = Y_UNDEF_I;
F.v10979 = INT64_C(0);
if ((Y_DEFI(F.v10966) < INT64_C(0))) {
yr1031_SC(45);
Y_FLUSH();
F.v10966 = y_range(y_neg(Y_DEFI(F.v10966)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
for (;;) {
Y_TICK();
F.v10979 = y_range(y_add(Y_DEFI(F.v10979), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (((y_mod(Y_DEFI(F.v10966), F.p4078)) < INT64_C(10))) {
((unsigned char *)(F.v10977).p)[y_ix1(F.v10977, Y_DEFI(F.v10979))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10966), F.p4078)), INT64_C(48)))]);
Y_FLUSH();
} else {
((unsigned char *)(F.v10977).p)[y_ix1(F.v10977, Y_DEFI(F.v10979))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10966), F.p4078)), INT64_C(55)))]);
Y_FLUSH();
}
F.v10966 = y_range(y_div(Y_DEFI(F.v10966), F.p4078), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if ((Y_DEFI(F.v10966) == INT64_C(0))) {
goto yl_10984;
}
}
yl_10984: ;
while ((Y_DEFI(F.v10979) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10977).p)[y_ix1(F.v10977, Y_DEFI(F.v10979))]));
Y_FLUSH();
F.v10979 = y_range(y_sub(Y_DEFI(F.v10979), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4083_TokenText(rt_int a_p4084) {
struct yf4085 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4084 = a_p4084;
F.v11003 = Y_UNDEF_I;
F.v11003 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.p4084)]);
F.v11005 = Y_UNDEF_I;
F.v11005 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.p4084)]);
if ((((((Y_DEFI(F.v11003) == v207)) || ((Y_DEFI(F.v11003) == v210))) || ((Y_DEFI(F.v11003) == v213))) || ((Y_DEFI(F.v11003) == v222)))) {
yr1044_ST(y_range(Y_DEFI(F.v11005), INT64_C(0), INT64_C(4000000)));
Y_FLUSH();
} else if ((Y_DEFI(F.v11003) == v216)) {
yr1050_SI(Y_DEFI(F.v11005));
Y_FLUSH();
} else if ((Y_DEFI(F.v11003) == v219)) {
if ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v11005))]) == INT64_C(10)))) {
yr1037_SA(y_str("BASE", 4));
Y_FLUSH();
yr1050_SI(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v11005))]));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
}
yr4076_DigitsIn(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v11005))]), Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v11005))]));
Y_FLUSH();
yr1037_SA(y_str("P", 1));
Y_FLUSH();
yr1050_SI(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v11005))]));
Y_FLUSH();
} else if ((Y_DEFI(F.v11003) == v225)) {
yr1031_SC(39);
Y_FLUSH();
yr1044_ST(y_range(Y_DEFI(F.v11005), INT64_C(0), INT64_C(4000000)));
Y_FLUSH();
yr1031_SC(39);
Y_FLUSH();
} else if ((Y_DEFI(F.v11003) == v228)) {
yr1031_SC(34);
Y_FLUSH();
yr1044_ST(y_range(Y_DEFI(F.v11005), INT64_C(0), INT64_C(4000000)));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static yR140 yr4089_TokensText(rt_int a_p4090, rt_int a_p4091) {
struct yf4092 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4090 = a_p4090;
F.p4091 = a_p4091;
y_initu(&yd_141, &F.v11018);
F.v11018 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v11020 = Y_UNDEF_I;
F.v11020 = F.p4090;
F.v11022 = Y_UNDEF_I;
while ((Y_DEFI(F.v11020) < F.p4091)) {
Y_TICK();
F.v11022 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v11020))]);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
while ((((Y_DEFI(F.v11020) < F.p4091)) && ((Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v11020))]) == Y_DEFI(F.v11022))))) {
Y_TICK();
yr4083_TokenText(Y_DEFI(F.v11020));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
F.v11020 = y_range(y_add(Y_DEFI(F.v11020), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
yr1110_Put(&F.v11018, yr1056_SE());
Y_FLUSH();
}
{ yR140 rv11026 = F.v11018;
y_use = F.yu; return rv11026; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4096_Fingerprint(yR140 a_p4097) {
struct yf4098 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4097 = a_p4097;
F.v11030 = Y_UNDEF_I;
F.v11030 = INT64_C(7);
F.v11033 = Y_UNDEF_P;
F.v11033 = Y_DEFP((F.p4097).f_head);
while ((!(Y_DEFP(F.v11033) == ((void *)0)))) {
Y_TICK();
F.lo11037 = INT64_C(1);
F.hi11038 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v11033)))).f_t))]);
{ rt_int hi11042 = F.hi11038;
for (rt_int i11041 = F.lo11037; i11041 <= hi11042; i11041++) { F.c_11040 = i11041; Y_TICK();
F.v11030 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v11030), INT64_C(131))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v11033)))).f_t), y_range(F.c_11040, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (i11041 == hi11042) break;
}}
F.v11030 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v11030), INT64_C(131))), INT64_C(10))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v11033 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v11033)))).f_next);
Y_FLUSH();
}
{ rt_int rv11054 = Y_DEFI(F.v11030);
y_use = F.yu; return rv11054; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4102_TokEq(rt_int a_p4103, rt_int a_p4104, rt_int a_p4105, rt_int a_p4106) {
struct yf4107 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4103 = a_p4103;
F.p4104 = a_p4104;
F.p4105 = a_p4105;
F.p4106 = a_p4106;
F.v11061 = Y_UNDEF_I;
F.v11063 = Y_UNDEF_I;
if ((!((y_sub(F.p4104, F.p4103)) == (y_sub(F.p4106, F.p4105))))) {
{ rt_int rv11067 = 0;
y_use = F.yu; return rv11067; }
}
F.v11061 = F.p4103;
Y_FLUSH();
F.v11063 = F.p4105;
Y_FLUSH();
while ((Y_DEFI(F.v11061) < F.p4104)) {
Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v11061))]) == Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v11063))])))) {
{ rt_int rv11069 = 0;
y_use = F.yu; return rv11069; }
}
if ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v11061))]) == v219)) {
if (((((!(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11061))]))]) == Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11063))]))])))) || ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11061))]))]) == Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11063))]))]))))) || ((!(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11061))]))]) == Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11063))]))])))))) {
{ rt_int rv11071 = 0;
y_use = F.yu; return rv11071; }
}
} else if (((((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v11061))]) == v228)) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v11061))]) == v222))) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v11061))]) == v225)))) {
if ((!yr1088_TEq(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11061))]), INT64_C(0), INT64_C(4000000)), y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11063))]), INT64_C(0), INT64_C(4000000))))) {
{ rt_int rv11073 = 0;
y_use = F.yu; return rv11073; }
}
} else if ((!(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11061))]) == Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v11063))])))) {
{ rt_int rv11075 = 0;
y_use = F.yu; return rv11075; }
}
F.v11061 = y_range(y_add(Y_DEFI(F.v11061), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v11063 = y_range(y_add(Y_DEFI(F.v11063), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
{ rt_int rv11081 = 1;
y_use = F.yu; return rv11081; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4111_CheckSynopsis(void * a_p4112, rt_int a_p4113) {
struct yf4114 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4112 = a_p4112;
F.p4113 = a_p4113;
F.v11086 = Y_UNDEF_P;
F.v11088 = Y_UNDEF_P;
F.v11090 = Y_UNDEF_P;
F.v11090 = Y_DEFP(((*(yR105 *)y_deref(F.p4112))).f_c);
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11090)))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11090)))).f_b) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4112))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4112))).f_name), y_str(": a synopsis has declarations only, no statements (XIII.B)", 58));
Y_FLUSH();
}
if (F.p4113) {
F.v11088 = Y_DEFP(((*(yR105 *)y_deref(F.p4112))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v11088) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11088)))).f_text) == INT64_C(0))) && (!yr4118_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11088)))).f_name))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11088)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11088)))).f_name), y_str(" is not a segment: a synopsis imports segments and what they export (XIII.C)", 76));
Y_FLUSH();
}
F.v11088 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11088)))).f_next);
Y_FLUSH();
}
}
F.v11086 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11090)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v11086) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_kind) == v654)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_e) == ((void *)0))))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_kind) == v666)))) {
if (((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_c)))).f_a) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_c)))).f_b) == ((void *)0))))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_c)))).f_c) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_name), y_str(": a synopsis gives the header of a routine, not its body (XIII.E)", 65));
Y_FLUSH();
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_kind) == v624)) {
yr4111_CheckSynopsis(Y_DEFP(F.v11086), 0);
Y_FLUSH();
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_kind) == v660)) {
yr4111_CheckSynopsis(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_b), 0);
Y_FLUSH();
}
F.v11086 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11086)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4118_IsSegment(rt_int a_p4119) {
struct yf4120 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4119 = a_p4119;
F.v11100 = Y_UNDEF_P;
F.v11100 = Y_DEFP(v1963);
while ((!(Y_DEFP(F.v11100) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11100)))).f_name) == F.p4119)) {
{ rt_int rv11102 = 1;
y_use = F.yu; return rv11102; }
}
F.v11100 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11100)))).f_next);
Y_FLUSH();
}
{ rt_int rv11104 = 0;
y_use = F.yu; return rv11104; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4124_CheckPairing(void * a_p4125, void * a_p4126) {
struct yf4127 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4125 = a_p4125;
F.p4126 = a_p4126;
F.v11109 = Y_UNDEF_P;
F.v11111 = Y_UNDEF_P;
F.v11113 = Y_UNDEF_I;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p4125))).f_flag) == Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_flag)))) || (!yr4102_TokEq(Y_DEFI(((*(yR105 *)y_deref(F.p4125))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4125))).f_t1), Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_t1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_name), y_str(": the segment imports and exports what its synopsis does, and nothing else (XIII.C)", 83));
Y_FLUSH();
}
F.v11109 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4125))).f_c)))).f_a);
Y_FLUSH();
while ((!(Y_DEFP(F.v11109) == ((void *)0)))) {
Y_TICK();
F.v11113 = 0;
Y_FLUSH();
F.v11111 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4126))).f_c)))).f_a);
Y_FLUSH();
while ((((!(Y_DEFP(F.v11111) == ((void *)0)))) && (!Y_DEFI(F.v11113)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_kind))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_kind) == v624)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_name))) {
yr4124_CheckPairing(Y_DEFP(F.v11109), Y_DEFP(F.v11111));
Y_FLUSH();
F.v11113 = 1;
Y_FLUSH();
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_kind) == v660)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_name))) {
yr4124_CheckPairing(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_b), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_b));
Y_FLUSH();
F.v11113 = 1;
Y_FLUSH();
}
} else if (yr4102_TokEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_t1), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_t1))) {
F.v11113 = 1;
Y_FLUSH();
}
}
F.v11111 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11111)))).f_next);
Y_FLUSH();
}
if ((!Y_DEFI(F.v11113))) {
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("the declaration of line ", 24));
Y_FLUSH();
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_line));
Y_FLUSH();
yr1037_SA(y_str(" of the synopsis of ", 20));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_name));
Y_FLUSH();
yr1037_SA(y_str(" is not in the segment as it is there (XIII.I)", 46));
Y_FLUSH();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p4126))).f_line), yr1056_SE());
Y_FLUSH();
}
F.v11109 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11109)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4131_PairInInput(void) {
struct yf4132 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11124 = Y_UNDEF_P;
F.v11126 = Y_UNDEF_P;
F.v11128 = Y_UNDEF_P;
F.v11128 = ((void *)0);
Y_FLUSH();
F.v11124 = Y_DEFP(v1963);
Y_FLUSH();
while ((!(Y_DEFP(F.v11124) == ((void *)0)))) {
Y_TICK();
F.v11126 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11124)))).f_next);
Y_FLUSH();
while ((((!(Y_DEFP(F.v11126) == ((void *)0)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11126)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11124)))).f_name)))))) {
Y_TICK();
F.v11126 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11126)))).f_next);
Y_FLUSH();
}
if ((!(Y_DEFP(F.v11126) == ((void *)0)))) {
yr4111_CheckSynopsis(Y_DEFP(F.v11124), 1);
Y_FLUSH();
yr4124_CheckPairing(Y_DEFP(F.v11124), Y_DEFP(F.v11126));
Y_FLUSH();
if ((Y_DEFP(F.v11128) == ((void *)0))) {
v1963 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11124)))).f_next);
Y_FLUSH();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v11128)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11124)))).f_next);
Y_FLUSH();
}
} else {
F.v11128 = Y_DEFP(F.v11124);
Y_FLUSH();
}
F.v11124 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11124)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4136_LoadSynopsis(rt_int a_p4137, rt_int a_p4138) {
struct yf4139 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4137 = a_p4137;
F.p4138 = a_p4138;
F.v11134 = Y_UNDEF_I;
F.v11136 = Y_UNDEF_I;
F.v11138 = Y_UNDEF_I;
F.v11140 = Y_UNDEF_P;
F.v11142 = Y_UNDEF_P;
F.v11144 = Y_UNDEF_P;
F.v11146 = Y_UNDEF_I;
if (yr4118_IsSegment(F.p4137)) {
y_use = F.yu; return;
}
F.v11146 = yr4070_ReadLibLine(yr4049_LibPath(F.p4137, y_str(".yfp", 4)));
Y_FLUSH();
if ((((Y_DEFI(F.v11146) == INT64_C(0))) || (!yr4057_ReadInto(yr4049_LibPath(F.p4137, y_str(".ysyn", 5)))))) {
yr1186_FailN(F.p4138, F.p4137, y_str(" is not a segment of the library: no synopsis of it there (XIII.I)", 66));
Y_FLUSH();
}
F.v11134 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v11138 = Y_DEFI(v1225);
Y_FLUSH();
v1225 = INT64_C(1);
Y_FLUSH();
yr2024_Lex();
Y_FLUSH();
v1225 = Y_DEFI(F.v11138);
Y_FLUSH();
F.v11136 = Y_DEFI(v1249);
Y_FLUSH();
v1249 = Y_DEFI(F.v11134);
Y_FLUSH();
F.v11140 = yr2134_ParseModule();
Y_FLUSH();
v1249 = Y_DEFI(F.v11136);
Y_FLUSH();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11140)))).f_name) == F.p4137))) {
yr1186_FailN(F.p4138, F.p4137, y_str(": its synopsis in the library is of another module", 50));
Y_FLUSH();
}
((*(yR105 *)y_deref(Y_DEFP(F.v11140)))).f_d = yr2029_NewNode(v669, F.p4138);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11140)))).f_next = Y_DEFP(v1963);
Y_FLUSH();
v1963 = Y_DEFP(F.v11140);
Y_FLUSH();
F.v11144 = yr2029_NewNode(v669, F.p4138);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11144)))).f_name = F.p4137;
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11144)))).f_text = Y_DEFI(F.v11146);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11144)))).f_ival = yr4236_FactsPrint(F.p4137);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11144)))).f_next = Y_DEFP(v1722);
Y_FLUSH();
v1722 = Y_DEFP(F.v11144);
Y_FLUSH();
yr4143_LoadImports(Y_DEFP(F.v11140));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4143_LoadImports(void * a_p4144) {
struct yf4145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4144 = a_p4144;
F.v11158 = Y_UNDEF_P;
F.v11158 = Y_DEFP(((*(yR105 *)y_deref(F.p4144))).f_a);
while ((!(Y_DEFP(F.v11158) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_text) == INT64_C(0)))) {
yr4136_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_line));
Y_FLUSH();
} else if ((!yr4118_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_name)))) {
yr4136_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_line));
Y_FLUSH();
}
F.v11158 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11158)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4149_LastSegment(void) {
struct yf4150 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11162 = Y_UNDEF_P;
F.v11162 = Y_DEFP(v1963);
if ((Y_DEFP(F.v11162) == ((void *)0))) {
yr1178_FailS(INT64_C(0), y_str("no segment", 10));
Y_FLUSH();
}
while ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11162)))).f_next) == ((void *)0)))) {
Y_TICK();
F.v11162 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11162)))).f_next);
Y_FLUSH();
}
{ void * rv11165 = Y_DEFP(F.v11162);
y_use = F.yu; return rv11165; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4154_Interface(void) {
struct yf4155 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11168 = Y_UNDEF_P;
F.v11168 = yr4149_LastSegment();
y_initu(&yd_141, &F.v11170);
F.v11172 = Y_UNDEF_I;
y_initu(&yd_141, &F.v11174);
F.v11174 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr4143_LoadImports(Y_DEFP(F.v11168));
Y_FLUSH();
yr4111_CheckSynopsis(Y_DEFP(F.v11168), 1);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_d = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_line));
Y_FLUSH();
yr4300_Translate();
Y_FLUSH();
F.v11170 = yr4089_TokensText(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_x)))).f_ival), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_x)))).f_flag));
Y_FLUSH();
F.v11172 = yr4096_Fingerprint(F.v11170);
Y_FLUSH();
yr4063_WriteFile(yr4049_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_name), y_str(".ysyn", 5)), F.v11170);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v11172));
Y_FLUSH();
yr1110_Put(&F.v11174, yr1056_SE());
Y_FLUSH();
yr4063_WriteFile(yr4049_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_name), y_str(".yfp", 4)), F.v11174);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("/* the synopsis of ", 19));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11168)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(", fingerprint ", 14));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v11172));
Y_FLUSH();
yr1037_SA(y_str(" */", 3));
Y_FLUSH();
yr1145_WriteTxt(yr1056_SE());
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4159_Segment(void) {
struct yf4160 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11184 = Y_UNDEF_P;
F.v11184 = yr4149_LastSegment();
F.v11186 = Y_UNDEF_P;
F.v11188 = Y_UNDEF_I;
F.v11190 = Y_UNDEF_I;
F.v11192 = Y_UNDEF_I;
F.v11194 = Y_UNDEF_I;
y_initu(&yd_141, &F.v11196);
F.v11196 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v11198 = Y_UNDEF_P;
v1724 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name);
Y_FLUSH();
F.v11188 = yr4070_ReadLibLine(yr4049_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name), y_str(".yfp", 4)));
Y_FLUSH();
if ((((Y_DEFI(F.v11188) == INT64_C(0))) || (!yr4057_ReadInto(yr4049_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name), y_str(".ysyn", 5)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name), y_str(": its synopsis is not in the library; translate it with -i first (XIII.I)", 73));
Y_FLUSH();
}
F.v11190 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
F.v11194 = Y_DEFI(v1225);
Y_FLUSH();
v1225 = INT64_C(1);
Y_FLUSH();
yr2024_Lex();
Y_FLUSH();
v1225 = Y_DEFI(F.v11194);
Y_FLUSH();
F.v11192 = Y_DEFI(v1249);
Y_FLUSH();
v1249 = Y_DEFI(F.v11190);
Y_FLUSH();
F.v11186 = yr2134_ParseModule();
Y_FLUSH();
v1249 = Y_DEFI(F.v11192);
Y_FLUSH();
yr4124_CheckPairing(Y_DEFP(F.v11186), Y_DEFP(F.v11184));
Y_FLUSH();
F.v11198 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_line));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11198)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11198)))).f_text = Y_DEFI(F.v11188);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11198)))).f_ival = INT64_C(0);
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11198)))).f_next = Y_DEFP(v1722);
Y_FLUSH();
v1722 = Y_DEFP(F.v11198);
Y_FLUSH();
yr4143_LoadImports(Y_DEFP(F.v11184));
Y_FLUSH();
yr4300_Translate();
Y_FLUSH();
F.v11198 = Y_DEFP(v1722);
Y_FLUSH();
while ((!(Y_DEFP(F.v11198) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11196, yr4230_UseLine(Y_DEFP(F.v11198)));
Y_FLUSH();
F.v11198 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11198)))).f_next);
Y_FLUSH();
}
yr4063_WriteFile(yr4049_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name), y_str(".yuse", 5)), F.v11196);
Y_FLUSH();
yr4170_WriteSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11184)))).f_name));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4164_UsesText(void * a_p4165) {
struct yf4166 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4165 = a_p4165;
F.v11211 = Y_UNDEF_P;
F.v11211 = F.p4165;
yr1026_SB();
Y_FLUSH();
while ((!(Y_DEFP(F.v11211) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v11211)))).f_t));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v11211 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v11211)))).f_next);
Y_FLUSH();
}
{ rt_int rv11213 = yr1056_SE();
y_use = F.yu; return rv11213; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4170_WriteSegment(rt_int a_p4171) {
struct yf4172 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4171 = a_p4171;
F.v11217 = Y_UNDEF_P;
F.v11217 = Y_DEFP(v1722);
F.v11219 = Y_UNDEF_I;
yr1117_PutS(&v990, y_str("static void y_elaborate(void) {", 31));
Y_FLUSH();
yr1125_Append(&v990, &v996);
Y_FLUSH();
yr1117_PutS(&v990, y_str("}", 1));
Y_FLUSH();
yr1110_Put(&v990, yr3530_Join(yr1061_T(y_str("void ys_", 8)), F.p4171, yr1061_T(y_str("_init(void) { y_elaborate(); }", 30))));
Y_FLUSH();
yr1110_Put(&v990, yr3530_Join(yr1061_T(y_str("void ys_", 8)), F.p4171, yr1061_T(y_str("_await(void) {", 14))));
Y_FLUSH();
yr1125_Append(&v990, &v1749);
Y_FLUSH();
yr1117_PutS(&v990, y_str("}", 1));
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("const char ys_", 14));
Y_FLUSH();
yr1044_ST(F.p4171);
Y_FLUSH();
yr1037_SA(y_str("_uses[] = ", 10));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
while ((!(Y_DEFP(F.v11217) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr4230_UseLine(Y_DEFP(F.v11217)));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v11217 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11217)))).f_next);
Y_FLUSH();
}
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
yr1110_Put(&v990, yr1056_SE());
Y_FLUSH();
yr4310_WriteHead();
Y_FLUSH();
yr1151_WriteBuf(v990);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4176_LinkProgram(void) {
struct yf4177 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11235 = Y_UNDEF_P;
F.v11237 = Y_UNDEF_P;
F.v11239 = Y_UNDEF_I;
F.v11241 = Y_UNDEF_I;
F.v11243 = Y_UNDEF_I;
F.v11245 = Y_UNDEF_I;
F.v11247 = Y_UNDEF_I;
F.v11249 = Y_UNDEF_I;
F.v11251 = Y_UNDEF_I;
y_initu(&yd_141, &F.v11253);
F.v11253 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr1117_PutS(&F.v11253, y_str("#include <stdio.h>", 18));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("#include <stdlib.h>", 19));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("#include <string.h>", 19));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("#include \"paleo.h\"", 18));
Y_FLUSH();
F.v11235 = Y_DEFP(v1720);
Y_FLUSH();
while ((!(Y_DEFP(F.v11235) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11253, yr3530_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), yr1061_T(y_str("_init(void);", 12))));
Y_FLUSH();
yr1110_Put(&F.v11253, yr3530_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), yr1061_T(y_str("_await(void);", 13))));
Y_FLUSH();
yr1110_Put(&F.v11253, yr3530_Join(yr1061_T(y_str("extern const char ys_", 21)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), yr1061_T(y_str("_uses[];", 8))));
Y_FLUSH();
F.v11235 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_next);
Y_FLUSH();
}
yr1117_PutS(&F.v11253, y_str("int main(int argc, char **argv) {", 33));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("y_lang();", 9));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("rt_init(argc, argv);", 20));
Y_FLUSH();
F.v11235 = Y_DEFP(v1720);
Y_FLUSH();
while ((!(Y_DEFP(F.v11235) == ((void *)0)))) {
Y_TICK();
if ((!yr4057_ReadInto(yr4049_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), y_str(".yuse", 5))))) {
yr1186_FailN(INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), y_str(" has not been translated as a segment of this library (XIII.I)", 62));
Y_FLUSH();
}
yr1026_SB();
Y_FLUSH();
F.v11249 = Y_DEFI(v1216);
Y_FLUSH();
F.v11247 = Y_DEFI(F.v11249);
Y_FLUSH();
F.v11251 = Y_DEFI(v1219);
Y_FLUSH();
while ((Y_DEFI(F.v11249) <= Y_DEFI(F.v11251))) {
Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11249))]) == 10)) {
F.v11245 = yr1068_Intern(Y_DEFI(F.v11247), y_range(y_sub(Y_DEFI(F.v11249), Y_DEFI(F.v11247)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
yr4181_CheckUse(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), Y_DEFI(F.v11245));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11245));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
F.v11247 = y_range(y_add(Y_DEFI(F.v11249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v11249 = y_range(y_add(Y_DEFI(F.v11249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v11239 = yr1056_SE();
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("if (strcmp(ys_", 14));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name));
Y_FLUSH();
yr1037_SA(y_str("_uses, ", 7));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11239));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str(") != 0) { fprintf(stderr, ", 26));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str("*** segment ", 12));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name));
Y_FLUSH();
yr1037_SA(y_str(" is out of date: translate it again (XIII.I)\\n", 46));
Y_FLUSH();
yr1031_SC(34);
Y_FLUSH();
yr1037_SA(y_str("); exit(2); }", 13));
Y_FLUSH();
yr1110_Put(&F.v11253, yr1056_SE());
Y_FLUSH();
F.v11235 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_next);
Y_FLUSH();
}
F.v11235 = Y_DEFP(v1720);
Y_FLUSH();
while ((!(Y_DEFP(F.v11235) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11253, yr3530_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), yr1061_T(y_str("_init();", 8))));
Y_FLUSH();
F.v11235 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_next);
Y_FLUSH();
}
F.v11235 = Y_DEFP(v1720);
Y_FLUSH();
while ((!(Y_DEFP(F.v11235) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11253, yr3530_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_name), yr1061_T(y_str("_await();", 9))));
Y_FLUSH();
F.v11235 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11235)))).f_next);
Y_FLUSH();
}
yr1117_PutS(&F.v11253, y_str("rt_main_done();", 15));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("return 0;", 9));
Y_FLUSH();
yr1117_PutS(&F.v11253, y_str("}", 1));
Y_FLUSH();
yr1151_WriteBuf(F.v11253);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4181_CheckUse(rt_int a_p4182, rt_int a_p4183) {
struct yf4184 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4182 = a_p4182;
F.p4183 = a_p4183;
F.v11298 = Y_UNDEF_I;
F.v11298 = INT64_C(1);
F.v11301 = Y_UNDEF_I;
F.v11301 = INT64_C(1);
F.v11304 = Y_UNDEF_I;
F.v11306 = Y_UNDEF_I;
F.v11308 = Y_UNDEF_I;
F.v11310 = Y_UNDEF_I;
F.v11312 = Y_UNDEF_P;
F.v11312 = Y_DEFP(v1720);
F.v11314 = Y_UNDEF_I;
F.v11314 = 0;
while ((((Y_DEFI(F.v11298) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4183)]))) && ((!(yr1103_TChar(F.p4183, Y_DEFI(F.v11298)) == 32))))) {
Y_TICK();
F.v11298 = y_range(y_add(Y_DEFI(F.v11298), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v11304 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4183)]), y_range(y_sub(Y_DEFI(F.v11298), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v11301 = y_range(y_add(Y_DEFI(F.v11298), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
while ((((Y_DEFI(F.v11301) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4183)]))) && ((!(yr1103_TChar(F.p4183, Y_DEFI(F.v11301)) == 32))))) {
Y_TICK();
F.v11301 = y_range(y_add(Y_DEFI(F.v11301), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v11306 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4183)]), Y_DEFI(F.v11298)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v11301), Y_DEFI(F.v11298))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v11310 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4183)]), Y_DEFI(F.v11301)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4183)]), Y_DEFI(F.v11301)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
F.v11308 = yr4070_ReadLibLine(yr4049_LibPath(Y_DEFI(F.v11304), y_str(".yfp", 4)));
Y_FLUSH();
if ((((Y_DEFI(F.v11308) == INT64_C(0))) || ((!(Y_DEFI(F.v11308) == Y_DEFI(F.v11306)))))) {
yr1157_Fail(INT64_C(0), yr3530_Join(F.p4182, yr3530_Join(yr1061_T(y_str(" was translated with an outdated synopsis of ", 45)), Y_DEFI(F.v11304), INT64_C(0)), yr1061_T(y_str(": translate it again (XIII.I)", 29))));
Y_FLUSH();
}
if ((((!(Y_DEFI(F.v11310) == yr1081_N(y_str("none", 4))))) && ((!(Y_DEFI(F.v11310) == yr4236_FactsPrint(Y_DEFI(F.v11304))))))) {
yr1157_Fail(INT64_C(0), yr3530_Join(F.p4182, yr3530_Join(yr1061_T(y_str(" was translated with what the segment ", 38)), Y_DEFI(F.v11304), INT64_C(0)), yr1061_T(y_str(" was then: translate it again (XIII.I)", 38))));
Y_FLUSH();
}
while ((!(Y_DEFP(F.v11312) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11312)))).f_name) == Y_DEFI(F.v11304))) {
F.v11314 = 1;
Y_FLUSH();
}
F.v11312 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11312)))).f_next);
Y_FLUSH();
}
if ((!Y_DEFI(F.v11314))) {
yr1157_Fail(INT64_C(0), yr3530_Join(F.p4182, yr1061_T(y_str(" imports the segment ", 21)), yr3530_Join(Y_DEFI(F.v11304), yr1061_T(y_str(", which is not linked (XIII.A)", 30)), INT64_C(0))));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4188_SegKey(rt_int a_p4189, rt_int a_p4190) {
struct yf4191 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4189 = a_p4189;
F.p4190 = a_p4190;
F.v11352 = Y_UNDEF_B;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("ys", 2));
Y_FLUSH();
F.lo11357 = INT64_C(1);
F.hi11358 = Y_DEFI(v1733);
{ rt_int hi11362 = F.hi11358;
for (rt_int i11361 = F.lo11357; i11361 <= hi11362; i11361++) { F.c_11360 = i11361; Y_TICK();
yr1037_SA(y_str("_", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((rt_int *)(v1745).p)[y_ix1(v1745, F.c_11360)]));
Y_FLUSH();
if (i11361 == hi11362) break;
}}
yr1037_SA(y_str("__", 2));
Y_FLUSH();
F.lo11368 = INT64_C(1);
F.hi11369 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4189)]);
{ rt_int hi11373 = F.hi11369;
for (rt_int i11372 = F.lo11368; i11372 <= hi11373; i11372++) { F.c_11371 = i11372; Y_TICK();
F.v11352 = yr1103_TChar(F.p4189, y_range(F.c_11371, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
if ((yr1008_IsLetter(Y_DEFB(F.v11352)) || yr1014_IsDigit(Y_DEFB(F.v11352)))) {
yr1031_SC(Y_DEFB(F.v11352));
Y_FLUSH();
} else {
yr1037_SA(y_str("_x", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(F.v11352))]));
Y_FLUSH();
}
if (i11372 == hi11373) break;
}}
if ((!(F.p4190 == INT64_C(0)))) {
yr1037_SA(y_str("__", 2));
Y_FLUSH();
yr1050_SI(F.p4190);
Y_FLUSH();
}
{ rt_int rv11377 = yr1056_SE();
y_use = F.yu; return rv11377; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4195_HeaderHash(void * a_p4196) {
struct yf4197 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4196 = a_p4196;
{ rt_int rv11380 = yr4096_Fingerprint(yr4089_TokensText(Y_DEFI(((*(yR105 *)y_deref(F.p4196))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4196))).f_t1)));
y_use = F.yu; return rv11380; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4201_ParamList(void * a_p4202) {
struct yf4203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4202 = a_p4202;
F.v11384 = Y_UNDEF_P;
F.v11384 = Y_DEFP(((*(yR125 *)y_deref(F.p4202))).f_params);
F.v11386 = Y_UNDEF_I;
F.v11386 = 1;
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("(", 1));
Y_FLUSH();
while ((!(Y_DEFP(F.v11384) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v11386))) {
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
}
F.v11386 = 0;
Y_FLUSH();
yr1044_ST(yr3651_ParamCType(Y_DEFP(F.v11384)));
Y_FLUSH();
yr1037_SA(y_str(" a_", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11384)))).f_cname));
Y_FLUSH();
F.v11384 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11384)))).f_next);
Y_FLUSH();
}
if (Y_DEFI(F.v11386)) {
yr1037_SA(y_str("void", 4));
Y_FLUSH();
}
yr1037_SA(y_str(")", 1));
Y_FLUSH();
{ rt_int rv11394 = yr1056_SE();
y_use = F.yu; return rv11394; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4207_SegStorage(void * a_p4208, void * a_p4209, rt_int a_p4210) {
struct yf4211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4208 = a_p4208;
F.p4209 = a_p4209;
F.p4210 = a_p4210;
F.v11400 = Y_UNDEF_I;
F.v11402 = Y_UNDEF_P;
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((Y_DEFI(v1733) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11400 = yr4188_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4208))).f_name), INT64_C(0));
Y_FLUSH();
if ((((Y_DEFI(v1727) > INT64_C(0))) || ((Y_DEFI(v1730) > INT64_C(0))))) {
((*(yR125 *)y_deref(F.p4208))).f_skey = Y_DEFI(F.v11400);
Y_FLUSH();
}
if ((Y_DEFI(v1727) > INT64_C(0))) {
yr1110_Put(&v984, yr3530_Join(yr1061_T(y_str("extern ", 7)), yr2551_CType(F.p4209), yr3530_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v11400), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
((*(yR125 *)y_deref(F.p4208))).f_cname = yr3530_Join(yr1061_T(y_str("(*", 2)), Y_DEFI(F.v11400), yr1061_T(y_str(")", 1)));
Y_FLUSH();
((*(yR125 *)y_deref(F.p4208))).f_level = INT64_C(0);
Y_FLUSH();
F.v11402 = yr2029_NewNode(v669, INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11402)))).f_sym = F.p4208;
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11402)))).f_next = Y_DEFP(v1751);
Y_FLUSH();
v1751 = Y_DEFP(F.v11402);
Y_FLUSH();
} else if ((Y_DEFI(v1730) > INT64_C(0))) {
yr1110_Put(&v1747, yr3530_Join(yr2551_CType(F.p4209), yr3530_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v11400), yr1061_T(y_str(" = &", 4))), yr3530_Join(Y_DEFI(((*(yR125 *)y_deref(F.p4208))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4215_SegRoutine(void * a_p4216, void * a_p4217, rt_int a_p4218) {
struct yf4219 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4216 = a_p4216;
F.p4217 = a_p4217;
F.p4218 = a_p4218;
F.v11426 = Y_UNDEF_I;
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4216))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1733) == INT64_C(0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4217))).f_e) == ((void *)0)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(v1727) == INT64_C(0))) && ((Y_DEFI(v1730) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11426 = yr4188_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4216))).f_name), yr4195_HeaderHash(F.p4217));
Y_FLUSH();
if ((F.p4218 == v885)) {
F.v11426 = yr3530_Join(Y_DEFI(F.v11426), yr1061_T(y_str("_act", 4)), INT64_C(0));
Y_FLUSH();
}
((*(yR125 *)y_deref(F.p4216))).f_skey = Y_DEFI(F.v11426);
Y_FLUSH();
if ((Y_DEFI(v1727) > INT64_C(0))) {
((*(yR125 *)y_deref(F.p4216))).f_hasmv = 1;
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("extern ", 7));
Y_FLUSH();
if ((F.p4218 == v885)) {
yr1037_SA(y_str("void", 4));
Y_FLUSH();
} else {
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4216))).f_ret)));
Y_FLUSH();
}
yr1037_SA(y_str(" (*", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11426));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
yr1044_ST(yr4201_ParamList(F.p4216));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
yr1110_Put(&v986, yr1056_SE());
Y_FLUSH();
((*(yR125 *)y_deref(F.p4216))).f_cname = Y_DEFI(F.v11426);
Y_FLUSH();
if ((!Y_DEFI(((*(yR125 *)y_deref(F.p4216))).f_func))) {
((*(yR125 *)y_deref(F.p4216))).f_writes = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p4217))).f_line));
Y_FLUSH();
}
} else if ((F.p4218 == v876)) {
yr1026_SB();
Y_FLUSH();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4216))).f_ret)));
Y_FLUSH();
yr1037_SA(y_str(" (*", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11426));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
yr1044_ST(yr4201_ParamList(F.p4216));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4216))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
yr1110_Put(&v1747, yr1056_SE());
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4223_SegActivation(void * a_p4224, void * a_p4225) {
struct yf4226 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4224 = a_p4224;
F.p4225 = a_p4225;
F.v11448 = Y_UNDEF_I;
F.v11450 = Y_UNDEF_I;
F.v11452 = Y_UNDEF_I;
F.v11454 = Y_UNDEF_I;
F.v11456 = Y_UNDEF_I;
F.v11458 = Y_UNDEF_I;
F.v11460 = Y_UNDEF_P;
F.v11462 = Y_UNDEF_P;
F.v11464 = Y_UNDEF_I;
F.v11466 = Y_UNDEF_I;
F.v11466 = INT64_C(0);
y_initu(&yd_141, &F.v11469);
F.v11469 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4224))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1733) == INT64_C(0)))) || ((Y_DEFI(v1730) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11448 = yr3530_Join(yr4188_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4224))).f_name), yr4195_HeaderHash(F.p4225)), yr1061_T(y_str("_act", 4)), INT64_C(0));
Y_FLUSH();
F.v11450 = yr1200_Fresh(y_str("ysa", 3));
Y_FLUSH();
yr1110_Put(&F.v11469, yr3530_Join(yr1061_T(y_str("static void ", 12)), Y_DEFI(F.v11450), yr4201_ParamList(F.p4224)));
Y_FLUSH();
F.v11452 = yr1061_T(y_str("pf", 2));
Y_FLUSH();
yr1117_PutS(&F.v11469, y_str("{", 1));
Y_FLUSH();
yr1110_Put(&F.v11469, yr3530_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p4224))).f_members)))).f_name), yr3530_Join(yr1061_T(y_str(" *pf = rt_alloc(sizeof *pf);", 28)), INT64_C(0), INT64_C(0))));
Y_FLUSH();
F.v11460 = Y_DEFP(((*(yR125 *)y_deref(F.p4224))).f_params);
Y_FLUSH();
while ((!(Y_DEFP(F.v11460) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cls) == v897)) && yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_rep)))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_rep)))).f_kind) == v843)) {
yr1110_Put(&F.v11469, yr3530_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_rep)))).f_elem)), yr3530_Join(yr1061_T(y_str("), &pf->", 8)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cname), yr3530_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cname), yr1061_T(y_str(");", 2))))));
Y_FLUSH();
} else {
yr1110_Put(&F.v11469, yr3530_Join(yr1061_T(y_str("y_copy(", 7)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_rep)), yr3530_Join(yr1061_T(y_str(", &pf->", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cname), yr3530_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cname), yr1061_T(y_str(");", 2))))));
Y_FLUSH();
}
} else {
yr1110_Put(&F.v11469, yr3530_Join(yr1061_T(y_str("pf->", 4)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cname), yr3530_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_cname), yr1061_T(y_str(";", 1)))));
Y_FLUSH();
}
F.v11460 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11460)))).f_next);
Y_FLUSH();
}
F.v11454 = yr1061_T(y_str("0", 1));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4225))).f_e) == ((void *)0)))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4225))).f_e), Y_DEFP(v1342), &F.v11454, &F.v11462);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4225))).f_line), Y_DEFP(v1342), Y_DEFP(F.v11462));
Y_FLUSH();
}
F.v11456 = yr1061_T(y_str("0, 0", 4));
Y_FLUSH();
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4225))).f_d) == ((void *)0)))) {
yr3107_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4225))).f_d), Y_DEFP(v1342), &F.v11458, &F.v11462);
Y_FLUSH();
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4225))).f_line), Y_DEFP(v1342), Y_DEFP(F.v11462));
Y_FLUSH();
F.v11456 = yr3530_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v11458), INT64_C(0));
Y_FLUSH();
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4225))).f_x) == ((void *)0)))) {
yr2959_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p4225))).f_x), &F.v11464, &F.v11466);
Y_FLUSH();
if (((!Y_DEFI(F.v11464)) || ((Y_DEFI(F.v11466) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4225))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
Y_FLUSH();
}
}
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("y_create(&", 10));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4224))).f_cname));
Y_FLUSH();
yr1037_SA(y_str("_d, ", 4));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11454));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11456));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v11466));
Y_FLUSH();
yr1037_SA(y_str(", ", 2));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4224))).f_cname));
Y_FLUSH();
yr1037_SA(y_str(", pf);", 6));
Y_FLUSH();
yr1110_Put(&F.v11469, yr1056_SE());
Y_FLUSH();
yr1117_PutS(&F.v11469, y_str("}", 1));
Y_FLUSH();
yr1125_Append(&v988, &F.v11469);
Y_FLUSH();
yr1026_SB();
Y_FLUSH();
yr1037_SA(y_str("void (*", 7));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11448));
Y_FLUSH();
yr1037_SA(y_str(")", 1));
Y_FLUSH();
yr1044_ST(yr4201_ParamList(F.p4224));
Y_FLUSH();
yr1037_SA(y_str(" = ", 3));
Y_FLUSH();
yr1044_ST(Y_DEFI(F.v11450));
Y_FLUSH();
yr1037_SA(y_str(";", 1));
Y_FLUSH();
yr1110_Put(&v1747, yr1056_SE());
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4230_UseLine(void * a_p4231) {
struct yf4232 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4231 = a_p4231;
yr1026_SB();
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4231))).f_name));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4231))).f_text));
Y_FLUSH();
yr1037_SA(y_str(" ", 1));
Y_FLUSH();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p4231))).f_ival) == INT64_C(0))) {
yr1037_SA(y_str("none", 4));
Y_FLUSH();
} else {
yr1044_ST(y_range(Y_DEFI(((*(yR105 *)y_deref(F.p4231))).f_ival), INT64_C(0), INT64_C(4000000)));
Y_FLUSH();
}
{ rt_int rv11517 = yr1056_SE();
y_use = F.yu; return rv11517; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4236_FactsPrint(rt_int a_p4237) {
struct yf4238 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4237 = a_p4237;
F.v11521 = Y_UNDEF_I;
F.v11521 = INT64_C(7);
if ((!yr4057_ReadInto(yr4049_LibPath(F.p4237, y_str(".yfx", 4))))) {
{ rt_int rv11525 = INT64_C(0);
y_use = F.yu; return rv11525; }
}
F.lo11527 = Y_DEFI(v1216);
F.hi11528 = Y_DEFI(v1219);
{ rt_int hi11532 = F.hi11528;
for (rt_int i11531 = F.lo11527; i11531 <= hi11532; i11531++) { F.c_11530 = i11531; Y_TICK();
F.v11521 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v11521), INT64_C(131))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_11530)]))]))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
if (i11531 == hi11532) break;
}}
yr1026_SB();
Y_FLUSH();
yr1050_SI(Y_DEFI(F.v11521));
Y_FLUSH();
{ rt_int rv11538 = yr1075_Name(yr1056_SE());
y_use = F.yu; return rv11538; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4242_ApplyFacts(void) {
struct yf4243 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11541 = Y_UNDEF_P;
F.v11541 = Y_DEFP(v1722);
while ((!(Y_DEFP(F.v11541) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11541)))).f_ival) == INT64_C(0)))) {
yr4247_ApplyFile(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11541)))).f_name));
Y_FLUSH();
}
F.v11541 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11541)))).f_next);
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4247_ApplyFile(rt_int a_p4248) {
struct yf4249 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4248 = a_p4248;
F.v11546 = Y_UNDEF_I;
F.v11548 = Y_UNDEF_I;
F.v11550 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_11559, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_11559, &F.v11561);
F.v11563 = Y_UNDEF_I;
F.v11563 = INT64_C(0);
if ((!yr4057_ReadInto(yr4049_LibPath(F.p4248, y_str(".yfx", 4))))) {
y_use = F.yu; return;
}
F.v11546 = Y_DEFI(v1216);
Y_FLUSH();
F.v11548 = Y_DEFI(F.v11546);
Y_FLUSH();
F.v11550 = Y_DEFI(v1219);
Y_FLUSH();
while ((Y_DEFI(F.v11546) <= Y_DEFI(F.v11550))) {
Y_TICK();
if ((((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11546))]) == 32)) || ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11546))]) == 10)))) {
if ((((Y_DEFI(F.v11546) > Y_DEFI(F.v11548))) && ((Y_DEFI(F.v11563) < INT64_C(4096))))) {
F.v11563 = y_range(y_add(Y_DEFI(F.v11563), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
((rt_int *)(F.v11561).p)[y_ix1(F.v11561, Y_DEFI(F.v11563))] = yr1068_Intern(Y_DEFI(F.v11548), y_range(y_sub(Y_DEFI(F.v11546), Y_DEFI(F.v11548)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
Y_FLUSH();
}
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11546))]) == 10)) {
if ((Y_DEFI(F.v11563) >= INT64_C(2))) {
yr4253_ApplyLine(F.v11561, Y_DEFI(F.v11563));
Y_FLUSH();
}
F.v11563 = INT64_C(0);
Y_FLUSH();
}
F.v11548 = y_range(y_add(Y_DEFI(F.v11546), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
F.v11546 = y_range(y_add(Y_DEFI(F.v11546), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4253_ApplyLine(yarr a_p4255, rt_int a_p4256) {
struct yf4257 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4255 = a_p4255;
F.p4256 = a_p4256;
F.v11583 = Y_UNDEF_P;
F.v11583 = Y_DEFP(v1756);
F.v11585 = Y_UNDEF_P;
F.v11585 = ((void *)0);
F.v11587 = Y_UNDEF_P;
F.v11589 = Y_UNDEF_P;
while ((((!(Y_DEFP(F.v11583) == ((void *)0)))) && ((Y_DEFP(F.v11585) == ((void *)0))))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11583)))).f_sym)))).f_hasmv) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11583)))).f_sym)))).f_skey) == INT64_C(0)))))) {
if (yr1088_TEq(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11583)))).f_sym)))).f_skey), Y_DEFI(((rt_int *)(F.p4255).p)[y_ix1(F.p4255, INT64_C(1))]))) {
F.v11585 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11583)))).f_sym);
Y_FLUSH();
}
}
F.v11583 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11583)))).f_next);
Y_FLUSH();
}
if ((Y_DEFP(F.v11585) == ((void *)0))) {
y_use = F.yu; return;
}
if (yr1088_TEq(Y_DEFI(((rt_int *)(F.p4255).p)[y_ix1(F.p4255, INT64_C(2))]), yr1061_T(y_str("P", 1)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v11585)))).f_writes = ((void *)0);
Y_FLUSH();
}
F.lo11597 = INT64_C(3);
F.hi11598 = F.p4256;
{ rt_int hi11602 = F.hi11598;
for (rt_int i11601 = F.lo11597; i11601 <= hi11602; i11601++) { F.c_11600 = i11601; Y_TICK();
if (yr1088_TEq(Y_DEFI(((rt_int *)(F.p4255).p)[y_ix1(F.p4255, F.c_11600)]), yr1061_T(y_str("D", 1)))) {
F.v11589 = yr3577_Note(((void *)0), yr1081_N(y_str("*", 1)), INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11589)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v11585)))).f_frees);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v11585)))).f_frees = Y_DEFP(F.v11589);
Y_FLUSH();
} else {
F.v11587 = Y_DEFP(v1751);
Y_FLUSH();
while ((!(Y_DEFP(F.v11587) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11587)))).f_sym)))).f_skey), Y_DEFI(((rt_int *)(F.p4255).p)[y_ix1(F.p4255, F.c_11600)]))) {
F.v11589 = yr3577_Note(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11587)))).f_sym), INT64_C(0), INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11589)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v11585)))).f_frees);
Y_FLUSH();
((*(yR125 *)y_deref(Y_DEFP(F.v11585)))).f_frees = Y_DEFP(F.v11589);
Y_FLUSH();
}
F.v11587 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11587)))).f_next);
Y_FLUSH();
}
}
if (i11601 == hi11602) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4261_StdRep(yarr a_p4263, void * a_p4264) {
struct yf4265 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4263 = a_p4263;
F.p4264 = a_p4264;
F.v11612 = Y_UNDEF_P;
F.v11612 = yr2348_NewSym(v870, yr1081_N(F.p4263));
((*(yR125 *)y_deref(Y_DEFP(F.v11612)))).f_rep = F.p4264;
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v11612), INT64_C(0));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4269_StdOp(yarr a_p4271, rt_int a_p4272) {
struct yf4273 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4271 = a_p4271;
F.p4272 = a_p4272;
F.v11618 = Y_UNDEF_P;
F.v11618 = yr2348_NewSym(v891, yr1081_N(F.p4271));
((*(yR125 *)y_deref(Y_DEFP(F.v11618)))).f_mval = F.p4272;
Y_FLUSH();
yr2450_Define(Y_DEFP(F.v11618), INT64_C(0));
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4277_LitList(yarr a_p4279, yarr a_p4280, yarr a_p4281, rt_int a_p4282) {
struct yf4283 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4279 = a_p4279;
F.p4280 = a_p4280;
F.p4281 = a_p4281;
F.p4282 = a_p4282;
F.v11626 = Y_UNDEF_P;
F.v11626 = ((void *)0);
F.v11628 = Y_UNDEF_P;
F.v11628 = ((void *)0);
F.v11630 = Y_UNDEF_P;
F.v11630 = ((void *)0);
F.v11630 = yr2029_NewNode(v669, INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11630)))).f_name = yr1081_N(F.p4279);
Y_FLUSH();
yr2036_Link(&F.v11626, &F.v11628, Y_DEFP(F.v11630));
Y_FLUSH();
F.v11630 = yr2029_NewNode(v669, INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11630)))).f_name = yr1081_N(F.p4280);
Y_FLUSH();
yr2036_Link(&F.v11626, &F.v11628, Y_DEFP(F.v11630));
Y_FLUSH();
if (F.p4282) {
F.v11630 = yr2029_NewNode(v669, INT64_C(0));
Y_FLUSH();
((*(yR105 *)y_deref(Y_DEFP(F.v11630)))).f_name = yr1081_N(F.p4281);
Y_FLUSH();
yr2036_Link(&F.v11626, &F.v11628, Y_DEFP(F.v11630));
Y_FLUSH();
}
{ void * rv11634 = Y_DEFP(F.v11626);
y_use = F.yu; return rv11634; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr4287_Abstract(rt_int a_p4288, yarr a_p4290) {
struct yf4291 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4288 = a_p4288;
F.p4290 = a_p4290;
F.v11639 = Y_UNDEF_P;
F.v11639 = yr2489_NewRep(F.p4288, yr1081_N(F.p4290));
((*(yR110 *)y_deref(Y_DEFP(F.v11639)))).f_abstract = 1;
Y_FLUSH();
{ void * rv11641 = Y_DEFP(F.v11639);
y_use = F.yu; return rv11641; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4295_Predefine(void) {
struct yf4296 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2355_OpenScope(0);
Y_FLUSH();
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
v1342 = yr4287_Abstract(v804, y_str("INTEGER", 7));
Y_FLUSH();
v1356 = yr4287_Abstract(v807, y_str("FIXED", 5));
Y_FLUSH();
v1354 = yr4287_Abstract(v810, y_str("FLOATING", 8));
Y_FLUSH();
v1358 = yr2489_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
Y_FLUSH();
v1360 = yr2489_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
Y_FLUSH();
v1348 = yr2489_NewRep(v852, yr1081_N(y_str("no value", 8)));
Y_FLUSH();
v1362 = yr2489_NewRep(v858, yr1081_N(y_str("any", 3)));
Y_FLUSH();
v1344 = yr2489_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_lits = yr4277_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_nlits = INT64_C(2);
Y_FLUSH();
yr2719_SetRange(Y_DEFP(v1344), INT64_C(0), INT64_C(1));
Y_FLUSH();
yr2713_DefineLits(Y_DEFP(v1344));
Y_FLUSH();
v1346 = yr2489_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_ordered = 1;
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_nlits = INT64_C(128);
Y_FLUSH();
yr2719_SetRange(Y_DEFP(v1346), INT64_C(0), INT64_C(127));
Y_FLUSH();
v1957 = yr2489_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1957)))).f_lits = yr4277_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1957)))).f_nlits = INT64_C(3);
Y_FLUSH();
yr2719_SetRange(Y_DEFP(v1957), INT64_C(0), INT64_C(2));
Y_FLUSH();
yr2713_DefineLits(Y_DEFP(v1957));
Y_FLUSH();
yr4261_StdRep(y_str("INTEGER", 7), Y_DEFP(v1342));
Y_FLUSH();
yr4261_StdRep(y_str("FIXED", 5), Y_DEFP(v1356));
Y_FLUSH();
yr4261_StdRep(y_str("FLOATING", 8), Y_DEFP(v1354));
Y_FLUSH();
yr4261_StdRep(y_str("BOOLEAN", 7), Y_DEFP(v1344));
Y_FLUSH();
yr4261_StdRep(y_str("SIGNAL", 6), Y_DEFP(v1358));
Y_FLUSH();
yr4261_StdRep(y_str("SEMAPHORE", 9), Y_DEFP(v1360));
Y_FLUSH();
yr4261_StdRep(y_str("ASCII", 5), Y_DEFP(v1346));
Y_FLUSH();
yr4261_StdRep(y_str("STANDARD_ALPHABET", 17), Y_DEFP(v1346));
Y_FLUSH();
yr4261_StdRep(y_str("OPEN_MODE", 9), Y_DEFP(v1957));
Y_FLUSH();
v1959 = yr2489_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1959)))).f_tname = yr1081_N(y_str("ADDRESS", 7));
Y_FLUSH();
yr2719_SetRange(Y_DEFP(v1959), INT64_C(0), INT64_C(16777215));
Y_FLUSH();
v1961 = yr2489_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
Y_FLUSH();
((*(yR110 *)y_deref(Y_DEFP(v1961)))).f_tname = yr1081_N(y_str("WORD", 4));
Y_FLUSH();
yr2719_SetRange(Y_DEFP(v1961), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
Y_FLUSH();
yr4261_StdRep(y_str("ADDRESS", 7), Y_DEFP(v1959));
Y_FLUSH();
yr4261_StdRep(y_str("WORD", 4), Y_DEFP(v1961));
Y_FLUSH();
yr4269_StdOp(y_str("MAKE_POINTER", 12), v1474);
Y_FLUSH();
yr4269_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
Y_FLUSH();
yr4269_StdOp(y_str("LOW", 3), v1366);
Y_FLUSH();
yr4269_StdOp(y_str("HIGH", 4), v1369);
Y_FLUSH();
yr4269_StdOp(y_str("SUCC", 4), v1372);
Y_FLUSH();
yr4269_StdOp(y_str("PRED", 4), v1375);
Y_FLUSH();
yr4269_StdOp(y_str("FIRST", 5), v1378);
Y_FLUSH();
yr4269_StdOp(y_str("LAST", 4), v1381);
Y_FLUSH();
yr4269_StdOp(y_str("NEW", 3), v1384);
Y_FLUSH();
yr4269_StdOp(y_str("OPEN", 4), v1387);
Y_FLUSH();
yr4269_StdOp(y_str("CLOSE", 5), v1390);
Y_FLUSH();
yr4269_StdOp(y_str("GET", 3), v1393);
Y_FLUSH();
yr4269_StdOp(y_str("PUT", 3), v1396);
Y_FLUSH();
yr4269_StdOp(y_str("CHECK_EOF", 9), v1399);
Y_FLUSH();
yr4269_StdOp(y_str("MOVE", 4), v1402);
Y_FLUSH();
yr4269_StdOp(y_str("AND_LONG", 8), v1405);
Y_FLUSH();
yr4269_StdOp(y_str("OR_LONG", 7), v1408);
Y_FLUSH();
yr4269_StdOp(y_str("DELAY", 5), v1411);
Y_FLUSH();
yr4269_StdOp(y_str("CLOCK_TIME", 10), v1414);
Y_FLUSH();
yr4269_StdOp(y_str("WAIT", 4), v1417);
Y_FLUSH();
yr4269_StdOp(y_str("SEND", 4), v1420);
Y_FLUSH();
yr4269_StdOp(y_str("AWAITED", 7), v1423);
Y_FLUSH();
yr4269_StdOp(y_str("FLOOR", 5), v1426);
Y_FLUSH();
yr4269_StdOp(y_str("CEILING", 7), v1429);
Y_FLUSH();
yr4269_StdOp(y_str("NEAR_INTEGER", 12), v1432);
Y_FLUSH();
yr4269_StdOp(y_str("NEAR_FIXED", 10), v1435);
Y_FLUSH();
yr4269_StdOp(y_str("NEAR_FLOATING", 13), v1438);
Y_FLUSH();
yr4269_StdOp(y_str("FIXED_DIV", 9), v1441);
Y_FLUSH();
yr4269_StdOp(y_str("CLAIM", 5), v1444);
Y_FLUSH();
yr4269_StdOp(y_str("RELEASE", 7), v1447);
Y_FLUSH();
yr4269_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
Y_FLUSH();
yr4269_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
Y_FLUSH();
yr4269_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
Y_FLUSH();
yr4269_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
Y_FLUSH();
yr4269_StdOp(y_str("FREE_POINTER", 12), v1462);
Y_FLUSH();
yr4269_StdOp(y_str("C_CODE_INSERT", 13), v1465);
Y_FLUSH();
yr4269_StdOp(y_str("ADDR", 4), v1468);
Y_FLUSH();
yr4269_StdOp(y_str("EXTENT", 6), v1471);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4300_Translate(void) {
struct yf4301 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11729 = Y_UNDEF_P;
F.v11729 = Y_DEFP(v1963);
y_initu(&yd_141, &F.v11731);
yr2355_OpenScope(0);
Y_FLUSH();
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
Y_FLUSH();
v1279 = INT64_C(0);
Y_FLUSH();
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(v1963);
Y_FLUSH();
while ((!(Y_DEFP(F.v11729) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11729)))).f_ival) == INT64_C(0))) {
yr3865_CompileModule(Y_DEFP(F.v11729));
Y_FLUSH();
}
F.v11729 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11729)))).f_next);
Y_FLUSH();
}
yr3828_ResolveLater(Y_DEFI(v1273));
Y_FLUSH();
yr3744_RunDeferred(INT64_C(0), INT64_C(0));
Y_FLUSH();
yr4242_ApplyFacts();
Y_FLUSH();
yr3626_CheckEffects();
Y_FLUSH();
if ((Y_DEFI(v1714) == v1507)) {
F.v11731 = v996;
Y_FLUSH();
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
Y_FLUSH();
yr3889_AwaitProcesses();
Y_FLUSH();
v1749 = v996;
Y_FLUSH();
v996 = F.v11731;
Y_FLUSH();
} else {
yr3889_AwaitProcesses();
Y_FLUSH();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4305_WriteProgram(void) {
struct yf4306 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1117_PutS(&v990, y_str("static void y_elaborate(void) {", 31));
Y_FLUSH();
yr1125_Append(&v990, &v996);
Y_FLUSH();
yr1117_PutS(&v990, y_str("}", 1));
Y_FLUSH();
yr1117_PutS(&v990, y_str("int main(int argc, char **argv) {", 33));
Y_FLUSH();
yr1117_PutS(&v990, y_str("y_lang();", 9));
Y_FLUSH();
yr1117_PutS(&v990, y_str("rt_init(argc, argv);", 20));
Y_FLUSH();
yr1117_PutS(&v990, y_str("y_elaborate();", 14));
Y_FLUSH();
yr1117_PutS(&v990, y_str("rt_main_done();", 15));
Y_FLUSH();
yr1117_PutS(&v990, y_str("return 0;", 9));
Y_FLUSH();
yr1117_PutS(&v990, y_str("}", 1));
Y_FLUSH();
yr4310_WriteHead();
Y_FLUSH();
yr1151_WriteBuf(v990);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4310_WriteHead(void) {
struct yf4311 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1151_WriteBuf(v992);
Y_FLUSH();
yr1145_WriteTxt(yr1061_T(y_str("#include \"paleo.h\"", 18)));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
yr1145_WriteTxt(yr1061_T(y_str("#include <math.h>", 17)));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
yr1145_WriteTxt(yr1061_T(y_str("#include <string.h>", 19)));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
yr1145_WriteTxt(yr1061_T(y_str("#include <stdlib.h>", 19)));
Y_FLUSH();
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
Y_FLUSH();
yr1151_WriteBuf(v978);
Y_FLUSH();
yr1151_WriteBuf(v980);
Y_FLUSH();
yr1151_WriteBuf(v982);
Y_FLUSH();
yr1151_WriteBuf(v984);
Y_FLUSH();
yr1151_WriteBuf(v986);
Y_FLUSH();
yr1151_WriteBuf(v988);
Y_FLUSH();
yr1151_WriteBuf(v1747);
Y_FLUSH();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR105, f_kind), offsetof(yR105, f_line), offsetof(yR105, f_ival), offsetof(yR105, f_flag), offsetof(yR105, f_name), offsetof(yR105, f_text), offsetof(yR105, f_a), offsetof(yR105, f_b), offsetof(yR105, f_c), offsetof(yR105, f_d), offsetof(yR105, f_e), offsetof(yR105, f_next), offsetof(yR105, f_rep), offsetof(yR105, f_sym), offsetof(yR105, f_x), offsetof(yR105, f_t0), offsetof(yR105, f_t1), 0}; const ydesc **f = rt_alloc(18 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_int; y_desc_record(&yd_106, sizeof(yR105), 17, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR110, f_kind), offsetof(yR110, f_tid), offsetof(yR110, f_tname), offsetof(yR110, f_lo), offsetof(yR110, f_hi), offsetof(yR110, f_mlo), offsetof(yR110, f_mhi), offsetof(yR110, f_hasm), offsetof(yR110, f_scale), offsetof(yR110, f_prec), offsetof(yR110, f_elem), offsetof(yR110, f_idx), offsetof(yR110, f_nidx), offsetof(yR110, f_link), offsetof(yR110, f_lits), offsetof(yR110, f_nlits), offsetof(yR110, f_fields), offsetof(yR110, f_selector), offsetof(yR110, f_cname), offsetof(yR110, f_dname), offsetof(yR110, f_dlevel), offsetof(yR110, f_deep), offsetof(yR110, f_abstract), offsetof(yR110, f_opaque), offsetof(yR110, f_opaqueops), offsetof(yR110, f_ordered), offsetof(yR110, f_forward), offsetof(yR110, f_fwdscope), offsetof(yR110, f_monitor), offsetof(yR110, f_serial), offsetof(yR110, f_sig), offsetof(yR110, f_fsn), offsetof(yR110, f_fsd), offsetof(yR110, f_packed), offsetof(yR110, f_pbits), offsetof(yR110, f_align), offsetof(yR110, f_bits), 0}; const ydesc **f = rt_alloc(38 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; f[30] = &y_d_int; f[31] = &y_d_int; f[32] = &y_d_int; f[33] = &y_d_int; f[34] = &y_d_int; f[35] = &y_d_int; f[36] = &y_d_int; y_desc_record(&yd_111, sizeof(yR110), 37, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR115, f_name), offsetof(yR115, f_rep), offsetof(yR115, f_isconst), offsetof(yR115, f_variant), offsetof(yR115, f_labels), offsetof(yR115, f_next), offsetof(yR115, f_at), 0}; const ydesc **f = rt_alloc(8 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; f[6] = &y_d_int; y_desc_record(&yd_116, sizeof(yR115), 7, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR120, f_name), offsetof(yR120, f_cls), offsetof(yR120, f_rep), offsetof(yR120, f_cname), offsetof(yR120, f_next), offsetof(yR120, f_at), offsetof(yR120, f_path), 0}; const ydesc **f = rt_alloc(8 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_int; f[6] = &y_d_int; y_desc_record(&yd_121, sizeof(yR120), 7, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR125, f_kind), offsetof(yR125, f_name), offsetof(yR125, f_rep), offsetof(yR125, f_cname), offsetof(yR125, f_level), offsetof(yR125, f_byref), offsetof(yR125, f_readonly), offsetof(yR125, f_mval), offsetof(yR125, f_hasmv), offsetof(yR125, f_params), offsetof(yR125, f_nparams), offsetof(yR125, f_ret), offsetof(yR125, f_func), offsetof(yR125, f_decl), offsetof(yR125, f_depth), offsetof(yR125, f_target), offsetof(yR125, f_members), offsetof(yR125, f_mnext), offsetof(yR125, f_chain), offsetof(yR125, f_stack), offsetof(yR125, f_alt), offsetof(yR125, f_monitor), offsetof(yR125, f_serial), offsetof(yR125, f_calls), offsetof(yR125, f_writes), offsetof(yR125, f_frees), offsetof(yR125, f_seen), offsetof(yR125, f_vix), offsetof(yR125, f_at), offsetof(yR125, f_skey), 0}; const ydesc **f = rt_alloc(31 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; f[23] = &y_d_ptr; f[24] = &y_d_ptr; f[25] = &y_d_ptr; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_int; f[29] = &y_d_int; y_desc_record(&yd_126, sizeof(yR125), 30, o, (const ydesc *const *)f); }
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
v1492 = INT64_C(16);
v1495 = Y_UNDEF_I;
v1495 = INT64_C(32);
v1498 = Y_UNDEF_I;
v1498 = INT64_C(64);
v1501 = Y_UNDEF_I;
v1501 = INT64_C(0);
v1504 = Y_UNDEF_I;
v1504 = INT64_C(1);
v1507 = Y_UNDEF_I;
v1507 = INT64_C(2);
v1510 = Y_UNDEF_I;
v1510 = INT64_C(3);
v1513 = Y_UNDEF_I;
v1513 = INT64_C(1);
v1516 = Y_UNDEF_I;
v1516 = INT64_C(2);
v1519 = Y_UNDEF_I;
v1519 = INT64_C(3);
v1522 = Y_UNDEF_I;
v1522 = INT64_C(0);
v1525 = Y_UNDEF_P;
v1525 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1534, 1, lo, hi, &y_d_int); }
y_initu(&yd_1534, &v1536);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1545, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1545, &v1547);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1556, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1556, &v1558);
v1560 = Y_UNDEF_I;
v1560 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1570, 1, lo, hi, &y_d_int); }
y_initu(&yd_1570, &v1572);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1581, 1, lo, hi, &y_d_int); }
y_initu(&yd_1581, &v1583);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1592, 1, lo, hi, &y_d_int); }
y_initu(&yd_1592, &v1594);
v1596 = Y_UNDEF_I;
v1596 = INT64_C(0);
v1599 = Y_UNDEF_I;
v1599 = INT64_C(0);
v1602 = Y_UNDEF_I;
v1602 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1612, 1, lo, hi, &y_d_int); }
y_initu(&yd_1612, &v1614);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1623, 1, lo, hi, &y_d_int); }
y_initu(&yd_1623, &v1625);
v1627 = Y_UNDEF_I;
v1627 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1637, 1, lo, hi, &y_d_int); }
y_initu(&yd_1637, &v1639);
v1641 = Y_UNDEF_I;
v1641 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1651, 1, lo, hi, &y_d_int); }
y_initu(&yd_1651, &v1653);
y_initu(&yd_1651, &v1655);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1664, 1, lo, hi, &y_d_int); }
y_initu(&yd_1664, &v1666);
v1668 = Y_UNDEF_I;
v1668 = INT64_C(0);
v1671 = Y_UNDEF_I;
v1671 = INT64_C(0);
v1674 = Y_UNDEF_P;
v1674 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1683, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1683, &v1685);
y_initu(&yd_1683, &v1687);
v1689 = Y_UNDEF_I;
v1689 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1699, 1, lo, hi, &y_d_int); }
y_initu(&yd_1699, &v1701);
v1703 = Y_UNDEF_I;
v1703 = 0;
v1706 = Y_UNDEF_I;
v1706 = INT64_C(0);
v1709 = Y_UNDEF_I;
v1709 = INT64_C(0);
v1712 = Y_UNDEF_P;
v1712 = ((void *)0);
v1714 = Y_UNDEF_I;
v1714 = INT64_C(0);
v1717 = Y_UNDEF_I;
v1717 = INT64_C(0);
v1720 = Y_UNDEF_P;
v1720 = ((void *)0);
v1722 = Y_UNDEF_P;
v1722 = ((void *)0);
v1724 = Y_UNDEF_I;
v1724 = INT64_C(0);
v1727 = Y_UNDEF_I;
v1727 = INT64_C(0);
v1730 = Y_UNDEF_I;
v1730 = INT64_C(0);
v1733 = Y_UNDEF_I;
v1733 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64)}; y_desc_array(&yd_1743, 1, lo, hi, &y_d_int); }
y_initu(&yd_1743, &v1745);
y_initu(&yd_141, &v1747);
y_initu(&yd_141, &v1749);
v1751 = Y_UNDEF_P;
v1751 = ((void *)0);
v1753 = Y_UNDEF_I;
v1753 = INT64_C(0);
v1756 = Y_UNDEF_P;
v1756 = ((void *)0);
v1758 = Y_UNDEF_P;
v1758 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1767, 1, lo, hi, &y_d_int); }
y_initu(&yd_1767, &v1769);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1778, 1, lo, hi, &y_d_int); }
y_initu(&yd_1778, &v1780);
v1782 = Y_UNDEF_I;
v1782 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1792, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1792, &v1794);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1803, 1, lo, hi, &y_d_int); }
y_initu(&yd_1803, &v1805);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1814, 1, lo, hi, &y_d_int); }
y_initu(&yd_1814, &v1816);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1825, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1825, &v1827);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1836, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1836, &v1838);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1847, 1, lo, hi, &y_d_int); }
y_initu(&yd_1847, &v1849);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1858, 1, lo, hi, &y_d_int); }
y_initu(&yd_1858, &v1860);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1869, 1, lo, hi, &y_d_int); }
y_initu(&yd_1869, &v1871);
y_initu(&yd_1869, &v1873);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1882, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1882, &v1884);
v1886 = Y_UNDEF_I;
v1886 = INT64_C(0);
v1889 = Y_UNDEF_I;
v1889 = INT64_C(0);
v1892 = Y_UNDEF_P;
v1892 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1901, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1901, &v1903);
v1905 = Y_UNDEF_I;
v1905 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1915, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1915, &v1917);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1926, 1, lo, hi, &y_d_int); }
y_initu(&yd_1926, &v1928);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1937, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1937, &v1939);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1948, 1, lo, hi, &y_d_int); }
y_initu(&yd_1948, &v1950);
y_initu(&yd_1948, &v1952);
v1954 = Y_UNDEF_I;
v1954 = INT64_C(0);
v1957 = Y_UNDEF_P;
v1959 = Y_UNDEF_P;
v1961 = Y_UNDEF_P;
v1963 = Y_UNDEF_P;
/* yellowc */
{ rt_int hi11765 = INT64_C(262143);
for (rt_int i11764 = INT64_C(0); i11764 <= hi11765; i11764++) { c_11763 = i11764; Y_TICK();
((rt_int *)(v925).p)[y_ix1(v925, c_11763)] = INT64_C(0);
Y_FLUSH();
if (i11764 == hi11765) break;
}}
{ rt_int hi11775 = INT64_C(8191);
for (rt_int i11774 = INT64_C(0); i11774 <= hi11775; i11774++) { c_11773 = i11774; Y_TICK();
((void * *)(v1260).p)[y_ix1(v1260, c_11773)] = ((void *)0);
Y_FLUSH();
if (i11774 == hi11775) break;
}}
{ rt_int hi11784 = INT64_C(400);
for (rt_int i11783 = INT64_C(0); i11783 <= hi11784; i11783++) { c_11782 = i11783; Y_TICK();
((void * *)(v1302).p)[y_ix1(v1302, c_11782)] = ((void *)0);
Y_FLUSH();
((void * *)(v1313).p)[y_ix1(v1313, c_11782)] = ((void *)0);
Y_FLUSH();
((void * *)(v1903).p)[y_ix1(v1903, c_11782)] = ((void *)0);
Y_FLUSH();
if (i11783 == hi11784) break;
}}
v978 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
Y_FLUSH();
v980 = v978;
Y_FLUSH();
v982 = v978;
Y_FLUSH();
v984 = v978;
Y_FLUSH();
v986 = v978;
Y_FLUSH();
v988 = v978;
Y_FLUSH();
v990 = v978;
Y_FLUSH();
v992 = v978;
Y_FLUSH();
v1747 = v978;
Y_FLUSH();
v1749 = v978;
Y_FLUSH();
v996 = v978;
Y_FLUSH();
v998 = v978;
Y_FLUSH();
yr1003_InitChars();
Y_FLUSH();
yr1965_InitWords();
Y_FLUSH();
v1254 = yr1081_N(y_str("FROM", 4));
Y_FLUSH();
v1257 = yr1081_N(y_str("DIMENSION", 9));
Y_FLUSH();
v1522 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
Y_FLUSH();
y_open(&v911, y_str("OUTPUT", 6), 1);
Y_FLUSH();
y_open(&v994, y_str("ERROR", 5), 1);
Y_FLUSH();
yr4044_ReadArgs();
Y_FLUSH();
if ((Y_DEFI(v1714) == v1510)) {
yr4176_LinkProgram();
Y_FLUSH();
} else {
yr1970_ReadSource();
Y_FLUSH();
yr2024_Lex();
Y_FLUSH();
v1963 = yr2343_ParseProgram();
Y_FLUSH();
yr4295_Predefine();
Y_FLUSH();
if ((Y_DEFI(v1714) == v1504)) {
yr4154_Interface();
Y_FLUSH();
} else if ((Y_DEFI(v1714) == v1507)) {
yr4159_Segment();
Y_FLUSH();
} else {
yr4131_PairInInput();
Y_FLUSH();
yr4300_Translate();
Y_FLUSH();
yr4305_WriteProgram();
Y_FLUSH();
}
}
y_close(&v911);
Y_FLUSH();
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
