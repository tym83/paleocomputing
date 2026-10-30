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
struct yf2864;
struct yf2871;
struct yf2879;
struct yf2885;
struct yf2892;
struct yf2899;
struct yf2907;
struct yf2916;
struct yf2924;
struct yf2932;
struct yf2939;
struct yf2947;
struct yf2955;
struct yf2963;
struct yf2974;
struct yf2982;
struct yf2991;
struct yf2997;
struct yf3005;
struct yf3015;
struct yf3025;
struct yf3031;
struct yf3037;
struct yf3045;
struct yf3051;
struct yf3058;
struct yf3064;
struct yf3073;
struct yf3081;
struct yf3087;
struct yf3093;
struct yf3099;
struct yf3106;
struct yf3114;
struct yf3123;
struct yf3129;
struct yf3137;
struct yf3147;
struct yf3153;
struct yf3162;
struct yf3170;
struct yf3179;
struct yf3188;
struct yf3194;
struct yf3199;
struct yf3206;
struct yf3215;
struct yf3222;
struct yf3230;
struct yf3236;
struct yf3245;
struct yf3253;
struct yf3260;
struct yf3269;
struct yf3275;
struct yf3286;
struct yf3293;
struct yf3304;
struct yf3310;
struct yf3320;
struct yf3330;
struct yf3340;
struct yf3349;
struct yf3357;
struct yf3365;
struct yf3375;
struct yf3381;
struct yf3386;
struct yf3392;
struct yf3398;
struct yf3404;
struct yf3411;
struct yf3419;
struct yf3426;
struct yf3432;
struct yf3438;
struct yf3444;
struct yf3451;
struct yf3457;
struct yf3463;
struct yf3470;
struct yf3475;
struct yf3481;
struct yf3487;
struct yf3495;
struct yf3501;
struct yf3507;
struct yf3513;
struct yf3519;
struct yf3525;
struct yf3534;
struct yf3542;
struct yf3548;
struct yf3554;
struct yf3561;
struct yf3568;
struct yf3575;
struct yf3583;
struct yf3588;
struct yf3596;
struct yf3602;
struct yf3608;
struct yf3614;
struct yf3621;
struct yf3627;
struct yf3634;
struct yf3641;
struct yf3647;
struct yf3655;
struct yf3664;
struct yf3672;
struct yf3678;
struct yf3685;
struct yf3692;
struct yf3701;
struct yf3708;
struct yf3714;
struct yf3720;
struct yf3726;
struct yf3733;
struct yf3741;
struct yf3748;
struct yf3756;
struct yf3762;
struct yf3771;
struct yf3778;
struct yf3785;
struct yf3791;
struct yf3799;
struct yf3807;
struct yf3814;
struct yf3822;
struct yf3828;
struct yf3834;
struct yf3840;
struct yf3846;
struct yf3851;
struct yf3858;
struct yf3866;
struct yf3872;
struct yf3878;
struct yf3884;
struct yf3889;
struct yf3895;
struct yf3902;
struct yf3909;
struct yf3916;
struct yf3923;
struct yf3930;
struct yf3938;
struct yf3944;
struct yf3953;
struct yf3961;
struct yf3967;
struct yf3973;
struct yf3980;
struct yf3990;
struct yf3995;
struct yf4001;
struct yf4006;
struct yf4014;
struct yf4020;
struct yf4027;
struct yf4033;
struct yf4040;
struct yf4046;
struct yf4053;
struct yf4059;
struct yf4068;
struct yf4075;
struct yf4081;
struct yf4088;
struct yf4093;
struct yf4100;
struct yf4106;
struct yf4111;
struct yf4116;
struct yf4121;
struct yf4127;
struct yf4133;
struct yf4138;
struct yf4145;
struct yf4152;
struct yf4158;
struct yf4164;
struct yf4172;
struct yf4180;
struct yf4187;
struct yf4193;
struct yf4199;
struct yf4204;
struct yf4210;
struct yf4218;
struct yf4226;
struct yf4234;
struct yf4244;
struct yf4252;
struct yf4257;
struct yf4262;
struct yf4267;
struct yf4272;
struct yf8974;
struct yf8981;
struct yf8986;
struct yf8992;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; rt_int f_t0; rt_int f_t1; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; rt_int f_skey; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v4277;
rt_int c_4280;
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
rt_int lo4316;
rt_int hi4317;
rt_int c_4319;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v4325;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_4340;
yarr v4342;
rt_int v4344;
rt_int v4347;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v4366;
rt_int lo4377;
rt_int hi4378;
rt_int c_4380;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v4391;
rt_int v4394;
rt_int v4396;
rt_int lo4401;
rt_int hi4402;
rt_int c_4404;
rt_int lo4423;
rt_int hi4424;
rt_int c_4426;
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
rt_int lo4455;
rt_int hi4456;
rt_int c_4458;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4471;
rt_int lo4487;
rt_int hi4488;
rt_int c_4490;
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
void * v4511;
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
rt_int v4525;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4532;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4538;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4548;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4558;
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
rt_int v4570;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4578;
rt_int yu;
};
struct yf1966 { void *up;
rt_int v4582;
rt_int v4584;
rt_int v4586;
rt_int lo4603;
rt_int hi4604;
rt_int c_4606;
rt_int yu;
};
struct yf1971 { void *up;
unsigned char v4615;
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
rt_int v4632;
rt_int v4634;
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
rt_int v4664;
rt_int yu;
};
struct yf2015 { void *up;
rt_int p2014;
rt_int v4674;
rt_int v4677;
rt_int v4679;
rt_int v4681;
rt_int v4683;
rt_int v4685;
rt_int v4688;
rt_int v4691;
rt_int v4694;
rt_int v4697;
rt_int v4700;
rt_int v4703;
rt_int v4706;
rt_int lo4744;
rt_int hi4745;
rt_int c_4747;
rt_int lo4776;
rt_int hi4777;
rt_int c_4779;
rt_int lo4786;
rt_int hi4787;
rt_int c_4789;
rt_int yu;
};
struct yf2020 { void *up;
rt_int v4800;
rt_int v4802;
rt_int v4804;
rt_int v4806;
rt_int yu;
};
struct yf2025 { void *up;
unsigned char v4835;
rt_int v4837;
rt_int v4839;
rt_int v4841;
rt_int v4843;
rt_int v4845;
rt_int v4847;
rt_int v4849;
rt_int lo4924;
rt_int hi4925;
rt_int c_4927;
rt_int yu;
};
struct yf2032 { void *up;
rt_int p2030;
rt_int p2031;
void * v4943;
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
rt_int v4958;
void * v4961;
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
rt_int v4975;
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
rt_int v4998;
rt_int yu;
};
struct yf2102 { void *up;
rt_int p2101;
rt_int v5008;
rt_int yu;
};
struct yf2107 { void *up;
rt_int v5013;
rt_int yu;
};
struct yf2114 { void *up;
rt_int p2112;
rt_int p2113;
rt_int v5020;
rt_int yu;
};
struct yf2119 { void *up;
rt_int v5024;
rt_int yu;
};
struct yf2125 { void *up;
rt_int p2124;
void * v5034;
rt_int yu;
};
struct yf2130 { void *up;
void * v5041;
rt_int yu;
};
struct yf2135 { void *up;
void * v5046;
void * v5048;
void * v5050;
void * v5052;
rt_int v5054;
rt_int yu;
};
struct yf2140 { void *up;
rt_int v5063;
rt_int yu;
};
struct yf2145 { void *up;
void * v5069;
void * v5071;
void * v5073;
void * v5075;
rt_int yu;
};
struct yf2150 { void *up;
void * v5080;
void * v5082;
void * v5084;
void * v5086;
void * v5088;
rt_int yu;
};
struct yf2155 { void *up;
void * v5096;
void * v5098;
void * v5100;
rt_int yu;
};
struct yf2161 { void *up;
rt_int p2160;
void * v5106;
rt_int v5108;
rt_int yu;
};
struct yf2167 { void *up;
rt_int p2166;
rt_int yu;
};
struct yf2174 { void *up;
void * * p2172;
void * * p2173;
rt_int v5129;
void * v5131;
void * v5133;
void * v5135;
rt_int yu;
};
struct yf2179 { void *up;
void * v5139;
rt_int v5141;
rt_int yu;
};
struct yf2184 { void *up;
void * v5146;
void * v5148;
void * v5150;
rt_int v5152;
rt_int v5154;
rt_int v5156;
rt_int yu;
};
struct yf2190 { void *up;
void * p2189;
void * v5172;
void * v5174;
rt_int v5176;
rt_int yu;
};
struct yf2195 { void *up;
void * v5182;
rt_int yu;
};
struct yf2201 { void *up;
rt_int p2200;
rt_int v5194;
rt_int yu;
};
struct yf2206 { void *up;
rt_int v5202;
void * v5204;
rt_int yu;
};
struct yf2211 { void *up;
void * v5213;
void * v5215;
rt_int yu;
};
struct yf2216 { void *up;
void * v5220;
void * v5222;
void * v5224;
rt_int yu;
};
struct yf2221 { void *up;
void * v5229;
void * v5231;
void * v5233;
rt_int v5235;
rt_int yu;
};
struct yf2226 { void *up;
void * v5242;
void * v5244;
void * v5246;
void * v5248;
void * v5250;
void * v5252;
rt_int v5254;
rt_int v5256;
rt_int yu;
};
struct yf2231 { void *up;
void * v5273;
rt_int yu;
};
struct yf2236 { void *up;
rt_int v5278;
rt_int yu;
};
struct yf2242 { void *up;
rt_int p2241;
void * v5287;
void * v5289;
void * v5291;
rt_int v5293;
rt_int yu;
};
struct yf2247 { void *up;
void * v5301;
void * v5303;
void * v5305;
void * v5307;
void * v5309;
void * v5311;
rt_int v5313;
rt_int v5315;
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
void * v5369;
rt_int yu;
};
struct yf2298 { void *up;
rt_int p2296;
rt_int p2297;
rt_int v5375;
rt_int yu;
};
struct yf2303 { void *up;
void * v5379;
rt_int v5381;
rt_int v5383;
rt_int yu;
};
struct yf2308 { void *up;
void * v5387;
void * v5389;
rt_int v5391;
rt_int v5393;
rt_int yu;
};
struct yf2313 { void *up;
void * v5399;
rt_int v5401;
rt_int v5403;
rt_int yu;
};
struct yf2319 { void *up;
rt_int p2318;
rt_int v5409;
rt_int yu;
};
struct yf2324 { void *up;
void * v5414;
rt_int v5416;
rt_int v5418;
rt_int yu;
};
struct yf2329 { void *up;
void * v5422;
rt_int v5424;
rt_int v5426;
rt_int yu;
};
struct yf2334 { void *up;
void * v5447;
void * v5449;
void * v5451;
rt_int v5453;
rt_int yu;
};
struct yf2339 { void *up;
rt_int yu;
};
struct yf2344 { void *up;
void * v5460;
void * v5462;
void * v5464;
rt_int v5466;
rt_int yu;
};
struct yf2351 { void *up;
rt_int p2349;
rt_int p2350;
void * v5473;
rt_int yu;
};
struct yf2357 { void *up;
rt_int p2356;
void * v5492;
rt_int yu;
};
struct yf2363 { void *up;
void * p2362;
void * v5499;
rt_int v5501;
rt_int v5504;
rt_int yu;
};
struct yf2368 { void *up;
void * v5516;
void * v5518;
void * v5520;
rt_int v5522;
rt_int yu;
};
struct yf2374 { void *up;
void * p2373;
rt_int yu;
};
struct yf2380 { void *up;
rt_int p2379;
void * v5534;
rt_int yu;
};
struct yf2386 { void *up;
rt_int p2385;
void * v5542;
rt_int yu;
};
struct yf2393 { void *up;
rt_int p2391;
rt_int p2392;
void * v5551;
void * v5553;
rt_int lo5559;
rt_int hi5560;
rt_int c_5562;
rt_int yu;
};
struct yf2400 { void *up;
void * p2398;
void * p2399;
void * v5572;
rt_int yu;
};
struct yf2406 { void *up;
rt_int p2405;
rt_int yu;
};
struct yf2413 { void *up;
void * p2411;
rt_int p2412;
void * v5584;
void * v5586;
rt_int v5588;
rt_int yu;
};
struct yf2420 { void *up;
void * p2418;
rt_int p2419;
void * v5604;
rt_int yu;
};
struct yf2427 { void *up;
void * p2425;
rt_int p2426;
void * v5629;
rt_int yu;
};
struct yf2433 { void *up;
void * p2432;
rt_int yu;
};
struct yf2439 { void *up;
void * p2438;
void * v5644;
rt_int yu;
};
struct yf2446 { void *up;
rt_int p2444;
void * p2445;
void * v5653;
rt_int yu;
};
struct yf2453 { void *up;
void * p2451;
rt_int p2452;
void * v5662;
rt_int v5664;
rt_int yu;
};
struct yf2460 { void *up;
rt_int p2458;
rt_int p2459;
rt_int v5672;
rt_int yu;
};
struct yf2466 { void *up;
rt_int p2465;
rt_int v5687;
rt_int yu;
};
struct yf2473 { void *up;
rt_int p2471;
rt_int p2472;
rt_int v5702;
rt_int yu;
};
struct yf2479 { void *up;
void * p2478;
rt_int v5711;
rt_int yu;
};
struct yf2485 { void *up;
void * p2484;
void * v5719;
rt_int yu;
};
struct yf2492 { void *up;
rt_int p2490;
rt_int p2491;
void * v5726;
rt_int yu;
};
struct yf2498 { void *up;
void * p2497;
void * v5758;
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
void * v5790;
rt_int yu;
};
struct yf2541 { void *up;
void * p2540;
rt_int yu;
};
struct yf2547 { void *up;
void * p2546;
rt_int v5802;
rt_int yu;
};
struct yf2553 { void *up;
void * p2552;
rt_int v5809;
rt_int yu;
};
struct yf2559 { void *up;
void * p2558;
rt_int v5838;
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
rt_int v5890;
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
rt_int v5905;
void * v5907;
void * v5909;
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
rt_int v5958;
rt_int v5960;
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
void * v5986;
rt_int yu;
};
struct yf2654 { void *up;
void * p2653;
rt_int yu;
};
struct yf2661 { void *up;
rt_int p2659;
rt_int p2660;
rt_int v5998;
rt_int v6000;
rt_int v6002;
rt_int yu;
};
struct yf2669 { void *up;
rt_int p2666;
rt_int p2667;
rt_int p2668;
rt_int v6018;
rt_int v6020;
rt_int yu;
};
struct yf2677 { void *up;
rt_int p2674;
rt_int p2675;
rt_int p2676;
rt_int v6035;
rt_int lo6040;
rt_int hi6041;
rt_int c_6043;
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
rt_int v6054;
rt_int v6056;
rt_int v6058;
rt_int v6060;
rt_int v6062;
rt_int v6064;
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
rt_int v6093;
rt_int yu;
};
struct yf2709 { void *up;
void * p2707;
void * p2708;
rt_int v6103;
rt_int v6105;
rt_int v6107;
rt_int v6109;
void * v6111;
void * v6113;
rt_int v6115;
rt_int v6117;
rt_int v6119;
rt_int v6121;
rt_int v6123;
rt_int yu;
};
struct yf2715 { void *up;
void * p2714;
void * v6155;
void * v6157;
rt_int v6159;
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
rt_int v6174;
rt_int yu;
};
struct yf2737 { void *up;
void * p2734;
rt_int p2735;
rt_int p2736;
void * v6184;
void * v6186;
rt_int yu;
};
struct yf2744 { void *up;
void * p2742;
void * p2743;
void * v6194;
void * v6196;
void * v6198;
void * v6200;
void * v6202;
void * v6204;
rt_int yu;
};
struct yf2752 { void *up;
void * p2749;
rt_int p2750;
rt_int p2751;
void * v6233;
void * v6235;
void * v6237;
void * v6239;
void * v6241;
rt_int v6243;
void * v6245;
rt_int v6247;
rt_int v6249;
rt_int yu;
};
struct yf2759 { void *up;
rt_int p2757;
void * p2758;
void * v6296;
void * v6298;
rt_int yu;
};
struct yf2764 { void *up;
void * v6302;
rt_int yu;
};
struct yf2770 { void *up;
void * p2769;
void * v6307;
rt_int v6309;
rt_int v6311;
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
void * v6336;
rt_int yu;
};
struct yf2794 { void *up;
void * p2788;
void * * p2789;
void * p2790;
rt_int p2791;
void * p2792;
rt_int p2793;
void * v6349;
void * v6351;
void * v6353;
rt_int yu;
};
struct yf2802 { void *up;
void * p2799;
void * p2800;
rt_int p2801;
void * v6360;
void * v6362;
void * v6364;
void * v6366;
rt_int v6368;
void * v6371;
rt_int v6373;
rt_int v6375;
rt_int yu;
};
struct yf2809 { void *up;
void * p2807;
rt_int p2808;
void * v6425;
rt_int yu;
};
struct yf2815 { void *up;
rt_int p2814;
rt_int v6431;
rt_int v6434;
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
rt_int v6457;
rt_int v6459;
rt_int v6461;
rt_int v6463;
rt_int v6465;
rt_int v6467;
void * v6469;
rt_int yu;
};
struct yf2837 { void *up;
void * p2834;
rt_int p2835;
rt_int p2836;
void * v6519;
rt_int v6521;
rt_int v6524;
rt_int v6527;
rt_int v6530;
rt_int v6533;
rt_int v6536;
ydesc yd_6546;
yarr v6548;
yarr v6550;
ydesc yd_6559;
yarr v6561;
rt_int lo6578;
rt_int hi6579;
rt_int c_6581;
rt_int lo6587;
rt_int hi6588;
rt_int c_6590;
rt_int yu;
};
struct yf2844 { void *up;
void * p2842;
void * p2843;
void * v6605;
rt_int yu;
};
struct yf2851 { void *up;
void * p2849;
void * p2850;
void * v6614;
rt_int v6616;
rt_int v6618;
rt_int v6620;
rt_int yu;
};
struct yf2857 { void *up;
void * p2856;
rt_int v6639;
rt_int v6641;
rt_int yu;
};
struct yf2864 { void *up;
rt_int p2862;
rt_int p2863;
rt_int yu;
};
struct yf2871 { void *up;
rt_int p2869;
void * p2870;
rt_int v6657;
rt_int v6659;
rt_int yu;
};
struct yf2879 { void *up;
void * p2876;
rt_int p2877;
void * p2878;
rt_int v6685;
rt_int yu;
};
struct yf2885 { void *up;
void * p2884;
void * v6707;
rt_int yu;
};
struct yf2892 { void *up;
void * p2890;
rt_int p2891;
void * v6716;
rt_int v6718;
rt_int v6720;
rt_int v6722;
rt_int v6724;
rt_int lo6733;
rt_int hi6734;
rt_int c_6736;
rt_int yu;
};
struct yf2899 { void *up;
void * p2897;
void * p2898;
void * v6775;
void * v6777;
void * v6779;
rt_int v6781;
rt_int v6784;
rt_int yu;
};
struct yf2907 { void *up;
void * p2904;
rt_int p2905;
rt_int p2906;
rt_int v6809;
rt_int v6811;
rt_int yu;
};
struct yf2916 { void *up;
void * p2912;
rt_int p2913;
rt_int p2914;
rt_int * p2914_o;
rt_int p2915;
rt_int v6822;
rt_int v6824;
rt_int v6826;
ydesc yd_6835;
yarr v6837;
unsigned char v6839;
rt_int v6841;
rt_int lo6873;
rt_int hi6874;
rt_int c_6876;
rt_int yu;
};
struct yf2924 { void *up;
void * p2921;
rt_int p2922;
rt_int * p2922_o;
rt_int p2923;
rt_int * p2923_o;
void * v6911;
rt_int v6913;
rt_int v6915;
rt_int v6917;
rt_int v6919;
rt_int v6921;
void * v6923;
rt_int yu;
};
struct yf2932 { void *up;
void * p2929;
rt_int p2930;
rt_int * p2930_o;
rt_int p2931;
rt_int * p2931_o;
void * v6953;
rt_int v6955;
rt_int v6957;
rt_int v6959;
rt_int v6961;
rt_int v6963;
void * v6965;
void * v6967;
rt_int lo6984;
rt_int hi6985;
rt_int c_6987;
rt_int yu;
};
struct yf2939 { void *up;
void * p2937;
void * p2938;
rt_int yu;
};
struct yf2947 { void *up;
rt_int p2944;
void * p2945;
void * p2946;
rt_int v7015;
rt_int v7017;
void * v7019;
void * v7021;
rt_int yu;
};
struct yf2955 { void *up;
rt_int p2952;
void * p2953;
void * p2954;
rt_int v7050;
rt_int v7052;
rt_int v7054;
rt_int v7056;
rt_int v7058;
rt_int v7060;
rt_int yu;
};
struct yf2963 { void *up;
rt_int p2960;
void * p2961;
void * p2962;
rt_int v7107;
rt_int v7109;
rt_int v7111;
rt_int yu;
};
struct yf2974 { void *up;
rt_int * p2968;
void * p2969;
rt_int * p2970;
void * p2971;
void * p2972;
rt_int p2973;
rt_int v7126;
rt_int v7128;
rt_int yu;
};
struct yf2982 { void *up;
void * p2979;
rt_int p2980;
rt_int * p2980_o;
void * p2981;
void * * p2981_o;
rt_int v7135;
rt_int v7137;
rt_int yu;
};
struct yf2991 { void *up;
void * p2987;
rt_int p2988;
rt_int * p2988_o;
rt_int p2989;
rt_int * p2989_o;
rt_int p2990;
rt_int * p2990_o;
rt_int v7151;
rt_int v7153;
rt_int v7155;
rt_int v7157;
rt_int v7159;
rt_int v7161;
rt_int yu;
};
struct yf2997 { void *up;
rt_int p2996;
rt_int yu;
};
struct yf3005 { void *up;
rt_int p3002;
void * p3003;
void * p3004;
rt_int v7182;
rt_int v7184;
rt_int yu;
};
struct yf3015 { void *up;
rt_int p3010;
void * p3011;
rt_int p3012;
void * p3013;
rt_int p3014;
rt_int v7225;
rt_int yu;
};
struct yf3025 { void *up;
rt_int p3020;
void * p3021;
rt_int p3022;
void * p3023;
rt_int p3024;
rt_int yu;
};
struct yf3031 { void *up;
void * p3030;
void * v7247;
void * v7249;
rt_int yu;
};
struct yf3037 { void *up;
void * p3036;
void * v7268;
void * v7270;
rt_int yu;
};
struct yf3045 { void *up;
void * p3042;
rt_int p3043;
rt_int * p3043_o;
void * p3044;
void * * p3044_o;
void * v7279;
rt_int yu;
};
struct yf3051 { void *up;
rt_int p3050;
rt_int yu;
};
struct yf3058 { void *up;
void * p3056;
rt_int p3057;
void * v7290;
rt_int yu;
};
struct yf3064 { void *up;
void * p3063;
void * v7295;
rt_int yu;
};
struct yf3073 { void *up;
void * p3069;
void * p3070;
rt_int p3071;
rt_int * p3071_o;
void * p3072;
void * * p3072_o;
rt_int v7304;
void * v7306;
rt_int v7308;
rt_int v7310;
void * v7312;
void * v7314;
void * v7316;
rt_int v7318;
rt_int v7320;
rt_int yu;
};
struct yf3081 { void *up;
void * p3078;
rt_int * p3079;
void * p3080;
rt_int v7366;
rt_int v7368;
rt_int yu;
};
struct yf3087 { void *up;
void * p3086;
void * v7381;
rt_int yu;
};
struct yf3093 { void *up;
void * p3092;
rt_int v7392;
rt_int yu;
};
struct yf3099 { void *up;
void * p3098;
rt_int v7411;
rt_int yu;
};
struct yf3106 { void *up;
void * p3104;
rt_int p3105;
rt_int yu;
};
struct yf3114 { void *up;
void * p3111;
void * p3112;
rt_int p3113;
void * v7436;
rt_int v7438;
rt_int v7440;
rt_int yu;
};
struct yf3123 { void *up;
void * p3119;
void * p3120;
rt_int p3121;
rt_int * p3121_o;
void * p3122;
void * * p3122_o;
void * v7452;
rt_int yu;
};
struct yf3129 { void *up;
void * p3128;
void * v7461;
rt_int yu;
};
struct yf3137 { void *up;
void * p3134;
rt_int p3135;
rt_int * p3135_o;
void * p3136;
void * * p3136_o;
rt_int v7474;
rt_int v7476;
rt_int v7478;
void * v7480;
void * v7482;
void * v7484;
void * v7486;
rt_int v7488;
rt_int v7490;
rt_int yu;
};
struct yf3147 { void *up;
void * p3142;
rt_int p3143;
void * p3144;
rt_int p3145;
rt_int * p3145_o;
void * p3146;
void * * p3146_o;
rt_int yu;
};
struct yf3153 { void *up;
void * p3152;
void * v7534;
rt_int yu;
};
struct yf3162 { void *up;
yarr p3159;
rt_int p3160;
rt_int p3161;
rt_int yu;
};
struct yf3170 { void *up;
rt_int p3167;
rt_int p3168;
rt_int p3169;
rt_int yu;
};
struct yf3179 { void *up;
rt_int p3175;
yarr p3177;
rt_int p3178;
rt_int yu;
};
struct yf3188 { void *up;
rt_int p3184;
void * p3185;
rt_int p3186;
void * p3187;
rt_int v7570;
rt_int v7572;
void * v7574;
rt_int yu;
};
struct yf3194 { void *up;
void * p3193;
rt_int yu;
};
struct yf3199 { void *up;
rt_int yu;
};
struct yf3206 { void *up;
rt_int p3204;
void * p3205;
rt_int yu;
};
struct yf3215 { void *up;
void * p3211;
void * p3212;
rt_int p3213;
rt_int * p3213_o;
void * p3214;
void * * p3214_o;
rt_int v7617;
rt_int v7619;
rt_int v7621;
rt_int v7623;
void * v7625;
void * v7627;
void * v7629;
rt_int v7631;
rt_int yu;
};
struct yf3222 { void *up;
void * p3220;
void * p3221;
rt_int yu;
};
struct yf3230 { void *up;
void * p3227;
rt_int p3228;
rt_int p3229;
void * v7695;
void * v7697;
rt_int v7699;
rt_int v7701;
rt_int yu;
};
struct yf3236 { void *up;
void * p3235;
void * v7713;
rt_int yu;
};
struct yf3245 { void *up;
void * p3241;
void * p3242;
rt_int p3243;
rt_int * p3243_o;
rt_int p3244;
rt_int * p3244_o;
void * v7725;
void * v7727;
void * v7729;
rt_int yu;
};
struct yf3253 { void *up;
void * p3250;
void * p3251;
rt_int p3252;
void * v7744;
rt_int yu;
};
struct yf3260 { void *up;
void * p3258;
void * p3259;
rt_int yu;
};
struct yf3269 { void *up;
void * p3265;
rt_int p3266;
rt_int p3267;
rt_int p3268;
void * v7761;
rt_int v7763;
rt_int v7767;
rt_int v7770;
rt_int v7773;
rt_int v7776;
rt_int v7779;
rt_int v7782;
rt_int yu;
};
struct yf3275 { void *up;
rt_int p3274;
rt_int yu;
};
struct yf3286 { void *up;
void * p3280;
rt_int p3281;
void * p3282;
void * p3283;
rt_int p3284;
rt_int * p3284_o;
void * p3285;
void * * p3285_o;
void * v7842;
void * v7844;
rt_int v7846;
rt_int v7848;
rt_int yu;
};
struct yf3293 { void *up;
void * p3291;
rt_int p3292;
void * v7862;
void * v7864;
rt_int yu;
};
struct yf3304 { void *up;
void * p3298;
void * p3299;
rt_int p3300;
rt_int p3301;
rt_int p3302;
rt_int * p3302_o;
void * p3303;
void * * p3303_o;
rt_int v7875;
rt_int v7877;
rt_int v7879;
rt_int yu;
};
struct yf3310 { void *up;
rt_int p3309;
rt_int yu;
};
struct yf3320 { void *up;
rt_int p3315;
void * p3316;
rt_int p3317;
void * p3318;
rt_int p3319;
void * v7913;
void * v7915;
void * v7917;
void * v7919;
rt_int v7921;
rt_int yu;
};
struct yf3330 { void *up;
rt_int p3325;
void * p3326;
rt_int p3327;
void * p3328;
rt_int p3329;
rt_int v7963;
rt_int yu;
};
struct yf3340 { void *up;
void * p3335;
void * p3336;
rt_int p3337;
rt_int p3338;
rt_int * p3338_o;
void * p3339;
void * * p3339_o;
void * v7972;
void * v7974;
rt_int v7976;
rt_int v7978;
rt_int yu;
};
struct yf3349 { void *up;
void * p3345;
void * p3346;
rt_int p3347;
rt_int * p3347_o;
void * p3348;
void * * p3348_o;
void * v7991;
void * v7993;
rt_int v7995;
rt_int v7997;
rt_int v7999;
void * v8001;
rt_int v8003;
rt_int v8005;
rt_int v8007;
rt_int v8009;
rt_int v8011;
rt_int v8014;
void * v8016;
rt_int v8018;
rt_int yu;
};
struct yf3357 { void *up;
void * p3354;
rt_int p3355;
rt_int p3356;
void * v8080;
void * v8082;
rt_int v8084;
rt_int v8086;
rt_int yu;
};
struct yf3365 { void *up;
yarr p3363;
rt_int p3364;
rt_int v8095;
rt_int yu;
};
struct yf3375 { void *up;
yarr p3371;
rt_int p3372;
yarr p3374;
rt_int v8101;
rt_int yu;
};
struct yf3381 { void *up;
rt_int p3380;
rt_int lo8111;
rt_int hi8112;
rt_int c_8114;
rt_int yu;
};
struct yf3386 { void *up;
rt_int yu;
};
struct yf3392 { void *up;
rt_int p3391;
rt_int yu;
};
struct yf3398 { void *up;
void * p3397;
rt_int v8133;
rt_int yu;
};
struct yf3404 { void *up;
void * p3403;
rt_int v8137;
rt_int v8139;
rt_int v8141;
void * v8143;
void * v8145;
rt_int v8147;
void * v8149;
rt_int v8151;
rt_int yu;
};
struct yf3411 { void *up;
void * p3409;
void * p3410;
void * v8218;
void * v8220;
rt_int v8222;
rt_int v8224;
rt_int v8226;
rt_int v8228;
rt_int yu;
};
struct yf3419 { void *up;
void * p3416;
void * p3417;
void * p3418;
rt_int v8250;
void * v8252;
void * v8254;
void * v8256;
rt_int v8258;
rt_int v8260;
rt_int v8262;
rt_int v8264;
rt_int yu;
};
struct yf3426 { void *up;
void * p3424;
void * p3425;
void * v8277;
void * v8279;
rt_int v8281;
rt_int v8284;
rt_int lo8289;
rt_int hi8290;
rt_int c_8292;
rt_int yu;
};
struct yf3432 { void *up;
void * p3431;
void * v8302;
rt_int v8304;
rt_int yu;
};
struct yf3438 { void *up;
void * p3437;
void * v8312;
rt_int yu;
};
struct yf3444 { void *up;
void * p3443;
rt_int v8326;
void * v8328;
rt_int v8330;
rt_int v8332;
rt_int yu;
};
struct yf3451 { void *up;
void * p3449;
rt_int p3450;
void * v8357;
void * v8359;
rt_int yu;
};
struct yf3457 { void *up;
void * p3456;
void * v8383;
rt_int yu;
};
struct yf3463 { void *up;
void * p3462;
rt_int v8387;
void * v8389;
rt_int yu;
};
struct yf3470 { void *up;
void * p3468;
void * p3469;
rt_int v8395;
rt_int v8397;
void * v8399;
void * v8401;
rt_int v8403;
rt_int yu;
};
struct yf3475 { void *up;
void * v8409;
rt_int v8411;
rt_int yu;
};
struct yf3481 { void *up;
void * p3480;
rt_int v8420;
rt_int v8422;
rt_int v8424;
rt_int v8426;
rt_int v8428;
rt_int v8430;
rt_int v8432;
void * v8434;
void * v8436;
void * v8438;
void * v8440;
rt_int v8442;
rt_int v8444;
rt_int v8446;
rt_int v8448;
void * v8450;
rt_int yu;
};
struct yf3487 { void *up;
void * p3486;
void * v8527;
rt_int v8529;
rt_int v8531;
rt_int v8533;
void * v8535;
rt_int yu;
};
struct yf3495 { void *up;
rt_int p3492;
rt_int p3493;
rt_int p3494;
rt_int yu;
};
struct yf3501 { void *up;
void * p3500;
rt_int v8567;
rt_int v8569;
rt_int v8571;
void * v8573;
void * v8575;
rt_int yu;
};
struct yf3507 { void *up;
void * p3506;
rt_int v8591;
rt_int v8593;
rt_int yu;
};
struct yf3513 { void *up;
void * p3512;
void * v8626;
rt_int yu;
};
struct yf3519 { void *up;
void * p3518;
void * v8641;
rt_int yu;
};
struct yf3525 { void *up;
void * p3524;
void * v8655;
void * v8657;
void * v8659;
rt_int yu;
};
struct yf3534 { void *up;
void * p3530;
void * p3531;
void * * p3531_o;
rt_int p3532;
rt_int * p3532_o;
rt_int p3533;
rt_int * p3533_o;
void * v8667;
void * v8669;
rt_int yu;
};
struct yf3542 { void *up;
void * p3539;
rt_int p3540;
rt_int p3541;
void * v8679;
rt_int yu;
};
struct yf3548 { void *up;
void * p3547;
void * v8684;
rt_int v8686;
rt_int v8688;
void * v8690;
void * v8692;
rt_int yu;
};
struct yf3554 { void *up;
void * p3553;
void * v8697;
rt_int yu;
};
struct yf3561 { void *up;
void * p3559;
rt_int p3560;
void * v8703;
rt_int v8705;
rt_int v8707;
void * v8709;
rt_int yu;
};
struct yf3568 { void *up;
void * p3566;
yarr * p3567;
void * v8714;
rt_int v8716;
void * v8719;
rt_int lo8728;
rt_int hi8729;
rt_int c_8731;
rt_int yu;
};
struct yf3575 { void *up;
void * p3573;
void * p3574;
void * v8745;
void * v8747;
rt_int v8749;
rt_int v8751;
rt_int v8753;
rt_int v8755;
rt_int v8757;
rt_int v8759;
rt_int v8761;
rt_int v8763;
yarr v8765;
yarr v8767;
rt_int v8769;
rt_int v8771;
rt_int v8773;
rt_int v8775;
void * v8777;
void * v8779;
void * v8781;
void * v8783;
rt_int lo8797;
rt_int hi8798;
rt_int c_8800;
rt_int yu;
};
struct yf3583 { void *up;
void * p3580;
rt_int p3581;
rt_int p3582;
void * v8822;
void * v8824;
rt_int v8826;
rt_int v8828;
void * v8830;
void * v8832;
void * v8834;
rt_int v8836;
rt_int v8838;
rt_int yu;
};
struct yf8974 { struct yf3588 *up;
rt_int p8972;
rt_int p8973;
rt_int yu;
};
struct yf8981 { struct yf3588 *up;
rt_int p8979;
rt_int p8980;
void * v9006;
rt_int yu;
};
struct yf8986 { struct yf3588 *up;
yR140 v9019;
rt_int v9021;
rt_int v9023;
void * v9025;
rt_int lo9029;
rt_int hi9030;
rt_int c_9032;
rt_int lo9041;
rt_int hi9042;
rt_int c_9044;
rt_int lo9056;
rt_int hi9057;
rt_int c_9059;
rt_int yu;
};
struct yf8992 { struct yf3588 *up;
rt_int p8991;
rt_int yu;
};
struct yf3588 { void *up;
void * v8854;
void * v8856;
void * v8858;
rt_int v8860;
rt_int v8863;
rt_int v8866;
void * v8869;
rt_int lo8896;
rt_int hi8897;
ydesc yd_8899;
yarr v8901;
yarr v8903;
rt_int lo8909;
rt_int hi8910;
ydesc yd_8912;
yarr v8914;
rt_int lo8920;
rt_int hi8921;
ydesc yd_8923;
yarr v8925;
rt_int lo8931;
rt_int hi8932;
ydesc yd_8934;
yarr v8936;
rt_int lo8942;
rt_int hi8943;
ydesc yd_8945;
yarr v8947;
rt_int lo8953;
rt_int hi8954;
ydesc yd_8956;
yarr v8958;
rt_int v8960;
rt_int v8963;
rt_int v8965;
rt_int v8967;
void * v8969;
rt_int lo9079;
rt_int hi9080;
rt_int c_9082;
rt_int lo9090;
rt_int hi9091;
rt_int c_9093;
rt_int lo9101;
rt_int hi9102;
rt_int c_9104;
rt_int lo9117;
rt_int hi9118;
rt_int c_9120;
rt_int lo9127;
rt_int hi9128;
rt_int c_9130;
rt_int lo9140;
rt_int hi9141;
rt_int c_9143;
rt_int lo9150;
rt_int hi9151;
rt_int c_9153;
rt_int lo9163;
rt_int hi9164;
rt_int c_9166;
rt_int lo9198;
rt_int hi9199;
rt_int c_9201;
rt_int yu;
};
struct yf3596 { void *up;
rt_int p3593;
rt_int p3594;
rt_int p3595;
rt_int lo9214;
rt_int hi9215;
rt_int c_9217;
rt_int yu;
};
struct yf3602 { void *up;
rt_int p3601;
rt_int v9231;
rt_int v9233;
rt_int lo9238;
rt_int hi9239;
rt_int c_9241;
rt_int yu;
};
struct yf3608 { void *up;
void * p3607;
void * v9251;
rt_int v9253;
rt_int v9255;
rt_int yu;
};
struct yf3614 { void *up;
void * p3613;
rt_int v9272;
rt_int yu;
};
struct yf3621 { void *up;
void * p3619;
void * p3620;
rt_int v9280;
rt_int v9282;
rt_int v9285;
rt_int v9287;
rt_int lo9297;
rt_int hi9298;
rt_int c_9300;
rt_int yu;
};
struct yf3627 { void *up;
void * p3626;
rt_int yu;
};
struct yf3634 { void *up;
void * p3632;
rt_int p3633;
void * v9330;
void * v9332;
void * v9334;
void * v9336;
void * v9338;
void * v9340;
void * v9342;
rt_int v9344;
rt_int v9346;
rt_int yu;
};
struct yf3641 { void *up;
void * p3639;
void * p3640;
void * v9401;
void * v9403;
void * v9405;
rt_int v9407;
rt_int yu;
};
struct yf3647 { void *up;
void * p3646;
void * v9415;
yR140 v9417;
yR140 v9419;
rt_int v9421;
rt_int v9423;
rt_int v9425;
rt_int v9427;
rt_int v9429;
rt_int v9431;
rt_int v9433;
void * v9435;
rt_int v9437;
void * v9439;
void * v9441;
rt_int v9443;
rt_int v9445;
yR140 v9447;
rt_int yu;
};
struct yf3655 { void *up;
void * p3652;
void * p3653;
rt_int p3654;
rt_int yu;
};
struct yf3664 { void *up;
void * p3660;
void * p3661;
rt_int p3662;
rt_int p3663;
rt_int yu;
};
struct yf3672 { void *up;
void * p3669;
void * p3670;
rt_int p3671;
rt_int yu;
};
struct yf3678 { void *up;
void * p3677;
rt_int v9536;
void * v9538;
void * v9540;
void * v9542;
void * v9544;
rt_int v9546;
rt_int v9548;
rt_int v9550;
rt_int v9552;
rt_int yu;
};
struct yf3685 { void *up;
void * p3683;
void * p3684;
void * v9576;
rt_int yu;
};
struct yf3692 { void *up;
void * p3690;
void * p3691;
rt_int yu;
};
struct yf3701 { void *up;
void * p3697;
rt_int p3698;
void * p3699;
rt_int p3700;
rt_int v9586;
rt_int lo9599;
rt_int hi9600;
rt_int c_9602;
rt_int yu;
};
struct yf3708 { void *up;
rt_int p3706;
rt_int p3707;
rt_int v9611;
rt_int v9615;
rt_int v9617;
void * v9619;
rt_int lo9624;
rt_int hi9625;
rt_int c_9627;
rt_int lo9634;
rt_int hi9635;
rt_int c_9637;
rt_int yu;
};
struct yf3714 { void *up;
rt_int p3713;
void * v9645;
yR140 v9647;
void * v9649;
rt_int yu;
};
struct yf3720 { void *up;
void * p3719;
void * v9663;
void * v9665;
rt_int v9667;
rt_int v9669;
rt_int yu;
};
struct yf3726 { void *up;
void * p3725;
rt_int yu;
};
struct yf3733 { void *up;
rt_int p3731;
void * p3732;
void * v9679;
rt_int yu;
};
struct yf3741 { void *up;
void * * p3738;
void * p3739;
rt_int p3740;
void * v9686;
void * v9688;
void * v9690;
rt_int yu;
};
struct yf3748 { void *up;
void * p3746;
rt_int p3747;
void * v9700;
rt_int yu;
};
struct yf3756 { void *up;
rt_int p3753;
rt_int p3754;
void * p3755;
void * * p3755_o;
void * v9716;
rt_int yu;
};
struct yf3762 { void *up;
void * p3761;
void * v9734;
rt_int yu;
};
struct yf3771 { void *up;
rt_int p3767;
rt_int p3768;
void * p3769;
rt_int p3770;
void * v9742;
rt_int yu;
};
struct yf3778 { void *up;
rt_int p3776;
void * p3777;
rt_int yu;
};
struct yf3785 { void *up;
void * p3783;
void * p3784;
void * v9755;
rt_int lo9759;
rt_int hi9760;
rt_int c_9762;
rt_int yu;
};
struct yf3791 { void *up;
rt_int p3790;
void * v9769;
rt_int lo9773;
rt_int hi9774;
rt_int c_9776;
rt_int yu;
};
struct yf3799 { void *up;
void * p3796;
void * * p3797;
rt_int p3798;
void * v9785;
void * v9787;
rt_int v9789;
rt_int yu;
};
struct yf3807 { void *up;
void * p3804;
void * * p3805;
rt_int p3806;
void * v9796;
void * v9798;
void * v9800;
rt_int v9802;
void * v9804;
rt_int v9806;
rt_int v9808;
void * v9810;
rt_int yu;
};
struct yf3814 { void *up;
void * p3812;
rt_int p3813;
void * v9845;
void * v9847;
void * v9849;
rt_int yu;
};
struct yf3822 { void *up;
void * p3819;
void * p3820;
rt_int p3821;
void * v9857;
void * v9859;
void * v9861;
void * v9863;
rt_int yu;
};
struct yf3828 { void *up;
void * p3827;
void * v9870;
void * v9872;
void * v9874;
void * v9876;
void * v9878;
void * v9880;
void * v9882;
void * v9884;
void * v9886;
rt_int v9888;
void * v9890;
void * v9892;
rt_int v9894;
rt_int v9896;
rt_int v9898;
rt_int yu;
};
struct yf3834 { void *up;
void * p3833;
void * v9947;
rt_int yu;
};
struct yf3840 { void *up;
void * p3839;
void * v9951;
void * v9953;
void * v9955;
void * v9957;
rt_int v9959;
rt_int v9961;
rt_int v9963;
rt_int v9965;
void * v9967;
rt_int lo9975;
rt_int hi9976;
rt_int c_9978;
rt_int yu;
};
struct yf3846 { void *up;
void * p3845;
void * v9990;
void * v9992;
rt_int yu;
};
struct yf3851 { void *up;
void * v9998;
rt_int yu;
};
struct yf3858 { void *up;
void * p3856;
void * p3857;
rt_int v10009;
rt_int v10011;
rt_int v10013;
rt_int v10015;
rt_int v10017;
void * v10019;
rt_int v10021;
rt_int v10023;
void * v10025;
rt_int v10027;
rt_int v10029;
rt_int v10031;
rt_int v10033;
rt_int v10035;
rt_int v10037;
void * v10039;
void * v10041;
rt_int yu;
};
struct yf3866 { void *up;
void * p3863;
rt_int p3864;
rt_int p3865;
void * v10107;
rt_int v10109;
void * v10113;
rt_int v10115;
rt_int v10117;
rt_int yu;
};
struct yf3872 { void *up;
rt_int p3871;
rt_int v10125;
rt_int yu;
};
struct yf3878 { void *up;
void * p3877;
rt_int yu;
};
struct yf3884 { void *up;
void * p3883;
rt_int v10138;
rt_int yu;
};
struct yf3889 { void *up;
rt_int yu;
};
struct yf3895 { void *up;
void * p3894;
rt_int yu;
};
struct yf3902 { void *up;
void * p3900;
rt_int p3901;
rt_int yu;
};
struct yf3909 { void *up;
void * p3907;
rt_int p3908;
rt_int yu;
};
struct yf3916 { void *up;
void * p3914;
void * p3915;
rt_int v10182;
rt_int v10184;
rt_int v10186;
rt_int yu;
};
struct yf3923 { void *up;
void * p3921;
rt_int p3922;
void * v10195;
rt_int v10197;
rt_int yu;
};
struct yf3930 { void *up;
void * p3928;
rt_int p3929;
rt_int yu;
};
struct yf3938 { void *up;
yarr p3936;
rt_int p3937;
rt_int yu;
};
struct yf3944 { void *up;
rt_int p3943;
rt_int yu;
};
struct yf3953 { void *up;
void * p3949;
rt_int p3950;
rt_int p3951;
rt_int * p3951_o;
void * p3952;
void * * p3952_o;
rt_int v10224;
rt_int yu;
};
struct yf3961 { void *up;
void * p3958;
rt_int p3959;
rt_int * p3959_o;
void * p3960;
void * * p3960_o;
rt_int yu;
};
struct yf3967 { void *up;
void * p3966;
rt_int v10240;
void * v10242;
rt_int yu;
};
struct yf3973 { void *up;
void * p3972;
void * v10248;
rt_int v10251;
rt_int v10253;
rt_int v10255;
rt_int v10257;
rt_int v10259;
rt_int v10261;
unsigned char v10263;
void * v10265;
ydesc yd_10274;
yarr v10276;
rt_int yu;
};
struct yf3980 { void *up;
void * p3978;
void * p3979;
rt_int v10315;
rt_int v10317;
rt_int v10319;
void * v10321;
rt_int yu;
};
struct yf3990 { void *up;
rt_int p3985;
void * p3986;
rt_int p3987;
rt_int p3988;
rt_int * p3988_o;
void * p3989;
void * * p3989_o;
void * v10333;
rt_int v10335;
rt_int v10337;
rt_int v10339;
rt_int v10341;
rt_int v10343;
void * v10345;
void * v10347;
void * v10349;
void * v10351;
rt_int v10353;
rt_int v10355;
rt_int v10357;
rt_int v10359;
void * v10361;
rt_int v10363;
rt_int lo10377;
rt_int hi10378;
rt_int c_10380;
rt_int yu;
};
struct yf3995 { void *up;
rt_int v10589;
rt_int yu;
};
struct yf4001 { void *up;
rt_int p4000;
ydesc yd_10601;
yarr v10603;
rt_int v10605;
rt_int lo10609;
rt_int hi10610;
rt_int c_10612;
rt_int yu;
};
struct yf4006 { void *up;
rt_int v10618;
rt_int v10620;
void * v10622;
void * v10624;
rt_int lo10639;
rt_int hi10640;
rt_int c_10642;
rt_int yu;
};
struct yf4014 { void *up;
rt_int p4011;
yarr p4013;
rt_int yu;
};
struct yf4020 { void *up;
rt_int p4019;
rt_int v10656;
rt_int lo10663;
rt_int hi10664;
ydesc yd_10666;
yarr v10668;
yfile * v10670;
unsigned char v10672;
rt_int lo10677;
rt_int hi10678;
rt_int c_10680;
rt_int yu;
};
struct yf4027 { void *up;
rt_int p4025;
yR140 p4026;
void * v10693;
rt_int lo10699;
rt_int hi10700;
ydesc yd_10702;
yarr v10704;
yfile * v10706;
rt_int lo10711;
rt_int hi10712;
rt_int c_10714;
rt_int yu;
};
struct yf4033 { void *up;
rt_int p4032;
rt_int v10725;
rt_int yu;
};
struct yf4040 { void *up;
rt_int p4038;
rt_int p4039;
rt_int v10737;
ydesc yd_10746;
yarr v10748;
rt_int v10750;
rt_int yu;
};
struct yf4046 { void *up;
rt_int p4045;
rt_int v10774;
rt_int v10776;
rt_int yu;
};
struct yf4053 { void *up;
rt_int p4051;
rt_int p4052;
yR140 v10789;
rt_int v10791;
rt_int v10793;
rt_int yu;
};
struct yf4059 { void *up;
yR140 p4058;
rt_int v10801;
void * v10804;
rt_int lo10808;
rt_int hi10809;
rt_int c_10811;
rt_int yu;
};
struct yf4068 { void *up;
rt_int p4064;
rt_int p4065;
rt_int p4066;
rt_int p4067;
rt_int v10832;
rt_int v10834;
rt_int yu;
};
struct yf4075 { void *up;
void * p4073;
rt_int p4074;
void * v10857;
void * v10859;
void * v10861;
rt_int yu;
};
struct yf4081 { void *up;
rt_int p4080;
void * v10871;
rt_int yu;
};
struct yf4088 { void *up;
void * p4086;
void * p4087;
void * v10880;
void * v10882;
rt_int v10884;
rt_int yu;
};
struct yf4093 { void *up;
void * v10895;
void * v10897;
void * v10899;
rt_int yu;
};
struct yf4100 { void *up;
rt_int p4098;
rt_int p4099;
rt_int v10905;
rt_int v10907;
rt_int v10909;
void * v10911;
void * v10913;
void * v10915;
rt_int v10917;
rt_int yu;
};
struct yf4106 { void *up;
void * p4105;
void * v10929;
rt_int yu;
};
struct yf4111 { void *up;
void * v10933;
rt_int yu;
};
struct yf4116 { void *up;
void * v10939;
yR140 v10941;
rt_int v10943;
yR140 v10945;
rt_int yu;
};
struct yf4121 { void *up;
void * v10955;
void * v10957;
rt_int v10959;
rt_int v10961;
rt_int v10963;
rt_int v10965;
yR140 v10967;
void * v10969;
rt_int yu;
};
struct yf4127 { void *up;
void * p4126;
void * v10982;
rt_int yu;
};
struct yf4133 { void *up;
rt_int p4132;
void * v10988;
rt_int v10990;
rt_int yu;
};
struct yf4138 { void *up;
void * v11006;
void * v11008;
rt_int v11010;
rt_int v11012;
rt_int v11014;
rt_int v11016;
rt_int v11018;
rt_int v11020;
rt_int v11022;
yR140 v11024;
rt_int yu;
};
struct yf4145 { void *up;
rt_int p4143;
rt_int p4144;
rt_int v11069;
rt_int v11072;
rt_int v11075;
rt_int v11077;
rt_int v11079;
rt_int v11081;
void * v11083;
rt_int v11085;
rt_int yu;
};
struct yf4152 { void *up;
rt_int p4150;
rt_int p4151;
unsigned char v11123;
rt_int lo11128;
rt_int hi11129;
rt_int c_11131;
rt_int lo11139;
rt_int hi11140;
rt_int c_11142;
rt_int yu;
};
struct yf4158 { void *up;
void * p4157;
rt_int yu;
};
struct yf4164 { void *up;
void * p4163;
void * v11155;
rt_int v11157;
rt_int yu;
};
struct yf4172 { void *up;
void * p4169;
void * p4170;
rt_int p4171;
rt_int v11171;
void * v11173;
rt_int yu;
};
struct yf4180 { void *up;
void * p4177;
void * p4178;
rt_int p4179;
rt_int v11197;
rt_int yu;
};
struct yf4187 { void *up;
void * p4185;
void * p4186;
rt_int v11219;
rt_int v11221;
rt_int v11223;
rt_int v11225;
rt_int v11227;
rt_int v11229;
void * v11231;
void * v11233;
rt_int v11235;
rt_int v11237;
yR140 v11240;
rt_int yu;
};
struct yf4193 { void *up;
void * p4192;
rt_int yu;
};
struct yf4199 { void *up;
rt_int p4198;
rt_int v11292;
rt_int lo11298;
rt_int hi11299;
rt_int c_11301;
rt_int yu;
};
struct yf4204 { void *up;
void * v11312;
rt_int yu;
};
struct yf4210 { void *up;
rt_int p4209;
rt_int v11317;
rt_int v11319;
rt_int v11321;
ydesc yd_11330;
yarr v11332;
rt_int v11334;
rt_int yu;
};
struct yf4218 { void *up;
yarr p4216;
rt_int p4217;
void * v11354;
void * v11356;
void * v11358;
void * v11360;
rt_int lo11368;
rt_int hi11369;
rt_int c_11371;
rt_int yu;
};
struct yf4226 { void *up;
yarr p4224;
void * p4225;
void * v11383;
rt_int yu;
};
struct yf4234 { void *up;
yarr p4232;
rt_int p4233;
void * v11389;
rt_int yu;
};
struct yf4244 { void *up;
yarr p4240;
yarr p4241;
yarr p4242;
rt_int p4243;
void * v11397;
void * v11399;
void * v11401;
rt_int yu;
};
struct yf4252 { void *up;
rt_int p4249;
yarr p4251;
void * v11410;
rt_int yu;
};
struct yf4257 { void *up;
rt_int yu;
};
struct yf4262 { void *up;
void * v11500;
yR140 v11502;
rt_int yu;
};
struct yf4267 { void *up;
rt_int yu;
};
struct yf4272 { void *up;
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
static rt_int c_11534;
static rt_int c_11544;
static rt_int c_11553;
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
static void * yr2848_ApplyStorage(void * a_p2849, void * a_p2850);
static rt_int yr2855_AtAddress(void * a_p2856);
static rt_int yr2861_StoreAt(rt_int a_p2862, rt_int a_p2863);
static rt_int yr2868_ExtentCode(rt_int a_p2869, void * a_p2870);
static rt_int yr2875_SpaceArg(void * a_p2876, rt_int a_p2877, void * a_p2878);
static rt_int yr2883_PackedComponent(void * a_p2884);
static rt_int yr2889_CharOrd(void * a_p2890, rt_int a_p2891);
static void * yr2896_AlphabetFor(void * a_p2897, void * a_p2898);
static rt_int yr2903_CharValue(void * a_p2904, rt_int a_p2905, rt_int a_p2906);
static rt_int yr2911_StringCodes(void * a_p2912, rt_int a_p2913, rt_int * a_p2914, rt_int a_p2915);
static void yr2920_Manifest(void * a_p2921, rt_int * a_p2922, rt_int * a_p2923);
static void yr2928_ManifestStd(void * a_p2929, rt_int * a_p2930, rt_int * a_p2931);
static rt_int yr2936_NeedsConv(void * a_p2937, void * a_p2938);
static rt_int yr2943_ConvertRecord(rt_int a_p2944, void * a_p2945, void * a_p2946);
static rt_int yr2951_ConvertArray(rt_int a_p2952, void * a_p2953, void * a_p2954);
static rt_int yr2959_RescaleCode(rt_int a_p2960, void * a_p2961, void * a_p2962);
static void yr2967_CommonScale(rt_int * a_p2968, void * a_p2969, rt_int * a_p2970, void * a_p2971, void * a_p2972, rt_int a_p2973);
static void yr2978_FixLiteral(void * a_p2979, rt_int * a_p2980, void * * a_p2981);
static void yr2986_ManifestFix(void * a_p2987, rt_int * a_p2988, rt_int * a_p2989, rt_int * a_p2990);
static rt_int yr2995_FloatChk(rt_int a_p2996);
static rt_int yr3001_Convert(rt_int a_p3002, void * a_p3003, void * a_p3004);
static rt_int yr3009_StoreText(rt_int a_p3010, void * a_p3011, rt_int a_p3012, void * a_p3013, rt_int a_p3014);
static void yr3019_Store(rt_int a_p3020, void * a_p3021, rt_int a_p3022, void * a_p3023, rt_int a_p3024);
static rt_int yr3029_IsVariable(void * a_p3030);
static void yr3035_CheckPure(void * a_p3036);
static void yr3041_LValue(void * a_p3042, rt_int * a_p3043, void * * a_p3044);
static rt_int yr3049_Paren(rt_int a_p3050);
static void * yr3055_Lit(void * a_p3056, rt_int a_p3057);
static void * yr3062_Qualifier(void * a_p3063);
static void yr3068_Expr(void * a_p3069, void * a_p3070, rt_int * a_p3071, void * * a_p3072);
static void yr3077_CheckDefined(void * a_p3078, rt_int * a_p3079, void * a_p3080);
static rt_int yr3085_Addressable(void * a_p3086);
static rt_int yr3091_UndefMacro(void * a_p3092);
static rt_int yr3097_UndefValue(void * a_p3098);
static rt_int yr3103_RawCode(void * a_p3104, rt_int a_p3105);
static rt_int yr3110_VariantTest(void * a_p3111, void * a_p3112, rt_int a_p3113);
static void yr3118_NameExpr(void * a_p3119, void * a_p3120, rt_int * a_p3121, void * * a_p3122);
static rt_int yr3127_IsMainStore(void * a_p3128);
static void yr3133_IndexExpr(void * a_p3134, rt_int * a_p3135, void * * a_p3136);
static void yr3141_NegExpr(void * a_p3142, rt_int a_p3143, void * a_p3144, rt_int * a_p3145, void * * a_p3146);
static void * yr3151_Unbounded(void * a_p3152);
static rt_int yr3157_Call2(yarr a_p3159, rt_int a_p3160, rt_int a_p3161);
static rt_int yr3166_Call2T(rt_int a_p3167, rt_int a_p3168, rt_int a_p3169);
static rt_int yr3174_Infix(rt_int a_p3175, yarr a_p3177, rt_int a_p3178);
static rt_int yr3183_EqCode(rt_int a_p3184, void * a_p3185, rt_int a_p3186, void * a_p3187);
static rt_int yr3192_IsOrdered(void * a_p3193);
static rt_int yr3198_FDivName(void);
static rt_int yr3203_FixToFloat(rt_int a_p3204, void * a_p3205);
static void yr3210_BinExpr(void * a_p3211, void * a_p3212, rt_int * a_p3213, void * * a_p3214);
static rt_int yr3219_Fits(void * a_p3220, void * a_p3221);
static void * yr3226_Choose(void * a_p3227, rt_int a_p3228, rt_int a_p3229);
static rt_int yr3234_HidesStandard(void * a_p3235);
static void yr3240_CompileArgs(void * a_p3241, void * a_p3242, rt_int * a_p3243, rt_int * a_p3244);
static void yr3249_CheckUnresolved(void * a_p3250, void * a_p3251, rt_int a_p3252);
static rt_int yr3257_SameAsFormal(void * a_p3258, void * a_p3259);
static rt_int yr3264_CallCode(void * a_p3265, rt_int a_p3266, rt_int a_p3267, rt_int a_p3268);
static rt_int yr3273_Num(rt_int a_p3274);
static rt_int yr3279_UserOp(void * a_p3280, rt_int a_p3281, void * a_p3282, void * a_p3283, rt_int * a_p3284, void * * a_p3285);
static void yr3290_NoteCall(void * a_p3291, rt_int a_p3292);
static void yr3297_Directive(void * a_p3298, void * a_p3299, rt_int a_p3300, rt_int a_p3301, rt_int * a_p3302, void * * a_p3303);
static rt_int yr3308_Suppressed(rt_int a_p3309);
static rt_int yr3314_UserAssign(rt_int a_p3315, void * a_p3316, rt_int a_p3317, void * a_p3318, rt_int a_p3319);
static void yr3324_Assign(rt_int a_p3325, void * a_p3326, rt_int a_p3327, void * a_p3328, rt_int a_p3329);
static void yr3334_CallExpr(void * a_p3335, void * a_p3336, rt_int a_p3337, rt_int * a_p3338, void * * a_p3339);
static void yr3344_Denote(void * a_p3345, void * a_p3346, rt_int * a_p3347, void * * a_p3348);
static rt_int yr3353_VariantOf(void * a_p3354, rt_int a_p3355, rt_int a_p3356);
static void yr3361_Emit2(yarr a_p3363, rt_int a_p3364);
static void yr3369_Emit3(yarr a_p3371, rt_int a_p3372, yarr a_p3374);
static void yr3379_PopTo(rt_int a_p3380);
static void yr3385_LeaveBlock(void);
static rt_int yr3390_RaiseCode(rt_int a_p3391);
static void yr3396_BlockStatements(void * a_p3397);
static void yr3402_BlockStatements1(void * a_p3403);
static rt_int yr3408_SameDesig(void * a_p3409, void * a_p3410);
static void yr3415_CheckVariantSelected(void * a_p3416, void * a_p3417, void * a_p3418);
static void yr3423_CheckCaseLabels(void * a_p3424, void * a_p3425);
static rt_int yr3430_Falls(void * a_p3431);
static rt_int yr3436_BlockFalls(void * a_p3437);
static rt_int yr3442_Completes(void * a_p3443);
static rt_int yr3448_Exits(void * a_p3449, rt_int a_p3450);
static void yr3455_Statements(void * a_p3456);
static rt_int yr3461_Cond(void * a_p3462);
static rt_int yr3467_Label(void * a_p3468, void * a_p3469);
static void yr3474_CopyOut(void);
static void yr3479_Statement(void * a_p3480);
static void yr3485_ForStatement(void * a_p3486);
static rt_int yr3491_Join(rt_int a_p3492, rt_int a_p3493, rt_int a_p3494);
static void yr3499_ReturnStatement(void * a_p3500);
static void yr3505_BeginStatement(void * a_p3506);
static void yr3511_PlaceLabel(void * a_p3512);
static void yr3517_GotoStatement(void * a_p3518);
static void yr3523_CheckLabels(void * a_p3524);
static void yr3529_DesigBase(void * a_p3530, void * * a_p3531, rt_int * a_p3532, rt_int * a_p3533);
static void * yr3538_Note(void * a_p3539, rt_int a_p3540, rt_int a_p3541);
static void yr3546_NoteWrite(void * a_p3547);
static void yr3552_NoteFree(void * a_p3553);
static void yr3558_NoteFreeDeref(void * a_p3559, rt_int a_p3560);
static rt_int yr3565_DSteps(void * a_p3566, yarr * a_p3567);
static rt_int yr3572_Overlaps(void * a_p3573, void * a_p3574);
static void yr3579_CheckActuals(void * a_p3580, rt_int a_p3581, rt_int a_p3582);
static void yr3587_CheckEffects(void);
static rt_int yr3592_DynIndex(rt_int a_p3593, rt_int a_p3594, rt_int a_p3595);
static rt_int yr3600_RoutineCName(rt_int a_p3601);
static void * yr3606_FormalRep(void * a_p3607);
static rt_int yr3612_ParamCType(void * a_p3613);
static void yr3618_InstallTrap(void * a_p3619, void * a_p3620);
static rt_int yr3625_DeclType(void * a_p3626);
static void yr3631_RoutineHeader(void * a_p3632, rt_int a_p3633);
static void * yr3638_SameSignature(void * a_p3639, void * a_p3640);
static void yr3645_RoutineBody(void * a_p3646);
static void yr3651_DeclareStorage(void * a_p3652, void * a_p3653, rt_int a_p3654);
static void yr3659_DeclareAt(void * a_p3660, void * a_p3661, rt_int a_p3662, rt_int a_p3663);
static void yr3668_InitStorage(void * a_p3669, void * a_p3670, rt_int a_p3671);
static void yr3676_SimpleDecl(void * a_p3677);
static void yr3682_NoteAlphabet(void * a_p3683, void * a_p3684);
static void yr3689_AtLocation(void * a_p3690, void * a_p3691);
static void yr3696_Defer(void * a_p3697, rt_int a_p3698, void * a_p3699, rt_int a_p3700);
static void yr3705_RunDeferred(rt_int a_p3706, rt_int a_p3707);
static void yr3712_ModuleInit(rt_int a_p3713);
static void yr3718_Declarations(void * a_p3719);
static void yr3724_DeclareRoutine(void * a_p3725);
static void * yr3730_Alias(rt_int a_p3731, void * a_p3732);
static void yr3737_AddLits(void * * a_p3738, void * a_p3739, rt_int a_p3740);
static rt_int yr3745_Provides(void * a_p3746, rt_int a_p3747);
static rt_int yr3752_ImportLater(rt_int a_p3753, rt_int a_p3754, void * * a_p3755);
static void * yr3760_OneDecl(void * a_p3761);
static void * yr3766_Lazy(rt_int a_p3767, rt_int a_p3768, void * a_p3769, rt_int a_p3770);
static void yr3775_SetLazy(rt_int a_p3776, void * a_p3777);
static void yr3782_ResolveFrom(void * a_p3783, void * a_p3784);
static void yr3789_ResolveLater(rt_int a_p3790);
static void yr3795_LazyModule(void * a_p3796, void * * a_p3797, rt_int a_p3798);
static void yr3803_ResolveItem(void * a_p3804, void * * a_p3805, rt_int a_p3806);
static void yr3811_DefineAll(void * a_p3812, rt_int a_p3813);
static void * yr3818_ExtendWith(void * a_p3819, void * a_p3820, rt_int a_p3821);
static void yr3826_CompileModule(void * a_p3827);
static void yr3832_DeclareTemplate(void * a_p3833);
static void yr3838_Instantiate(void * a_p3839);
static void yr3844_DeclareProcess(void * a_p3845);
static void yr3850_AwaitProcesses(void);
static void yr3855_Activate(void * a_p3856, void * a_p3857);
static void yr3862_CheckLifeScope(void * a_p3863, rt_int a_p3864, rt_int a_p3865);
static rt_int yr3870_LifeDepth(rt_int a_p3871);
static rt_int yr3876_MonitorPath(void * a_p3877);
static void yr3882_EnterMonitor(void * a_p3883);
static void yr3888_LeaveMonitor(void);
static void yr3893_TerminateStatement(void * a_p3894);
static void yr3899_DeclareSignal(void * a_p3900, rt_int a_p3901);
static void yr3906_DeclareSignalArray(void * a_p3907, rt_int a_p3908);
static void yr3913_DeviceSignal(void * a_p3914, void * a_p3915);
static void * yr3920_Arg(void * a_p3921, rt_int a_p3922);
static void yr3927_NArgs(void * a_p3928, rt_int a_p3929);
static rt_int yr3934_Call1(yarr a_p3936, rt_int a_p3937);
static rt_int yr3942_Addr(rt_int a_p3943);
static void yr3948_StdVar(void * a_p3949, rt_int a_p3950, rt_int * a_p3951, void * * a_p3952);
static void yr3957_NumArg(void * a_p3958, rt_int * a_p3959, void * * a_p3960);
static rt_int yr3965_IntArg(void * a_p3966);
static void yr3971_CodeInsert(void * a_p3972);
static void * yr3977_ManifestScale(void * a_p3978, void * a_p3979);
static void yr3984_StdCall(rt_int a_p3985, void * a_p3986, rt_int a_p3987, rt_int * a_p3988, void * * a_p3989);
static rt_int yr3994_ArgCount(void);
static rt_int yr3999_ArgTxt(rt_int a_p4000);
static void yr4005_ReadArgs(void);
static rt_int yr4010_LibPath(rt_int a_p4011, yarr a_p4013);
static rt_int yr4018_ReadInto(rt_int a_p4019);
static void yr4024_WriteFile(rt_int a_p4025, yR140 a_p4026);
static rt_int yr4031_ReadLibLine(rt_int a_p4032);
static void yr4037_DigitsIn(rt_int a_p4038, rt_int a_p4039);
static void yr4044_TokenText(rt_int a_p4045);
static yR140 yr4050_TokensText(rt_int a_p4051, rt_int a_p4052);
static rt_int yr4057_Fingerprint(yR140 a_p4058);
static rt_int yr4063_TokEq(rt_int a_p4064, rt_int a_p4065, rt_int a_p4066, rt_int a_p4067);
static void yr4072_CheckSynopsis(void * a_p4073, rt_int a_p4074);
static rt_int yr4079_IsSegment(rt_int a_p4080);
static void yr4085_CheckPairing(void * a_p4086, void * a_p4087);
static void yr4092_PairInInput(void);
static void yr4097_LoadSynopsis(rt_int a_p4098, rt_int a_p4099);
static void yr4104_LoadImports(void * a_p4105);
static void * yr4110_LastSegment(void);
static void yr4115_Interface(void);
static void yr4120_Segment(void);
static rt_int yr4125_UsesText(void * a_p4126);
static void yr4131_WriteSegment(rt_int a_p4132);
static void yr4137_LinkProgram(void);
static void yr4142_CheckUse(rt_int a_p4143, rt_int a_p4144);
static rt_int yr4149_SegKey(rt_int a_p4150, rt_int a_p4151);
static rt_int yr4156_HeaderHash(void * a_p4157);
static rt_int yr4162_ParamList(void * a_p4163);
static void yr4168_SegStorage(void * a_p4169, void * a_p4170, rt_int a_p4171);
static void yr4176_SegRoutine(void * a_p4177, void * a_p4178, rt_int a_p4179);
static void yr4184_SegActivation(void * a_p4185, void * a_p4186);
static rt_int yr4191_UseLine(void * a_p4192);
static rt_int yr4197_FactsPrint(rt_int a_p4198);
static void yr4203_ApplyFacts(void);
static void yr4208_ApplyFile(rt_int a_p4209);
static void yr4214_ApplyLine(yarr a_p4216, rt_int a_p4217);
static void yr4222_StdRep(yarr a_p4224, void * a_p4225);
static void yr4230_StdOp(yarr a_p4232, rt_int a_p4233);
static void * yr4238_LitList(yarr a_p4240, yarr a_p4241, yarr a_p4242, rt_int a_p4243);
static void * yr4248_Abstract(rt_int a_p4249, yarr a_p4251);
static void yr4256_Predefine(void);
static void yr4261_Translate(void);
static void yr4266_WriteProgram(void);
static void yr4271_WriteHead(void);
static rt_int yr8971_At(struct yf3588 *up, rt_int a_p8972, rt_int a_p8973);
static rt_int yr8978_Reaches(struct yf3588 *up, rt_int a_p8979, rt_int a_p8980);
static void yr8985_WriteFacts(struct yf3588 *up);
static rt_int yr8990_VName(struct yf3588 *up, rt_int a_p8991);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4277 = Y_UNDEF_I;
F.v4277 = INT64_C(0);
{ rt_int hi4282 = 127;
for (rt_int i4281 = 0; i4281 <= hi4282; i4281++) { F.c_4280 = i4281; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_4280)] = Y_DEFI(F.v4277);
((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v4277))] = F.c_4280;
F.v4277 = y_range(y_add(Y_DEFI(F.v4277), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4281 == hi4282) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv4292 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv4292; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv4297 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv4297; }
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
F.lo4316 = y_low(F.p1039, INT64_C(1));
F.hi4317 = y_high(F.p1039, INT64_C(1));
{ rt_int hi4321 = F.hi4317;
for (rt_int i4320 = F.lo4316; i4320 <= hi4321; i4320++) { F.c_4319 = i4320; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_4319)]));
if (i4320 == hi4321) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_ST(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
F.v4325 = Y_UNDEF_I;
if ((F.p1045 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v4325 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]);
while ((Y_DEFI(F.v4325) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1045)]))))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4325))]));
F.v4325 = y_range(y_add(Y_DEFI(F.v4325), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_4340, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_4340, &F.v4342);
F.v4344 = Y_UNDEF_I;
F.v4344 = INT64_C(0);
F.v4347 = Y_UNDEF_I;
F.v4347 = F.p1051;
if ((Y_DEFI(F.v4347) < INT64_C(0))) {
yr1031_SC(45);
F.v4347 = y_range(y_neg(Y_DEFI(F.v4347)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v4344 = y_range(y_add(Y_DEFI(F.v4344), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v4342).p)[y_ix1(F.v4342, Y_DEFI(F.v4344))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v4347), INT64_C(10))), INT64_C(48)))]);
F.v4347 = y_range(y_div(Y_DEFI(F.v4347), INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v4347) == INT64_C(0))) {
goto yl_4351;
}
}
yl_4351: ;
while ((Y_DEFI(F.v4344) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v4342).p)[y_ix1(F.v4342, Y_DEFI(F.v4344))]));
F.v4344 = y_range(y_sub(Y_DEFI(F.v4344), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4366 = Y_UNDEF_I;
F.v4366 = Y_DEFI(((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))]);
v955 = y_range(y_sub(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = y_range(y_sub(Y_DEFI(v941), Y_DEFI(F.v4366)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4377 = y_add(Y_DEFI(F.v4366), INT64_C(1));
F.hi4378 = Y_DEFI(v941);
{ rt_int hi4382 = F.hi4378;
for (rt_int i4381 = F.lo4377; i4381 <= hi4382; i4381++) { F.c_4380 = i4381; Y_TICK();
yr1020_PoolAdd(Y_DEFB(((unsigned char *)(v939).p)[y_ix1(v939, F.c_4380)]));
if (i4381 == hi4382) break;
}}
v941 = Y_DEFI(F.v4366);
{ rt_int rv4383 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4383; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
yr1037_SA(F.p1063);
{ rt_int rv4386 = yr1056_SE();
y_use = F.yu; return rv4386; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v4391 = Y_UNDEF_I;
F.v4391 = INT64_C(0);
F.v4394 = Y_UNDEF_I;
F.v4396 = Y_UNDEF_I;
F.lo4401 = F.p1069;
F.hi4402 = y_sub((y_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi4406 = F.hi4402;
for (rt_int i4405 = F.lo4401; i4405 <= hi4406; i4405++) { F.c_4404 = i4405; Y_TICK();
F.v4391 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v4391), INT64_C(31))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4404)]))]))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4405 == hi4406) break;
}}
for (;;) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4391))]) == INT64_C(0))) {
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = F.p1069;
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = F.p1070;
((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4391))] = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
{ rt_int rv4416 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4416; }
}
F.v4394 = Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4391))]);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4394))]) == F.p1070)) {
F.v4396 = 1;
F.lo4423 = INT64_C(0);
F.hi4424 = y_sub(F.p1070, INT64_C(1));
{ rt_int hi4428 = F.hi4424;
for (rt_int i4427 = F.lo4423; i4427 <= hi4428; i4427++) { F.c_4426 = i4427; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4394))]), F.c_4426))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(F.p1069, F.c_4426))])))) {
F.v4396 = 0;
}
if (i4427 == hi4428) break;
}}
if (Y_DEFI(F.v4396)) {
{ rt_int rv4432 = y_range(Y_DEFI(F.v4394), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4432; }
}
}
F.v4391 = y_range(y_mod((y_add(Y_DEFI(F.v4391), INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_4412: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv4439 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]));
y_use = F.yu; return rv4439; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv4442 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv4442; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4447 = 1;
y_use = F.yu; return rv4447; }
}
if ((!(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]) == Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1090)])))) {
{ rt_int rv4449 = 0;
y_use = F.yu; return rv4449; }
}
F.lo4455 = INT64_C(0);
F.hi4456 = y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]), INT64_C(1));
{ rt_int hi4460 = F.hi4456;
for (rt_int i4459 = F.lo4455; i4459 <= hi4460; i4459++) { F.c_4458 = i4459; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)]), F.c_4458))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)]), F.c_4458))])))) {
{ rt_int rv4464 = 0;
y_use = F.yu; return rv4464; }
}
if (i4459 == hi4460) break;
}}
{ rt_int rv4466 = 1;
y_use = F.yu; return rv4466; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4471 = Y_UNDEF_I;
F.v4471 = INT64_C(0);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1096)]) < (y_add((y_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4481 = 0;
y_use = F.yu; return rv4481; }
}
F.lo4487 = y_low(F.p1098, INT64_C(1));
F.hi4488 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4492 = F.hi4488;
for (rt_int i4491 = F.lo4487; i4491 <= hi4492; i4491++) { F.c_4490 = i4491; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)]), Y_DEFI(F.v4471)))]) == Y_DEFB(((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4490)])))) {
{ rt_int rv4495 = 0;
y_use = F.yu; return rv4495; }
}
F.v4471 = y_range(y_add(Y_DEFI(F.v4471), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4491 == hi4492) break;
}}
{ rt_int rv4499 = 1;
y_use = F.yu; return rv4499; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4506 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)]), F.p1105)), INT64_C(1)))]);
y_use = F.yu; return rv4506; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
F.v4511 = Y_UNDEF_P;
({ F.v4511 = y_new(sizeof(yR135)); y_initu(&yd_136, y_deref(F.v4511)); });
(*(yR135 *)y_deref(Y_DEFP(F.v4511))) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
if ((Y_DEFP(((*F.p1111)).f_head) == ((void *)0))) {
((*F.p1111)).f_head = Y_DEFP(F.v4511);
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1111)).f_tail)))).f_next = Y_DEFP(F.v4511);
}
((*F.p1111)).f_tail = Y_DEFP(F.v4511);
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
F.v4525 = Y_UNDEF_I;
F.v4525 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]);
while ((Y_DEFI(F.v4525) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1146)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4525))]); y_put_value(&v911, &y_d_byte, &pv); });
F.v4525 = y_range(y_add(Y_DEFI(F.v4525), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4532 = Y_UNDEF_P;
F.v4532 = Y_DEFP((F.p1152).f_head);
while ((!(Y_DEFP(F.v4532) == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v4532)))).f_t));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
F.v4532 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v4532)))).f_next);
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
F.v4538 = Y_UNDEF_I;
v955 = INT64_C(0);
v941 = INT64_C(0);
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1158);
yr1037_SA(y_str(": ", 2));
yr1044_ST(F.p1159);
F.v4538 = yr1056_SE();
yr1145_WriteTxt(Y_DEFI(F.v4538));
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
F.v4548 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1165);
yr1037_SA(y_str(": warning: ", 11));
yr1044_ST(F.p1166);
F.v4548 = yr1056_SE();
yr1171_WriteTo(&v994, Y_DEFI(F.v4548));
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
yr1026_SB();
yr1037_SA(y_str("/* ", 3));
yr1044_ST(Y_DEFI(F.v4548));
yr1037_SA(y_str(" */", 3));
F.v4548 = yr1056_SE();
yr1110_Put(&v992, Y_DEFI(F.v4548));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4558 = Y_UNDEF_I;
F.v4558 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]);
while ((Y_DEFI(F.v4558) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1173)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4558))]); y_put_value(&(*F.p1172), &y_d_byte, &pv); });
F.v4558 = y_range(y_add(Y_DEFI(F.v4558), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v4570 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p1188);
yr1037_SA(F.p1190);
F.v4570 = yr1056_SE();
yr1157_Fail(F.p1187, Y_DEFI(F.v4570));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = y_range(y_add(Y_DEFI(v958), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4574 = Y_DEFI(v958);
y_use = F.yu; return rv4574; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4578 = Y_UNDEF_I;
F.v4578 = yr1195_NewSerial();
yr1026_SB();
yr1037_SA(F.p1202);
yr1050_SI(Y_DEFI(F.v4578));
{ rt_int rv4579 = yr1056_SE();
y_use = F.yu; return rv4579; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1965_InitWords(void) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4582 = Y_UNDEF_I;
F.v4584 = Y_UNDEF_I;
F.v4586 = Y_UNDEF_I;
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
F.v4586 = yr1056_SE();
v922 = INT64_C(0);
F.v4582 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4586))]);
F.lo4603 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4586))]);
F.hi4604 = y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4586))]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4586))]))), INT64_C(1));
{ rt_int hi4608 = F.hi4604;
for (rt_int i4607 = F.lo4603; i4607 <= hi4608; i4607++) { F.c_4606 = i4607; Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4606)]) == 32)) {
F.v4584 = yr1068_Intern(Y_DEFI(F.v4582), y_range(y_sub(F.c_4606, Y_DEFI(F.v4582)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4582 = y_range(y_add(F.c_4606, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4607 == hi4608) break;
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
F.v4615 = Y_UNDEF_B;
y_open(&v909, y_str("INPUT", 5), 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4615 = g; });
yr1020_PoolAdd(Y_DEFB(F.v4615));
}
v1219 = Y_DEFI(v915);
y_close(&v909);
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
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = F.p1976;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = F.p1977;
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(v1225);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1982_At(rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1983 = a_p1983;
if ((F.p1983 > Y_DEFI(v1219))) {
{ unsigned char rv4628 = 0;
y_use = F.yu; return rv4628; }
}
{ unsigned char rv4629 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.p1983)]);
y_use = F.yu; return rv4629; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1988_EndsOperand(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4632 = Y_UNDEF_I;
F.v4634 = Y_UNDEF_I;
if ((Y_DEFI(v1213) == INT64_C(0))) {
{ rt_int rv4637 = 0;
y_use = F.yu; return rv4637; }
}
F.v4632 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))]);
F.v4634 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))]);
if ((((((((Y_DEFI(F.v4632) == v207)) || ((Y_DEFI(F.v4632) == v216))) || ((Y_DEFI(F.v4632) == v219))) || ((Y_DEFI(F.v4632) == v222))) || ((Y_DEFI(F.v4632) == v225))) || ((Y_DEFI(F.v4632) == v228)))) {
{ rt_int rv4639 = 1;
y_use = F.yu; return rv4639; }
}
if ((Y_DEFI(F.v4632) == v213)) {
{ rt_int rv4640 = ((((Y_DEFI(F.v4634) == v597)) || ((Y_DEFI(F.v4634) == v603))) || ((Y_DEFI(F.v4634) == v618)));
y_use = F.yu; return rv4640; }
}
if ((Y_DEFI(F.v4632) == v210)) {
{ rt_int rv4641 = (Y_DEFI(F.v4634) == v387);
y_use = F.yu; return rv4641; }
}
{ rt_int rv4643 = 0;
y_use = F.yu; return rv4643; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1993_DigitVal(unsigned char a_p1994) {
struct yf1995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1994 = a_p1994;
if ((((F.p1994 >= 48)) && ((F.p1994 <= 57)))) {
{ rt_int rv4650 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1994)]), INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4650; }
}
if ((((F.p1994 >= 65)) && ((F.p1994 <= 70)))) {
{ rt_int rv4655 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1994)]), INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4655; }
}
{ rt_int rv4657 = INT64_C(99);
y_use = F.yu; return rv4657; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1999_LexError(yarr a_p2001) {
struct yf2002 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2001 = a_p2001;
yr1178_FailS(Y_DEFI(v1225), F.p2001);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2006_LexDigits(rt_int a_p2007, rt_int a_p2008) {
struct yf2009 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2007 = a_p2007;
F.p2008 = a_p2008;
F.v4664 = Y_UNDEF_I;
while ((yr1014_IsDigit(yr1982_At(Y_DEFI(v1222))) || ((F.p2008 && ((yr1993_DigitVal(yr1982_At(Y_DEFI(v1222))) < INT64_C(16))))))) {
Y_TICK();
if ((yr1993_DigitVal(yr1982_At(Y_DEFI(v1222))) >= F.p2007)) {
yr1026_SB();
yr1031_SC(39);
yr1031_SC(yr1982_At(Y_DEFI(v1222)));
yr1037_SA(y_str("' is not a digit of BASE", 24));
yr1050_SI(F.p2007);
yr1037_SA(y_str(" (IV.B)", 7));
F.v4664 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1225), Y_DEFI(F.v4664));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2013_LexNumber(rt_int a_p2014) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2014 = a_p2014;
F.v4674 = Y_UNDEF_I;
F.v4674 = INT64_C(10);
F.v4677 = Y_UNDEF_I;
F.v4679 = Y_UNDEF_I;
F.v4681 = Y_UNDEF_I;
F.v4683 = Y_UNDEF_I;
F.v4685 = Y_UNDEF_I;
F.v4685 = 0;
F.v4688 = Y_UNDEF_I;
F.v4688 = 0;
F.v4691 = Y_UNDEF_I;
F.v4691 = INT64_C(0);
F.v4694 = Y_UNDEF_I;
F.v4694 = INT64_C(0);
F.v4697 = Y_UNDEF_I;
F.v4697 = INT64_C(0);
F.v4700 = Y_UNDEF_I;
F.v4700 = INT64_C(0);
F.v4703 = Y_UNDEF_I;
F.v4703 = INT64_C(0);
F.v4706 = Y_UNDEF_I;
if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
F.v4674 = Y_DEFI(v1228);
F.v4688 = 1;
}
v1228 = INT64_C(0);
F.v4677 = Y_DEFI(v1222);
yr2006_LexDigits(Y_DEFI(F.v4674), Y_DEFI(F.v4688));
F.v4679 = Y_DEFI(v1222);
if ((Y_DEFI(F.v4679) == Y_DEFI(F.v4677))) {
yr1999_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4681 = Y_DEFI(v1222);
F.v4683 = Y_DEFI(v1222);
if ((((yr1982_At(Y_DEFI(v1222)) == 46)) && ((!(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4685 = 1;
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4681 = Y_DEFI(v1222);
yr2006_LexDigits(Y_DEFI(F.v4674), Y_DEFI(F.v4688));
F.v4683 = Y_DEFI(v1222);
}
if ((yr1982_At(Y_DEFI(v1222)) == 80)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4700 = INT64_C(1);
if ((((((yr1982_At(Y_DEFI(v1222)) == 45)) || ((yr1982_At(Y_DEFI(v1222)) == 43)))) && yr1014_IsDigit(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1982_At(Y_DEFI(v1222)) == 45)) {
F.v4700 = INT64_C(-1);
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4697 = INT64_C(0);
while (yr1014_IsDigit(yr1982_At(Y_DEFI(v1222)))) {
Y_TICK();
if ((Y_DEFI(F.v4697) > INT64_C(1000))) {
yr1999_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4697 = y_range(y_add((y_mul(Y_DEFI(F.v4697), INT64_C(10))), yr1993_DigitVal(yr1982_At(Y_DEFI(v1222)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4697 = y_range(y_mul(Y_DEFI(F.v4697), Y_DEFI(F.v4700)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4691 = INT64_C(0);
F.v4703 = y_range(y_sub(Y_DEFI(F.v4683), Y_DEFI(F.v4681)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4744 = Y_DEFI(F.v4677);
F.hi4745 = y_sub(Y_DEFI(F.v4683), INT64_C(1));
{ rt_int hi4749 = F.hi4745;
for (rt_int i4748 = F.lo4744; i4748 <= hi4749; i4748++) { F.c_4747 = i4748; Y_TICK();
if ((((F.c_4747 < Y_DEFI(F.v4679))) || ((F.c_4747 >= Y_DEFI(F.v4681))))) {
F.v4694 = yr1993_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4747)]));
if ((Y_DEFI(F.v4691) > (y_div((y_sub(v906, Y_DEFI(F.v4694))), Y_DEFI(F.v4674))))) {
yr1999_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4691 = y_range(y_add((y_mul(Y_DEFI(F.v4691), Y_DEFI(F.v4674))), Y_DEFI(F.v4694)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4748 == hi4749) break;
}}
if (F.p2014) {
F.v4691 = y_range(y_neg(Y_DEFI(F.v4691)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(v1246) >= INT64_C(200000))) {
yr1999_LexError(y_str("too many fixed-point literals", 29));
}
v1246 = y_range(y_add(Y_DEFI(v1246), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(v1246))] = Y_DEFI(F.v4691);
((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(v1246))] = Y_DEFI(F.v4674);
((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(v1246))] = y_range(y_sub(Y_DEFI(F.v4697), Y_DEFI(F.v4703)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1975_AddTok(v219, Y_DEFI(v1246));
y_use = F.yu; return;
}
if (Y_DEFI(F.v4685)) {
if ((!(Y_DEFI(F.v4674) == INT64_C(10)))) {
yr1999_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1982_At(Y_DEFI(v1222)) == 69)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1982_At(Y_DEFI(v1222)) == 45)) || ((yr1982_At(Y_DEFI(v1222)) == 43)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1014_IsDigit(yr1982_At(Y_DEFI(v1222)))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1026_SB();
if (F.p2014) {
yr1037_SA(y_str("-", 1));
}
F.lo4776 = Y_DEFI(F.v4677);
F.hi4777 = y_sub(Y_DEFI(v1222), INT64_C(1));
{ rt_int hi4781 = F.hi4777;
for (rt_int i4780 = F.lo4776; i4780 <= hi4781; i4780++) { F.c_4779 = i4780; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4779)]));
if (i4780 == hi4781) break;
}}
F.v4706 = yr1056_SE();
yr1975_AddTok(v222, Y_DEFI(F.v4706));
y_use = F.yu; return;
}
F.v4691 = INT64_C(0);
F.lo4786 = Y_DEFI(F.v4677);
F.hi4787 = y_sub(Y_DEFI(F.v4679), INT64_C(1));
{ rt_int hi4791 = F.hi4787;
for (rt_int i4790 = F.lo4786; i4790 <= hi4791; i4790++) { F.c_4789 = i4790; Y_TICK();
F.v4694 = yr1993_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4789)]));
if ((Y_DEFI(F.v4691) > (y_div((y_sub(v906, Y_DEFI(F.v4694))), Y_DEFI(F.v4674))))) {
yr1999_LexError(y_str("integer literal too large", 25));
}
F.v4691 = y_range(y_add((y_mul(Y_DEFI(F.v4691), Y_DEFI(F.v4674))), Y_DEFI(F.v4694)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4790 == hi4791) break;
}}
if (F.p2014) {
F.v4691 = y_range(y_neg(Y_DEFI(F.v4691)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1975_AddTok(v216, Y_DEFI(F.v4691));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2019_LexString(void) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4800 = Y_UNDEF_I;
F.v4802 = Y_UNDEF_I;
F.v4804 = Y_UNDEF_I;
F.v4806 = Y_UNDEF_I;
yr1026_SB();
for (;;) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1982_At(Y_DEFI(v1222)) == 34))) {
Y_TICK();
if ((((yr1982_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
v927 = 0;
yr1999_LexError(y_str("a string must close on its line", 31));
}
yr1031_SC(yr1982_At(Y_DEFI(v1222)));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4802 = Y_DEFI(v1222);
F.v4804 = INT64_C(0);
F.v4806 = 1;
while (Y_DEFI(F.v4806)) {
Y_TICK();
if (((((yr1982_At(Y_DEFI(F.v4802)) == 32)) || ((yr1982_At(Y_DEFI(F.v4802)) == 9))) || ((yr1982_At(Y_DEFI(F.v4802)) == 13)))) {
F.v4802 = y_range(y_add(Y_DEFI(F.v4802), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1982_At(Y_DEFI(F.v4802)) == 10)) {
F.v4804 = y_range(y_add(Y_DEFI(F.v4804), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4802 = y_range(y_add(Y_DEFI(F.v4802), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4806 = 0;
}
}
if ((!(yr1982_At(Y_DEFI(F.v4802)) == 34))) {
goto yl_4807;
}
v1225 = y_range(y_add(Y_DEFI(v1225), Y_DEFI(F.v4804)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = Y_DEFI(F.v4802);
}
yl_4807: ;
F.v4800 = yr1056_SE();
yr1975_AddTok(v228, Y_DEFI(F.v4800));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2024_Lex(void) {
struct yf2025 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4835 = Y_UNDEF_B;
F.v4837 = Y_UNDEF_I;
F.v4839 = Y_UNDEF_I;
F.v4841 = Y_UNDEF_I;
F.v4843 = Y_UNDEF_I;
F.v4845 = Y_UNDEF_I;
F.v4847 = Y_UNDEF_I;
F.v4849 = Y_UNDEF_I;
v1222 = Y_DEFI(v1216);
while ((Y_DEFI(v1222) <= Y_DEFI(v1219))) {
Y_TICK();
F.v4835 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v1222))]);
if ((Y_DEFB(F.v4835) == 10)) {
v1225 = y_range(y_add(Y_DEFI(v1225), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((Y_DEFB(F.v4835) == 32)) || ((Y_DEFB(F.v4835) == 9))) || ((Y_DEFB(F.v4835) == 13))) || ((Y_DEFB(F.v4835) == 12)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFB(F.v4835) == 40)) && ((yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1982_At(Y_DEFI(v1222)) == 42)) && ((yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1982_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
yr1999_LexError(y_str("a comment must close on its line", 32));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1014_IsDigit(Y_DEFB(F.v4835)) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1993_DigitVal(Y_DEFB(F.v4835)) < INT64_C(16))))))) {
yr2013_LexNumber(0);
} else if (((((((Y_DEFB(F.v4835) == 45)) || ((Y_DEFB(F.v4835) == 43)))) && (!yr1988_EndsOperand())) && ((yr1014_IsDigit(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1993_DigitVal(yr1982_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2013_LexNumber((Y_DEFB(F.v4835) == 45));
} else if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
yr1999_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1008_IsLetter(Y_DEFB(F.v4835))) {
F.v4837 = Y_DEFI(v1222);
while ((yr1008_IsLetter(yr1982_At(Y_DEFI(v1222))) || yr1014_IsDigit(yr1982_At(Y_DEFI(v1222))))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4845 = yr1068_Intern(Y_DEFI(F.v4837), y_range(y_sub(Y_DEFI(v1222), Y_DEFI(F.v4837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v4845) == v252)) {
v1228 = INT64_C(2);
} else if ((Y_DEFI(F.v4845) == v255)) {
v1228 = INT64_C(8);
} else if ((Y_DEFI(F.v4845) == v258)) {
v1228 = INT64_C(10);
} else if ((Y_DEFI(F.v4845) == v261)) {
v1228 = INT64_C(16);
} else if ((Y_DEFI(F.v4845) <= v492)) {
yr1975_AddTok(v210, Y_DEFI(F.v4845));
} else {
yr1975_AddTok(v207, Y_DEFI(F.v4845));
}
} else if ((Y_DEFB(F.v4835) == 39)) {
F.v4837 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4839 = Y_DEFI(F.v4837);
while ((!(yr1982_At(Y_DEFI(F.v4839)) == 39))) {
Y_TICK();
if (((((yr1982_At(Y_DEFI(F.v4839)) == 10)) || ((yr1982_At(Y_DEFI(F.v4839)) == 34))) || ((Y_DEFI(F.v4839) > Y_DEFI(v1219))))) {
yr1999_LexError(y_str("bad character literal", 21));
}
F.v4839 = y_range(y_add(Y_DEFI(F.v4839), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4839) == Y_DEFI(F.v4837))) {
yr1999_LexError(y_str("empty character literal", 23));
}
F.v4845 = yr1068_Intern(Y_DEFI(F.v4837), y_range(y_sub(Y_DEFI(F.v4839), Y_DEFI(F.v4837)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1975_AddTok(v225, Y_DEFI(F.v4845));
v1222 = y_range(y_add(Y_DEFI(F.v4839), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v4835) == 34)) {
yr2019_LexString();
} else {
F.v4841 = INT64_C(0);
F.v4839 = y_range(y_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v4841) == INT64_C(0))) && ((Y_DEFI(F.v4839) <= v621)))) {
Y_TICK();
F.v4843 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4839))]);
F.v4849 = 1;
F.lo4924 = INT64_C(0);
F.hi4925 = y_sub(Y_DEFI(F.v4843), INT64_C(1));
{ rt_int hi4929 = F.hi4925;
for (rt_int i4928 = F.lo4924; i4928 <= hi4929; i4928++) { F.c_4927 = i4928; Y_TICK();
if ((!(yr1982_At(y_range(y_add(Y_DEFI(v1222), F.c_4927), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4839))]), F.c_4927))])))) {
F.v4849 = 0;
}
if (i4928 == hi4929) break;
}}
if (Y_DEFI(F.v4849)) {
F.v4841 = Y_DEFI(F.v4839);
}
F.v4839 = y_range(y_add(Y_DEFI(F.v4839), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4841) == INT64_C(0))) {
yr1999_LexError(y_str("a character that is not in the language", 39));
}
yr1975_AddTok(v213, Y_DEFI(F.v4841));
v1222 = y_range(y_add(Y_DEFI(v1222), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4841))])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1975_AddTok(v204, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2029_NewNode(rt_int a_p2030, rt_int a_p2031) {
struct yf2032 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2030 = a_p2030;
F.p2031 = a_p2031;
F.v4943 = Y_UNDEF_P;
({ F.v4943 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v4943)); });
(*(yR105 *)y_deref(Y_DEFP(F.v4943))) = ((yR105){ .f_kind = F.p2030, .f_line = F.p2031, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0), .f_t0 = INT64_C(0), .f_t1 = INT64_C(0) });
{ void * rv4950 = Y_DEFP(F.v4943);
y_use = F.yu; return rv4950; }
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
} else {
((*(yR105 *)y_deref(Y_DEFP((*F.p2038))))).f_next = F.p2039;
}
(*F.p2038) = F.p2039;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2044_Count(void * a_p2045) {
struct yf2046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2045 = a_p2045;
F.v4958 = Y_UNDEF_I;
F.v4958 = INT64_C(0);
F.v4961 = Y_UNDEF_P;
F.v4961 = F.p2045;
while ((!(Y_DEFP(F.v4961) == ((void *)0)))) {
Y_TICK();
F.v4958 = y_range(y_add(Y_DEFI(F.v4958), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4961 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4961)))).f_next);
}
{ rt_int rv4964 = Y_DEFI(F.v4958);
y_use = F.yu; return rv4964; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2050_TK(void) {
struct yf2051 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4966 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]);
y_use = F.yu; return rv4966; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2055_TV(void) {
struct yf2056 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4968 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1249))]);
y_use = F.yu; return rv4968; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2060_TLn(void) {
struct yf2061 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4970 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1249))]);
y_use = F.yu; return rv4970; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2065_IsAt(rt_int a_p2066, rt_int a_p2067) {
struct yf2068 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2066 = a_p2066;
F.p2067 = a_p2067;
F.v4975 = Y_UNDEF_I;
F.v4975 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2066))]);
{ rt_int rv4978 = (((((Y_DEFI(F.v4975) == v210)) || ((Y_DEFI(F.v4975) == v213)))) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2066))]) == F.p2067)));
y_use = F.yu; return rv4978; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2072_Is(rt_int a_p2073) {
struct yf2074 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2073 = a_p2073;
{ rt_int rv4982 = yr2065_IsAt(INT64_C(0), F.p2073);
y_use = F.yu; return rv4982; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2078_IsIdAt(rt_int a_p2079) {
struct yf2080 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2079 = a_p2079;
{ rt_int rv4986 = (Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2079))]) == v207);
y_use = F.yu; return rv4986; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2084_Skip(void) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]) == v204))) {
v1249 = y_range(y_add(Y_DEFI(v1249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
{ rt_int rv4993 = 1;
y_use = F.yu; return rv4993; }
}
{ rt_int rv4995 = 0;
y_use = F.yu; return rv4995; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2095_TokText(void) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4998 = Y_UNDEF_I;
F.v4998 = yr2050_TK();
if ((((((Y_DEFI(F.v4998) == v207)) || ((Y_DEFI(F.v4998) == v210))) || ((Y_DEFI(F.v4998) == v213))) || ((Y_DEFI(F.v4998) == v225)))) {
{ rt_int rv4999 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4999; }
}
if ((Y_DEFI(F.v4998) == v204)) {
{ rt_int rv5001 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv5001; }
}
if ((Y_DEFI(F.v4998) == v216)) {
yr1026_SB();
yr1050_SI(yr2055_TV());
{ rt_int rv5002 = yr1056_SE();
y_use = F.yu; return rv5002; }
}
{ rt_int rv5004 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv5004; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2100_Expect(rt_int a_p2101) {
struct yf2102 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2101 = a_p2101;
F.v5008 = Y_UNDEF_I;
if ((!yr2089_Accept(F.p2101))) {
yr1026_SB();
yr1037_SA(y_str("expected ", 9));
yr1044_ST(y_range(F.p2101, INT64_C(0), INT64_C(4000000)));
yr1037_SA(y_str(", found ", 8));
yr1044_ST(yr2095_TokText());
F.v5008 = yr1056_SE();
yr1157_Fail(yr2060_TLn(), Y_DEFI(F.v5008));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2106_Ident(void) {
struct yf2107 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5013 = Y_UNDEF_I;
if ((!(yr2050_TK() == v207))) {
yr1026_SB();
yr1037_SA(y_str("expected an identifier, found ", 30));
yr1044_ST(yr2095_TokText());
F.v5013 = yr1056_SE();
yr1157_Fail(yr2060_TLn(), Y_DEFI(F.v5013));
}
F.v5013 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
yr2084_Skip();
{ rt_int rv5015 = Y_DEFI(F.v5013);
y_use = F.yu; return rv5015; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2111_CloseName(rt_int a_p2112, rt_int a_p2113) {
struct yf2114 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2112 = a_p2112;
F.p2113 = a_p2113;
F.v5020 = Y_UNDEF_I;
if (((((yr2050_TK() == v207)) || ((yr2050_TK() == v210))) || ((yr2050_TK() == v213)))) {
F.v5020 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
if ((Y_DEFI(F.v5020) == F.p2112)) {
yr2084_Skip();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p2113, F.p2112, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2118_ExtendedId(void) {
struct yf2119 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5024 = Y_UNDEF_I;
F.v5024 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
if ((yr2050_TK() == v207)) {
yr2084_Skip();
{ rt_int rv5025 = Y_DEFI(F.v5024);
y_use = F.yu; return rv5025; }
}
if ((((yr2050_TK() == v210)) && (((((((((Y_DEFI(F.v5024) == v390)) || ((Y_DEFI(F.v5024) == v237))) || ((Y_DEFI(F.v5024) == v399))) || ((Y_DEFI(F.v5024) == v276))) || ((Y_DEFI(F.v5024) == v378))) || ((Y_DEFI(F.v5024) == v489))) || ((Y_DEFI(F.v5024) == v360)))))) {
yr2084_Skip();
{ rt_int rv5026 = Y_DEFI(F.v5024);
y_use = F.yu; return rv5026; }
}
if (((((((((((((yr2050_TK() == v213)) && ((!(Y_DEFI(F.v5024) == v594)))) && ((!(Y_DEFI(F.v5024) == v597)))) && ((!(Y_DEFI(F.v5024) == v600)))) && ((!(Y_DEFI(F.v5024) == v603)))) && ((!(Y_DEFI(F.v5024) == v606)))) && ((!(Y_DEFI(F.v5024) == v609)))) && ((!(Y_DEFI(F.v5024) == v612)))) && ((!(Y_DEFI(F.v5024) == v615)))) && ((!(Y_DEFI(F.v5024) == v537)))) && ((!(Y_DEFI(F.v5024) == v534))))) {
yr2084_Skip();
{ rt_int rv5027 = Y_DEFI(F.v5024);
y_use = F.yu; return rv5027; }
}
yr1178_FailS(yr2060_TLn(), y_str("expected a name", 15));
{ rt_int rv5030 = INT64_C(0);
y_use = F.yu; return rv5030; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2123_IsLabel(rt_int a_p2124) {
struct yf2125 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2124 = a_p2124;
F.v5034 = Y_UNDEF_P;
F.v5034 = Y_DEFP(v1252);
while ((!(Y_DEFP(F.v5034) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5034)))).f_name) == F.p2124)) {
{ rt_int rv5036 = 1;
y_use = F.yu; return rv5036; }
}
F.v5034 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5034)))).f_next);
}
{ rt_int rv5038 = 0;
y_use = F.yu; return rv5038; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2129_ImportItem(void) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5041 = Y_UNDEF_P;
F.v5041 = yr2029_NewNode(v627, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5041)))).f_name = yr2118_ExtendedId();
if ((yr2078_IsIdAt(INT64_C(0)) && ((yr2055_TV() == Y_DEFI(v1254))))) {
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5041)))).f_text = yr2106_Ident();
}
if (yr2089_Accept(v243)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5041)))).f_ival = yr2118_ExtendedId();
}
{ void * rv5043 = Y_DEFP(F.v5041);
y_use = F.yu; return rv5043; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2134_ParseModule(void) {
struct yf2135 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5046 = Y_UNDEF_P;
F.v5046 = yr2029_NewNode(v624, yr2060_TLn());
F.v5048 = Y_UNDEF_P;
F.v5048 = ((void *)0);
F.v5050 = Y_UNDEF_P;
F.v5050 = ((void *)0);
F.v5052 = Y_UNDEF_P;
F.v5052 = ((void *)0);
F.v5054 = Y_UNDEF_I;
if (yr2089_Accept(v384)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_flag = INT64_C(1);
} else {
yr2100_Expect(v381);
}
((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_name = yr2106_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_t0 = Y_DEFI(v1249);
while (yr2089_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v5048 = yr2129_ImportItem();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_a, &F.v5050, Y_DEFP(F.v5048));
if ((!yr2089_Accept(v606))) {
goto yl_5056;
}
}
yl_5056: ;
yr2100_Expect(v609);
}
while (yr2089_Accept(v336)) {
Y_TICK();
F.v5054 = INT64_C(0);
if ((((yr2072_Is(v396) || yr2072_Is(v474)) || yr2072_Is(v429)) || yr2072_Is(v483))) {
F.v5054 = yr2055_TV();
yr2084_Skip();
}
for (;;) {
Y_TICK();
F.v5048 = yr2129_ImportItem();
((*(yR105 *)y_deref(Y_DEFP(F.v5048)))).f_flag = Y_DEFI(F.v5054);
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_b, &F.v5052, Y_DEFP(F.v5048));
if ((!yr2089_Accept(v606))) {
goto yl_5058;
}
}
yl_5058: ;
yr2100_Expect(v609);
}
((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_c = yr2144_ParseBlock();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_flag) == INT64_C(1))) {
yr2100_Expect(v309);
} else {
yr2100_Expect(v306);
}
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5046)))).f_line));
{ void * rv5060 = Y_DEFP(F.v5046);
y_use = F.yu; return rv5060; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2139_IsDeclWord(void) {
struct yf2140 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5063 = Y_UNDEF_I;
if ((!(yr2050_TK() == v210))) {
{ rt_int rv5065 = 0;
y_use = F.yu; return rv5065; }
}
F.v5063 = yr2055_TV();
{ rt_int rv5066 = (((((((((((((Y_DEFI(F.v5063) == v270)) || ((Y_DEFI(F.v5063) == v483))) || ((Y_DEFI(F.v5063) == v372))) || ((Y_DEFI(F.v5063) == v477))) || ((Y_DEFI(F.v5063) == v438))) || ((Y_DEFI(F.v5063) == v348))) || ((Y_DEFI(F.v5063) == v420))) || ((Y_DEFI(F.v5063) == v381))) || ((Y_DEFI(F.v5063) == v384))) || ((Y_DEFI(F.v5063) == v465))) || ((Y_DEFI(F.v5063) == v366))) || ((Y_DEFI(F.v5063) == v423)));
y_use = F.yu; return rv5066; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2144_ParseBlock(void) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5069 = Y_UNDEF_P;
F.v5069 = yr2029_NewNode(v630, yr2060_TLn());
F.v5071 = Y_UNDEF_P;
F.v5071 = ((void *)0);
F.v5073 = Y_UNDEF_P;
F.v5073 = Y_DEFP(v1252);
F.v5075 = Y_UNDEF_P;
while (yr2139_IsDeclWord()) {
Y_TICK();
yr2171_ParseDeclGroup(&((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_a, &F.v5071);
while (yr2089_Accept(v609)) {
Y_TICK();
}
}
if (yr2072_Is(v330)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_b = yr2149_ParseHandler();
F.v5075 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_b);
if (yr2089_Accept(v609)) {
}
}
((*(yR105 *)y_deref(Y_DEFP(F.v5069)))).f_c = yr2240_ParseStatements(1);
v1252 = Y_DEFP(F.v5073);
{ void * rv5077 = Y_DEFP(F.v5069);
y_use = F.yu; return rv5077; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2149_ParseHandler(void) {
struct yf2150 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5080 = Y_UNDEF_P;
F.v5080 = yr2029_NewNode(v633, yr2060_TLn());
F.v5082 = Y_UNDEF_P;
F.v5082 = ((void *)0);
F.v5084 = Y_UNDEF_P;
F.v5084 = ((void *)0);
F.v5086 = Y_UNDEF_P;
F.v5086 = ((void *)0);
F.v5088 = Y_UNDEF_P;
F.v5088 = ((void *)0);
yr2100_Expect(v330);
while (yr2089_Accept(v267)) {
Y_TICK();
F.v5082 = yr2029_NewNode(v636, yr2060_TLn());
F.v5088 = ((void *)0);
for (;;) {
Y_TICK();
F.v5086 = yr2029_NewNode(v669, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5086)))).f_name = yr2106_Ident();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5082)))).f_a, &F.v5088, Y_DEFP(F.v5086));
if ((!yr2089_Accept(v606))) {
goto yl_5089;
}
}
yl_5089: ;
yr2100_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5082)))).f_b = yr2240_ParseStatements(0);
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5080)))).f_a, &F.v5084, Y_DEFP(F.v5082));
}
if (yr2089_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5080)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5080)))).f_b = yr2240_ParseStatements(0);
}
yr2100_Expect(v291);
{ void * rv5093 = Y_DEFP(F.v5080);
y_use = F.yu; return rv5093; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2154_ParseNames(void) {
struct yf2155 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5096 = Y_UNDEF_P;
F.v5096 = ((void *)0);
F.v5098 = Y_UNDEF_P;
F.v5098 = ((void *)0);
F.v5100 = Y_UNDEF_P;
F.v5100 = ((void *)0);
for (;;) {
Y_TICK();
F.v5100 = yr2029_NewNode(v669, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5100)))).f_name = yr2106_Ident();
if (yr2089_Accept(v249)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5100)))).f_a = yr2302_ParseExpr();
}
yr2036_Link(&F.v5096, &F.v5098, Y_DEFP(F.v5100));
if ((!yr2089_Accept(v606))) {
goto yl_5101;
}
}
yl_5101: ;
{ void * rv5102 = Y_DEFP(F.v5096);
y_use = F.yu; return rv5102; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2159_SimpleEntry(rt_int a_p2160) {
struct yf2161 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2160 = a_p2160;
F.v5106 = Y_UNDEF_P;
F.v5108 = Y_UNDEF_I;
F.v5108 = Y_DEFI(v1249);
if ((F.p2160 == v270)) {
F.v5106 = yr2029_NewNode(v639, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_a = yr2154_ParseNames();
yr2100_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_b = yr2205_ParseRep();
yr2100_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_c = yr2302_ParseExpr();
} else if ((F.p2160 == v483)) {
F.v5106 = yr2029_NewNode(v642, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_a = yr2154_ParseNames();
yr2100_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_b = yr2205_ParseRep();
if (yr2089_Accept(v531)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_c = yr2302_ParseExpr();
}
} else if ((F.p2160 == v477)) {
F.v5106 = yr2029_NewNode(v648, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_name = yr2106_Ident();
yr2100_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_b = yr2225_ParseConcrete1();
} else {
F.v5106 = yr2029_NewNode(v651, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_name = yr2106_Ident();
yr2100_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_b = yr2205_ParseRep();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_t0 = Y_DEFI(F.v5108);
((*(yR105 *)y_deref(Y_DEFP(F.v5106)))).f_t1 = Y_DEFI(v1249);
{ void * rv5109 = Y_DEFP(F.v5106);
y_use = F.yu; return rv5109; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2165_Continues(rt_int a_p2166) {
struct yf2167 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2166 = a_p2166;
if ((!((yr2072_Is(v609) && yr2078_IsIdAt(INT64_C(1)))))) {
{ rt_int rv5114 = 0;
y_use = F.yu; return rv5114; }
}
if (yr2123_IsLabel(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(1)))]), INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv5118 = 0;
y_use = F.yu; return rv5118; }
}
if ((((F.p2166 == v270)) || ((F.p2166 == v483)))) {
{ rt_int rv5122 = ((yr2065_IsAt(INT64_C(2), v606) || yr2065_IsAt(INT64_C(2), v612)) || yr2065_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv5122; }
}
{ rt_int rv5124 = yr2065_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv5124; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2171_ParseDeclGroup(void * * a_p2172, void * * a_p2173) {
struct yf2174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2172 = a_p2172;
F.p2173 = a_p2173;
F.v5129 = Y_UNDEF_I;
F.v5129 = yr2055_TV();
F.v5131 = Y_UNDEF_P;
F.v5133 = Y_UNDEF_P;
F.v5135 = Y_UNDEF_P;
if ((((((Y_DEFI(F.v5129) == v270)) || ((Y_DEFI(F.v5129) == v483))) || ((Y_DEFI(F.v5129) == v477))) || ((Y_DEFI(F.v5129) == v438)))) {
yr2084_Skip();
yr2036_Link(&(*F.p2172), &(*F.p2173), yr2159_SimpleEntry(Y_DEFI(F.v5129)));
while (yr2165_Continues(Y_DEFI(F.v5129))) {
Y_TICK();
yr2084_Skip();
yr2036_Link(&(*F.p2172), &(*F.p2173), yr2159_SimpleEntry(Y_DEFI(F.v5129)));
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v5129) == v372)) {
F.v5131 = yr2029_NewNode(v645, yr2060_TLn());
yr2084_Skip();
F.v5135 = ((void *)0);
for (;;) {
Y_TICK();
F.v5133 = yr2029_NewNode(v669, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5133)))).f_name = yr2106_Ident();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_a, &F.v5135, Y_DEFP(F.v5133));
if ((!yr2089_Accept(v606))) {
goto yl_5136;
}
}
yl_5136: ;
F.v5133 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_a);
while ((!(Y_DEFP(F.v5133) == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_b = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5133)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_b)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5133)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_b)))).f_next = Y_DEFP(v1252);
v1252 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_b);
F.v5133 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5133)))).f_next);
}
((*(yR105 *)y_deref(Y_DEFP(F.v5131)))).f_b = ((void *)0);
yr2036_Link(&(*F.p2172), &(*F.p2173), Y_DEFP(F.v5131));
y_use = F.yu; return;
}
yr2036_Link(&(*F.p2172), &(*F.p2173), yr2178_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2178_ParseDecl(void) {
struct yf2179 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5139 = Y_UNDEF_P;
F.v5141 = Y_UNDEF_I;
F.v5141 = Y_DEFI(v1249);
F.v5139 = yr2183_ParseDecl1();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5139)))).f_kind) == v624))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5139)))).f_t0 = Y_DEFI(F.v5141);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5139)))).f_t1) == INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5139)))).f_t1 = Y_DEFI(v1249);
}
}
{ void * rv5143 = Y_DEFP(F.v5139);
y_use = F.yu; return rv5143; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2183_ParseDecl1(void) {
struct yf2184 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5146 = Y_UNDEF_P;
F.v5148 = Y_UNDEF_P;
F.v5150 = Y_UNDEF_P;
F.v5152 = Y_UNDEF_I;
F.v5152 = yr2055_TV();
F.v5154 = Y_UNDEF_I;
F.v5154 = yr2060_TLn();
F.v5156 = Y_UNDEF_I;
if ((((Y_DEFI(F.v5152) == v348)) || ((Y_DEFI(F.v5152) == v420)))) {
F.v5146 = yr2029_NewNode(v654, Y_DEFI(F.v5154));
yr2084_Skip();
if ((Y_DEFI(F.v5152) == v348)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_flag = INT64_C(1);
}
if ((yr2072_Is(v339) || yr2072_Is(v435))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_ival = yr2055_TV();
yr2084_Skip();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name = yr2118_ExtendedId();
yr2188_ParseFormals(Y_DEFP(F.v5146));
if (yr2089_Accept(v363)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_e = yr2029_NewNode(v669, Y_DEFI(F.v5154));
}
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_c = yr2144_ParseBlock();
if ((Y_DEFI(F.v5152) == v348)) {
yr2100_Expect(v297);
} else {
yr2100_Expect(v312);
}
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name), Y_DEFI(F.v5154));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_e) == ((void *)0)))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_t1 = Y_DEFI(v1249);
}
{ void * rv5158 = Y_DEFP(F.v5146);
y_use = F.yu; return rv5158; }
}
if ((((Y_DEFI(F.v5152) == v381)) || ((Y_DEFI(F.v5152) == v384)))) {
{ void * rv5159 = yr2134_ParseModule();
y_use = F.yu; return rv5159; }
}
if ((Y_DEFI(F.v5152) == v465)) {
F.v5146 = yr2029_NewNode(v660, Y_DEFI(F.v5154));
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name = yr2106_Ident();
yr2100_Expect(v594);
F.v5150 = ((void *)0);
for (;;) {
Y_TICK();
F.v5148 = yr2029_NewNode(v669, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5148)))).f_name = yr2106_Ident();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_a, &F.v5150, Y_DEFP(F.v5148));
if ((!yr2089_Accept(v606))) {
goto yl_5160;
}
}
yl_5160: ;
yr2100_Expect(v597);
F.v5156 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_b = yr2134_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_ival = Y_DEFI(F.v5156);
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_flag = Y_DEFI(v1249);
yr2100_Expect(v324);
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name), Y_DEFI(F.v5154));
{ void * rv5161 = Y_DEFP(F.v5146);
y_use = F.yu; return rv5161; }
}
if ((Y_DEFI(F.v5152) == v366)) {
F.v5146 = yr2029_NewNode(v663, Y_DEFI(F.v5154));
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name = yr2106_Ident();
yr2100_Expect(v594);
F.v5150 = ((void *)0);
for (;;) {
Y_TICK();
F.v5148 = yr2029_NewNode(v669, yr2060_TLn());
if ((yr2050_TK() == v216)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5148)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5148)))).f_ival = yr2055_TV();
yr2084_Skip();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v5148)))).f_name = yr2118_ExtendedId();
}
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_a, &F.v5150, Y_DEFP(F.v5148));
if ((!yr2089_Accept(v606))) {
goto yl_5162;
}
}
yl_5162: ;
yr2100_Expect(v597);
{ void * rv5164 = Y_DEFP(F.v5146);
y_use = F.yu; return rv5164; }
}
if ((Y_DEFI(F.v5152) == v423)) {
F.v5146 = yr2029_NewNode(v666, Y_DEFI(F.v5154));
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name = yr2106_Ident();
yr2188_ParseFormals(Y_DEFP(F.v5146));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_b) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(F.v5154), y_str("a process returns no value", 26));
}
if (yr2089_Accept(v417)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_d = yr2302_ParseExpr();
}
if (yr2089_Accept(v369)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_e = yr2302_ParseExpr();
}
if (yr2089_Accept(v459)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_x = yr2302_ParseExpr();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_c = yr2144_ParseBlock();
yr2100_Expect(v315);
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5146)))).f_name), Y_DEFI(F.v5154));
{ void * rv5166 = Y_DEFP(F.v5146);
y_use = F.yu; return rv5166; }
}
yr1178_FailS(Y_DEFI(F.v5154), y_str("expected a declaration", 22));
{ void * rv5168 = ((void *)0);
y_use = F.yu; return rv5168; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2188_ParseFormals(void * a_p2189) {
struct yf2190 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2189 = a_p2189;
F.v5172 = Y_UNDEF_P;
F.v5172 = ((void *)0);
F.v5174 = Y_UNDEF_P;
F.v5174 = ((void *)0);
F.v5176 = Y_UNDEF_I;
if (yr2089_Accept(v444)) {
((*(yR105 *)y_deref(F.p2189))).f_b = yr2205_ParseRep();
}
yr2100_Expect(v594);
while ((!yr2072_Is(v597))) {
Y_TICK();
if (yr2089_Accept(v270)) {
F.v5176 = v897;
} else if (yr2089_Accept(v405)) {
F.v5176 = v900;
} else if (yr2089_Accept(v483)) {
F.v5176 = v903;
} else {
yr1178_FailS(yr2060_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v5172 = yr2029_NewNode(v657, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_ival = Y_DEFI(F.v5176);
((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_a = yr2154_ParseNames();
yr2100_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5172)))).f_b = yr2194_ParseFormalRep();
yr2036_Link(&((*(yR105 *)y_deref(F.p2189))).f_a, &F.v5174, Y_DEFP(F.v5172));
if ((!((((yr2072_Is(v609) || yr2072_Is(v606))) && yr2078_IsIdAt(INT64_C(1)))))) {
goto yl_5178;
}
yr2084_Skip();
}
yl_5178: ;
if ((!yr2089_Accept(v609))) {
if ((!yr2089_Accept(v606))) {
yr2100_Expect(v597);
y_use = F.yu; return;
}
}
}
yr2100_Expect(v597);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2194_ParseFormalRep(void) {
struct yf2195 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5182 = Y_UNDEF_P;
if (((yr2072_Is(v240) && yr2065_IsAt(INT64_C(1), v594)) && ((yr2065_IsAt(INT64_C(3), v273) || ((yr2078_IsIdAt(INT64_C(3)) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(3)))]) == Y_DEFI(v1257))))))))) {
F.v5182 = yr2029_NewNode(v696, yr2060_TLn());
yr2084_Skip();
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5182)))).f_a = yr2302_ParseExpr();
yr2084_Skip();
yr2100_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v5182)))).f_b = yr2205_ParseRep();
yr2100_Expect(v597);
{ void * rv5188 = Y_DEFP(F.v5182);
y_use = F.yu; return rv5188; }
}
if (yr2072_Is(v462)) {
F.v5182 = yr2029_NewNode(v699, yr2060_TLn());
yr2084_Skip();
{ void * rv5189 = Y_DEFP(F.v5182);
y_use = F.yu; return rv5189; }
}
{ void * rv5190 = yr2205_ParseRep();
y_use = F.yu; return rv5190; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2199_IsStructWord(rt_int a_p2200) {
struct yf2201 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2200 = a_p2200;
F.v5194 = Y_UNDEF_I;
F.v5194 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2200))]);
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2200))]) == v210))) {
{ rt_int rv5198 = 0;
y_use = F.yu; return rv5198; }
}
{ rt_int rv5199 = (((((((((Y_DEFI(F.v5194) == v480)) || ((Y_DEFI(F.v5194) == v402))) || ((Y_DEFI(F.v5194) == v234))) || ((Y_DEFI(F.v5194) == v240))) || ((Y_DEFI(F.v5194) == v432))) || ((Y_DEFI(F.v5194) == v342))) || ((Y_DEFI(F.v5194) == v411))) || ((Y_DEFI(F.v5194) == v453)));
y_use = F.yu; return rv5199; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2205_ParseRep(void) {
struct yf2206 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5202 = Y_UNDEF_I;
F.v5204 = Y_UNDEF_P;
if ((yr2078_IsIdAt(INT64_C(0)) && ((yr2199_IsStructWord(INT64_C(1)) || ((yr2078_IsIdAt(INT64_C(1)) && yr2065_IsAt(INT64_C(2), v600))))))) {
F.v5202 = yr2106_Ident();
F.v5204 = yr2210_ParseConcrete();
((*(yR105 *)y_deref(Y_DEFP(F.v5204)))).f_text = Y_DEFI(F.v5202);
{ void * rv5209 = Y_DEFP(F.v5204);
y_use = F.yu; return rv5209; }
}
{ void * rv5210 = yr2210_ParseConcrete();
y_use = F.yu; return rv5210; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2210_ParseConcrete(void) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5213 = Y_UNDEF_P;
F.v5215 = Y_UNDEF_P;
F.v5213 = yr2225_ParseConcrete1();
if ((yr2072_Is(v408) || yr2072_Is(v231))) {
F.v5215 = yr2029_NewNode(v669, yr2060_TLn());
if (yr2089_Accept(v408)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_flag = INT64_C(1);
if (((((yr2050_TK() == v216)) || ((yr2050_TK() == v207))) || yr2072_Is(v594))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_a = yr2307_ParseSimple();
}
}
if (yr2089_Accept(v231)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_b = yr2307_ParseSimple();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_x = Y_DEFP(F.v5215);
}
{ void * rv5217 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5217; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2215_ParseIds(void) {
struct yf2216 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5220 = Y_UNDEF_P;
F.v5220 = ((void *)0);
F.v5222 = Y_UNDEF_P;
F.v5222 = ((void *)0);
F.v5224 = Y_UNDEF_P;
F.v5224 = ((void *)0);
for (;;) {
Y_TICK();
F.v5224 = yr2029_NewNode(v669, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name = yr2106_Ident();
yr2036_Link(&F.v5220, &F.v5222, Y_DEFP(F.v5224));
if ((!yr2089_Accept(v606))) {
goto yl_5225;
}
}
yl_5225: ;
{ void * rv5226 = Y_DEFP(F.v5220);
y_use = F.yu; return rv5226; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2220_ParseFieldGroups(void) {
struct yf2221 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5229 = Y_UNDEF_P;
F.v5229 = ((void *)0);
F.v5231 = Y_UNDEF_P;
F.v5231 = ((void *)0);
F.v5233 = Y_UNDEF_P;
F.v5233 = ((void *)0);
F.v5235 = Y_UNDEF_I;
while ((yr2072_Is(v270) || yr2072_Is(v483))) {
Y_TICK();
F.v5235 = yr2055_TV();
yr2084_Skip();
for (;;) {
Y_TICK();
F.v5233 = yr2029_NewNode(v705, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5233)))).f_ival = Y_DEFI(F.v5235);
((*(yR105 *)y_deref(Y_DEFP(F.v5233)))).f_a = yr2154_ParseNames();
yr2100_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5233)))).f_b = yr2205_ParseRep();
yr2036_Link(&F.v5229, &F.v5231, Y_DEFP(F.v5233));
if ((!((yr2072_Is(v609) && yr2078_IsIdAt(INT64_C(1)))))) {
goto yl_5236;
}
yr2084_Skip();
}
yl_5236: ;
if ((!yr2089_Accept(v609))) {
{ void * rv5238 = Y_DEFP(F.v5229);
y_use = F.yu; return rv5238; }
}
}
{ void * rv5239 = Y_DEFP(F.v5229);
y_use = F.yu; return rv5239; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2225_ParseConcrete1(void) {
struct yf2226 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5242 = Y_UNDEF_P;
F.v5244 = Y_UNDEF_P;
F.v5246 = Y_UNDEF_P;
F.v5248 = Y_UNDEF_P;
F.v5250 = Y_UNDEF_P;
F.v5252 = Y_UNDEF_P;
F.v5254 = Y_UNDEF_I;
F.v5256 = Y_UNDEF_I;
F.v5256 = yr2060_TLn();
if ((yr2050_TK() == v207)) {
F.v5242 = yr2029_NewNode(v672, Y_DEFI(F.v5256));
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_name = yr2106_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_a = yr2230_ParseQualifier();
{ void * rv5257 = Y_DEFP(F.v5242);
y_use = F.yu; return rv5257; }
}
if ((!(yr2050_TK() == v210))) {
yr1178_FailS(Y_DEFI(F.v5256), y_str("expected a representation", 25));
}
F.v5254 = yr2055_TV();
if ((((Y_DEFI(F.v5254) == v480)) || ((Y_DEFI(F.v5254) == v402)))) {
F.v5242 = yr2029_NewNode(v675, Y_DEFI(F.v5256));
if ((Y_DEFI(F.v5254) == v402)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_flag = INT64_C(1);
}
yr2084_Skip();
yr2100_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_a = yr2215_ParseIds();
yr2100_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_b = yr2230_ParseQualifier();
{ void * rv5260 = Y_DEFP(F.v5242);
y_use = F.yu; return rv5260; }
}
if ((Y_DEFI(F.v5254) == v234)) {
F.v5242 = yr2029_NewNode(v678, Y_DEFI(F.v5256));
yr2084_Skip();
yr2100_Expect(v594);
F.v5252 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr2050_TK() == v225))) {
yr1178_FailS(yr2060_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v5250 = yr2029_NewNode(v768, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5250)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
yr2084_Skip();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_a, &F.v5252, Y_DEFP(F.v5250));
if ((!yr2089_Accept(v606))) {
goto yl_5261;
}
}
yl_5261: ;
yr2100_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_b = yr2230_ParseQualifier();
{ void * rv5263 = Y_DEFP(F.v5242);
y_use = F.yu; return rv5263; }
}
if ((Y_DEFI(F.v5254) == v240)) {
F.v5242 = yr2029_NewNode(v681, Y_DEFI(F.v5256));
yr2084_Skip();
yr2100_Expect(v594);
F.v5252 = ((void *)0);
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_a, &F.v5252, yr2205_ParseRep());
if ((!yr2089_Accept(v606))) {
goto yl_5264;
}
}
yl_5264: ;
yr2100_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_b = yr2205_ParseRep();
yr2100_Expect(v597);
{ void * rv5265 = Y_DEFP(F.v5242);
y_use = F.yu; return rv5265; }
}
if ((Y_DEFI(F.v5254) == v432)) {
F.v5242 = yr2029_NewNode(v684, Y_DEFI(F.v5256));
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_a = yr2220_ParseFieldGroups();
if (yr2089_Accept(v450)) {
F.v5244 = yr2029_NewNode(v708, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_name = yr2106_Ident();
yr2100_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_b = yr2205_ParseRep();
F.v5248 = ((void *)0);
while (yr2089_Accept(v267)) {
Y_TICK();
F.v5246 = yr2029_NewNode(v711, yr2060_TLn());
F.v5252 = ((void *)0);
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5246)))).f_a, &F.v5252, yr2302_ParseExpr());
if ((!yr2089_Accept(v606))) {
goto yl_5266;
}
}
yl_5266: ;
yr2100_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5246)))).f_b = yr2220_ParseFieldGroups();
while (yr2089_Accept(v609)) {
Y_TICK();
}
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_a, &F.v5248, Y_DEFP(F.v5246));
}
yr2100_Expect(v321);
if (yr2089_Accept(v609)) {
}
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_b = Y_DEFP(F.v5244);
}
yr2100_Expect(v318);
{ void * rv5267 = Y_DEFP(F.v5242);
y_use = F.yu; return rv5267; }
}
if (((((Y_DEFI(F.v5254) == v342)) || ((Y_DEFI(F.v5254) == v411))) || ((Y_DEFI(F.v5254) == v453)))) {
if ((Y_DEFI(F.v5254) == v342)) {
F.v5242 = yr2029_NewNode(v687, Y_DEFI(F.v5256));
} else if ((Y_DEFI(F.v5254) == v411)) {
F.v5242 = yr2029_NewNode(v690, Y_DEFI(F.v5256));
} else {
F.v5242 = yr2029_NewNode(v693, Y_DEFI(F.v5256));
}
yr2084_Skip();
yr2100_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v5242)))).f_a = yr2205_ParseRep();
yr2100_Expect(v597);
{ void * rv5268 = Y_DEFP(F.v5242);
y_use = F.yu; return rv5268; }
}
yr1178_FailS(Y_DEFI(F.v5256), y_str("expected a representation", 25));
{ void * rv5270 = ((void *)0);
y_use = F.yu; return rv5270; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2230_ParseQualifier(void) {
struct yf2231 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5273 = Y_UNDEF_P;
if ((!yr2072_Is(v600))) {
{ void * rv5274 = ((void *)0);
y_use = F.yu; return rv5274; }
}
F.v5273 = yr2029_NewNode(v702, yr2060_TLn());
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5273)))).f_a = yr2302_ParseExpr();
yr2100_Expect(v537);
((*(yR105 *)y_deref(Y_DEFP(F.v5273)))).f_b = yr2302_ParseExpr();
yr2100_Expect(v603);
if (yr2089_Accept(v447)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5273)))).f_c = yr2307_ParseSimple();
} else if (yr2089_Accept(v414)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5273)))).f_d = yr2307_ParseSimple();
}
{ void * rv5275 = Y_DEFP(F.v5273);
y_use = F.yu; return rv5275; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2235_IsStop(void) {
struct yf2236 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5278 = Y_UNDEF_I;
if ((yr2050_TK() == v204)) {
{ rt_int rv5280 = 1;
y_use = F.yu; return rv5280; }
}
if ((!(yr2050_TK() == v210))) {
{ rt_int rv5282 = 0;
y_use = F.yu; return rv5282; }
}
F.v5278 = yr2055_TV();
{ rt_int rv5283 = ((((((((((((((((Y_DEFI(F.v5278) == v285)) || ((Y_DEFI(F.v5278) == v282))) || ((Y_DEFI(F.v5278) == v300))) || ((Y_DEFI(F.v5278) == v267))) || ((Y_DEFI(F.v5278) == v321))) || ((Y_DEFI(F.v5278) == v327))) || ((Y_DEFI(F.v5278) == v294))) || ((Y_DEFI(F.v5278) == v303))) || ((Y_DEFI(F.v5278) == v288))) || ((Y_DEFI(F.v5278) == v291))) || ((Y_DEFI(F.v5278) == v312))) || ((Y_DEFI(F.v5278) == v297))) || ((Y_DEFI(F.v5278) == v315))) || ((Y_DEFI(F.v5278) == v306))) || ((Y_DEFI(F.v5278) == v309)));
y_use = F.yu; return rv5283; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2240_ParseStatements(rt_int a_p2241) {
struct yf2242 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2241 = a_p2241;
F.v5287 = Y_UNDEF_P;
F.v5287 = ((void *)0);
F.v5289 = Y_UNDEF_P;
F.v5289 = ((void *)0);
F.v5291 = Y_UNDEF_P;
F.v5291 = ((void *)0);
F.v5293 = Y_UNDEF_I;
for (;;) {
Y_TICK();
while (yr2089_Accept(v609)) {
Y_TICK();
}
if (yr2235_IsStop()) {
goto yl_5294;
}
F.v5293 = INT64_C(0);
if (((F.p2241 && yr2078_IsIdAt(INT64_C(0))) && yr2065_IsAt(INT64_C(1), v612))) {
F.v5293 = yr2106_Ident();
yr2084_Skip();
}
F.v5291 = yr2246_ParseStatement();
((*(yR105 *)y_deref(Y_DEFP(F.v5291)))).f_text = Y_DEFI(F.v5293);
yr2036_Link(&F.v5287, &F.v5289, Y_DEFP(F.v5291));
if ((!yr2072_Is(v609))) {
goto yl_5294;
}
}
yl_5294: ;
{ void * rv5298 = Y_DEFP(F.v5287);
y_use = F.yu; return rv5298; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2246_ParseStatement(void) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5301 = Y_UNDEF_P;
F.v5303 = Y_UNDEF_P;
F.v5305 = Y_UNDEF_P;
F.v5307 = Y_UNDEF_P;
F.v5309 = Y_UNDEF_P;
F.v5311 = Y_UNDEF_P;
F.v5313 = Y_UNDEF_I;
F.v5315 = Y_UNDEF_I;
F.v5315 = yr2060_TLn();
if ((yr2050_TK() == v210)) {
F.v5313 = yr2055_TV();
if ((Y_DEFI(F.v5313) == v246)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v720, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2302_ParseExpr();
{ void * rv5316 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5316; }
}
if ((Y_DEFI(F.v5313) == v351)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v723, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_name = yr2106_Ident();
{ void * rv5317 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5317; }
}
if ((Y_DEFI(F.v5313) == v333)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v726, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_name = yr2106_Ident();
{ void * rv5318 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5318; }
}
if ((Y_DEFI(F.v5313) == v441)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v729, Y_DEFI(F.v5315));
if ((!((yr2072_Is(v609) || yr2235_IsStop())))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2302_ParseExpr();
}
{ void * rv5319 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5319; }
}
if ((Y_DEFI(F.v5313) == v468)) {
yr2084_Skip();
{ void * rv5320 = yr2029_NewNode(v732, Y_DEFI(F.v5315));
y_use = F.yu; return rv5320; }
}
if ((Y_DEFI(F.v5313) == v426)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v735, Y_DEFI(F.v5315));
if (yr2078_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_name = yr2106_Ident();
}
{ void * rv5322 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5322; }
}
if ((Y_DEFI(F.v5313) == v354)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v738, Y_DEFI(F.v5315));
F.v5305 = ((void *)0);
F.v5303 = yr2029_NewNode(v756, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5303)))).f_a = yr2302_ParseExpr();
yr2100_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v5303)))).f_b = yr2240_ParseStatements(0);
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a, &F.v5305, Y_DEFP(F.v5303));
while (yr2072_Is(v285)) {
Y_TICK();
F.v5303 = yr2029_NewNode(v756, yr2060_TLn());
yr2084_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5303)))).f_a = yr2302_ParseExpr();
yr2100_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v5303)))).f_b = yr2240_ParseStatements(0);
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a, &F.v5305, Y_DEFP(F.v5303));
}
if (yr2089_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_b = yr2240_ParseStatements(0);
}
yr2100_Expect(v300);
{ void * rv5327 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5327; }
}
if ((Y_DEFI(F.v5313) == v450)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v741, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2302_ParseExpr();
F.v5305 = ((void *)0);
while (yr2072_Is(v267)) {
Y_TICK();
F.v5303 = yr2029_NewNode(v756, yr2060_TLn());
yr2084_Skip();
F.v5309 = ((void *)0);
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5303)))).f_a, &F.v5309, yr2302_ParseExpr());
if ((!yr2089_Accept(v606))) {
goto yl_5328;
}
}
yl_5328: ;
yr2100_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5303)))).f_b = yr2240_ParseStatements(0);
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_b, &F.v5305, Y_DEFP(F.v5303));
}
if (yr2089_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_c = yr2240_ParseStatements(0);
}
yr2100_Expect(v321);
{ void * rv5332 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5332; }
}
if ((Y_DEFI(F.v5313) == v486)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v744, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2302_ParseExpr();
yr2100_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_b = yr2240_ParseStatements(0);
yr2100_Expect(v327);
{ void * rv5334 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5334; }
}
if ((Y_DEFI(F.v5313) == v345)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v747, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_name = yr2106_Ident();
yr2100_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2205_ParseRep();
yr2100_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_b = yr2240_ParseStatements(0);
yr2100_Expect(v294);
{ void * rv5336 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5336; }
}
if ((Y_DEFI(F.v5313) == v375)) {
yr2084_Skip();
F.v5301 = yr2029_NewNode(v750, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_name = yr2106_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_b = yr2240_ParseStatements(0);
yr2100_Expect(v303);
yr2111_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_name), Y_DEFI(F.v5315));
{ void * rv5338 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5338; }
}
if ((((Y_DEFI(F.v5313) == v264)) || ((Y_DEFI(F.v5313) == v456)))) {
F.v5301 = yr2029_NewNode(v753, Y_DEFI(F.v5315));
if (yr2089_Accept(v456)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_flag = INT64_C(1);
}
yr2100_Expect(v264);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2144_ParseBlock();
yr2100_Expect(v288);
{ void * rv5340 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5340; }
}
}
F.v5311 = yr2333_ParseDesignator();
if (yr2089_Accept(v531)) {
F.v5301 = yr2029_NewNode(v714, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = Y_DEFP(F.v5311);
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_b = yr2302_ParseExpr();
{ void * rv5341 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5341; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5311)))).f_kind) == v780))) {
yr1178_FailS(Y_DEFI(F.v5315), y_str("expected a statement", 20));
}
F.v5301 = yr2029_NewNode(v717, Y_DEFI(F.v5315));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = Y_DEFP(F.v5311);
{ void * rv5343 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5343; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_OpAt(void) {
struct yf2252 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr2050_TK() == v213)) || ((yr2050_TK() == v210)))) {
{ rt_int rv5345 = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv5345; }
}
{ rt_int rv5347 = INT64_C(0);
y_use = F.yu; return rv5347; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2256_IsRel(rt_int a_p2257) {
struct yf2258 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2257 = a_p2257;
{ rt_int rv5350 = ((((((((((((((((((((F.p2257 == v360)) || ((F.p2257 == v570))) || ((F.p2257 == v585))) || ((F.p2257 == v588))) || ((F.p2257 == v540))) || ((F.p2257 == v591))) || ((F.p2257 == v543))) || ((F.p2257 == v546))) || ((F.p2257 == v501))) || ((F.p2257 == v549))) || ((F.p2257 == v504))) || ((F.p2257 == v552))) || ((F.p2257 == v513))) || ((F.p2257 == v507))) || ((F.p2257 == v495))) || ((F.p2257 == v555))) || ((F.p2257 == v516))) || ((F.p2257 == v510))) || ((F.p2257 == v498)));
y_use = F.yu; return rv5350; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2262_IsAssocMul(rt_int a_p2263) {
struct yf2264 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2263 = a_p2263;
{ rt_int rv5353 = (((F.p2263 == v579)) || ((F.p2263 == v237)));
y_use = F.yu; return rv5353; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2268_IsNonAssocMul(rt_int a_p2269) {
struct yf2270 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2269 = a_p2269;
{ rt_int rv5356 = ((((((((F.p2269 == v582)) || ((F.p2269 == v276))) || ((F.p2269 == v378))) || ((F.p2269 == v558))) || ((F.p2269 == v519))) || ((F.p2269 == v561))) || ((F.p2269 == v522)));
y_use = F.yu; return rv5356; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2274_IsAssocAdd(rt_int a_p2275) {
struct yf2276 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2275 = a_p2275;
{ rt_int rv5359 = (((F.p2275 == v573)) || ((F.p2275 == v399)));
y_use = F.yu; return rv5359; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2280_IsNonAssocAdd(rt_int a_p2281) {
struct yf2282 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2281 = a_p2281;
{ rt_int rv5362 = (((((((F.p2281 == v576)) || ((F.p2281 == v489))) || ((F.p2281 == v564))) || ((F.p2281 == v525))) || ((F.p2281 == v567))) || ((F.p2281 == v528)));
y_use = F.yu; return rv5362; }
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
F.v5369 = Y_UNDEF_P;
F.v5369 = yr2029_NewNode(v798, F.p2290);
((*(yR105 *)y_deref(Y_DEFP(F.v5369)))).f_name = F.p2287;
((*(yR105 *)y_deref(Y_DEFP(F.v5369)))).f_a = F.p2288;
((*(yR105 *)y_deref(Y_DEFP(F.v5369)))).f_b = F.p2289;
{ void * rv5370 = Y_DEFP(F.v5369);
y_use = F.yu; return rv5370; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2295_NeedParens(rt_int a_p2296, rt_int a_p2297) {
struct yf2298 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2296 = a_p2296;
F.p2297 = a_p2297;
F.v5375 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p2296);
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v5375 = yr1056_SE();
yr1157_Fail(F.p2297, Y_DEFI(F.v5375));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2302_ParseExpr(void) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5379 = Y_UNDEF_P;
F.v5381 = Y_UNDEF_I;
F.v5383 = Y_UNDEF_I;
F.v5383 = yr2060_TLn();
F.v5379 = yr2307_ParseSimple();
F.v5381 = yr2251_OpAt();
if (yr2256_IsRel(Y_DEFI(F.v5381))) {
yr2084_Skip();
F.v5379 = yr2286_Bin(Y_DEFI(F.v5381), Y_DEFP(F.v5379), yr2307_ParseSimple(), Y_DEFI(F.v5383));
if (yr2256_IsRel(yr2251_OpAt())) {
yr2295_NeedParens(Y_DEFI(F.v5381), Y_DEFI(F.v5383));
}
}
{ void * rv5384 = Y_DEFP(F.v5379);
y_use = F.yu; return rv5384; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2307_ParseSimple(void) {
struct yf2308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5387 = Y_UNDEF_P;
F.v5389 = Y_UNDEF_P;
F.v5391 = Y_UNDEF_I;
F.v5393 = Y_UNDEF_I;
F.v5393 = yr2060_TLn();
if (yr2072_Is(v576)) {
yr2084_Skip();
F.v5389 = yr2029_NewNode(v795, Y_DEFI(F.v5393));
((*(yR105 *)y_deref(Y_DEFP(F.v5389)))).f_a = yr2312_ParseTerm();
F.v5391 = yr2251_OpAt();
if ((yr2274_IsAssocAdd(Y_DEFI(F.v5391)) || yr2280_IsNonAssocAdd(Y_DEFI(F.v5391)))) {
yr2295_NeedParens(y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFI(F.v5393));
}
{ void * rv5394 = Y_DEFP(F.v5389);
y_use = F.yu; return rv5394; }
}
F.v5387 = yr2312_ParseTerm();
F.v5391 = yr2251_OpAt();
if (yr2280_IsNonAssocAdd(Y_DEFI(F.v5391))) {
yr2084_Skip();
F.v5387 = yr2286_Bin(Y_DEFI(F.v5391), Y_DEFP(F.v5387), yr2312_ParseTerm(), Y_DEFI(F.v5393));
if ((yr2274_IsAssocAdd(yr2251_OpAt()) || yr2280_IsNonAssocAdd(yr2251_OpAt()))) {
yr2295_NeedParens(Y_DEFI(F.v5391), Y_DEFI(F.v5393));
}
{ void * rv5395 = Y_DEFP(F.v5387);
y_use = F.yu; return rv5395; }
}
while (yr2274_IsAssocAdd(Y_DEFI(F.v5391))) {
Y_TICK();
yr2084_Skip();
F.v5387 = yr2286_Bin(Y_DEFI(F.v5391), Y_DEFP(F.v5387), yr2312_ParseTerm(), Y_DEFI(F.v5393));
if (yr2280_IsNonAssocAdd(yr2251_OpAt())) {
yr2295_NeedParens(yr2251_OpAt(), Y_DEFI(F.v5393));
}
F.v5391 = yr2251_OpAt();
}
{ void * rv5396 = Y_DEFP(F.v5387);
y_use = F.yu; return rv5396; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2312_ParseTerm(void) {
struct yf2313 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5399 = Y_UNDEF_P;
F.v5401 = Y_UNDEF_I;
F.v5403 = Y_UNDEF_I;
F.v5403 = yr2060_TLn();
F.v5399 = yr2328_ParseFactor();
F.v5401 = yr2251_OpAt();
if (yr2268_IsNonAssocMul(Y_DEFI(F.v5401))) {
yr2084_Skip();
F.v5399 = yr2286_Bin(Y_DEFI(F.v5401), Y_DEFP(F.v5399), yr2328_ParseFactor(), Y_DEFI(F.v5403));
if ((yr2262_IsAssocMul(yr2251_OpAt()) || yr2268_IsNonAssocMul(yr2251_OpAt()))) {
yr2295_NeedParens(Y_DEFI(F.v5401), Y_DEFI(F.v5403));
}
{ void * rv5404 = Y_DEFP(F.v5399);
y_use = F.yu; return rv5404; }
}
while (yr2262_IsAssocMul(Y_DEFI(F.v5401))) {
Y_TICK();
yr2084_Skip();
F.v5399 = yr2286_Bin(Y_DEFI(F.v5401), Y_DEFP(F.v5399), yr2328_ParseFactor(), Y_DEFI(F.v5403));
if (yr2268_IsNonAssocMul(yr2251_OpAt())) {
yr2295_NeedParens(yr2251_OpAt(), Y_DEFI(F.v5403));
}
F.v5401 = yr2251_OpAt();
}
{ void * rv5405 = Y_DEFP(F.v5399);
y_use = F.yu; return rv5405; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2317_IsLiteralAt(rt_int a_p2318) {
struct yf2319 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2318 = a_p2318;
F.v5409 = Y_UNDEF_I;
F.v5409 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2318))]);
{ rt_int rv5411 = (((((((Y_DEFI(F.v5409) == v216)) || ((Y_DEFI(F.v5409) == v219))) || ((Y_DEFI(F.v5409) == v222))) || ((Y_DEFI(F.v5409) == v225))) || ((Y_DEFI(F.v5409) == v228))) || yr2065_IsAt(F.p2318, v387));
y_use = F.yu; return rv5411; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2323_ParseLiteral(void) {
struct yf2324 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5414 = Y_UNDEF_P;
F.v5416 = Y_UNDEF_I;
F.v5416 = yr2050_TK();
F.v5418 = Y_UNDEF_I;
F.v5418 = yr2060_TLn();
if ((Y_DEFI(F.v5416) == v216)) {
F.v5414 = yr2029_NewNode(v759, Y_DEFI(F.v5418));
((*(yR105 *)y_deref(Y_DEFP(F.v5414)))).f_ival = yr2055_TV();
} else if ((Y_DEFI(F.v5416) == v219)) {
F.v5414 = yr2029_NewNode(v762, Y_DEFI(F.v5418));
((*(yR105 *)y_deref(Y_DEFP(F.v5414)))).f_ival = yr2055_TV();
} else if ((Y_DEFI(F.v5416) == v222)) {
F.v5414 = yr2029_NewNode(v765, Y_DEFI(F.v5418));
((*(yR105 *)y_deref(Y_DEFP(F.v5414)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5416) == v225)) {
F.v5414 = yr2029_NewNode(v768, Y_DEFI(F.v5418));
((*(yR105 *)y_deref(Y_DEFP(F.v5414)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5416) == v228)) {
F.v5414 = yr2029_NewNode(v771, Y_DEFI(F.v5418));
((*(yR105 *)y_deref(Y_DEFP(F.v5414)))).f_text = y_range(yr2055_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v5414 = yr2029_NewNode(v774, Y_DEFI(F.v5418));
}
yr2084_Skip();
{ void * rv5419 = Y_DEFP(F.v5414);
y_use = F.yu; return rv5419; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2328_ParseFactor(void) {
struct yf2329 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5422 = Y_UNDEF_P;
F.v5424 = Y_UNDEF_I;
F.v5426 = Y_UNDEF_I;
F.v5426 = yr2060_TLn();
if (yr2072_Is(v390)) {
yr2084_Skip();
F.v5422 = yr2029_NewNode(v792, Y_DEFI(F.v5426));
((*(yR105 *)y_deref(Y_DEFP(F.v5422)))).f_a = yr2328_ParseFactor();
{ void * rv5427 = Y_DEFP(F.v5422);
y_use = F.yu; return rv5427; }
}
if (yr2072_Is(v594)) {
yr2084_Skip();
F.v5422 = yr2029_NewNode(v801, Y_DEFI(F.v5426));
((*(yR105 *)y_deref(Y_DEFP(F.v5422)))).f_a = yr2302_ParseExpr();
yr2100_Expect(v597);
{ void * rv5428 = Y_DEFP(F.v5422);
y_use = F.yu; return rv5428; }
}
if (yr2317_IsLiteralAt(INT64_C(0))) {
{ void * rv5430 = yr2323_ParseLiteral();
y_use = F.yu; return rv5430; }
}
if (yr2078_IsIdAt(INT64_C(0))) {
if ((yr2317_IsLiteralAt(INT64_C(1)) || ((yr2078_IsIdAt(INT64_C(1)) && (!((((((yr2065_IsAt(INT64_C(2), v594) || yr2065_IsAt(INT64_C(2), v600)) || yr2065_IsAt(INT64_C(2), v615)) || yr2065_IsAt(INT64_C(2), v618)) || yr2065_IsAt(INT64_C(2), v531)) || yr2065_IsAt(INT64_C(2), v612)))))))) {
F.v5424 = yr2106_Ident();
if (yr2078_IsIdAt(INT64_C(0))) {
F.v5422 = yr2029_NewNode(v777, Y_DEFI(F.v5426));
((*(yR105 *)y_deref(Y_DEFP(F.v5422)))).f_name = yr2106_Ident();
} else {
F.v5422 = yr2323_ParseLiteral();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5422)))).f_d = yr2029_NewNode(v669, Y_DEFI(F.v5426));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5422)))).f_d)))).f_name = Y_DEFI(F.v5424);
{ void * rv5441 = Y_DEFP(F.v5422);
y_use = F.yu; return rv5441; }
}
{ void * rv5442 = yr2333_ParseDesignator();
y_use = F.yu; return rv5442; }
}
yr1186_FailN(Y_DEFI(F.v5426), yr2095_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv5444 = ((void *)0);
y_use = F.yu; return rv5444; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2333_ParseDesignator(void) {
struct yf2334 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5447 = Y_UNDEF_P;
F.v5449 = Y_UNDEF_P;
F.v5451 = Y_UNDEF_P;
F.v5453 = Y_UNDEF_I;
F.v5453 = yr2060_TLn();
F.v5447 = yr2029_NewNode(v777, Y_DEFI(F.v5453));
((*(yR105 *)y_deref(Y_DEFP(F.v5447)))).f_name = yr2106_Ident();
if (yr2089_Accept(v594)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5447)))).f_kind = v780;
F.v5451 = ((void *)0);
while ((!yr2072_Is(v597))) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5447)))).f_a, &F.v5451, yr2302_ParseExpr());
if ((!yr2089_Accept(v606))) {
yr2338_EXIT_ARGS();
}
}
yr2100_Expect(v597);
}
for (;;) {
Y_TICK();
if (yr2089_Accept(v615)) {
F.v5449 = yr2029_NewNode(v783, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5449)))).f_a = Y_DEFP(F.v5447);
((*(yR105 *)y_deref(Y_DEFP(F.v5449)))).f_name = yr2106_Ident();
F.v5447 = Y_DEFP(F.v5449);
} else if (yr2089_Accept(v600)) {
F.v5449 = yr2029_NewNode(v786, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5449)))).f_a = Y_DEFP(F.v5447);
F.v5451 = ((void *)0);
for (;;) {
Y_TICK();
yr2036_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5449)))).f_b, &F.v5451, yr2302_ParseExpr());
if ((!yr2089_Accept(v606))) {
goto yl_5455;
}
}
yl_5455: ;
yr2100_Expect(v603);
F.v5447 = Y_DEFP(F.v5449);
} else if (yr2089_Accept(v618)) {
F.v5449 = yr2029_NewNode(v789, yr2060_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5449)))).f_a = Y_DEFP(F.v5447);
F.v5447 = Y_DEFP(F.v5449);
} else {
goto yl_5454;
}
}
yl_5454: ;
{ void * rv5456 = Y_DEFP(F.v5447);
y_use = F.yu; return rv5456; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2338_EXIT_ARGS(void) {
struct yf2339 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr2072_Is(v597))) {
yr2100_Expect(v597);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2343_ParseProgram(void) {
struct yf2344 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5460 = Y_UNDEF_P;
F.v5460 = ((void *)0);
F.v5462 = Y_UNDEF_P;
F.v5462 = ((void *)0);
F.v5464 = Y_UNDEF_P;
F.v5464 = ((void *)0);
F.v5466 = Y_UNDEF_I;
while ((!(yr2050_TK() == v204))) {
Y_TICK();
if ((!((yr2072_Is(v381) || yr2072_Is(v384))))) {
yr1178_FailS(yr2060_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
F.v5466 = Y_DEFI(v1249);
F.v5464 = yr2134_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v5464)))).f_x = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5464)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5464)))).f_x)))).f_ival = Y_DEFI(F.v5466);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5464)))).f_x)))).f_flag = Y_DEFI(v1249);
yr2036_Link(&F.v5460, &F.v5462, Y_DEFP(F.v5464));
while (yr2089_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5468 = Y_DEFP(F.v5460);
y_use = F.yu; return rv5468; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2348_NewSym(rt_int a_p2349, rt_int a_p2350) {
struct yf2351 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2349 = a_p2349;
F.p2350 = a_p2350;
F.v5473 = Y_UNDEF_P;
({ F.v5473 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v5473)); });
(*(yR125 *)y_deref(Y_DEFP(F.v5473))) = ((yR125){ .f_kind = F.p2349, .f_name = F.p2350, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1), .f_skey = INT64_C(0) });
((*(yR125 *)y_deref(Y_DEFP(F.v5473)))).f_serial = yr1195_NewSerial();
{ void * rv5488 = Y_DEFP(F.v5473);
y_use = F.yu; return rv5488; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2355_OpenScope(rt_int a_p2356) {
struct yf2357 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2356 = a_p2356;
F.v5492 = Y_UNDEF_P;
({ F.v5492 = y_new(sizeof(yR130)); y_initu(&yd_131, y_deref(F.v5492)); });
(*(yR130 *)y_deref(Y_DEFP(F.v5492))) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2356, .f_module = ((void *)0), .f_level = Y_DEFI(v1279), .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((Y_DEFI(v1273) >= INT64_C(0))) {
((*(yR130 *)y_deref(Y_DEFP(F.v5492)))).f_up = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))]);
}
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = Y_DEFP(F.v5492);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2361_ReopenScope(void * a_p2362) {
struct yf2363 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2362 = a_p2362;
F.v5499 = Y_UNDEF_P;
F.v5499 = Y_DEFP(((*(yR130 *)y_deref(F.p2362))).f_syms);
F.v5501 = Y_UNDEF_I;
F.v5501 = INT64_C(0);
F.v5504 = Y_UNDEF_I;
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = F.p2362;
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
while ((!(Y_DEFP(F.v5499) == ((void *)0)))) {
Y_TICK();
F.v5501 = y_range(y_add(Y_DEFI(F.v5501), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5501))] = Y_DEFP(F.v5499);
F.v5499 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5499)))).f_stack);
}
while ((Y_DEFI(F.v5501) > INT64_C(0))) {
Y_TICK();
F.v5499 = Y_DEFP(((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5501))]);
F.v5504 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5499)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v5499)))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5504))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5504))] = Y_DEFP(F.v5499);
F.v5501 = y_range(y_sub(Y_DEFI(F.v5501), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2367_CloseScope(void) {
struct yf2368 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5516 = Y_UNDEF_P;
F.v5518 = Y_UNDEF_P;
F.v5520 = Y_UNDEF_P;
F.v5522 = Y_UNDEF_I;
F.v5516 = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
while ((!(Y_DEFP(F.v5516) == ((void *)0)))) {
Y_TICK();
F.v5522 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5516)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5518 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5522))]);
F.v5520 = ((void *)0);
while ((((!(Y_DEFP(F.v5518) == ((void *)0)))) && ((!(Y_DEFP(F.v5518) == Y_DEFP(F.v5516)))))) {
Y_TICK();
F.v5520 = Y_DEFP(F.v5518);
F.v5518 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5518)))).f_chain);
}
if ((Y_DEFP(F.v5518) == Y_DEFP(F.v5516))) {
if ((Y_DEFP(F.v5520) == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5522))] = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5516)))).f_chain);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v5520)))).f_chain = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5516)))).f_chain);
}
}
F.v5516 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5516)))).f_stack);
}
v1273 = y_range(y_sub(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2372_Visible(void * a_p2373) {
struct yf2374 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2373 = a_p2373;
{ rt_int rv5530 = (((Y_DEFI(((*(yR125 *)y_deref(F.p2373))).f_depth) >= Y_DEFI(v1276))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p2373))).f_depth) == INT64_C(0))));
y_use = F.yu; return rv5530; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2378_Find(rt_int a_p2379) {
struct yf2380 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2379 = a_p2379;
F.v5534 = Y_UNDEF_P;
F.v5534 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2379, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5534) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5534)))).f_name) == F.p2379)) && yr2372_Visible(Y_DEFP(F.v5534)))) {
{ void * rv5537 = Y_DEFP(F.v5534);
y_use = F.yu; return rv5537; }
}
F.v5534 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5534)))).f_chain);
}
{ void * rv5538 = ((void *)0);
y_use = F.yu; return rv5538; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2384_FindHere(rt_int a_p2385) {
struct yf2386 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2385 = a_p2385;
F.v5542 = Y_UNDEF_P;
F.v5542 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2385, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5542) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5542)))).f_name) == F.p2385)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5542)))).f_depth) == Y_DEFI(v1273))))) {
{ void * rv5545 = Y_DEFP(F.v5542);
y_use = F.yu; return rv5545; }
}
F.v5542 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5542)))).f_chain);
}
{ void * rv5546 = ((void *)0);
y_use = F.yu; return rv5546; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2390_Lookup(rt_int a_p2391, rt_int a_p2392) {
struct yf2393 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2391 = a_p2391;
F.p2392 = a_p2392;
F.v5551 = Y_UNDEF_P;
F.v5551 = yr2378_Find(F.p2391);
F.v5553 = Y_UNDEF_P;
if ((!(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]) == ((void *)0)))) {
if ((((Y_DEFP(F.v5551) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_depth) == Y_DEFI(v1273)))))) {
if (yr2410_DeclaredFrom(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]), F.p2391)) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((Y_DEFP(F.v5551) == ((void *)0))) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is not declared here", 21));
}
F.lo5559 = INT64_C(1);
F.hi5560 = Y_DEFI(v1328);
{ rt_int hi5564 = F.hi5560;
for (rt_int i5563 = F.lo5559; i5563 <= hi5564; i5563++) { F.c_5562 = i5563; Y_TICK();
if (((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_depth) == Y_DEFI(((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5562)]))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_serial) > Y_DEFI(((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5562)])))) && yr2404_IsSimple(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_kind)))) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i5563 == hi5564) break;
}}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_kind) == v894)) {
F.v5553 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_chain);
while ((!(Y_DEFP(F.v5553) == ((void *)0)))) {
Y_TICK();
if ((((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5553)))).f_name) == F.p2391)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5553)))).f_depth) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5551)))).f_depth)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5553)))).f_kind) == v894))) && yr2431_Resolved(Y_DEFP(F.v5553))) && ((!(yr2483_Real(Y_DEFP(F.v5553)) == yr2483_Real(Y_DEFP(F.v5551)))))) && ((!(Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v5551))))).f_kind) == v873))))) {
yr1186_FailN(F.p2392, F.p2391, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v5553 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5553)))).f_chain);
}
}
{ void * rv5567 = Y_DEFP(F.v5551);
y_use = F.yu; return rv5567; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2397_AltOf(void * a_p2398, void * a_p2399) {
struct yf2400 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2398 = a_p2398;
F.p2399 = a_p2399;
F.v5572 = Y_UNDEF_P;
F.v5572 = Y_DEFP(((*(yR125 *)y_deref(F.p2398))).f_alt);
while ((!(Y_DEFP(F.v5572) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(F.v5572) == F.p2399)) {
{ rt_int rv5574 = 1;
y_use = F.yu; return rv5574; }
}
F.v5572 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5572)))).f_alt);
}
{ rt_int rv5576 = 0;
y_use = F.yu; return rv5576; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2404_IsSimple(rt_int a_p2405) {
struct yf2406 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2405 = a_p2405;
{ rt_int rv5579 = (((((((F.p2405 == v861)) || ((F.p2405 == v864))) || ((F.p2405 == v867))) || ((F.p2405 == v870))) || ((F.p2405 == v873))) || ((F.p2405 == v888)));
y_use = F.yu; return rv5579; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2410_DeclaredFrom(void * a_p2411, rt_int a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2411 = a_p2411;
F.p2412 = a_p2412;
F.v5584 = Y_UNDEF_P;
F.v5584 = F.p2411;
F.v5586 = Y_UNDEF_P;
F.v5586 = F.p2411;
F.v5588 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v5584) == ((void *)0)))) {
Y_TICK();
F.v5588 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5584)))).f_kind);
if (((((Y_DEFI(F.v5588) == v639)) || ((Y_DEFI(F.v5588) == v642))) || ((Y_DEFI(F.v5588) == v645)))) {
F.v5586 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5584)))).f_a);
while ((!(Y_DEFP(F.v5586) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5586)))).f_name) == F.p2412)) {
{ rt_int rv5590 = 1;
y_use = F.yu; return rv5590; }
}
F.v5586 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5586)))).f_next);
}
}
if ((((((((Y_DEFI(F.v5588) == v648)) || ((Y_DEFI(F.v5588) == v651))) || ((Y_DEFI(F.v5588) == v654))) || ((Y_DEFI(F.v5588) == v666))) || ((Y_DEFI(F.v5588) == v624))) || ((Y_DEFI(F.v5588) == v660)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5584)))).f_name) == F.p2412)) {
{ rt_int rv5592 = 1;
y_use = F.yu; return rv5592; }
}
}
if ((((((Y_DEFI(F.v5588) == v639)) || ((Y_DEFI(F.v5588) == v642))) || ((Y_DEFI(F.v5588) == v648))) || ((Y_DEFI(F.v5588) == v651)))) {
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5584)))).f_b), F.p2412)) {
{ rt_int rv5594 = 1;
y_use = F.yu; return rv5594; }
}
}
if ((Y_DEFI(F.v5588) == v624)) {
F.v5586 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5584)))).f_b);
while ((!(Y_DEFP(F.v5586) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5586)))).f_ival) == F.p2412)) || ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5586)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5586)))).f_name) == F.p2412)))))) {
{ rt_int rv5597 = 1;
y_use = F.yu; return rv5597; }
}
F.v5586 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5586)))).f_next);
}
}
F.v5584 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5584)))).f_next);
}
{ rt_int rv5599 = 0;
y_use = F.yu; return rv5599; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2417_LiteralIn(void * a_p2418, rt_int a_p2419) {
struct yf2420 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2418 = a_p2418;
F.p2419 = a_p2419;
F.v5604 = Y_UNDEF_P;
if ((F.p2418 == ((void *)0))) {
{ rt_int rv5606 = 0;
y_use = F.yu; return rv5606; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v675)) {
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a);
while ((!(Y_DEFP(F.v5604) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_name) == F.p2419)) {
{ rt_int rv5608 = 1;
y_use = F.yu; return rv5608; }
}
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_next);
}
{ rt_int rv5610 = 0;
y_use = F.yu; return rv5610; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v681)) {
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a);
while ((!(Y_DEFP(F.v5604) == ((void *)0)))) {
Y_TICK();
if (yr2417_LiteralIn(Y_DEFP(F.v5604), F.p2419)) {
{ rt_int rv5612 = 1;
y_use = F.yu; return rv5612; }
}
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_next);
}
{ rt_int rv5613 = yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b), F.p2419);
y_use = F.yu; return rv5613; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v684)) {
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a);
while ((!(Y_DEFP(F.v5604) == ((void *)0)))) {
Y_TICK();
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_b), F.p2419)) {
{ rt_int rv5615 = 1;
y_use = F.yu; return rv5615; }
}
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_next);
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b) == ((void *)0)))) {
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b)))).f_b), F.p2419)) {
{ rt_int rv5617 = 1;
y_use = F.yu; return rv5617; }
}
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_b)))).f_a);
while ((!(Y_DEFP(F.v5604) == ((void *)0)))) {
Y_TICK();
if (yr2424_LiteralInGroups(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_b), F.p2419)) {
{ rt_int rv5619 = 1;
y_use = F.yu; return rv5619; }
}
F.v5604 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5604)))).f_next);
}
}
{ rt_int rv5621 = 0;
y_use = F.yu; return rv5621; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v687)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2418))).f_kind) == v693)))) {
{ rt_int rv5622 = yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2418))).f_a), F.p2419);
y_use = F.yu; return rv5622; }
}
{ rt_int rv5624 = 0;
y_use = F.yu; return rv5624; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2424_LiteralInGroups(void * a_p2425, rt_int a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2425 = a_p2425;
F.p2426 = a_p2426;
F.v5629 = Y_UNDEF_P;
F.v5629 = F.p2425;
while ((!(Y_DEFP(F.v5629) == ((void *)0)))) {
Y_TICK();
if (yr2417_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5629)))).f_b), F.p2426)) {
{ rt_int rv5631 = 1;
y_use = F.yu; return rv5631; }
}
F.v5629 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5629)))).f_next);
}
{ rt_int rv5633 = 0;
y_use = F.yu; return rv5633; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2431_Resolved(void * a_p2432) {
struct yf2433 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2432 = a_p2432;
if ((!(Y_DEFI(((*(yR125 *)y_deref(F.p2432))).f_kind) == v894))) {
{ rt_int rv5637 = 1;
y_use = F.yu; return rv5637; }
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p2432))).f_target) == ((void *)0))) {
{ rt_int rv5639 = 0;
y_use = F.yu; return rv5639; }
}
{ rt_int rv5640 = yr2431_Resolved(Y_DEFP(((*(yR125 *)y_deref(F.p2432))).f_target));
y_use = F.yu; return rv5640; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2437_Ambiguous(void * a_p2438) {
struct yf2439 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2438 = a_p2438;
F.v5644 = Y_UNDEF_P;
F.v5644 = Y_DEFP(((*(yR125 *)y_deref(F.p2438))).f_chain);
while ((!(Y_DEFP(F.v5644) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5644)))).f_name) == Y_DEFI(((*(yR125 *)y_deref(F.p2438))).f_name))) && yr2372_Visible(Y_DEFP(F.v5644))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5644)))).f_kind) == v873))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5644)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p2438))).f_rep)))).f_tid)))))) {
{ rt_int rv5646 = 1;
y_use = F.yu; return rv5646; }
}
F.v5644 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5644)))).f_chain);
}
{ rt_int rv5648 = 0;
y_use = F.yu; return rv5648; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2443_FindLit(rt_int a_p2444, void * a_p2445) {
struct yf2446 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2444 = a_p2444;
F.p2445 = a_p2445;
F.v5653 = Y_UNDEF_P;
F.v5653 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2444, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5653) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5653)))).f_name) == F.p2444)) && yr2431_Resolved(Y_DEFP(F.v5653)))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v5653))))).f_kind) == v873)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v5653))))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2445))).f_tid))))) {
{ void * rv5656 = Y_DEFP(F.v5653);
y_use = F.yu; return rv5656; }
}
}
F.v5653 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5653)))).f_chain);
}
{ void * rv5657 = ((void *)0);
y_use = F.yu; return rv5657; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2450_Define(void * a_p2451, rt_int a_p2452) {
struct yf2453 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2451 = a_p2451;
F.p2452 = a_p2452;
F.v5662 = Y_UNDEF_P;
F.v5662 = yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_name));
F.v5664 = Y_UNDEF_I;
F.v5664 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(Y_DEFP(F.v5662) == ((void *)0)))) && (!((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5662)))).f_kind) == v873)) && ((Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_kind) == v873)))))) && (!(((((Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_kind) == v876)) && yr2431_Resolved(Y_DEFP(F.v5662))) && yr2397_AltOf(F.p2451, yr2483_Real(Y_DEFP(F.v5662))))))) && (!((((Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5662)))).f_kind) == v894))))))) {
yr1186_FailN(F.p2452, Y_DEFI(((*(yR125 *)y_deref(F.p2451))).f_name), y_str(" is declared twice in this scope", 32));
}
((*(yR125 *)y_deref(F.p2451))).f_depth = Y_DEFI(v1273);
((*(yR125 *)y_deref(F.p2451))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5664))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5664))] = F.p2451;
((*(yR125 *)y_deref(F.p2451))).f_stack = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms = F.p2451;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2457_Path(rt_int a_p2458, rt_int a_p2459) {
struct yf2460 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2458 = a_p2458;
F.p2459 = a_p2459;
F.v5672 = Y_UNDEF_I;
F.v5672 = y_range(y_sub(Y_DEFI(v1279), F.p2458), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2458 == INT64_C(0))) {
{ rt_int rv5675 = F.p2459;
y_use = F.yu; return rv5675; }
}
yr1026_SB();
if ((Y_DEFI(F.v5672) == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
} else {
yr1037_SA(y_str("F.up->", 6));
while ((Y_DEFI(F.v5672) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
F.v5672 = y_range(y_sub(Y_DEFI(F.v5672), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1044_ST(F.p2459);
{ rt_int rv5683 = yr1056_SE();
y_use = F.yu; return rv5683; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2464_FramePtr(rt_int a_p2465) {
struct yf2466 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2465 = a_p2465;
F.v5687 = Y_UNDEF_I;
F.v5687 = y_range(y_sub(Y_DEFI(v1279), F.p2465), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v5687) == INT64_C(0))) {
{ rt_int rv5691 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5691; }
}
yr1026_SB();
yr1037_SA(y_str("F.up", 4));
while ((Y_DEFI(F.v5687) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
F.v5687 = y_range(y_sub(Y_DEFI(F.v5687), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5697 = yr1056_SE();
y_use = F.yu; return rv5697; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2470_DeclStorage(rt_int a_p2471, rt_int a_p2472) {
struct yf2473 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2471 = a_p2471;
F.p2472 = a_p2472;
F.v5702 = Y_UNDEF_I;
yr1026_SB();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
}
yr1044_ST(F.p2471);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p2472);
yr1037_SA(y_str(";", 1));
F.v5702 = yr1056_SE();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1110_Put(&v984, Y_DEFI(F.v5702));
} else {
yr1110_Put(&v998, Y_DEFI(F.v5702));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2477_SymPath(void * a_p2478) {
struct yf2479 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2478 = a_p2478;
F.v5711 = Y_UNDEF_I;
F.v5711 = yr2457_Path(Y_DEFI(((*(yR125 *)y_deref(F.p2478))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p2478))).f_cname));
if (Y_DEFI(((*(yR125 *)y_deref(F.p2478))).f_byref)) {
yr1026_SB();
yr1037_SA(y_str("(*", 2));
yr1044_ST(Y_DEFI(F.v5711));
yr1037_SA(y_str(")", 1));
{ rt_int rv5714 = yr1056_SE();
y_use = F.yu; return rv5714; }
}
{ rt_int rv5715 = Y_DEFI(F.v5711);
y_use = F.yu; return rv5715; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2483_Real(void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2484 = a_p2484;
F.v5719 = Y_UNDEF_P;
F.v5719 = F.p2484;
while ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5719)))).f_kind) == v894)) {
Y_TICK();
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5719)))).f_target) == ((void *)0))) {
yr1186_FailN(Y_DEFI(v1000), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5719)))).f_name), y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5719 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5719)))).f_target);
}
{ void * rv5721 = Y_DEFP(F.v5719);
y_use = F.yu; return rv5721; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2489_NewRep(rt_int a_p2490, rt_int a_p2491) {
struct yf2492 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2490 = a_p2490;
F.p2491 = a_p2491;
F.v5726 = Y_UNDEF_P;
({ F.v5726 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5726)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5726))) = ((yR110){ .f_kind = F.p2490, .f_tid = F.p2491, .f_tname = F.p2491, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
((*(yR110 *)y_deref(Y_DEFP(F.v5726)))).f_serial = yr1195_NewSerial();
{ void * rv5754 = Y_DEFP(F.v5726);
y_use = F.yu; return rv5754; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2496_CopyRep(void * a_p2497) {
struct yf2498 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2497 = a_p2497;
F.v5758 = Y_UNDEF_P;
({ F.v5758 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5758)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5758))) = (*(yR110 *)y_deref(F.p2497));
((*(yR110 *)y_deref(Y_DEFP(F.v5758)))).f_serial = yr1195_NewSerial();
((*(yR110 *)y_deref(Y_DEFP(F.v5758)))).f_sig = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v5758)))).f_bits = INT64_C(0);
{ void * rv5761 = Y_DEFP(F.v5758);
y_use = F.yu; return rv5761; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2502_IsDiscrete(void * a_p2503) {
struct yf2504 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2503 = a_p2503;
{ rt_int rv5764 = (((((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v813))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v816))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_kind) == v819)));
y_use = F.yu; return rv5764; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2508_IsNumeric(void * a_p2509) {
struct yf2510 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2509 = a_p2509;
{ rt_int rv5767 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2509))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2509))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2509))).f_kind) == v810)));
y_use = F.yu; return rv5767; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2514_IsArrayLike(void * a_p2515) {
struct yf2516 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2515 = a_p2515;
{ rt_int rv5770 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2515))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2515))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2515))).f_kind) == v846)));
y_use = F.yu; return rv5770; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2520_IsString(void * a_p2521) {
struct yf2522 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2521 = a_p2521;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind) == v846)) {
{ rt_int rv5774 = 1;
y_use = F.yu; return rv5774; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind) == v822)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5776 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2521))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5776; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_kind) == v843)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2521))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5778 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2521))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5778; }
}
{ rt_int rv5780 = 0;
y_use = F.yu; return rv5780; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2526_Deep(void * a_p2527) {
struct yf2528 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2527 = a_p2527;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v846)))) {
{ rt_int rv5784 = 1;
y_use = F.yu; return rv5784; }
}
{ rt_int rv5785 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_kind) == v825)) && Y_DEFI(((*(yR110 *)y_deref(F.p2527))).f_deep));
y_use = F.yu; return rv5785; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2532_Holds(void * a_p2533, rt_int a_p2534) {
struct yf2535 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2533 = a_p2533;
F.p2534 = a_p2534;
F.v5790 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_kind) == v822)) {
{ rt_int rv5791 = (((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2533))).f_elem)))).f_kind) == F.p2534)) || yr2532_Holds(Y_DEFP(((*(yR110 *)y_deref(F.p2533))).f_elem), F.p2534));
y_use = F.yu; return rv5791; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2533))).f_kind) == v825)) {
F.v5790 = Y_DEFP(((*(yR110 *)y_deref(F.p2533))).f_fields);
while ((!(Y_DEFP(F.v5790) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5790)))).f_rep)))).f_kind) == F.p2534)) || yr2532_Holds(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5790)))).f_rep), F.p2534))) {
{ rt_int rv5793 = 1;
y_use = F.yu; return rv5793; }
}
F.v5790 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5790)))).f_next);
}
}
{ rt_int rv5795 = 0;
y_use = F.yu; return rv5795; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2539_HoldsSignal(void * a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2540 = a_p2540;
{ rt_int rv5798 = yr2532_Holds(F.p2540, v837);
y_use = F.yu; return rv5798; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2545_NonAssignable(void * a_p2546) {
struct yf2547 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2546 = a_p2546;
F.v5802 = Y_UNDEF_I;
F.v5802 = Y_DEFI(((*(yR110 *)y_deref(F.p2546))).f_kind);
if (((((Y_DEFI(F.v5802) == v837)) || ((Y_DEFI(F.v5802) == v831))) || ((Y_DEFI(F.v5802) == v840)))) {
{ rt_int rv5804 = 1;
y_use = F.yu; return rv5804; }
}
{ rt_int rv5805 = ((yr2532_Holds(F.p2546, v837) || yr2532_Holds(F.p2546, v831)) || yr2532_Holds(F.p2546, v840));
y_use = F.yu; return rv5805; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2551_CType(void * a_p2552) {
struct yf2553 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2552 = a_p2552;
F.v5809 = Y_UNDEF_I;
F.v5809 = Y_DEFI(((*(yR110 *)y_deref(F.p2552))).f_kind);
if (((((Y_DEFI(F.v5809) == v804)) || ((Y_DEFI(F.v5809) == v813))) || ((Y_DEFI(F.v5809) == v816)))) {
{ rt_int rv5811 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5811; }
}
if ((Y_DEFI(F.v5809) == v819)) {
{ rt_int rv5813 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5813; }
}
if ((Y_DEFI(F.v5809) == v810)) {
{ rt_int rv5815 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5815; }
}
if ((Y_DEFI(F.v5809) == v807)) {
{ rt_int rv5817 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5817; }
}
if (((((Y_DEFI(F.v5809) == v822)) || ((Y_DEFI(F.v5809) == v843))) || ((Y_DEFI(F.v5809) == v846)))) {
{ rt_int rv5819 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5819; }
}
if ((Y_DEFI(F.v5809) == v825)) {
{ rt_int rv5820 = Y_DEFI(((*(yR110 *)y_deref(F.p2552))).f_cname);
y_use = F.yu; return rv5820; }
}
if ((((Y_DEFI(F.v5809) == v828)) || ((Y_DEFI(F.v5809) == v849)))) {
{ rt_int rv5822 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5822; }
}
if ((Y_DEFI(F.v5809) == v831)) {
{ rt_int rv5824 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5824; }
}
if ((Y_DEFI(F.v5809) == v834)) {
{ rt_int rv5826 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5826; }
}
if ((Y_DEFI(F.v5809) == v837)) {
{ rt_int rv5828 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5828; }
}
if ((Y_DEFI(F.v5809) == v840)) {
{ rt_int rv5830 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5830; }
}
if ((Y_DEFI(F.v5809) == v855)) {
{ rt_int rv5832 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5832; }
}
{ rt_int rv5834 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5834; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2557_DescOf(void * a_p2558) {
struct yf2559 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2558 = a_p2558;
F.v5838 = Y_UNDEF_I;
F.v5838 = Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_kind);
if (((((Y_DEFI(F.v5838) == v804)) || ((Y_DEFI(F.v5838) == v813))) || ((Y_DEFI(F.v5838) == v816)))) {
{ rt_int rv5840 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5840; }
}
if ((((Y_DEFI(F.v5838) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_nlits) >= INT64_C(256))))) {
{ rt_int rv5843 = yr1061_T(y_str("&y_d_byte256", 12));
y_use = F.yu; return rv5843; }
}
if ((Y_DEFI(F.v5838) == v819)) {
{ rt_int rv5845 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5845; }
}
if ((Y_DEFI(F.v5838) == v810)) {
{ rt_int rv5847 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5847; }
}
if ((Y_DEFI(F.v5838) == v807)) {
{ rt_int rv5849 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5849; }
}
if ((((Y_DEFI(F.v5838) == v828)) || ((Y_DEFI(F.v5838) == v849)))) {
{ rt_int rv5851 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5851; }
}
if ((Y_DEFI(F.v5838) == v834)) {
{ rt_int rv5853 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5853; }
}
if ((((Y_DEFI(F.v5838) == v822)) || ((Y_DEFI(F.v5838) == v825)))) {
yr1026_SB();
yr1037_SA(y_str("&", 1));
yr1044_ST(yr2457_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2558))).f_dname)));
{ rt_int rv5855 = yr1056_SE();
y_use = F.yu; return rv5855; }
}
if ((Y_DEFI(F.v5838) == v846)) {
{ rt_int rv5857 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5857; }
}
if ((Y_DEFI(F.v5838) == v837)) {
{ rt_int rv5859 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5859; }
}
if ((Y_DEFI(F.v5838) == v840)) {
{ rt_int rv5861 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5861; }
}
{ rt_int rv5863 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5863; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2563_NewDesc(void * a_p2564) {
struct yf2565 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2564 = a_p2564;
((*(yR110 *)y_deref(F.p2564))).f_dname = yr1200_Fresh(y_str("yd_", 3));
((*(yR110 *)y_deref(F.p2564))).f_dlevel = Y_DEFI(v1279);
yr2470_DeclStorage(yr1061_T(y_str("ydesc", 5)), Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_dname));
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
{ rt_int rv5872 = 1;
y_use = F.yu; return rv5872; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v846)) && yr2520_IsString(F.p2571))) {
{ rt_int rv5874 = 1;
y_use = F.yu; return rv5874; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v846)) && yr2520_IsString(F.p2570))) {
{ rt_int rv5876 = 1;
y_use = F.yu; return rv5876; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v828)))) {
{ rt_int rv5878 = 1;
y_use = F.yu; return rv5878; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v828)))) {
{ rt_int rv5880 = 1;
y_use = F.yu; return rv5880; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_kind) == v858)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2571))).f_kind) == v858)))) {
{ rt_int rv5882 = 1;
y_use = F.yu; return rv5882; }
}
{ rt_int rv5884 = 0;
y_use = F.yu; return rv5884; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2576_TypeClash(rt_int a_p2577, void * a_p2578, void * a_p2579) {
struct yf2580 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2577 = a_p2577;
F.p2578 = a_p2578;
F.p2579 = a_p2579;
F.v5890 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("type conflict: ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2578))).f_tname));
yr1037_SA(y_str(" expected, ", 11));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2579))).f_tname));
yr1037_SA(y_str(" found", 6));
F.v5890 = yr1056_SE();
yr1157_Fail(F.p2577, Y_DEFI(F.v5890));
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
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2599_SigText(void * a_p2600) {
struct yf2601 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2600 = a_p2600;
F.v5905 = Y_UNDEF_I;
F.v5905 = Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_kind);
F.v5907 = Y_UNDEF_P;
F.v5909 = Y_UNDEF_P;
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_tid));
if (((yr2502_IsDiscrete(F.p2600) || ((Y_DEFI(F.v5905) == v810))) || ((Y_DEFI(F.v5905) == v807)))) {
yr1037_SA(y_str("[", 1));
if (Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_hasm)) {
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_mlo));
yr1037_SA(y_str("..", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_mhi));
} else {
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_lo));
yr1037_SA(y_str("..", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_hi));
}
yr1037_SA(y_str("]", 1));
if ((Y_DEFI(F.v5905) == v810)) {
yr1037_SA(y_str("P", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_prec));
}
if ((Y_DEFI(F.v5905) == v807)) {
yr1037_SA(y_str("S", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_fsn));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_fsd));
}
} else if ((Y_DEFI(F.v5905) == v822)) {
yr1037_SA(y_str("(", 1));
F.v5907 = Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_idx);
while ((!(Y_DEFP(F.v5907) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2605_RepSig(Y_DEFP(F.v5907)));
yr1037_SA(y_str(",", 1));
F.v5907 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5907)))).f_link);
}
yr1037_SA(y_str("OF ", 3));
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5905) == v843)) {
yr1037_SA(y_str("(", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_nidx));
yr1037_SA(y_str("D ", 2));
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5905) == v825)) {
yr1037_SA(y_str("{", 1));
F.v5909 = Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_fields);
while ((!(Y_DEFP(F.v5909) == ((void *)0)))) {
Y_TICK();
if (Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5909)))).f_isconst)) {
yr1037_SA(y_str("C ", 2));
} else {
yr1037_SA(y_str("V ", 2));
}
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5909)))).f_name));
yr1037_SA(y_str(":", 1));
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5909)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v5909 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5909)))).f_next);
}
yr1037_SA(y_str("}", 1));
} else if ((((Y_DEFI(F.v5905) == v834)) || ((Y_DEFI(F.v5905) == v831)))) {
yr1037_SA(y_str("(", 1));
yr1044_ST(yr2605_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2600))).f_elem)));
yr1037_SA(y_str(")", 1));
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_packed)) {
yr1037_SA(y_str(" PACKED ", 8));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_pbits));
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_align) == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2600))).f_align));
}
{ rt_int rv5935 = yr1056_SE();
y_use = F.yu; return rv5935; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2605_RepSig(void * a_p2606) {
struct yf2607 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2606 = a_p2606;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2606))).f_sig) == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2606))).f_sig = yr1075_Name(yr2599_SigText(F.p2606));
}
{ rt_int rv5939 = Y_DEFI(((*(yR110 *)y_deref(F.p2606))).f_sig);
y_use = F.yu; return rv5939; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2611_Identical(void * a_p2612, void * a_p2613) {
struct yf2614 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2612 = a_p2612;
F.p2613 = a_p2613;
if ((F.p2612 == F.p2613)) {
{ rt_int rv5944 = 1;
y_use = F.yu; return rv5944; }
}
if ((!yr2569_SameType(F.p2612, F.p2613))) {
{ rt_int rv5946 = 0;
y_use = F.yu; return rv5946; }
}
{ rt_int rv5947 = (yr2605_RepSig(F.p2612) == yr2605_RepSig(F.p2613));
y_use = F.yu; return rv5947; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2618_IsLiteralNode(void * a_p2619) {
struct yf2620 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2619 = a_p2619;
if ((((((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v759)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v765))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v762))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v768)))) {
{ rt_int rv5950 = (Y_DEFP(((*(yR105 *)y_deref(F.p2619))).f_d) == ((void *)0));
y_use = F.yu; return rv5950; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2619))).f_kind) == v801)))) {
{ rt_int rv5951 = yr2618_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2619))).f_a));
y_use = F.yu; return rv5951; }
}
{ rt_int rv5953 = 0;
y_use = F.yu; return rv5953; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2624_StoreBounds(void * a_p2625, yarr a_p2627) {
struct yf2628 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2625 = a_p2625;
F.p2627 = a_p2627;
F.v5958 = Y_UNDEF_I;
F.v5960 = Y_UNDEF_I;
F.v5958 = yr1200_Fresh(y_str("lo", 2));
F.v5960 = yr1200_Fresh(y_str("hi", 2));
yr2470_DeclStorage(yr1061_T(F.p2627), Y_DEFI(F.v5958));
yr2470_DeclStorage(yr1061_T(F.p2627), Y_DEFI(F.v5960));
yr1132_Emit(yr3491_Join(yr2457_Path(Y_DEFI(v1279), Y_DEFI(F.v5958)), yr1061_T(y_str(" = ", 3)), yr3491_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2625))).f_lo), yr1061_T(y_str(";", 1)), INT64_C(0))));
yr1132_Emit(yr3491_Join(yr2457_Path(Y_DEFI(v1279), Y_DEFI(F.v5960)), yr1061_T(y_str(" = ", 3)), yr3491_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2625))).f_hi), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR110 *)y_deref(F.p2625))).f_lo = Y_DEFI(F.v5958);
((*(yR110 *)y_deref(F.p2625))).f_hi = Y_DEFI(F.v5960);
((*(yR110 *)y_deref(F.p2625))).f_dname = Y_DEFI(F.v5958);
((*(yR110 *)y_deref(F.p2625))).f_dlevel = Y_DEFI(v1279);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2632_LoText(void * a_p2633) {
struct yf2634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2633 = a_p2633;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_lo) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_kind) == v825))))) {
{ rt_int rv5973 = yr2457_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_lo));
y_use = F.yu; return rv5973; }
}
{ rt_int rv5974 = Y_DEFI(((*(yR110 *)y_deref(F.p2633))).f_lo);
y_use = F.yu; return rv5974; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2638_HiText(void * a_p2639) {
struct yf2640 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2639 = a_p2639;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_hi) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_kind) == v825))))) {
{ rt_int rv5979 = yr2457_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_hi));
y_use = F.yu; return rv5979; }
}
{ rt_int rv5980 = Y_DEFI(((*(yR110 *)y_deref(F.p2639))).f_hi);
y_use = F.yu; return rv5980; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2644_AdoptLiteral(void * a_p2645, void * a_p2646, void * a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2645 = a_p2645;
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.v5986 = Y_UNDEF_P;
if ((((!yr2618_IsLiteralNode(F.p2645)) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_kind))))) || (!yr2508_IsNumeric(F.p2647)))) {
{ void * rv5987 = F.p2646;
y_use = F.yu; return rv5987; }
}
if (yr2652_HasQualifier(F.p2645)) {
{ void * rv5988 = F.p2646;
y_use = F.yu; return rv5988; }
}
F.v5986 = yr2496_CopyRep(F.p2646);
((*(yR110 *)y_deref(Y_DEFP(F.v5986)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.v5986)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_tname);
{ void * rv5989 = Y_DEFP(F.v5986);
y_use = F.yu; return rv5989; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2652_HasQualifier(void * a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2653 = a_p2653;
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2653))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2653))).f_kind) == v801)))) {
{ rt_int rv5992 = yr2652_HasQualifier(Y_DEFP(((*(yR105 *)y_deref(F.p2653))).f_a));
y_use = F.yu; return rv5992; }
}
{ rt_int rv5993 = (!(Y_DEFP(((*(yR105 *)y_deref(F.p2653))).f_d) == ((void *)0)));
y_use = F.yu; return rv5993; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2658_Gcd(rt_int a_p2659, rt_int a_p2660) {
struct yf2661 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2659 = a_p2659;
F.p2660 = a_p2660;
F.v5998 = Y_UNDEF_I;
F.v6000 = Y_UNDEF_I;
F.v6002 = Y_UNDEF_I;
F.v5998 = F.p2659;
F.v6000 = F.p2660;
if ((Y_DEFI(F.v5998) < INT64_C(0))) {
F.v5998 = y_range(y_neg(Y_DEFI(F.v5998)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v6000) < INT64_C(0))) {
F.v6000 = y_range(y_neg(Y_DEFI(F.v6000)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(Y_DEFI(F.v6000) == INT64_C(0)))) {
Y_TICK();
F.v6002 = y_range(y_mod(Y_DEFI(F.v5998), Y_DEFI(F.v6000)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5998 = Y_DEFI(F.v6000);
F.v6000 = Y_DEFI(F.v6002);
}
if ((Y_DEFI(F.v5998) == INT64_C(0))) {
{ rt_int rv6011 = INT64_C(1);
y_use = F.yu; return rv6011; }
}
{ rt_int rv6012 = Y_DEFI(F.v5998);
y_use = F.yu; return rv6012; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2665_MulChk(rt_int a_p2666, rt_int a_p2667, rt_int a_p2668) {
struct yf2669 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2666 = a_p2666;
F.p2667 = a_p2667;
F.p2668 = a_p2668;
F.v6018 = Y_UNDEF_I;
F.v6020 = Y_UNDEF_I;
F.v6018 = F.p2666;
F.v6020 = F.p2667;
if ((Y_DEFI(F.v6018) < INT64_C(0))) {
F.v6018 = y_range(y_neg(Y_DEFI(F.v6018)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v6020) < INT64_C(0))) {
F.v6020 = y_range(y_neg(Y_DEFI(F.v6020)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(Y_DEFI(F.v6018) == INT64_C(0)))) && ((Y_DEFI(F.v6020) > (y_div(v906, Y_DEFI(F.v6018))))))) {
yr1178_FailS(F.p2668, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv6029 = y_range(y_mul(F.p2666, F.p2667), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6029; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2673_PowChk(rt_int a_p2674, rt_int a_p2675, rt_int a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2674 = a_p2674;
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.v6035 = Y_UNDEF_I;
F.v6035 = INT64_C(1);
F.lo6040 = INT64_C(1);
F.hi6041 = F.p2675;
{ rt_int hi6045 = F.hi6041;
for (rt_int i6044 = F.lo6040; i6044 <= hi6045; i6044++) { F.c_6043 = i6044; Y_TICK();
F.v6035 = yr2665_MulChk(Y_DEFI(F.v6035), F.p2674, F.p2676);
if (i6044 == hi6045) break;
}}
{ rt_int rv6046 = Y_DEFI(F.v6035);
y_use = F.yu; return rv6046; }
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
F.v6054 = Y_UNDEF_I;
F.v6056 = Y_UNDEF_I;
F.v6058 = Y_UNDEF_I;
F.v6060 = Y_UNDEF_I;
F.v6062 = Y_UNDEF_I;
F.v6064 = Y_UNDEF_I;
F.p2684 = yr1061_T(y_str("1", 1));
F.p2685 = yr1061_T(y_str("1", 1));
F.p2686 = 1;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsd) == INT64_C(0))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsd) == INT64_C(0))))) {
(*F.p2684_o) = F.p2684;
(*F.p2685_o) = F.p2685;
(*F.p2686_o) = F.p2686;
y_use = F.yu; return;
}
F.v6054 = yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsn));
F.v6056 = yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsd));
F.v6058 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsn), Y_DEFI(F.v6054)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6060 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsd), Y_DEFI(F.v6056)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6062 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2682))).f_fsd), Y_DEFI(F.v6056)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6064 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2683))).f_fsn), Y_DEFI(F.v6054)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2686 = (((((Y_DEFI(F.v6058) == INT64_C(1))) && ((Y_DEFI(F.v6060) == INT64_C(1)))) && ((Y_DEFI(F.v6062) == INT64_C(1)))) && ((Y_DEFI(F.v6064) == INT64_C(1))));
F.p2684 = yr2691_Factor(Y_DEFI(F.v6058), Y_DEFI(F.v6060));
F.p2685 = yr2691_Factor(Y_DEFI(F.v6062), Y_DEFI(F.v6064));
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
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(F.p2692);
yr1037_SA(y_str(")", 1));
if ((!(F.p2693 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
yr1050_SI(F.p2693);
yr1037_SA(y_str(")", 1));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv6087 = yr1056_SE();
y_use = F.yu; return rv6087; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2698_SetScale(void * a_p2699, rt_int a_p2700, rt_int a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2699 = a_p2699;
F.p2700 = a_p2700;
F.p2701 = a_p2701;
F.v6093 = Y_UNDEF_I;
F.v6093 = yr2658_Gcd(F.p2700, F.p2701);
((*(yR110 *)y_deref(F.p2699))).f_fsn = y_range(y_div(F.p2700, Y_DEFI(F.v6093)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2699))).f_fsd = y_range(y_div(F.p2701, Y_DEFI(F.v6093)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2699))).f_fsd) < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2699))).f_fsn = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2699))).f_fsn)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2699))).f_fsd = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2699))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v6103 = Y_UNDEF_I;
F.v6105 = Y_UNDEF_I;
F.v6107 = Y_UNDEF_I;
F.v6109 = Y_UNDEF_I;
F.v6111 = Y_UNDEF_P;
F.v6113 = Y_UNDEF_P;
F.v6115 = Y_UNDEF_I;
F.v6117 = Y_UNDEF_I;
F.v6119 = Y_UNDEF_I;
F.v6121 = Y_UNDEF_I;
F.v6123 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind) == v807)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_c) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2986_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_c), &F.v6115, &F.v6121, &F.v6123);
if (((!Y_DEFI(F.v6115)) || ((Y_DEFI(F.v6121) <= INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR110 *)y_deref(F.p2707))).f_fsn = Y_DEFI(F.v6121);
((*(yR110 *)y_deref(F.p2707))).f_fsd = Y_DEFI(F.v6123);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6121));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(F.v6123));
((*(yR110 *)y_deref(F.p2707))).f_scale = yr1056_SE();
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a), F.p2707, &F.v6103, &F.v6111);
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b), F.p2707, &F.v6105, &F.v6113);
F.v6111 = yr2644_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a), Y_DEFP(F.v6111), F.p2707);
F.v6113 = yr2644_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b), Y_DEFP(F.v6113), F.p2707);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind) == v807)) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6111));
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6113));
yr2681_ScaleRatio(Y_DEFP(F.v6111), F.p2707, &F.v6107, &F.v6109, &F.v6117);
((*(yR110 *)y_deref(F.p2707))).f_lo = yr3491_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6103), yr3491_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6107), yr3491_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6109), yr1061_T(y_str(", 1)", 4)))));
yr2681_ScaleRatio(Y_DEFP(F.v6113), F.p2707, &F.v6107, &F.v6109, &F.v6117);
((*(yR110 *)y_deref(F.p2707))).f_hi = yr3491_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6105), yr3491_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6107), yr3491_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6109), yr1061_T(y_str(", 0)", 4)))));
((*(yR110 *)y_deref(F.p2707))).f_dname = INT64_C(0);
yr2624_StoreBounds(F.p2707, y_str("yfix", 4));
((*(yR110 *)y_deref(F.p2707))).f_abstract = 0;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind) == v810)) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6111));
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6113));
((*(yR110 *)y_deref(F.p2707))).f_lo = Y_DEFI(F.v6103);
((*(yR110 *)y_deref(F.p2707))).f_hi = Y_DEFI(F.v6105);
((*(yR110 *)y_deref(F.p2707))).f_dname = INT64_C(0);
if ((!((yr2618_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a)) && yr2618_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b)))))) {
yr2624_StoreBounds(F.p2707, y_str("double", 6));
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_d), &F.v6115, &F.v6119);
if ((!Y_DEFI(F.v6115))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("PRECISION is a manifest constant", 32));
}
if ((((Y_DEFI(F.v6119) < INT64_C(1))) || ((Y_DEFI(F.v6119) > INT64_C(15))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6119));
((*(yR110 *)y_deref(F.p2707))).f_prec = yr1056_SE();
((*(yR110 *)y_deref(F.p2707))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2502_IsDiscrete(F.p2707))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_d) == ((void *)0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6111));
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2708))).f_line), F.p2707, Y_DEFP(F.v6113));
((*(yR110 *)y_deref(F.p2707))).f_lo = Y_DEFI(F.v6103);
((*(yR110 *)y_deref(F.p2707))).f_hi = Y_DEFI(F.v6105);
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_a), &F.v6115, &((*(yR110 *)y_deref(F.p2707))).f_mlo);
((*(yR110 *)y_deref(F.p2707))).f_hasm = Y_DEFI(F.v6115);
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2708))).f_b), &F.v6115, &((*(yR110 *)y_deref(F.p2707))).f_mhi);
((*(yR110 *)y_deref(F.p2707))).f_hasm = (Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_hasm) && Y_DEFI(F.v6115));
((*(yR110 *)y_deref(F.p2707))).f_abstract = 0;
((*(yR110 *)y_deref(F.p2707))).f_dname = INT64_C(0);
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_hasm))) {
yr2624_StoreBounds(F.p2707, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2713_DefineLits(void * a_p2714) {
struct yf2715 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2714 = a_p2714;
F.v6155 = Y_UNDEF_P;
F.v6155 = Y_DEFP(((*(yR110 *)y_deref(F.p2714))).f_lits);
F.v6157 = Y_UNDEF_P;
F.v6159 = Y_UNDEF_I;
F.v6159 = INT64_C(0);
while ((!(Y_DEFP(F.v6155) == ((void *)0)))) {
Y_TICK();
if ((!(yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_name)) == ((void *)0)))) {
F.v6157 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_name));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6157)))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6157)))).f_depth) == Y_DEFI(v1273))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_name), y_str(" is declared twice in this scope", 32));
}
}
F.v6157 = yr2348_NewSym(v873, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v6157)))).f_rep = F.p2714;
((*(yR125 *)y_deref(Y_DEFP(F.v6157)))).f_mval = Y_DEFI(F.v6159);
((*(yR125 *)y_deref(Y_DEFP(F.v6157)))).f_hasmv = 1;
yr2450_Define(Y_DEFP(F.v6157), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_line));
F.v6159 = y_range(y_add(Y_DEFI(F.v6159), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6155 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6155)))).f_next);
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
yr1050_SI(F.p2721);
((*(yR110 *)y_deref(F.p2720))).f_lo = yr1056_SE();
yr1026_SB();
yr1050_SI(F.p2722);
((*(yR110 *)y_deref(F.p2720))).f_hi = yr1056_SE();
((*(yR110 *)y_deref(F.p2720))).f_mlo = F.p2721;
((*(yR110 *)y_deref(F.p2720))).f_mhi = F.p2722;
((*(yR110 *)y_deref(F.p2720))).f_hasm = 1;
((*(yR110 *)y_deref(F.p2720))).f_dname = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2727_NewTid(rt_int a_p2728) {
struct yf2729 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2728 = a_p2728;
F.v6174 = Y_UNDEF_I;
F.v6174 = yr1195_NewSerial();
yr1026_SB();
if ((!(F.p2728 == INT64_C(0)))) {
yr1044_ST(F.p2728);
} else {
yr1037_SA(y_str("anonymous", 9));
}
yr1037_SA(y_str("#", 1));
yr1050_SI(Y_DEFI(F.v6174));
{ rt_int rv6178 = yr1056_SE();
y_use = F.yu; return rv6178; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2733_MakeRep(void * a_p2734, rt_int a_p2735, rt_int a_p2736) {
struct yf2737 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2734 = a_p2734;
F.p2735 = a_p2735;
F.p2736 = a_p2736;
F.v6184 = Y_UNDEF_P;
F.v6184 = yr2748_MakeRep1(F.p2734, F.p2735, F.p2736);
F.v6186 = Y_UNDEF_P;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2734))).f_x) == ((void *)0)))) {
F.v6184 = yr2848_ApplyStorage(Y_DEFP(F.v6184), Y_DEFP(((*(yR105 *)y_deref(F.p2734))).f_x));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_text) == INT64_C(0)))) {
F.v6186 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_line)));
if (((!yr2741_Conforms(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6186)))).f_rep), Y_DEFP(F.v6184))) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_kind) == v672)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6184)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6186)))).f_rep)))).f_tid)))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2734))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6186)))).f_rep)))).f_tname), y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv6189 = Y_DEFP(F.v6184);
y_use = F.yu; return rv6189; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2741_Conforms(void * a_p2742, void * a_p2743) {
struct yf2744 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2742 = a_p2742;
F.p2743 = a_p2743;
F.v6194 = Y_UNDEF_P;
F.v6196 = Y_UNDEF_P;
F.v6198 = Y_UNDEF_P;
F.v6200 = Y_UNDEF_P;
F.v6202 = Y_UNDEF_P;
F.v6204 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2743))).f_kind)))) {
{ rt_int rv6206 = 0;
y_use = F.yu; return rv6206; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v825)) {
F.v6194 = Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_fields);
F.v6196 = Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_fields);
while ((((!(Y_DEFP(F.v6194) == ((void *)0)))) && ((!(Y_DEFP(F.v6196) == ((void *)0)))))) {
Y_TICK();
if (((((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6194)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6196)))).f_name)))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6194)))).f_isconst) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6196)))).f_isconst))))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6194)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6196)))).f_variant)))))) {
{ rt_int rv6208 = 0;
y_use = F.yu; return rv6208; }
}
if ((!yr2569_SameType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6194)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6196)))).f_rep)))) {
{ rt_int rv6210 = 0;
y_use = F.yu; return rv6210; }
}
F.v6194 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6194)))).f_next);
F.v6196 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6196)))).f_next);
}
{ rt_int rv6211 = (((Y_DEFP(F.v6194) == ((void *)0))) && ((Y_DEFP(F.v6196) == ((void *)0))));
y_use = F.yu; return rv6211; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v822)) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p2743))).f_nidx)))) {
{ rt_int rv6213 = 0;
y_use = F.yu; return rv6213; }
}
F.v6198 = Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_idx);
F.v6200 = Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_idx);
while ((!(Y_DEFP(F.v6198) == ((void *)0)))) {
Y_TICK();
if ((!yr2611_Identical(Y_DEFP(F.v6198), Y_DEFP(F.v6200)))) {
{ rt_int rv6215 = 0;
y_use = F.yu; return rv6215; }
}
F.v6198 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6198)))).f_link);
F.v6200 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6200)))).f_link);
}
{ rt_int rv6216 = yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_elem));
y_use = F.yu; return rv6216; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v816)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v819)))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_nlits) == Y_DEFI(((*(yR110 *)y_deref(F.p2743))).f_nlits)))) {
{ rt_int rv6218 = 0;
y_use = F.yu; return rv6218; }
}
F.v6202 = Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_lits);
F.v6204 = Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_lits);
while ((((!(Y_DEFP(F.v6202) == ((void *)0)))) && ((!(Y_DEFP(F.v6204) == ((void *)0)))))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6202)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6204)))).f_name)))) || (!yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6202)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6204)))).f_text))))) {
{ rt_int rv6220 = 0;
y_use = F.yu; return rv6220; }
}
F.v6202 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6202)))).f_next);
F.v6204 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6204)))).f_next);
}
{ rt_int rv6222 = 1;
y_use = F.yu; return rv6222; }
}
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v834)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v831))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_kind) == v828)))) {
if ((((Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_elem) == ((void *)0))) || ((Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_elem) == ((void *)0))))) {
{ rt_int rv6224 = 1;
y_use = F.yu; return rv6224; }
}
{ rt_int rv6225 = yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2742))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2743))).f_elem));
y_use = F.yu; return rv6225; }
}
{ rt_int rv6227 = 1;
y_use = F.yu; return rv6227; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2748_MakeRep1(void * a_p2749, rt_int a_p2750, rt_int a_p2751) {
struct yf2752 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2749 = a_p2749;
F.p2750 = a_p2750;
F.p2751 = a_p2751;
F.v6233 = Y_UNDEF_P;
F.v6235 = Y_UNDEF_P;
F.v6237 = Y_UNDEF_P;
F.v6239 = Y_UNDEF_P;
F.v6241 = Y_UNDEF_P;
F.v6243 = Y_UNDEF_I;
F.v6243 = Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_kind);
F.v6245 = Y_UNDEF_P;
F.v6247 = Y_UNDEF_I;
F.v6249 = Y_UNDEF_I;
F.v6247 = INT64_C(0);
F.v6249 = F.p2750;
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_text) == INT64_C(0)))) {
F.v6241 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_text), y_str(" is not a type", 14));
}
F.v6247 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_rep)))).f_tid);
F.v6249 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_rep)))).f_tname);
}
if ((Y_DEFI(F.v6243) == v672)) {
F.v6241 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_name), y_str(" is not a representation", 24));
}
F.v6233 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6241)))).f_rep);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a) == ((void *)0)))) {
F.v6233 = yr2496_CopyRep(Y_DEFP(F.v6233));
yr2706_Qualify(Y_DEFP(F.v6233), Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a));
}
{ void * rv6254 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6254; }
}
if ((Y_DEFI(F.v6247) == INT64_C(0))) {
F.v6247 = yr2727_NewTid(F.p2750);
if ((Y_DEFI(F.v6249) == INT64_C(0))) {
F.v6249 = Y_DEFI(F.v6247);
}
}
if ((Y_DEFI(F.v6243) == v675)) {
F.v6233 = yr2489_NewRep(v816, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_ordered = (Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_flag) == INT64_C(1));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nlits = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a));
yr2719_SetRange(Y_DEFP(F.v6233), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2713_DefineLits(Y_DEFP(F.v6233));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b) == ((void *)0)))) {
yr2706_Qualify(Y_DEFP(F.v6233), Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b));
}
{ void * rv6261 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6261; }
}
if ((Y_DEFI(F.v6243) == v678)) {
F.v6233 = yr2489_NewRep(v819, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nlits = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nlits) > INT64_C(256))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2719_SetRange(Y_DEFP(F.v6233), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b) == ((void *)0)))) {
yr2706_Qualify(Y_DEFP(F.v6233), Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b));
}
{ void * rv6268 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6268; }
}
if ((Y_DEFI(F.v6243) == v681)) {
F.v6233 = yr2489_NewRep(v822, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
F.v6245 = Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a);
F.v6239 = ((void *)0);
while ((!(Y_DEFP(F.v6245) == ((void *)0)))) {
Y_TICK();
F.v6237 = yr2496_CopyRep(yr2733_MakeRep(Y_DEFP(F.v6245), INT64_C(0), 0));
if ((!yr2502_IsDiscrete(Y_DEFP(F.v6237)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6245)))).f_line), y_str("an index is an integer or scalar representation", 47));
}
yr2592_CheckRepresented(Y_DEFP(F.v6237), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6245)))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v6237)))).f_link = ((void *)0);
if ((Y_DEFP(F.v6239) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_idx = Y_DEFP(F.v6237);
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6239)))).f_link = Y_DEFP(F.v6237);
}
F.v6239 = Y_DEFP(F.v6237);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nidx = y_range(y_add(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nidx), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6245 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6245)))).f_next);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_nidx) > INT64_C(8))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("this implementation takes arrays of up to 8 dimensions", 54));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_b), INT64_C(0), F.p2751);
if ((!F.p2751)) {
yr2592_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line));
yr2768_BuildArrayDesc(Y_DEFP(F.v6233));
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_abstract = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem)))).f_abstract);
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_abstract))) {
yr2768_BuildArrayDesc(Y_DEFP(F.v6233));
}
}
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_deep = 1;
{ void * rv6278 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6278; }
}
if ((Y_DEFI(F.v6243) == v684)) {
F.v6233 = yr2489_NewRep(v825, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
yr2798_MakeRecord(Y_DEFP(F.v6233), F.p2749, F.p2751);
{ void * rv6279 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6279; }
}
if (((((Y_DEFI(F.v6243) == v690)) || ((Y_DEFI(F.v6243) == v687))) || ((Y_DEFI(F.v6243) == v693)))) {
if ((Y_DEFI(F.v6243) == v690)) {
F.v6233 = yr2489_NewRep(v828, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_kind) == v672)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_a) == ((void *)0)))) && ((yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_name)) == ((void *)0))))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_forward = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a)))).f_name);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_fwdscope = Y_DEFI(v1273);
F.v6245 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v6245)))).f_rep = Y_DEFP(F.v6233);
((*(yR105 *)y_deref(Y_DEFP(F.v6245)))).f_next = Y_DEFP(v1364);
v1364 = Y_DEFP(F.v6245);
{ void * rv6280 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6280; }
}
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a), INT64_C(0), 0);
{ void * rv6283 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6283; }
}
if ((Y_DEFI(F.v6243) == v687)) {
F.v6233 = yr2489_NewRep(v831, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a), INT64_C(0), F.p2751);
{ void * rv6285 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6285; }
}
F.v6233 = yr2489_NewRep(v834, Y_DEFI(F.v6247));
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_tname = Y_DEFI(F.v6249);
((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2749))).f_a), INT64_C(0), 0);
if ((!yr2502_IsDiscrete(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("a set is of an integer or scalar representation", 47));
}
yr2592_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6233)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line));
{ void * rv6289 = Y_DEFP(F.v6233);
y_use = F.yu; return rv6289; }
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2749))).f_line), y_str("this representation is not translated", 37));
{ void * rv6291 = ((void *)0);
y_use = F.yu; return rv6291; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2756_ResolvePending(rt_int a_p2757, void * a_p2758) {
struct yf2759 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2757 = a_p2757;
F.p2758 = a_p2758;
F.v6296 = Y_UNDEF_P;
F.v6296 = Y_DEFP(v1364);
F.v6298 = Y_UNDEF_P;
F.v6298 = ((void *)0);
while ((!(Y_DEFP(F.v6296) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6296)))).f_rep)))).f_forward) == F.p2757)) {
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6296)))).f_rep)))).f_elem = F.p2758;
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6296)))).f_rep)))).f_forward = INT64_C(0);
if ((Y_DEFP(F.v6298) == ((void *)0))) {
v1364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6296)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v6298)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6296)))).f_next);
}
} else {
F.v6298 = Y_DEFP(F.v6296);
}
F.v6296 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6296)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2763_CheckPending(void) {
struct yf2764 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v6302 = Y_UNDEF_P;
F.v6302 = Y_DEFP(v1364);
while ((!(Y_DEFP(F.v6302) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6302)))).f_rep)))).f_fwdscope) >= Y_DEFI(v1273))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6302)))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6302)))).f_rep)))).f_forward), y_str(" is named by a pointer but not declared", 39));
}
F.v6302 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6302)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2768_BuildArrayDesc(void * a_p2769) {
struct yf2770 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2769 = a_p2769;
F.v6307 = Y_UNDEF_P;
F.v6309 = Y_UNDEF_I;
F.v6311 = Y_UNDEF_I;
yr2563_NewDesc(F.p2769);
yr1026_SB();
yr1037_SA(y_str("{ rt_int lo[", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2769))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v6307 = Y_DEFP(((*(yR110 *)y_deref(F.p2769))).f_idx);
F.v6311 = 1;
while ((!(Y_DEFP(F.v6307) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6311))) {
yr1037_SA(y_str(", ", 2));
}
F.v6311 = 0;
yr1044_ST(yr2632_LoText(Y_DEFP(F.v6307)));
F.v6307 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6307)))).f_link);
}
yr1037_SA(y_str("}, hi[", 6));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2769))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v6307 = Y_DEFP(((*(yR110 *)y_deref(F.p2769))).f_idx);
F.v6311 = 1;
while ((!(Y_DEFP(F.v6307) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6311))) {
yr1037_SA(y_str(", ", 2));
}
F.v6311 = 0;
yr1044_ST(yr2638_HiText(Y_DEFP(F.v6307)));
F.v6307 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6307)))).f_link);
}
yr1037_SA(y_str("}; y_desc_array(", 16));
yr1044_ST(yr2557_DescOf(F.p2769));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2769))).f_nidx));
yr1037_SA(y_str(", lo, hi, ", 10));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2769))).f_elem)));
yr1037_SA(y_str("); }", 4));
F.v6309 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6309));
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
F.v6336 = Y_UNDEF_P;
F.v6336 = Y_DEFP(((*(yR110 *)y_deref(F.p2775))).f_fields);
while ((!(Y_DEFP(F.v6336) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6336)))).f_name) == F.p2777)) {
yr1186_FailN(F.p2782, F.p2777, y_str(" is a component twice", 21));
}
F.v6336 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6336)))).f_next);
}
({ F.v6336 = y_new(sizeof(yR115)); y_initu(&yd_116, y_deref(F.v6336)); });
(*(yR115 *)y_deref(Y_DEFP(F.v6336))) = ((yR115){ .f_name = F.p2777, .f_rep = F.p2778, .f_isconst = F.p2779, .f_variant = F.p2780, .f_labels = F.p2781, .f_next = ((void *)0), .f_at = INT64_C(-1) });
if ((Y_DEFP((*F.p2776)) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2775))).f_fields = Y_DEFP(F.v6336);
} else {
((*(yR115 *)y_deref(Y_DEFP((*F.p2776))))).f_next = Y_DEFP(F.v6336);
}
(*F.p2776) = Y_DEFP(F.v6336);
if (yr2526_Deep(F.p2778)) {
((*(yR110 *)y_deref(F.p2775))).f_deep = 1;
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2778))).f_abstract)) {
((*(yR110 *)y_deref(F.p2775))).f_abstract = 1;
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
F.v6349 = Y_UNDEF_P;
F.v6349 = F.p2790;
F.v6351 = Y_UNDEF_P;
F.v6351 = F.p2790;
F.v6353 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v6349) == ((void *)0)))) {
Y_TICK();
F.v6353 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6349)))).f_b), INT64_C(0), F.p2793);
if ((!F.p2793)) {
yr2592_CheckRepresented(Y_DEFP(F.v6353), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6349)))).f_line));
}
F.v6351 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6349)))).f_a);
while ((!(Y_DEFP(F.v6351) == ((void *)0)))) {
Y_TICK();
yr2774_AddField(F.p2788, &(*F.p2789), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6351)))).f_name), Y_DEFP(F.v6353), (Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6349)))).f_ival) == v270), F.p2791, F.p2792, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6351)))).f_line));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6351)))).f_a) == ((void *)0)))) {
((*(yR115 *)y_deref(Y_DEFP((*F.p2789))))).f_at = yr2855_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6351)))).f_a));
}
F.v6351 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6351)))).f_next);
}
F.v6349 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6349)))).f_next);
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
F.v6360 = Y_UNDEF_P;
F.v6360 = ((void *)0);
F.v6362 = Y_UNDEF_P;
F.v6364 = Y_UNDEF_P;
F.v6366 = Y_UNDEF_P;
F.v6368 = Y_UNDEF_I;
F.v6368 = INT64_C(0);
F.v6371 = Y_UNDEF_P;
F.v6373 = Y_UNDEF_I;
F.v6375 = Y_UNDEF_I;
F.v6375 = INT64_C(0);
yr2787_AddFields(F.p2799, &F.v6360, Y_DEFP(((*(yR105 *)y_deref(F.p2800))).f_a), INT64_C(0), ((void *)0), F.p2801);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2800))).f_b) == ((void *)0)))) {
F.v6362 = Y_DEFP(((*(yR105 *)y_deref(F.p2800))).f_b);
F.v6366 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6362)))).f_b), INT64_C(0), 0);
if ((!yr2502_IsDiscrete(Y_DEFP(F.v6366)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6362)))).f_line), y_str("the case-selection component is integer or scalar", 49));
}
yr2774_AddField(F.p2799, &F.v6360, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6362)))).f_name), Y_DEFP(F.v6366), 1, INT64_C(0), ((void *)0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6362)))).f_line));
((*(yR110 *)y_deref(F.p2799))).f_selector = Y_DEFP(F.v6360);
F.v6364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6362)))).f_a);
while ((!(Y_DEFP(F.v6364) == ((void *)0)))) {
Y_TICK();
F.v6368 = y_range(y_add(Y_DEFI(F.v6368), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2787_AddFields(F.p2799, &F.v6360, Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6364)))).f_b), Y_DEFI(F.v6368), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6364)))).f_a), F.p2801);
F.v6364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6364)))).f_next);
}
}
if ((F.p2801 && Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_abstract))) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2799))).f_abstract = 0;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p2800))).f_line);
F.v6368 = yr2833_RecordBits(F.p2799, 0, 1);
F.v6368 = INT64_C(0);
((*(yR110 *)y_deref(F.p2799))).f_cname = yr1200_Fresh(y_str("yR", 2));
yr1026_SB();
yr1037_SA(y_str("typedef struct ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
yr1037_SA(y_str(";", 1));
F.v6373 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v6373));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
yr1037_SA(y_str(" {", 2));
F.v6371 = Y_DEFP(((*(yR110 *)y_deref(F.p2799))).f_fields);
while ((!(Y_DEFP(F.v6371) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_rep)));
yr1037_SA(y_str(" f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_name));
yr1037_SA(y_str(";", 1));
F.v6375 = y_range(y_add(Y_DEFI(F.v6375), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6371 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_next);
}
if ((Y_DEFI(F.v6375) == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
}
yr1037_SA(y_str(" };", 3));
F.v6373 = yr1056_SE();
yr1110_Put(&v980, Y_DEFI(F.v6373));
yr2563_NewDesc(F.p2799);
yr1026_SB();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
F.v6371 = Y_DEFP(((*(yR110 *)y_deref(F.p2799))).f_fields);
while ((!(Y_DEFP(F.v6371) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
yr1037_SA(y_str(", f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_name));
yr1037_SA(y_str("), ", 3));
F.v6371 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_next);
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1050_SI(y_range(y_add(Y_DEFI(F.v6375), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" * sizeof *f);", 14));
F.v6368 = INT64_C(0);
F.v6371 = Y_DEFP(((*(yR110 *)y_deref(F.p2799))).f_fields);
while ((!(Y_DEFP(F.v6371) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
yr1050_SI(Y_DEFI(F.v6368));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v6368 = y_range(y_add(Y_DEFI(F.v6368), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6371 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6371)))).f_next);
}
yr1037_SA(y_str(" y_desc_record(", 15));
yr1044_ST(yr2557_DescOf(F.p2799));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2799))).f_cname));
yr1037_SA(y_str("), ", 3));
yr1050_SI(Y_DEFI(F.v6375));
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v6373 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6373));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2806_FindField(void * a_p2807, rt_int a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2807 = a_p2807;
F.p2808 = a_p2808;
F.v6425 = Y_UNDEF_P;
F.v6425 = Y_DEFP(((*(yR110 *)y_deref(F.p2807))).f_fields);
while ((!(Y_DEFP(F.v6425) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6425)))).f_name) == F.p2808)) {
{ void * rv6426 = Y_DEFP(F.v6425);
y_use = F.yu; return rv6426; }
}
F.v6425 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6425)))).f_next);
}
{ void * rv6427 = ((void *)0);
y_use = F.yu; return rv6427; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2813_BitsFor(rt_int a_p2814) {
struct yf2815 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2814 = a_p2814;
F.v6431 = Y_UNDEF_I;
F.v6431 = INT64_C(1);
F.v6434 = Y_UNDEF_I;
F.v6434 = INT64_C(2);
while ((((Y_DEFI(F.v6434) <= F.p2814)) && ((Y_DEFI(F.v6431) < INT64_C(63))))) {
Y_TICK();
F.v6431 = y_range(y_add(Y_DEFI(F.v6431), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6434 = y_range(y_mul(Y_DEFI(F.v6434), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv6441 = Y_DEFI(F.v6431);
y_use = F.yu; return rv6441; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2819_RoundUp(rt_int a_p2820, rt_int a_p2821) {
struct yf2822 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2820 = a_p2820;
F.p2821 = a_p2821;
if ((F.p2821 <= INT64_C(1))) {
{ rt_int rv6446 = F.p2820;
y_use = F.yu; return rv6446; }
}
{ rt_int rv6452 = y_range(y_mul((y_div((y_sub((y_add(F.p2820, F.p2821)), INT64_C(1))), F.p2821)), F.p2821), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6452; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2826_Bits(void * a_p2827, rt_int a_p2828) {
struct yf2829 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2827 = a_p2827;
F.p2828 = a_p2828;
F.v6457 = Y_UNDEF_I;
F.v6457 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_kind);
F.v6459 = Y_UNDEF_I;
F.v6459 = (F.p2828 || Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_packed));
F.v6461 = Y_UNDEF_I;
F.v6463 = Y_UNDEF_I;
F.v6465 = Y_UNDEF_I;
F.v6467 = Y_UNDEF_I;
F.v6469 = Y_UNDEF_P;
if (((!Y_DEFI(F.v6459)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_bits) == INT64_C(0)))))) {
{ rt_int rv6471 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_bits);
y_use = F.yu; return rv6471; }
}
F.v6461 = INT64_C(64);
if (yr2502_IsDiscrete(F.p2827)) {
if (Y_DEFI(F.v6459)) {
if (((((Y_DEFI(F.v6457) == v816)) || ((Y_DEFI(F.v6457) == v819))) || ((Y_DEFI(F.v6457) == v813)))) {
F.v6461 = yr2813_BitsFor(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
} else if (Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_hasm)) {
F.v6465 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_mlo);
F.v6467 = Y_DEFI(((*(yR110 *)y_deref(F.p2827))).f_mhi);
if ((Y_DEFI(F.v6465) >= INT64_C(0))) {
F.v6461 = yr2813_BitsFor(Y_DEFI(F.v6467));
} else if (((y_sub(INT64_C(-1), Y_DEFI(F.v6465))) > Y_DEFI(F.v6467))) {
F.v6461 = y_range(y_add(INT64_C(1), yr2813_BitsFor(y_range(y_sub(INT64_C(-1), Y_DEFI(F.v6465)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6461 = y_range(y_add(INT64_C(1), yr2813_BitsFor(Y_DEFI(F.v6467))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
} else if ((Y_DEFI(F.v6457) == v807)) {
F.v6461 = INT64_C(128);
} else if ((((Y_DEFI(F.v6457) == v828)) || ((Y_DEFI(F.v6457) == v849)))) {
if (Y_DEFI(F.v6459)) {
F.v6461 = INT64_C(24);
}
} else if ((Y_DEFI(F.v6457) == v834)) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_hasm)) {
F.v6463 = y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6463) > (y_div(v906, INT64_C(2))))) {
F.v6461 = INT64_C(-1);
} else if (Y_DEFI(F.v6459)) {
F.v6461 = Y_DEFI(F.v6463);
} else {
F.v6461 = yr2819_RoundUp(Y_DEFI(F.v6463), INT64_C(64));
}
} else {
F.v6461 = INT64_C(-1);
}
} else if ((Y_DEFI(F.v6457) == v822)) {
F.v6463 = INT64_C(1);
F.v6469 = Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_idx);
while ((!(Y_DEFP(F.v6469) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6469)))).f_hasm))) {
{ rt_int rv6496 = INT64_C(-1);
y_use = F.yu; return rv6496; }
}
F.v6463 = y_range(y_mul(Y_DEFI(F.v6463), (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6469)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6469)))).f_mlo))), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6463) > INT64_C(100000000000))) {
{ rt_int rv6503 = INT64_C(-1);
y_use = F.yu; return rv6503; }
}
F.v6469 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6469)))).f_link);
}
F.v6461 = yr2826_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem), Y_DEFI(F.v6459));
if ((Y_DEFI(F.v6461) < INT64_C(0))) {
{ rt_int rv6506 = INT64_C(-1);
y_use = F.yu; return rv6506; }
}
if (((!Y_DEFI(F.v6459)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_packed)))) {
F.v6461 = yr2819_RoundUp(Y_DEFI(F.v6461), INT64_C(64));
}
F.v6461 = yr2819_RoundUp(Y_DEFI(F.v6461), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2827))).f_elem)))).f_align));
F.v6461 = y_range(y_mul(Y_DEFI(F.v6461), Y_DEFI(F.v6463)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6457) == v825)) {
F.v6461 = yr2833_RecordBits(F.p2827, Y_DEFI(F.v6459), 0);
} else if (((((Y_DEFI(F.v6457) == v843)) || ((Y_DEFI(F.v6457) == v846))) || ((Y_DEFI(F.v6457) == v855)))) {
F.v6461 = INT64_C(-1);
}
if ((((Y_DEFI(F.v6461) > INT64_C(0))) && (!Y_DEFI(F.v6459)))) {
F.v6461 = yr2819_RoundUp(Y_DEFI(F.v6461), INT64_C(64));
}
if ((!Y_DEFI(F.v6459))) {
((*(yR110 *)y_deref(F.p2827))).f_bits = Y_DEFI(F.v6461);
}
{ rt_int rv6513 = Y_DEFI(F.v6461);
y_use = F.yu; return rv6513; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2833_RecordBits(void * a_p2834, rt_int a_p2835, rt_int a_p2836) {
struct yf2837 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2834 = a_p2834;
F.p2835 = a_p2835;
F.p2836 = a_p2836;
F.v6519 = Y_UNDEF_P;
F.v6521 = Y_UNDEF_I;
F.v6521 = INT64_C(0);
F.v6524 = Y_UNDEF_I;
F.v6524 = INT64_C(0);
F.v6527 = Y_UNDEF_I;
F.v6527 = INT64_C(0);
F.v6530 = Y_UNDEF_I;
F.v6530 = INT64_C(0);
F.v6533 = Y_UNDEF_I;
F.v6533 = INT64_C(0);
F.v6536 = Y_UNDEF_I;
F.v6536 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6546, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6546, &F.v6548);
y_initu(&F.yd_6546, &F.v6550);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6559, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_6559, &F.v6561);
F.v6519 = Y_DEFP(((*(yR110 *)y_deref(F.p2834))).f_fields);
while ((!(Y_DEFP(F.v6519) == ((void *)0)))) {
Y_TICK();
F.v6527 = yr2826_Bits(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_rep), F.p2835);
if ((Y_DEFI(F.v6527) < INT64_C(0))) {
{ rt_int rv6564 = INT64_C(-1);
y_use = F.yu; return rv6564; }
}
if (((!F.p2835) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_rep)))).f_packed)))) {
F.v6527 = yr2819_RoundUp(Y_DEFI(F.v6527), INT64_C(64));
}
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_variant) == INT64_C(0)))) {
if ((Y_DEFI(F.v6533) == INT64_C(0))) {
F.v6533 = Y_DEFI(F.v6521);
}
if (yr2841_FirstOfVariant(F.p2834, Y_DEFP(F.v6519))) {
F.v6521 = Y_DEFI(F.v6533);
}
}
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_at) >= INT64_C(0))) {
F.v6530 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_at);
} else if ((F.p2835 || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_rep)))).f_packed))) {
F.v6530 = yr2819_RoundUp(Y_DEFI(F.v6521), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_rep)))).f_align));
} else {
F.v6530 = yr2819_RoundUp(Y_DEFI(F.v6521), INT64_C(64));
}
if ((F.p2836 && ((Y_DEFI(F.v6536) < INT64_C(512))))) {
F.v6536 = y_range(y_add(Y_DEFI(F.v6536), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6548).p)[y_ix1(F.v6548, Y_DEFI(F.v6536))] = Y_DEFI(F.v6530);
((rt_int *)(F.v6550).p)[y_ix1(F.v6550, Y_DEFI(F.v6536))] = y_range(y_add(Y_DEFI(F.v6530), Y_DEFI(F.v6527)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(F.v6561).p)[y_ix1(F.v6561, Y_DEFI(F.v6536))] = Y_DEFP(F.v6519);
}
F.v6521 = y_range(y_add(Y_DEFI(F.v6530), Y_DEFI(F.v6527)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6521) > Y_DEFI(F.v6524))) {
F.v6524 = Y_DEFI(F.v6521);
}
F.v6519 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6519)))).f_next);
}
if (F.p2836) {
F.lo6578 = INT64_C(1);
F.hi6579 = Y_DEFI(F.v6536);
{ rt_int hi6583 = F.hi6579;
for (rt_int i6582 = F.lo6578; i6582 <= hi6583; i6582++) { F.c_6581 = i6582; Y_TICK();
F.lo6587 = y_add(F.c_6581, INT64_C(1));
F.hi6588 = Y_DEFI(F.v6536);
{ rt_int hi6592 = F.hi6588;
for (rt_int i6591 = F.lo6587; i6591 <= hi6592; i6591++) { F.c_6590 = i6591; Y_TICK();
if ((((((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6581)])))).f_at) >= INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6590)])))).f_at) >= INT64_C(0))))) && ((Y_DEFI(((rt_int *)(F.v6548).p)[y_ix1(F.v6548, F.c_6581)]) < Y_DEFI(((rt_int *)(F.v6550).p)[y_ix1(F.v6550, F.c_6590)])))) && ((Y_DEFI(((rt_int *)(F.v6548).p)[y_ix1(F.v6548, F.c_6590)]) < Y_DEFI(((rt_int *)(F.v6550).p)[y_ix1(F.v6550, F.c_6581)])))) && (((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6581)])))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6590)])))).f_variant) == INT64_C(0)))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6581)])))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6590)])))).f_variant))))))) {
yr1157_Fail(Y_DEFI(v1000), yr3491_Join(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6590)])))).f_name), yr3491_Join(yr1061_T(y_str(" overlaps ", 10)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6561).p)[y_ix1(F.v6561, F.c_6581)])))).f_name), INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
}
if (i6591 == hi6592) break;
}}
if (i6582 == hi6583) break;
}}
}
{ rt_int rv6600 = Y_DEFI(F.v6524);
y_use = F.yu; return rv6600; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2841_FirstOfVariant(void * a_p2842, void * a_p2843) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2842 = a_p2842;
F.p2843 = a_p2843;
F.v6605 = Y_UNDEF_P;
F.v6605 = Y_DEFP(((*(yR110 *)y_deref(F.p2842))).f_fields);
while ((!(Y_DEFP(F.v6605) == F.p2843))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6605)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(F.p2843))).f_variant))) {
{ rt_int rv6607 = 0;
y_use = F.yu; return rv6607; }
}
F.v6605 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6605)))).f_next);
}
{ rt_int rv6609 = 1;
y_use = F.yu; return rv6609; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2848_ApplyStorage(void * a_p2849, void * a_p2850) {
struct yf2851 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2849 = a_p2849;
F.p2850 = a_p2850;
F.v6614 = Y_UNDEF_P;
F.v6614 = yr2496_CopyRep(F.p2849);
F.v6616 = Y_UNDEF_I;
F.v6618 = Y_UNDEF_I;
F.v6620 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2850))).f_flag) == INT64_C(1))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6614)))).f_packed = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2850))).f_a) == ((void *)0)))) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2850))).f_a), &F.v6616, &F.v6618);
if (((!Y_DEFI(F.v6616)) || ((Y_DEFI(F.v6618) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2850))).f_line), y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6614)))).f_pbits = Y_DEFI(F.v6618);
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2850))).f_b) == ((void *)0)))) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2850))).f_b), &F.v6616, &F.v6618);
if ((((!Y_DEFI(F.v6616)) || ((Y_DEFI(F.v6618) < INT64_C(1)))) || ((Y_DEFI(F.v6618) > INT64_C(64))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2850))).f_line), y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6614)))).f_align = Y_DEFI(F.v6618);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6614)))).f_pbits) > INT64_C(0))) {
F.v6620 = yr2826_Bits(Y_DEFP(F.v6614), 1);
if ((Y_DEFI(F.v6620) < INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2850))).f_line), y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
}
if ((Y_DEFI(F.v6620) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6614)))).f_pbits))) {
yr1026_SB();
yr1037_SA(y_str("this representation needs ", 26));
yr1050_SI(Y_DEFI(F.v6620));
yr1037_SA(y_str(" bits, more than PACKED ", 24));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6614)))).f_pbits));
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p2850))).f_line), yr1056_SE());
}
}
{ void * rv6635 = Y_DEFP(F.v6614);
y_use = F.yu; return rv6635; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2855_AtAddress(void * a_p2856) {
struct yf2857 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2856 = a_p2856;
F.v6639 = Y_UNDEF_I;
F.v6641 = Y_UNDEF_I;
yr2920_Manifest(F.p2856, &F.v6639, &F.v6641);
if (((!Y_DEFI(F.v6639)) || ((Y_DEFI(F.v6641) < INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2856))).f_line), y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
}
{ rt_int rv6644 = Y_DEFI(F.v6641);
y_use = F.yu; return rv6644; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2861_StoreAt(rt_int a_p2862, rt_int a_p2863) {
struct yf2864 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2862 = a_p2862;
F.p2863 = a_p2863;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(F.p2862);
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
yr1050_SI(F.p2863);
yr1037_SA(y_str("), sizeof(", 10));
yr1044_ST(F.p2862);
yr1037_SA(y_str(")))", 3));
{ rt_int rv6652 = yr1056_SE();
y_use = F.yu; return rv6652; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2868_ExtentCode(rt_int a_p2869, void * a_p2870) {
struct yf2871 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2869 = a_p2869;
F.p2870 = a_p2870;
F.v6657 = Y_UNDEF_I;
F.v6659 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2870))).f_kind) == v855)) {
{ rt_int rv6662 = yr3491_Join(yr1061_T(y_str("(", 1)), F.p2869, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6662; }
}
F.v6657 = yr2826_Bits(F.p2870, 0);
if ((Y_DEFI(F.v6657) >= INT64_C(0))) {
{ rt_int rv6669 = yr3273_Num(y_range(y_div((y_add(Y_DEFI(F.v6657), INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6669; }
}
if (yr2514_IsArrayLike(F.p2870)) {
F.v6659 = yr2826_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2870))).f_elem), Y_DEFI(((*(yR110 *)y_deref(F.p2870))).f_packed));
if ((Y_DEFI(F.v6659) >= INT64_C(0))) {
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2870))).f_packed))) {
F.v6659 = yr2819_RoundUp(Y_DEFI(F.v6659), INT64_C(64));
}
yr1026_SB();
yr1037_SA(y_str("((y_count(", 10));
yr1044_ST(F.p2869);
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2870))).f_nidx));
yr1037_SA(y_str(") * INT64_C(", 12));
yr1050_SI(Y_DEFI(F.v6659));
yr1037_SA(y_str(") + 63) / 64)", 13));
{ rt_int rv6676 = yr1056_SE();
y_use = F.yu; return rv6676; }
}
}
{ rt_int rv6679 = yr3491_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2869, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6679; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2875_SpaceArg(void * a_p2876, rt_int a_p2877, void * a_p2878) {
struct yf2879 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2876 = a_p2876;
F.p2877 = a_p2877;
F.p2878 = a_p2878;
F.v6685 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2878))).f_kind) == v855)) {
{ rt_int rv6686 = F.p2877;
y_use = F.yu; return rv6686; }
}
if ((yr3029_IsVariable(F.p2876) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2876))).f_kind) == v777)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2878))).f_kind) == v846))))))) {
{ rt_int rv6690 = yr3491_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), yr3103_RawCode(F.p2876, F.p2877), yr3491_Join(yr1061_T(y_str("), ", 3)), yr2868_ExtentCode(F.p2877, F.p2878), yr1061_T(y_str(" })", 3))));
y_use = F.yu; return rv6690; }
}
F.v6685 = yr1200_Fresh(y_str("sp", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2551_CType(F.p2878));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2877);
yr1037_SA(y_str("; void *", 8));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str("); memcpy(", 10));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str("c, &", 4));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str(", sizeof ", 9));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str("); (yspace){ ", 13));
yr1044_ST(Y_DEFI(F.v6685));
yr1037_SA(y_str("c, ", 3));
yr1044_ST(yr2868_ExtentCode(Y_DEFI(F.v6685), F.p2878));
yr1037_SA(y_str(" }; })", 6));
{ rt_int rv6703 = yr1056_SE();
y_use = F.yu; return rv6703; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2883_PackedComponent(void * a_p2884) {
struct yf2885 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2884 = a_p2884;
F.v6707 = Y_UNDEF_P;
F.v6707 = F.p2884;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_kind) == v801)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_kind) == v801))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_a)))).f_rep) == ((void *)0)))) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_a)))).f_rep)))).f_packed)) {
{ rt_int rv6709 = 1;
y_use = F.yu; return rv6709; }
}
}
}
F.v6707 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6707)))).f_a);
}
{ rt_int rv6711 = 0;
y_use = F.yu; return rv6711; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2889_CharOrd(void * a_p2890, rt_int a_p2891) {
struct yf2892 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2890 = a_p2890;
F.p2891 = a_p2891;
F.v6716 = Y_UNDEF_P;
F.v6718 = Y_UNDEF_I;
F.v6720 = Y_UNDEF_I;
F.v6722 = Y_UNDEF_I;
F.v6724 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2890))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_tid))) {
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2891)]) == INT64_C(1))) {
{ rt_int rv6727 = Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2891, INT64_C(1)))]);
y_use = F.yu; return rv6727; }
}
F.v6718 = INT64_C(0);
F.v6722 = INT64_C(1);
F.lo6733 = INT64_C(1);
F.hi6734 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v1522))]);
{ rt_int hi6738 = F.hi6734;
for (rt_int i6737 = F.lo6733; i6737 <= hi6738; i6737++) { F.c_6736 = i6737; Y_TICK();
if ((yr1103_TChar(Y_DEFI(v1522), y_range(F.c_6736, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6724 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v1522))]), (y_sub(Y_DEFI(F.v6722), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_6736, Y_DEFI(F.v6722)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v6724) == F.p2891)) {
if ((Y_DEFI(F.v6718) < INT64_C(32))) {
{ rt_int rv6745 = Y_DEFI(F.v6718);
y_use = F.yu; return rv6745; }
}
if ((Y_DEFI(F.v6718) == INT64_C(32))) {
{ rt_int rv6748 = INT64_C(32);
y_use = F.yu; return rv6748; }
}
if ((Y_DEFI(F.v6718) == INT64_C(33))) {
{ rt_int rv6751 = INT64_C(127);
y_use = F.yu; return rv6751; }
}
if ((Y_DEFI(F.v6718) == INT64_C(34))) {
{ rt_int rv6754 = INT64_C(39);
y_use = F.yu; return rv6754; }
}
{ rt_int rv6756 = INT64_C(34);
y_use = F.yu; return rv6756; }
}
F.v6718 = y_range(y_add(Y_DEFI(F.v6718), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6722 = y_range(y_add(F.c_6736, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i6737 == hi6738) break;
}}
{ rt_int rv6762 = INT64_C(-1);
y_use = F.yu; return rv6762; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2890))).f_kind) == v819))) {
{ rt_int rv6764 = INT64_C(-1);
y_use = F.yu; return rv6764; }
}
F.v6716 = Y_DEFP(((*(yR110 *)y_deref(F.p2890))).f_lits);
F.v6720 = INT64_C(0);
while ((!(Y_DEFP(F.v6716) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6716)))).f_text), F.p2891)) {
{ rt_int rv6766 = Y_DEFI(F.v6720);
y_use = F.yu; return rv6766; }
}
F.v6720 = y_range(y_add(Y_DEFI(F.v6720), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6716 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6716)))).f_next);
}
{ rt_int rv6770 = INT64_C(-1);
y_use = F.yu; return rv6770; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2896_AlphabetFor(void * a_p2897, void * a_p2898) {
struct yf2899 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2897 = a_p2897;
F.p2898 = a_p2898;
F.v6775 = Y_UNDEF_P;
F.v6777 = Y_UNDEF_P;
F.v6779 = Y_UNDEF_P;
F.v6779 = ((void *)0);
F.v6781 = Y_UNDEF_I;
F.v6781 = INT64_C(0);
F.v6784 = Y_UNDEF_I;
F.v6784 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_d) == ((void *)0)))) {
F.v6775 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line)));
if ((((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_kind) == v870))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_rep)))).f_kind) == v819))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_d)))).f_name), y_str(" is not an alphabet", 19));
}
{ void * rv6787 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_rep);
y_use = F.yu; return rv6787; }
}
F.v6784 = INT64_C(1);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v771)) || ((yr2889_CharOrd(Y_DEFP(v1346), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_text)) >= INT64_C(0))))) {
F.v6781 = INT64_C(1);
F.v6779 = Y_DEFP(v1346);
}
F.v6777 = Y_DEFP(v1525);
while ((!(Y_DEFP(F.v6777) == ((void *)0)))) {
Y_TICK();
F.v6775 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6777)))).f_name));
if ((!(Y_DEFP(F.v6775) == ((void *)0)))) {
F.v6775 = yr2483_Real(Y_DEFP(F.v6775));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_kind) == v870)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6775)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6777)))).f_rep)))).f_tid))))) {
F.v6784 = y_range(y_add(Y_DEFI(F.v6784), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v768)) && ((yr2889_CharOrd(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6777)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_text)) >= INT64_C(0))))) {
F.v6781 = y_range(y_add(Y_DEFI(F.v6781), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6779 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6777)))).f_rep);
}
}
}
F.v6777 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6777)))).f_next);
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v771)) && ((Y_DEFI(F.v6784) > INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line), y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((Y_DEFI(F.v6781) > INT64_C(1))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line), yr3491_Join(yr1061_T(y_str("'", 1)), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_text), yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((Y_DEFP(F.v6779) == ((void *)0))) {
{ void * rv6802 = Y_DEFP(v1346);
y_use = F.yu; return rv6802; }
}
{ void * rv6803 = Y_DEFP(F.v6779);
y_use = F.yu; return rv6803; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2903_CharValue(void * a_p2904, rt_int a_p2905, rt_int a_p2906) {
struct yf2907 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2904 = a_p2904;
F.p2905 = a_p2905;
F.p2906 = a_p2906;
F.v6809 = Y_UNDEF_I;
F.v6809 = yr2889_CharOrd(F.p2904, F.p2905);
F.v6811 = Y_UNDEF_I;
if ((Y_DEFI(F.v6809) < INT64_C(0))) {
yr1026_SB();
yr1037_SA(y_str("'", 1));
yr1044_ST(F.p2905);
yr1037_SA(y_str("' is not a character of ", 24));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2904))).f_tname));
F.v6811 = yr1056_SE();
yr1157_Fail(F.p2906, Y_DEFI(F.v6811));
}
{ rt_int rv6815 = Y_DEFI(F.v6809);
y_use = F.yu; return rv6815; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2911_StringCodes(void * a_p2912, rt_int a_p2913, rt_int * a_p2914, rt_int a_p2915) {
struct yf2916 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2912 = a_p2912;
F.p2913 = a_p2913;
F.p2914_o = a_p2914;
F.p2915 = a_p2915;
F.v6822 = Y_UNDEF_I;
F.v6824 = Y_UNDEF_I;
F.v6826 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_6835, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6835, &F.v6837);
F.v6839 = Y_UNDEF_B;
F.v6841 = Y_UNDEF_I;
F.p2914 = INT64_C(0);
F.v6822 = INT64_C(1);
while ((Y_DEFI(F.v6822) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2913)]))) {
Y_TICK();
F.v6839 = yr1103_TChar(F.p2913, Y_DEFI(F.v6822));
if ((Y_DEFB(F.v6839) == 39)) {
F.v6824 = y_range(y_add(Y_DEFI(F.v6822), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v6824) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2913)]))) && ((!(yr1103_TChar(F.p2913, Y_DEFI(F.v6824)) == 39))))) {
Y_TICK();
F.v6824 = y_range(y_add(Y_DEFI(F.v6824), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v6824) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2913)]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(F.p2915, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v6841 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2913)]), Y_DEFI(F.v6822)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v6824), Y_DEFI(F.v6822))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6826 = yr2903_CharValue(F.p2912, Y_DEFI(F.v6841), F.p2915);
F.v6822 = y_range(y_add(Y_DEFI(F.v6824), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6841 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2913)]), (y_sub(Y_DEFI(F.v6822), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v6826 = yr2903_CharValue(F.p2912, Y_DEFI(F.v6841), F.p2915);
F.v6822 = y_range(y_add(Y_DEFI(F.v6822), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.p2914) >= INT64_C(65536))) {
yr1178_FailS(F.p2915, y_str("this implementation takes string literals of up to 65536 characters", 67));
}
F.p2914 = y_range(y_add(Y_DEFI(F.p2914), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6837).p)[y_ix1(F.v6837, Y_DEFI(F.p2914))] = Y_DEFI(F.v6826);
}
yr1026_SB();
yr1031_SC(34);
F.lo6873 = INT64_C(1);
F.hi6874 = Y_DEFI(F.p2914);
{ rt_int hi6878 = F.hi6874;
for (rt_int i6877 = F.lo6873; i6877 <= hi6878; i6877++) { F.c_6876 = i6877; Y_TICK();
F.v6826 = Y_DEFI(((rt_int *)(F.v6837).p)[y_ix1(F.v6837, F.c_6876)]);
if ((((Y_DEFI(F.v6826) == INT64_C(34))) || ((Y_DEFI(F.v6826) == INT64_C(92))))) {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6826))]));
} else if (((((Y_DEFI(F.v6826) >= INT64_C(32))) && ((Y_DEFI(F.v6826) < INT64_C(127)))) && (((((!(Y_DEFI(F.v6826) == INT64_C(63)))) || ((F.c_6876 == INT64_C(1)))) || ((!(Y_DEFI(((rt_int *)(F.v6837).p)[y_ix1(F.v6837, y_sub(F.c_6876, INT64_C(1)))]) == INT64_C(63)))))))) {
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6826))]));
} else {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_div(Y_DEFI(F.v6826), INT64_C(64)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod((y_div(Y_DEFI(F.v6826), INT64_C(8))), INT64_C(8)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod(Y_DEFI(F.v6826), INT64_C(8)))))]));
}
if (i6877 == hi6878) break;
}}
yr1031_SC(34);
{ rt_int rv6905 = yr1056_SE();
(*F.p2914_o) = F.p2914;
y_use = F.yu; return rv6905; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2920_Manifest(void * a_p2921, rt_int * a_p2922, rt_int * a_p2923) {
struct yf2924 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2921 = a_p2921;
F.p2922_o = a_p2922;
F.p2923_o = a_p2923;
F.v6911 = Y_UNDEF_P;
F.v6913 = Y_UNDEF_I;
F.v6915 = Y_UNDEF_I;
F.v6917 = Y_UNDEF_I;
F.v6919 = Y_UNDEF_I;
F.v6921 = Y_UNDEF_I;
F.v6923 = Y_UNDEF_P;
F.p2922 = 0;
F.p2923 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v759)) {
F.p2922 = 1;
F.p2923 = Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_ival);
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v768)) {
F.v6923 = yr2896_AlphabetFor(F.p2921, ((void *)0));
F.p2923 = yr2889_CharOrd(Y_DEFP(F.v6923), Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_text));
F.p2922 = (Y_DEFI(F.p2923) >= INT64_C(0));
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_d) == ((void *)0)))) {
F.v6911 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_line)));
F.v6911 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_name), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6911)))).f_rep));
} else {
F.v6911 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_name));
}
if ((Y_DEFP(F.v6911) == ((void *)0))) {
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
F.v6911 = yr2483_Real(Y_DEFP(F.v6911));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6911)))).f_kind) == v873)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6911)))).f_kind) == v864)))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6911)))).f_hasmv))) {
F.p2922 = 1;
F.p2923 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6911)))).f_mval);
}
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v801)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_a), &F.p2922, &F.p2923);
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v795)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_a), &F.p2922, &F.p2923);
F.p2923 = y_range(y_neg(Y_DEFI(F.p2923)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v798)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_a), &F.v6917, &F.v6913);
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_b), &F.v6919, &F.v6915);
if ((!((Y_DEFI(F.v6917) && Y_DEFI(F.v6919))))) {
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
F.v6921 = Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_name);
F.p2922 = 1;
if ((Y_DEFI(F.v6921) == v573)) {
F.p2923 = y_range(y_add(Y_DEFI(F.v6913), Y_DEFI(F.v6915)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6921) == v576)) {
F.p2923 = y_range(y_sub(Y_DEFI(F.v6913), Y_DEFI(F.v6915)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6921) == v579)) {
F.p2923 = y_range(y_mul(Y_DEFI(F.v6913), Y_DEFI(F.v6915)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6921) == v276)) && ((!(Y_DEFI(F.v6915) == INT64_C(0)))))) {
F.p2923 = y_range(y_div(Y_DEFI(F.v6913), Y_DEFI(F.v6915)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6921) == v378)) && ((!(Y_DEFI(F.v6915) == INT64_C(0)))))) {
F.p2923 = y_range(y_mod(Y_DEFI(F.v6913), Y_DEFI(F.v6915)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6921) == v237)) {
F.p2923 = y_range(y_mul(Y_DEFI(F.v6913), Y_DEFI(F.v6915)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6921) == v399)) {
F.p2923 = y_range(y_sub((y_add(Y_DEFI(F.v6913), Y_DEFI(F.v6915))), (y_mul(Y_DEFI(F.v6913), Y_DEFI(F.v6915)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6921) == v489)) {
F.p2923 = y_range(y_mod((y_add(Y_DEFI(F.v6913), Y_DEFI(F.v6915))), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2922 = 0;
}
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v792)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2921))).f_a), &F.p2922, &F.p2923);
F.p2923 = y_range(y_sub(INT64_C(1), Y_DEFI(F.p2923)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2921))).f_kind) == v780)) {
yr2928_ManifestStd(F.p2921, &F.p2922, &F.p2923);
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
}
(*F.p2922_o) = F.p2922;
(*F.p2923_o) = F.p2923;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2928_ManifestStd(void * a_p2929, rt_int * a_p2930, rt_int * a_p2931) {
struct yf2932 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2929 = a_p2929;
F.p2930_o = a_p2930;
F.p2931_o = a_p2931;
F.v6953 = Y_UNDEF_P;
F.v6955 = Y_UNDEF_I;
F.v6957 = Y_UNDEF_I;
F.v6959 = Y_UNDEF_I;
F.v6961 = Y_UNDEF_I;
F.v6963 = Y_UNDEF_I;
F.v6965 = Y_UNDEF_P;
F.v6967 = Y_UNDEF_P;
F.p2930 = 0;
F.p2931 = INT64_C(0);
F.v6953 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2929))).f_name));
if ((Y_DEFP(F.v6953) == ((void *)0))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
F.v6953 = yr2483_Real(Y_DEFP(F.v6953));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6953)))).f_kind) == v891))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
F.v6955 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6953)))).f_mval);
if ((((((Y_DEFI(F.v6955) == v1372)) || ((Y_DEFI(F.v6955) == v1375))) || ((Y_DEFI(F.v6955) == v1378))) || ((Y_DEFI(F.v6955) == v1381)))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2929))).f_a)) == INT64_C(1)))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2929))).f_a), ((void *)0), &F.v6963, &F.v6965);
if ((!yr2502_IsDiscrete(Y_DEFP(F.v6965)))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6955) == v1378)) || ((Y_DEFI(F.v6955) == v1381)))) {
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_elem) == ((void *)0)))) {
F.v6965 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_elem);
}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_hasm))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
F.p2930 = 1;
if ((Y_DEFI(F.v6955) == v1378)) {
F.p2931 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_mlo);
} else {
F.p2931 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_mhi);
}
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2929))).f_a), &F.v6959, &F.p2931);
if ((!Y_DEFI(F.v6959))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v6955) == v1372)) {
F.p2931 = y_range(y_add(Y_DEFI(F.p2931), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2931 = y_range(y_sub(Y_DEFI(F.p2931), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_elem) == ((void *)0)))) {
F.v6965 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_elem);
}
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_kind) == v804))) && ((((Y_DEFI(F.p2931) < INT64_C(0))) || ((Y_DEFI(F.p2931) >= Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_nlits))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2929))).f_name), y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2930 = 1;
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6955) == v1366)) || ((Y_DEFI(F.v6955) == v1369)))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2929))).f_a)) == INT64_C(2)))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2929))).f_a)))).f_next), &F.v6961, &F.v6957);
if ((!Y_DEFI(F.v6961))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2929))).f_a), ((void *)0), &F.v6963, &F.v6965);
if (((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_kind) == v822))) || ((Y_DEFI(F.v6957) < INT64_C(1)))) || ((Y_DEFI(F.v6957) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_nidx))))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
F.v6967 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6965)))).f_idx);
F.lo6984 = INT64_C(2);
F.hi6985 = Y_DEFI(F.v6957);
{ rt_int hi6989 = F.hi6985;
for (rt_int i6988 = F.lo6984; i6988 <= hi6989; i6988++) { F.c_6987 = i6988; Y_TICK();
F.v6967 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6967)))).f_link);
if (i6988 == hi6989) break;
}}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6967)))).f_hasm))) {
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
F.p2930 = 1;
if ((Y_DEFI(F.v6955) == v1366)) {
F.p2931 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6967)))).f_mlo);
} else {
F.p2931 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6967)))).f_mhi);
}
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
}
(*F.p2930_o) = F.p2930;
(*F.p2931_o) = F.p2931;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2936_NeedsConv(void * a_p2937, void * a_p2938) {
struct yf2939 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2937 = a_p2937;
F.p2938 = a_p2938;
if ((F.p2937 == F.p2938)) {
{ rt_int rv6995 = 0;
y_use = F.yu; return rv6995; }
}
if (yr2502_IsDiscrete(F.p2937)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_lo) == INT64_C(0))) {
{ rt_int rv6998 = 0;
y_use = F.yu; return rv6998; }
}
{ rt_int rv6999 = (!((((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_hasm) && Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_hasm)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_mlo) <= Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_mlo)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_mhi) <= Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_mhi))))));
y_use = F.yu; return rv6999; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_kind) == v810)) {
{ rt_int rv7001 = (!(Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_lo) == INT64_C(0)));
y_use = F.yu; return rv7001; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_kind) == v807)) {
{ rt_int rv7003 = ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_lo) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_fsn) == Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_fsn))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_fsd) == Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_fsd)))));
y_use = F.yu; return rv7003; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_kind) == v825)) {
{ rt_int rv7004 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_kind) == v825)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_cname) == Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_cname)))));
y_use = F.yu; return rv7004; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2937))).f_kind) == v843)))) {
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_kind) == v822))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2938))).f_kind) == v843))))) {
{ rt_int rv7006 = 0;
y_use = F.yu; return rv7006; }
}
{ rt_int rv7007 = yr2936_NeedsConv(Y_DEFP(((*(yR110 *)y_deref(F.p2937))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2938))).f_elem));
y_use = F.yu; return rv7007; }
}
{ rt_int rv7009 = 0;
y_use = F.yu; return rv7009; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2943_ConvertRecord(rt_int a_p2944, void * a_p2945, void * a_p2946) {
struct yf2947 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2944 = a_p2944;
F.p2945 = a_p2945;
F.p2946 = a_p2946;
F.v7015 = Y_UNDEF_I;
F.v7017 = Y_UNDEF_I;
F.v7019 = Y_UNDEF_P;
F.v7021 = Y_UNDEF_P;
F.v7015 = yr1200_Fresh(y_str("cs", 2));
F.v7017 = yr1200_Fresh(y_str("cd", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2551_CType(F.p2946));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7015));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2944);
yr1037_SA(y_str("; ", 2));
yr1044_ST(yr2551_CType(F.p2945));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7017));
yr1037_SA(y_str("; memset(&", 10));
yr1044_ST(Y_DEFI(F.v7017));
yr1037_SA(y_str(", 0, sizeof ", 12));
yr1044_ST(Y_DEFI(F.v7017));
yr1037_SA(y_str(");", 2));
F.v7019 = Y_DEFP(((*(yR110 *)y_deref(F.p2945))).f_fields);
while ((!(Y_DEFP(F.v7019) == ((void *)0)))) {
Y_TICK();
F.v7021 = yr2806_FindField(F.p2946, Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7019)))).f_name));
if ((!(Y_DEFP(F.v7021) == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7021)))).f_variant) == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
yr1044_ST(yr3110_VariantTest(F.p2946, Y_DEFP(F.v7021), yr3491_Join(yr1061_T(y_str("(&", 2)), Y_DEFI(F.v7015), yr1061_T(y_str(")", 1)))));
yr1037_SA(y_str(") ", 2));
}
yr1044_ST(Y_DEFI(F.v7017));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7019)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr3001_Convert(yr3491_Join(Y_DEFI(F.v7015), yr1061_T(y_str(".f_", 3)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7019)))).f_name)), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7019)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7021)))).f_rep)));
yr1037_SA(y_str(";", 1));
}
F.v7019 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7019)))).f_next);
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7017));
yr1037_SA(y_str("; })", 4));
{ rt_int rv7044 = yr1056_SE();
y_use = F.yu; return rv7044; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2951_ConvertArray(rt_int a_p2952, void * a_p2953, void * a_p2954) {
struct yf2955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2952 = a_p2952;
F.p2953 = a_p2953;
F.p2954 = a_p2954;
F.v7050 = Y_UNDEF_I;
F.v7052 = Y_UNDEF_I;
F.v7054 = Y_UNDEF_I;
F.v7056 = Y_UNDEF_I;
F.v7058 = Y_UNDEF_I;
F.v7060 = Y_UNDEF_I;
F.v7050 = yr1200_Fresh(y_str("cs", 2));
F.v7052 = yr1200_Fresh(y_str("cd", 2));
F.v7054 = yr1200_Fresh(y_str("ck", 2));
F.v7056 = yr1200_Fresh(y_str("cn", 2));
F.v7058 = yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2953))).f_elem));
F.v7060 = yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2954))).f_elem));
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v7050));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2952);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7052));
yr1037_SA(y_str("; rt_int ", 9));
yr1044_ST(Y_DEFI(F.v7056));
yr1037_SA(y_str(" = y_count(", 11));
yr1044_ST(Y_DEFI(F.v7050));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2954))).f_nidx));
yr1037_SA(y_str(");", 2));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2953))).f_kind) == v822)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2557_DescOf(F.p2953));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7052));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v7052));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2953))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1044_ST(Y_DEFI(F.v7056));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("array lengths differ", 20));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
} else {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7052));
yr1037_SA(y_str(" = y_like(", 10));
yr1044_ST(Y_DEFI(F.v7050));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2954))).f_nidx));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2953))).f_elem)));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" for (rt_int ", 13));
yr1044_ST(Y_DEFI(F.v7054));
yr1037_SA(y_str(" = 0; ", 6));
yr1044_ST(Y_DEFI(F.v7054));
yr1037_SA(y_str(" < ", 3));
yr1044_ST(Y_DEFI(F.v7056));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v7054));
yr1037_SA(y_str("++) ((", 6));
yr1044_ST(Y_DEFI(F.v7058));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7052));
yr1037_SA(y_str(".p)[", 4));
yr1044_ST(Y_DEFI(F.v7054));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr3001_Convert(yr3491_Join(yr1061_T(y_str("((", 2)), Y_DEFI(F.v7060), yr3491_Join(yr1061_T(y_str(" *)", 3)), Y_DEFI(F.v7050), yr3491_Join(yr1061_T(y_str(".p)[", 4)), Y_DEFI(F.v7054), yr1061_T(y_str("]", 1))))), Y_DEFP(((*(yR110 *)y_deref(F.p2953))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2954))).f_elem)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v7052));
yr1037_SA(y_str("; })", 4));
{ rt_int rv7101 = yr1056_SE();
y_use = F.yu; return rv7101; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2959_RescaleCode(rt_int a_p2960, void * a_p2961, void * a_p2962) {
struct yf2963 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2960 = a_p2960;
F.p2961 = a_p2961;
F.p2962 = a_p2962;
F.v7107 = Y_UNDEF_I;
F.v7109 = Y_UNDEF_I;
F.v7111 = Y_UNDEF_I;
yr2681_ScaleRatio(F.p2961, F.p2962, &F.v7107, &F.v7109, &F.v7111);
if (Y_DEFI(F.v7111)) {
{ rt_int rv7112 = F.p2960;
y_use = F.yu; return rv7112; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_conv(", 11));
yr1044_ST(F.p2960);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7107));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7109));
yr1037_SA(y_str(")", 1));
{ rt_int rv7117 = yr1056_SE();
y_use = F.yu; return rv7117; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2967_CommonScale(rt_int * a_p2968, void * a_p2969, rt_int * a_p2970, void * a_p2971, void * a_p2972, rt_int a_p2973) {
struct yf2974 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2968 = a_p2968;
F.p2969 = a_p2969;
F.p2970 = a_p2970;
F.p2971 = a_p2971;
F.p2972 = a_p2972;
F.p2973 = a_p2973;
F.v7126 = Y_UNDEF_I;
F.v7128 = Y_UNDEF_I;
F.v7126 = yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2969))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2971))).f_fsn));
F.v7128 = yr2665_MulChk(y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2969))).f_fsd), yr2658_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2969))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2971))).f_fsd))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR110 *)y_deref(F.p2971))).f_fsd), F.p2973);
yr2698_SetScale(F.p2972, Y_DEFI(F.v7126), Y_DEFI(F.v7128));
(*F.p2968) = yr2959_RescaleCode(Y_DEFI((*F.p2968)), F.p2969, F.p2972);
(*F.p2970) = yr2959_RescaleCode(Y_DEFI((*F.p2970)), F.p2971, F.p2972);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2978_FixLiteral(void * a_p2979, rt_int * a_p2980, void * * a_p2981) {
struct yf2982 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2979 = a_p2979;
F.p2980_o = a_p2980;
F.p2981_o = a_p2981;
F.v7135 = Y_UNDEF_I;
F.v7135 = Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_ival);
F.v7137 = Y_UNDEF_I;
F.v7137 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7135))]);
F.p2981 = yr2496_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.p2981)))).f_abstract = 0;
if ((Y_DEFI(F.v7137) >= INT64_C(0))) {
yr2698_SetScale(Y_DEFP(F.p2981), yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7135))]), Y_DEFI(F.v7137), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line)), INT64_C(1));
} else {
yr2698_SetScale(Y_DEFP(F.p2981), INT64_C(1), yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7135))]), y_range(y_neg(Y_DEFI(F.v7137)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line)));
}
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7135))]));
yr1037_SA(y_str("))", 2));
F.p2980 = yr1056_SE();
(*F.p2980_o) = F.p2980;
(*F.p2981_o) = F.p2981;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2986_ManifestFix(void * a_p2987, rt_int * a_p2988, rt_int * a_p2989, rt_int * a_p2990) {
struct yf2991 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2987 = a_p2987;
F.p2988_o = a_p2988;
F.p2989_o = a_p2989;
F.p2990_o = a_p2990;
F.v7151 = Y_UNDEF_I;
F.v7153 = Y_UNDEF_I;
F.v7155 = Y_UNDEF_I;
F.v7157 = Y_UNDEF_I;
F.v7159 = Y_UNDEF_I;
F.v7161 = Y_UNDEF_I;
F.p2988 = 0;
F.p2989 = INT64_C(0);
F.p2990 = INT64_C(1);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_kind) == v762)) {
F.v7151 = Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_ival);
F.v7153 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7151))]);
F.p2989 = Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7151))]);
if ((Y_DEFI(F.v7153) >= INT64_C(0))) {
F.p2989 = yr2665_MulChk(Y_DEFI(F.p2989), yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7151))]), Y_DEFI(F.v7153), Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_line)), Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_line));
} else {
F.p2990 = yr2673_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7151))]), y_range(y_neg(Y_DEFI(F.v7153)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_line));
}
F.p2988 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_kind) == v759)) {
F.p2989 = Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_ival);
F.p2988 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_kind) == v801)) {
yr2986_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2987))).f_a), &F.p2988, &F.p2989, &F.p2990);
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_kind) == v795)) {
yr2986_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2987))).f_a), &F.p2988, &F.p2989, &F.p2990);
F.p2989 = y_range(y_neg(Y_DEFI(F.p2989)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_kind) == v798)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_name) == v579)))) {
yr2986_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2987))).f_a), &F.p2988, &F.p2989, &F.p2990);
yr2986_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2987))).f_b), &F.v7161, &F.v7157, &F.v7159);
F.p2988 = (Y_DEFI(F.p2988) && Y_DEFI(F.v7161));
F.p2989 = yr2665_MulChk(Y_DEFI(F.p2989), Y_DEFI(F.v7157), Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_line));
F.p2990 = yr2665_MulChk(Y_DEFI(F.p2990), Y_DEFI(F.v7159), Y_DEFI(((*(yR105 *)y_deref(F.p2987))).f_line));
}
F.v7155 = yr2658_Gcd(Y_DEFI(F.p2989), Y_DEFI(F.p2990));
F.p2989 = y_range(y_div(Y_DEFI(F.p2989), Y_DEFI(F.v7155)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2990 = y_range(y_div(Y_DEFI(F.p2990), Y_DEFI(F.v7155)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2988_o) = F.p2988;
(*F.p2989_o) = F.p2989;
(*F.p2990_o) = F.p2990;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2995_FloatChk(rt_int a_p2996) {
struct yf2997 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2996 = a_p2996;
{ rt_int rv7176 = yr3491_Join(yr1061_T(y_str("y_fchk(", 7)), F.p2996, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv7176; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3001_Convert(rt_int a_p3002, void * a_p3003, void * a_p3004) {
struct yf3005 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3002 = a_p3002;
F.p3003 = a_p3003;
F.p3004 = a_p3004;
F.v7182 = Y_UNDEF_I;
F.v7184 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3004))).f_kind) == v846)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v822))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_nidx) == INT64_C(1))))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3003))).f_idx)))).f_hasm) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3004))).f_nlits) == (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3003))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3003))).f_idx)))).f_mlo))), INT64_C(1)))))))) {
yr1026_SB();
yr1037_SA(y_str("a string of ", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3004))).f_nlits));
yr1037_SA(y_str(" characters for an array of ", 28));
yr1050_SI(y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3003))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3003))).f_idx)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" (VI.B.1)", 9));
F.v7182 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1000), Y_DEFI(F.v7182));
}
}
if ((!yr2936_NeedsConv(F.p3003, F.p3004))) {
{ rt_int rv7195 = F.p3002;
y_use = F.yu; return rv7195; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v825)) {
{ rt_int rv7196 = yr2943_ConvertRecord(F.p3002, F.p3003, F.p3004);
y_use = F.yu; return rv7196; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v843)))) {
{ rt_int rv7197 = yr2951_ConvertArray(F.p3002, F.p3003, F.p3004);
y_use = F.yu; return rv7197; }
}
if (yr3308_Suppressed(v1480)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v807)) {
{ rt_int rv7198 = yr2959_RescaleCode(F.p3002, F.p3004, F.p3003);
y_use = F.yu; return rv7198; }
}
{ rt_int rv7199 = F.p3002;
y_use = F.yu; return rv7199; }
}
if (yr2502_IsDiscrete(F.p3003)) {
yr1026_SB();
yr1037_SA(y_str("y_range(", 8));
yr1044_ST(F.p3002);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2632_LoText(F.p3003));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2638_HiText(F.p3003));
yr1037_SA(y_str(")", 1));
{ rt_int rv7204 = yr1056_SE();
y_use = F.yu; return rv7204; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_frange(", 9));
yr1044_ST(F.p3002);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2632_LoText(F.p3003));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2638_HiText(F.p3003));
yr1037_SA(y_str(")", 1));
{ rt_int rv7209 = yr1056_SE();
y_use = F.yu; return rv7209; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_kind) == v807)) {
F.v7182 = yr2959_RescaleCode(F.p3002, F.p3004, F.p3003);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3003))).f_lo) == INT64_C(0))) {
{ rt_int rv7211 = Y_DEFI(F.v7182);
y_use = F.yu; return rv7211; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_range(", 12));
yr1044_ST(Y_DEFI(F.v7182));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2632_LoText(F.p3003));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2638_HiText(F.p3003));
yr1037_SA(y_str(")", 1));
{ rt_int rv7216 = yr1056_SE();
y_use = F.yu; return rv7216; }
}
{ rt_int rv7217 = F.p3002;
y_use = F.yu; return rv7217; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3009_StoreText(rt_int a_p3010, void * a_p3011, rt_int a_p3012, void * a_p3013, rt_int a_p3014) {
struct yf3015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3010 = a_p3010;
F.p3011 = a_p3011;
F.p3012 = a_p3012;
F.p3013 = a_p3013;
F.p3014 = a_p3014;
F.v7225 = Y_UNDEF_I;
yr2584_CheckType(F.p3014, F.p3011, F.p3013);
if (yr2526_Deep(F.p3011)) {
F.v7225 = yr1200_Fresh(y_str("t", 1));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2551_CType(F.p3011));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7225));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr3001_Convert(F.p3012, F.p3011, F.p3013));
yr1037_SA(y_str("; y_store(", 10));
yr1044_ST(yr2557_DescOf(F.p3011));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.p3010);
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7225));
yr1037_SA(y_str("); }", 4));
{ rt_int rv7234 = yr1056_SE();
y_use = F.yu; return rv7234; }
}
yr1026_SB();
yr1044_ST(F.p3010);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr3001_Convert(F.p3012, F.p3011, F.p3013));
yr1037_SA(y_str(";", 1));
{ rt_int rv7237 = yr1056_SE();
y_use = F.yu; return rv7237; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3019_Store(rt_int a_p3020, void * a_p3021, rt_int a_p3022, void * a_p3023, rt_int a_p3024) {
struct yf3025 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3020 = a_p3020;
F.p3021 = a_p3021;
F.p3022 = a_p3022;
F.p3023 = a_p3023;
F.p3024 = a_p3024;
yr1132_Emit(yr3009_StoreText(F.p3020, F.p3021, F.p3022, F.p3023, F.p3024));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3029_IsVariable(void * a_p3030) {
struct yf3031 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3030 = a_p3030;
F.v7247 = Y_UNDEF_P;
F.v7249 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_kind) == v777)) {
F.v7247 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_name));
if ((Y_DEFP(F.v7247) == ((void *)0))) {
{ rt_int rv7251 = 0;
y_use = F.yu; return rv7251; }
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7247)))).f_readonly)) {
{ rt_int rv7253 = 0;
y_use = F.yu; return rv7253; }
}
{ rt_int rv7254 = (Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v7247))))).f_kind) == v861);
y_use = F.yu; return rv7254; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_kind) == v789)) {
{ rt_int rv7256 = (Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_flag) == INT64_C(0));
y_use = F.yu; return rv7256; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_kind) == v786)) {
{ rt_int rv7257 = (yr3127_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3030))).f_a)) || yr3029_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p3030))).f_a)));
y_use = F.yu; return rv7257; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_kind) == v783)) {
if ((!yr3029_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p3030))).f_a)))) {
{ rt_int rv7259 = 0;
y_use = F.yu; return rv7259; }
}
F.v7249 = yr2806_FindField(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3030))).f_a)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p3030))).f_name));
if ((Y_DEFP(F.v7249) == ((void *)0))) {
{ rt_int rv7261 = 0;
y_use = F.yu; return rv7261; }
}
{ rt_int rv7262 = (!Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7249)))).f_isconst));
y_use = F.yu; return rv7262; }
}
{ rt_int rv7264 = 0;
y_use = F.yu; return rv7264; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3035_CheckPure(void * a_p3036) {
struct yf3037 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3036 = a_p3036;
F.v7268 = Y_UNDEF_P;
F.v7268 = F.p3036;
F.v7270 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_func))) {
y_use = F.yu; return;
}
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_kind) == v786)))) {
Y_TICK();
F.v7268 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_kind) == v789)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_flag) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3036))).f_line), y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_kind) == v777)) {
F.v7270 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_name));
if ((!(Y_DEFP(F.v7270) == ((void *)0)))) {
F.v7270 = yr2483_Real(Y_DEFP(F.v7270));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7270)))).f_level) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3036))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7268)))).f_name), y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3041_LValue(void * a_p3042, rt_int * a_p3043, void * * a_p3044) {
struct yf3045 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3042 = a_p3042;
F.p3043_o = a_p3043;
F.p3044_o = a_p3044;
F.v7279 = Y_UNDEF_P;
F.v7279 = Y_DEFP(v1712);
v1712 = F.p3042;
yr3068_Expr(F.p3042, ((void *)0), &F.p3043, &F.p3044);
v1712 = Y_DEFP(F.v7279);
if ((!yr3029_IsVariable(F.p3042))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3042))).f_line), y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p3043_o) = F.p3043;
(*F.p3044_o) = F.p3044;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3049_Paren(rt_int a_p3050) {
struct yf3051 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3050 = a_p3050;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3050);
yr1037_SA(y_str(")", 1));
{ rt_int rv7285 = yr1056_SE();
y_use = F.yu; return rv7285; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3055_Lit(void * a_p3056, rt_int a_p3057) {
struct yf3058 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3056 = a_p3056;
F.p3057 = a_p3057;
F.v7290 = Y_UNDEF_P;
F.v7290 = yr2496_CopyRep(F.p3056);
yr2719_SetRange(Y_DEFP(F.v7290), F.p3057, F.p3057);
((*(yR110 *)y_deref(Y_DEFP(F.v7290)))).f_elem = F.p3056;
{ void * rv7291 = Y_DEFP(F.v7290);
y_use = F.yu; return rv7291; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3062_Qualifier(void * a_p3063) {
struct yf3064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3063 = a_p3063;
F.v7295 = Y_UNDEF_P;
F.v7295 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3063))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3063))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7295)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7295)))).f_kind) == v870))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3063))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3063))).f_d)))).f_name), y_str(" is not a type", 14));
}
{ void * rv7297 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7295)))).f_rep);
y_use = F.yu; return rv7297; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3068_Expr(void * a_p3069, void * a_p3070, rt_int * a_p3071, void * * a_p3072) {
struct yf3073 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3069 = a_p3069;
F.p3070 = a_p3070;
F.p3071_o = a_p3071;
F.p3072_o = a_p3072;
F.v7304 = Y_UNDEF_I;
F.v7304 = Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_kind);
F.v7306 = Y_UNDEF_P;
F.v7308 = Y_UNDEF_I;
F.v7310 = Y_UNDEF_I;
F.v7312 = Y_UNDEF_P;
F.v7314 = Y_UNDEF_P;
F.v7316 = Y_UNDEF_P;
F.v7318 = Y_UNDEF_I;
F.v7320 = Y_UNDEF_I;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line);
if ((Y_DEFI(F.v7304) == v801)) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), F.p3070, &F.v7308, &F.p3072);
F.p3071 = yr3049_Paren(Y_DEFI(F.v7308));
} else if ((Y_DEFI(F.v7304) == v759)) {
F.p3072 = yr3055_Lit(Y_DEFP(v1342), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_ival));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_d) == ((void *)0)))) {
F.v7314 = yr3062_Qualifier(F.p3069);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_tname);
}
yr1026_SB();
yr1037_SA(y_str("INT64_C(", 8));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_ival));
yr1037_SA(y_str(")", 1));
F.p3071 = yr1056_SE();
} else if ((Y_DEFI(F.v7304) == v768)) {
F.v7314 = yr2896_AlphabetFor(F.p3069, F.p3070);
F.v7320 = yr2903_CharValue(Y_DEFP(F.v7314), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line));
F.p3072 = yr3055_Lit(Y_DEFP(F.v7314), Y_DEFI(F.v7320));
yr1026_SB();
yr1050_SI(Y_DEFI(F.v7320));
F.p3071 = yr1056_SE();
} else if ((Y_DEFI(F.v7304) == v771)) {
F.v7314 = yr2896_AlphabetFor(F.p3069, F.p3070);
F.v7308 = yr2911_StringCodes(Y_DEFP(F.v7314), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_text), &F.v7318, Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line));
F.p3072 = yr2489_NewRep(v846, yr1061_T(y_str("string", 6)));
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_tname = yr1061_T(y_str("a string literal", 16));
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_elem = Y_DEFP(F.v7314);
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_nidx = INT64_C(1);
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_nlits = Y_DEFI(F.v7318);
yr1026_SB();
yr1037_SA(y_str("y_str(", 6));
yr1044_ST(Y_DEFI(F.v7308));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v7318));
yr1037_SA(y_str(")", 1));
F.p3071 = yr1056_SE();
} else if ((Y_DEFI(F.v7304) == v765)) {
F.p3072 = Y_DEFP(v1354);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_d) == ((void *)0)))) {
F.p3072 = yr3062_Qualifier(F.p3069);
}
F.p3071 = yr3049_Paren(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_text));
} else if ((Y_DEFI(F.v7304) == v762)) {
yr2978_FixLiteral(F.p3069, &F.p3071, &F.p3072);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_d) == ((void *)0)))) {
F.v7314 = yr3062_Qualifier(F.p3069);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_kind) == v807))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_tname);
}
} else if ((Y_DEFI(F.v7304) == v774)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p3072 = yr3062_Qualifier(F.p3069);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3072)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), y_str("NIL of a type that is not a pointer", 35));
}
F.p3071 = yr1061_T(y_str("((void *)0)", 11));
} else if ((Y_DEFI(F.v7304) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_d) == ((void *)0)))) {
F.v7314 = yr3062_Qualifier(F.p3069);
F.v7306 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name), Y_DEFP(F.v7314));
if ((Y_DEFP(F.v7306) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name), y_str(" is not a literal of that type", 30));
}
} else {
F.v7306 = yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line));
}
yr3118_NameExpr(F.p3069, Y_DEFP(F.v7306), &F.p3071, &F.p3072);
} else if ((Y_DEFI(F.v7304) == v780)) {
yr3334_CallExpr(F.p3069, F.p3070, 0, &F.p3071, &F.p3072);
} else if ((Y_DEFI(F.v7304) == v783)) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), ((void *)0), &F.v7308, &F.v7314);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a)))).f_rep = Y_DEFP(F.v7314);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_kind) == v825))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name), y_str(": a component of something that is not a record", 47));
}
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_tname), y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v7316 = yr2806_FindField(Y_DEFP(F.v7314), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name));
if ((Y_DEFP(F.v7316) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name), y_str(" is not a component of this record", 34));
}
F.p3072 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7316)))).f_rep);
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7316)))).f_variant) == INT64_C(0)))) {
yr3415_CheckVariantSelected(F.p3069, Y_DEFP(F.v7314), Y_DEFP(F.v7316));
F.v7310 = yr1200_Fresh(y_str("vr", 2));
yr1026_SB();
yr1037_SA(y_str("(*({ ", 5));
yr1044_ST(yr2551_CType(Y_DEFP(F.v7314)));
yr1037_SA(y_str(" *", 2));
yr1044_ST(Y_DEFI(F.v7310));
yr1037_SA(y_str(" = &", 4));
yr1044_ST(yr3049_Paren(Y_DEFI(F.v7308)));
yr1037_SA(y_str("; if (!(", 8));
yr1044_ST(yr3110_VariantTest(Y_DEFP(F.v7314), Y_DEFP(F.v7316), Y_DEFI(F.v7310)));
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1044_ST(Y_DEFI(F.v7310));
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name));
yr1037_SA(y_str("; }))", 5));
F.p3071 = yr1056_SE();
} else {
yr1026_SB();
yr1044_ST(yr3049_Paren(Y_DEFI(F.v7308)));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_name));
F.p3071 = yr1056_SE();
}
} else if ((((Y_DEFI(F.v7304) == v789)) && yr3279_UserOp(F.p3069, y_range(v618, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), ((void *)0), &F.p3071, &F.p3072))) {
((*(yR105 *)y_deref(F.p3069))).f_flag = INT64_C(1);
} else if ((Y_DEFI(F.v7304) == v789)) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), ((void *)0), &F.v7308, &F.v7314);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), y_str("^ of something that is not a pointer", 36));
}
yr3558_NoteFreeDeref(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_tid));
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_forward), y_str(" is not declared", 16));
}
F.p3072 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7314)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(yr2551_CType(Y_DEFP(F.p3072)));
if (yr3308_Suppressed(v1495)) {
yr1037_SA(y_str(" *)y_derefw(", 12));
yr1044_ST(Y_DEFI(F.v7308));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(yr2551_CType(Y_DEFP(F.p3072)));
yr1037_SA(y_str(")))", 3));
} else {
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v7308));
yr1037_SA(y_str("))", 2));
}
F.p3071 = yr1056_SE();
} else if ((Y_DEFI(F.v7304) == v786)) {
yr3133_IndexExpr(F.p3069, &F.p3071, &F.p3072);
} else if ((((Y_DEFI(F.v7304) == v792)) && yr3279_UserOp(F.p3069, y_range(v390, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), ((void *)0), &F.p3071, &F.p3072))) {
F.p3072 = Y_DEFP(F.p3072);
} else if ((Y_DEFI(F.v7304) == v792)) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), Y_DEFP(v1344), &F.v7308, &F.v7314);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7314));
F.p3072 = Y_DEFP(v1344);
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.v7308));
yr1037_SA(y_str(")", 1));
F.p3071 = yr1056_SE();
} else if ((Y_DEFI(F.v7304) == v795)) {
if ((!yr3279_UserOp(F.p3069, y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), ((void *)0), &F.p3071, &F.p3072))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3069))).f_a), F.p3070, &F.v7308, &F.v7314);
yr3141_NegExpr(F.p3069, Y_DEFI(F.v7308), Y_DEFP(F.v7314), &F.p3071, &F.p3072);
}
} else if ((Y_DEFI(F.v7304) == v798)) {
yr3210_BinExpr(F.p3069, F.p3070, &F.p3071, &F.p3072);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3069))).f_line), y_str("not an expression", 17));
}
((*(yR105 *)y_deref(F.p3069))).f_rep = Y_DEFP(F.p3072);
yr3077_CheckDefined(F.p3069, &F.p3071, Y_DEFP(F.p3072));
(*F.p3071_o) = F.p3071;
(*F.p3072_o) = F.p3072;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3077_CheckDefined(void * a_p3078, rt_int * a_p3079, void * a_p3080) {
struct yf3081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3078 = a_p3078;
F.p3079 = a_p3079;
F.p3080 = a_p3080;
F.v7366 = Y_UNDEF_I;
F.v7366 = Y_DEFI(((*(yR105 *)y_deref(F.p3078))).f_kind);
F.v7368 = Y_UNDEF_I;
F.v7368 = INT64_C(0);
if ((((((Y_DEFI(F.v7366) == v777)) || ((Y_DEFI(F.v7366) == v783))) || ((Y_DEFI(F.v7366) == v786))) || ((Y_DEFI(F.v7366) == v789)))) {
((*(yR105 *)y_deref(F.p3078))).f_text = INT64_C(0);
} else {
y_use = F.yu; return;
}
if ((F.p3078 == Y_DEFP(v1712))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7366) == v777)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3078))).f_ival) == INT64_C(1)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7366) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3078))).f_flag) == INT64_C(0)))))) {
y_use = F.yu; return;
}
if (yr3308_Suppressed(v1489)) {
y_use = F.yu; return;
}
F.v7368 = yr3091_UndefMacro(F.p3080);
if ((Y_DEFI(F.v7368) == INT64_C(0))) {
y_use = F.yu; return;
}
((*(yR105 *)y_deref(F.p3078))).f_text = Y_DEFI((*F.p3079));
if ((!yr3085_Addressable(F.p3078))) {
yr1026_SB();
yr1037_SA(y_str("y_vchk_", 7));
yr1031_SC(yr1103_TChar(Y_DEFI(F.v7368), INT64_C(6)));
yr1037_SA(y_str("(", 1));
F.v7368 = yr1056_SE();
}
(*F.p3079) = yr3491_Join(Y_DEFI(F.v7368), Y_DEFI((*F.p3079)), yr1061_T(y_str(")", 1)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3085_Addressable(void * a_p3086) {
struct yf3087 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3086 = a_p3086;
F.v7381 = Y_UNDEF_P;
F.v7381 = F.p3086;
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7381)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7381)))).f_kind) == v801)))) {
Y_TICK();
F.v7381 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7381)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7381)))).f_kind) == v780)) {
{ rt_int rv7383 = 0;
y_use = F.yu; return rv7383; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7381)))).f_kind) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7381)))).f_flag) == INT64_C(0)))))) {
{ rt_int rv7386 = 0;
y_use = F.yu; return rv7386; }
}
{ rt_int rv7388 = 1;
y_use = F.yu; return rv7388; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3091_UndefMacro(void * a_p3092) {
struct yf3093 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3092 = a_p3092;
F.v7392 = Y_UNDEF_I;
F.v7392 = Y_DEFI(((*(yR110 *)y_deref(F.p3092))).f_kind);
if (((((Y_DEFI(F.v7392) == v804)) || ((Y_DEFI(F.v7392) == v813))) || ((Y_DEFI(F.v7392) == v816)))) {
{ rt_int rv7394 = yr1061_T(y_str("Y_DEFI(", 7));
y_use = F.yu; return rv7394; }
}
if ((((Y_DEFI(F.v7392) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3092))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7397 = yr1061_T(y_str("Y_DEFB(", 7));
y_use = F.yu; return rv7397; }
}
if ((Y_DEFI(F.v7392) == v810)) {
{ rt_int rv7399 = yr1061_T(y_str("Y_DEFF(", 7));
y_use = F.yu; return rv7399; }
}
if ((Y_DEFI(F.v7392) == v807)) {
{ rt_int rv7401 = yr1061_T(y_str("Y_DEFX(", 7));
y_use = F.yu; return rv7401; }
}
if ((Y_DEFI(F.v7392) == v828)) {
{ rt_int rv7403 = yr1061_T(y_str("Y_DEFP(", 7));
y_use = F.yu; return rv7403; }
}
if ((Y_DEFI(F.v7392) == v834)) {
{ rt_int rv7405 = yr1061_T(y_str("Y_DEFS(", 7));
y_use = F.yu; return rv7405; }
}
{ rt_int rv7407 = INT64_C(0);
y_use = F.yu; return rv7407; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3097_UndefValue(void * a_p3098) {
struct yf3099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3098 = a_p3098;
F.v7411 = Y_UNDEF_I;
F.v7411 = Y_DEFI(((*(yR110 *)y_deref(F.p3098))).f_kind);
if (((((Y_DEFI(F.v7411) == v804)) || ((Y_DEFI(F.v7411) == v813))) || ((Y_DEFI(F.v7411) == v816)))) {
{ rt_int rv7413 = yr1061_T(y_str("Y_UNDEF_I", 9));
y_use = F.yu; return rv7413; }
}
if ((((Y_DEFI(F.v7411) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3098))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7416 = yr1061_T(y_str("Y_UNDEF_B", 9));
y_use = F.yu; return rv7416; }
}
if ((Y_DEFI(F.v7411) == v810)) {
{ rt_int rv7418 = yr1061_T(y_str("Y_UNDEF_F_VALUE", 15));
y_use = F.yu; return rv7418; }
}
if ((Y_DEFI(F.v7411) == v807)) {
{ rt_int rv7420 = yr1061_T(y_str("Y_UNDEF_X", 9));
y_use = F.yu; return rv7420; }
}
if ((Y_DEFI(F.v7411) == v828)) {
{ rt_int rv7422 = yr1061_T(y_str("Y_UNDEF_P", 9));
y_use = F.yu; return rv7422; }
}
{ rt_int rv7424 = INT64_C(0);
y_use = F.yu; return rv7424; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3103_RawCode(void * a_p3104, rt_int a_p3105) {
struct yf3106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3104 = a_p3104;
F.p3105 = a_p3105;
if ((((((((Y_DEFI(((*(yR105 *)y_deref(F.p3104))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3104))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3104))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3104))).f_kind) == v789)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3104))).f_text) == INT64_C(0)))))) {
{ rt_int rv7429 = Y_DEFI(((*(yR105 *)y_deref(F.p3104))).f_text);
y_use = F.yu; return rv7429; }
}
{ rt_int rv7430 = F.p3105;
y_use = F.yu; return rv7430; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3110_VariantTest(void * a_p3111, void * a_p3112, rt_int a_p3113) {
struct yf3114 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3111 = a_p3111;
F.p3112 = a_p3112;
F.p3113 = a_p3113;
F.v7436 = Y_UNDEF_P;
F.v7436 = Y_DEFP(((*(yR115 *)y_deref(F.p3112))).f_labels);
F.v7438 = Y_UNDEF_I;
F.v7440 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("0", 1));
while ((!(Y_DEFP(F.v7436) == ((void *)0)))) {
Y_TICK();
yr2920_Manifest(Y_DEFP(F.v7436), &F.v7438, &F.v7440);
yr1037_SA(y_str(" || ", 4));
yr1044_ST(F.p3113);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3111))).f_selector)))).f_name));
yr1037_SA(y_str(" == ", 4));
yr1050_SI(Y_DEFI(F.v7440));
F.v7436 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7436)))).f_next);
}
{ rt_int rv7445 = yr1056_SE();
y_use = F.yu; return rv7445; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3118_NameExpr(void * a_p3119, void * a_p3120, rt_int * a_p3121, void * * a_p3122) {
struct yf3123 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3119 = a_p3119;
F.p3120 = a_p3120;
F.p3121_o = a_p3121;
F.p3122_o = a_p3122;
F.v7452 = Y_UNDEF_P;
F.v7452 = yr2483_Real(F.p3120);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_kind) == v873)) {
if ((((Y_DEFP(((*(yR105 *)y_deref(F.p3119))).f_d) == ((void *)0))) && yr2437_Ambiguous(Y_DEFP(F.v7452)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3119))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3119))).f_name), y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p3122 = yr3055_Lit(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_rep), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_mval));
yr1026_SB();
yr1050_SI(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_mval));
F.p3121 = yr1056_SE();
(*F.p3121_o) = F.p3121;
(*F.p3122_o) = F.p3122;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_kind) == v864)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_kind) == v861)) {
((*(yR105 *)y_deref(F.p3119))).f_ival = INT64_C(1);
} else {
((*(yR105 *)y_deref(F.p3119))).f_ival = INT64_C(0);
}
yr3552_NoteFree(Y_DEFP(F.v7452));
F.p3122 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_rep);
F.p3121 = yr2477_SymPath(Y_DEFP(F.v7452));
(*F.p3121_o) = F.p3121;
(*F.p3122_o) = F.p3122;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7452)))).f_kind) == v876)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3119))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3119))).f_name), y_str(" is a routine: a call needs ()", 30));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3119))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3119))).f_name), y_str(" is not a value", 15));
(*F.p3121_o) = F.p3121;
(*F.p3122_o) = F.p3122;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3127_IsMainStore(void * a_p3128) {
struct yf3129 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3128 = a_p3128;
F.v7461 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3128))).f_kind) == v777))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3128))).f_d) == ((void *)0)))))) {
{ rt_int rv7463 = 0;
y_use = F.yu; return rv7463; }
}
F.v7461 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3128))).f_name));
if ((Y_DEFP(F.v7461) == ((void *)0))) {
{ rt_int rv7465 = 0;
y_use = F.yu; return rv7465; }
}
if ((!yr2431_Resolved(Y_DEFP(F.v7461)))) {
{ rt_int rv7467 = 0;
y_use = F.yu; return rv7467; }
}
F.v7461 = yr2483_Real(Y_DEFP(F.v7461));
{ rt_int rv7468 = (((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7461)))).f_kind) == v891)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7461)))).f_mval) == v1477)));
y_use = F.yu; return rv7468; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3133_IndexExpr(void * a_p3134, rt_int * a_p3135, void * * a_p3136) {
struct yf3137 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3134 = a_p3134;
F.p3135_o = a_p3135;
F.p3136_o = a_p3136;
F.v7474 = Y_UNDEF_I;
F.v7476 = Y_UNDEF_I;
F.v7478 = Y_UNDEF_I;
F.v7480 = Y_UNDEF_P;
F.v7482 = Y_UNDEF_P;
F.v7484 = Y_UNDEF_P;
F.v7486 = Y_UNDEF_P;
F.v7488 = Y_UNDEF_I;
F.v7490 = Y_UNDEF_I;
if (yr3127_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_a))) {
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_b)) == INT64_C(1)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3134))).f_line), y_str("MAIN_STORE_ARRAY has one subscript", 34));
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_b), Y_DEFP(v1959), &F.v7476, &F.v7482);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3134))).f_line), Y_DEFP(v1959), Y_DEFP(F.v7482));
F.p3136 = Y_DEFP(v1961);
F.p3135 = yr3491_Join(yr1061_T(y_str("(*y_mem_word(", 13)), Y_DEFI(F.v7476), yr1061_T(y_str("))", 2)));
(*F.p3135_o) = F.p3135;
(*F.p3136_o) = F.p3136;
y_use = F.yu; return;
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_a), ((void *)0), &F.v7474, &F.v7480);
if ((!yr2514_IsArrayLike(Y_DEFP(F.v7480)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3134))).f_line), y_str("[] of something that is not an array", 36));
}
F.v7488 = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_b));
if ((!(Y_DEFI(F.v7488) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7480)))).f_nidx)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3134))).f_line), y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p3136 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7480)))).f_elem);
F.v7490 = (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_a)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_a)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_a)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_a)))).f_kind) == v789)));
if (Y_DEFI(F.v7490)) {
F.v7478 = Y_DEFI(F.v7474);
} else {
F.v7478 = yr1200_Fresh(y_str("ya", 2));
}
yr1026_SB();
if ((!Y_DEFI(F.v7490))) {
yr1037_SA(y_str("(*({ yarr ", 10));
yr1044_ST(Y_DEFI(F.v7478));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7474));
yr1037_SA(y_str("; &", 3));
}
yr1037_SA(y_str("((", 2));
yr1044_ST(yr2551_CType(Y_DEFP(F.p3136)));
yr1037_SA(y_str(" *)(", 4));
yr1044_ST(Y_DEFI(F.v7478));
yr1037_SA(y_str(").p)[y_ix", 9));
if (yr3308_Suppressed(v1492)) {
yr1037_SA(y_str("w", 1));
}
yr1050_SI(Y_DEFI(F.v7488));
yr1037_SA(y_str("(", 1));
yr1044_ST(Y_DEFI(F.v7478));
F.p3135 = yr1056_SE();
F.v7486 = Y_DEFP(((*(yR105 *)y_deref(F.p3134))).f_b);
F.v7484 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7480)))).f_idx);
while ((!(Y_DEFP(F.v7486) == ((void *)0)))) {
Y_TICK();
yr3068_Expr(Y_DEFP(F.v7486), Y_DEFP(F.v7484), &F.v7476, &F.v7482);
if ((((!(Y_DEFP(F.v7484) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7480)))).f_kind) == v822)))) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7486)))).f_line), Y_DEFP(F.v7484), Y_DEFP(F.v7482));
} else if ((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7482)))).f_kind) == v804)) || yr2502_IsDiscrete(Y_DEFP(F.v7482)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7486)))).f_line), y_str("a subscript is an integer or scalar value", 41));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3135));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7476));
F.p3135 = yr1056_SE();
if ((!(Y_DEFP(F.v7484) == ((void *)0)))) {
F.v7484 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7484)))).f_link);
}
F.v7486 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7486)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3135));
yr1037_SA(y_str(")]", 2));
if ((!Y_DEFI(F.v7490))) {
yr1037_SA(y_str("; }))", 5));
}
F.p3135 = yr1056_SE();
(*F.p3135_o) = F.p3135;
(*F.p3136_o) = F.p3136;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3141_NegExpr(void * a_p3142, rt_int a_p3143, void * a_p3144, rt_int * a_p3145, void * * a_p3146) {
struct yf3147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3142 = a_p3142;
F.p3143 = a_p3143;
F.p3144 = a_p3144;
F.p3145_o = a_p3145;
F.p3146_o = a_p3146;
yr1026_SB();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3144))).f_kind) == v804)) {
F.p3146 = yr2496_CopyRep(F.p3144);
((*(yR110 *)y_deref(Y_DEFP(F.p3146)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.p3146)))).f_hasm = 0;
if (yr3308_Suppressed(v1483)) {
yr1037_SA(y_str("Y_NEGW(", 7));
} else {
yr1037_SA(y_str("y_neg(", 6));
}
yr1044_ST(F.p3143);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3144))).f_kind) == v810)) {
F.p3146 = yr2496_CopyRep(F.p3144);
((*(yR110 *)y_deref(Y_DEFP(F.p3146)))).f_lo = INT64_C(0);
yr1037_SA(y_str("(-", 2));
yr1044_ST(F.p3143);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3144))).f_kind) == v807)) {
F.p3146 = yr2496_CopyRep(F.p3144);
((*(yR110 *)y_deref(Y_DEFP(F.p3146)))).f_lo = INT64_C(0);
yr1037_SA(y_str("y_fix_neg(", 10));
yr1044_ST(F.p3143);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3144))).f_kind) == v834)) {
F.p3146 = F.p3144;
yr1037_SA(y_str("y_set_compl(", 12));
yr1044_ST(F.p3143);
yr1037_SA(y_str(")", 1));
} else {
v927 = 0;
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3142))).f_line), y_str("- of something that is not a number or a set", 44));
}
F.p3145 = yr1056_SE();
(*F.p3145_o) = F.p3145;
(*F.p3146_o) = F.p3146;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3151_Unbounded(void * a_p3152) {
struct yf3153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3152 = a_p3152;
F.v7534 = Y_UNDEF_P;
F.v7534 = yr2496_CopyRep(F.p3152);
((*(yR110 *)y_deref(Y_DEFP(F.v7534)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7534)))).f_hi = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7534)))).f_hasm = 0;
{ void * rv7538 = Y_DEFP(F.v7534);
y_use = F.yu; return rv7538; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3157_Call2(yarr a_p3159, rt_int a_p3160, rt_int a_p3161) {
struct yf3162 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3159 = a_p3159;
F.p3160 = a_p3160;
F.p3161 = a_p3161;
yr1026_SB();
yr1037_SA(F.p3159);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3160);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p3161);
yr1037_SA(y_str(")", 1));
{ rt_int rv7546 = yr1056_SE();
y_use = F.yu; return rv7546; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3166_Call2T(rt_int a_p3167, rt_int a_p3168, rt_int a_p3169) {
struct yf3170 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3167 = a_p3167;
F.p3168 = a_p3168;
F.p3169 = a_p3169;
yr1026_SB();
yr1044_ST(F.p3167);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3168);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p3169);
yr1037_SA(y_str(")", 1));
{ rt_int rv7554 = yr1056_SE();
y_use = F.yu; return rv7554; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3174_Infix(rt_int a_p3175, yarr a_p3177, rt_int a_p3178) {
struct yf3179 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3175 = a_p3175;
F.p3177 = a_p3177;
F.p3178 = a_p3178;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3175);
yr1037_SA(y_str(" ", 1));
yr1037_SA(F.p3177);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p3178);
yr1037_SA(y_str(")", 1));
{ rt_int rv7563 = yr1056_SE();
y_use = F.yu; return rv7563; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3183_EqCode(rt_int a_p3184, void * a_p3185, rt_int a_p3186, void * a_p3187) {
struct yf3188 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3184 = a_p3184;
F.p3185 = a_p3185;
F.p3186 = a_p3186;
F.p3187 = a_p3187;
F.v7570 = Y_UNDEF_I;
F.v7572 = Y_UNDEF_I;
F.v7574 = Y_UNDEF_P;
F.v7574 = F.p3185;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3185))).f_kind) == v846)) {
F.v7574 = F.p3187;
}
if ((((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v825))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v846)))) {
F.v7570 = yr1200_Fresh(y_str("e", 1));
F.v7572 = yr1200_Fresh(y_str("e", 1));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2551_CType(Y_DEFP(F.v7574)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7570));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3184);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7572));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3186);
yr1037_SA(y_str("; y_eq(", 7));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v843)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_elem)));
yr1037_SA(y_str(")", 1));
} else {
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v7574)));
}
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7570));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7572));
yr1037_SA(y_str("); })", 5));
{ rt_int rv7588 = yr1056_SE();
y_use = F.yu; return rv7588; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7574)))).f_kind) == v834)) {
{ rt_int rv7590 = yr3157_Call2(y_str("y_set_eq", 8), F.p3184, F.p3186);
y_use = F.yu; return rv7590; }
}
{ rt_int rv7592 = yr3174_Infix(F.p3184, y_str("==", 2), F.p3186);
y_use = F.yu; return rv7592; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3192_IsOrdered(void * a_p3193) {
struct yf3194 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3193 = a_p3193;
if ((((((Y_DEFI(((*(yR110 *)y_deref(F.p3193))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3193))).f_kind) == v810))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3193))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3193))).f_kind) == v819)))) {
{ rt_int rv7596 = 1;
y_use = F.yu; return rv7596; }
}
{ rt_int rv7597 = (((Y_DEFI(((*(yR110 *)y_deref(F.p3193))).f_kind) == v816)) && Y_DEFI(((*(yR110 *)y_deref(F.p3193))).f_ordered));
y_use = F.yu; return rv7597; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3198_FDivName(void) {
struct yf3199 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if (yr3308_Suppressed(v1498)) {
{ rt_int rv7600 = yr1061_T(y_str("y_fdivw", 7));
y_use = F.yu; return rv7600; }
}
{ rt_int rv7602 = yr1061_T(y_str("y_fdiv", 6));
y_use = F.yu; return rv7602; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3203_FixToFloat(rt_int a_p3204, void * a_p3205) {
struct yf3206 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3204 = a_p3204;
F.p3205 = a_p3205;
yr1026_SB();
yr1037_SA(y_str("y_fix_float(", 12));
yr1044_ST(F.p3204);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3205))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3205))).f_fsd));
yr1037_SA(y_str("))", 2));
{ rt_int rv7610 = yr1056_SE();
y_use = F.yu; return rv7610; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3210_BinExpr(void * a_p3211, void * a_p3212, rt_int * a_p3213, void * * a_p3214) {
struct yf3215 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3211 = a_p3211;
F.p3212 = a_p3212;
F.p3213_o = a_p3213;
F.p3214_o = a_p3214;
F.v7617 = Y_UNDEF_I;
F.v7617 = Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_name);
F.v7619 = Y_UNDEF_I;
F.v7621 = Y_UNDEF_I;
F.v7623 = Y_UNDEF_I;
F.v7625 = Y_UNDEF_P;
F.v7627 = Y_UNDEF_P;
F.v7629 = Y_UNDEF_P;
F.v7631 = Y_UNDEF_I;
if (yr3279_UserOp(F.p3211, Y_DEFI(F.v7617), Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_b), &F.p3213, &F.p3214)) {
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7617) == v237)) || ((Y_DEFI(F.v7617) == v399)))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_a), Y_DEFP(v1344), &F.v7619, &F.v7625);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7625));
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_b), Y_DEFP(v1344), &F.v7621, &F.v7627);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7627));
F.p3214 = Y_DEFP(v1344);
if ((Y_DEFI(F.v7617) == v237)) {
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str("&&", 2), Y_DEFI(F.v7621));
} else {
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str("||", 2), Y_DEFI(F.v7621));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7617) == v360)) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_b), ((void *)0), &F.v7621, &F.v7627);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7627)))).f_kind) == v834))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), y_str("IN needs a set on its right", 27));
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_a), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7627)))).f_elem), &F.v7619, &F.v7625);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7627)))).f_elem), Y_DEFP(F.v7625));
F.p3214 = Y_DEFP(v1344);
F.p3213 = yr3157_Call2(y_str("y_set_in", 8), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
F.v7629 = ((void *)0);
if (((((((((!(F.p3212 == ((void *)0)))) && ((!(Y_DEFI(F.v7617) == v585)))) && ((!(Y_DEFI(F.v7617) == v570)))) && ((!(Y_DEFI(F.v7617) == v588)))) && ((!(Y_DEFI(F.v7617) == v540)))) && ((!(Y_DEFI(F.v7617) == v591)))) && ((!(Y_DEFI(F.v7617) == v543))))) {
F.v7629 = F.p3212;
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_a), Y_DEFP(F.v7629), &F.v7619, &F.v7625);
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3211))).f_b), Y_DEFP(F.v7625), &F.v7621, &F.v7627);
if ((((Y_DEFI(F.v7617) == v585)) || ((Y_DEFI(F.v7617) == v570)))) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFP(F.v7625), Y_DEFP(F.v7627));
if (yr2545_NonAssignable(Y_DEFP(F.v7625))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_opaque) && (((y_div(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_tname), y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p3214 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_kind) == v807)) {
yr2967_CommonScale(&F.v7619, Y_DEFP(F.v7625), &F.v7621, Y_DEFP(F.v7627), yr3151_Unbounded(Y_DEFP(F.v7625)), Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line));
}
F.p3213 = yr3183_EqCode(Y_DEFI(F.v7619), Y_DEFP(F.v7625), Y_DEFI(F.v7621), Y_DEFP(F.v7627));
if ((Y_DEFI(F.v7617) == v570)) {
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.p3213));
yr1037_SA(y_str(")", 1));
F.p3213 = yr1056_SE();
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((((((Y_DEFI(F.v7617) == v588)) || ((Y_DEFI(F.v7617) == v540))) || ((Y_DEFI(F.v7617) == v591))) || ((Y_DEFI(F.v7617) == v543)))) {
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFP(F.v7625), Y_DEFP(F.v7627));
if ((!yr3192_IsOrdered(Y_DEFP(F.v7625)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p3214 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_kind) == v807)) {
yr2967_CommonScale(&F.v7619, Y_DEFP(F.v7625), &F.v7621, Y_DEFP(F.v7627), yr3151_Unbounded(Y_DEFP(F.v7625)), Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line));
}
if ((Y_DEFI(F.v7617) == v588)) {
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str("<", 1), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v540)) {
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str("<=", 2), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v591)) {
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str(">", 1), Y_DEFI(F.v7621));
} else {
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str(">=", 2), Y_DEFI(F.v7621));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFP(F.v7625), Y_DEFP(F.v7627));
F.v7631 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_kind);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_kind) == v846)) {
F.v7631 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7627)))).f_kind);
}
if ((Y_DEFI(F.v7617) == v489)) {
if ((Y_DEFI(F.v7631) == v813)) {
F.p3214 = Y_DEFP(v1344);
F.p3213 = yr3174_Infix(Y_DEFI(F.v7619), y_str("!=", 2), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7631) == v834)) {
F.p3214 = Y_DEFP(F.v7625);
F.p3213 = yr3157_Call2(y_str("y_set_xor", 9), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7631) == v834)) {
F.p3214 = Y_DEFP(F.v7625);
if ((Y_DEFI(F.v7617) == v573)) {
F.p3213 = yr3157_Call2(y_str("y_set_union", 11), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v576)) {
F.p3213 = yr3157_Call2(y_str("y_set_diff", 10), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v579)) {
F.p3213 = yr3157_Call2(y_str("y_set_inter", 11), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), y_str("this operator does not apply to sets", 36));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7631) == v804)) {
F.p3214 = yr3151_Unbounded(Y_DEFP(F.v7625));
if ((yr3308_Suppressed(v1483) && (((((Y_DEFI(F.v7617) == v573)) || ((Y_DEFI(F.v7617) == v576))) || ((Y_DEFI(F.v7617) == v579)))))) {
if ((Y_DEFI(F.v7617) == v573)) {
F.p3213 = yr3157_Call2(y_str("Y_ADDW", 6), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v576)) {
F.p3213 = yr3157_Call2(y_str("Y_SUBW", 6), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else {
F.p3213 = yr3157_Call2(y_str("Y_MULW", 6), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
}
} else if ((Y_DEFI(F.v7617) == v573)) {
F.p3213 = yr3157_Call2(y_str("y_add", 5), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v576)) {
F.p3213 = yr3157_Call2(y_str("y_sub", 5), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v579)) {
F.p3213 = yr3157_Call2(y_str("y_mul", 5), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((((Y_DEFI(F.v7617) == v276)) && yr3308_Suppressed(v1498))) {
F.p3213 = yr3157_Call2(y_str("y_divw", 6), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((((Y_DEFI(F.v7617) == v378)) && yr3308_Suppressed(v1498))) {
F.p3213 = yr3157_Call2(y_str("y_modw", 6), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v276)) {
F.p3213 = yr3157_Call2(y_str("y_div", 5), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v378)) {
F.p3213 = yr3157_Call2(y_str("y_mod", 5), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v582)) {
F.p3214 = Y_DEFP(v1354);
yr1026_SB();
if (yr3308_Suppressed(v1498)) {
yr1037_SA(y_str("y_fdivw((double)(", 17));
} else {
yr1037_SA(y_str("y_fdiv((double)(", 16));
}
yr1044_ST(Y_DEFI(F.v7619));
yr1037_SA(y_str("), (double)(", 12));
yr1044_ST(Y_DEFI(F.v7621));
yr1037_SA(y_str("))", 2));
F.p3213 = yr1056_SE();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFI(F.v7617), y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7631) == v810)) {
F.p3214 = yr3151_Unbounded(Y_DEFP(F.v7625));
if ((Y_DEFI(F.v7617) == v573)) {
F.p3213 = yr2995_FloatChk(yr3174_Infix(Y_DEFI(F.v7619), y_str("+", 1), Y_DEFI(F.v7621)));
} else if ((Y_DEFI(F.v7617) == v576)) {
F.p3213 = yr2995_FloatChk(yr3174_Infix(Y_DEFI(F.v7619), y_str("-", 1), Y_DEFI(F.v7621)));
} else if ((Y_DEFI(F.v7617) == v579)) {
F.p3213 = yr2995_FloatChk(yr3174_Infix(Y_DEFI(F.v7619), y_str("*", 1), Y_DEFI(F.v7621)));
} else if ((Y_DEFI(F.v7617) == v582)) {
F.p3214 = Y_DEFP(v1354);
F.p3213 = yr2995_FloatChk(yr3166_Call2T(yr3198_FDivName(), Y_DEFI(F.v7619), Y_DEFI(F.v7621)));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFI(F.v7617), y_str(" does not apply to these numbers", 32));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7631) == v807)) {
F.p3214 = yr3151_Unbounded(Y_DEFP(F.v7625));
if ((((Y_DEFI(F.v7617) == v573)) || ((Y_DEFI(F.v7617) == v576)))) {
yr2967_CommonScale(&F.v7619, Y_DEFP(F.v7625), &F.v7621, Y_DEFP(F.v7627), Y_DEFP(F.p3214), Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line));
if ((Y_DEFI(F.v7617) == v573)) {
F.p3213 = yr3157_Call2(y_str("y_fix_add", 9), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else {
F.p3213 = yr3157_Call2(y_str("y_fix_sub", 9), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
}
} else if ((Y_DEFI(F.v7617) == v579)) {
yr2698_SetScale(Y_DEFP(F.p3214), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7627)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line)), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7625)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7627)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line)));
F.p3213 = yr3157_Call2(y_str("y_fix_mul", 9), Y_DEFI(F.v7619), Y_DEFI(F.v7621));
} else if ((Y_DEFI(F.v7617) == v582)) {
F.p3214 = Y_DEFP(v1354);
F.p3213 = yr2995_FloatChk(yr3166_Call2T(yr3198_FDivName(), yr3203_FixToFloat(Y_DEFI(F.v7619), Y_DEFP(F.v7625)), yr3203_FixToFloat(Y_DEFI(F.v7621), Y_DEFP(F.v7627))));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFI(F.v7617), y_str(" does not apply to these numbers", 32));
}
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3211))).f_line), Y_DEFI(F.v7617), y_str(" does not apply to these values", 31));
(*F.p3213_o) = F.p3213;
(*F.p3214_o) = F.p3214;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3219_Fits(void * a_p3220, void * a_p3221) {
struct yf3222 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3220 = a_p3220;
F.p3221 = a_p3221;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3220))).f_kind) == v843)) {
if ((!yr2514_IsArrayLike(F.p3221))) {
{ rt_int rv7683 = 0;
y_use = F.yu; return rv7683; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3221))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p3220))).f_nidx)))) {
{ rt_int rv7685 = 0;
y_use = F.yu; return rv7685; }
}
{ rt_int rv7686 = yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p3220))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3221))).f_elem));
y_use = F.yu; return rv7686; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3220))).f_kind) == v855)) {
{ rt_int rv7688 = 1;
y_use = F.yu; return rv7688; }
}
{ rt_int rv7689 = yr2569_SameType(F.p3220, F.p3221);
y_use = F.yu; return rv7689; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3226_Choose(void * a_p3227, rt_int a_p3228, rt_int a_p3229) {
struct yf3230 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3227 = a_p3227;
F.p3228 = a_p3228;
F.p3229 = a_p3229;
F.v7695 = Y_UNDEF_P;
F.v7695 = F.p3227;
F.v7697 = Y_UNDEF_P;
F.v7699 = Y_UNDEF_I;
F.v7701 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7695) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7695)))).f_nparams) == F.p3229)) {
F.v7699 = 1;
F.v7697 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7695)))).f_params);
F.v7701 = INT64_C(1);
while ((!(Y_DEFP(F.v7697) == ((void *)0)))) {
Y_TICK();
if ((!yr3219_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7697)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, y_add(F.p3228, Y_DEFI(F.v7701)))])))) {
F.v7699 = 0;
}
F.v7701 = y_range(y_add(Y_DEFI(F.v7701), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7697 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7697)))).f_next);
}
if (Y_DEFI(F.v7699)) {
{ void * rv7708 = Y_DEFP(F.v7695);
y_use = F.yu; return rv7708; }
}
}
F.v7695 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7695)))).f_alt);
}
{ void * rv7709 = ((void *)0);
y_use = F.yu; return rv7709; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3234_HidesStandard(void * a_p3235) {
struct yf3236 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3235 = a_p3235;
F.v7713 = Y_UNDEF_P;
F.v7713 = F.p3235;
while ((!(Y_DEFP(F.v7713) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7713)))).f_decl) == ((void *)0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7713)))).f_decl)))).f_ival) == INT64_C(0))))) {
{ rt_int rv7716 = 1;
y_use = F.yu; return rv7716; }
}
F.v7713 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7713)))).f_alt);
}
{ rt_int rv7718 = 0;
y_use = F.yu; return rv7718; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3240_CompileArgs(void * a_p3241, void * a_p3242, rt_int * a_p3243, rt_int * a_p3244) {
struct yf3245 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3241 = a_p3241;
F.p3242 = a_p3242;
F.p3243_o = a_p3243;
F.p3244_o = a_p3244;
F.v7725 = Y_UNDEF_P;
F.v7725 = F.p3241;
F.v7727 = Y_UNDEF_P;
F.v7727 = ((void *)0);
F.v7729 = Y_UNDEF_P;
F.p3243 = Y_DEFI(v1560);
F.p3244 = INT64_C(0);
if ((!(F.p3242 == ((void *)0)))) {
F.v7727 = Y_DEFP(((*(yR125 *)y_deref(F.p3242))).f_params);
}
while ((!(Y_DEFP(F.v7725) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(v1560) >= INT64_C(4000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7725)))).f_line), y_str("calls nested too deeply", 23));
}
F.p3244 = y_range(y_add(Y_DEFI(F.p3244), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1560 = y_range(y_add(Y_DEFI(F.p3243), Y_DEFI(F.p3244)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7729 = ((void *)0);
if ((!(Y_DEFP(F.v7727) == ((void *)0)))) {
F.v7729 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7727)))).f_rep);
F.v7727 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7727)))).f_next);
}
yr3068_Expr(Y_DEFP(F.v7725), Y_DEFP(F.v7729), &((rt_int *)(v1536).p)[y_ix1(v1536, y_add(Y_DEFI(F.p3243), Y_DEFI(F.p3244)))], &((void * *)(v1547).p)[y_ix1(v1547, y_add(Y_DEFI(F.p3243), Y_DEFI(F.p3244)))]);
((void * *)(v1558).p)[y_ix1(v1558, y_add(Y_DEFI(F.p3243), Y_DEFI(F.p3244)))] = Y_DEFP(F.v7725);
F.v7725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7725)))).f_next);
}
(*F.p3243_o) = F.p3243;
(*F.p3244_o) = F.p3244;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3249_CheckUnresolved(void * a_p3250, void * a_p3251, rt_int a_p3252) {
struct yf3253 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3250 = a_p3250;
F.p3251 = a_p3251;
F.p3252 = a_p3252;
F.v7744 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p3250))).f_kind) == v843))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3251))).f_kind) == v822))))) {
y_use = F.yu; return;
}
F.v7744 = Y_DEFP(((*(yR110 *)y_deref(F.p3251))).f_idx);
while ((!(Y_DEFP(F.v7744) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7744)))).f_kind) == v804))) {
yr1178_FailS(F.p3252, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v7744 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7744)))).f_link);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3257_SameAsFormal(void * a_p3258, void * a_p3259) {
struct yf3260 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3258 = a_p3258;
F.p3259 = a_p3259;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3258))).f_kind) == v855)) {
{ rt_int rv7750 = 1;
y_use = F.yu; return rv7750; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3258))).f_kind) == v843)) {
if ((!((((Y_DEFI(((*(yR110 *)y_deref(F.p3259))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3259))).f_kind) == v843)))))) {
{ rt_int rv7752 = 0;
y_use = F.yu; return rv7752; }
}
{ rt_int rv7753 = yr2611_Identical(Y_DEFP(((*(yR110 *)y_deref(F.p3258))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3259))).f_elem));
y_use = F.yu; return rv7753; }
}
{ rt_int rv7754 = yr2611_Identical(F.p3258, F.p3259);
y_use = F.yu; return rv7754; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3264_CallCode(void * a_p3265, rt_int a_p3266, rt_int a_p3267, rt_int a_p3268) {
struct yf3269 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3265 = a_p3265;
F.p3266 = a_p3266;
F.p3267 = a_p3267;
F.p3268 = a_p3268;
F.v7761 = Y_UNDEF_P;
F.v7761 = Y_DEFP(((*(yR125 *)y_deref(F.p3265))).f_params);
F.v7763 = Y_UNDEF_I;
F.v7763 = y_range(y_add(F.p3266, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7767 = Y_UNDEF_I;
F.v7767 = 1;
F.v7770 = Y_UNDEF_I;
F.v7770 = INT64_C(0);
F.v7773 = Y_UNDEF_I;
F.v7773 = INT64_C(0);
F.v7776 = Y_UNDEF_I;
F.v7776 = INT64_C(0);
F.v7779 = Y_UNDEF_I;
F.v7779 = INT64_C(0);
F.v7782 = Y_UNDEF_I;
F.v7782 = INT64_C(0);
if ((!(F.p3267 == Y_DEFI(((*(yR125 *)y_deref(F.p3265))).f_nparams)))) {
yr1186_FailN(F.p3268, Y_DEFI(((*(yR125 *)y_deref(F.p3265))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3579_CheckActuals(F.p3265, F.p3266, F.p3268);
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3265))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3265))).f_level) > INT64_C(1))) {
yr1044_ST(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3265))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7767 = 0;
}
while ((!(Y_DEFP(F.v7761) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v7767))) {
yr1037_SA(y_str(", ", 2));
}
F.v7767 = 0;
if ((!yr3219_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))])))) {
v927 = 0;
yr2576_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))]));
}
yr3249_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep)))).f_kind) == v855)) {
if (((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_cls) == v897))) && (!yr3029_IsVariable(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))])))).f_kind) == v855))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr1044_ST(yr2875_SpaceArg(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7763))]), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_cls) == v897)) {
yr1044_ST(yr3001_Convert(Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7763))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))])));
} else {
if ((!yr3029_IsVariable(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))) {
v927 = 0;
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr3035_CheckPure(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))]));
yr3546_NoteWrite(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))]));
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_cls) == v903)) && yr2883_PackedComponent(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_name), y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
}
if (yr3257_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))]))) {
yr1037_SA(y_str("&", 1));
yr1044_ST(yr3103_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7763))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_cls) == v903)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v7776 = yr1200_Fresh(y_str("yo", 2));
F.v7770 = yr3491_Join(Y_DEFI(F.v7770), yr3491_Join(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep)), yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7776)), yr1061_T(y_str(";", 1)));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep)))).f_kind) == v843)) {
F.v7770 = yr3491_Join(Y_DEFI(F.v7770), yr3491_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7776), yr1061_T(y_str(" = y_like(", 10))), yr3491_Join(yr3103_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7763))])), yr3491_Join(yr1061_T(y_str(", ", 2)), yr3273_Num(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))])))).f_nidx)), yr1061_T(y_str(", ", 2))), yr3491_Join(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep)))).f_elem)), yr1061_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep))) {
F.v7770 = yr3491_Join(Y_DEFI(F.v7770), yr3491_Join(yr1061_T(y_str(" y_init(", 8)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep)), yr1061_T(y_str(", &", 3))), yr3491_Join(Y_DEFI(F.v7776), yr1061_T(y_str(");", 2)), INT64_C(0)));
}
F.v7773 = yr3491_Join(Y_DEFI(F.v7773), yr1061_T(y_str(" ", 1)), yr3009_StoreText(yr3103_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v7763))])), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v7763))]), Y_DEFI(F.v7776), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v7763))])))).f_line)));
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7776));
}
}
F.v7763 = y_range(y_add(Y_DEFI(F.v7763), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7761 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7761)))).f_next);
}
yr1037_SA(y_str(")", 1));
v1560 = F.p3266;
F.v7779 = yr1056_SE();
if ((Y_DEFI(F.v7770) == INT64_C(0))) {
{ rt_int rv7818 = Y_DEFI(F.v7779);
y_use = F.yu; return rv7818; }
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v7770));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3265))).f_ret)))).f_kind) == v852)) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7779));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7773));
yr1037_SA(y_str(" })", 3));
} else {
F.v7782 = yr1200_Fresh(y_str("yv", 2));
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(F.p3265))).f_ret)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7782));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7779));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7773));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7782));
yr1037_SA(y_str("; })", 4));
}
{ rt_int rv7830 = yr1056_SE();
y_use = F.yu; return rv7830; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3273_Num(rt_int a_p3274) {
struct yf3275 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3274 = a_p3274;
yr1026_SB();
yr1050_SI(F.p3274);
{ rt_int rv7833 = yr1056_SE();
y_use = F.yu; return rv7833; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3279_UserOp(void * a_p3280, rt_int a_p3281, void * a_p3282, void * a_p3283, rt_int * a_p3284, void * * a_p3285) {
struct yf3286 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3280 = a_p3280;
F.p3281 = a_p3281;
F.p3282 = a_p3282;
F.p3283 = a_p3283;
F.p3284_o = a_p3284;
F.p3285_o = a_p3285;
F.v7842 = Y_UNDEF_P;
F.v7844 = Y_UNDEF_P;
F.v7846 = Y_UNDEF_I;
F.v7848 = Y_UNDEF_I;
F.v7842 = yr2378_Find(F.p3281);
if ((Y_DEFP(F.v7842) == ((void *)0))) {
{ rt_int rv7850 = 0;
(*F.p3284_o) = F.p3284;
(*F.p3285_o) = F.p3285;
y_use = F.yu; return rv7850; }
}
F.v7842 = yr2483_Real(Y_DEFP(F.v7842));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7842)))).f_kind) == v876))) {
{ rt_int rv7852 = 0;
(*F.p3284_o) = F.p3284;
(*F.p3285_o) = F.p3285;
y_use = F.yu; return rv7852; }
}
((*(yR105 *)y_deref(F.p3282))).f_next = F.p3283;
if ((!(F.p3283 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3283))).f_next = ((void *)0);
}
yr3240_CompileArgs(F.p3282, ((void *)0), &F.v7846, &F.v7848);
F.v7844 = yr3226_Choose(Y_DEFP(F.v7842), Y_DEFI(F.v7846), Y_DEFI(F.v7848));
if ((Y_DEFP(F.v7844) == ((void *)0))) {
v1560 = Y_DEFI(F.v7846);
if (yr3234_HidesStandard(Y_DEFP(F.v7842))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3280))).f_line), F.p3281, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv7855 = 0;
(*F.p3284_o) = F.p3284;
(*F.p3285_o) = F.p3285;
y_use = F.yu; return rv7855; }
}
yr3290_NoteCall(Y_DEFP(F.v7844), Y_DEFI(((*(yR105 *)y_deref(F.p3280))).f_line));
F.p3284 = yr3264_CallCode(Y_DEFP(F.v7844), Y_DEFI(F.v7846), Y_DEFI(F.v7848), Y_DEFI(((*(yR105 *)y_deref(F.p3280))).f_line));
F.p3285 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7844)))).f_ret);
{ rt_int rv7857 = 1;
(*F.p3284_o) = F.p3284;
(*F.p3285_o) = F.p3285;
y_use = F.yu; return rv7857; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3290_NoteCall(void * a_p3291, rt_int a_p3292) {
struct yf3293 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3291 = a_p3291;
F.p3292 = a_p3292;
F.v7862 = Y_UNDEF_P;
F.v7864 = Y_UNDEF_P;
F.v7864 = F.p3291;
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7864)))).f_kind) == v876)) && ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7864)))).f_target) == ((void *)0)))))) {
F.v7864 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7864)))).f_target);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7864)))).f_func))) {
v1706 = y_range(y_add(Y_DEFI(v1706), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
F.v7862 = yr2029_NewNode(v669, F.p3292);
((*(yR105 *)y_deref(Y_DEFP(F.v7862)))).f_sym = Y_DEFP(F.v7864);
((*(yR105 *)y_deref(Y_DEFP(F.v7862)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_calls);
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_calls = Y_DEFP(F.v7862);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3297_Directive(void * a_p3298, void * a_p3299, rt_int a_p3300, rt_int a_p3301, rt_int * a_p3302, void * * a_p3303) {
struct yf3304 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3298 = a_p3298;
F.p3299 = a_p3299;
F.p3300 = a_p3300;
F.p3301 = a_p3301;
F.p3302_o = a_p3302;
F.p3303_o = a_p3303;
F.v7875 = Y_UNDEF_I;
F.v7877 = Y_UNDEF_I;
F.v7879 = Y_UNDEF_I;
v1560 = F.p3300;
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3299))).f_a), &F.v7875, &F.v7877);
if (((!Y_DEFI(F.v7875)) || ((!(F.p3301 == INT64_C(1)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3299))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3299))).f_name), y_str(" takes a manifest TRAP_KIND (XIV.XIII.2)", 40));
}
F.v7879 = INT64_C(0);
if ((Y_DEFI(F.v7877) == INT64_C(0))) {
F.v7879 = v1480;
} else if ((Y_DEFI(F.v7877) == INT64_C(1))) {
F.v7879 = v1483;
} else if ((Y_DEFI(F.v7877) == INT64_C(2))) {
F.v7879 = v1486;
} else if ((Y_DEFI(F.v7877) == INT64_C(3))) {
F.v7879 = v1492;
} else if ((Y_DEFI(F.v7877) == INT64_C(4))) {
F.v7879 = v1495;
} else if ((Y_DEFI(F.v7877) == INT64_C(5))) {
F.v7879 = v1498;
} else if ((Y_DEFI(F.v7877) == INT64_C(6))) {
F.v7879 = v1489;
}
F.p3303 = Y_DEFP(v1348);
F.p3302 = yr1061_T(y_str("((void)0)", 9));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3298))).f_mval) == v1513)) {
if ((!yr3308_Suppressed(Y_DEFI(F.v7879)))) {
v1709 = y_range(y_add(Y_DEFI(v1709), Y_DEFI(F.v7879)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else if ((Y_DEFI(((*(yR125 *)y_deref(F.p3298))).f_mval) == v1516)) {
if (yr3308_Suppressed(Y_DEFI(F.v7879))) {
v1709 = y_range(y_sub(Y_DEFI(v1709), Y_DEFI(F.v7879)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else {
F.p3303 = Y_DEFP(v1344);
if ((yr3308_Suppressed(Y_DEFI(F.v7879)) && ((!(Y_DEFI(F.v7879) == INT64_C(0)))))) {
F.p3302 = yr1061_T(y_str("1", 1));
} else {
F.p3302 = yr1061_T(y_str("0", 1));
}
}
(*F.p3302_o) = F.p3302;
(*F.p3303_o) = F.p3303;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3308_Suppressed(rt_int a_p3309) {
struct yf3310 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3309 = a_p3309;
if ((F.p3309 == INT64_C(0))) {
{ rt_int rv7900 = 0;
y_use = F.yu; return rv7900; }
}
{ rt_int rv7905 = ((y_mod((y_div(Y_DEFI(v1709), F.p3309)), INT64_C(2))) == INT64_C(1));
y_use = F.yu; return rv7905; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3314_UserAssign(rt_int a_p3315, void * a_p3316, rt_int a_p3317, void * a_p3318, rt_int a_p3319) {
struct yf3320 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3315 = a_p3315;
F.p3316 = a_p3316;
F.p3317 = a_p3317;
F.p3318 = a_p3318;
F.p3319 = a_p3319;
F.v7913 = Y_UNDEF_P;
F.v7915 = Y_UNDEF_P;
F.v7917 = Y_UNDEF_P;
F.v7919 = Y_UNDEF_P;
F.v7921 = Y_UNDEF_I;
F.v7913 = yr2378_Find(y_range(v531, INT64_C(0), INT64_C(4000000)));
if ((Y_DEFP(F.v7913) == ((void *)0))) {
{ rt_int rv7923 = INT64_C(0);
y_use = F.yu; return rv7923; }
}
F.v7913 = yr2483_Real(Y_DEFP(F.v7913));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7913)))).f_kind) == v876))) {
{ rt_int rv7925 = INT64_C(0);
y_use = F.yu; return rv7925; }
}
F.v7915 = Y_DEFP(F.v7913);
while ((!(Y_DEFP(F.v7915) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_nparams) == INT64_C(2))) {
F.v7917 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_params);
F.v7919 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_next);
if ((((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_cls) == v897))) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7919)))).f_cls) == v897))) && yr2569_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep), F.p3316)) && yr2569_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7919)))).f_rep), F.p3318))) {
if ((Y_DEFP(v1674) == Y_DEFP(F.v7915))) {
{ rt_int rv7928 = INT64_C(0);
y_use = F.yu; return rv7928; }
}
yr3290_NoteCall(Y_DEFP(F.v7915), F.p3319);
yr1026_SB();
if (yr2611_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep), F.p3316)) {
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.p3315);
} else {
F.v7921 = yr1200_Fresh(y_str("yo", 2));
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7921));
yr1037_SA(y_str(";", 1));
if (yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep))) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep)));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7921));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7921));
}
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr3001_Convert(F.p3317, Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7919)))).f_rep), F.p3318));
yr1037_SA(y_str(");", 2));
if ((!yr2611_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep), F.p3316))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr3009_StoreText(F.p3315, F.p3316, Y_DEFI(F.v7921), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7917)))).f_rep), F.p3319));
yr1037_SA(y_str(" }", 2));
}
{ rt_int rv7953 = yr1056_SE();
y_use = F.yu; return rv7953; }
}
}
F.v7915 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7915)))).f_alt);
}
{ rt_int rv7955 = INT64_C(0);
y_use = F.yu; return rv7955; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3324_Assign(rt_int a_p3325, void * a_p3326, rt_int a_p3327, void * a_p3328, rt_int a_p3329) {
struct yf3330 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3325 = a_p3325;
F.p3326 = a_p3326;
F.p3327 = a_p3327;
F.p3328 = a_p3328;
F.p3329 = a_p3329;
F.v7963 = Y_UNDEF_I;
F.v7963 = yr3314_UserAssign(F.p3325, F.p3326, F.p3327, F.p3328, F.p3329);
if ((!(Y_DEFI(F.v7963) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v7963));
} else {
yr3019_Store(F.p3325, F.p3326, F.p3327, F.p3328, F.p3329);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3334_CallExpr(void * a_p3335, void * a_p3336, rt_int a_p3337, rt_int * a_p3338, void * * a_p3339) {
struct yf3340 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3335 = a_p3335;
F.p3336 = a_p3336;
F.p3337 = a_p3337;
F.p3338_o = a_p3338;
F.p3339_o = a_p3339;
F.v7972 = Y_UNDEF_P;
F.v7974 = Y_UNDEF_P;
F.v7976 = Y_UNDEF_I;
F.v7978 = Y_UNDEF_I;
F.v7972 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line)));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_kind) == v891)) {
yr3984_StdCall(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_mval), F.p3335, F.p3337, &F.p3338, &F.p3339);
(*F.p3338_o) = F.p3338;
(*F.p3339_o) = F.p3339;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_kind) == v870)))) {
if (F.p3337) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line), y_str("a value is not a statement", 26));
}
yr3344_Denote(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_rep), F.p3335, &F.p3338, &F.p3339);
(*F.p3338_o) = F.p3338;
(*F.p3339_o) = F.p3339;
y_use = F.yu; return;
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_kind) == v876))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_name), y_str(" is not a routine", 17));
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7972)))).f_alt) == ((void *)0))) {
yr3240_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3335))).f_a), Y_DEFP(F.v7972), &F.v7976, &F.v7978);
F.v7974 = Y_DEFP(F.v7972);
} else {
yr3240_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3335))).f_a), ((void *)0), &F.v7976, &F.v7978);
F.v7974 = yr3226_Choose(Y_DEFP(F.v7972), Y_DEFI(F.v7976), Y_DEFI(F.v7978));
if ((Y_DEFP(F.v7974) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_name), y_str(": no definition takes actuals of these types", 44));
}
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v7974))))).f_mval) == INT64_C(0)))) {
yr3297_Directive(yr2483_Real(Y_DEFP(F.v7974)), F.p3335, Y_DEFI(F.v7976), Y_DEFI(F.v7978), &F.p3338, &F.p3339);
(*F.p3338_o) = F.p3338;
(*F.p3339_o) = F.p3339;
y_use = F.yu; return;
}
yr3290_NoteCall(Y_DEFP(F.v7974), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line));
F.p3338 = yr3264_CallCode(Y_DEFP(F.v7974), Y_DEFI(F.v7976), Y_DEFI(F.v7978), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line));
F.p3339 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7974)))).f_ret);
if ((F.p3337 && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3339)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_name), y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3337) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3339)))).f_kind) == v852)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3335))).f_name), y_str(" returns no value", 17));
}
(*F.p3338_o) = F.p3338;
(*F.p3339_o) = F.p3339;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3344_Denote(void * a_p3345, void * a_p3346, rt_int * a_p3347, void * * a_p3348) {
struct yf3349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3345 = a_p3345;
F.p3346 = a_p3346;
F.p3347_o = a_p3347;
F.p3348_o = a_p3348;
F.v7991 = Y_UNDEF_P;
F.v7991 = Y_DEFP(((*(yR105 *)y_deref(F.p3346))).f_a);
F.v7993 = Y_UNDEF_P;
F.v7995 = Y_UNDEF_I;
F.v7997 = Y_UNDEF_I;
F.v7999 = Y_UNDEF_I;
F.v8001 = Y_UNDEF_P;
F.v8003 = Y_UNDEF_I;
F.v8005 = Y_UNDEF_I;
F.v8007 = Y_UNDEF_I;
F.v8009 = Y_UNDEF_I;
F.v8011 = Y_UNDEF_I;
F.v8011 = INT64_C(0);
F.v8014 = Y_UNDEF_I;
F.v8016 = Y_UNDEF_P;
F.v8018 = Y_UNDEF_I;
F.v8018 = 1;
F.p3348 = F.p3345;
if (Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_abstract)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3346))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_tname), y_str(" has no representation to denote a value of", 43));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_kind) == v825)) {
if (Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3346))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_tname), y_str(" is opaque here (X.B.3)", 23));
}
yr1026_SB();
yr1037_SA(y_str("((", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_cname));
yr1037_SA(y_str("){ ", 3));
F.v7997 = yr1056_SE();
F.v7993 = Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_fields);
while ((!(Y_DEFP(F.v7993) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_variant) == Y_DEFI(F.v8011))))) {
if ((Y_DEFP(F.v7991) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3346))).f_line), y_str("too few components in this record value", 39));
}
yr3068_Expr(Y_DEFP(F.v7991), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_rep), &F.v7995, &F.v8001);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_line), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_rep), Y_DEFP(F.v8001));
if ((Y_DEFP(F.v7993) == Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_selector))) {
yr2920_Manifest(Y_DEFP(F.v7991), &F.v8009, &F.v8014);
if ((!Y_DEFI(F.v8009))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_line), y_str("the case-selection value is a manifest constant", 47));
}
F.v8011 = yr3353_VariantOf(F.p3345, Y_DEFI(F.v8014), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_line));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7997));
if ((!Y_DEFI(F.v8018))) {
yr1037_SA(y_str(", ", 2));
}
F.v8018 = 0;
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr3001_Convert(Y_DEFI(F.v7995), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_rep), Y_DEFP(F.v8001)));
F.v7997 = yr1056_SE();
F.v7991 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_next);
}
F.v7993 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7993)))).f_next);
}
if ((!(Y_DEFP(F.v7991) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3346))).f_line), y_str("too many components in this record value", 40));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str(" })", 3));
F.p3347 = yr1056_SE();
(*F.p3347_o) = F.p3347;
(*F.p3348_o) = F.p3348;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_kind) == v822)) {
F.v8003 = yr2044_Count(Y_DEFP(F.v7991));
F.v7997 = yr1200_Fresh(y_str("da", 2));
if ((Y_DEFI(F.v8003) == INT64_C(1))) {
yr3068_Expr(Y_DEFP(F.v7991), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), &F.v7995, &F.v8001);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), Y_DEFP(F.v8001));
F.v7999 = yr1200_Fresh(y_str("dv", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7999));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr3001_Convert(Y_DEFI(F.v7995), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), Y_DEFP(F.v8001)));
yr1037_SA(y_str("; y_fill(", 9));
yr1044_ST(yr2557_DescOf(F.p3345));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7999));
yr1037_SA(y_str("); })", 5));
F.p3347 = yr1056_SE();
(*F.p3347_o) = F.p3347;
(*F.p3348_o) = F.p3348;
y_use = F.yu; return;
}
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str("; y_init(", 9));
yr1044_ST(yr2557_DescOf(F.p3345));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1050_SI(Y_DEFI(F.v8003));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("wrong number of components", 26));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
F.p3347 = yr1056_SE();
F.v8007 = INT64_C(0);
while ((!(Y_DEFP(F.v7991) == ((void *)0)))) {
Y_TICK();
yr3068_Expr(Y_DEFP(F.v7991), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), &F.v7995, &F.v8001);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), Y_DEFP(F.v8001));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3347));
if (yr2526_Deep(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem))) {
yr1037_SA(y_str(" { ", 3));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(" dv = ", 6));
yr1044_ST(Y_DEFI(F.v7995));
yr1037_SA(y_str("; y_copy(", 9));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(", &((", 5));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v8007));
yr1037_SA(y_str("], &dv); }", 10));
} else {
yr1037_SA(y_str(" ((", 3));
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v8007));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr3001_Convert(Y_DEFI(F.v7995), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), Y_DEFP(F.v8001)));
yr1037_SA(y_str(";", 1));
}
F.p3347 = yr1056_SE();
F.v8007 = y_range(y_add(Y_DEFI(F.v8007), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7991 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3347));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7997));
yr1037_SA(y_str("; })", 4));
F.p3347 = yr1056_SE();
(*F.p3347_o) = F.p3347;
(*F.p3348_o) = F.p3348;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_kind) == v834)) {
yr1026_SB();
yr1037_SA(y_str("y_set_new(", 10));
yr1044_ST(yr2632_LoText(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2638_HiText(Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem)));
yr1037_SA(y_str(")", 1));
F.p3347 = yr1056_SE();
while ((!(Y_DEFP(F.v7991) == ((void *)0)))) {
Y_TICK();
yr3068_Expr(Y_DEFP(F.v7991), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), &F.v7995, &F.v8001);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3345))).f_elem), Y_DEFP(F.v8001));
F.p3347 = yr3157_Call2(y_str("y_set_add", 9), Y_DEFI(F.p3347), Y_DEFI(F.v7995));
F.v7991 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_next);
}
(*F.p3347_o) = F.p3347;
(*F.p3348_o) = F.p3348;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3346))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3345))).f_tname), y_str(" has no denotations of values", 29));
(*F.p3347_o) = F.p3347;
(*F.p3348_o) = F.p3348;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3353_VariantOf(void * a_p3354, rt_int a_p3355, rt_int a_p3356) {
struct yf3357 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3354 = a_p3354;
F.p3355 = a_p3355;
F.p3356 = a_p3356;
F.v8080 = Y_UNDEF_P;
F.v8080 = Y_DEFP(((*(yR110 *)y_deref(F.p3354))).f_fields);
F.v8082 = Y_UNDEF_P;
F.v8084 = Y_UNDEF_I;
F.v8086 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v8080) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8080)))).f_variant) == INT64_C(0)))) {
F.v8082 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8080)))).f_labels);
while ((!(Y_DEFP(F.v8082) == ((void *)0)))) {
Y_TICK();
yr2920_Manifest(Y_DEFP(F.v8082), &F.v8084, &F.v8086);
if ((Y_DEFI(F.v8084) && ((Y_DEFI(F.v8086) == F.p3355)))) {
{ rt_int rv8088 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v8080)))).f_variant);
y_use = F.yu; return rv8088; }
}
F.v8082 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8082)))).f_next);
}
}
F.v8080 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v8080)))).f_next);
}
{ rt_int rv8090 = INT64_C(-1);
y_use = F.yu; return rv8090; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3361_Emit2(yarr a_p3363, rt_int a_p3364) {
struct yf3365 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3363 = a_p3363;
F.p3364 = a_p3364;
F.v8095 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3363);
yr1044_ST(F.p3364);
F.v8095 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8095));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3369_Emit3(yarr a_p3371, rt_int a_p3372, yarr a_p3374) {
struct yf3375 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3371 = a_p3371;
F.p3372 = a_p3372;
F.p3374 = a_p3374;
F.v8101 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3371);
yr1044_ST(F.p3372);
yr1037_SA(F.p3374);
F.v8101 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8101));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3379_PopTo(rt_int a_p3380) {
struct yf3381 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3380 = a_p3380;
if ((Y_DEFI(v1599) > F.p3380)) {
yr3369_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1572).p)[y_ix1(v1572, y_add(F.p3380, INT64_C(1)))]), y_str(".prev;", 6));
}
F.lo8111 = y_add(F.p3380, INT64_C(1));
F.hi8112 = Y_DEFI(v1599);
{ rt_int hi8116 = F.hi8112;
for (rt_int i8115 = F.lo8111; i8115 <= hi8116; i8115++) { F.c_8114 = i8115; Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1583).p)[y_ix1(v1583, F.c_8114)]) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(((rt_int *)(v1583).p)[y_ix1(v1583, F.c_8114)]));
}
if (i8115 == hi8116) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3385_LeaveBlock(void) {
struct yf3386 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFI(v1627) > INT64_C(0))) {
if ((!(Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]) == INT64_C(0)))) {
yr3369_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]), y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3390_RaiseCode(rt_int a_p3391) {
struct yf3392 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3391 = a_p3391;
yr1026_SB();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
yr1031_SC(34);
yr1044_ST(F.p3391);
yr1031_SC(34);
yr1037_SA(y_str("));", 3));
{ rt_int rv8129 = yr1056_SE();
y_use = F.yu; return rv8129; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3396_BlockStatements(void * a_p3397) {
struct yf3398 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3397 = a_p3397;
F.v8133 = Y_UNDEF_I;
F.v8133 = Y_DEFI(v1709);
yr3402_BlockStatements1(F.p3397);
v1709 = Y_DEFI(F.v8133);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3402_BlockStatements1(void * a_p3403) {
struct yf3404 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3403 = a_p3403;
F.v8137 = Y_UNDEF_I;
F.v8139 = Y_UNDEF_I;
F.v8141 = Y_UNDEF_I;
F.v8143 = Y_UNDEF_P;
F.v8145 = Y_UNDEF_P;
F.v8147 = Y_UNDEF_I;
F.v8149 = Y_UNDEF_P;
F.v8149 = Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_a);
F.v8151 = Y_UNDEF_I;
F.v8151 = INT64_C(0);
while ((!(Y_DEFP(F.v8149) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8149)))).f_kind) == v645)) && ((Y_DEFI(F.v8151) == INT64_C(0))))) {
F.v8151 = yr1200_Fresh(y_str("xs", 2));
yr3369_Emit3(y_str("rt_frame *", 10), Y_DEFI(F.v8151), y_str(" = rt_xtop;", 11));
}
F.v8149 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8149)))).f_next);
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_b) == ((void *)0))) {
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = INT64_C(0);
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = Y_DEFI(F.v8151);
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_c));
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3523_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_a));
y_use = F.yu; return;
}
v1703 = 1;
F.v8137 = yr1200_Fresh(y_str("xf", 2));
yr3369_Emit3(y_str("{ rt_frame ", 11), Y_DEFI(F.v8137), y_str(";", 1));
yr3369_Emit3(y_str("if (RT_TRY(", 11), Y_DEFI(F.v8137), y_str(")) {", 4));
v1599 = y_range(y_add(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1572).p)[y_ix1(v1572, Y_DEFI(v1599))] = Y_DEFI(F.v8137);
((rt_int *)(v1583).p)[y_ix1(v1583, Y_DEFI(v1599))] = INT64_C(0);
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = Y_DEFI(F.v8137);
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = Y_DEFI(F.v8151);
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_c));
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1599 = y_range(y_sub(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3523_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_a));
yr3369_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8137), y_str(");", 2));
yr1138_EmitS(y_str("} else {", 8));
yr3369_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8137), y_str(");", 2));
if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
}
F.v8139 = yr1200_Fresh(y_str("xc", 2));
yr3369_Emit3(y_str("int ", 4), Y_DEFI(F.v8139), y_str(" = rt_xcur;", 11));
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = INT64_C(0);
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = INT64_C(0);
v1641 = y_range(y_add(Y_DEFI(v1641), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1639).p)[y_ix1(v1639, Y_DEFI(v1641))] = Y_DEFI(F.v8139);
F.v8147 = 1;
F.v8143 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8143) == ((void *)0)))) {
Y_TICK();
yr1026_SB();
if (Y_DEFI(F.v8147)) {
yr1037_SA(y_str("if (", 4));
} else {
yr1037_SA(y_str("} else if (", 11));
}
F.v8147 = 0;
F.v8145 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8143)))).f_a);
while ((!(Y_DEFP(F.v8145) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(F.v8139));
yr1037_SA(y_str(" == rt_exc(", 11));
yr1031_SC(34);
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8145)))).f_name));
yr1031_SC(34);
yr1037_SA(y_str(")", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8145)))).f_next) == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
}
F.v8145 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8145)))).f_next);
}
yr1037_SA(y_str(") {", 3));
F.v8141 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8141));
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8143)))).f_b));
F.v8143 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8143)))).f_next);
}
if ((!Y_DEFI(F.v8147))) {
yr1138_EmitS(y_str("} else {", 8));
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_b)))).f_flag) == INT64_C(1))) {
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_b)))).f_b));
} else {
yr3369_Emit3(y_str("rt_raise(", 9), Y_DEFI(F.v8139), y_str(");", 2));
}
if ((!Y_DEFI(F.v8147))) {
yr1138_EmitS(y_str("}", 1));
}
v1641 = y_range(y_sub(Y_DEFI(v1641), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3408_SameDesig(void * a_p3409, void * a_p3410) {
struct yf3411 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3409 = a_p3409;
F.p3410 = a_p3410;
F.v8218 = Y_UNDEF_P;
F.v8220 = Y_UNDEF_P;
F.v8222 = Y_UNDEF_I;
F.v8224 = Y_UNDEF_I;
F.v8226 = Y_UNDEF_I;
F.v8228 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_kind) == v801)) {
{ rt_int rv8229 = yr3408_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3409))).f_a), F.p3410);
y_use = F.yu; return rv8229; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3410))).f_kind) == v801)) {
{ rt_int rv8230 = yr3408_SameDesig(F.p3409, Y_DEFP(((*(yR105 *)y_deref(F.p3410))).f_a));
y_use = F.yu; return rv8230; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(F.p3410))).f_kind)))) {
{ rt_int rv8232 = 0;
y_use = F.yu; return rv8232; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_kind) == v777)) {
{ rt_int rv8233 = ((((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3410))).f_name))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3409))).f_d) == ((void *)0)))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3410))).f_d) == ((void *)0))));
y_use = F.yu; return rv8233; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_kind) == v783)) {
{ rt_int rv8234 = (((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3410))).f_name))) && yr3408_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3409))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3410))).f_a)));
y_use = F.yu; return rv8234; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_kind) == v789)) {
{ rt_int rv8235 = yr3408_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3409))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3410))).f_a));
y_use = F.yu; return rv8235; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_kind) == v786)) {
if ((!yr3408_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3409))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3410))).f_a)))) {
{ rt_int rv8237 = 0;
y_use = F.yu; return rv8237; }
}
F.v8218 = Y_DEFP(((*(yR105 *)y_deref(F.p3409))).f_b);
F.v8220 = Y_DEFP(((*(yR105 *)y_deref(F.p3410))).f_b);
while ((((!(Y_DEFP(F.v8218) == ((void *)0)))) && ((!(Y_DEFP(F.v8220) == ((void *)0)))))) {
Y_TICK();
yr2920_Manifest(Y_DEFP(F.v8218), &F.v8222, &F.v8226);
yr2920_Manifest(Y_DEFP(F.v8220), &F.v8224, &F.v8228);
if ((Y_DEFI(F.v8222) && Y_DEFI(F.v8224))) {
if ((!(Y_DEFI(F.v8226) == Y_DEFI(F.v8228)))) {
{ rt_int rv8239 = 0;
y_use = F.yu; return rv8239; }
}
} else if ((!yr3408_SameDesig(Y_DEFP(F.v8218), Y_DEFP(F.v8220)))) {
{ rt_int rv8241 = 0;
y_use = F.yu; return rv8241; }
}
F.v8218 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8218)))).f_next);
F.v8220 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8220)))).f_next);
}
{ rt_int rv8242 = (((Y_DEFP(F.v8218) == ((void *)0))) && ((Y_DEFP(F.v8220) == ((void *)0))));
y_use = F.yu; return rv8242; }
}
{ rt_int rv8244 = 0;
y_use = F.yu; return rv8244; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3415_CheckVariantSelected(void * a_p3416, void * a_p3417, void * a_p3418) {
struct yf3419 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3416 = a_p3416;
F.p3417 = a_p3417;
F.p3418 = a_p3418;
F.v8250 = Y_UNDEF_I;
F.v8250 = Y_DEFI(v1689);
F.v8252 = Y_UNDEF_P;
F.v8254 = Y_UNDEF_P;
F.v8256 = Y_UNDEF_P;
F.v8258 = Y_UNDEF_I;
F.v8260 = Y_UNDEF_I;
F.v8262 = Y_UNDEF_I;
F.v8264 = Y_UNDEF_I;
while ((Y_DEFI(F.v8250) > INT64_C(0))) {
Y_TICK();
F.v8252 = Y_DEFP(((void * *)(v1685).p)[y_ix1(v1685, Y_DEFI(F.v8250))]);
while ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8252)))).f_kind) == v801)) {
Y_TICK();
F.v8252 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8252)))).f_a);
}
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8252)))).f_kind) == v783)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8252)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3417))).f_selector)))).f_name)))) && yr3408_SameDesig(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8252)))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3416))).f_a)))) {
F.v8254 = Y_DEFP(((void * *)(v1687).p)[y_ix1(v1687, Y_DEFI(F.v8250))]);
if ((Y_DEFP(F.v8254) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3416))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3416))).f_name), y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(Y_DEFP(F.v8254) == ((void *)0)))) {
Y_TICK();
F.v8258 = yr3467_Label(Y_DEFP(F.v8254), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3417))).f_selector)))).f_rep));
F.v8264 = 0;
F.v8256 = Y_DEFP(((*(yR115 *)y_deref(F.p3418))).f_labels);
while ((!(Y_DEFP(F.v8256) == ((void *)0)))) {
Y_TICK();
yr2920_Manifest(Y_DEFP(F.v8256), &F.v8262, &F.v8260);
if ((Y_DEFI(F.v8262) && ((Y_DEFI(F.v8260) == Y_DEFI(F.v8258))))) {
F.v8264 = 1;
}
F.v8256 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8256)))).f_next);
}
if ((!Y_DEFI(F.v8264))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3416))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3416))).f_name), y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v8254 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8254)))).f_next);
}
y_use = F.yu; return;
}
F.v8250 = y_range(y_sub(Y_DEFI(F.v8250), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3416))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3416))).f_name), y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3423_CheckCaseLabels(void * a_p3424, void * a_p3425) {
struct yf3426 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3424 = a_p3424;
F.p3425 = a_p3425;
F.v8277 = Y_UNDEF_P;
F.v8277 = Y_DEFP(((*(yR105 *)y_deref(F.p3424))).f_b);
F.v8279 = Y_UNDEF_P;
F.v8279 = Y_DEFP(((*(yR105 *)y_deref(F.p3424))).f_b);
F.v8281 = Y_UNDEF_I;
F.v8281 = INT64_C(0);
F.v8284 = Y_UNDEF_I;
F.v8284 = INT64_C(0);
while ((!(Y_DEFP(F.v8277) == ((void *)0)))) {
Y_TICK();
F.v8279 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8277)))).f_a);
while ((!(Y_DEFP(F.v8279) == ((void *)0)))) {
Y_TICK();
F.v8284 = yr3467_Label(Y_DEFP(F.v8279), F.p3425);
F.lo8289 = INT64_C(1);
F.hi8290 = Y_DEFI(F.v8281);
{ rt_int hi8294 = F.hi8290;
for (rt_int i8293 = F.lo8289; i8293 <= hi8294; i8293++) { F.c_8292 = i8293; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1701).p)[y_ix1(v1701, F.c_8292)]) == Y_DEFI(F.v8284))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8279)))).f_line), y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i8293 == hi8294) break;
}}
if ((Y_DEFI(F.v8281) < INT64_C(4096))) {
F.v8281 = y_range(y_add(Y_DEFI(F.v8281), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1701).p)[y_ix1(v1701, Y_DEFI(F.v8281))] = Y_DEFI(F.v8284);
}
F.v8279 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8279)))).f_next);
}
F.v8277 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8277)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3430_Falls(void * a_p3431) {
struct yf3432 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3431 = a_p3431;
F.v8302 = Y_UNDEF_P;
F.v8302 = F.p3431;
F.v8304 = Y_UNDEF_I;
F.v8304 = 1;
while ((!(Y_DEFP(F.v8302) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8302)))).f_text) == INT64_C(0)))) {
F.v8304 = 1;
}
if (Y_DEFI(F.v8304)) {
F.v8304 = yr3442_Completes(Y_DEFP(F.v8302));
}
F.v8302 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8302)))).f_next);
}
{ rt_int rv8308 = Y_DEFI(F.v8304);
y_use = F.yu; return rv8308; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3436_BlockFalls(void * a_p3437) {
struct yf3438 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3437 = a_p3437;
F.v8312 = Y_UNDEF_P;
if (yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_c))) {
{ rt_int rv8314 = 1;
y_use = F.yu; return rv8314; }
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_b) == ((void *)0))) {
{ rt_int rv8316 = 0;
y_use = F.yu; return rv8316; }
}
F.v8312 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8312) == ((void *)0)))) {
Y_TICK();
if (yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8312)))).f_b))) {
{ rt_int rv8318 = 1;
y_use = F.yu; return rv8318; }
}
F.v8312 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8312)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_b)))).f_flag) == INT64_C(1))) {
{ rt_int rv8320 = yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_b)))).f_b));
y_use = F.yu; return rv8320; }
}
{ rt_int rv8322 = 0;
y_use = F.yu; return rv8322; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3442_Completes(void * a_p3443) {
struct yf3444 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3443 = a_p3443;
F.v8326 = Y_UNDEF_I;
F.v8326 = Y_DEFI(((*(yR105 *)y_deref(F.p3443))).f_kind);
F.v8328 = Y_UNDEF_P;
F.v8330 = Y_UNDEF_I;
F.v8332 = Y_UNDEF_I;
if (((((((Y_DEFI(F.v8326) == v729)) || ((Y_DEFI(F.v8326) == v732))) || ((Y_DEFI(F.v8326) == v735))) || ((Y_DEFI(F.v8326) == v723))) || ((Y_DEFI(F.v8326) == v726)))) {
{ rt_int rv8334 = 0;
y_use = F.yu; return rv8334; }
}
if ((Y_DEFI(F.v8326) == v738)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3443))).f_flag) == INT64_C(1)))) {
{ rt_int rv8337 = 1;
y_use = F.yu; return rv8337; }
}
F.v8328 = Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_a);
while ((!(Y_DEFP(F.v8328) == ((void *)0)))) {
Y_TICK();
if (yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_b))) {
{ rt_int rv8339 = 1;
y_use = F.yu; return rv8339; }
}
F.v8328 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_next);
}
{ rt_int rv8340 = yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_b));
y_use = F.yu; return rv8340; }
}
if ((Y_DEFI(F.v8326) == v741)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3443))).f_flag) == INT64_C(1)))) {
{ rt_int rv8343 = 1;
y_use = F.yu; return rv8343; }
}
F.v8328 = Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_b);
while ((!(Y_DEFP(F.v8328) == ((void *)0)))) {
Y_TICK();
if (yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_b))) {
{ rt_int rv8345 = 1;
y_use = F.yu; return rv8345; }
}
F.v8328 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8328)))).f_next);
}
{ rt_int rv8346 = yr3430_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_c));
y_use = F.yu; return rv8346; }
}
if ((Y_DEFI(F.v8326) == v744)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_a), &F.v8330, &F.v8332);
{ rt_int rv8348 = (!((Y_DEFI(F.v8330) && ((Y_DEFI(F.v8332) == INT64_C(1))))));
y_use = F.yu; return rv8348; }
}
if ((Y_DEFI(F.v8326) == v750)) {
{ rt_int rv8349 = yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3443))).f_name));
y_use = F.yu; return rv8349; }
}
if ((Y_DEFI(F.v8326) == v753)) {
{ rt_int rv8350 = yr3436_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3443))).f_a));
y_use = F.yu; return rv8350; }
}
{ rt_int rv8352 = 1;
y_use = F.yu; return rv8352; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3448_Exits(void * a_p3449, rt_int a_p3450) {
struct yf3451 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3449 = a_p3449;
F.p3450 = a_p3450;
F.v8357 = Y_UNDEF_P;
F.v8357 = F.p3449;
F.v8359 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8357) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v726)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_name) == F.p3450)))) {
{ rt_int rv8361 = 1;
y_use = F.yu; return rv8361; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v738)) {
F.v8359 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_a);
while ((!(Y_DEFP(F.v8359) == ((void *)0)))) {
Y_TICK();
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8359)))).f_b), F.p3450)) {
{ rt_int rv8363 = 1;
y_use = F.yu; return rv8363; }
}
F.v8359 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8359)))).f_next);
}
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_b), F.p3450)) {
{ rt_int rv8365 = 1;
y_use = F.yu; return rv8365; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v741)) {
F.v8359 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_b);
while ((!(Y_DEFP(F.v8359) == ((void *)0)))) {
Y_TICK();
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8359)))).f_b), F.p3450)) {
{ rt_int rv8367 = 1;
y_use = F.yu; return rv8367; }
}
F.v8359 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8359)))).f_next);
}
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_c), F.p3450)) {
{ rt_int rv8369 = 1;
y_use = F.yu; return rv8369; }
}
} else if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v744)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v747))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v750)))) {
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_b), F.p3450)) {
{ rt_int rv8371 = 1;
y_use = F.yu; return rv8371; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_kind) == v753)) {
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_a)))).f_c), F.p3450)) {
{ rt_int rv8373 = 1;
y_use = F.yu; return rv8373; }
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_a)))).f_b) == ((void *)0)))) {
F.v8359 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_a)))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8359) == ((void *)0)))) {
Y_TICK();
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8359)))).f_b), F.p3450)) {
{ rt_int rv8375 = 1;
y_use = F.yu; return rv8375; }
}
F.v8359 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8359)))).f_next);
}
if (yr3448_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_a)))).f_b)))).f_b), F.p3450)) {
{ rt_int rv8377 = 1;
y_use = F.yu; return rv8377; }
}
}
}
F.v8357 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8357)))).f_next);
}
{ rt_int rv8379 = 0;
y_use = F.yu; return rv8379; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3455_Statements(void * a_p3456) {
struct yf3457 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3456 = a_p3456;
F.v8383 = Y_UNDEF_P;
F.v8383 = F.p3456;
while ((!(Y_DEFP(F.v8383) == ((void *)0)))) {
Y_TICK();
yr3479_Statement(Y_DEFP(F.v8383));
F.v8383 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8383)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3461_Cond(void * a_p3462) {
struct yf3463 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3462 = a_p3462;
F.v8387 = Y_UNDEF_I;
F.v8389 = Y_UNDEF_P;
yr3068_Expr(F.p3462, Y_DEFP(v1344), &F.v8387, &F.v8389);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3462))).f_line), Y_DEFP(v1344), Y_DEFP(F.v8389));
{ rt_int rv8390 = Y_DEFI(F.v8387);
y_use = F.yu; return rv8390; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3467_Label(void * a_p3468, void * a_p3469) {
struct yf3470 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3468 = a_p3468;
F.p3469 = a_p3469;
F.v8395 = Y_UNDEF_I;
F.v8397 = Y_UNDEF_I;
F.v8399 = Y_UNDEF_P;
F.v8401 = Y_UNDEF_P;
F.v8403 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR105 *)y_deref(F.p3468))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3468))).f_d) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3469))).f_kind) == v816)))) {
F.v8399 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3468))).f_name), F.p3469);
if ((!(Y_DEFP(F.v8399) == ((void *)0)))) {
{ rt_int rv8404 = Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v8399))))).f_mval);
y_use = F.yu; return rv8404; }
}
}
yr3068_Expr(F.p3468, F.p3469, &F.v8403, &F.v8401);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3468))).f_line), F.p3469, Y_DEFP(F.v8401));
yr2920_Manifest(F.p3468, &F.v8395, &F.v8397);
if ((!Y_DEFI(F.v8395))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3468))).f_line), y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv8406 = Y_DEFI(F.v8397);
y_use = F.yu; return rv8406; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3474_CopyOut(void) {
struct yf3475 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8409 = Y_UNDEF_P;
F.v8411 = Y_UNDEF_I;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
F.v8409 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_params);
while ((!(Y_DEFP(F.v8409) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_cls) == v900)) {
yr1026_SB();
yr1037_SA(y_str("(*F.", 4));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_cname));
yr1037_SA(y_str("_o)", 3));
F.v8411 = yr1056_SE();
if ((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_path) == INT64_C(0)))) {
yr3324_Assign(Y_DEFI(F.v8411), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_rep), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_path), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_rep), INT64_C(0));
} else {
yr3324_Assign(Y_DEFI(F.v8411), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_rep), yr2457_Path(Y_DEFI(v1279), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_cname)), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_rep), INT64_C(0));
}
}
F.v8409 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8409)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3479_Statement(void * a_p3480) {
struct yf3481 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3480 = a_p3480;
F.v8420 = Y_UNDEF_I;
F.v8420 = Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_kind);
F.v8422 = Y_UNDEF_I;
F.v8424 = Y_UNDEF_I;
F.v8426 = Y_UNDEF_I;
F.v8428 = Y_UNDEF_I;
F.v8430 = Y_UNDEF_I;
F.v8432 = Y_UNDEF_I;
F.v8434 = Y_UNDEF_P;
F.v8436 = Y_UNDEF_P;
F.v8438 = Y_UNDEF_P;
F.v8440 = Y_UNDEF_P;
F.v8442 = Y_UNDEF_I;
F.v8444 = Y_UNDEF_I;
F.v8446 = Y_UNDEF_I;
F.v8448 = Y_UNDEF_I;
F.v8450 = Y_UNDEF_P;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_text) == INT64_C(0)))) {
yr3511_PlaceLabel(F.p3480);
}
if ((Y_DEFI(F.v8420) == v714)) {
yr3041_LValue(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a), &F.v8422, &F.v8434);
yr3035_CheckPure(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a));
yr3546_NoteWrite(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8434)))).f_kind) == v837)) || yr2539_HoldsSignal(Y_DEFP(F.v8434)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2545_NonAssignable(Y_DEFP(F.v8434))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_b), Y_DEFP(F.v8434), &F.v8424, &F.v8436);
F.v8426 = yr3314_UserAssign(Y_DEFI(F.v8422), Y_DEFP(F.v8434), Y_DEFI(F.v8424), Y_DEFP(F.v8436), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line));
if ((!(Y_DEFI(F.v8426) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v8426));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8434)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8434)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8434)))).f_tname), y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr3019_Store(Y_DEFI(F.v8422), Y_DEFP(F.v8434), Y_DEFI(F.v8424), Y_DEFP(F.v8436), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line));
}
} else if ((Y_DEFI(F.v8420) == v717)) {
F.v8450 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a)))).f_name));
if ((!(Y_DEFP(F.v8450) == ((void *)0)))) {
F.v8450 = yr2483_Real(Y_DEFP(F.v8450));
}
if (((((!(Y_DEFP(F.v8450) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8450)))).f_kind) == v885))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8450)))).f_hasmv))) {
yr3240_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a)))).f_a), Y_DEFP(F.v8450), &F.v8446, &F.v8448);
yr3862_CheckLifeScope(Y_DEFP(F.v8450), Y_DEFI(F.v8446), Y_DEFI(F.v8448));
yr1132_Emit(yr3491_Join(yr3264_CallCode(Y_DEFP(F.v8450), Y_DEFI(F.v8446), Y_DEFI(F.v8448), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line)), yr1061_T(y_str(";", 1)), INT64_C(0)));
} else if ((((!(Y_DEFP(F.v8450) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8450)))).f_kind) == v885)))) {
yr3855_Activate(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a), Y_DEFP(F.v8450));
} else {
yr3334_CallExpr(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a), ((void *)0), 1, &F.v8422, &F.v8434);
yr3361_Emit2(y_str("", 0), Y_DEFI(F.v8422));
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8422));
yr1037_SA(y_str(";", 1));
F.v8426 = yr1056_SE();
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = Y_DEFI(F.v8426);
}
} else if ((Y_DEFI(F.v8420) == v738)) {
F.v8442 = 1;
F.v8438 = Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a);
while ((!(Y_DEFP(F.v8438) == ((void *)0)))) {
Y_TICK();
F.v8422 = yr3461_Cond(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_a));
if (Y_DEFI(F.v8442)) {
yr3369_Emit3(y_str("if (", 4), Y_DEFI(F.v8422), y_str(") {", 3));
} else {
yr3369_Emit3(y_str("} else if (", 11), Y_DEFI(F.v8422), y_str(") {", 3));
}
F.v8442 = 0;
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_b));
F.v8438 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_flag) == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_b));
}
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8420) == v744)) {
F.v8422 = yr3461_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a));
yr3369_Emit3(y_str("while (", 7), Y_DEFI(F.v8422), y_str(") {", 3));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_b));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8420) == v750)) {
F.v8428 = yr1200_Fresh(y_str("yl_", 3));
v1668 = y_range(y_add(Y_DEFI(v1668), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1653).p)[y_ix1(v1653, Y_DEFI(v1668))] = Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name);
((rt_int *)(v1655).p)[y_ix1(v1655, Y_DEFI(v1668))] = Y_DEFI(F.v8428);
((rt_int *)(v1666).p)[y_ix1(v1666, Y_DEFI(v1668))] = Y_DEFI(v1599);
yr1138_EmitS(y_str("for (;;) {", 10));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_b));
yr1138_EmitS(y_str("}", 1));
yr3369_Emit3(y_str("", 0), Y_DEFI(F.v8428), y_str(": ;", 3));
v1668 = y_range(y_sub(Y_DEFI(v1668), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v8420) == v726)) {
F.v8444 = 0;
F.v8446 = Y_DEFI(v1668);
while ((((Y_DEFI(F.v8446) > Y_DEFI(v1671))) && (!Y_DEFI(F.v8444)))) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v1653).p)[y_ix1(v1653, Y_DEFI(F.v8446))]) == Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name))) {
F.v8444 = 1;
yr3379_PopTo(Y_DEFI(((rt_int *)(v1666).p)[y_ix1(v1666, Y_DEFI(F.v8446))]));
yr3369_Emit3(y_str("goto ", 5), Y_DEFI(((rt_int *)(v1655).p)[y_ix1(v1655, Y_DEFI(F.v8446))]), y_str(";", 1));
}
F.v8446 = y_range(y_sub(Y_DEFI(F.v8446), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!Y_DEFI(F.v8444))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name), y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((Y_DEFI(F.v8420) == v747)) {
yr3485_ForStatement(F.p3480);
} else if ((Y_DEFI(F.v8420) == v741)) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a), ((void *)0), &F.v8422, &F.v8434);
if ((!yr2502_IsDiscrete(Y_DEFP(F.v8434)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3423_CheckCaseLabels(F.p3480, Y_DEFP(F.v8434));
yr3369_Emit3(y_str("switch (", 8), Y_DEFI(F.v8422), y_str(") {", 3));
F.v8438 = Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_b);
while ((!(Y_DEFP(F.v8438) == ((void *)0)))) {
Y_TICK();
F.v8440 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_a);
while ((!(Y_DEFP(F.v8440) == ((void *)0)))) {
Y_TICK();
F.v8448 = yr3467_Label(Y_DEFP(F.v8440), Y_DEFP(F.v8434));
yr1026_SB();
yr1037_SA(y_str("case ", 5));
yr1050_SI(Y_DEFI(F.v8448));
yr1037_SA(y_str(":", 1));
F.v8426 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8426));
F.v8440 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8440)))).f_next);
}
yr1138_EmitS(y_str("{", 1));
v1689 = y_range(y_add(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1685).p)[y_ix1(v1685, Y_DEFI(v1689))] = Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a);
((void * *)(v1687).p)[y_ix1(v1687, Y_DEFI(v1689))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_a);
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_b));
v1689 = y_range(y_sub(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
F.v8438 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8438)))).f_next);
}
yr1138_EmitS(y_str("default: {", 10));
v1689 = y_range(y_add(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1685).p)[y_ix1(v1685, Y_DEFI(v1689))] = Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a);
((void * *)(v1687).p)[y_ix1(v1687, Y_DEFI(v1689))] = ((void *)0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_flag) == INT64_C(1))) {
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_c));
}
v1689 = y_range(y_sub(Y_DEFI(v1689), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8420) == v729)) {
yr3499_ReturnStatement(F.p3480);
} else if ((Y_DEFI(F.v8420) == v735)) {
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name) == INT64_C(0))) {
if ((Y_DEFI(v1641) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3369_Emit3(y_str("rt_raise(", 9), Y_DEFI(((rt_int *)(v1639).p)[y_ix1(v1639, Y_DEFI(v1641))]), y_str(");", 2));
} else {
yr3385_LeaveBlock();
yr1132_Emit(yr3390_RaiseCode(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_name)));
}
} else if ((((Y_DEFI(F.v8420) == v720)) && yr3308_Suppressed(v1486))) {
F.v8446 = INT64_C(0);
} else if ((Y_DEFI(F.v8420) == v720)) {
F.v8446 = Y_DEFI(v1706);
F.v8422 = yr3461_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3480))).f_a));
if ((!(Y_DEFI(v1706) == Y_DEFI(F.v8446)))) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3369_Emit3(y_str("if (!(", 6), Y_DEFI(F.v8422), y_str(")) {", 4));
yr3385_LeaveBlock();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((Y_DEFI(F.v8420) == v753)) {
yr3505_BeginStatement(F.p3480);
} else if ((Y_DEFI(F.v8420) == v732)) {
yr3893_TerminateStatement(F.p3480);
} else if ((Y_DEFI(F.v8420) == v723)) {
yr3517_GotoStatement(F.p3480);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3480))).f_line), y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3485_ForStatement(void * a_p3486) {
struct yf3487 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3486 = a_p3486;
F.v8527 = Y_UNDEF_P;
F.v8529 = Y_UNDEF_I;
F.v8531 = Y_UNDEF_I;
F.v8533 = Y_UNDEF_I;
F.v8535 = Y_UNDEF_P;
F.v8527 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3486))).f_a), INT64_C(0), 0);
if ((((!yr2502_IsDiscrete(Y_DEFP(F.v8527))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8527)))).f_kind) == v813))) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8527)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8527)))).f_ordered)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3486))).f_line), y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2592_CheckRepresented(Y_DEFP(F.v8527), Y_DEFI(((*(yR105 *)y_deref(F.p3486))).f_line));
yr2355_OpenScope(0);
F.v8535 = yr2348_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(F.p3486))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v8535)))).f_rep = Y_DEFP(F.v8527);
((*(yR125 *)y_deref(Y_DEFP(F.v8535)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v8535)))).f_cname = yr1200_Fresh(y_str("c_", 2));
yr2470_DeclStorage(yr1061_T(y_str("rt_int", 6)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8535)))).f_cname));
yr2450_Define(Y_DEFP(F.v8535), Y_DEFI(((*(yR105 *)y_deref(F.p3486))).f_line));
F.v8529 = yr1200_Fresh(y_str("i", 1));
F.v8531 = yr1200_Fresh(y_str("hi", 2));
yr1026_SB();
yr1037_SA(y_str("{ rt_int ", 9));
yr1044_ST(Y_DEFI(F.v8531));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2638_HiText(Y_DEFP(F.v8527)));
yr1037_SA(y_str(";", 1));
F.v8533 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8533));
yr1026_SB();
yr1037_SA(y_str("for (rt_int ", 12));
yr1044_ST(Y_DEFI(F.v8529));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2632_LoText(Y_DEFP(F.v8527)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8529));
yr1037_SA(y_str(" <= ", 4));
yr1044_ST(Y_DEFI(F.v8531));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8529));
yr1037_SA(y_str("++) { ", 6));
yr1044_ST(yr2477_SymPath(Y_DEFP(F.v8535)));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v8529));
yr1037_SA(y_str("; Y_TICK();", 11));
F.v8533 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8533));
yr3455_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3486))).f_b));
yr3369_Emit3(y_str("if (", 4), Y_DEFI(F.v8529), y_str(" == ", 4));
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = yr3491_Join(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t), Y_DEFI(F.v8531), yr1061_T(y_str(") break;", 8)));
yr1138_EmitS(y_str("}}", 2));
yr2367_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3491_Join(rt_int a_p3492, rt_int a_p3493, rt_int a_p3494) {
struct yf3495 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3492 = a_p3492;
F.p3493 = a_p3493;
F.p3494 = a_p3494;
yr1026_SB();
yr1044_ST(F.p3492);
yr1044_ST(F.p3493);
yr1044_ST(F.p3494);
{ rt_int rv8563 = yr1056_SE();
y_use = F.yu; return rv8563; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3499_ReturnStatement(void * a_p3500) {
struct yf3501 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3500 = a_p3500;
F.v8567 = Y_UNDEF_I;
F.v8569 = Y_UNDEF_I;
F.v8571 = Y_UNDEF_I;
F.v8573 = Y_UNDEF_P;
F.v8575 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3500))).f_line), y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_kind) == v885)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3500))).f_line), y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v8575 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_ret);
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3500))).f_a) == ((void *)0))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8575)))).f_kind) == v852))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3500))).f_line), y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3474_CopyOut();
yr3888_LeaveMonitor();
yr3379_PopTo(Y_DEFI(v1602));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8575)))).f_kind) == v852)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3500))).f_line), y_str("this routine returns no value (IX.A.6)", 38));
}
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3500))).f_a), Y_DEFP(F.v8575), &F.v8567, &F.v8573);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3500))).f_line), Y_DEFP(F.v8575), Y_DEFP(F.v8573));
F.v8571 = yr1200_Fresh(y_str("rv", 2));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2551_CType(Y_DEFP(F.v8575)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v8571));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr3001_Convert(Y_DEFI(F.v8567), Y_DEFP(F.v8575), Y_DEFP(F.v8573)));
yr1037_SA(y_str(";", 1));
F.v8569 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8569));
yr3474_CopyOut();
yr3888_LeaveMonitor();
yr3379_PopTo(Y_DEFI(v1602));
yr3369_Emit3(y_str("y_use = F.yu; return ", 21), Y_DEFI(F.v8571), y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3505_BeginStatement(void * a_p3506) {
struct yf3507 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3506 = a_p3506;
F.v8591 = Y_UNDEF_I;
F.v8593 = Y_UNDEF_I;
yr1138_EmitS(y_str("{", 1));
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3506))).f_flag) == INT64_C(1))) {
F.v8591 = yr1200_Fresh(y_str("sf", 2));
F.v8593 = yr1200_Fresh(y_str("ys", 2));
v1703 = 1;
yr1132_Emit(yr3491_Join(yr1061_T(y_str("int ", 4)), Y_DEFI(F.v8593), yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v8591), yr1061_T(y_str(";", 1))));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), Y_DEFI(F.v8591), yr3491_Join(yr1061_T(y_str(")) { RT_POP(", 12)), Y_DEFI(F.v8591), yr3491_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8593), yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1599 = y_range(y_add(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1572).p)[y_ix1(v1572, Y_DEFI(v1599))] = Y_DEFI(F.v8591);
((rt_int *)(v1583).p)[y_ix1(v1583, Y_DEFI(v1599))] = yr3491_Join(yr1061_T(y_str("y_sim_depth = ", 14)), Y_DEFI(F.v8593), yr1061_T(y_str(";", 1)));
v1596 = y_range(y_add(Y_DEFI(v1596), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1594).p)[y_ix1(v1594, Y_DEFI(v1596))] = Y_DEFI(F.v8593);
}
yr2355_OpenScope(0);
yr3718_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3506))).f_a)))).f_a));
yr3396_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3506))).f_a));
yr3850_AwaitProcesses();
yr2367_CloseScope();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3506))).f_flag) == INT64_C(1))) {
v1596 = y_range(y_sub(Y_DEFI(v1596), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1599 = y_range(y_sub(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("RT_POP(", 7)), Y_DEFI(F.v8591), yr3491_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8593), yr1061_T(y_str(";", 1)))));
}
yr1138_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3511_PlaceLabel(void * a_p3512) {
struct yf3513 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3512 = a_p3512;
F.v8626 = Y_UNDEF_P;
F.v8626 = yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3512))).f_text));
if ((((Y_DEFP(F.v8626) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8626)))).f_kind) == v888))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3512))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3512))).f_text), y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8626)))).f_hasmv)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3512))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3512))).f_text), y_str(" labels two statements", 22));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8626)))).f_hasmv = 1;
yr3369_Emit3(y_str("", 0), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8626)))).f_cname), y_str(": ;", 3));
if ((!(Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]) == INT64_C(0)))) {
yr3369_Emit3(y_str("rt_xtop = &", 11), Y_DEFI(((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))]), y_str(";", 1));
} else if ((!(Y_DEFI(((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))]) == INT64_C(0)))) {
yr3369_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))]), y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3517_GotoStatement(void * a_p3518) {
struct yf3519 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3518 = a_p3518;
F.v8641 = Y_UNDEF_P;
F.v8641 = yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3518))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3518))).f_line));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8641)))).f_kind) == v888))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3518))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3518))).f_name), y_str(" is not a label", 15));
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8641)))).f_level) == Y_DEFI(v1279)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3518))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3518))).f_name), y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8641)))).f_readonly = 1;
yr1138_EmitS(y_str("Y_TICK();", 9));
if ((Y_DEFI(v1596) > Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8641)))).f_mval))) {
yr3369_Emit3(y_str("y_sim_depth = ", 14), Y_DEFI(((rt_int *)(v1594).p)[y_ix1(v1594, y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8641)))).f_mval), INT64_C(1)))]), y_str(";", 1));
}
yr3369_Emit3(y_str("goto ", 5), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8641)))).f_cname), y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3523_CheckLabels(void * a_p3524) {
struct yf3525 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3524 = a_p3524;
F.v8655 = Y_UNDEF_P;
F.v8655 = F.p3524;
F.v8657 = Y_UNDEF_P;
F.v8659 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8655) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8655)))).f_kind) == v645)) {
F.v8657 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8655)))).f_a);
while ((!(Y_DEFP(F.v8657) == ((void *)0)))) {
Y_TICK();
F.v8659 = yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8657)))).f_name));
if ((((((!(Y_DEFP(F.v8659) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8659)))).f_kind) == v888))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8659)))).f_readonly)) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8659)))).f_hasmv)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8657)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8657)))).f_name), y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v8657 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8657)))).f_next);
}
}
F.v8655 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8655)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3529_DesigBase(void * a_p3530, void * * a_p3531, rt_int * a_p3532, rt_int * a_p3533) {
struct yf3534 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3530 = a_p3530;
F.p3531_o = a_p3531;
F.p3532_o = a_p3532;
F.p3533_o = a_p3533;
F.v8667 = Y_UNDEF_P;
F.v8667 = F.p3530;
F.v8669 = Y_UNDEF_P;
F.p3531 = ((void *)0);
F.p3532 = 0;
F.p3533 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_kind) == v786)))) {
F.v8667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_a);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_kind) == v789)) {
if ((!Y_DEFI(F.p3532))) {
F.p3532 = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_a)))).f_rep) == ((void *)0)))) {
F.p3533 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_a)))).f_rep)))).f_tid);
}
}
F.v8667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_a);
} else {
goto yl_8672;
}
}
yl_8672: ;
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_d) == ((void *)0))))) {
F.v8669 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8667)))).f_name));
if ((!(Y_DEFP(F.v8669) == ((void *)0)))) {
if (yr2431_Resolved(Y_DEFP(F.v8669))) {
F.v8669 = yr2483_Real(Y_DEFP(F.v8669));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8669)))).f_kind) == v861)) {
F.p3531 = Y_DEFP(F.v8669);
}
}
}
}
(*F.p3531_o) = F.p3531;
(*F.p3532_o) = F.p3532;
(*F.p3533_o) = F.p3533;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3538_Note(void * a_p3539, rt_int a_p3540, rt_int a_p3541) {
struct yf3542 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3539 = a_p3539;
F.p3540 = a_p3540;
F.p3541 = a_p3541;
F.v8679 = Y_UNDEF_P;
F.v8679 = yr2029_NewNode(v669, F.p3541);
((*(yR105 *)y_deref(Y_DEFP(F.v8679)))).f_sym = F.p3539;
((*(yR105 *)y_deref(Y_DEFP(F.v8679)))).f_name = F.p3540;
{ void * rv8680 = Y_DEFP(F.v8679);
y_use = F.yu; return rv8680; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3546_NoteWrite(void * a_p3547) {
struct yf3548 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3547 = a_p3547;
F.v8684 = Y_UNDEF_P;
F.v8686 = Y_UNDEF_I;
F.v8688 = Y_UNDEF_I;
F.v8690 = Y_UNDEF_P;
F.v8692 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
yr3529_DesigBase(F.p3547, &F.v8684, &F.v8686, &F.v8688);
if (Y_DEFI(F.v8686)) {
F.v8684 = ((void *)0);
} else if ((((Y_DEFP(F.v8684) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8684)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))))) {
y_use = F.yu; return;
}
F.v8690 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_writes);
while ((!(Y_DEFP(F.v8690) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8690)))).f_sym) == Y_DEFP(F.v8684))) {
y_use = F.yu; return;
}
F.v8690 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8690)))).f_next);
}
F.v8692 = yr3538_Note(Y_DEFP(F.v8684), INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(F.p3547))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8692)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_writes);
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_writes = Y_DEFP(F.v8692);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3552_NoteFree(void * a_p3553) {
struct yf3554 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3553 = a_p3553;
F.v8697 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3553))).f_kind) == v861))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p3553))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3553))).f_seen) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_serial))) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3553))).f_seen = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_serial);
F.v8697 = yr3538_Note(F.p3553, INT64_C(0), Y_DEFI(v1000));
((*(yR105 *)y_deref(Y_DEFP(F.v8697)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees = Y_DEFP(F.v8697);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3558_NoteFreeDeref(void * a_p3559, rt_int a_p3560) {
struct yf3561 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3559 = a_p3559;
F.p3560 = a_p3560;
F.v8703 = Y_UNDEF_P;
F.v8705 = Y_UNDEF_I;
F.v8707 = Y_UNDEF_I;
F.v8709 = Y_UNDEF_P;
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
yr3529_DesigBase(F.p3559, &F.v8703, &F.v8705, &F.v8707);
if ((((Y_DEFP(F.v8703) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8703)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_level))))) {
y_use = F.yu; return;
}
F.v8709 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees);
while ((!(Y_DEFP(F.v8709) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8709)))).f_sym) == ((void *)0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8709)))).f_name) == F.p3560)))) {
y_use = F.yu; return;
}
F.v8709 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8709)))).f_next);
}
F.v8709 = yr3538_Note(((void *)0), F.p3560, Y_DEFI(((*(yR105 *)y_deref(F.p3559))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8709)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_frees = Y_DEFP(F.v8709);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3565_DSteps(void * a_p3566, yarr * a_p3567) {
struct yf3568 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3566 = a_p3566;
F.p3567 = a_p3567;
F.v8714 = Y_UNDEF_P;
F.v8714 = F.p3566;
F.v8716 = Y_UNDEF_I;
F.v8716 = INT64_C(0);
F.v8719 = Y_UNDEF_P;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8714)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8714)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8714)))).f_kind) == v786)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8714)))).f_kind) == v801))) {
if ((Y_DEFI(F.v8716) < INT64_C(64))) {
F.v8716 = y_range(y_add(Y_DEFI(F.v8716), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3567)).p)[y_ix1((*F.p3567), Y_DEFI(F.v8716))] = Y_DEFP(F.v8714);
}
}
F.v8714 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8714)))).f_a);
}
F.lo8728 = INT64_C(1);
F.hi8729 = y_div(Y_DEFI(F.v8716), INT64_C(2));
{ rt_int hi8733 = F.hi8729;
for (rt_int i8732 = F.lo8728; i8732 <= hi8733; i8732++) { F.c_8731 = i8732; Y_TICK();
F.v8719 = Y_DEFP(((void * *)((*F.p3567)).p)[y_ix1((*F.p3567), F.c_8731)]);
((void * *)((*F.p3567)).p)[y_ix1((*F.p3567), F.c_8731)] = Y_DEFP(((void * *)((*F.p3567)).p)[y_ix1((*F.p3567), y_sub((y_add(Y_DEFI(F.v8716), INT64_C(1))), F.c_8731))]);
((void * *)((*F.p3567)).p)[y_ix1((*F.p3567), y_sub((y_add(Y_DEFI(F.v8716), INT64_C(1))), F.c_8731))] = Y_DEFP(F.v8719);
if (i8732 == hi8733) break;
}}
{ rt_int rv8740 = Y_DEFI(F.v8716);
y_use = F.yu; return rv8740; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3572_Overlaps(void * a_p3573, void * a_p3574) {
struct yf3575 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3573 = a_p3573;
F.p3574 = a_p3574;
F.v8745 = Y_UNDEF_P;
F.v8747 = Y_UNDEF_P;
F.v8749 = Y_UNDEF_I;
F.v8751 = Y_UNDEF_I;
F.v8753 = Y_UNDEF_I;
F.v8755 = Y_UNDEF_I;
F.v8757 = Y_UNDEF_I;
F.v8759 = Y_UNDEF_I;
F.v8761 = Y_UNDEF_I;
F.v8763 = Y_UNDEF_I;
y_initu(&yd_201, &F.v8765);
y_initu(&yd_201, &F.v8767);
F.v8769 = Y_UNDEF_I;
F.v8771 = Y_UNDEF_I;
F.v8773 = Y_UNDEF_I;
F.v8775 = Y_UNDEF_I;
F.v8777 = Y_UNDEF_P;
F.v8779 = Y_UNDEF_P;
F.v8781 = Y_UNDEF_P;
F.v8783 = Y_UNDEF_P;
yr3529_DesigBase(F.p3573, &F.v8745, &F.v8749, &F.v8761);
yr3529_DesigBase(F.p3574, &F.v8747, &F.v8751, &F.v8763);
if ((!(Y_DEFI(F.v8749) == Y_DEFI(F.v8751)))) {
if (((Y_DEFI(F.v8749) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3573))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_rep)))).f_tid) == Y_DEFI(F.v8761))))) {
{ rt_int rv8785 = 1;
y_use = F.yu; return rv8785; }
}
}
if (((Y_DEFI(F.v8751) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3573))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3573))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3573))).f_rep)))).f_tid) == Y_DEFI(F.v8763))))) {
{ rt_int rv8787 = 1;
y_use = F.yu; return rv8787; }
}
}
{ rt_int rv8789 = 0;
y_use = F.yu; return rv8789; }
}
if (Y_DEFI(F.v8749)) {
if ((!(Y_DEFI(F.v8761) == Y_DEFI(F.v8763)))) {
{ rt_int rv8791 = 0;
y_use = F.yu; return rv8791; }
}
} else if ((((Y_DEFP(F.v8745) == ((void *)0))) || ((!(Y_DEFP(F.v8745) == Y_DEFP(F.v8747)))))) {
{ rt_int rv8793 = 0;
y_use = F.yu; return rv8793; }
}
F.v8769 = yr3565_DSteps(F.p3573, &F.v8765);
F.v8771 = yr3565_DSteps(F.p3574, &F.v8767);
F.lo8797 = INT64_C(1);
F.hi8798 = Y_DEFI(F.v8769);
{ rt_int hi8802 = F.hi8798;
for (rt_int i8801 = F.lo8797; i8801 <= hi8802; i8801++) { F.c_8800 = i8801; Y_TICK();
if ((F.c_8800 <= Y_DEFI(F.v8771))) {
F.v8777 = Y_DEFP(((void * *)(F.v8765).p)[y_ix1(F.v8765, F.c_8800)]);
F.v8779 = Y_DEFP(((void * *)(F.v8767).p)[y_ix1(F.v8767, F.c_8800)]);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8777)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8779)))).f_kind)))) {
{ rt_int rv8804 = 1;
y_use = F.yu; return rv8804; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8777)))).f_kind) == v783)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8777)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8779)))).f_name)))) {
{ rt_int rv8806 = 0;
y_use = F.yu; return rv8806; }
}
} else {
F.v8757 = 1;
F.v8759 = 0;
F.v8781 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8777)))).f_b);
F.v8783 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8779)))).f_b);
while ((((!(Y_DEFP(F.v8781) == ((void *)0)))) && ((!(Y_DEFP(F.v8783) == ((void *)0)))))) {
Y_TICK();
yr2920_Manifest(Y_DEFP(F.v8781), &F.v8753, &F.v8773);
yr2920_Manifest(Y_DEFP(F.v8783), &F.v8755, &F.v8775);
if ((Y_DEFI(F.v8753) && Y_DEFI(F.v8755))) {
if ((!(Y_DEFI(F.v8773) == Y_DEFI(F.v8775)))) {
F.v8759 = 1;
}
} else {
F.v8757 = 0;
}
F.v8781 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8781)))).f_next);
F.v8783 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8783)))).f_next);
}
if ((!Y_DEFI(F.v8757))) {
{ rt_int rv8812 = 1;
y_use = F.yu; return rv8812; }
}
if (Y_DEFI(F.v8759)) {
{ rt_int rv8814 = 0;
y_use = F.yu; return rv8814; }
}
}
}
if (i8801 == hi8802) break;
}}
{ rt_int rv8816 = 1;
y_use = F.yu; return rv8816; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3579_CheckActuals(void * a_p3580, rt_int a_p3581, rt_int a_p3582) {
struct yf3583 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3580 = a_p3580;
F.p3581 = a_p3581;
F.p3582 = a_p3582;
F.v8822 = Y_UNDEF_P;
F.v8824 = Y_UNDEF_P;
F.v8826 = Y_UNDEF_I;
F.v8828 = Y_UNDEF_I;
F.v8830 = Y_UNDEF_P;
F.v8832 = Y_UNDEF_P;
F.v8834 = Y_UNDEF_P;
F.v8836 = Y_UNDEF_I;
F.v8838 = Y_UNDEF_I;
F.v8822 = Y_DEFP(((*(yR125 *)y_deref(F.p3580))).f_params);
F.v8826 = y_range(y_add(F.p3581, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8830 = ((void *)0);
while ((!(Y_DEFP(F.v8822) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_cls) == v897))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_rep)))).f_kind) == v855))))) {
F.v8824 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_next);
F.v8828 = y_range(y_add(Y_DEFI(F.v8826), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v8824) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_cls) == v903)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8824)))).f_cls) == v903)))) {
if (yr3572_Overlaps(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8826))]), Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8828))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8828))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8824)))).f_name), y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_cls) == v900)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8824)))).f_cls) == v900)))) {
if (yr3408_SameDesig(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8826))]), Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8828))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8828))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8824)))).f_name), y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v8824 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8824)))).f_next);
F.v8828 = y_range(y_add(Y_DEFI(F.v8828), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_cls) == v903)) {
yr3529_DesigBase(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8826))]), &F.v8834, &F.v8836, &F.v8838);
F.v8832 = yr3538_Note(Y_DEFP(F.v8834), Y_DEFI(F.v8838), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8826))])))).f_line));
if (Y_DEFI(F.v8836)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8832)))).f_flag = INT64_C(1);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v8826))])))).f_kind) == v789)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8832)))).f_ival = INT64_C(1);
}
if ((Y_DEFP(F.v8830) == ((void *)0))) {
F.v8830 = yr3538_Note(F.p3580, INT64_C(0), F.p3582);
((*(yR105 *)y_deref(Y_DEFP(F.v8830)))).f_next = Y_DEFP(v1758);
v1758 = Y_DEFP(F.v8830);
}
((*(yR105 *)y_deref(Y_DEFP(F.v8832)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8830)))).f_a);
((*(yR105 *)y_deref(Y_DEFP(F.v8830)))).f_a = Y_DEFP(F.v8832);
}
}
F.v8826 = y_range(y_add(Y_DEFI(F.v8826), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8822 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8822)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8971_At(struct yf3588 *up, rt_int a_p8972, rt_int a_p8973) {
struct yf8974 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8972 = a_p8972;
F.p8973 = a_p8973;
{ rt_int rv9001 = y_range(y_add((y_mul(F.p8972, (y_add(Y_DEFI(F.up->v8863), INT64_C(1))))), F.p8973), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv9001; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8978_Reaches(struct yf3588 *up, rt_int a_p8979, rt_int a_p8980) {
struct yf8981 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8979 = a_p8979;
F.p8980 = a_p8980;
F.v9006 = Y_UNDEF_P;
F.v9006 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8947).p)[y_ix1(F.up->v8947, F.p8980)])))).f_calls);
if (Y_DEFI(((rt_int *)(F.up->v8958).p)[y_ix1(F.up->v8958, F.p8980)])) {
{ rt_int rv9008 = 0;
y_use = F.yu; return rv9008; }
}
((rt_int *)(F.up->v8958).p)[y_ix1(F.up->v8958, F.p8980)] = 1;
while ((!(Y_DEFP(F.v9006) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9006)))).f_sym)))).f_vix) > INT64_C(0))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9006)))).f_sym)))).f_vix) == F.p8979)) {
{ rt_int rv9012 = 1;
y_use = F.yu; return rv9012; }
}
if (yr8978_Reaches(F.up, F.p8979, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9006)))).f_sym)))).f_vix))) {
{ rt_int rv9014 = 1;
y_use = F.yu; return rv9014; }
}
}
F.v9006 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9006)))).f_next);
}
{ rt_int rv9016 = 0;
y_use = F.yu; return rv9016; }
rt_raise(Y_X_NO_RETURN);
}
static void yr8985_WriteFacts(struct yf3588 *up) {
struct yf8986 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
y_initu(&yd_141, &F.v9019);
F.v9019 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v9021 = Y_UNDEF_I;
F.v9023 = Y_UNDEF_I;
F.v9025 = Y_UNDEF_P;
F.lo9029 = INT64_C(1);
F.hi9030 = Y_DEFI(F.up->v8860);
{ rt_int hi9034 = F.hi9030;
for (rt_int i9033 = F.lo9029; i9033 <= hi9034; i9033++) { F.c_9032 = i9033; Y_TICK();
F.v9025 = Y_DEFP(((void * *)(F.up->v8947).p)[y_ix1(F.up->v8947, F.c_9032)]);
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9025)))).f_skey) == INT64_C(0)))) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9025)))).f_hasmv)))) {
F.v9021 = 1;
F.v9023 = 0;
F.lo9041 = INT64_C(1);
F.hi9042 = Y_DEFI(F.up->v8863);
{ rt_int hi9046 = F.hi9042;
for (rt_int i9045 = F.lo9041; i9045 <= hi9046; i9045++) { F.c_9044 = i9045; Y_TICK();
if (Y_DEFI(((rt_int *)(F.up->v8901).p)[y_ix1(F.up->v8901, yr8971_At(F.up, y_range(F.c_9032, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9044, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])) {
F.v9021 = 0;
}
if (((Y_DEFI(((rt_int *)(F.up->v8903).p)[y_ix1(F.up->v8903, yr8971_At(F.up, y_range(F.c_9032, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9044, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFP(((void * *)(F.up->v8925).p)[y_ix1(F.up->v8925, F.c_9044)]) == ((void *)0)))) && ((!(F.c_9044 == INT64_C(1)))))) {
F.v9023 = 1;
}
if (i9045 == hi9046) break;
}}
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9025)))).f_skey));
if (Y_DEFI(F.v9021)) {
yr1037_SA(y_str(" P", 2));
} else {
yr1037_SA(y_str(" I", 2));
}
if (Y_DEFI(F.v9023)) {
yr1037_SA(y_str(" D", 2));
}
F.lo9056 = INT64_C(1);
F.hi9057 = Y_DEFI(F.up->v8863);
{ rt_int hi9061 = F.hi9057;
for (rt_int i9060 = F.lo9056; i9060 <= hi9061; i9060++) { F.c_9059 = i9060; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.up->v8903).p)[y_ix1(F.up->v8903, yr8971_At(F.up, y_range(F.c_9032, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9059, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.up->v8925).p)[y_ix1(F.up->v8925, F.c_9059)]) == ((void *)0)))))) {
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8925).p)[y_ix1(F.up->v8925, F.c_9059)])))).f_skey) == INT64_C(0)))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8925).p)[y_ix1(F.up->v8925, F.c_9059)])))).f_skey));
}
}
if (i9060 == hi9061) break;
}}
yr1110_Put(&F.v9019, yr1056_SE());
}
if (i9033 == hi9034) break;
}}
yr4024_WriteFile(yr4010_LibPath(Y_DEFI(v1724), y_str(".yfx", 4)), F.v9019);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8990_VName(struct yf3588 *up, rt_int a_p8991) {
struct yf8992 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8991 = a_p8991;
if ((Y_DEFP(((void * *)(F.up->v8925).p)[y_ix1(F.up->v8925, F.p8991)]) == ((void *)0))) {
{ rt_int rv9068 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv9068; }
}
{ rt_int rv9069 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8925).p)[y_ix1(F.up->v8925, F.p8991)])))).f_name);
y_use = F.yu; return rv9069; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3587_CheckEffects(void) {
struct yf3588 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8854 = Y_UNDEF_P;
F.v8856 = Y_UNDEF_P;
F.v8858 = Y_UNDEF_P;
F.v8860 = Y_UNDEF_I;
F.v8860 = INT64_C(0);
F.v8863 = Y_UNDEF_I;
F.v8863 = INT64_C(0);
F.v8866 = Y_UNDEF_I;
F.v8866 = INT64_C(0);
F.v8869 = Y_UNDEF_P;
F.v8866 = INT64_C(1);
F.v8863 = INT64_C(1);
F.v8854 = Y_DEFP(v1756);
while ((!(Y_DEFP(F.v8854) == ((void *)0)))) {
Y_TICK();
F.v8860 = y_range(y_add(Y_DEFI(F.v8860), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_sym)))).f_vix = Y_DEFI(F.v8860);
F.v8856 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_sym)))).f_writes);
while ((!(Y_DEFP(F.v8856) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix) == INT64_C(0))))) {
F.v8863 = y_range(y_add(Y_DEFI(F.v8863), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix = Y_DEFI(F.v8863);
}
F.v8856 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_next);
}
F.v8856 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_sym)))).f_frees);
while ((!(Y_DEFP(F.v8856) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym) == ((void *)0)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix) == INT64_C(0))) {
F.v8863 = y_range(y_add(Y_DEFI(F.v8863), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix = Y_DEFI(F.v8863);
}
} else if ((yr3592_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_name), Y_DEFI(F.v8863), 0) == INT64_C(0))) {
F.v8863 = y_range(y_add(Y_DEFI(F.v8863), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_ival = yr3592_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_name), Y_DEFI(F.v8863), 1);
}
F.v8856 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_next);
}
F.v8854 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_next);
}
if ((Y_DEFI(F.v8860) == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo8896 = INT64_C(0);
F.hi8897 = y_mul((y_add(Y_DEFI(F.v8860), INT64_C(1))), (y_add(Y_DEFI(F.v8863), INT64_C(1))));
{ rt_int lo[1] = {F.lo8896}, hi[1] = {F.hi8897}; y_desc_array(&F.yd_8899, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8899, &F.v8901);
y_initu(&F.yd_8899, &F.v8903);
F.lo8909 = INT64_C(0);
F.hi8910 = Y_DEFI(F.v8863);
{ rt_int lo[1] = {F.lo8909}, hi[1] = {F.hi8910}; y_desc_array(&F.yd_8912, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8912, &F.v8914);
F.lo8920 = INT64_C(0);
F.hi8921 = Y_DEFI(F.v8863);
{ rt_int lo[1] = {F.lo8920}, hi[1] = {F.hi8921}; y_desc_array(&F.yd_8923, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8923, &F.v8925);
F.lo8931 = INT64_C(0);
F.hi8932 = Y_DEFI(F.v8863);
{ rt_int lo[1] = {F.lo8931}, hi[1] = {F.hi8932}; y_desc_array(&F.yd_8934, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8934, &F.v8936);
F.lo8942 = INT64_C(0);
F.hi8943 = Y_DEFI(F.v8860);
{ rt_int lo[1] = {F.lo8942}, hi[1] = {F.hi8943}; y_desc_array(&F.yd_8945, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8945, &F.v8947);
F.lo8953 = INT64_C(0);
F.hi8954 = Y_DEFI(F.v8860);
{ rt_int lo[1] = {F.lo8953}, hi[1] = {F.hi8954}; y_desc_array(&F.yd_8956, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8956, &F.v8958);
F.v8960 = Y_UNDEF_I;
F.v8960 = 1;
F.v8963 = Y_UNDEF_I;
F.v8965 = Y_UNDEF_I;
F.v8967 = Y_UNDEF_I;
F.v8969 = Y_UNDEF_P;
F.lo9079 = INT64_C(0);
F.hi9080 = y_mul((y_add(Y_DEFI(F.v8860), INT64_C(1))), (y_add(Y_DEFI(F.v8863), INT64_C(1))));
{ rt_int hi9084 = F.hi9080;
for (rt_int i9083 = F.lo9079; i9083 <= hi9084; i9083++) { F.c_9082 = i9083; Y_TICK();
((rt_int *)(F.v8901).p)[y_ix1(F.v8901, F.c_9082)] = 0;
((rt_int *)(F.v8903).p)[y_ix1(F.v8903, F.c_9082)] = 0;
if (i9083 == hi9084) break;
}}
F.lo9090 = INT64_C(0);
F.hi9091 = Y_DEFI(F.v8863);
{ rt_int hi9095 = F.hi9091;
for (rt_int i9094 = F.lo9090; i9094 <= hi9095; i9094++) { F.c_9093 = i9094; Y_TICK();
((rt_int *)(F.v8914).p)[y_ix1(F.v8914, F.c_9093)] = INT64_C(-1);
((void * *)(F.v8925).p)[y_ix1(F.v8925, F.c_9093)] = ((void *)0);
((rt_int *)(F.v8936).p)[y_ix1(F.v8936, F.c_9093)] = INT64_C(0);
if (i9094 == hi9095) break;
}}
F.lo9101 = INT64_C(0);
F.hi9102 = Y_DEFI(F.v8860);
{ rt_int hi9106 = F.hi9102;
for (rt_int i9105 = F.lo9101; i9105 <= hi9106; i9105++) { F.c_9104 = i9105; Y_TICK();
((rt_int *)(F.v8958).p)[y_ix1(F.v8958, F.c_9104)] = 0;
if (i9105 == hi9106) break;
}}
F.v8854 = Y_DEFP(v1756);
while ((!(Y_DEFP(F.v8854) == ((void *)0)))) {
Y_TICK();
F.v8869 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_sym);
((void * *)(F.v8947).p)[y_ix1(F.v8947, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_vix))] = Y_DEFP(F.v8869);
F.v8856 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_writes);
while ((!(Y_DEFP(F.v8856) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym) == ((void *)0))) {
F.v8965 = INT64_C(1);
} else {
F.v8965 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix);
}
((rt_int *)(F.v8901).p)[y_ix1(F.v8901, yr8971_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_vix), Y_DEFI(F.v8965)))] = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym) == ((void *)0)))) {
((rt_int *)(F.v8914).p)[y_ix1(F.v8914, Y_DEFI(F.v8965))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_level);
((void * *)(F.v8925).p)[y_ix1(F.v8925, Y_DEFI(F.v8965))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym);
}
F.v8856 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_next);
}
F.v8856 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_frees);
while ((!(Y_DEFP(F.v8856) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym) == ((void *)0))) {
F.v8965 = yr3592_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_name), INT64_C(0), 0);
((rt_int *)(F.v8936).p)[y_ix1(F.v8936, Y_DEFI(F.v8965))] = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_name);
} else {
F.v8965 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix);
((rt_int *)(F.v8914).p)[y_ix1(F.v8914, Y_DEFI(F.v8965))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_level);
((void * *)(F.v8925).p)[y_ix1(F.v8925, Y_DEFI(F.v8965))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym);
}
((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_vix), Y_DEFI(F.v8965)))] = 1;
F.v8856 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_next);
}
F.v8854 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_next);
}
while (Y_DEFI(F.v8960)) {
Y_TICK();
F.v8960 = 0;
F.lo9117 = INT64_C(1);
F.hi9118 = Y_DEFI(F.v8860);
{ rt_int hi9122 = F.hi9118;
for (rt_int i9121 = F.lo9117; i9121 <= hi9122; i9121++) { F.c_9120 = i9121; Y_TICK();
F.v8858 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8947).p)[y_ix1(F.v8947, F.c_9120)])))).f_calls);
while ((!(Y_DEFP(F.v8858) == ((void *)0)))) {
Y_TICK();
F.v8967 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8967) > INT64_C(0))) {
F.lo9127 = INT64_C(1);
F.hi9128 = Y_DEFI(F.v8863);
{ rt_int hi9132 = F.hi9128;
for (rt_int i9131 = F.lo9127; i9131 <= hi9132; i9131++) { F.c_9130 = i9131; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8914).p)[y_ix1(F.v8914, F.c_9130)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8947).p)[y_ix1(F.v8947, F.c_9120)])))).f_level))) {
if ((Y_DEFI(((rt_int *)(F.v8901).p)[y_ix1(F.v8901, yr8971_At(&F, Y_DEFI(F.v8967), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8901).p)[y_ix1(F.v8901, yr8971_At(&F, y_range(F.c_9120, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8901).p)[y_ix1(F.v8901, yr8971_At(&F, y_range(F.c_9120, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8960 = 1;
}
if ((Y_DEFI(((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, Y_DEFI(F.v8967), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, y_range(F.c_9120, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, y_range(F.c_9120, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9130, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8960 = 1;
}
}
if (i9131 == hi9132) break;
}}
}
F.v8858 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_next);
}
if (i9121 == hi9122) break;
}}
}
F.lo9140 = INT64_C(1);
F.hi9141 = Y_DEFI(F.v8860);
{ rt_int hi9145 = F.hi9141;
for (rt_int i9144 = F.lo9140; i9144 <= hi9145; i9144++) { F.c_9143 = i9144; Y_TICK();
F.v8869 = Y_DEFP(((void * *)(F.v8947).p)[y_ix1(F.v8947, F.c_9143)]);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_func)) {
F.v8858 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_calls);
while ((!(Y_DEFP(F.v8858) == ((void *)0)))) {
Y_TICK();
F.v8967 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8967) > INT64_C(0))) {
F.lo9150 = INT64_C(1);
F.hi9151 = Y_DEFI(F.v8863);
{ rt_int hi9155 = F.hi9151;
for (rt_int i9154 = F.lo9150; i9154 <= hi9155; i9154++) { F.c_9153 = i9154; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8901).p)[y_ix1(F.v8901, yr8971_At(&F, Y_DEFI(F.v8967), y_range(F.c_9153, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFI(((rt_int *)(F.v8914).p)[y_ix1(F.v8914, F.c_9153)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_level))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_line), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_name), yr3491_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_sym)))).f_name), INT64_C(0)), yr3491_Join(yr1061_T(y_str(", which assigns to ", 19)), yr8990_VName(&F, y_range(F.c_9153, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
}
if (i9154 == hi9155) break;
}}
}
F.v8858 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8858)))).f_next);
}
}
if ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_decl) == ((void *)0)))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_decl)))).f_e) == ((void *)0)))) {
F.lo9163 = INT64_C(0);
F.hi9164 = Y_DEFI(F.v8860);
{ rt_int hi9168 = F.hi9164;
for (rt_int i9167 = F.lo9163; i9167 <= hi9168; i9167++) { F.c_9166 = i9167; Y_TICK();
((rt_int *)(F.v8958).p)[y_ix1(F.v8958, F.c_9166)] = 0;
if (i9167 == hi9168) break;
}}
if (yr8978_Reaches(&F, y_range(F.c_9143, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_9143, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_decl)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8869)))).f_name), y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i9144 == hi9145) break;
}}
if ((Y_DEFI(v1714) == v1507)) {
yr8985_WriteFacts(&F);
}
F.v8854 = Y_DEFP(v1758);
while ((!(Y_DEFP(F.v8854) == ((void *)0)))) {
Y_TICK();
F.v8969 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_sym);
F.v8967 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8969)))).f_vix);
if ((Y_DEFI(F.v8967) > INT64_C(0))) {
F.v8856 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_a);
while ((!(Y_DEFP(F.v8856) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_flag) == INT64_C(0))) && ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym) == ((void *)0)))))) {
F.v8965 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8965) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, Y_DEFI(F.v8967), Y_DEFI(F.v8965)))])) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_line), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_sym)))).f_name), yr3491_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8969)))).f_name), INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v8963 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_flag) == INT64_C(1))) {
F.v8963 = yr3592_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_name), INT64_C(0), 0);
if ((yr3592_DynIndex(yr1081_N(y_str("*", 1)), INT64_C(0), 0) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, Y_DEFI(F.v8967), yr3592_DynIndex(yr1081_N(y_str("*", 1)), INT64_C(0), 0)))])) {
F.v8963 = yr3592_DynIndex(yr1081_N(y_str("*", 1)), INT64_C(0), 0);
}
}
}
if ((Y_DEFI(F.v8963) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, Y_DEFI(F.v8967), Y_DEFI(F.v8963)))])) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8969)))).f_name), y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_flag) == INT64_C(1))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_ival) == INT64_C(1))))) {
F.lo9198 = INT64_C(1);
F.hi9199 = Y_DEFI(F.v8863);
{ rt_int hi9203 = F.hi9199;
for (rt_int i9202 = F.lo9198; i9202 <= hi9203; i9202++) { F.c_9201 = i9202; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8903).p)[y_ix1(F.v8903, yr8971_At(&F, Y_DEFI(F.v8967), y_range(F.c_9201, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.v8925).p)[y_ix1(F.v8925, F.c_9201)]) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8925).p)[y_ix1(F.v8925, F.c_9201)])))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8925).p)[y_ix1(F.v8925, F.c_9201)])))).f_rep)))).f_tid) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_name))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_line), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8969)))).f_name), yr3491_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8925).p)[y_ix1(F.v8925, F.c_9201)])))).f_name), INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i9202 == hi9203) break;
}}
}
F.v8856 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8856)))).f_next);
}
}
F.v8854 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8854)))).f_next);
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3592_DynIndex(rt_int a_p3593, rt_int a_p3594, rt_int a_p3595) {
struct yf3596 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3593 = a_p3593;
F.p3594 = a_p3594;
F.p3595 = a_p3595;
F.lo9214 = INT64_C(1);
F.hi9215 = Y_DEFI(v1782);
{ rt_int hi9219 = F.hi9215;
for (rt_int i9218 = F.lo9214; i9218 <= hi9219; i9218++) { F.c_9217 = i9218; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1769).p)[y_ix1(v1769, F.c_9217)]) == F.p3593)) {
{ rt_int rv9220 = Y_DEFI(((rt_int *)(v1780).p)[y_ix1(v1780, F.c_9217)]);
y_use = F.yu; return rv9220; }
}
if (i9218 == hi9219) break;
}}
if ((!F.p3595)) {
{ rt_int rv9222 = INT64_C(0);
y_use = F.yu; return rv9222; }
}
if ((Y_DEFI(v1782) >= INT64_C(4096))) {
yr1178_FailS(Y_DEFI(v1000), y_str("too many pointer types for this implementation", 46));
}
v1782 = y_range(y_add(Y_DEFI(v1782), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1769).p)[y_ix1(v1769, Y_DEFI(v1782))] = F.p3593;
((rt_int *)(v1780).p)[y_ix1(v1780, Y_DEFI(v1782))] = F.p3594;
{ rt_int rv9227 = F.p3594;
y_use = F.yu; return rv9227; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3600_RoutineCName(rt_int a_p3601) {
struct yf3602 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3601 = a_p3601;
F.v9231 = Y_UNDEF_I;
F.v9231 = yr1195_NewSerial();
F.v9233 = Y_UNDEF_I;
F.v9233 = 1;
F.lo9238 = INT64_C(1);
F.hi9239 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3601)]);
{ rt_int hi9243 = F.hi9239;
for (rt_int i9242 = F.lo9238; i9242 <= hi9243; i9242++) { F.c_9241 = i9242; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3601, y_range(F.c_9241, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3601, y_range(F.c_9241, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v9233 = 0;
}
if (i9242 == hi9243) break;
}}
yr1026_SB();
yr1037_SA(y_str("yr", 2));
yr1050_SI(Y_DEFI(F.v9231));
if (Y_DEFI(F.v9233)) {
yr1037_SA(y_str("_", 1));
yr1044_ST(F.p3601);
}
{ rt_int rv9247 = yr1056_SE();
y_use = F.yu; return rv9247; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3606_FormalRep(void * a_p3607) {
struct yf3608 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3607 = a_p3607;
F.v9251 = Y_UNDEF_P;
F.v9253 = Y_UNDEF_I;
F.v9255 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3607))).f_kind) == v696)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3607))).f_a), &F.v9253, &F.v9255);
if ((((!Y_DEFI(F.v9253)) || ((Y_DEFI(F.v9255) < INT64_C(1)))) || ((Y_DEFI(F.v9255) > INT64_C(8))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3607))).f_line), y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
}
F.v9251 = yr2489_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
((*(yR110 *)y_deref(Y_DEFP(F.v9251)))).f_nidx = Y_DEFI(F.v9255);
((*(yR110 *)y_deref(Y_DEFP(F.v9251)))).f_elem = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3607))).f_b), INT64_C(0), 0);
yr2592_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9251)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p3607))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v9251)))).f_deep = 1;
{ void * rv9263 = Y_DEFP(F.v9251);
y_use = F.yu; return rv9263; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3607))).f_kind) == v699)) {
{ void * rv9265 = yr2489_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv9265; }
}
F.v9251 = yr2733_MakeRep(F.p3607, INT64_C(0), 0);
yr2592_CheckRepresented(Y_DEFP(F.v9251), Y_DEFI(((*(yR105 *)y_deref(F.p3607))).f_line));
{ void * rv9268 = Y_DEFP(F.v9251);
y_use = F.yu; return rv9268; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3612_ParamCType(void * a_p3613) {
struct yf3614 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3613 = a_p3613;
F.v9272 = Y_UNDEF_I;
F.v9272 = yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3613))).f_rep));
if ((((Y_DEFI(((*(yR120 *)y_deref(F.p3613))).f_cls) == v897)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(F.p3613))).f_rep)))).f_kind) == v855)))) {
{ rt_int rv9273 = Y_DEFI(F.v9272);
y_use = F.yu; return rv9273; }
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9272));
yr1037_SA(y_str(" *", 2));
{ rt_int rv9275 = yr1056_SE();
y_use = F.yu; return rv9275; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3618_InstallTrap(void * a_p3619, void * a_p3620) {
struct yf3621 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3619 = a_p3619;
F.p3620 = a_p3620;
F.v9280 = Y_UNDEF_I;
F.v9282 = Y_UNDEF_I;
F.v9282 = 0;
F.v9285 = Y_UNDEF_I;
F.v9287 = Y_UNDEF_I;
F.v9287 = INT64_C(1);
F.v9280 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9285 = yr1061_T(y_str("OUT_OF_RANGE OVERFLOW ZERO_DIVIDE INVALID_POINTER FIXED_NOT_REPRESENTABLE TOO_MANY_PROCESS_INSTANCES TOO_LITTLE_LOCAL_STORAGE ADDRESS_VIOLATION UNINITIALIZED ", 158));
F.lo9297 = INT64_C(1);
F.hi9298 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9285))]);
{ rt_int hi9302 = F.hi9298;
for (rt_int i9301 = F.lo9297; i9301 <= hi9302; i9301++) { F.c_9300 = i9301; Y_TICK();
if ((yr1103_TChar(Y_DEFI(F.v9285), y_range(F.c_9300, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
if ((yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v9285))]), (y_sub(Y_DEFI(F.v9287), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_9300, Y_DEFI(F.v9287)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFI(F.v9280))) {
F.v9282 = 1;
}
F.v9287 = y_range(y_add(F.c_9300, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i9301 == hi9302) break;
}}
if ((!Y_DEFI(F.v9282))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_line), Y_DEFI(F.v9280), y_str(" is not a trap of this implementation (XIV.X.3)", 47));
}
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((!(Y_DEFI(v1273) == INT64_C(2)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_name), y_str(": a trap handler is declared in the outermost scope of a program (XIV.X.3)", 74));
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3619))).f_nparams) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3619))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3620))).f_name), y_str(": a trap handler of this implementation is a procedure without parameters (XIV.X.3)", 83));
}
yr1026_SB();
yr1037_SA(y_str("y_trap_install(rt_exc(", 22));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v9280));
yr1031_SC(34);
yr1037_SA(y_str("), ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3619))).f_cname));
yr1037_SA(y_str(");", 2));
yr1132_Emit(yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3625_DeclType(void * a_p3626) {
struct yf3627 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3626 = a_p3626;
if ((Y_DEFI(((*(yR120 *)y_deref(F.p3626))).f_cls) == v900)) {
{ rt_int rv9324 = yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3626))).f_rep));
y_use = F.yu; return rv9324; }
}
{ rt_int rv9325 = yr3612_ParamCType(F.p3626);
y_use = F.yu; return rv9325; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3631_RoutineHeader(void * a_p3632, rt_int a_p3633) {
struct yf3634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3632 = a_p3632;
F.p3633 = a_p3633;
F.v9330 = Y_UNDEF_P;
F.v9332 = Y_UNDEF_P;
F.v9334 = Y_UNDEF_P;
F.v9336 = Y_UNDEF_P;
F.v9338 = Y_UNDEF_P;
F.v9340 = Y_UNDEF_P;
F.v9342 = Y_UNDEF_P;
F.v9344 = Y_UNDEF_I;
F.v9346 = Y_UNDEF_I;
F.v9346 = 1;
F.v9330 = yr2348_NewSym(F.p3633, Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_decl = F.p3632;
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_func = (Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_flag) == INT64_C(1));
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_level = y_range(y_add(Y_DEFI(v1279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_cname = yr3600_RoutineCName(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3632))).f_b) == ((void *)0)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_ret = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3632))).f_b), INT64_C(0), 0);
yr2592_CheckRepresented(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_ret), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line));
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_ret = Y_DEFP(v1348);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_func)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v9340 = ((void *)0);
F.v9334 = Y_DEFP(((*(yR105 *)y_deref(F.p3632))).f_a);
while ((!(Y_DEFP(F.v9334) == ((void *)0)))) {
Y_TICK();
F.v9342 = yr3606_FormalRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_b));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_func) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_ival) == v897))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3633 == v885)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_ival) == v900)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str(": a process has no OUT parameters", 33));
}
F.v9336 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_a);
while ((!(Y_DEFP(F.v9336) == ((void *)0)))) {
Y_TICK();
({ F.v9338 = y_new(sizeof(yR120)); y_initu(&yd_121, y_deref(F.v9338)); });
(*(yR120 *)y_deref(Y_DEFP(F.v9338))) = ((yR120){ .f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9336)))).f_name), .f_cls = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_ival), .f_rep = Y_DEFP(F.v9342), .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9336)))).f_a) == ((void *)0)))) {
((*(yR120 *)y_deref(Y_DEFP(F.v9338)))).f_at = yr2855_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9336)))).f_a));
}
if ((Y_DEFP(F.v9340) == ((void *)0))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_params = Y_DEFP(F.v9338);
} else {
((*(yR120 *)y_deref(Y_DEFP(F.v9340)))).f_next = Y_DEFP(F.v9338);
}
F.v9340 = Y_DEFP(F.v9338);
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_nparams = y_range(y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_nparams), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9336 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9336)))).f_next);
}
F.v9334 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_next);
}
F.v9332 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name));
if ((!(Y_DEFP(F.v9332) == ((void *)0)))) {
F.v9332 = yr2483_Real(Y_DEFP(F.v9332));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_ival) == INT64_C(0))) && ((!(Y_DEFP(F.v9332) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9332)))).f_kind) == v891)) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line), yr3491_Join(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_ival) == INT64_C(0)))) && ((!(Y_DEFP(F.v9332) == ((void *)0))))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9332)))).f_kind) == v876)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_alt = Y_DEFP(F.v9332);
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9332)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_ival) == v339)) && ((!(yr3638_SameSignature(Y_DEFP(F.v9330), Y_DEFP(F.v9332)) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_ival) == v435)) && ((yr3638_SameSignature(Y_DEFP(F.v9330), Y_DEFP(F.v9332)) == ((void *)0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR105 *)y_deref(F.p3632))).f_sym = Y_DEFP(F.v9330);
yr2450_Define(Y_DEFP(F.v9330), Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line));
if ((((!(Y_DEFI(v1753) == INT64_C(0)))) && yr1088_TEq(Y_DEFI(v1753), yr1061_T(y_str("CompilerStatus", 14))))) {
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), yr1061_T(y_str("SUPPRESS_TRAP", 13)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_mval = v1513;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), yr1061_T(y_str("RESTORE_TRAP", 12)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_mval = v1516;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), yr1061_T(y_str("TRAP_SUPPRESSED", 15)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_mval = v1519;
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_ival) == v435)) && yr1095_TStarts(Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_name), y_str("TRAP_", 5)))) {
yr3618_InstallTrap(Y_DEFP(F.v9330), F.p3632);
}
F.v9334 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3632))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_sym = Y_DEFP(F.v9330);
((*(yR105 *)y_deref(Y_DEFP(F.v9334)))).f_next = Y_DEFP(v1756);
v1756 = Y_DEFP(F.v9334);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_level))] = yr1200_Fresh(y_str("yf", 2));
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_members = yr2348_NewSym(v891, Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_level))]));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_level))]));
yr1037_SA(y_str(";", 1));
F.v9344 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v9344));
yr1026_SB();
yr1037_SA(y_str("static ", 7));
if ((F.p3633 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_ret)));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_cname));
yr1037_SA(y_str("(", 1));
F.v9344 = yr1056_SE();
if ((F.p3633 == v885)) {
F.v9344 = yr3491_Join(Y_DEFI(F.v9344), yr1061_T(y_str("void *arg", 9)), INT64_C(0));
F.v9346 = 0;
} else if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9344));
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))]));
yr1037_SA(y_str(" *up", 4));
F.v9344 = yr1056_SE();
F.v9346 = 0;
}
F.v9338 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_params);
while ((((!(Y_DEFP(F.v9338) == ((void *)0)))) && ((!(F.p3633 == v885))))) {
Y_TICK();
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9344));
if ((!Y_DEFI(F.v9346))) {
yr1037_SA(y_str(", ", 2));
}
F.v9346 = 0;
yr1044_ST(yr3612_ParamCType(Y_DEFP(F.v9338)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9338)))).f_cname));
F.v9344 = yr1056_SE();
F.v9338 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9338)))).f_next);
}
if (Y_DEFI(F.v9346)) {
F.v9344 = yr3491_Join(Y_DEFI(F.v9344), yr1061_T(y_str("void", 4)), INT64_C(0));
}
F.v9344 = yr3491_Join(Y_DEFI(F.v9344), yr1061_T(y_str(")", 1)), INT64_C(0));
((*(yR125 *)y_deref(Y_DEFP(F.v9330)))).f_mnext = yr2348_NewSym(v891, Y_DEFI(F.v9344));
yr1110_Put(&v986, yr3491_Join(Y_DEFI(F.v9344), yr1061_T(y_str(";", 1)), INT64_C(0)));
yr4176_SegRoutine(Y_DEFP(F.v9330), F.p3632, F.p3633);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3638_SameSignature(void * a_p3639, void * a_p3640) {
struct yf3641 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3639 = a_p3639;
F.p3640 = a_p3640;
F.v9401 = Y_UNDEF_P;
F.v9401 = F.p3640;
F.v9403 = Y_UNDEF_P;
F.v9405 = Y_UNDEF_P;
F.v9407 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9401) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9401)))).f_nparams) == Y_DEFI(((*(yR125 *)y_deref(F.p3639))).f_nparams))) {
F.v9407 = 1;
F.v9403 = Y_DEFP(((*(yR125 *)y_deref(F.p3639))).f_params);
F.v9405 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9401)))).f_params);
while ((!(Y_DEFP(F.v9403) == ((void *)0)))) {
Y_TICK();
if ((!yr2569_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9403)))).f_rep), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9405)))).f_rep)))) {
F.v9407 = 0;
}
F.v9403 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9403)))).f_next);
F.v9405 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9405)))).f_next);
}
if (Y_DEFI(F.v9407)) {
{ void * rv9410 = Y_DEFP(F.v9401);
y_use = F.yu; return rv9410; }
}
}
F.v9401 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9401)))).f_alt);
}
{ void * rv9411 = ((void *)0);
y_use = F.yu; return rv9411; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3645_RoutineBody(void * a_p3646) {
struct yf3647 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3646 = a_p3646;
F.v9415 = Y_UNDEF_P;
F.v9415 = Y_DEFP(((*(yR105 *)y_deref(F.p3646))).f_sym);
y_initu(&yd_141, &F.v9417);
y_initu(&yd_141, &F.v9419);
F.v9421 = Y_UNDEF_I;
F.v9423 = Y_UNDEF_I;
F.v9425 = Y_UNDEF_I;
F.v9427 = Y_UNDEF_I;
F.v9429 = Y_UNDEF_I;
F.v9431 = Y_UNDEF_I;
F.v9433 = Y_UNDEF_I;
F.v9435 = Y_UNDEF_P;
F.v9437 = Y_UNDEF_I;
F.v9439 = Y_UNDEF_P;
F.v9441 = Y_UNDEF_P;
F.v9443 = Y_UNDEF_I;
F.v9445 = Y_UNDEF_I;
y_initu(&yd_141, &F.v9447);
F.v9417 = v996;
F.v9419 = v998;
F.v9421 = Y_DEFI(v1279);
F.v9423 = Y_DEFI(v1599);
F.v9425 = Y_DEFI(v1602);
F.v9427 = Y_DEFI(v1627);
F.v9429 = Y_DEFI(v1641);
F.v9431 = Y_DEFI(v1668);
F.v9433 = Y_DEFI(v1671);
F.v9435 = Y_DEFP(v1674);
F.v9437 = Y_DEFI(v1703);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v9447 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1279 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_level);
F.v9443 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_members)))).f_name);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(F.v9443);
v1602 = Y_DEFI(v1599);
v1671 = Y_DEFI(v1668);
v1641 = INT64_C(0);
v1674 = Y_DEFP(F.v9415);
v1703 = 0;
yr2355_OpenScope(0);
v1328 = y_range(y_add(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1324).p)[y_ix1(v1324, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_depth);
((rt_int *)(v1326).p)[y_ix1(v1326, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_serial);
F.v9439 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_params);
while ((!(Y_DEFP(F.v9439) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cls) == v897)) {
F.v9441 = yr2348_NewSym(v864, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_name));
} else {
F.v9441 = yr2348_NewSym(v861, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_name));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_rep = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep);
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_cname = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_kind) == v885)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_byref = (((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cls) == v903)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)))).f_kind) == v855))));
yr2470_DeclStorage(yr3612_ParamCType(Y_DEFP(F.v9439)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname));
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)))).f_kind) == v855)) {
yr2470_DeclStorage(yr1061_T(y_str("yspace", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr3491_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cls) == v903)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_byref = 1;
yr2470_DeclStorage(yr3612_ParamCType(Y_DEFP(F.v9439)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr3491_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cls) == v900)) {
yr2470_DeclStorage(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname));
yr2470_DeclStorage(yr3612_ParamCType(Y_DEFP(F.v9439)), yr3491_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str("_o", 2)), INT64_C(0)));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr3491_Join(yr1061_T(y_str("_o = a_", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(";", 1)))));
if ((yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)))).f_kind) == v843))))) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_init(", 7)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)), yr3491_Join(yr1061_T(y_str(", &F.", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(");", 2)))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr3491_Join(yr1061_T(y_str(" = *a_", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(";", 1)))));
}
} else {
yr2470_DeclStorage(yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr3491_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(";", 1)))));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_at) >= INT64_C(0))) {
F.v9445 = yr2861_StoreAt(yr3625_DeclType(Y_DEFP(F.v9439)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_at));
yr1132_Emit(yr3491_Join(Y_DEFI(F.v9445), yr1061_T(y_str(" = F.", 5)), yr3491_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_level = INT64_C(0);
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_cname = Y_DEFI(F.v9445);
((*(yR125 *)y_deref(Y_DEFP(F.v9441)))).f_at = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_at);
((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_path = Y_DEFI(F.v9445);
}
yr2450_Define(Y_DEFP(F.v9441), Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_line));
F.v9439 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9439)))).f_next);
}
yr3882_EnterMonitor(Y_DEFP(F.v9415));
yr3718_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3646))).f_c)))).f_a));
if (yr3436_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3646))).f_c))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_kind) == v885)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_name), y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3646))).f_name), y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3396_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3646))).f_c));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_kind) == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3850_AwaitProcesses();
yr2367_CloseScope();
v1328 = y_range(y_sub(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(F.v9443));
yr1037_SA(y_str(" {", 2));
if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, y_sub(Y_DEFI(v1279), INT64_C(1)))]));
yr1037_SA(y_str(" *up;", 5));
} else {
yr1037_SA(y_str(" void *up;", 10));
}
F.v9445 = yr1056_SE();
yr1110_Put(&v982, Y_DEFI(F.v9445));
yr1125_Append(&v982, &v998);
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
yr1117_PutS(&v982, y_str("};", 2));
yr1110_Put(&F.v9447, yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_mnext)))).f_name), yr1061_T(y_str(" {", 2)), INT64_C(0)));
if (Y_DEFI(v1703)) {
yr1117_PutS(&F.v9447, y_str("volatile", 8));
}
yr1110_Put(&F.v9447, yr3491_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(F.v9443), yr1061_T(y_str(" F;", 3))));
yr1117_PutS(&F.v9447, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9415)))).f_kind) == v885)) {
yr1110_Put(&F.v9447, yr3491_Join(yr1061_T(y_str("F = *(struct ", 13)), Y_DEFI(F.v9443), yr1061_T(y_str(" *)arg;", 7))));
} else if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1117_PutS(&F.v9447, y_str("F.up = up;", 10));
}
yr1117_PutS(&F.v9447, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1125_Append(&F.v9447, &v996);
yr1117_PutS(&F.v9447, y_str("}", 1));
yr1125_Append(&v988, &F.v9447);
v996 = F.v9417;
v998 = F.v9419;
v1279 = Y_DEFI(F.v9421);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = yr1200_Fresh(y_str("unused", 6));
if ((!(Y_DEFP(F.v9435) == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9435)))).f_members)))).f_name);
}
v1599 = Y_DEFI(F.v9423);
v1602 = Y_DEFI(F.v9425);
v1627 = Y_DEFI(F.v9427);
v1641 = Y_DEFI(F.v9429);
v1668 = Y_DEFI(F.v9431);
v1671 = Y_DEFI(F.v9433);
v1674 = Y_DEFP(F.v9435);
v1703 = Y_DEFI(F.v9437);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3651_DeclareStorage(void * a_p3652, void * a_p3653, rt_int a_p3654) {
struct yf3655 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3652 = a_p3652;
F.p3653 = a_p3653;
F.p3654 = a_p3654;
((*(yR125 *)y_deref(F.p3652))).f_rep = F.p3653;
((*(yR125 *)y_deref(F.p3652))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(F.p3652))).f_cname = yr1200_Fresh(y_str("v", 1));
yr2470_DeclStorage(yr2551_CType(F.p3653), Y_DEFI(((*(yR125 *)y_deref(F.p3652))).f_cname));
yr3668_InitStorage(F.p3652, F.p3653, F.p3654);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3659_DeclareAt(void * a_p3660, void * a_p3661, rt_int a_p3662, rt_int a_p3663) {
struct yf3664 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3660 = a_p3660;
F.p3661 = a_p3661;
F.p3662 = a_p3662;
F.p3663 = a_p3663;
((*(yR125 *)y_deref(F.p3660))).f_rep = F.p3661;
((*(yR125 *)y_deref(F.p3660))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.p3660))).f_at = F.p3662;
((*(yR125 *)y_deref(F.p3660))).f_cname = yr2861_StoreAt(yr2551_CType(F.p3661), F.p3662);
yr3668_InitStorage(F.p3660, F.p3661, F.p3663);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3668_InitStorage(void * a_p3669, void * a_p3670, rt_int a_p3671) {
struct yf3672 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3669 = a_p3669;
F.p3670 = a_p3670;
F.p3671 = a_p3671;
if ((yr2526_Deep(F.p3670) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3670))).f_kind) == v825)))) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_initu(", 8)), yr2557_DescOf(F.p3670), yr3491_Join(yr1061_T(y_str(", &", 3)), yr2477_SymPath(F.p3669), yr1061_T(y_str(");", 2)))));
} else if ((!(yr3097_UndefValue(F.p3670) == INT64_C(0)))) {
yr1132_Emit(yr3491_Join(yr2477_SymPath(F.p3669), yr1061_T(y_str(" = ", 3)), yr3491_Join(yr3097_UndefValue(F.p3670), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3670))).f_kind) == v837)) {
yr3899_DeclareSignal(F.p3669, F.p3671);
}
if (yr2539_HoldsSignal(F.p3670)) {
yr3906_DeclareSignalArray(F.p3669, F.p3671);
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3670))).f_kind) == v840)) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2477_SymPath(F.p3669), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3676_SimpleDecl(void * a_p3677) {
struct yf3678 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3677 = a_p3677;
F.v9536 = Y_UNDEF_I;
F.v9536 = Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_kind);
F.v9538 = Y_UNDEF_P;
F.v9540 = Y_UNDEF_P;
F.v9542 = Y_UNDEF_P;
F.v9544 = Y_UNDEF_P;
F.v9546 = Y_UNDEF_I;
F.v9548 = Y_UNDEF_I;
F.v9550 = Y_UNDEF_I;
F.v9552 = Y_UNDEF_I;
if ((((Y_DEFI(F.v9536) == v639)) || ((Y_DEFI(F.v9536) == v642)))) {
F.v9538 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_b), INT64_C(0), 0);
yr2592_CheckRepresented(Y_DEFP(F.v9538), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
if ((((Y_DEFI(F.v9536) == v639)) && yr2545_NonAssignable(Y_DEFP(F.v9538)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line), y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v9542 = Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_a);
while ((!(Y_DEFP(F.v9542) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(F.v9536) == v639)) {
F.v9544 = yr2348_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_name));
} else {
F.v9544 = yr2348_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_name));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_a) == ((void *)0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_kind) == v837))))) {
yr3659_DeclareAt(Y_DEFP(F.v9544), Y_DEFP(F.v9538), yr2855_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_a)), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
} else if ((((Y_DEFI(v1727) > INT64_C(0))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_rep = Y_DEFP(F.v9538);
yr4168_SegStorage(Y_DEFP(F.v9544), Y_DEFP(F.v9538), Y_DEFI(F.v9536));
} else {
yr3651_DeclareStorage(Y_DEFP(F.v9544), Y_DEFP(F.v9538), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_a) == ((void *)0))) {
yr4168_SegStorage(Y_DEFP(F.v9544), Y_DEFP(F.v9538), Y_DEFI(F.v9536));
}
}
if (((((!(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_c) == ((void *)0)))) && ((Y_DEFI(v1727) > INT64_C(0)))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_c), &F.v9550, &F.v9552);
if (((((Y_DEFI(F.v9536) == v639)) && Y_DEFI(F.v9550)) && yr2502_IsDiscrete(Y_DEFP(F.v9538)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_mval = Y_DEFI(F.v9552);
}
} else if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_c) == ((void *)0)))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_c), Y_DEFP(F.v9538), &F.v9546, &F.v9540);
if ((Y_DEFI(F.v9536) == v639)) {
yr3019_Store(yr2477_SymPath(Y_DEFP(F.v9544)), Y_DEFP(F.v9538), Y_DEFI(F.v9546), Y_DEFP(F.v9540), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
} else {
F.v9548 = yr3314_UserAssign(yr2477_SymPath(Y_DEFP(F.v9544)), Y_DEFP(F.v9538), Y_DEFI(F.v9546), Y_DEFP(F.v9540), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
if ((!(Y_DEFI(F.v9548) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v9548));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_tname), y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr3019_Store(yr2477_SymPath(Y_DEFP(F.v9544)), Y_DEFP(F.v9538), Y_DEFI(F.v9546), Y_DEFP(F.v9540), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
}
}
if ((Y_DEFI(F.v9536) == v639)) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_c), &F.v9550, &F.v9552);
if ((Y_DEFI(F.v9550) && yr2502_IsDiscrete(Y_DEFP(F.v9538)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_mval = Y_DEFI(F.v9552);
}
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_a) == ((void *)0)))) {
yr3689_AtLocation(Y_DEFP(F.v9544), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_a));
}
yr2450_Define(Y_DEFP(F.v9544), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_line));
F.v9542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_next);
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9536) == v651)) {
F.v9538 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name), 0);
yr2592_CheckRepresented(Y_DEFP(F.v9538), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
F.v9544 = yr2348_NewSym(v867, Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_rep = Y_DEFP(F.v9538);
yr2450_Define(Y_DEFP(F.v9544), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
yr2756_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name), Y_DEFP(F.v9538));
yr3682_NoteAlphabet(F.p3677, Y_DEFP(F.v9538));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9536) == v648)) {
F.v9538 = yr2733_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name), 1);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_b)))).f_kind) == v672)) {
F.v9538 = yr2496_CopyRep(Y_DEFP(F.v9538));
((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_tid = yr2727_NewTid(Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name));
((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_tname = Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name);
if (((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_kind) == v810)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_b)))).f_a) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v9538)))).f_abstract = 1;
}
}
}
F.v9544 = yr2348_NewSym(v870, Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_rep = Y_DEFP(F.v9538);
yr2450_Define(Y_DEFP(F.v9544), Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line));
yr2756_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_name), Y_DEFP(F.v9538));
yr3682_NoteAlphabet(F.p3677, Y_DEFP(F.v9538));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9536) == v645)) {
F.v9542 = Y_DEFP(((*(yR105 *)y_deref(F.p3677))).f_a);
while ((!(Y_DEFP(F.v9542) == ((void *)0)))) {
Y_TICK();
F.v9544 = yr2348_NewSym(v888, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_mval = Y_DEFI(v1596);
((*(yR125 *)y_deref(Y_DEFP(F.v9544)))).f_cname = yr1200_Fresh(y_str("lab", 3));
yr2450_Define(Y_DEFP(F.v9544), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_line));
F.v9542 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9542)))).f_next);
}
y_use = F.yu; return;
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3677))).f_line), y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3682_NoteAlphabet(void * a_p3683, void * a_p3684) {
struct yf3685 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3683 = a_p3683;
F.p3684 = a_p3684;
F.v9576 = Y_UNDEF_P;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3684))).f_kind) == v819)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3683))).f_b)))).f_kind) == v678)))) {
F.v9576 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3683))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9576)))).f_name = Y_DEFI(((*(yR105 *)y_deref(F.p3683))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v9576)))).f_rep = F.p3684;
((*(yR105 *)y_deref(Y_DEFP(F.v9576)))).f_next = Y_DEFP(v1525);
v1525 = Y_DEFP(F.v9576);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3689_AtLocation(void * a_p3690, void * a_p3691) {
struct yf3692 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3690 = a_p3690;
F.p3691 = a_p3691;
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3690))).f_rep)))).f_kind) == v837)) {
yr3913_DeviceSignal(F.p3690, F.p3691);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3696_Defer(void * a_p3697, rt_int a_p3698, void * a_p3699, rt_int a_p3700) {
struct yf3701 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3697 = a_p3697;
F.p3698 = a_p3698;
F.p3699 = a_p3699;
F.p3700 = a_p3700;
F.v9586 = Y_UNDEF_I;
F.v9586 = Y_DEFI(v1273);
if ((Y_DEFI(v1886) >= INT64_C(20000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3697))).f_line), y_str("too many routines for this implementation", 41));
}
v1886 = y_range(y_add(Y_DEFI(v1886), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1794).p)[y_ix1(v1794, Y_DEFI(v1886))] = F.p3697;
((rt_int *)(v1805).p)[y_ix1(v1805, Y_DEFI(v1886))] = F.p3698;
((rt_int *)(v1816).p)[y_ix1(v1816, Y_DEFI(v1886))] = Y_DEFI(v1276);
((void * *)(v1827).p)[y_ix1(v1827, Y_DEFI(v1886))] = Y_DEFP(v1892);
((void * *)(v1838).p)[y_ix1(v1838, Y_DEFI(v1886))] = F.p3699;
((rt_int *)(v1849).p)[y_ix1(v1849, Y_DEFI(v1886))] = F.p3700;
((rt_int *)(v1860).p)[y_ix1(v1860, Y_DEFI(v1886))] = Y_DEFI(v1709);
while (Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9586))])))).f_closed)) {
Y_TICK();
F.v9586 = y_range(y_sub(Y_DEFI(F.v9586), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1871).p)[y_ix1(v1871, Y_DEFI(v1886))] = y_range(y_add(Y_DEFI(v1889), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1873).p)[y_ix1(v1873, Y_DEFI(v1886))] = y_range(y_sub(Y_DEFI(v1273), Y_DEFI(F.v9586)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9599 = y_add(Y_DEFI(F.v9586), INT64_C(1));
F.hi9600 = Y_DEFI(v1273);
{ rt_int hi9604 = F.hi9600;
for (rt_int i9603 = F.lo9599; i9603 <= hi9604; i9603++) { F.c_9602 = i9603; Y_TICK();
v1889 = y_range(y_add(Y_DEFI(v1889), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1884).p)[y_ix1(v1884, Y_DEFI(v1889))] = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, F.c_9602)]);
if (i9603 == hi9604) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3705_RunDeferred(rt_int a_p3706, rt_int a_p3707) {
struct yf3708 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3706 = a_p3706;
F.p3707 = a_p3707;
F.v9611 = Y_UNDEF_I;
F.v9611 = y_range(y_add(F.p3706, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9615 = Y_UNDEF_I;
F.v9617 = Y_UNDEF_I;
F.v9619 = Y_UNDEF_P;
while ((Y_DEFI(F.v9611) <= Y_DEFI(v1886))) {
Y_TICK();
F.lo9624 = Y_DEFI(((rt_int *)(v1871).p)[y_ix1(v1871, Y_DEFI(F.v9611))]);
F.hi9625 = y_sub((y_add(Y_DEFI(((rt_int *)(v1871).p)[y_ix1(v1871, Y_DEFI(F.v9611))]), Y_DEFI(((rt_int *)(v1873).p)[y_ix1(v1873, Y_DEFI(F.v9611))]))), INT64_C(1));
{ rt_int hi9629 = F.hi9625;
for (rt_int i9628 = F.lo9624; i9628 <= hi9629; i9628++) { F.c_9627 = i9628; Y_TICK();
yr2361_ReopenScope(Y_DEFP(((void * *)(v1884).p)[y_ix1(v1884, F.c_9627)]));
if (i9628 == hi9629) break;
}}
F.v9615 = Y_DEFI(v1276);
F.v9619 = Y_DEFP(v1892);
F.v9617 = Y_DEFI(v1709);
v1276 = Y_DEFI(((rt_int *)(v1816).p)[y_ix1(v1816, Y_DEFI(F.v9611))]);
v1892 = Y_DEFP(((void * *)(v1827).p)[y_ix1(v1827, Y_DEFI(F.v9611))]);
v1709 = Y_DEFI(((rt_int *)(v1860).p)[y_ix1(v1860, Y_DEFI(F.v9611))]);
if ((Y_DEFI(((rt_int *)(v1805).p)[y_ix1(v1805, Y_DEFI(F.v9611))]) == INT64_C(1))) {
yr3645_RoutineBody(Y_DEFP(((void * *)(v1794).p)[y_ix1(v1794, Y_DEFI(F.v9611))]));
} else {
yr3712_ModuleInit(Y_DEFI(F.v9611));
}
v1276 = Y_DEFI(F.v9615);
v1892 = Y_DEFP(F.v9619);
v1709 = Y_DEFI(F.v9617);
F.lo9634 = INT64_C(1);
F.hi9635 = Y_DEFI(((rt_int *)(v1873).p)[y_ix1(v1873, Y_DEFI(F.v9611))]);
{ rt_int hi9639 = F.hi9635;
for (rt_int i9638 = F.lo9634; i9638 <= hi9639; i9638++) { F.c_9637 = i9638; Y_TICK();
yr2367_CloseScope();
if (i9638 == hi9639) break;
}}
F.v9611 = y_range(y_add(Y_DEFI(F.v9611), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1886 = F.p3706;
v1889 = F.p3707;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3712_ModuleInit(rt_int a_p3713) {
struct yf3714 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3713 = a_p3713;
F.v9645 = Y_UNDEF_P;
F.v9645 = Y_DEFP(((void * *)(v1794).p)[y_ix1(v1794, F.p3713)]);
y_initu(&yd_141, &F.v9647);
F.v9647 = v996;
F.v9649 = Y_UNDEF_P;
F.v9649 = Y_DEFP(((void * *)(v1838).p)[y_ix1(v1838, F.p3713)]);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (Y_DEFI(((rt_int *)(v1849).p)[y_ix1(v1849, F.p3713)])) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3876_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2))));
}
v1627 = y_range(y_add(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1614).p)[y_ix1(v1614, Y_DEFI(v1627))] = INT64_C(0);
((rt_int *)(v1625).p)[y_ix1(v1625, Y_DEFI(v1627))] = INT64_C(0);
yr3396_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9645)))).f_c));
v1627 = y_range(y_sub(Y_DEFI(v1627), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (Y_DEFI(((rt_int *)(v1849).p)[y_ix1(v1849, F.p3713)])) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3876_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2))));
}
if ((!(Y_DEFP((v996).f_head) == ((void *)0)))) {
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_next = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v9649)))).f_next);
((*(yR135 *)y_deref(Y_DEFP(F.v9649)))).f_next = Y_DEFP((v996).f_head);
if ((Y_DEFP((F.v9647).f_tail) == Y_DEFP(F.v9649))) {
(F.v9647).f_tail = Y_DEFP((v996).f_tail);
}
}
v996 = F.v9647;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3718_Declarations(void * a_p3719) {
struct yf3720 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3719 = a_p3719;
F.v9663 = Y_UNDEF_P;
F.v9663 = F.p3719;
F.v9665 = Y_UNDEF_P;
F.v9665 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
F.v9667 = Y_UNDEF_I;
F.v9667 = Y_DEFI(v1886);
F.v9669 = Y_UNDEF_I;
F.v9669 = Y_DEFI(v1889);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = F.p3719;
while ((!(Y_DEFP(F.v9663) == ((void *)0)))) {
Y_TICK();
v1000 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_line);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = Y_DEFP(F.v9663);
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_kind) == v666)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_sym) == ((void *)0))) {
yr3724_DeclareRoutine(Y_DEFP(F.v9663));
}
} else if (((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_kind) == v624))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_ival) == INT64_C(0))) {
yr3826_CompileModule(Y_DEFP(F.v9663));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_kind) == v660)) {
yr3832_DeclareTemplate(Y_DEFP(F.v9663));
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_kind) == v663)) {
yr3838_Instantiate(Y_DEFP(F.v9663));
} else {
yr3676_SimpleDecl(Y_DEFP(F.v9663));
}
F.v9663 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9663)))).f_next);
}
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(F.v9665);
yr2763_CheckPending();
yr3789_ResolveLater(Y_DEFI(v1273));
if ((!Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_closed))) {
yr3705_RunDeferred(Y_DEFI(F.v9667), Y_DEFI(F.v9669));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3724_DeclareRoutine(void * a_p3725) {
struct yf3726 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3725 = a_p3725;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3725))).f_kind) == v654)) {
yr3631_RoutineHeader(F.p3725, v876);
} else {
yr3631_RoutineHeader(F.p3725, v885);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3725))).f_kind) == v666)) {
yr3844_DeclareProcess(F.p3725);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3725))).f_sym)))).f_hasmv))) {
yr3696_Defer(F.p3725, INT64_C(1), ((void *)0), 0);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3730_Alias(rt_int a_p3731, void * a_p3732) {
struct yf3733 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3731 = a_p3731;
F.p3732 = a_p3732;
F.v9679 = Y_UNDEF_P;
F.v9679 = yr2348_NewSym(v894, F.p3731);
((*(yR125 *)y_deref(Y_DEFP(F.v9679)))).f_target = F.p3732;
((*(yR125 *)y_deref(Y_DEFP(F.v9679)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3732))).f_readonly);
{ void * rv9680 = Y_DEFP(F.v9679);
y_use = F.yu; return rv9680; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3737_AddLits(void * * a_p3738, void * a_p3739, rt_int a_p3740) {
struct yf3741 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3738 = a_p3738;
F.p3739 = a_p3739;
F.p3740 = a_p3740;
F.v9686 = Y_UNDEF_P;
F.v9688 = Y_UNDEF_P;
F.v9690 = Y_UNDEF_P;
if ((((F.p3740 > INT64_C(8))) || Y_DEFI(((*(yR110 *)y_deref(F.p3739))).f_opaque))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3739))).f_kind) == v816)) {
F.v9686 = Y_DEFP(((*(yR110 *)y_deref(F.p3739))).f_lits);
while ((!(Y_DEFP(F.v9686) == ((void *)0)))) {
Y_TICK();
F.v9688 = yr2443_FindLit(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9686)))).f_name), F.p3739);
if ((!(Y_DEFP(F.v9688) == ((void *)0)))) {
F.v9688 = yr3730_Alias(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9686)))).f_name), Y_DEFP(F.v9688));
((*(yR125 *)y_deref(Y_DEFP(F.v9688)))).f_mnext = Y_DEFP((*F.p3738));
(*F.p3738) = Y_DEFP(F.v9688);
}
F.v9686 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9686)))).f_next);
}
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3739))).f_kind) == v825)) {
F.v9690 = Y_DEFP(((*(yR110 *)y_deref(F.p3739))).f_fields);
while ((!(Y_DEFP(F.v9690) == ((void *)0)))) {
Y_TICK();
yr3737_AddLits(&(*F.p3738), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9690)))).f_rep), y_range(y_add(F.p3740, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9690 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9690)))).f_next);
}
} else if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3739))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3739))).f_kind) == v834))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3739))).f_kind) == v831)))) {
yr3737_AddLits(&(*F.p3738), Y_DEFP(((*(yR110 *)y_deref(F.p3739))).f_elem), y_range(y_add(F.p3740, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3745_Provides(void * a_p3746, rt_int a_p3747) {
struct yf3748 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3746 = a_p3746;
F.p3747 = a_p3747;
F.v9700 = Y_UNDEF_P;
F.v9700 = Y_DEFP(((*(yR105 *)y_deref(F.p3746))).f_b);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3746))).f_name) == F.p3747)) {
{ rt_int rv9702 = 1;
y_use = F.yu; return rv9702; }
}
while ((!(Y_DEFP(F.v9700) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9700)))).f_ival) == INT64_C(0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9700)))).f_ival) == F.p3747)))) {
{ rt_int rv9705 = 1;
y_use = F.yu; return rv9705; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9700)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9700)))).f_name) == F.p3747)))) {
{ rt_int rv9708 = 1;
y_use = F.yu; return rv9708; }
}
F.v9700 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9700)))).f_next);
}
{ rt_int rv9710 = 0;
y_use = F.yu; return rv9710; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3752_ImportLater(rt_int a_p3753, rt_int a_p3754, void * * a_p3755) {
struct yf3756 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3753 = a_p3753;
F.p3754 = a_p3754;
F.p3755_o = a_p3755;
F.v9716 = Y_UNDEF_P;
F.p3755 = ((void *)0);
if ((Y_DEFI(v1273) < INT64_C(0))) {
{ rt_int rv9719 = INT64_C(0);
(*F.p3755_o) = F.p3755;
y_use = F.yu; return rv9719; }
}
F.v9716 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9716) == ((void *)0)))) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_kind) == v624)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_ival) == INT64_C(2))))) && yr3745_Provides(Y_DEFP(F.v9716), F.p3753))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_ival) == INT64_C(1))) {
F.p3755 = Y_DEFP(F.v9716);
{ rt_int rv9723 = INT64_C(2);
(*F.p3755_o) = F.p3755;
y_use = F.yu; return rv9723; }
}
yr3826_CompileModule(Y_DEFP(F.v9716));
{ rt_int rv9725 = INT64_C(1);
(*F.p3755_o) = F.p3755;
y_use = F.yu; return rv9725; }
}
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_kind) == v666)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_name) == F.p3753)))) {
{ rt_int rv9727 = INT64_C(3);
(*F.p3755_o) = F.p3755;
y_use = F.yu; return rv9727; }
}
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_kind) == v624))) && yr2410_DeclaredFrom(yr3760_OneDecl(Y_DEFP(F.v9716)), F.p3753))) {
yr1186_FailN(F.p3754, F.p3753, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v9716 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9716)))).f_next);
}
{ rt_int rv9730 = INT64_C(0);
(*F.p3755_o) = F.p3755;
y_use = F.yu; return rv9730; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3760_OneDecl(void * a_p3761) {
struct yf3762 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3761 = a_p3761;
F.v9734 = Y_UNDEF_P;
({ F.v9734 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v9734)); });
(*(yR105 *)y_deref(Y_DEFP(F.v9734))) = (*(yR105 *)y_deref(F.p3761));
((*(yR105 *)y_deref(Y_DEFP(F.v9734)))).f_next = ((void *)0);
{ void * rv9735 = Y_DEFP(F.v9734);
y_use = F.yu; return rv9735; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3766_Lazy(rt_int a_p3767, rt_int a_p3768, void * a_p3769, rt_int a_p3770) {
struct yf3771 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3767 = a_p3767;
F.p3768 = a_p3768;
F.p3769 = a_p3769;
F.p3770 = a_p3770;
F.v9742 = Y_UNDEF_P;
F.v9742 = yr2348_NewSym(v894, F.p3767);
if ((Y_DEFI(v1954) >= INT64_C(10000))) {
yr1178_FailS(F.p3770, y_str("too many imports translated later", 33));
}
v1954 = y_range(y_add(Y_DEFI(v1954), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1917).p)[y_ix1(v1917, Y_DEFI(v1954))] = Y_DEFP(F.v9742);
((rt_int *)(v1928).p)[y_ix1(v1928, Y_DEFI(v1954))] = F.p3768;
((void * *)(v1939).p)[y_ix1(v1939, Y_DEFI(v1954))] = F.p3769;
((rt_int *)(v1950).p)[y_ix1(v1950, Y_DEFI(v1954))] = Y_DEFI(v1273);
((rt_int *)(v1952).p)[y_ix1(v1952, Y_DEFI(v1954))] = F.p3770;
{ void * rv9747 = Y_DEFP(F.v9742);
y_use = F.yu; return rv9747; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3775_SetLazy(rt_int a_p3776, void * a_p3777) {
struct yf3778 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3776 = a_p3776;
F.p3777 = a_p3777;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.p3776)])))).f_target = F.p3777;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.p3776)])))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3777))).f_readonly);
((void * *)(v1917).p)[y_ix1(v1917, F.p3776)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3782_ResolveFrom(void * a_p3783, void * a_p3784) {
struct yf3785 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3783 = a_p3783;
F.p3784 = a_p3784;
F.v9755 = Y_UNDEF_P;
F.lo9759 = INT64_C(1);
F.hi9760 = Y_DEFI(v1954);
{ rt_int hi9764 = F.hi9760;
for (rt_int i9763 = F.lo9759; i9763 <= hi9764; i9763++) { F.c_9762 = i9763; Y_TICK();
if ((((!(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.c_9762)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1939).p)[y_ix1(v1939, F.c_9762)]) == F.p3783)))) {
F.v9755 = Y_DEFP(((*(yR125 *)y_deref(F.p3784))).f_members);
while ((((!(Y_DEFP(F.v9755) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9755)))).f_name) == Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_9762)])))))) {
Y_TICK();
F.v9755 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9755)))).f_mnext);
}
if ((Y_DEFP(F.v9755) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1952).p)[y_ix1(v1952, F.c_9762)]), Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_9762)]), y_str(" is not exported by that module", 31));
}
yr3775_SetLazy(y_range(F.c_9762, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9755));
}
if (i9763 == hi9764) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3789_ResolveLater(rt_int a_p3790) {
struct yf3791 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3790 = a_p3790;
F.v9769 = Y_UNDEF_P;
F.lo9773 = INT64_C(1);
F.hi9774 = Y_DEFI(v1954);
{ rt_int hi9778 = F.hi9774;
for (rt_int i9777 = F.lo9773; i9777 <= hi9778; i9777++) { F.c_9776 = i9777; Y_TICK();
if (((((!(Y_DEFP(((void * *)(v1917).p)[y_ix1(v1917, F.c_9776)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1939).p)[y_ix1(v1939, F.c_9776)]) == ((void *)0)))) && ((Y_DEFI(((rt_int *)(v1950).p)[y_ix1(v1950, F.c_9776)]) == F.p3790)))) {
F.v9769 = yr2378_Find(Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_9776)]));
if ((Y_DEFP(F.v9769) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1952).p)[y_ix1(v1952, F.c_9776)]), Y_DEFI(((rt_int *)(v1928).p)[y_ix1(v1928, F.c_9776)]), y_str(" is not declared around this module (X.B.2)", 43));
}
yr3775_SetLazy(y_range(F.c_9776, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9769));
}
if (i9777 == hi9778) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3795_LazyModule(void * a_p3796, void * * a_p3797, rt_int a_p3798) {
struct yf3799 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3796 = a_p3796;
F.p3797 = a_p3797;
F.p3798 = a_p3798;
F.v9785 = Y_UNDEF_P;
F.v9785 = Y_DEFP(((*(yR105 *)y_deref(F.p3796))).f_b);
F.v9787 = Y_UNDEF_P;
F.v9789 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9785) == ((void *)0)))) {
Y_TICK();
F.v9789 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9785)))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9785)))).f_ival) == INT64_C(0)))) {
F.v9789 = y_range(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9785)))).f_ival), INT64_C(0), INT64_C(4000000));
}
if (((((!(Y_DEFI(F.v9789) == v531))) && ((!(Y_DEFI(F.v9789) == v585)))) && ((!(Y_DEFI(F.v9789) == v570))))) {
F.v9787 = yr3766_Lazy(Y_DEFI(F.v9789), Y_DEFI(F.v9789), F.p3796, F.p3798);
((*(yR125 *)y_deref(Y_DEFP(F.v9787)))).f_mnext = Y_DEFP((*F.p3797));
(*F.p3797) = Y_DEFP(F.v9787);
}
F.v9785 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9785)))).f_next);
}
F.v9787 = yr3766_Lazy(Y_DEFI(((*(yR105 *)y_deref(F.p3796))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3796))).f_name), ((void *)0), F.p3798);
((*(yR125 *)y_deref(Y_DEFP(F.v9787)))).f_mnext = Y_DEFP((*F.p3797));
(*F.p3797) = Y_DEFP(F.v9787);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3803_ResolveItem(void * a_p3804, void * * a_p3805, rt_int a_p3806) {
struct yf3807 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3804 = a_p3804;
F.p3805 = a_p3805;
F.p3806 = a_p3806;
F.v9796 = Y_UNDEF_P;
F.v9798 = Y_UNDEF_P;
F.v9800 = Y_UNDEF_P;
F.v9802 = Y_UNDEF_I;
F.v9804 = Y_UNDEF_P;
F.v9806 = Y_UNDEF_I;
F.v9806 = Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_flag);
F.v9808 = Y_UNDEF_I;
F.v9810 = Y_UNDEF_P;
if (((F.p3806 && ((Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text) == INT64_C(0)))) && (((((Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name) == v531)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name) == v585))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name) == v570)))))) {
if ((yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name)) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v9802 = Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_ival) == INT64_C(0)))) {
F.v9802 = y_range(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_ival), INT64_C(0), INT64_C(4000000));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text) == INT64_C(0)))) {
if ((((!F.p3806)) && ((yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text)) == ((void *)0))))) {
F.v9808 = yr3752_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), &F.v9810);
if ((Y_DEFI(F.v9808) == INT64_C(2))) {
F.v9800 = yr3766_Lazy(Y_DEFI(F.v9802), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), Y_DEFP(F.v9810), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_mnext = Y_DEFP((*F.p3805));
(*F.p3805) = Y_DEFP(F.v9800);
y_use = F.yu; return;
}
}
F.v9798 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line)));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v879))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text), y_str(" is not a module", 16));
}
F.v9796 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_members);
while ((((!(Y_DEFP(F.v9796) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name)))))) {
Y_TICK();
F.v9796 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_mnext);
}
if ((Y_DEFP(F.v9796) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), y_str(" is not exported by that module", 31));
}
} else {
if (F.p3806) {
F.v9796 = yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name));
} else {
F.v9796 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name));
}
if ((((Y_DEFP(F.v9796) == ((void *)0))) && (!F.p3806))) {
F.v9808 = yr3752_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), &F.v9810);
if ((((Y_DEFI(F.v9808) == INT64_C(2))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9810)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name))))) {
if ((((!(Y_DEFI(F.v9806) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3795_LazyModule(Y_DEFP(F.v9810), &(*F.p3805), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9808) >= INT64_C(2))) {
F.v9800 = yr3766_Lazy(Y_DEFI(F.v9802), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), Y_DEFP(F.v9810), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_mnext = Y_DEFP((*F.p3805));
(*F.p3805) = Y_DEFP(F.v9800);
y_use = F.yu; return;
}
F.v9796 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name));
}
if ((F.p3806 && ((!(Y_DEFP(F.v9796) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_mval) == INT64_C(1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((Y_DEFP(F.v9796) == ((void *)0))) {
if (F.p3806) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), y_str(" is not declared in this module", 31));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v9798 = yr2483_Real(Y_DEFP(F.v9796));
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v879)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_text) == INT64_C(0))))) {
if ((((!(Y_DEFI(F.v9806) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v9800 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_members);
while ((!(Y_DEFP(F.v9800) == ((void *)0)))) {
Y_TICK();
F.v9796 = yr3730_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_name), Y_DEFP(F.v9800));
((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_mnext = Y_DEFP((*F.p3805));
(*F.p3805) = Y_DEFP(F.v9796);
F.v9800 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_mnext);
}
if ((!F.p3806)) {
F.v9796 = yr3730_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_name), Y_DEFP(F.v9798));
((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_mnext = Y_DEFP((*F.p3805));
(*F.p3805) = Y_DEFP(F.v9796);
}
y_use = F.yu; return;
}
F.v9800 = yr3730_Alias(Y_DEFI(F.v9802), Y_DEFP(F.v9796));
if (F.p3806) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v870)))) {
if ((((Y_DEFI(F.v9806) == v429)) || ((Y_DEFI(F.v9806) == v483)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("READONLY and VAR are for variables", 34));
}
if ((((Y_DEFI(F.v9806) == v474)) && Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep)))).f_opaque))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(Y_DEFI(F.v9806) == v474))) || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep)))).f_opaque))) {
F.v9804 = yr2496_CopyRep(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(F.v9804)))).f_opaque = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v9804)))).f_opaqueops = Y_DEFI(v1905);
((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_target = yr2348_NewSym(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_target)))).f_rep = Y_DEFP(F.v9804);
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_target)))).f_decl = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_decl);
} else {
yr3737_AddLits(&(*F.p3805), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep), INT64_C(0));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v864)))) {
if ((((Y_DEFI(F.v9806) == v396)) || ((Y_DEFI(F.v9806) == v474)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((Y_DEFI(F.v9806) == v483)) && ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v864)) || Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_readonly))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_name), y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(Y_DEFI(F.v9806) == v483))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_readonly = 1;
}
} else if ((!(Y_DEFI(F.v9806) == INT64_C(0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v861)) && ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep)))).f_kind) == v837)) || yr2539_HoldsSignal(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_kind) == v870)))) {
yr3737_AddLits(&(*F.p3805), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9798)))).f_rep), INT64_C(0));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9800)))).f_mnext = Y_DEFP((*F.p3805));
(*F.p3805) = Y_DEFP(F.v9800);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3811_DefineAll(void * a_p3812, rt_int a_p3813) {
struct yf3814 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3812 = a_p3812;
F.p3813 = a_p3813;
F.v9845 = Y_UNDEF_P;
F.v9845 = F.p3812;
F.v9847 = Y_UNDEF_P;
F.v9847 = F.p3812;
F.v9849 = Y_UNDEF_P;
F.v9849 = F.p3812;
while ((!(Y_DEFP(F.v9845) == ((void *)0)))) {
Y_TICK();
F.v9847 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9845)))).f_mnext);
F.v9849 = yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9845)))).f_name));
if (((!yr2431_Resolved(Y_DEFP(F.v9845))) || ((((!(Y_DEFP(F.v9849) == ((void *)0)))) && (!yr2431_Resolved(Y_DEFP(F.v9849))))))) {
if ((!(Y_DEFP(F.v9849) == ((void *)0)))) {
yr1186_FailN(F.p3813, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9845)))).f_name), y_str(" comes into this scope twice", 28));
}
yr2450_Define(Y_DEFP(F.v9845), F.p3813);
} else if ((((Y_DEFP(F.v9849) == ((void *)0))) || ((!(yr2483_Real(Y_DEFP(F.v9849)) == yr2483_Real(Y_DEFP(F.v9845))))))) {
if (((((!(Y_DEFP(F.v9849) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v9845))))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v9849))))).f_kind) == v873)))) {
yr2450_Define(Y_DEFP(F.v9845), F.p3813);
} else if ((Y_DEFP(F.v9849) == ((void *)0))) {
yr2450_Define(Y_DEFP(F.v9845), F.p3813);
} else {
yr1186_FailN(F.p3813, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9845)))).f_name), y_str(" comes into this scope twice", 28));
}
}
F.v9845 = Y_DEFP(F.v9847);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3818_ExtendWith(void * a_p3819, void * a_p3820, rt_int a_p3821) {
struct yf3822 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3819 = a_p3819;
F.p3820 = a_p3820;
F.p3821 = a_p3821;
F.v9857 = Y_UNDEF_P;
F.v9857 = ((void *)0);
F.v9859 = Y_UNDEF_P;
F.v9859 = ((void *)0);
F.v9861 = Y_UNDEF_P;
F.v9861 = ((void *)0);
F.v9863 = Y_UNDEF_P;
F.v9863 = ((void *)0);
F.v9863 = F.p3819;
while ((!(Y_DEFP(F.v9863) == ((void *)0)))) {
Y_TICK();
if ((!(yr3638_SameSignature(Y_DEFP(F.v9863), F.p3820) == ((void *)0)))) {
yr1186_FailN(F.p3821, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9863)))).f_name), y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9863)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3820))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(F.p3821, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9863)))).f_name), y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v9861 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v9861)); });
(*(yR125 *)y_deref(Y_DEFP(F.v9861))) = (*(yR125 *)y_deref(Y_DEFP(F.v9863)));
((*(yR125 *)y_deref(Y_DEFP(F.v9861)))).f_target = Y_DEFP(F.v9863);
((*(yR125 *)y_deref(Y_DEFP(F.v9861)))).f_alt = ((void *)0);
if ((Y_DEFP(F.v9859) == ((void *)0))) {
F.v9857 = Y_DEFP(F.v9861);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9859)))).f_alt = Y_DEFP(F.v9861);
}
F.v9859 = Y_DEFP(F.v9861);
F.v9863 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9863)))).f_alt);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9859)))).f_alt = F.p3820;
{ void * rv9866 = Y_DEFP(F.v9857);
y_use = F.yu; return rv9866; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3826_CompileModule(void * a_p3827) {
struct yf3828 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3827 = a_p3827;
F.v9870 = Y_UNDEF_P;
F.v9872 = Y_UNDEF_P;
F.v9874 = Y_UNDEF_P;
F.v9876 = Y_UNDEF_P;
F.v9878 = Y_UNDEF_P;
F.v9880 = Y_UNDEF_P;
F.v9882 = Y_UNDEF_P;
F.v9884 = Y_UNDEF_P;
F.v9886 = Y_UNDEF_P;
F.v9888 = Y_UNDEF_I;
F.v9890 = Y_UNDEF_P;
F.v9892 = Y_UNDEF_P;
F.v9894 = Y_UNDEF_I;
F.v9896 = Y_UNDEF_I;
F.v9898 = Y_UNDEF_I;
F.v9898 = 0;
((*(yR105 *)y_deref(F.p3827))).f_ival = INT64_C(1);
F.v9888 = Y_DEFI(v1753);
F.v9870 = ((void *)0);
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(F.p3827))).f_a);
while ((!(Y_DEFP(F.v9890) == ((void *)0)))) {
Y_TICK();
yr3803_ResolveItem(Y_DEFP(F.v9890), &F.v9870, 0);
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_next);
}
F.v9880 = Y_DEFP(v1892);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_flag) == INT64_C(1))) && ((Y_DEFP(v1892) == ((void *)0))))) {
F.v9882 = yr2348_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9882)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9882)))).f_cname = yr1200_Fresh(y_str("mon", 3));
((*(yR125 *)y_deref(Y_DEFP(F.v9882)))).f_rep = Y_DEFP(v1348);
yr2470_DeclStorage(yr1061_T(y_str("ymon", 4)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9882)))).f_cname));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2457_Path(Y_DEFI(v1279), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9882)))).f_cname)), yr1061_T(y_str(");", 2))));
v1892 = Y_DEFP(F.v9882);
F.v9898 = 1;
}
yr2355_OpenScope(1);
v1753 = Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name);
if ((Y_DEFI(v1733) >= INT64_C(64))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line), y_str("modules nested too deeply", 25));
}
v1733 = y_range(y_add(Y_DEFI(v1733), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1745).p)[y_ix1(v1745, Y_DEFI(v1733))] = Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3827))).f_d) == ((void *)0)))) {
v1727 = y_range(y_add(Y_DEFI(v1727), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((Y_DEFI(v1733) == INT64_C(1))) && ((!(Y_DEFI(v1724) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name) == Y_DEFI(v1724))))) {
v1730 = y_range(y_add(Y_DEFI(v1730), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
F.v9894 = Y_DEFI(v1276);
v1276 = Y_DEFI(v1273);
F.v9874 = Y_DEFP(F.v9870);
while ((!(Y_DEFP(F.v9874) == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(Y_DEFP(F.v9874)))).f_mval = INT64_C(1);
F.v9874 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9874)))).f_mnext);
}
yr3811_DefineAll(Y_DEFP(F.v9870), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line));
yr3718_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3827))).f_c)))).f_a));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("/* ", 3)), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name), yr1061_T(y_str(" */", 3))));
if ((Y_DEFI(v1727) == INT64_C(0))) {
yr3696_Defer(F.p3827, INT64_C(2), Y_DEFP((v996).f_tail), Y_DEFI(F.v9898));
}
v1905 = INT64_C(0);
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(F.p3827))).f_b);
while ((!(Y_DEFP(F.v9890) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_text) == INT64_C(0))) && ((yr2384_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_name)) == ((void *)0))))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_name) == v531)) {
v1905 = y_range(y_add(Y_DEFI(v1905), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_name) == v585)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_name) == v570)))) {
if (((y_div(Y_DEFI(v1905), INT64_C(2))) == INT64_C(0))) {
v1905 = y_range(y_add(Y_DEFI(v1905), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_next);
}
F.v9872 = ((void *)0);
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(F.p3827))).f_b);
while ((!(Y_DEFP(F.v9890) == ((void *)0)))) {
Y_TICK();
yr3803_ResolveItem(Y_DEFP(F.v9890), &F.v9872, 1);
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9890)))).f_next);
}
F.v9892 = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
v1276 = Y_DEFI(F.v9894);
v1753 = Y_DEFI(F.v9888);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3827))).f_d) == ((void *)0)))) {
v1727 = y_range(y_sub(Y_DEFI(v1727), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((Y_DEFI(v1733) == INT64_C(1))) && ((!(Y_DEFI(v1724) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name) == Y_DEFI(v1724))))) {
v1730 = y_range(y_sub(Y_DEFI(v1730), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1733 = y_range(y_sub(Y_DEFI(v1733), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2367_CloseScope();
while ((!(Y_DEFP(F.v9892) == ((void *)0)))) {
Y_TICK();
F.v9890 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9892)))).f_next);
((*(yR105 *)y_deref(Y_DEFP(F.v9892)))).f_next = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = Y_DEFP(F.v9892);
F.v9892 = Y_DEFP(F.v9890);
}
v1892 = Y_DEFP(F.v9880);
F.v9876 = yr2348_NewSym(v879, Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9876)))).f_members = Y_DEFP(F.v9872);
yr2450_Define(Y_DEFP(F.v9876), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line));
F.v9878 = Y_DEFP(F.v9872);
F.v9872 = ((void *)0);
while ((!(Y_DEFP(F.v9878) == ((void *)0)))) {
Y_TICK();
F.v9884 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_mnext);
F.v9874 = yr3730_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name), Y_DEFP(F.v9878));
((*(yR125 *)y_deref(Y_DEFP(F.v9874)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_readonly);
((*(yR125 *)y_deref(Y_DEFP(F.v9874)))).f_mnext = Y_DEFP(F.v9872);
F.v9872 = Y_DEFP(F.v9874);
F.v9878 = Y_DEFP(F.v9884);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9876)))).f_members = Y_DEFP(F.v9872);
((*(yR105 *)y_deref(F.p3827))).f_ival = INT64_C(2);
yr3782_ResolveFrom(F.p3827, Y_DEFP(F.v9876));
F.v9878 = Y_DEFP(F.v9872);
while ((!(Y_DEFP(F.v9878) == ((void *)0)))) {
Y_TICK();
F.v9884 = yr3730_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name), Y_DEFP(F.v9878));
((*(yR125 *)y_deref(Y_DEFP(F.v9884)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_readonly);
F.v9886 = yr2378_Find(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name));
if ((!(Y_DEFP(F.v9886) == ((void *)0)))) {
if ((!yr2431_Resolved(Y_DEFP(F.v9886)))) {
F.v9886 = ((void *)0);
} else {
F.v9886 = yr2483_Real(Y_DEFP(F.v9886));
}
}
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v9878))))).f_kind) == v876)) && ((!(Y_DEFP(F.v9886) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9886)))).f_kind) == v876)) {
F.v9884 = yr3818_ExtendWith(yr2483_Real(Y_DEFP(F.v9878)), Y_DEFP(F.v9886), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line));
}
}
if ((yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name)) == ((void *)0))) {
yr2450_Define(Y_DEFP(F.v9884), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line));
} else if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9884)))).f_kind) == v876)) {
yr2450_Define(Y_DEFP(F.v9884), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line));
} else if ((((Y_DEFI(((*(yR125 *)y_deref(yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name))))).f_kind) == v894)) && ((!(yr2483_Real(yr2384_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name))) == yr2483_Real(Y_DEFP(F.v9878))))))) {
yr2450_Define(Y_DEFP(F.v9884), Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line));
} else if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2483_Real(Y_DEFP(F.v9878))))).f_kind) == v873))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3827))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_name), y_str(" is exported into a scope that has it already", 45));
}
F.v9878 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9878)))).f_mnext);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3832_DeclareTemplate(void * a_p3833) {
struct yf3834 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3833 = a_p3833;
F.v9947 = Y_UNDEF_P;
F.v9947 = yr2348_NewSym(v882, Y_DEFI(((*(yR105 *)y_deref(F.p3833))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9947)))).f_decl = F.p3833;
yr2450_Define(Y_DEFP(F.v9947), Y_DEFI(((*(yR105 *)y_deref(F.p3833))).f_line));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3838_Instantiate(void * a_p3839) {
struct yf3840 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3839 = a_p3839;
F.v9951 = Y_UNDEF_P;
F.v9951 = yr2483_Real(yr2390_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_line)));
F.v9953 = Y_UNDEF_P;
F.v9955 = Y_UNDEF_P;
F.v9957 = Y_UNDEF_P;
F.v9959 = Y_UNDEF_I;
F.v9961 = Y_UNDEF_I;
F.v9963 = Y_UNDEF_I;
F.v9965 = Y_UNDEF_I;
F.v9967 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9951)))).f_kind) == v882))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_name), y_str(" is not a template", 18));
}
F.v9953 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9951)))).f_decl);
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9953)))).f_a)) == yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3839))).f_a))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_name), y_str(": the number of actuals is wrong", 32));
}
F.v9959 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9975 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9953)))).f_ival);
F.hi9976 = y_sub(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9953)))).f_flag), INT64_C(1));
{ rt_int hi9980 = F.hi9976;
for (rt_int i9979 = F.lo9975; i9979 <= hi9980; i9979++) { F.c_9978 = i9979; Y_TICK();
F.v9963 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.c_9978)]);
F.v9965 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.c_9978)]);
if ((Y_DEFI(F.v9963) == v207)) {
F.v9955 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9953)))).f_a);
F.v9957 = Y_DEFP(((*(yR105 *)y_deref(F.p3839))).f_a);
while ((!(Y_DEFP(F.v9955) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9955)))).f_name) == Y_DEFI(F.v9965))) && ((Y_DEFI(F.v9963) == v207)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9957)))).f_flag) == INT64_C(1))) {
F.v9963 = v216;
F.v9965 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9957)))).f_ival);
} else {
F.v9965 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9957)))).f_name);
if ((Y_DEFI(F.v9965) <= v492)) {
F.v9963 = v210;
} else if ((Y_DEFI(F.v9965) <= v621)) {
F.v9963 = v213;
}
}
}
F.v9955 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9955)))).f_next);
F.v9957 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9957)))).f_next);
}
}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = Y_DEFI(F.v9963);
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = Y_DEFI(F.v9965);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, F.c_9978)]);
if (i9979 == hi9980) break;
}}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = v204;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = INT64_C(0);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((*(yR105 *)y_deref(F.p3839))).f_line);
F.v9961 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v9959);
F.v9967 = yr2134_ParseModule();
v1249 = Y_DEFI(F.v9961);
yr3826_CompileModule(Y_DEFP(F.v9967));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3844_DeclareProcess(void * a_p3845) {
struct yf3846 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3845 = a_p3845;
F.v9990 = Y_UNDEF_P;
F.v9990 = Y_DEFP(((*(yR105 *)y_deref(F.p3845))).f_sym);
F.v9992 = Y_UNDEF_P;
((*(yR125 *)y_deref(Y_DEFP(F.v9990)))).f_monitor = Y_DEFP(v1892);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9990)))).f_hasmv)) {
y_use = F.yu; return;
}
yr2470_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9990)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0)));
yr4184_SegActivation(Y_DEFP(F.v9990), F.p3845);
F.v9992 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3845))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9992)))).f_sym = Y_DEFP(F.v9990);
((*(yR105 *)y_deref(Y_DEFP(F.v9992)))).f_next = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = Y_DEFP(F.v9992);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3850_AwaitProcesses(void) {
struct yf3851 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9998 = Y_UNDEF_P;
F.v9998 = Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9998) == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3491_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2457_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9998)))).f_sym)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9998)))).f_sym)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
F.v9998 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9998)))).f_next);
}
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3855_Activate(void * a_p3856, void * a_p3857) {
struct yf3858 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3856 = a_p3856;
F.p3857 = a_p3857;
F.v10009 = Y_UNDEF_I;
F.v10011 = Y_UNDEF_I;
F.v10013 = Y_UNDEF_I;
F.v10015 = Y_UNDEF_I;
F.v10017 = Y_UNDEF_I;
F.v10019 = Y_UNDEF_P;
F.v10021 = Y_UNDEF_I;
F.v10023 = Y_UNDEF_I;
F.v10025 = Y_UNDEF_P;
F.v10027 = Y_UNDEF_I;
F.v10029 = Y_UNDEF_I;
F.v10031 = Y_UNDEF_I;
F.v10033 = Y_UNDEF_I;
F.v10035 = Y_UNDEF_I;
F.v10037 = Y_UNDEF_I;
F.v10039 = Y_UNDEF_P;
F.v10039 = Y_DEFP(((*(yR125 *)y_deref(F.p3857))).f_decl);
F.v10041 = Y_UNDEF_P;
yr3240_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3856))).f_a), F.p3857, &F.v10009, &F.v10011);
if ((!(Y_DEFI(F.v10011) == Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_nparams)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3856))).f_line), Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3290_NoteCall(F.p3857, Y_DEFI(((*(yR105 *)y_deref(F.p3856))).f_line));
yr3579_CheckActuals(F.p3857, Y_DEFI(F.v10009), Y_DEFI(((*(yR105 *)y_deref(F.p3856))).f_line));
F.v10027 = yr1200_Fresh(y_str("pf", 2));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("{ struct ", 9)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3857))).f_members)))).f_name), yr3491_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v10027), yr3491_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), Y_DEFI(F.v10027), yr1061_T(y_str(");", 2))))));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_level) > INT64_C(1))) {
yr1132_Emit(yr3491_Join(Y_DEFI(F.v10027), yr1061_T(y_str("->up = ", 7)), yr3491_Join(yr2464_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v10025 = Y_DEFP(((*(yR125 *)y_deref(F.p3857))).f_params);
F.v10013 = y_range(y_add(Y_DEFI(F.v10009), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v10025) == ((void *)0)))) {
Y_TICK();
if ((!yr3219_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))])))) {
yr2576_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))]));
}
F.v10033 = yr3491_Join(Y_DEFI(F.v10027), yr1061_T(y_str("->", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_cname));
yr3249_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))).f_kind) == v855)) {
yr1132_Emit(yr3491_Join(Y_DEFI(F.v10033), yr1061_T(y_str(" = ", 3)), yr3491_Join(yr2875_SpaceArg(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10013))]), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_cls) == v903)) {
if ((!yr3029_IsVariable(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_name), y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr3257_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3546_NoteWrite(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))]));
yr3529_DesigBase(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))]), &F.v10019, &F.v10021, &F.v10023);
if ((((!(Y_DEFP(F.v10019) == ((void *)0)))) && (!Y_DEFI(F.v10021)))) {
if ((yr3870_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10019)))).f_depth)) > yr3870_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10019)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1132_Emit(yr3491_Join(Y_DEFI(F.v10033), yr1061_T(y_str(" = &", 4)), yr3491_Join(yr3103_RawCode(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10013))]), Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10013))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep))) {
F.v10029 = yr1200_Fresh(y_str("t", 1));
yr1132_Emit(yr3491_Join(yr1061_T(y_str("{ ", 2)), yr2551_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep)), yr3491_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v10029), yr3491_Join(yr1061_T(y_str(" = ", 3)), yr3001_Convert(Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10013))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))])), yr1061_T(y_str(";", 1))))));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep)))).f_elem)), yr3491_Join(yr1061_T(y_str("), &", 4)), Y_DEFI(F.v10033), yr3491_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v10029), yr1061_T(y_str("); }", 4))))));
} else {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_copy(", 7)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep)), yr3491_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v10033), yr3491_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v10029), yr1061_T(y_str("); }", 4))))));
}
} else {
yr1132_Emit(yr3491_Join(Y_DEFI(F.v10033), yr1061_T(y_str(" = ", 3)), yr3491_Join(yr3001_Convert(Y_DEFI(((rt_int *)(v1536).p)[y_ix1(v1536, Y_DEFI(F.v10013))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_rep), Y_DEFP(((void * *)(v1547).p)[y_ix1(v1547, Y_DEFI(F.v10013))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v10013 = y_range(y_add(Y_DEFI(F.v10013), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10025 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10025)))).f_next);
}
v1560 = Y_DEFI(F.v10009);
F.v10035 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_e) == ((void *)0)))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_e), Y_DEFP(v1342), &F.v10035, &F.v10041);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v10041));
}
F.v10037 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_d) == ((void *)0)))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_d), Y_DEFP(v1342), &F.v10031, &F.v10041);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v10041));
F.v10037 = yr3491_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v10031), INT64_C(0));
}
F.v10015 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_x) == ((void *)0)))) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_x), &F.v10017, &F.v10015);
if (((!Y_DEFI(F.v10017)) || ((Y_DEFI(F.v10015) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10039)))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(yr2457_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10035));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10037));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v10015));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3857))).f_cname));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10027));
yr1037_SA(y_str("); }", 4));
F.v10029 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v10029));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3862_CheckLifeScope(void * a_p3863, rt_int a_p3864, rt_int a_p3865) {
struct yf3866 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3863 = a_p3863;
F.p3864 = a_p3864;
F.p3865 = a_p3865;
F.v10107 = Y_UNDEF_P;
F.v10107 = Y_DEFP(((*(yR125 *)y_deref(F.p3863))).f_params);
F.v10109 = Y_UNDEF_I;
F.v10109 = y_range(y_add(F.p3864, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10113 = Y_UNDEF_P;
F.v10115 = Y_UNDEF_I;
F.v10117 = Y_UNDEF_I;
while ((((!(Y_DEFP(F.v10107) == ((void *)0)))) && ((Y_DEFI(F.v10109) <= y_add(F.p3864, F.p3865))))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10107)))).f_cls) == v903)) {
yr3529_DesigBase(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10109))]), &F.v10113, &F.v10115, &F.v10117);
if ((((!(Y_DEFP(F.v10113) == ((void *)0)))) && (!Y_DEFI(F.v10115)))) {
if ((yr3870_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10113)))).f_depth)) > yr3870_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3863))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1558).p)[y_ix1(v1558, Y_DEFI(F.v10109))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10113)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
}
F.v10109 = y_range(y_add(Y_DEFI(F.v10109), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10107 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10107)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3870_LifeDepth(rt_int a_p3871) {
struct yf3872 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3871 = a_p3871;
F.v10125 = Y_UNDEF_I;
F.v10125 = F.p3871;
while ((((Y_DEFI(F.v10125) > INT64_C(1))) && Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v10125))])))).f_closed))) {
Y_TICK();
F.v10125 = y_range(y_sub(Y_DEFI(F.v10125), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10129 = Y_DEFI(F.v10125);
y_use = F.yu; return rv10129; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3876_MonitorPath(void * a_p3877) {
struct yf3878 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3877 = a_p3877;
{ rt_int rv10134 = yr3491_Join(yr1061_T(y_str("&", 1)), yr2457_Path(Y_DEFI(((*(yR125 *)y_deref(F.p3877))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p3877))).f_cname)), INT64_C(0));
y_use = F.yu; return rv10134; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3882_EnterMonitor(void * a_p3883) {
struct yf3884 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3883 = a_p3883;
F.v10138 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3883))).f_kind) == v876)) {
((*(yR125 *)y_deref(F.p3883))).f_monitor = Y_DEFP(v1892);
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p3883))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3876_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3883))).f_monitor)), yr1061_T(y_str(");", 2))));
F.v10138 = yr1200_Fresh(y_str("mf", 2));
v1703 = 1;
yr1132_Emit(yr3491_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v10138), yr1061_T(y_str(";", 1))));
yr1026_SB();
yr1037_SA(y_str("if (!RT_TRY(", 12));
yr1044_ST(Y_DEFI(F.v10138));
yr1037_SA(y_str(")) { RT_POP(", 12));
yr1044_ST(Y_DEFI(F.v10138));
yr1037_SA(y_str("); ", 3));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3883))).f_kind) == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
}
yr1044_ST(yr3876_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3883))).f_monitor)));
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1132_Emit(yr1056_SE());
v1599 = y_range(y_add(Y_DEFI(v1599), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1572).p)[y_ix1(v1572, Y_DEFI(v1599))] = Y_DEFI(F.v10138);
((rt_int *)(v1583).p)[y_ix1(v1583, Y_DEFI(v1599))] = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3888_LeaveMonitor(void) {
struct yf3889 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFP(v1674) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_kind) == v885)) {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3876_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_monitor)), yr1061_T(y_str(");", 2))));
} else {
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3876_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_monitor)), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3893_TerminateStatement(void * a_p3894) {
struct yf3895 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3894 = a_p3894;
if ((((Y_DEFP(v1674) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1674)))).f_kind) == v885))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3894))).f_line), y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3850_AwaitProcesses();
yr3888_LeaveMonitor();
yr3379_PopTo(Y_DEFI(v1602));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3899_DeclareSignal(void * a_p3900, rt_int a_p3901) {
struct yf3902 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3900 = a_p3900;
F.p3901 = a_p3901;
if ((Y_DEFP(v1892) == ((void *)0))) {
yr1178_FailS(F.p3901, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR125 *)y_deref(F.p3900))).f_rep = yr2496_CopyRep(Y_DEFP(((*(yR125 *)y_deref(F.p3900))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3900))).f_rep)))).f_monitor = Y_DEFP(v1892);
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2477_SymPath(F.p3900), yr3491_Join(yr1061_T(y_str(", ", 2)), yr3876_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3906_DeclareSignalArray(void * a_p3907, rt_int a_p3908) {
struct yf3909 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3907 = a_p3907;
F.p3908 = a_p3908;
if ((Y_DEFP(v1892) == ((void *)0))) {
yr1178_FailS(F.p3908, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1132_Emit(yr3491_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2557_DescOf(Y_DEFP(((*(yR125 *)y_deref(F.p3907))).f_rep)), yr3491_Join(yr1061_T(y_str(", &", 3)), yr2477_SymPath(F.p3907), yr3491_Join(yr1061_T(y_str(", ", 2)), yr3876_MonitorPath(Y_DEFP(v1892)), yr1061_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3913_DeviceSignal(void * a_p3914, void * a_p3915) {
struct yf3916 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3914 = a_p3914;
F.p3915 = a_p3915;
F.v10182 = Y_UNDEF_I;
F.v10184 = Y_UNDEF_I;
F.v10186 = Y_UNDEF_I;
yr2920_Manifest(F.p3915, &F.v10182, &F.v10184);
if ((!Y_DEFI(F.v10182))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3915))).f_line), y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1026_SB();
yr1037_SA(y_str("y_device(&", 10));
yr1044_ST(yr2477_SymPath(F.p3914));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v10184));
yr1037_SA(y_str(");", 2));
F.v10186 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v10186));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3920_Arg(void * a_p3921, rt_int a_p3922) {
struct yf3923 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3921 = a_p3921;
F.p3922 = a_p3922;
F.v10195 = Y_UNDEF_P;
F.v10195 = Y_DEFP(((*(yR105 *)y_deref(F.p3921))).f_a);
F.v10197 = Y_UNDEF_I;
F.v10197 = INT64_C(1);
while ((((!(Y_DEFP(F.v10195) == ((void *)0)))) && ((Y_DEFI(F.v10197) < F.p3922)))) {
Y_TICK();
F.v10195 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10195)))).f_next);
F.v10197 = y_range(y_add(Y_DEFI(F.v10197), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(F.v10195) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3921))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3921))).f_name), y_str(": too few actual parameters", 27));
}
{ void * rv10202 = Y_DEFP(F.v10195);
y_use = F.yu; return rv10202; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3927_NArgs(void * a_p3928, rt_int a_p3929) {
struct yf3930 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3928 = a_p3928;
F.p3929 = a_p3929;
if ((!(yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3928))).f_a)) == F.p3929))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3928))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3928))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3934_Call1(yarr a_p3936, rt_int a_p3937) {
struct yf3938 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3936 = a_p3936;
F.p3937 = a_p3937;
yr1026_SB();
yr1037_SA(F.p3936);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3937);
yr1037_SA(y_str(")", 1));
{ rt_int rv10212 = yr1056_SE();
y_use = F.yu; return rv10212; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3942_Addr(rt_int a_p3943) {
struct yf3944 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3943 = a_p3943;
{ rt_int rv10217 = yr3491_Join(yr1061_T(y_str("&", 1)), F.p3943, INT64_C(0));
y_use = F.yu; return rv10217; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3948_StdVar(void * a_p3949, rt_int a_p3950, rt_int * a_p3951, void * * a_p3952) {
struct yf3953 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3949 = a_p3949;
F.p3950 = a_p3950;
F.p3951_o = a_p3951;
F.p3952_o = a_p3952;
F.v10224 = Y_UNDEF_I;
yr3041_LValue(F.p3949, &F.p3951, &F.p3952);
yr3546_NoteWrite(F.p3949);
if ((((!(F.p3950 == v858))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3952)))).f_kind) == F.p3950))))) {
yr1026_SB();
yr1037_SA(y_str("a ", 2));
if ((F.p3950 == v831)) {
yr1037_SA(y_str("file", 4));
} else if ((F.p3950 == v837)) {
yr1037_SA(y_str("signal", 6));
} else if ((F.p3950 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3950 == v828)) {
yr1037_SA(y_str("pointer", 7));
} else {
yr1037_SA(y_str("variable", 8));
}
yr1037_SA(y_str(" is needed here", 15));
F.v10224 = yr1056_SE();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p3949))).f_line), Y_DEFI(F.v10224));
}
(*F.p3951_o) = F.p3951;
(*F.p3952_o) = F.p3952;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3957_NumArg(void * a_p3958, rt_int * a_p3959, void * * a_p3960) {
struct yf3961 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3958 = a_p3958;
F.p3959_o = a_p3959;
F.p3960_o = a_p3960;
yr3068_Expr(F.p3958, ((void *)0), &F.p3959, &F.p3960);
if ((!yr2508_IsNumeric(Y_DEFP(F.p3960)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3958))).f_line), y_str("a number is needed here", 23));
}
(*F.p3959_o) = F.p3959;
(*F.p3960_o) = F.p3960;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3965_IntArg(void * a_p3966) {
struct yf3967 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3966 = a_p3966;
F.v10240 = Y_UNDEF_I;
F.v10242 = Y_UNDEF_P;
yr3068_Expr(F.p3966, Y_DEFP(v1342), &F.v10240, &F.v10242);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10242)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3966))).f_line), y_str("an integer is needed here", 25));
}
{ rt_int rv10244 = Y_DEFI(F.v10240);
y_use = F.yu; return rv10244; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3971_CodeInsert(void * a_p3972) {
struct yf3973 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3972 = a_p3972;
F.v10248 = Y_UNDEF_P;
F.v10248 = yr3920_Arg(F.p3972, INT64_C(1));
F.v10251 = Y_UNDEF_I;
F.v10253 = Y_UNDEF_I;
F.v10255 = Y_UNDEF_I;
F.v10257 = Y_UNDEF_I;
F.v10259 = Y_UNDEF_I;
F.v10261 = Y_UNDEF_I;
F.v10263 = Y_UNDEF_B;
F.v10265 = Y_UNDEF_P;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_10274, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_10274, &F.v10276);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10248)))).f_kind) == v771))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3972))).f_line), y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v10251 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10248)))).f_text);
F.v10261 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10251))]);
yr1026_SB();
F.v10257 = INT64_C(1);
while ((Y_DEFI(F.v10257) <= Y_DEFI(F.v10261))) {
Y_TICK();
F.v10263 = yr1103_TChar(Y_DEFI(F.v10251), Y_DEFI(F.v10257));
if ((Y_DEFB(F.v10263) == 39)) {
F.v10259 = y_range(y_add(Y_DEFI(F.v10257), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v10259) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10251))]))) && ((!(yr1103_TChar(Y_DEFI(F.v10251), Y_DEFI(F.v10259)) == 39))))) {
Y_TICK();
F.v10259 = y_range(y_add(Y_DEFI(F.v10259), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v10259) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10251))]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3972))).f_line), y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v10253 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10251))]), Y_DEFI(F.v10257)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10259), Y_DEFI(F.v10257))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, yr2903_CharValue(Y_DEFP(v1346), Y_DEFI(F.v10253), Y_DEFI(((*(yR105 *)y_deref(F.p3972))).f_line)))]));
F.v10257 = y_range(y_add(Y_DEFI(F.v10259), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v10263) == 36)) {
F.v10259 = y_range(y_add(Y_DEFI(F.v10257), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v10259) <= Y_DEFI(F.v10261))) && ((yr1008_IsLetter(yr1103_TChar(Y_DEFI(F.v10251), Y_DEFI(F.v10259))) || yr1014_IsDigit(yr1103_TChar(Y_DEFI(F.v10251), Y_DEFI(F.v10259))))))) {
Y_TICK();
F.v10259 = y_range(y_add(Y_DEFI(F.v10259), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10253 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10251))]), Y_DEFI(F.v10257)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10259), Y_DEFI(F.v10257))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10265 = yr2378_Find(Y_DEFI(F.v10253));
if ((Y_DEFP(F.v10265) == ((void *)0))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3972))).f_line), Y_DEFI(F.v10253), y_str(" in a code insert is not declared here", 38));
}
F.v10265 = yr2483_Real(Y_DEFP(F.v10265));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10265)))).f_kind) == v861))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10265)))).f_kind) == v864))))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3972))).f_line), Y_DEFI(F.v10253), y_str(" in a code insert is not a variable or constant", 47));
}
yr1044_ST(yr3049_Paren(yr2477_SymPath(Y_DEFP(F.v10265))));
F.v10257 = Y_DEFI(F.v10259);
} else {
yr1031_SC(Y_DEFB(F.v10263));
F.v10257 = y_range(y_add(Y_DEFI(F.v10257), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v10255 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v10255));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3977_ManifestScale(void * a_p3978, void * a_p3979) {
struct yf3980 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3978 = a_p3978;
F.p3979 = a_p3979;
F.v10315 = Y_UNDEF_I;
F.v10317 = Y_UNDEF_I;
F.v10319 = Y_UNDEF_I;
F.v10321 = Y_UNDEF_P;
yr2986_ManifestFix(F.p3978, &F.v10315, &F.v10317, &F.v10319);
if (((!Y_DEFI(F.v10315)) || ((Y_DEFI(F.v10317) <= INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3979))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3979))).f_name), y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v10321 = yr2496_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.v10321)))).f_abstract = 0;
yr2698_SetScale(Y_DEFP(F.v10321), Y_DEFI(F.v10317), Y_DEFI(F.v10319));
{ void * rv10325 = Y_DEFP(F.v10321);
y_use = F.yu; return rv10325; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3984_StdCall(rt_int a_p3985, void * a_p3986, rt_int a_p3987, rt_int * a_p3988, void * * a_p3989) {
struct yf3990 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3985 = a_p3985;
F.p3986 = a_p3986;
F.p3987 = a_p3987;
F.p3988_o = a_p3988;
F.p3989_o = a_p3989;
F.v10333 = Y_UNDEF_P;
F.v10335 = Y_UNDEF_I;
F.v10337 = Y_UNDEF_I;
F.v10339 = Y_UNDEF_I;
F.v10341 = Y_UNDEF_I;
F.v10343 = Y_UNDEF_I;
F.v10345 = Y_UNDEF_P;
F.v10347 = Y_UNDEF_P;
F.v10349 = Y_UNDEF_P;
F.v10351 = Y_UNDEF_P;
F.v10353 = Y_UNDEF_I;
F.v10355 = Y_UNDEF_I;
F.v10357 = Y_UNDEF_I;
F.v10359 = Y_UNDEF_I;
F.v10361 = Y_UNDEF_P;
F.v10363 = Y_UNDEF_I;
F.p3989 = Y_DEFP(v1348);
F.p3988 = yr1061_T(y_str("((void)0)", 9));
F.v10363 = (((((((((((((((((F.p3985 == v1384)) || ((F.p3985 == v1387))) || ((F.p3985 == v1390))) || ((F.p3985 == v1393))) || ((F.p3985 == v1396))) || ((F.p3985 == v1402))) || ((F.p3985 == v1411))) || ((F.p3985 == v1417))) || ((F.p3985 == v1420))) || ((F.p3985 == v1444))) || ((F.p3985 == v1447))) || ((F.p3985 == v1456))) || ((F.p3985 == v1459))) || ((F.p3985 == v1462))) || ((F.p3985 == v1465))) || ((F.p3985 == v1474)));
if ((F.p3987 && (!Y_DEFI(F.v10363)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_name), y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3987) && Y_DEFI(F.v10363))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_name), y_str(" returns no value", 17));
}
if ((((F.p3985 == v1366)) || ((F.p3985 == v1369)))) {
yr3927_NArgs(F.p3986, INT64_C(2));
yr3068_Expr(yr3920_Arg(F.p3986, INT64_C(1)), ((void *)0), &F.v10335, &F.v10345);
if ((!yr2514_IsArrayLike(Y_DEFP(F.v10345)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_name), y_str(" of something that is not an array", 34));
}
F.v10337 = yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(2)));
yr2920_Manifest(yr3920_Arg(F.p3986, INT64_C(2)), &F.v10359, &F.v10357);
F.p3989 = yr3151_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(F.v10359) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v822)))) {
if ((((Y_DEFI(F.v10357) < INT64_C(1))) || ((Y_DEFI(F.v10357) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_nidx))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("no such dimension", 17));
}
F.v10351 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_idx);
F.lo10377 = INT64_C(2);
F.hi10378 = Y_DEFI(F.v10357);
{ rt_int hi10382 = F.hi10378;
for (rt_int i10381 = F.lo10377; i10381 <= hi10382; i10381++) { F.c_10380 = i10381; Y_TICK();
F.v10351 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10351)))).f_link);
if (i10381 == hi10382) break;
}}
F.p3989 = Y_DEFP(F.v10351);
}
if ((F.p3985 == v1366)) {
F.p3988 = yr3157_Call2(y_str("y_low", 5), Y_DEFI(F.v10335), Y_DEFI(F.v10337));
} else {
F.p3988 = yr3157_Call2(y_str("y_high", 6), Y_DEFI(F.v10335), Y_DEFI(F.v10337));
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((((((F.p3985 == v1372)) || ((F.p3985 == v1375))) || ((F.p3985 == v1378))) || ((F.p3985 == v1381)))) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3068_Expr(yr3920_Arg(F.p3986, INT64_C(1)), ((void *)0), &F.v10335, &F.v10345);
if ((!yr2502_IsDiscrete(Y_DEFP(F.v10345)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_name), y_str(" of something that is not integer or scalar", 43));
}
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v813)) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_ordered)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_name), y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem) == ((void *)0)))) {
F.v10345 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem);
}
if ((((((F.p3985 == v1378)) || ((F.p3985 == v1381)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v804)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3985 == v1378)) {
F.p3989 = Y_DEFP(F.v10345);
F.p3988 = yr2632_LoText(Y_DEFP(F.v10345));
} else if ((F.p3985 == v1381)) {
F.p3989 = Y_DEFP(F.v10345);
F.p3988 = yr2638_HiText(Y_DEFP(F.v10345));
} else {
F.p3989 = yr3151_Unbounded(Y_DEFP(F.v10345));
yr1026_SB();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v804))) {
yr1037_SA(y_str("y_range(", 8));
}
if ((F.p3985 == v1372)) {
yr1037_SA(y_str("y_add(", 6));
} else {
yr1037_SA(y_str("y_sub(", 6));
}
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", 1)", 4));
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v804))) {
yr1037_SA(y_str(", 0, ", 5));
yr1050_SI(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(")", 1));
}
F.p3988 = yr1056_SE();
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1384)) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v828, &F.v10335, &F.v10345);
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_forward), y_str(" is not declared", 16));
}
F.v10351 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(" = y_new(sizeof(", 16));
yr1044_ST(yr2551_CType(Y_DEFP(F.v10351)));
yr1037_SA(y_str("));", 3));
if ((yr2526_Deep(Y_DEFP(F.v10351)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10351)))).f_kind) == v825)))) {
yr1037_SA(y_str(" y_initu(", 9));
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10351)));
yr1037_SA(y_str(", y_deref(", 10));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str("));", 3));
} else if ((!(yr3097_UndefValue(Y_DEFP(F.v10351)) == INT64_C(0)))) {
yr1037_SA(y_str(" *(", 3));
yr1044_ST(yr2551_CType(Y_DEFP(F.v10351)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(") = ", 4));
yr1044_ST(yr3097_UndefValue(Y_DEFP(F.v10351)));
yr1037_SA(y_str(";", 1));
}
yr1037_SA(y_str(" })", 3));
F.p3988 = yr1056_SE();
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1462)) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v828, &F.v10335, &F.v10345);
F.p3988 = yr3491_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), Y_DEFI(F.v10335), yr1061_T(y_str("))", 2)));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1387)) {
yr3927_NArgs(F.p3986, INT64_C(3));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v831, &F.v10335, &F.v10345);
yr3068_Expr(yr3920_Arg(F.p3986, INT64_C(2)), Y_DEFP(v1346), &F.v10337, &F.v10347);
if ((!yr2520_IsString(Y_DEFP(F.v10347)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr3068_Expr(yr3920_Arg(F.p3986, INT64_C(3)), Y_DEFP(v1957), &F.v10339, &F.v10349);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFP(v1957), Y_DEFP(F.v10349));
yr1026_SB();
yr1037_SA(y_str("y_open(&", 8));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10337));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10339));
yr1037_SA(y_str(")", 1));
F.p3988 = yr1056_SE();
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((((F.p3985 == v1390)) || ((F.p3985 == v1399)))) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v831, &F.v10335, &F.v10345);
if ((F.p3985 == v1390)) {
F.p3988 = yr3934_Call1(y_str("y_close", 7), yr3942_Addr(Y_DEFI(F.v10335)));
} else {
F.p3989 = Y_DEFP(v1344);
F.p3988 = yr3934_Call1(y_str("y_check_eof", 11), yr3942_Addr(Y_DEFI(F.v10335)));
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1393)) {
yr3927_NArgs(F.p3986, INT64_C(2));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v831, &F.v10335, &F.v10345);
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(2)), v858, &F.v10337, &F.v10347);
F.v10351 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFP(F.v10351), Y_DEFP(F.v10347));
if (yr2545_NonAssignable(Y_DEFP(F.v10351))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2551_CType(Y_DEFP(F.v10351)));
yr1037_SA(y_str(" g; ", 4));
if (yr2526_Deep(Y_DEFP(F.v10351))) {
yr1037_SA(y_str("y_init(", 7));
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10351)));
yr1037_SA(y_str(", &g); ", 7));
}
yr1037_SA(y_str("y_get_value(&", 13));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10351)));
yr1037_SA(y_str(", &g); ", 7));
yr1044_ST(yr3009_StoreText(Y_DEFI(F.v10337), Y_DEFP(F.v10347), yr1061_T(y_str("g", 1)), Y_DEFP(F.v10351), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line)));
yr1037_SA(y_str(" })", 3));
F.p3988 = yr1056_SE();
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1396)) {
yr3927_NArgs(F.p3986, INT64_C(2));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v831, &F.v10335, &F.v10345);
F.v10351 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem);
yr3068_Expr(yr3920_Arg(F.p3986, INT64_C(2)), Y_DEFP(F.v10351), &F.v10337, &F.v10347);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFP(F.v10351), Y_DEFP(F.v10347));
if (yr2545_NonAssignable(Y_DEFP(F.v10351))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2551_CType(Y_DEFP(F.v10351)));
yr1037_SA(y_str(" pv = ", 6));
yr1044_ST(yr3001_Convert(Y_DEFI(F.v10337), Y_DEFP(F.v10351), Y_DEFP(F.v10347)));
yr1037_SA(y_str("; y_put_value(&", 15));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2557_DescOf(Y_DEFP(F.v10351)));
yr1037_SA(y_str(", &pv); })", 10));
F.p3988 = yr1056_SE();
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1402)) {
F.v10353 = yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3986))).f_a));
if ((((Y_DEFI(F.v10353) < INT64_C(5))) || ((!((y_mod((y_sub(Y_DEFI(F.v10353), INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("MOVE takes an object, an index and triples", 42));
}
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v858, &F.v10335, &F.v10345);
if (((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v843))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_nidx) == INT64_C(1)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("MOVE works on one-dimensional arrays", 36));
}
F.v10337 = yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(2)));
F.v10343 = yr1200_Fresh(y_str("at", 2));
yr1026_SB();
yr1037_SA(y_str("({ rt_int ", 10));
yr1044_ST(Y_DEFI(F.v10343));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v10337));
yr1037_SA(y_str(";", 1));
F.p3988 = yr1056_SE();
F.v10355 = INT64_C(3);
while ((Y_DEFI(F.v10355) < Y_DEFI(F.v10353))) {
Y_TICK();
yr3068_Expr(yr3920_Arg(F.p3986, Y_DEFI(F.v10355)), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem), &F.v10339, &F.v10349);
if (((!yr2514_IsArrayLike(Y_DEFP(F.v10349))) || (!yr2569_SameType(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10349)))).f_elem))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("MOVE: the components differ in type", 35));
}
F.v10341 = yr3965_IntArg(yr3920_Arg(F.p3986, y_range(y_add(Y_DEFI(F.v10355), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v10337 = yr3965_IntArg(yr3920_Arg(F.p3986, y_range(y_add(Y_DEFI(F.v10355), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3988));
yr1037_SA(y_str(" { rt_int mi = ", 15));
yr1044_ST(Y_DEFI(F.v10341));
yr1037_SA(y_str(", mj = ", 7));
yr1044_ST(Y_DEFI(F.v10337));
yr1037_SA(y_str("; y_move(&", 10));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10343));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10339));
yr1037_SA(y_str(", mi, mj, ", 10));
yr1044_ST(yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_elem)));
yr1037_SA(y_str("); if (mj >= mi) ", 17));
yr1044_ST(Y_DEFI(F.v10343));
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
F.p3988 = yr1056_SE();
F.v10355 = y_range(y_add(Y_DEFI(F.v10355), INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3988 = yr3491_Join(Y_DEFI(F.p3988), yr1061_T(y_str(" })", 3)), INT64_C(0));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((((F.p3985 == v1405)) || ((F.p3985 == v1408)))) {
yr3927_NArgs(F.p3986, INT64_C(2));
F.v10335 = yr3461_Cond(yr3920_Arg(F.p3986, INT64_C(1)));
F.v10337 = yr3461_Cond(yr3920_Arg(F.p3986, INT64_C(2)));
F.p3989 = Y_DEFP(v1344);
if ((F.p3985 == v1405)) {
F.p3988 = yr3174_Infix(yr3049_Paren(yr3174_Infix(Y_DEFI(F.v10335), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr3049_Paren(yr3174_Infix(Y_DEFI(F.v10337), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
} else {
F.p3988 = yr3174_Infix(yr3049_Paren(yr3174_Infix(Y_DEFI(F.v10335), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr3049_Paren(yr3174_Infix(Y_DEFI(F.v10337), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1411)) {
yr3927_NArgs(F.p3986, INT64_C(1));
F.p3988 = yr3934_Call1(y_str("rt_delay", 8), yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(1))));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1414)) {
yr3927_NArgs(F.p3986, INT64_C(0));
F.p3989 = yr3151_Unbounded(Y_DEFP(v1342));
F.p3988 = yr1061_T(y_str("rt_time()", 9));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if (((((F.p3985 == v1417)) || ((F.p3985 == v1420))) || ((F.p3985 == v1423)))) {
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v837, &F.v10335, &F.v10345);
if ((F.p3985 == v1417)) {
if ((yr2044_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3986))).f_a)) == INT64_C(1))) {
F.v10337 = yr1061_T(y_str("1", 1));
} else {
yr3927_NArgs(F.p3986, INT64_C(2));
F.v10337 = yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(2)));
}
F.p3988 = yr3157_Call2(y_str("y_wait", 6), yr3942_Addr(Y_DEFI(F.v10335)), Y_DEFI(F.v10337));
} else {
yr3927_NArgs(F.p3986, INT64_C(1));
if ((F.p3985 == v1420)) {
F.p3988 = yr3934_Call1(y_str("y_send", 6), yr3942_Addr(Y_DEFI(F.v10335)));
} else {
F.p3989 = Y_DEFP(v1344);
F.p3988 = yr3934_Call1(y_str("y_awaited", 9), yr3942_Addr(Y_DEFI(F.v10335)));
}
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if (((((F.p3985 == v1426)) || ((F.p3985 == v1429))) || ((F.p3985 == v1432)))) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3957_NumArg(yr3920_Arg(F.p3986, INT64_C(1)), &F.v10335, &F.v10345);
F.p3989 = yr3151_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v804)) {
F.p3988 = Y_DEFI(F.v10335);
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v807)) {
yr1026_SB();
if ((F.p3985 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3985 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
}
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3988 = yr1056_SE();
} else if ((F.p3985 == v1426)) {
F.p3988 = yr3934_Call1(y_str("y_floor", 7), Y_DEFI(F.v10335));
} else if ((F.p3985 == v1429)) {
F.p3988 = yr3934_Call1(y_str("y_ceiling", 9), Y_DEFI(F.v10335));
} else {
F.p3988 = yr3934_Call1(y_str("y_near_integer", 14), Y_DEFI(F.v10335));
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1438)) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3957_NumArg(yr3920_Arg(F.p3986, INT64_C(1)), &F.v10335, &F.v10345);
F.p3989 = Y_DEFP(v1354);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v807)) {
F.p3988 = yr3203_FixToFloat(Y_DEFI(F.v10335), Y_DEFP(F.v10345));
} else {
F.p3988 = yr3491_Join(yr1061_T(y_str("((double)(", 10)), Y_DEFI(F.v10335), yr1061_T(y_str("))", 2)));
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1435)) {
yr3927_NArgs(F.p3986, INT64_C(2));
yr3957_NumArg(yr3920_Arg(F.p3986, INT64_C(1)), &F.v10335, &F.v10345);
F.p3989 = yr3977_ManifestScale(yr3920_Arg(F.p3986, INT64_C(2)), F.p3986);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_fix_of_float(", 15));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3989)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3989)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3988 = yr1056_SE();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v804)) {
F.v10349 = yr2496_CopyRep(Y_DEFP(v1356));
yr2698_SetScale(Y_DEFP(F.v10349), INT64_C(1), INT64_C(1));
F.v10335 = yr3491_Join(yr1061_T(y_str("((yfix)(", 8)), Y_DEFI(F.v10335), yr1061_T(y_str("))", 2)));
} else {
F.v10349 = Y_DEFP(F.v10345);
}
yr2681_ScaleRatio(Y_DEFP(F.v10349), Y_DEFP(F.p3989), &F.v10341, &F.v10343, &F.v10359);
yr1026_SB();
yr1037_SA(y_str("y_fix_near(", 11));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10341));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10343));
yr1037_SA(y_str(")", 1));
F.p3988 = yr1056_SE();
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1441)) {
yr3927_NArgs(F.p3986, INT64_C(3));
yr3957_NumArg(yr3920_Arg(F.p3986, INT64_C(1)), &F.v10335, &F.v10345);
yr3957_NumArg(yr3920_Arg(F.p3986, INT64_C(2)), &F.v10337, &F.v10347);
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v807))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10347)))).f_kind) == v807))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFP(F.v10345), Y_DEFP(F.v10347));
F.p3989 = yr3977_ManifestScale(yr3920_Arg(F.p3986, INT64_C(3)), F.p3986);
((*(yR110 *)y_deref(Y_DEFP(F.p3989)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3989)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_tname);
F.v10349 = yr2496_CopyRep(Y_DEFP(v1356));
yr2698_SetScale(Y_DEFP(F.v10349), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10347)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3989)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line)), yr2665_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10347)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3989)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line)));
yr2681_ScaleRatio(Y_DEFP(F.v10345), Y_DEFP(F.v10349), &F.v10341, &F.v10343, &F.v10359);
yr1026_SB();
yr1037_SA(y_str("y_fix_div(", 10));
yr1044_ST(Y_DEFI(F.v10335));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10337));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10341));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10343));
yr1037_SA(y_str(")", 1));
F.p3988 = yr1056_SE();
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1450)) {
v1706 = y_range(y_add(Y_DEFI(v1706), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3985 == v1444)) || ((F.p3985 == v1447))) || ((F.p3985 == v1450)))) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v840, &F.v10335, &F.v10345);
if ((F.p3985 == v1444)) {
F.p3988 = yr3934_Call1(y_str("rt_region_enter", 15), yr3942_Addr(Y_DEFI(F.v10335)));
} else if ((F.p3985 == v1447)) {
F.p3988 = yr3934_Call1(y_str("rt_region_leave", 15), yr3942_Addr(Y_DEFI(F.v10335)));
} else {
F.p3989 = Y_DEFP(v1344);
F.p3988 = yr3934_Call1(y_str("y_cond_claim", 12), yr3942_Addr(Y_DEFI(F.v10335)));
}
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1453)) {
yr3927_NArgs(F.p3986, INT64_C(0));
F.p3989 = yr3151_Unbounded(Y_DEFP(v1342));
F.p3988 = yr1061_T(y_str("y_self()", 8));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1456)) {
yr3927_NArgs(F.p3986, INT64_C(2));
F.p3988 = yr3157_Call2(y_str("y_change_priority", 17), yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(1))), yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(2))));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1459)) {
yr3927_NArgs(F.p3986, INT64_C(1));
F.p3988 = yr3934_Call1(y_str("y_raise_termination", 19), yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(1))));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1465)) {
yr3927_NArgs(F.p3986, INT64_C(1));
yr3971_CodeInsert(F.p3986);
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((((F.p3985 == v1468)) || ((F.p3985 == v1471)))) {
yr3927_NArgs(F.p3986, INT64_C(1));
F.v10361 = yr3920_Arg(F.p3986, INT64_C(1));
yr3068_Expr(Y_DEFP(F.v10361), ((void *)0), &F.v10335, &F.v10345);
if ((F.p3985 == v1471)) {
F.p3989 = yr3151_Unbounded(Y_DEFP(v1342));
F.p3988 = yr2868_ExtentCode(Y_DEFI(F.v10335), Y_DEFP(F.v10345));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
F.p3989 = Y_DEFP(v1959);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v855)) {
F.p3988 = yr3491_Join(yr1061_T(y_str("y_addr((", 8)), Y_DEFI(F.v10335), yr3491_Join(yr1061_T(y_str(").p, (", 6)), Y_DEFI(F.v10335), yr1061_T(y_str(").words)", 8))));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10361)))).f_kind) == v777)) {
F.v10333 = yr2378_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10361)))).f_name));
if ((!(Y_DEFP(F.v10333) == ((void *)0)))) {
if (yr2431_Resolved(Y_DEFP(F.v10333))) {
F.v10333 = yr2483_Real(Y_DEFP(F.v10333));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10333)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10333)))).f_kind) == v864)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10333)))).f_at) >= INT64_C(0))))) {
F.p3988 = yr3273_Num(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10333)))).f_at));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
}
}
}
if (((!((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10361)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10361)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10361)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10361)))).f_kind) == v789))))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10345)))).f_kind) == v846)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
}
F.p3988 = yr3491_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), yr3103_RawCode(Y_DEFP(F.v10361), Y_DEFI(F.v10335)), yr3491_Join(yr1061_T(y_str("), ", 3)), yr2868_ExtentCode(Y_DEFI(F.v10335), Y_DEFP(F.v10345)), yr1061_T(y_str(")", 1))));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1474)) {
yr3927_NArgs(F.p3986, INT64_C(2));
yr3948_StdVar(yr3920_Arg(F.p3986, INT64_C(1)), v828, &F.v10335, &F.v10345);
F.v10337 = yr3965_IntArg(yr3920_Arg(F.p3986, INT64_C(2)));
F.p3988 = yr3491_Join(yr1061_T(y_str("(", 1)), Y_DEFI(F.v10335), yr3491_Join(yr1061_T(y_str(" = y_cell(y_mem_ptr(", 20)), Y_DEFI(F.v10337), yr1061_T(y_str(")))", 3))));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
}
if ((F.p3985 == v1477)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3986))).f_name), y_str(" is not translated", 18));
(*F.p3988_o) = F.p3988;
(*F.p3989_o) = F.p3989;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3994_ArgCount(void) {
struct yf3995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10589 = Y_UNDEF_I;
(F.v10589) = rt_argc();
((void)0);
{ rt_int rv10590 = Y_DEFI(F.v10589);
y_use = F.yu; return rv10590; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3999_ArgTxt(rt_int a_p4000) {
struct yf4001 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4000 = a_p4000;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_10601, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10601, &F.v10603);
F.v10605 = Y_UNDEF_I;
{ rstr s = rt_arg((F.p4000)); (F.v10605) = s.len > 4096 ? 4096 : s.len; memcpy((F.v10603).p, s.p, (size_t)(F.v10605)); }
((void)0);
yr1026_SB();
F.lo10609 = INT64_C(1);
F.hi10610 = Y_DEFI(F.v10605);
{ rt_int hi10614 = F.hi10610;
for (rt_int i10613 = F.lo10609; i10613 <= hi10614; i10613++) { F.c_10612 = i10613; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10603).p)[y_ix1(F.v10603, F.c_10612)]));
if (i10613 == hi10614) break;
}}
{ rt_int rv10615 = yr1056_SE();
y_use = F.yu; return rv10615; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4005_ReadArgs(void) {
struct yf4006 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10618 = Y_UNDEF_I;
F.v10618 = yr3994_ArgCount();
F.v10620 = Y_UNDEF_I;
F.v10622 = Y_UNDEF_P;
F.v10622 = ((void *)0);
F.v10624 = Y_UNDEF_P;
F.v10624 = ((void *)0);
if ((Y_DEFI(F.v10618) == INT64_C(1))) {
y_use = F.yu; return;
}
if ((Y_DEFI(F.v10618) < INT64_C(3))) {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
}
F.v10620 = yr3999_ArgTxt(INT64_C(1));
v1717 = yr3999_ArgTxt(INT64_C(2));
if (yr1088_TEq(Y_DEFI(F.v10620), yr1061_T(y_str("-i", 2)))) {
v1714 = v1504;
} else if (yr1088_TEq(Y_DEFI(F.v10620), yr1061_T(y_str("-c", 2)))) {
v1714 = v1507;
} else if (yr1088_TEq(Y_DEFI(F.v10620), yr1061_T(y_str("-l", 2)))) {
v1714 = v1510;
F.lo10639 = INT64_C(3);
F.hi10640 = y_sub(Y_DEFI(F.v10618), INT64_C(1));
{ rt_int hi10644 = F.hi10640;
for (rt_int i10643 = F.lo10639; i10643 <= hi10644; i10643++) { F.c_10642 = i10643; Y_TICK();
F.v10622 = yr2029_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v10622)))).f_name = yr1075_Name(yr3999_ArgTxt(y_range(F.c_10642, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr2036_Link(&v1720, &F.v10624, Y_DEFP(F.v10622));
if (i10643 == hi10644) break;
}}
} else {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4010_LibPath(rt_int a_p4011, yarr a_p4013) {
struct yf4014 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4011 = a_p4011;
F.p4013 = a_p4013;
yr1026_SB();
yr1044_ST(Y_DEFI(v1717));
yr1037_SA(y_str("/", 1));
yr1044_ST(F.p4011);
yr1037_SA(F.p4013);
{ rt_int rv10652 = yr1056_SE();
y_use = F.yu; return rv10652; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4018_ReadInto(rt_int a_p4019) {
volatile
struct yf4020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4019 = a_p4019;
F.v10656 = Y_UNDEF_I;
F.v10656 = 1;
{
F.lo10663 = INT64_C(1);
F.hi10664 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4019)]);
{ rt_int lo[1] = {F.lo10663}, hi[1] = {F.hi10664}; y_desc_array(&F.yd_10666, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10666, &F.v10668);
F.v10672 = Y_UNDEF_B;
{ rt_frame xf10673;
if (RT_TRY(xf10673)) {
F.lo10677 = INT64_C(1);
F.hi10678 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4019)]);
{ rt_int hi10682 = F.hi10678;
for (rt_int i10681 = F.lo10677; i10681 <= hi10682; i10681++) { F.c_10680 = i10681; Y_TICK();
((unsigned char *)(F.v10668).p)[y_ix1(F.v10668, F.c_10680)] = yr1103_TChar(F.p4019, y_range(F.c_10680, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if (i10681 == hi10682) break;
}}
y_open(&F.v10670, F.v10668, 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&F.v10670))) {
Y_TICK();
({ unsigned char g; y_get_value(&F.v10670, &y_d_byte, &g); F.v10672 = g; });
yr1020_PoolAdd(Y_DEFB(F.v10672));
}
v1219 = Y_DEFI(v915);
y_close(&F.v10670);
RT_POP(xf10673);
} else {
RT_POP(xf10673);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10686 = rt_xcur;
if (xc10686 == rt_exc("FILE_ERROR")) {
F.v10656 = 0;
} else {
rt_raise(xc10686);
}
}}
}
{ rt_int rv10688 = Y_DEFI(F.v10656);
y_use = F.yu; return rv10688; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4024_WriteFile(rt_int a_p4025, yR140 a_p4026) {
volatile
struct yf4027 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4025 = a_p4025;
F.p4026 = a_p4026;
F.v10693 = Y_UNDEF_P;
F.v10693 = Y_DEFP((F.p4026).f_head);
{
F.lo10699 = INT64_C(1);
F.hi10700 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4025)]);
{ rt_int lo[1] = {F.lo10699}, hi[1] = {F.hi10700}; y_desc_array(&F.yd_10702, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10702, &F.v10704);
{ rt_frame xf10707;
if (RT_TRY(xf10707)) {
F.lo10711 = INT64_C(1);
F.hi10712 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4025)]);
{ rt_int hi10716 = F.hi10712;
for (rt_int i10715 = F.lo10711; i10715 <= hi10716; i10715++) { F.c_10714 = i10715; Y_TICK();
((unsigned char *)(F.v10704).p)[y_ix1(F.v10704, F.c_10714)] = yr1103_TChar(F.p4025, y_range(F.c_10714, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if (i10715 == hi10716) break;
}}
y_open(&F.v10706, F.v10704, 1);
while ((!(Y_DEFP(F.v10693) == ((void *)0)))) {
Y_TICK();
yr1171_WriteTo(&F.v10706, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10693)))).f_t));
({ unsigned char pv = 10; y_put_value(&F.v10706, &y_d_byte, &pv); });
F.v10693 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10693)))).f_next);
}
y_close(&F.v10706);
RT_POP(xf10707);
} else {
RT_POP(xf10707);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10719 = rt_xcur;
if (xc10719 == rt_exc("FILE_ERROR")) {
yr1186_FailN(INT64_C(0), F.p4025, y_str(" cannot be written", 18));
} else {
rt_raise(xc10719);
}
}}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4031_ReadLibLine(rt_int a_p4032) {
struct yf4033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4032 = a_p4032;
F.v10725 = Y_UNDEF_I;
if ((!yr4018_ReadInto(F.p4032))) {
{ rt_int rv10727 = INT64_C(0);
y_use = F.yu; return rv10727; }
}
F.v10725 = Y_DEFI(v1216);
while ((((Y_DEFI(F.v10725) <= Y_DEFI(v1219))) && ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v10725))]) == 10))))) {
Y_TICK();
F.v10725 = y_range(y_add(Y_DEFI(F.v10725), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10732 = yr1068_Intern(Y_DEFI(v1216), y_range(y_sub(Y_DEFI(F.v10725), Y_DEFI(v1216)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv10732; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4037_DigitsIn(rt_int a_p4038, rt_int a_p4039) {
struct yf4040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4038 = a_p4038;
F.p4039 = a_p4039;
F.v10737 = Y_UNDEF_I;
F.v10737 = F.p4038;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(70)}; y_desc_array(&F.yd_10746, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10746, &F.v10748);
F.v10750 = Y_UNDEF_I;
F.v10750 = INT64_C(0);
if ((Y_DEFI(F.v10737) < INT64_C(0))) {
yr1031_SC(45);
F.v10737 = y_range(y_neg(Y_DEFI(F.v10737)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v10750 = y_range(y_add(Y_DEFI(F.v10750), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((y_mod(Y_DEFI(F.v10737), F.p4039)) < INT64_C(10))) {
((unsigned char *)(F.v10748).p)[y_ix1(F.v10748, Y_DEFI(F.v10750))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10737), F.p4039)), INT64_C(48)))]);
} else {
((unsigned char *)(F.v10748).p)[y_ix1(F.v10748, Y_DEFI(F.v10750))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10737), F.p4039)), INT64_C(55)))]);
}
F.v10737 = y_range(y_div(Y_DEFI(F.v10737), F.p4039), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v10737) == INT64_C(0))) {
goto yl_10755;
}
}
yl_10755: ;
while ((Y_DEFI(F.v10750) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10748).p)[y_ix1(F.v10748, Y_DEFI(F.v10750))]));
F.v10750 = y_range(y_sub(Y_DEFI(F.v10750), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4044_TokenText(rt_int a_p4045) {
struct yf4046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4045 = a_p4045;
F.v10774 = Y_UNDEF_I;
F.v10774 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.p4045)]);
F.v10776 = Y_UNDEF_I;
F.v10776 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.p4045)]);
if ((((((Y_DEFI(F.v10774) == v207)) || ((Y_DEFI(F.v10774) == v210))) || ((Y_DEFI(F.v10774) == v213))) || ((Y_DEFI(F.v10774) == v222)))) {
yr1044_ST(y_range(Y_DEFI(F.v10776), INT64_C(0), INT64_C(4000000)));
} else if ((Y_DEFI(F.v10774) == v216)) {
yr1050_SI(Y_DEFI(F.v10776));
} else if ((Y_DEFI(F.v10774) == v219)) {
if ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10776))]) == INT64_C(10)))) {
yr1037_SA(y_str("BASE", 4));
yr1050_SI(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10776))]));
yr1037_SA(y_str(" ", 1));
}
yr4037_DigitsIn(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v10776))]), Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10776))]));
yr1037_SA(y_str("P", 1));
yr1050_SI(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v10776))]));
} else if ((Y_DEFI(F.v10774) == v225)) {
yr1031_SC(39);
yr1044_ST(y_range(Y_DEFI(F.v10776), INT64_C(0), INT64_C(4000000)));
yr1031_SC(39);
} else if ((Y_DEFI(F.v10774) == v228)) {
yr1031_SC(34);
yr1044_ST(y_range(Y_DEFI(F.v10776), INT64_C(0), INT64_C(4000000)));
yr1031_SC(34);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static yR140 yr4050_TokensText(rt_int a_p4051, rt_int a_p4052) {
struct yf4053 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4051 = a_p4051;
F.p4052 = a_p4052;
y_initu(&yd_141, &F.v10789);
F.v10789 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v10791 = Y_UNDEF_I;
F.v10791 = F.p4051;
F.v10793 = Y_UNDEF_I;
while ((Y_DEFI(F.v10791) < F.p4052)) {
Y_TICK();
F.v10793 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v10791))]);
yr1026_SB();
while ((((Y_DEFI(F.v10791) < F.p4052)) && ((Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v10791))]) == Y_DEFI(F.v10793))))) {
Y_TICK();
yr4044_TokenText(Y_DEFI(F.v10791));
yr1037_SA(y_str(" ", 1));
F.v10791 = y_range(y_add(Y_DEFI(F.v10791), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1110_Put(&F.v10789, yr1056_SE());
}
{ yR140 rv10797 = F.v10789;
y_use = F.yu; return rv10797; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4057_Fingerprint(yR140 a_p4058) {
struct yf4059 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4058 = a_p4058;
F.v10801 = Y_UNDEF_I;
F.v10801 = INT64_C(7);
F.v10804 = Y_UNDEF_P;
F.v10804 = Y_DEFP((F.p4058).f_head);
while ((!(Y_DEFP(F.v10804) == ((void *)0)))) {
Y_TICK();
F.lo10808 = INT64_C(1);
F.hi10809 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10804)))).f_t))]);
{ rt_int hi10813 = F.hi10809;
for (rt_int i10812 = F.lo10808; i10812 <= hi10813; i10812++) { F.c_10811 = i10812; Y_TICK();
F.v10801 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v10801), INT64_C(131))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10804)))).f_t), y_range(F.c_10811, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i10812 == hi10813) break;
}}
F.v10801 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v10801), INT64_C(131))), INT64_C(10))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10804 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10804)))).f_next);
}
{ rt_int rv10825 = Y_DEFI(F.v10801);
y_use = F.yu; return rv10825; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4063_TokEq(rt_int a_p4064, rt_int a_p4065, rt_int a_p4066, rt_int a_p4067) {
struct yf4068 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4064 = a_p4064;
F.p4065 = a_p4065;
F.p4066 = a_p4066;
F.p4067 = a_p4067;
F.v10832 = Y_UNDEF_I;
F.v10834 = Y_UNDEF_I;
if ((!((y_sub(F.p4065, F.p4064)) == (y_sub(F.p4067, F.p4066))))) {
{ rt_int rv10838 = 0;
y_use = F.yu; return rv10838; }
}
F.v10832 = F.p4064;
F.v10834 = F.p4066;
while ((Y_DEFI(F.v10832) < F.p4065)) {
Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10832))]) == Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10834))])))) {
{ rt_int rv10840 = 0;
y_use = F.yu; return rv10840; }
}
if ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10832))]) == v219)) {
if (((((!(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10832))]))]) == Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10834))]))])))) || ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10832))]))]) == Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10834))]))]))))) || ((!(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10832))]))]) == Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10834))]))])))))) {
{ rt_int rv10842 = 0;
y_use = F.yu; return rv10842; }
}
} else if (((((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10832))]) == v228)) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10832))]) == v222))) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10832))]) == v225)))) {
if ((!yr1088_TEq(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10832))]), INT64_C(0), INT64_C(4000000)), y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10834))]), INT64_C(0), INT64_C(4000000))))) {
{ rt_int rv10844 = 0;
y_use = F.yu; return rv10844; }
}
} else if ((!(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10832))]) == Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10834))])))) {
{ rt_int rv10846 = 0;
y_use = F.yu; return rv10846; }
}
F.v10832 = y_range(y_add(Y_DEFI(F.v10832), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10834 = y_range(y_add(Y_DEFI(F.v10834), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10852 = 1;
y_use = F.yu; return rv10852; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4072_CheckSynopsis(void * a_p4073, rt_int a_p4074) {
struct yf4075 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4073 = a_p4073;
F.p4074 = a_p4074;
F.v10857 = Y_UNDEF_P;
F.v10859 = Y_UNDEF_P;
F.v10861 = Y_UNDEF_P;
F.v10861 = Y_DEFP(((*(yR105 *)y_deref(F.p4073))).f_c);
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10861)))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10861)))).f_b) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4073))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4073))).f_name), y_str(": a synopsis has declarations only, no statements (XIII.B)", 58));
}
if (F.p4074) {
F.v10859 = Y_DEFP(((*(yR105 *)y_deref(F.p4073))).f_a);
while ((!(Y_DEFP(F.v10859) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10859)))).f_text) == INT64_C(0))) && (!yr4079_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10859)))).f_name))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10859)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10859)))).f_name), y_str(" is not a segment: a synopsis imports segments and what they export (XIII.C)", 76));
}
F.v10859 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10859)))).f_next);
}
}
F.v10857 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10861)))).f_a);
while ((!(Y_DEFP(F.v10857) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_kind) == v654)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_e) == ((void *)0))))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_kind) == v666)))) {
if (((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_c)))).f_a) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_c)))).f_b) == ((void *)0))))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_c)))).f_c) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_name), y_str(": a synopsis gives the header of a routine, not its body (XIII.E)", 65));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_kind) == v624)) {
yr4072_CheckSynopsis(Y_DEFP(F.v10857), 0);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_kind) == v660)) {
yr4072_CheckSynopsis(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_b), 0);
}
F.v10857 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10857)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4079_IsSegment(rt_int a_p4080) {
struct yf4081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4080 = a_p4080;
F.v10871 = Y_UNDEF_P;
F.v10871 = Y_DEFP(v1963);
while ((!(Y_DEFP(F.v10871) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10871)))).f_name) == F.p4080)) {
{ rt_int rv10873 = 1;
y_use = F.yu; return rv10873; }
}
F.v10871 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10871)))).f_next);
}
{ rt_int rv10875 = 0;
y_use = F.yu; return rv10875; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4085_CheckPairing(void * a_p4086, void * a_p4087) {
struct yf4088 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4086 = a_p4086;
F.p4087 = a_p4087;
F.v10880 = Y_UNDEF_P;
F.v10882 = Y_UNDEF_P;
F.v10884 = Y_UNDEF_I;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p4086))).f_flag) == Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_flag)))) || (!yr4063_TokEq(Y_DEFI(((*(yR105 *)y_deref(F.p4086))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4086))).f_t1), Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_t1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_name), y_str(": the segment imports and exports what its synopsis does, and nothing else (XIII.C)", 83));
}
F.v10880 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4086))).f_c)))).f_a);
while ((!(Y_DEFP(F.v10880) == ((void *)0)))) {
Y_TICK();
F.v10884 = 0;
F.v10882 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4087))).f_c)))).f_a);
while ((((!(Y_DEFP(F.v10882) == ((void *)0)))) && (!Y_DEFI(F.v10884)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_kind))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_kind) == v624)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_name))) {
yr4085_CheckPairing(Y_DEFP(F.v10880), Y_DEFP(F.v10882));
F.v10884 = 1;
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_kind) == v660)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_name))) {
yr4085_CheckPairing(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_b), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_b));
F.v10884 = 1;
}
} else if (yr4063_TokEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_t1), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_t1))) {
F.v10884 = 1;
}
}
F.v10882 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10882)))).f_next);
}
if ((!Y_DEFI(F.v10884))) {
yr1026_SB();
yr1037_SA(y_str("the declaration of line ", 24));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_line));
yr1037_SA(y_str(" of the synopsis of ", 20));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_name));
yr1037_SA(y_str(" is not in the segment as it is there (XIII.I)", 46));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p4087))).f_line), yr1056_SE());
}
F.v10880 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10880)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4092_PairInInput(void) {
struct yf4093 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10895 = Y_UNDEF_P;
F.v10897 = Y_UNDEF_P;
F.v10899 = Y_UNDEF_P;
F.v10899 = ((void *)0);
F.v10895 = Y_DEFP(v1963);
while ((!(Y_DEFP(F.v10895) == ((void *)0)))) {
Y_TICK();
F.v10897 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10895)))).f_next);
while ((((!(Y_DEFP(F.v10897) == ((void *)0)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10897)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10895)))).f_name)))))) {
Y_TICK();
F.v10897 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10897)))).f_next);
}
if ((!(Y_DEFP(F.v10897) == ((void *)0)))) {
yr4072_CheckSynopsis(Y_DEFP(F.v10895), 1);
yr4085_CheckPairing(Y_DEFP(F.v10895), Y_DEFP(F.v10897));
if ((Y_DEFP(F.v10899) == ((void *)0))) {
v1963 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10895)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v10899)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10895)))).f_next);
}
} else {
F.v10899 = Y_DEFP(F.v10895);
}
F.v10895 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10895)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4097_LoadSynopsis(rt_int a_p4098, rt_int a_p4099) {
struct yf4100 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4098 = a_p4098;
F.p4099 = a_p4099;
F.v10905 = Y_UNDEF_I;
F.v10907 = Y_UNDEF_I;
F.v10909 = Y_UNDEF_I;
F.v10911 = Y_UNDEF_P;
F.v10913 = Y_UNDEF_P;
F.v10915 = Y_UNDEF_P;
F.v10917 = Y_UNDEF_I;
if (yr4079_IsSegment(F.p4098)) {
y_use = F.yu; return;
}
F.v10917 = yr4031_ReadLibLine(yr4010_LibPath(F.p4098, y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10917) == INT64_C(0))) || (!yr4018_ReadInto(yr4010_LibPath(F.p4098, y_str(".ysyn", 5)))))) {
yr1186_FailN(F.p4099, F.p4098, y_str(" is not a segment of the library: no synopsis of it there (XIII.I)", 66));
}
F.v10905 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10909 = Y_DEFI(v1225);
v1225 = INT64_C(1);
yr2024_Lex();
v1225 = Y_DEFI(F.v10909);
F.v10907 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v10905);
F.v10911 = yr2134_ParseModule();
v1249 = Y_DEFI(F.v10907);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10911)))).f_name) == F.p4098))) {
yr1186_FailN(F.p4099, F.p4098, y_str(": its synopsis in the library is of another module", 50));
}
((*(yR105 *)y_deref(Y_DEFP(F.v10911)))).f_d = yr2029_NewNode(v669, F.p4099);
((*(yR105 *)y_deref(Y_DEFP(F.v10911)))).f_next = Y_DEFP(v1963);
v1963 = Y_DEFP(F.v10911);
F.v10915 = yr2029_NewNode(v669, F.p4099);
((*(yR105 *)y_deref(Y_DEFP(F.v10915)))).f_name = F.p4098;
((*(yR105 *)y_deref(Y_DEFP(F.v10915)))).f_text = Y_DEFI(F.v10917);
((*(yR105 *)y_deref(Y_DEFP(F.v10915)))).f_ival = yr4197_FactsPrint(F.p4098);
((*(yR105 *)y_deref(Y_DEFP(F.v10915)))).f_next = Y_DEFP(v1722);
v1722 = Y_DEFP(F.v10915);
yr4104_LoadImports(Y_DEFP(F.v10911));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4104_LoadImports(void * a_p4105) {
struct yf4106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4105 = a_p4105;
F.v10929 = Y_UNDEF_P;
F.v10929 = Y_DEFP(((*(yR105 *)y_deref(F.p4105))).f_a);
while ((!(Y_DEFP(F.v10929) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_text) == INT64_C(0)))) {
yr4097_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_line));
} else if ((!yr4079_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_name)))) {
yr4097_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_line));
}
F.v10929 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10929)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4110_LastSegment(void) {
struct yf4111 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10933 = Y_UNDEF_P;
F.v10933 = Y_DEFP(v1963);
if ((Y_DEFP(F.v10933) == ((void *)0))) {
yr1178_FailS(INT64_C(0), y_str("no segment", 10));
}
while ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10933)))).f_next) == ((void *)0)))) {
Y_TICK();
F.v10933 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10933)))).f_next);
}
{ void * rv10936 = Y_DEFP(F.v10933);
y_use = F.yu; return rv10936; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4115_Interface(void) {
struct yf4116 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10939 = Y_UNDEF_P;
F.v10939 = yr4110_LastSegment();
y_initu(&yd_141, &F.v10941);
F.v10943 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10945);
F.v10945 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr4104_LoadImports(Y_DEFP(F.v10939));
yr4072_CheckSynopsis(Y_DEFP(F.v10939), 1);
((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_d = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_line));
yr4261_Translate();
F.v10941 = yr4050_TokensText(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_x)))).f_ival), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_x)))).f_flag));
F.v10943 = yr4057_Fingerprint(F.v10941);
yr4024_WriteFile(yr4010_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_name), y_str(".ysyn", 5)), F.v10941);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v10943));
yr1110_Put(&F.v10945, yr1056_SE());
yr4024_WriteFile(yr4010_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_name), y_str(".yfp", 4)), F.v10945);
yr1026_SB();
yr1037_SA(y_str("/* the synopsis of ", 19));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10939)))).f_name));
yr1037_SA(y_str(", fingerprint ", 14));
yr1050_SI(Y_DEFI(F.v10943));
yr1037_SA(y_str(" */", 3));
yr1145_WriteTxt(yr1056_SE());
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4120_Segment(void) {
struct yf4121 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10955 = Y_UNDEF_P;
F.v10955 = yr4110_LastSegment();
F.v10957 = Y_UNDEF_P;
F.v10959 = Y_UNDEF_I;
F.v10961 = Y_UNDEF_I;
F.v10963 = Y_UNDEF_I;
F.v10965 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10967);
F.v10967 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v10969 = Y_UNDEF_P;
v1724 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name);
F.v10959 = yr4031_ReadLibLine(yr4010_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name), y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10959) == INT64_C(0))) || (!yr4018_ReadInto(yr4010_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name), y_str(".ysyn", 5)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name), y_str(": its synopsis is not in the library; translate it with -i first (XIII.I)", 73));
}
F.v10961 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10965 = Y_DEFI(v1225);
v1225 = INT64_C(1);
yr2024_Lex();
v1225 = Y_DEFI(F.v10965);
F.v10963 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v10961);
F.v10957 = yr2134_ParseModule();
v1249 = Y_DEFI(F.v10963);
yr4085_CheckPairing(Y_DEFP(F.v10957), Y_DEFP(F.v10955));
F.v10969 = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v10969)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v10969)))).f_text = Y_DEFI(F.v10959);
((*(yR105 *)y_deref(Y_DEFP(F.v10969)))).f_ival = INT64_C(0);
((*(yR105 *)y_deref(Y_DEFP(F.v10969)))).f_next = Y_DEFP(v1722);
v1722 = Y_DEFP(F.v10969);
yr4104_LoadImports(Y_DEFP(F.v10955));
yr4261_Translate();
F.v10969 = Y_DEFP(v1722);
while ((!(Y_DEFP(F.v10969) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10967, yr4191_UseLine(Y_DEFP(F.v10969)));
F.v10969 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10969)))).f_next);
}
yr4024_WriteFile(yr4010_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name), y_str(".yuse", 5)), F.v10967);
yr4131_WriteSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10955)))).f_name));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4125_UsesText(void * a_p4126) {
struct yf4127 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4126 = a_p4126;
F.v10982 = Y_UNDEF_P;
F.v10982 = F.p4126;
yr1026_SB();
while ((!(Y_DEFP(F.v10982) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10982)))).f_t));
yr1037_SA(y_str(";", 1));
F.v10982 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10982)))).f_next);
}
{ rt_int rv10984 = yr1056_SE();
y_use = F.yu; return rv10984; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4131_WriteSegment(rt_int a_p4132) {
struct yf4133 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4132 = a_p4132;
F.v10988 = Y_UNDEF_P;
F.v10988 = Y_DEFP(v1722);
F.v10990 = Y_UNDEF_I;
yr1117_PutS(&v990, y_str("static void y_elaborate(void) {", 31));
yr1125_Append(&v990, &v996);
yr1117_PutS(&v990, y_str("}", 1));
yr1110_Put(&v990, yr3491_Join(yr1061_T(y_str("void ys_", 8)), F.p4132, yr1061_T(y_str("_init(void) { y_elaborate(); }", 30))));
yr1110_Put(&v990, yr3491_Join(yr1061_T(y_str("void ys_", 8)), F.p4132, yr1061_T(y_str("_await(void) {", 14))));
yr1125_Append(&v990, &v1749);
yr1117_PutS(&v990, y_str("}", 1));
yr1026_SB();
yr1037_SA(y_str("const char ys_", 14));
yr1044_ST(F.p4132);
yr1037_SA(y_str("_uses[] = ", 10));
yr1031_SC(34);
while ((!(Y_DEFP(F.v10988) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr4191_UseLine(Y_DEFP(F.v10988)));
yr1037_SA(y_str(";", 1));
F.v10988 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10988)))).f_next);
}
yr1031_SC(34);
yr1037_SA(y_str(";", 1));
yr1110_Put(&v990, yr1056_SE());
yr4271_WriteHead();
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4137_LinkProgram(void) {
struct yf4138 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11006 = Y_UNDEF_P;
F.v11008 = Y_UNDEF_P;
F.v11010 = Y_UNDEF_I;
F.v11012 = Y_UNDEF_I;
F.v11014 = Y_UNDEF_I;
F.v11016 = Y_UNDEF_I;
F.v11018 = Y_UNDEF_I;
F.v11020 = Y_UNDEF_I;
F.v11022 = Y_UNDEF_I;
y_initu(&yd_141, &F.v11024);
F.v11024 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr1117_PutS(&F.v11024, y_str("#include <stdio.h>", 18));
yr1117_PutS(&F.v11024, y_str("#include <stdlib.h>", 19));
yr1117_PutS(&F.v11024, y_str("#include <string.h>", 19));
yr1117_PutS(&F.v11024, y_str("#include \"paleo.h\"", 18));
F.v11006 = Y_DEFP(v1720);
while ((!(Y_DEFP(F.v11006) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11024, yr3491_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), yr1061_T(y_str("_init(void);", 12))));
yr1110_Put(&F.v11024, yr3491_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), yr1061_T(y_str("_await(void);", 13))));
yr1110_Put(&F.v11024, yr3491_Join(yr1061_T(y_str("extern const char ys_", 21)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), yr1061_T(y_str("_uses[];", 8))));
F.v11006 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_next);
}
yr1117_PutS(&F.v11024, y_str("int main(int argc, char **argv) {", 33));
yr1117_PutS(&F.v11024, y_str("y_lang();", 9));
yr1117_PutS(&F.v11024, y_str("rt_init(argc, argv);", 20));
F.v11006 = Y_DEFP(v1720);
while ((!(Y_DEFP(F.v11006) == ((void *)0)))) {
Y_TICK();
if ((!yr4018_ReadInto(yr4010_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), y_str(".yuse", 5))))) {
yr1186_FailN(INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), y_str(" has not been translated as a segment of this library (XIII.I)", 62));
}
yr1026_SB();
F.v11020 = Y_DEFI(v1216);
F.v11018 = Y_DEFI(F.v11020);
F.v11022 = Y_DEFI(v1219);
while ((Y_DEFI(F.v11020) <= Y_DEFI(F.v11022))) {
Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11020))]) == 10)) {
F.v11016 = yr1068_Intern(Y_DEFI(F.v11018), y_range(y_sub(Y_DEFI(F.v11020), Y_DEFI(F.v11018)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr4142_CheckUse(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), Y_DEFI(F.v11016));
yr1044_ST(Y_DEFI(F.v11016));
yr1037_SA(y_str(";", 1));
F.v11018 = y_range(y_add(Y_DEFI(F.v11020), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v11020 = y_range(y_add(Y_DEFI(F.v11020), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v11010 = yr1056_SE();
yr1026_SB();
yr1037_SA(y_str("if (strcmp(ys_", 14));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name));
yr1037_SA(y_str("_uses, ", 7));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v11010));
yr1031_SC(34);
yr1037_SA(y_str(") != 0) { fprintf(stderr, ", 26));
yr1031_SC(34);
yr1037_SA(y_str("*** segment ", 12));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name));
yr1037_SA(y_str(" is out of date: translate it again (XIII.I)\\n", 46));
yr1031_SC(34);
yr1037_SA(y_str("); exit(2); }", 13));
yr1110_Put(&F.v11024, yr1056_SE());
F.v11006 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_next);
}
F.v11006 = Y_DEFP(v1720);
while ((!(Y_DEFP(F.v11006) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11024, yr3491_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), yr1061_T(y_str("_init();", 8))));
F.v11006 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_next);
}
F.v11006 = Y_DEFP(v1720);
while ((!(Y_DEFP(F.v11006) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v11024, yr3491_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_name), yr1061_T(y_str("_await();", 9))));
F.v11006 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11006)))).f_next);
}
yr1117_PutS(&F.v11024, y_str("rt_main_done();", 15));
yr1117_PutS(&F.v11024, y_str("return 0;", 9));
yr1117_PutS(&F.v11024, y_str("}", 1));
yr1151_WriteBuf(F.v11024);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4142_CheckUse(rt_int a_p4143, rt_int a_p4144) {
struct yf4145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4143 = a_p4143;
F.p4144 = a_p4144;
F.v11069 = Y_UNDEF_I;
F.v11069 = INT64_C(1);
F.v11072 = Y_UNDEF_I;
F.v11072 = INT64_C(1);
F.v11075 = Y_UNDEF_I;
F.v11077 = Y_UNDEF_I;
F.v11079 = Y_UNDEF_I;
F.v11081 = Y_UNDEF_I;
F.v11083 = Y_UNDEF_P;
F.v11083 = Y_DEFP(v1720);
F.v11085 = Y_UNDEF_I;
F.v11085 = 0;
while ((((Y_DEFI(F.v11069) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4144)]))) && ((!(yr1103_TChar(F.p4144, Y_DEFI(F.v11069)) == 32))))) {
Y_TICK();
F.v11069 = y_range(y_add(Y_DEFI(F.v11069), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v11075 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4144)]), y_range(y_sub(Y_DEFI(F.v11069), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v11072 = y_range(y_add(Y_DEFI(F.v11069), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v11072) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4144)]))) && ((!(yr1103_TChar(F.p4144, Y_DEFI(F.v11072)) == 32))))) {
Y_TICK();
F.v11072 = y_range(y_add(Y_DEFI(F.v11072), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v11077 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4144)]), Y_DEFI(F.v11069)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v11072), Y_DEFI(F.v11069))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v11081 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4144)]), Y_DEFI(F.v11072)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4144)]), Y_DEFI(F.v11072)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v11079 = yr4031_ReadLibLine(yr4010_LibPath(Y_DEFI(F.v11075), y_str(".yfp", 4)));
if ((((Y_DEFI(F.v11079) == INT64_C(0))) || ((!(Y_DEFI(F.v11079) == Y_DEFI(F.v11077)))))) {
yr1157_Fail(INT64_C(0), yr3491_Join(F.p4143, yr3491_Join(yr1061_T(y_str(" was translated with an outdated synopsis of ", 45)), Y_DEFI(F.v11075), INT64_C(0)), yr1061_T(y_str(": translate it again (XIII.I)", 29))));
}
if ((((!(Y_DEFI(F.v11081) == yr1081_N(y_str("none", 4))))) && ((!(Y_DEFI(F.v11081) == yr4197_FactsPrint(Y_DEFI(F.v11075))))))) {
yr1157_Fail(INT64_C(0), yr3491_Join(F.p4143, yr3491_Join(yr1061_T(y_str(" was translated with what the segment ", 38)), Y_DEFI(F.v11075), INT64_C(0)), yr1061_T(y_str(" was then: translate it again (XIII.I)", 38))));
}
while ((!(Y_DEFP(F.v11083) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11083)))).f_name) == Y_DEFI(F.v11075))) {
F.v11085 = 1;
}
F.v11083 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11083)))).f_next);
}
if ((!Y_DEFI(F.v11085))) {
yr1157_Fail(INT64_C(0), yr3491_Join(F.p4143, yr1061_T(y_str(" imports the segment ", 21)), yr3491_Join(Y_DEFI(F.v11075), yr1061_T(y_str(", which is not linked (XIII.A)", 30)), INT64_C(0))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4149_SegKey(rt_int a_p4150, rt_int a_p4151) {
struct yf4152 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4150 = a_p4150;
F.p4151 = a_p4151;
F.v11123 = Y_UNDEF_B;
yr1026_SB();
yr1037_SA(y_str("ys", 2));
F.lo11128 = INT64_C(1);
F.hi11129 = Y_DEFI(v1733);
{ rt_int hi11133 = F.hi11129;
for (rt_int i11132 = F.lo11128; i11132 <= hi11133; i11132++) { F.c_11131 = i11132; Y_TICK();
yr1037_SA(y_str("_", 1));
yr1044_ST(Y_DEFI(((rt_int *)(v1745).p)[y_ix1(v1745, F.c_11131)]));
if (i11132 == hi11133) break;
}}
yr1037_SA(y_str("__", 2));
F.lo11139 = INT64_C(1);
F.hi11140 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4150)]);
{ rt_int hi11144 = F.hi11140;
for (rt_int i11143 = F.lo11139; i11143 <= hi11144; i11143++) { F.c_11142 = i11143; Y_TICK();
F.v11123 = yr1103_TChar(F.p4150, y_range(F.c_11142, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((yr1008_IsLetter(Y_DEFB(F.v11123)) || yr1014_IsDigit(Y_DEFB(F.v11123)))) {
yr1031_SC(Y_DEFB(F.v11123));
} else {
yr1037_SA(y_str("_x", 2));
yr1050_SI(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(F.v11123))]));
}
if (i11143 == hi11144) break;
}}
if ((!(F.p4151 == INT64_C(0)))) {
yr1037_SA(y_str("__", 2));
yr1050_SI(F.p4151);
}
{ rt_int rv11148 = yr1056_SE();
y_use = F.yu; return rv11148; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4156_HeaderHash(void * a_p4157) {
struct yf4158 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4157 = a_p4157;
{ rt_int rv11151 = yr4057_Fingerprint(yr4050_TokensText(Y_DEFI(((*(yR105 *)y_deref(F.p4157))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4157))).f_t1)));
y_use = F.yu; return rv11151; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4162_ParamList(void * a_p4163) {
struct yf4164 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4163 = a_p4163;
F.v11155 = Y_UNDEF_P;
F.v11155 = Y_DEFP(((*(yR125 *)y_deref(F.p4163))).f_params);
F.v11157 = Y_UNDEF_I;
F.v11157 = 1;
yr1026_SB();
yr1037_SA(y_str("(", 1));
while ((!(Y_DEFP(F.v11155) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v11157))) {
yr1037_SA(y_str(", ", 2));
}
F.v11157 = 0;
yr1044_ST(yr3612_ParamCType(Y_DEFP(F.v11155)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11155)))).f_cname));
F.v11155 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11155)))).f_next);
}
if (Y_DEFI(F.v11157)) {
yr1037_SA(y_str("void", 4));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv11165 = yr1056_SE();
y_use = F.yu; return rv11165; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4168_SegStorage(void * a_p4169, void * a_p4170, rt_int a_p4171) {
struct yf4172 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4169 = a_p4169;
F.p4170 = a_p4170;
F.p4171 = a_p4171;
F.v11171 = Y_UNDEF_I;
F.v11173 = Y_UNDEF_P;
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((Y_DEFI(v1733) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11171 = yr4149_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4169))).f_name), INT64_C(0));
if ((((Y_DEFI(v1727) > INT64_C(0))) || ((Y_DEFI(v1730) > INT64_C(0))))) {
((*(yR125 *)y_deref(F.p4169))).f_skey = Y_DEFI(F.v11171);
}
if ((Y_DEFI(v1727) > INT64_C(0))) {
yr1110_Put(&v984, yr3491_Join(yr1061_T(y_str("extern ", 7)), yr2551_CType(F.p4170), yr3491_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v11171), yr1061_T(y_str(";", 1)))));
((*(yR125 *)y_deref(F.p4169))).f_cname = yr3491_Join(yr1061_T(y_str("(*", 2)), Y_DEFI(F.v11171), yr1061_T(y_str(")", 1)));
((*(yR125 *)y_deref(F.p4169))).f_level = INT64_C(0);
F.v11173 = yr2029_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11173)))).f_sym = F.p4169;
((*(yR105 *)y_deref(Y_DEFP(F.v11173)))).f_next = Y_DEFP(v1751);
v1751 = Y_DEFP(F.v11173);
} else if ((Y_DEFI(v1730) > INT64_C(0))) {
yr1110_Put(&v1747, yr3491_Join(yr2551_CType(F.p4170), yr3491_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v11171), yr1061_T(y_str(" = &", 4))), yr3491_Join(Y_DEFI(((*(yR125 *)y_deref(F.p4169))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4176_SegRoutine(void * a_p4177, void * a_p4178, rt_int a_p4179) {
struct yf4180 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4177 = a_p4177;
F.p4178 = a_p4178;
F.p4179 = a_p4179;
F.v11197 = Y_UNDEF_I;
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4177))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1733) == INT64_C(0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4178))).f_e) == ((void *)0)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(v1727) == INT64_C(0))) && ((Y_DEFI(v1730) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11197 = yr4149_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4177))).f_name), yr4156_HeaderHash(F.p4178));
if ((F.p4179 == v885)) {
F.v11197 = yr3491_Join(Y_DEFI(F.v11197), yr1061_T(y_str("_act", 4)), INT64_C(0));
}
((*(yR125 *)y_deref(F.p4177))).f_skey = Y_DEFI(F.v11197);
if ((Y_DEFI(v1727) > INT64_C(0))) {
((*(yR125 *)y_deref(F.p4177))).f_hasmv = 1;
yr1026_SB();
yr1037_SA(y_str("extern ", 7));
if ((F.p4179 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4177))).f_ret)));
}
yr1037_SA(y_str(" (*", 3));
yr1044_ST(Y_DEFI(F.v11197));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4162_ParamList(F.p4177));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v986, yr1056_SE());
((*(yR125 *)y_deref(F.p4177))).f_cname = Y_DEFI(F.v11197);
if ((!Y_DEFI(((*(yR125 *)y_deref(F.p4177))).f_func))) {
((*(yR125 *)y_deref(F.p4177))).f_writes = yr2029_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p4178))).f_line));
}
} else if ((F.p4179 == v876)) {
yr1026_SB();
yr1044_ST(yr2551_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4177))).f_ret)));
yr1037_SA(y_str(" (*", 3));
yr1044_ST(Y_DEFI(F.v11197));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4162_ParamList(F.p4177));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4177))).f_cname));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v1747, yr1056_SE());
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4184_SegActivation(void * a_p4185, void * a_p4186) {
struct yf4187 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4185 = a_p4185;
F.p4186 = a_p4186;
F.v11219 = Y_UNDEF_I;
F.v11221 = Y_UNDEF_I;
F.v11223 = Y_UNDEF_I;
F.v11225 = Y_UNDEF_I;
F.v11227 = Y_UNDEF_I;
F.v11229 = Y_UNDEF_I;
F.v11231 = Y_UNDEF_P;
F.v11233 = Y_UNDEF_P;
F.v11235 = Y_UNDEF_I;
F.v11237 = Y_UNDEF_I;
F.v11237 = INT64_C(0);
y_initu(&yd_141, &F.v11240);
F.v11240 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4185))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1733) == INT64_C(0)))) || ((Y_DEFI(v1730) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v11219 = yr3491_Join(yr4149_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4185))).f_name), yr4156_HeaderHash(F.p4186)), yr1061_T(y_str("_act", 4)), INT64_C(0));
F.v11221 = yr1200_Fresh(y_str("ysa", 3));
yr1110_Put(&F.v11240, yr3491_Join(yr1061_T(y_str("static void ", 12)), Y_DEFI(F.v11221), yr4162_ParamList(F.p4185)));
F.v11223 = yr1061_T(y_str("pf", 2));
yr1117_PutS(&F.v11240, y_str("{", 1));
yr1110_Put(&F.v11240, yr3491_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p4185))).f_members)))).f_name), yr3491_Join(yr1061_T(y_str(" *pf = rt_alloc(sizeof *pf);", 28)), INT64_C(0), INT64_C(0))));
F.v11231 = Y_DEFP(((*(yR125 *)y_deref(F.p4185))).f_params);
while ((!(Y_DEFP(F.v11231) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cls) == v897)) && yr2526_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_rep)))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_rep)))).f_kind) == v843)) {
yr1110_Put(&F.v11240, yr3491_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2557_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_rep)))).f_elem)), yr3491_Join(yr1061_T(y_str("), &pf->", 8)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cname), yr3491_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cname), yr1061_T(y_str(");", 2))))));
} else {
yr1110_Put(&F.v11240, yr3491_Join(yr1061_T(y_str("y_copy(", 7)), yr2557_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_rep)), yr3491_Join(yr1061_T(y_str(", &pf->", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cname), yr3491_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cname), yr1061_T(y_str(");", 2))))));
}
} else {
yr1110_Put(&F.v11240, yr3491_Join(yr1061_T(y_str("pf->", 4)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cname), yr3491_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_cname), yr1061_T(y_str(";", 1)))));
}
F.v11231 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v11231)))).f_next);
}
F.v11225 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4186))).f_e) == ((void *)0)))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4186))).f_e), Y_DEFP(v1342), &F.v11225, &F.v11233);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4186))).f_line), Y_DEFP(v1342), Y_DEFP(F.v11233));
}
F.v11227 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4186))).f_d) == ((void *)0)))) {
yr3068_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4186))).f_d), Y_DEFP(v1342), &F.v11229, &F.v11233);
yr2584_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4186))).f_line), Y_DEFP(v1342), Y_DEFP(F.v11233));
F.v11227 = yr3491_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v11229), INT64_C(0));
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4186))).f_x) == ((void *)0)))) {
yr2920_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p4186))).f_x), &F.v11235, &F.v11237);
if (((!Y_DEFI(F.v11235)) || ((Y_DEFI(F.v11237) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4186))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4185))).f_cname));
yr1037_SA(y_str("_d, ", 4));
yr1044_ST(Y_DEFI(F.v11225));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v11227));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v11237));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4185))).f_cname));
yr1037_SA(y_str(", pf);", 6));
yr1110_Put(&F.v11240, yr1056_SE());
yr1117_PutS(&F.v11240, y_str("}", 1));
yr1125_Append(&v988, &F.v11240);
yr1026_SB();
yr1037_SA(y_str("void (*", 7));
yr1044_ST(Y_DEFI(F.v11219));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4162_ParamList(F.p4185));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v11221));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v1747, yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4191_UseLine(void * a_p4192) {
struct yf4193 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4192 = a_p4192;
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4192))).f_name));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4192))).f_text));
yr1037_SA(y_str(" ", 1));
if ((Y_DEFI(((*(yR105 *)y_deref(F.p4192))).f_ival) == INT64_C(0))) {
yr1037_SA(y_str("none", 4));
} else {
yr1044_ST(y_range(Y_DEFI(((*(yR105 *)y_deref(F.p4192))).f_ival), INT64_C(0), INT64_C(4000000)));
}
{ rt_int rv11288 = yr1056_SE();
y_use = F.yu; return rv11288; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4197_FactsPrint(rt_int a_p4198) {
struct yf4199 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4198 = a_p4198;
F.v11292 = Y_UNDEF_I;
F.v11292 = INT64_C(7);
if ((!yr4018_ReadInto(yr4010_LibPath(F.p4198, y_str(".yfx", 4))))) {
{ rt_int rv11296 = INT64_C(0);
y_use = F.yu; return rv11296; }
}
F.lo11298 = Y_DEFI(v1216);
F.hi11299 = Y_DEFI(v1219);
{ rt_int hi11303 = F.hi11299;
for (rt_int i11302 = F.lo11298; i11302 <= hi11303; i11302++) { F.c_11301 = i11302; Y_TICK();
F.v11292 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v11292), INT64_C(131))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_11301)]))]))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i11302 == hi11303) break;
}}
yr1026_SB();
yr1050_SI(Y_DEFI(F.v11292));
{ rt_int rv11309 = yr1075_Name(yr1056_SE());
y_use = F.yu; return rv11309; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4203_ApplyFacts(void) {
struct yf4204 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11312 = Y_UNDEF_P;
F.v11312 = Y_DEFP(v1722);
while ((!(Y_DEFP(F.v11312) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11312)))).f_ival) == INT64_C(0)))) {
yr4208_ApplyFile(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11312)))).f_name));
}
F.v11312 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11312)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4208_ApplyFile(rt_int a_p4209) {
struct yf4210 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4209 = a_p4209;
F.v11317 = Y_UNDEF_I;
F.v11319 = Y_UNDEF_I;
F.v11321 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_11330, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_11330, &F.v11332);
F.v11334 = Y_UNDEF_I;
F.v11334 = INT64_C(0);
if ((!yr4018_ReadInto(yr4010_LibPath(F.p4209, y_str(".yfx", 4))))) {
y_use = F.yu; return;
}
F.v11317 = Y_DEFI(v1216);
F.v11319 = Y_DEFI(F.v11317);
F.v11321 = Y_DEFI(v1219);
while ((Y_DEFI(F.v11317) <= Y_DEFI(F.v11321))) {
Y_TICK();
if ((((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11317))]) == 32)) || ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11317))]) == 10)))) {
if ((((Y_DEFI(F.v11317) > Y_DEFI(F.v11319))) && ((Y_DEFI(F.v11334) < INT64_C(4096))))) {
F.v11334 = y_range(y_add(Y_DEFI(F.v11334), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v11332).p)[y_ix1(F.v11332, Y_DEFI(F.v11334))] = yr1068_Intern(Y_DEFI(F.v11319), y_range(y_sub(Y_DEFI(F.v11317), Y_DEFI(F.v11319)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v11317))]) == 10)) {
if ((Y_DEFI(F.v11334) >= INT64_C(2))) {
yr4214_ApplyLine(F.v11332, Y_DEFI(F.v11334));
}
F.v11334 = INT64_C(0);
}
F.v11319 = y_range(y_add(Y_DEFI(F.v11317), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v11317 = y_range(y_add(Y_DEFI(F.v11317), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4214_ApplyLine(yarr a_p4216, rt_int a_p4217) {
struct yf4218 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4216 = a_p4216;
F.p4217 = a_p4217;
F.v11354 = Y_UNDEF_P;
F.v11354 = Y_DEFP(v1756);
F.v11356 = Y_UNDEF_P;
F.v11356 = ((void *)0);
F.v11358 = Y_UNDEF_P;
F.v11360 = Y_UNDEF_P;
while ((((!(Y_DEFP(F.v11354) == ((void *)0)))) && ((Y_DEFP(F.v11356) == ((void *)0))))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11354)))).f_sym)))).f_hasmv) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11354)))).f_sym)))).f_skey) == INT64_C(0)))))) {
if (yr1088_TEq(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11354)))).f_sym)))).f_skey), Y_DEFI(((rt_int *)(F.p4216).p)[y_ix1(F.p4216, INT64_C(1))]))) {
F.v11356 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11354)))).f_sym);
}
}
F.v11354 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11354)))).f_next);
}
if ((Y_DEFP(F.v11356) == ((void *)0))) {
y_use = F.yu; return;
}
if (yr1088_TEq(Y_DEFI(((rt_int *)(F.p4216).p)[y_ix1(F.p4216, INT64_C(2))]), yr1061_T(y_str("P", 1)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v11356)))).f_writes = ((void *)0);
}
F.lo11368 = INT64_C(3);
F.hi11369 = F.p4217;
{ rt_int hi11373 = F.hi11369;
for (rt_int i11372 = F.lo11368; i11372 <= hi11373; i11372++) { F.c_11371 = i11372; Y_TICK();
if (yr1088_TEq(Y_DEFI(((rt_int *)(F.p4216).p)[y_ix1(F.p4216, F.c_11371)]), yr1061_T(y_str("D", 1)))) {
F.v11360 = yr3538_Note(((void *)0), yr1081_N(y_str("*", 1)), INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11360)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v11356)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(F.v11356)))).f_frees = Y_DEFP(F.v11360);
} else {
F.v11358 = Y_DEFP(v1751);
while ((!(Y_DEFP(F.v11358) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11358)))).f_sym)))).f_skey), Y_DEFI(((rt_int *)(F.p4216).p)[y_ix1(F.p4216, F.c_11371)]))) {
F.v11360 = yr3538_Note(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11358)))).f_sym), INT64_C(0), INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11360)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v11356)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(F.v11356)))).f_frees = Y_DEFP(F.v11360);
}
F.v11358 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11358)))).f_next);
}
}
if (i11372 == hi11373) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4222_StdRep(yarr a_p4224, void * a_p4225) {
struct yf4226 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4224 = a_p4224;
F.p4225 = a_p4225;
F.v11383 = Y_UNDEF_P;
F.v11383 = yr2348_NewSym(v870, yr1081_N(F.p4224));
((*(yR125 *)y_deref(Y_DEFP(F.v11383)))).f_rep = F.p4225;
yr2450_Define(Y_DEFP(F.v11383), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4230_StdOp(yarr a_p4232, rt_int a_p4233) {
struct yf4234 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4232 = a_p4232;
F.p4233 = a_p4233;
F.v11389 = Y_UNDEF_P;
F.v11389 = yr2348_NewSym(v891, yr1081_N(F.p4232));
((*(yR125 *)y_deref(Y_DEFP(F.v11389)))).f_mval = F.p4233;
yr2450_Define(Y_DEFP(F.v11389), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4238_LitList(yarr a_p4240, yarr a_p4241, yarr a_p4242, rt_int a_p4243) {
struct yf4244 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4240 = a_p4240;
F.p4241 = a_p4241;
F.p4242 = a_p4242;
F.p4243 = a_p4243;
F.v11397 = Y_UNDEF_P;
F.v11397 = ((void *)0);
F.v11399 = Y_UNDEF_P;
F.v11399 = ((void *)0);
F.v11401 = Y_UNDEF_P;
F.v11401 = ((void *)0);
F.v11401 = yr2029_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11401)))).f_name = yr1081_N(F.p4240);
yr2036_Link(&F.v11397, &F.v11399, Y_DEFP(F.v11401));
F.v11401 = yr2029_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11401)))).f_name = yr1081_N(F.p4241);
yr2036_Link(&F.v11397, &F.v11399, Y_DEFP(F.v11401));
if (F.p4243) {
F.v11401 = yr2029_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11401)))).f_name = yr1081_N(F.p4242);
yr2036_Link(&F.v11397, &F.v11399, Y_DEFP(F.v11401));
}
{ void * rv11405 = Y_DEFP(F.v11397);
y_use = F.yu; return rv11405; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr4248_Abstract(rt_int a_p4249, yarr a_p4251) {
struct yf4252 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4249 = a_p4249;
F.p4251 = a_p4251;
F.v11410 = Y_UNDEF_P;
F.v11410 = yr2489_NewRep(F.p4249, yr1081_N(F.p4251));
((*(yR110 *)y_deref(Y_DEFP(F.v11410)))).f_abstract = 1;
{ void * rv11412 = Y_DEFP(F.v11410);
y_use = F.yu; return rv11412; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4256_Predefine(void) {
struct yf4257 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2355_OpenScope(0);
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
v1342 = yr4248_Abstract(v804, y_str("INTEGER", 7));
v1356 = yr4248_Abstract(v807, y_str("FIXED", 5));
v1354 = yr4248_Abstract(v810, y_str("FLOATING", 8));
v1358 = yr2489_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
v1360 = yr2489_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
v1348 = yr2489_NewRep(v852, yr1081_N(y_str("no value", 8)));
v1362 = yr2489_NewRep(v858, yr1081_N(y_str("any", 3)));
v1344 = yr2489_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_lits = yr4238_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_nlits = INT64_C(2);
yr2719_SetRange(Y_DEFP(v1344), INT64_C(0), INT64_C(1));
yr2713_DefineLits(Y_DEFP(v1344));
v1346 = yr2489_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_nlits = INT64_C(128);
yr2719_SetRange(Y_DEFP(v1346), INT64_C(0), INT64_C(127));
v1957 = yr2489_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
((*(yR110 *)y_deref(Y_DEFP(v1957)))).f_lits = yr4238_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR110 *)y_deref(Y_DEFP(v1957)))).f_nlits = INT64_C(3);
yr2719_SetRange(Y_DEFP(v1957), INT64_C(0), INT64_C(2));
yr2713_DefineLits(Y_DEFP(v1957));
yr4222_StdRep(y_str("INTEGER", 7), Y_DEFP(v1342));
yr4222_StdRep(y_str("FIXED", 5), Y_DEFP(v1356));
yr4222_StdRep(y_str("FLOATING", 8), Y_DEFP(v1354));
yr4222_StdRep(y_str("BOOLEAN", 7), Y_DEFP(v1344));
yr4222_StdRep(y_str("SIGNAL", 6), Y_DEFP(v1358));
yr4222_StdRep(y_str("SEMAPHORE", 9), Y_DEFP(v1360));
yr4222_StdRep(y_str("ASCII", 5), Y_DEFP(v1346));
yr4222_StdRep(y_str("STANDARD_ALPHABET", 17), Y_DEFP(v1346));
yr4222_StdRep(y_str("OPEN_MODE", 9), Y_DEFP(v1957));
v1959 = yr2489_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1959)))).f_tname = yr1081_N(y_str("ADDRESS", 7));
yr2719_SetRange(Y_DEFP(v1959), INT64_C(0), INT64_C(16777215));
v1961 = yr2489_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1961)))).f_tname = yr1081_N(y_str("WORD", 4));
yr2719_SetRange(Y_DEFP(v1961), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr4222_StdRep(y_str("ADDRESS", 7), Y_DEFP(v1959));
yr4222_StdRep(y_str("WORD", 4), Y_DEFP(v1961));
yr4230_StdOp(y_str("MAKE_POINTER", 12), v1474);
yr4230_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
yr4230_StdOp(y_str("LOW", 3), v1366);
yr4230_StdOp(y_str("HIGH", 4), v1369);
yr4230_StdOp(y_str("SUCC", 4), v1372);
yr4230_StdOp(y_str("PRED", 4), v1375);
yr4230_StdOp(y_str("FIRST", 5), v1378);
yr4230_StdOp(y_str("LAST", 4), v1381);
yr4230_StdOp(y_str("NEW", 3), v1384);
yr4230_StdOp(y_str("OPEN", 4), v1387);
yr4230_StdOp(y_str("CLOSE", 5), v1390);
yr4230_StdOp(y_str("GET", 3), v1393);
yr4230_StdOp(y_str("PUT", 3), v1396);
yr4230_StdOp(y_str("CHECK_EOF", 9), v1399);
yr4230_StdOp(y_str("MOVE", 4), v1402);
yr4230_StdOp(y_str("AND_LONG", 8), v1405);
yr4230_StdOp(y_str("OR_LONG", 7), v1408);
yr4230_StdOp(y_str("DELAY", 5), v1411);
yr4230_StdOp(y_str("CLOCK_TIME", 10), v1414);
yr4230_StdOp(y_str("WAIT", 4), v1417);
yr4230_StdOp(y_str("SEND", 4), v1420);
yr4230_StdOp(y_str("AWAITED", 7), v1423);
yr4230_StdOp(y_str("FLOOR", 5), v1426);
yr4230_StdOp(y_str("CEILING", 7), v1429);
yr4230_StdOp(y_str("NEAR_INTEGER", 12), v1432);
yr4230_StdOp(y_str("NEAR_FIXED", 10), v1435);
yr4230_StdOp(y_str("NEAR_FLOATING", 13), v1438);
yr4230_StdOp(y_str("FIXED_DIV", 9), v1441);
yr4230_StdOp(y_str("CLAIM", 5), v1444);
yr4230_StdOp(y_str("RELEASE", 7), v1447);
yr4230_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
yr4230_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
yr4230_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
yr4230_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
yr4230_StdOp(y_str("FREE_POINTER", 12), v1462);
yr4230_StdOp(y_str("C_CODE_INSERT", 13), v1465);
yr4230_StdOp(y_str("ADDR", 4), v1468);
yr4230_StdOp(y_str("EXTENT", 6), v1471);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4261_Translate(void) {
struct yf4262 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11500 = Y_UNDEF_P;
F.v11500 = Y_DEFP(v1963);
y_initu(&yd_141, &F.v11502);
yr2355_OpenScope(0);
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1273))] = ((void *)0);
v1279 = INT64_C(0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(v1963);
while ((!(Y_DEFP(F.v11500) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11500)))).f_ival) == INT64_C(0))) {
yr3826_CompileModule(Y_DEFP(F.v11500));
}
F.v11500 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11500)))).f_next);
}
yr3789_ResolveLater(Y_DEFI(v1273));
yr3705_RunDeferred(INT64_C(0), INT64_C(0));
yr4203_ApplyFacts();
yr3587_CheckEffects();
if ((Y_DEFI(v1714) == v1507)) {
F.v11502 = v996;
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr3850_AwaitProcesses();
v1749 = v996;
v996 = F.v11502;
} else {
yr3850_AwaitProcesses();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4266_WriteProgram(void) {
struct yf4267 F;
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
yr4271_WriteHead();
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4271_WriteHead(void) {
struct yf4272 F;
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
yr1151_WriteBuf(v1747);
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
{ rt_int hi11536 = INT64_C(262143);
for (rt_int i11535 = INT64_C(0); i11535 <= hi11536; i11535++) { c_11534 = i11535; Y_TICK();
((rt_int *)(v925).p)[y_ix1(v925, c_11534)] = INT64_C(0);
if (i11535 == hi11536) break;
}}
{ rt_int hi11546 = INT64_C(8191);
for (rt_int i11545 = INT64_C(0); i11545 <= hi11546; i11545++) { c_11544 = i11545; Y_TICK();
((void * *)(v1260).p)[y_ix1(v1260, c_11544)] = ((void *)0);
if (i11545 == hi11546) break;
}}
{ rt_int hi11555 = INT64_C(400);
for (rt_int i11554 = INT64_C(0); i11554 <= hi11555; i11554++) { c_11553 = i11554; Y_TICK();
((void * *)(v1302).p)[y_ix1(v1302, c_11553)] = ((void *)0);
((void * *)(v1313).p)[y_ix1(v1313, c_11553)] = ((void *)0);
((void * *)(v1903).p)[y_ix1(v1903, c_11553)] = ((void *)0);
if (i11554 == hi11555) break;
}}
v978 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v980 = v978;
v982 = v978;
v984 = v978;
v986 = v978;
v988 = v978;
v990 = v978;
v992 = v978;
v1747 = v978;
v1749 = v978;
v996 = v978;
v998 = v978;
yr1003_InitChars();
yr1965_InitWords();
v1254 = yr1081_N(y_str("FROM", 4));
v1257 = yr1081_N(y_str("DIMENSION", 9));
v1522 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v911, y_str("OUTPUT", 6), 1);
y_open(&v994, y_str("ERROR", 5), 1);
yr4005_ReadArgs();
if ((Y_DEFI(v1714) == v1510)) {
yr4137_LinkProgram();
} else {
yr1970_ReadSource();
yr2024_Lex();
v1963 = yr2343_ParseProgram();
yr4256_Predefine();
if ((Y_DEFI(v1714) == v1504)) {
yr4115_Interface();
} else if ((Y_DEFI(v1714) == v1507)) {
yr4120_Segment();
} else {
yr4092_PairInInput();
yr4261_Translate();
yr4266_WriteProgram();
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
