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
struct yf1930;
struct yf1935;
struct yf1942;
struct yf1948;
struct yf1953;
struct yf1959;
struct yf1966;
struct yf1973;
struct yf1979;
struct yf1984;
struct yf1989;
struct yf1996;
struct yf2004;
struct yf2010;
struct yf2015;
struct yf2020;
struct yf2025;
struct yf2032;
struct yf2038;
struct yf2044;
struct yf2049;
struct yf2055;
struct yf2060;
struct yf2066;
struct yf2071;
struct yf2078;
struct yf2083;
struct yf2089;
struct yf2094;
struct yf2099;
struct yf2104;
struct yf2109;
struct yf2114;
struct yf2119;
struct yf2125;
struct yf2131;
struct yf2138;
struct yf2143;
struct yf2148;
struct yf2154;
struct yf2159;
struct yf2165;
struct yf2170;
struct yf2175;
struct yf2180;
struct yf2185;
struct yf2190;
struct yf2195;
struct yf2200;
struct yf2206;
struct yf2211;
struct yf2216;
struct yf2222;
struct yf2228;
struct yf2234;
struct yf2240;
struct yf2246;
struct yf2255;
struct yf2262;
struct yf2267;
struct yf2272;
struct yf2277;
struct yf2283;
struct yf2288;
struct yf2293;
struct yf2298;
struct yf2303;
struct yf2308;
struct yf2315;
struct yf2321;
struct yf2327;
struct yf2332;
struct yf2338;
struct yf2344;
struct yf2350;
struct yf2357;
struct yf2364;
struct yf2370;
struct yf2377;
struct yf2384;
struct yf2391;
struct yf2397;
struct yf2403;
struct yf2410;
struct yf2417;
struct yf2424;
struct yf2430;
struct yf2437;
struct yf2443;
struct yf2449;
struct yf2456;
struct yf2462;
struct yf2468;
struct yf2474;
struct yf2480;
struct yf2486;
struct yf2492;
struct yf2499;
struct yf2505;
struct yf2511;
struct yf2517;
struct yf2523;
struct yf2529;
struct yf2536;
struct yf2544;
struct yf2552;
struct yf2559;
struct yf2565;
struct yf2571;
struct yf2578;
struct yf2584;
struct yf2592;
struct yf2598;
struct yf2604;
struct yf2612;
struct yf2618;
struct yf2625;
struct yf2633;
struct yf2641;
struct yf2651;
struct yf2658;
struct yf2666;
struct yf2673;
struct yf2679;
struct yf2687;
struct yf2693;
struct yf2701;
struct yf2708;
struct yf2716;
struct yf2723;
struct yf2728;
struct yf2734;
struct yf2747;
struct yf2758;
struct yf2766;
struct yf2773;
struct yf2779;
struct yf2786;
struct yf2793;
struct yf2801;
struct yf2808;
struct yf2815;
struct yf2821;
struct yf2828;
struct yf2835;
struct yf2843;
struct yf2849;
struct yf2856;
struct yf2863;
struct yf2871;
struct yf2880;
struct yf2888;
struct yf2896;
struct yf2903;
struct yf2911;
struct yf2919;
struct yf2927;
struct yf2938;
struct yf2946;
struct yf2955;
struct yf2961;
struct yf2969;
struct yf2979;
struct yf2989;
struct yf2995;
struct yf3001;
struct yf3009;
struct yf3015;
struct yf3022;
struct yf3028;
struct yf3037;
struct yf3045;
struct yf3051;
struct yf3057;
struct yf3063;
struct yf3070;
struct yf3078;
struct yf3087;
struct yf3093;
struct yf3101;
struct yf3111;
struct yf3117;
struct yf3126;
struct yf3135;
struct yf3144;
struct yf3150;
struct yf3157;
struct yf3166;
struct yf3173;
struct yf3181;
struct yf3187;
struct yf3196;
struct yf3204;
struct yf3211;
struct yf3220;
struct yf3226;
struct yf3237;
struct yf3244;
struct yf3255;
struct yf3261;
struct yf3271;
struct yf3281;
struct yf3291;
struct yf3300;
struct yf3308;
struct yf3316;
struct yf3326;
struct yf3332;
struct yf3337;
struct yf3343;
struct yf3349;
struct yf3355;
struct yf3362;
struct yf3370;
struct yf3377;
struct yf3383;
struct yf3389;
struct yf3395;
struct yf3402;
struct yf3408;
struct yf3414;
struct yf3421;
struct yf3426;
struct yf3432;
struct yf3438;
struct yf3446;
struct yf3452;
struct yf3458;
struct yf3464;
struct yf3470;
struct yf3476;
struct yf3485;
struct yf3493;
struct yf3499;
struct yf3505;
struct yf3512;
struct yf3519;
struct yf3526;
struct yf3534;
struct yf3539;
struct yf3547;
struct yf3553;
struct yf3559;
struct yf3565;
struct yf3572;
struct yf3578;
struct yf3585;
struct yf3592;
struct yf3598;
struct yf3606;
struct yf3615;
struct yf3623;
struct yf3629;
struct yf3636;
struct yf3643;
struct yf3652;
struct yf3659;
struct yf3665;
struct yf3671;
struct yf3677;
struct yf3684;
struct yf3692;
struct yf3699;
struct yf3707;
struct yf3713;
struct yf3722;
struct yf3729;
struct yf3736;
struct yf3742;
struct yf3750;
struct yf3758;
struct yf3765;
struct yf3773;
struct yf3779;
struct yf3785;
struct yf3791;
struct yf3797;
struct yf3802;
struct yf3809;
struct yf3815;
struct yf3821;
struct yf3827;
struct yf3832;
struct yf3838;
struct yf3845;
struct yf3852;
struct yf3859;
struct yf3866;
struct yf3873;
struct yf3881;
struct yf3887;
struct yf3896;
struct yf3904;
struct yf3910;
struct yf3916;
struct yf3923;
struct yf3933;
struct yf3938;
struct yf3944;
struct yf3949;
struct yf3957;
struct yf3963;
struct yf3970;
struct yf3976;
struct yf3983;
struct yf3989;
struct yf3996;
struct yf4002;
struct yf4011;
struct yf4018;
struct yf4024;
struct yf4031;
struct yf4036;
struct yf4043;
struct yf4049;
struct yf4054;
struct yf4059;
struct yf4064;
struct yf4070;
struct yf4076;
struct yf4081;
struct yf4088;
struct yf4095;
struct yf4101;
struct yf4107;
struct yf4115;
struct yf4123;
struct yf4130;
struct yf4138;
struct yf4146;
struct yf4156;
struct yf4164;
struct yf4169;
struct yf4174;
struct yf4179;
struct yf4184;
struct yf8843;
struct yf8850;
struct yf8856;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; rt_int f_t0; rt_int f_t1; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v4189;
rt_int c_4192;
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
rt_int lo4228;
rt_int hi4229;
rt_int c_4231;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v4237;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_4252;
yarr v4254;
rt_int v4256;
rt_int v4259;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v4278;
rt_int lo4289;
rt_int hi4290;
rt_int c_4292;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v4303;
rt_int v4306;
rt_int v4308;
rt_int lo4313;
rt_int hi4314;
rt_int c_4316;
rt_int lo4335;
rt_int hi4336;
rt_int c_4338;
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
rt_int lo4367;
rt_int hi4368;
rt_int c_4370;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4383;
rt_int lo4399;
rt_int hi4400;
rt_int c_4402;
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
void * v4423;
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
rt_int v4437;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4444;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4450;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4460;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4470;
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
rt_int v4482;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4490;
rt_int yu;
};
struct yf1930 { void *up;
rt_int v4494;
rt_int v4496;
rt_int v4498;
rt_int lo4515;
rt_int hi4516;
rt_int c_4518;
rt_int yu;
};
struct yf1935 { void *up;
unsigned char v4527;
rt_int yu;
};
struct yf1942 { void *up;
rt_int p1940;
rt_int p1941;
rt_int yu;
};
struct yf1948 { void *up;
rt_int p1947;
rt_int yu;
};
struct yf1953 { void *up;
rt_int v4544;
rt_int v4546;
rt_int yu;
};
struct yf1959 { void *up;
unsigned char p1958;
rt_int yu;
};
struct yf1966 { void *up;
yarr p1965;
rt_int yu;
};
struct yf1973 { void *up;
rt_int p1971;
rt_int p1972;
rt_int v4576;
rt_int yu;
};
struct yf1979 { void *up;
rt_int p1978;
rt_int v4586;
rt_int v4589;
rt_int v4591;
rt_int v4593;
rt_int v4595;
rt_int v4597;
rt_int v4600;
rt_int v4603;
rt_int v4606;
rt_int v4609;
rt_int v4612;
rt_int v4615;
rt_int v4618;
rt_int lo4656;
rt_int hi4657;
rt_int c_4659;
rt_int lo4688;
rt_int hi4689;
rt_int c_4691;
rt_int lo4698;
rt_int hi4699;
rt_int c_4701;
rt_int yu;
};
struct yf1984 { void *up;
rt_int v4712;
rt_int v4714;
rt_int v4716;
rt_int v4718;
rt_int yu;
};
struct yf1989 { void *up;
unsigned char v4747;
rt_int v4749;
rt_int v4751;
rt_int v4753;
rt_int v4755;
rt_int v4757;
rt_int v4759;
rt_int v4761;
rt_int lo4836;
rt_int hi4837;
rt_int c_4839;
rt_int yu;
};
struct yf1996 { void *up;
rt_int p1994;
rt_int p1995;
void * v4855;
rt_int yu;
};
struct yf2004 { void *up;
void * * p2001;
void * * p2002;
void * p2003;
rt_int yu;
};
struct yf2010 { void *up;
void * p2009;
rt_int v4870;
void * v4873;
rt_int yu;
};
struct yf2015 { void *up;
rt_int yu;
};
struct yf2020 { void *up;
rt_int yu;
};
struct yf2025 { void *up;
rt_int yu;
};
struct yf2032 { void *up;
rt_int p2030;
rt_int p2031;
rt_int v4887;
rt_int yu;
};
struct yf2038 { void *up;
rt_int p2037;
rt_int yu;
};
struct yf2044 { void *up;
rt_int p2043;
rt_int yu;
};
struct yf2049 { void *up;
rt_int yu;
};
struct yf2055 { void *up;
rt_int p2054;
rt_int yu;
};
struct yf2060 { void *up;
rt_int v4910;
rt_int yu;
};
struct yf2066 { void *up;
rt_int p2065;
rt_int v4920;
rt_int yu;
};
struct yf2071 { void *up;
rt_int v4925;
rt_int yu;
};
struct yf2078 { void *up;
rt_int p2076;
rt_int p2077;
rt_int v4932;
rt_int yu;
};
struct yf2083 { void *up;
rt_int v4936;
rt_int yu;
};
struct yf2089 { void *up;
rt_int p2088;
void * v4946;
rt_int yu;
};
struct yf2094 { void *up;
void * v4953;
rt_int yu;
};
struct yf2099 { void *up;
void * v4958;
void * v4960;
void * v4962;
void * v4964;
rt_int v4966;
rt_int yu;
};
struct yf2104 { void *up;
rt_int v4975;
rt_int yu;
};
struct yf2109 { void *up;
void * v4981;
void * v4983;
void * v4985;
void * v4987;
rt_int yu;
};
struct yf2114 { void *up;
void * v4992;
void * v4994;
void * v4996;
void * v4998;
void * v5000;
rt_int yu;
};
struct yf2119 { void *up;
void * v5008;
void * v5010;
void * v5012;
rt_int yu;
};
struct yf2125 { void *up;
rt_int p2124;
void * v5018;
rt_int v5020;
rt_int yu;
};
struct yf2131 { void *up;
rt_int p2130;
rt_int yu;
};
struct yf2138 { void *up;
void * * p2136;
void * * p2137;
rt_int v5041;
void * v5043;
void * v5045;
void * v5047;
rt_int yu;
};
struct yf2143 { void *up;
void * v5051;
rt_int v5053;
rt_int yu;
};
struct yf2148 { void *up;
void * v5058;
void * v5060;
void * v5062;
rt_int v5064;
rt_int v5066;
rt_int v5068;
rt_int yu;
};
struct yf2154 { void *up;
void * p2153;
void * v5084;
void * v5086;
rt_int v5088;
rt_int yu;
};
struct yf2159 { void *up;
void * v5094;
rt_int yu;
};
struct yf2165 { void *up;
rt_int p2164;
rt_int v5106;
rt_int yu;
};
struct yf2170 { void *up;
rt_int v5114;
void * v5116;
rt_int yu;
};
struct yf2175 { void *up;
void * v5125;
void * v5127;
rt_int yu;
};
struct yf2180 { void *up;
void * v5132;
void * v5134;
void * v5136;
rt_int yu;
};
struct yf2185 { void *up;
void * v5141;
void * v5143;
void * v5145;
rt_int v5147;
rt_int yu;
};
struct yf2190 { void *up;
void * v5154;
void * v5156;
void * v5158;
void * v5160;
void * v5162;
void * v5164;
rt_int v5166;
rt_int v5168;
rt_int yu;
};
struct yf2195 { void *up;
void * v5185;
rt_int yu;
};
struct yf2200 { void *up;
rt_int v5190;
rt_int yu;
};
struct yf2206 { void *up;
rt_int p2205;
void * v5199;
void * v5201;
void * v5203;
rt_int v5205;
rt_int yu;
};
struct yf2211 { void *up;
void * v5213;
void * v5215;
void * v5217;
void * v5219;
void * v5221;
void * v5223;
rt_int v5225;
rt_int v5227;
rt_int yu;
};
struct yf2216 { void *up;
rt_int yu;
};
struct yf2222 { void *up;
rt_int p2221;
rt_int yu;
};
struct yf2228 { void *up;
rt_int p2227;
rt_int yu;
};
struct yf2234 { void *up;
rt_int p2233;
rt_int yu;
};
struct yf2240 { void *up;
rt_int p2239;
rt_int yu;
};
struct yf2246 { void *up;
rt_int p2245;
rt_int yu;
};
struct yf2255 { void *up;
rt_int p2251;
void * p2252;
void * p2253;
rt_int p2254;
void * v5281;
rt_int yu;
};
struct yf2262 { void *up;
rt_int p2260;
rt_int p2261;
rt_int v5287;
rt_int yu;
};
struct yf2267 { void *up;
void * v5291;
rt_int v5293;
rt_int v5295;
rt_int yu;
};
struct yf2272 { void *up;
void * v5299;
void * v5301;
rt_int v5303;
rt_int v5305;
rt_int yu;
};
struct yf2277 { void *up;
void * v5311;
rt_int v5313;
rt_int v5315;
rt_int yu;
};
struct yf2283 { void *up;
rt_int p2282;
rt_int v5321;
rt_int yu;
};
struct yf2288 { void *up;
void * v5326;
rt_int v5328;
rt_int v5330;
rt_int yu;
};
struct yf2293 { void *up;
void * v5334;
rt_int v5336;
rt_int v5338;
rt_int yu;
};
struct yf2298 { void *up;
void * v5359;
void * v5361;
void * v5363;
rt_int v5365;
rt_int yu;
};
struct yf2303 { void *up;
rt_int yu;
};
struct yf2308 { void *up;
void * v5372;
void * v5374;
void * v5376;
rt_int v5378;
rt_int yu;
};
struct yf2315 { void *up;
rt_int p2313;
rt_int p2314;
void * v5385;
rt_int yu;
};
struct yf2321 { void *up;
rt_int p2320;
void * v5403;
rt_int yu;
};
struct yf2327 { void *up;
void * p2326;
void * v5410;
rt_int v5412;
rt_int v5415;
rt_int yu;
};
struct yf2332 { void *up;
void * v5427;
void * v5429;
void * v5431;
rt_int v5433;
rt_int yu;
};
struct yf2338 { void *up;
void * p2337;
rt_int yu;
};
struct yf2344 { void *up;
rt_int p2343;
void * v5445;
rt_int yu;
};
struct yf2350 { void *up;
rt_int p2349;
void * v5453;
rt_int yu;
};
struct yf2357 { void *up;
rt_int p2355;
rt_int p2356;
void * v5462;
void * v5464;
rt_int lo5470;
rt_int hi5471;
rt_int c_5473;
rt_int yu;
};
struct yf2364 { void *up;
void * p2362;
void * p2363;
void * v5483;
rt_int yu;
};
struct yf2370 { void *up;
rt_int p2369;
rt_int yu;
};
struct yf2377 { void *up;
void * p2375;
rt_int p2376;
void * v5495;
void * v5497;
rt_int v5499;
rt_int yu;
};
struct yf2384 { void *up;
void * p2382;
rt_int p2383;
void * v5515;
rt_int yu;
};
struct yf2391 { void *up;
void * p2389;
rt_int p2390;
void * v5540;
rt_int yu;
};
struct yf2397 { void *up;
void * p2396;
rt_int yu;
};
struct yf2403 { void *up;
void * p2402;
void * v5555;
rt_int yu;
};
struct yf2410 { void *up;
rt_int p2408;
void * p2409;
void * v5564;
rt_int yu;
};
struct yf2417 { void *up;
void * p2415;
rt_int p2416;
void * v5573;
rt_int v5575;
rt_int yu;
};
struct yf2424 { void *up;
rt_int p2422;
rt_int p2423;
rt_int v5583;
rt_int yu;
};
struct yf2430 { void *up;
rt_int p2429;
rt_int v5598;
rt_int yu;
};
struct yf2437 { void *up;
rt_int p2435;
rt_int p2436;
rt_int v5613;
rt_int yu;
};
struct yf2443 { void *up;
void * p2442;
rt_int v5622;
rt_int yu;
};
struct yf2449 { void *up;
void * p2448;
void * v5630;
rt_int yu;
};
struct yf2456 { void *up;
rt_int p2454;
rt_int p2455;
void * v5637;
rt_int yu;
};
struct yf2462 { void *up;
void * p2461;
void * v5669;
rt_int yu;
};
struct yf2468 { void *up;
void * p2467;
rt_int yu;
};
struct yf2474 { void *up;
void * p2473;
rt_int yu;
};
struct yf2480 { void *up;
void * p2479;
rt_int yu;
};
struct yf2486 { void *up;
void * p2485;
rt_int yu;
};
struct yf2492 { void *up;
void * p2491;
rt_int yu;
};
struct yf2499 { void *up;
void * p2497;
rt_int p2498;
void * v5701;
rt_int yu;
};
struct yf2505 { void *up;
void * p2504;
rt_int yu;
};
struct yf2511 { void *up;
void * p2510;
rt_int v5713;
rt_int yu;
};
struct yf2517 { void *up;
void * p2516;
rt_int v5720;
rt_int yu;
};
struct yf2523 { void *up;
void * p2522;
rt_int v5749;
rt_int yu;
};
struct yf2529 { void *up;
void * p2528;
rt_int yu;
};
struct yf2536 { void *up;
void * p2534;
void * p2535;
rt_int yu;
};
struct yf2544 { void *up;
rt_int p2541;
void * p2542;
void * p2543;
rt_int v5801;
rt_int yu;
};
struct yf2552 { void *up;
rt_int p2549;
void * p2550;
void * p2551;
rt_int yu;
};
struct yf2559 { void *up;
void * p2557;
rt_int p2558;
rt_int yu;
};
struct yf2565 { void *up;
void * p2564;
rt_int v5816;
void * v5818;
void * v5820;
rt_int yu;
};
struct yf2571 { void *up;
void * p2570;
rt_int yu;
};
struct yf2578 { void *up;
void * p2576;
void * p2577;
rt_int yu;
};
struct yf2584 { void *up;
void * p2583;
rt_int yu;
};
struct yf2592 { void *up;
void * p2589;
yarr p2591;
rt_int v5869;
rt_int v5871;
rt_int yu;
};
struct yf2598 { void *up;
void * p2597;
rt_int yu;
};
struct yf2604 { void *up;
void * p2603;
rt_int yu;
};
struct yf2612 { void *up;
void * p2609;
void * p2610;
void * p2611;
void * v5897;
rt_int yu;
};
struct yf2618 { void *up;
void * p2617;
rt_int yu;
};
struct yf2625 { void *up;
rt_int p2623;
rt_int p2624;
rt_int v5909;
rt_int v5911;
rt_int v5913;
rt_int yu;
};
struct yf2633 { void *up;
rt_int p2630;
rt_int p2631;
rt_int p2632;
rt_int v5929;
rt_int v5931;
rt_int yu;
};
struct yf2641 { void *up;
rt_int p2638;
rt_int p2639;
rt_int p2640;
rt_int v5946;
rt_int lo5951;
rt_int hi5952;
rt_int c_5954;
rt_int yu;
};
struct yf2651 { void *up;
void * p2646;
void * p2647;
rt_int p2648;
rt_int * p2648_o;
rt_int p2649;
rt_int * p2649_o;
rt_int p2650;
rt_int * p2650_o;
rt_int v5965;
rt_int v5967;
rt_int v5969;
rt_int v5971;
rt_int v5973;
rt_int v5975;
rt_int yu;
};
struct yf2658 { void *up;
rt_int p2656;
rt_int p2657;
rt_int yu;
};
struct yf2666 { void *up;
void * p2663;
rt_int p2664;
rt_int p2665;
rt_int v6004;
rt_int yu;
};
struct yf2673 { void *up;
void * p2671;
void * p2672;
rt_int v6014;
rt_int v6016;
rt_int v6018;
rt_int v6020;
void * v6022;
void * v6024;
rt_int v6026;
rt_int v6028;
rt_int v6030;
rt_int v6032;
rt_int v6034;
rt_int yu;
};
struct yf2679 { void *up;
void * p2678;
void * v6066;
void * v6068;
rt_int v6070;
rt_int yu;
};
struct yf2687 { void *up;
void * p2684;
rt_int p2685;
rt_int p2686;
rt_int yu;
};
struct yf2693 { void *up;
rt_int p2692;
rt_int v6085;
rt_int yu;
};
struct yf2701 { void *up;
void * p2698;
rt_int p2699;
rt_int p2700;
void * v6095;
void * v6097;
rt_int yu;
};
struct yf2708 { void *up;
void * p2706;
void * p2707;
void * v6105;
void * v6107;
void * v6109;
void * v6111;
void * v6113;
void * v6115;
rt_int yu;
};
struct yf2716 { void *up;
void * p2713;
rt_int p2714;
rt_int p2715;
void * v6144;
void * v6146;
void * v6148;
void * v6150;
void * v6152;
rt_int v6154;
void * v6156;
rt_int v6158;
rt_int v6160;
rt_int yu;
};
struct yf2723 { void *up;
rt_int p2721;
void * p2722;
void * v6207;
void * v6209;
rt_int yu;
};
struct yf2728 { void *up;
void * v6213;
rt_int yu;
};
struct yf2734 { void *up;
void * p2733;
void * v6218;
rt_int v6220;
rt_int v6222;
rt_int yu;
};
struct yf2747 { void *up;
void * p2739;
void * * p2740;
rt_int p2741;
void * p2742;
rt_int p2743;
rt_int p2744;
void * p2745;
rt_int p2746;
void * v6247;
rt_int yu;
};
struct yf2758 { void *up;
void * p2752;
void * * p2753;
void * p2754;
rt_int p2755;
void * p2756;
rt_int p2757;
void * v6260;
void * v6262;
void * v6264;
rt_int yu;
};
struct yf2766 { void *up;
void * p2763;
void * p2764;
rt_int p2765;
void * v6271;
void * v6273;
void * v6275;
void * v6277;
rt_int v6279;
void * v6282;
rt_int v6284;
rt_int v6286;
rt_int yu;
};
struct yf2773 { void *up;
void * p2771;
rt_int p2772;
void * v6336;
rt_int yu;
};
struct yf2779 { void *up;
rt_int p2778;
rt_int v6342;
rt_int v6345;
rt_int yu;
};
struct yf2786 { void *up;
rt_int p2784;
rt_int p2785;
rt_int yu;
};
struct yf2793 { void *up;
void * p2791;
rt_int p2792;
rt_int v6368;
rt_int v6370;
rt_int v6372;
rt_int v6374;
rt_int v6376;
rt_int v6378;
void * v6380;
rt_int yu;
};
struct yf2801 { void *up;
void * p2798;
rt_int p2799;
rt_int p2800;
void * v6430;
rt_int v6432;
rt_int v6435;
rt_int v6438;
rt_int v6441;
rt_int v6444;
rt_int v6447;
ydesc yd_6457;
yarr v6459;
yarr v6461;
ydesc yd_6470;
yarr v6472;
rt_int lo6489;
rt_int hi6490;
rt_int c_6492;
rt_int lo6498;
rt_int hi6499;
rt_int c_6501;
rt_int yu;
};
struct yf2808 { void *up;
void * p2806;
void * p2807;
void * v6516;
rt_int yu;
};
struct yf2815 { void *up;
void * p2813;
void * p2814;
void * v6525;
rt_int v6527;
rt_int v6529;
rt_int v6531;
rt_int yu;
};
struct yf2821 { void *up;
void * p2820;
rt_int v6550;
rt_int v6552;
rt_int yu;
};
struct yf2828 { void *up;
rt_int p2826;
rt_int p2827;
rt_int yu;
};
struct yf2835 { void *up;
rt_int p2833;
void * p2834;
rt_int v6568;
rt_int v6570;
rt_int yu;
};
struct yf2843 { void *up;
void * p2840;
rt_int p2841;
void * p2842;
rt_int v6596;
rt_int yu;
};
struct yf2849 { void *up;
void * p2848;
void * v6618;
rt_int yu;
};
struct yf2856 { void *up;
void * p2854;
rt_int p2855;
void * v6627;
rt_int v6629;
rt_int v6631;
rt_int v6633;
rt_int v6635;
rt_int lo6644;
rt_int hi6645;
rt_int c_6647;
rt_int yu;
};
struct yf2863 { void *up;
void * p2861;
void * p2862;
void * v6686;
void * v6688;
void * v6690;
rt_int v6692;
rt_int v6695;
rt_int yu;
};
struct yf2871 { void *up;
void * p2868;
rt_int p2869;
rt_int p2870;
rt_int v6720;
rt_int v6722;
rt_int yu;
};
struct yf2880 { void *up;
void * p2876;
rt_int p2877;
rt_int p2878;
rt_int * p2878_o;
rt_int p2879;
rt_int v6733;
rt_int v6735;
rt_int v6737;
ydesc yd_6746;
yarr v6748;
unsigned char v6750;
rt_int v6752;
rt_int lo6784;
rt_int hi6785;
rt_int c_6787;
rt_int yu;
};
struct yf2888 { void *up;
void * p2885;
rt_int p2886;
rt_int * p2886_o;
rt_int p2887;
rt_int * p2887_o;
void * v6822;
rt_int v6824;
rt_int v6826;
rt_int v6828;
rt_int v6830;
rt_int v6832;
void * v6834;
rt_int yu;
};
struct yf2896 { void *up;
void * p2893;
rt_int p2894;
rt_int * p2894_o;
rt_int p2895;
rt_int * p2895_o;
void * v6864;
rt_int v6866;
rt_int v6868;
rt_int v6870;
rt_int v6872;
rt_int v6874;
void * v6876;
void * v6878;
rt_int lo6895;
rt_int hi6896;
rt_int c_6898;
rt_int yu;
};
struct yf2903 { void *up;
void * p2901;
void * p2902;
rt_int yu;
};
struct yf2911 { void *up;
rt_int p2908;
void * p2909;
void * p2910;
rt_int v6926;
rt_int v6928;
void * v6930;
void * v6932;
rt_int yu;
};
struct yf2919 { void *up;
rt_int p2916;
void * p2917;
void * p2918;
rt_int v6961;
rt_int v6963;
rt_int v6965;
rt_int v6967;
rt_int v6969;
rt_int v6971;
rt_int yu;
};
struct yf2927 { void *up;
rt_int p2924;
void * p2925;
void * p2926;
rt_int v7018;
rt_int v7020;
rt_int v7022;
rt_int yu;
};
struct yf2938 { void *up;
rt_int * p2932;
void * p2933;
rt_int * p2934;
void * p2935;
void * p2936;
rt_int p2937;
rt_int v7037;
rt_int v7039;
rt_int yu;
};
struct yf2946 { void *up;
void * p2943;
rt_int p2944;
rt_int * p2944_o;
void * p2945;
void * * p2945_o;
rt_int v7046;
rt_int v7048;
rt_int yu;
};
struct yf2955 { void *up;
void * p2951;
rt_int p2952;
rt_int * p2952_o;
rt_int p2953;
rt_int * p2953_o;
rt_int p2954;
rt_int * p2954_o;
rt_int v7062;
rt_int v7064;
rt_int v7066;
rt_int v7068;
rt_int v7070;
rt_int v7072;
rt_int yu;
};
struct yf2961 { void *up;
rt_int p2960;
rt_int yu;
};
struct yf2969 { void *up;
rt_int p2966;
void * p2967;
void * p2968;
rt_int v7093;
rt_int v7095;
rt_int yu;
};
struct yf2979 { void *up;
rt_int p2974;
void * p2975;
rt_int p2976;
void * p2977;
rt_int p2978;
rt_int v7136;
rt_int yu;
};
struct yf2989 { void *up;
rt_int p2984;
void * p2985;
rt_int p2986;
void * p2987;
rt_int p2988;
rt_int yu;
};
struct yf2995 { void *up;
void * p2994;
void * v7158;
void * v7160;
rt_int yu;
};
struct yf3001 { void *up;
void * p3000;
void * v7179;
void * v7181;
rt_int yu;
};
struct yf3009 { void *up;
void * p3006;
rt_int p3007;
rt_int * p3007_o;
void * p3008;
void * * p3008_o;
void * v7190;
rt_int yu;
};
struct yf3015 { void *up;
rt_int p3014;
rt_int yu;
};
struct yf3022 { void *up;
void * p3020;
rt_int p3021;
void * v7201;
rt_int yu;
};
struct yf3028 { void *up;
void * p3027;
void * v7206;
rt_int yu;
};
struct yf3037 { void *up;
void * p3033;
void * p3034;
rt_int p3035;
rt_int * p3035_o;
void * p3036;
void * * p3036_o;
rt_int v7215;
void * v7217;
rt_int v7219;
rt_int v7221;
void * v7223;
void * v7225;
void * v7227;
rt_int v7229;
rt_int v7231;
rt_int yu;
};
struct yf3045 { void *up;
void * p3042;
rt_int * p3043;
void * p3044;
rt_int v7274;
rt_int v7276;
rt_int yu;
};
struct yf3051 { void *up;
void * p3050;
void * v7289;
rt_int yu;
};
struct yf3057 { void *up;
void * p3056;
rt_int v7300;
rt_int yu;
};
struct yf3063 { void *up;
void * p3062;
rt_int v7319;
rt_int yu;
};
struct yf3070 { void *up;
void * p3068;
rt_int p3069;
rt_int yu;
};
struct yf3078 { void *up;
void * p3075;
void * p3076;
rt_int p3077;
void * v7344;
rt_int v7346;
rt_int v7348;
rt_int yu;
};
struct yf3087 { void *up;
void * p3083;
void * p3084;
rt_int p3085;
rt_int * p3085_o;
void * p3086;
void * * p3086_o;
void * v7360;
rt_int yu;
};
struct yf3093 { void *up;
void * p3092;
void * v7369;
rt_int yu;
};
struct yf3101 { void *up;
void * p3098;
rt_int p3099;
rt_int * p3099_o;
void * p3100;
void * * p3100_o;
rt_int v7382;
rt_int v7384;
rt_int v7386;
void * v7388;
void * v7390;
void * v7392;
void * v7394;
rt_int v7396;
rt_int v7398;
rt_int yu;
};
struct yf3111 { void *up;
void * p3106;
rt_int p3107;
void * p3108;
rt_int p3109;
rt_int * p3109_o;
void * p3110;
void * * p3110_o;
rt_int yu;
};
struct yf3117 { void *up;
void * p3116;
void * v7441;
rt_int yu;
};
struct yf3126 { void *up;
yarr p3123;
rt_int p3124;
rt_int p3125;
rt_int yu;
};
struct yf3135 { void *up;
rt_int p3131;
yarr p3133;
rt_int p3134;
rt_int yu;
};
struct yf3144 { void *up;
rt_int p3140;
void * p3141;
rt_int p3142;
void * p3143;
rt_int v7469;
rt_int v7471;
void * v7473;
rt_int yu;
};
struct yf3150 { void *up;
void * p3149;
rt_int yu;
};
struct yf3157 { void *up;
rt_int p3155;
void * p3156;
rt_int yu;
};
struct yf3166 { void *up;
void * p3162;
void * p3163;
rt_int p3164;
rt_int * p3164_o;
void * p3165;
void * * p3165_o;
rt_int v7511;
rt_int v7513;
rt_int v7515;
rt_int v7517;
void * v7519;
void * v7521;
void * v7523;
rt_int v7525;
rt_int yu;
};
struct yf3173 { void *up;
void * p3171;
void * p3172;
rt_int yu;
};
struct yf3181 { void *up;
void * p3178;
rt_int p3179;
rt_int p3180;
void * v7588;
void * v7590;
rt_int v7592;
rt_int v7594;
rt_int yu;
};
struct yf3187 { void *up;
void * p3186;
void * v7606;
rt_int yu;
};
struct yf3196 { void *up;
void * p3192;
void * p3193;
rt_int p3194;
rt_int * p3194_o;
rt_int p3195;
rt_int * p3195_o;
void * v7618;
void * v7620;
void * v7622;
rt_int yu;
};
struct yf3204 { void *up;
void * p3201;
void * p3202;
rt_int p3203;
void * v7637;
rt_int yu;
};
struct yf3211 { void *up;
void * p3209;
void * p3210;
rt_int yu;
};
struct yf3220 { void *up;
void * p3216;
rt_int p3217;
rt_int p3218;
rt_int p3219;
void * v7654;
rt_int v7656;
rt_int v7660;
rt_int v7663;
rt_int v7666;
rt_int v7669;
rt_int v7672;
rt_int v7675;
rt_int yu;
};
struct yf3226 { void *up;
rt_int p3225;
rt_int yu;
};
struct yf3237 { void *up;
void * p3231;
rt_int p3232;
void * p3233;
void * p3234;
rt_int p3235;
rt_int * p3235_o;
void * p3236;
void * * p3236_o;
void * v7735;
void * v7737;
rt_int v7739;
rt_int v7741;
rt_int yu;
};
struct yf3244 { void *up;
void * p3242;
rt_int p3243;
void * v7755;
void * v7757;
rt_int yu;
};
struct yf3255 { void *up;
void * p3249;
void * p3250;
rt_int p3251;
rt_int p3252;
rt_int p3253;
rt_int * p3253_o;
void * p3254;
void * * p3254_o;
rt_int v7768;
rt_int v7770;
rt_int v7772;
rt_int yu;
};
struct yf3261 { void *up;
rt_int p3260;
rt_int yu;
};
struct yf3271 { void *up;
rt_int p3266;
void * p3267;
rt_int p3268;
void * p3269;
rt_int p3270;
void * v7803;
void * v7805;
void * v7807;
void * v7809;
rt_int v7811;
rt_int yu;
};
struct yf3281 { void *up;
rt_int p3276;
void * p3277;
rt_int p3278;
void * p3279;
rt_int p3280;
rt_int v7853;
rt_int yu;
};
struct yf3291 { void *up;
void * p3286;
void * p3287;
rt_int p3288;
rt_int p3289;
rt_int * p3289_o;
void * p3290;
void * * p3290_o;
void * v7862;
void * v7864;
rt_int v7866;
rt_int v7868;
rt_int yu;
};
struct yf3300 { void *up;
void * p3296;
void * p3297;
rt_int p3298;
rt_int * p3298_o;
void * p3299;
void * * p3299_o;
void * v7881;
void * v7883;
rt_int v7885;
rt_int v7887;
rt_int v7889;
void * v7891;
rt_int v7893;
rt_int v7895;
rt_int v7897;
rt_int v7899;
rt_int v7901;
rt_int v7904;
void * v7906;
rt_int v7908;
rt_int yu;
};
struct yf3308 { void *up;
void * p3305;
rt_int p3306;
rt_int p3307;
void * v7970;
void * v7972;
rt_int v7974;
rt_int v7976;
rt_int yu;
};
struct yf3316 { void *up;
yarr p3314;
rt_int p3315;
rt_int v7985;
rt_int yu;
};
struct yf3326 { void *up;
yarr p3322;
rt_int p3323;
yarr p3325;
rt_int v7991;
rt_int yu;
};
struct yf3332 { void *up;
rt_int p3331;
rt_int yu;
};
struct yf3337 { void *up;
rt_int yu;
};
struct yf3343 { void *up;
rt_int p3342;
rt_int yu;
};
struct yf3349 { void *up;
void * p3348;
rt_int v8013;
rt_int yu;
};
struct yf3355 { void *up;
void * p3354;
rt_int v8017;
rt_int v8019;
rt_int v8021;
void * v8023;
void * v8025;
rt_int v8027;
void * v8029;
rt_int v8031;
rt_int yu;
};
struct yf3362 { void *up;
void * p3360;
void * p3361;
void * v8097;
void * v8099;
rt_int v8101;
rt_int v8103;
rt_int v8105;
rt_int v8107;
rt_int yu;
};
struct yf3370 { void *up;
void * p3367;
void * p3368;
void * p3369;
rt_int v8129;
void * v8131;
void * v8133;
void * v8135;
rt_int v8137;
rt_int v8139;
rt_int v8141;
rt_int v8143;
rt_int yu;
};
struct yf3377 { void *up;
void * p3375;
void * p3376;
void * v8156;
void * v8158;
rt_int v8160;
rt_int v8163;
rt_int lo8168;
rt_int hi8169;
rt_int c_8171;
rt_int yu;
};
struct yf3383 { void *up;
void * p3382;
void * v8181;
rt_int v8183;
rt_int yu;
};
struct yf3389 { void *up;
void * p3388;
void * v8191;
rt_int yu;
};
struct yf3395 { void *up;
void * p3394;
rt_int v8205;
void * v8207;
rt_int v8209;
rt_int v8211;
rt_int yu;
};
struct yf3402 { void *up;
void * p3400;
rt_int p3401;
void * v8236;
void * v8238;
rt_int yu;
};
struct yf3408 { void *up;
void * p3407;
void * v8262;
rt_int yu;
};
struct yf3414 { void *up;
void * p3413;
rt_int v8266;
void * v8268;
rt_int yu;
};
struct yf3421 { void *up;
void * p3419;
void * p3420;
rt_int v8274;
rt_int v8276;
void * v8278;
void * v8280;
rt_int v8282;
rt_int yu;
};
struct yf3426 { void *up;
void * v8288;
rt_int v8290;
rt_int yu;
};
struct yf3432 { void *up;
void * p3431;
rt_int v8299;
rt_int v8301;
rt_int v8303;
rt_int v8305;
rt_int v8307;
rt_int v8309;
rt_int v8311;
void * v8313;
void * v8315;
void * v8317;
void * v8319;
rt_int v8321;
rt_int v8323;
rt_int v8325;
rt_int v8327;
void * v8329;
rt_int yu;
};
struct yf3438 { void *up;
void * p3437;
void * v8406;
rt_int v8408;
rt_int v8410;
rt_int v8412;
void * v8414;
rt_int yu;
};
struct yf3446 { void *up;
rt_int p3443;
rt_int p3444;
rt_int p3445;
rt_int yu;
};
struct yf3452 { void *up;
void * p3451;
rt_int v8446;
rt_int v8448;
rt_int v8450;
void * v8452;
void * v8454;
rt_int yu;
};
struct yf3458 { void *up;
void * p3457;
rt_int v8470;
rt_int v8472;
rt_int yu;
};
struct yf3464 { void *up;
void * p3463;
void * v8499;
rt_int yu;
};
struct yf3470 { void *up;
void * p3469;
void * v8514;
rt_int yu;
};
struct yf3476 { void *up;
void * p3475;
void * v8524;
void * v8526;
void * v8528;
rt_int yu;
};
struct yf3485 { void *up;
void * p3481;
void * p3482;
void * * p3482_o;
rt_int p3483;
rt_int * p3483_o;
rt_int p3484;
rt_int * p3484_o;
void * v8536;
void * v8538;
rt_int yu;
};
struct yf3493 { void *up;
void * p3490;
rt_int p3491;
rt_int p3492;
void * v8548;
rt_int yu;
};
struct yf3499 { void *up;
void * p3498;
void * v8553;
rt_int v8555;
rt_int v8557;
void * v8559;
void * v8561;
rt_int yu;
};
struct yf3505 { void *up;
void * p3504;
void * v8566;
rt_int yu;
};
struct yf3512 { void *up;
void * p3510;
rt_int p3511;
void * v8572;
rt_int v8574;
rt_int v8576;
void * v8578;
rt_int yu;
};
struct yf3519 { void *up;
void * p3517;
yarr * p3518;
void * v8583;
rt_int v8585;
void * v8588;
rt_int lo8597;
rt_int hi8598;
rt_int c_8600;
rt_int yu;
};
struct yf3526 { void *up;
void * p3524;
void * p3525;
void * v8614;
void * v8616;
rt_int v8618;
rt_int v8620;
rt_int v8622;
rt_int v8624;
rt_int v8626;
rt_int v8628;
rt_int v8630;
rt_int v8632;
yarr v8634;
yarr v8636;
rt_int v8638;
rt_int v8640;
rt_int v8642;
rt_int v8644;
void * v8646;
void * v8648;
void * v8650;
void * v8652;
rt_int lo8666;
rt_int hi8667;
rt_int c_8669;
rt_int yu;
};
struct yf3534 { void *up;
void * p3531;
rt_int p3532;
rt_int p3533;
void * v8691;
void * v8693;
rt_int v8695;
rt_int v8697;
void * v8699;
void * v8701;
void * v8703;
rt_int v8705;
rt_int v8707;
rt_int yu;
};
struct yf8843 { struct yf3539 *up;
rt_int p8841;
rt_int p8842;
rt_int yu;
};
struct yf8850 { struct yf3539 *up;
rt_int p8848;
rt_int p8849;
void * v8870;
rt_int yu;
};
struct yf8856 { struct yf3539 *up;
rt_int p8855;
rt_int yu;
};
struct yf3539 { void *up;
void * v8723;
void * v8725;
void * v8727;
rt_int v8729;
rt_int v8732;
rt_int v8735;
void * v8738;
rt_int lo8765;
rt_int hi8766;
ydesc yd_8768;
yarr v8770;
yarr v8772;
rt_int lo8778;
rt_int hi8779;
ydesc yd_8781;
yarr v8783;
rt_int lo8789;
rt_int hi8790;
ydesc yd_8792;
yarr v8794;
rt_int lo8800;
rt_int hi8801;
ydesc yd_8803;
yarr v8805;
rt_int lo8811;
rt_int hi8812;
ydesc yd_8814;
yarr v8816;
rt_int lo8822;
rt_int hi8823;
ydesc yd_8825;
yarr v8827;
rt_int v8829;
rt_int v8832;
rt_int v8834;
rt_int v8836;
void * v8838;
rt_int lo8895;
rt_int hi8896;
rt_int c_8898;
rt_int lo8906;
rt_int hi8907;
rt_int c_8909;
rt_int lo8917;
rt_int hi8918;
rt_int c_8920;
rt_int lo8933;
rt_int hi8934;
rt_int c_8936;
rt_int lo8943;
rt_int hi8944;
rt_int c_8946;
rt_int lo8956;
rt_int hi8957;
rt_int c_8959;
rt_int lo8966;
rt_int hi8967;
rt_int c_8969;
rt_int lo8979;
rt_int hi8980;
rt_int c_8982;
rt_int lo9004;
rt_int hi9005;
rt_int c_9007;
rt_int yu;
};
struct yf3547 { void *up;
rt_int p3544;
rt_int p3545;
rt_int p3546;
rt_int lo9020;
rt_int hi9021;
rt_int c_9023;
rt_int yu;
};
struct yf3553 { void *up;
rt_int p3552;
rt_int v9037;
rt_int v9039;
rt_int lo9044;
rt_int hi9045;
rt_int c_9047;
rt_int yu;
};
struct yf3559 { void *up;
void * p3558;
void * v9057;
rt_int v9059;
rt_int v9061;
rt_int yu;
};
struct yf3565 { void *up;
void * p3564;
rt_int v9078;
rt_int yu;
};
struct yf3572 { void *up;
void * p3570;
void * p3571;
rt_int v9086;
rt_int v9088;
rt_int v9091;
rt_int v9093;
rt_int lo9103;
rt_int hi9104;
rt_int c_9106;
rt_int yu;
};
struct yf3578 { void *up;
void * p3577;
rt_int yu;
};
struct yf3585 { void *up;
void * p3583;
rt_int p3584;
void * v9136;
void * v9138;
void * v9140;
void * v9142;
void * v9144;
void * v9146;
void * v9148;
rt_int v9150;
rt_int v9152;
rt_int yu;
};
struct yf3592 { void *up;
void * p3590;
void * p3591;
void * v9207;
void * v9209;
void * v9211;
rt_int v9213;
rt_int yu;
};
struct yf3598 { void *up;
void * p3597;
void * v9221;
yR140 v9223;
yR140 v9225;
rt_int v9227;
rt_int v9229;
rt_int v9231;
rt_int v9233;
rt_int v9235;
rt_int v9237;
rt_int v9239;
void * v9241;
rt_int v9243;
void * v9245;
void * v9247;
rt_int v9249;
rt_int v9251;
yR140 v9253;
rt_int yu;
};
struct yf3606 { void *up;
void * p3603;
void * p3604;
rt_int p3605;
rt_int yu;
};
struct yf3615 { void *up;
void * p3611;
void * p3612;
rt_int p3613;
rt_int p3614;
rt_int yu;
};
struct yf3623 { void *up;
void * p3620;
void * p3621;
rt_int p3622;
rt_int yu;
};
struct yf3629 { void *up;
void * p3628;
rt_int v9342;
void * v9344;
void * v9346;
void * v9348;
void * v9350;
rt_int v9352;
rt_int v9354;
rt_int v9356;
rt_int v9358;
rt_int yu;
};
struct yf3636 { void *up;
void * p3634;
void * p3635;
void * v9382;
rt_int yu;
};
struct yf3643 { void *up;
void * p3641;
void * p3642;
rt_int yu;
};
struct yf3652 { void *up;
void * p3648;
rt_int p3649;
void * p3650;
rt_int p3651;
rt_int v9392;
rt_int lo9405;
rt_int hi9406;
rt_int c_9408;
rt_int yu;
};
struct yf3659 { void *up;
rt_int p3657;
rt_int p3658;
rt_int v9417;
rt_int v9421;
rt_int v9423;
void * v9425;
rt_int lo9430;
rt_int hi9431;
rt_int c_9433;
rt_int lo9440;
rt_int hi9441;
rt_int c_9443;
rt_int yu;
};
struct yf3665 { void *up;
rt_int p3664;
void * v9451;
yR140 v9453;
void * v9455;
rt_int yu;
};
struct yf3671 { void *up;
void * p3670;
void * v9469;
void * v9471;
rt_int v9473;
rt_int v9475;
rt_int yu;
};
struct yf3677 { void *up;
void * p3676;
rt_int yu;
};
struct yf3684 { void *up;
rt_int p3682;
void * p3683;
void * v9485;
rt_int yu;
};
struct yf3692 { void *up;
void * * p3689;
void * p3690;
rt_int p3691;
void * v9492;
void * v9494;
void * v9496;
rt_int yu;
};
struct yf3699 { void *up;
void * p3697;
rt_int p3698;
void * v9506;
rt_int yu;
};
struct yf3707 { void *up;
rt_int p3704;
rt_int p3705;
void * p3706;
void * * p3706_o;
void * v9522;
rt_int yu;
};
struct yf3713 { void *up;
void * p3712;
void * v9540;
rt_int yu;
};
struct yf3722 { void *up;
rt_int p3718;
rt_int p3719;
void * p3720;
rt_int p3721;
void * v9548;
rt_int yu;
};
struct yf3729 { void *up;
rt_int p3727;
void * p3728;
rt_int yu;
};
struct yf3736 { void *up;
void * p3734;
void * p3735;
void * v9561;
rt_int lo9565;
rt_int hi9566;
rt_int c_9568;
rt_int yu;
};
struct yf3742 { void *up;
rt_int p3741;
void * v9575;
rt_int lo9579;
rt_int hi9580;
rt_int c_9582;
rt_int yu;
};
struct yf3750 { void *up;
void * p3747;
void * * p3748;
rt_int p3749;
void * v9591;
void * v9593;
rt_int v9595;
rt_int yu;
};
struct yf3758 { void *up;
void * p3755;
void * * p3756;
rt_int p3757;
void * v9602;
void * v9604;
void * v9606;
rt_int v9608;
void * v9610;
rt_int v9612;
rt_int v9614;
void * v9616;
rt_int yu;
};
struct yf3765 { void *up;
void * p3763;
rt_int p3764;
void * v9651;
void * v9653;
void * v9655;
rt_int yu;
};
struct yf3773 { void *up;
void * p3770;
void * p3771;
rt_int p3772;
void * v9663;
void * v9665;
void * v9667;
void * v9669;
rt_int yu;
};
struct yf3779 { void *up;
void * p3778;
void * v9676;
void * v9678;
void * v9680;
void * v9682;
void * v9684;
void * v9686;
void * v9688;
void * v9690;
void * v9692;
rt_int v9694;
void * v9696;
void * v9698;
rt_int v9700;
rt_int v9702;
rt_int v9704;
rt_int yu;
};
struct yf3785 { void *up;
void * p3784;
void * v9753;
rt_int yu;
};
struct yf3791 { void *up;
void * p3790;
void * v9757;
void * v9759;
void * v9761;
void * v9763;
rt_int v9765;
rt_int v9767;
rt_int v9769;
rt_int v9771;
void * v9773;
rt_int lo9781;
rt_int hi9782;
rt_int c_9784;
rt_int yu;
};
struct yf3797 { void *up;
void * p3796;
void * v9796;
void * v9798;
rt_int yu;
};
struct yf3802 { void *up;
void * v9804;
rt_int yu;
};
struct yf3809 { void *up;
void * p3807;
void * p3808;
rt_int v9815;
rt_int v9817;
rt_int v9819;
rt_int v9821;
rt_int v9823;
void * v9825;
rt_int v9827;
rt_int v9829;
void * v9831;
rt_int v9833;
rt_int v9835;
rt_int v9837;
rt_int v9839;
rt_int v9841;
rt_int v9843;
void * v9845;
void * v9847;
rt_int yu;
};
struct yf3815 { void *up;
rt_int p3814;
rt_int v9911;
rt_int yu;
};
struct yf3821 { void *up;
void * p3820;
rt_int yu;
};
struct yf3827 { void *up;
void * p3826;
rt_int v9924;
rt_int yu;
};
struct yf3832 { void *up;
rt_int yu;
};
struct yf3838 { void *up;
void * p3837;
rt_int yu;
};
struct yf3845 { void *up;
void * p3843;
rt_int p3844;
rt_int yu;
};
struct yf3852 { void *up;
void * p3850;
rt_int p3851;
rt_int yu;
};
struct yf3859 { void *up;
void * p3857;
void * p3858;
rt_int v9967;
rt_int v9969;
rt_int v9971;
rt_int yu;
};
struct yf3866 { void *up;
void * p3864;
rt_int p3865;
void * v9980;
rt_int v9982;
rt_int yu;
};
struct yf3873 { void *up;
void * p3871;
rt_int p3872;
rt_int yu;
};
struct yf3881 { void *up;
yarr p3879;
rt_int p3880;
rt_int yu;
};
struct yf3887 { void *up;
rt_int p3886;
rt_int yu;
};
struct yf3896 { void *up;
void * p3892;
rt_int p3893;
rt_int p3894;
rt_int * p3894_o;
void * p3895;
void * * p3895_o;
rt_int v10009;
rt_int yu;
};
struct yf3904 { void *up;
void * p3901;
rt_int p3902;
rt_int * p3902_o;
void * p3903;
void * * p3903_o;
rt_int yu;
};
struct yf3910 { void *up;
void * p3909;
rt_int v10025;
void * v10027;
rt_int yu;
};
struct yf3916 { void *up;
void * p3915;
void * v10033;
rt_int v10036;
rt_int v10038;
rt_int v10040;
rt_int v10042;
rt_int v10044;
rt_int v10046;
unsigned char v10048;
void * v10050;
ydesc yd_10059;
yarr v10061;
rt_int yu;
};
struct yf3923 { void *up;
void * p3921;
void * p3922;
rt_int v10100;
rt_int v10102;
rt_int v10104;
void * v10106;
rt_int yu;
};
struct yf3933 { void *up;
rt_int p3928;
void * p3929;
rt_int p3930;
rt_int p3931;
rt_int * p3931_o;
void * p3932;
void * * p3932_o;
void * v10118;
rt_int v10120;
rt_int v10122;
rt_int v10124;
rt_int v10126;
rt_int v10128;
void * v10130;
void * v10132;
void * v10134;
void * v10136;
rt_int v10138;
rt_int v10140;
rt_int v10142;
rt_int v10144;
void * v10146;
rt_int v10148;
rt_int lo10162;
rt_int hi10163;
rt_int c_10165;
rt_int yu;
};
struct yf3938 { void *up;
rt_int v10374;
rt_int yu;
};
struct yf3944 { void *up;
rt_int p3943;
ydesc yd_10386;
yarr v10388;
rt_int v10390;
rt_int lo10394;
rt_int hi10395;
rt_int c_10397;
rt_int yu;
};
struct yf3949 { void *up;
rt_int v10403;
rt_int v10405;
void * v10407;
void * v10409;
rt_int lo10424;
rt_int hi10425;
rt_int c_10427;
rt_int yu;
};
struct yf3957 { void *up;
rt_int p3954;
yarr p3956;
rt_int yu;
};
struct yf3963 { void *up;
rt_int p3962;
rt_int v10441;
rt_int lo10448;
rt_int hi10449;
ydesc yd_10451;
yarr v10453;
yfile * v10455;
unsigned char v10457;
rt_int lo10462;
rt_int hi10463;
rt_int c_10465;
rt_int yu;
};
struct yf3970 { void *up;
rt_int p3968;
yR140 p3969;
void * v10478;
rt_int lo10484;
rt_int hi10485;
ydesc yd_10487;
yarr v10489;
yfile * v10491;
rt_int lo10496;
rt_int hi10497;
rt_int c_10499;
rt_int yu;
};
struct yf3976 { void *up;
rt_int p3975;
rt_int v10510;
rt_int yu;
};
struct yf3983 { void *up;
rt_int p3981;
rt_int p3982;
rt_int v10522;
ydesc yd_10531;
yarr v10533;
rt_int v10535;
rt_int yu;
};
struct yf3989 { void *up;
rt_int p3988;
rt_int v10559;
rt_int v10561;
rt_int yu;
};
struct yf3996 { void *up;
rt_int p3994;
rt_int p3995;
yR140 v10574;
rt_int v10576;
rt_int v10578;
rt_int yu;
};
struct yf4002 { void *up;
yR140 p4001;
rt_int v10586;
void * v10589;
rt_int lo10593;
rt_int hi10594;
rt_int c_10596;
rt_int yu;
};
struct yf4011 { void *up;
rt_int p4007;
rt_int p4008;
rt_int p4009;
rt_int p4010;
rt_int v10617;
rt_int v10619;
rt_int yu;
};
struct yf4018 { void *up;
void * p4016;
rt_int p4017;
void * v10642;
void * v10644;
void * v10646;
rt_int yu;
};
struct yf4024 { void *up;
rt_int p4023;
void * v10656;
rt_int yu;
};
struct yf4031 { void *up;
void * p4029;
void * p4030;
void * v10665;
void * v10667;
rt_int v10669;
rt_int yu;
};
struct yf4036 { void *up;
void * v10680;
void * v10682;
void * v10684;
rt_int yu;
};
struct yf4043 { void *up;
rt_int p4041;
rt_int p4042;
rt_int v10690;
rt_int v10692;
rt_int v10694;
void * v10696;
void * v10698;
void * v10700;
rt_int v10702;
rt_int yu;
};
struct yf4049 { void *up;
void * p4048;
void * v10714;
rt_int yu;
};
struct yf4054 { void *up;
void * v10718;
rt_int yu;
};
struct yf4059 { void *up;
void * v10724;
yR140 v10726;
rt_int v10728;
yR140 v10730;
rt_int yu;
};
struct yf4064 { void *up;
void * v10740;
void * v10742;
rt_int v10744;
rt_int v10746;
rt_int v10748;
rt_int v10750;
yR140 v10752;
void * v10754;
rt_int yu;
};
struct yf4070 { void *up;
void * p4069;
void * v10767;
rt_int yu;
};
struct yf4076 { void *up;
rt_int p4075;
void * v10773;
rt_int v10775;
rt_int yu;
};
struct yf4081 { void *up;
void * v10792;
void * v10794;
rt_int v10796;
rt_int v10798;
rt_int v10800;
rt_int v10802;
rt_int v10804;
rt_int v10806;
rt_int v10808;
yR140 v10810;
rt_int yu;
};
struct yf4088 { void *up;
rt_int p4086;
rt_int p4087;
rt_int v10855;
rt_int v10858;
rt_int v10860;
rt_int v10862;
void * v10864;
rt_int v10866;
rt_int yu;
};
struct yf4095 { void *up;
rt_int p4093;
rt_int p4094;
unsigned char v10890;
rt_int lo10895;
rt_int hi10896;
rt_int c_10898;
rt_int lo10906;
rt_int hi10907;
rt_int c_10909;
rt_int yu;
};
struct yf4101 { void *up;
void * p4100;
rt_int yu;
};
struct yf4107 { void *up;
void * p4106;
void * v10922;
rt_int v10924;
rt_int yu;
};
struct yf4115 { void *up;
void * p4112;
void * p4113;
rt_int p4114;
rt_int v10938;
rt_int yu;
};
struct yf4123 { void *up;
void * p4120;
void * p4121;
rt_int p4122;
rt_int v10959;
rt_int yu;
};
struct yf4130 { void *up;
void * p4128;
void * p4129;
rt_int v10981;
rt_int v10983;
rt_int v10985;
rt_int v10987;
rt_int v10989;
rt_int v10991;
void * v10993;
void * v10995;
rt_int v10997;
rt_int v10999;
yR140 v11002;
rt_int yu;
};
struct yf4138 { void *up;
yarr p4136;
void * p4137;
void * v11048;
rt_int yu;
};
struct yf4146 { void *up;
yarr p4144;
rt_int p4145;
void * v11054;
rt_int yu;
};
struct yf4156 { void *up;
yarr p4152;
yarr p4153;
yarr p4154;
rt_int p4155;
void * v11062;
void * v11064;
void * v11066;
rt_int yu;
};
struct yf4164 { void *up;
rt_int p4161;
yarr p4163;
void * v11075;
rt_int yu;
};
struct yf4169 { void *up;
rt_int yu;
};
struct yf4174 { void *up;
void * v11165;
yR140 v11167;
rt_int yu;
};
struct yf4179 { void *up;
rt_int yu;
};
struct yf4184 { void *up;
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
static rt_int v1565;
static rt_int v1568;
static ydesc yd_1578;
static yarr v1580;
static ydesc yd_1589;
static yarr v1591;
static rt_int v1593;
static ydesc yd_1603;
static yarr v1605;
static rt_int v1607;
static ydesc yd_1617;
static yarr v1619;
static yarr v1621;
static ydesc yd_1630;
static yarr v1632;
static rt_int v1634;
static rt_int v1637;
static void * v1640;
static ydesc yd_1649;
static yarr v1651;
static yarr v1653;
static rt_int v1655;
static ydesc yd_1665;
static yarr v1667;
static rt_int v1669;
static rt_int v1672;
static rt_int v1675;
static void * v1678;
static rt_int v1680;
static rt_int v1683;
static void * v1686;
static void * v1688;
static rt_int v1690;
static rt_int v1693;
static rt_int v1696;
static rt_int v1699;
static ydesc yd_1709;
static yarr v1711;
static yR140 v1713;
static yR140 v1715;
static rt_int v1717;
static void * v1720;
static void * v1722;
static ydesc yd_1731;
static yarr v1733;
static ydesc yd_1742;
static yarr v1744;
static rt_int v1746;
static ydesc yd_1756;
static yarr v1758;
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
static yarr v1837;
static ydesc yd_1846;
static yarr v1848;
static rt_int v1850;
static rt_int v1853;
static void * v1856;
static ydesc yd_1865;
static yarr v1867;
static rt_int v1869;
static ydesc yd_1879;
static yarr v1881;
static ydesc yd_1890;
static yarr v1892;
static ydesc yd_1901;
static yarr v1903;
static ydesc yd_1912;
static yarr v1914;
static yarr v1916;
static rt_int v1918;
static void * v1921;
static void * v1923;
static void * v1925;
static void * v1927;
static rt_int c_11199;
static rt_int c_11209;
static rt_int c_11218;
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
static void yr1929_InitWords(void);
static void yr1934_ReadSource(void);
static void yr1939_AddTok(rt_int a_p1940, rt_int a_p1941);
static unsigned char yr1946_At(rt_int a_p1947);
static rt_int yr1952_EndsOperand(void);
static rt_int yr1957_DigitVal(unsigned char a_p1958);
static void yr1963_LexError(yarr a_p1965);
static void yr1970_LexDigits(rt_int a_p1971, rt_int a_p1972);
static void yr1977_LexNumber(rt_int a_p1978);
static void yr1983_LexString(void);
static void yr1988_Lex(void);
static void * yr1993_NewNode(rt_int a_p1994, rt_int a_p1995);
static void yr2000_Link(void * * a_p2001, void * * a_p2002, void * a_p2003);
static rt_int yr2008_Count(void * a_p2009);
static rt_int yr2014_TK(void);
static rt_int yr2019_TV(void);
static rt_int yr2024_TLn(void);
static rt_int yr2029_IsAt(rt_int a_p2030, rt_int a_p2031);
static rt_int yr2036_Is(rt_int a_p2037);
static rt_int yr2042_IsIdAt(rt_int a_p2043);
static void yr2048_Skip(void);
static rt_int yr2053_Accept(rt_int a_p2054);
static rt_int yr2059_TokText(void);
static void yr2064_Expect(rt_int a_p2065);
static rt_int yr2070_Ident(void);
static void yr2075_CloseName(rt_int a_p2076, rt_int a_p2077);
static rt_int yr2082_ExtendedId(void);
static rt_int yr2087_IsLabel(rt_int a_p2088);
static void * yr2093_ImportItem(void);
static void * yr2098_ParseModule(void);
static rt_int yr2103_IsDeclWord(void);
static void * yr2108_ParseBlock(void);
static void * yr2113_ParseHandler(void);
static void * yr2118_ParseNames(void);
static void * yr2123_SimpleEntry(rt_int a_p2124);
static rt_int yr2129_Continues(rt_int a_p2130);
static void yr2135_ParseDeclGroup(void * * a_p2136, void * * a_p2137);
static void * yr2142_ParseDecl(void);
static void * yr2147_ParseDecl1(void);
static void yr2152_ParseFormals(void * a_p2153);
static void * yr2158_ParseFormalRep(void);
static rt_int yr2163_IsStructWord(rt_int a_p2164);
static void * yr2169_ParseRep(void);
static void * yr2174_ParseConcrete(void);
static void * yr2179_ParseIds(void);
static void * yr2184_ParseFieldGroups(void);
static void * yr2189_ParseConcrete1(void);
static void * yr2194_ParseQualifier(void);
static rt_int yr2199_IsStop(void);
static void * yr2204_ParseStatements(rt_int a_p2205);
static void * yr2210_ParseStatement(void);
static rt_int yr2215_OpAt(void);
static rt_int yr2220_IsRel(rt_int a_p2221);
static rt_int yr2226_IsAssocMul(rt_int a_p2227);
static rt_int yr2232_IsNonAssocMul(rt_int a_p2233);
static rt_int yr2238_IsAssocAdd(rt_int a_p2239);
static rt_int yr2244_IsNonAssocAdd(rt_int a_p2245);
static void * yr2250_Bin(rt_int a_p2251, void * a_p2252, void * a_p2253, rt_int a_p2254);
static void yr2259_NeedParens(rt_int a_p2260, rt_int a_p2261);
static void * yr2266_ParseExpr(void);
static void * yr2271_ParseSimple(void);
static void * yr2276_ParseTerm(void);
static rt_int yr2281_IsLiteralAt(rt_int a_p2282);
static void * yr2287_ParseLiteral(void);
static void * yr2292_ParseFactor(void);
static void * yr2297_ParseDesignator(void);
static void yr2302_EXIT_ARGS(void);
static void * yr2307_ParseProgram(void);
static void * yr2312_NewSym(rt_int a_p2313, rt_int a_p2314);
static void yr2319_OpenScope(rt_int a_p2320);
static void yr2325_ReopenScope(void * a_p2326);
static void yr2331_CloseScope(void);
static rt_int yr2336_Visible(void * a_p2337);
static void * yr2342_Find(rt_int a_p2343);
static void * yr2348_FindHere(rt_int a_p2349);
static void * yr2354_Lookup(rt_int a_p2355, rt_int a_p2356);
static rt_int yr2361_AltOf(void * a_p2362, void * a_p2363);
static rt_int yr2368_IsSimple(rt_int a_p2369);
static rt_int yr2374_DeclaredFrom(void * a_p2375, rt_int a_p2376);
static rt_int yr2381_LiteralIn(void * a_p2382, rt_int a_p2383);
static rt_int yr2388_LiteralInGroups(void * a_p2389, rt_int a_p2390);
static rt_int yr2395_Resolved(void * a_p2396);
static rt_int yr2401_Ambiguous(void * a_p2402);
static void * yr2407_FindLit(rt_int a_p2408, void * a_p2409);
static void yr2414_Define(void * a_p2415, rt_int a_p2416);
static rt_int yr2421_Path(rt_int a_p2422, rt_int a_p2423);
static rt_int yr2428_FramePtr(rt_int a_p2429);
static void yr2434_DeclStorage(rt_int a_p2435, rt_int a_p2436);
static rt_int yr2441_SymPath(void * a_p2442);
static void * yr2447_Real(void * a_p2448);
static void * yr2453_NewRep(rt_int a_p2454, rt_int a_p2455);
static void * yr2460_CopyRep(void * a_p2461);
static rt_int yr2466_IsDiscrete(void * a_p2467);
static rt_int yr2472_IsNumeric(void * a_p2473);
static rt_int yr2478_IsArrayLike(void * a_p2479);
static rt_int yr2484_IsString(void * a_p2485);
static rt_int yr2490_Deep(void * a_p2491);
static rt_int yr2496_Holds(void * a_p2497, rt_int a_p2498);
static rt_int yr2503_HoldsSignal(void * a_p2504);
static rt_int yr2509_NonAssignable(void * a_p2510);
static rt_int yr2515_CType(void * a_p2516);
static rt_int yr2521_DescOf(void * a_p2522);
static void yr2527_NewDesc(void * a_p2528);
static rt_int yr2533_SameType(void * a_p2534, void * a_p2535);
static void yr2540_TypeClash(rt_int a_p2541, void * a_p2542, void * a_p2543);
static void yr2548_CheckType(rt_int a_p2549, void * a_p2550, void * a_p2551);
static void yr2556_CheckRepresented(void * a_p2557, rt_int a_p2558);
static rt_int yr2563_SigText(void * a_p2564);
static rt_int yr2569_RepSig(void * a_p2570);
static rt_int yr2575_Identical(void * a_p2576, void * a_p2577);
static rt_int yr2582_IsLiteralNode(void * a_p2583);
static void yr2588_StoreBounds(void * a_p2589, yarr a_p2591);
static rt_int yr2596_LoText(void * a_p2597);
static rt_int yr2602_HiText(void * a_p2603);
static void * yr2608_AdoptLiteral(void * a_p2609, void * a_p2610, void * a_p2611);
static rt_int yr2616_HasQualifier(void * a_p2617);
static rt_int yr2622_Gcd(rt_int a_p2623, rt_int a_p2624);
static rt_int yr2629_MulChk(rt_int a_p2630, rt_int a_p2631, rt_int a_p2632);
static rt_int yr2637_PowChk(rt_int a_p2638, rt_int a_p2639, rt_int a_p2640);
static void yr2645_ScaleRatio(void * a_p2646, void * a_p2647, rt_int * a_p2648, rt_int * a_p2649, rt_int * a_p2650);
static rt_int yr2655_Factor(rt_int a_p2656, rt_int a_p2657);
static void yr2662_SetScale(void * a_p2663, rt_int a_p2664, rt_int a_p2665);
static void yr2670_Qualify(void * a_p2671, void * a_p2672);
static void yr2677_DefineLits(void * a_p2678);
static void yr2683_SetRange(void * a_p2684, rt_int a_p2685, rt_int a_p2686);
static rt_int yr2691_NewTid(rt_int a_p2692);
static void * yr2697_MakeRep(void * a_p2698, rt_int a_p2699, rt_int a_p2700);
static rt_int yr2705_Conforms(void * a_p2706, void * a_p2707);
static void * yr2712_MakeRep1(void * a_p2713, rt_int a_p2714, rt_int a_p2715);
static void yr2720_ResolvePending(rt_int a_p2721, void * a_p2722);
static void yr2727_CheckPending(void);
static void yr2732_BuildArrayDesc(void * a_p2733);
static void yr2738_AddField(void * a_p2739, void * * a_p2740, rt_int a_p2741, void * a_p2742, rt_int a_p2743, rt_int a_p2744, void * a_p2745, rt_int a_p2746);
static void yr2751_AddFields(void * a_p2752, void * * a_p2753, void * a_p2754, rt_int a_p2755, void * a_p2756, rt_int a_p2757);
static void yr2762_MakeRecord(void * a_p2763, void * a_p2764, rt_int a_p2765);
static void * yr2770_FindField(void * a_p2771, rt_int a_p2772);
static rt_int yr2777_BitsFor(rt_int a_p2778);
static rt_int yr2783_RoundUp(rt_int a_p2784, rt_int a_p2785);
static rt_int yr2790_Bits(void * a_p2791, rt_int a_p2792);
static rt_int yr2797_RecordBits(void * a_p2798, rt_int a_p2799, rt_int a_p2800);
static rt_int yr2805_FirstOfVariant(void * a_p2806, void * a_p2807);
static void * yr2812_ApplyStorage(void * a_p2813, void * a_p2814);
static rt_int yr2819_AtAddress(void * a_p2820);
static rt_int yr2825_StoreAt(rt_int a_p2826, rt_int a_p2827);
static rt_int yr2832_ExtentCode(rt_int a_p2833, void * a_p2834);
static rt_int yr2839_SpaceArg(void * a_p2840, rt_int a_p2841, void * a_p2842);
static rt_int yr2847_PackedComponent(void * a_p2848);
static rt_int yr2853_CharOrd(void * a_p2854, rt_int a_p2855);
static void * yr2860_AlphabetFor(void * a_p2861, void * a_p2862);
static rt_int yr2867_CharValue(void * a_p2868, rt_int a_p2869, rt_int a_p2870);
static rt_int yr2875_StringCodes(void * a_p2876, rt_int a_p2877, rt_int * a_p2878, rt_int a_p2879);
static void yr2884_Manifest(void * a_p2885, rt_int * a_p2886, rt_int * a_p2887);
static void yr2892_ManifestStd(void * a_p2893, rt_int * a_p2894, rt_int * a_p2895);
static rt_int yr2900_NeedsConv(void * a_p2901, void * a_p2902);
static rt_int yr2907_ConvertRecord(rt_int a_p2908, void * a_p2909, void * a_p2910);
static rt_int yr2915_ConvertArray(rt_int a_p2916, void * a_p2917, void * a_p2918);
static rt_int yr2923_RescaleCode(rt_int a_p2924, void * a_p2925, void * a_p2926);
static void yr2931_CommonScale(rt_int * a_p2932, void * a_p2933, rt_int * a_p2934, void * a_p2935, void * a_p2936, rt_int a_p2937);
static void yr2942_FixLiteral(void * a_p2943, rt_int * a_p2944, void * * a_p2945);
static void yr2950_ManifestFix(void * a_p2951, rt_int * a_p2952, rt_int * a_p2953, rt_int * a_p2954);
static rt_int yr2959_FloatChk(rt_int a_p2960);
static rt_int yr2965_Convert(rt_int a_p2966, void * a_p2967, void * a_p2968);
static rt_int yr2973_StoreText(rt_int a_p2974, void * a_p2975, rt_int a_p2976, void * a_p2977, rt_int a_p2978);
static void yr2983_Store(rt_int a_p2984, void * a_p2985, rt_int a_p2986, void * a_p2987, rt_int a_p2988);
static rt_int yr2993_IsVariable(void * a_p2994);
static void yr2999_CheckPure(void * a_p3000);
static void yr3005_LValue(void * a_p3006, rt_int * a_p3007, void * * a_p3008);
static rt_int yr3013_Paren(rt_int a_p3014);
static void * yr3019_Lit(void * a_p3020, rt_int a_p3021);
static void * yr3026_Qualifier(void * a_p3027);
static void yr3032_Expr(void * a_p3033, void * a_p3034, rt_int * a_p3035, void * * a_p3036);
static void yr3041_CheckDefined(void * a_p3042, rt_int * a_p3043, void * a_p3044);
static rt_int yr3049_Addressable(void * a_p3050);
static rt_int yr3055_UndefMacro(void * a_p3056);
static rt_int yr3061_UndefValue(void * a_p3062);
static rt_int yr3067_RawCode(void * a_p3068, rt_int a_p3069);
static rt_int yr3074_VariantTest(void * a_p3075, void * a_p3076, rt_int a_p3077);
static void yr3082_NameExpr(void * a_p3083, void * a_p3084, rt_int * a_p3085, void * * a_p3086);
static rt_int yr3091_IsMainStore(void * a_p3092);
static void yr3097_IndexExpr(void * a_p3098, rt_int * a_p3099, void * * a_p3100);
static void yr3105_NegExpr(void * a_p3106, rt_int a_p3107, void * a_p3108, rt_int * a_p3109, void * * a_p3110);
static void * yr3115_Unbounded(void * a_p3116);
static rt_int yr3121_Call2(yarr a_p3123, rt_int a_p3124, rt_int a_p3125);
static rt_int yr3130_Infix(rt_int a_p3131, yarr a_p3133, rt_int a_p3134);
static rt_int yr3139_EqCode(rt_int a_p3140, void * a_p3141, rt_int a_p3142, void * a_p3143);
static rt_int yr3148_IsOrdered(void * a_p3149);
static rt_int yr3154_FixToFloat(rt_int a_p3155, void * a_p3156);
static void yr3161_BinExpr(void * a_p3162, void * a_p3163, rt_int * a_p3164, void * * a_p3165);
static rt_int yr3170_Fits(void * a_p3171, void * a_p3172);
static void * yr3177_Choose(void * a_p3178, rt_int a_p3179, rt_int a_p3180);
static rt_int yr3185_HidesStandard(void * a_p3186);
static void yr3191_CompileArgs(void * a_p3192, void * a_p3193, rt_int * a_p3194, rt_int * a_p3195);
static void yr3200_CheckUnresolved(void * a_p3201, void * a_p3202, rt_int a_p3203);
static rt_int yr3208_SameAsFormal(void * a_p3209, void * a_p3210);
static rt_int yr3215_CallCode(void * a_p3216, rt_int a_p3217, rt_int a_p3218, rt_int a_p3219);
static rt_int yr3224_Num(rt_int a_p3225);
static rt_int yr3230_UserOp(void * a_p3231, rt_int a_p3232, void * a_p3233, void * a_p3234, rt_int * a_p3235, void * * a_p3236);
static void yr3241_NoteCall(void * a_p3242, rt_int a_p3243);
static void yr3248_Directive(void * a_p3249, void * a_p3250, rt_int a_p3251, rt_int a_p3252, rt_int * a_p3253, void * * a_p3254);
static rt_int yr3259_Suppressed(rt_int a_p3260);
static rt_int yr3265_UserAssign(rt_int a_p3266, void * a_p3267, rt_int a_p3268, void * a_p3269, rt_int a_p3270);
static void yr3275_Assign(rt_int a_p3276, void * a_p3277, rt_int a_p3278, void * a_p3279, rt_int a_p3280);
static void yr3285_CallExpr(void * a_p3286, void * a_p3287, rt_int a_p3288, rt_int * a_p3289, void * * a_p3290);
static void yr3295_Denote(void * a_p3296, void * a_p3297, rt_int * a_p3298, void * * a_p3299);
static rt_int yr3304_VariantOf(void * a_p3305, rt_int a_p3306, rt_int a_p3307);
static void yr3312_Emit2(yarr a_p3314, rt_int a_p3315);
static void yr3320_Emit3(yarr a_p3322, rt_int a_p3323, yarr a_p3325);
static void yr3330_PopTo(rt_int a_p3331);
static void yr3336_LeaveBlock(void);
static rt_int yr3341_RaiseCode(rt_int a_p3342);
static void yr3347_BlockStatements(void * a_p3348);
static void yr3353_BlockStatements1(void * a_p3354);
static rt_int yr3359_SameDesig(void * a_p3360, void * a_p3361);
static void yr3366_CheckVariantSelected(void * a_p3367, void * a_p3368, void * a_p3369);
static void yr3374_CheckCaseLabels(void * a_p3375, void * a_p3376);
static rt_int yr3381_Falls(void * a_p3382);
static rt_int yr3387_BlockFalls(void * a_p3388);
static rt_int yr3393_Completes(void * a_p3394);
static rt_int yr3399_Exits(void * a_p3400, rt_int a_p3401);
static void yr3406_Statements(void * a_p3407);
static rt_int yr3412_Cond(void * a_p3413);
static rt_int yr3418_Label(void * a_p3419, void * a_p3420);
static void yr3425_CopyOut(void);
static void yr3430_Statement(void * a_p3431);
static void yr3436_ForStatement(void * a_p3437);
static rt_int yr3442_Join(rt_int a_p3443, rt_int a_p3444, rt_int a_p3445);
static void yr3450_ReturnStatement(void * a_p3451);
static void yr3456_BeginStatement(void * a_p3457);
static void yr3462_PlaceLabel(void * a_p3463);
static void yr3468_GotoStatement(void * a_p3469);
static void yr3474_CheckLabels(void * a_p3475);
static void yr3480_DesigBase(void * a_p3481, void * * a_p3482, rt_int * a_p3483, rt_int * a_p3484);
static void * yr3489_Note(void * a_p3490, rt_int a_p3491, rt_int a_p3492);
static void yr3497_NoteWrite(void * a_p3498);
static void yr3503_NoteFree(void * a_p3504);
static void yr3509_NoteFreeDeref(void * a_p3510, rt_int a_p3511);
static rt_int yr3516_DSteps(void * a_p3517, yarr * a_p3518);
static rt_int yr3523_Overlaps(void * a_p3524, void * a_p3525);
static void yr3530_CheckActuals(void * a_p3531, rt_int a_p3532, rt_int a_p3533);
static void yr3538_CheckEffects(void);
static rt_int yr3543_DynIndex(rt_int a_p3544, rt_int a_p3545, rt_int a_p3546);
static rt_int yr3551_RoutineCName(rt_int a_p3552);
static void * yr3557_FormalRep(void * a_p3558);
static rt_int yr3563_ParamCType(void * a_p3564);
static void yr3569_InstallTrap(void * a_p3570, void * a_p3571);
static rt_int yr3576_DeclType(void * a_p3577);
static void yr3582_RoutineHeader(void * a_p3583, rt_int a_p3584);
static void * yr3589_SameSignature(void * a_p3590, void * a_p3591);
static void yr3596_RoutineBody(void * a_p3597);
static void yr3602_DeclareStorage(void * a_p3603, void * a_p3604, rt_int a_p3605);
static void yr3610_DeclareAt(void * a_p3611, void * a_p3612, rt_int a_p3613, rt_int a_p3614);
static void yr3619_InitStorage(void * a_p3620, void * a_p3621, rt_int a_p3622);
static void yr3627_SimpleDecl(void * a_p3628);
static void yr3633_NoteAlphabet(void * a_p3634, void * a_p3635);
static void yr3640_AtLocation(void * a_p3641, void * a_p3642);
static void yr3647_Defer(void * a_p3648, rt_int a_p3649, void * a_p3650, rt_int a_p3651);
static void yr3656_RunDeferred(rt_int a_p3657, rt_int a_p3658);
static void yr3663_ModuleInit(rt_int a_p3664);
static void yr3669_Declarations(void * a_p3670);
static void yr3675_DeclareRoutine(void * a_p3676);
static void * yr3681_Alias(rt_int a_p3682, void * a_p3683);
static void yr3688_AddLits(void * * a_p3689, void * a_p3690, rt_int a_p3691);
static rt_int yr3696_Provides(void * a_p3697, rt_int a_p3698);
static rt_int yr3703_ImportLater(rt_int a_p3704, rt_int a_p3705, void * * a_p3706);
static void * yr3711_OneDecl(void * a_p3712);
static void * yr3717_Lazy(rt_int a_p3718, rt_int a_p3719, void * a_p3720, rt_int a_p3721);
static void yr3726_SetLazy(rt_int a_p3727, void * a_p3728);
static void yr3733_ResolveFrom(void * a_p3734, void * a_p3735);
static void yr3740_ResolveLater(rt_int a_p3741);
static void yr3746_LazyModule(void * a_p3747, void * * a_p3748, rt_int a_p3749);
static void yr3754_ResolveItem(void * a_p3755, void * * a_p3756, rt_int a_p3757);
static void yr3762_DefineAll(void * a_p3763, rt_int a_p3764);
static void * yr3769_ExtendWith(void * a_p3770, void * a_p3771, rt_int a_p3772);
static void yr3777_CompileModule(void * a_p3778);
static void yr3783_DeclareTemplate(void * a_p3784);
static void yr3789_Instantiate(void * a_p3790);
static void yr3795_DeclareProcess(void * a_p3796);
static void yr3801_AwaitProcesses(void);
static void yr3806_Activate(void * a_p3807, void * a_p3808);
static rt_int yr3813_LifeDepth(rt_int a_p3814);
static rt_int yr3819_MonitorPath(void * a_p3820);
static void yr3825_EnterMonitor(void * a_p3826);
static void yr3831_LeaveMonitor(void);
static void yr3836_TerminateStatement(void * a_p3837);
static void yr3842_DeclareSignal(void * a_p3843, rt_int a_p3844);
static void yr3849_DeclareSignalArray(void * a_p3850, rt_int a_p3851);
static void yr3856_DeviceSignal(void * a_p3857, void * a_p3858);
static void * yr3863_Arg(void * a_p3864, rt_int a_p3865);
static void yr3870_NArgs(void * a_p3871, rt_int a_p3872);
static rt_int yr3877_Call1(yarr a_p3879, rt_int a_p3880);
static rt_int yr3885_Addr(rt_int a_p3886);
static void yr3891_StdVar(void * a_p3892, rt_int a_p3893, rt_int * a_p3894, void * * a_p3895);
static void yr3900_NumArg(void * a_p3901, rt_int * a_p3902, void * * a_p3903);
static rt_int yr3908_IntArg(void * a_p3909);
static void yr3914_CodeInsert(void * a_p3915);
static void * yr3920_ManifestScale(void * a_p3921, void * a_p3922);
static void yr3927_StdCall(rt_int a_p3928, void * a_p3929, rt_int a_p3930, rt_int * a_p3931, void * * a_p3932);
static rt_int yr3937_ArgCount(void);
static rt_int yr3942_ArgTxt(rt_int a_p3943);
static void yr3948_ReadArgs(void);
static rt_int yr3953_LibPath(rt_int a_p3954, yarr a_p3956);
static rt_int yr3961_ReadInto(rt_int a_p3962);
static void yr3967_WriteFile(rt_int a_p3968, yR140 a_p3969);
static rt_int yr3974_ReadLibLine(rt_int a_p3975);
static void yr3980_DigitsIn(rt_int a_p3981, rt_int a_p3982);
static void yr3987_TokenText(rt_int a_p3988);
static yR140 yr3993_TokensText(rt_int a_p3994, rt_int a_p3995);
static rt_int yr4000_Fingerprint(yR140 a_p4001);
static rt_int yr4006_TokEq(rt_int a_p4007, rt_int a_p4008, rt_int a_p4009, rt_int a_p4010);
static void yr4015_CheckSynopsis(void * a_p4016, rt_int a_p4017);
static rt_int yr4022_IsSegment(rt_int a_p4023);
static void yr4028_CheckPairing(void * a_p4029, void * a_p4030);
static void yr4035_PairInInput(void);
static void yr4040_LoadSynopsis(rt_int a_p4041, rt_int a_p4042);
static void yr4047_LoadImports(void * a_p4048);
static void * yr4053_LastSegment(void);
static void yr4058_Interface(void);
static void yr4063_Segment(void);
static rt_int yr4068_UsesText(void * a_p4069);
static void yr4074_WriteSegment(rt_int a_p4075);
static void yr4080_LinkProgram(void);
static void yr4085_CheckUse(rt_int a_p4086, rt_int a_p4087);
static rt_int yr4092_SegKey(rt_int a_p4093, rt_int a_p4094);
static rt_int yr4099_HeaderHash(void * a_p4100);
static rt_int yr4105_ParamList(void * a_p4106);
static void yr4111_SegStorage(void * a_p4112, void * a_p4113, rt_int a_p4114);
static void yr4119_SegRoutine(void * a_p4120, void * a_p4121, rt_int a_p4122);
static void yr4127_SegActivation(void * a_p4128, void * a_p4129);
static void yr4134_StdRep(yarr a_p4136, void * a_p4137);
static void yr4142_StdOp(yarr a_p4144, rt_int a_p4145);
static void * yr4150_LitList(yarr a_p4152, yarr a_p4153, yarr a_p4154, rt_int a_p4155);
static void * yr4160_Abstract(rt_int a_p4161, yarr a_p4163);
static void yr4168_Predefine(void);
static void yr4173_Translate(void);
static void yr4178_WriteProgram(void);
static void yr4183_WriteHead(void);
static rt_int yr8840_At(struct yf3539 *up, rt_int a_p8841, rt_int a_p8842);
static rt_int yr8847_Reaches(struct yf3539 *up, rt_int a_p8848, rt_int a_p8849);
static rt_int yr8854_VName(struct yf3539 *up, rt_int a_p8855);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4189 = Y_UNDEF_I;
F.v4189 = INT64_C(0);
{ rt_int hi4194 = 127;
for (rt_int i4193 = 0; i4193 <= hi4194; i4193++) { F.c_4192 = i4193; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_4192)] = Y_DEFI(F.v4189);
((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v4189))] = F.c_4192;
F.v4189 = y_range(y_add(Y_DEFI(F.v4189), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4193 == hi4194) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv4204 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv4204; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv4209 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv4209; }
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
F.lo4228 = y_low(F.p1039, INT64_C(1));
F.hi4229 = y_high(F.p1039, INT64_C(1));
{ rt_int hi4233 = F.hi4229;
for (rt_int i4232 = F.lo4228; i4232 <= hi4233; i4232++) { F.c_4231 = i4232; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_4231)]));
if (i4232 == hi4233) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_ST(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
F.v4237 = Y_UNDEF_I;
if ((F.p1045 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v4237 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]);
while ((Y_DEFI(F.v4237) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1045)]))))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4237))]));
F.v4237 = y_range(y_add(Y_DEFI(F.v4237), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_4252, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_4252, &F.v4254);
F.v4256 = Y_UNDEF_I;
F.v4256 = INT64_C(0);
F.v4259 = Y_UNDEF_I;
F.v4259 = F.p1051;
if ((Y_DEFI(F.v4259) < INT64_C(0))) {
yr1031_SC(45);
F.v4259 = y_range(y_neg(Y_DEFI(F.v4259)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v4256 = y_range(y_add(Y_DEFI(F.v4256), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v4254).p)[y_ix1(F.v4254, Y_DEFI(F.v4256))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v4259), INT64_C(10))), INT64_C(48)))]);
F.v4259 = y_range(y_div(Y_DEFI(F.v4259), INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v4259) == INT64_C(0))) {
goto yl_4263;
}
}
yl_4263: ;
while ((Y_DEFI(F.v4256) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v4254).p)[y_ix1(F.v4254, Y_DEFI(F.v4256))]));
F.v4256 = y_range(y_sub(Y_DEFI(F.v4256), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4278 = Y_UNDEF_I;
F.v4278 = Y_DEFI(((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))]);
v955 = y_range(y_sub(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = y_range(y_sub(Y_DEFI(v941), Y_DEFI(F.v4278)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4289 = y_add(Y_DEFI(F.v4278), INT64_C(1));
F.hi4290 = Y_DEFI(v941);
{ rt_int hi4294 = F.hi4290;
for (rt_int i4293 = F.lo4289; i4293 <= hi4294; i4293++) { F.c_4292 = i4293; Y_TICK();
yr1020_PoolAdd(Y_DEFB(((unsigned char *)(v939).p)[y_ix1(v939, F.c_4292)]));
if (i4293 == hi4294) break;
}}
v941 = Y_DEFI(F.v4278);
{ rt_int rv4295 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4295; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
yr1037_SA(F.p1063);
{ rt_int rv4298 = yr1056_SE();
y_use = F.yu; return rv4298; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v4303 = Y_UNDEF_I;
F.v4303 = INT64_C(0);
F.v4306 = Y_UNDEF_I;
F.v4308 = Y_UNDEF_I;
F.lo4313 = F.p1069;
F.hi4314 = y_sub((y_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi4318 = F.hi4314;
for (rt_int i4317 = F.lo4313; i4317 <= hi4318; i4317++) { F.c_4316 = i4317; Y_TICK();
F.v4303 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v4303), INT64_C(31))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4316)]))]))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4317 == hi4318) break;
}}
for (;;) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4303))]) == INT64_C(0))) {
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = F.p1069;
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = F.p1070;
((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4303))] = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
{ rt_int rv4328 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4328; }
}
F.v4306 = Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4303))]);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4306))]) == F.p1070)) {
F.v4308 = 1;
F.lo4335 = INT64_C(0);
F.hi4336 = y_sub(F.p1070, INT64_C(1));
{ rt_int hi4340 = F.hi4336;
for (rt_int i4339 = F.lo4335; i4339 <= hi4340; i4339++) { F.c_4338 = i4339; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4306))]), F.c_4338))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(F.p1069, F.c_4338))])))) {
F.v4308 = 0;
}
if (i4339 == hi4340) break;
}}
if (Y_DEFI(F.v4308)) {
{ rt_int rv4344 = y_range(Y_DEFI(F.v4306), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4344; }
}
}
F.v4303 = y_range(y_mod((y_add(Y_DEFI(F.v4303), INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_4324: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv4351 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]));
y_use = F.yu; return rv4351; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv4354 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv4354; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4359 = 1;
y_use = F.yu; return rv4359; }
}
if ((!(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]) == Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1090)])))) {
{ rt_int rv4361 = 0;
y_use = F.yu; return rv4361; }
}
F.lo4367 = INT64_C(0);
F.hi4368 = y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]), INT64_C(1));
{ rt_int hi4372 = F.hi4368;
for (rt_int i4371 = F.lo4367; i4371 <= hi4372; i4371++) { F.c_4370 = i4371; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)]), F.c_4370))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)]), F.c_4370))])))) {
{ rt_int rv4376 = 0;
y_use = F.yu; return rv4376; }
}
if (i4371 == hi4372) break;
}}
{ rt_int rv4378 = 1;
y_use = F.yu; return rv4378; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4383 = Y_UNDEF_I;
F.v4383 = INT64_C(0);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1096)]) < (y_add((y_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4393 = 0;
y_use = F.yu; return rv4393; }
}
F.lo4399 = y_low(F.p1098, INT64_C(1));
F.hi4400 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4404 = F.hi4400;
for (rt_int i4403 = F.lo4399; i4403 <= hi4404; i4403++) { F.c_4402 = i4403; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)]), Y_DEFI(F.v4383)))]) == Y_DEFB(((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4402)])))) {
{ rt_int rv4407 = 0;
y_use = F.yu; return rv4407; }
}
F.v4383 = y_range(y_add(Y_DEFI(F.v4383), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4403 == hi4404) break;
}}
{ rt_int rv4411 = 1;
y_use = F.yu; return rv4411; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4418 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)]), F.p1105)), INT64_C(1)))]);
y_use = F.yu; return rv4418; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
F.v4423 = Y_UNDEF_P;
({ F.v4423 = y_new(sizeof(yR135)); y_initu(&yd_136, y_deref(F.v4423)); });
(*(yR135 *)y_deref(Y_DEFP(F.v4423))) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
if ((Y_DEFP(((*F.p1111)).f_head) == ((void *)0))) {
((*F.p1111)).f_head = Y_DEFP(F.v4423);
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1111)).f_tail)))).f_next = Y_DEFP(F.v4423);
}
((*F.p1111)).f_tail = Y_DEFP(F.v4423);
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
F.v4437 = Y_UNDEF_I;
F.v4437 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]);
while ((Y_DEFI(F.v4437) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1146)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4437))]); y_put_value(&v911, &y_d_byte, &pv); });
F.v4437 = y_range(y_add(Y_DEFI(F.v4437), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4444 = Y_UNDEF_P;
F.v4444 = Y_DEFP((F.p1152).f_head);
while ((!(Y_DEFP(F.v4444) == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v4444)))).f_t));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
F.v4444 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v4444)))).f_next);
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
F.v4450 = Y_UNDEF_I;
v955 = INT64_C(0);
v941 = INT64_C(0);
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1158);
yr1037_SA(y_str(": ", 2));
yr1044_ST(F.p1159);
F.v4450 = yr1056_SE();
yr1145_WriteTxt(Y_DEFI(F.v4450));
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
F.v4460 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1165);
yr1037_SA(y_str(": warning: ", 11));
yr1044_ST(F.p1166);
F.v4460 = yr1056_SE();
yr1171_WriteTo(&v994, Y_DEFI(F.v4460));
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
yr1026_SB();
yr1037_SA(y_str("/* ", 3));
yr1044_ST(Y_DEFI(F.v4460));
yr1037_SA(y_str(" */", 3));
F.v4460 = yr1056_SE();
yr1110_Put(&v992, Y_DEFI(F.v4460));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4470 = Y_UNDEF_I;
F.v4470 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]);
while ((Y_DEFI(F.v4470) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1173)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4470))]); y_put_value(&(*F.p1172), &y_d_byte, &pv); });
F.v4470 = y_range(y_add(Y_DEFI(F.v4470), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v4482 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p1188);
yr1037_SA(F.p1190);
F.v4482 = yr1056_SE();
yr1157_Fail(F.p1187, Y_DEFI(F.v4482));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = y_range(y_add(Y_DEFI(v958), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4486 = Y_DEFI(v958);
y_use = F.yu; return rv4486; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4490 = Y_UNDEF_I;
F.v4490 = yr1195_NewSerial();
yr1026_SB();
yr1037_SA(F.p1202);
yr1050_SI(Y_DEFI(F.v4490));
{ rt_int rv4491 = yr1056_SE();
y_use = F.yu; return rv4491; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1929_InitWords(void) {
struct yf1930 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4494 = Y_UNDEF_I;
F.v4496 = Y_UNDEF_I;
F.v4498 = Y_UNDEF_I;
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
F.v4498 = yr1056_SE();
v922 = INT64_C(0);
F.v4494 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4498))]);
F.lo4515 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4498))]);
F.hi4516 = y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4498))]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4498))]))), INT64_C(1));
{ rt_int hi4520 = F.hi4516;
for (rt_int i4519 = F.lo4515; i4519 <= hi4520; i4519++) { F.c_4518 = i4519; Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4518)]) == 32)) {
F.v4496 = yr1068_Intern(Y_DEFI(F.v4494), y_range(y_sub(F.c_4518, Y_DEFI(F.v4494)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4494 = y_range(y_add(F.c_4518, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4519 == hi4520) break;
}}
if ((!(Y_DEFI(v922) == v621))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1934_ReadSource(void) {
struct yf1935 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4527 = Y_UNDEF_B;
y_open(&v909, y_str("INPUT", 5), 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4527 = g; });
yr1020_PoolAdd(Y_DEFB(F.v4527));
}
v1219 = Y_DEFI(v915);
y_close(&v909);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1939_AddTok(rt_int a_p1940, rt_int a_p1941) {
struct yf1942 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1940 = a_p1940;
F.p1941 = a_p1941;
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = F.p1940;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = F.p1941;
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(v1225);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1946_At(rt_int a_p1947) {
struct yf1948 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1947 = a_p1947;
if ((F.p1947 > Y_DEFI(v1219))) {
{ unsigned char rv4540 = 0;
y_use = F.yu; return rv4540; }
}
{ unsigned char rv4541 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.p1947)]);
y_use = F.yu; return rv4541; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1952_EndsOperand(void) {
struct yf1953 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4544 = Y_UNDEF_I;
F.v4546 = Y_UNDEF_I;
if ((Y_DEFI(v1213) == INT64_C(0))) {
{ rt_int rv4549 = 0;
y_use = F.yu; return rv4549; }
}
F.v4544 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))]);
F.v4546 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))]);
if ((((((((Y_DEFI(F.v4544) == v207)) || ((Y_DEFI(F.v4544) == v216))) || ((Y_DEFI(F.v4544) == v219))) || ((Y_DEFI(F.v4544) == v222))) || ((Y_DEFI(F.v4544) == v225))) || ((Y_DEFI(F.v4544) == v228)))) {
{ rt_int rv4551 = 1;
y_use = F.yu; return rv4551; }
}
if ((Y_DEFI(F.v4544) == v213)) {
{ rt_int rv4552 = ((((Y_DEFI(F.v4546) == v597)) || ((Y_DEFI(F.v4546) == v603))) || ((Y_DEFI(F.v4546) == v618)));
y_use = F.yu; return rv4552; }
}
if ((Y_DEFI(F.v4544) == v210)) {
{ rt_int rv4553 = (Y_DEFI(F.v4546) == v387);
y_use = F.yu; return rv4553; }
}
{ rt_int rv4555 = 0;
y_use = F.yu; return rv4555; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1957_DigitVal(unsigned char a_p1958) {
struct yf1959 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1958 = a_p1958;
if ((((F.p1958 >= 48)) && ((F.p1958 <= 57)))) {
{ rt_int rv4562 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1958)]), INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4562; }
}
if ((((F.p1958 >= 65)) && ((F.p1958 <= 70)))) {
{ rt_int rv4567 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1958)]), INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4567; }
}
{ rt_int rv4569 = INT64_C(99);
y_use = F.yu; return rv4569; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1963_LexError(yarr a_p1965) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1965 = a_p1965;
yr1178_FailS(Y_DEFI(v1225), F.p1965);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1970_LexDigits(rt_int a_p1971, rt_int a_p1972) {
struct yf1973 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1971 = a_p1971;
F.p1972 = a_p1972;
F.v4576 = Y_UNDEF_I;
while ((yr1014_IsDigit(yr1946_At(Y_DEFI(v1222))) || ((F.p1972 && ((yr1957_DigitVal(yr1946_At(Y_DEFI(v1222))) < INT64_C(16))))))) {
Y_TICK();
if ((yr1957_DigitVal(yr1946_At(Y_DEFI(v1222))) >= F.p1971)) {
yr1026_SB();
yr1031_SC(39);
yr1031_SC(yr1946_At(Y_DEFI(v1222)));
yr1037_SA(y_str("' is not a digit of BASE", 24));
yr1050_SI(F.p1971);
yr1037_SA(y_str(" (IV.B)", 7));
F.v4576 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1225), Y_DEFI(F.v4576));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1977_LexNumber(rt_int a_p1978) {
struct yf1979 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1978 = a_p1978;
F.v4586 = Y_UNDEF_I;
F.v4586 = INT64_C(10);
F.v4589 = Y_UNDEF_I;
F.v4591 = Y_UNDEF_I;
F.v4593 = Y_UNDEF_I;
F.v4595 = Y_UNDEF_I;
F.v4597 = Y_UNDEF_I;
F.v4597 = 0;
F.v4600 = Y_UNDEF_I;
F.v4600 = 0;
F.v4603 = Y_UNDEF_I;
F.v4603 = INT64_C(0);
F.v4606 = Y_UNDEF_I;
F.v4606 = INT64_C(0);
F.v4609 = Y_UNDEF_I;
F.v4609 = INT64_C(0);
F.v4612 = Y_UNDEF_I;
F.v4612 = INT64_C(0);
F.v4615 = Y_UNDEF_I;
F.v4615 = INT64_C(0);
F.v4618 = Y_UNDEF_I;
if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
F.v4586 = Y_DEFI(v1228);
F.v4600 = 1;
}
v1228 = INT64_C(0);
F.v4589 = Y_DEFI(v1222);
yr1970_LexDigits(Y_DEFI(F.v4586), Y_DEFI(F.v4600));
F.v4591 = Y_DEFI(v1222);
if ((Y_DEFI(F.v4591) == Y_DEFI(F.v4589))) {
yr1963_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4593 = Y_DEFI(v1222);
F.v4595 = Y_DEFI(v1222);
if ((((yr1946_At(Y_DEFI(v1222)) == 46)) && ((!(yr1946_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4597 = 1;
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4593 = Y_DEFI(v1222);
yr1970_LexDigits(Y_DEFI(F.v4586), Y_DEFI(F.v4600));
F.v4595 = Y_DEFI(v1222);
}
if ((yr1946_At(Y_DEFI(v1222)) == 80)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4612 = INT64_C(1);
if ((((((yr1946_At(Y_DEFI(v1222)) == 45)) || ((yr1946_At(Y_DEFI(v1222)) == 43)))) && yr1014_IsDigit(yr1946_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1946_At(Y_DEFI(v1222)) == 45)) {
F.v4612 = INT64_C(-1);
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4609 = INT64_C(0);
while (yr1014_IsDigit(yr1946_At(Y_DEFI(v1222)))) {
Y_TICK();
if ((Y_DEFI(F.v4609) > INT64_C(1000))) {
yr1963_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4609 = y_range(y_add((y_mul(Y_DEFI(F.v4609), INT64_C(10))), yr1957_DigitVal(yr1946_At(Y_DEFI(v1222)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4609 = y_range(y_mul(Y_DEFI(F.v4609), Y_DEFI(F.v4612)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4603 = INT64_C(0);
F.v4615 = y_range(y_sub(Y_DEFI(F.v4595), Y_DEFI(F.v4593)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4656 = Y_DEFI(F.v4589);
F.hi4657 = y_sub(Y_DEFI(F.v4595), INT64_C(1));
{ rt_int hi4661 = F.hi4657;
for (rt_int i4660 = F.lo4656; i4660 <= hi4661; i4660++) { F.c_4659 = i4660; Y_TICK();
if ((((F.c_4659 < Y_DEFI(F.v4591))) || ((F.c_4659 >= Y_DEFI(F.v4593))))) {
F.v4606 = yr1957_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4659)]));
if ((Y_DEFI(F.v4603) > (y_div((y_sub(v906, Y_DEFI(F.v4606))), Y_DEFI(F.v4586))))) {
yr1963_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4603 = y_range(y_add((y_mul(Y_DEFI(F.v4603), Y_DEFI(F.v4586))), Y_DEFI(F.v4606)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4660 == hi4661) break;
}}
if (F.p1978) {
F.v4603 = y_range(y_neg(Y_DEFI(F.v4603)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(v1246) >= INT64_C(200000))) {
yr1963_LexError(y_str("too many fixed-point literals", 29));
}
v1246 = y_range(y_add(Y_DEFI(v1246), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(v1246))] = Y_DEFI(F.v4603);
((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(v1246))] = Y_DEFI(F.v4586);
((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(v1246))] = y_range(y_sub(Y_DEFI(F.v4609), Y_DEFI(F.v4615)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1939_AddTok(v219, Y_DEFI(v1246));
y_use = F.yu; return;
}
if (Y_DEFI(F.v4597)) {
if ((!(Y_DEFI(F.v4586) == INT64_C(10)))) {
yr1963_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1946_At(Y_DEFI(v1222)) == 69)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1946_At(Y_DEFI(v1222)) == 45)) || ((yr1946_At(Y_DEFI(v1222)) == 43)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1014_IsDigit(yr1946_At(Y_DEFI(v1222)))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1026_SB();
if (F.p1978) {
yr1037_SA(y_str("-", 1));
}
F.lo4688 = Y_DEFI(F.v4589);
F.hi4689 = y_sub(Y_DEFI(v1222), INT64_C(1));
{ rt_int hi4693 = F.hi4689;
for (rt_int i4692 = F.lo4688; i4692 <= hi4693; i4692++) { F.c_4691 = i4692; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4691)]));
if (i4692 == hi4693) break;
}}
F.v4618 = yr1056_SE();
yr1939_AddTok(v222, Y_DEFI(F.v4618));
y_use = F.yu; return;
}
F.v4603 = INT64_C(0);
F.lo4698 = Y_DEFI(F.v4589);
F.hi4699 = y_sub(Y_DEFI(F.v4591), INT64_C(1));
{ rt_int hi4703 = F.hi4699;
for (rt_int i4702 = F.lo4698; i4702 <= hi4703; i4702++) { F.c_4701 = i4702; Y_TICK();
F.v4606 = yr1957_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4701)]));
if ((Y_DEFI(F.v4603) > (y_div((y_sub(v906, Y_DEFI(F.v4606))), Y_DEFI(F.v4586))))) {
yr1963_LexError(y_str("integer literal too large", 25));
}
F.v4603 = y_range(y_add((y_mul(Y_DEFI(F.v4603), Y_DEFI(F.v4586))), Y_DEFI(F.v4606)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4702 == hi4703) break;
}}
if (F.p1978) {
F.v4603 = y_range(y_neg(Y_DEFI(F.v4603)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1939_AddTok(v216, Y_DEFI(F.v4603));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1983_LexString(void) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4712 = Y_UNDEF_I;
F.v4714 = Y_UNDEF_I;
F.v4716 = Y_UNDEF_I;
F.v4718 = Y_UNDEF_I;
yr1026_SB();
for (;;) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1946_At(Y_DEFI(v1222)) == 34))) {
Y_TICK();
if ((((yr1946_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
v927 = 0;
yr1963_LexError(y_str("a string must close on its line", 31));
}
yr1031_SC(yr1946_At(Y_DEFI(v1222)));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4714 = Y_DEFI(v1222);
F.v4716 = INT64_C(0);
F.v4718 = 1;
while (Y_DEFI(F.v4718)) {
Y_TICK();
if (((((yr1946_At(Y_DEFI(F.v4714)) == 32)) || ((yr1946_At(Y_DEFI(F.v4714)) == 9))) || ((yr1946_At(Y_DEFI(F.v4714)) == 13)))) {
F.v4714 = y_range(y_add(Y_DEFI(F.v4714), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1946_At(Y_DEFI(F.v4714)) == 10)) {
F.v4716 = y_range(y_add(Y_DEFI(F.v4716), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4714 = y_range(y_add(Y_DEFI(F.v4714), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4718 = 0;
}
}
if ((!(yr1946_At(Y_DEFI(F.v4714)) == 34))) {
goto yl_4719;
}
v1225 = y_range(y_add(Y_DEFI(v1225), Y_DEFI(F.v4716)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = Y_DEFI(F.v4714);
}
yl_4719: ;
F.v4712 = yr1056_SE();
yr1939_AddTok(v228, Y_DEFI(F.v4712));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1988_Lex(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4747 = Y_UNDEF_B;
F.v4749 = Y_UNDEF_I;
F.v4751 = Y_UNDEF_I;
F.v4753 = Y_UNDEF_I;
F.v4755 = Y_UNDEF_I;
F.v4757 = Y_UNDEF_I;
F.v4759 = Y_UNDEF_I;
F.v4761 = Y_UNDEF_I;
v1222 = Y_DEFI(v1216);
while ((Y_DEFI(v1222) <= Y_DEFI(v1219))) {
Y_TICK();
F.v4747 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v1222))]);
if ((Y_DEFB(F.v4747) == 10)) {
v1225 = y_range(y_add(Y_DEFI(v1225), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((Y_DEFB(F.v4747) == 32)) || ((Y_DEFB(F.v4747) == 9))) || ((Y_DEFB(F.v4747) == 13))) || ((Y_DEFB(F.v4747) == 12)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFB(F.v4747) == 40)) && ((yr1946_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1946_At(Y_DEFI(v1222)) == 42)) && ((yr1946_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1946_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
yr1963_LexError(y_str("a comment must close on its line", 32));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1014_IsDigit(Y_DEFB(F.v4747)) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1957_DigitVal(Y_DEFB(F.v4747)) < INT64_C(16))))))) {
yr1977_LexNumber(0);
} else if (((((((Y_DEFB(F.v4747) == 45)) || ((Y_DEFB(F.v4747) == 43)))) && (!yr1952_EndsOperand())) && ((yr1014_IsDigit(yr1946_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1957_DigitVal(yr1946_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1977_LexNumber((Y_DEFB(F.v4747) == 45));
} else if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
yr1963_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1008_IsLetter(Y_DEFB(F.v4747))) {
F.v4749 = Y_DEFI(v1222);
while ((yr1008_IsLetter(yr1946_At(Y_DEFI(v1222))) || yr1014_IsDigit(yr1946_At(Y_DEFI(v1222))))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4757 = yr1068_Intern(Y_DEFI(F.v4749), y_range(y_sub(Y_DEFI(v1222), Y_DEFI(F.v4749)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v4757) == v252)) {
v1228 = INT64_C(2);
} else if ((Y_DEFI(F.v4757) == v255)) {
v1228 = INT64_C(8);
} else if ((Y_DEFI(F.v4757) == v258)) {
v1228 = INT64_C(10);
} else if ((Y_DEFI(F.v4757) == v261)) {
v1228 = INT64_C(16);
} else if ((Y_DEFI(F.v4757) <= v492)) {
yr1939_AddTok(v210, Y_DEFI(F.v4757));
} else {
yr1939_AddTok(v207, Y_DEFI(F.v4757));
}
} else if ((Y_DEFB(F.v4747) == 39)) {
F.v4749 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4751 = Y_DEFI(F.v4749);
while ((!(yr1946_At(Y_DEFI(F.v4751)) == 39))) {
Y_TICK();
if (((((yr1946_At(Y_DEFI(F.v4751)) == 10)) || ((yr1946_At(Y_DEFI(F.v4751)) == 34))) || ((Y_DEFI(F.v4751) > Y_DEFI(v1219))))) {
yr1963_LexError(y_str("bad character literal", 21));
}
F.v4751 = y_range(y_add(Y_DEFI(F.v4751), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4751) == Y_DEFI(F.v4749))) {
yr1963_LexError(y_str("empty character literal", 23));
}
F.v4757 = yr1068_Intern(Y_DEFI(F.v4749), y_range(y_sub(Y_DEFI(F.v4751), Y_DEFI(F.v4749)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1939_AddTok(v225, Y_DEFI(F.v4757));
v1222 = y_range(y_add(Y_DEFI(F.v4751), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v4747) == 34)) {
yr1983_LexString();
} else {
F.v4753 = INT64_C(0);
F.v4751 = y_range(y_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v4753) == INT64_C(0))) && ((Y_DEFI(F.v4751) <= v621)))) {
Y_TICK();
F.v4755 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4751))]);
F.v4761 = 1;
F.lo4836 = INT64_C(0);
F.hi4837 = y_sub(Y_DEFI(F.v4755), INT64_C(1));
{ rt_int hi4841 = F.hi4837;
for (rt_int i4840 = F.lo4836; i4840 <= hi4841; i4840++) { F.c_4839 = i4840; Y_TICK();
if ((!(yr1946_At(y_range(y_add(Y_DEFI(v1222), F.c_4839), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4751))]), F.c_4839))])))) {
F.v4761 = 0;
}
if (i4840 == hi4841) break;
}}
if (Y_DEFI(F.v4761)) {
F.v4753 = Y_DEFI(F.v4751);
}
F.v4751 = y_range(y_add(Y_DEFI(F.v4751), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4753) == INT64_C(0))) {
yr1963_LexError(y_str("a character that is not in the language", 39));
}
yr1939_AddTok(v213, Y_DEFI(F.v4753));
v1222 = y_range(y_add(Y_DEFI(v1222), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4753))])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1939_AddTok(v204, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1993_NewNode(rt_int a_p1994, rt_int a_p1995) {
struct yf1996 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1994 = a_p1994;
F.p1995 = a_p1995;
F.v4855 = Y_UNDEF_P;
({ F.v4855 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v4855)); });
(*(yR105 *)y_deref(Y_DEFP(F.v4855))) = ((yR105){ .f_kind = F.p1994, .f_line = F.p1995, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0), .f_t0 = INT64_C(0), .f_t1 = INT64_C(0) });
{ void * rv4862 = Y_DEFP(F.v4855);
y_use = F.yu; return rv4862; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2000_Link(void * * a_p2001, void * * a_p2002, void * a_p2003) {
struct yf2004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2001 = a_p2001;
F.p2002 = a_p2002;
F.p2003 = a_p2003;
if ((Y_DEFP((*F.p2001)) == ((void *)0))) {
(*F.p2001) = F.p2003;
} else {
((*(yR105 *)y_deref(Y_DEFP((*F.p2002))))).f_next = F.p2003;
}
(*F.p2002) = F.p2003;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2008_Count(void * a_p2009) {
struct yf2010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2009 = a_p2009;
F.v4870 = Y_UNDEF_I;
F.v4870 = INT64_C(0);
F.v4873 = Y_UNDEF_P;
F.v4873 = F.p2009;
while ((!(Y_DEFP(F.v4873) == ((void *)0)))) {
Y_TICK();
F.v4870 = y_range(y_add(Y_DEFI(F.v4870), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4873 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4873)))).f_next);
}
{ rt_int rv4876 = Y_DEFI(F.v4870);
y_use = F.yu; return rv4876; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2014_TK(void) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4878 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]);
y_use = F.yu; return rv4878; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2019_TV(void) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4880 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1249))]);
y_use = F.yu; return rv4880; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2024_TLn(void) {
struct yf2025 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4882 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1249))]);
y_use = F.yu; return rv4882; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2029_IsAt(rt_int a_p2030, rt_int a_p2031) {
struct yf2032 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2030 = a_p2030;
F.p2031 = a_p2031;
F.v4887 = Y_UNDEF_I;
F.v4887 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2030))]);
{ rt_int rv4890 = (((((Y_DEFI(F.v4887) == v210)) || ((Y_DEFI(F.v4887) == v213)))) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2030))]) == F.p2031)));
y_use = F.yu; return rv4890; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2036_Is(rt_int a_p2037) {
struct yf2038 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2037 = a_p2037;
{ rt_int rv4894 = yr2029_IsAt(INT64_C(0), F.p2037);
y_use = F.yu; return rv4894; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2042_IsIdAt(rt_int a_p2043) {
struct yf2044 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2043 = a_p2043;
{ rt_int rv4898 = (Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2043))]) == v207);
y_use = F.yu; return rv4898; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2048_Skip(void) {
struct yf2049 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]) == v204))) {
v1249 = y_range(y_add(Y_DEFI(v1249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2053_Accept(rt_int a_p2054) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2054 = a_p2054;
if (yr2036_Is(F.p2054)) {
yr2048_Skip();
{ rt_int rv4905 = 1;
y_use = F.yu; return rv4905; }
}
{ rt_int rv4907 = 0;
y_use = F.yu; return rv4907; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2059_TokText(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4910 = Y_UNDEF_I;
F.v4910 = yr2014_TK();
if ((((((Y_DEFI(F.v4910) == v207)) || ((Y_DEFI(F.v4910) == v210))) || ((Y_DEFI(F.v4910) == v213))) || ((Y_DEFI(F.v4910) == v225)))) {
{ rt_int rv4911 = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4911; }
}
if ((Y_DEFI(F.v4910) == v204)) {
{ rt_int rv4913 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv4913; }
}
if ((Y_DEFI(F.v4910) == v216)) {
yr1026_SB();
yr1050_SI(yr2019_TV());
{ rt_int rv4914 = yr1056_SE();
y_use = F.yu; return rv4914; }
}
{ rt_int rv4916 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv4916; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2064_Expect(rt_int a_p2065) {
struct yf2066 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2065 = a_p2065;
F.v4920 = Y_UNDEF_I;
if ((!yr2053_Accept(F.p2065))) {
yr1026_SB();
yr1037_SA(y_str("expected ", 9));
yr1044_ST(y_range(F.p2065, INT64_C(0), INT64_C(4000000)));
yr1037_SA(y_str(", found ", 8));
yr1044_ST(yr2059_TokText());
F.v4920 = yr1056_SE();
yr1157_Fail(yr2024_TLn(), Y_DEFI(F.v4920));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2070_Ident(void) {
struct yf2071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4925 = Y_UNDEF_I;
if ((!(yr2014_TK() == v207))) {
yr1026_SB();
yr1037_SA(y_str("expected an identifier, found ", 30));
yr1044_ST(yr2059_TokText());
F.v4925 = yr1056_SE();
yr1157_Fail(yr2024_TLn(), Y_DEFI(F.v4925));
}
F.v4925 = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
yr2048_Skip();
{ rt_int rv4927 = Y_DEFI(F.v4925);
y_use = F.yu; return rv4927; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2075_CloseName(rt_int a_p2076, rt_int a_p2077) {
struct yf2078 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2076 = a_p2076;
F.p2077 = a_p2077;
F.v4932 = Y_UNDEF_I;
if (((((yr2014_TK() == v207)) || ((yr2014_TK() == v210))) || ((yr2014_TK() == v213)))) {
F.v4932 = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
if ((Y_DEFI(F.v4932) == F.p2076)) {
yr2048_Skip();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p2077, F.p2076, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2082_ExtendedId(void) {
struct yf2083 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4936 = Y_UNDEF_I;
F.v4936 = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
if ((yr2014_TK() == v207)) {
yr2048_Skip();
{ rt_int rv4937 = Y_DEFI(F.v4936);
y_use = F.yu; return rv4937; }
}
if ((((yr2014_TK() == v210)) && (((((((((Y_DEFI(F.v4936) == v390)) || ((Y_DEFI(F.v4936) == v237))) || ((Y_DEFI(F.v4936) == v399))) || ((Y_DEFI(F.v4936) == v276))) || ((Y_DEFI(F.v4936) == v378))) || ((Y_DEFI(F.v4936) == v489))) || ((Y_DEFI(F.v4936) == v360)))))) {
yr2048_Skip();
{ rt_int rv4938 = Y_DEFI(F.v4936);
y_use = F.yu; return rv4938; }
}
if (((((((((((((yr2014_TK() == v213)) && ((!(Y_DEFI(F.v4936) == v594)))) && ((!(Y_DEFI(F.v4936) == v597)))) && ((!(Y_DEFI(F.v4936) == v600)))) && ((!(Y_DEFI(F.v4936) == v603)))) && ((!(Y_DEFI(F.v4936) == v606)))) && ((!(Y_DEFI(F.v4936) == v609)))) && ((!(Y_DEFI(F.v4936) == v612)))) && ((!(Y_DEFI(F.v4936) == v615)))) && ((!(Y_DEFI(F.v4936) == v537)))) && ((!(Y_DEFI(F.v4936) == v534))))) {
yr2048_Skip();
{ rt_int rv4939 = Y_DEFI(F.v4936);
y_use = F.yu; return rv4939; }
}
yr1178_FailS(yr2024_TLn(), y_str("expected a name", 15));
{ rt_int rv4942 = INT64_C(0);
y_use = F.yu; return rv4942; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2087_IsLabel(rt_int a_p2088) {
struct yf2089 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2088 = a_p2088;
F.v4946 = Y_UNDEF_P;
F.v4946 = Y_DEFP(v1252);
while ((!(Y_DEFP(F.v4946) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name) == F.p2088)) {
{ rt_int rv4948 = 1;
y_use = F.yu; return rv4948; }
}
F.v4946 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_next);
}
{ rt_int rv4950 = 0;
y_use = F.yu; return rv4950; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2093_ImportItem(void) {
struct yf2094 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4953 = Y_UNDEF_P;
F.v4953 = yr1993_NewNode(v627, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4953)))).f_name = yr2082_ExtendedId();
if ((yr2042_IsIdAt(INT64_C(0)) && ((yr2019_TV() == Y_DEFI(v1254))))) {
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4953)))).f_text = yr2070_Ident();
}
if (yr2053_Accept(v243)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4953)))).f_ival = yr2082_ExtendedId();
}
{ void * rv4955 = Y_DEFP(F.v4953);
y_use = F.yu; return rv4955; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2098_ParseModule(void) {
struct yf2099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4958 = Y_UNDEF_P;
F.v4958 = yr1993_NewNode(v624, yr2024_TLn());
F.v4960 = Y_UNDEF_P;
F.v4960 = ((void *)0);
F.v4962 = Y_UNDEF_P;
F.v4962 = ((void *)0);
F.v4964 = Y_UNDEF_P;
F.v4964 = ((void *)0);
F.v4966 = Y_UNDEF_I;
if (yr2053_Accept(v384)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_flag = INT64_C(1);
} else {
yr2064_Expect(v381);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_name = yr2070_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_t0 = Y_DEFI(v1249);
while (yr2053_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v4960 = yr2093_ImportItem();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_a, &F.v4962, Y_DEFP(F.v4960));
if ((!yr2053_Accept(v606))) {
goto yl_4968;
}
}
yl_4968: ;
yr2064_Expect(v609);
}
while (yr2053_Accept(v336)) {
Y_TICK();
F.v4966 = INT64_C(0);
if ((((yr2036_Is(v396) || yr2036_Is(v474)) || yr2036_Is(v429)) || yr2036_Is(v483))) {
F.v4966 = yr2019_TV();
yr2048_Skip();
}
for (;;) {
Y_TICK();
F.v4960 = yr2093_ImportItem();
((*(yR105 *)y_deref(Y_DEFP(F.v4960)))).f_flag = Y_DEFI(F.v4966);
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_b, &F.v4964, Y_DEFP(F.v4960));
if ((!yr2053_Accept(v606))) {
goto yl_4970;
}
}
yl_4970: ;
yr2064_Expect(v609);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_c = yr2108_ParseBlock();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_flag) == INT64_C(1))) {
yr2064_Expect(v309);
} else {
yr2064_Expect(v306);
}
yr2075_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4958)))).f_line));
{ void * rv4972 = Y_DEFP(F.v4958);
y_use = F.yu; return rv4972; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2103_IsDeclWord(void) {
struct yf2104 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4975 = Y_UNDEF_I;
if ((!(yr2014_TK() == v210))) {
{ rt_int rv4977 = 0;
y_use = F.yu; return rv4977; }
}
F.v4975 = yr2019_TV();
{ rt_int rv4978 = (((((((((((((Y_DEFI(F.v4975) == v270)) || ((Y_DEFI(F.v4975) == v483))) || ((Y_DEFI(F.v4975) == v372))) || ((Y_DEFI(F.v4975) == v477))) || ((Y_DEFI(F.v4975) == v438))) || ((Y_DEFI(F.v4975) == v348))) || ((Y_DEFI(F.v4975) == v420))) || ((Y_DEFI(F.v4975) == v381))) || ((Y_DEFI(F.v4975) == v384))) || ((Y_DEFI(F.v4975) == v465))) || ((Y_DEFI(F.v4975) == v366))) || ((Y_DEFI(F.v4975) == v423)));
y_use = F.yu; return rv4978; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2108_ParseBlock(void) {
struct yf2109 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4981 = Y_UNDEF_P;
F.v4981 = yr1993_NewNode(v630, yr2024_TLn());
F.v4983 = Y_UNDEF_P;
F.v4983 = ((void *)0);
F.v4985 = Y_UNDEF_P;
F.v4985 = Y_DEFP(v1252);
F.v4987 = Y_UNDEF_P;
while (yr2103_IsDeclWord()) {
Y_TICK();
yr2135_ParseDeclGroup(&((*(yR105 *)y_deref(Y_DEFP(F.v4981)))).f_a, &F.v4983);
while (yr2053_Accept(v609)) {
Y_TICK();
}
}
if (yr2036_Is(v330)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4981)))).f_b = yr2113_ParseHandler();
F.v4987 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4981)))).f_b);
if (yr2053_Accept(v609)) {
}
}
((*(yR105 *)y_deref(Y_DEFP(F.v4981)))).f_c = yr2204_ParseStatements(1);
v1252 = Y_DEFP(F.v4985);
{ void * rv4989 = Y_DEFP(F.v4981);
y_use = F.yu; return rv4989; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2113_ParseHandler(void) {
struct yf2114 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4992 = Y_UNDEF_P;
F.v4992 = yr1993_NewNode(v633, yr2024_TLn());
F.v4994 = Y_UNDEF_P;
F.v4994 = ((void *)0);
F.v4996 = Y_UNDEF_P;
F.v4996 = ((void *)0);
F.v4998 = Y_UNDEF_P;
F.v4998 = ((void *)0);
F.v5000 = Y_UNDEF_P;
F.v5000 = ((void *)0);
yr2064_Expect(v330);
while (yr2053_Accept(v267)) {
Y_TICK();
F.v4994 = yr1993_NewNode(v636, yr2024_TLn());
F.v5000 = ((void *)0);
for (;;) {
Y_TICK();
F.v4998 = yr1993_NewNode(v669, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4998)))).f_name = yr2070_Ident();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4994)))).f_a, &F.v5000, Y_DEFP(F.v4998));
if ((!yr2053_Accept(v606))) {
goto yl_5001;
}
}
yl_5001: ;
yr2064_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v4994)))).f_b = yr2204_ParseStatements(0);
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_a, &F.v4996, Y_DEFP(F.v4994));
}
if (yr2053_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v4992)))).f_b = yr2204_ParseStatements(0);
}
yr2064_Expect(v291);
{ void * rv5005 = Y_DEFP(F.v4992);
y_use = F.yu; return rv5005; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2118_ParseNames(void) {
struct yf2119 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5008 = Y_UNDEF_P;
F.v5008 = ((void *)0);
F.v5010 = Y_UNDEF_P;
F.v5010 = ((void *)0);
F.v5012 = Y_UNDEF_P;
F.v5012 = ((void *)0);
for (;;) {
Y_TICK();
F.v5012 = yr1993_NewNode(v669, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5012)))).f_name = yr2070_Ident();
if (yr2053_Accept(v249)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5012)))).f_a = yr2266_ParseExpr();
}
yr2000_Link(&F.v5008, &F.v5010, Y_DEFP(F.v5012));
if ((!yr2053_Accept(v606))) {
goto yl_5013;
}
}
yl_5013: ;
{ void * rv5014 = Y_DEFP(F.v5008);
y_use = F.yu; return rv5014; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2123_SimpleEntry(rt_int a_p2124) {
struct yf2125 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2124 = a_p2124;
F.v5018 = Y_UNDEF_P;
F.v5020 = Y_UNDEF_I;
F.v5020 = Y_DEFI(v1249);
if ((F.p2124 == v270)) {
F.v5018 = yr1993_NewNode(v639, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_a = yr2118_ParseNames();
yr2064_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_b = yr2169_ParseRep();
yr2064_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_c = yr2266_ParseExpr();
} else if ((F.p2124 == v483)) {
F.v5018 = yr1993_NewNode(v642, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_a = yr2118_ParseNames();
yr2064_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_b = yr2169_ParseRep();
if (yr2053_Accept(v531)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_c = yr2266_ParseExpr();
}
} else if ((F.p2124 == v477)) {
F.v5018 = yr1993_NewNode(v648, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_name = yr2070_Ident();
yr2064_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_b = yr2189_ParseConcrete1();
} else {
F.v5018 = yr1993_NewNode(v651, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_name = yr2070_Ident();
yr2064_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_b = yr2169_ParseRep();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_t0 = Y_DEFI(F.v5020);
((*(yR105 *)y_deref(Y_DEFP(F.v5018)))).f_t1 = Y_DEFI(v1249);
{ void * rv5021 = Y_DEFP(F.v5018);
y_use = F.yu; return rv5021; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2129_Continues(rt_int a_p2130) {
struct yf2131 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2130 = a_p2130;
if ((!((yr2036_Is(v609) && yr2042_IsIdAt(INT64_C(1)))))) {
{ rt_int rv5026 = 0;
y_use = F.yu; return rv5026; }
}
if (yr2087_IsLabel(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(1)))]), INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv5030 = 0;
y_use = F.yu; return rv5030; }
}
if ((((F.p2130 == v270)) || ((F.p2130 == v483)))) {
{ rt_int rv5034 = ((yr2029_IsAt(INT64_C(2), v606) || yr2029_IsAt(INT64_C(2), v612)) || yr2029_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv5034; }
}
{ rt_int rv5036 = yr2029_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv5036; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2135_ParseDeclGroup(void * * a_p2136, void * * a_p2137) {
struct yf2138 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2136 = a_p2136;
F.p2137 = a_p2137;
F.v5041 = Y_UNDEF_I;
F.v5041 = yr2019_TV();
F.v5043 = Y_UNDEF_P;
F.v5045 = Y_UNDEF_P;
F.v5047 = Y_UNDEF_P;
if ((((((Y_DEFI(F.v5041) == v270)) || ((Y_DEFI(F.v5041) == v483))) || ((Y_DEFI(F.v5041) == v477))) || ((Y_DEFI(F.v5041) == v438)))) {
yr2048_Skip();
yr2000_Link(&(*F.p2136), &(*F.p2137), yr2123_SimpleEntry(Y_DEFI(F.v5041)));
while (yr2129_Continues(Y_DEFI(F.v5041))) {
Y_TICK();
yr2048_Skip();
yr2000_Link(&(*F.p2136), &(*F.p2137), yr2123_SimpleEntry(Y_DEFI(F.v5041)));
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v5041) == v372)) {
F.v5043 = yr1993_NewNode(v645, yr2024_TLn());
yr2048_Skip();
F.v5047 = ((void *)0);
for (;;) {
Y_TICK();
F.v5045 = yr1993_NewNode(v669, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5045)))).f_name = yr2070_Ident();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_a, &F.v5047, Y_DEFP(F.v5045));
if ((!yr2053_Accept(v606))) {
goto yl_5048;
}
}
yl_5048: ;
F.v5045 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_a);
while ((!(Y_DEFP(F.v5045) == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_b = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5045)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_b)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5045)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_b)))).f_next = Y_DEFP(v1252);
v1252 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_b);
F.v5045 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5045)))).f_next);
}
((*(yR105 *)y_deref(Y_DEFP(F.v5043)))).f_b = ((void *)0);
yr2000_Link(&(*F.p2136), &(*F.p2137), Y_DEFP(F.v5043));
y_use = F.yu; return;
}
yr2000_Link(&(*F.p2136), &(*F.p2137), yr2142_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2142_ParseDecl(void) {
struct yf2143 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5051 = Y_UNDEF_P;
F.v5053 = Y_UNDEF_I;
F.v5053 = Y_DEFI(v1249);
F.v5051 = yr2147_ParseDecl1();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5051)))).f_kind) == v624))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5051)))).f_t0 = Y_DEFI(F.v5053);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5051)))).f_t1) == INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5051)))).f_t1 = Y_DEFI(v1249);
}
}
{ void * rv5055 = Y_DEFP(F.v5051);
y_use = F.yu; return rv5055; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2147_ParseDecl1(void) {
struct yf2148 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5058 = Y_UNDEF_P;
F.v5060 = Y_UNDEF_P;
F.v5062 = Y_UNDEF_P;
F.v5064 = Y_UNDEF_I;
F.v5064 = yr2019_TV();
F.v5066 = Y_UNDEF_I;
F.v5066 = yr2024_TLn();
F.v5068 = Y_UNDEF_I;
if ((((Y_DEFI(F.v5064) == v348)) || ((Y_DEFI(F.v5064) == v420)))) {
F.v5058 = yr1993_NewNode(v654, Y_DEFI(F.v5066));
yr2048_Skip();
if ((Y_DEFI(F.v5064) == v348)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_flag = INT64_C(1);
}
if ((yr2036_Is(v339) || yr2036_Is(v435))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_ival = yr2019_TV();
yr2048_Skip();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name = yr2082_ExtendedId();
yr2152_ParseFormals(Y_DEFP(F.v5058));
if (yr2053_Accept(v363)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_e = yr1993_NewNode(v669, Y_DEFI(F.v5066));
}
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_c = yr2108_ParseBlock();
if ((Y_DEFI(F.v5064) == v348)) {
yr2064_Expect(v297);
} else {
yr2064_Expect(v312);
}
yr2075_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name), Y_DEFI(F.v5066));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_e) == ((void *)0)))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_t1 = Y_DEFI(v1249);
}
{ void * rv5070 = Y_DEFP(F.v5058);
y_use = F.yu; return rv5070; }
}
if ((((Y_DEFI(F.v5064) == v381)) || ((Y_DEFI(F.v5064) == v384)))) {
{ void * rv5071 = yr2098_ParseModule();
y_use = F.yu; return rv5071; }
}
if ((Y_DEFI(F.v5064) == v465)) {
F.v5058 = yr1993_NewNode(v660, Y_DEFI(F.v5066));
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name = yr2070_Ident();
yr2064_Expect(v594);
F.v5062 = ((void *)0);
for (;;) {
Y_TICK();
F.v5060 = yr1993_NewNode(v669, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5060)))).f_name = yr2070_Ident();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_a, &F.v5062, Y_DEFP(F.v5060));
if ((!yr2053_Accept(v606))) {
goto yl_5072;
}
}
yl_5072: ;
yr2064_Expect(v597);
F.v5068 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_b = yr2098_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_ival = Y_DEFI(F.v5068);
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_flag = Y_DEFI(v1249);
yr2064_Expect(v324);
yr2075_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name), Y_DEFI(F.v5066));
{ void * rv5073 = Y_DEFP(F.v5058);
y_use = F.yu; return rv5073; }
}
if ((Y_DEFI(F.v5064) == v366)) {
F.v5058 = yr1993_NewNode(v663, Y_DEFI(F.v5066));
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name = yr2070_Ident();
yr2064_Expect(v594);
F.v5062 = ((void *)0);
for (;;) {
Y_TICK();
F.v5060 = yr1993_NewNode(v669, yr2024_TLn());
if ((yr2014_TK() == v216)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5060)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5060)))).f_ival = yr2019_TV();
yr2048_Skip();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v5060)))).f_name = yr2082_ExtendedId();
}
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_a, &F.v5062, Y_DEFP(F.v5060));
if ((!yr2053_Accept(v606))) {
goto yl_5074;
}
}
yl_5074: ;
yr2064_Expect(v597);
{ void * rv5076 = Y_DEFP(F.v5058);
y_use = F.yu; return rv5076; }
}
if ((Y_DEFI(F.v5064) == v423)) {
F.v5058 = yr1993_NewNode(v666, Y_DEFI(F.v5066));
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name = yr2070_Ident();
yr2152_ParseFormals(Y_DEFP(F.v5058));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_b) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(F.v5066), y_str("a process returns no value", 26));
}
if (yr2053_Accept(v417)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_d = yr2266_ParseExpr();
}
if (yr2053_Accept(v369)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_e = yr2266_ParseExpr();
}
if (yr2053_Accept(v459)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_x = yr2266_ParseExpr();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_t1 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_c = yr2108_ParseBlock();
yr2064_Expect(v315);
yr2075_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5058)))).f_name), Y_DEFI(F.v5066));
{ void * rv5078 = Y_DEFP(F.v5058);
y_use = F.yu; return rv5078; }
}
yr1178_FailS(Y_DEFI(F.v5066), y_str("expected a declaration", 22));
{ void * rv5080 = ((void *)0);
y_use = F.yu; return rv5080; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2152_ParseFormals(void * a_p2153) {
struct yf2154 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2153 = a_p2153;
F.v5084 = Y_UNDEF_P;
F.v5084 = ((void *)0);
F.v5086 = Y_UNDEF_P;
F.v5086 = ((void *)0);
F.v5088 = Y_UNDEF_I;
if (yr2053_Accept(v444)) {
((*(yR105 *)y_deref(F.p2153))).f_b = yr2169_ParseRep();
}
yr2064_Expect(v594);
while ((!yr2036_Is(v597))) {
Y_TICK();
if (yr2053_Accept(v270)) {
F.v5088 = v897;
} else if (yr2053_Accept(v405)) {
F.v5088 = v900;
} else if (yr2053_Accept(v483)) {
F.v5088 = v903;
} else {
yr1178_FailS(yr2024_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v5084 = yr1993_NewNode(v657, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5084)))).f_ival = Y_DEFI(F.v5088);
((*(yR105 *)y_deref(Y_DEFP(F.v5084)))).f_a = yr2118_ParseNames();
yr2064_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5084)))).f_b = yr2158_ParseFormalRep();
yr2000_Link(&((*(yR105 *)y_deref(F.p2153))).f_a, &F.v5086, Y_DEFP(F.v5084));
if ((!((((yr2036_Is(v609) || yr2036_Is(v606))) && yr2042_IsIdAt(INT64_C(1)))))) {
goto yl_5090;
}
yr2048_Skip();
}
yl_5090: ;
if ((!yr2053_Accept(v609))) {
if ((!yr2053_Accept(v606))) {
yr2064_Expect(v597);
y_use = F.yu; return;
}
}
}
yr2064_Expect(v597);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2158_ParseFormalRep(void) {
struct yf2159 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5094 = Y_UNDEF_P;
if (((yr2036_Is(v240) && yr2029_IsAt(INT64_C(1), v594)) && ((yr2029_IsAt(INT64_C(3), v273) || ((yr2042_IsIdAt(INT64_C(3)) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(3)))]) == Y_DEFI(v1257))))))))) {
F.v5094 = yr1993_NewNode(v696, yr2024_TLn());
yr2048_Skip();
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_a = yr2266_ParseExpr();
yr2048_Skip();
yr2064_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_b = yr2169_ParseRep();
yr2064_Expect(v597);
{ void * rv5100 = Y_DEFP(F.v5094);
y_use = F.yu; return rv5100; }
}
if (yr2036_Is(v462)) {
F.v5094 = yr1993_NewNode(v699, yr2024_TLn());
yr2048_Skip();
{ void * rv5101 = Y_DEFP(F.v5094);
y_use = F.yu; return rv5101; }
}
{ void * rv5102 = yr2169_ParseRep();
y_use = F.yu; return rv5102; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2163_IsStructWord(rt_int a_p2164) {
struct yf2165 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2164 = a_p2164;
F.v5106 = Y_UNDEF_I;
F.v5106 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2164))]);
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2164))]) == v210))) {
{ rt_int rv5110 = 0;
y_use = F.yu; return rv5110; }
}
{ rt_int rv5111 = (((((((((Y_DEFI(F.v5106) == v480)) || ((Y_DEFI(F.v5106) == v402))) || ((Y_DEFI(F.v5106) == v234))) || ((Y_DEFI(F.v5106) == v240))) || ((Y_DEFI(F.v5106) == v432))) || ((Y_DEFI(F.v5106) == v342))) || ((Y_DEFI(F.v5106) == v411))) || ((Y_DEFI(F.v5106) == v453)));
y_use = F.yu; return rv5111; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2169_ParseRep(void) {
struct yf2170 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5114 = Y_UNDEF_I;
F.v5116 = Y_UNDEF_P;
if ((yr2042_IsIdAt(INT64_C(0)) && ((yr2163_IsStructWord(INT64_C(1)) || ((yr2042_IsIdAt(INT64_C(1)) && yr2029_IsAt(INT64_C(2), v600))))))) {
F.v5114 = yr2070_Ident();
F.v5116 = yr2174_ParseConcrete();
((*(yR105 *)y_deref(Y_DEFP(F.v5116)))).f_text = Y_DEFI(F.v5114);
{ void * rv5121 = Y_DEFP(F.v5116);
y_use = F.yu; return rv5121; }
}
{ void * rv5122 = yr2174_ParseConcrete();
y_use = F.yu; return rv5122; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2174_ParseConcrete(void) {
struct yf2175 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5125 = Y_UNDEF_P;
F.v5127 = Y_UNDEF_P;
F.v5125 = yr2189_ParseConcrete1();
if ((yr2036_Is(v408) || yr2036_Is(v231))) {
F.v5127 = yr1993_NewNode(v669, yr2024_TLn());
if (yr2053_Accept(v408)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5127)))).f_flag = INT64_C(1);
if (((((yr2014_TK() == v216)) || ((yr2014_TK() == v207))) || yr2036_Is(v594))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5127)))).f_a = yr2271_ParseSimple();
}
}
if (yr2053_Accept(v231)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5127)))).f_b = yr2271_ParseSimple();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5125)))).f_x = Y_DEFP(F.v5127);
}
{ void * rv5129 = Y_DEFP(F.v5125);
y_use = F.yu; return rv5129; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2179_ParseIds(void) {
struct yf2180 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5132 = Y_UNDEF_P;
F.v5132 = ((void *)0);
F.v5134 = Y_UNDEF_P;
F.v5134 = ((void *)0);
F.v5136 = Y_UNDEF_P;
F.v5136 = ((void *)0);
for (;;) {
Y_TICK();
F.v5136 = yr1993_NewNode(v669, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5136)))).f_name = yr2070_Ident();
yr2000_Link(&F.v5132, &F.v5134, Y_DEFP(F.v5136));
if ((!yr2053_Accept(v606))) {
goto yl_5137;
}
}
yl_5137: ;
{ void * rv5138 = Y_DEFP(F.v5132);
y_use = F.yu; return rv5138; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2184_ParseFieldGroups(void) {
struct yf2185 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5141 = Y_UNDEF_P;
F.v5141 = ((void *)0);
F.v5143 = Y_UNDEF_P;
F.v5143 = ((void *)0);
F.v5145 = Y_UNDEF_P;
F.v5145 = ((void *)0);
F.v5147 = Y_UNDEF_I;
while ((yr2036_Is(v270) || yr2036_Is(v483))) {
Y_TICK();
F.v5147 = yr2019_TV();
yr2048_Skip();
for (;;) {
Y_TICK();
F.v5145 = yr1993_NewNode(v705, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_ival = Y_DEFI(F.v5147);
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_a = yr2118_ParseNames();
yr2064_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5145)))).f_b = yr2169_ParseRep();
yr2000_Link(&F.v5141, &F.v5143, Y_DEFP(F.v5145));
if ((!((yr2036_Is(v609) && yr2042_IsIdAt(INT64_C(1)))))) {
goto yl_5148;
}
yr2048_Skip();
}
yl_5148: ;
if ((!yr2053_Accept(v609))) {
{ void * rv5150 = Y_DEFP(F.v5141);
y_use = F.yu; return rv5150; }
}
}
{ void * rv5151 = Y_DEFP(F.v5141);
y_use = F.yu; return rv5151; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2189_ParseConcrete1(void) {
struct yf2190 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5154 = Y_UNDEF_P;
F.v5156 = Y_UNDEF_P;
F.v5158 = Y_UNDEF_P;
F.v5160 = Y_UNDEF_P;
F.v5162 = Y_UNDEF_P;
F.v5164 = Y_UNDEF_P;
F.v5166 = Y_UNDEF_I;
F.v5168 = Y_UNDEF_I;
F.v5168 = yr2024_TLn();
if ((yr2014_TK() == v207)) {
F.v5154 = yr1993_NewNode(v672, Y_DEFI(F.v5168));
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_name = yr2070_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_a = yr2194_ParseQualifier();
{ void * rv5169 = Y_DEFP(F.v5154);
y_use = F.yu; return rv5169; }
}
if ((!(yr2014_TK() == v210))) {
yr1178_FailS(Y_DEFI(F.v5168), y_str("expected a representation", 25));
}
F.v5166 = yr2019_TV();
if ((((Y_DEFI(F.v5166) == v480)) || ((Y_DEFI(F.v5166) == v402)))) {
F.v5154 = yr1993_NewNode(v675, Y_DEFI(F.v5168));
if ((Y_DEFI(F.v5166) == v402)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_flag = INT64_C(1);
}
yr2048_Skip();
yr2064_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_a = yr2179_ParseIds();
yr2064_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_b = yr2194_ParseQualifier();
{ void * rv5172 = Y_DEFP(F.v5154);
y_use = F.yu; return rv5172; }
}
if ((Y_DEFI(F.v5166) == v234)) {
F.v5154 = yr1993_NewNode(v678, Y_DEFI(F.v5168));
yr2048_Skip();
yr2064_Expect(v594);
F.v5164 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr2014_TK() == v225))) {
yr1178_FailS(yr2024_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v5162 = yr1993_NewNode(v768, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5162)))).f_text = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
yr2048_Skip();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_a, &F.v5164, Y_DEFP(F.v5162));
if ((!yr2053_Accept(v606))) {
goto yl_5173;
}
}
yl_5173: ;
yr2064_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_b = yr2194_ParseQualifier();
{ void * rv5175 = Y_DEFP(F.v5154);
y_use = F.yu; return rv5175; }
}
if ((Y_DEFI(F.v5166) == v240)) {
F.v5154 = yr1993_NewNode(v681, Y_DEFI(F.v5168));
yr2048_Skip();
yr2064_Expect(v594);
F.v5164 = ((void *)0);
for (;;) {
Y_TICK();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_a, &F.v5164, yr2169_ParseRep());
if ((!yr2053_Accept(v606))) {
goto yl_5176;
}
}
yl_5176: ;
yr2064_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_b = yr2169_ParseRep();
yr2064_Expect(v597);
{ void * rv5177 = Y_DEFP(F.v5154);
y_use = F.yu; return rv5177; }
}
if ((Y_DEFI(F.v5166) == v432)) {
F.v5154 = yr1993_NewNode(v684, Y_DEFI(F.v5168));
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_a = yr2184_ParseFieldGroups();
if (yr2053_Accept(v450)) {
F.v5156 = yr1993_NewNode(v708, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5156)))).f_name = yr2070_Ident();
yr2064_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5156)))).f_b = yr2169_ParseRep();
F.v5160 = ((void *)0);
while (yr2053_Accept(v267)) {
Y_TICK();
F.v5158 = yr1993_NewNode(v711, yr2024_TLn());
F.v5164 = ((void *)0);
for (;;) {
Y_TICK();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5158)))).f_a, &F.v5164, yr2266_ParseExpr());
if ((!yr2053_Accept(v606))) {
goto yl_5178;
}
}
yl_5178: ;
yr2064_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5158)))).f_b = yr2184_ParseFieldGroups();
while (yr2053_Accept(v609)) {
Y_TICK();
}
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5156)))).f_a, &F.v5160, Y_DEFP(F.v5158));
}
yr2064_Expect(v321);
if (yr2053_Accept(v609)) {
}
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_b = Y_DEFP(F.v5156);
}
yr2064_Expect(v318);
{ void * rv5179 = Y_DEFP(F.v5154);
y_use = F.yu; return rv5179; }
}
if (((((Y_DEFI(F.v5166) == v342)) || ((Y_DEFI(F.v5166) == v411))) || ((Y_DEFI(F.v5166) == v453)))) {
if ((Y_DEFI(F.v5166) == v342)) {
F.v5154 = yr1993_NewNode(v687, Y_DEFI(F.v5168));
} else if ((Y_DEFI(F.v5166) == v411)) {
F.v5154 = yr1993_NewNode(v690, Y_DEFI(F.v5168));
} else {
F.v5154 = yr1993_NewNode(v693, Y_DEFI(F.v5168));
}
yr2048_Skip();
yr2064_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v5154)))).f_a = yr2169_ParseRep();
yr2064_Expect(v597);
{ void * rv5180 = Y_DEFP(F.v5154);
y_use = F.yu; return rv5180; }
}
yr1178_FailS(Y_DEFI(F.v5168), y_str("expected a representation", 25));
{ void * rv5182 = ((void *)0);
y_use = F.yu; return rv5182; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2194_ParseQualifier(void) {
struct yf2195 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5185 = Y_UNDEF_P;
if ((!yr2036_Is(v600))) {
{ void * rv5186 = ((void *)0);
y_use = F.yu; return rv5186; }
}
F.v5185 = yr1993_NewNode(v702, yr2024_TLn());
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_a = yr2266_ParseExpr();
yr2064_Expect(v537);
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_b = yr2266_ParseExpr();
yr2064_Expect(v603);
if (yr2053_Accept(v447)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_c = yr2271_ParseSimple();
} else if (yr2053_Accept(v414)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5185)))).f_d = yr2271_ParseSimple();
}
{ void * rv5187 = Y_DEFP(F.v5185);
y_use = F.yu; return rv5187; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2199_IsStop(void) {
struct yf2200 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5190 = Y_UNDEF_I;
if ((yr2014_TK() == v204)) {
{ rt_int rv5192 = 1;
y_use = F.yu; return rv5192; }
}
if ((!(yr2014_TK() == v210))) {
{ rt_int rv5194 = 0;
y_use = F.yu; return rv5194; }
}
F.v5190 = yr2019_TV();
{ rt_int rv5195 = ((((((((((((((((Y_DEFI(F.v5190) == v285)) || ((Y_DEFI(F.v5190) == v282))) || ((Y_DEFI(F.v5190) == v300))) || ((Y_DEFI(F.v5190) == v267))) || ((Y_DEFI(F.v5190) == v321))) || ((Y_DEFI(F.v5190) == v327))) || ((Y_DEFI(F.v5190) == v294))) || ((Y_DEFI(F.v5190) == v303))) || ((Y_DEFI(F.v5190) == v288))) || ((Y_DEFI(F.v5190) == v291))) || ((Y_DEFI(F.v5190) == v312))) || ((Y_DEFI(F.v5190) == v297))) || ((Y_DEFI(F.v5190) == v315))) || ((Y_DEFI(F.v5190) == v306))) || ((Y_DEFI(F.v5190) == v309)));
y_use = F.yu; return rv5195; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2204_ParseStatements(rt_int a_p2205) {
struct yf2206 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2205 = a_p2205;
F.v5199 = Y_UNDEF_P;
F.v5199 = ((void *)0);
F.v5201 = Y_UNDEF_P;
F.v5201 = ((void *)0);
F.v5203 = Y_UNDEF_P;
F.v5203 = ((void *)0);
F.v5205 = Y_UNDEF_I;
for (;;) {
Y_TICK();
while (yr2053_Accept(v609)) {
Y_TICK();
}
if (yr2199_IsStop()) {
goto yl_5206;
}
F.v5205 = INT64_C(0);
if (((F.p2205 && yr2042_IsIdAt(INT64_C(0))) && yr2029_IsAt(INT64_C(1), v612))) {
F.v5205 = yr2070_Ident();
yr2048_Skip();
}
F.v5203 = yr2210_ParseStatement();
((*(yR105 *)y_deref(Y_DEFP(F.v5203)))).f_text = Y_DEFI(F.v5205);
yr2000_Link(&F.v5199, &F.v5201, Y_DEFP(F.v5203));
if ((!yr2036_Is(v609))) {
goto yl_5206;
}
}
yl_5206: ;
{ void * rv5210 = Y_DEFP(F.v5199);
y_use = F.yu; return rv5210; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2210_ParseStatement(void) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5213 = Y_UNDEF_P;
F.v5215 = Y_UNDEF_P;
F.v5217 = Y_UNDEF_P;
F.v5219 = Y_UNDEF_P;
F.v5221 = Y_UNDEF_P;
F.v5223 = Y_UNDEF_P;
F.v5225 = Y_UNDEF_I;
F.v5227 = Y_UNDEF_I;
F.v5227 = yr2024_TLn();
if ((yr2014_TK() == v210)) {
F.v5225 = yr2019_TV();
if ((Y_DEFI(F.v5225) == v246)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v720, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = yr2266_ParseExpr();
{ void * rv5228 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5228; }
}
if ((Y_DEFI(F.v5225) == v351)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v723, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_name = yr2070_Ident();
{ void * rv5229 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5229; }
}
if ((Y_DEFI(F.v5225) == v333)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v726, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_name = yr2070_Ident();
{ void * rv5230 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5230; }
}
if ((Y_DEFI(F.v5225) == v441)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v729, Y_DEFI(F.v5227));
if ((!((yr2036_Is(v609) || yr2199_IsStop())))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = yr2266_ParseExpr();
}
{ void * rv5231 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5231; }
}
if ((Y_DEFI(F.v5225) == v468)) {
yr2048_Skip();
{ void * rv5232 = yr1993_NewNode(v732, Y_DEFI(F.v5227));
y_use = F.yu; return rv5232; }
}
if ((Y_DEFI(F.v5225) == v426)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v735, Y_DEFI(F.v5227));
if (yr2042_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_name = yr2070_Ident();
}
{ void * rv5234 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5234; }
}
if ((Y_DEFI(F.v5225) == v354)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v738, Y_DEFI(F.v5227));
F.v5217 = ((void *)0);
F.v5215 = yr1993_NewNode(v756, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_a = yr2266_ParseExpr();
yr2064_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_b = yr2204_ParseStatements(0);
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a, &F.v5217, Y_DEFP(F.v5215));
while (yr2036_Is(v285)) {
Y_TICK();
F.v5215 = yr1993_NewNode(v756, yr2024_TLn());
yr2048_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_a = yr2266_ParseExpr();
yr2064_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_b = yr2204_ParseStatements(0);
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a, &F.v5217, Y_DEFP(F.v5215));
}
if (yr2053_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_b = yr2204_ParseStatements(0);
}
yr2064_Expect(v300);
{ void * rv5239 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5239; }
}
if ((Y_DEFI(F.v5225) == v450)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v741, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = yr2266_ParseExpr();
F.v5217 = ((void *)0);
while (yr2036_Is(v267)) {
Y_TICK();
F.v5215 = yr1993_NewNode(v756, yr2024_TLn());
yr2048_Skip();
F.v5221 = ((void *)0);
for (;;) {
Y_TICK();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_a, &F.v5221, yr2266_ParseExpr());
if ((!yr2053_Accept(v606))) {
goto yl_5240;
}
}
yl_5240: ;
yr2064_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v5215)))).f_b = yr2204_ParseStatements(0);
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_b, &F.v5217, Y_DEFP(F.v5215));
}
if (yr2053_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_c = yr2204_ParseStatements(0);
}
yr2064_Expect(v321);
{ void * rv5244 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5244; }
}
if ((Y_DEFI(F.v5225) == v486)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v744, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = yr2266_ParseExpr();
yr2064_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_b = yr2204_ParseStatements(0);
yr2064_Expect(v327);
{ void * rv5246 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5246; }
}
if ((Y_DEFI(F.v5225) == v345)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v747, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_name = yr2070_Ident();
yr2064_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = yr2169_ParseRep();
yr2064_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_b = yr2204_ParseStatements(0);
yr2064_Expect(v294);
{ void * rv5248 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5248; }
}
if ((Y_DEFI(F.v5225) == v375)) {
yr2048_Skip();
F.v5213 = yr1993_NewNode(v750, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_name = yr2070_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_b = yr2204_ParseStatements(0);
yr2064_Expect(v303);
yr2075_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_name), Y_DEFI(F.v5227));
{ void * rv5250 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5250; }
}
if ((((Y_DEFI(F.v5225) == v264)) || ((Y_DEFI(F.v5225) == v456)))) {
F.v5213 = yr1993_NewNode(v753, Y_DEFI(F.v5227));
if (yr2053_Accept(v456)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_flag = INT64_C(1);
}
yr2064_Expect(v264);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = yr2108_ParseBlock();
yr2064_Expect(v288);
{ void * rv5252 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5252; }
}
}
F.v5223 = yr2297_ParseDesignator();
if (yr2053_Accept(v531)) {
F.v5213 = yr1993_NewNode(v714, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = Y_DEFP(F.v5223);
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_b = yr2266_ParseExpr();
{ void * rv5253 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5253; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5223)))).f_kind) == v780))) {
yr1178_FailS(Y_DEFI(F.v5227), y_str("expected a statement", 20));
}
F.v5213 = yr1993_NewNode(v717, Y_DEFI(F.v5227));
((*(yR105 *)y_deref(Y_DEFP(F.v5213)))).f_a = Y_DEFP(F.v5223);
{ void * rv5255 = Y_DEFP(F.v5213);
y_use = F.yu; return rv5255; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2215_OpAt(void) {
struct yf2216 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr2014_TK() == v213)) || ((yr2014_TK() == v210)))) {
{ rt_int rv5257 = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv5257; }
}
{ rt_int rv5259 = INT64_C(0);
y_use = F.yu; return rv5259; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2220_IsRel(rt_int a_p2221) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2221 = a_p2221;
{ rt_int rv5262 = ((((((((((((((((((((F.p2221 == v360)) || ((F.p2221 == v570))) || ((F.p2221 == v585))) || ((F.p2221 == v588))) || ((F.p2221 == v540))) || ((F.p2221 == v591))) || ((F.p2221 == v543))) || ((F.p2221 == v546))) || ((F.p2221 == v501))) || ((F.p2221 == v549))) || ((F.p2221 == v504))) || ((F.p2221 == v552))) || ((F.p2221 == v513))) || ((F.p2221 == v507))) || ((F.p2221 == v495))) || ((F.p2221 == v555))) || ((F.p2221 == v516))) || ((F.p2221 == v510))) || ((F.p2221 == v498)));
y_use = F.yu; return rv5262; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2226_IsAssocMul(rt_int a_p2227) {
struct yf2228 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2227 = a_p2227;
{ rt_int rv5265 = (((F.p2227 == v579)) || ((F.p2227 == v237)));
y_use = F.yu; return rv5265; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2232_IsNonAssocMul(rt_int a_p2233) {
struct yf2234 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2233 = a_p2233;
{ rt_int rv5268 = ((((((((F.p2233 == v582)) || ((F.p2233 == v276))) || ((F.p2233 == v378))) || ((F.p2233 == v558))) || ((F.p2233 == v519))) || ((F.p2233 == v561))) || ((F.p2233 == v522)));
y_use = F.yu; return rv5268; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2238_IsAssocAdd(rt_int a_p2239) {
struct yf2240 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2239 = a_p2239;
{ rt_int rv5271 = (((F.p2239 == v573)) || ((F.p2239 == v399)));
y_use = F.yu; return rv5271; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2244_IsNonAssocAdd(rt_int a_p2245) {
struct yf2246 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2245 = a_p2245;
{ rt_int rv5274 = (((((((F.p2245 == v576)) || ((F.p2245 == v489))) || ((F.p2245 == v564))) || ((F.p2245 == v525))) || ((F.p2245 == v567))) || ((F.p2245 == v528)));
y_use = F.yu; return rv5274; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2250_Bin(rt_int a_p2251, void * a_p2252, void * a_p2253, rt_int a_p2254) {
struct yf2255 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2251 = a_p2251;
F.p2252 = a_p2252;
F.p2253 = a_p2253;
F.p2254 = a_p2254;
F.v5281 = Y_UNDEF_P;
F.v5281 = yr1993_NewNode(v798, F.p2254);
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_name = F.p2251;
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_a = F.p2252;
((*(yR105 *)y_deref(Y_DEFP(F.v5281)))).f_b = F.p2253;
{ void * rv5282 = Y_DEFP(F.v5281);
y_use = F.yu; return rv5282; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2259_NeedParens(rt_int a_p2260, rt_int a_p2261) {
struct yf2262 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2260 = a_p2260;
F.p2261 = a_p2261;
F.v5287 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p2260);
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v5287 = yr1056_SE();
yr1157_Fail(F.p2261, Y_DEFI(F.v5287));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2266_ParseExpr(void) {
struct yf2267 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5291 = Y_UNDEF_P;
F.v5293 = Y_UNDEF_I;
F.v5295 = Y_UNDEF_I;
F.v5295 = yr2024_TLn();
F.v5291 = yr2271_ParseSimple();
F.v5293 = yr2215_OpAt();
if (yr2220_IsRel(Y_DEFI(F.v5293))) {
yr2048_Skip();
F.v5291 = yr2250_Bin(Y_DEFI(F.v5293), Y_DEFP(F.v5291), yr2271_ParseSimple(), Y_DEFI(F.v5295));
if (yr2220_IsRel(yr2215_OpAt())) {
yr2259_NeedParens(Y_DEFI(F.v5293), Y_DEFI(F.v5295));
}
}
{ void * rv5296 = Y_DEFP(F.v5291);
y_use = F.yu; return rv5296; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2271_ParseSimple(void) {
struct yf2272 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5299 = Y_UNDEF_P;
F.v5301 = Y_UNDEF_P;
F.v5303 = Y_UNDEF_I;
F.v5305 = Y_UNDEF_I;
F.v5305 = yr2024_TLn();
if (yr2036_Is(v576)) {
yr2048_Skip();
F.v5301 = yr1993_NewNode(v795, Y_DEFI(F.v5305));
((*(yR105 *)y_deref(Y_DEFP(F.v5301)))).f_a = yr2276_ParseTerm();
F.v5303 = yr2215_OpAt();
if ((yr2238_IsAssocAdd(Y_DEFI(F.v5303)) || yr2244_IsNonAssocAdd(Y_DEFI(F.v5303)))) {
yr2259_NeedParens(y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFI(F.v5305));
}
{ void * rv5306 = Y_DEFP(F.v5301);
y_use = F.yu; return rv5306; }
}
F.v5299 = yr2276_ParseTerm();
F.v5303 = yr2215_OpAt();
if (yr2244_IsNonAssocAdd(Y_DEFI(F.v5303))) {
yr2048_Skip();
F.v5299 = yr2250_Bin(Y_DEFI(F.v5303), Y_DEFP(F.v5299), yr2276_ParseTerm(), Y_DEFI(F.v5305));
if ((yr2238_IsAssocAdd(yr2215_OpAt()) || yr2244_IsNonAssocAdd(yr2215_OpAt()))) {
yr2259_NeedParens(Y_DEFI(F.v5303), Y_DEFI(F.v5305));
}
{ void * rv5307 = Y_DEFP(F.v5299);
y_use = F.yu; return rv5307; }
}
while (yr2238_IsAssocAdd(Y_DEFI(F.v5303))) {
Y_TICK();
yr2048_Skip();
F.v5299 = yr2250_Bin(Y_DEFI(F.v5303), Y_DEFP(F.v5299), yr2276_ParseTerm(), Y_DEFI(F.v5305));
if (yr2244_IsNonAssocAdd(yr2215_OpAt())) {
yr2259_NeedParens(yr2215_OpAt(), Y_DEFI(F.v5305));
}
F.v5303 = yr2215_OpAt();
}
{ void * rv5308 = Y_DEFP(F.v5299);
y_use = F.yu; return rv5308; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2276_ParseTerm(void) {
struct yf2277 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5311 = Y_UNDEF_P;
F.v5313 = Y_UNDEF_I;
F.v5315 = Y_UNDEF_I;
F.v5315 = yr2024_TLn();
F.v5311 = yr2292_ParseFactor();
F.v5313 = yr2215_OpAt();
if (yr2232_IsNonAssocMul(Y_DEFI(F.v5313))) {
yr2048_Skip();
F.v5311 = yr2250_Bin(Y_DEFI(F.v5313), Y_DEFP(F.v5311), yr2292_ParseFactor(), Y_DEFI(F.v5315));
if ((yr2226_IsAssocMul(yr2215_OpAt()) || yr2232_IsNonAssocMul(yr2215_OpAt()))) {
yr2259_NeedParens(Y_DEFI(F.v5313), Y_DEFI(F.v5315));
}
{ void * rv5316 = Y_DEFP(F.v5311);
y_use = F.yu; return rv5316; }
}
while (yr2226_IsAssocMul(Y_DEFI(F.v5313))) {
Y_TICK();
yr2048_Skip();
F.v5311 = yr2250_Bin(Y_DEFI(F.v5313), Y_DEFP(F.v5311), yr2292_ParseFactor(), Y_DEFI(F.v5315));
if (yr2232_IsNonAssocMul(yr2215_OpAt())) {
yr2259_NeedParens(yr2215_OpAt(), Y_DEFI(F.v5315));
}
F.v5313 = yr2215_OpAt();
}
{ void * rv5317 = Y_DEFP(F.v5311);
y_use = F.yu; return rv5317; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2281_IsLiteralAt(rt_int a_p2282) {
struct yf2283 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2282 = a_p2282;
F.v5321 = Y_UNDEF_I;
F.v5321 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2282))]);
{ rt_int rv5323 = (((((((Y_DEFI(F.v5321) == v216)) || ((Y_DEFI(F.v5321) == v219))) || ((Y_DEFI(F.v5321) == v222))) || ((Y_DEFI(F.v5321) == v225))) || ((Y_DEFI(F.v5321) == v228))) || yr2029_IsAt(F.p2282, v387));
y_use = F.yu; return rv5323; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2287_ParseLiteral(void) {
struct yf2288 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5326 = Y_UNDEF_P;
F.v5328 = Y_UNDEF_I;
F.v5328 = yr2014_TK();
F.v5330 = Y_UNDEF_I;
F.v5330 = yr2024_TLn();
if ((Y_DEFI(F.v5328) == v216)) {
F.v5326 = yr1993_NewNode(v759, Y_DEFI(F.v5330));
((*(yR105 *)y_deref(Y_DEFP(F.v5326)))).f_ival = yr2019_TV();
} else if ((Y_DEFI(F.v5328) == v219)) {
F.v5326 = yr1993_NewNode(v762, Y_DEFI(F.v5330));
((*(yR105 *)y_deref(Y_DEFP(F.v5326)))).f_ival = yr2019_TV();
} else if ((Y_DEFI(F.v5328) == v222)) {
F.v5326 = yr1993_NewNode(v765, Y_DEFI(F.v5330));
((*(yR105 *)y_deref(Y_DEFP(F.v5326)))).f_text = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5328) == v225)) {
F.v5326 = yr1993_NewNode(v768, Y_DEFI(F.v5330));
((*(yR105 *)y_deref(Y_DEFP(F.v5326)))).f_text = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5328) == v228)) {
F.v5326 = yr1993_NewNode(v771, Y_DEFI(F.v5330));
((*(yR105 *)y_deref(Y_DEFP(F.v5326)))).f_text = y_range(yr2019_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v5326 = yr1993_NewNode(v774, Y_DEFI(F.v5330));
}
yr2048_Skip();
{ void * rv5331 = Y_DEFP(F.v5326);
y_use = F.yu; return rv5331; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2292_ParseFactor(void) {
struct yf2293 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5334 = Y_UNDEF_P;
F.v5336 = Y_UNDEF_I;
F.v5338 = Y_UNDEF_I;
F.v5338 = yr2024_TLn();
if (yr2036_Is(v390)) {
yr2048_Skip();
F.v5334 = yr1993_NewNode(v792, Y_DEFI(F.v5338));
((*(yR105 *)y_deref(Y_DEFP(F.v5334)))).f_a = yr2292_ParseFactor();
{ void * rv5339 = Y_DEFP(F.v5334);
y_use = F.yu; return rv5339; }
}
if (yr2036_Is(v594)) {
yr2048_Skip();
F.v5334 = yr1993_NewNode(v801, Y_DEFI(F.v5338));
((*(yR105 *)y_deref(Y_DEFP(F.v5334)))).f_a = yr2266_ParseExpr();
yr2064_Expect(v597);
{ void * rv5340 = Y_DEFP(F.v5334);
y_use = F.yu; return rv5340; }
}
if (yr2281_IsLiteralAt(INT64_C(0))) {
{ void * rv5342 = yr2287_ParseLiteral();
y_use = F.yu; return rv5342; }
}
if (yr2042_IsIdAt(INT64_C(0))) {
if ((yr2281_IsLiteralAt(INT64_C(1)) || ((yr2042_IsIdAt(INT64_C(1)) && (!((((((yr2029_IsAt(INT64_C(2), v594) || yr2029_IsAt(INT64_C(2), v600)) || yr2029_IsAt(INT64_C(2), v615)) || yr2029_IsAt(INT64_C(2), v618)) || yr2029_IsAt(INT64_C(2), v531)) || yr2029_IsAt(INT64_C(2), v612)))))))) {
F.v5336 = yr2070_Ident();
if (yr2042_IsIdAt(INT64_C(0))) {
F.v5334 = yr1993_NewNode(v777, Y_DEFI(F.v5338));
((*(yR105 *)y_deref(Y_DEFP(F.v5334)))).f_name = yr2070_Ident();
} else {
F.v5334 = yr2287_ParseLiteral();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5334)))).f_d = yr1993_NewNode(v669, Y_DEFI(F.v5338));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5334)))).f_d)))).f_name = Y_DEFI(F.v5336);
{ void * rv5353 = Y_DEFP(F.v5334);
y_use = F.yu; return rv5353; }
}
{ void * rv5354 = yr2297_ParseDesignator();
y_use = F.yu; return rv5354; }
}
yr1186_FailN(Y_DEFI(F.v5338), yr2059_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv5356 = ((void *)0);
y_use = F.yu; return rv5356; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2297_ParseDesignator(void) {
struct yf2298 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5359 = Y_UNDEF_P;
F.v5361 = Y_UNDEF_P;
F.v5363 = Y_UNDEF_P;
F.v5365 = Y_UNDEF_I;
F.v5365 = yr2024_TLn();
F.v5359 = yr1993_NewNode(v777, Y_DEFI(F.v5365));
((*(yR105 *)y_deref(Y_DEFP(F.v5359)))).f_name = yr2070_Ident();
if (yr2053_Accept(v594)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5359)))).f_kind = v780;
F.v5363 = ((void *)0);
while ((!yr2036_Is(v597))) {
Y_TICK();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5359)))).f_a, &F.v5363, yr2266_ParseExpr());
if ((!yr2053_Accept(v606))) {
yr2302_EXIT_ARGS();
}
}
yr2064_Expect(v597);
}
for (;;) {
Y_TICK();
if (yr2053_Accept(v615)) {
F.v5361 = yr1993_NewNode(v783, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5361)))).f_a = Y_DEFP(F.v5359);
((*(yR105 *)y_deref(Y_DEFP(F.v5361)))).f_name = yr2070_Ident();
F.v5359 = Y_DEFP(F.v5361);
} else if (yr2053_Accept(v600)) {
F.v5361 = yr1993_NewNode(v786, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5361)))).f_a = Y_DEFP(F.v5359);
F.v5363 = ((void *)0);
for (;;) {
Y_TICK();
yr2000_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5361)))).f_b, &F.v5363, yr2266_ParseExpr());
if ((!yr2053_Accept(v606))) {
goto yl_5367;
}
}
yl_5367: ;
yr2064_Expect(v603);
F.v5359 = Y_DEFP(F.v5361);
} else if (yr2053_Accept(v618)) {
F.v5361 = yr1993_NewNode(v789, yr2024_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5361)))).f_a = Y_DEFP(F.v5359);
F.v5359 = Y_DEFP(F.v5361);
} else {
goto yl_5366;
}
}
yl_5366: ;
{ void * rv5368 = Y_DEFP(F.v5359);
y_use = F.yu; return rv5368; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2302_EXIT_ARGS(void) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr2036_Is(v597))) {
yr2064_Expect(v597);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2307_ParseProgram(void) {
struct yf2308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5372 = Y_UNDEF_P;
F.v5372 = ((void *)0);
F.v5374 = Y_UNDEF_P;
F.v5374 = ((void *)0);
F.v5376 = Y_UNDEF_P;
F.v5376 = ((void *)0);
F.v5378 = Y_UNDEF_I;
while ((!(yr2014_TK() == v204))) {
Y_TICK();
if ((!((yr2036_Is(v381) || yr2036_Is(v384))))) {
yr1178_FailS(yr2024_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
F.v5378 = Y_DEFI(v1249);
F.v5376 = yr2098_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v5376)))).f_x = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5376)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5376)))).f_x)))).f_ival = Y_DEFI(F.v5378);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5376)))).f_x)))).f_flag = Y_DEFI(v1249);
yr2000_Link(&F.v5372, &F.v5374, Y_DEFP(F.v5376));
while (yr2053_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5380 = Y_DEFP(F.v5372);
y_use = F.yu; return rv5380; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2312_NewSym(rt_int a_p2313, rt_int a_p2314) {
struct yf2315 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2313 = a_p2313;
F.p2314 = a_p2314;
F.v5385 = Y_UNDEF_P;
({ F.v5385 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v5385)); });
(*(yR125 *)y_deref(Y_DEFP(F.v5385))) = ((yR125){ .f_kind = F.p2313, .f_name = F.p2314, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1) });
((*(yR125 *)y_deref(Y_DEFP(F.v5385)))).f_serial = yr1195_NewSerial();
{ void * rv5399 = Y_DEFP(F.v5385);
y_use = F.yu; return rv5399; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2319_OpenScope(rt_int a_p2320) {
struct yf2321 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2320 = a_p2320;
F.v5403 = Y_UNDEF_P;
({ F.v5403 = y_new(sizeof(yR130)); y_initu(&yd_131, y_deref(F.v5403)); });
(*(yR130 *)y_deref(Y_DEFP(F.v5403))) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2320, .f_module = ((void *)0), .f_level = Y_DEFI(v1279), .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((Y_DEFI(v1273) >= INT64_C(0))) {
((*(yR130 *)y_deref(Y_DEFP(F.v5403)))).f_up = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))]);
}
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = Y_DEFP(F.v5403);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2325_ReopenScope(void * a_p2326) {
struct yf2327 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2326 = a_p2326;
F.v5410 = Y_UNDEF_P;
F.v5410 = Y_DEFP(((*(yR130 *)y_deref(F.p2326))).f_syms);
F.v5412 = Y_UNDEF_I;
F.v5412 = INT64_C(0);
F.v5415 = Y_UNDEF_I;
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = F.p2326;
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
while ((!(Y_DEFP(F.v5410) == ((void *)0)))) {
Y_TICK();
F.v5412 = y_range(y_add(Y_DEFI(F.v5412), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5412))] = Y_DEFP(F.v5410);
F.v5410 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5410)))).f_stack);
}
while ((Y_DEFI(F.v5412) > INT64_C(0))) {
Y_TICK();
F.v5410 = Y_DEFP(((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5412))]);
F.v5415 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5410)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v5410)))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5415))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5415))] = Y_DEFP(F.v5410);
F.v5412 = y_range(y_sub(Y_DEFI(F.v5412), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2331_CloseScope(void) {
struct yf2332 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5427 = Y_UNDEF_P;
F.v5429 = Y_UNDEF_P;
F.v5431 = Y_UNDEF_P;
F.v5433 = Y_UNDEF_I;
F.v5427 = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
while ((!(Y_DEFP(F.v5427) == ((void *)0)))) {
Y_TICK();
F.v5433 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5427)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5429 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5433))]);
F.v5431 = ((void *)0);
while ((((!(Y_DEFP(F.v5429) == ((void *)0)))) && ((!(Y_DEFP(F.v5429) == Y_DEFP(F.v5427)))))) {
Y_TICK();
F.v5431 = Y_DEFP(F.v5429);
F.v5429 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5429)))).f_chain);
}
if ((Y_DEFP(F.v5429) == Y_DEFP(F.v5427))) {
if ((Y_DEFP(F.v5431) == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5433))] = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5427)))).f_chain);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v5431)))).f_chain = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5427)))).f_chain);
}
}
F.v5427 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5427)))).f_stack);
}
v1273 = y_range(y_sub(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2336_Visible(void * a_p2337) {
struct yf2338 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2337 = a_p2337;
{ rt_int rv5441 = (((Y_DEFI(((*(yR125 *)y_deref(F.p2337))).f_depth) >= Y_DEFI(v1276))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p2337))).f_depth) == INT64_C(0))));
y_use = F.yu; return rv5441; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2342_Find(rt_int a_p2343) {
struct yf2344 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2343 = a_p2343;
F.v5445 = Y_UNDEF_P;
F.v5445 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2343, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5445) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5445)))).f_name) == F.p2343)) && yr2336_Visible(Y_DEFP(F.v5445)))) {
{ void * rv5448 = Y_DEFP(F.v5445);
y_use = F.yu; return rv5448; }
}
F.v5445 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5445)))).f_chain);
}
{ void * rv5449 = ((void *)0);
y_use = F.yu; return rv5449; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2348_FindHere(rt_int a_p2349) {
struct yf2350 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2349 = a_p2349;
F.v5453 = Y_UNDEF_P;
F.v5453 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2349, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5453) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5453)))).f_name) == F.p2349)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5453)))).f_depth) == Y_DEFI(v1273))))) {
{ void * rv5456 = Y_DEFP(F.v5453);
y_use = F.yu; return rv5456; }
}
F.v5453 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5453)))).f_chain);
}
{ void * rv5457 = ((void *)0);
y_use = F.yu; return rv5457; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2354_Lookup(rt_int a_p2355, rt_int a_p2356) {
struct yf2357 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2355 = a_p2355;
F.p2356 = a_p2356;
F.v5462 = Y_UNDEF_P;
F.v5462 = yr2342_Find(F.p2355);
F.v5464 = Y_UNDEF_P;
if ((!(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]) == ((void *)0)))) {
if ((((Y_DEFP(F.v5462) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_depth) == Y_DEFI(v1273)))))) {
if (yr2374_DeclaredFrom(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]), F.p2355)) {
yr1186_FailN(F.p2356, F.p2355, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((Y_DEFP(F.v5462) == ((void *)0))) {
yr1186_FailN(F.p2356, F.p2355, y_str(" is not declared here", 21));
}
F.lo5470 = INT64_C(1);
F.hi5471 = Y_DEFI(v1328);
{ rt_int hi5475 = F.hi5471;
for (rt_int i5474 = F.lo5470; i5474 <= hi5475; i5474++) { F.c_5473 = i5474; Y_TICK();
if (((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_depth) == Y_DEFI(((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5473)]))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_serial) > Y_DEFI(((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5473)])))) && yr2368_IsSimple(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_kind)))) {
yr1186_FailN(F.p2356, F.p2355, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i5474 == hi5475) break;
}}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_kind) == v894)) {
F.v5464 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_chain);
while ((!(Y_DEFP(F.v5464) == ((void *)0)))) {
Y_TICK();
if ((((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_name) == F.p2355)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_depth) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5462)))).f_depth)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_kind) == v894))) && yr2395_Resolved(Y_DEFP(F.v5464))) && ((!(yr2447_Real(Y_DEFP(F.v5464)) == yr2447_Real(Y_DEFP(F.v5462)))))) && ((!(Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v5462))))).f_kind) == v873))))) {
yr1186_FailN(F.p2356, F.p2355, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v5464 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5464)))).f_chain);
}
}
{ void * rv5478 = Y_DEFP(F.v5462);
y_use = F.yu; return rv5478; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2361_AltOf(void * a_p2362, void * a_p2363) {
struct yf2364 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2362 = a_p2362;
F.p2363 = a_p2363;
F.v5483 = Y_UNDEF_P;
F.v5483 = Y_DEFP(((*(yR125 *)y_deref(F.p2362))).f_alt);
while ((!(Y_DEFP(F.v5483) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(F.v5483) == F.p2363)) {
{ rt_int rv5485 = 1;
y_use = F.yu; return rv5485; }
}
F.v5483 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5483)))).f_alt);
}
{ rt_int rv5487 = 0;
y_use = F.yu; return rv5487; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2368_IsSimple(rt_int a_p2369) {
struct yf2370 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2369 = a_p2369;
{ rt_int rv5490 = (((((((F.p2369 == v861)) || ((F.p2369 == v864))) || ((F.p2369 == v867))) || ((F.p2369 == v870))) || ((F.p2369 == v873))) || ((F.p2369 == v888)));
y_use = F.yu; return rv5490; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2374_DeclaredFrom(void * a_p2375, rt_int a_p2376) {
struct yf2377 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2375 = a_p2375;
F.p2376 = a_p2376;
F.v5495 = Y_UNDEF_P;
F.v5495 = F.p2375;
F.v5497 = Y_UNDEF_P;
F.v5497 = F.p2375;
F.v5499 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v5495) == ((void *)0)))) {
Y_TICK();
F.v5499 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5495)))).f_kind);
if (((((Y_DEFI(F.v5499) == v639)) || ((Y_DEFI(F.v5499) == v642))) || ((Y_DEFI(F.v5499) == v645)))) {
F.v5497 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5495)))).f_a);
while ((!(Y_DEFP(F.v5497) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5497)))).f_name) == F.p2376)) {
{ rt_int rv5501 = 1;
y_use = F.yu; return rv5501; }
}
F.v5497 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5497)))).f_next);
}
}
if ((((((((Y_DEFI(F.v5499) == v648)) || ((Y_DEFI(F.v5499) == v651))) || ((Y_DEFI(F.v5499) == v654))) || ((Y_DEFI(F.v5499) == v666))) || ((Y_DEFI(F.v5499) == v624))) || ((Y_DEFI(F.v5499) == v660)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5495)))).f_name) == F.p2376)) {
{ rt_int rv5503 = 1;
y_use = F.yu; return rv5503; }
}
}
if ((((((Y_DEFI(F.v5499) == v639)) || ((Y_DEFI(F.v5499) == v642))) || ((Y_DEFI(F.v5499) == v648))) || ((Y_DEFI(F.v5499) == v651)))) {
if (yr2381_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5495)))).f_b), F.p2376)) {
{ rt_int rv5505 = 1;
y_use = F.yu; return rv5505; }
}
}
if ((Y_DEFI(F.v5499) == v624)) {
F.v5497 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5495)))).f_b);
while ((!(Y_DEFP(F.v5497) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5497)))).f_ival) == F.p2376)) || ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5497)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5497)))).f_name) == F.p2376)))))) {
{ rt_int rv5508 = 1;
y_use = F.yu; return rv5508; }
}
F.v5497 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5497)))).f_next);
}
}
F.v5495 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5495)))).f_next);
}
{ rt_int rv5510 = 0;
y_use = F.yu; return rv5510; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2381_LiteralIn(void * a_p2382, rt_int a_p2383) {
struct yf2384 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2382 = a_p2382;
F.p2383 = a_p2383;
F.v5515 = Y_UNDEF_P;
if ((F.p2382 == ((void *)0))) {
{ rt_int rv5517 = 0;
y_use = F.yu; return rv5517; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2382))).f_kind) == v675)) {
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_a);
while ((!(Y_DEFP(F.v5515) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_name) == F.p2383)) {
{ rt_int rv5519 = 1;
y_use = F.yu; return rv5519; }
}
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_next);
}
{ rt_int rv5521 = 0;
y_use = F.yu; return rv5521; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2382))).f_kind) == v681)) {
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_a);
while ((!(Y_DEFP(F.v5515) == ((void *)0)))) {
Y_TICK();
if (yr2381_LiteralIn(Y_DEFP(F.v5515), F.p2383)) {
{ rt_int rv5523 = 1;
y_use = F.yu; return rv5523; }
}
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_next);
}
{ rt_int rv5524 = yr2381_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_b), F.p2383);
y_use = F.yu; return rv5524; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2382))).f_kind) == v684)) {
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_a);
while ((!(Y_DEFP(F.v5515) == ((void *)0)))) {
Y_TICK();
if (yr2381_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_b), F.p2383)) {
{ rt_int rv5526 = 1;
y_use = F.yu; return rv5526; }
}
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_next);
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_b) == ((void *)0)))) {
if (yr2381_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_b)))).f_b), F.p2383)) {
{ rt_int rv5528 = 1;
y_use = F.yu; return rv5528; }
}
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_b)))).f_a);
while ((!(Y_DEFP(F.v5515) == ((void *)0)))) {
Y_TICK();
if (yr2388_LiteralInGroups(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_b), F.p2383)) {
{ rt_int rv5530 = 1;
y_use = F.yu; return rv5530; }
}
F.v5515 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5515)))).f_next);
}
}
{ rt_int rv5532 = 0;
y_use = F.yu; return rv5532; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2382))).f_kind) == v687)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2382))).f_kind) == v693)))) {
{ rt_int rv5533 = yr2381_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2382))).f_a), F.p2383);
y_use = F.yu; return rv5533; }
}
{ rt_int rv5535 = 0;
y_use = F.yu; return rv5535; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2388_LiteralInGroups(void * a_p2389, rt_int a_p2390) {
struct yf2391 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2389 = a_p2389;
F.p2390 = a_p2390;
F.v5540 = Y_UNDEF_P;
F.v5540 = F.p2389;
while ((!(Y_DEFP(F.v5540) == ((void *)0)))) {
Y_TICK();
if (yr2381_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5540)))).f_b), F.p2390)) {
{ rt_int rv5542 = 1;
y_use = F.yu; return rv5542; }
}
F.v5540 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5540)))).f_next);
}
{ rt_int rv5544 = 0;
y_use = F.yu; return rv5544; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2395_Resolved(void * a_p2396) {
struct yf2397 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2396 = a_p2396;
if ((!(Y_DEFI(((*(yR125 *)y_deref(F.p2396))).f_kind) == v894))) {
{ rt_int rv5548 = 1;
y_use = F.yu; return rv5548; }
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p2396))).f_target) == ((void *)0))) {
{ rt_int rv5550 = 0;
y_use = F.yu; return rv5550; }
}
{ rt_int rv5551 = yr2395_Resolved(Y_DEFP(((*(yR125 *)y_deref(F.p2396))).f_target));
y_use = F.yu; return rv5551; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2401_Ambiguous(void * a_p2402) {
struct yf2403 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2402 = a_p2402;
F.v5555 = Y_UNDEF_P;
F.v5555 = Y_DEFP(((*(yR125 *)y_deref(F.p2402))).f_chain);
while ((!(Y_DEFP(F.v5555) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_name) == Y_DEFI(((*(yR125 *)y_deref(F.p2402))).f_name))) && yr2336_Visible(Y_DEFP(F.v5555))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_kind) == v873))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p2402))).f_rep)))).f_tid)))))) {
{ rt_int rv5557 = 1;
y_use = F.yu; return rv5557; }
}
F.v5555 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5555)))).f_chain);
}
{ rt_int rv5559 = 0;
y_use = F.yu; return rv5559; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2407_FindLit(rt_int a_p2408, void * a_p2409) {
struct yf2410 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2408 = a_p2408;
F.p2409 = a_p2409;
F.v5564 = Y_UNDEF_P;
F.v5564 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2408, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5564) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5564)))).f_name) == F.p2408)) && yr2395_Resolved(Y_DEFP(F.v5564)))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v5564))))).f_kind) == v873)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v5564))))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2409))).f_tid))))) {
{ void * rv5567 = Y_DEFP(F.v5564);
y_use = F.yu; return rv5567; }
}
}
F.v5564 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5564)))).f_chain);
}
{ void * rv5568 = ((void *)0);
y_use = F.yu; return rv5568; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2414_Define(void * a_p2415, rt_int a_p2416) {
struct yf2417 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2415 = a_p2415;
F.p2416 = a_p2416;
F.v5573 = Y_UNDEF_P;
F.v5573 = yr2348_FindHere(Y_DEFI(((*(yR125 *)y_deref(F.p2415))).f_name));
F.v5575 = Y_UNDEF_I;
F.v5575 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(F.p2415))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(Y_DEFP(F.v5573) == ((void *)0)))) && (!((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5573)))).f_kind) == v873)) && ((Y_DEFI(((*(yR125 *)y_deref(F.p2415))).f_kind) == v873)))))) && (!(((((Y_DEFI(((*(yR125 *)y_deref(F.p2415))).f_kind) == v876)) && yr2395_Resolved(Y_DEFP(F.v5573))) && yr2361_AltOf(F.p2415, yr2447_Real(Y_DEFP(F.v5573))))))) && (!((((Y_DEFI(((*(yR125 *)y_deref(F.p2415))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5573)))).f_kind) == v894))))))) {
yr1186_FailN(F.p2416, Y_DEFI(((*(yR125 *)y_deref(F.p2415))).f_name), y_str(" is declared twice in this scope", 32));
}
((*(yR125 *)y_deref(F.p2415))).f_depth = Y_DEFI(v1273);
((*(yR125 *)y_deref(F.p2415))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5575))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5575))] = F.p2415;
((*(yR125 *)y_deref(F.p2415))).f_stack = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms = F.p2415;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2421_Path(rt_int a_p2422, rt_int a_p2423) {
struct yf2424 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2422 = a_p2422;
F.p2423 = a_p2423;
F.v5583 = Y_UNDEF_I;
F.v5583 = y_range(y_sub(Y_DEFI(v1279), F.p2422), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2422 == INT64_C(0))) {
{ rt_int rv5586 = F.p2423;
y_use = F.yu; return rv5586; }
}
yr1026_SB();
if ((Y_DEFI(F.v5583) == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
} else {
yr1037_SA(y_str("F.up->", 6));
while ((Y_DEFI(F.v5583) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
F.v5583 = y_range(y_sub(Y_DEFI(F.v5583), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1044_ST(F.p2423);
{ rt_int rv5594 = yr1056_SE();
y_use = F.yu; return rv5594; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2428_FramePtr(rt_int a_p2429) {
struct yf2430 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2429 = a_p2429;
F.v5598 = Y_UNDEF_I;
F.v5598 = y_range(y_sub(Y_DEFI(v1279), F.p2429), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v5598) == INT64_C(0))) {
{ rt_int rv5602 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5602; }
}
yr1026_SB();
yr1037_SA(y_str("F.up", 4));
while ((Y_DEFI(F.v5598) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
F.v5598 = y_range(y_sub(Y_DEFI(F.v5598), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5608 = yr1056_SE();
y_use = F.yu; return rv5608; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2434_DeclStorage(rt_int a_p2435, rt_int a_p2436) {
struct yf2437 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2435 = a_p2435;
F.p2436 = a_p2436;
F.v5613 = Y_UNDEF_I;
yr1026_SB();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
}
yr1044_ST(F.p2435);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p2436);
yr1037_SA(y_str(";", 1));
F.v5613 = yr1056_SE();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1110_Put(&v984, Y_DEFI(F.v5613));
} else {
yr1110_Put(&v998, Y_DEFI(F.v5613));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2441_SymPath(void * a_p2442) {
struct yf2443 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2442 = a_p2442;
F.v5622 = Y_UNDEF_I;
F.v5622 = yr2421_Path(Y_DEFI(((*(yR125 *)y_deref(F.p2442))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p2442))).f_cname));
if (Y_DEFI(((*(yR125 *)y_deref(F.p2442))).f_byref)) {
yr1026_SB();
yr1037_SA(y_str("(*", 2));
yr1044_ST(Y_DEFI(F.v5622));
yr1037_SA(y_str(")", 1));
{ rt_int rv5625 = yr1056_SE();
y_use = F.yu; return rv5625; }
}
{ rt_int rv5626 = Y_DEFI(F.v5622);
y_use = F.yu; return rv5626; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2447_Real(void * a_p2448) {
struct yf2449 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2448 = a_p2448;
F.v5630 = Y_UNDEF_P;
F.v5630 = F.p2448;
while ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5630)))).f_kind) == v894)) {
Y_TICK();
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5630)))).f_target) == ((void *)0))) {
yr1186_FailN(Y_DEFI(v1000), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5630)))).f_name), y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5630 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5630)))).f_target);
}
{ void * rv5632 = Y_DEFP(F.v5630);
y_use = F.yu; return rv5632; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2453_NewRep(rt_int a_p2454, rt_int a_p2455) {
struct yf2456 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2454 = a_p2454;
F.p2455 = a_p2455;
F.v5637 = Y_UNDEF_P;
({ F.v5637 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5637)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5637))) = ((yR110){ .f_kind = F.p2454, .f_tid = F.p2455, .f_tname = F.p2455, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
((*(yR110 *)y_deref(Y_DEFP(F.v5637)))).f_serial = yr1195_NewSerial();
{ void * rv5665 = Y_DEFP(F.v5637);
y_use = F.yu; return rv5665; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2460_CopyRep(void * a_p2461) {
struct yf2462 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2461 = a_p2461;
F.v5669 = Y_UNDEF_P;
({ F.v5669 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5669)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5669))) = (*(yR110 *)y_deref(F.p2461));
((*(yR110 *)y_deref(Y_DEFP(F.v5669)))).f_serial = yr1195_NewSerial();
((*(yR110 *)y_deref(Y_DEFP(F.v5669)))).f_sig = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v5669)))).f_bits = INT64_C(0);
{ void * rv5672 = Y_DEFP(F.v5669);
y_use = F.yu; return rv5672; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2466_IsDiscrete(void * a_p2467) {
struct yf2468 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2467 = a_p2467;
{ rt_int rv5675 = (((((Y_DEFI(((*(yR110 *)y_deref(F.p2467))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2467))).f_kind) == v813))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2467))).f_kind) == v816))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2467))).f_kind) == v819)));
y_use = F.yu; return rv5675; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2472_IsNumeric(void * a_p2473) {
struct yf2474 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2473 = a_p2473;
{ rt_int rv5678 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2473))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2473))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2473))).f_kind) == v810)));
y_use = F.yu; return rv5678; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2478_IsArrayLike(void * a_p2479) {
struct yf2480 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2479 = a_p2479;
{ rt_int rv5681 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2479))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2479))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2479))).f_kind) == v846)));
y_use = F.yu; return rv5681; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2484_IsString(void * a_p2485) {
struct yf2486 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2485 = a_p2485;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2485))).f_kind) == v846)) {
{ rt_int rv5685 = 1;
y_use = F.yu; return rv5685; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2485))).f_kind) == v822)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2485))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5687 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2485))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5687; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2485))).f_kind) == v843)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2485))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5689 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2485))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5689; }
}
{ rt_int rv5691 = 0;
y_use = F.yu; return rv5691; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2490_Deep(void * a_p2491) {
struct yf2492 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2491 = a_p2491;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2491))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2491))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2491))).f_kind) == v846)))) {
{ rt_int rv5695 = 1;
y_use = F.yu; return rv5695; }
}
{ rt_int rv5696 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2491))).f_kind) == v825)) && Y_DEFI(((*(yR110 *)y_deref(F.p2491))).f_deep));
y_use = F.yu; return rv5696; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2496_Holds(void * a_p2497, rt_int a_p2498) {
struct yf2499 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2497 = a_p2497;
F.p2498 = a_p2498;
F.v5701 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2497))).f_kind) == v822)) {
{ rt_int rv5702 = (((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2497))).f_elem)))).f_kind) == F.p2498)) || yr2496_Holds(Y_DEFP(((*(yR110 *)y_deref(F.p2497))).f_elem), F.p2498));
y_use = F.yu; return rv5702; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2497))).f_kind) == v825)) {
F.v5701 = Y_DEFP(((*(yR110 *)y_deref(F.p2497))).f_fields);
while ((!(Y_DEFP(F.v5701) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5701)))).f_rep)))).f_kind) == F.p2498)) || yr2496_Holds(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5701)))).f_rep), F.p2498))) {
{ rt_int rv5704 = 1;
y_use = F.yu; return rv5704; }
}
F.v5701 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5701)))).f_next);
}
}
{ rt_int rv5706 = 0;
y_use = F.yu; return rv5706; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2503_HoldsSignal(void * a_p2504) {
struct yf2505 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2504 = a_p2504;
{ rt_int rv5709 = yr2496_Holds(F.p2504, v837);
y_use = F.yu; return rv5709; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2509_NonAssignable(void * a_p2510) {
struct yf2511 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2510 = a_p2510;
F.v5713 = Y_UNDEF_I;
F.v5713 = Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_kind);
if (((((Y_DEFI(F.v5713) == v837)) || ((Y_DEFI(F.v5713) == v831))) || ((Y_DEFI(F.v5713) == v840)))) {
{ rt_int rv5715 = 1;
y_use = F.yu; return rv5715; }
}
{ rt_int rv5716 = ((yr2496_Holds(F.p2510, v837) || yr2496_Holds(F.p2510, v831)) || yr2496_Holds(F.p2510, v840));
y_use = F.yu; return rv5716; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2515_CType(void * a_p2516) {
struct yf2517 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2516 = a_p2516;
F.v5720 = Y_UNDEF_I;
F.v5720 = Y_DEFI(((*(yR110 *)y_deref(F.p2516))).f_kind);
if (((((Y_DEFI(F.v5720) == v804)) || ((Y_DEFI(F.v5720) == v813))) || ((Y_DEFI(F.v5720) == v816)))) {
{ rt_int rv5722 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5722; }
}
if ((Y_DEFI(F.v5720) == v819)) {
{ rt_int rv5724 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5724; }
}
if ((Y_DEFI(F.v5720) == v810)) {
{ rt_int rv5726 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5726; }
}
if ((Y_DEFI(F.v5720) == v807)) {
{ rt_int rv5728 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5728; }
}
if (((((Y_DEFI(F.v5720) == v822)) || ((Y_DEFI(F.v5720) == v843))) || ((Y_DEFI(F.v5720) == v846)))) {
{ rt_int rv5730 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5730; }
}
if ((Y_DEFI(F.v5720) == v825)) {
{ rt_int rv5731 = Y_DEFI(((*(yR110 *)y_deref(F.p2516))).f_cname);
y_use = F.yu; return rv5731; }
}
if ((((Y_DEFI(F.v5720) == v828)) || ((Y_DEFI(F.v5720) == v849)))) {
{ rt_int rv5733 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5733; }
}
if ((Y_DEFI(F.v5720) == v831)) {
{ rt_int rv5735 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5735; }
}
if ((Y_DEFI(F.v5720) == v834)) {
{ rt_int rv5737 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5737; }
}
if ((Y_DEFI(F.v5720) == v837)) {
{ rt_int rv5739 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5739; }
}
if ((Y_DEFI(F.v5720) == v840)) {
{ rt_int rv5741 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5741; }
}
if ((Y_DEFI(F.v5720) == v855)) {
{ rt_int rv5743 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5743; }
}
{ rt_int rv5745 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5745; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2521_DescOf(void * a_p2522) {
struct yf2523 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2522 = a_p2522;
F.v5749 = Y_UNDEF_I;
F.v5749 = Y_DEFI(((*(yR110 *)y_deref(F.p2522))).f_kind);
if (((((Y_DEFI(F.v5749) == v804)) || ((Y_DEFI(F.v5749) == v813))) || ((Y_DEFI(F.v5749) == v816)))) {
{ rt_int rv5751 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5751; }
}
if ((((Y_DEFI(F.v5749) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2522))).f_nlits) >= INT64_C(256))))) {
{ rt_int rv5754 = yr1061_T(y_str("&y_d_byte256", 12));
y_use = F.yu; return rv5754; }
}
if ((Y_DEFI(F.v5749) == v819)) {
{ rt_int rv5756 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5756; }
}
if ((Y_DEFI(F.v5749) == v810)) {
{ rt_int rv5758 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5758; }
}
if ((Y_DEFI(F.v5749) == v807)) {
{ rt_int rv5760 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5760; }
}
if ((((Y_DEFI(F.v5749) == v828)) || ((Y_DEFI(F.v5749) == v849)))) {
{ rt_int rv5762 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5762; }
}
if ((Y_DEFI(F.v5749) == v834)) {
{ rt_int rv5764 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5764; }
}
if ((((Y_DEFI(F.v5749) == v822)) || ((Y_DEFI(F.v5749) == v825)))) {
yr1026_SB();
yr1037_SA(y_str("&", 1));
yr1044_ST(yr2421_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2522))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2522))).f_dname)));
{ rt_int rv5766 = yr1056_SE();
y_use = F.yu; return rv5766; }
}
if ((Y_DEFI(F.v5749) == v846)) {
{ rt_int rv5768 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5768; }
}
if ((Y_DEFI(F.v5749) == v837)) {
{ rt_int rv5770 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5770; }
}
if ((Y_DEFI(F.v5749) == v840)) {
{ rt_int rv5772 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5772; }
}
{ rt_int rv5774 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5774; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2527_NewDesc(void * a_p2528) {
struct yf2529 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2528 = a_p2528;
((*(yR110 *)y_deref(F.p2528))).f_dname = yr1200_Fresh(y_str("yd_", 3));
((*(yR110 *)y_deref(F.p2528))).f_dlevel = Y_DEFI(v1279);
yr2434_DeclStorage(yr1061_T(y_str("ydesc", 5)), Y_DEFI(((*(yR110 *)y_deref(F.p2528))).f_dname));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2533_SameType(void * a_p2534, void * a_p2535) {
struct yf2536 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2534 = a_p2534;
F.p2535 = a_p2535;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2534))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_tid))) {
{ rt_int rv5783 = 1;
y_use = F.yu; return rv5783; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2534))).f_kind) == v846)) && yr2484_IsString(F.p2535))) {
{ rt_int rv5785 = 1;
y_use = F.yu; return rv5785; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_kind) == v846)) && yr2484_IsString(F.p2534))) {
{ rt_int rv5787 = 1;
y_use = F.yu; return rv5787; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2534))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_kind) == v828)))) {
{ rt_int rv5789 = 1;
y_use = F.yu; return rv5789; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2534))).f_kind) == v828)))) {
{ rt_int rv5791 = 1;
y_use = F.yu; return rv5791; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2534))).f_kind) == v858)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_kind) == v858)))) {
{ rt_int rv5793 = 1;
y_use = F.yu; return rv5793; }
}
{ rt_int rv5795 = 0;
y_use = F.yu; return rv5795; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2540_TypeClash(rt_int a_p2541, void * a_p2542, void * a_p2543) {
struct yf2544 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2541 = a_p2541;
F.p2542 = a_p2542;
F.p2543 = a_p2543;
F.v5801 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("type conflict: ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2542))).f_tname));
yr1037_SA(y_str(" expected, ", 11));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_tname));
yr1037_SA(y_str(" found", 6));
F.v5801 = yr1056_SE();
yr1157_Fail(F.p2541, Y_DEFI(F.v5801));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2548_CheckType(rt_int a_p2549, void * a_p2550, void * a_p2551) {
struct yf2552 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2549 = a_p2549;
F.p2550 = a_p2550;
F.p2551 = a_p2551;
if ((!yr2533_SameType(F.p2550, F.p2551))) {
yr2540_TypeClash(F.p2549, F.p2550, F.p2551);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2556_CheckRepresented(void * a_p2557, rt_int a_p2558) {
struct yf2559 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2557 = a_p2557;
F.p2558 = a_p2558;
if (Y_DEFI(((*(yR110 *)y_deref(F.p2557))).f_abstract)) {
yr1186_FailN(F.p2558, Y_DEFI(((*(yR110 *)y_deref(F.p2557))).f_tname), y_str(" is a type, not a representation (VI.A.1)", 41));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2563_SigText(void * a_p2564) {
struct yf2565 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2564 = a_p2564;
F.v5816 = Y_UNDEF_I;
F.v5816 = Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_kind);
F.v5818 = Y_UNDEF_P;
F.v5820 = Y_UNDEF_P;
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_tid));
if (((yr2466_IsDiscrete(F.p2564) || ((Y_DEFI(F.v5816) == v810))) || ((Y_DEFI(F.v5816) == v807)))) {
yr1037_SA(y_str("[", 1));
if (Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_hasm)) {
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_mlo));
yr1037_SA(y_str("..", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_mhi));
} else {
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_lo));
yr1037_SA(y_str("..", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_hi));
}
yr1037_SA(y_str("]", 1));
if ((Y_DEFI(F.v5816) == v810)) {
yr1037_SA(y_str("P", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_prec));
}
if ((Y_DEFI(F.v5816) == v807)) {
yr1037_SA(y_str("S", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_fsn));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_fsd));
}
} else if ((Y_DEFI(F.v5816) == v822)) {
yr1037_SA(y_str("(", 1));
F.v5818 = Y_DEFP(((*(yR110 *)y_deref(F.p2564))).f_idx);
while ((!(Y_DEFP(F.v5818) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2569_RepSig(Y_DEFP(F.v5818)));
yr1037_SA(y_str(",", 1));
F.v5818 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5818)))).f_link);
}
yr1037_SA(y_str("OF ", 3));
yr1044_ST(yr2569_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2564))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5816) == v843)) {
yr1037_SA(y_str("(", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_nidx));
yr1037_SA(y_str("D ", 2));
yr1044_ST(yr2569_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2564))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5816) == v825)) {
yr1037_SA(y_str("{", 1));
F.v5820 = Y_DEFP(((*(yR110 *)y_deref(F.p2564))).f_fields);
while ((!(Y_DEFP(F.v5820) == ((void *)0)))) {
Y_TICK();
if (Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5820)))).f_isconst)) {
yr1037_SA(y_str("C ", 2));
} else {
yr1037_SA(y_str("V ", 2));
}
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5820)))).f_name));
yr1037_SA(y_str(":", 1));
yr1044_ST(yr2569_RepSig(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5820)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v5820 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5820)))).f_next);
}
yr1037_SA(y_str("}", 1));
} else if ((((Y_DEFI(F.v5816) == v834)) || ((Y_DEFI(F.v5816) == v831)))) {
yr1037_SA(y_str("(", 1));
yr1044_ST(yr2569_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2564))).f_elem)));
yr1037_SA(y_str(")", 1));
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_packed)) {
yr1037_SA(y_str(" PACKED ", 8));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_pbits));
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_align) == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2564))).f_align));
}
{ rt_int rv5846 = yr1056_SE();
y_use = F.yu; return rv5846; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2569_RepSig(void * a_p2570) {
struct yf2571 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2570 = a_p2570;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_sig) == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2570))).f_sig = yr1075_Name(yr2563_SigText(F.p2570));
}
{ rt_int rv5850 = Y_DEFI(((*(yR110 *)y_deref(F.p2570))).f_sig);
y_use = F.yu; return rv5850; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2575_Identical(void * a_p2576, void * a_p2577) {
struct yf2578 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2576 = a_p2576;
F.p2577 = a_p2577;
if ((F.p2576 == F.p2577)) {
{ rt_int rv5855 = 1;
y_use = F.yu; return rv5855; }
}
if ((!yr2533_SameType(F.p2576, F.p2577))) {
{ rt_int rv5857 = 0;
y_use = F.yu; return rv5857; }
}
{ rt_int rv5858 = (yr2569_RepSig(F.p2576) == yr2569_RepSig(F.p2577));
y_use = F.yu; return rv5858; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2582_IsLiteralNode(void * a_p2583) {
struct yf2584 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2583 = a_p2583;
if ((((((Y_DEFI(((*(yR105 *)y_deref(F.p2583))).f_kind) == v759)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2583))).f_kind) == v765))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2583))).f_kind) == v762))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2583))).f_kind) == v768)))) {
{ rt_int rv5861 = (Y_DEFP(((*(yR105 *)y_deref(F.p2583))).f_d) == ((void *)0));
y_use = F.yu; return rv5861; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2583))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2583))).f_kind) == v801)))) {
{ rt_int rv5862 = yr2582_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2583))).f_a));
y_use = F.yu; return rv5862; }
}
{ rt_int rv5864 = 0;
y_use = F.yu; return rv5864; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2588_StoreBounds(void * a_p2589, yarr a_p2591) {
struct yf2592 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2589 = a_p2589;
F.p2591 = a_p2591;
F.v5869 = Y_UNDEF_I;
F.v5871 = Y_UNDEF_I;
F.v5869 = yr1200_Fresh(y_str("lo", 2));
F.v5871 = yr1200_Fresh(y_str("hi", 2));
yr2434_DeclStorage(yr1061_T(F.p2591), Y_DEFI(F.v5869));
yr2434_DeclStorage(yr1061_T(F.p2591), Y_DEFI(F.v5871));
yr1132_Emit(yr3442_Join(yr2421_Path(Y_DEFI(v1279), Y_DEFI(F.v5869)), yr1061_T(y_str(" = ", 3)), yr3442_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2589))).f_lo), yr1061_T(y_str(";", 1)), INT64_C(0))));
yr1132_Emit(yr3442_Join(yr2421_Path(Y_DEFI(v1279), Y_DEFI(F.v5871)), yr1061_T(y_str(" = ", 3)), yr3442_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2589))).f_hi), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR110 *)y_deref(F.p2589))).f_lo = Y_DEFI(F.v5869);
((*(yR110 *)y_deref(F.p2589))).f_hi = Y_DEFI(F.v5871);
((*(yR110 *)y_deref(F.p2589))).f_dname = Y_DEFI(F.v5869);
((*(yR110 *)y_deref(F.p2589))).f_dlevel = Y_DEFI(v1279);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2596_LoText(void * a_p2597) {
struct yf2598 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2597 = a_p2597;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_lo) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_kind) == v825))))) {
{ rt_int rv5884 = yr2421_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_lo));
y_use = F.yu; return rv5884; }
}
{ rt_int rv5885 = Y_DEFI(((*(yR110 *)y_deref(F.p2597))).f_lo);
y_use = F.yu; return rv5885; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2602_HiText(void * a_p2603) {
struct yf2604 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2603 = a_p2603;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_hi) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_kind) == v825))))) {
{ rt_int rv5890 = yr2421_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_hi));
y_use = F.yu; return rv5890; }
}
{ rt_int rv5891 = Y_DEFI(((*(yR110 *)y_deref(F.p2603))).f_hi);
y_use = F.yu; return rv5891; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2608_AdoptLiteral(void * a_p2609, void * a_p2610, void * a_p2611) {
struct yf2612 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2609 = a_p2609;
F.p2610 = a_p2610;
F.p2611 = a_p2611;
F.v5897 = Y_UNDEF_P;
if ((((!yr2582_IsLiteralNode(F.p2609)) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2610))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2611))).f_kind))))) || (!yr2472_IsNumeric(F.p2611)))) {
{ void * rv5898 = F.p2610;
y_use = F.yu; return rv5898; }
}
if (yr2616_HasQualifier(F.p2609)) {
{ void * rv5899 = F.p2610;
y_use = F.yu; return rv5899; }
}
F.v5897 = yr2460_CopyRep(F.p2610);
((*(yR110 *)y_deref(Y_DEFP(F.v5897)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(F.p2611))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.v5897)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(F.p2611))).f_tname);
{ void * rv5900 = Y_DEFP(F.v5897);
y_use = F.yu; return rv5900; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2616_HasQualifier(void * a_p2617) {
struct yf2618 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2617 = a_p2617;
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2617))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2617))).f_kind) == v801)))) {
{ rt_int rv5903 = yr2616_HasQualifier(Y_DEFP(((*(yR105 *)y_deref(F.p2617))).f_a));
y_use = F.yu; return rv5903; }
}
{ rt_int rv5904 = (!(Y_DEFP(((*(yR105 *)y_deref(F.p2617))).f_d) == ((void *)0)));
y_use = F.yu; return rv5904; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2622_Gcd(rt_int a_p2623, rt_int a_p2624) {
struct yf2625 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2623 = a_p2623;
F.p2624 = a_p2624;
F.v5909 = Y_UNDEF_I;
F.v5911 = Y_UNDEF_I;
F.v5913 = Y_UNDEF_I;
F.v5909 = F.p2623;
F.v5911 = F.p2624;
if ((Y_DEFI(F.v5909) < INT64_C(0))) {
F.v5909 = y_range(y_neg(Y_DEFI(F.v5909)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v5911) < INT64_C(0))) {
F.v5911 = y_range(y_neg(Y_DEFI(F.v5911)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(Y_DEFI(F.v5911) == INT64_C(0)))) {
Y_TICK();
F.v5913 = y_range(y_mod(Y_DEFI(F.v5909), Y_DEFI(F.v5911)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5909 = Y_DEFI(F.v5911);
F.v5911 = Y_DEFI(F.v5913);
}
if ((Y_DEFI(F.v5909) == INT64_C(0))) {
{ rt_int rv5922 = INT64_C(1);
y_use = F.yu; return rv5922; }
}
{ rt_int rv5923 = Y_DEFI(F.v5909);
y_use = F.yu; return rv5923; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2629_MulChk(rt_int a_p2630, rt_int a_p2631, rt_int a_p2632) {
struct yf2633 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2630 = a_p2630;
F.p2631 = a_p2631;
F.p2632 = a_p2632;
F.v5929 = Y_UNDEF_I;
F.v5931 = Y_UNDEF_I;
F.v5929 = F.p2630;
F.v5931 = F.p2631;
if ((Y_DEFI(F.v5929) < INT64_C(0))) {
F.v5929 = y_range(y_neg(Y_DEFI(F.v5929)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v5931) < INT64_C(0))) {
F.v5931 = y_range(y_neg(Y_DEFI(F.v5931)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(Y_DEFI(F.v5929) == INT64_C(0)))) && ((Y_DEFI(F.v5931) > (y_div(v906, Y_DEFI(F.v5929))))))) {
yr1178_FailS(F.p2632, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5940 = y_range(y_mul(F.p2630, F.p2631), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5940; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2637_PowChk(rt_int a_p2638, rt_int a_p2639, rt_int a_p2640) {
struct yf2641 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2638 = a_p2638;
F.p2639 = a_p2639;
F.p2640 = a_p2640;
F.v5946 = Y_UNDEF_I;
F.v5946 = INT64_C(1);
F.lo5951 = INT64_C(1);
F.hi5952 = F.p2639;
{ rt_int hi5956 = F.hi5952;
for (rt_int i5955 = F.lo5951; i5955 <= hi5956; i5955++) { F.c_5954 = i5955; Y_TICK();
F.v5946 = yr2629_MulChk(Y_DEFI(F.v5946), F.p2638, F.p2640);
if (i5955 == hi5956) break;
}}
{ rt_int rv5957 = Y_DEFI(F.v5946);
y_use = F.yu; return rv5957; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2645_ScaleRatio(void * a_p2646, void * a_p2647, rt_int * a_p2648, rt_int * a_p2649, rt_int * a_p2650) {
struct yf2651 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.p2648_o = a_p2648;
F.p2649_o = a_p2649;
F.p2650_o = a_p2650;
F.v5965 = Y_UNDEF_I;
F.v5967 = Y_UNDEF_I;
F.v5969 = Y_UNDEF_I;
F.v5971 = Y_UNDEF_I;
F.v5973 = Y_UNDEF_I;
F.v5975 = Y_UNDEF_I;
F.p2648 = yr1061_T(y_str("1", 1));
F.p2649 = yr1061_T(y_str("1", 1));
F.p2650 = 1;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_fsd) == INT64_C(0))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_fsd) == INT64_C(0))))) {
(*F.p2648_o) = F.p2648;
(*F.p2649_o) = F.p2649;
(*F.p2650_o) = F.p2650;
y_use = F.yu; return;
}
F.v5965 = yr2622_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_fsn));
F.v5967 = yr2622_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_fsd));
F.v5969 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_fsn), Y_DEFI(F.v5965)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5971 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_fsd), Y_DEFI(F.v5967)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5973 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2646))).f_fsd), Y_DEFI(F.v5967)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5975 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2647))).f_fsn), Y_DEFI(F.v5965)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2650 = (((((Y_DEFI(F.v5969) == INT64_C(1))) && ((Y_DEFI(F.v5971) == INT64_C(1)))) && ((Y_DEFI(F.v5973) == INT64_C(1)))) && ((Y_DEFI(F.v5975) == INT64_C(1))));
F.p2648 = yr2655_Factor(Y_DEFI(F.v5969), Y_DEFI(F.v5971));
F.p2649 = yr2655_Factor(Y_DEFI(F.v5973), Y_DEFI(F.v5975));
(*F.p2648_o) = F.p2648;
(*F.p2649_o) = F.p2649;
(*F.p2650_o) = F.p2650;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2655_Factor(rt_int a_p2656, rt_int a_p2657) {
struct yf2658 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2656 = a_p2656;
F.p2657 = a_p2657;
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(F.p2656);
yr1037_SA(y_str(")", 1));
if ((!(F.p2657 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
yr1050_SI(F.p2657);
yr1037_SA(y_str(")", 1));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv5998 = yr1056_SE();
y_use = F.yu; return rv5998; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2662_SetScale(void * a_p2663, rt_int a_p2664, rt_int a_p2665) {
struct yf2666 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2663 = a_p2663;
F.p2664 = a_p2664;
F.p2665 = a_p2665;
F.v6004 = Y_UNDEF_I;
F.v6004 = yr2622_Gcd(F.p2664, F.p2665);
((*(yR110 *)y_deref(F.p2663))).f_fsn = y_range(y_div(F.p2664, Y_DEFI(F.v6004)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2663))).f_fsd = y_range(y_div(F.p2665, Y_DEFI(F.v6004)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2663))).f_fsd) < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2663))).f_fsn = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2663))).f_fsn)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2663))).f_fsd = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2663))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2670_Qualify(void * a_p2671, void * a_p2672) {
struct yf2673 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2671 = a_p2671;
F.p2672 = a_p2672;
F.v6014 = Y_UNDEF_I;
F.v6016 = Y_UNDEF_I;
F.v6018 = Y_UNDEF_I;
F.v6020 = Y_UNDEF_I;
F.v6022 = Y_UNDEF_P;
F.v6024 = Y_UNDEF_P;
F.v6026 = Y_UNDEF_I;
F.v6028 = Y_UNDEF_I;
F.v6030 = Y_UNDEF_I;
F.v6032 = Y_UNDEF_I;
F.v6034 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2671))).f_kind) == v807)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_c) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2950_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_c), &F.v6026, &F.v6032, &F.v6034);
if (((!Y_DEFI(F.v6026)) || ((Y_DEFI(F.v6032) <= INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR110 *)y_deref(F.p2671))).f_fsn = Y_DEFI(F.v6032);
((*(yR110 *)y_deref(F.p2671))).f_fsd = Y_DEFI(F.v6034);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6032));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(F.v6034));
((*(yR110 *)y_deref(F.p2671))).f_scale = yr1056_SE();
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_a), F.p2671, &F.v6014, &F.v6022);
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_b), F.p2671, &F.v6016, &F.v6024);
F.v6022 = yr2608_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_a), Y_DEFP(F.v6022), F.p2671);
F.v6024 = yr2608_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_b), Y_DEFP(F.v6024), F.p2671);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2671))).f_kind) == v807)) {
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), F.p2671, Y_DEFP(F.v6022));
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), F.p2671, Y_DEFP(F.v6024));
yr2645_ScaleRatio(Y_DEFP(F.v6022), F.p2671, &F.v6018, &F.v6020, &F.v6028);
((*(yR110 *)y_deref(F.p2671))).f_lo = yr3442_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6014), yr3442_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6018), yr3442_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6020), yr1061_T(y_str(", 1)", 4)))));
yr2645_ScaleRatio(Y_DEFP(F.v6024), F.p2671, &F.v6018, &F.v6020, &F.v6028);
((*(yR110 *)y_deref(F.p2671))).f_hi = yr3442_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v6016), yr3442_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6018), yr3442_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v6020), yr1061_T(y_str(", 0)", 4)))));
((*(yR110 *)y_deref(F.p2671))).f_dname = INT64_C(0);
yr2588_StoreBounds(F.p2671, y_str("yfix", 4));
((*(yR110 *)y_deref(F.p2671))).f_abstract = 0;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2671))).f_kind) == v810)) {
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), F.p2671, Y_DEFP(F.v6022));
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), F.p2671, Y_DEFP(F.v6024));
((*(yR110 *)y_deref(F.p2671))).f_lo = Y_DEFI(F.v6014);
((*(yR110 *)y_deref(F.p2671))).f_hi = Y_DEFI(F.v6016);
((*(yR110 *)y_deref(F.p2671))).f_dname = INT64_C(0);
if ((!((yr2582_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_a)) && yr2582_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_b)))))) {
yr2588_StoreBounds(F.p2671, y_str("double", 6));
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_d), &F.v6026, &F.v6030);
if ((!Y_DEFI(F.v6026))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("PRECISION is a manifest constant", 32));
}
if ((((Y_DEFI(F.v6030) < INT64_C(1))) || ((Y_DEFI(F.v6030) > INT64_C(15))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6030));
((*(yR110 *)y_deref(F.p2671))).f_prec = yr1056_SE();
((*(yR110 *)y_deref(F.p2671))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2466_IsDiscrete(F.p2671))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_d) == ((void *)0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), F.p2671, Y_DEFP(F.v6022));
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2672))).f_line), F.p2671, Y_DEFP(F.v6024));
((*(yR110 *)y_deref(F.p2671))).f_lo = Y_DEFI(F.v6014);
((*(yR110 *)y_deref(F.p2671))).f_hi = Y_DEFI(F.v6016);
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_a), &F.v6026, &((*(yR110 *)y_deref(F.p2671))).f_mlo);
((*(yR110 *)y_deref(F.p2671))).f_hasm = Y_DEFI(F.v6026);
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2672))).f_b), &F.v6026, &((*(yR110 *)y_deref(F.p2671))).f_mhi);
((*(yR110 *)y_deref(F.p2671))).f_hasm = (Y_DEFI(((*(yR110 *)y_deref(F.p2671))).f_hasm) && Y_DEFI(F.v6026));
((*(yR110 *)y_deref(F.p2671))).f_abstract = 0;
((*(yR110 *)y_deref(F.p2671))).f_dname = INT64_C(0);
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2671))).f_hasm))) {
yr2588_StoreBounds(F.p2671, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2677_DefineLits(void * a_p2678) {
struct yf2679 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2678 = a_p2678;
F.v6066 = Y_UNDEF_P;
F.v6066 = Y_DEFP(((*(yR110 *)y_deref(F.p2678))).f_lits);
F.v6068 = Y_UNDEF_P;
F.v6070 = Y_UNDEF_I;
F.v6070 = INT64_C(0);
while ((!(Y_DEFP(F.v6066) == ((void *)0)))) {
Y_TICK();
if ((!(yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_name)) == ((void *)0)))) {
F.v6068 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_name));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6068)))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6068)))).f_depth) == Y_DEFI(v1273))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_name), y_str(" is declared twice in this scope", 32));
}
}
F.v6068 = yr2312_NewSym(v873, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v6068)))).f_rep = F.p2678;
((*(yR125 *)y_deref(Y_DEFP(F.v6068)))).f_mval = Y_DEFI(F.v6070);
((*(yR125 *)y_deref(Y_DEFP(F.v6068)))).f_hasmv = 1;
yr2414_Define(Y_DEFP(F.v6068), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_line));
F.v6070 = y_range(y_add(Y_DEFI(F.v6070), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6066 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6066)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2683_SetRange(void * a_p2684, rt_int a_p2685, rt_int a_p2686) {
struct yf2687 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2684 = a_p2684;
F.p2685 = a_p2685;
F.p2686 = a_p2686;
yr1026_SB();
yr1050_SI(F.p2685);
((*(yR110 *)y_deref(F.p2684))).f_lo = yr1056_SE();
yr1026_SB();
yr1050_SI(F.p2686);
((*(yR110 *)y_deref(F.p2684))).f_hi = yr1056_SE();
((*(yR110 *)y_deref(F.p2684))).f_mlo = F.p2685;
((*(yR110 *)y_deref(F.p2684))).f_mhi = F.p2686;
((*(yR110 *)y_deref(F.p2684))).f_hasm = 1;
((*(yR110 *)y_deref(F.p2684))).f_dname = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2691_NewTid(rt_int a_p2692) {
struct yf2693 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2692 = a_p2692;
F.v6085 = Y_UNDEF_I;
F.v6085 = yr1195_NewSerial();
yr1026_SB();
if ((!(F.p2692 == INT64_C(0)))) {
yr1044_ST(F.p2692);
} else {
yr1037_SA(y_str("anonymous", 9));
}
yr1037_SA(y_str("#", 1));
yr1050_SI(Y_DEFI(F.v6085));
{ rt_int rv6089 = yr1056_SE();
y_use = F.yu; return rv6089; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2697_MakeRep(void * a_p2698, rt_int a_p2699, rt_int a_p2700) {
struct yf2701 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2698 = a_p2698;
F.p2699 = a_p2699;
F.p2700 = a_p2700;
F.v6095 = Y_UNDEF_P;
F.v6095 = yr2712_MakeRep1(F.p2698, F.p2699, F.p2700);
F.v6097 = Y_UNDEF_P;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2698))).f_x) == ((void *)0)))) {
F.v6095 = yr2812_ApplyStorage(Y_DEFP(F.v6095), Y_DEFP(((*(yR105 *)y_deref(F.p2698))).f_x));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2698))).f_text) == INT64_C(0)))) {
F.v6097 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2698))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2698))).f_line)));
if (((!yr2705_Conforms(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6097)))).f_rep), Y_DEFP(F.v6095))) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2698))).f_kind) == v672)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6095)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6097)))).f_rep)))).f_tid)))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2698))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6097)))).f_rep)))).f_tname), y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv6100 = Y_DEFP(F.v6095);
y_use = F.yu; return rv6100; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2705_Conforms(void * a_p2706, void * a_p2707) {
struct yf2708 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2706 = a_p2706;
F.p2707 = a_p2707;
F.v6105 = Y_UNDEF_P;
F.v6107 = Y_UNDEF_P;
F.v6109 = Y_UNDEF_P;
F.v6111 = Y_UNDEF_P;
F.v6113 = Y_UNDEF_P;
F.v6115 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_kind)))) {
{ rt_int rv6117 = 0;
y_use = F.yu; return rv6117; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v825)) {
F.v6105 = Y_DEFP(((*(yR110 *)y_deref(F.p2706))).f_fields);
F.v6107 = Y_DEFP(((*(yR110 *)y_deref(F.p2707))).f_fields);
while ((((!(Y_DEFP(F.v6105) == ((void *)0)))) && ((!(Y_DEFP(F.v6107) == ((void *)0)))))) {
Y_TICK();
if (((((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6105)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6107)))).f_name)))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6105)))).f_isconst) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6107)))).f_isconst))))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6105)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6107)))).f_variant)))))) {
{ rt_int rv6119 = 0;
y_use = F.yu; return rv6119; }
}
if ((!yr2533_SameType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6105)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6107)))).f_rep)))) {
{ rt_int rv6121 = 0;
y_use = F.yu; return rv6121; }
}
F.v6105 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6105)))).f_next);
F.v6107 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6107)))).f_next);
}
{ rt_int rv6122 = (((Y_DEFP(F.v6105) == ((void *)0))) && ((Y_DEFP(F.v6107) == ((void *)0))));
y_use = F.yu; return rv6122; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v822)) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_nidx)))) {
{ rt_int rv6124 = 0;
y_use = F.yu; return rv6124; }
}
F.v6109 = Y_DEFP(((*(yR110 *)y_deref(F.p2706))).f_idx);
F.v6111 = Y_DEFP(((*(yR110 *)y_deref(F.p2707))).f_idx);
while ((!(Y_DEFP(F.v6109) == ((void *)0)))) {
Y_TICK();
if ((!yr2575_Identical(Y_DEFP(F.v6109), Y_DEFP(F.v6111)))) {
{ rt_int rv6126 = 0;
y_use = F.yu; return rv6126; }
}
F.v6109 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6109)))).f_link);
F.v6111 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6111)))).f_link);
}
{ rt_int rv6127 = yr2533_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2706))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2707))).f_elem));
y_use = F.yu; return rv6127; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v816)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v819)))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_nlits) == Y_DEFI(((*(yR110 *)y_deref(F.p2707))).f_nlits)))) {
{ rt_int rv6129 = 0;
y_use = F.yu; return rv6129; }
}
F.v6113 = Y_DEFP(((*(yR110 *)y_deref(F.p2706))).f_lits);
F.v6115 = Y_DEFP(((*(yR110 *)y_deref(F.p2707))).f_lits);
while ((((!(Y_DEFP(F.v6113) == ((void *)0)))) && ((!(Y_DEFP(F.v6115) == ((void *)0)))))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6113)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6115)))).f_name)))) || (!yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6113)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6115)))).f_text))))) {
{ rt_int rv6131 = 0;
y_use = F.yu; return rv6131; }
}
F.v6113 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6113)))).f_next);
F.v6115 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6115)))).f_next);
}
{ rt_int rv6133 = 1;
y_use = F.yu; return rv6133; }
}
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v834)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v831))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2706))).f_kind) == v828)))) {
if ((((Y_DEFP(((*(yR110 *)y_deref(F.p2706))).f_elem) == ((void *)0))) || ((Y_DEFP(((*(yR110 *)y_deref(F.p2707))).f_elem) == ((void *)0))))) {
{ rt_int rv6135 = 1;
y_use = F.yu; return rv6135; }
}
{ rt_int rv6136 = yr2533_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2706))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2707))).f_elem));
y_use = F.yu; return rv6136; }
}
{ rt_int rv6138 = 1;
y_use = F.yu; return rv6138; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2712_MakeRep1(void * a_p2713, rt_int a_p2714, rt_int a_p2715) {
struct yf2716 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2713 = a_p2713;
F.p2714 = a_p2714;
F.p2715 = a_p2715;
F.v6144 = Y_UNDEF_P;
F.v6146 = Y_UNDEF_P;
F.v6148 = Y_UNDEF_P;
F.v6150 = Y_UNDEF_P;
F.v6152 = Y_UNDEF_P;
F.v6154 = Y_UNDEF_I;
F.v6154 = Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_kind);
F.v6156 = Y_UNDEF_P;
F.v6158 = Y_UNDEF_I;
F.v6160 = Y_UNDEF_I;
F.v6158 = INT64_C(0);
F.v6160 = F.p2714;
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_text) == INT64_C(0)))) {
F.v6152 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_text), y_str(" is not a type", 14));
}
F.v6158 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_rep)))).f_tid);
F.v6160 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_rep)))).f_tname);
}
if ((Y_DEFI(F.v6154) == v672)) {
F.v6152 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_name), y_str(" is not a representation", 24));
}
F.v6144 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6152)))).f_rep);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a) == ((void *)0)))) {
F.v6144 = yr2460_CopyRep(Y_DEFP(F.v6144));
yr2670_Qualify(Y_DEFP(F.v6144), Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a));
}
{ void * rv6165 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6165; }
}
if ((Y_DEFI(F.v6158) == INT64_C(0))) {
F.v6158 = yr2691_NewTid(F.p2714);
if ((Y_DEFI(F.v6160) == INT64_C(0))) {
F.v6160 = Y_DEFI(F.v6158);
}
}
if ((Y_DEFI(F.v6154) == v675)) {
F.v6144 = yr2453_NewRep(v816, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_ordered = (Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_flag) == INT64_C(1));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nlits = yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a));
yr2683_SetRange(Y_DEFP(F.v6144), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2677_DefineLits(Y_DEFP(F.v6144));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_b) == ((void *)0)))) {
yr2670_Qualify(Y_DEFP(F.v6144), Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_b));
}
{ void * rv6172 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6172; }
}
if ((Y_DEFI(F.v6154) == v678)) {
F.v6144 = yr2453_NewRep(v819, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nlits = yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nlits) > INT64_C(256))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line), y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2683_SetRange(Y_DEFP(F.v6144), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_b) == ((void *)0)))) {
yr2670_Qualify(Y_DEFP(F.v6144), Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_b));
}
{ void * rv6179 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6179; }
}
if ((Y_DEFI(F.v6154) == v681)) {
F.v6144 = yr2453_NewRep(v822, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
F.v6156 = Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a);
F.v6150 = ((void *)0);
while ((!(Y_DEFP(F.v6156) == ((void *)0)))) {
Y_TICK();
F.v6148 = yr2460_CopyRep(yr2697_MakeRep(Y_DEFP(F.v6156), INT64_C(0), 0));
if ((!yr2466_IsDiscrete(Y_DEFP(F.v6148)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6156)))).f_line), y_str("an index is an integer or scalar representation", 47));
}
yr2556_CheckRepresented(Y_DEFP(F.v6148), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6156)))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v6148)))).f_link = ((void *)0);
if ((Y_DEFP(F.v6150) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_idx = Y_DEFP(F.v6148);
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6150)))).f_link = Y_DEFP(F.v6148);
}
F.v6150 = Y_DEFP(F.v6148);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nidx = y_range(y_add(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nidx), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6156 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6156)))).f_next);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_nidx) > INT64_C(8))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line), y_str("this implementation takes arrays of up to 8 dimensions", 54));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_b), INT64_C(0), F.p2715);
if ((!F.p2715)) {
yr2556_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line));
yr2732_BuildArrayDesc(Y_DEFP(F.v6144));
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_abstract = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem)))).f_abstract);
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_abstract))) {
yr2732_BuildArrayDesc(Y_DEFP(F.v6144));
}
}
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_deep = 1;
{ void * rv6189 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6189; }
}
if ((Y_DEFI(F.v6154) == v684)) {
F.v6144 = yr2453_NewRep(v825, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
yr2762_MakeRecord(Y_DEFP(F.v6144), F.p2713, F.p2715);
{ void * rv6190 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6190; }
}
if (((((Y_DEFI(F.v6154) == v690)) || ((Y_DEFI(F.v6154) == v687))) || ((Y_DEFI(F.v6154) == v693)))) {
if ((Y_DEFI(F.v6154) == v690)) {
F.v6144 = yr2453_NewRep(v828, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a)))).f_kind) == v672)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a)))).f_a) == ((void *)0)))) && ((yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a)))).f_name)) == ((void *)0))))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_forward = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a)))).f_name);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_fwdscope = Y_DEFI(v1273);
F.v6156 = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v6156)))).f_rep = Y_DEFP(F.v6144);
((*(yR105 *)y_deref(Y_DEFP(F.v6156)))).f_next = Y_DEFP(v1364);
v1364 = Y_DEFP(F.v6156);
{ void * rv6191 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6191; }
}
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a), INT64_C(0), 0);
{ void * rv6194 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6194; }
}
if ((Y_DEFI(F.v6154) == v687)) {
F.v6144 = yr2453_NewRep(v831, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a), INT64_C(0), F.p2715);
{ void * rv6196 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6196; }
}
F.v6144 = yr2453_NewRep(v834, Y_DEFI(F.v6158));
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_tname = Y_DEFI(F.v6160);
((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2713))).f_a), INT64_C(0), 0);
if ((!yr2466_IsDiscrete(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line), y_str("a set is of an integer or scalar representation", 47));
}
yr2556_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6144)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line));
{ void * rv6200 = Y_DEFP(F.v6144);
y_use = F.yu; return rv6200; }
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2713))).f_line), y_str("this representation is not translated", 37));
{ void * rv6202 = ((void *)0);
y_use = F.yu; return rv6202; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2720_ResolvePending(rt_int a_p2721, void * a_p2722) {
struct yf2723 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2721 = a_p2721;
F.p2722 = a_p2722;
F.v6207 = Y_UNDEF_P;
F.v6207 = Y_DEFP(v1364);
F.v6209 = Y_UNDEF_P;
F.v6209 = ((void *)0);
while ((!(Y_DEFP(F.v6207) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6207)))).f_rep)))).f_forward) == F.p2721)) {
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6207)))).f_rep)))).f_elem = F.p2722;
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6207)))).f_rep)))).f_forward = INT64_C(0);
if ((Y_DEFP(F.v6209) == ((void *)0))) {
v1364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6207)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v6209)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6207)))).f_next);
}
} else {
F.v6209 = Y_DEFP(F.v6207);
}
F.v6207 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6207)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2727_CheckPending(void) {
struct yf2728 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v6213 = Y_UNDEF_P;
F.v6213 = Y_DEFP(v1364);
while ((!(Y_DEFP(F.v6213) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6213)))).f_rep)))).f_fwdscope) >= Y_DEFI(v1273))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6213)))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6213)))).f_rep)))).f_forward), y_str(" is named by a pointer but not declared", 39));
}
F.v6213 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6213)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2732_BuildArrayDesc(void * a_p2733) {
struct yf2734 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2733 = a_p2733;
F.v6218 = Y_UNDEF_P;
F.v6220 = Y_UNDEF_I;
F.v6222 = Y_UNDEF_I;
yr2527_NewDesc(F.p2733);
yr1026_SB();
yr1037_SA(y_str("{ rt_int lo[", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2733))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v6218 = Y_DEFP(((*(yR110 *)y_deref(F.p2733))).f_idx);
F.v6222 = 1;
while ((!(Y_DEFP(F.v6218) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6222))) {
yr1037_SA(y_str(", ", 2));
}
F.v6222 = 0;
yr1044_ST(yr2596_LoText(Y_DEFP(F.v6218)));
F.v6218 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6218)))).f_link);
}
yr1037_SA(y_str("}, hi[", 6));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2733))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v6218 = Y_DEFP(((*(yR110 *)y_deref(F.p2733))).f_idx);
F.v6222 = 1;
while ((!(Y_DEFP(F.v6218) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v6222))) {
yr1037_SA(y_str(", ", 2));
}
F.v6222 = 0;
yr1044_ST(yr2602_HiText(Y_DEFP(F.v6218)));
F.v6218 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6218)))).f_link);
}
yr1037_SA(y_str("}; y_desc_array(", 16));
yr1044_ST(yr2521_DescOf(F.p2733));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2733))).f_nidx));
yr1037_SA(y_str(", lo, hi, ", 10));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2733))).f_elem)));
yr1037_SA(y_str("); }", 4));
F.v6220 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6220));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2738_AddField(void * a_p2739, void * * a_p2740, rt_int a_p2741, void * a_p2742, rt_int a_p2743, rt_int a_p2744, void * a_p2745, rt_int a_p2746) {
struct yf2747 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2739 = a_p2739;
F.p2740 = a_p2740;
F.p2741 = a_p2741;
F.p2742 = a_p2742;
F.p2743 = a_p2743;
F.p2744 = a_p2744;
F.p2745 = a_p2745;
F.p2746 = a_p2746;
F.v6247 = Y_UNDEF_P;
F.v6247 = Y_DEFP(((*(yR110 *)y_deref(F.p2739))).f_fields);
while ((!(Y_DEFP(F.v6247) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6247)))).f_name) == F.p2741)) {
yr1186_FailN(F.p2746, F.p2741, y_str(" is a component twice", 21));
}
F.v6247 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6247)))).f_next);
}
({ F.v6247 = y_new(sizeof(yR115)); y_initu(&yd_116, y_deref(F.v6247)); });
(*(yR115 *)y_deref(Y_DEFP(F.v6247))) = ((yR115){ .f_name = F.p2741, .f_rep = F.p2742, .f_isconst = F.p2743, .f_variant = F.p2744, .f_labels = F.p2745, .f_next = ((void *)0), .f_at = INT64_C(-1) });
if ((Y_DEFP((*F.p2740)) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2739))).f_fields = Y_DEFP(F.v6247);
} else {
((*(yR115 *)y_deref(Y_DEFP((*F.p2740))))).f_next = Y_DEFP(F.v6247);
}
(*F.p2740) = Y_DEFP(F.v6247);
if (yr2490_Deep(F.p2742)) {
((*(yR110 *)y_deref(F.p2739))).f_deep = 1;
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2742))).f_abstract)) {
((*(yR110 *)y_deref(F.p2739))).f_abstract = 1;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2751_AddFields(void * a_p2752, void * * a_p2753, void * a_p2754, rt_int a_p2755, void * a_p2756, rt_int a_p2757) {
struct yf2758 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2752 = a_p2752;
F.p2753 = a_p2753;
F.p2754 = a_p2754;
F.p2755 = a_p2755;
F.p2756 = a_p2756;
F.p2757 = a_p2757;
F.v6260 = Y_UNDEF_P;
F.v6260 = F.p2754;
F.v6262 = Y_UNDEF_P;
F.v6262 = F.p2754;
F.v6264 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v6260) == ((void *)0)))) {
Y_TICK();
F.v6264 = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6260)))).f_b), INT64_C(0), F.p2757);
if ((!F.p2757)) {
yr2556_CheckRepresented(Y_DEFP(F.v6264), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6260)))).f_line));
}
F.v6262 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6260)))).f_a);
while ((!(Y_DEFP(F.v6262) == ((void *)0)))) {
Y_TICK();
yr2738_AddField(F.p2752, &(*F.p2753), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6262)))).f_name), Y_DEFP(F.v6264), (Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6260)))).f_ival) == v270), F.p2755, F.p2756, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6262)))).f_line));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6262)))).f_a) == ((void *)0)))) {
((*(yR115 *)y_deref(Y_DEFP((*F.p2753))))).f_at = yr2819_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6262)))).f_a));
}
F.v6262 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6262)))).f_next);
}
F.v6260 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6260)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2762_MakeRecord(void * a_p2763, void * a_p2764, rt_int a_p2765) {
struct yf2766 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2763 = a_p2763;
F.p2764 = a_p2764;
F.p2765 = a_p2765;
F.v6271 = Y_UNDEF_P;
F.v6271 = ((void *)0);
F.v6273 = Y_UNDEF_P;
F.v6275 = Y_UNDEF_P;
F.v6277 = Y_UNDEF_P;
F.v6279 = Y_UNDEF_I;
F.v6279 = INT64_C(0);
F.v6282 = Y_UNDEF_P;
F.v6284 = Y_UNDEF_I;
F.v6286 = Y_UNDEF_I;
F.v6286 = INT64_C(0);
yr2751_AddFields(F.p2763, &F.v6271, Y_DEFP(((*(yR105 *)y_deref(F.p2764))).f_a), INT64_C(0), ((void *)0), F.p2765);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2764))).f_b) == ((void *)0)))) {
F.v6273 = Y_DEFP(((*(yR105 *)y_deref(F.p2764))).f_b);
F.v6277 = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_b), INT64_C(0), 0);
if ((!yr2466_IsDiscrete(Y_DEFP(F.v6277)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_line), y_str("the case-selection component is integer or scalar", 49));
}
yr2738_AddField(F.p2763, &F.v6271, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_name), Y_DEFP(F.v6277), 1, INT64_C(0), ((void *)0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_line));
((*(yR110 *)y_deref(F.p2763))).f_selector = Y_DEFP(F.v6271);
F.v6275 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6273)))).f_a);
while ((!(Y_DEFP(F.v6275) == ((void *)0)))) {
Y_TICK();
F.v6279 = y_range(y_add(Y_DEFI(F.v6279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2751_AddFields(F.p2763, &F.v6271, Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6275)))).f_b), Y_DEFI(F.v6279), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6275)))).f_a), F.p2765);
F.v6275 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6275)))).f_next);
}
}
if ((F.p2765 && Y_DEFI(((*(yR110 *)y_deref(F.p2763))).f_abstract))) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2763))).f_abstract = 0;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p2764))).f_line);
F.v6279 = yr2797_RecordBits(F.p2763, 0, 1);
F.v6279 = INT64_C(0);
((*(yR110 *)y_deref(F.p2763))).f_cname = yr1200_Fresh(y_str("yR", 2));
yr1026_SB();
yr1037_SA(y_str("typedef struct ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2763))).f_cname));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2763))).f_cname));
yr1037_SA(y_str(";", 1));
F.v6284 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v6284));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2763))).f_cname));
yr1037_SA(y_str(" {", 2));
F.v6282 = Y_DEFP(((*(yR110 *)y_deref(F.p2763))).f_fields);
while ((!(Y_DEFP(F.v6282) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_rep)));
yr1037_SA(y_str(" f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_name));
yr1037_SA(y_str(";", 1));
F.v6286 = y_range(y_add(Y_DEFI(F.v6286), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6282 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_next);
}
if ((Y_DEFI(F.v6286) == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
}
yr1037_SA(y_str(" };", 3));
F.v6284 = yr1056_SE();
yr1110_Put(&v980, Y_DEFI(F.v6284));
yr2527_NewDesc(F.p2763);
yr1026_SB();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
F.v6282 = Y_DEFP(((*(yR110 *)y_deref(F.p2763))).f_fields);
while ((!(Y_DEFP(F.v6282) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2763))).f_cname));
yr1037_SA(y_str(", f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_name));
yr1037_SA(y_str("), ", 3));
F.v6282 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_next);
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1050_SI(y_range(y_add(Y_DEFI(F.v6286), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" * sizeof *f);", 14));
F.v6279 = INT64_C(0);
F.v6282 = Y_DEFP(((*(yR110 *)y_deref(F.p2763))).f_fields);
while ((!(Y_DEFP(F.v6282) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
yr1050_SI(Y_DEFI(F.v6279));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v6279 = y_range(y_add(Y_DEFI(F.v6279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6282 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6282)))).f_next);
}
yr1037_SA(y_str(" y_desc_record(", 15));
yr1044_ST(yr2521_DescOf(F.p2763));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2763))).f_cname));
yr1037_SA(y_str("), ", 3));
yr1050_SI(Y_DEFI(F.v6286));
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v6284 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6284));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2770_FindField(void * a_p2771, rt_int a_p2772) {
struct yf2773 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2771 = a_p2771;
F.p2772 = a_p2772;
F.v6336 = Y_UNDEF_P;
F.v6336 = Y_DEFP(((*(yR110 *)y_deref(F.p2771))).f_fields);
while ((!(Y_DEFP(F.v6336) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6336)))).f_name) == F.p2772)) {
{ void * rv6337 = Y_DEFP(F.v6336);
y_use = F.yu; return rv6337; }
}
F.v6336 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6336)))).f_next);
}
{ void * rv6338 = ((void *)0);
y_use = F.yu; return rv6338; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2777_BitsFor(rt_int a_p2778) {
struct yf2779 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2778 = a_p2778;
F.v6342 = Y_UNDEF_I;
F.v6342 = INT64_C(1);
F.v6345 = Y_UNDEF_I;
F.v6345 = INT64_C(2);
while ((((Y_DEFI(F.v6345) <= F.p2778)) && ((Y_DEFI(F.v6342) < INT64_C(63))))) {
Y_TICK();
F.v6342 = y_range(y_add(Y_DEFI(F.v6342), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6345 = y_range(y_mul(Y_DEFI(F.v6345), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv6352 = Y_DEFI(F.v6342);
y_use = F.yu; return rv6352; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2783_RoundUp(rt_int a_p2784, rt_int a_p2785) {
struct yf2786 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2784 = a_p2784;
F.p2785 = a_p2785;
if ((F.p2785 <= INT64_C(1))) {
{ rt_int rv6357 = F.p2784;
y_use = F.yu; return rv6357; }
}
{ rt_int rv6363 = y_range(y_mul((y_div((y_sub((y_add(F.p2784, F.p2785)), INT64_C(1))), F.p2785)), F.p2785), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6363; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2790_Bits(void * a_p2791, rt_int a_p2792) {
struct yf2793 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2791 = a_p2791;
F.p2792 = a_p2792;
F.v6368 = Y_UNDEF_I;
F.v6368 = Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_kind);
F.v6370 = Y_UNDEF_I;
F.v6370 = (F.p2792 || Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_packed));
F.v6372 = Y_UNDEF_I;
F.v6374 = Y_UNDEF_I;
F.v6376 = Y_UNDEF_I;
F.v6378 = Y_UNDEF_I;
F.v6380 = Y_UNDEF_P;
if (((!Y_DEFI(F.v6370)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_bits) == INT64_C(0)))))) {
{ rt_int rv6382 = Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_bits);
y_use = F.yu; return rv6382; }
}
F.v6372 = INT64_C(64);
if (yr2466_IsDiscrete(F.p2791)) {
if (Y_DEFI(F.v6370)) {
if (((((Y_DEFI(F.v6368) == v816)) || ((Y_DEFI(F.v6368) == v819))) || ((Y_DEFI(F.v6368) == v813)))) {
F.v6372 = yr2777_BitsFor(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
} else if (Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_hasm)) {
F.v6376 = Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_mlo);
F.v6378 = Y_DEFI(((*(yR110 *)y_deref(F.p2791))).f_mhi);
if ((Y_DEFI(F.v6376) >= INT64_C(0))) {
F.v6372 = yr2777_BitsFor(Y_DEFI(F.v6378));
} else if (((y_sub(INT64_C(-1), Y_DEFI(F.v6376))) > Y_DEFI(F.v6378))) {
F.v6372 = y_range(y_add(INT64_C(1), yr2777_BitsFor(y_range(y_sub(INT64_C(-1), Y_DEFI(F.v6376)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6372 = y_range(y_add(INT64_C(1), yr2777_BitsFor(Y_DEFI(F.v6378))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
} else if ((Y_DEFI(F.v6368) == v807)) {
F.v6372 = INT64_C(128);
} else if ((((Y_DEFI(F.v6368) == v828)) || ((Y_DEFI(F.v6368) == v849)))) {
if (Y_DEFI(F.v6370)) {
F.v6372 = INT64_C(24);
}
} else if ((Y_DEFI(F.v6368) == v834)) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_elem)))).f_hasm)) {
F.v6374 = y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_elem)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_elem)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6374) > (y_div(v906, INT64_C(2))))) {
F.v6372 = INT64_C(-1);
} else if (Y_DEFI(F.v6370)) {
F.v6372 = Y_DEFI(F.v6374);
} else {
F.v6372 = yr2783_RoundUp(Y_DEFI(F.v6374), INT64_C(64));
}
} else {
F.v6372 = INT64_C(-1);
}
} else if ((Y_DEFI(F.v6368) == v822)) {
F.v6374 = INT64_C(1);
F.v6380 = Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_idx);
while ((!(Y_DEFP(F.v6380) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6380)))).f_hasm))) {
{ rt_int rv6407 = INT64_C(-1);
y_use = F.yu; return rv6407; }
}
F.v6374 = y_range(y_mul(Y_DEFI(F.v6374), (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6380)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6380)))).f_mlo))), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6374) > INT64_C(100000000000))) {
{ rt_int rv6414 = INT64_C(-1);
y_use = F.yu; return rv6414; }
}
F.v6380 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6380)))).f_link);
}
F.v6372 = yr2790_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_elem), Y_DEFI(F.v6370));
if ((Y_DEFI(F.v6372) < INT64_C(0))) {
{ rt_int rv6417 = INT64_C(-1);
y_use = F.yu; return rv6417; }
}
if (((!Y_DEFI(F.v6370)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_elem)))).f_packed)))) {
F.v6372 = yr2783_RoundUp(Y_DEFI(F.v6372), INT64_C(64));
}
F.v6372 = yr2783_RoundUp(Y_DEFI(F.v6372), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2791))).f_elem)))).f_align));
F.v6372 = y_range(y_mul(Y_DEFI(F.v6372), Y_DEFI(F.v6374)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6368) == v825)) {
F.v6372 = yr2797_RecordBits(F.p2791, Y_DEFI(F.v6370), 0);
} else if (((((Y_DEFI(F.v6368) == v843)) || ((Y_DEFI(F.v6368) == v846))) || ((Y_DEFI(F.v6368) == v855)))) {
F.v6372 = INT64_C(-1);
}
if ((((Y_DEFI(F.v6372) > INT64_C(0))) && (!Y_DEFI(F.v6370)))) {
F.v6372 = yr2783_RoundUp(Y_DEFI(F.v6372), INT64_C(64));
}
if ((!Y_DEFI(F.v6370))) {
((*(yR110 *)y_deref(F.p2791))).f_bits = Y_DEFI(F.v6372);
}
{ rt_int rv6424 = Y_DEFI(F.v6372);
y_use = F.yu; return rv6424; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2797_RecordBits(void * a_p2798, rt_int a_p2799, rt_int a_p2800) {
struct yf2801 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2798 = a_p2798;
F.p2799 = a_p2799;
F.p2800 = a_p2800;
F.v6430 = Y_UNDEF_P;
F.v6432 = Y_UNDEF_I;
F.v6432 = INT64_C(0);
F.v6435 = Y_UNDEF_I;
F.v6435 = INT64_C(0);
F.v6438 = Y_UNDEF_I;
F.v6438 = INT64_C(0);
F.v6441 = Y_UNDEF_I;
F.v6441 = INT64_C(0);
F.v6444 = Y_UNDEF_I;
F.v6444 = INT64_C(0);
F.v6447 = Y_UNDEF_I;
F.v6447 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6457, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6457, &F.v6459);
y_initu(&F.yd_6457, &F.v6461);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6470, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_6470, &F.v6472);
F.v6430 = Y_DEFP(((*(yR110 *)y_deref(F.p2798))).f_fields);
while ((!(Y_DEFP(F.v6430) == ((void *)0)))) {
Y_TICK();
F.v6438 = yr2790_Bits(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_rep), F.p2799);
if ((Y_DEFI(F.v6438) < INT64_C(0))) {
{ rt_int rv6475 = INT64_C(-1);
y_use = F.yu; return rv6475; }
}
if (((!F.p2799) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_rep)))).f_packed)))) {
F.v6438 = yr2783_RoundUp(Y_DEFI(F.v6438), INT64_C(64));
}
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_variant) == INT64_C(0)))) {
if ((Y_DEFI(F.v6444) == INT64_C(0))) {
F.v6444 = Y_DEFI(F.v6432);
}
if (yr2805_FirstOfVariant(F.p2798, Y_DEFP(F.v6430))) {
F.v6432 = Y_DEFI(F.v6444);
}
}
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_at) >= INT64_C(0))) {
F.v6441 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_at);
} else if ((F.p2799 || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_rep)))).f_packed))) {
F.v6441 = yr2783_RoundUp(Y_DEFI(F.v6432), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_rep)))).f_align));
} else {
F.v6441 = yr2783_RoundUp(Y_DEFI(F.v6432), INT64_C(64));
}
if ((F.p2800 && ((Y_DEFI(F.v6447) < INT64_C(512))))) {
F.v6447 = y_range(y_add(Y_DEFI(F.v6447), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6459).p)[y_ix1(F.v6459, Y_DEFI(F.v6447))] = Y_DEFI(F.v6441);
((rt_int *)(F.v6461).p)[y_ix1(F.v6461, Y_DEFI(F.v6447))] = y_range(y_add(Y_DEFI(F.v6441), Y_DEFI(F.v6438)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(F.v6472).p)[y_ix1(F.v6472, Y_DEFI(F.v6447))] = Y_DEFP(F.v6430);
}
F.v6432 = y_range(y_add(Y_DEFI(F.v6441), Y_DEFI(F.v6438)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6432) > Y_DEFI(F.v6435))) {
F.v6435 = Y_DEFI(F.v6432);
}
F.v6430 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6430)))).f_next);
}
if (F.p2800) {
F.lo6489 = INT64_C(1);
F.hi6490 = Y_DEFI(F.v6447);
{ rt_int hi6494 = F.hi6490;
for (rt_int i6493 = F.lo6489; i6493 <= hi6494; i6493++) { F.c_6492 = i6493; Y_TICK();
F.lo6498 = y_add(F.c_6492, INT64_C(1));
F.hi6499 = Y_DEFI(F.v6447);
{ rt_int hi6503 = F.hi6499;
for (rt_int i6502 = F.lo6498; i6502 <= hi6503; i6502++) { F.c_6501 = i6502; Y_TICK();
if ((((((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6492)])))).f_at) >= INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6501)])))).f_at) >= INT64_C(0))))) && ((Y_DEFI(((rt_int *)(F.v6459).p)[y_ix1(F.v6459, F.c_6492)]) < Y_DEFI(((rt_int *)(F.v6461).p)[y_ix1(F.v6461, F.c_6501)])))) && ((Y_DEFI(((rt_int *)(F.v6459).p)[y_ix1(F.v6459, F.c_6501)]) < Y_DEFI(((rt_int *)(F.v6461).p)[y_ix1(F.v6461, F.c_6492)])))) && (((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6492)])))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6501)])))).f_variant) == INT64_C(0)))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6492)])))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6501)])))).f_variant))))))) {
yr1157_Fail(Y_DEFI(v1000), yr3442_Join(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6501)])))).f_name), yr3442_Join(yr1061_T(y_str(" overlaps ", 10)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6472).p)[y_ix1(F.v6472, F.c_6492)])))).f_name), INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
}
if (i6502 == hi6503) break;
}}
if (i6493 == hi6494) break;
}}
}
{ rt_int rv6511 = Y_DEFI(F.v6435);
y_use = F.yu; return rv6511; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2805_FirstOfVariant(void * a_p2806, void * a_p2807) {
struct yf2808 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2806 = a_p2806;
F.p2807 = a_p2807;
F.v6516 = Y_UNDEF_P;
F.v6516 = Y_DEFP(((*(yR110 *)y_deref(F.p2806))).f_fields);
while ((!(Y_DEFP(F.v6516) == F.p2807))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6516)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(F.p2807))).f_variant))) {
{ rt_int rv6518 = 0;
y_use = F.yu; return rv6518; }
}
F.v6516 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6516)))).f_next);
}
{ rt_int rv6520 = 1;
y_use = F.yu; return rv6520; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2812_ApplyStorage(void * a_p2813, void * a_p2814) {
struct yf2815 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2813 = a_p2813;
F.p2814 = a_p2814;
F.v6525 = Y_UNDEF_P;
F.v6525 = yr2460_CopyRep(F.p2813);
F.v6527 = Y_UNDEF_I;
F.v6529 = Y_UNDEF_I;
F.v6531 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2814))).f_flag) == INT64_C(1))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6525)))).f_packed = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2814))).f_a) == ((void *)0)))) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2814))).f_a), &F.v6527, &F.v6529);
if (((!Y_DEFI(F.v6527)) || ((Y_DEFI(F.v6529) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2814))).f_line), y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6525)))).f_pbits = Y_DEFI(F.v6529);
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2814))).f_b) == ((void *)0)))) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2814))).f_b), &F.v6527, &F.v6529);
if ((((!Y_DEFI(F.v6527)) || ((Y_DEFI(F.v6529) < INT64_C(1)))) || ((Y_DEFI(F.v6529) > INT64_C(64))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2814))).f_line), y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6525)))).f_align = Y_DEFI(F.v6529);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6525)))).f_pbits) > INT64_C(0))) {
F.v6531 = yr2790_Bits(Y_DEFP(F.v6525), 1);
if ((Y_DEFI(F.v6531) < INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2814))).f_line), y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
}
if ((Y_DEFI(F.v6531) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6525)))).f_pbits))) {
yr1026_SB();
yr1037_SA(y_str("this representation needs ", 26));
yr1050_SI(Y_DEFI(F.v6531));
yr1037_SA(y_str(" bits, more than PACKED ", 24));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6525)))).f_pbits));
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p2814))).f_line), yr1056_SE());
}
}
{ void * rv6546 = Y_DEFP(F.v6525);
y_use = F.yu; return rv6546; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2819_AtAddress(void * a_p2820) {
struct yf2821 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2820 = a_p2820;
F.v6550 = Y_UNDEF_I;
F.v6552 = Y_UNDEF_I;
yr2884_Manifest(F.p2820, &F.v6550, &F.v6552);
if (((!Y_DEFI(F.v6550)) || ((Y_DEFI(F.v6552) < INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2820))).f_line), y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
}
{ rt_int rv6555 = Y_DEFI(F.v6552);
y_use = F.yu; return rv6555; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2825_StoreAt(rt_int a_p2826, rt_int a_p2827) {
struct yf2828 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2826 = a_p2826;
F.p2827 = a_p2827;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(F.p2826);
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
yr1050_SI(F.p2827);
yr1037_SA(y_str("), sizeof(", 10));
yr1044_ST(F.p2826);
yr1037_SA(y_str(")))", 3));
{ rt_int rv6563 = yr1056_SE();
y_use = F.yu; return rv6563; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2832_ExtentCode(rt_int a_p2833, void * a_p2834) {
struct yf2835 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2833 = a_p2833;
F.p2834 = a_p2834;
F.v6568 = Y_UNDEF_I;
F.v6570 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2834))).f_kind) == v855)) {
{ rt_int rv6573 = yr3442_Join(yr1061_T(y_str("(", 1)), F.p2833, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6573; }
}
F.v6568 = yr2790_Bits(F.p2834, 0);
if ((Y_DEFI(F.v6568) >= INT64_C(0))) {
{ rt_int rv6580 = yr3224_Num(y_range(y_div((y_add(Y_DEFI(F.v6568), INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6580; }
}
if (yr2478_IsArrayLike(F.p2834)) {
F.v6570 = yr2790_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2834))).f_elem), Y_DEFI(((*(yR110 *)y_deref(F.p2834))).f_packed));
if ((Y_DEFI(F.v6570) >= INT64_C(0))) {
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2834))).f_packed))) {
F.v6570 = yr2783_RoundUp(Y_DEFI(F.v6570), INT64_C(64));
}
yr1026_SB();
yr1037_SA(y_str("((y_count(", 10));
yr1044_ST(F.p2833);
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2834))).f_nidx));
yr1037_SA(y_str(") * INT64_C(", 12));
yr1050_SI(Y_DEFI(F.v6570));
yr1037_SA(y_str(") + 63) / 64)", 13));
{ rt_int rv6587 = yr1056_SE();
y_use = F.yu; return rv6587; }
}
}
{ rt_int rv6590 = yr3442_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2833, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6590; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2839_SpaceArg(void * a_p2840, rt_int a_p2841, void * a_p2842) {
struct yf2843 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2840 = a_p2840;
F.p2841 = a_p2841;
F.p2842 = a_p2842;
F.v6596 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2842))).f_kind) == v855)) {
{ rt_int rv6597 = F.p2841;
y_use = F.yu; return rv6597; }
}
if ((yr2993_IsVariable(F.p2840) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2840))).f_kind) == v777)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2842))).f_kind) == v846))))))) {
{ rt_int rv6601 = yr3442_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), yr3067_RawCode(F.p2840, F.p2841), yr3442_Join(yr1061_T(y_str("), ", 3)), yr2832_ExtentCode(F.p2841, F.p2842), yr1061_T(y_str(" })", 3))));
y_use = F.yu; return rv6601; }
}
F.v6596 = yr1200_Fresh(y_str("sp", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2515_CType(F.p2842));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2841);
yr1037_SA(y_str("; void *", 8));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str("); memcpy(", 10));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str("c, &", 4));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str(", sizeof ", 9));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str("); (yspace){ ", 13));
yr1044_ST(Y_DEFI(F.v6596));
yr1037_SA(y_str("c, ", 3));
yr1044_ST(yr2832_ExtentCode(Y_DEFI(F.v6596), F.p2842));
yr1037_SA(y_str(" }; })", 6));
{ rt_int rv6614 = yr1056_SE();
y_use = F.yu; return rv6614; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2847_PackedComponent(void * a_p2848) {
struct yf2849 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2848 = a_p2848;
F.v6618 = Y_UNDEF_P;
F.v6618 = F.p2848;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_kind) == v801)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_kind) == v801))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_a)))).f_rep) == ((void *)0)))) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_a)))).f_rep)))).f_packed)) {
{ rt_int rv6620 = 1;
y_use = F.yu; return rv6620; }
}
}
}
F.v6618 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6618)))).f_a);
}
{ rt_int rv6622 = 0;
y_use = F.yu; return rv6622; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2853_CharOrd(void * a_p2854, rt_int a_p2855) {
struct yf2856 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2854 = a_p2854;
F.p2855 = a_p2855;
F.v6627 = Y_UNDEF_P;
F.v6629 = Y_UNDEF_I;
F.v6631 = Y_UNDEF_I;
F.v6633 = Y_UNDEF_I;
F.v6635 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2854))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_tid))) {
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2855)]) == INT64_C(1))) {
{ rt_int rv6638 = Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2855, INT64_C(1)))]);
y_use = F.yu; return rv6638; }
}
F.v6629 = INT64_C(0);
F.v6633 = INT64_C(1);
F.lo6644 = INT64_C(1);
F.hi6645 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v1513))]);
{ rt_int hi6649 = F.hi6645;
for (rt_int i6648 = F.lo6644; i6648 <= hi6649; i6648++) { F.c_6647 = i6648; Y_TICK();
if ((yr1103_TChar(Y_DEFI(v1513), y_range(F.c_6647, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6635 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v1513))]), (y_sub(Y_DEFI(F.v6633), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_6647, Y_DEFI(F.v6633)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v6635) == F.p2855)) {
if ((Y_DEFI(F.v6629) < INT64_C(32))) {
{ rt_int rv6656 = Y_DEFI(F.v6629);
y_use = F.yu; return rv6656; }
}
if ((Y_DEFI(F.v6629) == INT64_C(32))) {
{ rt_int rv6659 = INT64_C(32);
y_use = F.yu; return rv6659; }
}
if ((Y_DEFI(F.v6629) == INT64_C(33))) {
{ rt_int rv6662 = INT64_C(127);
y_use = F.yu; return rv6662; }
}
if ((Y_DEFI(F.v6629) == INT64_C(34))) {
{ rt_int rv6665 = INT64_C(39);
y_use = F.yu; return rv6665; }
}
{ rt_int rv6667 = INT64_C(34);
y_use = F.yu; return rv6667; }
}
F.v6629 = y_range(y_add(Y_DEFI(F.v6629), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6633 = y_range(y_add(F.c_6647, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i6648 == hi6649) break;
}}
{ rt_int rv6673 = INT64_C(-1);
y_use = F.yu; return rv6673; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2854))).f_kind) == v819))) {
{ rt_int rv6675 = INT64_C(-1);
y_use = F.yu; return rv6675; }
}
F.v6627 = Y_DEFP(((*(yR110 *)y_deref(F.p2854))).f_lits);
F.v6631 = INT64_C(0);
while ((!(Y_DEFP(F.v6627) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6627)))).f_text), F.p2855)) {
{ rt_int rv6677 = Y_DEFI(F.v6631);
y_use = F.yu; return rv6677; }
}
F.v6631 = y_range(y_add(Y_DEFI(F.v6631), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6627 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6627)))).f_next);
}
{ rt_int rv6681 = INT64_C(-1);
y_use = F.yu; return rv6681; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2860_AlphabetFor(void * a_p2861, void * a_p2862) {
struct yf2863 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2861 = a_p2861;
F.p2862 = a_p2862;
F.v6686 = Y_UNDEF_P;
F.v6688 = Y_UNDEF_P;
F.v6690 = Y_UNDEF_P;
F.v6690 = ((void *)0);
F.v6692 = Y_UNDEF_I;
F.v6692 = INT64_C(0);
F.v6695 = Y_UNDEF_I;
F.v6695 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2861))).f_d) == ((void *)0)))) {
F.v6686 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2861))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_line)));
if ((((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_kind) == v870))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_rep)))).f_kind) == v819))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2861))).f_d)))).f_name), y_str(" is not an alphabet", 19));
}
{ void * rv6698 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_rep);
y_use = F.yu; return rv6698; }
}
F.v6695 = INT64_C(1);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_kind) == v771)) || ((yr2853_CharOrd(Y_DEFP(v1346), Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_text)) >= INT64_C(0))))) {
F.v6692 = INT64_C(1);
F.v6690 = Y_DEFP(v1346);
}
F.v6688 = Y_DEFP(v1516);
while ((!(Y_DEFP(F.v6688) == ((void *)0)))) {
Y_TICK();
F.v6686 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6688)))).f_name));
if ((!(Y_DEFP(F.v6686) == ((void *)0)))) {
F.v6686 = yr2447_Real(Y_DEFP(F.v6686));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_kind) == v870)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6686)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6688)))).f_rep)))).f_tid))))) {
F.v6695 = y_range(y_add(Y_DEFI(F.v6695), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_kind) == v768)) && ((yr2853_CharOrd(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6688)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_text)) >= INT64_C(0))))) {
F.v6692 = y_range(y_add(Y_DEFI(F.v6692), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6690 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6688)))).f_rep);
}
}
}
F.v6688 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6688)))).f_next);
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_kind) == v771)) && ((Y_DEFI(F.v6695) > INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_line), y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((Y_DEFI(F.v6692) > INT64_C(1))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_line), yr3442_Join(yr1061_T(y_str("'", 1)), Y_DEFI(((*(yR105 *)y_deref(F.p2861))).f_text), yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((Y_DEFP(F.v6690) == ((void *)0))) {
{ void * rv6713 = Y_DEFP(v1346);
y_use = F.yu; return rv6713; }
}
{ void * rv6714 = Y_DEFP(F.v6690);
y_use = F.yu; return rv6714; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2867_CharValue(void * a_p2868, rt_int a_p2869, rt_int a_p2870) {
struct yf2871 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2868 = a_p2868;
F.p2869 = a_p2869;
F.p2870 = a_p2870;
F.v6720 = Y_UNDEF_I;
F.v6720 = yr2853_CharOrd(F.p2868, F.p2869);
F.v6722 = Y_UNDEF_I;
if ((Y_DEFI(F.v6720) < INT64_C(0))) {
yr1026_SB();
yr1037_SA(y_str("'", 1));
yr1044_ST(F.p2869);
yr1037_SA(y_str("' is not a character of ", 24));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2868))).f_tname));
F.v6722 = yr1056_SE();
yr1157_Fail(F.p2870, Y_DEFI(F.v6722));
}
{ rt_int rv6726 = Y_DEFI(F.v6720);
y_use = F.yu; return rv6726; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2875_StringCodes(void * a_p2876, rt_int a_p2877, rt_int * a_p2878, rt_int a_p2879) {
struct yf2880 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2876 = a_p2876;
F.p2877 = a_p2877;
F.p2878_o = a_p2878;
F.p2879 = a_p2879;
F.v6733 = Y_UNDEF_I;
F.v6735 = Y_UNDEF_I;
F.v6737 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_6746, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6746, &F.v6748);
F.v6750 = Y_UNDEF_B;
F.v6752 = Y_UNDEF_I;
F.p2878 = INT64_C(0);
F.v6733 = INT64_C(1);
while ((Y_DEFI(F.v6733) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2877)]))) {
Y_TICK();
F.v6750 = yr1103_TChar(F.p2877, Y_DEFI(F.v6733));
if ((Y_DEFB(F.v6750) == 39)) {
F.v6735 = y_range(y_add(Y_DEFI(F.v6733), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v6735) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2877)]))) && ((!(yr1103_TChar(F.p2877, Y_DEFI(F.v6735)) == 39))))) {
Y_TICK();
F.v6735 = y_range(y_add(Y_DEFI(F.v6735), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v6735) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2877)]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(F.p2879, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v6752 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2877)]), Y_DEFI(F.v6733)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v6735), Y_DEFI(F.v6733))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6737 = yr2867_CharValue(F.p2876, Y_DEFI(F.v6752), F.p2879);
F.v6733 = y_range(y_add(Y_DEFI(F.v6735), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6752 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2877)]), (y_sub(Y_DEFI(F.v6733), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v6737 = yr2867_CharValue(F.p2876, Y_DEFI(F.v6752), F.p2879);
F.v6733 = y_range(y_add(Y_DEFI(F.v6733), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.p2878) >= INT64_C(65536))) {
yr1178_FailS(F.p2879, y_str("this implementation takes string literals of up to 65536 characters", 67));
}
F.p2878 = y_range(y_add(Y_DEFI(F.p2878), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6748).p)[y_ix1(F.v6748, Y_DEFI(F.p2878))] = Y_DEFI(F.v6737);
}
yr1026_SB();
yr1031_SC(34);
F.lo6784 = INT64_C(1);
F.hi6785 = Y_DEFI(F.p2878);
{ rt_int hi6789 = F.hi6785;
for (rt_int i6788 = F.lo6784; i6788 <= hi6789; i6788++) { F.c_6787 = i6788; Y_TICK();
F.v6737 = Y_DEFI(((rt_int *)(F.v6748).p)[y_ix1(F.v6748, F.c_6787)]);
if ((((Y_DEFI(F.v6737) == INT64_C(34))) || ((Y_DEFI(F.v6737) == INT64_C(92))))) {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6737))]));
} else if (((((Y_DEFI(F.v6737) >= INT64_C(32))) && ((Y_DEFI(F.v6737) < INT64_C(127)))) && (((((!(Y_DEFI(F.v6737) == INT64_C(63)))) || ((F.c_6787 == INT64_C(1)))) || ((!(Y_DEFI(((rt_int *)(F.v6748).p)[y_ix1(F.v6748, y_sub(F.c_6787, INT64_C(1)))]) == INT64_C(63)))))))) {
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6737))]));
} else {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_div(Y_DEFI(F.v6737), INT64_C(64)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod((y_div(Y_DEFI(F.v6737), INT64_C(8))), INT64_C(8)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod(Y_DEFI(F.v6737), INT64_C(8)))))]));
}
if (i6788 == hi6789) break;
}}
yr1031_SC(34);
{ rt_int rv6816 = yr1056_SE();
(*F.p2878_o) = F.p2878;
y_use = F.yu; return rv6816; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2884_Manifest(void * a_p2885, rt_int * a_p2886, rt_int * a_p2887) {
struct yf2888 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2885 = a_p2885;
F.p2886_o = a_p2886;
F.p2887_o = a_p2887;
F.v6822 = Y_UNDEF_P;
F.v6824 = Y_UNDEF_I;
F.v6826 = Y_UNDEF_I;
F.v6828 = Y_UNDEF_I;
F.v6830 = Y_UNDEF_I;
F.v6832 = Y_UNDEF_I;
F.v6834 = Y_UNDEF_P;
F.p2886 = 0;
F.p2887 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v759)) {
F.p2886 = 1;
F.p2887 = Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_ival);
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v768)) {
F.v6834 = yr2860_AlphabetFor(F.p2885, ((void *)0));
F.p2887 = yr2853_CharOrd(Y_DEFP(F.v6834), Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_text));
F.p2886 = (Y_DEFI(F.p2887) >= INT64_C(0));
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_d) == ((void *)0)))) {
F.v6822 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_line)));
F.v6822 = yr2407_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_name), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6822)))).f_rep));
} else {
F.v6822 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_name));
}
if ((Y_DEFP(F.v6822) == ((void *)0))) {
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
F.v6822 = yr2447_Real(Y_DEFP(F.v6822));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6822)))).f_kind) == v873)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6822)))).f_kind) == v864)))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6822)))).f_hasmv))) {
F.p2886 = 1;
F.p2887 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6822)))).f_mval);
}
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v801)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_a), &F.p2886, &F.p2887);
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v795)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_a), &F.p2886, &F.p2887);
F.p2887 = y_range(y_neg(Y_DEFI(F.p2887)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v798)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_a), &F.v6828, &F.v6824);
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_b), &F.v6830, &F.v6826);
if ((!((Y_DEFI(F.v6828) && Y_DEFI(F.v6830))))) {
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
F.v6832 = Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_name);
F.p2886 = 1;
if ((Y_DEFI(F.v6832) == v573)) {
F.p2887 = y_range(y_add(Y_DEFI(F.v6824), Y_DEFI(F.v6826)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6832) == v576)) {
F.p2887 = y_range(y_sub(Y_DEFI(F.v6824), Y_DEFI(F.v6826)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6832) == v579)) {
F.p2887 = y_range(y_mul(Y_DEFI(F.v6824), Y_DEFI(F.v6826)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6832) == v276)) && ((!(Y_DEFI(F.v6826) == INT64_C(0)))))) {
F.p2887 = y_range(y_div(Y_DEFI(F.v6824), Y_DEFI(F.v6826)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6832) == v378)) && ((!(Y_DEFI(F.v6826) == INT64_C(0)))))) {
F.p2887 = y_range(y_mod(Y_DEFI(F.v6824), Y_DEFI(F.v6826)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6832) == v237)) {
F.p2887 = y_range(y_mul(Y_DEFI(F.v6824), Y_DEFI(F.v6826)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6832) == v399)) {
F.p2887 = y_range(y_sub((y_add(Y_DEFI(F.v6824), Y_DEFI(F.v6826))), (y_mul(Y_DEFI(F.v6824), Y_DEFI(F.v6826)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6832) == v489)) {
F.p2887 = y_range(y_mod((y_add(Y_DEFI(F.v6824), Y_DEFI(F.v6826))), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2886 = 0;
}
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v792)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2885))).f_a), &F.p2886, &F.p2887);
F.p2887 = y_range(y_sub(INT64_C(1), Y_DEFI(F.p2887)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2885))).f_kind) == v780)) {
yr2892_ManifestStd(F.p2885, &F.p2886, &F.p2887);
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
}
(*F.p2886_o) = F.p2886;
(*F.p2887_o) = F.p2887;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2892_ManifestStd(void * a_p2893, rt_int * a_p2894, rt_int * a_p2895) {
struct yf2896 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2893 = a_p2893;
F.p2894_o = a_p2894;
F.p2895_o = a_p2895;
F.v6864 = Y_UNDEF_P;
F.v6866 = Y_UNDEF_I;
F.v6868 = Y_UNDEF_I;
F.v6870 = Y_UNDEF_I;
F.v6872 = Y_UNDEF_I;
F.v6874 = Y_UNDEF_I;
F.v6876 = Y_UNDEF_P;
F.v6878 = Y_UNDEF_P;
F.p2894 = 0;
F.p2895 = INT64_C(0);
F.v6864 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2893))).f_name));
if ((Y_DEFP(F.v6864) == ((void *)0))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
F.v6864 = yr2447_Real(Y_DEFP(F.v6864));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6864)))).f_kind) == v891))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
F.v6866 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6864)))).f_mval);
if ((((((Y_DEFI(F.v6866) == v1372)) || ((Y_DEFI(F.v6866) == v1375))) || ((Y_DEFI(F.v6866) == v1378))) || ((Y_DEFI(F.v6866) == v1381)))) {
if ((!(yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2893))).f_a)) == INT64_C(1)))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2893))).f_a), ((void *)0), &F.v6874, &F.v6876);
if ((!yr2466_IsDiscrete(Y_DEFP(F.v6876)))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6866) == v1378)) || ((Y_DEFI(F.v6866) == v1381)))) {
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_elem) == ((void *)0)))) {
F.v6876 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_elem);
}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_hasm))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
F.p2894 = 1;
if ((Y_DEFI(F.v6866) == v1378)) {
F.p2895 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_mlo);
} else {
F.p2895 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_mhi);
}
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2893))).f_a), &F.v6870, &F.p2895);
if ((!Y_DEFI(F.v6870))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v6866) == v1372)) {
F.p2895 = y_range(y_add(Y_DEFI(F.p2895), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2895 = y_range(y_sub(Y_DEFI(F.p2895), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_elem) == ((void *)0)))) {
F.v6876 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_elem);
}
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_kind) == v804))) && ((((Y_DEFI(F.p2895) < INT64_C(0))) || ((Y_DEFI(F.p2895) >= Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_nlits))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2893))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2893))).f_name), y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2894 = 1;
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6866) == v1366)) || ((Y_DEFI(F.v6866) == v1369)))) {
if ((!(yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2893))).f_a)) == INT64_C(2)))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2893))).f_a)))).f_next), &F.v6872, &F.v6868);
if ((!Y_DEFI(F.v6872))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2893))).f_a), ((void *)0), &F.v6874, &F.v6876);
if (((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_kind) == v822))) || ((Y_DEFI(F.v6868) < INT64_C(1)))) || ((Y_DEFI(F.v6868) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_nidx))))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
F.v6878 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6876)))).f_idx);
F.lo6895 = INT64_C(2);
F.hi6896 = Y_DEFI(F.v6868);
{ rt_int hi6900 = F.hi6896;
for (rt_int i6899 = F.lo6895; i6899 <= hi6900; i6899++) { F.c_6898 = i6899; Y_TICK();
F.v6878 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6878)))).f_link);
if (i6899 == hi6900) break;
}}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6878)))).f_hasm))) {
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
F.p2894 = 1;
if ((Y_DEFI(F.v6866) == v1366)) {
F.p2895 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6878)))).f_mlo);
} else {
F.p2895 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6878)))).f_mhi);
}
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
}
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2900_NeedsConv(void * a_p2901, void * a_p2902) {
struct yf2903 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2901 = a_p2901;
F.p2902 = a_p2902;
if ((F.p2901 == F.p2902)) {
{ rt_int rv6906 = 0;
y_use = F.yu; return rv6906; }
}
if (yr2466_IsDiscrete(F.p2901)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_lo) == INT64_C(0))) {
{ rt_int rv6909 = 0;
y_use = F.yu; return rv6909; }
}
{ rt_int rv6910 = (!((((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_hasm) && Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_hasm)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_mlo) <= Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_mlo)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_mhi) <= Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_mhi))))));
y_use = F.yu; return rv6910; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_kind) == v810)) {
{ rt_int rv6912 = (!(Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_lo) == INT64_C(0)));
y_use = F.yu; return rv6912; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_kind) == v807)) {
{ rt_int rv6914 = ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_lo) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_fsn) == Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_fsn))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_fsd) == Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_fsd)))));
y_use = F.yu; return rv6914; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_kind) == v825)) {
{ rt_int rv6915 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_kind) == v825)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_cname) == Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_cname)))));
y_use = F.yu; return rv6915; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2901))).f_kind) == v843)))) {
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_kind) == v822))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2902))).f_kind) == v843))))) {
{ rt_int rv6917 = 0;
y_use = F.yu; return rv6917; }
}
{ rt_int rv6918 = yr2900_NeedsConv(Y_DEFP(((*(yR110 *)y_deref(F.p2901))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2902))).f_elem));
y_use = F.yu; return rv6918; }
}
{ rt_int rv6920 = 0;
y_use = F.yu; return rv6920; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2907_ConvertRecord(rt_int a_p2908, void * a_p2909, void * a_p2910) {
struct yf2911 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2908 = a_p2908;
F.p2909 = a_p2909;
F.p2910 = a_p2910;
F.v6926 = Y_UNDEF_I;
F.v6928 = Y_UNDEF_I;
F.v6930 = Y_UNDEF_P;
F.v6932 = Y_UNDEF_P;
F.v6926 = yr1200_Fresh(y_str("cs", 2));
F.v6928 = yr1200_Fresh(y_str("cd", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2515_CType(F.p2910));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6926));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2908);
yr1037_SA(y_str("; ", 2));
yr1044_ST(yr2515_CType(F.p2909));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6928));
yr1037_SA(y_str("; memset(&", 10));
yr1044_ST(Y_DEFI(F.v6928));
yr1037_SA(y_str(", 0, sizeof ", 12));
yr1044_ST(Y_DEFI(F.v6928));
yr1037_SA(y_str(");", 2));
F.v6930 = Y_DEFP(((*(yR110 *)y_deref(F.p2909))).f_fields);
while ((!(Y_DEFP(F.v6930) == ((void *)0)))) {
Y_TICK();
F.v6932 = yr2770_FindField(F.p2910, Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6930)))).f_name));
if ((!(Y_DEFP(F.v6932) == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6932)))).f_variant) == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
yr1044_ST(yr3074_VariantTest(F.p2910, Y_DEFP(F.v6932), yr3442_Join(yr1061_T(y_str("(&", 2)), Y_DEFI(F.v6926), yr1061_T(y_str(")", 1)))));
yr1037_SA(y_str(") ", 2));
}
yr1044_ST(Y_DEFI(F.v6928));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6930)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2965_Convert(yr3442_Join(Y_DEFI(F.v6926), yr1061_T(y_str(".f_", 3)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6930)))).f_name)), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6930)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6932)))).f_rep)));
yr1037_SA(y_str(";", 1));
}
F.v6930 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6930)))).f_next);
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6928));
yr1037_SA(y_str("; })", 4));
{ rt_int rv6955 = yr1056_SE();
y_use = F.yu; return rv6955; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2915_ConvertArray(rt_int a_p2916, void * a_p2917, void * a_p2918) {
struct yf2919 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2916 = a_p2916;
F.p2917 = a_p2917;
F.p2918 = a_p2918;
F.v6961 = Y_UNDEF_I;
F.v6963 = Y_UNDEF_I;
F.v6965 = Y_UNDEF_I;
F.v6967 = Y_UNDEF_I;
F.v6969 = Y_UNDEF_I;
F.v6971 = Y_UNDEF_I;
F.v6961 = yr1200_Fresh(y_str("cs", 2));
F.v6963 = yr1200_Fresh(y_str("cd", 2));
F.v6965 = yr1200_Fresh(y_str("ck", 2));
F.v6967 = yr1200_Fresh(y_str("cn", 2));
F.v6969 = yr2515_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2917))).f_elem));
F.v6971 = yr2515_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2918))).f_elem));
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v6961));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2916);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v6963));
yr1037_SA(y_str("; rt_int ", 9));
yr1044_ST(Y_DEFI(F.v6967));
yr1037_SA(y_str(" = y_count(", 11));
yr1044_ST(Y_DEFI(F.v6961));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2918))).f_nidx));
yr1037_SA(y_str(");", 2));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2917))).f_kind) == v822)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2521_DescOf(F.p2917));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v6963));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v6963));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2917))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1044_ST(Y_DEFI(F.v6967));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("array lengths differ", 20));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
} else {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6963));
yr1037_SA(y_str(" = y_like(", 10));
yr1044_ST(Y_DEFI(F.v6961));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2918))).f_nidx));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2917))).f_elem)));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" for (rt_int ", 13));
yr1044_ST(Y_DEFI(F.v6965));
yr1037_SA(y_str(" = 0; ", 6));
yr1044_ST(Y_DEFI(F.v6965));
yr1037_SA(y_str(" < ", 3));
yr1044_ST(Y_DEFI(F.v6967));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v6965));
yr1037_SA(y_str("++) ((", 6));
yr1044_ST(Y_DEFI(F.v6969));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v6963));
yr1037_SA(y_str(".p)[", 4));
yr1044_ST(Y_DEFI(F.v6965));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2965_Convert(yr3442_Join(yr1061_T(y_str("((", 2)), Y_DEFI(F.v6971), yr3442_Join(yr1061_T(y_str(" *)", 3)), Y_DEFI(F.v6961), yr3442_Join(yr1061_T(y_str(".p)[", 4)), Y_DEFI(F.v6965), yr1061_T(y_str("]", 1))))), Y_DEFP(((*(yR110 *)y_deref(F.p2917))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2918))).f_elem)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v6963));
yr1037_SA(y_str("; })", 4));
{ rt_int rv7012 = yr1056_SE();
y_use = F.yu; return rv7012; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2923_RescaleCode(rt_int a_p2924, void * a_p2925, void * a_p2926) {
struct yf2927 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2924 = a_p2924;
F.p2925 = a_p2925;
F.p2926 = a_p2926;
F.v7018 = Y_UNDEF_I;
F.v7020 = Y_UNDEF_I;
F.v7022 = Y_UNDEF_I;
yr2645_ScaleRatio(F.p2925, F.p2926, &F.v7018, &F.v7020, &F.v7022);
if (Y_DEFI(F.v7022)) {
{ rt_int rv7023 = F.p2924;
y_use = F.yu; return rv7023; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_conv(", 11));
yr1044_ST(F.p2924);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7018));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7020));
yr1037_SA(y_str(")", 1));
{ rt_int rv7028 = yr1056_SE();
y_use = F.yu; return rv7028; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2931_CommonScale(rt_int * a_p2932, void * a_p2933, rt_int * a_p2934, void * a_p2935, void * a_p2936, rt_int a_p2937) {
struct yf2938 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2932 = a_p2932;
F.p2933 = a_p2933;
F.p2934 = a_p2934;
F.p2935 = a_p2935;
F.p2936 = a_p2936;
F.p2937 = a_p2937;
F.v7037 = Y_UNDEF_I;
F.v7039 = Y_UNDEF_I;
F.v7037 = yr2622_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2933))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2935))).f_fsn));
F.v7039 = yr2629_MulChk(y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2933))).f_fsd), yr2622_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2933))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2935))).f_fsd))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR110 *)y_deref(F.p2935))).f_fsd), F.p2937);
yr2662_SetScale(F.p2936, Y_DEFI(F.v7037), Y_DEFI(F.v7039));
(*F.p2932) = yr2923_RescaleCode(Y_DEFI((*F.p2932)), F.p2933, F.p2936);
(*F.p2934) = yr2923_RescaleCode(Y_DEFI((*F.p2934)), F.p2935, F.p2936);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2942_FixLiteral(void * a_p2943, rt_int * a_p2944, void * * a_p2945) {
struct yf2946 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2943 = a_p2943;
F.p2944_o = a_p2944;
F.p2945_o = a_p2945;
F.v7046 = Y_UNDEF_I;
F.v7046 = Y_DEFI(((*(yR105 *)y_deref(F.p2943))).f_ival);
F.v7048 = Y_UNDEF_I;
F.v7048 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7046))]);
F.p2945 = yr2460_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.p2945)))).f_abstract = 0;
if ((Y_DEFI(F.v7048) >= INT64_C(0))) {
yr2662_SetScale(Y_DEFP(F.p2945), yr2637_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7046))]), Y_DEFI(F.v7048), Y_DEFI(((*(yR105 *)y_deref(F.p2943))).f_line)), INT64_C(1));
} else {
yr2662_SetScale(Y_DEFP(F.p2945), INT64_C(1), yr2637_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7046))]), y_range(y_neg(Y_DEFI(F.v7048)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2943))).f_line)));
}
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7046))]));
yr1037_SA(y_str("))", 2));
F.p2944 = yr1056_SE();
(*F.p2944_o) = F.p2944;
(*F.p2945_o) = F.p2945;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2950_ManifestFix(void * a_p2951, rt_int * a_p2952, rt_int * a_p2953, rt_int * a_p2954) {
struct yf2955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2951 = a_p2951;
F.p2952_o = a_p2952;
F.p2953_o = a_p2953;
F.p2954_o = a_p2954;
F.v7062 = Y_UNDEF_I;
F.v7064 = Y_UNDEF_I;
F.v7066 = Y_UNDEF_I;
F.v7068 = Y_UNDEF_I;
F.v7070 = Y_UNDEF_I;
F.v7072 = Y_UNDEF_I;
F.p2952 = 0;
F.p2953 = INT64_C(0);
F.p2954 = INT64_C(1);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_kind) == v762)) {
F.v7062 = Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_ival);
F.v7064 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v7062))]);
F.p2953 = Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v7062))]);
if ((Y_DEFI(F.v7064) >= INT64_C(0))) {
F.p2953 = yr2629_MulChk(Y_DEFI(F.p2953), yr2637_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7062))]), Y_DEFI(F.v7064), Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_line)), Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_line));
} else {
F.p2954 = yr2637_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v7062))]), y_range(y_neg(Y_DEFI(F.v7064)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_line));
}
F.p2952 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_kind) == v759)) {
F.p2953 = Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_ival);
F.p2952 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_kind) == v801)) {
yr2950_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2951))).f_a), &F.p2952, &F.p2953, &F.p2954);
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_kind) == v795)) {
yr2950_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2951))).f_a), &F.p2952, &F.p2953, &F.p2954);
F.p2953 = y_range(y_neg(Y_DEFI(F.p2953)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_kind) == v798)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_name) == v579)))) {
yr2950_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2951))).f_a), &F.p2952, &F.p2953, &F.p2954);
yr2950_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2951))).f_b), &F.v7072, &F.v7068, &F.v7070);
F.p2952 = (Y_DEFI(F.p2952) && Y_DEFI(F.v7072));
F.p2953 = yr2629_MulChk(Y_DEFI(F.p2953), Y_DEFI(F.v7068), Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_line));
F.p2954 = yr2629_MulChk(Y_DEFI(F.p2954), Y_DEFI(F.v7070), Y_DEFI(((*(yR105 *)y_deref(F.p2951))).f_line));
}
F.v7066 = yr2622_Gcd(Y_DEFI(F.p2953), Y_DEFI(F.p2954));
F.p2953 = y_range(y_div(Y_DEFI(F.p2953), Y_DEFI(F.v7066)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2954 = y_range(y_div(Y_DEFI(F.p2954), Y_DEFI(F.v7066)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2952_o) = F.p2952;
(*F.p2953_o) = F.p2953;
(*F.p2954_o) = F.p2954;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2959_FloatChk(rt_int a_p2960) {
struct yf2961 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2960 = a_p2960;
{ rt_int rv7087 = yr3442_Join(yr1061_T(y_str("y_fchk(", 7)), F.p2960, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv7087; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2965_Convert(rt_int a_p2966, void * a_p2967, void * a_p2968) {
struct yf2969 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2966 = a_p2966;
F.p2967 = a_p2967;
F.p2968 = a_p2968;
F.v7093 = Y_UNDEF_I;
F.v7095 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2968))).f_kind) == v846)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v822))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_nidx) == INT64_C(1))))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2967))).f_idx)))).f_hasm) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2968))).f_nlits) == (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2967))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2967))).f_idx)))).f_mlo))), INT64_C(1)))))))) {
yr1026_SB();
yr1037_SA(y_str("a string of ", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2968))).f_nlits));
yr1037_SA(y_str(" characters for an array of ", 28));
yr1050_SI(y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2967))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2967))).f_idx)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" (VI.B.1)", 9));
F.v7093 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1000), Y_DEFI(F.v7093));
}
}
if ((!yr2900_NeedsConv(F.p2967, F.p2968))) {
{ rt_int rv7106 = F.p2966;
y_use = F.yu; return rv7106; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v825)) {
{ rt_int rv7107 = yr2907_ConvertRecord(F.p2966, F.p2967, F.p2968);
y_use = F.yu; return rv7107; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v843)))) {
{ rt_int rv7108 = yr2915_ConvertArray(F.p2966, F.p2967, F.p2968);
y_use = F.yu; return rv7108; }
}
if (yr3259_Suppressed(v1480)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v807)) {
{ rt_int rv7109 = yr2923_RescaleCode(F.p2966, F.p2968, F.p2967);
y_use = F.yu; return rv7109; }
}
{ rt_int rv7110 = F.p2966;
y_use = F.yu; return rv7110; }
}
if (yr2466_IsDiscrete(F.p2967)) {
yr1026_SB();
yr1037_SA(y_str("y_range(", 8));
yr1044_ST(F.p2966);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2596_LoText(F.p2967));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2602_HiText(F.p2967));
yr1037_SA(y_str(")", 1));
{ rt_int rv7115 = yr1056_SE();
y_use = F.yu; return rv7115; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_frange(", 9));
yr1044_ST(F.p2966);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2596_LoText(F.p2967));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2602_HiText(F.p2967));
yr1037_SA(y_str(")", 1));
{ rt_int rv7120 = yr1056_SE();
y_use = F.yu; return rv7120; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_kind) == v807)) {
F.v7093 = yr2923_RescaleCode(F.p2966, F.p2968, F.p2967);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2967))).f_lo) == INT64_C(0))) {
{ rt_int rv7122 = Y_DEFI(F.v7093);
y_use = F.yu; return rv7122; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_range(", 12));
yr1044_ST(Y_DEFI(F.v7093));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2596_LoText(F.p2967));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2602_HiText(F.p2967));
yr1037_SA(y_str(")", 1));
{ rt_int rv7127 = yr1056_SE();
y_use = F.yu; return rv7127; }
}
{ rt_int rv7128 = F.p2966;
y_use = F.yu; return rv7128; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2973_StoreText(rt_int a_p2974, void * a_p2975, rt_int a_p2976, void * a_p2977, rt_int a_p2978) {
struct yf2979 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2974 = a_p2974;
F.p2975 = a_p2975;
F.p2976 = a_p2976;
F.p2977 = a_p2977;
F.p2978 = a_p2978;
F.v7136 = Y_UNDEF_I;
yr2548_CheckType(F.p2978, F.p2975, F.p2977);
if (yr2490_Deep(F.p2975)) {
F.v7136 = yr1200_Fresh(y_str("t", 1));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2515_CType(F.p2975));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7136));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2965_Convert(F.p2976, F.p2975, F.p2977));
yr1037_SA(y_str("; y_store(", 10));
yr1044_ST(yr2521_DescOf(F.p2975));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.p2974);
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7136));
yr1037_SA(y_str("); }", 4));
{ rt_int rv7145 = yr1056_SE();
y_use = F.yu; return rv7145; }
}
yr1026_SB();
yr1044_ST(F.p2974);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2965_Convert(F.p2976, F.p2975, F.p2977));
yr1037_SA(y_str(";", 1));
{ rt_int rv7148 = yr1056_SE();
y_use = F.yu; return rv7148; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2983_Store(rt_int a_p2984, void * a_p2985, rt_int a_p2986, void * a_p2987, rt_int a_p2988) {
struct yf2989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2984 = a_p2984;
F.p2985 = a_p2985;
F.p2986 = a_p2986;
F.p2987 = a_p2987;
F.p2988 = a_p2988;
yr1132_Emit(yr2973_StoreText(F.p2984, F.p2985, F.p2986, F.p2987, F.p2988));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2993_IsVariable(void * a_p2994) {
struct yf2995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2994 = a_p2994;
F.v7158 = Y_UNDEF_P;
F.v7160 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_kind) == v777)) {
F.v7158 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_name));
if ((Y_DEFP(F.v7158) == ((void *)0))) {
{ rt_int rv7162 = 0;
y_use = F.yu; return rv7162; }
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7158)))).f_readonly)) {
{ rt_int rv7164 = 0;
y_use = F.yu; return rv7164; }
}
{ rt_int rv7165 = (Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v7158))))).f_kind) == v861);
y_use = F.yu; return rv7165; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_kind) == v789)) {
{ rt_int rv7167 = (Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_flag) == INT64_C(0));
y_use = F.yu; return rv7167; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_kind) == v786)) {
{ rt_int rv7168 = (yr3091_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p2994))).f_a)) || yr2993_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p2994))).f_a)));
y_use = F.yu; return rv7168; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_kind) == v783)) {
if ((!yr2993_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p2994))).f_a)))) {
{ rt_int rv7170 = 0;
y_use = F.yu; return rv7170; }
}
F.v7160 = yr2770_FindField(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2994))).f_a)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2994))).f_name));
if ((Y_DEFP(F.v7160) == ((void *)0))) {
{ rt_int rv7172 = 0;
y_use = F.yu; return rv7172; }
}
{ rt_int rv7173 = (!Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7160)))).f_isconst));
y_use = F.yu; return rv7173; }
}
{ rt_int rv7175 = 0;
y_use = F.yu; return rv7175; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2999_CheckPure(void * a_p3000) {
struct yf3001 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3000 = a_p3000;
F.v7179 = Y_UNDEF_P;
F.v7179 = F.p3000;
F.v7181 = Y_UNDEF_P;
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_func))) {
y_use = F.yu; return;
}
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_kind) == v786)))) {
Y_TICK();
F.v7179 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_kind) == v789)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_flag) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3000))).f_line), y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_kind) == v777)) {
F.v7181 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_name));
if ((!(Y_DEFP(F.v7181) == ((void *)0)))) {
F.v7181 = yr2447_Real(Y_DEFP(F.v7181));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7181)))).f_level) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_level))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3000))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7179)))).f_name), y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3005_LValue(void * a_p3006, rt_int * a_p3007, void * * a_p3008) {
struct yf3009 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3006 = a_p3006;
F.p3007_o = a_p3007;
F.p3008_o = a_p3008;
F.v7190 = Y_UNDEF_P;
F.v7190 = Y_DEFP(v1678);
v1678 = F.p3006;
yr3032_Expr(F.p3006, ((void *)0), &F.p3007, &F.p3008);
v1678 = Y_DEFP(F.v7190);
if ((!yr2993_IsVariable(F.p3006))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3006))).f_line), y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p3007_o) = F.p3007;
(*F.p3008_o) = F.p3008;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3013_Paren(rt_int a_p3014) {
struct yf3015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3014 = a_p3014;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3014);
yr1037_SA(y_str(")", 1));
{ rt_int rv7196 = yr1056_SE();
y_use = F.yu; return rv7196; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3019_Lit(void * a_p3020, rt_int a_p3021) {
struct yf3022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3020 = a_p3020;
F.p3021 = a_p3021;
F.v7201 = Y_UNDEF_P;
F.v7201 = yr2460_CopyRep(F.p3020);
yr2683_SetRange(Y_DEFP(F.v7201), F.p3021, F.p3021);
((*(yR110 *)y_deref(Y_DEFP(F.v7201)))).f_elem = F.p3020;
{ void * rv7202 = Y_DEFP(F.v7201);
y_use = F.yu; return rv7202; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3026_Qualifier(void * a_p3027) {
struct yf3028 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3027 = a_p3027;
F.v7206 = Y_UNDEF_P;
F.v7206 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3027))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3027))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7206)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7206)))).f_kind) == v870))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3027))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3027))).f_d)))).f_name), y_str(" is not a type", 14));
}
{ void * rv7208 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7206)))).f_rep);
y_use = F.yu; return rv7208; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3032_Expr(void * a_p3033, void * a_p3034, rt_int * a_p3035, void * * a_p3036) {
struct yf3037 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3033 = a_p3033;
F.p3034 = a_p3034;
F.p3035_o = a_p3035;
F.p3036_o = a_p3036;
F.v7215 = Y_UNDEF_I;
F.v7215 = Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_kind);
F.v7217 = Y_UNDEF_P;
F.v7219 = Y_UNDEF_I;
F.v7221 = Y_UNDEF_I;
F.v7223 = Y_UNDEF_P;
F.v7225 = Y_UNDEF_P;
F.v7227 = Y_UNDEF_P;
F.v7229 = Y_UNDEF_I;
F.v7231 = Y_UNDEF_I;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line);
if ((Y_DEFI(F.v7215) == v801)) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), F.p3034, &F.v7219, &F.p3036);
F.p3035 = yr3013_Paren(Y_DEFI(F.v7219));
} else if ((Y_DEFI(F.v7215) == v759)) {
F.p3036 = yr3019_Lit(Y_DEFP(v1342), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_ival));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_d) == ((void *)0)))) {
F.v7225 = yr3026_Qualifier(F.p3033);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_tname);
}
yr1026_SB();
yr1037_SA(y_str("INT64_C(", 8));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_ival));
yr1037_SA(y_str(")", 1));
F.p3035 = yr1056_SE();
} else if ((Y_DEFI(F.v7215) == v768)) {
F.v7225 = yr2860_AlphabetFor(F.p3033, F.p3034);
F.v7231 = yr2867_CharValue(Y_DEFP(F.v7225), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line));
F.p3036 = yr3019_Lit(Y_DEFP(F.v7225), Y_DEFI(F.v7231));
yr1026_SB();
yr1050_SI(Y_DEFI(F.v7231));
F.p3035 = yr1056_SE();
} else if ((Y_DEFI(F.v7215) == v771)) {
F.v7225 = yr2860_AlphabetFor(F.p3033, F.p3034);
F.v7219 = yr2875_StringCodes(Y_DEFP(F.v7225), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_text), &F.v7229, Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line));
F.p3036 = yr2453_NewRep(v846, yr1061_T(y_str("string", 6)));
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_tname = yr1061_T(y_str("a string literal", 16));
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_elem = Y_DEFP(F.v7225);
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_nidx = INT64_C(1);
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_nlits = Y_DEFI(F.v7229);
yr1026_SB();
yr1037_SA(y_str("y_str(", 6));
yr1044_ST(Y_DEFI(F.v7219));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v7229));
yr1037_SA(y_str(")", 1));
F.p3035 = yr1056_SE();
} else if ((Y_DEFI(F.v7215) == v765)) {
F.p3036 = Y_DEFP(v1354);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_d) == ((void *)0)))) {
F.p3036 = yr3026_Qualifier(F.p3033);
}
F.p3035 = yr3013_Paren(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_text));
} else if ((Y_DEFI(F.v7215) == v762)) {
yr2942_FixLiteral(F.p3033, &F.p3035, &F.p3036);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_d) == ((void *)0)))) {
F.v7225 = yr3026_Qualifier(F.p3033);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_kind) == v807))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_tname);
}
} else if ((Y_DEFI(F.v7215) == v774)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p3036 = yr3026_Qualifier(F.p3033);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3036)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), y_str("NIL of a type that is not a pointer", 35));
}
F.p3035 = yr1061_T(y_str("((void *)0)", 11));
} else if ((Y_DEFI(F.v7215) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_d) == ((void *)0)))) {
F.v7225 = yr3026_Qualifier(F.p3033);
F.v7217 = yr2407_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name), Y_DEFP(F.v7225));
if ((Y_DEFP(F.v7217) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name), y_str(" is not a literal of that type", 30));
}
} else {
F.v7217 = yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line));
}
yr3082_NameExpr(F.p3033, Y_DEFP(F.v7217), &F.p3035, &F.p3036);
} else if ((Y_DEFI(F.v7215) == v780)) {
yr3285_CallExpr(F.p3033, F.p3034, 0, &F.p3035, &F.p3036);
} else if ((Y_DEFI(F.v7215) == v783)) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), ((void *)0), &F.v7219, &F.v7225);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a)))).f_rep = Y_DEFP(F.v7225);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_kind) == v825))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name), y_str(": a component of something that is not a record", 47));
}
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_tname), y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v7227 = yr2770_FindField(Y_DEFP(F.v7225), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name));
if ((Y_DEFP(F.v7227) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name), y_str(" is not a component of this record", 34));
}
F.p3036 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7227)))).f_rep);
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7227)))).f_variant) == INT64_C(0)))) {
yr3366_CheckVariantSelected(F.p3033, Y_DEFP(F.v7225), Y_DEFP(F.v7227));
F.v7221 = yr1200_Fresh(y_str("vr", 2));
yr1026_SB();
yr1037_SA(y_str("(*({ ", 5));
yr1044_ST(yr2515_CType(Y_DEFP(F.v7225)));
yr1037_SA(y_str(" *", 2));
yr1044_ST(Y_DEFI(F.v7221));
yr1037_SA(y_str(" = &", 4));
yr1044_ST(yr3013_Paren(Y_DEFI(F.v7219)));
yr1037_SA(y_str("; if (!(", 8));
yr1044_ST(yr3074_VariantTest(Y_DEFP(F.v7225), Y_DEFP(F.v7227), Y_DEFI(F.v7221)));
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1044_ST(Y_DEFI(F.v7221));
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name));
yr1037_SA(y_str("; }))", 5));
F.p3035 = yr1056_SE();
} else {
yr1026_SB();
yr1044_ST(yr3013_Paren(Y_DEFI(F.v7219)));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_name));
F.p3035 = yr1056_SE();
}
} else if ((((Y_DEFI(F.v7215) == v789)) && yr3230_UserOp(F.p3033, y_range(v618, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), ((void *)0), &F.p3035, &F.p3036))) {
((*(yR105 *)y_deref(F.p3033))).f_flag = INT64_C(1);
} else if ((Y_DEFI(F.v7215) == v789)) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), ((void *)0), &F.v7219, &F.v7225);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), y_str("^ of something that is not a pointer", 36));
}
yr3509_NoteFreeDeref(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_tid));
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_forward), y_str(" is not declared", 16));
}
F.p3036 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7225)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(yr2515_CType(Y_DEFP(F.p3036)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v7219));
yr1037_SA(y_str("))", 2));
F.p3035 = yr1056_SE();
} else if ((Y_DEFI(F.v7215) == v786)) {
yr3097_IndexExpr(F.p3033, &F.p3035, &F.p3036);
} else if ((((Y_DEFI(F.v7215) == v792)) && yr3230_UserOp(F.p3033, y_range(v390, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), ((void *)0), &F.p3035, &F.p3036))) {
F.p3036 = Y_DEFP(F.p3036);
} else if ((Y_DEFI(F.v7215) == v792)) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), Y_DEFP(v1344), &F.v7219, &F.v7225);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7225));
F.p3036 = Y_DEFP(v1344);
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.v7219));
yr1037_SA(y_str(")", 1));
F.p3035 = yr1056_SE();
} else if ((Y_DEFI(F.v7215) == v795)) {
if ((!yr3230_UserOp(F.p3033, y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), ((void *)0), &F.p3035, &F.p3036))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3033))).f_a), F.p3034, &F.v7219, &F.v7225);
yr3105_NegExpr(F.p3033, Y_DEFI(F.v7219), Y_DEFP(F.v7225), &F.p3035, &F.p3036);
}
} else if ((Y_DEFI(F.v7215) == v798)) {
yr3161_BinExpr(F.p3033, F.p3034, &F.p3035, &F.p3036);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3033))).f_line), y_str("not an expression", 17));
}
((*(yR105 *)y_deref(F.p3033))).f_rep = Y_DEFP(F.p3036);
yr3041_CheckDefined(F.p3033, &F.p3035, Y_DEFP(F.p3036));
(*F.p3035_o) = F.p3035;
(*F.p3036_o) = F.p3036;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3041_CheckDefined(void * a_p3042, rt_int * a_p3043, void * a_p3044) {
struct yf3045 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3042 = a_p3042;
F.p3043 = a_p3043;
F.p3044 = a_p3044;
F.v7274 = Y_UNDEF_I;
F.v7274 = Y_DEFI(((*(yR105 *)y_deref(F.p3042))).f_kind);
F.v7276 = Y_UNDEF_I;
F.v7276 = INT64_C(0);
if ((((((Y_DEFI(F.v7274) == v777)) || ((Y_DEFI(F.v7274) == v783))) || ((Y_DEFI(F.v7274) == v786))) || ((Y_DEFI(F.v7274) == v789)))) {
((*(yR105 *)y_deref(F.p3042))).f_text = INT64_C(0);
} else {
y_use = F.yu; return;
}
if ((F.p3042 == Y_DEFP(v1678))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7274) == v777)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3042))).f_ival) == INT64_C(1)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7274) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3042))).f_flag) == INT64_C(0)))))) {
y_use = F.yu; return;
}
if (yr3259_Suppressed(v1489)) {
y_use = F.yu; return;
}
F.v7276 = yr3055_UndefMacro(F.p3044);
if ((Y_DEFI(F.v7276) == INT64_C(0))) {
y_use = F.yu; return;
}
((*(yR105 *)y_deref(F.p3042))).f_text = Y_DEFI((*F.p3043));
if ((!yr3049_Addressable(F.p3042))) {
yr1026_SB();
yr1037_SA(y_str("y_vchk_", 7));
yr1031_SC(yr1103_TChar(Y_DEFI(F.v7276), INT64_C(6)));
yr1037_SA(y_str("(", 1));
F.v7276 = yr1056_SE();
}
(*F.p3043) = yr3442_Join(Y_DEFI(F.v7276), Y_DEFI((*F.p3043)), yr1061_T(y_str(")", 1)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3049_Addressable(void * a_p3050) {
struct yf3051 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3050 = a_p3050;
F.v7289 = Y_UNDEF_P;
F.v7289 = F.p3050;
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7289)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7289)))).f_kind) == v801)))) {
Y_TICK();
F.v7289 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7289)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7289)))).f_kind) == v780)) {
{ rt_int rv7291 = 0;
y_use = F.yu; return rv7291; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7289)))).f_kind) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7289)))).f_flag) == INT64_C(0)))))) {
{ rt_int rv7294 = 0;
y_use = F.yu; return rv7294; }
}
{ rt_int rv7296 = 1;
y_use = F.yu; return rv7296; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3055_UndefMacro(void * a_p3056) {
struct yf3057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3056 = a_p3056;
F.v7300 = Y_UNDEF_I;
F.v7300 = Y_DEFI(((*(yR110 *)y_deref(F.p3056))).f_kind);
if (((((Y_DEFI(F.v7300) == v804)) || ((Y_DEFI(F.v7300) == v813))) || ((Y_DEFI(F.v7300) == v816)))) {
{ rt_int rv7302 = yr1061_T(y_str("Y_DEFI(", 7));
y_use = F.yu; return rv7302; }
}
if ((((Y_DEFI(F.v7300) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3056))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7305 = yr1061_T(y_str("Y_DEFB(", 7));
y_use = F.yu; return rv7305; }
}
if ((Y_DEFI(F.v7300) == v810)) {
{ rt_int rv7307 = yr1061_T(y_str("Y_DEFF(", 7));
y_use = F.yu; return rv7307; }
}
if ((Y_DEFI(F.v7300) == v807)) {
{ rt_int rv7309 = yr1061_T(y_str("Y_DEFX(", 7));
y_use = F.yu; return rv7309; }
}
if ((Y_DEFI(F.v7300) == v828)) {
{ rt_int rv7311 = yr1061_T(y_str("Y_DEFP(", 7));
y_use = F.yu; return rv7311; }
}
if ((Y_DEFI(F.v7300) == v834)) {
{ rt_int rv7313 = yr1061_T(y_str("Y_DEFS(", 7));
y_use = F.yu; return rv7313; }
}
{ rt_int rv7315 = INT64_C(0);
y_use = F.yu; return rv7315; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3061_UndefValue(void * a_p3062) {
struct yf3063 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3062 = a_p3062;
F.v7319 = Y_UNDEF_I;
F.v7319 = Y_DEFI(((*(yR110 *)y_deref(F.p3062))).f_kind);
if (((((Y_DEFI(F.v7319) == v804)) || ((Y_DEFI(F.v7319) == v813))) || ((Y_DEFI(F.v7319) == v816)))) {
{ rt_int rv7321 = yr1061_T(y_str("Y_UNDEF_I", 9));
y_use = F.yu; return rv7321; }
}
if ((((Y_DEFI(F.v7319) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3062))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7324 = yr1061_T(y_str("Y_UNDEF_B", 9));
y_use = F.yu; return rv7324; }
}
if ((Y_DEFI(F.v7319) == v810)) {
{ rt_int rv7326 = yr1061_T(y_str("Y_UNDEF_F_VALUE", 15));
y_use = F.yu; return rv7326; }
}
if ((Y_DEFI(F.v7319) == v807)) {
{ rt_int rv7328 = yr1061_T(y_str("Y_UNDEF_X", 9));
y_use = F.yu; return rv7328; }
}
if ((Y_DEFI(F.v7319) == v828)) {
{ rt_int rv7330 = yr1061_T(y_str("Y_UNDEF_P", 9));
y_use = F.yu; return rv7330; }
}
{ rt_int rv7332 = INT64_C(0);
y_use = F.yu; return rv7332; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3067_RawCode(void * a_p3068, rt_int a_p3069) {
struct yf3070 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3068 = a_p3068;
F.p3069 = a_p3069;
if ((((((((Y_DEFI(((*(yR105 *)y_deref(F.p3068))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3068))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3068))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3068))).f_kind) == v789)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3068))).f_text) == INT64_C(0)))))) {
{ rt_int rv7337 = Y_DEFI(((*(yR105 *)y_deref(F.p3068))).f_text);
y_use = F.yu; return rv7337; }
}
{ rt_int rv7338 = F.p3069;
y_use = F.yu; return rv7338; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3074_VariantTest(void * a_p3075, void * a_p3076, rt_int a_p3077) {
struct yf3078 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3075 = a_p3075;
F.p3076 = a_p3076;
F.p3077 = a_p3077;
F.v7344 = Y_UNDEF_P;
F.v7344 = Y_DEFP(((*(yR115 *)y_deref(F.p3076))).f_labels);
F.v7346 = Y_UNDEF_I;
F.v7348 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("0", 1));
while ((!(Y_DEFP(F.v7344) == ((void *)0)))) {
Y_TICK();
yr2884_Manifest(Y_DEFP(F.v7344), &F.v7346, &F.v7348);
yr1037_SA(y_str(" || ", 4));
yr1044_ST(F.p3077);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3075))).f_selector)))).f_name));
yr1037_SA(y_str(" == ", 4));
yr1050_SI(Y_DEFI(F.v7348));
F.v7344 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7344)))).f_next);
}
{ rt_int rv7353 = yr1056_SE();
y_use = F.yu; return rv7353; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3082_NameExpr(void * a_p3083, void * a_p3084, rt_int * a_p3085, void * * a_p3086) {
struct yf3087 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3083 = a_p3083;
F.p3084 = a_p3084;
F.p3085_o = a_p3085;
F.p3086_o = a_p3086;
F.v7360 = Y_UNDEF_P;
F.v7360 = yr2447_Real(F.p3084);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_kind) == v873)) {
if ((((Y_DEFP(((*(yR105 *)y_deref(F.p3083))).f_d) == ((void *)0))) && yr2401_Ambiguous(Y_DEFP(F.v7360)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3083))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3083))).f_name), y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p3086 = yr3019_Lit(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_rep), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_mval));
yr1026_SB();
yr1050_SI(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_mval));
F.p3085 = yr1056_SE();
(*F.p3085_o) = F.p3085;
(*F.p3086_o) = F.p3086;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_kind) == v864)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_kind) == v861)) {
((*(yR105 *)y_deref(F.p3083))).f_ival = INT64_C(1);
} else {
((*(yR105 *)y_deref(F.p3083))).f_ival = INT64_C(0);
}
yr3503_NoteFree(Y_DEFP(F.v7360));
F.p3086 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_rep);
F.p3085 = yr2441_SymPath(Y_DEFP(F.v7360));
(*F.p3085_o) = F.p3085;
(*F.p3086_o) = F.p3086;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7360)))).f_kind) == v876)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3083))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3083))).f_name), y_str(" is a routine: a call needs ()", 30));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3083))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3083))).f_name), y_str(" is not a value", 15));
(*F.p3085_o) = F.p3085;
(*F.p3086_o) = F.p3086;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3091_IsMainStore(void * a_p3092) {
struct yf3093 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3092 = a_p3092;
F.v7369 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3092))).f_kind) == v777))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3092))).f_d) == ((void *)0)))))) {
{ rt_int rv7371 = 0;
y_use = F.yu; return rv7371; }
}
F.v7369 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3092))).f_name));
if ((Y_DEFP(F.v7369) == ((void *)0))) {
{ rt_int rv7373 = 0;
y_use = F.yu; return rv7373; }
}
if ((!yr2395_Resolved(Y_DEFP(F.v7369)))) {
{ rt_int rv7375 = 0;
y_use = F.yu; return rv7375; }
}
F.v7369 = yr2447_Real(Y_DEFP(F.v7369));
{ rt_int rv7376 = (((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7369)))).f_kind) == v891)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7369)))).f_mval) == v1477)));
y_use = F.yu; return rv7376; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3097_IndexExpr(void * a_p3098, rt_int * a_p3099, void * * a_p3100) {
struct yf3101 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3098 = a_p3098;
F.p3099_o = a_p3099;
F.p3100_o = a_p3100;
F.v7382 = Y_UNDEF_I;
F.v7384 = Y_UNDEF_I;
F.v7386 = Y_UNDEF_I;
F.v7388 = Y_UNDEF_P;
F.v7390 = Y_UNDEF_P;
F.v7392 = Y_UNDEF_P;
F.v7394 = Y_UNDEF_P;
F.v7396 = Y_UNDEF_I;
F.v7398 = Y_UNDEF_I;
if (yr3091_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_a))) {
if ((!(yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_b)) == INT64_C(1)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3098))).f_line), y_str("MAIN_STORE_ARRAY has one subscript", 34));
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_b), Y_DEFP(v1923), &F.v7384, &F.v7390);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3098))).f_line), Y_DEFP(v1923), Y_DEFP(F.v7390));
F.p3100 = Y_DEFP(v1925);
F.p3099 = yr3442_Join(yr1061_T(y_str("(*y_mem_word(", 13)), Y_DEFI(F.v7384), yr1061_T(y_str("))", 2)));
(*F.p3099_o) = F.p3099;
(*F.p3100_o) = F.p3100;
y_use = F.yu; return;
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_a), ((void *)0), &F.v7382, &F.v7388);
if ((!yr2478_IsArrayLike(Y_DEFP(F.v7388)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3098))).f_line), y_str("[] of something that is not an array", 36));
}
F.v7396 = yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_b));
if ((!(Y_DEFI(F.v7396) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7388)))).f_nidx)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3098))).f_line), y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p3100 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7388)))).f_elem);
F.v7398 = (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_a)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_a)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_a)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_a)))).f_kind) == v789)));
if (Y_DEFI(F.v7398)) {
F.v7386 = Y_DEFI(F.v7382);
} else {
F.v7386 = yr1200_Fresh(y_str("ya", 2));
}
yr1026_SB();
if ((!Y_DEFI(F.v7398))) {
yr1037_SA(y_str("(*({ yarr ", 10));
yr1044_ST(Y_DEFI(F.v7386));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7382));
yr1037_SA(y_str("; &", 3));
}
yr1037_SA(y_str("((", 2));
yr1044_ST(yr2515_CType(Y_DEFP(F.p3100)));
yr1037_SA(y_str(" *)(", 4));
yr1044_ST(Y_DEFI(F.v7386));
yr1037_SA(y_str(").p)[y_ix", 9));
yr1050_SI(Y_DEFI(F.v7396));
yr1037_SA(y_str("(", 1));
yr1044_ST(Y_DEFI(F.v7386));
F.p3099 = yr1056_SE();
F.v7394 = Y_DEFP(((*(yR105 *)y_deref(F.p3098))).f_b);
F.v7392 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7388)))).f_idx);
while ((!(Y_DEFP(F.v7394) == ((void *)0)))) {
Y_TICK();
yr3032_Expr(Y_DEFP(F.v7394), Y_DEFP(F.v7392), &F.v7384, &F.v7390);
if ((((!(Y_DEFP(F.v7392) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7388)))).f_kind) == v822)))) {
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7394)))).f_line), Y_DEFP(F.v7392), Y_DEFP(F.v7390));
} else if ((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7390)))).f_kind) == v804)) || yr2466_IsDiscrete(Y_DEFP(F.v7390)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7394)))).f_line), y_str("a subscript is an integer or scalar value", 41));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3099));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7384));
F.p3099 = yr1056_SE();
if ((!(Y_DEFP(F.v7392) == ((void *)0)))) {
F.v7392 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7392)))).f_link);
}
F.v7394 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7394)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3099));
yr1037_SA(y_str(")]", 2));
if ((!Y_DEFI(F.v7398))) {
yr1037_SA(y_str("; }))", 5));
}
F.p3099 = yr1056_SE();
(*F.p3099_o) = F.p3099;
(*F.p3100_o) = F.p3100;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3105_NegExpr(void * a_p3106, rt_int a_p3107, void * a_p3108, rt_int * a_p3109, void * * a_p3110) {
struct yf3111 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3106 = a_p3106;
F.p3107 = a_p3107;
F.p3108 = a_p3108;
F.p3109_o = a_p3109;
F.p3110_o = a_p3110;
yr1026_SB();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3108))).f_kind) == v804)) {
F.p3110 = yr2460_CopyRep(F.p3108);
((*(yR110 *)y_deref(Y_DEFP(F.p3110)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.p3110)))).f_hasm = 0;
if (yr3259_Suppressed(v1483)) {
yr1037_SA(y_str("Y_NEGW(", 7));
} else {
yr1037_SA(y_str("y_neg(", 6));
}
yr1044_ST(F.p3107);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3108))).f_kind) == v810)) {
F.p3110 = yr2460_CopyRep(F.p3108);
((*(yR110 *)y_deref(Y_DEFP(F.p3110)))).f_lo = INT64_C(0);
yr1037_SA(y_str("(-", 2));
yr1044_ST(F.p3107);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3108))).f_kind) == v807)) {
F.p3110 = yr2460_CopyRep(F.p3108);
((*(yR110 *)y_deref(Y_DEFP(F.p3110)))).f_lo = INT64_C(0);
yr1037_SA(y_str("y_fix_neg(", 10));
yr1044_ST(F.p3107);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3108))).f_kind) == v834)) {
F.p3110 = F.p3108;
yr1037_SA(y_str("y_set_compl(", 12));
yr1044_ST(F.p3107);
yr1037_SA(y_str(")", 1));
} else {
v927 = 0;
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3106))).f_line), y_str("- of something that is not a number or a set", 44));
}
F.p3109 = yr1056_SE();
(*F.p3109_o) = F.p3109;
(*F.p3110_o) = F.p3110;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3115_Unbounded(void * a_p3116) {
struct yf3117 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3116 = a_p3116;
F.v7441 = Y_UNDEF_P;
F.v7441 = yr2460_CopyRep(F.p3116);
((*(yR110 *)y_deref(Y_DEFP(F.v7441)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7441)))).f_hi = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7441)))).f_hasm = 0;
{ void * rv7445 = Y_DEFP(F.v7441);
y_use = F.yu; return rv7445; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3121_Call2(yarr a_p3123, rt_int a_p3124, rt_int a_p3125) {
struct yf3126 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3123 = a_p3123;
F.p3124 = a_p3124;
F.p3125 = a_p3125;
yr1026_SB();
yr1037_SA(F.p3123);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3124);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p3125);
yr1037_SA(y_str(")", 1));
{ rt_int rv7453 = yr1056_SE();
y_use = F.yu; return rv7453; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3130_Infix(rt_int a_p3131, yarr a_p3133, rt_int a_p3134) {
struct yf3135 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3131 = a_p3131;
F.p3133 = a_p3133;
F.p3134 = a_p3134;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3131);
yr1037_SA(y_str(" ", 1));
yr1037_SA(F.p3133);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p3134);
yr1037_SA(y_str(")", 1));
{ rt_int rv7462 = yr1056_SE();
y_use = F.yu; return rv7462; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3139_EqCode(rt_int a_p3140, void * a_p3141, rt_int a_p3142, void * a_p3143) {
struct yf3144 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3140 = a_p3140;
F.p3141 = a_p3141;
F.p3142 = a_p3142;
F.p3143 = a_p3143;
F.v7469 = Y_UNDEF_I;
F.v7471 = Y_UNDEF_I;
F.v7473 = Y_UNDEF_P;
F.v7473 = F.p3141;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3141))).f_kind) == v846)) {
F.v7473 = F.p3143;
}
if ((((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v825))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v846)))) {
F.v7469 = yr1200_Fresh(y_str("e", 1));
F.v7471 = yr1200_Fresh(y_str("e", 1));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2515_CType(Y_DEFP(F.v7473)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7469));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3140);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7471));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3142);
yr1037_SA(y_str("; y_eq(", 7));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v843)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_elem)));
yr1037_SA(y_str(")", 1));
} else {
yr1044_ST(yr2521_DescOf(Y_DEFP(F.v7473)));
}
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7469));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7471));
yr1037_SA(y_str("); })", 5));
{ rt_int rv7487 = yr1056_SE();
y_use = F.yu; return rv7487; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7473)))).f_kind) == v834)) {
{ rt_int rv7489 = yr3121_Call2(y_str("y_set_eq", 8), F.p3140, F.p3142);
y_use = F.yu; return rv7489; }
}
{ rt_int rv7491 = yr3130_Infix(F.p3140, y_str("==", 2), F.p3142);
y_use = F.yu; return rv7491; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3148_IsOrdered(void * a_p3149) {
struct yf3150 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3149 = a_p3149;
if ((((((Y_DEFI(((*(yR110 *)y_deref(F.p3149))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3149))).f_kind) == v810))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3149))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3149))).f_kind) == v819)))) {
{ rt_int rv7495 = 1;
y_use = F.yu; return rv7495; }
}
{ rt_int rv7496 = (((Y_DEFI(((*(yR110 *)y_deref(F.p3149))).f_kind) == v816)) && Y_DEFI(((*(yR110 *)y_deref(F.p3149))).f_ordered));
y_use = F.yu; return rv7496; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3154_FixToFloat(rt_int a_p3155, void * a_p3156) {
struct yf3157 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3155 = a_p3155;
F.p3156 = a_p3156;
yr1026_SB();
yr1037_SA(y_str("y_fix_float(", 12));
yr1044_ST(F.p3155);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3156))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3156))).f_fsd));
yr1037_SA(y_str("))", 2));
{ rt_int rv7504 = yr1056_SE();
y_use = F.yu; return rv7504; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3161_BinExpr(void * a_p3162, void * a_p3163, rt_int * a_p3164, void * * a_p3165) {
struct yf3166 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3162 = a_p3162;
F.p3163 = a_p3163;
F.p3164_o = a_p3164;
F.p3165_o = a_p3165;
F.v7511 = Y_UNDEF_I;
F.v7511 = Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_name);
F.v7513 = Y_UNDEF_I;
F.v7515 = Y_UNDEF_I;
F.v7517 = Y_UNDEF_I;
F.v7519 = Y_UNDEF_P;
F.v7521 = Y_UNDEF_P;
F.v7523 = Y_UNDEF_P;
F.v7525 = Y_UNDEF_I;
if (yr3230_UserOp(F.p3162, Y_DEFI(F.v7511), Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_b), &F.p3164, &F.p3165)) {
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7511) == v237)) || ((Y_DEFI(F.v7511) == v399)))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_a), Y_DEFP(v1344), &F.v7513, &F.v7519);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7519));
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_b), Y_DEFP(v1344), &F.v7515, &F.v7521);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7521));
F.p3165 = Y_DEFP(v1344);
if ((Y_DEFI(F.v7511) == v237)) {
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str("&&", 2), Y_DEFI(F.v7515));
} else {
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str("||", 2), Y_DEFI(F.v7515));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7511) == v360)) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_b), ((void *)0), &F.v7515, &F.v7521);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7521)))).f_kind) == v834))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), y_str("IN needs a set on its right", 27));
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_a), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7521)))).f_elem), &F.v7513, &F.v7519);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7521)))).f_elem), Y_DEFP(F.v7519));
F.p3165 = Y_DEFP(v1344);
F.p3164 = yr3121_Call2(y_str("y_set_in", 8), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
F.v7523 = ((void *)0);
if (((((((((!(F.p3163 == ((void *)0)))) && ((!(Y_DEFI(F.v7511) == v585)))) && ((!(Y_DEFI(F.v7511) == v570)))) && ((!(Y_DEFI(F.v7511) == v588)))) && ((!(Y_DEFI(F.v7511) == v540)))) && ((!(Y_DEFI(F.v7511) == v591)))) && ((!(Y_DEFI(F.v7511) == v543))))) {
F.v7523 = F.p3163;
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_a), Y_DEFP(F.v7523), &F.v7513, &F.v7519);
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3162))).f_b), Y_DEFP(F.v7519), &F.v7515, &F.v7521);
if ((((Y_DEFI(F.v7511) == v585)) || ((Y_DEFI(F.v7511) == v570)))) {
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFP(F.v7519), Y_DEFP(F.v7521));
if (yr2509_NonAssignable(Y_DEFP(F.v7519))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_opaque) && (((y_div(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_tname), y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p3165 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_kind) == v807)) {
yr2931_CommonScale(&F.v7513, Y_DEFP(F.v7519), &F.v7515, Y_DEFP(F.v7521), yr3115_Unbounded(Y_DEFP(F.v7519)), Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line));
}
F.p3164 = yr3139_EqCode(Y_DEFI(F.v7513), Y_DEFP(F.v7519), Y_DEFI(F.v7515), Y_DEFP(F.v7521));
if ((Y_DEFI(F.v7511) == v570)) {
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.p3164));
yr1037_SA(y_str(")", 1));
F.p3164 = yr1056_SE();
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((((((Y_DEFI(F.v7511) == v588)) || ((Y_DEFI(F.v7511) == v540))) || ((Y_DEFI(F.v7511) == v591))) || ((Y_DEFI(F.v7511) == v543)))) {
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFP(F.v7519), Y_DEFP(F.v7521));
if ((!yr3148_IsOrdered(Y_DEFP(F.v7519)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p3165 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_kind) == v807)) {
yr2931_CommonScale(&F.v7513, Y_DEFP(F.v7519), &F.v7515, Y_DEFP(F.v7521), yr3115_Unbounded(Y_DEFP(F.v7519)), Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line));
}
if ((Y_DEFI(F.v7511) == v588)) {
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str("<", 1), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v540)) {
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str("<=", 2), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v591)) {
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str(">", 1), Y_DEFI(F.v7515));
} else {
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str(">=", 2), Y_DEFI(F.v7515));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFP(F.v7519), Y_DEFP(F.v7521));
F.v7525 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_kind);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_kind) == v846)) {
F.v7525 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7521)))).f_kind);
}
if ((Y_DEFI(F.v7511) == v489)) {
if ((Y_DEFI(F.v7525) == v813)) {
F.p3165 = Y_DEFP(v1344);
F.p3164 = yr3130_Infix(Y_DEFI(F.v7513), y_str("!=", 2), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7525) == v834)) {
F.p3165 = Y_DEFP(F.v7519);
F.p3164 = yr3121_Call2(y_str("y_set_xor", 9), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7525) == v834)) {
F.p3165 = Y_DEFP(F.v7519);
if ((Y_DEFI(F.v7511) == v573)) {
F.p3164 = yr3121_Call2(y_str("y_set_union", 11), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v576)) {
F.p3164 = yr3121_Call2(y_str("y_set_diff", 10), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v579)) {
F.p3164 = yr3121_Call2(y_str("y_set_inter", 11), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), y_str("this operator does not apply to sets", 36));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7525) == v804)) {
F.p3165 = yr3115_Unbounded(Y_DEFP(F.v7519));
if ((yr3259_Suppressed(v1483) && (((((Y_DEFI(F.v7511) == v573)) || ((Y_DEFI(F.v7511) == v576))) || ((Y_DEFI(F.v7511) == v579)))))) {
if ((Y_DEFI(F.v7511) == v573)) {
F.p3164 = yr3121_Call2(y_str("Y_ADDW", 6), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v576)) {
F.p3164 = yr3121_Call2(y_str("Y_SUBW", 6), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else {
F.p3164 = yr3121_Call2(y_str("Y_MULW", 6), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
}
} else if ((Y_DEFI(F.v7511) == v573)) {
F.p3164 = yr3121_Call2(y_str("y_add", 5), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v576)) {
F.p3164 = yr3121_Call2(y_str("y_sub", 5), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v579)) {
F.p3164 = yr3121_Call2(y_str("y_mul", 5), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v276)) {
F.p3164 = yr3121_Call2(y_str("y_div", 5), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v378)) {
F.p3164 = yr3121_Call2(y_str("y_mod", 5), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v582)) {
F.p3165 = Y_DEFP(v1354);
yr1026_SB();
yr1037_SA(y_str("y_fdiv((double)(", 16));
yr1044_ST(Y_DEFI(F.v7513));
yr1037_SA(y_str("), (double)(", 12));
yr1044_ST(Y_DEFI(F.v7515));
yr1037_SA(y_str("))", 2));
F.p3164 = yr1056_SE();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFI(F.v7511), y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7525) == v810)) {
F.p3165 = yr3115_Unbounded(Y_DEFP(F.v7519));
if ((Y_DEFI(F.v7511) == v573)) {
F.p3164 = yr2959_FloatChk(yr3130_Infix(Y_DEFI(F.v7513), y_str("+", 1), Y_DEFI(F.v7515)));
} else if ((Y_DEFI(F.v7511) == v576)) {
F.p3164 = yr2959_FloatChk(yr3130_Infix(Y_DEFI(F.v7513), y_str("-", 1), Y_DEFI(F.v7515)));
} else if ((Y_DEFI(F.v7511) == v579)) {
F.p3164 = yr2959_FloatChk(yr3130_Infix(Y_DEFI(F.v7513), y_str("*", 1), Y_DEFI(F.v7515)));
} else if ((Y_DEFI(F.v7511) == v582)) {
F.p3165 = Y_DEFP(v1354);
F.p3164 = yr2959_FloatChk(yr3121_Call2(y_str("y_fdiv", 6), Y_DEFI(F.v7513), Y_DEFI(F.v7515)));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFI(F.v7511), y_str(" does not apply to these numbers", 32));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7525) == v807)) {
F.p3165 = yr3115_Unbounded(Y_DEFP(F.v7519));
if ((((Y_DEFI(F.v7511) == v573)) || ((Y_DEFI(F.v7511) == v576)))) {
yr2931_CommonScale(&F.v7513, Y_DEFP(F.v7519), &F.v7515, Y_DEFP(F.v7521), Y_DEFP(F.p3165), Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line));
if ((Y_DEFI(F.v7511) == v573)) {
F.p3164 = yr3121_Call2(y_str("y_fix_add", 9), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else {
F.p3164 = yr3121_Call2(y_str("y_fix_sub", 9), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
}
} else if ((Y_DEFI(F.v7511) == v579)) {
yr2662_SetScale(Y_DEFP(F.p3165), yr2629_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7521)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line)), yr2629_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7519)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7521)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line)));
F.p3164 = yr3121_Call2(y_str("y_fix_mul", 9), Y_DEFI(F.v7513), Y_DEFI(F.v7515));
} else if ((Y_DEFI(F.v7511) == v582)) {
F.p3165 = Y_DEFP(v1354);
F.p3164 = yr2959_FloatChk(yr3121_Call2(y_str("y_fdiv", 6), yr3154_FixToFloat(Y_DEFI(F.v7513), Y_DEFP(F.v7519)), yr3154_FixToFloat(Y_DEFI(F.v7515), Y_DEFP(F.v7521))));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFI(F.v7511), y_str(" does not apply to these numbers", 32));
}
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3162))).f_line), Y_DEFI(F.v7511), y_str(" does not apply to these values", 31));
(*F.p3164_o) = F.p3164;
(*F.p3165_o) = F.p3165;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3170_Fits(void * a_p3171, void * a_p3172) {
struct yf3173 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3171 = a_p3171;
F.p3172 = a_p3172;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3171))).f_kind) == v843)) {
if ((!yr2478_IsArrayLike(F.p3172))) {
{ rt_int rv7576 = 0;
y_use = F.yu; return rv7576; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3172))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p3171))).f_nidx)))) {
{ rt_int rv7578 = 0;
y_use = F.yu; return rv7578; }
}
{ rt_int rv7579 = yr2533_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p3171))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3172))).f_elem));
y_use = F.yu; return rv7579; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3171))).f_kind) == v855)) {
{ rt_int rv7581 = 1;
y_use = F.yu; return rv7581; }
}
{ rt_int rv7582 = yr2533_SameType(F.p3171, F.p3172);
y_use = F.yu; return rv7582; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3177_Choose(void * a_p3178, rt_int a_p3179, rt_int a_p3180) {
struct yf3181 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3178 = a_p3178;
F.p3179 = a_p3179;
F.p3180 = a_p3180;
F.v7588 = Y_UNDEF_P;
F.v7588 = F.p3178;
F.v7590 = Y_UNDEF_P;
F.v7592 = Y_UNDEF_I;
F.v7594 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7588) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7588)))).f_nparams) == F.p3180)) {
F.v7592 = 1;
F.v7590 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7588)))).f_params);
F.v7594 = INT64_C(1);
while ((!(Y_DEFP(F.v7590) == ((void *)0)))) {
Y_TICK();
if ((!yr3170_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7590)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, y_add(F.p3179, Y_DEFI(F.v7594)))])))) {
F.v7592 = 0;
}
F.v7594 = y_range(y_add(Y_DEFI(F.v7594), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7590 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7590)))).f_next);
}
if (Y_DEFI(F.v7592)) {
{ void * rv7601 = Y_DEFP(F.v7588);
y_use = F.yu; return rv7601; }
}
}
F.v7588 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7588)))).f_alt);
}
{ void * rv7602 = ((void *)0);
y_use = F.yu; return rv7602; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3185_HidesStandard(void * a_p3186) {
struct yf3187 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3186 = a_p3186;
F.v7606 = Y_UNDEF_P;
F.v7606 = F.p3186;
while ((!(Y_DEFP(F.v7606) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7606)))).f_decl) == ((void *)0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7606)))).f_decl)))).f_ival) == INT64_C(0))))) {
{ rt_int rv7609 = 1;
y_use = F.yu; return rv7609; }
}
F.v7606 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7606)))).f_alt);
}
{ rt_int rv7611 = 0;
y_use = F.yu; return rv7611; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3191_CompileArgs(void * a_p3192, void * a_p3193, rt_int * a_p3194, rt_int * a_p3195) {
struct yf3196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3192 = a_p3192;
F.p3193 = a_p3193;
F.p3194_o = a_p3194;
F.p3195_o = a_p3195;
F.v7618 = Y_UNDEF_P;
F.v7618 = F.p3192;
F.v7620 = Y_UNDEF_P;
F.v7620 = ((void *)0);
F.v7622 = Y_UNDEF_P;
F.p3194 = Y_DEFI(v1551);
F.p3195 = INT64_C(0);
if ((!(F.p3193 == ((void *)0)))) {
F.v7620 = Y_DEFP(((*(yR125 *)y_deref(F.p3193))).f_params);
}
while ((!(Y_DEFP(F.v7618) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(v1551) >= INT64_C(4000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7618)))).f_line), y_str("calls nested too deeply", 23));
}
F.p3195 = y_range(y_add(Y_DEFI(F.p3195), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1551 = y_range(y_add(Y_DEFI(F.p3194), Y_DEFI(F.p3195)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7622 = ((void *)0);
if ((!(Y_DEFP(F.v7620) == ((void *)0)))) {
F.v7622 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7620)))).f_rep);
F.v7620 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7620)))).f_next);
}
yr3032_Expr(Y_DEFP(F.v7618), Y_DEFP(F.v7622), &((rt_int *)(v1527).p)[y_ix1(v1527, y_add(Y_DEFI(F.p3194), Y_DEFI(F.p3195)))], &((void * *)(v1538).p)[y_ix1(v1538, y_add(Y_DEFI(F.p3194), Y_DEFI(F.p3195)))]);
((void * *)(v1549).p)[y_ix1(v1549, y_add(Y_DEFI(F.p3194), Y_DEFI(F.p3195)))] = Y_DEFP(F.v7618);
F.v7618 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7618)))).f_next);
}
(*F.p3194_o) = F.p3194;
(*F.p3195_o) = F.p3195;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3200_CheckUnresolved(void * a_p3201, void * a_p3202, rt_int a_p3203) {
struct yf3204 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3201 = a_p3201;
F.p3202 = a_p3202;
F.p3203 = a_p3203;
F.v7637 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p3201))).f_kind) == v843))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3202))).f_kind) == v822))))) {
y_use = F.yu; return;
}
F.v7637 = Y_DEFP(((*(yR110 *)y_deref(F.p3202))).f_idx);
while ((!(Y_DEFP(F.v7637) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7637)))).f_kind) == v804))) {
yr1178_FailS(F.p3203, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v7637 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7637)))).f_link);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3208_SameAsFormal(void * a_p3209, void * a_p3210) {
struct yf3211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3209 = a_p3209;
F.p3210 = a_p3210;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3209))).f_kind) == v855)) {
{ rt_int rv7643 = 1;
y_use = F.yu; return rv7643; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3209))).f_kind) == v843)) {
if ((!((((Y_DEFI(((*(yR110 *)y_deref(F.p3210))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3210))).f_kind) == v843)))))) {
{ rt_int rv7645 = 0;
y_use = F.yu; return rv7645; }
}
{ rt_int rv7646 = yr2575_Identical(Y_DEFP(((*(yR110 *)y_deref(F.p3209))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3210))).f_elem));
y_use = F.yu; return rv7646; }
}
{ rt_int rv7647 = yr2575_Identical(F.p3209, F.p3210);
y_use = F.yu; return rv7647; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3215_CallCode(void * a_p3216, rt_int a_p3217, rt_int a_p3218, rt_int a_p3219) {
struct yf3220 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3216 = a_p3216;
F.p3217 = a_p3217;
F.p3218 = a_p3218;
F.p3219 = a_p3219;
F.v7654 = Y_UNDEF_P;
F.v7654 = Y_DEFP(((*(yR125 *)y_deref(F.p3216))).f_params);
F.v7656 = Y_UNDEF_I;
F.v7656 = y_range(y_add(F.p3217, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7660 = Y_UNDEF_I;
F.v7660 = 1;
F.v7663 = Y_UNDEF_I;
F.v7663 = INT64_C(0);
F.v7666 = Y_UNDEF_I;
F.v7666 = INT64_C(0);
F.v7669 = Y_UNDEF_I;
F.v7669 = INT64_C(0);
F.v7672 = Y_UNDEF_I;
F.v7672 = INT64_C(0);
F.v7675 = Y_UNDEF_I;
F.v7675 = INT64_C(0);
if ((!(F.p3218 == Y_DEFI(((*(yR125 *)y_deref(F.p3216))).f_nparams)))) {
yr1186_FailN(F.p3219, Y_DEFI(((*(yR125 *)y_deref(F.p3216))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3530_CheckActuals(F.p3216, F.p3217, F.p3219);
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3216))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3216))).f_level) > INT64_C(1))) {
yr1044_ST(yr2428_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3216))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7660 = 0;
}
while ((!(Y_DEFP(F.v7654) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v7660))) {
yr1037_SA(y_str(", ", 2));
}
F.v7660 = 0;
if ((!yr3170_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))])))) {
v927 = 0;
yr2540_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))]));
}
yr3200_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep)))).f_kind) == v855)) {
if (((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_cls) == v897))) && (!yr2993_IsVariable(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))])))).f_kind) == v855))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr1044_ST(yr2839_SpaceArg(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7656))]), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_cls) == v897)) {
yr1044_ST(yr2965_Convert(Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7656))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))])));
} else {
if ((!yr2993_IsVariable(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))) {
v927 = 0;
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2999_CheckPure(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))]));
yr3497_NoteWrite(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))]));
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_cls) == v903)) && yr2847_PackedComponent(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_name), y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
}
if (yr3208_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))]))) {
yr1037_SA(y_str("&", 1));
yr1044_ST(yr3067_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7656))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_cls) == v903)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v7669 = yr1200_Fresh(y_str("yo", 2));
F.v7663 = yr3442_Join(Y_DEFI(F.v7663), yr3442_Join(yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep)), yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7669)), yr1061_T(y_str(";", 1)));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep)))).f_kind) == v843)) {
F.v7663 = yr3442_Join(Y_DEFI(F.v7663), yr3442_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7669), yr1061_T(y_str(" = y_like(", 10))), yr3442_Join(yr3067_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7656))])), yr3442_Join(yr1061_T(y_str(", ", 2)), yr3224_Num(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))])))).f_nidx)), yr1061_T(y_str(", ", 2))), yr3442_Join(yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep)))).f_elem)), yr1061_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2490_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep))) {
F.v7663 = yr3442_Join(Y_DEFI(F.v7663), yr3442_Join(yr1061_T(y_str(" y_init(", 8)), yr2521_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep)), yr1061_T(y_str(", &", 3))), yr3442_Join(Y_DEFI(F.v7669), yr1061_T(y_str(");", 2)), INT64_C(0)));
}
F.v7666 = yr3442_Join(Y_DEFI(F.v7666), yr1061_T(y_str(" ", 1)), yr2973_StoreText(yr3067_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v7656))])), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v7656))]), Y_DEFI(F.v7669), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v7656))])))).f_line)));
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7669));
}
}
F.v7656 = y_range(y_add(Y_DEFI(F.v7656), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7654 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7654)))).f_next);
}
yr1037_SA(y_str(")", 1));
v1551 = F.p3217;
F.v7672 = yr1056_SE();
if ((Y_DEFI(F.v7663) == INT64_C(0))) {
{ rt_int rv7711 = Y_DEFI(F.v7672);
y_use = F.yu; return rv7711; }
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v7663));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3216))).f_ret)))).f_kind) == v852)) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7672));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7666));
yr1037_SA(y_str(" })", 3));
} else {
F.v7675 = yr1200_Fresh(y_str("yv", 2));
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR125 *)y_deref(F.p3216))).f_ret)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7675));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7672));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7666));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7675));
yr1037_SA(y_str("; })", 4));
}
{ rt_int rv7723 = yr1056_SE();
y_use = F.yu; return rv7723; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3224_Num(rt_int a_p3225) {
struct yf3226 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3225 = a_p3225;
yr1026_SB();
yr1050_SI(F.p3225);
{ rt_int rv7726 = yr1056_SE();
y_use = F.yu; return rv7726; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3230_UserOp(void * a_p3231, rt_int a_p3232, void * a_p3233, void * a_p3234, rt_int * a_p3235, void * * a_p3236) {
struct yf3237 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3231 = a_p3231;
F.p3232 = a_p3232;
F.p3233 = a_p3233;
F.p3234 = a_p3234;
F.p3235_o = a_p3235;
F.p3236_o = a_p3236;
F.v7735 = Y_UNDEF_P;
F.v7737 = Y_UNDEF_P;
F.v7739 = Y_UNDEF_I;
F.v7741 = Y_UNDEF_I;
F.v7735 = yr2342_Find(F.p3232);
if ((Y_DEFP(F.v7735) == ((void *)0))) {
{ rt_int rv7743 = 0;
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return rv7743; }
}
F.v7735 = yr2447_Real(Y_DEFP(F.v7735));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7735)))).f_kind) == v876))) {
{ rt_int rv7745 = 0;
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return rv7745; }
}
((*(yR105 *)y_deref(F.p3233))).f_next = F.p3234;
if ((!(F.p3234 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3234))).f_next = ((void *)0);
}
yr3191_CompileArgs(F.p3233, ((void *)0), &F.v7739, &F.v7741);
F.v7737 = yr3177_Choose(Y_DEFP(F.v7735), Y_DEFI(F.v7739), Y_DEFI(F.v7741));
if ((Y_DEFP(F.v7737) == ((void *)0))) {
v1551 = Y_DEFI(F.v7739);
if (yr3185_HidesStandard(Y_DEFP(F.v7735))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3231))).f_line), F.p3232, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv7748 = 0;
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return rv7748; }
}
yr3241_NoteCall(Y_DEFP(F.v7737), Y_DEFI(((*(yR105 *)y_deref(F.p3231))).f_line));
F.p3235 = yr3215_CallCode(Y_DEFP(F.v7737), Y_DEFI(F.v7739), Y_DEFI(F.v7741), Y_DEFI(((*(yR105 *)y_deref(F.p3231))).f_line));
F.p3236 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7737)))).f_ret);
{ rt_int rv7750 = 1;
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return rv7750; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3241_NoteCall(void * a_p3242, rt_int a_p3243) {
struct yf3244 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3242 = a_p3242;
F.p3243 = a_p3243;
F.v7755 = Y_UNDEF_P;
F.v7757 = Y_UNDEF_P;
F.v7757 = F.p3242;
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7757)))).f_kind) == v876)) && ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7757)))).f_target) == ((void *)0)))))) {
F.v7757 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7757)))).f_target);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7757)))).f_func))) {
v1672 = y_range(y_add(Y_DEFI(v1672), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
F.v7755 = yr1993_NewNode(v669, F.p3243);
((*(yR105 *)y_deref(Y_DEFP(F.v7755)))).f_sym = Y_DEFP(F.v7757);
((*(yR105 *)y_deref(Y_DEFP(F.v7755)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_calls);
((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_calls = Y_DEFP(F.v7755);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3248_Directive(void * a_p3249, void * a_p3250, rt_int a_p3251, rt_int a_p3252, rt_int * a_p3253, void * * a_p3254) {
struct yf3255 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3249 = a_p3249;
F.p3250 = a_p3250;
F.p3251 = a_p3251;
F.p3252 = a_p3252;
F.p3253_o = a_p3253;
F.p3254_o = a_p3254;
F.v7768 = Y_UNDEF_I;
F.v7770 = Y_UNDEF_I;
F.v7772 = Y_UNDEF_I;
v1551 = F.p3251;
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3250))).f_a), &F.v7768, &F.v7770);
if (((!Y_DEFI(F.v7768)) || ((!(F.p3252 == INT64_C(1)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3250))).f_name), y_str(" takes a manifest TRAP_KIND (XIV.XIII.2)", 40));
}
F.v7772 = INT64_C(0);
if ((Y_DEFI(F.v7770) == INT64_C(0))) {
F.v7772 = v1480;
} else if ((Y_DEFI(F.v7770) == INT64_C(1))) {
F.v7772 = v1483;
} else if ((Y_DEFI(F.v7770) == INT64_C(2))) {
F.v7772 = v1486;
} else if ((Y_DEFI(F.v7770) == INT64_C(6))) {
F.v7772 = v1489;
}
F.p3254 = Y_DEFP(v1348);
F.p3253 = yr1061_T(y_str("((void)0)", 9));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3249))).f_mval) == v1504)) {
if ((!yr3259_Suppressed(Y_DEFI(F.v7772)))) {
v1675 = y_range(y_add(Y_DEFI(v1675), Y_DEFI(F.v7772)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else if ((Y_DEFI(((*(yR125 *)y_deref(F.p3249))).f_mval) == v1507)) {
if (yr3259_Suppressed(Y_DEFI(F.v7772))) {
v1675 = y_range(y_sub(Y_DEFI(v1675), Y_DEFI(F.v7772)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else {
F.p3254 = Y_DEFP(v1344);
if ((yr3259_Suppressed(Y_DEFI(F.v7772)) && ((!(Y_DEFI(F.v7772) == INT64_C(0)))))) {
F.p3253 = yr1061_T(y_str("1", 1));
} else {
F.p3253 = yr1061_T(y_str("0", 1));
}
}
(*F.p3253_o) = F.p3253;
(*F.p3254_o) = F.p3254;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3259_Suppressed(rt_int a_p3260) {
struct yf3261 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3260 = a_p3260;
if ((F.p3260 == INT64_C(0))) {
{ rt_int rv7790 = 0;
y_use = F.yu; return rv7790; }
}
{ rt_int rv7795 = ((y_mod((y_div(Y_DEFI(v1675), F.p3260)), INT64_C(2))) == INT64_C(1));
y_use = F.yu; return rv7795; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3265_UserAssign(rt_int a_p3266, void * a_p3267, rt_int a_p3268, void * a_p3269, rt_int a_p3270) {
struct yf3271 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3266 = a_p3266;
F.p3267 = a_p3267;
F.p3268 = a_p3268;
F.p3269 = a_p3269;
F.p3270 = a_p3270;
F.v7803 = Y_UNDEF_P;
F.v7805 = Y_UNDEF_P;
F.v7807 = Y_UNDEF_P;
F.v7809 = Y_UNDEF_P;
F.v7811 = Y_UNDEF_I;
F.v7803 = yr2342_Find(y_range(v531, INT64_C(0), INT64_C(4000000)));
if ((Y_DEFP(F.v7803) == ((void *)0))) {
{ rt_int rv7813 = INT64_C(0);
y_use = F.yu; return rv7813; }
}
F.v7803 = yr2447_Real(Y_DEFP(F.v7803));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7803)))).f_kind) == v876))) {
{ rt_int rv7815 = INT64_C(0);
y_use = F.yu; return rv7815; }
}
F.v7805 = Y_DEFP(F.v7803);
while ((!(Y_DEFP(F.v7805) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_nparams) == INT64_C(2))) {
F.v7807 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_params);
F.v7809 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_next);
if ((((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_cls) == v897))) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7809)))).f_cls) == v897))) && yr2533_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep), F.p3267)) && yr2533_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7809)))).f_rep), F.p3269))) {
if ((Y_DEFP(v1640) == Y_DEFP(F.v7805))) {
{ rt_int rv7818 = INT64_C(0);
y_use = F.yu; return rv7818; }
}
yr3241_NoteCall(Y_DEFP(F.v7805), F.p3270);
yr1026_SB();
if (yr2575_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep), F.p3267)) {
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2428_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.p3266);
} else {
F.v7811 = yr1200_Fresh(y_str("yo", 2));
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7811));
yr1037_SA(y_str(";", 1));
if (yr2490_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep))) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep)));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7811));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2428_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7811));
}
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2965_Convert(F.p3268, Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7809)))).f_rep), F.p3269));
yr1037_SA(y_str(");", 2));
if ((!yr2575_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep), F.p3267))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2973_StoreText(F.p3266, F.p3267, Y_DEFI(F.v7811), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7807)))).f_rep), F.p3270));
yr1037_SA(y_str(" }", 2));
}
{ rt_int rv7843 = yr1056_SE();
y_use = F.yu; return rv7843; }
}
}
F.v7805 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7805)))).f_alt);
}
{ rt_int rv7845 = INT64_C(0);
y_use = F.yu; return rv7845; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3275_Assign(rt_int a_p3276, void * a_p3277, rt_int a_p3278, void * a_p3279, rt_int a_p3280) {
struct yf3281 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3276 = a_p3276;
F.p3277 = a_p3277;
F.p3278 = a_p3278;
F.p3279 = a_p3279;
F.p3280 = a_p3280;
F.v7853 = Y_UNDEF_I;
F.v7853 = yr3265_UserAssign(F.p3276, F.p3277, F.p3278, F.p3279, F.p3280);
if ((!(Y_DEFI(F.v7853) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v7853));
} else {
yr2983_Store(F.p3276, F.p3277, F.p3278, F.p3279, F.p3280);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3285_CallExpr(void * a_p3286, void * a_p3287, rt_int a_p3288, rt_int * a_p3289, void * * a_p3290) {
struct yf3291 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3286 = a_p3286;
F.p3287 = a_p3287;
F.p3288 = a_p3288;
F.p3289_o = a_p3289;
F.p3290_o = a_p3290;
F.v7862 = Y_UNDEF_P;
F.v7864 = Y_UNDEF_P;
F.v7866 = Y_UNDEF_I;
F.v7868 = Y_UNDEF_I;
F.v7862 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line)));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_kind) == v891)) {
yr3927_StdCall(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_mval), F.p3286, F.p3288, &F.p3289, &F.p3290);
(*F.p3289_o) = F.p3289;
(*F.p3290_o) = F.p3290;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_kind) == v870)))) {
if (F.p3288) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line), y_str("a value is not a statement", 26));
}
yr3295_Denote(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_rep), F.p3286, &F.p3289, &F.p3290);
(*F.p3289_o) = F.p3289;
(*F.p3290_o) = F.p3290;
y_use = F.yu; return;
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_kind) == v876))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_name), y_str(" is not a routine", 17));
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7862)))).f_alt) == ((void *)0))) {
yr3191_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3286))).f_a), Y_DEFP(F.v7862), &F.v7866, &F.v7868);
F.v7864 = Y_DEFP(F.v7862);
} else {
yr3191_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3286))).f_a), ((void *)0), &F.v7866, &F.v7868);
F.v7864 = yr3177_Choose(Y_DEFP(F.v7862), Y_DEFI(F.v7866), Y_DEFI(F.v7868));
if ((Y_DEFP(F.v7864) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_name), y_str(": no definition takes actuals of these types", 44));
}
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v7864))))).f_mval) == INT64_C(0)))) {
yr3248_Directive(yr2447_Real(Y_DEFP(F.v7864)), F.p3286, Y_DEFI(F.v7866), Y_DEFI(F.v7868), &F.p3289, &F.p3290);
(*F.p3289_o) = F.p3289;
(*F.p3290_o) = F.p3290;
y_use = F.yu; return;
}
yr3241_NoteCall(Y_DEFP(F.v7864), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line));
F.p3289 = yr3215_CallCode(Y_DEFP(F.v7864), Y_DEFI(F.v7866), Y_DEFI(F.v7868), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line));
F.p3290 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7864)))).f_ret);
if ((F.p3288 && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3290)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_name), y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3288) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3290)))).f_kind) == v852)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3286))).f_name), y_str(" returns no value", 17));
}
(*F.p3289_o) = F.p3289;
(*F.p3290_o) = F.p3290;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3295_Denote(void * a_p3296, void * a_p3297, rt_int * a_p3298, void * * a_p3299) {
struct yf3300 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3296 = a_p3296;
F.p3297 = a_p3297;
F.p3298_o = a_p3298;
F.p3299_o = a_p3299;
F.v7881 = Y_UNDEF_P;
F.v7881 = Y_DEFP(((*(yR105 *)y_deref(F.p3297))).f_a);
F.v7883 = Y_UNDEF_P;
F.v7885 = Y_UNDEF_I;
F.v7887 = Y_UNDEF_I;
F.v7889 = Y_UNDEF_I;
F.v7891 = Y_UNDEF_P;
F.v7893 = Y_UNDEF_I;
F.v7895 = Y_UNDEF_I;
F.v7897 = Y_UNDEF_I;
F.v7899 = Y_UNDEF_I;
F.v7901 = Y_UNDEF_I;
F.v7901 = INT64_C(0);
F.v7904 = Y_UNDEF_I;
F.v7906 = Y_UNDEF_P;
F.v7908 = Y_UNDEF_I;
F.v7908 = 1;
F.p3299 = F.p3296;
if (Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_abstract)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_tname), y_str(" has no representation to denote a value of", 43));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_kind) == v825)) {
if (Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_tname), y_str(" is opaque here (X.B.3)", 23));
}
yr1026_SB();
yr1037_SA(y_str("((", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_cname));
yr1037_SA(y_str("){ ", 3));
F.v7887 = yr1056_SE();
F.v7883 = Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_fields);
while ((!(Y_DEFP(F.v7883) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_variant) == Y_DEFI(F.v7901))))) {
if ((Y_DEFP(F.v7881) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), y_str("too few components in this record value", 39));
}
yr3032_Expr(Y_DEFP(F.v7881), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_rep), &F.v7885, &F.v7891);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_line), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_rep), Y_DEFP(F.v7891));
if ((Y_DEFP(F.v7883) == Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_selector))) {
yr2884_Manifest(Y_DEFP(F.v7881), &F.v7899, &F.v7904);
if ((!Y_DEFI(F.v7899))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_line), y_str("the case-selection value is a manifest constant", 47));
}
F.v7901 = yr3304_VariantOf(F.p3296, Y_DEFI(F.v7904), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_line));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7887));
if ((!Y_DEFI(F.v7908))) {
yr1037_SA(y_str(", ", 2));
}
F.v7908 = 0;
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2965_Convert(Y_DEFI(F.v7885), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_rep), Y_DEFP(F.v7891)));
F.v7887 = yr1056_SE();
F.v7881 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_next);
}
F.v7883 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7883)))).f_next);
}
if ((!(Y_DEFP(F.v7881) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), y_str("too many components in this record value", 40));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str(" })", 3));
F.p3298 = yr1056_SE();
(*F.p3298_o) = F.p3298;
(*F.p3299_o) = F.p3299;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_kind) == v822)) {
F.v7893 = yr2008_Count(Y_DEFP(F.v7881));
F.v7887 = yr1200_Fresh(y_str("da", 2));
if ((Y_DEFI(F.v7893) == INT64_C(1))) {
yr3032_Expr(Y_DEFP(F.v7881), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), &F.v7885, &F.v7891);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), Y_DEFP(F.v7891));
F.v7889 = yr1200_Fresh(y_str("dv", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7889));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2965_Convert(Y_DEFI(F.v7885), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), Y_DEFP(F.v7891)));
yr1037_SA(y_str("; y_fill(", 9));
yr1044_ST(yr2521_DescOf(F.p3296));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7889));
yr1037_SA(y_str("); })", 5));
F.p3298 = yr1056_SE();
(*F.p3298_o) = F.p3298;
(*F.p3299_o) = F.p3299;
y_use = F.yu; return;
}
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str("; y_init(", 9));
yr1044_ST(yr2521_DescOf(F.p3296));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1050_SI(Y_DEFI(F.v7893));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("wrong number of components", 26));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
F.p3298 = yr1056_SE();
F.v7897 = INT64_C(0);
while ((!(Y_DEFP(F.v7881) == ((void *)0)))) {
Y_TICK();
yr3032_Expr(Y_DEFP(F.v7881), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), &F.v7885, &F.v7891);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), Y_DEFP(F.v7891));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3298));
if (yr2490_Deep(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem))) {
yr1037_SA(y_str(" { ", 3));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(" dv = ", 6));
yr1044_ST(Y_DEFI(F.v7885));
yr1037_SA(y_str("; y_copy(", 9));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(", &((", 5));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v7897));
yr1037_SA(y_str("], &dv); }", 10));
} else {
yr1037_SA(y_str(" ((", 3));
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v7897));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2965_Convert(Y_DEFI(F.v7885), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), Y_DEFP(F.v7891)));
yr1037_SA(y_str(";", 1));
}
F.p3298 = yr1056_SE();
F.v7897 = y_range(y_add(Y_DEFI(F.v7897), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7881 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3298));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7887));
yr1037_SA(y_str("; })", 4));
F.p3298 = yr1056_SE();
(*F.p3298_o) = F.p3298;
(*F.p3299_o) = F.p3299;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_kind) == v834)) {
yr1026_SB();
yr1037_SA(y_str("y_set_new(", 10));
yr1044_ST(yr2596_LoText(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2602_HiText(Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem)));
yr1037_SA(y_str(")", 1));
F.p3298 = yr1056_SE();
while ((!(Y_DEFP(F.v7881) == ((void *)0)))) {
Y_TICK();
yr3032_Expr(Y_DEFP(F.v7881), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), &F.v7885, &F.v7891);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3296))).f_elem), Y_DEFP(F.v7891));
F.p3298 = yr3121_Call2(y_str("y_set_add", 9), Y_DEFI(F.p3298), Y_DEFI(F.v7885));
F.v7881 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7881)))).f_next);
}
(*F.p3298_o) = F.p3298;
(*F.p3299_o) = F.p3299;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3297))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3296))).f_tname), y_str(" has no denotations of values", 29));
(*F.p3298_o) = F.p3298;
(*F.p3299_o) = F.p3299;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3304_VariantOf(void * a_p3305, rt_int a_p3306, rt_int a_p3307) {
struct yf3308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3305 = a_p3305;
F.p3306 = a_p3306;
F.p3307 = a_p3307;
F.v7970 = Y_UNDEF_P;
F.v7970 = Y_DEFP(((*(yR110 *)y_deref(F.p3305))).f_fields);
F.v7972 = Y_UNDEF_P;
F.v7974 = Y_UNDEF_I;
F.v7976 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7970) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7970)))).f_variant) == INT64_C(0)))) {
F.v7972 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7970)))).f_labels);
while ((!(Y_DEFP(F.v7972) == ((void *)0)))) {
Y_TICK();
yr2884_Manifest(Y_DEFP(F.v7972), &F.v7974, &F.v7976);
if ((Y_DEFI(F.v7974) && ((Y_DEFI(F.v7976) == F.p3306)))) {
{ rt_int rv7978 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7970)))).f_variant);
y_use = F.yu; return rv7978; }
}
F.v7972 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7972)))).f_next);
}
}
F.v7970 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7970)))).f_next);
}
{ rt_int rv7980 = INT64_C(-1);
y_use = F.yu; return rv7980; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3312_Emit2(yarr a_p3314, rt_int a_p3315) {
struct yf3316 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3314 = a_p3314;
F.p3315 = a_p3315;
F.v7985 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3314);
yr1044_ST(F.p3315);
F.v7985 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v7985));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3320_Emit3(yarr a_p3322, rt_int a_p3323, yarr a_p3325) {
struct yf3326 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3322 = a_p3322;
F.p3323 = a_p3323;
F.p3325 = a_p3325;
F.v7991 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3322);
yr1044_ST(F.p3323);
yr1037_SA(F.p3325);
F.v7991 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v7991));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3330_PopTo(rt_int a_p3331) {
struct yf3332 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3331 = a_p3331;
if ((Y_DEFI(v1565) > F.p3331)) {
yr3320_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1563).p)[y_ix1(v1563, y_add(F.p3331, INT64_C(1)))]), y_str(".prev;", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3336_LeaveBlock(void) {
struct yf3337 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFI(v1593) > INT64_C(0))) {
if ((!(Y_DEFI(((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))]) == INT64_C(0)))) {
yr3320_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))]), y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3341_RaiseCode(rt_int a_p3342) {
struct yf3343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3342 = a_p3342;
yr1026_SB();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
yr1031_SC(34);
yr1044_ST(F.p3342);
yr1031_SC(34);
yr1037_SA(y_str("));", 3));
{ rt_int rv8009 = yr1056_SE();
y_use = F.yu; return rv8009; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3347_BlockStatements(void * a_p3348) {
struct yf3349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3348 = a_p3348;
F.v8013 = Y_UNDEF_I;
F.v8013 = Y_DEFI(v1675);
yr3353_BlockStatements1(F.p3348);
v1675 = Y_DEFI(F.v8013);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3353_BlockStatements1(void * a_p3354) {
struct yf3355 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3354 = a_p3354;
F.v8017 = Y_UNDEF_I;
F.v8019 = Y_UNDEF_I;
F.v8021 = Y_UNDEF_I;
F.v8023 = Y_UNDEF_P;
F.v8025 = Y_UNDEF_P;
F.v8027 = Y_UNDEF_I;
F.v8029 = Y_UNDEF_P;
F.v8029 = Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_a);
F.v8031 = Y_UNDEF_I;
F.v8031 = INT64_C(0);
while ((!(Y_DEFP(F.v8029) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8029)))).f_kind) == v645)) && ((Y_DEFI(F.v8031) == INT64_C(0))))) {
F.v8031 = yr1200_Fresh(y_str("xs", 2));
yr3320_Emit3(y_str("rt_frame *", 10), Y_DEFI(F.v8031), y_str(" = rt_xtop;", 11));
}
F.v8029 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8029)))).f_next);
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_b) == ((void *)0))) {
v1593 = y_range(y_add(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))] = INT64_C(0);
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1593))] = Y_DEFI(F.v8031);
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_c));
v1593 = y_range(y_sub(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3474_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_a));
y_use = F.yu; return;
}
v1669 = 1;
F.v8017 = yr1200_Fresh(y_str("xf", 2));
yr3320_Emit3(y_str("{ rt_frame ", 11), Y_DEFI(F.v8017), y_str(";", 1));
yr3320_Emit3(y_str("if (RT_TRY(", 11), Y_DEFI(F.v8017), y_str(")) {", 4));
v1565 = y_range(y_add(Y_DEFI(v1565), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1563).p)[y_ix1(v1563, Y_DEFI(v1565))] = Y_DEFI(F.v8017);
v1593 = y_range(y_add(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))] = Y_DEFI(F.v8017);
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1593))] = Y_DEFI(F.v8031);
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_c));
v1593 = y_range(y_sub(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1565 = y_range(y_sub(Y_DEFI(v1565), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3474_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_a));
yr3320_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8017), y_str(");", 2));
yr1138_EmitS(y_str("} else {", 8));
yr3320_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v8017), y_str(");", 2));
if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
}
F.v8019 = yr1200_Fresh(y_str("xc", 2));
yr3320_Emit3(y_str("int ", 4), Y_DEFI(F.v8019), y_str(" = rt_xcur;", 11));
v1593 = y_range(y_add(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))] = INT64_C(0);
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1593))] = INT64_C(0);
v1607 = y_range(y_add(Y_DEFI(v1607), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1605).p)[y_ix1(v1605, Y_DEFI(v1607))] = Y_DEFI(F.v8019);
F.v8027 = 1;
F.v8023 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8023) == ((void *)0)))) {
Y_TICK();
yr1026_SB();
if (Y_DEFI(F.v8027)) {
yr1037_SA(y_str("if (", 4));
} else {
yr1037_SA(y_str("} else if (", 11));
}
F.v8027 = 0;
F.v8025 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8023)))).f_a);
while ((!(Y_DEFP(F.v8025) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(F.v8019));
yr1037_SA(y_str(" == rt_exc(", 11));
yr1031_SC(34);
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8025)))).f_name));
yr1031_SC(34);
yr1037_SA(y_str(")", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8025)))).f_next) == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
}
F.v8025 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8025)))).f_next);
}
yr1037_SA(y_str(") {", 3));
F.v8021 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8021));
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8023)))).f_b));
F.v8023 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8023)))).f_next);
}
if ((!Y_DEFI(F.v8027))) {
yr1138_EmitS(y_str("} else {", 8));
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_b)))).f_flag) == INT64_C(1))) {
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3354))).f_b)))).f_b));
} else {
yr3320_Emit3(y_str("rt_raise(", 9), Y_DEFI(F.v8019), y_str(");", 2));
}
if ((!Y_DEFI(F.v8027))) {
yr1138_EmitS(y_str("}", 1));
}
v1607 = y_range(y_sub(Y_DEFI(v1607), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1593 = y_range(y_sub(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3359_SameDesig(void * a_p3360, void * a_p3361) {
struct yf3362 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3360 = a_p3360;
F.p3361 = a_p3361;
F.v8097 = Y_UNDEF_P;
F.v8099 = Y_UNDEF_P;
F.v8101 = Y_UNDEF_I;
F.v8103 = Y_UNDEF_I;
F.v8105 = Y_UNDEF_I;
F.v8107 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_kind) == v801)) {
{ rt_int rv8108 = yr3359_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3360))).f_a), F.p3361);
y_use = F.yu; return rv8108; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3361))).f_kind) == v801)) {
{ rt_int rv8109 = yr3359_SameDesig(F.p3360, Y_DEFP(((*(yR105 *)y_deref(F.p3361))).f_a));
y_use = F.yu; return rv8109; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(F.p3361))).f_kind)))) {
{ rt_int rv8111 = 0;
y_use = F.yu; return rv8111; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_kind) == v777)) {
{ rt_int rv8112 = ((((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3361))).f_name))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3360))).f_d) == ((void *)0)))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3361))).f_d) == ((void *)0))));
y_use = F.yu; return rv8112; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_kind) == v783)) {
{ rt_int rv8113 = (((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3361))).f_name))) && yr3359_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3360))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3361))).f_a)));
y_use = F.yu; return rv8113; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_kind) == v789)) {
{ rt_int rv8114 = yr3359_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3360))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3361))).f_a));
y_use = F.yu; return rv8114; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3360))).f_kind) == v786)) {
if ((!yr3359_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3360))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3361))).f_a)))) {
{ rt_int rv8116 = 0;
y_use = F.yu; return rv8116; }
}
F.v8097 = Y_DEFP(((*(yR105 *)y_deref(F.p3360))).f_b);
F.v8099 = Y_DEFP(((*(yR105 *)y_deref(F.p3361))).f_b);
while ((((!(Y_DEFP(F.v8097) == ((void *)0)))) && ((!(Y_DEFP(F.v8099) == ((void *)0)))))) {
Y_TICK();
yr2884_Manifest(Y_DEFP(F.v8097), &F.v8101, &F.v8105);
yr2884_Manifest(Y_DEFP(F.v8099), &F.v8103, &F.v8107);
if ((Y_DEFI(F.v8101) && Y_DEFI(F.v8103))) {
if ((!(Y_DEFI(F.v8105) == Y_DEFI(F.v8107)))) {
{ rt_int rv8118 = 0;
y_use = F.yu; return rv8118; }
}
} else if ((!yr3359_SameDesig(Y_DEFP(F.v8097), Y_DEFP(F.v8099)))) {
{ rt_int rv8120 = 0;
y_use = F.yu; return rv8120; }
}
F.v8097 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8097)))).f_next);
F.v8099 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8099)))).f_next);
}
{ rt_int rv8121 = (((Y_DEFP(F.v8097) == ((void *)0))) && ((Y_DEFP(F.v8099) == ((void *)0))));
y_use = F.yu; return rv8121; }
}
{ rt_int rv8123 = 0;
y_use = F.yu; return rv8123; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3366_CheckVariantSelected(void * a_p3367, void * a_p3368, void * a_p3369) {
struct yf3370 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3367 = a_p3367;
F.p3368 = a_p3368;
F.p3369 = a_p3369;
F.v8129 = Y_UNDEF_I;
F.v8129 = Y_DEFI(v1655);
F.v8131 = Y_UNDEF_P;
F.v8133 = Y_UNDEF_P;
F.v8135 = Y_UNDEF_P;
F.v8137 = Y_UNDEF_I;
F.v8139 = Y_UNDEF_I;
F.v8141 = Y_UNDEF_I;
F.v8143 = Y_UNDEF_I;
while ((Y_DEFI(F.v8129) > INT64_C(0))) {
Y_TICK();
F.v8131 = Y_DEFP(((void * *)(v1651).p)[y_ix1(v1651, Y_DEFI(F.v8129))]);
while ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8131)))).f_kind) == v801)) {
Y_TICK();
F.v8131 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8131)))).f_a);
}
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8131)))).f_kind) == v783)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8131)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3368))).f_selector)))).f_name)))) && yr3359_SameDesig(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8131)))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3367))).f_a)))) {
F.v8133 = Y_DEFP(((void * *)(v1653).p)[y_ix1(v1653, Y_DEFI(F.v8129))]);
if ((Y_DEFP(F.v8133) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3367))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3367))).f_name), y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(Y_DEFP(F.v8133) == ((void *)0)))) {
Y_TICK();
F.v8137 = yr3418_Label(Y_DEFP(F.v8133), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3368))).f_selector)))).f_rep));
F.v8143 = 0;
F.v8135 = Y_DEFP(((*(yR115 *)y_deref(F.p3369))).f_labels);
while ((!(Y_DEFP(F.v8135) == ((void *)0)))) {
Y_TICK();
yr2884_Manifest(Y_DEFP(F.v8135), &F.v8141, &F.v8139);
if ((Y_DEFI(F.v8141) && ((Y_DEFI(F.v8139) == Y_DEFI(F.v8137))))) {
F.v8143 = 1;
}
F.v8135 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8135)))).f_next);
}
if ((!Y_DEFI(F.v8143))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3367))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3367))).f_name), y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v8133 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8133)))).f_next);
}
y_use = F.yu; return;
}
F.v8129 = y_range(y_sub(Y_DEFI(F.v8129), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3367))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3367))).f_name), y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3374_CheckCaseLabels(void * a_p3375, void * a_p3376) {
struct yf3377 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3375 = a_p3375;
F.p3376 = a_p3376;
F.v8156 = Y_UNDEF_P;
F.v8156 = Y_DEFP(((*(yR105 *)y_deref(F.p3375))).f_b);
F.v8158 = Y_UNDEF_P;
F.v8158 = Y_DEFP(((*(yR105 *)y_deref(F.p3375))).f_b);
F.v8160 = Y_UNDEF_I;
F.v8160 = INT64_C(0);
F.v8163 = Y_UNDEF_I;
F.v8163 = INT64_C(0);
while ((!(Y_DEFP(F.v8156) == ((void *)0)))) {
Y_TICK();
F.v8158 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8156)))).f_a);
while ((!(Y_DEFP(F.v8158) == ((void *)0)))) {
Y_TICK();
F.v8163 = yr3418_Label(Y_DEFP(F.v8158), F.p3376);
F.lo8168 = INT64_C(1);
F.hi8169 = Y_DEFI(F.v8160);
{ rt_int hi8173 = F.hi8169;
for (rt_int i8172 = F.lo8168; i8172 <= hi8173; i8172++) { F.c_8171 = i8172; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1667).p)[y_ix1(v1667, F.c_8171)]) == Y_DEFI(F.v8163))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8158)))).f_line), y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i8172 == hi8173) break;
}}
if ((Y_DEFI(F.v8160) < INT64_C(4096))) {
F.v8160 = y_range(y_add(Y_DEFI(F.v8160), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1667).p)[y_ix1(v1667, Y_DEFI(F.v8160))] = Y_DEFI(F.v8163);
}
F.v8158 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8158)))).f_next);
}
F.v8156 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8156)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3381_Falls(void * a_p3382) {
struct yf3383 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3382 = a_p3382;
F.v8181 = Y_UNDEF_P;
F.v8181 = F.p3382;
F.v8183 = Y_UNDEF_I;
F.v8183 = 1;
while ((!(Y_DEFP(F.v8181) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8181)))).f_text) == INT64_C(0)))) {
F.v8183 = 1;
}
if (Y_DEFI(F.v8183)) {
F.v8183 = yr3393_Completes(Y_DEFP(F.v8181));
}
F.v8181 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8181)))).f_next);
}
{ rt_int rv8187 = Y_DEFI(F.v8183);
y_use = F.yu; return rv8187; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3387_BlockFalls(void * a_p3388) {
struct yf3389 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3388 = a_p3388;
F.v8191 = Y_UNDEF_P;
if (yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3388))).f_c))) {
{ rt_int rv8193 = 1;
y_use = F.yu; return rv8193; }
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3388))).f_b) == ((void *)0))) {
{ rt_int rv8195 = 0;
y_use = F.yu; return rv8195; }
}
F.v8191 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3388))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8191) == ((void *)0)))) {
Y_TICK();
if (yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8191)))).f_b))) {
{ rt_int rv8197 = 1;
y_use = F.yu; return rv8197; }
}
F.v8191 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8191)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3388))).f_b)))).f_flag) == INT64_C(1))) {
{ rt_int rv8199 = yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3388))).f_b)))).f_b));
y_use = F.yu; return rv8199; }
}
{ rt_int rv8201 = 0;
y_use = F.yu; return rv8201; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3393_Completes(void * a_p3394) {
struct yf3395 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3394 = a_p3394;
F.v8205 = Y_UNDEF_I;
F.v8205 = Y_DEFI(((*(yR105 *)y_deref(F.p3394))).f_kind);
F.v8207 = Y_UNDEF_P;
F.v8209 = Y_UNDEF_I;
F.v8211 = Y_UNDEF_I;
if (((((((Y_DEFI(F.v8205) == v729)) || ((Y_DEFI(F.v8205) == v732))) || ((Y_DEFI(F.v8205) == v735))) || ((Y_DEFI(F.v8205) == v723))) || ((Y_DEFI(F.v8205) == v726)))) {
{ rt_int rv8213 = 0;
y_use = F.yu; return rv8213; }
}
if ((Y_DEFI(F.v8205) == v738)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3394))).f_flag) == INT64_C(1)))) {
{ rt_int rv8216 = 1;
y_use = F.yu; return rv8216; }
}
F.v8207 = Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_a);
while ((!(Y_DEFP(F.v8207) == ((void *)0)))) {
Y_TICK();
if (yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8207)))).f_b))) {
{ rt_int rv8218 = 1;
y_use = F.yu; return rv8218; }
}
F.v8207 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8207)))).f_next);
}
{ rt_int rv8219 = yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_b));
y_use = F.yu; return rv8219; }
}
if ((Y_DEFI(F.v8205) == v741)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3394))).f_flag) == INT64_C(1)))) {
{ rt_int rv8222 = 1;
y_use = F.yu; return rv8222; }
}
F.v8207 = Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_b);
while ((!(Y_DEFP(F.v8207) == ((void *)0)))) {
Y_TICK();
if (yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8207)))).f_b))) {
{ rt_int rv8224 = 1;
y_use = F.yu; return rv8224; }
}
F.v8207 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8207)))).f_next);
}
{ rt_int rv8225 = yr3381_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_c));
y_use = F.yu; return rv8225; }
}
if ((Y_DEFI(F.v8205) == v744)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_a), &F.v8209, &F.v8211);
{ rt_int rv8227 = (!((Y_DEFI(F.v8209) && ((Y_DEFI(F.v8211) == INT64_C(1))))));
y_use = F.yu; return rv8227; }
}
if ((Y_DEFI(F.v8205) == v750)) {
{ rt_int rv8228 = yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3394))).f_name));
y_use = F.yu; return rv8228; }
}
if ((Y_DEFI(F.v8205) == v753)) {
{ rt_int rv8229 = yr3387_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3394))).f_a));
y_use = F.yu; return rv8229; }
}
{ rt_int rv8231 = 1;
y_use = F.yu; return rv8231; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3399_Exits(void * a_p3400, rt_int a_p3401) {
struct yf3402 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3400 = a_p3400;
F.p3401 = a_p3401;
F.v8236 = Y_UNDEF_P;
F.v8236 = F.p3400;
F.v8238 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8236) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v726)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_name) == F.p3401)))) {
{ rt_int rv8240 = 1;
y_use = F.yu; return rv8240; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v738)) {
F.v8238 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_a);
while ((!(Y_DEFP(F.v8238) == ((void *)0)))) {
Y_TICK();
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8238)))).f_b), F.p3401)) {
{ rt_int rv8242 = 1;
y_use = F.yu; return rv8242; }
}
F.v8238 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8238)))).f_next);
}
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_b), F.p3401)) {
{ rt_int rv8244 = 1;
y_use = F.yu; return rv8244; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v741)) {
F.v8238 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_b);
while ((!(Y_DEFP(F.v8238) == ((void *)0)))) {
Y_TICK();
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8238)))).f_b), F.p3401)) {
{ rt_int rv8246 = 1;
y_use = F.yu; return rv8246; }
}
F.v8238 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8238)))).f_next);
}
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_c), F.p3401)) {
{ rt_int rv8248 = 1;
y_use = F.yu; return rv8248; }
}
} else if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v744)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v747))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v750)))) {
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_b), F.p3401)) {
{ rt_int rv8250 = 1;
y_use = F.yu; return rv8250; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_kind) == v753)) {
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_a)))).f_c), F.p3401)) {
{ rt_int rv8252 = 1;
y_use = F.yu; return rv8252; }
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_a)))).f_b) == ((void *)0)))) {
F.v8238 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_a)))).f_b)))).f_a);
while ((!(Y_DEFP(F.v8238) == ((void *)0)))) {
Y_TICK();
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8238)))).f_b), F.p3401)) {
{ rt_int rv8254 = 1;
y_use = F.yu; return rv8254; }
}
F.v8238 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8238)))).f_next);
}
if (yr3399_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_a)))).f_b)))).f_b), F.p3401)) {
{ rt_int rv8256 = 1;
y_use = F.yu; return rv8256; }
}
}
}
F.v8236 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8236)))).f_next);
}
{ rt_int rv8258 = 0;
y_use = F.yu; return rv8258; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3406_Statements(void * a_p3407) {
struct yf3408 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3407 = a_p3407;
F.v8262 = Y_UNDEF_P;
F.v8262 = F.p3407;
while ((!(Y_DEFP(F.v8262) == ((void *)0)))) {
Y_TICK();
yr3430_Statement(Y_DEFP(F.v8262));
F.v8262 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8262)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3412_Cond(void * a_p3413) {
struct yf3414 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3413 = a_p3413;
F.v8266 = Y_UNDEF_I;
F.v8268 = Y_UNDEF_P;
yr3032_Expr(F.p3413, Y_DEFP(v1344), &F.v8266, &F.v8268);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3413))).f_line), Y_DEFP(v1344), Y_DEFP(F.v8268));
{ rt_int rv8269 = Y_DEFI(F.v8266);
y_use = F.yu; return rv8269; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3418_Label(void * a_p3419, void * a_p3420) {
struct yf3421 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3419 = a_p3419;
F.p3420 = a_p3420;
F.v8274 = Y_UNDEF_I;
F.v8276 = Y_UNDEF_I;
F.v8278 = Y_UNDEF_P;
F.v8280 = Y_UNDEF_P;
F.v8282 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR105 *)y_deref(F.p3419))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3419))).f_d) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3420))).f_kind) == v816)))) {
F.v8278 = yr2407_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3419))).f_name), F.p3420);
if ((!(Y_DEFP(F.v8278) == ((void *)0)))) {
{ rt_int rv8283 = Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v8278))))).f_mval);
y_use = F.yu; return rv8283; }
}
}
yr3032_Expr(F.p3419, F.p3420, &F.v8282, &F.v8280);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3419))).f_line), F.p3420, Y_DEFP(F.v8280));
yr2884_Manifest(F.p3419, &F.v8274, &F.v8276);
if ((!Y_DEFI(F.v8274))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3419))).f_line), y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv8285 = Y_DEFI(F.v8276);
y_use = F.yu; return rv8285; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3425_CopyOut(void) {
struct yf3426 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8288 = Y_UNDEF_P;
F.v8290 = Y_UNDEF_I;
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
F.v8288 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_params);
while ((!(Y_DEFP(F.v8288) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_cls) == v900)) {
yr1026_SB();
yr1037_SA(y_str("(*F.", 4));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_cname));
yr1037_SA(y_str("_o)", 3));
F.v8290 = yr1056_SE();
if ((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_path) == INT64_C(0)))) {
yr3275_Assign(Y_DEFI(F.v8290), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_rep), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_path), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_rep), INT64_C(0));
} else {
yr3275_Assign(Y_DEFI(F.v8290), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_rep), yr2421_Path(Y_DEFI(v1279), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_cname)), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_rep), INT64_C(0));
}
}
F.v8288 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8288)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3430_Statement(void * a_p3431) {
struct yf3432 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3431 = a_p3431;
F.v8299 = Y_UNDEF_I;
F.v8299 = Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_kind);
F.v8301 = Y_UNDEF_I;
F.v8303 = Y_UNDEF_I;
F.v8305 = Y_UNDEF_I;
F.v8307 = Y_UNDEF_I;
F.v8309 = Y_UNDEF_I;
F.v8311 = Y_UNDEF_I;
F.v8313 = Y_UNDEF_P;
F.v8315 = Y_UNDEF_P;
F.v8317 = Y_UNDEF_P;
F.v8319 = Y_UNDEF_P;
F.v8321 = Y_UNDEF_I;
F.v8323 = Y_UNDEF_I;
F.v8325 = Y_UNDEF_I;
F.v8327 = Y_UNDEF_I;
F.v8329 = Y_UNDEF_P;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_text) == INT64_C(0)))) {
yr3462_PlaceLabel(F.p3431);
}
if ((Y_DEFI(F.v8299) == v714)) {
yr3005_LValue(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a), &F.v8301, &F.v8313);
yr2999_CheckPure(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a));
yr3497_NoteWrite(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8313)))).f_kind) == v837)) || yr2503_HoldsSignal(Y_DEFP(F.v8313)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2509_NonAssignable(Y_DEFP(F.v8313))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_b), Y_DEFP(F.v8313), &F.v8303, &F.v8315);
F.v8305 = yr3265_UserAssign(Y_DEFI(F.v8301), Y_DEFP(F.v8313), Y_DEFI(F.v8303), Y_DEFP(F.v8315), Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line));
if ((!(Y_DEFI(F.v8305) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v8305));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8313)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8313)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8313)))).f_tname), y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2983_Store(Y_DEFI(F.v8301), Y_DEFP(F.v8313), Y_DEFI(F.v8303), Y_DEFP(F.v8315), Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line));
}
} else if ((Y_DEFI(F.v8299) == v717)) {
F.v8329 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a)))).f_name));
if ((!(Y_DEFP(F.v8329) == ((void *)0)))) {
F.v8329 = yr2447_Real(Y_DEFP(F.v8329));
}
if (((((!(Y_DEFP(F.v8329) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8329)))).f_kind) == v885))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8329)))).f_hasmv))) {
yr3191_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a)))).f_a), Y_DEFP(F.v8329), &F.v8325, &F.v8327);
yr1132_Emit(yr3442_Join(yr3215_CallCode(Y_DEFP(F.v8329), Y_DEFI(F.v8325), Y_DEFI(F.v8327), Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line)), yr1061_T(y_str(";", 1)), INT64_C(0)));
} else if ((((!(Y_DEFP(F.v8329) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8329)))).f_kind) == v885)))) {
yr3806_Activate(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a), Y_DEFP(F.v8329));
} else {
yr3285_CallExpr(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a), ((void *)0), 1, &F.v8301, &F.v8313);
yr3312_Emit2(y_str("", 0), Y_DEFI(F.v8301));
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8301));
yr1037_SA(y_str(";", 1));
F.v8305 = yr1056_SE();
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = Y_DEFI(F.v8305);
}
} else if ((Y_DEFI(F.v8299) == v738)) {
F.v8321 = 1;
F.v8317 = Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a);
while ((!(Y_DEFP(F.v8317) == ((void *)0)))) {
Y_TICK();
F.v8301 = yr3412_Cond(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_a));
if (Y_DEFI(F.v8321)) {
yr3320_Emit3(y_str("if (", 4), Y_DEFI(F.v8301), y_str(") {", 3));
} else {
yr3320_Emit3(y_str("} else if (", 11), Y_DEFI(F.v8301), y_str(") {", 3));
}
F.v8321 = 0;
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_b));
F.v8317 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_flag) == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_b));
}
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8299) == v744)) {
F.v8301 = yr3412_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a));
yr3320_Emit3(y_str("while (", 7), Y_DEFI(F.v8301), y_str(") {", 3));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_b));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8299) == v750)) {
F.v8307 = yr1200_Fresh(y_str("yl_", 3));
v1634 = y_range(y_add(Y_DEFI(v1634), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1619).p)[y_ix1(v1619, Y_DEFI(v1634))] = Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_name);
((rt_int *)(v1621).p)[y_ix1(v1621, Y_DEFI(v1634))] = Y_DEFI(F.v8307);
((rt_int *)(v1632).p)[y_ix1(v1632, Y_DEFI(v1634))] = Y_DEFI(v1565);
yr1138_EmitS(y_str("for (;;) {", 10));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_b));
yr1138_EmitS(y_str("}", 1));
yr3320_Emit3(y_str("", 0), Y_DEFI(F.v8307), y_str(": ;", 3));
v1634 = y_range(y_sub(Y_DEFI(v1634), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v8299) == v726)) {
F.v8323 = 0;
F.v8325 = Y_DEFI(v1634);
while ((((Y_DEFI(F.v8325) > Y_DEFI(v1637))) && (!Y_DEFI(F.v8323)))) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v1619).p)[y_ix1(v1619, Y_DEFI(F.v8325))]) == Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_name))) {
F.v8323 = 1;
yr3330_PopTo(Y_DEFI(((rt_int *)(v1632).p)[y_ix1(v1632, Y_DEFI(F.v8325))]));
yr3320_Emit3(y_str("goto ", 5), Y_DEFI(((rt_int *)(v1621).p)[y_ix1(v1621, Y_DEFI(F.v8325))]), y_str(";", 1));
}
F.v8325 = y_range(y_sub(Y_DEFI(F.v8325), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!Y_DEFI(F.v8323))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_name), y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((Y_DEFI(F.v8299) == v747)) {
yr3436_ForStatement(F.p3431);
} else if ((Y_DEFI(F.v8299) == v741)) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a), ((void *)0), &F.v8301, &F.v8313);
if ((!yr2466_IsDiscrete(Y_DEFP(F.v8313)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3374_CheckCaseLabels(F.p3431, Y_DEFP(F.v8313));
yr3320_Emit3(y_str("switch (", 8), Y_DEFI(F.v8301), y_str(") {", 3));
F.v8317 = Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_b);
while ((!(Y_DEFP(F.v8317) == ((void *)0)))) {
Y_TICK();
F.v8319 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_a);
while ((!(Y_DEFP(F.v8319) == ((void *)0)))) {
Y_TICK();
F.v8327 = yr3418_Label(Y_DEFP(F.v8319), Y_DEFP(F.v8313));
yr1026_SB();
yr1037_SA(y_str("case ", 5));
yr1050_SI(Y_DEFI(F.v8327));
yr1037_SA(y_str(":", 1));
F.v8305 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8305));
F.v8319 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8319)))).f_next);
}
yr1138_EmitS(y_str("{", 1));
v1655 = y_range(y_add(Y_DEFI(v1655), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1651).p)[y_ix1(v1651, Y_DEFI(v1655))] = Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a);
((void * *)(v1653).p)[y_ix1(v1653, Y_DEFI(v1655))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_a);
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_b));
v1655 = y_range(y_sub(Y_DEFI(v1655), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
F.v8317 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8317)))).f_next);
}
yr1138_EmitS(y_str("default: {", 10));
v1655 = y_range(y_add(Y_DEFI(v1655), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1651).p)[y_ix1(v1651, Y_DEFI(v1655))] = Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a);
((void * *)(v1653).p)[y_ix1(v1653, Y_DEFI(v1655))] = ((void *)0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_flag) == INT64_C(1))) {
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_c));
}
v1655 = y_range(y_sub(Y_DEFI(v1655), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8299) == v729)) {
yr3450_ReturnStatement(F.p3431);
} else if ((Y_DEFI(F.v8299) == v735)) {
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_name) == INT64_C(0))) {
if ((Y_DEFI(v1607) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3320_Emit3(y_str("rt_raise(", 9), Y_DEFI(((rt_int *)(v1605).p)[y_ix1(v1605, Y_DEFI(v1607))]), y_str(");", 2));
} else {
yr3336_LeaveBlock();
yr1132_Emit(yr3341_RaiseCode(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_name)));
}
} else if ((((Y_DEFI(F.v8299) == v720)) && yr3259_Suppressed(v1486))) {
F.v8325 = INT64_C(0);
} else if ((Y_DEFI(F.v8299) == v720)) {
F.v8325 = Y_DEFI(v1672);
F.v8301 = yr3412_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3431))).f_a));
if ((!(Y_DEFI(v1672) == Y_DEFI(F.v8325)))) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3320_Emit3(y_str("if (!(", 6), Y_DEFI(F.v8301), y_str(")) {", 4));
yr3336_LeaveBlock();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((Y_DEFI(F.v8299) == v753)) {
yr3456_BeginStatement(F.p3431);
} else if ((Y_DEFI(F.v8299) == v732)) {
yr3836_TerminateStatement(F.p3431);
} else if ((Y_DEFI(F.v8299) == v723)) {
yr3468_GotoStatement(F.p3431);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3431))).f_line), y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3436_ForStatement(void * a_p3437) {
struct yf3438 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3437 = a_p3437;
F.v8406 = Y_UNDEF_P;
F.v8408 = Y_UNDEF_I;
F.v8410 = Y_UNDEF_I;
F.v8412 = Y_UNDEF_I;
F.v8414 = Y_UNDEF_P;
F.v8406 = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_a), INT64_C(0), 0);
if ((((!yr2466_IsDiscrete(Y_DEFP(F.v8406))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8406)))).f_kind) == v813))) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8406)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8406)))).f_ordered)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3437))).f_line), y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2556_CheckRepresented(Y_DEFP(F.v8406), Y_DEFI(((*(yR105 *)y_deref(F.p3437))).f_line));
yr2319_OpenScope(0);
F.v8414 = yr2312_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(F.p3437))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v8414)))).f_rep = Y_DEFP(F.v8406);
((*(yR125 *)y_deref(Y_DEFP(F.v8414)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v8414)))).f_cname = yr1200_Fresh(y_str("c_", 2));
yr2434_DeclStorage(yr1061_T(y_str("rt_int", 6)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8414)))).f_cname));
yr2414_Define(Y_DEFP(F.v8414), Y_DEFI(((*(yR105 *)y_deref(F.p3437))).f_line));
F.v8408 = yr1200_Fresh(y_str("i", 1));
F.v8410 = yr1200_Fresh(y_str("hi", 2));
yr1026_SB();
yr1037_SA(y_str("{ rt_int ", 9));
yr1044_ST(Y_DEFI(F.v8410));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2602_HiText(Y_DEFP(F.v8406)));
yr1037_SA(y_str(";", 1));
F.v8412 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8412));
yr1026_SB();
yr1037_SA(y_str("for (rt_int ", 12));
yr1044_ST(Y_DEFI(F.v8408));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2596_LoText(Y_DEFP(F.v8406)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8408));
yr1037_SA(y_str(" <= ", 4));
yr1044_ST(Y_DEFI(F.v8410));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8408));
yr1037_SA(y_str("++) { ", 6));
yr1044_ST(yr2441_SymPath(Y_DEFP(F.v8414)));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v8408));
yr1037_SA(y_str("; Y_TICK();", 11));
F.v8412 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8412));
yr3406_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3437))).f_b));
yr3320_Emit3(y_str("if (", 4), Y_DEFI(F.v8408), y_str(" == ", 4));
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = yr3442_Join(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t), Y_DEFI(F.v8410), yr1061_T(y_str(") break;", 8)));
yr1138_EmitS(y_str("}}", 2));
yr2331_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3442_Join(rt_int a_p3443, rt_int a_p3444, rt_int a_p3445) {
struct yf3446 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3443 = a_p3443;
F.p3444 = a_p3444;
F.p3445 = a_p3445;
yr1026_SB();
yr1044_ST(F.p3443);
yr1044_ST(F.p3444);
yr1044_ST(F.p3445);
{ rt_int rv8442 = yr1056_SE();
y_use = F.yu; return rv8442; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3450_ReturnStatement(void * a_p3451) {
struct yf3452 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3451 = a_p3451;
F.v8446 = Y_UNDEF_I;
F.v8448 = Y_UNDEF_I;
F.v8450 = Y_UNDEF_I;
F.v8452 = Y_UNDEF_P;
F.v8454 = Y_UNDEF_P;
if ((Y_DEFP(v1640) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3451))).f_line), y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_kind) == v885)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3451))).f_line), y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v8454 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_ret);
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3451))).f_a) == ((void *)0))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8454)))).f_kind) == v852))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3451))).f_line), y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3425_CopyOut();
yr3831_LeaveMonitor();
yr3330_PopTo(Y_DEFI(v1568));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8454)))).f_kind) == v852)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3451))).f_line), y_str("this routine returns no value (IX.A.6)", 38));
}
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3451))).f_a), Y_DEFP(F.v8454), &F.v8446, &F.v8452);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3451))).f_line), Y_DEFP(F.v8454), Y_DEFP(F.v8452));
F.v8450 = yr1200_Fresh(y_str("rv", 2));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2515_CType(Y_DEFP(F.v8454)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v8450));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2965_Convert(Y_DEFI(F.v8446), Y_DEFP(F.v8454), Y_DEFP(F.v8452)));
yr1037_SA(y_str(";", 1));
F.v8448 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8448));
yr3425_CopyOut();
yr3831_LeaveMonitor();
yr3330_PopTo(Y_DEFI(v1568));
yr3320_Emit3(y_str("y_use = F.yu; return ", 21), Y_DEFI(F.v8450), y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3456_BeginStatement(void * a_p3457) {
struct yf3458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3457 = a_p3457;
F.v8470 = Y_UNDEF_I;
F.v8472 = Y_UNDEF_I;
yr1138_EmitS(y_str("{", 1));
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3457))).f_flag) == INT64_C(1))) {
F.v8470 = yr1200_Fresh(y_str("sf", 2));
F.v8472 = yr1200_Fresh(y_str("ys", 2));
v1669 = 1;
yr1132_Emit(yr3442_Join(yr1061_T(y_str("int ", 4)), Y_DEFI(F.v8472), yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v8470), yr1061_T(y_str(";", 1))));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), Y_DEFI(F.v8470), yr3442_Join(yr1061_T(y_str(")) { RT_POP(", 12)), Y_DEFI(F.v8470), yr3442_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8472), yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1565 = y_range(y_add(Y_DEFI(v1565), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1563).p)[y_ix1(v1563, Y_DEFI(v1565))] = Y_DEFI(F.v8470);
}
yr2319_OpenScope(0);
yr3669_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3457))).f_a)))).f_a));
yr3347_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3457))).f_a));
yr3801_AwaitProcesses();
yr2331_CloseScope();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3457))).f_flag) == INT64_C(1))) {
v1565 = y_range(y_sub(Y_DEFI(v1565), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("RT_POP(", 7)), Y_DEFI(F.v8470), yr3442_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8472), yr1061_T(y_str(";", 1)))));
}
yr1138_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3462_PlaceLabel(void * a_p3463) {
struct yf3464 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3463 = a_p3463;
F.v8499 = Y_UNDEF_P;
F.v8499 = yr2348_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3463))).f_text));
if ((((Y_DEFP(F.v8499) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8499)))).f_kind) == v888))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3463))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3463))).f_text), y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8499)))).f_hasmv)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3463))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3463))).f_text), y_str(" labels two statements", 22));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8499)))).f_hasmv = 1;
yr3320_Emit3(y_str("", 0), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8499)))).f_cname), y_str(": ;", 3));
if ((!(Y_DEFI(((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))]) == INT64_C(0)))) {
yr3320_Emit3(y_str("rt_xtop = &", 11), Y_DEFI(((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))]), y_str(";", 1));
} else if ((!(Y_DEFI(((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1593))]) == INT64_C(0)))) {
yr3320_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1593))]), y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3468_GotoStatement(void * a_p3469) {
struct yf3470 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3469 = a_p3469;
F.v8514 = Y_UNDEF_P;
F.v8514 = yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3469))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3469))).f_line));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8514)))).f_kind) == v888))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3469))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3469))).f_name), y_str(" is not a label", 15));
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8514)))).f_level) == Y_DEFI(v1279)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3469))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3469))).f_name), y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8514)))).f_readonly = 1;
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3320_Emit3(y_str("goto ", 5), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8514)))).f_cname), y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3474_CheckLabels(void * a_p3475) {
struct yf3476 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3475 = a_p3475;
F.v8524 = Y_UNDEF_P;
F.v8524 = F.p3475;
F.v8526 = Y_UNDEF_P;
F.v8528 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8524) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8524)))).f_kind) == v645)) {
F.v8526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8524)))).f_a);
while ((!(Y_DEFP(F.v8526) == ((void *)0)))) {
Y_TICK();
F.v8528 = yr2348_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8526)))).f_name));
if ((((((!(Y_DEFP(F.v8528) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8528)))).f_kind) == v888))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8528)))).f_readonly)) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8528)))).f_hasmv)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8526)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8526)))).f_name), y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v8526 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8526)))).f_next);
}
}
F.v8524 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8524)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3480_DesigBase(void * a_p3481, void * * a_p3482, rt_int * a_p3483, rt_int * a_p3484) {
struct yf3485 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3481 = a_p3481;
F.p3482_o = a_p3482;
F.p3483_o = a_p3483;
F.p3484_o = a_p3484;
F.v8536 = Y_UNDEF_P;
F.v8536 = F.p3481;
F.v8538 = Y_UNDEF_P;
F.p3482 = ((void *)0);
F.p3483 = 0;
F.p3484 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_kind) == v786)))) {
F.v8536 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_a);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_kind) == v789)) {
if ((!Y_DEFI(F.p3483))) {
F.p3483 = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_a)))).f_rep) == ((void *)0)))) {
F.p3484 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_a)))).f_rep)))).f_tid);
}
}
F.v8536 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_a);
} else {
goto yl_8541;
}
}
yl_8541: ;
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_d) == ((void *)0))))) {
F.v8538 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8536)))).f_name));
if ((!(Y_DEFP(F.v8538) == ((void *)0)))) {
if (yr2395_Resolved(Y_DEFP(F.v8538))) {
F.v8538 = yr2447_Real(Y_DEFP(F.v8538));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8538)))).f_kind) == v861)) {
F.p3482 = Y_DEFP(F.v8538);
}
}
}
}
(*F.p3482_o) = F.p3482;
(*F.p3483_o) = F.p3483;
(*F.p3484_o) = F.p3484;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3489_Note(void * a_p3490, rt_int a_p3491, rt_int a_p3492) {
struct yf3493 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3490 = a_p3490;
F.p3491 = a_p3491;
F.p3492 = a_p3492;
F.v8548 = Y_UNDEF_P;
F.v8548 = yr1993_NewNode(v669, F.p3492);
((*(yR105 *)y_deref(Y_DEFP(F.v8548)))).f_sym = F.p3490;
((*(yR105 *)y_deref(Y_DEFP(F.v8548)))).f_name = F.p3491;
{ void * rv8549 = Y_DEFP(F.v8548);
y_use = F.yu; return rv8549; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3497_NoteWrite(void * a_p3498) {
struct yf3499 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3498 = a_p3498;
F.v8553 = Y_UNDEF_P;
F.v8555 = Y_UNDEF_I;
F.v8557 = Y_UNDEF_I;
F.v8559 = Y_UNDEF_P;
F.v8561 = Y_UNDEF_P;
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
yr3480_DesigBase(F.p3498, &F.v8553, &F.v8555, &F.v8557);
if (Y_DEFI(F.v8555)) {
F.v8553 = ((void *)0);
} else if ((((Y_DEFP(F.v8553) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8553)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_level))))) {
y_use = F.yu; return;
}
F.v8559 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_writes);
while ((!(Y_DEFP(F.v8559) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8559)))).f_sym) == Y_DEFP(F.v8553))) {
y_use = F.yu; return;
}
F.v8559 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8559)))).f_next);
}
F.v8561 = yr3489_Note(Y_DEFP(F.v8553), INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(F.p3498))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8561)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_writes);
((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_writes = Y_DEFP(F.v8561);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3503_NoteFree(void * a_p3504) {
struct yf3505 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3504 = a_p3504;
F.v8566 = Y_UNDEF_P;
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3504))).f_kind) == v861))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p3504))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_level))))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3504))).f_seen) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_serial))) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3504))).f_seen = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_serial);
F.v8566 = yr3489_Note(F.p3504, INT64_C(0), Y_DEFI(v1000));
((*(yR105 *)y_deref(Y_DEFP(F.v8566)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_frees = Y_DEFP(F.v8566);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3509_NoteFreeDeref(void * a_p3510, rt_int a_p3511) {
struct yf3512 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3510 = a_p3510;
F.p3511 = a_p3511;
F.v8572 = Y_UNDEF_P;
F.v8574 = Y_UNDEF_I;
F.v8576 = Y_UNDEF_I;
F.v8578 = Y_UNDEF_P;
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
yr3480_DesigBase(F.p3510, &F.v8572, &F.v8574, &F.v8576);
if ((((Y_DEFP(F.v8572) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8572)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_level))))) {
y_use = F.yu; return;
}
F.v8578 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_frees);
while ((!(Y_DEFP(F.v8578) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8578)))).f_sym) == ((void *)0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8578)))).f_name) == F.p3511)))) {
y_use = F.yu; return;
}
F.v8578 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8578)))).f_next);
}
F.v8578 = yr3489_Note(((void *)0), F.p3511, Y_DEFI(((*(yR105 *)y_deref(F.p3510))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8578)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_frees = Y_DEFP(F.v8578);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3516_DSteps(void * a_p3517, yarr * a_p3518) {
struct yf3519 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3517 = a_p3517;
F.p3518 = a_p3518;
F.v8583 = Y_UNDEF_P;
F.v8583 = F.p3517;
F.v8585 = Y_UNDEF_I;
F.v8585 = INT64_C(0);
F.v8588 = Y_UNDEF_P;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_kind) == v786)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_kind) == v801))) {
if ((Y_DEFI(F.v8585) < INT64_C(64))) {
F.v8585 = y_range(y_add(Y_DEFI(F.v8585), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3518)).p)[y_ix1((*F.p3518), Y_DEFI(F.v8585))] = Y_DEFP(F.v8583);
}
}
F.v8583 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8583)))).f_a);
}
F.lo8597 = INT64_C(1);
F.hi8598 = y_div(Y_DEFI(F.v8585), INT64_C(2));
{ rt_int hi8602 = F.hi8598;
for (rt_int i8601 = F.lo8597; i8601 <= hi8602; i8601++) { F.c_8600 = i8601; Y_TICK();
F.v8588 = Y_DEFP(((void * *)((*F.p3518)).p)[y_ix1((*F.p3518), F.c_8600)]);
((void * *)((*F.p3518)).p)[y_ix1((*F.p3518), F.c_8600)] = Y_DEFP(((void * *)((*F.p3518)).p)[y_ix1((*F.p3518), y_sub((y_add(Y_DEFI(F.v8585), INT64_C(1))), F.c_8600))]);
((void * *)((*F.p3518)).p)[y_ix1((*F.p3518), y_sub((y_add(Y_DEFI(F.v8585), INT64_C(1))), F.c_8600))] = Y_DEFP(F.v8588);
if (i8601 == hi8602) break;
}}
{ rt_int rv8609 = Y_DEFI(F.v8585);
y_use = F.yu; return rv8609; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3523_Overlaps(void * a_p3524, void * a_p3525) {
struct yf3526 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3524 = a_p3524;
F.p3525 = a_p3525;
F.v8614 = Y_UNDEF_P;
F.v8616 = Y_UNDEF_P;
F.v8618 = Y_UNDEF_I;
F.v8620 = Y_UNDEF_I;
F.v8622 = Y_UNDEF_I;
F.v8624 = Y_UNDEF_I;
F.v8626 = Y_UNDEF_I;
F.v8628 = Y_UNDEF_I;
F.v8630 = Y_UNDEF_I;
F.v8632 = Y_UNDEF_I;
y_initu(&yd_201, &F.v8634);
y_initu(&yd_201, &F.v8636);
F.v8638 = Y_UNDEF_I;
F.v8640 = Y_UNDEF_I;
F.v8642 = Y_UNDEF_I;
F.v8644 = Y_UNDEF_I;
F.v8646 = Y_UNDEF_P;
F.v8648 = Y_UNDEF_P;
F.v8650 = Y_UNDEF_P;
F.v8652 = Y_UNDEF_P;
yr3480_DesigBase(F.p3524, &F.v8614, &F.v8618, &F.v8630);
yr3480_DesigBase(F.p3525, &F.v8616, &F.v8620, &F.v8632);
if ((!(Y_DEFI(F.v8618) == Y_DEFI(F.v8620)))) {
if (((Y_DEFI(F.v8618) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3524))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3525))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3525))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3525))).f_rep)))).f_tid) == Y_DEFI(F.v8630))))) {
{ rt_int rv8654 = 1;
y_use = F.yu; return rv8654; }
}
}
if (((Y_DEFI(F.v8620) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3525))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3524))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3524))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3524))).f_rep)))).f_tid) == Y_DEFI(F.v8632))))) {
{ rt_int rv8656 = 1;
y_use = F.yu; return rv8656; }
}
}
{ rt_int rv8658 = 0;
y_use = F.yu; return rv8658; }
}
if (Y_DEFI(F.v8618)) {
if ((!(Y_DEFI(F.v8630) == Y_DEFI(F.v8632)))) {
{ rt_int rv8660 = 0;
y_use = F.yu; return rv8660; }
}
} else if ((((Y_DEFP(F.v8614) == ((void *)0))) || ((!(Y_DEFP(F.v8614) == Y_DEFP(F.v8616)))))) {
{ rt_int rv8662 = 0;
y_use = F.yu; return rv8662; }
}
F.v8638 = yr3516_DSteps(F.p3524, &F.v8634);
F.v8640 = yr3516_DSteps(F.p3525, &F.v8636);
F.lo8666 = INT64_C(1);
F.hi8667 = Y_DEFI(F.v8638);
{ rt_int hi8671 = F.hi8667;
for (rt_int i8670 = F.lo8666; i8670 <= hi8671; i8670++) { F.c_8669 = i8670; Y_TICK();
if ((F.c_8669 <= Y_DEFI(F.v8640))) {
F.v8646 = Y_DEFP(((void * *)(F.v8634).p)[y_ix1(F.v8634, F.c_8669)]);
F.v8648 = Y_DEFP(((void * *)(F.v8636).p)[y_ix1(F.v8636, F.c_8669)]);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8646)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8648)))).f_kind)))) {
{ rt_int rv8673 = 1;
y_use = F.yu; return rv8673; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8646)))).f_kind) == v783)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8646)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8648)))).f_name)))) {
{ rt_int rv8675 = 0;
y_use = F.yu; return rv8675; }
}
} else {
F.v8626 = 1;
F.v8628 = 0;
F.v8650 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8646)))).f_b);
F.v8652 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8648)))).f_b);
while ((((!(Y_DEFP(F.v8650) == ((void *)0)))) && ((!(Y_DEFP(F.v8652) == ((void *)0)))))) {
Y_TICK();
yr2884_Manifest(Y_DEFP(F.v8650), &F.v8622, &F.v8642);
yr2884_Manifest(Y_DEFP(F.v8652), &F.v8624, &F.v8644);
if ((Y_DEFI(F.v8622) && Y_DEFI(F.v8624))) {
if ((!(Y_DEFI(F.v8642) == Y_DEFI(F.v8644)))) {
F.v8628 = 1;
}
} else {
F.v8626 = 0;
}
F.v8650 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8650)))).f_next);
F.v8652 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8652)))).f_next);
}
if ((!Y_DEFI(F.v8626))) {
{ rt_int rv8681 = 1;
y_use = F.yu; return rv8681; }
}
if (Y_DEFI(F.v8628)) {
{ rt_int rv8683 = 0;
y_use = F.yu; return rv8683; }
}
}
}
if (i8670 == hi8671) break;
}}
{ rt_int rv8685 = 1;
y_use = F.yu; return rv8685; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3530_CheckActuals(void * a_p3531, rt_int a_p3532, rt_int a_p3533) {
struct yf3534 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3531 = a_p3531;
F.p3532 = a_p3532;
F.p3533 = a_p3533;
F.v8691 = Y_UNDEF_P;
F.v8693 = Y_UNDEF_P;
F.v8695 = Y_UNDEF_I;
F.v8697 = Y_UNDEF_I;
F.v8699 = Y_UNDEF_P;
F.v8701 = Y_UNDEF_P;
F.v8703 = Y_UNDEF_P;
F.v8705 = Y_UNDEF_I;
F.v8707 = Y_UNDEF_I;
F.v8691 = Y_DEFP(((*(yR125 *)y_deref(F.p3531))).f_params);
F.v8695 = y_range(y_add(F.p3532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8699 = ((void *)0);
while ((!(Y_DEFP(F.v8691) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_cls) == v897))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_rep)))).f_kind) == v855))))) {
F.v8693 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_next);
F.v8697 = y_range(y_add(Y_DEFI(F.v8695), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v8693) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_cls) == v903)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8693)))).f_cls) == v903)))) {
if (yr3523_Overlaps(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8695))]), Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8697))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8697))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8693)))).f_name), y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_cls) == v900)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8693)))).f_cls) == v900)))) {
if (yr3359_SameDesig(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8695))]), Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8697))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8697))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8693)))).f_name), y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v8693 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8693)))).f_next);
F.v8697 = y_range(y_add(Y_DEFI(F.v8697), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_cls) == v903)) {
yr3480_DesigBase(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8695))]), &F.v8703, &F.v8705, &F.v8707);
F.v8701 = yr3489_Note(Y_DEFP(F.v8703), Y_DEFI(F.v8707), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8695))])))).f_line));
if (Y_DEFI(F.v8705)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8701)))).f_flag = INT64_C(1);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v8695))])))).f_kind) == v789)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8701)))).f_ival = INT64_C(1);
}
if ((Y_DEFP(F.v8699) == ((void *)0))) {
F.v8699 = yr3489_Note(F.p3531, INT64_C(0), F.p3533);
((*(yR105 *)y_deref(Y_DEFP(F.v8699)))).f_next = Y_DEFP(v1722);
v1722 = Y_DEFP(F.v8699);
}
((*(yR105 *)y_deref(Y_DEFP(F.v8701)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8699)))).f_a);
((*(yR105 *)y_deref(Y_DEFP(F.v8699)))).f_a = Y_DEFP(F.v8701);
}
}
F.v8695 = y_range(y_add(Y_DEFI(F.v8695), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8691 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8691)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8840_At(struct yf3539 *up, rt_int a_p8841, rt_int a_p8842) {
struct yf8843 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8841 = a_p8841;
F.p8842 = a_p8842;
{ rt_int rv8865 = y_range(y_add((y_mul(F.p8841, (y_add(Y_DEFI(F.up->v8732), INT64_C(1))))), F.p8842), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv8865; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8847_Reaches(struct yf3539 *up, rt_int a_p8848, rt_int a_p8849) {
struct yf8850 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8848 = a_p8848;
F.p8849 = a_p8849;
F.v8870 = Y_UNDEF_P;
F.v8870 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8816).p)[y_ix1(F.up->v8816, F.p8849)])))).f_calls);
if (Y_DEFI(((rt_int *)(F.up->v8827).p)[y_ix1(F.up->v8827, F.p8849)])) {
{ rt_int rv8872 = 0;
y_use = F.yu; return rv8872; }
}
((rt_int *)(F.up->v8827).p)[y_ix1(F.up->v8827, F.p8849)] = 1;
while ((!(Y_DEFP(F.v8870) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8870)))).f_sym)))).f_vix) > INT64_C(0))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8870)))).f_sym)))).f_vix) == F.p8848)) {
{ rt_int rv8876 = 1;
y_use = F.yu; return rv8876; }
}
if (yr8847_Reaches(F.up, F.p8848, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8870)))).f_sym)))).f_vix))) {
{ rt_int rv8878 = 1;
y_use = F.yu; return rv8878; }
}
}
F.v8870 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8870)))).f_next);
}
{ rt_int rv8880 = 0;
y_use = F.yu; return rv8880; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8854_VName(struct yf3539 *up, rt_int a_p8855) {
struct yf8856 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8855 = a_p8855;
if ((Y_DEFP(((void * *)(F.up->v8794).p)[y_ix1(F.up->v8794, F.p8855)]) == ((void *)0))) {
{ rt_int rv8884 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv8884; }
}
{ rt_int rv8885 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8794).p)[y_ix1(F.up->v8794, F.p8855)])))).f_name);
y_use = F.yu; return rv8885; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3538_CheckEffects(void) {
struct yf3539 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8723 = Y_UNDEF_P;
F.v8725 = Y_UNDEF_P;
F.v8727 = Y_UNDEF_P;
F.v8729 = Y_UNDEF_I;
F.v8729 = INT64_C(0);
F.v8732 = Y_UNDEF_I;
F.v8732 = INT64_C(0);
F.v8735 = Y_UNDEF_I;
F.v8735 = INT64_C(0);
F.v8738 = Y_UNDEF_P;
F.v8735 = INT64_C(1);
F.v8732 = INT64_C(1);
F.v8723 = Y_DEFP(v1720);
while ((!(Y_DEFP(F.v8723) == ((void *)0)))) {
Y_TICK();
F.v8729 = y_range(y_add(Y_DEFI(F.v8729), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_sym)))).f_vix = Y_DEFI(F.v8729);
F.v8725 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_sym)))).f_writes);
while ((!(Y_DEFP(F.v8725) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix) == INT64_C(0))))) {
F.v8732 = y_range(y_add(Y_DEFI(F.v8732), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix = Y_DEFI(F.v8732);
}
F.v8725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_next);
}
F.v8725 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_sym)))).f_frees);
while ((!(Y_DEFP(F.v8725) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym) == ((void *)0)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix) == INT64_C(0))) {
F.v8732 = y_range(y_add(Y_DEFI(F.v8732), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix = Y_DEFI(F.v8732);
}
} else if ((yr3543_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_name), Y_DEFI(F.v8732), 0) == INT64_C(0))) {
F.v8732 = y_range(y_add(Y_DEFI(F.v8732), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_ival = yr3543_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_name), Y_DEFI(F.v8732), 1);
}
F.v8725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_next);
}
F.v8723 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_next);
}
if ((Y_DEFI(F.v8729) == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo8765 = INT64_C(0);
F.hi8766 = y_mul((y_add(Y_DEFI(F.v8729), INT64_C(1))), (y_add(Y_DEFI(F.v8732), INT64_C(1))));
{ rt_int lo[1] = {F.lo8765}, hi[1] = {F.hi8766}; y_desc_array(&F.yd_8768, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8768, &F.v8770);
y_initu(&F.yd_8768, &F.v8772);
F.lo8778 = INT64_C(0);
F.hi8779 = Y_DEFI(F.v8732);
{ rt_int lo[1] = {F.lo8778}, hi[1] = {F.hi8779}; y_desc_array(&F.yd_8781, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8781, &F.v8783);
F.lo8789 = INT64_C(0);
F.hi8790 = Y_DEFI(F.v8732);
{ rt_int lo[1] = {F.lo8789}, hi[1] = {F.hi8790}; y_desc_array(&F.yd_8792, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8792, &F.v8794);
F.lo8800 = INT64_C(0);
F.hi8801 = Y_DEFI(F.v8732);
{ rt_int lo[1] = {F.lo8800}, hi[1] = {F.hi8801}; y_desc_array(&F.yd_8803, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8803, &F.v8805);
F.lo8811 = INT64_C(0);
F.hi8812 = Y_DEFI(F.v8729);
{ rt_int lo[1] = {F.lo8811}, hi[1] = {F.hi8812}; y_desc_array(&F.yd_8814, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8814, &F.v8816);
F.lo8822 = INT64_C(0);
F.hi8823 = Y_DEFI(F.v8729);
{ rt_int lo[1] = {F.lo8822}, hi[1] = {F.hi8823}; y_desc_array(&F.yd_8825, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8825, &F.v8827);
F.v8829 = Y_UNDEF_I;
F.v8829 = 1;
F.v8832 = Y_UNDEF_I;
F.v8834 = Y_UNDEF_I;
F.v8836 = Y_UNDEF_I;
F.v8838 = Y_UNDEF_P;
F.lo8895 = INT64_C(0);
F.hi8896 = y_mul((y_add(Y_DEFI(F.v8729), INT64_C(1))), (y_add(Y_DEFI(F.v8732), INT64_C(1))));
{ rt_int hi8900 = F.hi8896;
for (rt_int i8899 = F.lo8895; i8899 <= hi8900; i8899++) { F.c_8898 = i8899; Y_TICK();
((rt_int *)(F.v8770).p)[y_ix1(F.v8770, F.c_8898)] = 0;
((rt_int *)(F.v8772).p)[y_ix1(F.v8772, F.c_8898)] = 0;
if (i8899 == hi8900) break;
}}
F.lo8906 = INT64_C(0);
F.hi8907 = Y_DEFI(F.v8732);
{ rt_int hi8911 = F.hi8907;
for (rt_int i8910 = F.lo8906; i8910 <= hi8911; i8910++) { F.c_8909 = i8910; Y_TICK();
((rt_int *)(F.v8783).p)[y_ix1(F.v8783, F.c_8909)] = INT64_C(-1);
((void * *)(F.v8794).p)[y_ix1(F.v8794, F.c_8909)] = ((void *)0);
((rt_int *)(F.v8805).p)[y_ix1(F.v8805, F.c_8909)] = INT64_C(0);
if (i8910 == hi8911) break;
}}
F.lo8917 = INT64_C(0);
F.hi8918 = Y_DEFI(F.v8729);
{ rt_int hi8922 = F.hi8918;
for (rt_int i8921 = F.lo8917; i8921 <= hi8922; i8921++) { F.c_8920 = i8921; Y_TICK();
((rt_int *)(F.v8827).p)[y_ix1(F.v8827, F.c_8920)] = 0;
if (i8921 == hi8922) break;
}}
F.v8723 = Y_DEFP(v1720);
while ((!(Y_DEFP(F.v8723) == ((void *)0)))) {
Y_TICK();
F.v8738 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_sym);
((void * *)(F.v8816).p)[y_ix1(F.v8816, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_vix))] = Y_DEFP(F.v8738);
F.v8725 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_writes);
while ((!(Y_DEFP(F.v8725) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym) == ((void *)0))) {
F.v8834 = INT64_C(1);
} else {
F.v8834 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix);
}
((rt_int *)(F.v8770).p)[y_ix1(F.v8770, yr8840_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_vix), Y_DEFI(F.v8834)))] = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym) == ((void *)0)))) {
((rt_int *)(F.v8783).p)[y_ix1(F.v8783, Y_DEFI(F.v8834))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_level);
((void * *)(F.v8794).p)[y_ix1(F.v8794, Y_DEFI(F.v8834))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym);
}
F.v8725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_next);
}
F.v8725 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_frees);
while ((!(Y_DEFP(F.v8725) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym) == ((void *)0))) {
F.v8834 = yr3543_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_name), INT64_C(0), 0);
((rt_int *)(F.v8805).p)[y_ix1(F.v8805, Y_DEFI(F.v8834))] = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_name);
} else {
F.v8834 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix);
((rt_int *)(F.v8783).p)[y_ix1(F.v8783, Y_DEFI(F.v8834))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_level);
((void * *)(F.v8794).p)[y_ix1(F.v8794, Y_DEFI(F.v8834))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym);
}
((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_vix), Y_DEFI(F.v8834)))] = 1;
F.v8725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_next);
}
F.v8723 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_next);
}
while (Y_DEFI(F.v8829)) {
Y_TICK();
F.v8829 = 0;
F.lo8933 = INT64_C(1);
F.hi8934 = Y_DEFI(F.v8729);
{ rt_int hi8938 = F.hi8934;
for (rt_int i8937 = F.lo8933; i8937 <= hi8938; i8937++) { F.c_8936 = i8937; Y_TICK();
F.v8727 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8816).p)[y_ix1(F.v8816, F.c_8936)])))).f_calls);
while ((!(Y_DEFP(F.v8727) == ((void *)0)))) {
Y_TICK();
F.v8836 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8727)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8836) > INT64_C(0))) {
F.lo8943 = INT64_C(1);
F.hi8944 = Y_DEFI(F.v8732);
{ rt_int hi8948 = F.hi8944;
for (rt_int i8947 = F.lo8943; i8947 <= hi8948; i8947++) { F.c_8946 = i8947; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8783).p)[y_ix1(F.v8783, F.c_8946)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8816).p)[y_ix1(F.v8816, F.c_8936)])))).f_level))) {
if ((Y_DEFI(((rt_int *)(F.v8770).p)[y_ix1(F.v8770, yr8840_At(&F, Y_DEFI(F.v8836), y_range(F.c_8946, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8770).p)[y_ix1(F.v8770, yr8840_At(&F, y_range(F.c_8936, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8946, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8770).p)[y_ix1(F.v8770, yr8840_At(&F, y_range(F.c_8936, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8946, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8829 = 1;
}
if ((Y_DEFI(((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, Y_DEFI(F.v8836), y_range(F.c_8946, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, y_range(F.c_8936, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8946, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, y_range(F.c_8936, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8946, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8829 = 1;
}
}
if (i8947 == hi8948) break;
}}
}
F.v8727 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8727)))).f_next);
}
if (i8937 == hi8938) break;
}}
}
F.lo8956 = INT64_C(1);
F.hi8957 = Y_DEFI(F.v8729);
{ rt_int hi8961 = F.hi8957;
for (rt_int i8960 = F.lo8956; i8960 <= hi8961; i8960++) { F.c_8959 = i8960; Y_TICK();
F.v8738 = Y_DEFP(((void * *)(F.v8816).p)[y_ix1(F.v8816, F.c_8959)]);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_func)) {
F.v8727 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_calls);
while ((!(Y_DEFP(F.v8727) == ((void *)0)))) {
Y_TICK();
F.v8836 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8727)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8836) > INT64_C(0))) {
F.lo8966 = INT64_C(1);
F.hi8967 = Y_DEFI(F.v8732);
{ rt_int hi8971 = F.hi8967;
for (rt_int i8970 = F.lo8966; i8970 <= hi8971; i8970++) { F.c_8969 = i8970; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8770).p)[y_ix1(F.v8770, yr8840_At(&F, Y_DEFI(F.v8836), y_range(F.c_8969, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFI(((rt_int *)(F.v8783).p)[y_ix1(F.v8783, F.c_8969)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_level))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8727)))).f_line), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_name), yr3442_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8727)))).f_sym)))).f_name), INT64_C(0)), yr3442_Join(yr1061_T(y_str(", which assigns to ", 19)), yr8854_VName(&F, y_range(F.c_8969, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
}
if (i8970 == hi8971) break;
}}
}
F.v8727 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8727)))).f_next);
}
}
if ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_decl) == ((void *)0)))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_decl)))).f_e) == ((void *)0)))) {
F.lo8979 = INT64_C(0);
F.hi8980 = Y_DEFI(F.v8729);
{ rt_int hi8984 = F.hi8980;
for (rt_int i8983 = F.lo8979; i8983 <= hi8984; i8983++) { F.c_8982 = i8983; Y_TICK();
((rt_int *)(F.v8827).p)[y_ix1(F.v8827, F.c_8982)] = 0;
if (i8983 == hi8984) break;
}}
if (yr8847_Reaches(&F, y_range(F.c_8959, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8959, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_decl)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8738)))).f_name), y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i8960 == hi8961) break;
}}
F.v8723 = Y_DEFP(v1722);
while ((!(Y_DEFP(F.v8723) == ((void *)0)))) {
Y_TICK();
F.v8838 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_sym);
F.v8836 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8838)))).f_vix);
if ((Y_DEFI(F.v8836) > INT64_C(0))) {
F.v8725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_a);
while ((!(Y_DEFP(F.v8725) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_flag) == INT64_C(0))) && ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym) == ((void *)0)))))) {
F.v8834 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8834) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, Y_DEFI(F.v8836), Y_DEFI(F.v8834)))])) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_line), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_sym)))).f_name), yr3442_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8838)))).f_name), INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v8832 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_flag) == INT64_C(1))) {
F.v8832 = yr3543_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_name), INT64_C(0), 0);
}
if ((Y_DEFI(F.v8832) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, Y_DEFI(F.v8836), Y_DEFI(F.v8832)))])) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8838)))).f_name), y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_flag) == INT64_C(1))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_ival) == INT64_C(1))))) {
F.lo9004 = INT64_C(1);
F.hi9005 = Y_DEFI(F.v8732);
{ rt_int hi9009 = F.hi9005;
for (rt_int i9008 = F.lo9004; i9008 <= hi9009; i9008++) { F.c_9007 = i9008; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8772).p)[y_ix1(F.v8772, yr8840_At(&F, Y_DEFI(F.v8836), y_range(F.c_9007, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.v8794).p)[y_ix1(F.v8794, F.c_9007)]) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8794).p)[y_ix1(F.v8794, F.c_9007)])))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8794).p)[y_ix1(F.v8794, F.c_9007)])))).f_rep)))).f_tid) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_name))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_line), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8838)))).f_name), yr3442_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8794).p)[y_ix1(F.v8794, F.c_9007)])))).f_name), INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i9008 == hi9009) break;
}}
}
F.v8725 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8725)))).f_next);
}
}
F.v8723 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8723)))).f_next);
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3543_DynIndex(rt_int a_p3544, rt_int a_p3545, rt_int a_p3546) {
struct yf3547 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3544 = a_p3544;
F.p3545 = a_p3545;
F.p3546 = a_p3546;
F.lo9020 = INT64_C(1);
F.hi9021 = Y_DEFI(v1746);
{ rt_int hi9025 = F.hi9021;
for (rt_int i9024 = F.lo9020; i9024 <= hi9025; i9024++) { F.c_9023 = i9024; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1733).p)[y_ix1(v1733, F.c_9023)]) == F.p3544)) {
{ rt_int rv9026 = Y_DEFI(((rt_int *)(v1744).p)[y_ix1(v1744, F.c_9023)]);
y_use = F.yu; return rv9026; }
}
if (i9024 == hi9025) break;
}}
if ((!F.p3546)) {
{ rt_int rv9028 = INT64_C(0);
y_use = F.yu; return rv9028; }
}
if ((Y_DEFI(v1746) >= INT64_C(4096))) {
yr1178_FailS(Y_DEFI(v1000), y_str("too many pointer types for this implementation", 46));
}
v1746 = y_range(y_add(Y_DEFI(v1746), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1733).p)[y_ix1(v1733, Y_DEFI(v1746))] = F.p3544;
((rt_int *)(v1744).p)[y_ix1(v1744, Y_DEFI(v1746))] = F.p3545;
{ rt_int rv9033 = F.p3545;
y_use = F.yu; return rv9033; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3551_RoutineCName(rt_int a_p3552) {
struct yf3553 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3552 = a_p3552;
F.v9037 = Y_UNDEF_I;
F.v9037 = yr1195_NewSerial();
F.v9039 = Y_UNDEF_I;
F.v9039 = 1;
F.lo9044 = INT64_C(1);
F.hi9045 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3552)]);
{ rt_int hi9049 = F.hi9045;
for (rt_int i9048 = F.lo9044; i9048 <= hi9049; i9048++) { F.c_9047 = i9048; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3552, y_range(F.c_9047, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3552, y_range(F.c_9047, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v9039 = 0;
}
if (i9048 == hi9049) break;
}}
yr1026_SB();
yr1037_SA(y_str("yr", 2));
yr1050_SI(Y_DEFI(F.v9037));
if (Y_DEFI(F.v9039)) {
yr1037_SA(y_str("_", 1));
yr1044_ST(F.p3552);
}
{ rt_int rv9053 = yr1056_SE();
y_use = F.yu; return rv9053; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3557_FormalRep(void * a_p3558) {
struct yf3559 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3558 = a_p3558;
F.v9057 = Y_UNDEF_P;
F.v9059 = Y_UNDEF_I;
F.v9061 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3558))).f_kind) == v696)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3558))).f_a), &F.v9059, &F.v9061);
if ((((!Y_DEFI(F.v9059)) || ((Y_DEFI(F.v9061) < INT64_C(1)))) || ((Y_DEFI(F.v9061) > INT64_C(8))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3558))).f_line), y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
}
F.v9057 = yr2453_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
((*(yR110 *)y_deref(Y_DEFP(F.v9057)))).f_nidx = Y_DEFI(F.v9061);
((*(yR110 *)y_deref(Y_DEFP(F.v9057)))).f_elem = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3558))).f_b), INT64_C(0), 0);
yr2556_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9057)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p3558))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v9057)))).f_deep = 1;
{ void * rv9069 = Y_DEFP(F.v9057);
y_use = F.yu; return rv9069; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3558))).f_kind) == v699)) {
{ void * rv9071 = yr2453_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv9071; }
}
F.v9057 = yr2697_MakeRep(F.p3558, INT64_C(0), 0);
yr2556_CheckRepresented(Y_DEFP(F.v9057), Y_DEFI(((*(yR105 *)y_deref(F.p3558))).f_line));
{ void * rv9074 = Y_DEFP(F.v9057);
y_use = F.yu; return rv9074; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3563_ParamCType(void * a_p3564) {
struct yf3565 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3564 = a_p3564;
F.v9078 = Y_UNDEF_I;
F.v9078 = yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3564))).f_rep));
if ((((Y_DEFI(((*(yR120 *)y_deref(F.p3564))).f_cls) == v897)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(F.p3564))).f_rep)))).f_kind) == v855)))) {
{ rt_int rv9079 = Y_DEFI(F.v9078);
y_use = F.yu; return rv9079; }
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9078));
yr1037_SA(y_str(" *", 2));
{ rt_int rv9081 = yr1056_SE();
y_use = F.yu; return rv9081; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3569_InstallTrap(void * a_p3570, void * a_p3571) {
struct yf3572 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3570 = a_p3570;
F.p3571 = a_p3571;
F.v9086 = Y_UNDEF_I;
F.v9088 = Y_UNDEF_I;
F.v9088 = 0;
F.v9091 = Y_UNDEF_I;
F.v9093 = Y_UNDEF_I;
F.v9093 = INT64_C(1);
F.v9086 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9091 = yr1061_T(y_str("OUT_OF_RANGE OVERFLOW ZERO_DIVIDE INVALID_POINTER FIXED_NOT_REPRESENTABLE TOO_MANY_PROCESS_INSTANCES TOO_LITTLE_LOCAL_STORAGE ADDRESS_VIOLATION UNINITIALIZED ", 158));
F.lo9103 = INT64_C(1);
F.hi9104 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9091))]);
{ rt_int hi9108 = F.hi9104;
for (rt_int i9107 = F.lo9103; i9107 <= hi9108; i9107++) { F.c_9106 = i9107; Y_TICK();
if ((yr1103_TChar(Y_DEFI(F.v9091), y_range(F.c_9106, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
if ((yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v9091))]), (y_sub(Y_DEFI(F.v9093), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_9106, Y_DEFI(F.v9093)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFI(F.v9086))) {
F.v9088 = 1;
}
F.v9093 = y_range(y_add(F.c_9106, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i9107 == hi9108) break;
}}
if ((!Y_DEFI(F.v9088))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_line), Y_DEFI(F.v9086), y_str(" is not a trap of this implementation (XIV.X.3)", 47));
}
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((!(Y_DEFI(v1273) == INT64_C(2)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_name), y_str(": a trap handler is declared in the outermost scope of a program (XIV.X.3)", 74));
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3570))).f_nparams) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3570))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3571))).f_name), y_str(": a trap handler of this implementation is a procedure without parameters (XIV.X.3)", 83));
}
yr1026_SB();
yr1037_SA(y_str("y_trap_install(rt_exc(", 22));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v9086));
yr1031_SC(34);
yr1037_SA(y_str("), ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3570))).f_cname));
yr1037_SA(y_str(");", 2));
yr1132_Emit(yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3576_DeclType(void * a_p3577) {
struct yf3578 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3577 = a_p3577;
if ((Y_DEFI(((*(yR120 *)y_deref(F.p3577))).f_cls) == v900)) {
{ rt_int rv9130 = yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3577))).f_rep));
y_use = F.yu; return rv9130; }
}
{ rt_int rv9131 = yr3563_ParamCType(F.p3577);
y_use = F.yu; return rv9131; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3582_RoutineHeader(void * a_p3583, rt_int a_p3584) {
struct yf3585 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3583 = a_p3583;
F.p3584 = a_p3584;
F.v9136 = Y_UNDEF_P;
F.v9138 = Y_UNDEF_P;
F.v9140 = Y_UNDEF_P;
F.v9142 = Y_UNDEF_P;
F.v9144 = Y_UNDEF_P;
F.v9146 = Y_UNDEF_P;
F.v9148 = Y_UNDEF_P;
F.v9150 = Y_UNDEF_I;
F.v9152 = Y_UNDEF_I;
F.v9152 = 1;
F.v9136 = yr2312_NewSym(F.p3584, Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_decl = F.p3583;
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_func = (Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_flag) == INT64_C(1));
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_level = y_range(y_add(Y_DEFI(v1279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_cname = yr3551_RoutineCName(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3583))).f_b) == ((void *)0)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_ret = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3583))).f_b), INT64_C(0), 0);
yr2556_CheckRepresented(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_ret), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line));
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_ret = Y_DEFP(v1348);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_func)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v9146 = ((void *)0);
F.v9140 = Y_DEFP(((*(yR105 *)y_deref(F.p3583))).f_a);
while ((!(Y_DEFP(F.v9140) == ((void *)0)))) {
Y_TICK();
F.v9148 = yr3557_FormalRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_b));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_func) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_ival) == v897))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3584 == v885)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_ival) == v900)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str(": a process has no OUT parameters", 33));
}
F.v9142 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_a);
while ((!(Y_DEFP(F.v9142) == ((void *)0)))) {
Y_TICK();
({ F.v9144 = y_new(sizeof(yR120)); y_initu(&yd_121, y_deref(F.v9144)); });
(*(yR120 *)y_deref(Y_DEFP(F.v9144))) = ((yR120){ .f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9142)))).f_name), .f_cls = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_ival), .f_rep = Y_DEFP(F.v9148), .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9142)))).f_a) == ((void *)0)))) {
((*(yR120 *)y_deref(Y_DEFP(F.v9144)))).f_at = yr2819_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9142)))).f_a));
}
if ((Y_DEFP(F.v9146) == ((void *)0))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_params = Y_DEFP(F.v9144);
} else {
((*(yR120 *)y_deref(Y_DEFP(F.v9146)))).f_next = Y_DEFP(F.v9144);
}
F.v9146 = Y_DEFP(F.v9144);
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_nparams = y_range(y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_nparams), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9142 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9142)))).f_next);
}
F.v9140 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_next);
}
F.v9138 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name));
if ((!(Y_DEFP(F.v9138) == ((void *)0)))) {
F.v9138 = yr2447_Real(Y_DEFP(F.v9138));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_ival) == INT64_C(0))) && ((!(Y_DEFP(F.v9138) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9138)))).f_kind) == v891)) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line), yr3442_Join(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_ival) == INT64_C(0)))) && ((!(Y_DEFP(F.v9138) == ((void *)0))))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9138)))).f_kind) == v876)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_alt = Y_DEFP(F.v9138);
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9138)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_ival) == v339)) && ((!(yr3589_SameSignature(Y_DEFP(F.v9136), Y_DEFP(F.v9138)) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_ival) == v435)) && ((yr3589_SameSignature(Y_DEFP(F.v9136), Y_DEFP(F.v9138)) == ((void *)0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR105 *)y_deref(F.p3583))).f_sym = Y_DEFP(F.v9136);
yr2414_Define(Y_DEFP(F.v9136), Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line));
if ((((!(Y_DEFI(v1717) == INT64_C(0)))) && yr1088_TEq(Y_DEFI(v1717), yr1061_T(y_str("CompilerStatus", 14))))) {
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), yr1061_T(y_str("SUPPRESS_TRAP", 13)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_mval = v1504;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), yr1061_T(y_str("RESTORE_TRAP", 12)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_mval = v1507;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), yr1061_T(y_str("TRAP_SUPPRESSED", 15)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_mval = v1510;
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_ival) == v435)) && yr1095_TStarts(Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_name), y_str("TRAP_", 5)))) {
yr3569_InstallTrap(Y_DEFP(F.v9136), F.p3583);
}
F.v9140 = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3583))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_sym = Y_DEFP(F.v9136);
((*(yR105 *)y_deref(Y_DEFP(F.v9140)))).f_next = Y_DEFP(v1720);
v1720 = Y_DEFP(F.v9140);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_level))] = yr1200_Fresh(y_str("yf", 2));
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_members = yr2312_NewSym(v891, Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_level))]));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_level))]));
yr1037_SA(y_str(";", 1));
F.v9150 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v9150));
yr1026_SB();
yr1037_SA(y_str("static ", 7));
if ((F.p3584 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_ret)));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_cname));
yr1037_SA(y_str("(", 1));
F.v9150 = yr1056_SE();
if ((F.p3584 == v885)) {
F.v9150 = yr3442_Join(Y_DEFI(F.v9150), yr1061_T(y_str("void *arg", 9)), INT64_C(0));
F.v9152 = 0;
} else if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9150));
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))]));
yr1037_SA(y_str(" *up", 4));
F.v9150 = yr1056_SE();
F.v9152 = 0;
}
F.v9144 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_params);
while ((((!(Y_DEFP(F.v9144) == ((void *)0)))) && ((!(F.p3584 == v885))))) {
Y_TICK();
yr1026_SB();
yr1044_ST(Y_DEFI(F.v9150));
if ((!Y_DEFI(F.v9152))) {
yr1037_SA(y_str(", ", 2));
}
F.v9152 = 0;
yr1044_ST(yr3563_ParamCType(Y_DEFP(F.v9144)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9144)))).f_cname));
F.v9150 = yr1056_SE();
F.v9144 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9144)))).f_next);
}
if (Y_DEFI(F.v9152)) {
F.v9150 = yr3442_Join(Y_DEFI(F.v9150), yr1061_T(y_str("void", 4)), INT64_C(0));
}
F.v9150 = yr3442_Join(Y_DEFI(F.v9150), yr1061_T(y_str(")", 1)), INT64_C(0));
((*(yR125 *)y_deref(Y_DEFP(F.v9136)))).f_mnext = yr2312_NewSym(v891, Y_DEFI(F.v9150));
yr1110_Put(&v986, yr3442_Join(Y_DEFI(F.v9150), yr1061_T(y_str(";", 1)), INT64_C(0)));
yr4119_SegRoutine(Y_DEFP(F.v9136), F.p3583, F.p3584);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3589_SameSignature(void * a_p3590, void * a_p3591) {
struct yf3592 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3590 = a_p3590;
F.p3591 = a_p3591;
F.v9207 = Y_UNDEF_P;
F.v9207 = F.p3591;
F.v9209 = Y_UNDEF_P;
F.v9211 = Y_UNDEF_P;
F.v9213 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9207) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9207)))).f_nparams) == Y_DEFI(((*(yR125 *)y_deref(F.p3590))).f_nparams))) {
F.v9213 = 1;
F.v9209 = Y_DEFP(((*(yR125 *)y_deref(F.p3590))).f_params);
F.v9211 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9207)))).f_params);
while ((!(Y_DEFP(F.v9209) == ((void *)0)))) {
Y_TICK();
if ((!yr2533_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9209)))).f_rep), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9211)))).f_rep)))) {
F.v9213 = 0;
}
F.v9209 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9209)))).f_next);
F.v9211 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9211)))).f_next);
}
if (Y_DEFI(F.v9213)) {
{ void * rv9216 = Y_DEFP(F.v9207);
y_use = F.yu; return rv9216; }
}
}
F.v9207 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9207)))).f_alt);
}
{ void * rv9217 = ((void *)0);
y_use = F.yu; return rv9217; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3596_RoutineBody(void * a_p3597) {
struct yf3598 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3597 = a_p3597;
F.v9221 = Y_UNDEF_P;
F.v9221 = Y_DEFP(((*(yR105 *)y_deref(F.p3597))).f_sym);
y_initu(&yd_141, &F.v9223);
y_initu(&yd_141, &F.v9225);
F.v9227 = Y_UNDEF_I;
F.v9229 = Y_UNDEF_I;
F.v9231 = Y_UNDEF_I;
F.v9233 = Y_UNDEF_I;
F.v9235 = Y_UNDEF_I;
F.v9237 = Y_UNDEF_I;
F.v9239 = Y_UNDEF_I;
F.v9241 = Y_UNDEF_P;
F.v9243 = Y_UNDEF_I;
F.v9245 = Y_UNDEF_P;
F.v9247 = Y_UNDEF_P;
F.v9249 = Y_UNDEF_I;
F.v9251 = Y_UNDEF_I;
y_initu(&yd_141, &F.v9253);
F.v9223 = v996;
F.v9225 = v998;
F.v9227 = Y_DEFI(v1279);
F.v9229 = Y_DEFI(v1565);
F.v9231 = Y_DEFI(v1568);
F.v9233 = Y_DEFI(v1593);
F.v9235 = Y_DEFI(v1607);
F.v9237 = Y_DEFI(v1634);
F.v9239 = Y_DEFI(v1637);
F.v9241 = Y_DEFP(v1640);
F.v9243 = Y_DEFI(v1669);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v9253 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1279 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_level);
F.v9249 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_members)))).f_name);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(F.v9249);
v1568 = Y_DEFI(v1565);
v1637 = Y_DEFI(v1634);
v1607 = INT64_C(0);
v1640 = Y_DEFP(F.v9221);
v1669 = 0;
yr2319_OpenScope(0);
v1328 = y_range(y_add(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1324).p)[y_ix1(v1324, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_depth);
((rt_int *)(v1326).p)[y_ix1(v1326, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_serial);
F.v9245 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_params);
while ((!(Y_DEFP(F.v9245) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cls) == v897)) {
F.v9247 = yr2312_NewSym(v864, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_name));
} else {
F.v9247 = yr2312_NewSym(v861, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_name));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_rep = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep);
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_cname = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_kind) == v885)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_byref = (((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cls) == v903)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)))).f_kind) == v855))));
yr2434_DeclStorage(yr3563_ParamCType(Y_DEFP(F.v9245)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname));
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)))).f_kind) == v855)) {
yr2434_DeclStorage(yr1061_T(y_str("yspace", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr3442_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cls) == v903)) {
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_byref = 1;
yr2434_DeclStorage(yr3563_ParamCType(Y_DEFP(F.v9245)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr3442_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cls) == v900)) {
yr2434_DeclStorage(yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname));
yr2434_DeclStorage(yr3563_ParamCType(Y_DEFP(F.v9245)), yr3442_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str("_o", 2)), INT64_C(0)));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr3442_Join(yr1061_T(y_str("_o = a_", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(";", 1)))));
if ((yr2490_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)))).f_kind) == v843))))) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_init(", 7)), yr2521_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)), yr3442_Join(yr1061_T(y_str(", &F.", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(");", 2)))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr3442_Join(yr1061_T(y_str(" = *a_", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(";", 1)))));
}
} else {
yr2434_DeclStorage(yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr3442_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(";", 1)))));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_at) >= INT64_C(0))) {
F.v9251 = yr2825_StoreAt(yr3576_DeclType(Y_DEFP(F.v9245)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_at));
yr1132_Emit(yr3442_Join(Y_DEFI(F.v9251), yr1061_T(y_str(" = F.", 5)), yr3442_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_level = INT64_C(0);
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_cname = Y_DEFI(F.v9251);
((*(yR125 *)y_deref(Y_DEFP(F.v9247)))).f_at = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_at);
((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_path = Y_DEFI(F.v9251);
}
yr2414_Define(Y_DEFP(F.v9247), Y_DEFI(((*(yR105 *)y_deref(F.p3597))).f_line));
F.v9245 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9245)))).f_next);
}
yr3825_EnterMonitor(Y_DEFP(F.v9221));
yr3669_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3597))).f_c)))).f_a));
if (yr3387_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3597))).f_c))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_kind) == v885)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3597))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3597))).f_name), y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3597))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3597))).f_name), y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3347_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3597))).f_c));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_kind) == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3801_AwaitProcesses();
yr2331_CloseScope();
v1328 = y_range(y_sub(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(F.v9249));
yr1037_SA(y_str(" {", 2));
if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, y_sub(Y_DEFI(v1279), INT64_C(1)))]));
yr1037_SA(y_str(" *up;", 5));
} else {
yr1037_SA(y_str(" void *up;", 10));
}
F.v9251 = yr1056_SE();
yr1110_Put(&v982, Y_DEFI(F.v9251));
yr1125_Append(&v982, &v998);
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
yr1117_PutS(&v982, y_str("};", 2));
yr1110_Put(&F.v9253, yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_mnext)))).f_name), yr1061_T(y_str(" {", 2)), INT64_C(0)));
if (Y_DEFI(v1669)) {
yr1117_PutS(&F.v9253, y_str("volatile", 8));
}
yr1110_Put(&F.v9253, yr3442_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(F.v9249), yr1061_T(y_str(" F;", 3))));
yr1117_PutS(&F.v9253, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9221)))).f_kind) == v885)) {
yr1110_Put(&F.v9253, yr3442_Join(yr1061_T(y_str("F = *(struct ", 13)), Y_DEFI(F.v9249), yr1061_T(y_str(" *)arg;", 7))));
} else if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1117_PutS(&F.v9253, y_str("F.up = up;", 10));
}
yr1117_PutS(&F.v9253, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1125_Append(&F.v9253, &v996);
yr1117_PutS(&F.v9253, y_str("}", 1));
yr1125_Append(&v988, &F.v9253);
v996 = F.v9223;
v998 = F.v9225;
v1279 = Y_DEFI(F.v9227);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = yr1200_Fresh(y_str("unused", 6));
if ((!(Y_DEFP(F.v9241) == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9241)))).f_members)))).f_name);
}
v1565 = Y_DEFI(F.v9229);
v1568 = Y_DEFI(F.v9231);
v1593 = Y_DEFI(F.v9233);
v1607 = Y_DEFI(F.v9235);
v1634 = Y_DEFI(F.v9237);
v1637 = Y_DEFI(F.v9239);
v1640 = Y_DEFP(F.v9241);
v1669 = Y_DEFI(F.v9243);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3602_DeclareStorage(void * a_p3603, void * a_p3604, rt_int a_p3605) {
struct yf3606 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3603 = a_p3603;
F.p3604 = a_p3604;
F.p3605 = a_p3605;
((*(yR125 *)y_deref(F.p3603))).f_rep = F.p3604;
((*(yR125 *)y_deref(F.p3603))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(F.p3603))).f_cname = yr1200_Fresh(y_str("v", 1));
yr2434_DeclStorage(yr2515_CType(F.p3604), Y_DEFI(((*(yR125 *)y_deref(F.p3603))).f_cname));
yr3619_InitStorage(F.p3603, F.p3604, F.p3605);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3610_DeclareAt(void * a_p3611, void * a_p3612, rt_int a_p3613, rt_int a_p3614) {
struct yf3615 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3611 = a_p3611;
F.p3612 = a_p3612;
F.p3613 = a_p3613;
F.p3614 = a_p3614;
((*(yR125 *)y_deref(F.p3611))).f_rep = F.p3612;
((*(yR125 *)y_deref(F.p3611))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.p3611))).f_at = F.p3613;
((*(yR125 *)y_deref(F.p3611))).f_cname = yr2825_StoreAt(yr2515_CType(F.p3612), F.p3613);
yr3619_InitStorage(F.p3611, F.p3612, F.p3614);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3619_InitStorage(void * a_p3620, void * a_p3621, rt_int a_p3622) {
struct yf3623 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3620 = a_p3620;
F.p3621 = a_p3621;
F.p3622 = a_p3622;
if ((yr2490_Deep(F.p3621) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3621))).f_kind) == v825)))) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_initu(", 8)), yr2521_DescOf(F.p3621), yr3442_Join(yr1061_T(y_str(", &", 3)), yr2441_SymPath(F.p3620), yr1061_T(y_str(");", 2)))));
} else if ((!(yr3061_UndefValue(F.p3621) == INT64_C(0)))) {
yr1132_Emit(yr3442_Join(yr2441_SymPath(F.p3620), yr1061_T(y_str(" = ", 3)), yr3442_Join(yr3061_UndefValue(F.p3621), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3621))).f_kind) == v837)) {
yr3842_DeclareSignal(F.p3620, F.p3622);
}
if (yr2503_HoldsSignal(F.p3621)) {
yr3849_DeclareSignalArray(F.p3620, F.p3622);
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3621))).f_kind) == v840)) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2441_SymPath(F.p3620), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3627_SimpleDecl(void * a_p3628) {
struct yf3629 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3628 = a_p3628;
F.v9342 = Y_UNDEF_I;
F.v9342 = Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_kind);
F.v9344 = Y_UNDEF_P;
F.v9346 = Y_UNDEF_P;
F.v9348 = Y_UNDEF_P;
F.v9350 = Y_UNDEF_P;
F.v9352 = Y_UNDEF_I;
F.v9354 = Y_UNDEF_I;
F.v9356 = Y_UNDEF_I;
F.v9358 = Y_UNDEF_I;
if ((((Y_DEFI(F.v9342) == v639)) || ((Y_DEFI(F.v9342) == v642)))) {
F.v9344 = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_b), INT64_C(0), 0);
yr2556_CheckRepresented(Y_DEFP(F.v9344), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
if ((((Y_DEFI(F.v9342) == v639)) && yr2509_NonAssignable(Y_DEFP(F.v9344)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line), y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v9348 = Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_a);
while ((!(Y_DEFP(F.v9348) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(F.v9342) == v639)) {
F.v9350 = yr2312_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_name));
} else {
F.v9350 = yr2312_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_name));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_a) == ((void *)0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_kind) == v837))))) {
yr3610_DeclareAt(Y_DEFP(F.v9350), Y_DEFP(F.v9344), yr2819_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_a)), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
} else if ((((Y_DEFI(v1693) > INT64_C(0))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_rep = Y_DEFP(F.v9344);
yr4111_SegStorage(Y_DEFP(F.v9350), Y_DEFP(F.v9344), Y_DEFI(F.v9342));
} else {
yr3602_DeclareStorage(Y_DEFP(F.v9350), Y_DEFP(F.v9344), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_a) == ((void *)0))) {
yr4111_SegStorage(Y_DEFP(F.v9350), Y_DEFP(F.v9344), Y_DEFI(F.v9342));
}
}
if (((((!(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_c) == ((void *)0)))) && ((Y_DEFI(v1693) > INT64_C(0)))) && ((Y_DEFI(v1279) == INT64_C(0))))) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_c), &F.v9356, &F.v9358);
if (((((Y_DEFI(F.v9342) == v639)) && Y_DEFI(F.v9356)) && yr2466_IsDiscrete(Y_DEFP(F.v9344)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_mval = Y_DEFI(F.v9358);
}
} else if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_c) == ((void *)0)))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_c), Y_DEFP(F.v9344), &F.v9352, &F.v9346);
if ((Y_DEFI(F.v9342) == v639)) {
yr2983_Store(yr2441_SymPath(Y_DEFP(F.v9350)), Y_DEFP(F.v9344), Y_DEFI(F.v9352), Y_DEFP(F.v9346), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
} else {
F.v9354 = yr3265_UserAssign(yr2441_SymPath(Y_DEFP(F.v9350)), Y_DEFP(F.v9344), Y_DEFI(F.v9352), Y_DEFP(F.v9346), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
if ((!(Y_DEFI(F.v9354) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v9354));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_tname), y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2983_Store(yr2441_SymPath(Y_DEFP(F.v9350)), Y_DEFP(F.v9344), Y_DEFI(F.v9352), Y_DEFP(F.v9346), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
}
}
if ((Y_DEFI(F.v9342) == v639)) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_c), &F.v9356, &F.v9358);
if ((Y_DEFI(F.v9356) && yr2466_IsDiscrete(Y_DEFP(F.v9344)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_mval = Y_DEFI(F.v9358);
}
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_a) == ((void *)0)))) {
yr3640_AtLocation(Y_DEFP(F.v9350), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_a));
}
yr2414_Define(Y_DEFP(F.v9350), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_line));
F.v9348 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_next);
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9342) == v651)) {
F.v9344 = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name), 0);
yr2556_CheckRepresented(Y_DEFP(F.v9344), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
F.v9350 = yr2312_NewSym(v867, Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_rep = Y_DEFP(F.v9344);
yr2414_Define(Y_DEFP(F.v9350), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
yr2720_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name), Y_DEFP(F.v9344));
yr3633_NoteAlphabet(F.p3628, Y_DEFP(F.v9344));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9342) == v648)) {
F.v9344 = yr2697_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name), 1);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_b)))).f_kind) == v672)) {
F.v9344 = yr2460_CopyRep(Y_DEFP(F.v9344));
((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_tid = yr2691_NewTid(Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name));
((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_tname = Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name);
if (((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_kind) == v810)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_b)))).f_a) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v9344)))).f_abstract = 1;
}
}
}
F.v9350 = yr2312_NewSym(v870, Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_rep = Y_DEFP(F.v9344);
yr2414_Define(Y_DEFP(F.v9350), Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line));
yr2720_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_name), Y_DEFP(F.v9344));
yr3633_NoteAlphabet(F.p3628, Y_DEFP(F.v9344));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9342) == v645)) {
F.v9348 = Y_DEFP(((*(yR105 *)y_deref(F.p3628))).f_a);
while ((!(Y_DEFP(F.v9348) == ((void *)0)))) {
Y_TICK();
F.v9350 = yr2312_NewSym(v888, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9350)))).f_cname = yr1200_Fresh(y_str("lab", 3));
yr2414_Define(Y_DEFP(F.v9350), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_line));
F.v9348 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9348)))).f_next);
}
y_use = F.yu; return;
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3628))).f_line), y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3633_NoteAlphabet(void * a_p3634, void * a_p3635) {
struct yf3636 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3634 = a_p3634;
F.p3635 = a_p3635;
F.v9382 = Y_UNDEF_P;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3635))).f_kind) == v819)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3634))).f_b)))).f_kind) == v678)))) {
F.v9382 = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3634))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9382)))).f_name = Y_DEFI(((*(yR105 *)y_deref(F.p3634))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v9382)))).f_rep = F.p3635;
((*(yR105 *)y_deref(Y_DEFP(F.v9382)))).f_next = Y_DEFP(v1516);
v1516 = Y_DEFP(F.v9382);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3640_AtLocation(void * a_p3641, void * a_p3642) {
struct yf3643 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3641 = a_p3641;
F.p3642 = a_p3642;
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3641))).f_rep)))).f_kind) == v837)) {
yr3856_DeviceSignal(F.p3641, F.p3642);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3647_Defer(void * a_p3648, rt_int a_p3649, void * a_p3650, rt_int a_p3651) {
struct yf3652 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3648 = a_p3648;
F.p3649 = a_p3649;
F.p3650 = a_p3650;
F.p3651 = a_p3651;
F.v9392 = Y_UNDEF_I;
F.v9392 = Y_DEFI(v1273);
if ((Y_DEFI(v1850) >= INT64_C(20000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3648))).f_line), y_str("too many routines for this implementation", 41));
}
v1850 = y_range(y_add(Y_DEFI(v1850), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1758).p)[y_ix1(v1758, Y_DEFI(v1850))] = F.p3648;
((rt_int *)(v1769).p)[y_ix1(v1769, Y_DEFI(v1850))] = F.p3649;
((rt_int *)(v1780).p)[y_ix1(v1780, Y_DEFI(v1850))] = Y_DEFI(v1276);
((void * *)(v1791).p)[y_ix1(v1791, Y_DEFI(v1850))] = Y_DEFP(v1856);
((void * *)(v1802).p)[y_ix1(v1802, Y_DEFI(v1850))] = F.p3650;
((rt_int *)(v1813).p)[y_ix1(v1813, Y_DEFI(v1850))] = F.p3651;
((rt_int *)(v1824).p)[y_ix1(v1824, Y_DEFI(v1850))] = Y_DEFI(v1675);
while (Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9392))])))).f_closed)) {
Y_TICK();
F.v9392 = y_range(y_sub(Y_DEFI(F.v9392), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1835).p)[y_ix1(v1835, Y_DEFI(v1850))] = y_range(y_add(Y_DEFI(v1853), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1837).p)[y_ix1(v1837, Y_DEFI(v1850))] = y_range(y_sub(Y_DEFI(v1273), Y_DEFI(F.v9392)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9405 = y_add(Y_DEFI(F.v9392), INT64_C(1));
F.hi9406 = Y_DEFI(v1273);
{ rt_int hi9410 = F.hi9406;
for (rt_int i9409 = F.lo9405; i9409 <= hi9410; i9409++) { F.c_9408 = i9409; Y_TICK();
v1853 = y_range(y_add(Y_DEFI(v1853), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1848).p)[y_ix1(v1848, Y_DEFI(v1853))] = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, F.c_9408)]);
if (i9409 == hi9410) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3656_RunDeferred(rt_int a_p3657, rt_int a_p3658) {
struct yf3659 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3657 = a_p3657;
F.p3658 = a_p3658;
F.v9417 = Y_UNDEF_I;
F.v9417 = y_range(y_add(F.p3657, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9421 = Y_UNDEF_I;
F.v9423 = Y_UNDEF_I;
F.v9425 = Y_UNDEF_P;
while ((Y_DEFI(F.v9417) <= Y_DEFI(v1850))) {
Y_TICK();
F.lo9430 = Y_DEFI(((rt_int *)(v1835).p)[y_ix1(v1835, Y_DEFI(F.v9417))]);
F.hi9431 = y_sub((y_add(Y_DEFI(((rt_int *)(v1835).p)[y_ix1(v1835, Y_DEFI(F.v9417))]), Y_DEFI(((rt_int *)(v1837).p)[y_ix1(v1837, Y_DEFI(F.v9417))]))), INT64_C(1));
{ rt_int hi9435 = F.hi9431;
for (rt_int i9434 = F.lo9430; i9434 <= hi9435; i9434++) { F.c_9433 = i9434; Y_TICK();
yr2325_ReopenScope(Y_DEFP(((void * *)(v1848).p)[y_ix1(v1848, F.c_9433)]));
if (i9434 == hi9435) break;
}}
F.v9421 = Y_DEFI(v1276);
F.v9425 = Y_DEFP(v1856);
F.v9423 = Y_DEFI(v1675);
v1276 = Y_DEFI(((rt_int *)(v1780).p)[y_ix1(v1780, Y_DEFI(F.v9417))]);
v1856 = Y_DEFP(((void * *)(v1791).p)[y_ix1(v1791, Y_DEFI(F.v9417))]);
v1675 = Y_DEFI(((rt_int *)(v1824).p)[y_ix1(v1824, Y_DEFI(F.v9417))]);
if ((Y_DEFI(((rt_int *)(v1769).p)[y_ix1(v1769, Y_DEFI(F.v9417))]) == INT64_C(1))) {
yr3596_RoutineBody(Y_DEFP(((void * *)(v1758).p)[y_ix1(v1758, Y_DEFI(F.v9417))]));
} else {
yr3663_ModuleInit(Y_DEFI(F.v9417));
}
v1276 = Y_DEFI(F.v9421);
v1856 = Y_DEFP(F.v9425);
v1675 = Y_DEFI(F.v9423);
F.lo9440 = INT64_C(1);
F.hi9441 = Y_DEFI(((rt_int *)(v1837).p)[y_ix1(v1837, Y_DEFI(F.v9417))]);
{ rt_int hi9445 = F.hi9441;
for (rt_int i9444 = F.lo9440; i9444 <= hi9445; i9444++) { F.c_9443 = i9444; Y_TICK();
yr2331_CloseScope();
if (i9444 == hi9445) break;
}}
F.v9417 = y_range(y_add(Y_DEFI(F.v9417), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1850 = F.p3657;
v1853 = F.p3658;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3663_ModuleInit(rt_int a_p3664) {
struct yf3665 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3664 = a_p3664;
F.v9451 = Y_UNDEF_P;
F.v9451 = Y_DEFP(((void * *)(v1758).p)[y_ix1(v1758, F.p3664)]);
y_initu(&yd_141, &F.v9453);
F.v9453 = v996;
F.v9455 = Y_UNDEF_P;
F.v9455 = Y_DEFP(((void * *)(v1802).p)[y_ix1(v1802, F.p3664)]);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (Y_DEFI(((rt_int *)(v1813).p)[y_ix1(v1813, F.p3664)])) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3819_MonitorPath(Y_DEFP(v1856)), yr1061_T(y_str(");", 2))));
}
v1593 = y_range(y_add(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1580).p)[y_ix1(v1580, Y_DEFI(v1593))] = INT64_C(0);
((rt_int *)(v1591).p)[y_ix1(v1591, Y_DEFI(v1593))] = INT64_C(0);
yr3347_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9451)))).f_c));
v1593 = y_range(y_sub(Y_DEFI(v1593), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (Y_DEFI(((rt_int *)(v1813).p)[y_ix1(v1813, F.p3664)])) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3819_MonitorPath(Y_DEFP(v1856)), yr1061_T(y_str(");", 2))));
}
if ((!(Y_DEFP((v996).f_head) == ((void *)0)))) {
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_next = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v9455)))).f_next);
((*(yR135 *)y_deref(Y_DEFP(F.v9455)))).f_next = Y_DEFP((v996).f_head);
if ((Y_DEFP((F.v9453).f_tail) == Y_DEFP(F.v9455))) {
(F.v9453).f_tail = Y_DEFP((v996).f_tail);
}
}
v996 = F.v9453;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3669_Declarations(void * a_p3670) {
struct yf3671 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3670 = a_p3670;
F.v9469 = Y_UNDEF_P;
F.v9469 = F.p3670;
F.v9471 = Y_UNDEF_P;
F.v9471 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
F.v9473 = Y_UNDEF_I;
F.v9473 = Y_DEFI(v1850);
F.v9475 = Y_UNDEF_I;
F.v9475 = Y_DEFI(v1853);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = F.p3670;
while ((!(Y_DEFP(F.v9469) == ((void *)0)))) {
Y_TICK();
v1000 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_line);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = Y_DEFP(F.v9469);
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_kind) == v666)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_sym) == ((void *)0))) {
yr3675_DeclareRoutine(Y_DEFP(F.v9469));
}
} else if (((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_kind) == v624))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_ival) == INT64_C(0))) {
yr3777_CompileModule(Y_DEFP(F.v9469));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_kind) == v660)) {
yr3783_DeclareTemplate(Y_DEFP(F.v9469));
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_kind) == v663)) {
yr3789_Instantiate(Y_DEFP(F.v9469));
} else {
yr3627_SimpleDecl(Y_DEFP(F.v9469));
}
F.v9469 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9469)))).f_next);
}
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(F.v9471);
yr2727_CheckPending();
yr3740_ResolveLater(Y_DEFI(v1273));
if ((!Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_closed))) {
yr3656_RunDeferred(Y_DEFI(F.v9473), Y_DEFI(F.v9475));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3675_DeclareRoutine(void * a_p3676) {
struct yf3677 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3676 = a_p3676;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3676))).f_kind) == v654)) {
yr3582_RoutineHeader(F.p3676, v876);
} else {
yr3582_RoutineHeader(F.p3676, v885);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3676))).f_kind) == v666)) {
yr3795_DeclareProcess(F.p3676);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3676))).f_sym)))).f_hasmv))) {
yr3647_Defer(F.p3676, INT64_C(1), ((void *)0), 0);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3681_Alias(rt_int a_p3682, void * a_p3683) {
struct yf3684 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3682 = a_p3682;
F.p3683 = a_p3683;
F.v9485 = Y_UNDEF_P;
F.v9485 = yr2312_NewSym(v894, F.p3682);
((*(yR125 *)y_deref(Y_DEFP(F.v9485)))).f_target = F.p3683;
((*(yR125 *)y_deref(Y_DEFP(F.v9485)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3683))).f_readonly);
{ void * rv9486 = Y_DEFP(F.v9485);
y_use = F.yu; return rv9486; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3688_AddLits(void * * a_p3689, void * a_p3690, rt_int a_p3691) {
struct yf3692 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3689 = a_p3689;
F.p3690 = a_p3690;
F.p3691 = a_p3691;
F.v9492 = Y_UNDEF_P;
F.v9494 = Y_UNDEF_P;
F.v9496 = Y_UNDEF_P;
if ((((F.p3691 > INT64_C(8))) || Y_DEFI(((*(yR110 *)y_deref(F.p3690))).f_opaque))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3690))).f_kind) == v816)) {
F.v9492 = Y_DEFP(((*(yR110 *)y_deref(F.p3690))).f_lits);
while ((!(Y_DEFP(F.v9492) == ((void *)0)))) {
Y_TICK();
F.v9494 = yr2407_FindLit(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9492)))).f_name), F.p3690);
if ((!(Y_DEFP(F.v9494) == ((void *)0)))) {
F.v9494 = yr3681_Alias(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9492)))).f_name), Y_DEFP(F.v9494));
((*(yR125 *)y_deref(Y_DEFP(F.v9494)))).f_mnext = Y_DEFP((*F.p3689));
(*F.p3689) = Y_DEFP(F.v9494);
}
F.v9492 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9492)))).f_next);
}
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3690))).f_kind) == v825)) {
F.v9496 = Y_DEFP(((*(yR110 *)y_deref(F.p3690))).f_fields);
while ((!(Y_DEFP(F.v9496) == ((void *)0)))) {
Y_TICK();
yr3688_AddLits(&(*F.p3689), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9496)))).f_rep), y_range(y_add(F.p3691, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9496 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9496)))).f_next);
}
} else if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3690))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3690))).f_kind) == v834))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3690))).f_kind) == v831)))) {
yr3688_AddLits(&(*F.p3689), Y_DEFP(((*(yR110 *)y_deref(F.p3690))).f_elem), y_range(y_add(F.p3691, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3696_Provides(void * a_p3697, rt_int a_p3698) {
struct yf3699 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3697 = a_p3697;
F.p3698 = a_p3698;
F.v9506 = Y_UNDEF_P;
F.v9506 = Y_DEFP(((*(yR105 *)y_deref(F.p3697))).f_b);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3697))).f_name) == F.p3698)) {
{ rt_int rv9508 = 1;
y_use = F.yu; return rv9508; }
}
while ((!(Y_DEFP(F.v9506) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9506)))).f_ival) == INT64_C(0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9506)))).f_ival) == F.p3698)))) {
{ rt_int rv9511 = 1;
y_use = F.yu; return rv9511; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9506)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9506)))).f_name) == F.p3698)))) {
{ rt_int rv9514 = 1;
y_use = F.yu; return rv9514; }
}
F.v9506 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9506)))).f_next);
}
{ rt_int rv9516 = 0;
y_use = F.yu; return rv9516; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3703_ImportLater(rt_int a_p3704, rt_int a_p3705, void * * a_p3706) {
struct yf3707 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3704 = a_p3704;
F.p3705 = a_p3705;
F.p3706_o = a_p3706;
F.v9522 = Y_UNDEF_P;
F.p3706 = ((void *)0);
if ((Y_DEFI(v1273) < INT64_C(0))) {
{ rt_int rv9525 = INT64_C(0);
(*F.p3706_o) = F.p3706;
y_use = F.yu; return rv9525; }
}
F.v9522 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9522) == ((void *)0)))) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_kind) == v624)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_ival) == INT64_C(2))))) && yr3696_Provides(Y_DEFP(F.v9522), F.p3704))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_ival) == INT64_C(1))) {
F.p3706 = Y_DEFP(F.v9522);
{ rt_int rv9529 = INT64_C(2);
(*F.p3706_o) = F.p3706;
y_use = F.yu; return rv9529; }
}
yr3777_CompileModule(Y_DEFP(F.v9522));
{ rt_int rv9531 = INT64_C(1);
(*F.p3706_o) = F.p3706;
y_use = F.yu; return rv9531; }
}
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_kind) == v666)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_name) == F.p3704)))) {
{ rt_int rv9533 = INT64_C(3);
(*F.p3706_o) = F.p3706;
y_use = F.yu; return rv9533; }
}
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_kind) == v624))) && yr2374_DeclaredFrom(yr3711_OneDecl(Y_DEFP(F.v9522)), F.p3704))) {
yr1186_FailN(F.p3705, F.p3704, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v9522 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9522)))).f_next);
}
{ rt_int rv9536 = INT64_C(0);
(*F.p3706_o) = F.p3706;
y_use = F.yu; return rv9536; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3711_OneDecl(void * a_p3712) {
struct yf3713 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3712 = a_p3712;
F.v9540 = Y_UNDEF_P;
({ F.v9540 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v9540)); });
(*(yR105 *)y_deref(Y_DEFP(F.v9540))) = (*(yR105 *)y_deref(F.p3712));
((*(yR105 *)y_deref(Y_DEFP(F.v9540)))).f_next = ((void *)0);
{ void * rv9541 = Y_DEFP(F.v9540);
y_use = F.yu; return rv9541; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3717_Lazy(rt_int a_p3718, rt_int a_p3719, void * a_p3720, rt_int a_p3721) {
struct yf3722 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3718 = a_p3718;
F.p3719 = a_p3719;
F.p3720 = a_p3720;
F.p3721 = a_p3721;
F.v9548 = Y_UNDEF_P;
F.v9548 = yr2312_NewSym(v894, F.p3718);
if ((Y_DEFI(v1918) >= INT64_C(10000))) {
yr1178_FailS(F.p3721, y_str("too many imports translated later", 33));
}
v1918 = y_range(y_add(Y_DEFI(v1918), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1881).p)[y_ix1(v1881, Y_DEFI(v1918))] = Y_DEFP(F.v9548);
((rt_int *)(v1892).p)[y_ix1(v1892, Y_DEFI(v1918))] = F.p3719;
((void * *)(v1903).p)[y_ix1(v1903, Y_DEFI(v1918))] = F.p3720;
((rt_int *)(v1914).p)[y_ix1(v1914, Y_DEFI(v1918))] = Y_DEFI(v1273);
((rt_int *)(v1916).p)[y_ix1(v1916, Y_DEFI(v1918))] = F.p3721;
{ void * rv9553 = Y_DEFP(F.v9548);
y_use = F.yu; return rv9553; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3726_SetLazy(rt_int a_p3727, void * a_p3728) {
struct yf3729 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3727 = a_p3727;
F.p3728 = a_p3728;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1881).p)[y_ix1(v1881, F.p3727)])))).f_target = F.p3728;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1881).p)[y_ix1(v1881, F.p3727)])))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3728))).f_readonly);
((void * *)(v1881).p)[y_ix1(v1881, F.p3727)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3733_ResolveFrom(void * a_p3734, void * a_p3735) {
struct yf3736 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3734 = a_p3734;
F.p3735 = a_p3735;
F.v9561 = Y_UNDEF_P;
F.lo9565 = INT64_C(1);
F.hi9566 = Y_DEFI(v1918);
{ rt_int hi9570 = F.hi9566;
for (rt_int i9569 = F.lo9565; i9569 <= hi9570; i9569++) { F.c_9568 = i9569; Y_TICK();
if ((((!(Y_DEFP(((void * *)(v1881).p)[y_ix1(v1881, F.c_9568)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, F.c_9568)]) == F.p3734)))) {
F.v9561 = Y_DEFP(((*(yR125 *)y_deref(F.p3735))).f_members);
while ((((!(Y_DEFP(F.v9561) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9561)))).f_name) == Y_DEFI(((rt_int *)(v1892).p)[y_ix1(v1892, F.c_9568)])))))) {
Y_TICK();
F.v9561 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9561)))).f_mnext);
}
if ((Y_DEFP(F.v9561) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1916).p)[y_ix1(v1916, F.c_9568)]), Y_DEFI(((rt_int *)(v1892).p)[y_ix1(v1892, F.c_9568)]), y_str(" is not exported by that module", 31));
}
yr3726_SetLazy(y_range(F.c_9568, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9561));
}
if (i9569 == hi9570) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3740_ResolveLater(rt_int a_p3741) {
struct yf3742 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3741 = a_p3741;
F.v9575 = Y_UNDEF_P;
F.lo9579 = INT64_C(1);
F.hi9580 = Y_DEFI(v1918);
{ rt_int hi9584 = F.hi9580;
for (rt_int i9583 = F.lo9579; i9583 <= hi9584; i9583++) { F.c_9582 = i9583; Y_TICK();
if (((((!(Y_DEFP(((void * *)(v1881).p)[y_ix1(v1881, F.c_9582)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1903).p)[y_ix1(v1903, F.c_9582)]) == ((void *)0)))) && ((Y_DEFI(((rt_int *)(v1914).p)[y_ix1(v1914, F.c_9582)]) == F.p3741)))) {
F.v9575 = yr2342_Find(Y_DEFI(((rt_int *)(v1892).p)[y_ix1(v1892, F.c_9582)]));
if ((Y_DEFP(F.v9575) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1916).p)[y_ix1(v1916, F.c_9582)]), Y_DEFI(((rt_int *)(v1892).p)[y_ix1(v1892, F.c_9582)]), y_str(" is not declared around this module (X.B.2)", 43));
}
yr3726_SetLazy(y_range(F.c_9582, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9575));
}
if (i9583 == hi9584) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3746_LazyModule(void * a_p3747, void * * a_p3748, rt_int a_p3749) {
struct yf3750 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3747 = a_p3747;
F.p3748 = a_p3748;
F.p3749 = a_p3749;
F.v9591 = Y_UNDEF_P;
F.v9591 = Y_DEFP(((*(yR105 *)y_deref(F.p3747))).f_b);
F.v9593 = Y_UNDEF_P;
F.v9595 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9591) == ((void *)0)))) {
Y_TICK();
F.v9595 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9591)))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9591)))).f_ival) == INT64_C(0)))) {
F.v9595 = y_range(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9591)))).f_ival), INT64_C(0), INT64_C(4000000));
}
if (((((!(Y_DEFI(F.v9595) == v531))) && ((!(Y_DEFI(F.v9595) == v585)))) && ((!(Y_DEFI(F.v9595) == v570))))) {
F.v9593 = yr3717_Lazy(Y_DEFI(F.v9595), Y_DEFI(F.v9595), F.p3747, F.p3749);
((*(yR125 *)y_deref(Y_DEFP(F.v9593)))).f_mnext = Y_DEFP((*F.p3748));
(*F.p3748) = Y_DEFP(F.v9593);
}
F.v9591 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9591)))).f_next);
}
F.v9593 = yr3717_Lazy(Y_DEFI(((*(yR105 *)y_deref(F.p3747))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3747))).f_name), ((void *)0), F.p3749);
((*(yR125 *)y_deref(Y_DEFP(F.v9593)))).f_mnext = Y_DEFP((*F.p3748));
(*F.p3748) = Y_DEFP(F.v9593);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3754_ResolveItem(void * a_p3755, void * * a_p3756, rt_int a_p3757) {
struct yf3758 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3755 = a_p3755;
F.p3756 = a_p3756;
F.p3757 = a_p3757;
F.v9602 = Y_UNDEF_P;
F.v9604 = Y_UNDEF_P;
F.v9606 = Y_UNDEF_P;
F.v9608 = Y_UNDEF_I;
F.v9610 = Y_UNDEF_P;
F.v9612 = Y_UNDEF_I;
F.v9612 = Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_flag);
F.v9614 = Y_UNDEF_I;
F.v9616 = Y_UNDEF_P;
if (((F.p3757 && ((Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text) == INT64_C(0)))) && (((((Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name) == v531)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name) == v585))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name) == v570)))))) {
if ((yr2348_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name)) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v9608 = Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_ival) == INT64_C(0)))) {
F.v9608 = y_range(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_ival), INT64_C(0), INT64_C(4000000));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text) == INT64_C(0)))) {
if ((((!F.p3757)) && ((yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text)) == ((void *)0))))) {
F.v9614 = yr3703_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), &F.v9616);
if ((Y_DEFI(F.v9614) == INT64_C(2))) {
F.v9606 = yr3717_Lazy(Y_DEFI(F.v9608), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), Y_DEFP(F.v9616), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_mnext = Y_DEFP((*F.p3756));
(*F.p3756) = Y_DEFP(F.v9606);
y_use = F.yu; return;
}
}
F.v9604 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line)));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v879))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text), y_str(" is not a module", 16));
}
F.v9602 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_members);
while ((((!(Y_DEFP(F.v9602) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name)))))) {
Y_TICK();
F.v9602 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_mnext);
}
if ((Y_DEFP(F.v9602) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), y_str(" is not exported by that module", 31));
}
} else {
if (F.p3757) {
F.v9602 = yr2348_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name));
} else {
F.v9602 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name));
}
if ((((Y_DEFP(F.v9602) == ((void *)0))) && (!F.p3757))) {
F.v9614 = yr3703_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), &F.v9616);
if ((((Y_DEFI(F.v9614) == INT64_C(2))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9616)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name))))) {
if ((((!(Y_DEFI(F.v9612) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3746_LazyModule(Y_DEFP(F.v9616), &(*F.p3756), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9614) >= INT64_C(2))) {
F.v9606 = yr3717_Lazy(Y_DEFI(F.v9608), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), Y_DEFP(F.v9616), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_mnext = Y_DEFP((*F.p3756));
(*F.p3756) = Y_DEFP(F.v9606);
y_use = F.yu; return;
}
F.v9602 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name));
}
if ((F.p3757 && ((!(Y_DEFP(F.v9602) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_mval) == INT64_C(1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((Y_DEFP(F.v9602) == ((void *)0))) {
if (F.p3757) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), y_str(" is not declared in this module", 31));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v9604 = yr2447_Real(Y_DEFP(F.v9602));
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v879)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_text) == INT64_C(0))))) {
if ((((!(Y_DEFI(F.v9612) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v9606 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_members);
while ((!(Y_DEFP(F.v9606) == ((void *)0)))) {
Y_TICK();
F.v9602 = yr3681_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_name), Y_DEFP(F.v9606));
((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_mnext = Y_DEFP((*F.p3756));
(*F.p3756) = Y_DEFP(F.v9602);
F.v9606 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_mnext);
}
if ((!F.p3757)) {
F.v9602 = yr3681_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_name), Y_DEFP(F.v9604));
((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_mnext = Y_DEFP((*F.p3756));
(*F.p3756) = Y_DEFP(F.v9602);
}
y_use = F.yu; return;
}
F.v9606 = yr3681_Alias(Y_DEFI(F.v9608), Y_DEFP(F.v9602));
if (F.p3757) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v870)))) {
if ((((Y_DEFI(F.v9612) == v429)) || ((Y_DEFI(F.v9612) == v483)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), y_str("READONLY and VAR are for variables", 34));
}
if ((((Y_DEFI(F.v9612) == v474)) && Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep)))).f_opaque))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(Y_DEFI(F.v9612) == v474))) || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep)))).f_opaque))) {
F.v9610 = yr2460_CopyRep(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(F.v9610)))).f_opaque = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v9610)))).f_opaqueops = Y_DEFI(v1869);
((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_target = yr2312_NewSym(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_target)))).f_rep = Y_DEFP(F.v9610);
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_target)))).f_decl = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_decl);
} else {
yr3688_AddLits(&(*F.p3756), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep), INT64_C(0));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v864)))) {
if ((((Y_DEFI(F.v9612) == v396)) || ((Y_DEFI(F.v9612) == v474)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((Y_DEFI(F.v9612) == v483)) && ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v864)) || Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9602)))).f_readonly))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_name), y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(Y_DEFI(F.v9612) == v483))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_readonly = 1;
}
} else if ((!(Y_DEFI(F.v9612) == INT64_C(0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v861)) && ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep)))).f_kind) == v837)) || yr2503_HoldsSignal(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3755))).f_line), y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_kind) == v870)))) {
yr3688_AddLits(&(*F.p3756), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9604)))).f_rep), INT64_C(0));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9606)))).f_mnext = Y_DEFP((*F.p3756));
(*F.p3756) = Y_DEFP(F.v9606);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3762_DefineAll(void * a_p3763, rt_int a_p3764) {
struct yf3765 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3763 = a_p3763;
F.p3764 = a_p3764;
F.v9651 = Y_UNDEF_P;
F.v9651 = F.p3763;
F.v9653 = Y_UNDEF_P;
F.v9653 = F.p3763;
F.v9655 = Y_UNDEF_P;
F.v9655 = F.p3763;
while ((!(Y_DEFP(F.v9651) == ((void *)0)))) {
Y_TICK();
F.v9653 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9651)))).f_mnext);
F.v9655 = yr2348_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9651)))).f_name));
if (((!yr2395_Resolved(Y_DEFP(F.v9651))) || ((((!(Y_DEFP(F.v9655) == ((void *)0)))) && (!yr2395_Resolved(Y_DEFP(F.v9655))))))) {
if ((!(Y_DEFP(F.v9655) == ((void *)0)))) {
yr1186_FailN(F.p3764, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9651)))).f_name), y_str(" comes into this scope twice", 28));
}
yr2414_Define(Y_DEFP(F.v9651), F.p3764);
} else if ((((Y_DEFP(F.v9655) == ((void *)0))) || ((!(yr2447_Real(Y_DEFP(F.v9655)) == yr2447_Real(Y_DEFP(F.v9651))))))) {
if (((((!(Y_DEFP(F.v9655) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v9651))))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v9655))))).f_kind) == v873)))) {
yr2414_Define(Y_DEFP(F.v9651), F.p3764);
} else if ((Y_DEFP(F.v9655) == ((void *)0))) {
yr2414_Define(Y_DEFP(F.v9651), F.p3764);
} else {
yr1186_FailN(F.p3764, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9651)))).f_name), y_str(" comes into this scope twice", 28));
}
}
F.v9651 = Y_DEFP(F.v9653);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3769_ExtendWith(void * a_p3770, void * a_p3771, rt_int a_p3772) {
struct yf3773 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3770 = a_p3770;
F.p3771 = a_p3771;
F.p3772 = a_p3772;
F.v9663 = Y_UNDEF_P;
F.v9663 = ((void *)0);
F.v9665 = Y_UNDEF_P;
F.v9665 = ((void *)0);
F.v9667 = Y_UNDEF_P;
F.v9667 = ((void *)0);
F.v9669 = Y_UNDEF_P;
F.v9669 = ((void *)0);
F.v9669 = F.p3770;
while ((!(Y_DEFP(F.v9669) == ((void *)0)))) {
Y_TICK();
if ((!(yr3589_SameSignature(Y_DEFP(F.v9669), F.p3771) == ((void *)0)))) {
yr1186_FailN(F.p3772, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9669)))).f_name), y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9669)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3771))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(F.p3772, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9669)))).f_name), y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v9667 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v9667)); });
(*(yR125 *)y_deref(Y_DEFP(F.v9667))) = (*(yR125 *)y_deref(Y_DEFP(F.v9669)));
((*(yR125 *)y_deref(Y_DEFP(F.v9667)))).f_target = Y_DEFP(F.v9669);
((*(yR125 *)y_deref(Y_DEFP(F.v9667)))).f_alt = ((void *)0);
if ((Y_DEFP(F.v9665) == ((void *)0))) {
F.v9663 = Y_DEFP(F.v9667);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9665)))).f_alt = Y_DEFP(F.v9667);
}
F.v9665 = Y_DEFP(F.v9667);
F.v9669 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9669)))).f_alt);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9665)))).f_alt = F.p3771;
{ void * rv9672 = Y_DEFP(F.v9663);
y_use = F.yu; return rv9672; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3777_CompileModule(void * a_p3778) {
struct yf3779 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3778 = a_p3778;
F.v9676 = Y_UNDEF_P;
F.v9678 = Y_UNDEF_P;
F.v9680 = Y_UNDEF_P;
F.v9682 = Y_UNDEF_P;
F.v9684 = Y_UNDEF_P;
F.v9686 = Y_UNDEF_P;
F.v9688 = Y_UNDEF_P;
F.v9690 = Y_UNDEF_P;
F.v9692 = Y_UNDEF_P;
F.v9694 = Y_UNDEF_I;
F.v9696 = Y_UNDEF_P;
F.v9698 = Y_UNDEF_P;
F.v9700 = Y_UNDEF_I;
F.v9702 = Y_UNDEF_I;
F.v9704 = Y_UNDEF_I;
F.v9704 = 0;
((*(yR105 *)y_deref(F.p3778))).f_ival = INT64_C(1);
F.v9694 = Y_DEFI(v1717);
F.v9676 = ((void *)0);
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(F.p3778))).f_a);
while ((!(Y_DEFP(F.v9696) == ((void *)0)))) {
Y_TICK();
yr3754_ResolveItem(Y_DEFP(F.v9696), &F.v9676, 0);
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_next);
}
F.v9686 = Y_DEFP(v1856);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_flag) == INT64_C(1))) && ((Y_DEFP(v1856) == ((void *)0))))) {
F.v9688 = yr2312_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9688)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9688)))).f_cname = yr1200_Fresh(y_str("mon", 3));
((*(yR125 *)y_deref(Y_DEFP(F.v9688)))).f_rep = Y_DEFP(v1348);
yr2434_DeclStorage(yr1061_T(y_str("ymon", 4)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9688)))).f_cname));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2421_Path(Y_DEFI(v1279), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9688)))).f_cname)), yr1061_T(y_str(");", 2))));
v1856 = Y_DEFP(F.v9688);
F.v9704 = 1;
}
yr2319_OpenScope(1);
v1717 = Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name);
if ((Y_DEFI(v1699) >= INT64_C(64))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line), y_str("modules nested too deeply", 25));
}
v1699 = y_range(y_add(Y_DEFI(v1699), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1711).p)[y_ix1(v1711, Y_DEFI(v1699))] = Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3778))).f_d) == ((void *)0)))) {
v1693 = y_range(y_add(Y_DEFI(v1693), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((Y_DEFI(v1699) == INT64_C(1))) && ((!(Y_DEFI(v1690) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name) == Y_DEFI(v1690))))) {
v1696 = y_range(y_add(Y_DEFI(v1696), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))] = ((void *)0);
F.v9700 = Y_DEFI(v1276);
v1276 = Y_DEFI(v1273);
F.v9680 = Y_DEFP(F.v9676);
while ((!(Y_DEFP(F.v9680) == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(Y_DEFP(F.v9680)))).f_mval = INT64_C(1);
F.v9680 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9680)))).f_mnext);
}
yr3762_DefineAll(Y_DEFP(F.v9676), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line));
yr3669_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3778))).f_c)))).f_a));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("/* ", 3)), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name), yr1061_T(y_str(" */", 3))));
if ((Y_DEFI(v1693) == INT64_C(0))) {
yr3647_Defer(F.p3778, INT64_C(2), Y_DEFP((v996).f_tail), Y_DEFI(F.v9704));
}
v1869 = INT64_C(0);
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(F.p3778))).f_b);
while ((!(Y_DEFP(F.v9696) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_text) == INT64_C(0))) && ((yr2348_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_name)) == ((void *)0))))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_name) == v531)) {
v1869 = y_range(y_add(Y_DEFI(v1869), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_name) == v585)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_name) == v570)))) {
if (((y_div(Y_DEFI(v1869), INT64_C(2))) == INT64_C(0))) {
v1869 = y_range(y_add(Y_DEFI(v1869), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_next);
}
F.v9678 = ((void *)0);
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(F.p3778))).f_b);
while ((!(Y_DEFP(F.v9696) == ((void *)0)))) {
Y_TICK();
yr3754_ResolveItem(Y_DEFP(F.v9696), &F.v9678, 1);
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9696)))).f_next);
}
F.v9698 = Y_DEFP(((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))]);
v1276 = Y_DEFI(F.v9700);
v1717 = Y_DEFI(F.v9694);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3778))).f_d) == ((void *)0)))) {
v1693 = y_range(y_sub(Y_DEFI(v1693), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((Y_DEFI(v1699) == INT64_C(1))) && ((!(Y_DEFI(v1690) == INT64_C(0))))) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name) == Y_DEFI(v1690))))) {
v1696 = y_range(y_sub(Y_DEFI(v1696), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1699 = y_range(y_sub(Y_DEFI(v1699), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2331_CloseScope();
while ((!(Y_DEFP(F.v9698) == ((void *)0)))) {
Y_TICK();
F.v9696 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9698)))).f_next);
((*(yR105 *)y_deref(Y_DEFP(F.v9698)))).f_next = Y_DEFP(((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))]);
((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))] = Y_DEFP(F.v9698);
F.v9698 = Y_DEFP(F.v9696);
}
v1856 = Y_DEFP(F.v9686);
F.v9682 = yr2312_NewSym(v879, Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9682)))).f_members = Y_DEFP(F.v9678);
yr2414_Define(Y_DEFP(F.v9682), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line));
F.v9684 = Y_DEFP(F.v9678);
F.v9678 = ((void *)0);
while ((!(Y_DEFP(F.v9684) == ((void *)0)))) {
Y_TICK();
F.v9690 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_mnext);
F.v9680 = yr3681_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name), Y_DEFP(F.v9684));
((*(yR125 *)y_deref(Y_DEFP(F.v9680)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_readonly);
((*(yR125 *)y_deref(Y_DEFP(F.v9680)))).f_mnext = Y_DEFP(F.v9678);
F.v9678 = Y_DEFP(F.v9680);
F.v9684 = Y_DEFP(F.v9690);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9682)))).f_members = Y_DEFP(F.v9678);
((*(yR105 *)y_deref(F.p3778))).f_ival = INT64_C(2);
yr3733_ResolveFrom(F.p3778, Y_DEFP(F.v9682));
F.v9684 = Y_DEFP(F.v9678);
while ((!(Y_DEFP(F.v9684) == ((void *)0)))) {
Y_TICK();
F.v9690 = yr3681_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name), Y_DEFP(F.v9684));
((*(yR125 *)y_deref(Y_DEFP(F.v9690)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_readonly);
F.v9692 = yr2342_Find(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name));
if ((!(Y_DEFP(F.v9692) == ((void *)0)))) {
if ((!yr2395_Resolved(Y_DEFP(F.v9692)))) {
F.v9692 = ((void *)0);
} else {
F.v9692 = yr2447_Real(Y_DEFP(F.v9692));
}
}
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v9684))))).f_kind) == v876)) && ((!(Y_DEFP(F.v9692) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9692)))).f_kind) == v876)) {
F.v9690 = yr3769_ExtendWith(yr2447_Real(Y_DEFP(F.v9684)), Y_DEFP(F.v9692), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line));
}
}
if ((yr2348_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name)) == ((void *)0))) {
yr2414_Define(Y_DEFP(F.v9690), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line));
} else if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9690)))).f_kind) == v876)) {
yr2414_Define(Y_DEFP(F.v9690), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line));
} else if ((((Y_DEFI(((*(yR125 *)y_deref(yr2348_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name))))).f_kind) == v894)) && ((!(yr2447_Real(yr2348_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name))) == yr2447_Real(Y_DEFP(F.v9684))))))) {
yr2414_Define(Y_DEFP(F.v9690), Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line));
} else if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2447_Real(Y_DEFP(F.v9684))))).f_kind) == v873))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3778))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_name), y_str(" is exported into a scope that has it already", 45));
}
F.v9684 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9684)))).f_mnext);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3783_DeclareTemplate(void * a_p3784) {
struct yf3785 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3784 = a_p3784;
F.v9753 = Y_UNDEF_P;
F.v9753 = yr2312_NewSym(v882, Y_DEFI(((*(yR105 *)y_deref(F.p3784))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9753)))).f_decl = F.p3784;
yr2414_Define(Y_DEFP(F.v9753), Y_DEFI(((*(yR105 *)y_deref(F.p3784))).f_line));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3789_Instantiate(void * a_p3790) {
struct yf3791 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3790 = a_p3790;
F.v9757 = Y_UNDEF_P;
F.v9757 = yr2447_Real(yr2354_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_line)));
F.v9759 = Y_UNDEF_P;
F.v9761 = Y_UNDEF_P;
F.v9763 = Y_UNDEF_P;
F.v9765 = Y_UNDEF_I;
F.v9767 = Y_UNDEF_I;
F.v9769 = Y_UNDEF_I;
F.v9771 = Y_UNDEF_I;
F.v9773 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9757)))).f_kind) == v882))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_name), y_str(" is not a template", 18));
}
F.v9759 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9757)))).f_decl);
if ((!(yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9759)))).f_a)) == yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3790))).f_a))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_name), y_str(": the number of actuals is wrong", 32));
}
F.v9765 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9781 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9759)))).f_ival);
F.hi9782 = y_sub(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9759)))).f_flag), INT64_C(1));
{ rt_int hi9786 = F.hi9782;
for (rt_int i9785 = F.lo9781; i9785 <= hi9786; i9785++) { F.c_9784 = i9785; Y_TICK();
F.v9769 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.c_9784)]);
F.v9771 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.c_9784)]);
if ((Y_DEFI(F.v9769) == v207)) {
F.v9761 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9759)))).f_a);
F.v9763 = Y_DEFP(((*(yR105 *)y_deref(F.p3790))).f_a);
while ((!(Y_DEFP(F.v9761) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9761)))).f_name) == Y_DEFI(F.v9771))) && ((Y_DEFI(F.v9769) == v207)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9763)))).f_flag) == INT64_C(1))) {
F.v9769 = v216;
F.v9771 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9763)))).f_ival);
} else {
F.v9771 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9763)))).f_name);
if ((Y_DEFI(F.v9771) <= v492)) {
F.v9769 = v210;
} else if ((Y_DEFI(F.v9771) <= v621)) {
F.v9769 = v213;
}
}
}
F.v9761 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9761)))).f_next);
F.v9763 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9763)))).f_next);
}
}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = Y_DEFI(F.v9769);
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = Y_DEFI(F.v9771);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, F.c_9784)]);
if (i9785 == hi9786) break;
}}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = v204;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = INT64_C(0);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((*(yR105 *)y_deref(F.p3790))).f_line);
F.v9767 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v9765);
F.v9773 = yr2098_ParseModule();
v1249 = Y_DEFI(F.v9767);
yr3777_CompileModule(Y_DEFP(F.v9773));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3795_DeclareProcess(void * a_p3796) {
struct yf3797 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3796 = a_p3796;
F.v9796 = Y_UNDEF_P;
F.v9796 = Y_DEFP(((*(yR105 *)y_deref(F.p3796))).f_sym);
F.v9798 = Y_UNDEF_P;
((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_monitor = Y_DEFP(v1856);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_hasmv)) {
y_use = F.yu; return;
}
yr2434_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9796)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0)));
yr4127_SegActivation(Y_DEFP(F.v9796), F.p3796);
F.v9798 = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3796))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9798)))).f_sym = Y_DEFP(F.v9796);
((*(yR105 *)y_deref(Y_DEFP(F.v9798)))).f_next = Y_DEFP(((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))]);
((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))] = Y_DEFP(F.v9798);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3801_AwaitProcesses(void) {
struct yf3802 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9804 = Y_UNDEF_P;
F.v9804 = Y_DEFP(((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9804) == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3442_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2421_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9804)))).f_sym)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9804)))).f_sym)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
F.v9804 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9804)))).f_next);
}
((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3806_Activate(void * a_p3807, void * a_p3808) {
struct yf3809 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3807 = a_p3807;
F.p3808 = a_p3808;
F.v9815 = Y_UNDEF_I;
F.v9817 = Y_UNDEF_I;
F.v9819 = Y_UNDEF_I;
F.v9821 = Y_UNDEF_I;
F.v9823 = Y_UNDEF_I;
F.v9825 = Y_UNDEF_P;
F.v9827 = Y_UNDEF_I;
F.v9829 = Y_UNDEF_I;
F.v9831 = Y_UNDEF_P;
F.v9833 = Y_UNDEF_I;
F.v9835 = Y_UNDEF_I;
F.v9837 = Y_UNDEF_I;
F.v9839 = Y_UNDEF_I;
F.v9841 = Y_UNDEF_I;
F.v9843 = Y_UNDEF_I;
F.v9845 = Y_UNDEF_P;
F.v9845 = Y_DEFP(((*(yR125 *)y_deref(F.p3808))).f_decl);
F.v9847 = Y_UNDEF_P;
yr3191_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3807))).f_a), F.p3808, &F.v9815, &F.v9817);
if ((!(Y_DEFI(F.v9817) == Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_nparams)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3807))).f_line), Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3241_NoteCall(F.p3808, Y_DEFI(((*(yR105 *)y_deref(F.p3807))).f_line));
yr3530_CheckActuals(F.p3808, Y_DEFI(F.v9815), Y_DEFI(((*(yR105 *)y_deref(F.p3807))).f_line));
F.v9833 = yr1200_Fresh(y_str("pf", 2));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("{ struct ", 9)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3808))).f_members)))).f_name), yr3442_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v9833), yr3442_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), Y_DEFI(F.v9833), yr1061_T(y_str(");", 2))))));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_level) > INT64_C(1))) {
yr1132_Emit(yr3442_Join(Y_DEFI(F.v9833), yr1061_T(y_str("->up = ", 7)), yr3442_Join(yr2428_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9831 = Y_DEFP(((*(yR125 *)y_deref(F.p3808))).f_params);
F.v9819 = y_range(y_add(Y_DEFI(F.v9815), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v9831) == ((void *)0)))) {
Y_TICK();
if ((!yr3170_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))])))) {
yr2540_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))]));
}
F.v9839 = yr3442_Join(Y_DEFI(F.v9833), yr1061_T(y_str("->", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_cname));
yr3200_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep)))).f_kind) == v855)) {
yr1132_Emit(yr3442_Join(Y_DEFI(F.v9839), yr1061_T(y_str(" = ", 3)), yr3442_Join(yr2839_SpaceArg(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9819))]), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_cls) == v903)) {
if ((!yr2993_IsVariable(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_name), y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr3208_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3497_NoteWrite(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))]));
yr3480_DesigBase(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))]), &F.v9825, &F.v9827, &F.v9829);
if ((((!(Y_DEFP(F.v9825) == ((void *)0)))) && (!Y_DEFI(F.v9827)))) {
if ((yr3813_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9825)))).f_depth)) > yr3813_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9825)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1132_Emit(yr3442_Join(Y_DEFI(F.v9839), yr1061_T(y_str(" = &", 4)), yr3442_Join(yr3067_RawCode(Y_DEFP(((void * *)(v1549).p)[y_ix1(v1549, Y_DEFI(F.v9819))]), Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9819))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2490_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep))) {
F.v9835 = yr1200_Fresh(y_str("t", 1));
yr1132_Emit(yr3442_Join(yr1061_T(y_str("{ ", 2)), yr2515_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep)), yr3442_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v9835), yr3442_Join(yr1061_T(y_str(" = ", 3)), yr2965_Convert(Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9819))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))])), yr1061_T(y_str(";", 1))))));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep)))).f_elem)), yr3442_Join(yr1061_T(y_str("), &", 4)), Y_DEFI(F.v9839), yr3442_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9835), yr1061_T(y_str("); }", 4))))));
} else {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_copy(", 7)), yr2521_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep)), yr3442_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9839), yr3442_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9835), yr1061_T(y_str("); }", 4))))));
}
} else {
yr1132_Emit(yr3442_Join(Y_DEFI(F.v9839), yr1061_T(y_str(" = ", 3)), yr3442_Join(yr2965_Convert(Y_DEFI(((rt_int *)(v1527).p)[y_ix1(v1527, Y_DEFI(F.v9819))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_rep), Y_DEFP(((void * *)(v1538).p)[y_ix1(v1538, Y_DEFI(F.v9819))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9819 = y_range(y_add(Y_DEFI(F.v9819), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9831 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9831)))).f_next);
}
v1551 = Y_DEFI(F.v9815);
F.v9841 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_e) == ((void *)0)))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_e), Y_DEFP(v1342), &F.v9841, &F.v9847);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v9847));
}
F.v9843 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_d) == ((void *)0)))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_d), Y_DEFP(v1342), &F.v9837, &F.v9847);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v9847));
F.v9843 = yr3442_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v9837), INT64_C(0));
}
F.v9821 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_x) == ((void *)0)))) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_x), &F.v9823, &F.v9821);
if (((!Y_DEFI(F.v9823)) || ((Y_DEFI(F.v9821) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9845)))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(yr2421_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9841));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9843));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v9821));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3808))).f_cname));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9833));
yr1037_SA(y_str("); }", 4));
F.v9835 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9835));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3813_LifeDepth(rt_int a_p3814) {
struct yf3815 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3814 = a_p3814;
F.v9911 = Y_UNDEF_I;
F.v9911 = F.p3814;
while ((((Y_DEFI(F.v9911) > INT64_C(1))) && Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9911))])))).f_closed))) {
Y_TICK();
F.v9911 = y_range(y_sub(Y_DEFI(F.v9911), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv9915 = Y_DEFI(F.v9911);
y_use = F.yu; return rv9915; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3819_MonitorPath(void * a_p3820) {
struct yf3821 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3820 = a_p3820;
{ rt_int rv9920 = yr3442_Join(yr1061_T(y_str("&", 1)), yr2421_Path(Y_DEFI(((*(yR125 *)y_deref(F.p3820))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p3820))).f_cname)), INT64_C(0));
y_use = F.yu; return rv9920; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3825_EnterMonitor(void * a_p3826) {
struct yf3827 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3826 = a_p3826;
F.v9924 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3826))).f_kind) == v876)) {
((*(yR125 *)y_deref(F.p3826))).f_monitor = Y_DEFP(v1856);
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p3826))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3819_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3826))).f_monitor)), yr1061_T(y_str(");", 2))));
F.v9924 = yr1200_Fresh(y_str("mf", 2));
v1669 = 1;
yr1132_Emit(yr3442_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v9924), yr1061_T(y_str(";", 1))));
yr1026_SB();
yr1037_SA(y_str("if (!RT_TRY(", 12));
yr1044_ST(Y_DEFI(F.v9924));
yr1037_SA(y_str(")) { RT_POP(", 12));
yr1044_ST(Y_DEFI(F.v9924));
yr1037_SA(y_str("); ", 3));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3826))).f_kind) == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
}
yr1044_ST(yr3819_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3826))).f_monitor)));
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1132_Emit(yr1056_SE());
v1565 = y_range(y_add(Y_DEFI(v1565), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1563).p)[y_ix1(v1563, Y_DEFI(v1565))] = Y_DEFI(F.v9924);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3831_LeaveMonitor(void) {
struct yf3832 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFP(v1640) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_kind) == v885)) {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3819_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_monitor)), yr1061_T(y_str(");", 2))));
} else {
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3819_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_monitor)), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3836_TerminateStatement(void * a_p3837) {
struct yf3838 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3837 = a_p3837;
if ((((Y_DEFP(v1640) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1640)))).f_kind) == v885))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3837))).f_line), y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3801_AwaitProcesses();
yr3831_LeaveMonitor();
yr3330_PopTo(Y_DEFI(v1568));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3842_DeclareSignal(void * a_p3843, rt_int a_p3844) {
struct yf3845 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3843 = a_p3843;
F.p3844 = a_p3844;
if ((Y_DEFP(v1856) == ((void *)0))) {
yr1178_FailS(F.p3844, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR125 *)y_deref(F.p3843))).f_rep = yr2460_CopyRep(Y_DEFP(((*(yR125 *)y_deref(F.p3843))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3843))).f_rep)))).f_monitor = Y_DEFP(v1856);
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2441_SymPath(F.p3843), yr3442_Join(yr1061_T(y_str(", ", 2)), yr3819_MonitorPath(Y_DEFP(v1856)), yr1061_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3849_DeclareSignalArray(void * a_p3850, rt_int a_p3851) {
struct yf3852 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3850 = a_p3850;
F.p3851 = a_p3851;
if ((Y_DEFP(v1856) == ((void *)0))) {
yr1178_FailS(F.p3851, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1132_Emit(yr3442_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2521_DescOf(Y_DEFP(((*(yR125 *)y_deref(F.p3850))).f_rep)), yr3442_Join(yr1061_T(y_str(", &", 3)), yr2441_SymPath(F.p3850), yr3442_Join(yr1061_T(y_str(", ", 2)), yr3819_MonitorPath(Y_DEFP(v1856)), yr1061_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3856_DeviceSignal(void * a_p3857, void * a_p3858) {
struct yf3859 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3857 = a_p3857;
F.p3858 = a_p3858;
F.v9967 = Y_UNDEF_I;
F.v9969 = Y_UNDEF_I;
F.v9971 = Y_UNDEF_I;
yr2884_Manifest(F.p3858, &F.v9967, &F.v9969);
if ((!Y_DEFI(F.v9967))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3858))).f_line), y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1026_SB();
yr1037_SA(y_str("y_device(&", 10));
yr1044_ST(yr2441_SymPath(F.p3857));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v9969));
yr1037_SA(y_str(");", 2));
F.v9971 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9971));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3863_Arg(void * a_p3864, rt_int a_p3865) {
struct yf3866 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3864 = a_p3864;
F.p3865 = a_p3865;
F.v9980 = Y_UNDEF_P;
F.v9980 = Y_DEFP(((*(yR105 *)y_deref(F.p3864))).f_a);
F.v9982 = Y_UNDEF_I;
F.v9982 = INT64_C(1);
while ((((!(Y_DEFP(F.v9980) == ((void *)0)))) && ((Y_DEFI(F.v9982) < F.p3865)))) {
Y_TICK();
F.v9980 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9980)))).f_next);
F.v9982 = y_range(y_add(Y_DEFI(F.v9982), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(F.v9980) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3864))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3864))).f_name), y_str(": too few actual parameters", 27));
}
{ void * rv9987 = Y_DEFP(F.v9980);
y_use = F.yu; return rv9987; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3870_NArgs(void * a_p3871, rt_int a_p3872) {
struct yf3873 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3871 = a_p3871;
F.p3872 = a_p3872;
if ((!(yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3871))).f_a)) == F.p3872))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3871))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3871))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3877_Call1(yarr a_p3879, rt_int a_p3880) {
struct yf3881 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3879 = a_p3879;
F.p3880 = a_p3880;
yr1026_SB();
yr1037_SA(F.p3879);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3880);
yr1037_SA(y_str(")", 1));
{ rt_int rv9997 = yr1056_SE();
y_use = F.yu; return rv9997; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3885_Addr(rt_int a_p3886) {
struct yf3887 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3886 = a_p3886;
{ rt_int rv10002 = yr3442_Join(yr1061_T(y_str("&", 1)), F.p3886, INT64_C(0));
y_use = F.yu; return rv10002; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3891_StdVar(void * a_p3892, rt_int a_p3893, rt_int * a_p3894, void * * a_p3895) {
struct yf3896 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3892 = a_p3892;
F.p3893 = a_p3893;
F.p3894_o = a_p3894;
F.p3895_o = a_p3895;
F.v10009 = Y_UNDEF_I;
yr3005_LValue(F.p3892, &F.p3894, &F.p3895);
yr3497_NoteWrite(F.p3892);
if ((((!(F.p3893 == v858))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3895)))).f_kind) == F.p3893))))) {
yr1026_SB();
yr1037_SA(y_str("a ", 2));
if ((F.p3893 == v831)) {
yr1037_SA(y_str("file", 4));
} else if ((F.p3893 == v837)) {
yr1037_SA(y_str("signal", 6));
} else if ((F.p3893 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3893 == v828)) {
yr1037_SA(y_str("pointer", 7));
} else {
yr1037_SA(y_str("variable", 8));
}
yr1037_SA(y_str(" is needed here", 15));
F.v10009 = yr1056_SE();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p3892))).f_line), Y_DEFI(F.v10009));
}
(*F.p3894_o) = F.p3894;
(*F.p3895_o) = F.p3895;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3900_NumArg(void * a_p3901, rt_int * a_p3902, void * * a_p3903) {
struct yf3904 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3901 = a_p3901;
F.p3902_o = a_p3902;
F.p3903_o = a_p3903;
yr3032_Expr(F.p3901, ((void *)0), &F.p3902, &F.p3903);
if ((!yr2472_IsNumeric(Y_DEFP(F.p3903)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3901))).f_line), y_str("a number is needed here", 23));
}
(*F.p3902_o) = F.p3902;
(*F.p3903_o) = F.p3903;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3908_IntArg(void * a_p3909) {
struct yf3910 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3909 = a_p3909;
F.v10025 = Y_UNDEF_I;
F.v10027 = Y_UNDEF_P;
yr3032_Expr(F.p3909, Y_DEFP(v1342), &F.v10025, &F.v10027);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10027)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3909))).f_line), y_str("an integer is needed here", 25));
}
{ rt_int rv10029 = Y_DEFI(F.v10025);
y_use = F.yu; return rv10029; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3914_CodeInsert(void * a_p3915) {
struct yf3916 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3915 = a_p3915;
F.v10033 = Y_UNDEF_P;
F.v10033 = yr3863_Arg(F.p3915, INT64_C(1));
F.v10036 = Y_UNDEF_I;
F.v10038 = Y_UNDEF_I;
F.v10040 = Y_UNDEF_I;
F.v10042 = Y_UNDEF_I;
F.v10044 = Y_UNDEF_I;
F.v10046 = Y_UNDEF_I;
F.v10048 = Y_UNDEF_B;
F.v10050 = Y_UNDEF_P;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_10059, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_10059, &F.v10061);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10033)))).f_kind) == v771))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3915))).f_line), y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v10036 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10033)))).f_text);
F.v10046 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10036))]);
yr1026_SB();
F.v10042 = INT64_C(1);
while ((Y_DEFI(F.v10042) <= Y_DEFI(F.v10046))) {
Y_TICK();
F.v10048 = yr1103_TChar(Y_DEFI(F.v10036), Y_DEFI(F.v10042));
if ((Y_DEFB(F.v10048) == 39)) {
F.v10044 = y_range(y_add(Y_DEFI(F.v10042), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v10044) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10036))]))) && ((!(yr1103_TChar(Y_DEFI(F.v10036), Y_DEFI(F.v10044)) == 39))))) {
Y_TICK();
F.v10044 = y_range(y_add(Y_DEFI(F.v10044), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v10044) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v10036))]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3915))).f_line), y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v10038 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10036))]), Y_DEFI(F.v10042)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10044), Y_DEFI(F.v10042))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, yr2867_CharValue(Y_DEFP(v1346), Y_DEFI(F.v10038), Y_DEFI(((*(yR105 *)y_deref(F.p3915))).f_line)))]));
F.v10042 = y_range(y_add(Y_DEFI(F.v10044), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v10048) == 36)) {
F.v10044 = y_range(y_add(Y_DEFI(F.v10042), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v10044) <= Y_DEFI(F.v10046))) && ((yr1008_IsLetter(yr1103_TChar(Y_DEFI(F.v10036), Y_DEFI(F.v10044))) || yr1014_IsDigit(yr1103_TChar(Y_DEFI(F.v10036), Y_DEFI(F.v10044))))))) {
Y_TICK();
F.v10044 = y_range(y_add(Y_DEFI(F.v10044), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10038 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v10036))]), Y_DEFI(F.v10042)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v10044), Y_DEFI(F.v10042))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10050 = yr2342_Find(Y_DEFI(F.v10038));
if ((Y_DEFP(F.v10050) == ((void *)0))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3915))).f_line), Y_DEFI(F.v10038), y_str(" in a code insert is not declared here", 38));
}
F.v10050 = yr2447_Real(Y_DEFP(F.v10050));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10050)))).f_kind) == v861))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10050)))).f_kind) == v864))))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3915))).f_line), Y_DEFI(F.v10038), y_str(" in a code insert is not a variable or constant", 47));
}
yr1044_ST(yr3013_Paren(yr2441_SymPath(Y_DEFP(F.v10050))));
F.v10042 = Y_DEFI(F.v10044);
} else {
yr1031_SC(Y_DEFB(F.v10048));
F.v10042 = y_range(y_add(Y_DEFI(F.v10042), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v10040 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v10040));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3920_ManifestScale(void * a_p3921, void * a_p3922) {
struct yf3923 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3921 = a_p3921;
F.p3922 = a_p3922;
F.v10100 = Y_UNDEF_I;
F.v10102 = Y_UNDEF_I;
F.v10104 = Y_UNDEF_I;
F.v10106 = Y_UNDEF_P;
yr2950_ManifestFix(F.p3921, &F.v10100, &F.v10102, &F.v10104);
if (((!Y_DEFI(F.v10100)) || ((Y_DEFI(F.v10102) <= INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3922))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3922))).f_name), y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v10106 = yr2460_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.v10106)))).f_abstract = 0;
yr2662_SetScale(Y_DEFP(F.v10106), Y_DEFI(F.v10102), Y_DEFI(F.v10104));
{ void * rv10110 = Y_DEFP(F.v10106);
y_use = F.yu; return rv10110; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3927_StdCall(rt_int a_p3928, void * a_p3929, rt_int a_p3930, rt_int * a_p3931, void * * a_p3932) {
struct yf3933 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3928 = a_p3928;
F.p3929 = a_p3929;
F.p3930 = a_p3930;
F.p3931_o = a_p3931;
F.p3932_o = a_p3932;
F.v10118 = Y_UNDEF_P;
F.v10120 = Y_UNDEF_I;
F.v10122 = Y_UNDEF_I;
F.v10124 = Y_UNDEF_I;
F.v10126 = Y_UNDEF_I;
F.v10128 = Y_UNDEF_I;
F.v10130 = Y_UNDEF_P;
F.v10132 = Y_UNDEF_P;
F.v10134 = Y_UNDEF_P;
F.v10136 = Y_UNDEF_P;
F.v10138 = Y_UNDEF_I;
F.v10140 = Y_UNDEF_I;
F.v10142 = Y_UNDEF_I;
F.v10144 = Y_UNDEF_I;
F.v10146 = Y_UNDEF_P;
F.v10148 = Y_UNDEF_I;
F.p3932 = Y_DEFP(v1348);
F.p3931 = yr1061_T(y_str("((void)0)", 9));
F.v10148 = (((((((((((((((((F.p3928 == v1384)) || ((F.p3928 == v1387))) || ((F.p3928 == v1390))) || ((F.p3928 == v1393))) || ((F.p3928 == v1396))) || ((F.p3928 == v1402))) || ((F.p3928 == v1411))) || ((F.p3928 == v1417))) || ((F.p3928 == v1420))) || ((F.p3928 == v1444))) || ((F.p3928 == v1447))) || ((F.p3928 == v1456))) || ((F.p3928 == v1459))) || ((F.p3928 == v1462))) || ((F.p3928 == v1465))) || ((F.p3928 == v1474)));
if ((F.p3930 && (!Y_DEFI(F.v10148)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_name), y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3930) && Y_DEFI(F.v10148))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_name), y_str(" returns no value", 17));
}
if ((((F.p3928 == v1366)) || ((F.p3928 == v1369)))) {
yr3870_NArgs(F.p3929, INT64_C(2));
yr3032_Expr(yr3863_Arg(F.p3929, INT64_C(1)), ((void *)0), &F.v10120, &F.v10130);
if ((!yr2478_IsArrayLike(Y_DEFP(F.v10130)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_name), y_str(" of something that is not an array", 34));
}
F.v10122 = yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(2)));
yr2884_Manifest(yr3863_Arg(F.p3929, INT64_C(2)), &F.v10144, &F.v10142);
F.p3932 = yr3115_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(F.v10144) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v822)))) {
if ((((Y_DEFI(F.v10142) < INT64_C(1))) || ((Y_DEFI(F.v10142) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_nidx))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("no such dimension", 17));
}
F.v10136 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_idx);
F.lo10162 = INT64_C(2);
F.hi10163 = Y_DEFI(F.v10142);
{ rt_int hi10167 = F.hi10163;
for (rt_int i10166 = F.lo10162; i10166 <= hi10167; i10166++) { F.c_10165 = i10166; Y_TICK();
F.v10136 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10136)))).f_link);
if (i10166 == hi10167) break;
}}
F.p3932 = Y_DEFP(F.v10136);
}
if ((F.p3928 == v1366)) {
F.p3931 = yr3121_Call2(y_str("y_low", 5), Y_DEFI(F.v10120), Y_DEFI(F.v10122));
} else {
F.p3931 = yr3121_Call2(y_str("y_high", 6), Y_DEFI(F.v10120), Y_DEFI(F.v10122));
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((((((F.p3928 == v1372)) || ((F.p3928 == v1375))) || ((F.p3928 == v1378))) || ((F.p3928 == v1381)))) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3032_Expr(yr3863_Arg(F.p3929, INT64_C(1)), ((void *)0), &F.v10120, &F.v10130);
if ((!yr2466_IsDiscrete(Y_DEFP(F.v10130)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_name), y_str(" of something that is not integer or scalar", 43));
}
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v813)) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_ordered)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_name), y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem) == ((void *)0)))) {
F.v10130 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem);
}
if ((((((F.p3928 == v1378)) || ((F.p3928 == v1381)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v804)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3928 == v1378)) {
F.p3932 = Y_DEFP(F.v10130);
F.p3931 = yr2596_LoText(Y_DEFP(F.v10130));
} else if ((F.p3928 == v1381)) {
F.p3932 = Y_DEFP(F.v10130);
F.p3931 = yr2602_HiText(Y_DEFP(F.v10130));
} else {
F.p3932 = yr3115_Unbounded(Y_DEFP(F.v10130));
yr1026_SB();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v804))) {
yr1037_SA(y_str("y_range(", 8));
}
if ((F.p3928 == v1372)) {
yr1037_SA(y_str("y_add(", 6));
} else {
yr1037_SA(y_str("y_sub(", 6));
}
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", 1)", 4));
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v804))) {
yr1037_SA(y_str(", 0, ", 5));
yr1050_SI(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(")", 1));
}
F.p3931 = yr1056_SE();
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1384)) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v828, &F.v10120, &F.v10130);
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_forward), y_str(" is not declared", 16));
}
F.v10136 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(" = y_new(sizeof(", 16));
yr1044_ST(yr2515_CType(Y_DEFP(F.v10136)));
yr1037_SA(y_str("));", 3));
if ((yr2490_Deep(Y_DEFP(F.v10136)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10136)))).f_kind) == v825)))) {
yr1037_SA(y_str(" y_initu(", 9));
yr1044_ST(yr2521_DescOf(Y_DEFP(F.v10136)));
yr1037_SA(y_str(", y_deref(", 10));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str("));", 3));
} else if ((!(yr3061_UndefValue(Y_DEFP(F.v10136)) == INT64_C(0)))) {
yr1037_SA(y_str(" *(", 3));
yr1044_ST(yr2515_CType(Y_DEFP(F.v10136)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(") = ", 4));
yr1044_ST(yr3061_UndefValue(Y_DEFP(F.v10136)));
yr1037_SA(y_str(";", 1));
}
yr1037_SA(y_str(" })", 3));
F.p3931 = yr1056_SE();
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1462)) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v828, &F.v10120, &F.v10130);
F.p3931 = yr3442_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), Y_DEFI(F.v10120), yr1061_T(y_str("))", 2)));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1387)) {
yr3870_NArgs(F.p3929, INT64_C(3));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v831, &F.v10120, &F.v10130);
yr3032_Expr(yr3863_Arg(F.p3929, INT64_C(2)), Y_DEFP(v1346), &F.v10122, &F.v10132);
if ((!yr2484_IsString(Y_DEFP(F.v10132)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr3032_Expr(yr3863_Arg(F.p3929, INT64_C(3)), Y_DEFP(v1921), &F.v10124, &F.v10134);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFP(v1921), Y_DEFP(F.v10134));
yr1026_SB();
yr1037_SA(y_str("y_open(&", 8));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10122));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10124));
yr1037_SA(y_str(")", 1));
F.p3931 = yr1056_SE();
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((((F.p3928 == v1390)) || ((F.p3928 == v1399)))) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v831, &F.v10120, &F.v10130);
if ((F.p3928 == v1390)) {
F.p3931 = yr3877_Call1(y_str("y_close", 7), yr3885_Addr(Y_DEFI(F.v10120)));
} else {
F.p3932 = Y_DEFP(v1344);
F.p3931 = yr3877_Call1(y_str("y_check_eof", 11), yr3885_Addr(Y_DEFI(F.v10120)));
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1393)) {
yr3870_NArgs(F.p3929, INT64_C(2));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v831, &F.v10120, &F.v10130);
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(2)), v858, &F.v10122, &F.v10132);
F.v10136 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFP(F.v10136), Y_DEFP(F.v10132));
if (yr2509_NonAssignable(Y_DEFP(F.v10136))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2515_CType(Y_DEFP(F.v10136)));
yr1037_SA(y_str(" g; ", 4));
if (yr2490_Deep(Y_DEFP(F.v10136))) {
yr1037_SA(y_str("y_init(", 7));
yr1044_ST(yr2521_DescOf(Y_DEFP(F.v10136)));
yr1037_SA(y_str(", &g); ", 7));
}
yr1037_SA(y_str("y_get_value(&", 13));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2521_DescOf(Y_DEFP(F.v10136)));
yr1037_SA(y_str(", &g); ", 7));
yr1044_ST(yr2973_StoreText(Y_DEFI(F.v10122), Y_DEFP(F.v10132), yr1061_T(y_str("g", 1)), Y_DEFP(F.v10136), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line)));
yr1037_SA(y_str(" })", 3));
F.p3931 = yr1056_SE();
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1396)) {
yr3870_NArgs(F.p3929, INT64_C(2));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v831, &F.v10120, &F.v10130);
F.v10136 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem);
yr3032_Expr(yr3863_Arg(F.p3929, INT64_C(2)), Y_DEFP(F.v10136), &F.v10122, &F.v10132);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFP(F.v10136), Y_DEFP(F.v10132));
if (yr2509_NonAssignable(Y_DEFP(F.v10136))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2515_CType(Y_DEFP(F.v10136)));
yr1037_SA(y_str(" pv = ", 6));
yr1044_ST(yr2965_Convert(Y_DEFI(F.v10122), Y_DEFP(F.v10136), Y_DEFP(F.v10132)));
yr1037_SA(y_str("; y_put_value(&", 15));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2521_DescOf(Y_DEFP(F.v10136)));
yr1037_SA(y_str(", &pv); })", 10));
F.p3931 = yr1056_SE();
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1402)) {
F.v10138 = yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3929))).f_a));
if ((((Y_DEFI(F.v10138) < INT64_C(5))) || ((!((y_mod((y_sub(Y_DEFI(F.v10138), INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("MOVE takes an object, an index and triples", 42));
}
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v858, &F.v10120, &F.v10130);
if (((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v843))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_nidx) == INT64_C(1)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("MOVE works on one-dimensional arrays", 36));
}
F.v10122 = yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(2)));
F.v10128 = yr1200_Fresh(y_str("at", 2));
yr1026_SB();
yr1037_SA(y_str("({ rt_int ", 10));
yr1044_ST(Y_DEFI(F.v10128));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v10122));
yr1037_SA(y_str(";", 1));
F.p3931 = yr1056_SE();
F.v10140 = INT64_C(3);
while ((Y_DEFI(F.v10140) < Y_DEFI(F.v10138))) {
Y_TICK();
yr3032_Expr(yr3863_Arg(F.p3929, Y_DEFI(F.v10140)), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem), &F.v10124, &F.v10134);
if (((!yr2478_IsArrayLike(Y_DEFP(F.v10134))) || (!yr2533_SameType(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10134)))).f_elem))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("MOVE: the components differ in type", 35));
}
F.v10126 = yr3908_IntArg(yr3863_Arg(F.p3929, y_range(y_add(Y_DEFI(F.v10140), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v10122 = yr3908_IntArg(yr3863_Arg(F.p3929, y_range(y_add(Y_DEFI(F.v10140), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3931));
yr1037_SA(y_str(" { rt_int mi = ", 15));
yr1044_ST(Y_DEFI(F.v10126));
yr1037_SA(y_str(", mj = ", 7));
yr1044_ST(Y_DEFI(F.v10122));
yr1037_SA(y_str("; y_move(&", 10));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10128));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10124));
yr1037_SA(y_str(", mi, mj, ", 10));
yr1044_ST(yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_elem)));
yr1037_SA(y_str("); if (mj >= mi) ", 17));
yr1044_ST(Y_DEFI(F.v10128));
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
F.p3931 = yr1056_SE();
F.v10140 = y_range(y_add(Y_DEFI(F.v10140), INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3931 = yr3442_Join(Y_DEFI(F.p3931), yr1061_T(y_str(" })", 3)), INT64_C(0));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((((F.p3928 == v1405)) || ((F.p3928 == v1408)))) {
yr3870_NArgs(F.p3929, INT64_C(2));
F.v10120 = yr3412_Cond(yr3863_Arg(F.p3929, INT64_C(1)));
F.v10122 = yr3412_Cond(yr3863_Arg(F.p3929, INT64_C(2)));
F.p3932 = Y_DEFP(v1344);
if ((F.p3928 == v1405)) {
F.p3931 = yr3130_Infix(yr3013_Paren(yr3130_Infix(Y_DEFI(F.v10120), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr3013_Paren(yr3130_Infix(Y_DEFI(F.v10122), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
} else {
F.p3931 = yr3130_Infix(yr3013_Paren(yr3130_Infix(Y_DEFI(F.v10120), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr3013_Paren(yr3130_Infix(Y_DEFI(F.v10122), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1411)) {
yr3870_NArgs(F.p3929, INT64_C(1));
F.p3931 = yr3877_Call1(y_str("rt_delay", 8), yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(1))));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1414)) {
yr3870_NArgs(F.p3929, INT64_C(0));
F.p3932 = yr3115_Unbounded(Y_DEFP(v1342));
F.p3931 = yr1061_T(y_str("rt_time()", 9));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if (((((F.p3928 == v1417)) || ((F.p3928 == v1420))) || ((F.p3928 == v1423)))) {
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v837, &F.v10120, &F.v10130);
if ((F.p3928 == v1417)) {
if ((yr2008_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3929))).f_a)) == INT64_C(1))) {
F.v10122 = yr1061_T(y_str("1", 1));
} else {
yr3870_NArgs(F.p3929, INT64_C(2));
F.v10122 = yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(2)));
}
F.p3931 = yr3121_Call2(y_str("y_wait", 6), yr3885_Addr(Y_DEFI(F.v10120)), Y_DEFI(F.v10122));
} else {
yr3870_NArgs(F.p3929, INT64_C(1));
if ((F.p3928 == v1420)) {
F.p3931 = yr3877_Call1(y_str("y_send", 6), yr3885_Addr(Y_DEFI(F.v10120)));
} else {
F.p3932 = Y_DEFP(v1344);
F.p3931 = yr3877_Call1(y_str("y_awaited", 9), yr3885_Addr(Y_DEFI(F.v10120)));
}
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if (((((F.p3928 == v1426)) || ((F.p3928 == v1429))) || ((F.p3928 == v1432)))) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3900_NumArg(yr3863_Arg(F.p3929, INT64_C(1)), &F.v10120, &F.v10130);
F.p3932 = yr3115_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v804)) {
F.p3931 = Y_DEFI(F.v10120);
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v807)) {
yr1026_SB();
if ((F.p3928 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3928 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
}
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3931 = yr1056_SE();
} else if ((F.p3928 == v1426)) {
F.p3931 = yr3877_Call1(y_str("y_floor", 7), Y_DEFI(F.v10120));
} else if ((F.p3928 == v1429)) {
F.p3931 = yr3877_Call1(y_str("y_ceiling", 9), Y_DEFI(F.v10120));
} else {
F.p3931 = yr3877_Call1(y_str("y_near_integer", 14), Y_DEFI(F.v10120));
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1438)) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3900_NumArg(yr3863_Arg(F.p3929, INT64_C(1)), &F.v10120, &F.v10130);
F.p3932 = Y_DEFP(v1354);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v807)) {
F.p3931 = yr3154_FixToFloat(Y_DEFI(F.v10120), Y_DEFP(F.v10130));
} else {
F.p3931 = yr3442_Join(yr1061_T(y_str("((double)(", 10)), Y_DEFI(F.v10120), yr1061_T(y_str("))", 2)));
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1435)) {
yr3870_NArgs(F.p3929, INT64_C(2));
yr3900_NumArg(yr3863_Arg(F.p3929, INT64_C(1)), &F.v10120, &F.v10130);
F.p3932 = yr3920_ManifestScale(yr3863_Arg(F.p3929, INT64_C(2)), F.p3929);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_fix_of_float(", 15));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3932)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3932)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3931 = yr1056_SE();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v804)) {
F.v10134 = yr2460_CopyRep(Y_DEFP(v1356));
yr2662_SetScale(Y_DEFP(F.v10134), INT64_C(1), INT64_C(1));
F.v10120 = yr3442_Join(yr1061_T(y_str("((yfix)(", 8)), Y_DEFI(F.v10120), yr1061_T(y_str("))", 2)));
} else {
F.v10134 = Y_DEFP(F.v10130);
}
yr2645_ScaleRatio(Y_DEFP(F.v10134), Y_DEFP(F.p3932), &F.v10126, &F.v10128, &F.v10144);
yr1026_SB();
yr1037_SA(y_str("y_fix_near(", 11));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10126));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10128));
yr1037_SA(y_str(")", 1));
F.p3931 = yr1056_SE();
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1441)) {
yr3870_NArgs(F.p3929, INT64_C(3));
yr3900_NumArg(yr3863_Arg(F.p3929, INT64_C(1)), &F.v10120, &F.v10130);
yr3900_NumArg(yr3863_Arg(F.p3929, INT64_C(2)), &F.v10122, &F.v10132);
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v807))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10132)))).f_kind) == v807))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFP(F.v10130), Y_DEFP(F.v10132));
F.p3932 = yr3920_ManifestScale(yr3863_Arg(F.p3929, INT64_C(3)), F.p3929);
((*(yR110 *)y_deref(Y_DEFP(F.p3932)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3932)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_tname);
F.v10134 = yr2460_CopyRep(Y_DEFP(v1356));
yr2662_SetScale(Y_DEFP(F.v10134), yr2629_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10132)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3932)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line)), yr2629_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10132)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3932)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line)));
yr2645_ScaleRatio(Y_DEFP(F.v10130), Y_DEFP(F.v10134), &F.v10126, &F.v10128, &F.v10144);
yr1026_SB();
yr1037_SA(y_str("y_fix_div(", 10));
yr1044_ST(Y_DEFI(F.v10120));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10122));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10126));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10128));
yr1037_SA(y_str(")", 1));
F.p3931 = yr1056_SE();
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1450)) {
v1672 = y_range(y_add(Y_DEFI(v1672), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3928 == v1444)) || ((F.p3928 == v1447))) || ((F.p3928 == v1450)))) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v840, &F.v10120, &F.v10130);
if ((F.p3928 == v1444)) {
F.p3931 = yr3877_Call1(y_str("rt_region_enter", 15), yr3885_Addr(Y_DEFI(F.v10120)));
} else if ((F.p3928 == v1447)) {
F.p3931 = yr3877_Call1(y_str("rt_region_leave", 15), yr3885_Addr(Y_DEFI(F.v10120)));
} else {
F.p3932 = Y_DEFP(v1344);
F.p3931 = yr3877_Call1(y_str("y_cond_claim", 12), yr3885_Addr(Y_DEFI(F.v10120)));
}
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1453)) {
yr3870_NArgs(F.p3929, INT64_C(0));
F.p3932 = yr3115_Unbounded(Y_DEFP(v1342));
F.p3931 = yr1061_T(y_str("y_self()", 8));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1456)) {
yr3870_NArgs(F.p3929, INT64_C(2));
F.p3931 = yr3121_Call2(y_str("y_change_priority", 17), yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(1))), yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(2))));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1459)) {
yr3870_NArgs(F.p3929, INT64_C(1));
F.p3931 = yr3877_Call1(y_str("y_raise_termination", 19), yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(1))));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1465)) {
yr3870_NArgs(F.p3929, INT64_C(1));
yr3914_CodeInsert(F.p3929);
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((((F.p3928 == v1468)) || ((F.p3928 == v1471)))) {
yr3870_NArgs(F.p3929, INT64_C(1));
F.v10146 = yr3863_Arg(F.p3929, INT64_C(1));
yr3032_Expr(Y_DEFP(F.v10146), ((void *)0), &F.v10120, &F.v10130);
if ((F.p3928 == v1471)) {
F.p3932 = yr3115_Unbounded(Y_DEFP(v1342));
F.p3931 = yr2832_ExtentCode(Y_DEFI(F.v10120), Y_DEFP(F.v10130));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
F.p3932 = Y_DEFP(v1923);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v855)) {
F.p3931 = yr3442_Join(yr1061_T(y_str("y_addr((", 8)), Y_DEFI(F.v10120), yr3442_Join(yr1061_T(y_str(").p, (", 6)), Y_DEFI(F.v10120), yr1061_T(y_str(").words)", 8))));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10146)))).f_kind) == v777)) {
F.v10118 = yr2342_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10146)))).f_name));
if ((!(Y_DEFP(F.v10118) == ((void *)0)))) {
if (yr2395_Resolved(Y_DEFP(F.v10118))) {
F.v10118 = yr2447_Real(Y_DEFP(F.v10118));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10118)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10118)))).f_kind) == v864)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10118)))).f_at) >= INT64_C(0))))) {
F.p3931 = yr3224_Num(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v10118)))).f_at));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
}
}
}
if (((!((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10146)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10146)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10146)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10146)))).f_kind) == v789))))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v10130)))).f_kind) == v846)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
}
F.p3931 = yr3442_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), yr3067_RawCode(Y_DEFP(F.v10146), Y_DEFI(F.v10120)), yr3442_Join(yr1061_T(y_str("), ", 3)), yr2832_ExtentCode(Y_DEFI(F.v10120), Y_DEFP(F.v10130)), yr1061_T(y_str(")", 1))));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1474)) {
yr3870_NArgs(F.p3929, INT64_C(2));
yr3891_StdVar(yr3863_Arg(F.p3929, INT64_C(1)), v828, &F.v10120, &F.v10130);
F.v10122 = yr3908_IntArg(yr3863_Arg(F.p3929, INT64_C(2)));
F.p3931 = yr3442_Join(yr1061_T(y_str("(", 1)), Y_DEFI(F.v10120), yr3442_Join(yr1061_T(y_str(" = y_cell(y_mem_ptr(", 20)), Y_DEFI(F.v10122), yr1061_T(y_str(")))", 3))));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
}
if ((F.p3928 == v1477)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3929))).f_name), y_str(" is not translated", 18));
(*F.p3931_o) = F.p3931;
(*F.p3932_o) = F.p3932;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3937_ArgCount(void) {
struct yf3938 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10374 = Y_UNDEF_I;
(F.v10374) = rt_argc();
((void)0);
{ rt_int rv10375 = Y_DEFI(F.v10374);
y_use = F.yu; return rv10375; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3942_ArgTxt(rt_int a_p3943) {
struct yf3944 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3943 = a_p3943;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_10386, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10386, &F.v10388);
F.v10390 = Y_UNDEF_I;
{ rstr s = rt_arg((F.p3943)); (F.v10390) = s.len > 4096 ? 4096 : s.len; memcpy((F.v10388).p, s.p, (size_t)(F.v10390)); }
((void)0);
yr1026_SB();
F.lo10394 = INT64_C(1);
F.hi10395 = Y_DEFI(F.v10390);
{ rt_int hi10399 = F.hi10395;
for (rt_int i10398 = F.lo10394; i10398 <= hi10399; i10398++) { F.c_10397 = i10398; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10388).p)[y_ix1(F.v10388, F.c_10397)]));
if (i10398 == hi10399) break;
}}
{ rt_int rv10400 = yr1056_SE();
y_use = F.yu; return rv10400; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3948_ReadArgs(void) {
struct yf3949 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10403 = Y_UNDEF_I;
F.v10403 = yr3937_ArgCount();
F.v10405 = Y_UNDEF_I;
F.v10407 = Y_UNDEF_P;
F.v10407 = ((void *)0);
F.v10409 = Y_UNDEF_P;
F.v10409 = ((void *)0);
if ((Y_DEFI(F.v10403) == INT64_C(1))) {
y_use = F.yu; return;
}
if ((Y_DEFI(F.v10403) < INT64_C(3))) {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
}
F.v10405 = yr3942_ArgTxt(INT64_C(1));
v1683 = yr3942_ArgTxt(INT64_C(2));
if (yr1088_TEq(Y_DEFI(F.v10405), yr1061_T(y_str("-i", 2)))) {
v1680 = v1495;
} else if (yr1088_TEq(Y_DEFI(F.v10405), yr1061_T(y_str("-c", 2)))) {
v1680 = v1498;
} else if (yr1088_TEq(Y_DEFI(F.v10405), yr1061_T(y_str("-l", 2)))) {
v1680 = v1501;
F.lo10424 = INT64_C(3);
F.hi10425 = y_sub(Y_DEFI(F.v10403), INT64_C(1));
{ rt_int hi10429 = F.hi10425;
for (rt_int i10428 = F.lo10424; i10428 <= hi10429; i10428++) { F.c_10427 = i10428; Y_TICK();
F.v10407 = yr1993_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v10407)))).f_name = yr1075_Name(yr3942_ArgTxt(y_range(F.c_10427, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr2000_Link(&v1686, &F.v10409, Y_DEFP(F.v10407));
if (i10428 == hi10429) break;
}}
} else {
yr1178_FailS(INT64_C(0), y_str("usage: yellowc [-i LIB | -c LIB | -l LIB SEGMENT ...]", 53));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3953_LibPath(rt_int a_p3954, yarr a_p3956) {
struct yf3957 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3954 = a_p3954;
F.p3956 = a_p3956;
yr1026_SB();
yr1044_ST(Y_DEFI(v1683));
yr1037_SA(y_str("/", 1));
yr1044_ST(F.p3954);
yr1037_SA(F.p3956);
{ rt_int rv10437 = yr1056_SE();
y_use = F.yu; return rv10437; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3961_ReadInto(rt_int a_p3962) {
volatile
struct yf3963 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3962 = a_p3962;
F.v10441 = Y_UNDEF_I;
F.v10441 = 1;
{
F.lo10448 = INT64_C(1);
F.hi10449 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3962)]);
{ rt_int lo[1] = {F.lo10448}, hi[1] = {F.hi10449}; y_desc_array(&F.yd_10451, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10451, &F.v10453);
F.v10457 = Y_UNDEF_B;
{ rt_frame xf10458;
if (RT_TRY(xf10458)) {
F.lo10462 = INT64_C(1);
F.hi10463 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3962)]);
{ rt_int hi10467 = F.hi10463;
for (rt_int i10466 = F.lo10462; i10466 <= hi10467; i10466++) { F.c_10465 = i10466; Y_TICK();
((unsigned char *)(F.v10453).p)[y_ix1(F.v10453, F.c_10465)] = yr1103_TChar(F.p3962, y_range(F.c_10465, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if (i10466 == hi10467) break;
}}
y_open(&F.v10455, F.v10453, 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&F.v10455))) {
Y_TICK();
({ unsigned char g; y_get_value(&F.v10455, &y_d_byte, &g); F.v10457 = g; });
yr1020_PoolAdd(Y_DEFB(F.v10457));
}
v1219 = Y_DEFI(v915);
y_close(&F.v10455);
RT_POP(xf10458);
} else {
RT_POP(xf10458);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10471 = rt_xcur;
if (xc10471 == rt_exc("FILE_ERROR")) {
F.v10441 = 0;
} else {
rt_raise(xc10471);
}
}}
}
{ rt_int rv10473 = Y_DEFI(F.v10441);
y_use = F.yu; return rv10473; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3967_WriteFile(rt_int a_p3968, yR140 a_p3969) {
volatile
struct yf3970 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3968 = a_p3968;
F.p3969 = a_p3969;
F.v10478 = Y_UNDEF_P;
F.v10478 = Y_DEFP((F.p3969).f_head);
{
F.lo10484 = INT64_C(1);
F.hi10485 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3968)]);
{ rt_int lo[1] = {F.lo10484}, hi[1] = {F.hi10485}; y_desc_array(&F.yd_10487, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10487, &F.v10489);
{ rt_frame xf10492;
if (RT_TRY(xf10492)) {
F.lo10496 = INT64_C(1);
F.hi10497 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3968)]);
{ rt_int hi10501 = F.hi10497;
for (rt_int i10500 = F.lo10496; i10500 <= hi10501; i10500++) { F.c_10499 = i10500; Y_TICK();
((unsigned char *)(F.v10489).p)[y_ix1(F.v10489, F.c_10499)] = yr1103_TChar(F.p3968, y_range(F.c_10499, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if (i10500 == hi10501) break;
}}
y_open(&F.v10491, F.v10489, 1);
while ((!(Y_DEFP(F.v10478) == ((void *)0)))) {
Y_TICK();
yr1171_WriteTo(&F.v10491, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10478)))).f_t));
({ unsigned char pv = 10; y_put_value(&F.v10491, &y_d_byte, &pv); });
F.v10478 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10478)))).f_next);
}
y_close(&F.v10491);
RT_POP(xf10492);
} else {
RT_POP(xf10492);
y_use = F.yu + (rt_int)((sizeof F + 7) / 8);
int xc10504 = rt_xcur;
if (xc10504 == rt_exc("FILE_ERROR")) {
yr1186_FailN(INT64_C(0), F.p3968, y_str(" cannot be written", 18));
} else {
rt_raise(xc10504);
}
}}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3974_ReadLibLine(rt_int a_p3975) {
struct yf3976 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3975 = a_p3975;
F.v10510 = Y_UNDEF_I;
if ((!yr3961_ReadInto(F.p3975))) {
{ rt_int rv10512 = INT64_C(0);
y_use = F.yu; return rv10512; }
}
F.v10510 = Y_DEFI(v1216);
while ((((Y_DEFI(F.v10510) <= Y_DEFI(v1219))) && ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v10510))]) == 10))))) {
Y_TICK();
F.v10510 = y_range(y_add(Y_DEFI(F.v10510), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10517 = yr1068_Intern(Y_DEFI(v1216), y_range(y_sub(Y_DEFI(F.v10510), Y_DEFI(v1216)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv10517; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3980_DigitsIn(rt_int a_p3981, rt_int a_p3982) {
struct yf3983 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3981 = a_p3981;
F.p3982 = a_p3982;
F.v10522 = Y_UNDEF_I;
F.v10522 = F.p3981;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(70)}; y_desc_array(&F.yd_10531, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_10531, &F.v10533);
F.v10535 = Y_UNDEF_I;
F.v10535 = INT64_C(0);
if ((Y_DEFI(F.v10522) < INT64_C(0))) {
yr1031_SC(45);
F.v10522 = y_range(y_neg(Y_DEFI(F.v10522)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v10535 = y_range(y_add(Y_DEFI(F.v10535), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((y_mod(Y_DEFI(F.v10522), F.p3982)) < INT64_C(10))) {
((unsigned char *)(F.v10533).p)[y_ix1(F.v10533, Y_DEFI(F.v10535))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10522), F.p3982)), INT64_C(48)))]);
} else {
((unsigned char *)(F.v10533).p)[y_ix1(F.v10533, Y_DEFI(F.v10535))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v10522), F.p3982)), INT64_C(55)))]);
}
F.v10522 = y_range(y_div(Y_DEFI(F.v10522), F.p3982), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v10522) == INT64_C(0))) {
goto yl_10540;
}
}
yl_10540: ;
while ((Y_DEFI(F.v10535) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v10533).p)[y_ix1(F.v10533, Y_DEFI(F.v10535))]));
F.v10535 = y_range(y_sub(Y_DEFI(F.v10535), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3987_TokenText(rt_int a_p3988) {
struct yf3989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3988 = a_p3988;
F.v10559 = Y_UNDEF_I;
F.v10559 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.p3988)]);
F.v10561 = Y_UNDEF_I;
F.v10561 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.p3988)]);
if ((((((Y_DEFI(F.v10559) == v207)) || ((Y_DEFI(F.v10559) == v210))) || ((Y_DEFI(F.v10559) == v213))) || ((Y_DEFI(F.v10559) == v222)))) {
yr1044_ST(y_range(Y_DEFI(F.v10561), INT64_C(0), INT64_C(4000000)));
} else if ((Y_DEFI(F.v10559) == v216)) {
yr1050_SI(Y_DEFI(F.v10561));
} else if ((Y_DEFI(F.v10559) == v219)) {
if ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10561))]) == INT64_C(10)))) {
yr1037_SA(y_str("BASE", 4));
yr1050_SI(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10561))]));
yr1037_SA(y_str(" ", 1));
}
yr3980_DigitsIn(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v10561))]), Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v10561))]));
yr1037_SA(y_str("P", 1));
yr1050_SI(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v10561))]));
} else if ((Y_DEFI(F.v10559) == v225)) {
yr1031_SC(39);
yr1044_ST(y_range(Y_DEFI(F.v10561), INT64_C(0), INT64_C(4000000)));
yr1031_SC(39);
} else if ((Y_DEFI(F.v10559) == v228)) {
yr1031_SC(34);
yr1044_ST(y_range(Y_DEFI(F.v10561), INT64_C(0), INT64_C(4000000)));
yr1031_SC(34);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static yR140 yr3993_TokensText(rt_int a_p3994, rt_int a_p3995) {
struct yf3996 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3994 = a_p3994;
F.p3995 = a_p3995;
y_initu(&yd_141, &F.v10574);
F.v10574 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v10576 = Y_UNDEF_I;
F.v10576 = F.p3994;
F.v10578 = Y_UNDEF_I;
while ((Y_DEFI(F.v10576) < F.p3995)) {
Y_TICK();
F.v10578 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v10576))]);
yr1026_SB();
while ((((Y_DEFI(F.v10576) < F.p3995)) && ((Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(F.v10576))]) == Y_DEFI(F.v10578))))) {
Y_TICK();
yr3987_TokenText(Y_DEFI(F.v10576));
yr1037_SA(y_str(" ", 1));
F.v10576 = y_range(y_add(Y_DEFI(F.v10576), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1110_Put(&F.v10574, yr1056_SE());
}
{ yR140 rv10582 = F.v10574;
y_use = F.yu; return rv10582; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4000_Fingerprint(yR140 a_p4001) {
struct yf4002 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4001 = a_p4001;
F.v10586 = Y_UNDEF_I;
F.v10586 = INT64_C(7);
F.v10589 = Y_UNDEF_P;
F.v10589 = Y_DEFP((F.p4001).f_head);
while ((!(Y_DEFP(F.v10589) == ((void *)0)))) {
Y_TICK();
F.lo10593 = INT64_C(1);
F.hi10594 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10589)))).f_t))]);
{ rt_int hi10598 = F.hi10594;
for (rt_int i10597 = F.lo10593; i10597 <= hi10598; i10597++) { F.c_10596 = i10597; Y_TICK();
F.v10586 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v10586), INT64_C(131))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10589)))).f_t), y_range(F.c_10596, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i10597 == hi10598) break;
}}
F.v10586 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v10586), INT64_C(131))), INT64_C(10))), INT64_C(1099511627776)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10589 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10589)))).f_next);
}
{ rt_int rv10610 = Y_DEFI(F.v10586);
y_use = F.yu; return rv10610; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4006_TokEq(rt_int a_p4007, rt_int a_p4008, rt_int a_p4009, rt_int a_p4010) {
struct yf4011 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4007 = a_p4007;
F.p4008 = a_p4008;
F.p4009 = a_p4009;
F.p4010 = a_p4010;
F.v10617 = Y_UNDEF_I;
F.v10619 = Y_UNDEF_I;
if ((!((y_sub(F.p4008, F.p4007)) == (y_sub(F.p4010, F.p4009))))) {
{ rt_int rv10623 = 0;
y_use = F.yu; return rv10623; }
}
F.v10617 = F.p4007;
F.v10619 = F.p4009;
while ((Y_DEFI(F.v10617) < F.p4008)) {
Y_TICK();
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10617))]) == Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10619))])))) {
{ rt_int rv10625 = 0;
y_use = F.yu; return rv10625; }
}
if ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10617))]) == v219)) {
if (((((!(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10617))]))]) == Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10619))]))])))) || ((!(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10617))]))]) == Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10619))]))]))))) || ((!(Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10617))]))]) == Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10619))]))])))))) {
{ rt_int rv10627 = 0;
y_use = F.yu; return rv10627; }
}
} else if (((((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10617))]) == v228)) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10617))]) == v222))) || ((Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(F.v10617))]) == v225)))) {
if ((!yr1088_TEq(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10617))]), INT64_C(0), INT64_C(4000000)), y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10619))]), INT64_C(0), INT64_C(4000000))))) {
{ rt_int rv10629 = 0;
y_use = F.yu; return rv10629; }
}
} else if ((!(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10617))]) == Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(F.v10619))])))) {
{ rt_int rv10631 = 0;
y_use = F.yu; return rv10631; }
}
F.v10617 = y_range(y_add(Y_DEFI(F.v10617), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10619 = y_range(y_add(Y_DEFI(F.v10619), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv10637 = 1;
y_use = F.yu; return rv10637; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4015_CheckSynopsis(void * a_p4016, rt_int a_p4017) {
struct yf4018 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4016 = a_p4016;
F.p4017 = a_p4017;
F.v10642 = Y_UNDEF_P;
F.v10644 = Y_UNDEF_P;
F.v10646 = Y_UNDEF_P;
F.v10646 = Y_DEFP(((*(yR105 *)y_deref(F.p4016))).f_c);
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10646)))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10646)))).f_b) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4016))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4016))).f_name), y_str(": a synopsis has declarations only, no statements (XIII.B)", 58));
}
if (F.p4017) {
F.v10644 = Y_DEFP(((*(yR105 *)y_deref(F.p4016))).f_a);
while ((!(Y_DEFP(F.v10644) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10644)))).f_text) == INT64_C(0))) && (!yr4022_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10644)))).f_name))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10644)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10644)))).f_name), y_str(" is not a segment: a synopsis imports segments and what they export (XIII.C)", 76));
}
F.v10644 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10644)))).f_next);
}
}
F.v10642 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10646)))).f_a);
while ((!(Y_DEFP(F.v10642) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_kind) == v654)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_e) == ((void *)0))))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_kind) == v666)))) {
if (((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_c)))).f_a) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_c)))).f_b) == ((void *)0))))) || ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_c)))).f_c) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_name), y_str(": a synopsis gives the header of a routine, not its body (XIII.E)", 65));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_kind) == v624)) {
yr4015_CheckSynopsis(Y_DEFP(F.v10642), 0);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_kind) == v660)) {
yr4015_CheckSynopsis(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_b), 0);
}
F.v10642 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10642)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4022_IsSegment(rt_int a_p4023) {
struct yf4024 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4023 = a_p4023;
F.v10656 = Y_UNDEF_P;
F.v10656 = Y_DEFP(v1927);
while ((!(Y_DEFP(F.v10656) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10656)))).f_name) == F.p4023)) {
{ rt_int rv10658 = 1;
y_use = F.yu; return rv10658; }
}
F.v10656 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10656)))).f_next);
}
{ rt_int rv10660 = 0;
y_use = F.yu; return rv10660; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4028_CheckPairing(void * a_p4029, void * a_p4030) {
struct yf4031 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4029 = a_p4029;
F.p4030 = a_p4030;
F.v10665 = Y_UNDEF_P;
F.v10667 = Y_UNDEF_P;
F.v10669 = Y_UNDEF_I;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p4029))).f_flag) == Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_flag)))) || (!yr4006_TokEq(Y_DEFI(((*(yR105 *)y_deref(F.p4029))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4029))).f_t1), Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_t1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_name), y_str(": the segment imports and exports what its synopsis does, and nothing else (XIII.C)", 83));
}
F.v10665 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4029))).f_c)))).f_a);
while ((!(Y_DEFP(F.v10665) == ((void *)0)))) {
Y_TICK();
F.v10669 = 0;
F.v10667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p4030))).f_c)))).f_a);
while ((((!(Y_DEFP(F.v10667) == ((void *)0)))) && (!Y_DEFI(F.v10669)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_kind))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_kind) == v624)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_name))) {
yr4028_CheckPairing(Y_DEFP(F.v10665), Y_DEFP(F.v10667));
F.v10669 = 1;
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_kind) == v660)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_name))) {
yr4028_CheckPairing(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_b), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_b));
F.v10669 = 1;
}
} else if (yr4006_TokEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_t1), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_t0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_t1))) {
F.v10669 = 1;
}
}
F.v10667 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10667)))).f_next);
}
if ((!Y_DEFI(F.v10669))) {
yr1026_SB();
yr1037_SA(y_str("the declaration of line ", 24));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_line));
yr1037_SA(y_str(" of the synopsis of ", 20));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_name));
yr1037_SA(y_str(" is not in the segment as it is there (XIII.I)", 46));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p4030))).f_line), yr1056_SE());
}
F.v10665 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10665)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4035_PairInInput(void) {
struct yf4036 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10680 = Y_UNDEF_P;
F.v10682 = Y_UNDEF_P;
F.v10684 = Y_UNDEF_P;
F.v10684 = ((void *)0);
F.v10680 = Y_DEFP(v1927);
while ((!(Y_DEFP(F.v10680) == ((void *)0)))) {
Y_TICK();
F.v10682 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10680)))).f_next);
while ((((!(Y_DEFP(F.v10682) == ((void *)0)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10682)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10680)))).f_name)))))) {
Y_TICK();
F.v10682 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10682)))).f_next);
}
if ((!(Y_DEFP(F.v10682) == ((void *)0)))) {
yr4015_CheckSynopsis(Y_DEFP(F.v10680), 1);
yr4028_CheckPairing(Y_DEFP(F.v10680), Y_DEFP(F.v10682));
if ((Y_DEFP(F.v10684) == ((void *)0))) {
v1927 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10680)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v10684)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10680)))).f_next);
}
} else {
F.v10684 = Y_DEFP(F.v10680);
}
F.v10680 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10680)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4040_LoadSynopsis(rt_int a_p4041, rt_int a_p4042) {
struct yf4043 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4041 = a_p4041;
F.p4042 = a_p4042;
F.v10690 = Y_UNDEF_I;
F.v10692 = Y_UNDEF_I;
F.v10694 = Y_UNDEF_I;
F.v10696 = Y_UNDEF_P;
F.v10698 = Y_UNDEF_P;
F.v10700 = Y_UNDEF_P;
F.v10702 = Y_UNDEF_I;
if (yr4022_IsSegment(F.p4041)) {
y_use = F.yu; return;
}
F.v10702 = yr3974_ReadLibLine(yr3953_LibPath(F.p4041, y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10702) == INT64_C(0))) || (!yr3961_ReadInto(yr3953_LibPath(F.p4041, y_str(".ysyn", 5)))))) {
yr1186_FailN(F.p4042, F.p4041, y_str(" is not a segment of the library: no synopsis of it there (XIII.I)", 66));
}
F.v10690 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10694 = Y_DEFI(v1225);
v1225 = INT64_C(1);
yr1988_Lex();
v1225 = Y_DEFI(F.v10694);
F.v10692 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v10690);
F.v10696 = yr2098_ParseModule();
v1249 = Y_DEFI(F.v10692);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10696)))).f_name) == F.p4041))) {
yr1186_FailN(F.p4042, F.p4041, y_str(": its synopsis in the library is of another module", 50));
}
((*(yR105 *)y_deref(Y_DEFP(F.v10696)))).f_d = yr1993_NewNode(v669, F.p4042);
((*(yR105 *)y_deref(Y_DEFP(F.v10696)))).f_next = Y_DEFP(v1927);
v1927 = Y_DEFP(F.v10696);
F.v10700 = yr1993_NewNode(v669, F.p4042);
((*(yR105 *)y_deref(Y_DEFP(F.v10700)))).f_name = F.p4041;
((*(yR105 *)y_deref(Y_DEFP(F.v10700)))).f_text = Y_DEFI(F.v10702);
((*(yR105 *)y_deref(Y_DEFP(F.v10700)))).f_next = Y_DEFP(v1688);
v1688 = Y_DEFP(F.v10700);
yr4047_LoadImports(Y_DEFP(F.v10696));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4047_LoadImports(void * a_p4048) {
struct yf4049 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4048 = a_p4048;
F.v10714 = Y_UNDEF_P;
F.v10714 = Y_DEFP(((*(yR105 *)y_deref(F.p4048))).f_a);
while ((!(Y_DEFP(F.v10714) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_text) == INT64_C(0)))) {
yr4040_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_line));
} else if ((!yr4022_IsSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_name)))) {
yr4040_LoadSynopsis(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_line));
}
F.v10714 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10714)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4053_LastSegment(void) {
struct yf4054 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10718 = Y_UNDEF_P;
F.v10718 = Y_DEFP(v1927);
if ((Y_DEFP(F.v10718) == ((void *)0))) {
yr1178_FailS(INT64_C(0), y_str("no segment", 10));
}
while ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10718)))).f_next) == ((void *)0)))) {
Y_TICK();
F.v10718 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10718)))).f_next);
}
{ void * rv10721 = Y_DEFP(F.v10718);
y_use = F.yu; return rv10721; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4058_Interface(void) {
struct yf4059 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10724 = Y_UNDEF_P;
F.v10724 = yr4053_LastSegment();
y_initu(&yd_141, &F.v10726);
F.v10728 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10730);
F.v10730 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr4047_LoadImports(Y_DEFP(F.v10724));
yr4015_CheckSynopsis(Y_DEFP(F.v10724), 1);
((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_d = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_line));
yr4173_Translate();
F.v10726 = yr3993_TokensText(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_x)))).f_ival), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_x)))).f_flag));
F.v10728 = yr4000_Fingerprint(F.v10726);
yr3967_WriteFile(yr3953_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_name), y_str(".ysyn", 5)), F.v10726);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v10728));
yr1110_Put(&F.v10730, yr1056_SE());
yr3967_WriteFile(yr3953_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_name), y_str(".yfp", 4)), F.v10730);
yr1026_SB();
yr1037_SA(y_str("/* the synopsis of ", 19));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10724)))).f_name));
yr1037_SA(y_str(", fingerprint ", 14));
yr1050_SI(Y_DEFI(F.v10728));
yr1037_SA(y_str(" */", 3));
yr1145_WriteTxt(yr1056_SE());
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4063_Segment(void) {
struct yf4064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10740 = Y_UNDEF_P;
F.v10740 = yr4053_LastSegment();
F.v10742 = Y_UNDEF_P;
F.v10744 = Y_UNDEF_I;
F.v10746 = Y_UNDEF_I;
F.v10748 = Y_UNDEF_I;
F.v10750 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10752);
F.v10752 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v10754 = Y_UNDEF_P;
v1690 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name);
F.v10744 = yr3974_ReadLibLine(yr3953_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name), y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10744) == INT64_C(0))) || (!yr3961_ReadInto(yr3953_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name), y_str(".ysyn", 5)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name), y_str(": its synopsis is not in the library; translate it with -i first (XIII.I)", 73));
}
F.v10746 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v10750 = Y_DEFI(v1225);
v1225 = INT64_C(1);
yr1988_Lex();
v1225 = Y_DEFI(F.v10750);
F.v10748 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v10746);
F.v10742 = yr2098_ParseModule();
v1249 = Y_DEFI(F.v10748);
yr4028_CheckPairing(Y_DEFP(F.v10742), Y_DEFP(F.v10740));
F.v10754 = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v10754)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v10754)))).f_text = Y_DEFI(F.v10744);
((*(yR105 *)y_deref(Y_DEFP(F.v10754)))).f_next = Y_DEFP(v1688);
v1688 = Y_DEFP(F.v10754);
yr4047_LoadImports(Y_DEFP(F.v10740));
yr4173_Translate();
F.v10754 = Y_DEFP(v1688);
while ((!(Y_DEFP(F.v10754) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10752, yr3442_Join(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10754)))).f_name), yr1061_T(y_str(" ", 1)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10754)))).f_text)));
F.v10754 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10754)))).f_next);
}
yr3967_WriteFile(yr3953_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name), y_str(".yuse", 5)), F.v10752);
yr4074_WriteSegment(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10740)))).f_name));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4068_UsesText(void * a_p4069) {
struct yf4070 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4069 = a_p4069;
F.v10767 = Y_UNDEF_P;
F.v10767 = F.p4069;
yr1026_SB();
while ((!(Y_DEFP(F.v10767) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v10767)))).f_t));
yr1037_SA(y_str(";", 1));
F.v10767 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v10767)))).f_next);
}
{ rt_int rv10769 = yr1056_SE();
y_use = F.yu; return rv10769; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4074_WriteSegment(rt_int a_p4075) {
struct yf4076 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4075 = a_p4075;
F.v10773 = Y_UNDEF_P;
F.v10773 = Y_DEFP(v1688);
F.v10775 = Y_UNDEF_I;
yr1117_PutS(&v990, y_str("static void y_elaborate(void) {", 31));
yr1125_Append(&v990, &v996);
yr1117_PutS(&v990, y_str("}", 1));
yr1110_Put(&v990, yr3442_Join(yr1061_T(y_str("void ys_", 8)), F.p4075, yr1061_T(y_str("_init(void) { y_elaborate(); }", 30))));
yr1110_Put(&v990, yr3442_Join(yr1061_T(y_str("void ys_", 8)), F.p4075, yr1061_T(y_str("_await(void) {", 14))));
yr1125_Append(&v990, &v1715);
yr1117_PutS(&v990, y_str("}", 1));
yr1026_SB();
yr1037_SA(y_str("const char ys_", 14));
yr1044_ST(F.p4075);
yr1037_SA(y_str("_uses[] = ", 10));
yr1031_SC(34);
while ((!(Y_DEFP(F.v10773) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10773)))).f_name));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10773)))).f_text));
yr1037_SA(y_str(";", 1));
F.v10773 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10773)))).f_next);
}
yr1031_SC(34);
yr1037_SA(y_str(";", 1));
yr1110_Put(&v990, yr1056_SE());
yr4183_WriteHead();
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4080_LinkProgram(void) {
struct yf4081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10792 = Y_UNDEF_P;
F.v10794 = Y_UNDEF_P;
F.v10796 = Y_UNDEF_I;
F.v10798 = Y_UNDEF_I;
F.v10800 = Y_UNDEF_I;
F.v10802 = Y_UNDEF_I;
F.v10804 = Y_UNDEF_I;
F.v10806 = Y_UNDEF_I;
F.v10808 = Y_UNDEF_I;
y_initu(&yd_141, &F.v10810);
F.v10810 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr1117_PutS(&F.v10810, y_str("#include <stdio.h>", 18));
yr1117_PutS(&F.v10810, y_str("#include <stdlib.h>", 19));
yr1117_PutS(&F.v10810, y_str("#include <string.h>", 19));
yr1117_PutS(&F.v10810, y_str("#include \"paleo.h\"", 18));
F.v10792 = Y_DEFP(v1686);
while ((!(Y_DEFP(F.v10792) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10810, yr3442_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), yr1061_T(y_str("_init(void);", 12))));
yr1110_Put(&F.v10810, yr3442_Join(yr1061_T(y_str("void ys_", 8)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), yr1061_T(y_str("_await(void);", 13))));
yr1110_Put(&F.v10810, yr3442_Join(yr1061_T(y_str("extern const char ys_", 21)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), yr1061_T(y_str("_uses[];", 8))));
F.v10792 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_next);
}
yr1117_PutS(&F.v10810, y_str("int main(int argc, char **argv) {", 33));
yr1117_PutS(&F.v10810, y_str("y_lang();", 9));
yr1117_PutS(&F.v10810, y_str("rt_init(argc, argv);", 20));
F.v10792 = Y_DEFP(v1686);
while ((!(Y_DEFP(F.v10792) == ((void *)0)))) {
Y_TICK();
if ((!yr3961_ReadInto(yr3953_LibPath(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), y_str(".yuse", 5))))) {
yr1186_FailN(INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), y_str(" has not been translated as a segment of this library (XIII.I)", 62));
}
yr1026_SB();
F.v10806 = Y_DEFI(v1216);
F.v10804 = Y_DEFI(F.v10806);
F.v10808 = Y_DEFI(v1219);
while ((Y_DEFI(F.v10806) <= Y_DEFI(F.v10808))) {
Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v10806))]) == 10)) {
F.v10802 = yr1068_Intern(Y_DEFI(F.v10804), y_range(y_sub(Y_DEFI(F.v10806), Y_DEFI(F.v10804)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr4085_CheckUse(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), Y_DEFI(F.v10802));
yr1044_ST(Y_DEFI(F.v10802));
yr1037_SA(y_str(";", 1));
F.v10804 = y_range(y_add(Y_DEFI(F.v10806), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10806 = y_range(y_add(Y_DEFI(F.v10806), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10796 = yr1056_SE();
yr1026_SB();
yr1037_SA(y_str("if (strcmp(ys_", 14));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name));
yr1037_SA(y_str("_uses, ", 7));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v10796));
yr1031_SC(34);
yr1037_SA(y_str(") != 0) { fprintf(stderr, ", 26));
yr1031_SC(34);
yr1037_SA(y_str("*** segment ", 12));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name));
yr1037_SA(y_str(" is out of date: translate it again (XIII.I)\\n", 46));
yr1031_SC(34);
yr1037_SA(y_str("); exit(2); }", 13));
yr1110_Put(&F.v10810, yr1056_SE());
F.v10792 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_next);
}
F.v10792 = Y_DEFP(v1686);
while ((!(Y_DEFP(F.v10792) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10810, yr3442_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), yr1061_T(y_str("_init();", 8))));
F.v10792 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_next);
}
F.v10792 = Y_DEFP(v1686);
while ((!(Y_DEFP(F.v10792) == ((void *)0)))) {
Y_TICK();
yr1110_Put(&F.v10810, yr3442_Join(yr1061_T(y_str("ys_", 3)), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_name), yr1061_T(y_str("_await();", 9))));
F.v10792 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10792)))).f_next);
}
yr1117_PutS(&F.v10810, y_str("rt_main_done();", 15));
yr1117_PutS(&F.v10810, y_str("return 0;", 9));
yr1117_PutS(&F.v10810, y_str("}", 1));
yr1151_WriteBuf(F.v10810);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4085_CheckUse(rt_int a_p4086, rt_int a_p4087) {
struct yf4088 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4086 = a_p4086;
F.p4087 = a_p4087;
F.v10855 = Y_UNDEF_I;
F.v10855 = INT64_C(1);
F.v10858 = Y_UNDEF_I;
F.v10860 = Y_UNDEF_I;
F.v10862 = Y_UNDEF_I;
F.v10864 = Y_UNDEF_P;
F.v10864 = Y_DEFP(v1686);
F.v10866 = Y_UNDEF_I;
F.v10866 = 0;
while ((((Y_DEFI(F.v10855) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4087)]))) && ((!(yr1103_TChar(F.p4087, Y_DEFI(F.v10855)) == 32))))) {
Y_TICK();
F.v10855 = y_range(y_add(Y_DEFI(F.v10855), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v10858 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4087)]), y_range(y_sub(Y_DEFI(F.v10855), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10860 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p4087)]), Y_DEFI(F.v10855)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4087)]), Y_DEFI(F.v10855)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v10862 = yr3974_ReadLibLine(yr3953_LibPath(Y_DEFI(F.v10858), y_str(".yfp", 4)));
if ((((Y_DEFI(F.v10862) == INT64_C(0))) || ((!(Y_DEFI(F.v10862) == Y_DEFI(F.v10860)))))) {
yr1157_Fail(INT64_C(0), yr3442_Join(F.p4086, yr3442_Join(yr1061_T(y_str(" was translated with an outdated synopsis of ", 45)), Y_DEFI(F.v10858), INT64_C(0)), yr1061_T(y_str(": translate it again (XIII.I)", 29))));
}
while ((!(Y_DEFP(F.v10864) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10864)))).f_name) == Y_DEFI(F.v10858))) {
F.v10866 = 1;
}
F.v10864 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10864)))).f_next);
}
if ((!Y_DEFI(F.v10866))) {
yr1157_Fail(INT64_C(0), yr3442_Join(F.p4086, yr1061_T(y_str(" imports the segment ", 21)), yr3442_Join(Y_DEFI(F.v10858), yr1061_T(y_str(", which is not linked (XIII.A)", 30)), INT64_C(0))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4092_SegKey(rt_int a_p4093, rt_int a_p4094) {
struct yf4095 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4093 = a_p4093;
F.p4094 = a_p4094;
F.v10890 = Y_UNDEF_B;
yr1026_SB();
yr1037_SA(y_str("ys", 2));
F.lo10895 = INT64_C(1);
F.hi10896 = Y_DEFI(v1699);
{ rt_int hi10900 = F.hi10896;
for (rt_int i10899 = F.lo10895; i10899 <= hi10900; i10899++) { F.c_10898 = i10899; Y_TICK();
yr1037_SA(y_str("_", 1));
yr1044_ST(Y_DEFI(((rt_int *)(v1711).p)[y_ix1(v1711, F.c_10898)]));
if (i10899 == hi10900) break;
}}
yr1037_SA(y_str("__", 2));
F.lo10906 = INT64_C(1);
F.hi10907 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p4093)]);
{ rt_int hi10911 = F.hi10907;
for (rt_int i10910 = F.lo10906; i10910 <= hi10911; i10910++) { F.c_10909 = i10910; Y_TICK();
F.v10890 = yr1103_TChar(F.p4093, y_range(F.c_10909, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((yr1008_IsLetter(Y_DEFB(F.v10890)) || yr1014_IsDigit(Y_DEFB(F.v10890)))) {
yr1031_SC(Y_DEFB(F.v10890));
} else {
yr1037_SA(y_str("_x", 2));
yr1050_SI(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(F.v10890))]));
}
if (i10910 == hi10911) break;
}}
if ((!(F.p4094 == INT64_C(0)))) {
yr1037_SA(y_str("__", 2));
yr1050_SI(F.p4094);
}
{ rt_int rv10915 = yr1056_SE();
y_use = F.yu; return rv10915; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4099_HeaderHash(void * a_p4100) {
struct yf4101 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4100 = a_p4100;
{ rt_int rv10918 = yr4000_Fingerprint(yr3993_TokensText(Y_DEFI(((*(yR105 *)y_deref(F.p4100))).f_t0), Y_DEFI(((*(yR105 *)y_deref(F.p4100))).f_t1)));
y_use = F.yu; return rv10918; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr4105_ParamList(void * a_p4106) {
struct yf4107 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4106 = a_p4106;
F.v10922 = Y_UNDEF_P;
F.v10922 = Y_DEFP(((*(yR125 *)y_deref(F.p4106))).f_params);
F.v10924 = Y_UNDEF_I;
F.v10924 = 1;
yr1026_SB();
yr1037_SA(y_str("(", 1));
while ((!(Y_DEFP(F.v10922) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v10924))) {
yr1037_SA(y_str(", ", 2));
}
F.v10924 = 0;
yr1044_ST(yr3563_ParamCType(Y_DEFP(F.v10922)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10922)))).f_cname));
F.v10922 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10922)))).f_next);
}
if (Y_DEFI(F.v10924)) {
yr1037_SA(y_str("void", 4));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv10932 = yr1056_SE();
y_use = F.yu; return rv10932; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4111_SegStorage(void * a_p4112, void * a_p4113, rt_int a_p4114) {
struct yf4115 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4112 = a_p4112;
F.p4113 = a_p4113;
F.p4114 = a_p4114;
F.v10938 = Y_UNDEF_I;
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((Y_DEFI(v1699) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v10938 = yr4092_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4112))).f_name), INT64_C(0));
if ((Y_DEFI(v1693) > INT64_C(0))) {
yr1110_Put(&v984, yr3442_Join(yr1061_T(y_str("extern ", 7)), yr2515_CType(F.p4113), yr3442_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v10938), yr1061_T(y_str(";", 1)))));
((*(yR125 *)y_deref(F.p4112))).f_cname = yr3442_Join(yr1061_T(y_str("(*", 2)), Y_DEFI(F.v10938), yr1061_T(y_str(")", 1)));
((*(yR125 *)y_deref(F.p4112))).f_level = INT64_C(0);
} else if ((Y_DEFI(v1696) > INT64_C(0))) {
yr1110_Put(&v1713, yr3442_Join(yr2515_CType(F.p4113), yr3442_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v10938), yr1061_T(y_str(" = &", 4))), yr3442_Join(Y_DEFI(((*(yR125 *)y_deref(F.p4112))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4119_SegRoutine(void * a_p4120, void * a_p4121, rt_int a_p4122) {
struct yf4123 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4120 = a_p4120;
F.p4121 = a_p4121;
F.p4122 = a_p4122;
F.v10959 = Y_UNDEF_I;
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4120))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1699) == INT64_C(0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4121))).f_e) == ((void *)0)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(v1693) == INT64_C(0))) && ((Y_DEFI(v1696) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v10959 = yr4092_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4120))).f_name), yr4099_HeaderHash(F.p4121));
if ((F.p4122 == v885)) {
F.v10959 = yr3442_Join(Y_DEFI(F.v10959), yr1061_T(y_str("_act", 4)), INT64_C(0));
}
if ((Y_DEFI(v1693) > INT64_C(0))) {
((*(yR125 *)y_deref(F.p4120))).f_hasmv = 1;
yr1026_SB();
yr1037_SA(y_str("extern ", 7));
if ((F.p4122 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4120))).f_ret)));
}
yr1037_SA(y_str(" (*", 3));
yr1044_ST(Y_DEFI(F.v10959));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4105_ParamList(F.p4120));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v986, yr1056_SE());
((*(yR125 *)y_deref(F.p4120))).f_cname = Y_DEFI(F.v10959);
if ((!Y_DEFI(((*(yR125 *)y_deref(F.p4120))).f_func))) {
((*(yR125 *)y_deref(F.p4120))).f_writes = yr1993_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p4121))).f_line));
}
} else if ((F.p4122 == v876)) {
yr1026_SB();
yr1044_ST(yr2515_CType(Y_DEFP(((*(yR125 *)y_deref(F.p4120))).f_ret)));
yr1037_SA(y_str(" (*", 3));
yr1044_ST(Y_DEFI(F.v10959));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4105_ParamList(F.p4120));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4120))).f_cname));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v1713, yr1056_SE());
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4127_SegActivation(void * a_p4128, void * a_p4129) {
struct yf4130 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4128 = a_p4128;
F.p4129 = a_p4129;
F.v10981 = Y_UNDEF_I;
F.v10983 = Y_UNDEF_I;
F.v10985 = Y_UNDEF_I;
F.v10987 = Y_UNDEF_I;
F.v10989 = Y_UNDEF_I;
F.v10991 = Y_UNDEF_I;
F.v10993 = Y_UNDEF_P;
F.v10995 = Y_UNDEF_P;
F.v10997 = Y_UNDEF_I;
F.v10999 = Y_UNDEF_I;
F.v10999 = INT64_C(0);
y_initu(&yd_141, &F.v11002);
F.v11002 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((((!(Y_DEFI(((*(yR125 *)y_deref(F.p4128))).f_level) == INT64_C(1)))) || ((Y_DEFI(v1699) == INT64_C(0)))) || ((Y_DEFI(v1696) == INT64_C(0))))) {
y_use = F.yu; return;
}
F.v10981 = yr3442_Join(yr4092_SegKey(Y_DEFI(((*(yR125 *)y_deref(F.p4128))).f_name), yr4099_HeaderHash(F.p4129)), yr1061_T(y_str("_act", 4)), INT64_C(0));
F.v10983 = yr1200_Fresh(y_str("ysa", 3));
yr1110_Put(&F.v11002, yr3442_Join(yr1061_T(y_str("static void ", 12)), Y_DEFI(F.v10983), yr4105_ParamList(F.p4128)));
F.v10985 = yr1061_T(y_str("pf", 2));
yr1117_PutS(&F.v11002, y_str("{", 1));
yr1110_Put(&F.v11002, yr3442_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p4128))).f_members)))).f_name), yr3442_Join(yr1061_T(y_str(" *pf = rt_alloc(sizeof *pf);", 28)), INT64_C(0), INT64_C(0))));
F.v10993 = Y_DEFP(((*(yR125 *)y_deref(F.p4128))).f_params);
while ((!(Y_DEFP(F.v10993) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cls) == v897)) && yr2490_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_rep)))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_rep)))).f_kind) == v843)) {
yr1110_Put(&F.v11002, yr3442_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2521_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_rep)))).f_elem)), yr3442_Join(yr1061_T(y_str("), &pf->", 8)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cname), yr3442_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cname), yr1061_T(y_str(");", 2))))));
} else {
yr1110_Put(&F.v11002, yr3442_Join(yr1061_T(y_str("y_copy(", 7)), yr2521_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_rep)), yr3442_Join(yr1061_T(y_str(", &pf->", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cname), yr3442_Join(yr1061_T(y_str(", &a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cname), yr1061_T(y_str(");", 2))))));
}
} else {
yr1110_Put(&F.v11002, yr3442_Join(yr1061_T(y_str("pf->", 4)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cname), yr3442_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_cname), yr1061_T(y_str(";", 1)))));
}
F.v10993 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v10993)))).f_next);
}
F.v10987 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4129))).f_e) == ((void *)0)))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4129))).f_e), Y_DEFP(v1342), &F.v10987, &F.v10995);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4129))).f_line), Y_DEFP(v1342), Y_DEFP(F.v10995));
}
F.v10989 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4129))).f_d) == ((void *)0)))) {
yr3032_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p4129))).f_d), Y_DEFP(v1342), &F.v10991, &F.v10995);
yr2548_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p4129))).f_line), Y_DEFP(v1342), Y_DEFP(F.v10995));
F.v10989 = yr3442_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v10991), INT64_C(0));
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p4129))).f_x) == ((void *)0)))) {
yr2884_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p4129))).f_x), &F.v10997, &F.v10999);
if (((!Y_DEFI(F.v10997)) || ((Y_DEFI(F.v10999) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p4129))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4128))).f_cname));
yr1037_SA(y_str("_d, ", 4));
yr1044_ST(Y_DEFI(F.v10987));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v10989));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v10999));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p4128))).f_cname));
yr1037_SA(y_str(", pf);", 6));
yr1110_Put(&F.v11002, yr1056_SE());
yr1117_PutS(&F.v11002, y_str("}", 1));
yr1125_Append(&v988, &F.v11002);
yr1026_SB();
yr1037_SA(y_str("void (*", 7));
yr1044_ST(Y_DEFI(F.v10981));
yr1037_SA(y_str(")", 1));
yr1044_ST(yr4105_ParamList(F.p4128));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v10983));
yr1037_SA(y_str(";", 1));
yr1110_Put(&v1713, yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4134_StdRep(yarr a_p4136, void * a_p4137) {
struct yf4138 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4136 = a_p4136;
F.p4137 = a_p4137;
F.v11048 = Y_UNDEF_P;
F.v11048 = yr2312_NewSym(v870, yr1081_N(F.p4136));
((*(yR125 *)y_deref(Y_DEFP(F.v11048)))).f_rep = F.p4137;
yr2414_Define(Y_DEFP(F.v11048), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4142_StdOp(yarr a_p4144, rt_int a_p4145) {
struct yf4146 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4144 = a_p4144;
F.p4145 = a_p4145;
F.v11054 = Y_UNDEF_P;
F.v11054 = yr2312_NewSym(v891, yr1081_N(F.p4144));
((*(yR125 *)y_deref(Y_DEFP(F.v11054)))).f_mval = F.p4145;
yr2414_Define(Y_DEFP(F.v11054), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr4150_LitList(yarr a_p4152, yarr a_p4153, yarr a_p4154, rt_int a_p4155) {
struct yf4156 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4152 = a_p4152;
F.p4153 = a_p4153;
F.p4154 = a_p4154;
F.p4155 = a_p4155;
F.v11062 = Y_UNDEF_P;
F.v11062 = ((void *)0);
F.v11064 = Y_UNDEF_P;
F.v11064 = ((void *)0);
F.v11066 = Y_UNDEF_P;
F.v11066 = ((void *)0);
F.v11066 = yr1993_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11066)))).f_name = yr1081_N(F.p4152);
yr2000_Link(&F.v11062, &F.v11064, Y_DEFP(F.v11066));
F.v11066 = yr1993_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11066)))).f_name = yr1081_N(F.p4153);
yr2000_Link(&F.v11062, &F.v11064, Y_DEFP(F.v11066));
if (F.p4155) {
F.v11066 = yr1993_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v11066)))).f_name = yr1081_N(F.p4154);
yr2000_Link(&F.v11062, &F.v11064, Y_DEFP(F.v11066));
}
{ void * rv11070 = Y_DEFP(F.v11062);
y_use = F.yu; return rv11070; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr4160_Abstract(rt_int a_p4161, yarr a_p4163) {
struct yf4164 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p4161 = a_p4161;
F.p4163 = a_p4163;
F.v11075 = Y_UNDEF_P;
F.v11075 = yr2453_NewRep(F.p4161, yr1081_N(F.p4163));
((*(yR110 *)y_deref(Y_DEFP(F.v11075)))).f_abstract = 1;
{ void * rv11077 = Y_DEFP(F.v11075);
y_use = F.yu; return rv11077; }
rt_raise(Y_X_NO_RETURN);
}
static void yr4168_Predefine(void) {
struct yf4169 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2319_OpenScope(0);
((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))] = ((void *)0);
v1342 = yr4160_Abstract(v804, y_str("INTEGER", 7));
v1356 = yr4160_Abstract(v807, y_str("FIXED", 5));
v1354 = yr4160_Abstract(v810, y_str("FLOATING", 8));
v1358 = yr2453_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
v1360 = yr2453_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
v1348 = yr2453_NewRep(v852, yr1081_N(y_str("no value", 8)));
v1362 = yr2453_NewRep(v858, yr1081_N(y_str("any", 3)));
v1344 = yr2453_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_lits = yr4150_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_nlits = INT64_C(2);
yr2683_SetRange(Y_DEFP(v1344), INT64_C(0), INT64_C(1));
yr2677_DefineLits(Y_DEFP(v1344));
v1346 = yr2453_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_nlits = INT64_C(128);
yr2683_SetRange(Y_DEFP(v1346), INT64_C(0), INT64_C(127));
v1921 = yr2453_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
((*(yR110 *)y_deref(Y_DEFP(v1921)))).f_lits = yr4150_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR110 *)y_deref(Y_DEFP(v1921)))).f_nlits = INT64_C(3);
yr2683_SetRange(Y_DEFP(v1921), INT64_C(0), INT64_C(2));
yr2677_DefineLits(Y_DEFP(v1921));
yr4134_StdRep(y_str("INTEGER", 7), Y_DEFP(v1342));
yr4134_StdRep(y_str("FIXED", 5), Y_DEFP(v1356));
yr4134_StdRep(y_str("FLOATING", 8), Y_DEFP(v1354));
yr4134_StdRep(y_str("BOOLEAN", 7), Y_DEFP(v1344));
yr4134_StdRep(y_str("SIGNAL", 6), Y_DEFP(v1358));
yr4134_StdRep(y_str("SEMAPHORE", 9), Y_DEFP(v1360));
yr4134_StdRep(y_str("ASCII", 5), Y_DEFP(v1346));
yr4134_StdRep(y_str("STANDARD_ALPHABET", 17), Y_DEFP(v1346));
yr4134_StdRep(y_str("OPEN_MODE", 9), Y_DEFP(v1921));
v1923 = yr2453_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1923)))).f_tname = yr1081_N(y_str("ADDRESS", 7));
yr2683_SetRange(Y_DEFP(v1923), INT64_C(0), INT64_C(16777215));
v1925 = yr2453_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1925)))).f_tname = yr1081_N(y_str("WORD", 4));
yr2683_SetRange(Y_DEFP(v1925), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr4134_StdRep(y_str("ADDRESS", 7), Y_DEFP(v1923));
yr4134_StdRep(y_str("WORD", 4), Y_DEFP(v1925));
yr4142_StdOp(y_str("MAKE_POINTER", 12), v1474);
yr4142_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
yr4142_StdOp(y_str("LOW", 3), v1366);
yr4142_StdOp(y_str("HIGH", 4), v1369);
yr4142_StdOp(y_str("SUCC", 4), v1372);
yr4142_StdOp(y_str("PRED", 4), v1375);
yr4142_StdOp(y_str("FIRST", 5), v1378);
yr4142_StdOp(y_str("LAST", 4), v1381);
yr4142_StdOp(y_str("NEW", 3), v1384);
yr4142_StdOp(y_str("OPEN", 4), v1387);
yr4142_StdOp(y_str("CLOSE", 5), v1390);
yr4142_StdOp(y_str("GET", 3), v1393);
yr4142_StdOp(y_str("PUT", 3), v1396);
yr4142_StdOp(y_str("CHECK_EOF", 9), v1399);
yr4142_StdOp(y_str("MOVE", 4), v1402);
yr4142_StdOp(y_str("AND_LONG", 8), v1405);
yr4142_StdOp(y_str("OR_LONG", 7), v1408);
yr4142_StdOp(y_str("DELAY", 5), v1411);
yr4142_StdOp(y_str("CLOCK_TIME", 10), v1414);
yr4142_StdOp(y_str("WAIT", 4), v1417);
yr4142_StdOp(y_str("SEND", 4), v1420);
yr4142_StdOp(y_str("AWAITED", 7), v1423);
yr4142_StdOp(y_str("FLOOR", 5), v1426);
yr4142_StdOp(y_str("CEILING", 7), v1429);
yr4142_StdOp(y_str("NEAR_INTEGER", 12), v1432);
yr4142_StdOp(y_str("NEAR_FIXED", 10), v1435);
yr4142_StdOp(y_str("NEAR_FLOATING", 13), v1438);
yr4142_StdOp(y_str("FIXED_DIV", 9), v1441);
yr4142_StdOp(y_str("CLAIM", 5), v1444);
yr4142_StdOp(y_str("RELEASE", 7), v1447);
yr4142_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
yr4142_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
yr4142_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
yr4142_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
yr4142_StdOp(y_str("FREE_POINTER", 12), v1462);
yr4142_StdOp(y_str("C_CODE_INSERT", 13), v1465);
yr4142_StdOp(y_str("ADDR", 4), v1468);
yr4142_StdOp(y_str("EXTENT", 6), v1471);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4173_Translate(void) {
struct yf4174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v11165 = Y_UNDEF_P;
F.v11165 = Y_DEFP(v1927);
y_initu(&yd_141, &F.v11167);
yr2319_OpenScope(0);
((void * *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1273))] = ((void *)0);
v1279 = INT64_C(0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(v1927);
while ((!(Y_DEFP(F.v11165) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v11165)))).f_ival) == INT64_C(0))) {
yr3777_CompileModule(Y_DEFP(F.v11165));
}
F.v11165 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v11165)))).f_next);
}
yr3740_ResolveLater(Y_DEFI(v1273));
yr3656_RunDeferred(INT64_C(0), INT64_C(0));
yr3538_CheckEffects();
if ((Y_DEFI(v1680) == v1498)) {
F.v11167 = v996;
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
yr3801_AwaitProcesses();
v1715 = v996;
v996 = F.v11167;
} else {
yr3801_AwaitProcesses();
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4178_WriteProgram(void) {
struct yf4179 F;
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
yr4183_WriteHead();
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr4183_WriteHead(void) {
struct yf4184 F;
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
yr1151_WriteBuf(v1713);
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
v1565 = Y_UNDEF_I;
v1565 = INT64_C(0);
v1568 = Y_UNDEF_I;
v1568 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1578, 1, lo, hi, &y_d_int); }
y_initu(&yd_1578, &v1580);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1589, 1, lo, hi, &y_d_int); }
y_initu(&yd_1589, &v1591);
v1593 = Y_UNDEF_I;
v1593 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1603, 1, lo, hi, &y_d_int); }
y_initu(&yd_1603, &v1605);
v1607 = Y_UNDEF_I;
v1607 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1617, 1, lo, hi, &y_d_int); }
y_initu(&yd_1617, &v1619);
y_initu(&yd_1617, &v1621);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1630, 1, lo, hi, &y_d_int); }
y_initu(&yd_1630, &v1632);
v1634 = Y_UNDEF_I;
v1634 = INT64_C(0);
v1637 = Y_UNDEF_I;
v1637 = INT64_C(0);
v1640 = Y_UNDEF_P;
v1640 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1649, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1649, &v1651);
y_initu(&yd_1649, &v1653);
v1655 = Y_UNDEF_I;
v1655 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1665, 1, lo, hi, &y_d_int); }
y_initu(&yd_1665, &v1667);
v1669 = Y_UNDEF_I;
v1669 = 0;
v1672 = Y_UNDEF_I;
v1672 = INT64_C(0);
v1675 = Y_UNDEF_I;
v1675 = INT64_C(0);
v1678 = Y_UNDEF_P;
v1678 = ((void *)0);
v1680 = Y_UNDEF_I;
v1680 = INT64_C(0);
v1683 = Y_UNDEF_I;
v1683 = INT64_C(0);
v1686 = Y_UNDEF_P;
v1686 = ((void *)0);
v1688 = Y_UNDEF_P;
v1688 = ((void *)0);
v1690 = Y_UNDEF_I;
v1690 = INT64_C(0);
v1693 = Y_UNDEF_I;
v1693 = INT64_C(0);
v1696 = Y_UNDEF_I;
v1696 = INT64_C(0);
v1699 = Y_UNDEF_I;
v1699 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64)}; y_desc_array(&yd_1709, 1, lo, hi, &y_d_int); }
y_initu(&yd_1709, &v1711);
y_initu(&yd_141, &v1713);
y_initu(&yd_141, &v1715);
v1717 = Y_UNDEF_I;
v1717 = INT64_C(0);
v1720 = Y_UNDEF_P;
v1720 = ((void *)0);
v1722 = Y_UNDEF_P;
v1722 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1731, 1, lo, hi, &y_d_int); }
y_initu(&yd_1731, &v1733);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1742, 1, lo, hi, &y_d_int); }
y_initu(&yd_1742, &v1744);
v1746 = Y_UNDEF_I;
v1746 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1756, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1756, &v1758);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1767, 1, lo, hi, &y_d_int); }
y_initu(&yd_1767, &v1769);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1778, 1, lo, hi, &y_d_int); }
y_initu(&yd_1778, &v1780);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1789, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1789, &v1791);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1800, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1800, &v1802);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1811, 1, lo, hi, &y_d_int); }
y_initu(&yd_1811, &v1813);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1822, 1, lo, hi, &y_d_int); }
y_initu(&yd_1822, &v1824);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1833, 1, lo, hi, &y_d_int); }
y_initu(&yd_1833, &v1835);
y_initu(&yd_1833, &v1837);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1846, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1846, &v1848);
v1850 = Y_UNDEF_I;
v1850 = INT64_C(0);
v1853 = Y_UNDEF_I;
v1853 = INT64_C(0);
v1856 = Y_UNDEF_P;
v1856 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1865, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1865, &v1867);
v1869 = Y_UNDEF_I;
v1869 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1879, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1879, &v1881);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1890, 1, lo, hi, &y_d_int); }
y_initu(&yd_1890, &v1892);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1901, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1901, &v1903);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1912, 1, lo, hi, &y_d_int); }
y_initu(&yd_1912, &v1914);
y_initu(&yd_1912, &v1916);
v1918 = Y_UNDEF_I;
v1918 = INT64_C(0);
v1921 = Y_UNDEF_P;
v1923 = Y_UNDEF_P;
v1925 = Y_UNDEF_P;
v1927 = Y_UNDEF_P;
/* yellowc */
{ rt_int hi11201 = INT64_C(262143);
for (rt_int i11200 = INT64_C(0); i11200 <= hi11201; i11200++) { c_11199 = i11200; Y_TICK();
((rt_int *)(v925).p)[y_ix1(v925, c_11199)] = INT64_C(0);
if (i11200 == hi11201) break;
}}
{ rt_int hi11211 = INT64_C(8191);
for (rt_int i11210 = INT64_C(0); i11210 <= hi11211; i11210++) { c_11209 = i11210; Y_TICK();
((void * *)(v1260).p)[y_ix1(v1260, c_11209)] = ((void *)0);
if (i11210 == hi11211) break;
}}
{ rt_int hi11220 = INT64_C(400);
for (rt_int i11219 = INT64_C(0); i11219 <= hi11220; i11219++) { c_11218 = i11219; Y_TICK();
((void * *)(v1302).p)[y_ix1(v1302, c_11218)] = ((void *)0);
((void * *)(v1313).p)[y_ix1(v1313, c_11218)] = ((void *)0);
((void * *)(v1867).p)[y_ix1(v1867, c_11218)] = ((void *)0);
if (i11219 == hi11220) break;
}}
v978 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v980 = v978;
v982 = v978;
v984 = v978;
v986 = v978;
v988 = v978;
v990 = v978;
v992 = v978;
v1713 = v978;
v1715 = v978;
v996 = v978;
v998 = v978;
yr1003_InitChars();
yr1929_InitWords();
v1254 = yr1081_N(y_str("FROM", 4));
v1257 = yr1081_N(y_str("DIMENSION", 9));
v1513 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v911, y_str("OUTPUT", 6), 1);
y_open(&v994, y_str("ERROR", 5), 1);
yr3948_ReadArgs();
if ((Y_DEFI(v1680) == v1501)) {
yr4080_LinkProgram();
} else {
yr1934_ReadSource();
yr1988_Lex();
v1927 = yr2307_ParseProgram();
yr4168_Predefine();
if ((Y_DEFI(v1680) == v1495)) {
yr4058_Interface();
} else if ((Y_DEFI(v1680) == v1498)) {
yr4063_Segment();
} else {
yr4035_PairInInput();
yr4173_Translate();
yr4178_WriteProgram();
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
