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
struct yf1881;
struct yf1886;
struct yf1893;
struct yf1899;
struct yf1904;
struct yf1910;
struct yf1917;
struct yf1924;
struct yf1930;
struct yf1935;
struct yf1940;
struct yf1947;
struct yf1955;
struct yf1961;
struct yf1966;
struct yf1971;
struct yf1976;
struct yf1983;
struct yf1989;
struct yf1995;
struct yf2000;
struct yf2006;
struct yf2011;
struct yf2017;
struct yf2022;
struct yf2029;
struct yf2034;
struct yf2040;
struct yf2045;
struct yf2050;
struct yf2055;
struct yf2060;
struct yf2065;
struct yf2070;
struct yf2076;
struct yf2082;
struct yf2089;
struct yf2094;
struct yf2100;
struct yf2105;
struct yf2111;
struct yf2116;
struct yf2121;
struct yf2126;
struct yf2131;
struct yf2136;
struct yf2141;
struct yf2146;
struct yf2152;
struct yf2157;
struct yf2162;
struct yf2168;
struct yf2174;
struct yf2180;
struct yf2186;
struct yf2192;
struct yf2201;
struct yf2208;
struct yf2213;
struct yf2218;
struct yf2223;
struct yf2229;
struct yf2234;
struct yf2239;
struct yf2244;
struct yf2249;
struct yf2254;
struct yf2261;
struct yf2267;
struct yf2273;
struct yf2278;
struct yf2284;
struct yf2290;
struct yf2296;
struct yf2303;
struct yf2310;
struct yf2316;
struct yf2323;
struct yf2330;
struct yf2337;
struct yf2343;
struct yf2349;
struct yf2356;
struct yf2363;
struct yf2370;
struct yf2376;
struct yf2383;
struct yf2389;
struct yf2395;
struct yf2402;
struct yf2408;
struct yf2414;
struct yf2420;
struct yf2426;
struct yf2432;
struct yf2438;
struct yf2445;
struct yf2451;
struct yf2457;
struct yf2463;
struct yf2469;
struct yf2475;
struct yf2482;
struct yf2490;
struct yf2498;
struct yf2505;
struct yf2511;
struct yf2517;
struct yf2524;
struct yf2530;
struct yf2538;
struct yf2544;
struct yf2550;
struct yf2558;
struct yf2564;
struct yf2571;
struct yf2579;
struct yf2587;
struct yf2597;
struct yf2604;
struct yf2612;
struct yf2619;
struct yf2625;
struct yf2633;
struct yf2639;
struct yf2647;
struct yf2654;
struct yf2662;
struct yf2669;
struct yf2674;
struct yf2680;
struct yf2693;
struct yf2704;
struct yf2712;
struct yf2719;
struct yf2725;
struct yf2732;
struct yf2739;
struct yf2747;
struct yf2754;
struct yf2761;
struct yf2767;
struct yf2774;
struct yf2781;
struct yf2789;
struct yf2795;
struct yf2802;
struct yf2809;
struct yf2817;
struct yf2826;
struct yf2834;
struct yf2842;
struct yf2849;
struct yf2857;
struct yf2865;
struct yf2873;
struct yf2884;
struct yf2892;
struct yf2901;
struct yf2907;
struct yf2915;
struct yf2925;
struct yf2935;
struct yf2941;
struct yf2947;
struct yf2955;
struct yf2961;
struct yf2968;
struct yf2974;
struct yf2983;
struct yf2991;
struct yf2997;
struct yf3003;
struct yf3009;
struct yf3016;
struct yf3024;
struct yf3033;
struct yf3039;
struct yf3047;
struct yf3057;
struct yf3063;
struct yf3072;
struct yf3081;
struct yf3090;
struct yf3096;
struct yf3103;
struct yf3112;
struct yf3119;
struct yf3127;
struct yf3133;
struct yf3142;
struct yf3150;
struct yf3157;
struct yf3166;
struct yf3172;
struct yf3183;
struct yf3190;
struct yf3201;
struct yf3207;
struct yf3217;
struct yf3227;
struct yf3237;
struct yf3246;
struct yf3254;
struct yf3262;
struct yf3272;
struct yf3278;
struct yf3283;
struct yf3289;
struct yf3295;
struct yf3301;
struct yf3308;
struct yf3316;
struct yf3323;
struct yf3329;
struct yf3335;
struct yf3341;
struct yf3348;
struct yf3354;
struct yf3360;
struct yf3367;
struct yf3372;
struct yf3378;
struct yf3384;
struct yf3392;
struct yf3398;
struct yf3404;
struct yf3410;
struct yf3416;
struct yf3422;
struct yf3431;
struct yf3439;
struct yf3445;
struct yf3451;
struct yf3458;
struct yf3465;
struct yf3472;
struct yf3480;
struct yf3485;
struct yf3493;
struct yf3499;
struct yf3505;
struct yf3511;
struct yf3518;
struct yf3524;
struct yf3531;
struct yf3538;
struct yf3544;
struct yf3552;
struct yf3561;
struct yf3569;
struct yf3575;
struct yf3582;
struct yf3589;
struct yf3598;
struct yf3605;
struct yf3611;
struct yf3617;
struct yf3623;
struct yf3630;
struct yf3638;
struct yf3645;
struct yf3653;
struct yf3659;
struct yf3668;
struct yf3675;
struct yf3682;
struct yf3688;
struct yf3696;
struct yf3704;
struct yf3711;
struct yf3719;
struct yf3725;
struct yf3731;
struct yf3737;
struct yf3743;
struct yf3748;
struct yf3755;
struct yf3761;
struct yf3767;
struct yf3773;
struct yf3778;
struct yf3784;
struct yf3791;
struct yf3798;
struct yf3805;
struct yf3812;
struct yf3819;
struct yf3827;
struct yf3833;
struct yf3842;
struct yf3850;
struct yf3856;
struct yf3862;
struct yf3869;
struct yf3879;
struct yf3887;
struct yf3895;
struct yf3905;
struct yf3913;
struct yf3918;
struct yf3923;
struct yf3928;
struct yf8570;
struct yf8577;
struct yf8583;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v3933;
rt_int c_3936;
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
rt_int lo3972;
rt_int hi3973;
rt_int c_3975;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v3981;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_3996;
yarr v3998;
rt_int v4000;
rt_int v4003;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v4022;
rt_int lo4033;
rt_int hi4034;
rt_int c_4036;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v4047;
rt_int v4050;
rt_int v4052;
rt_int lo4057;
rt_int hi4058;
rt_int c_4060;
rt_int lo4079;
rt_int hi4080;
rt_int c_4082;
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
rt_int lo4111;
rt_int hi4112;
rt_int c_4114;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4127;
rt_int lo4143;
rt_int hi4144;
rt_int c_4146;
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
void * v4167;
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
rt_int v4181;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4188;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4194;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4204;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4214;
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
rt_int v4226;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4234;
rt_int yu;
};
struct yf1881 { void *up;
rt_int v4238;
rt_int v4240;
rt_int v4242;
rt_int lo4259;
rt_int hi4260;
rt_int c_4262;
rt_int yu;
};
struct yf1886 { void *up;
unsigned char v4271;
rt_int yu;
};
struct yf1893 { void *up;
rt_int p1891;
rt_int p1892;
rt_int yu;
};
struct yf1899 { void *up;
rt_int p1898;
rt_int yu;
};
struct yf1904 { void *up;
rt_int v4288;
rt_int v4290;
rt_int yu;
};
struct yf1910 { void *up;
unsigned char p1909;
rt_int yu;
};
struct yf1917 { void *up;
yarr p1916;
rt_int yu;
};
struct yf1924 { void *up;
rt_int p1922;
rt_int p1923;
rt_int v4320;
rt_int yu;
};
struct yf1930 { void *up;
rt_int p1929;
rt_int v4330;
rt_int v4333;
rt_int v4335;
rt_int v4337;
rt_int v4339;
rt_int v4341;
rt_int v4344;
rt_int v4347;
rt_int v4350;
rt_int v4353;
rt_int v4356;
rt_int v4359;
rt_int v4362;
rt_int lo4400;
rt_int hi4401;
rt_int c_4403;
rt_int lo4432;
rt_int hi4433;
rt_int c_4435;
rt_int lo4442;
rt_int hi4443;
rt_int c_4445;
rt_int yu;
};
struct yf1935 { void *up;
rt_int v4456;
rt_int v4458;
rt_int v4460;
rt_int v4462;
rt_int yu;
};
struct yf1940 { void *up;
unsigned char v4491;
rt_int v4493;
rt_int v4495;
rt_int v4497;
rt_int v4499;
rt_int v4501;
rt_int v4503;
rt_int v4505;
rt_int lo4580;
rt_int hi4581;
rt_int c_4583;
rt_int yu;
};
struct yf1947 { void *up;
rt_int p1945;
rt_int p1946;
void * v4599;
rt_int yu;
};
struct yf1955 { void *up;
void * * p1952;
void * * p1953;
void * p1954;
rt_int yu;
};
struct yf1961 { void *up;
void * p1960;
rt_int v4612;
void * v4615;
rt_int yu;
};
struct yf1966 { void *up;
rt_int yu;
};
struct yf1971 { void *up;
rt_int yu;
};
struct yf1976 { void *up;
rt_int yu;
};
struct yf1983 { void *up;
rt_int p1981;
rt_int p1982;
rt_int v4629;
rt_int yu;
};
struct yf1989 { void *up;
rt_int p1988;
rt_int yu;
};
struct yf1995 { void *up;
rt_int p1994;
rt_int yu;
};
struct yf2000 { void *up;
rt_int yu;
};
struct yf2006 { void *up;
rt_int p2005;
rt_int yu;
};
struct yf2011 { void *up;
rt_int v4652;
rt_int yu;
};
struct yf2017 { void *up;
rt_int p2016;
rt_int v4662;
rt_int yu;
};
struct yf2022 { void *up;
rt_int v4667;
rt_int yu;
};
struct yf2029 { void *up;
rt_int p2027;
rt_int p2028;
rt_int v4674;
rt_int yu;
};
struct yf2034 { void *up;
rt_int v4678;
rt_int yu;
};
struct yf2040 { void *up;
rt_int p2039;
void * v4688;
rt_int yu;
};
struct yf2045 { void *up;
void * v4695;
rt_int yu;
};
struct yf2050 { void *up;
void * v4700;
void * v4702;
void * v4704;
void * v4706;
rt_int v4708;
rt_int yu;
};
struct yf2055 { void *up;
rt_int v4717;
rt_int yu;
};
struct yf2060 { void *up;
void * v4723;
void * v4725;
void * v4727;
void * v4729;
rt_int yu;
};
struct yf2065 { void *up;
void * v4734;
void * v4736;
void * v4738;
void * v4740;
void * v4742;
rt_int yu;
};
struct yf2070 { void *up;
void * v4750;
void * v4752;
void * v4754;
rt_int yu;
};
struct yf2076 { void *up;
rt_int p2075;
void * v4760;
rt_int yu;
};
struct yf2082 { void *up;
rt_int p2081;
rt_int yu;
};
struct yf2089 { void *up;
void * * p2087;
void * * p2088;
rt_int v4781;
void * v4783;
void * v4785;
void * v4787;
rt_int yu;
};
struct yf2094 { void *up;
void * v4791;
void * v4793;
void * v4795;
rt_int v4797;
rt_int v4799;
rt_int v4801;
rt_int yu;
};
struct yf2100 { void *up;
void * p2099;
void * v4817;
void * v4819;
rt_int v4821;
rt_int yu;
};
struct yf2105 { void *up;
void * v4827;
rt_int yu;
};
struct yf2111 { void *up;
rt_int p2110;
rt_int v4839;
rt_int yu;
};
struct yf2116 { void *up;
rt_int v4847;
void * v4849;
rt_int yu;
};
struct yf2121 { void *up;
void * v4858;
void * v4860;
rt_int yu;
};
struct yf2126 { void *up;
void * v4865;
void * v4867;
void * v4869;
rt_int yu;
};
struct yf2131 { void *up;
void * v4874;
void * v4876;
void * v4878;
rt_int v4880;
rt_int yu;
};
struct yf2136 { void *up;
void * v4887;
void * v4889;
void * v4891;
void * v4893;
void * v4895;
void * v4897;
rt_int v4899;
rt_int v4901;
rt_int yu;
};
struct yf2141 { void *up;
void * v4918;
rt_int yu;
};
struct yf2146 { void *up;
rt_int v4923;
rt_int yu;
};
struct yf2152 { void *up;
rt_int p2151;
void * v4932;
void * v4934;
void * v4936;
rt_int v4938;
rt_int yu;
};
struct yf2157 { void *up;
void * v4946;
void * v4948;
void * v4950;
void * v4952;
void * v4954;
void * v4956;
rt_int v4958;
rt_int v4960;
rt_int yu;
};
struct yf2162 { void *up;
rt_int yu;
};
struct yf2168 { void *up;
rt_int p2167;
rt_int yu;
};
struct yf2174 { void *up;
rt_int p2173;
rt_int yu;
};
struct yf2180 { void *up;
rt_int p2179;
rt_int yu;
};
struct yf2186 { void *up;
rt_int p2185;
rt_int yu;
};
struct yf2192 { void *up;
rt_int p2191;
rt_int yu;
};
struct yf2201 { void *up;
rt_int p2197;
void * p2198;
void * p2199;
rt_int p2200;
void * v5014;
rt_int yu;
};
struct yf2208 { void *up;
rt_int p2206;
rt_int p2207;
rt_int v5020;
rt_int yu;
};
struct yf2213 { void *up;
void * v5024;
rt_int v5026;
rt_int v5028;
rt_int yu;
};
struct yf2218 { void *up;
void * v5032;
void * v5034;
rt_int v5036;
rt_int v5038;
rt_int yu;
};
struct yf2223 { void *up;
void * v5044;
rt_int v5046;
rt_int v5048;
rt_int yu;
};
struct yf2229 { void *up;
rt_int p2228;
rt_int v5054;
rt_int yu;
};
struct yf2234 { void *up;
void * v5059;
rt_int v5061;
rt_int v5063;
rt_int yu;
};
struct yf2239 { void *up;
void * v5067;
rt_int v5069;
rt_int v5071;
rt_int yu;
};
struct yf2244 { void *up;
void * v5092;
void * v5094;
void * v5096;
rt_int v5098;
rt_int yu;
};
struct yf2249 { void *up;
rt_int yu;
};
struct yf2254 { void *up;
void * v5105;
void * v5107;
rt_int yu;
};
struct yf2261 { void *up;
rt_int p2259;
rt_int p2260;
void * v5114;
rt_int yu;
};
struct yf2267 { void *up;
rt_int p2266;
void * v5132;
rt_int yu;
};
struct yf2273 { void *up;
void * p2272;
void * v5139;
rt_int v5141;
rt_int v5144;
rt_int yu;
};
struct yf2278 { void *up;
void * v5156;
void * v5158;
void * v5160;
rt_int v5162;
rt_int yu;
};
struct yf2284 { void *up;
void * p2283;
rt_int yu;
};
struct yf2290 { void *up;
rt_int p2289;
void * v5174;
rt_int yu;
};
struct yf2296 { void *up;
rt_int p2295;
void * v5182;
rt_int yu;
};
struct yf2303 { void *up;
rt_int p2301;
rt_int p2302;
void * v5191;
void * v5193;
rt_int lo5199;
rt_int hi5200;
rt_int c_5202;
rt_int yu;
};
struct yf2310 { void *up;
void * p2308;
void * p2309;
void * v5212;
rt_int yu;
};
struct yf2316 { void *up;
rt_int p2315;
rt_int yu;
};
struct yf2323 { void *up;
void * p2321;
rt_int p2322;
void * v5224;
void * v5226;
rt_int v5228;
rt_int yu;
};
struct yf2330 { void *up;
void * p2328;
rt_int p2329;
void * v5244;
rt_int yu;
};
struct yf2337 { void *up;
void * p2335;
rt_int p2336;
void * v5269;
rt_int yu;
};
struct yf2343 { void *up;
void * p2342;
rt_int yu;
};
struct yf2349 { void *up;
void * p2348;
void * v5284;
rt_int yu;
};
struct yf2356 { void *up;
rt_int p2354;
void * p2355;
void * v5293;
rt_int yu;
};
struct yf2363 { void *up;
void * p2361;
rt_int p2362;
void * v5302;
rt_int v5304;
rt_int yu;
};
struct yf2370 { void *up;
rt_int p2368;
rt_int p2369;
rt_int v5312;
rt_int yu;
};
struct yf2376 { void *up;
rt_int p2375;
rt_int v5327;
rt_int yu;
};
struct yf2383 { void *up;
rt_int p2381;
rt_int p2382;
rt_int v5342;
rt_int yu;
};
struct yf2389 { void *up;
void * p2388;
rt_int v5351;
rt_int yu;
};
struct yf2395 { void *up;
void * p2394;
void * v5359;
rt_int yu;
};
struct yf2402 { void *up;
rt_int p2400;
rt_int p2401;
void * v5366;
rt_int yu;
};
struct yf2408 { void *up;
void * p2407;
void * v5398;
rt_int yu;
};
struct yf2414 { void *up;
void * p2413;
rt_int yu;
};
struct yf2420 { void *up;
void * p2419;
rt_int yu;
};
struct yf2426 { void *up;
void * p2425;
rt_int yu;
};
struct yf2432 { void *up;
void * p2431;
rt_int yu;
};
struct yf2438 { void *up;
void * p2437;
rt_int yu;
};
struct yf2445 { void *up;
void * p2443;
rt_int p2444;
void * v5430;
rt_int yu;
};
struct yf2451 { void *up;
void * p2450;
rt_int yu;
};
struct yf2457 { void *up;
void * p2456;
rt_int v5442;
rt_int yu;
};
struct yf2463 { void *up;
void * p2462;
rt_int v5449;
rt_int yu;
};
struct yf2469 { void *up;
void * p2468;
rt_int v5478;
rt_int yu;
};
struct yf2475 { void *up;
void * p2474;
rt_int yu;
};
struct yf2482 { void *up;
void * p2480;
void * p2481;
rt_int yu;
};
struct yf2490 { void *up;
rt_int p2487;
void * p2488;
void * p2489;
rt_int v5530;
rt_int yu;
};
struct yf2498 { void *up;
rt_int p2495;
void * p2496;
void * p2497;
rt_int yu;
};
struct yf2505 { void *up;
void * p2503;
rt_int p2504;
rt_int yu;
};
struct yf2511 { void *up;
void * p2510;
rt_int v5545;
void * v5547;
void * v5549;
rt_int yu;
};
struct yf2517 { void *up;
void * p2516;
rt_int yu;
};
struct yf2524 { void *up;
void * p2522;
void * p2523;
rt_int yu;
};
struct yf2530 { void *up;
void * p2529;
rt_int yu;
};
struct yf2538 { void *up;
void * p2535;
yarr p2537;
rt_int v5598;
rt_int v5600;
rt_int yu;
};
struct yf2544 { void *up;
void * p2543;
rt_int yu;
};
struct yf2550 { void *up;
void * p2549;
rt_int yu;
};
struct yf2558 { void *up;
void * p2555;
void * p2556;
void * p2557;
void * v5626;
rt_int yu;
};
struct yf2564 { void *up;
void * p2563;
rt_int yu;
};
struct yf2571 { void *up;
rt_int p2569;
rt_int p2570;
rt_int v5638;
rt_int v5640;
rt_int v5642;
rt_int yu;
};
struct yf2579 { void *up;
rt_int p2576;
rt_int p2577;
rt_int p2578;
rt_int v5658;
rt_int v5660;
rt_int yu;
};
struct yf2587 { void *up;
rt_int p2584;
rt_int p2585;
rt_int p2586;
rt_int v5675;
rt_int lo5680;
rt_int hi5681;
rt_int c_5683;
rt_int yu;
};
struct yf2597 { void *up;
void * p2592;
void * p2593;
rt_int p2594;
rt_int * p2594_o;
rt_int p2595;
rt_int * p2595_o;
rt_int p2596;
rt_int * p2596_o;
rt_int v5694;
rt_int v5696;
rt_int v5698;
rt_int v5700;
rt_int v5702;
rt_int v5704;
rt_int yu;
};
struct yf2604 { void *up;
rt_int p2602;
rt_int p2603;
rt_int yu;
};
struct yf2612 { void *up;
void * p2609;
rt_int p2610;
rt_int p2611;
rt_int v5733;
rt_int yu;
};
struct yf2619 { void *up;
void * p2617;
void * p2618;
rt_int v5743;
rt_int v5745;
rt_int v5747;
rt_int v5749;
void * v5751;
void * v5753;
rt_int v5755;
rt_int v5757;
rt_int v5759;
rt_int v5761;
rt_int v5763;
rt_int yu;
};
struct yf2625 { void *up;
void * p2624;
void * v5795;
void * v5797;
rt_int v5799;
rt_int yu;
};
struct yf2633 { void *up;
void * p2630;
rt_int p2631;
rt_int p2632;
rt_int yu;
};
struct yf2639 { void *up;
rt_int p2638;
rt_int v5814;
rt_int yu;
};
struct yf2647 { void *up;
void * p2644;
rt_int p2645;
rt_int p2646;
void * v5824;
void * v5826;
rt_int yu;
};
struct yf2654 { void *up;
void * p2652;
void * p2653;
void * v5834;
void * v5836;
void * v5838;
void * v5840;
void * v5842;
void * v5844;
rt_int yu;
};
struct yf2662 { void *up;
void * p2659;
rt_int p2660;
rt_int p2661;
void * v5873;
void * v5875;
void * v5877;
void * v5879;
void * v5881;
rt_int v5883;
void * v5885;
rt_int v5887;
rt_int v5889;
rt_int yu;
};
struct yf2669 { void *up;
rt_int p2667;
void * p2668;
void * v5936;
void * v5938;
rt_int yu;
};
struct yf2674 { void *up;
void * v5942;
rt_int yu;
};
struct yf2680 { void *up;
void * p2679;
void * v5947;
rt_int v5949;
rt_int v5951;
rt_int yu;
};
struct yf2693 { void *up;
void * p2685;
void * * p2686;
rt_int p2687;
void * p2688;
rt_int p2689;
rt_int p2690;
void * p2691;
rt_int p2692;
void * v5976;
rt_int yu;
};
struct yf2704 { void *up;
void * p2698;
void * * p2699;
void * p2700;
rt_int p2701;
void * p2702;
rt_int p2703;
void * v5989;
void * v5991;
void * v5993;
rt_int yu;
};
struct yf2712 { void *up;
void * p2709;
void * p2710;
rt_int p2711;
void * v6000;
void * v6002;
void * v6004;
void * v6006;
rt_int v6008;
void * v6011;
rt_int v6013;
rt_int v6015;
rt_int yu;
};
struct yf2719 { void *up;
void * p2717;
rt_int p2718;
void * v6065;
rt_int yu;
};
struct yf2725 { void *up;
rt_int p2724;
rt_int v6071;
rt_int v6074;
rt_int yu;
};
struct yf2732 { void *up;
rt_int p2730;
rt_int p2731;
rt_int yu;
};
struct yf2739 { void *up;
void * p2737;
rt_int p2738;
rt_int v6097;
rt_int v6099;
rt_int v6101;
rt_int v6103;
rt_int v6105;
rt_int v6107;
void * v6109;
rt_int yu;
};
struct yf2747 { void *up;
void * p2744;
rt_int p2745;
rt_int p2746;
void * v6159;
rt_int v6161;
rt_int v6164;
rt_int v6167;
rt_int v6170;
rt_int v6173;
rt_int v6176;
ydesc yd_6186;
yarr v6188;
yarr v6190;
ydesc yd_6199;
yarr v6201;
rt_int lo6218;
rt_int hi6219;
rt_int c_6221;
rt_int lo6227;
rt_int hi6228;
rt_int c_6230;
rt_int yu;
};
struct yf2754 { void *up;
void * p2752;
void * p2753;
void * v6245;
rt_int yu;
};
struct yf2761 { void *up;
void * p2759;
void * p2760;
void * v6254;
rt_int v6256;
rt_int v6258;
rt_int v6260;
rt_int yu;
};
struct yf2767 { void *up;
void * p2766;
rt_int v6279;
rt_int v6281;
rt_int yu;
};
struct yf2774 { void *up;
rt_int p2772;
rt_int p2773;
rt_int yu;
};
struct yf2781 { void *up;
rt_int p2779;
void * p2780;
rt_int v6297;
rt_int v6299;
rt_int yu;
};
struct yf2789 { void *up;
void * p2786;
rt_int p2787;
void * p2788;
rt_int v6325;
rt_int yu;
};
struct yf2795 { void *up;
void * p2794;
void * v6347;
rt_int yu;
};
struct yf2802 { void *up;
void * p2800;
rt_int p2801;
void * v6356;
rt_int v6358;
rt_int v6360;
rt_int v6362;
rt_int v6364;
rt_int lo6373;
rt_int hi6374;
rt_int c_6376;
rt_int yu;
};
struct yf2809 { void *up;
void * p2807;
void * p2808;
void * v6415;
void * v6417;
void * v6419;
rt_int v6421;
rt_int v6424;
rt_int yu;
};
struct yf2817 { void *up;
void * p2814;
rt_int p2815;
rt_int p2816;
rt_int v6449;
rt_int v6451;
rt_int yu;
};
struct yf2826 { void *up;
void * p2822;
rt_int p2823;
rt_int p2824;
rt_int * p2824_o;
rt_int p2825;
rt_int v6462;
rt_int v6464;
rt_int v6466;
ydesc yd_6475;
yarr v6477;
unsigned char v6479;
rt_int v6481;
rt_int lo6513;
rt_int hi6514;
rt_int c_6516;
rt_int yu;
};
struct yf2834 { void *up;
void * p2831;
rt_int p2832;
rt_int * p2832_o;
rt_int p2833;
rt_int * p2833_o;
void * v6551;
rt_int v6553;
rt_int v6555;
rt_int v6557;
rt_int v6559;
rt_int v6561;
void * v6563;
rt_int yu;
};
struct yf2842 { void *up;
void * p2839;
rt_int p2840;
rt_int * p2840_o;
rt_int p2841;
rt_int * p2841_o;
void * v6593;
rt_int v6595;
rt_int v6597;
rt_int v6599;
rt_int v6601;
rt_int v6603;
void * v6605;
void * v6607;
rt_int lo6624;
rt_int hi6625;
rt_int c_6627;
rt_int yu;
};
struct yf2849 { void *up;
void * p2847;
void * p2848;
rt_int yu;
};
struct yf2857 { void *up;
rt_int p2854;
void * p2855;
void * p2856;
rt_int v6655;
rt_int v6657;
void * v6659;
void * v6661;
rt_int yu;
};
struct yf2865 { void *up;
rt_int p2862;
void * p2863;
void * p2864;
rt_int v6690;
rt_int v6692;
rt_int v6694;
rt_int v6696;
rt_int v6698;
rt_int v6700;
rt_int yu;
};
struct yf2873 { void *up;
rt_int p2870;
void * p2871;
void * p2872;
rt_int v6747;
rt_int v6749;
rt_int v6751;
rt_int yu;
};
struct yf2884 { void *up;
rt_int * p2878;
void * p2879;
rt_int * p2880;
void * p2881;
void * p2882;
rt_int p2883;
rt_int v6766;
rt_int v6768;
rt_int yu;
};
struct yf2892 { void *up;
void * p2889;
rt_int p2890;
rt_int * p2890_o;
void * p2891;
void * * p2891_o;
rt_int v6775;
rt_int v6777;
rt_int yu;
};
struct yf2901 { void *up;
void * p2897;
rt_int p2898;
rt_int * p2898_o;
rt_int p2899;
rt_int * p2899_o;
rt_int p2900;
rt_int * p2900_o;
rt_int v6791;
rt_int v6793;
rt_int v6795;
rt_int v6797;
rt_int v6799;
rt_int v6801;
rt_int yu;
};
struct yf2907 { void *up;
rt_int p2906;
rt_int yu;
};
struct yf2915 { void *up;
rt_int p2912;
void * p2913;
void * p2914;
rt_int v6822;
rt_int v6824;
rt_int yu;
};
struct yf2925 { void *up;
rt_int p2920;
void * p2921;
rt_int p2922;
void * p2923;
rt_int p2924;
rt_int v6865;
rt_int yu;
};
struct yf2935 { void *up;
rt_int p2930;
void * p2931;
rt_int p2932;
void * p2933;
rt_int p2934;
rt_int yu;
};
struct yf2941 { void *up;
void * p2940;
void * v6887;
void * v6889;
rt_int yu;
};
struct yf2947 { void *up;
void * p2946;
void * v6908;
void * v6910;
rt_int yu;
};
struct yf2955 { void *up;
void * p2952;
rt_int p2953;
rt_int * p2953_o;
void * p2954;
void * * p2954_o;
void * v6919;
rt_int yu;
};
struct yf2961 { void *up;
rt_int p2960;
rt_int yu;
};
struct yf2968 { void *up;
void * p2966;
rt_int p2967;
void * v6930;
rt_int yu;
};
struct yf2974 { void *up;
void * p2973;
void * v6935;
rt_int yu;
};
struct yf2983 { void *up;
void * p2979;
void * p2980;
rt_int p2981;
rt_int * p2981_o;
void * p2982;
void * * p2982_o;
rt_int v6944;
void * v6946;
rt_int v6948;
rt_int v6950;
void * v6952;
void * v6954;
void * v6956;
rt_int v6958;
rt_int v6960;
rt_int yu;
};
struct yf2991 { void *up;
void * p2988;
rt_int * p2989;
void * p2990;
rt_int v7003;
rt_int v7005;
rt_int yu;
};
struct yf2997 { void *up;
void * p2996;
void * v7018;
rt_int yu;
};
struct yf3003 { void *up;
void * p3002;
rt_int v7029;
rt_int yu;
};
struct yf3009 { void *up;
void * p3008;
rt_int v7048;
rt_int yu;
};
struct yf3016 { void *up;
void * p3014;
rt_int p3015;
rt_int yu;
};
struct yf3024 { void *up;
void * p3021;
void * p3022;
rt_int p3023;
void * v7073;
rt_int v7075;
rt_int v7077;
rt_int yu;
};
struct yf3033 { void *up;
void * p3029;
void * p3030;
rt_int p3031;
rt_int * p3031_o;
void * p3032;
void * * p3032_o;
void * v7089;
rt_int yu;
};
struct yf3039 { void *up;
void * p3038;
void * v7098;
rt_int yu;
};
struct yf3047 { void *up;
void * p3044;
rt_int p3045;
rt_int * p3045_o;
void * p3046;
void * * p3046_o;
rt_int v7111;
rt_int v7113;
rt_int v7115;
void * v7117;
void * v7119;
void * v7121;
void * v7123;
rt_int v7125;
rt_int v7127;
rt_int yu;
};
struct yf3057 { void *up;
void * p3052;
rt_int p3053;
void * p3054;
rt_int p3055;
rt_int * p3055_o;
void * p3056;
void * * p3056_o;
rt_int yu;
};
struct yf3063 { void *up;
void * p3062;
void * v7170;
rt_int yu;
};
struct yf3072 { void *up;
yarr p3069;
rt_int p3070;
rt_int p3071;
rt_int yu;
};
struct yf3081 { void *up;
rt_int p3077;
yarr p3079;
rt_int p3080;
rt_int yu;
};
struct yf3090 { void *up;
rt_int p3086;
void * p3087;
rt_int p3088;
void * p3089;
rt_int v7198;
rt_int v7200;
void * v7202;
rt_int yu;
};
struct yf3096 { void *up;
void * p3095;
rt_int yu;
};
struct yf3103 { void *up;
rt_int p3101;
void * p3102;
rt_int yu;
};
struct yf3112 { void *up;
void * p3108;
void * p3109;
rt_int p3110;
rt_int * p3110_o;
void * p3111;
void * * p3111_o;
rt_int v7240;
rt_int v7242;
rt_int v7244;
rt_int v7246;
void * v7248;
void * v7250;
void * v7252;
rt_int v7254;
rt_int yu;
};
struct yf3119 { void *up;
void * p3117;
void * p3118;
rt_int yu;
};
struct yf3127 { void *up;
void * p3124;
rt_int p3125;
rt_int p3126;
void * v7317;
void * v7319;
rt_int v7321;
rt_int v7323;
rt_int yu;
};
struct yf3133 { void *up;
void * p3132;
void * v7335;
rt_int yu;
};
struct yf3142 { void *up;
void * p3138;
void * p3139;
rt_int p3140;
rt_int * p3140_o;
rt_int p3141;
rt_int * p3141_o;
void * v7347;
void * v7349;
void * v7351;
rt_int yu;
};
struct yf3150 { void *up;
void * p3147;
void * p3148;
rt_int p3149;
void * v7366;
rt_int yu;
};
struct yf3157 { void *up;
void * p3155;
void * p3156;
rt_int yu;
};
struct yf3166 { void *up;
void * p3162;
rt_int p3163;
rt_int p3164;
rt_int p3165;
void * v7383;
rt_int v7385;
rt_int v7389;
rt_int v7392;
rt_int v7395;
rt_int v7398;
rt_int v7401;
rt_int v7404;
rt_int yu;
};
struct yf3172 { void *up;
rt_int p3171;
rt_int yu;
};
struct yf3183 { void *up;
void * p3177;
rt_int p3178;
void * p3179;
void * p3180;
rt_int p3181;
rt_int * p3181_o;
void * p3182;
void * * p3182_o;
void * v7464;
void * v7466;
rt_int v7468;
rt_int v7470;
rt_int yu;
};
struct yf3190 { void *up;
void * p3188;
rt_int p3189;
void * v7484;
void * v7486;
rt_int yu;
};
struct yf3201 { void *up;
void * p3195;
void * p3196;
rt_int p3197;
rt_int p3198;
rt_int p3199;
rt_int * p3199_o;
void * p3200;
void * * p3200_o;
rt_int v7497;
rt_int v7499;
rt_int v7501;
rt_int yu;
};
struct yf3207 { void *up;
rt_int p3206;
rt_int yu;
};
struct yf3217 { void *up;
rt_int p3212;
void * p3213;
rt_int p3214;
void * p3215;
rt_int p3216;
void * v7532;
void * v7534;
void * v7536;
void * v7538;
rt_int v7540;
rt_int yu;
};
struct yf3227 { void *up;
rt_int p3222;
void * p3223;
rt_int p3224;
void * p3225;
rt_int p3226;
rt_int v7582;
rt_int yu;
};
struct yf3237 { void *up;
void * p3232;
void * p3233;
rt_int p3234;
rt_int p3235;
rt_int * p3235_o;
void * p3236;
void * * p3236_o;
void * v7591;
void * v7593;
rt_int v7595;
rt_int v7597;
rt_int yu;
};
struct yf3246 { void *up;
void * p3242;
void * p3243;
rt_int p3244;
rt_int * p3244_o;
void * p3245;
void * * p3245_o;
void * v7610;
void * v7612;
rt_int v7614;
rt_int v7616;
rt_int v7618;
void * v7620;
rt_int v7622;
rt_int v7624;
rt_int v7626;
rt_int v7628;
rt_int v7630;
rt_int v7633;
void * v7635;
rt_int v7637;
rt_int yu;
};
struct yf3254 { void *up;
void * p3251;
rt_int p3252;
rt_int p3253;
void * v7699;
void * v7701;
rt_int v7703;
rt_int v7705;
rt_int yu;
};
struct yf3262 { void *up;
yarr p3260;
rt_int p3261;
rt_int v7714;
rt_int yu;
};
struct yf3272 { void *up;
yarr p3268;
rt_int p3269;
yarr p3271;
rt_int v7720;
rt_int yu;
};
struct yf3278 { void *up;
rt_int p3277;
rt_int yu;
};
struct yf3283 { void *up;
rt_int yu;
};
struct yf3289 { void *up;
rt_int p3288;
rt_int yu;
};
struct yf3295 { void *up;
void * p3294;
rt_int v7742;
rt_int yu;
};
struct yf3301 { void *up;
void * p3300;
rt_int v7746;
rt_int v7748;
rt_int v7750;
void * v7752;
void * v7754;
rt_int v7756;
void * v7758;
rt_int v7760;
rt_int yu;
};
struct yf3308 { void *up;
void * p3306;
void * p3307;
void * v7826;
void * v7828;
rt_int v7830;
rt_int v7832;
rt_int v7834;
rt_int v7836;
rt_int yu;
};
struct yf3316 { void *up;
void * p3313;
void * p3314;
void * p3315;
rt_int v7858;
void * v7860;
void * v7862;
void * v7864;
rt_int v7866;
rt_int v7868;
rt_int v7870;
rt_int v7872;
rt_int yu;
};
struct yf3323 { void *up;
void * p3321;
void * p3322;
void * v7885;
void * v7887;
rt_int v7889;
rt_int v7892;
rt_int lo7897;
rt_int hi7898;
rt_int c_7900;
rt_int yu;
};
struct yf3329 { void *up;
void * p3328;
void * v7910;
rt_int v7912;
rt_int yu;
};
struct yf3335 { void *up;
void * p3334;
void * v7920;
rt_int yu;
};
struct yf3341 { void *up;
void * p3340;
rt_int v7934;
void * v7936;
rt_int v7938;
rt_int v7940;
rt_int yu;
};
struct yf3348 { void *up;
void * p3346;
rt_int p3347;
void * v7965;
void * v7967;
rt_int yu;
};
struct yf3354 { void *up;
void * p3353;
void * v7991;
rt_int yu;
};
struct yf3360 { void *up;
void * p3359;
rt_int v7995;
void * v7997;
rt_int yu;
};
struct yf3367 { void *up;
void * p3365;
void * p3366;
rt_int v8003;
rt_int v8005;
void * v8007;
void * v8009;
rt_int v8011;
rt_int yu;
};
struct yf3372 { void *up;
void * v8017;
rt_int v8019;
rt_int yu;
};
struct yf3378 { void *up;
void * p3377;
rt_int v8028;
rt_int v8030;
rt_int v8032;
rt_int v8034;
rt_int v8036;
rt_int v8038;
rt_int v8040;
void * v8042;
void * v8044;
void * v8046;
void * v8048;
rt_int v8050;
rt_int v8052;
rt_int v8054;
rt_int v8056;
void * v8058;
rt_int yu;
};
struct yf3384 { void *up;
void * p3383;
void * v8133;
rt_int v8135;
rt_int v8137;
rt_int v8139;
void * v8141;
rt_int yu;
};
struct yf3392 { void *up;
rt_int p3389;
rt_int p3390;
rt_int p3391;
rt_int yu;
};
struct yf3398 { void *up;
void * p3397;
rt_int v8173;
rt_int v8175;
rt_int v8177;
void * v8179;
void * v8181;
rt_int yu;
};
struct yf3404 { void *up;
void * p3403;
rt_int v8197;
rt_int v8199;
rt_int yu;
};
struct yf3410 { void *up;
void * p3409;
void * v8226;
rt_int yu;
};
struct yf3416 { void *up;
void * p3415;
void * v8241;
rt_int yu;
};
struct yf3422 { void *up;
void * p3421;
void * v8251;
void * v8253;
void * v8255;
rt_int yu;
};
struct yf3431 { void *up;
void * p3427;
void * p3428;
void * * p3428_o;
rt_int p3429;
rt_int * p3429_o;
rt_int p3430;
rt_int * p3430_o;
void * v8263;
void * v8265;
rt_int yu;
};
struct yf3439 { void *up;
void * p3436;
rt_int p3437;
rt_int p3438;
void * v8275;
rt_int yu;
};
struct yf3445 { void *up;
void * p3444;
void * v8280;
rt_int v8282;
rt_int v8284;
void * v8286;
void * v8288;
rt_int yu;
};
struct yf3451 { void *up;
void * p3450;
void * v8293;
rt_int yu;
};
struct yf3458 { void *up;
void * p3456;
rt_int p3457;
void * v8299;
rt_int v8301;
rt_int v8303;
void * v8305;
rt_int yu;
};
struct yf3465 { void *up;
void * p3463;
yarr * p3464;
void * v8310;
rt_int v8312;
void * v8315;
rt_int lo8324;
rt_int hi8325;
rt_int c_8327;
rt_int yu;
};
struct yf3472 { void *up;
void * p3470;
void * p3471;
void * v8341;
void * v8343;
rt_int v8345;
rt_int v8347;
rt_int v8349;
rt_int v8351;
rt_int v8353;
rt_int v8355;
rt_int v8357;
rt_int v8359;
yarr v8361;
yarr v8363;
rt_int v8365;
rt_int v8367;
rt_int v8369;
rt_int v8371;
void * v8373;
void * v8375;
void * v8377;
void * v8379;
rt_int lo8393;
rt_int hi8394;
rt_int c_8396;
rt_int yu;
};
struct yf3480 { void *up;
void * p3477;
rt_int p3478;
rt_int p3479;
void * v8418;
void * v8420;
rt_int v8422;
rt_int v8424;
void * v8426;
void * v8428;
void * v8430;
rt_int v8432;
rt_int v8434;
rt_int yu;
};
struct yf8570 { struct yf3485 *up;
rt_int p8568;
rt_int p8569;
rt_int yu;
};
struct yf8577 { struct yf3485 *up;
rt_int p8575;
rt_int p8576;
void * v8597;
rt_int yu;
};
struct yf8583 { struct yf3485 *up;
rt_int p8582;
rt_int yu;
};
struct yf3485 { void *up;
void * v8450;
void * v8452;
void * v8454;
rt_int v8456;
rt_int v8459;
rt_int v8462;
void * v8465;
rt_int lo8492;
rt_int hi8493;
ydesc yd_8495;
yarr v8497;
yarr v8499;
rt_int lo8505;
rt_int hi8506;
ydesc yd_8508;
yarr v8510;
rt_int lo8516;
rt_int hi8517;
ydesc yd_8519;
yarr v8521;
rt_int lo8527;
rt_int hi8528;
ydesc yd_8530;
yarr v8532;
rt_int lo8538;
rt_int hi8539;
ydesc yd_8541;
yarr v8543;
rt_int lo8549;
rt_int hi8550;
ydesc yd_8552;
yarr v8554;
rt_int v8556;
rt_int v8559;
rt_int v8561;
rt_int v8563;
void * v8565;
rt_int lo8622;
rt_int hi8623;
rt_int c_8625;
rt_int lo8633;
rt_int hi8634;
rt_int c_8636;
rt_int lo8644;
rt_int hi8645;
rt_int c_8647;
rt_int lo8660;
rt_int hi8661;
rt_int c_8663;
rt_int lo8670;
rt_int hi8671;
rt_int c_8673;
rt_int lo8683;
rt_int hi8684;
rt_int c_8686;
rt_int lo8693;
rt_int hi8694;
rt_int c_8696;
rt_int lo8706;
rt_int hi8707;
rt_int c_8709;
rt_int lo8731;
rt_int hi8732;
rt_int c_8734;
rt_int yu;
};
struct yf3493 { void *up;
rt_int p3490;
rt_int p3491;
rt_int p3492;
rt_int lo8747;
rt_int hi8748;
rt_int c_8750;
rt_int yu;
};
struct yf3499 { void *up;
rt_int p3498;
rt_int v8764;
rt_int v8766;
rt_int lo8771;
rt_int hi8772;
rt_int c_8774;
rt_int yu;
};
struct yf3505 { void *up;
void * p3504;
void * v8784;
rt_int v8786;
rt_int v8788;
rt_int yu;
};
struct yf3511 { void *up;
void * p3510;
rt_int v8805;
rt_int yu;
};
struct yf3518 { void *up;
void * p3516;
void * p3517;
rt_int v8813;
rt_int v8815;
rt_int v8818;
rt_int v8820;
rt_int lo8830;
rt_int hi8831;
rt_int c_8833;
rt_int yu;
};
struct yf3524 { void *up;
void * p3523;
rt_int yu;
};
struct yf3531 { void *up;
void * p3529;
rt_int p3530;
void * v8863;
void * v8865;
void * v8867;
void * v8869;
void * v8871;
void * v8873;
void * v8875;
rt_int v8877;
rt_int v8879;
rt_int yu;
};
struct yf3538 { void *up;
void * p3536;
void * p3537;
void * v8934;
void * v8936;
void * v8938;
rt_int v8940;
rt_int yu;
};
struct yf3544 { void *up;
void * p3543;
void * v8948;
yR140 v8950;
yR140 v8952;
rt_int v8954;
rt_int v8956;
rt_int v8958;
rt_int v8960;
rt_int v8962;
rt_int v8964;
rt_int v8966;
void * v8968;
rt_int v8970;
void * v8972;
void * v8974;
rt_int v8976;
rt_int v8978;
yR140 v8980;
rt_int yu;
};
struct yf3552 { void *up;
void * p3549;
void * p3550;
rt_int p3551;
rt_int yu;
};
struct yf3561 { void *up;
void * p3557;
void * p3558;
rt_int p3559;
rt_int p3560;
rt_int yu;
};
struct yf3569 { void *up;
void * p3566;
void * p3567;
rt_int p3568;
rt_int yu;
};
struct yf3575 { void *up;
void * p3574;
rt_int v9069;
void * v9071;
void * v9073;
void * v9075;
void * v9077;
rt_int v9079;
rt_int v9081;
rt_int v9083;
rt_int v9085;
rt_int yu;
};
struct yf3582 { void *up;
void * p3580;
void * p3581;
void * v9104;
rt_int yu;
};
struct yf3589 { void *up;
void * p3587;
void * p3588;
rt_int yu;
};
struct yf3598 { void *up;
void * p3594;
rt_int p3595;
void * p3596;
rt_int p3597;
rt_int v9114;
rt_int lo9127;
rt_int hi9128;
rt_int c_9130;
rt_int yu;
};
struct yf3605 { void *up;
rt_int p3603;
rt_int p3604;
rt_int v9139;
rt_int v9143;
rt_int v9145;
void * v9147;
rt_int lo9152;
rt_int hi9153;
rt_int c_9155;
rt_int lo9162;
rt_int hi9163;
rt_int c_9165;
rt_int yu;
};
struct yf3611 { void *up;
rt_int p3610;
void * v9173;
yR140 v9175;
void * v9177;
rt_int yu;
};
struct yf3617 { void *up;
void * p3616;
void * v9191;
void * v9193;
rt_int v9195;
rt_int v9197;
rt_int yu;
};
struct yf3623 { void *up;
void * p3622;
rt_int yu;
};
struct yf3630 { void *up;
rt_int p3628;
void * p3629;
void * v9207;
rt_int yu;
};
struct yf3638 { void *up;
void * * p3635;
void * p3636;
rt_int p3637;
void * v9214;
void * v9216;
void * v9218;
rt_int yu;
};
struct yf3645 { void *up;
void * p3643;
rt_int p3644;
void * v9228;
rt_int yu;
};
struct yf3653 { void *up;
rt_int p3650;
rt_int p3651;
void * p3652;
void * * p3652_o;
void * v9244;
rt_int yu;
};
struct yf3659 { void *up;
void * p3658;
void * v9262;
rt_int yu;
};
struct yf3668 { void *up;
rt_int p3664;
rt_int p3665;
void * p3666;
rt_int p3667;
void * v9270;
rt_int yu;
};
struct yf3675 { void *up;
rt_int p3673;
void * p3674;
rt_int yu;
};
struct yf3682 { void *up;
void * p3680;
void * p3681;
void * v9283;
rt_int lo9287;
rt_int hi9288;
rt_int c_9290;
rt_int yu;
};
struct yf3688 { void *up;
rt_int p3687;
void * v9297;
rt_int lo9301;
rt_int hi9302;
rt_int c_9304;
rt_int yu;
};
struct yf3696 { void *up;
void * p3693;
void * * p3694;
rt_int p3695;
void * v9313;
void * v9315;
rt_int v9317;
rt_int yu;
};
struct yf3704 { void *up;
void * p3701;
void * * p3702;
rt_int p3703;
void * v9324;
void * v9326;
void * v9328;
rt_int v9330;
void * v9332;
rt_int v9334;
rt_int v9336;
void * v9338;
rt_int yu;
};
struct yf3711 { void *up;
void * p3709;
rt_int p3710;
void * v9373;
void * v9375;
void * v9377;
rt_int yu;
};
struct yf3719 { void *up;
void * p3716;
void * p3717;
rt_int p3718;
void * v9385;
void * v9387;
void * v9389;
void * v9391;
rt_int yu;
};
struct yf3725 { void *up;
void * p3724;
void * v9398;
void * v9400;
void * v9402;
void * v9404;
void * v9406;
void * v9408;
void * v9410;
void * v9412;
void * v9414;
rt_int v9416;
void * v9418;
void * v9420;
rt_int v9422;
rt_int v9424;
rt_int v9426;
rt_int yu;
};
struct yf3731 { void *up;
void * p3730;
void * v9456;
rt_int yu;
};
struct yf3737 { void *up;
void * p3736;
void * v9460;
void * v9462;
void * v9464;
void * v9466;
rt_int v9468;
rt_int v9470;
rt_int v9472;
rt_int v9474;
void * v9476;
rt_int lo9484;
rt_int hi9485;
rt_int c_9487;
rt_int yu;
};
struct yf3743 { void *up;
void * p3742;
void * v9499;
void * v9501;
rt_int yu;
};
struct yf3748 { void *up;
void * v9507;
rt_int yu;
};
struct yf3755 { void *up;
void * p3753;
void * p3754;
rt_int v9518;
rt_int v9520;
rt_int v9522;
rt_int v9524;
rt_int v9526;
void * v9528;
rt_int v9530;
rt_int v9532;
void * v9534;
rt_int v9536;
rt_int v9538;
rt_int v9540;
rt_int v9542;
rt_int v9544;
rt_int v9546;
void * v9548;
void * v9550;
rt_int yu;
};
struct yf3761 { void *up;
rt_int p3760;
rt_int v9614;
rt_int yu;
};
struct yf3767 { void *up;
void * p3766;
rt_int yu;
};
struct yf3773 { void *up;
void * p3772;
rt_int v9627;
rt_int yu;
};
struct yf3778 { void *up;
rt_int yu;
};
struct yf3784 { void *up;
void * p3783;
rt_int yu;
};
struct yf3791 { void *up;
void * p3789;
rt_int p3790;
rt_int yu;
};
struct yf3798 { void *up;
void * p3796;
rt_int p3797;
rt_int yu;
};
struct yf3805 { void *up;
void * p3803;
void * p3804;
rt_int v9670;
rt_int v9672;
rt_int v9674;
rt_int yu;
};
struct yf3812 { void *up;
void * p3810;
rt_int p3811;
void * v9683;
rt_int v9685;
rt_int yu;
};
struct yf3819 { void *up;
void * p3817;
rt_int p3818;
rt_int yu;
};
struct yf3827 { void *up;
yarr p3825;
rt_int p3826;
rt_int yu;
};
struct yf3833 { void *up;
rt_int p3832;
rt_int yu;
};
struct yf3842 { void *up;
void * p3838;
rt_int p3839;
rt_int p3840;
rt_int * p3840_o;
void * p3841;
void * * p3841_o;
rt_int v9712;
rt_int yu;
};
struct yf3850 { void *up;
void * p3847;
rt_int p3848;
rt_int * p3848_o;
void * p3849;
void * * p3849_o;
rt_int yu;
};
struct yf3856 { void *up;
void * p3855;
rt_int v9728;
void * v9730;
rt_int yu;
};
struct yf3862 { void *up;
void * p3861;
void * v9736;
rt_int v9739;
rt_int v9741;
rt_int v9743;
rt_int v9745;
rt_int v9747;
rt_int v9749;
unsigned char v9751;
void * v9753;
ydesc yd_9762;
yarr v9764;
rt_int yu;
};
struct yf3869 { void *up;
void * p3867;
void * p3868;
rt_int v9803;
rt_int v9805;
rt_int v9807;
void * v9809;
rt_int yu;
};
struct yf3879 { void *up;
rt_int p3874;
void * p3875;
rt_int p3876;
rt_int p3877;
rt_int * p3877_o;
void * p3878;
void * * p3878_o;
void * v9821;
rt_int v9823;
rt_int v9825;
rt_int v9827;
rt_int v9829;
rt_int v9831;
void * v9833;
void * v9835;
void * v9837;
void * v9839;
rt_int v9841;
rt_int v9843;
rt_int v9845;
rt_int v9847;
void * v9849;
rt_int v9851;
rt_int lo9865;
rt_int hi9866;
rt_int c_9868;
rt_int yu;
};
struct yf3887 { void *up;
yarr p3885;
void * p3886;
void * v10079;
rt_int yu;
};
struct yf3895 { void *up;
yarr p3893;
rt_int p3894;
void * v10085;
rt_int yu;
};
struct yf3905 { void *up;
yarr p3901;
yarr p3902;
yarr p3903;
rt_int p3904;
void * v10093;
void * v10095;
void * v10097;
rt_int yu;
};
struct yf3913 { void *up;
rt_int p3910;
yarr p3912;
void * v10106;
rt_int yu;
};
struct yf3918 { void *up;
rt_int yu;
};
struct yf3923 { void *up;
void * v10196;
rt_int yu;
};
struct yf3928 { void *up;
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
static void * v1504;
static ydesc yd_1513;
static yarr v1515;
static ydesc yd_1524;
static yarr v1526;
static ydesc yd_1535;
static yarr v1537;
static rt_int v1539;
static ydesc yd_1549;
static yarr v1551;
static rt_int v1553;
static rt_int v1556;
static ydesc yd_1566;
static yarr v1568;
static ydesc yd_1577;
static yarr v1579;
static rt_int v1581;
static ydesc yd_1591;
static yarr v1593;
static rt_int v1595;
static ydesc yd_1605;
static yarr v1607;
static yarr v1609;
static ydesc yd_1618;
static yarr v1620;
static rt_int v1622;
static rt_int v1625;
static void * v1628;
static ydesc yd_1637;
static yarr v1639;
static yarr v1641;
static rt_int v1643;
static ydesc yd_1653;
static yarr v1655;
static rt_int v1657;
static rt_int v1660;
static rt_int v1663;
static void * v1666;
static rt_int v1668;
static void * v1671;
static void * v1673;
static ydesc yd_1682;
static yarr v1684;
static ydesc yd_1693;
static yarr v1695;
static rt_int v1697;
static ydesc yd_1707;
static yarr v1709;
static ydesc yd_1718;
static yarr v1720;
static ydesc yd_1729;
static yarr v1731;
static ydesc yd_1740;
static yarr v1742;
static ydesc yd_1751;
static yarr v1753;
static ydesc yd_1762;
static yarr v1764;
static ydesc yd_1773;
static yarr v1775;
static ydesc yd_1784;
static yarr v1786;
static yarr v1788;
static ydesc yd_1797;
static yarr v1799;
static rt_int v1801;
static rt_int v1804;
static void * v1807;
static ydesc yd_1816;
static yarr v1818;
static rt_int v1820;
static ydesc yd_1830;
static yarr v1832;
static ydesc yd_1841;
static yarr v1843;
static ydesc yd_1852;
static yarr v1854;
static ydesc yd_1863;
static yarr v1865;
static yarr v1867;
static rt_int v1869;
static void * v1872;
static void * v1874;
static void * v1876;
static void * v1878;
static rt_int c_10227;
static rt_int c_10237;
static rt_int c_10246;
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
static void yr1880_InitWords(void);
static void yr1885_ReadSource(void);
static void yr1890_AddTok(rt_int a_p1891, rt_int a_p1892);
static unsigned char yr1897_At(rt_int a_p1898);
static rt_int yr1903_EndsOperand(void);
static rt_int yr1908_DigitVal(unsigned char a_p1909);
static void yr1914_LexError(yarr a_p1916);
static void yr1921_LexDigits(rt_int a_p1922, rt_int a_p1923);
static void yr1928_LexNumber(rt_int a_p1929);
static void yr1934_LexString(void);
static void yr1939_Lex(void);
static void * yr1944_NewNode(rt_int a_p1945, rt_int a_p1946);
static void yr1951_Link(void * * a_p1952, void * * a_p1953, void * a_p1954);
static rt_int yr1959_Count(void * a_p1960);
static rt_int yr1965_TK(void);
static rt_int yr1970_TV(void);
static rt_int yr1975_TLn(void);
static rt_int yr1980_IsAt(rt_int a_p1981, rt_int a_p1982);
static rt_int yr1987_Is(rt_int a_p1988);
static rt_int yr1993_IsIdAt(rt_int a_p1994);
static void yr1999_Skip(void);
static rt_int yr2004_Accept(rt_int a_p2005);
static rt_int yr2010_TokText(void);
static void yr2015_Expect(rt_int a_p2016);
static rt_int yr2021_Ident(void);
static void yr2026_CloseName(rt_int a_p2027, rt_int a_p2028);
static rt_int yr2033_ExtendedId(void);
static rt_int yr2038_IsLabel(rt_int a_p2039);
static void * yr2044_ImportItem(void);
static void * yr2049_ParseModule(void);
static rt_int yr2054_IsDeclWord(void);
static void * yr2059_ParseBlock(void);
static void * yr2064_ParseHandler(void);
static void * yr2069_ParseNames(void);
static void * yr2074_SimpleEntry(rt_int a_p2075);
static rt_int yr2080_Continues(rt_int a_p2081);
static void yr2086_ParseDeclGroup(void * * a_p2087, void * * a_p2088);
static void * yr2093_ParseDecl(void);
static void yr2098_ParseFormals(void * a_p2099);
static void * yr2104_ParseFormalRep(void);
static rt_int yr2109_IsStructWord(rt_int a_p2110);
static void * yr2115_ParseRep(void);
static void * yr2120_ParseConcrete(void);
static void * yr2125_ParseIds(void);
static void * yr2130_ParseFieldGroups(void);
static void * yr2135_ParseConcrete1(void);
static void * yr2140_ParseQualifier(void);
static rt_int yr2145_IsStop(void);
static void * yr2150_ParseStatements(rt_int a_p2151);
static void * yr2156_ParseStatement(void);
static rt_int yr2161_OpAt(void);
static rt_int yr2166_IsRel(rt_int a_p2167);
static rt_int yr2172_IsAssocMul(rt_int a_p2173);
static rt_int yr2178_IsNonAssocMul(rt_int a_p2179);
static rt_int yr2184_IsAssocAdd(rt_int a_p2185);
static rt_int yr2190_IsNonAssocAdd(rt_int a_p2191);
static void * yr2196_Bin(rt_int a_p2197, void * a_p2198, void * a_p2199, rt_int a_p2200);
static void yr2205_NeedParens(rt_int a_p2206, rt_int a_p2207);
static void * yr2212_ParseExpr(void);
static void * yr2217_ParseSimple(void);
static void * yr2222_ParseTerm(void);
static rt_int yr2227_IsLiteralAt(rt_int a_p2228);
static void * yr2233_ParseLiteral(void);
static void * yr2238_ParseFactor(void);
static void * yr2243_ParseDesignator(void);
static void yr2248_EXIT_ARGS(void);
static void * yr2253_ParseProgram(void);
static void * yr2258_NewSym(rt_int a_p2259, rt_int a_p2260);
static void yr2265_OpenScope(rt_int a_p2266);
static void yr2271_ReopenScope(void * a_p2272);
static void yr2277_CloseScope(void);
static rt_int yr2282_Visible(void * a_p2283);
static void * yr2288_Find(rt_int a_p2289);
static void * yr2294_FindHere(rt_int a_p2295);
static void * yr2300_Lookup(rt_int a_p2301, rt_int a_p2302);
static rt_int yr2307_AltOf(void * a_p2308, void * a_p2309);
static rt_int yr2314_IsSimple(rt_int a_p2315);
static rt_int yr2320_DeclaredFrom(void * a_p2321, rt_int a_p2322);
static rt_int yr2327_LiteralIn(void * a_p2328, rt_int a_p2329);
static rt_int yr2334_LiteralInGroups(void * a_p2335, rt_int a_p2336);
static rt_int yr2341_Resolved(void * a_p2342);
static rt_int yr2347_Ambiguous(void * a_p2348);
static void * yr2353_FindLit(rt_int a_p2354, void * a_p2355);
static void yr2360_Define(void * a_p2361, rt_int a_p2362);
static rt_int yr2367_Path(rt_int a_p2368, rt_int a_p2369);
static rt_int yr2374_FramePtr(rt_int a_p2375);
static void yr2380_DeclStorage(rt_int a_p2381, rt_int a_p2382);
static rt_int yr2387_SymPath(void * a_p2388);
static void * yr2393_Real(void * a_p2394);
static void * yr2399_NewRep(rt_int a_p2400, rt_int a_p2401);
static void * yr2406_CopyRep(void * a_p2407);
static rt_int yr2412_IsDiscrete(void * a_p2413);
static rt_int yr2418_IsNumeric(void * a_p2419);
static rt_int yr2424_IsArrayLike(void * a_p2425);
static rt_int yr2430_IsString(void * a_p2431);
static rt_int yr2436_Deep(void * a_p2437);
static rt_int yr2442_Holds(void * a_p2443, rt_int a_p2444);
static rt_int yr2449_HoldsSignal(void * a_p2450);
static rt_int yr2455_NonAssignable(void * a_p2456);
static rt_int yr2461_CType(void * a_p2462);
static rt_int yr2467_DescOf(void * a_p2468);
static void yr2473_NewDesc(void * a_p2474);
static rt_int yr2479_SameType(void * a_p2480, void * a_p2481);
static void yr2486_TypeClash(rt_int a_p2487, void * a_p2488, void * a_p2489);
static void yr2494_CheckType(rt_int a_p2495, void * a_p2496, void * a_p2497);
static void yr2502_CheckRepresented(void * a_p2503, rt_int a_p2504);
static rt_int yr2509_SigText(void * a_p2510);
static rt_int yr2515_RepSig(void * a_p2516);
static rt_int yr2521_Identical(void * a_p2522, void * a_p2523);
static rt_int yr2528_IsLiteralNode(void * a_p2529);
static void yr2534_StoreBounds(void * a_p2535, yarr a_p2537);
static rt_int yr2542_LoText(void * a_p2543);
static rt_int yr2548_HiText(void * a_p2549);
static void * yr2554_AdoptLiteral(void * a_p2555, void * a_p2556, void * a_p2557);
static rt_int yr2562_HasQualifier(void * a_p2563);
static rt_int yr2568_Gcd(rt_int a_p2569, rt_int a_p2570);
static rt_int yr2575_MulChk(rt_int a_p2576, rt_int a_p2577, rt_int a_p2578);
static rt_int yr2583_PowChk(rt_int a_p2584, rt_int a_p2585, rt_int a_p2586);
static void yr2591_ScaleRatio(void * a_p2592, void * a_p2593, rt_int * a_p2594, rt_int * a_p2595, rt_int * a_p2596);
static rt_int yr2601_Factor(rt_int a_p2602, rt_int a_p2603);
static void yr2608_SetScale(void * a_p2609, rt_int a_p2610, rt_int a_p2611);
static void yr2616_Qualify(void * a_p2617, void * a_p2618);
static void yr2623_DefineLits(void * a_p2624);
static void yr2629_SetRange(void * a_p2630, rt_int a_p2631, rt_int a_p2632);
static rt_int yr2637_NewTid(rt_int a_p2638);
static void * yr2643_MakeRep(void * a_p2644, rt_int a_p2645, rt_int a_p2646);
static rt_int yr2651_Conforms(void * a_p2652, void * a_p2653);
static void * yr2658_MakeRep1(void * a_p2659, rt_int a_p2660, rt_int a_p2661);
static void yr2666_ResolvePending(rt_int a_p2667, void * a_p2668);
static void yr2673_CheckPending(void);
static void yr2678_BuildArrayDesc(void * a_p2679);
static void yr2684_AddField(void * a_p2685, void * * a_p2686, rt_int a_p2687, void * a_p2688, rt_int a_p2689, rt_int a_p2690, void * a_p2691, rt_int a_p2692);
static void yr2697_AddFields(void * a_p2698, void * * a_p2699, void * a_p2700, rt_int a_p2701, void * a_p2702, rt_int a_p2703);
static void yr2708_MakeRecord(void * a_p2709, void * a_p2710, rt_int a_p2711);
static void * yr2716_FindField(void * a_p2717, rt_int a_p2718);
static rt_int yr2723_BitsFor(rt_int a_p2724);
static rt_int yr2729_RoundUp(rt_int a_p2730, rt_int a_p2731);
static rt_int yr2736_Bits(void * a_p2737, rt_int a_p2738);
static rt_int yr2743_RecordBits(void * a_p2744, rt_int a_p2745, rt_int a_p2746);
static rt_int yr2751_FirstOfVariant(void * a_p2752, void * a_p2753);
static void * yr2758_ApplyStorage(void * a_p2759, void * a_p2760);
static rt_int yr2765_AtAddress(void * a_p2766);
static rt_int yr2771_StoreAt(rt_int a_p2772, rt_int a_p2773);
static rt_int yr2778_ExtentCode(rt_int a_p2779, void * a_p2780);
static rt_int yr2785_SpaceArg(void * a_p2786, rt_int a_p2787, void * a_p2788);
static rt_int yr2793_PackedComponent(void * a_p2794);
static rt_int yr2799_CharOrd(void * a_p2800, rt_int a_p2801);
static void * yr2806_AlphabetFor(void * a_p2807, void * a_p2808);
static rt_int yr2813_CharValue(void * a_p2814, rt_int a_p2815, rt_int a_p2816);
static rt_int yr2821_StringCodes(void * a_p2822, rt_int a_p2823, rt_int * a_p2824, rt_int a_p2825);
static void yr2830_Manifest(void * a_p2831, rt_int * a_p2832, rt_int * a_p2833);
static void yr2838_ManifestStd(void * a_p2839, rt_int * a_p2840, rt_int * a_p2841);
static rt_int yr2846_NeedsConv(void * a_p2847, void * a_p2848);
static rt_int yr2853_ConvertRecord(rt_int a_p2854, void * a_p2855, void * a_p2856);
static rt_int yr2861_ConvertArray(rt_int a_p2862, void * a_p2863, void * a_p2864);
static rt_int yr2869_RescaleCode(rt_int a_p2870, void * a_p2871, void * a_p2872);
static void yr2877_CommonScale(rt_int * a_p2878, void * a_p2879, rt_int * a_p2880, void * a_p2881, void * a_p2882, rt_int a_p2883);
static void yr2888_FixLiteral(void * a_p2889, rt_int * a_p2890, void * * a_p2891);
static void yr2896_ManifestFix(void * a_p2897, rt_int * a_p2898, rt_int * a_p2899, rt_int * a_p2900);
static rt_int yr2905_FloatChk(rt_int a_p2906);
static rt_int yr2911_Convert(rt_int a_p2912, void * a_p2913, void * a_p2914);
static rt_int yr2919_StoreText(rt_int a_p2920, void * a_p2921, rt_int a_p2922, void * a_p2923, rt_int a_p2924);
static void yr2929_Store(rt_int a_p2930, void * a_p2931, rt_int a_p2932, void * a_p2933, rt_int a_p2934);
static rt_int yr2939_IsVariable(void * a_p2940);
static void yr2945_CheckPure(void * a_p2946);
static void yr2951_LValue(void * a_p2952, rt_int * a_p2953, void * * a_p2954);
static rt_int yr2959_Paren(rt_int a_p2960);
static void * yr2965_Lit(void * a_p2966, rt_int a_p2967);
static void * yr2972_Qualifier(void * a_p2973);
static void yr2978_Expr(void * a_p2979, void * a_p2980, rt_int * a_p2981, void * * a_p2982);
static void yr2987_CheckDefined(void * a_p2988, rt_int * a_p2989, void * a_p2990);
static rt_int yr2995_Addressable(void * a_p2996);
static rt_int yr3001_UndefMacro(void * a_p3002);
static rt_int yr3007_UndefValue(void * a_p3008);
static rt_int yr3013_RawCode(void * a_p3014, rt_int a_p3015);
static rt_int yr3020_VariantTest(void * a_p3021, void * a_p3022, rt_int a_p3023);
static void yr3028_NameExpr(void * a_p3029, void * a_p3030, rt_int * a_p3031, void * * a_p3032);
static rt_int yr3037_IsMainStore(void * a_p3038);
static void yr3043_IndexExpr(void * a_p3044, rt_int * a_p3045, void * * a_p3046);
static void yr3051_NegExpr(void * a_p3052, rt_int a_p3053, void * a_p3054, rt_int * a_p3055, void * * a_p3056);
static void * yr3061_Unbounded(void * a_p3062);
static rt_int yr3067_Call2(yarr a_p3069, rt_int a_p3070, rt_int a_p3071);
static rt_int yr3076_Infix(rt_int a_p3077, yarr a_p3079, rt_int a_p3080);
static rt_int yr3085_EqCode(rt_int a_p3086, void * a_p3087, rt_int a_p3088, void * a_p3089);
static rt_int yr3094_IsOrdered(void * a_p3095);
static rt_int yr3100_FixToFloat(rt_int a_p3101, void * a_p3102);
static void yr3107_BinExpr(void * a_p3108, void * a_p3109, rt_int * a_p3110, void * * a_p3111);
static rt_int yr3116_Fits(void * a_p3117, void * a_p3118);
static void * yr3123_Choose(void * a_p3124, rt_int a_p3125, rt_int a_p3126);
static rt_int yr3131_HidesStandard(void * a_p3132);
static void yr3137_CompileArgs(void * a_p3138, void * a_p3139, rt_int * a_p3140, rt_int * a_p3141);
static void yr3146_CheckUnresolved(void * a_p3147, void * a_p3148, rt_int a_p3149);
static rt_int yr3154_SameAsFormal(void * a_p3155, void * a_p3156);
static rt_int yr3161_CallCode(void * a_p3162, rt_int a_p3163, rt_int a_p3164, rt_int a_p3165);
static rt_int yr3170_Num(rt_int a_p3171);
static rt_int yr3176_UserOp(void * a_p3177, rt_int a_p3178, void * a_p3179, void * a_p3180, rt_int * a_p3181, void * * a_p3182);
static void yr3187_NoteCall(void * a_p3188, rt_int a_p3189);
static void yr3194_Directive(void * a_p3195, void * a_p3196, rt_int a_p3197, rt_int a_p3198, rt_int * a_p3199, void * * a_p3200);
static rt_int yr3205_Suppressed(rt_int a_p3206);
static rt_int yr3211_UserAssign(rt_int a_p3212, void * a_p3213, rt_int a_p3214, void * a_p3215, rt_int a_p3216);
static void yr3221_Assign(rt_int a_p3222, void * a_p3223, rt_int a_p3224, void * a_p3225, rt_int a_p3226);
static void yr3231_CallExpr(void * a_p3232, void * a_p3233, rt_int a_p3234, rt_int * a_p3235, void * * a_p3236);
static void yr3241_Denote(void * a_p3242, void * a_p3243, rt_int * a_p3244, void * * a_p3245);
static rt_int yr3250_VariantOf(void * a_p3251, rt_int a_p3252, rt_int a_p3253);
static void yr3258_Emit2(yarr a_p3260, rt_int a_p3261);
static void yr3266_Emit3(yarr a_p3268, rt_int a_p3269, yarr a_p3271);
static void yr3276_PopTo(rt_int a_p3277);
static void yr3282_LeaveBlock(void);
static rt_int yr3287_RaiseCode(rt_int a_p3288);
static void yr3293_BlockStatements(void * a_p3294);
static void yr3299_BlockStatements1(void * a_p3300);
static rt_int yr3305_SameDesig(void * a_p3306, void * a_p3307);
static void yr3312_CheckVariantSelected(void * a_p3313, void * a_p3314, void * a_p3315);
static void yr3320_CheckCaseLabels(void * a_p3321, void * a_p3322);
static rt_int yr3327_Falls(void * a_p3328);
static rt_int yr3333_BlockFalls(void * a_p3334);
static rt_int yr3339_Completes(void * a_p3340);
static rt_int yr3345_Exits(void * a_p3346, rt_int a_p3347);
static void yr3352_Statements(void * a_p3353);
static rt_int yr3358_Cond(void * a_p3359);
static rt_int yr3364_Label(void * a_p3365, void * a_p3366);
static void yr3371_CopyOut(void);
static void yr3376_Statement(void * a_p3377);
static void yr3382_ForStatement(void * a_p3383);
static rt_int yr3388_Join(rt_int a_p3389, rt_int a_p3390, rt_int a_p3391);
static void yr3396_ReturnStatement(void * a_p3397);
static void yr3402_BeginStatement(void * a_p3403);
static void yr3408_PlaceLabel(void * a_p3409);
static void yr3414_GotoStatement(void * a_p3415);
static void yr3420_CheckLabels(void * a_p3421);
static void yr3426_DesigBase(void * a_p3427, void * * a_p3428, rt_int * a_p3429, rt_int * a_p3430);
static void * yr3435_Note(void * a_p3436, rt_int a_p3437, rt_int a_p3438);
static void yr3443_NoteWrite(void * a_p3444);
static void yr3449_NoteFree(void * a_p3450);
static void yr3455_NoteFreeDeref(void * a_p3456, rt_int a_p3457);
static rt_int yr3462_DSteps(void * a_p3463, yarr * a_p3464);
static rt_int yr3469_Overlaps(void * a_p3470, void * a_p3471);
static void yr3476_CheckActuals(void * a_p3477, rt_int a_p3478, rt_int a_p3479);
static void yr3484_CheckEffects(void);
static rt_int yr3489_DynIndex(rt_int a_p3490, rt_int a_p3491, rt_int a_p3492);
static rt_int yr3497_RoutineCName(rt_int a_p3498);
static void * yr3503_FormalRep(void * a_p3504);
static rt_int yr3509_ParamCType(void * a_p3510);
static void yr3515_InstallTrap(void * a_p3516, void * a_p3517);
static rt_int yr3522_DeclType(void * a_p3523);
static void yr3528_RoutineHeader(void * a_p3529, rt_int a_p3530);
static void * yr3535_SameSignature(void * a_p3536, void * a_p3537);
static void yr3542_RoutineBody(void * a_p3543);
static void yr3548_DeclareStorage(void * a_p3549, void * a_p3550, rt_int a_p3551);
static void yr3556_DeclareAt(void * a_p3557, void * a_p3558, rt_int a_p3559, rt_int a_p3560);
static void yr3565_InitStorage(void * a_p3566, void * a_p3567, rt_int a_p3568);
static void yr3573_SimpleDecl(void * a_p3574);
static void yr3579_NoteAlphabet(void * a_p3580, void * a_p3581);
static void yr3586_AtLocation(void * a_p3587, void * a_p3588);
static void yr3593_Defer(void * a_p3594, rt_int a_p3595, void * a_p3596, rt_int a_p3597);
static void yr3602_RunDeferred(rt_int a_p3603, rt_int a_p3604);
static void yr3609_ModuleInit(rt_int a_p3610);
static void yr3615_Declarations(void * a_p3616);
static void yr3621_DeclareRoutine(void * a_p3622);
static void * yr3627_Alias(rt_int a_p3628, void * a_p3629);
static void yr3634_AddLits(void * * a_p3635, void * a_p3636, rt_int a_p3637);
static rt_int yr3642_Provides(void * a_p3643, rt_int a_p3644);
static rt_int yr3649_ImportLater(rt_int a_p3650, rt_int a_p3651, void * * a_p3652);
static void * yr3657_OneDecl(void * a_p3658);
static void * yr3663_Lazy(rt_int a_p3664, rt_int a_p3665, void * a_p3666, rt_int a_p3667);
static void yr3672_SetLazy(rt_int a_p3673, void * a_p3674);
static void yr3679_ResolveFrom(void * a_p3680, void * a_p3681);
static void yr3686_ResolveLater(rt_int a_p3687);
static void yr3692_LazyModule(void * a_p3693, void * * a_p3694, rt_int a_p3695);
static void yr3700_ResolveItem(void * a_p3701, void * * a_p3702, rt_int a_p3703);
static void yr3708_DefineAll(void * a_p3709, rt_int a_p3710);
static void * yr3715_ExtendWith(void * a_p3716, void * a_p3717, rt_int a_p3718);
static void yr3723_CompileModule(void * a_p3724);
static void yr3729_DeclareTemplate(void * a_p3730);
static void yr3735_Instantiate(void * a_p3736);
static void yr3741_DeclareProcess(void * a_p3742);
static void yr3747_AwaitProcesses(void);
static void yr3752_Activate(void * a_p3753, void * a_p3754);
static rt_int yr3759_LifeDepth(rt_int a_p3760);
static rt_int yr3765_MonitorPath(void * a_p3766);
static void yr3771_EnterMonitor(void * a_p3772);
static void yr3777_LeaveMonitor(void);
static void yr3782_TerminateStatement(void * a_p3783);
static void yr3788_DeclareSignal(void * a_p3789, rt_int a_p3790);
static void yr3795_DeclareSignalArray(void * a_p3796, rt_int a_p3797);
static void yr3802_DeviceSignal(void * a_p3803, void * a_p3804);
static void * yr3809_Arg(void * a_p3810, rt_int a_p3811);
static void yr3816_NArgs(void * a_p3817, rt_int a_p3818);
static rt_int yr3823_Call1(yarr a_p3825, rt_int a_p3826);
static rt_int yr3831_Addr(rt_int a_p3832);
static void yr3837_StdVar(void * a_p3838, rt_int a_p3839, rt_int * a_p3840, void * * a_p3841);
static void yr3846_NumArg(void * a_p3847, rt_int * a_p3848, void * * a_p3849);
static rt_int yr3854_IntArg(void * a_p3855);
static void yr3860_CodeInsert(void * a_p3861);
static void * yr3866_ManifestScale(void * a_p3867, void * a_p3868);
static void yr3873_StdCall(rt_int a_p3874, void * a_p3875, rt_int a_p3876, rt_int * a_p3877, void * * a_p3878);
static void yr3883_StdRep(yarr a_p3885, void * a_p3886);
static void yr3891_StdOp(yarr a_p3893, rt_int a_p3894);
static void * yr3899_LitList(yarr a_p3901, yarr a_p3902, yarr a_p3903, rt_int a_p3904);
static void * yr3909_Abstract(rt_int a_p3910, yarr a_p3912);
static void yr3917_Predefine(void);
static void yr3922_Translate(void);
static void yr3927_WriteProgram(void);
static rt_int yr8567_At(struct yf3485 *up, rt_int a_p8568, rt_int a_p8569);
static rt_int yr8574_Reaches(struct yf3485 *up, rt_int a_p8575, rt_int a_p8576);
static rt_int yr8581_VName(struct yf3485 *up, rt_int a_p8582);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3933 = Y_UNDEF_I;
F.v3933 = INT64_C(0);
{ rt_int hi3938 = 127;
for (rt_int i3937 = 0; i3937 <= hi3938; i3937++) { F.c_3936 = i3937; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_3936)] = Y_DEFI(F.v3933);
((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v3933))] = F.c_3936;
F.v3933 = y_range(y_add(Y_DEFI(F.v3933), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3937 == hi3938) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv3948 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv3948; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv3953 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv3953; }
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
F.lo3972 = y_low(F.p1039, INT64_C(1));
F.hi3973 = y_high(F.p1039, INT64_C(1));
{ rt_int hi3977 = F.hi3973;
for (rt_int i3976 = F.lo3972; i3976 <= hi3977; i3976++) { F.c_3975 = i3976; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_3975)]));
if (i3976 == hi3977) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_ST(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
F.v3981 = Y_UNDEF_I;
if ((F.p1045 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v3981 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]);
while ((Y_DEFI(F.v3981) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1045)]))))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v3981))]));
F.v3981 = y_range(y_add(Y_DEFI(F.v3981), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3996, 1, lo, hi, &y_d_byte); }
y_initu(&F.yd_3996, &F.v3998);
F.v4000 = Y_UNDEF_I;
F.v4000 = INT64_C(0);
F.v4003 = Y_UNDEF_I;
F.v4003 = F.p1051;
if ((Y_DEFI(F.v4003) < INT64_C(0))) {
yr1031_SC(45);
F.v4003 = y_range(y_neg(Y_DEFI(F.v4003)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v4000 = y_range(y_add(Y_DEFI(F.v4000), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3998).p)[y_ix1(F.v3998, Y_DEFI(F.v4000))] = Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(Y_DEFI(F.v4003), INT64_C(10))), INT64_C(48)))]);
F.v4003 = y_range(y_div(Y_DEFI(F.v4003), INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v4003) == INT64_C(0))) {
goto yl_4007;
}
}
yl_4007: ;
while ((Y_DEFI(F.v4000) > INT64_C(0))) {
Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(F.v3998).p)[y_ix1(F.v3998, Y_DEFI(F.v4000))]));
F.v4000 = y_range(y_sub(Y_DEFI(F.v4000), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4022 = Y_UNDEF_I;
F.v4022 = Y_DEFI(((rt_int *)(v953).p)[y_ix1(v953, Y_DEFI(v955))]);
v955 = y_range(y_sub(Y_DEFI(v955), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = y_range(y_sub(Y_DEFI(v941), Y_DEFI(F.v4022)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4033 = y_add(Y_DEFI(F.v4022), INT64_C(1));
F.hi4034 = Y_DEFI(v941);
{ rt_int hi4038 = F.hi4034;
for (rt_int i4037 = F.lo4033; i4037 <= hi4038; i4037++) { F.c_4036 = i4037; Y_TICK();
yr1020_PoolAdd(Y_DEFB(((unsigned char *)(v939).p)[y_ix1(v939, F.c_4036)]));
if (i4037 == hi4038) break;
}}
v941 = Y_DEFI(F.v4022);
{ rt_int rv4039 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4039; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
yr1037_SA(F.p1063);
{ rt_int rv4042 = yr1056_SE();
y_use = F.yu; return rv4042; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v4047 = Y_UNDEF_I;
F.v4047 = INT64_C(0);
F.v4050 = Y_UNDEF_I;
F.v4052 = Y_UNDEF_I;
F.lo4057 = F.p1069;
F.hi4058 = y_sub((y_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi4062 = F.hi4058;
for (rt_int i4061 = F.lo4057; i4061 <= hi4062; i4061++) { F.c_4060 = i4061; Y_TICK();
F.v4047 = y_range(y_mod((y_add((y_mul(Y_DEFI(F.v4047), INT64_C(31))), Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4060)]))]))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4061 == hi4062) break;
}}
for (;;) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4047))]) == INT64_C(0))) {
v922 = y_range(y_add(Y_DEFI(v922), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v922))] = F.p1069;
((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v922))] = F.p1070;
((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4047))] = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
{ rt_int rv4072 = y_range(Y_DEFI(v922), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4072; }
}
F.v4050 = Y_DEFI(((rt_int *)(v925).p)[y_ix1(v925, Y_DEFI(F.v4047))]);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4050))]) == F.p1070)) {
F.v4052 = 1;
F.lo4079 = INT64_C(0);
F.hi4080 = y_sub(F.p1070, INT64_C(1));
{ rt_int hi4084 = F.hi4080;
for (rt_int i4083 = F.lo4079; i4083 <= hi4084; i4083++) { F.c_4082 = i4083; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4050))]), F.c_4082))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(F.p1069, F.c_4082))])))) {
F.v4052 = 0;
}
if (i4083 == hi4084) break;
}}
if (Y_DEFI(F.v4052)) {
{ rt_int rv4088 = y_range(Y_DEFI(F.v4050), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4088; }
}
}
F.v4047 = y_range(y_mod((y_add(Y_DEFI(F.v4047), INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_4068: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv4095 = yr1068_Intern(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]));
y_use = F.yu; return rv4095; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv4098 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv4098; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4103 = 1;
y_use = F.yu; return rv4103; }
}
if ((!(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]) == Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1090)])))) {
{ rt_int rv4105 = 0;
y_use = F.yu; return rv4105; }
}
F.lo4111 = INT64_C(0);
F.hi4112 = y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)]), INT64_C(1));
{ rt_int hi4116 = F.hi4112;
for (rt_int i4115 = F.lo4111; i4115 <= hi4116; i4115++) { F.c_4114 = i4115; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)]), F.c_4114))]) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)]), F.c_4114))])))) {
{ rt_int rv4120 = 0;
y_use = F.yu; return rv4120; }
}
if (i4115 == hi4116) break;
}}
{ rt_int rv4122 = 1;
y_use = F.yu; return rv4122; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4127 = Y_UNDEF_I;
F.v4127 = INT64_C(0);
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1096)]) < (y_add((y_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4137 = 0;
y_use = F.yu; return rv4137; }
}
F.lo4143 = y_low(F.p1098, INT64_C(1));
F.hi4144 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4148 = F.hi4144;
for (rt_int i4147 = F.lo4143; i4147 <= hi4148; i4147++) { F.c_4146 = i4147; Y_TICK();
if ((!(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)]), Y_DEFI(F.v4127)))]) == Y_DEFB(((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4146)])))) {
{ rt_int rv4151 = 0;
y_use = F.yu; return rv4151; }
}
F.v4127 = y_range(y_add(Y_DEFI(F.v4127), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4147 == hi4148) break;
}}
{ rt_int rv4155 = 1;
y_use = F.yu; return rv4155; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4162 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)]), F.p1105)), INT64_C(1)))]);
y_use = F.yu; return rv4162; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
F.v4167 = Y_UNDEF_P;
({ F.v4167 = y_new(sizeof(yR135)); y_initu(&yd_136, y_deref(F.v4167)); });
(*(yR135 *)y_deref(Y_DEFP(F.v4167))) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
if ((Y_DEFP(((*F.p1111)).f_head) == ((void *)0))) {
((*F.p1111)).f_head = Y_DEFP(F.v4167);
} else {
((*(yR135 *)y_deref(Y_DEFP(((*F.p1111)).f_tail)))).f_next = Y_DEFP(F.v4167);
}
((*F.p1111)).f_tail = Y_DEFP(F.v4167);
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
F.v4181 = Y_UNDEF_I;
F.v4181 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]);
while ((Y_DEFI(F.v4181) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1146)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4181))]); y_put_value(&v911, &y_d_byte, &pv); });
F.v4181 = y_range(y_add(Y_DEFI(F.v4181), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4188 = Y_UNDEF_P;
F.v4188 = Y_DEFP((F.p1152).f_head);
while ((!(Y_DEFP(F.v4188) == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP(F.v4188)))).f_t));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
F.v4188 = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v4188)))).f_next);
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
F.v4194 = Y_UNDEF_I;
v955 = INT64_C(0);
v941 = INT64_C(0);
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1158);
yr1037_SA(y_str(": ", 2));
yr1044_ST(F.p1159);
F.v4194 = yr1056_SE();
yr1145_WriteTxt(Y_DEFI(F.v4194));
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
F.v4204 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1165);
yr1037_SA(y_str(": warning: ", 11));
yr1044_ST(F.p1166);
F.v4204 = yr1056_SE();
yr1171_WriteTo(&v994, Y_DEFI(F.v4204));
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
yr1026_SB();
yr1037_SA(y_str("/* ", 3));
yr1044_ST(Y_DEFI(F.v4204));
yr1037_SA(y_str(" */", 3));
F.v4204 = yr1056_SE();
yr1110_Put(&v992, Y_DEFI(F.v4204));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4214 = Y_UNDEF_I;
F.v4214 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]);
while ((Y_DEFI(F.v4214) < (y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p1173)]))))) {
Y_TICK();
({ unsigned char pv = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(F.v4214))]); y_put_value(&(*F.p1172), &y_d_byte, &pv); });
F.v4214 = y_range(y_add(Y_DEFI(F.v4214), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v4226 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p1188);
yr1037_SA(F.p1190);
F.v4226 = yr1056_SE();
yr1157_Fail(F.p1187, Y_DEFI(F.v4226));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = y_range(y_add(Y_DEFI(v958), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4230 = Y_DEFI(v958);
y_use = F.yu; return rv4230; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4234 = Y_UNDEF_I;
F.v4234 = yr1195_NewSerial();
yr1026_SB();
yr1037_SA(F.p1202);
yr1050_SI(Y_DEFI(F.v4234));
{ rt_int rv4235 = yr1056_SE();
y_use = F.yu; return rv4235; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1880_InitWords(void) {
struct yf1881 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4238 = Y_UNDEF_I;
F.v4240 = Y_UNDEF_I;
F.v4242 = Y_UNDEF_I;
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
F.v4242 = yr1056_SE();
v922 = INT64_C(0);
F.v4238 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4242))]);
F.lo4259 = Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4242))]);
F.hi4260 = y_sub((y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4242))]), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4242))]))), INT64_C(1));
{ rt_int hi4264 = F.hi4260;
for (rt_int i4263 = F.lo4259; i4263 <= hi4264; i4263++) { F.c_4262 = i4263; Y_TICK();
if ((Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4262)]) == 32)) {
F.v4240 = yr1068_Intern(Y_DEFI(F.v4238), y_range(y_sub(F.c_4262, Y_DEFI(F.v4238)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4238 = y_range(y_add(F.c_4262, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4263 == hi4264) break;
}}
if ((!(Y_DEFI(v922) == v621))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1885_ReadSource(void) {
struct yf1886 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4271 = Y_UNDEF_B;
y_open(&v909, y_str("INPUT", 5), 0);
v1216 = y_range(y_add(Y_DEFI(v915), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4271 = g; });
yr1020_PoolAdd(Y_DEFB(F.v4271));
}
v1219 = Y_DEFI(v915);
y_close(&v909);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1890_AddTok(rt_int a_p1891, rt_int a_p1892) {
struct yf1893 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1891 = a_p1891;
F.p1892 = a_p1892;
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = F.p1891;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = F.p1892;
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(v1225);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1897_At(rt_int a_p1898) {
struct yf1899 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1898 = a_p1898;
if ((F.p1898 > Y_DEFI(v1219))) {
{ unsigned char rv4284 = 0;
y_use = F.yu; return rv4284; }
}
{ unsigned char rv4285 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.p1898)]);
y_use = F.yu; return rv4285; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1903_EndsOperand(void) {
struct yf1904 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4288 = Y_UNDEF_I;
F.v4290 = Y_UNDEF_I;
if ((Y_DEFI(v1213) == INT64_C(0))) {
{ rt_int rv4293 = 0;
y_use = F.yu; return rv4293; }
}
F.v4288 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))]);
F.v4290 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))]);
if ((((((((Y_DEFI(F.v4288) == v207)) || ((Y_DEFI(F.v4288) == v216))) || ((Y_DEFI(F.v4288) == v219))) || ((Y_DEFI(F.v4288) == v222))) || ((Y_DEFI(F.v4288) == v225))) || ((Y_DEFI(F.v4288) == v228)))) {
{ rt_int rv4295 = 1;
y_use = F.yu; return rv4295; }
}
if ((Y_DEFI(F.v4288) == v213)) {
{ rt_int rv4296 = ((((Y_DEFI(F.v4290) == v597)) || ((Y_DEFI(F.v4290) == v603))) || ((Y_DEFI(F.v4290) == v618)));
y_use = F.yu; return rv4296; }
}
if ((Y_DEFI(F.v4288) == v210)) {
{ rt_int rv4297 = (Y_DEFI(F.v4290) == v387);
y_use = F.yu; return rv4297; }
}
{ rt_int rv4299 = 0;
y_use = F.yu; return rv4299; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1908_DigitVal(unsigned char a_p1909) {
struct yf1910 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1909 = a_p1909;
if ((((F.p1909 >= 48)) && ((F.p1909 <= 57)))) {
{ rt_int rv4306 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1909)]), INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4306; }
}
if ((((F.p1909 >= 65)) && ((F.p1909 <= 70)))) {
{ rt_int rv4311 = y_range(y_sub(Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, F.p1909)]), INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4311; }
}
{ rt_int rv4313 = INT64_C(99);
y_use = F.yu; return rv4313; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1914_LexError(yarr a_p1916) {
struct yf1917 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1916 = a_p1916;
yr1178_FailS(Y_DEFI(v1225), F.p1916);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1921_LexDigits(rt_int a_p1922, rt_int a_p1923) {
struct yf1924 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1922 = a_p1922;
F.p1923 = a_p1923;
F.v4320 = Y_UNDEF_I;
while ((yr1014_IsDigit(yr1897_At(Y_DEFI(v1222))) || ((F.p1923 && ((yr1908_DigitVal(yr1897_At(Y_DEFI(v1222))) < INT64_C(16))))))) {
Y_TICK();
if ((yr1908_DigitVal(yr1897_At(Y_DEFI(v1222))) >= F.p1922)) {
yr1026_SB();
yr1031_SC(39);
yr1031_SC(yr1897_At(Y_DEFI(v1222)));
yr1037_SA(y_str("' is not a digit of BASE", 24));
yr1050_SI(F.p1922);
yr1037_SA(y_str(" (IV.B)", 7));
F.v4320 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1225), Y_DEFI(F.v4320));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1928_LexNumber(rt_int a_p1929) {
struct yf1930 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1929 = a_p1929;
F.v4330 = Y_UNDEF_I;
F.v4330 = INT64_C(10);
F.v4333 = Y_UNDEF_I;
F.v4335 = Y_UNDEF_I;
F.v4337 = Y_UNDEF_I;
F.v4339 = Y_UNDEF_I;
F.v4341 = Y_UNDEF_I;
F.v4341 = 0;
F.v4344 = Y_UNDEF_I;
F.v4344 = 0;
F.v4347 = Y_UNDEF_I;
F.v4347 = INT64_C(0);
F.v4350 = Y_UNDEF_I;
F.v4350 = INT64_C(0);
F.v4353 = Y_UNDEF_I;
F.v4353 = INT64_C(0);
F.v4356 = Y_UNDEF_I;
F.v4356 = INT64_C(0);
F.v4359 = Y_UNDEF_I;
F.v4359 = INT64_C(0);
F.v4362 = Y_UNDEF_I;
if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
F.v4330 = Y_DEFI(v1228);
F.v4344 = 1;
}
v1228 = INT64_C(0);
F.v4333 = Y_DEFI(v1222);
yr1921_LexDigits(Y_DEFI(F.v4330), Y_DEFI(F.v4344));
F.v4335 = Y_DEFI(v1222);
if ((Y_DEFI(F.v4335) == Y_DEFI(F.v4333))) {
yr1914_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4337 = Y_DEFI(v1222);
F.v4339 = Y_DEFI(v1222);
if ((((yr1897_At(Y_DEFI(v1222)) == 46)) && ((!(yr1897_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4341 = 1;
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4337 = Y_DEFI(v1222);
yr1921_LexDigits(Y_DEFI(F.v4330), Y_DEFI(F.v4344));
F.v4339 = Y_DEFI(v1222);
}
if ((yr1897_At(Y_DEFI(v1222)) == 80)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4356 = INT64_C(1);
if ((((((yr1897_At(Y_DEFI(v1222)) == 45)) || ((yr1897_At(Y_DEFI(v1222)) == 43)))) && yr1014_IsDigit(yr1897_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1897_At(Y_DEFI(v1222)) == 45)) {
F.v4356 = INT64_C(-1);
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4353 = INT64_C(0);
while (yr1014_IsDigit(yr1897_At(Y_DEFI(v1222)))) {
Y_TICK();
if ((Y_DEFI(F.v4353) > INT64_C(1000))) {
yr1914_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4353 = y_range(y_add((y_mul(Y_DEFI(F.v4353), INT64_C(10))), yr1908_DigitVal(yr1897_At(Y_DEFI(v1222)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4353 = y_range(y_mul(Y_DEFI(F.v4353), Y_DEFI(F.v4356)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4347 = INT64_C(0);
F.v4359 = y_range(y_sub(Y_DEFI(F.v4339), Y_DEFI(F.v4337)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4400 = Y_DEFI(F.v4333);
F.hi4401 = y_sub(Y_DEFI(F.v4339), INT64_C(1));
{ rt_int hi4405 = F.hi4401;
for (rt_int i4404 = F.lo4400; i4404 <= hi4405; i4404++) { F.c_4403 = i4404; Y_TICK();
if ((((F.c_4403 < Y_DEFI(F.v4335))) || ((F.c_4403 >= Y_DEFI(F.v4337))))) {
F.v4350 = yr1908_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4403)]));
if ((Y_DEFI(F.v4347) > (y_div((y_sub(v906, Y_DEFI(F.v4350))), Y_DEFI(F.v4330))))) {
yr1914_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4347 = y_range(y_add((y_mul(Y_DEFI(F.v4347), Y_DEFI(F.v4330))), Y_DEFI(F.v4350)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4404 == hi4405) break;
}}
if (F.p1929) {
F.v4347 = y_range(y_neg(Y_DEFI(F.v4347)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(v1246) >= INT64_C(200000))) {
yr1914_LexError(y_str("too many fixed-point literals", 29));
}
v1246 = y_range(y_add(Y_DEFI(v1246), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(v1246))] = Y_DEFI(F.v4347);
((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(v1246))] = Y_DEFI(F.v4330);
((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(v1246))] = y_range(y_sub(Y_DEFI(F.v4353), Y_DEFI(F.v4359)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1890_AddTok(v219, Y_DEFI(v1246));
y_use = F.yu; return;
}
if (Y_DEFI(F.v4341)) {
if ((!(Y_DEFI(F.v4330) == INT64_C(10)))) {
yr1914_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1897_At(Y_DEFI(v1222)) == 69)) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1897_At(Y_DEFI(v1222)) == 45)) || ((yr1897_At(Y_DEFI(v1222)) == 43)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1014_IsDigit(yr1897_At(Y_DEFI(v1222)))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1026_SB();
if (F.p1929) {
yr1037_SA(y_str("-", 1));
}
F.lo4432 = Y_DEFI(F.v4333);
F.hi4433 = y_sub(Y_DEFI(v1222), INT64_C(1));
{ rt_int hi4437 = F.hi4433;
for (rt_int i4436 = F.lo4432; i4436 <= hi4437; i4436++) { F.c_4435 = i4436; Y_TICK();
yr1031_SC(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4435)]));
if (i4436 == hi4437) break;
}}
F.v4362 = yr1056_SE();
yr1890_AddTok(v222, Y_DEFI(F.v4362));
y_use = F.yu; return;
}
F.v4347 = INT64_C(0);
F.lo4442 = Y_DEFI(F.v4333);
F.hi4443 = y_sub(Y_DEFI(F.v4335), INT64_C(1));
{ rt_int hi4447 = F.hi4443;
for (rt_int i4446 = F.lo4442; i4446 <= hi4447; i4446++) { F.c_4445 = i4446; Y_TICK();
F.v4350 = yr1908_DigitVal(Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4445)]));
if ((Y_DEFI(F.v4347) > (y_div((y_sub(v906, Y_DEFI(F.v4350))), Y_DEFI(F.v4330))))) {
yr1914_LexError(y_str("integer literal too large", 25));
}
F.v4347 = y_range(y_add((y_mul(Y_DEFI(F.v4347), Y_DEFI(F.v4330))), Y_DEFI(F.v4350)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4446 == hi4447) break;
}}
if (F.p1929) {
F.v4347 = y_range(y_neg(Y_DEFI(F.v4347)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1890_AddTok(v216, Y_DEFI(F.v4347));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1934_LexString(void) {
struct yf1935 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4456 = Y_UNDEF_I;
F.v4458 = Y_UNDEF_I;
F.v4460 = Y_UNDEF_I;
F.v4462 = Y_UNDEF_I;
yr1026_SB();
for (;;) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1897_At(Y_DEFI(v1222)) == 34))) {
Y_TICK();
if ((((yr1897_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
v927 = 0;
yr1914_LexError(y_str("a string must close on its line", 31));
}
yr1031_SC(yr1897_At(Y_DEFI(v1222)));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4458 = Y_DEFI(v1222);
F.v4460 = INT64_C(0);
F.v4462 = 1;
while (Y_DEFI(F.v4462)) {
Y_TICK();
if (((((yr1897_At(Y_DEFI(F.v4458)) == 32)) || ((yr1897_At(Y_DEFI(F.v4458)) == 9))) || ((yr1897_At(Y_DEFI(F.v4458)) == 13)))) {
F.v4458 = y_range(y_add(Y_DEFI(F.v4458), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1897_At(Y_DEFI(F.v4458)) == 10)) {
F.v4460 = y_range(y_add(Y_DEFI(F.v4460), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4458 = y_range(y_add(Y_DEFI(F.v4458), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4462 = 0;
}
}
if ((!(yr1897_At(Y_DEFI(F.v4458)) == 34))) {
goto yl_4463;
}
v1225 = y_range(y_add(Y_DEFI(v1225), Y_DEFI(F.v4460)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = Y_DEFI(F.v4458);
}
yl_4463: ;
F.v4456 = yr1056_SE();
yr1890_AddTok(v228, Y_DEFI(F.v4456));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1939_Lex(void) {
struct yf1940 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4491 = Y_UNDEF_B;
F.v4493 = Y_UNDEF_I;
F.v4495 = Y_UNDEF_I;
F.v4497 = Y_UNDEF_I;
F.v4499 = Y_UNDEF_I;
F.v4501 = Y_UNDEF_I;
F.v4503 = Y_UNDEF_I;
F.v4505 = Y_UNDEF_I;
v1222 = Y_DEFI(v1216);
while ((Y_DEFI(v1222) <= Y_DEFI(v1219))) {
Y_TICK();
F.v4491 = Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, Y_DEFI(v1222))]);
if ((Y_DEFB(F.v4491) == 10)) {
v1225 = y_range(y_add(Y_DEFI(v1225), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((Y_DEFB(F.v4491) == 32)) || ((Y_DEFB(F.v4491) == 9))) || ((Y_DEFB(F.v4491) == 13))) || ((Y_DEFB(F.v4491) == 12)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFB(F.v4491) == 40)) && ((yr1897_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1897_At(Y_DEFI(v1222)) == 42)) && ((yr1897_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1897_At(Y_DEFI(v1222)) == 10)) || ((Y_DEFI(v1222) > Y_DEFI(v1219))))) {
yr1914_LexError(y_str("a comment must close on its line", 32));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1014_IsDigit(Y_DEFB(F.v4491)) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1908_DigitVal(Y_DEFB(F.v4491)) < INT64_C(16))))))) {
yr1928_LexNumber(0);
} else if (((((((Y_DEFB(F.v4491) == 45)) || ((Y_DEFB(F.v4491) == 43)))) && (!yr1903_EndsOperand())) && ((yr1014_IsDigit(yr1897_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((Y_DEFI(v1228) == INT64_C(16))) && ((yr1908_DigitVal(yr1897_At(y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1928_LexNumber((Y_DEFB(F.v4491) == 45));
} else if ((!(Y_DEFI(v1228) == INT64_C(0)))) {
yr1914_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1008_IsLetter(Y_DEFB(F.v4491))) {
F.v4493 = Y_DEFI(v1222);
while ((yr1008_IsLetter(yr1897_At(Y_DEFI(v1222))) || yr1014_IsDigit(yr1897_At(Y_DEFI(v1222))))) {
Y_TICK();
v1222 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4501 = yr1068_Intern(Y_DEFI(F.v4493), y_range(y_sub(Y_DEFI(v1222), Y_DEFI(F.v4493)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v4501) == v252)) {
v1228 = INT64_C(2);
} else if ((Y_DEFI(F.v4501) == v255)) {
v1228 = INT64_C(8);
} else if ((Y_DEFI(F.v4501) == v258)) {
v1228 = INT64_C(10);
} else if ((Y_DEFI(F.v4501) == v261)) {
v1228 = INT64_C(16);
} else if ((Y_DEFI(F.v4501) <= v492)) {
yr1890_AddTok(v210, Y_DEFI(F.v4501));
} else {
yr1890_AddTok(v207, Y_DEFI(F.v4501));
}
} else if ((Y_DEFB(F.v4491) == 39)) {
F.v4493 = y_range(y_add(Y_DEFI(v1222), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4495 = Y_DEFI(F.v4493);
while ((!(yr1897_At(Y_DEFI(F.v4495)) == 39))) {
Y_TICK();
if (((((yr1897_At(Y_DEFI(F.v4495)) == 10)) || ((yr1897_At(Y_DEFI(F.v4495)) == 34))) || ((Y_DEFI(F.v4495) > Y_DEFI(v1219))))) {
yr1914_LexError(y_str("bad character literal", 21));
}
F.v4495 = y_range(y_add(Y_DEFI(F.v4495), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4495) == Y_DEFI(F.v4493))) {
yr1914_LexError(y_str("empty character literal", 23));
}
F.v4501 = yr1068_Intern(Y_DEFI(F.v4493), y_range(y_sub(Y_DEFI(F.v4495), Y_DEFI(F.v4493)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1890_AddTok(v225, Y_DEFI(F.v4501));
v1222 = y_range(y_add(Y_DEFI(F.v4495), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v4491) == 34)) {
yr1934_LexString();
} else {
F.v4497 = INT64_C(0);
F.v4495 = y_range(y_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v4497) == INT64_C(0))) && ((Y_DEFI(F.v4495) <= v621)))) {
Y_TICK();
F.v4499 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4495))]);
F.v4505 = 1;
F.lo4580 = INT64_C(0);
F.hi4581 = y_sub(Y_DEFI(F.v4499), INT64_C(1));
{ rt_int hi4585 = F.hi4581;
for (rt_int i4584 = F.lo4580; i4584 <= hi4585; i4584++) { F.c_4583 = i4584; Y_TICK();
if ((!(yr1897_At(y_range(y_add(Y_DEFI(v1222), F.c_4583), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFB(((unsigned char *)(v913).p)[y_ix1(v913, y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v4495))]), F.c_4583))])))) {
F.v4505 = 0;
}
if (i4584 == hi4585) break;
}}
if (Y_DEFI(F.v4505)) {
F.v4497 = Y_DEFI(F.v4495);
}
F.v4495 = y_range(y_add(Y_DEFI(F.v4495), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v4497) == INT64_C(0))) {
yr1914_LexError(y_str("a character that is not in the language", 39));
}
yr1890_AddTok(v213, Y_DEFI(F.v4497));
v1222 = y_range(y_add(Y_DEFI(v1222), Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v4497))])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1890_AddTok(v204, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1944_NewNode(rt_int a_p1945, rt_int a_p1946) {
struct yf1947 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1945 = a_p1945;
F.p1946 = a_p1946;
F.v4599 = Y_UNDEF_P;
({ F.v4599 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v4599)); });
(*(yR105 *)y_deref(Y_DEFP(F.v4599))) = ((yR105){ .f_kind = F.p1945, .f_line = F.p1946, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0) });
{ void * rv4604 = Y_DEFP(F.v4599);
y_use = F.yu; return rv4604; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1951_Link(void * * a_p1952, void * * a_p1953, void * a_p1954) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1952 = a_p1952;
F.p1953 = a_p1953;
F.p1954 = a_p1954;
if ((Y_DEFP((*F.p1952)) == ((void *)0))) {
(*F.p1952) = F.p1954;
} else {
((*(yR105 *)y_deref(Y_DEFP((*F.p1953))))).f_next = F.p1954;
}
(*F.p1953) = F.p1954;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1959_Count(void * a_p1960) {
struct yf1961 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1960 = a_p1960;
F.v4612 = Y_UNDEF_I;
F.v4612 = INT64_C(0);
F.v4615 = Y_UNDEF_P;
F.v4615 = F.p1960;
while ((!(Y_DEFP(F.v4615) == ((void *)0)))) {
Y_TICK();
F.v4612 = y_range(y_add(Y_DEFI(F.v4612), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4615 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4615)))).f_next);
}
{ rt_int rv4618 = Y_DEFI(F.v4612);
y_use = F.yu; return rv4618; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1965_TK(void) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4620 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]);
y_use = F.yu; return rv4620; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1970_TV(void) {
struct yf1971 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4622 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1249))]);
y_use = F.yu; return rv4622; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1975_TLn(void) {
struct yf1976 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4624 = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1249))]);
y_use = F.yu; return rv4624; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1980_IsAt(rt_int a_p1981, rt_int a_p1982) {
struct yf1983 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1981 = a_p1981;
F.p1982 = a_p1982;
F.v4629 = Y_UNDEF_I;
F.v4629 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p1981))]);
{ rt_int rv4632 = (((((Y_DEFI(F.v4629) == v210)) || ((Y_DEFI(F.v4629) == v213)))) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p1981))]) == F.p1982)));
y_use = F.yu; return rv4632; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1987_Is(rt_int a_p1988) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1988 = a_p1988;
{ rt_int rv4636 = yr1980_IsAt(INT64_C(0), F.p1988);
y_use = F.yu; return rv4636; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1993_IsIdAt(rt_int a_p1994) {
struct yf1995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1994 = a_p1994;
{ rt_int rv4640 = (Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p1994))]) == v207);
y_use = F.yu; return rv4640; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1999_Skip(void) {
struct yf2000 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1249))]) == v204))) {
v1249 = y_range(y_add(Y_DEFI(v1249), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2004_Accept(rt_int a_p2005) {
struct yf2006 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2005 = a_p2005;
if (yr1987_Is(F.p2005)) {
yr1999_Skip();
{ rt_int rv4647 = 1;
y_use = F.yu; return rv4647; }
}
{ rt_int rv4649 = 0;
y_use = F.yu; return rv4649; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2010_TokText(void) {
struct yf2011 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4652 = Y_UNDEF_I;
F.v4652 = yr1965_TK();
if ((((((Y_DEFI(F.v4652) == v207)) || ((Y_DEFI(F.v4652) == v210))) || ((Y_DEFI(F.v4652) == v213))) || ((Y_DEFI(F.v4652) == v225)))) {
{ rt_int rv4653 = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4653; }
}
if ((Y_DEFI(F.v4652) == v204)) {
{ rt_int rv4655 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv4655; }
}
if ((Y_DEFI(F.v4652) == v216)) {
yr1026_SB();
yr1050_SI(yr1970_TV());
{ rt_int rv4656 = yr1056_SE();
y_use = F.yu; return rv4656; }
}
{ rt_int rv4658 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv4658; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2015_Expect(rt_int a_p2016) {
struct yf2017 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2016 = a_p2016;
F.v4662 = Y_UNDEF_I;
if ((!yr2004_Accept(F.p2016))) {
yr1026_SB();
yr1037_SA(y_str("expected ", 9));
yr1044_ST(y_range(F.p2016, INT64_C(0), INT64_C(4000000)));
yr1037_SA(y_str(", found ", 8));
yr1044_ST(yr2010_TokText());
F.v4662 = yr1056_SE();
yr1157_Fail(yr1975_TLn(), Y_DEFI(F.v4662));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2021_Ident(void) {
struct yf2022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4667 = Y_UNDEF_I;
if ((!(yr1965_TK() == v207))) {
yr1026_SB();
yr1037_SA(y_str("expected an identifier, found ", 30));
yr1044_ST(yr2010_TokText());
F.v4667 = yr1056_SE();
yr1157_Fail(yr1975_TLn(), Y_DEFI(F.v4667));
}
F.v4667 = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
yr1999_Skip();
{ rt_int rv4669 = Y_DEFI(F.v4667);
y_use = F.yu; return rv4669; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2026_CloseName(rt_int a_p2027, rt_int a_p2028) {
struct yf2029 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2027 = a_p2027;
F.p2028 = a_p2028;
F.v4674 = Y_UNDEF_I;
if (((((yr1965_TK() == v207)) || ((yr1965_TK() == v210))) || ((yr1965_TK() == v213)))) {
F.v4674 = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
if ((Y_DEFI(F.v4674) == F.p2027)) {
yr1999_Skip();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p2028, F.p2027, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2033_ExtendedId(void) {
struct yf2034 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4678 = Y_UNDEF_I;
F.v4678 = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1965_TK() == v207)) {
yr1999_Skip();
{ rt_int rv4679 = Y_DEFI(F.v4678);
y_use = F.yu; return rv4679; }
}
if ((((yr1965_TK() == v210)) && (((((((((Y_DEFI(F.v4678) == v390)) || ((Y_DEFI(F.v4678) == v237))) || ((Y_DEFI(F.v4678) == v399))) || ((Y_DEFI(F.v4678) == v276))) || ((Y_DEFI(F.v4678) == v378))) || ((Y_DEFI(F.v4678) == v489))) || ((Y_DEFI(F.v4678) == v360)))))) {
yr1999_Skip();
{ rt_int rv4680 = Y_DEFI(F.v4678);
y_use = F.yu; return rv4680; }
}
if (((((((((((((yr1965_TK() == v213)) && ((!(Y_DEFI(F.v4678) == v594)))) && ((!(Y_DEFI(F.v4678) == v597)))) && ((!(Y_DEFI(F.v4678) == v600)))) && ((!(Y_DEFI(F.v4678) == v603)))) && ((!(Y_DEFI(F.v4678) == v606)))) && ((!(Y_DEFI(F.v4678) == v609)))) && ((!(Y_DEFI(F.v4678) == v612)))) && ((!(Y_DEFI(F.v4678) == v615)))) && ((!(Y_DEFI(F.v4678) == v537)))) && ((!(Y_DEFI(F.v4678) == v534))))) {
yr1999_Skip();
{ rt_int rv4681 = Y_DEFI(F.v4678);
y_use = F.yu; return rv4681; }
}
yr1178_FailS(yr1975_TLn(), y_str("expected a name", 15));
{ rt_int rv4684 = INT64_C(0);
y_use = F.yu; return rv4684; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2038_IsLabel(rt_int a_p2039) {
struct yf2040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2039 = a_p2039;
F.v4688 = Y_UNDEF_P;
F.v4688 = Y_DEFP(v1252);
while ((!(Y_DEFP(F.v4688) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4688)))).f_name) == F.p2039)) {
{ rt_int rv4690 = 1;
y_use = F.yu; return rv4690; }
}
F.v4688 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4688)))).f_next);
}
{ rt_int rv4692 = 0;
y_use = F.yu; return rv4692; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2044_ImportItem(void) {
struct yf2045 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4695 = Y_UNDEF_P;
F.v4695 = yr1944_NewNode(v627, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4695)))).f_name = yr2033_ExtendedId();
if ((yr1993_IsIdAt(INT64_C(0)) && ((yr1970_TV() == Y_DEFI(v1254))))) {
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4695)))).f_text = yr2021_Ident();
}
if (yr2004_Accept(v243)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4695)))).f_ival = yr2033_ExtendedId();
}
{ void * rv4697 = Y_DEFP(F.v4695);
y_use = F.yu; return rv4697; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2049_ParseModule(void) {
struct yf2050 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4700 = Y_UNDEF_P;
F.v4700 = yr1944_NewNode(v624, yr1975_TLn());
F.v4702 = Y_UNDEF_P;
F.v4702 = ((void *)0);
F.v4704 = Y_UNDEF_P;
F.v4704 = ((void *)0);
F.v4706 = Y_UNDEF_P;
F.v4706 = ((void *)0);
F.v4708 = Y_UNDEF_I;
if (yr2004_Accept(v384)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_flag = INT64_C(1);
} else {
yr2015_Expect(v381);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_name = yr2021_Ident();
while (yr2004_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v4702 = yr2044_ImportItem();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_a, &F.v4704, Y_DEFP(F.v4702));
if ((!yr2004_Accept(v606))) {
goto yl_4710;
}
}
yl_4710: ;
yr2015_Expect(v609);
}
while (yr2004_Accept(v336)) {
Y_TICK();
F.v4708 = INT64_C(0);
if ((((yr1987_Is(v396) || yr1987_Is(v474)) || yr1987_Is(v429)) || yr1987_Is(v483))) {
F.v4708 = yr1970_TV();
yr1999_Skip();
}
for (;;) {
Y_TICK();
F.v4702 = yr2044_ImportItem();
((*(yR105 *)y_deref(Y_DEFP(F.v4702)))).f_flag = Y_DEFI(F.v4708);
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_b, &F.v4706, Y_DEFP(F.v4702));
if ((!yr2004_Accept(v606))) {
goto yl_4712;
}
}
yl_4712: ;
yr2015_Expect(v609);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_c = yr2059_ParseBlock();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_flag) == INT64_C(1))) {
yr2015_Expect(v309);
} else {
yr2015_Expect(v306);
}
yr2026_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_name), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4700)))).f_line));
{ void * rv4714 = Y_DEFP(F.v4700);
y_use = F.yu; return rv4714; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2054_IsDeclWord(void) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4717 = Y_UNDEF_I;
if ((!(yr1965_TK() == v210))) {
{ rt_int rv4719 = 0;
y_use = F.yu; return rv4719; }
}
F.v4717 = yr1970_TV();
{ rt_int rv4720 = (((((((((((((Y_DEFI(F.v4717) == v270)) || ((Y_DEFI(F.v4717) == v483))) || ((Y_DEFI(F.v4717) == v372))) || ((Y_DEFI(F.v4717) == v477))) || ((Y_DEFI(F.v4717) == v438))) || ((Y_DEFI(F.v4717) == v348))) || ((Y_DEFI(F.v4717) == v420))) || ((Y_DEFI(F.v4717) == v381))) || ((Y_DEFI(F.v4717) == v384))) || ((Y_DEFI(F.v4717) == v465))) || ((Y_DEFI(F.v4717) == v366))) || ((Y_DEFI(F.v4717) == v423)));
y_use = F.yu; return rv4720; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2059_ParseBlock(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4723 = Y_UNDEF_P;
F.v4723 = yr1944_NewNode(v630, yr1975_TLn());
F.v4725 = Y_UNDEF_P;
F.v4725 = ((void *)0);
F.v4727 = Y_UNDEF_P;
F.v4727 = Y_DEFP(v1252);
F.v4729 = Y_UNDEF_P;
while (yr2054_IsDeclWord()) {
Y_TICK();
yr2086_ParseDeclGroup(&((*(yR105 *)y_deref(Y_DEFP(F.v4723)))).f_a, &F.v4725);
while (yr2004_Accept(v609)) {
Y_TICK();
}
}
if (yr1987_Is(v330)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4723)))).f_b = yr2064_ParseHandler();
F.v4729 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4723)))).f_b);
if (yr2004_Accept(v609)) {
}
}
((*(yR105 *)y_deref(Y_DEFP(F.v4723)))).f_c = yr2150_ParseStatements(1);
v1252 = Y_DEFP(F.v4727);
{ void * rv4731 = Y_DEFP(F.v4723);
y_use = F.yu; return rv4731; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2064_ParseHandler(void) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4734 = Y_UNDEF_P;
F.v4734 = yr1944_NewNode(v633, yr1975_TLn());
F.v4736 = Y_UNDEF_P;
F.v4736 = ((void *)0);
F.v4738 = Y_UNDEF_P;
F.v4738 = ((void *)0);
F.v4740 = Y_UNDEF_P;
F.v4740 = ((void *)0);
F.v4742 = Y_UNDEF_P;
F.v4742 = ((void *)0);
yr2015_Expect(v330);
while (yr2004_Accept(v267)) {
Y_TICK();
F.v4736 = yr1944_NewNode(v636, yr1975_TLn());
F.v4742 = ((void *)0);
for (;;) {
Y_TICK();
F.v4740 = yr1944_NewNode(v669, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4740)))).f_name = yr2021_Ident();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4736)))).f_a, &F.v4742, Y_DEFP(F.v4740));
if ((!yr2004_Accept(v606))) {
goto yl_4743;
}
}
yl_4743: ;
yr2015_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v4736)))).f_b = yr2150_ParseStatements(0);
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4734)))).f_a, &F.v4738, Y_DEFP(F.v4736));
}
if (yr2004_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4734)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v4734)))).f_b = yr2150_ParseStatements(0);
}
yr2015_Expect(v291);
{ void * rv4747 = Y_DEFP(F.v4734);
y_use = F.yu; return rv4747; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2069_ParseNames(void) {
struct yf2070 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4750 = Y_UNDEF_P;
F.v4750 = ((void *)0);
F.v4752 = Y_UNDEF_P;
F.v4752 = ((void *)0);
F.v4754 = Y_UNDEF_P;
F.v4754 = ((void *)0);
for (;;) {
Y_TICK();
F.v4754 = yr1944_NewNode(v669, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4754)))).f_name = yr2021_Ident();
if (yr2004_Accept(v249)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4754)))).f_a = yr2212_ParseExpr();
}
yr1951_Link(&F.v4750, &F.v4752, Y_DEFP(F.v4754));
if ((!yr2004_Accept(v606))) {
goto yl_4755;
}
}
yl_4755: ;
{ void * rv4756 = Y_DEFP(F.v4750);
y_use = F.yu; return rv4756; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2074_SimpleEntry(rt_int a_p2075) {
struct yf2076 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2075 = a_p2075;
F.v4760 = Y_UNDEF_P;
if ((F.p2075 == v270)) {
F.v4760 = yr1944_NewNode(v639, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_a = yr2069_ParseNames();
yr2015_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_b = yr2115_ParseRep();
yr2015_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_c = yr2212_ParseExpr();
} else if ((F.p2075 == v483)) {
F.v4760 = yr1944_NewNode(v642, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_a = yr2069_ParseNames();
yr2015_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_b = yr2115_ParseRep();
if (yr2004_Accept(v531)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_c = yr2212_ParseExpr();
}
} else if ((F.p2075 == v477)) {
F.v4760 = yr1944_NewNode(v648, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_name = yr2021_Ident();
yr2015_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_b = yr2135_ParseConcrete1();
} else {
F.v4760 = yr1944_NewNode(v651, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_name = yr2021_Ident();
yr2015_Expect(v585);
((*(yR105 *)y_deref(Y_DEFP(F.v4760)))).f_b = yr2115_ParseRep();
}
{ void * rv4761 = Y_DEFP(F.v4760);
y_use = F.yu; return rv4761; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2080_Continues(rt_int a_p2081) {
struct yf2082 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2081 = a_p2081;
if ((!((yr1987_Is(v609) && yr1993_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4766 = 0;
y_use = F.yu; return rv4766; }
}
if (yr2038_IsLabel(y_range(Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(1)))]), INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4770 = 0;
y_use = F.yu; return rv4770; }
}
if ((((F.p2081 == v270)) || ((F.p2081 == v483)))) {
{ rt_int rv4774 = ((yr1980_IsAt(INT64_C(2), v606) || yr1980_IsAt(INT64_C(2), v612)) || yr1980_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv4774; }
}
{ rt_int rv4776 = yr1980_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv4776; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2086_ParseDeclGroup(void * * a_p2087, void * * a_p2088) {
struct yf2089 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2087 = a_p2087;
F.p2088 = a_p2088;
F.v4781 = Y_UNDEF_I;
F.v4781 = yr1970_TV();
F.v4783 = Y_UNDEF_P;
F.v4785 = Y_UNDEF_P;
F.v4787 = Y_UNDEF_P;
if ((((((Y_DEFI(F.v4781) == v270)) || ((Y_DEFI(F.v4781) == v483))) || ((Y_DEFI(F.v4781) == v477))) || ((Y_DEFI(F.v4781) == v438)))) {
yr1999_Skip();
yr1951_Link(&(*F.p2087), &(*F.p2088), yr2074_SimpleEntry(Y_DEFI(F.v4781)));
while (yr2080_Continues(Y_DEFI(F.v4781))) {
Y_TICK();
yr1999_Skip();
yr1951_Link(&(*F.p2087), &(*F.p2088), yr2074_SimpleEntry(Y_DEFI(F.v4781)));
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v4781) == v372)) {
F.v4783 = yr1944_NewNode(v645, yr1975_TLn());
yr1999_Skip();
F.v4787 = ((void *)0);
for (;;) {
Y_TICK();
F.v4785 = yr1944_NewNode(v669, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4785)))).f_name = yr2021_Ident();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_a, &F.v4787, Y_DEFP(F.v4785));
if ((!yr2004_Accept(v606))) {
goto yl_4788;
}
}
yl_4788: ;
F.v4785 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_a);
while ((!(Y_DEFP(F.v4785) == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_b = yr1944_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4785)))).f_line));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_b)))).f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4785)))).f_name);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_b)))).f_next = Y_DEFP(v1252);
v1252 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_b);
F.v4785 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4785)))).f_next);
}
((*(yR105 *)y_deref(Y_DEFP(F.v4783)))).f_b = ((void *)0);
yr1951_Link(&(*F.p2087), &(*F.p2088), Y_DEFP(F.v4783));
y_use = F.yu; return;
}
yr1951_Link(&(*F.p2087), &(*F.p2088), yr2093_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2093_ParseDecl(void) {
struct yf2094 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4791 = Y_UNDEF_P;
F.v4793 = Y_UNDEF_P;
F.v4795 = Y_UNDEF_P;
F.v4797 = Y_UNDEF_I;
F.v4797 = yr1970_TV();
F.v4799 = Y_UNDEF_I;
F.v4799 = yr1975_TLn();
F.v4801 = Y_UNDEF_I;
if ((((Y_DEFI(F.v4797) == v348)) || ((Y_DEFI(F.v4797) == v420)))) {
F.v4791 = yr1944_NewNode(v654, Y_DEFI(F.v4799));
yr1999_Skip();
if ((Y_DEFI(F.v4797) == v348)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_flag = INT64_C(1);
}
if ((yr1987_Is(v339) || yr1987_Is(v435))) {
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_ival = yr1970_TV();
yr1999_Skip();
}
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name = yr2033_ExtendedId();
yr2098_ParseFormals(Y_DEFP(F.v4791));
if (yr2004_Accept(v363)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_e = yr1944_NewNode(v669, Y_DEFI(F.v4799));
}
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_c = yr2059_ParseBlock();
if ((Y_DEFI(F.v4797) == v348)) {
yr2015_Expect(v297);
} else {
yr2015_Expect(v312);
}
yr2026_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name), Y_DEFI(F.v4799));
{ void * rv4803 = Y_DEFP(F.v4791);
y_use = F.yu; return rv4803; }
}
if ((((Y_DEFI(F.v4797) == v381)) || ((Y_DEFI(F.v4797) == v384)))) {
{ void * rv4804 = yr2049_ParseModule();
y_use = F.yu; return rv4804; }
}
if ((Y_DEFI(F.v4797) == v465)) {
F.v4791 = yr1944_NewNode(v660, Y_DEFI(F.v4799));
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name = yr2021_Ident();
yr2015_Expect(v594);
F.v4795 = ((void *)0);
for (;;) {
Y_TICK();
F.v4793 = yr1944_NewNode(v669, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4793)))).f_name = yr2021_Ident();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_a, &F.v4795, Y_DEFP(F.v4793));
if ((!yr2004_Accept(v606))) {
goto yl_4805;
}
}
yl_4805: ;
yr2015_Expect(v597);
F.v4801 = Y_DEFI(v1249);
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_b = yr2049_ParseModule();
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_ival = Y_DEFI(F.v4801);
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_flag = Y_DEFI(v1249);
yr2015_Expect(v324);
yr2026_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name), Y_DEFI(F.v4799));
{ void * rv4806 = Y_DEFP(F.v4791);
y_use = F.yu; return rv4806; }
}
if ((Y_DEFI(F.v4797) == v366)) {
F.v4791 = yr1944_NewNode(v663, Y_DEFI(F.v4799));
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name = yr2021_Ident();
yr2015_Expect(v594);
F.v4795 = ((void *)0);
for (;;) {
Y_TICK();
F.v4793 = yr1944_NewNode(v669, yr1975_TLn());
if ((yr1965_TK() == v216)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4793)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v4793)))).f_ival = yr1970_TV();
yr1999_Skip();
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v4793)))).f_name = yr2033_ExtendedId();
}
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_a, &F.v4795, Y_DEFP(F.v4793));
if ((!yr2004_Accept(v606))) {
goto yl_4807;
}
}
yl_4807: ;
yr2015_Expect(v597);
{ void * rv4809 = Y_DEFP(F.v4791);
y_use = F.yu; return rv4809; }
}
if ((Y_DEFI(F.v4797) == v423)) {
F.v4791 = yr1944_NewNode(v666, Y_DEFI(F.v4799));
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name = yr2021_Ident();
yr2098_ParseFormals(Y_DEFP(F.v4791));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_b) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(F.v4799), y_str("a process returns no value", 26));
}
if (yr2004_Accept(v417)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_d = yr2212_ParseExpr();
}
if (yr2004_Accept(v369)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_e = yr2212_ParseExpr();
}
if (yr2004_Accept(v459)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_x = yr2212_ParseExpr();
}
((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_c = yr2059_ParseBlock();
yr2015_Expect(v315);
yr2026_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4791)))).f_name), Y_DEFI(F.v4799));
{ void * rv4811 = Y_DEFP(F.v4791);
y_use = F.yu; return rv4811; }
}
yr1178_FailS(Y_DEFI(F.v4799), y_str("expected a declaration", 22));
{ void * rv4813 = ((void *)0);
y_use = F.yu; return rv4813; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2098_ParseFormals(void * a_p2099) {
struct yf2100 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2099 = a_p2099;
F.v4817 = Y_UNDEF_P;
F.v4817 = ((void *)0);
F.v4819 = Y_UNDEF_P;
F.v4819 = ((void *)0);
F.v4821 = Y_UNDEF_I;
if (yr2004_Accept(v444)) {
((*(yR105 *)y_deref(F.p2099))).f_b = yr2115_ParseRep();
}
yr2015_Expect(v594);
while ((!yr1987_Is(v597))) {
Y_TICK();
if (yr2004_Accept(v270)) {
F.v4821 = v897;
} else if (yr2004_Accept(v405)) {
F.v4821 = v900;
} else if (yr2004_Accept(v483)) {
F.v4821 = v903;
} else {
yr1178_FailS(yr1975_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v4817 = yr1944_NewNode(v657, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4817)))).f_ival = Y_DEFI(F.v4821);
((*(yR105 *)y_deref(Y_DEFP(F.v4817)))).f_a = yr2069_ParseNames();
yr2015_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v4817)))).f_b = yr2104_ParseFormalRep();
yr1951_Link(&((*(yR105 *)y_deref(F.p2099))).f_a, &F.v4819, Y_DEFP(F.v4817));
if ((!((((yr1987_Is(v609) || yr1987_Is(v606))) && yr1993_IsIdAt(INT64_C(1)))))) {
goto yl_4823;
}
yr1999_Skip();
}
yl_4823: ;
if ((!yr2004_Accept(v609))) {
if ((!yr2004_Accept(v606))) {
yr2015_Expect(v597);
y_use = F.yu; return;
}
}
}
yr2015_Expect(v597);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2104_ParseFormalRep(void) {
struct yf2105 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4827 = Y_UNDEF_P;
if (((yr1987_Is(v240) && yr1980_IsAt(INT64_C(1), v594)) && ((yr1980_IsAt(INT64_C(3), v273) || ((yr1993_IsIdAt(INT64_C(3)) && ((Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), INT64_C(3)))]) == Y_DEFI(v1257))))))))) {
F.v4827 = yr1944_NewNode(v696, yr1975_TLn());
yr1999_Skip();
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4827)))).f_a = yr2212_ParseExpr();
yr1999_Skip();
yr2015_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v4827)))).f_b = yr2115_ParseRep();
yr2015_Expect(v597);
{ void * rv4833 = Y_DEFP(F.v4827);
y_use = F.yu; return rv4833; }
}
if (yr1987_Is(v462)) {
F.v4827 = yr1944_NewNode(v699, yr1975_TLn());
yr1999_Skip();
{ void * rv4834 = Y_DEFP(F.v4827);
y_use = F.yu; return rv4834; }
}
{ void * rv4835 = yr2115_ParseRep();
y_use = F.yu; return rv4835; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2109_IsStructWord(rt_int a_p2110) {
struct yf2111 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2110 = a_p2110;
F.v4839 = Y_UNDEF_I;
F.v4839 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(Y_DEFI(v1249), F.p2110))]);
if ((!(Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2110))]) == v210))) {
{ rt_int rv4843 = 0;
y_use = F.yu; return rv4843; }
}
{ rt_int rv4844 = (((((((((Y_DEFI(F.v4839) == v480)) || ((Y_DEFI(F.v4839) == v402))) || ((Y_DEFI(F.v4839) == v234))) || ((Y_DEFI(F.v4839) == v240))) || ((Y_DEFI(F.v4839) == v432))) || ((Y_DEFI(F.v4839) == v342))) || ((Y_DEFI(F.v4839) == v411))) || ((Y_DEFI(F.v4839) == v453)));
y_use = F.yu; return rv4844; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2115_ParseRep(void) {
struct yf2116 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4847 = Y_UNDEF_I;
F.v4849 = Y_UNDEF_P;
if ((yr1993_IsIdAt(INT64_C(0)) && ((yr2109_IsStructWord(INT64_C(1)) || ((yr1993_IsIdAt(INT64_C(1)) && yr1980_IsAt(INT64_C(2), v600))))))) {
F.v4847 = yr2021_Ident();
F.v4849 = yr2120_ParseConcrete();
((*(yR105 *)y_deref(Y_DEFP(F.v4849)))).f_text = Y_DEFI(F.v4847);
{ void * rv4854 = Y_DEFP(F.v4849);
y_use = F.yu; return rv4854; }
}
{ void * rv4855 = yr2120_ParseConcrete();
y_use = F.yu; return rv4855; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2120_ParseConcrete(void) {
struct yf2121 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4858 = Y_UNDEF_P;
F.v4860 = Y_UNDEF_P;
F.v4858 = yr2135_ParseConcrete1();
if ((yr1987_Is(v408) || yr1987_Is(v231))) {
F.v4860 = yr1944_NewNode(v669, yr1975_TLn());
if (yr2004_Accept(v408)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4860)))).f_flag = INT64_C(1);
if (((((yr1965_TK() == v216)) || ((yr1965_TK() == v207))) || yr1987_Is(v594))) {
((*(yR105 *)y_deref(Y_DEFP(F.v4860)))).f_a = yr2217_ParseSimple();
}
}
if (yr2004_Accept(v231)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4860)))).f_b = yr2217_ParseSimple();
}
((*(yR105 *)y_deref(Y_DEFP(F.v4858)))).f_x = Y_DEFP(F.v4860);
}
{ void * rv4862 = Y_DEFP(F.v4858);
y_use = F.yu; return rv4862; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2125_ParseIds(void) {
struct yf2126 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4865 = Y_UNDEF_P;
F.v4865 = ((void *)0);
F.v4867 = Y_UNDEF_P;
F.v4867 = ((void *)0);
F.v4869 = Y_UNDEF_P;
F.v4869 = ((void *)0);
for (;;) {
Y_TICK();
F.v4869 = yr1944_NewNode(v669, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4869)))).f_name = yr2021_Ident();
yr1951_Link(&F.v4865, &F.v4867, Y_DEFP(F.v4869));
if ((!yr2004_Accept(v606))) {
goto yl_4870;
}
}
yl_4870: ;
{ void * rv4871 = Y_DEFP(F.v4865);
y_use = F.yu; return rv4871; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2130_ParseFieldGroups(void) {
struct yf2131 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4874 = Y_UNDEF_P;
F.v4874 = ((void *)0);
F.v4876 = Y_UNDEF_P;
F.v4876 = ((void *)0);
F.v4878 = Y_UNDEF_P;
F.v4878 = ((void *)0);
F.v4880 = Y_UNDEF_I;
while ((yr1987_Is(v270) || yr1987_Is(v483))) {
Y_TICK();
F.v4880 = yr1970_TV();
yr1999_Skip();
for (;;) {
Y_TICK();
F.v4878 = yr1944_NewNode(v705, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4878)))).f_ival = Y_DEFI(F.v4880);
((*(yR105 *)y_deref(Y_DEFP(F.v4878)))).f_a = yr2069_ParseNames();
yr2015_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v4878)))).f_b = yr2115_ParseRep();
yr1951_Link(&F.v4874, &F.v4876, Y_DEFP(F.v4878));
if ((!((yr1987_Is(v609) && yr1993_IsIdAt(INT64_C(1)))))) {
goto yl_4881;
}
yr1999_Skip();
}
yl_4881: ;
if ((!yr2004_Accept(v609))) {
{ void * rv4883 = Y_DEFP(F.v4874);
y_use = F.yu; return rv4883; }
}
}
{ void * rv4884 = Y_DEFP(F.v4874);
y_use = F.yu; return rv4884; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2135_ParseConcrete1(void) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4887 = Y_UNDEF_P;
F.v4889 = Y_UNDEF_P;
F.v4891 = Y_UNDEF_P;
F.v4893 = Y_UNDEF_P;
F.v4895 = Y_UNDEF_P;
F.v4897 = Y_UNDEF_P;
F.v4899 = Y_UNDEF_I;
F.v4901 = Y_UNDEF_I;
F.v4901 = yr1975_TLn();
if ((yr1965_TK() == v207)) {
F.v4887 = yr1944_NewNode(v672, Y_DEFI(F.v4901));
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_name = yr2021_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_a = yr2140_ParseQualifier();
{ void * rv4902 = Y_DEFP(F.v4887);
y_use = F.yu; return rv4902; }
}
if ((!(yr1965_TK() == v210))) {
yr1178_FailS(Y_DEFI(F.v4901), y_str("expected a representation", 25));
}
F.v4899 = yr1970_TV();
if ((((Y_DEFI(F.v4899) == v480)) || ((Y_DEFI(F.v4899) == v402)))) {
F.v4887 = yr1944_NewNode(v675, Y_DEFI(F.v4901));
if ((Y_DEFI(F.v4899) == v402)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_flag = INT64_C(1);
}
yr1999_Skip();
yr2015_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_a = yr2125_ParseIds();
yr2015_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_b = yr2140_ParseQualifier();
{ void * rv4905 = Y_DEFP(F.v4887);
y_use = F.yu; return rv4905; }
}
if ((Y_DEFI(F.v4899) == v234)) {
F.v4887 = yr1944_NewNode(v678, Y_DEFI(F.v4901));
yr1999_Skip();
yr2015_Expect(v594);
F.v4897 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr1965_TK() == v225))) {
yr1178_FailS(yr1975_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4895 = yr1944_NewNode(v768, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4895)))).f_text = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
yr1999_Skip();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_a, &F.v4897, Y_DEFP(F.v4895));
if ((!yr2004_Accept(v606))) {
goto yl_4906;
}
}
yl_4906: ;
yr2015_Expect(v597);
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_b = yr2140_ParseQualifier();
{ void * rv4908 = Y_DEFP(F.v4887);
y_use = F.yu; return rv4908; }
}
if ((Y_DEFI(F.v4899) == v240)) {
F.v4887 = yr1944_NewNode(v681, Y_DEFI(F.v4901));
yr1999_Skip();
yr2015_Expect(v594);
F.v4897 = ((void *)0);
for (;;) {
Y_TICK();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_a, &F.v4897, yr2115_ParseRep());
if ((!yr2004_Accept(v606))) {
goto yl_4909;
}
}
yl_4909: ;
yr2015_Expect(v393);
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_b = yr2115_ParseRep();
yr2015_Expect(v597);
{ void * rv4910 = Y_DEFP(F.v4887);
y_use = F.yu; return rv4910; }
}
if ((Y_DEFI(F.v4899) == v432)) {
F.v4887 = yr1944_NewNode(v684, Y_DEFI(F.v4901));
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_a = yr2130_ParseFieldGroups();
if (yr2004_Accept(v450)) {
F.v4889 = yr1944_NewNode(v708, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v4889)))).f_name = yr2021_Ident();
yr2015_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v4889)))).f_b = yr2115_ParseRep();
F.v4893 = ((void *)0);
while (yr2004_Accept(v267)) {
Y_TICK();
F.v4891 = yr1944_NewNode(v711, yr1975_TLn());
F.v4897 = ((void *)0);
for (;;) {
Y_TICK();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4891)))).f_a, &F.v4897, yr2212_ParseExpr());
if ((!yr2004_Accept(v606))) {
goto yl_4911;
}
}
yl_4911: ;
yr2015_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v4891)))).f_b = yr2130_ParseFieldGroups();
while (yr2004_Accept(v609)) {
Y_TICK();
}
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4889)))).f_a, &F.v4893, Y_DEFP(F.v4891));
}
yr2015_Expect(v321);
if (yr2004_Accept(v609)) {
}
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_b = Y_DEFP(F.v4889);
}
yr2015_Expect(v318);
{ void * rv4912 = Y_DEFP(F.v4887);
y_use = F.yu; return rv4912; }
}
if (((((Y_DEFI(F.v4899) == v342)) || ((Y_DEFI(F.v4899) == v411))) || ((Y_DEFI(F.v4899) == v453)))) {
if ((Y_DEFI(F.v4899) == v342)) {
F.v4887 = yr1944_NewNode(v687, Y_DEFI(F.v4901));
} else if ((Y_DEFI(F.v4899) == v411)) {
F.v4887 = yr1944_NewNode(v690, Y_DEFI(F.v4901));
} else {
F.v4887 = yr1944_NewNode(v693, Y_DEFI(F.v4901));
}
yr1999_Skip();
yr2015_Expect(v594);
((*(yR105 *)y_deref(Y_DEFP(F.v4887)))).f_a = yr2115_ParseRep();
yr2015_Expect(v597);
{ void * rv4913 = Y_DEFP(F.v4887);
y_use = F.yu; return rv4913; }
}
yr1178_FailS(Y_DEFI(F.v4901), y_str("expected a representation", 25));
{ void * rv4915 = ((void *)0);
y_use = F.yu; return rv4915; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2140_ParseQualifier(void) {
struct yf2141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4918 = Y_UNDEF_P;
if ((!yr1987_Is(v600))) {
{ void * rv4919 = ((void *)0);
y_use = F.yu; return rv4919; }
}
F.v4918 = yr1944_NewNode(v702, yr1975_TLn());
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4918)))).f_a = yr2212_ParseExpr();
yr2015_Expect(v537);
((*(yR105 *)y_deref(Y_DEFP(F.v4918)))).f_b = yr2212_ParseExpr();
yr2015_Expect(v603);
if (yr2004_Accept(v447)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4918)))).f_c = yr2217_ParseSimple();
} else if (yr2004_Accept(v414)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4918)))).f_d = yr2217_ParseSimple();
}
{ void * rv4920 = Y_DEFP(F.v4918);
y_use = F.yu; return rv4920; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2145_IsStop(void) {
struct yf2146 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4923 = Y_UNDEF_I;
if ((yr1965_TK() == v204)) {
{ rt_int rv4925 = 1;
y_use = F.yu; return rv4925; }
}
if ((!(yr1965_TK() == v210))) {
{ rt_int rv4927 = 0;
y_use = F.yu; return rv4927; }
}
F.v4923 = yr1970_TV();
{ rt_int rv4928 = ((((((((((((((((Y_DEFI(F.v4923) == v285)) || ((Y_DEFI(F.v4923) == v282))) || ((Y_DEFI(F.v4923) == v300))) || ((Y_DEFI(F.v4923) == v267))) || ((Y_DEFI(F.v4923) == v321))) || ((Y_DEFI(F.v4923) == v327))) || ((Y_DEFI(F.v4923) == v294))) || ((Y_DEFI(F.v4923) == v303))) || ((Y_DEFI(F.v4923) == v288))) || ((Y_DEFI(F.v4923) == v291))) || ((Y_DEFI(F.v4923) == v312))) || ((Y_DEFI(F.v4923) == v297))) || ((Y_DEFI(F.v4923) == v315))) || ((Y_DEFI(F.v4923) == v306))) || ((Y_DEFI(F.v4923) == v309)));
y_use = F.yu; return rv4928; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2150_ParseStatements(rt_int a_p2151) {
struct yf2152 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2151 = a_p2151;
F.v4932 = Y_UNDEF_P;
F.v4932 = ((void *)0);
F.v4934 = Y_UNDEF_P;
F.v4934 = ((void *)0);
F.v4936 = Y_UNDEF_P;
F.v4936 = ((void *)0);
F.v4938 = Y_UNDEF_I;
for (;;) {
Y_TICK();
while (yr2004_Accept(v609)) {
Y_TICK();
}
if (yr2145_IsStop()) {
goto yl_4939;
}
F.v4938 = INT64_C(0);
if (((F.p2151 && yr1993_IsIdAt(INT64_C(0))) && yr1980_IsAt(INT64_C(1), v612))) {
F.v4938 = yr2021_Ident();
yr1999_Skip();
}
F.v4936 = yr2156_ParseStatement();
((*(yR105 *)y_deref(Y_DEFP(F.v4936)))).f_text = Y_DEFI(F.v4938);
yr1951_Link(&F.v4932, &F.v4934, Y_DEFP(F.v4936));
if ((!yr1987_Is(v609))) {
goto yl_4939;
}
}
yl_4939: ;
{ void * rv4943 = Y_DEFP(F.v4932);
y_use = F.yu; return rv4943; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2156_ParseStatement(void) {
struct yf2157 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4946 = Y_UNDEF_P;
F.v4948 = Y_UNDEF_P;
F.v4950 = Y_UNDEF_P;
F.v4952 = Y_UNDEF_P;
F.v4954 = Y_UNDEF_P;
F.v4956 = Y_UNDEF_P;
F.v4958 = Y_UNDEF_I;
F.v4960 = Y_UNDEF_I;
F.v4960 = yr1975_TLn();
if ((yr1965_TK() == v210)) {
F.v4958 = yr1970_TV();
if ((Y_DEFI(F.v4958) == v246)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v720, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = yr2212_ParseExpr();
{ void * rv4961 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4961; }
}
if ((Y_DEFI(F.v4958) == v351)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v723, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name = yr2021_Ident();
{ void * rv4962 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4962; }
}
if ((Y_DEFI(F.v4958) == v333)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v726, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name = yr2021_Ident();
{ void * rv4963 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4963; }
}
if ((Y_DEFI(F.v4958) == v441)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v729, Y_DEFI(F.v4960));
if ((!((yr1987_Is(v609) || yr2145_IsStop())))) {
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = yr2212_ParseExpr();
}
{ void * rv4964 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4964; }
}
if ((Y_DEFI(F.v4958) == v468)) {
yr1999_Skip();
{ void * rv4965 = yr1944_NewNode(v732, Y_DEFI(F.v4960));
y_use = F.yu; return rv4965; }
}
if ((Y_DEFI(F.v4958) == v426)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v735, Y_DEFI(F.v4960));
if (yr1993_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name = yr2021_Ident();
}
{ void * rv4967 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4967; }
}
if ((Y_DEFI(F.v4958) == v354)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v738, Y_DEFI(F.v4960));
F.v4950 = ((void *)0);
F.v4948 = yr1944_NewNode(v756, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4948)))).f_a = yr2212_ParseExpr();
yr2015_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v4948)))).f_b = yr2150_ParseStatements(0);
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a, &F.v4950, Y_DEFP(F.v4948));
while (yr1987_Is(v285)) {
Y_TICK();
F.v4948 = yr1944_NewNode(v756, yr1975_TLn());
yr1999_Skip();
((*(yR105 *)y_deref(Y_DEFP(F.v4948)))).f_a = yr2212_ParseExpr();
yr2015_Expect(v471);
((*(yR105 *)y_deref(Y_DEFP(F.v4948)))).f_b = yr2150_ParseStatements(0);
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a, &F.v4950, Y_DEFP(F.v4948));
}
if (yr2004_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_b = yr2150_ParseStatements(0);
}
yr2015_Expect(v300);
{ void * rv4972 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4972; }
}
if ((Y_DEFI(F.v4958) == v450)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v741, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = yr2212_ParseExpr();
F.v4950 = ((void *)0);
while (yr1987_Is(v267)) {
Y_TICK();
F.v4948 = yr1944_NewNode(v756, yr1975_TLn());
yr1999_Skip();
F.v4954 = ((void *)0);
for (;;) {
Y_TICK();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4948)))).f_a, &F.v4954, yr2212_ParseExpr());
if ((!yr2004_Accept(v606))) {
goto yl_4973;
}
}
yl_4973: ;
yr2015_Expect(v534);
((*(yR105 *)y_deref(Y_DEFP(F.v4948)))).f_b = yr2150_ParseStatements(0);
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_b, &F.v4950, Y_DEFP(F.v4948));
}
if (yr2004_Accept(v282)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_c = yr2150_ParseStatements(0);
}
yr2015_Expect(v321);
{ void * rv4977 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4977; }
}
if ((Y_DEFI(F.v4958) == v486)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v744, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = yr2212_ParseExpr();
yr2015_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_b = yr2150_ParseStatements(0);
yr2015_Expect(v327);
{ void * rv4979 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4979; }
}
if ((Y_DEFI(F.v4958) == v345)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v747, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name = yr2021_Ident();
yr2015_Expect(v612);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = yr2115_ParseRep();
yr2015_Expect(v279);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_b = yr2150_ParseStatements(0);
yr2015_Expect(v294);
{ void * rv4981 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4981; }
}
if ((Y_DEFI(F.v4958) == v375)) {
yr1999_Skip();
F.v4946 = yr1944_NewNode(v750, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name = yr2021_Ident();
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_b = yr2150_ParseStatements(0);
yr2015_Expect(v303);
yr2026_CloseName(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_name), Y_DEFI(F.v4960));
{ void * rv4983 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4983; }
}
if ((((Y_DEFI(F.v4958) == v264)) || ((Y_DEFI(F.v4958) == v456)))) {
F.v4946 = yr1944_NewNode(v753, Y_DEFI(F.v4960));
if (yr2004_Accept(v456)) {
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_flag = INT64_C(1);
}
yr2015_Expect(v264);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = yr2059_ParseBlock();
yr2015_Expect(v288);
{ void * rv4985 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4985; }
}
}
F.v4956 = yr2243_ParseDesignator();
if (yr2004_Accept(v531)) {
F.v4946 = yr1944_NewNode(v714, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = Y_DEFP(F.v4956);
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_b = yr2212_ParseExpr();
{ void * rv4986 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4986; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v4956)))).f_kind) == v780))) {
yr1178_FailS(Y_DEFI(F.v4960), y_str("expected a statement", 20));
}
F.v4946 = yr1944_NewNode(v717, Y_DEFI(F.v4960));
((*(yR105 *)y_deref(Y_DEFP(F.v4946)))).f_a = Y_DEFP(F.v4956);
{ void * rv4988 = Y_DEFP(F.v4946);
y_use = F.yu; return rv4988; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2161_OpAt(void) {
struct yf2162 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr1965_TK() == v213)) || ((yr1965_TK() == v210)))) {
{ rt_int rv4990 = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4990; }
}
{ rt_int rv4992 = INT64_C(0);
y_use = F.yu; return rv4992; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2166_IsRel(rt_int a_p2167) {
struct yf2168 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2167 = a_p2167;
{ rt_int rv4995 = ((((((((((((((((((((F.p2167 == v360)) || ((F.p2167 == v570))) || ((F.p2167 == v585))) || ((F.p2167 == v588))) || ((F.p2167 == v540))) || ((F.p2167 == v591))) || ((F.p2167 == v543))) || ((F.p2167 == v546))) || ((F.p2167 == v501))) || ((F.p2167 == v549))) || ((F.p2167 == v504))) || ((F.p2167 == v552))) || ((F.p2167 == v513))) || ((F.p2167 == v507))) || ((F.p2167 == v495))) || ((F.p2167 == v555))) || ((F.p2167 == v516))) || ((F.p2167 == v510))) || ((F.p2167 == v498)));
y_use = F.yu; return rv4995; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2172_IsAssocMul(rt_int a_p2173) {
struct yf2174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2173 = a_p2173;
{ rt_int rv4998 = (((F.p2173 == v579)) || ((F.p2173 == v237)));
y_use = F.yu; return rv4998; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2178_IsNonAssocMul(rt_int a_p2179) {
struct yf2180 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2179 = a_p2179;
{ rt_int rv5001 = ((((((((F.p2179 == v582)) || ((F.p2179 == v276))) || ((F.p2179 == v378))) || ((F.p2179 == v558))) || ((F.p2179 == v519))) || ((F.p2179 == v561))) || ((F.p2179 == v522)));
y_use = F.yu; return rv5001; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2184_IsAssocAdd(rt_int a_p2185) {
struct yf2186 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2185 = a_p2185;
{ rt_int rv5004 = (((F.p2185 == v573)) || ((F.p2185 == v399)));
y_use = F.yu; return rv5004; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2190_IsNonAssocAdd(rt_int a_p2191) {
struct yf2192 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2191 = a_p2191;
{ rt_int rv5007 = (((((((F.p2191 == v576)) || ((F.p2191 == v489))) || ((F.p2191 == v564))) || ((F.p2191 == v525))) || ((F.p2191 == v567))) || ((F.p2191 == v528)));
y_use = F.yu; return rv5007; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2196_Bin(rt_int a_p2197, void * a_p2198, void * a_p2199, rt_int a_p2200) {
struct yf2201 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2197 = a_p2197;
F.p2198 = a_p2198;
F.p2199 = a_p2199;
F.p2200 = a_p2200;
F.v5014 = Y_UNDEF_P;
F.v5014 = yr1944_NewNode(v798, F.p2200);
((*(yR105 *)y_deref(Y_DEFP(F.v5014)))).f_name = F.p2197;
((*(yR105 *)y_deref(Y_DEFP(F.v5014)))).f_a = F.p2198;
((*(yR105 *)y_deref(Y_DEFP(F.v5014)))).f_b = F.p2199;
{ void * rv5015 = Y_DEFP(F.v5014);
y_use = F.yu; return rv5015; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2205_NeedParens(rt_int a_p2206, rt_int a_p2207) {
struct yf2208 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2206 = a_p2206;
F.p2207 = a_p2207;
F.v5020 = Y_UNDEF_I;
yr1026_SB();
yr1044_ST(F.p2206);
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v5020 = yr1056_SE();
yr1157_Fail(F.p2207, Y_DEFI(F.v5020));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2212_ParseExpr(void) {
struct yf2213 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5024 = Y_UNDEF_P;
F.v5026 = Y_UNDEF_I;
F.v5028 = Y_UNDEF_I;
F.v5028 = yr1975_TLn();
F.v5024 = yr2217_ParseSimple();
F.v5026 = yr2161_OpAt();
if (yr2166_IsRel(Y_DEFI(F.v5026))) {
yr1999_Skip();
F.v5024 = yr2196_Bin(Y_DEFI(F.v5026), Y_DEFP(F.v5024), yr2217_ParseSimple(), Y_DEFI(F.v5028));
if (yr2166_IsRel(yr2161_OpAt())) {
yr2205_NeedParens(Y_DEFI(F.v5026), Y_DEFI(F.v5028));
}
}
{ void * rv5029 = Y_DEFP(F.v5024);
y_use = F.yu; return rv5029; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2217_ParseSimple(void) {
struct yf2218 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5032 = Y_UNDEF_P;
F.v5034 = Y_UNDEF_P;
F.v5036 = Y_UNDEF_I;
F.v5038 = Y_UNDEF_I;
F.v5038 = yr1975_TLn();
if (yr1987_Is(v576)) {
yr1999_Skip();
F.v5034 = yr1944_NewNode(v795, Y_DEFI(F.v5038));
((*(yR105 *)y_deref(Y_DEFP(F.v5034)))).f_a = yr2222_ParseTerm();
F.v5036 = yr2161_OpAt();
if ((yr2184_IsAssocAdd(Y_DEFI(F.v5036)) || yr2190_IsNonAssocAdd(Y_DEFI(F.v5036)))) {
yr2205_NeedParens(y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFI(F.v5038));
}
{ void * rv5039 = Y_DEFP(F.v5034);
y_use = F.yu; return rv5039; }
}
F.v5032 = yr2222_ParseTerm();
F.v5036 = yr2161_OpAt();
if (yr2190_IsNonAssocAdd(Y_DEFI(F.v5036))) {
yr1999_Skip();
F.v5032 = yr2196_Bin(Y_DEFI(F.v5036), Y_DEFP(F.v5032), yr2222_ParseTerm(), Y_DEFI(F.v5038));
if ((yr2184_IsAssocAdd(yr2161_OpAt()) || yr2190_IsNonAssocAdd(yr2161_OpAt()))) {
yr2205_NeedParens(Y_DEFI(F.v5036), Y_DEFI(F.v5038));
}
{ void * rv5040 = Y_DEFP(F.v5032);
y_use = F.yu; return rv5040; }
}
while (yr2184_IsAssocAdd(Y_DEFI(F.v5036))) {
Y_TICK();
yr1999_Skip();
F.v5032 = yr2196_Bin(Y_DEFI(F.v5036), Y_DEFP(F.v5032), yr2222_ParseTerm(), Y_DEFI(F.v5038));
if (yr2190_IsNonAssocAdd(yr2161_OpAt())) {
yr2205_NeedParens(yr2161_OpAt(), Y_DEFI(F.v5038));
}
F.v5036 = yr2161_OpAt();
}
{ void * rv5041 = Y_DEFP(F.v5032);
y_use = F.yu; return rv5041; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2222_ParseTerm(void) {
struct yf2223 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5044 = Y_UNDEF_P;
F.v5046 = Y_UNDEF_I;
F.v5048 = Y_UNDEF_I;
F.v5048 = yr1975_TLn();
F.v5044 = yr2238_ParseFactor();
F.v5046 = yr2161_OpAt();
if (yr2178_IsNonAssocMul(Y_DEFI(F.v5046))) {
yr1999_Skip();
F.v5044 = yr2196_Bin(Y_DEFI(F.v5046), Y_DEFP(F.v5044), yr2238_ParseFactor(), Y_DEFI(F.v5048));
if ((yr2172_IsAssocMul(yr2161_OpAt()) || yr2178_IsNonAssocMul(yr2161_OpAt()))) {
yr2205_NeedParens(Y_DEFI(F.v5046), Y_DEFI(F.v5048));
}
{ void * rv5049 = Y_DEFP(F.v5044);
y_use = F.yu; return rv5049; }
}
while (yr2172_IsAssocMul(Y_DEFI(F.v5046))) {
Y_TICK();
yr1999_Skip();
F.v5044 = yr2196_Bin(Y_DEFI(F.v5046), Y_DEFP(F.v5044), yr2238_ParseFactor(), Y_DEFI(F.v5048));
if (yr2178_IsNonAssocMul(yr2161_OpAt())) {
yr2205_NeedParens(yr2161_OpAt(), Y_DEFI(F.v5048));
}
F.v5046 = yr2161_OpAt();
}
{ void * rv5050 = Y_DEFP(F.v5044);
y_use = F.yu; return rv5050; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2227_IsLiteralAt(rt_int a_p2228) {
struct yf2229 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2228 = a_p2228;
F.v5054 = Y_UNDEF_I;
F.v5054 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(Y_DEFI(v1249), F.p2228))]);
{ rt_int rv5056 = (((((((Y_DEFI(F.v5054) == v216)) || ((Y_DEFI(F.v5054) == v219))) || ((Y_DEFI(F.v5054) == v222))) || ((Y_DEFI(F.v5054) == v225))) || ((Y_DEFI(F.v5054) == v228))) || yr1980_IsAt(F.p2228, v387));
y_use = F.yu; return rv5056; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2233_ParseLiteral(void) {
struct yf2234 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5059 = Y_UNDEF_P;
F.v5061 = Y_UNDEF_I;
F.v5061 = yr1965_TK();
F.v5063 = Y_UNDEF_I;
F.v5063 = yr1975_TLn();
if ((Y_DEFI(F.v5061) == v216)) {
F.v5059 = yr1944_NewNode(v759, Y_DEFI(F.v5063));
((*(yR105 *)y_deref(Y_DEFP(F.v5059)))).f_ival = yr1970_TV();
} else if ((Y_DEFI(F.v5061) == v219)) {
F.v5059 = yr1944_NewNode(v762, Y_DEFI(F.v5063));
((*(yR105 *)y_deref(Y_DEFP(F.v5059)))).f_ival = yr1970_TV();
} else if ((Y_DEFI(F.v5061) == v222)) {
F.v5059 = yr1944_NewNode(v765, Y_DEFI(F.v5063));
((*(yR105 *)y_deref(Y_DEFP(F.v5059)))).f_text = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5061) == v225)) {
F.v5059 = yr1944_NewNode(v768, Y_DEFI(F.v5063));
((*(yR105 *)y_deref(Y_DEFP(F.v5059)))).f_text = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
} else if ((Y_DEFI(F.v5061) == v228)) {
F.v5059 = yr1944_NewNode(v771, Y_DEFI(F.v5063));
((*(yR105 *)y_deref(Y_DEFP(F.v5059)))).f_text = y_range(yr1970_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v5059 = yr1944_NewNode(v774, Y_DEFI(F.v5063));
}
yr1999_Skip();
{ void * rv5064 = Y_DEFP(F.v5059);
y_use = F.yu; return rv5064; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2238_ParseFactor(void) {
struct yf2239 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5067 = Y_UNDEF_P;
F.v5069 = Y_UNDEF_I;
F.v5071 = Y_UNDEF_I;
F.v5071 = yr1975_TLn();
if (yr1987_Is(v390)) {
yr1999_Skip();
F.v5067 = yr1944_NewNode(v792, Y_DEFI(F.v5071));
((*(yR105 *)y_deref(Y_DEFP(F.v5067)))).f_a = yr2238_ParseFactor();
{ void * rv5072 = Y_DEFP(F.v5067);
y_use = F.yu; return rv5072; }
}
if (yr1987_Is(v594)) {
yr1999_Skip();
F.v5067 = yr1944_NewNode(v801, Y_DEFI(F.v5071));
((*(yR105 *)y_deref(Y_DEFP(F.v5067)))).f_a = yr2212_ParseExpr();
yr2015_Expect(v597);
{ void * rv5073 = Y_DEFP(F.v5067);
y_use = F.yu; return rv5073; }
}
if (yr2227_IsLiteralAt(INT64_C(0))) {
{ void * rv5075 = yr2233_ParseLiteral();
y_use = F.yu; return rv5075; }
}
if (yr1993_IsIdAt(INT64_C(0))) {
if ((yr2227_IsLiteralAt(INT64_C(1)) || ((yr1993_IsIdAt(INT64_C(1)) && (!((((((yr1980_IsAt(INT64_C(2), v594) || yr1980_IsAt(INT64_C(2), v600)) || yr1980_IsAt(INT64_C(2), v615)) || yr1980_IsAt(INT64_C(2), v618)) || yr1980_IsAt(INT64_C(2), v531)) || yr1980_IsAt(INT64_C(2), v612)))))))) {
F.v5069 = yr2021_Ident();
if (yr1993_IsIdAt(INT64_C(0))) {
F.v5067 = yr1944_NewNode(v777, Y_DEFI(F.v5071));
((*(yR105 *)y_deref(Y_DEFP(F.v5067)))).f_name = yr2021_Ident();
} else {
F.v5067 = yr2233_ParseLiteral();
}
((*(yR105 *)y_deref(Y_DEFP(F.v5067)))).f_d = yr1944_NewNode(v669, Y_DEFI(F.v5071));
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5067)))).f_d)))).f_name = Y_DEFI(F.v5069);
{ void * rv5086 = Y_DEFP(F.v5067);
y_use = F.yu; return rv5086; }
}
{ void * rv5087 = yr2243_ParseDesignator();
y_use = F.yu; return rv5087; }
}
yr1186_FailN(Y_DEFI(F.v5071), yr2010_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv5089 = ((void *)0);
y_use = F.yu; return rv5089; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2243_ParseDesignator(void) {
struct yf2244 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5092 = Y_UNDEF_P;
F.v5094 = Y_UNDEF_P;
F.v5096 = Y_UNDEF_P;
F.v5098 = Y_UNDEF_I;
F.v5098 = yr1975_TLn();
F.v5092 = yr1944_NewNode(v777, Y_DEFI(F.v5098));
((*(yR105 *)y_deref(Y_DEFP(F.v5092)))).f_name = yr2021_Ident();
if (yr2004_Accept(v594)) {
((*(yR105 *)y_deref(Y_DEFP(F.v5092)))).f_kind = v780;
F.v5096 = ((void *)0);
while ((!yr1987_Is(v597))) {
Y_TICK();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5092)))).f_a, &F.v5096, yr2212_ParseExpr());
if ((!yr2004_Accept(v606))) {
yr2248_EXIT_ARGS();
}
}
yr2015_Expect(v597);
}
for (;;) {
Y_TICK();
if (yr2004_Accept(v615)) {
F.v5094 = yr1944_NewNode(v783, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_a = Y_DEFP(F.v5092);
((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_name = yr2021_Ident();
F.v5092 = Y_DEFP(F.v5094);
} else if (yr2004_Accept(v600)) {
F.v5094 = yr1944_NewNode(v786, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_a = Y_DEFP(F.v5092);
F.v5096 = ((void *)0);
for (;;) {
Y_TICK();
yr1951_Link(&((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_b, &F.v5096, yr2212_ParseExpr());
if ((!yr2004_Accept(v606))) {
goto yl_5100;
}
}
yl_5100: ;
yr2015_Expect(v603);
F.v5092 = Y_DEFP(F.v5094);
} else if (yr2004_Accept(v618)) {
F.v5094 = yr1944_NewNode(v789, yr1975_TLn());
((*(yR105 *)y_deref(Y_DEFP(F.v5094)))).f_a = Y_DEFP(F.v5092);
F.v5092 = Y_DEFP(F.v5094);
} else {
goto yl_5099;
}
}
yl_5099: ;
{ void * rv5101 = Y_DEFP(F.v5092);
y_use = F.yu; return rv5101; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2248_EXIT_ARGS(void) {
struct yf2249 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1987_Is(v597))) {
yr2015_Expect(v597);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2253_ParseProgram(void) {
struct yf2254 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5105 = Y_UNDEF_P;
F.v5105 = ((void *)0);
F.v5107 = Y_UNDEF_P;
F.v5107 = ((void *)0);
while ((!(yr1965_TK() == v204))) {
Y_TICK();
if ((!((yr1987_Is(v381) || yr1987_Is(v384))))) {
yr1178_FailS(yr1975_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1951_Link(&F.v5105, &F.v5107, yr2049_ParseModule());
while (yr2004_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5109 = Y_DEFP(F.v5105);
y_use = F.yu; return rv5109; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2258_NewSym(rt_int a_p2259, rt_int a_p2260) {
struct yf2261 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2259 = a_p2259;
F.p2260 = a_p2260;
F.v5114 = Y_UNDEF_P;
({ F.v5114 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v5114)); });
(*(yR125 *)y_deref(Y_DEFP(F.v5114))) = ((yR125){ .f_kind = F.p2259, .f_name = F.p2260, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1) });
((*(yR125 *)y_deref(Y_DEFP(F.v5114)))).f_serial = yr1195_NewSerial();
{ void * rv5128 = Y_DEFP(F.v5114);
y_use = F.yu; return rv5128; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2265_OpenScope(rt_int a_p2266) {
struct yf2267 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2266 = a_p2266;
F.v5132 = Y_UNDEF_P;
({ F.v5132 = y_new(sizeof(yR130)); y_initu(&yd_131, y_deref(F.v5132)); });
(*(yR130 *)y_deref(Y_DEFP(F.v5132))) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2266, .f_module = ((void *)0), .f_level = Y_DEFI(v1279), .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((Y_DEFI(v1273) >= INT64_C(0))) {
((*(yR130 *)y_deref(Y_DEFP(F.v5132)))).f_up = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))]);
}
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = Y_DEFP(F.v5132);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2271_ReopenScope(void * a_p2272) {
struct yf2273 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2272 = a_p2272;
F.v5139 = Y_UNDEF_P;
F.v5139 = Y_DEFP(((*(yR130 *)y_deref(F.p2272))).f_syms);
F.v5141 = Y_UNDEF_I;
F.v5141 = INT64_C(0);
F.v5144 = Y_UNDEF_I;
v1273 = y_range(y_add(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))] = F.p2272;
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
while ((!(Y_DEFP(F.v5139) == ((void *)0)))) {
Y_TICK();
F.v5141 = y_range(y_add(Y_DEFI(F.v5141), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5141))] = Y_DEFP(F.v5139);
F.v5139 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5139)))).f_stack);
}
while ((Y_DEFI(F.v5141) > INT64_C(0))) {
Y_TICK();
F.v5139 = Y_DEFP(((void * *)(v1340).p)[y_ix1(v1340, Y_DEFI(F.v5141))]);
F.v5144 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5139)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v5139)))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5144))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5144))] = Y_DEFP(F.v5139);
F.v5141 = y_range(y_sub(Y_DEFI(F.v5141), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2277_CloseScope(void) {
struct yf2278 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5156 = Y_UNDEF_P;
F.v5158 = Y_UNDEF_P;
F.v5160 = Y_UNDEF_P;
F.v5162 = Y_UNDEF_I;
F.v5156 = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
while ((!(Y_DEFP(F.v5156) == ((void *)0)))) {
Y_TICK();
F.v5162 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5156)))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5158 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5162))]);
F.v5160 = ((void *)0);
while ((((!(Y_DEFP(F.v5158) == ((void *)0)))) && ((!(Y_DEFP(F.v5158) == Y_DEFP(F.v5156)))))) {
Y_TICK();
F.v5160 = Y_DEFP(F.v5158);
F.v5158 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5158)))).f_chain);
}
if ((Y_DEFP(F.v5158) == Y_DEFP(F.v5156))) {
if ((Y_DEFP(F.v5160) == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5162))] = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5156)))).f_chain);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v5160)))).f_chain = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5156)))).f_chain);
}
}
F.v5156 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5156)))).f_stack);
}
v1273 = y_range(y_sub(Y_DEFI(v1273), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2282_Visible(void * a_p2283) {
struct yf2284 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2283 = a_p2283;
{ rt_int rv5170 = (((Y_DEFI(((*(yR125 *)y_deref(F.p2283))).f_depth) >= Y_DEFI(v1276))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p2283))).f_depth) == INT64_C(0))));
y_use = F.yu; return rv5170; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2288_Find(rt_int a_p2289) {
struct yf2290 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2289 = a_p2289;
F.v5174 = Y_UNDEF_P;
F.v5174 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2289, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5174) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5174)))).f_name) == F.p2289)) && yr2282_Visible(Y_DEFP(F.v5174)))) {
{ void * rv5177 = Y_DEFP(F.v5174);
y_use = F.yu; return rv5177; }
}
F.v5174 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5174)))).f_chain);
}
{ void * rv5178 = ((void *)0);
y_use = F.yu; return rv5178; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2294_FindHere(rt_int a_p2295) {
struct yf2296 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2295 = a_p2295;
F.v5182 = Y_UNDEF_P;
F.v5182 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2295, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5182) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5182)))).f_name) == F.p2295)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5182)))).f_depth) == Y_DEFI(v1273))))) {
{ void * rv5185 = Y_DEFP(F.v5182);
y_use = F.yu; return rv5185; }
}
F.v5182 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5182)))).f_chain);
}
{ void * rv5186 = ((void *)0);
y_use = F.yu; return rv5186; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2300_Lookup(rt_int a_p2301, rt_int a_p2302) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2301 = a_p2301;
F.p2302 = a_p2302;
F.v5191 = Y_UNDEF_P;
F.v5191 = yr2288_Find(F.p2301);
F.v5193 = Y_UNDEF_P;
if ((!(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]) == ((void *)0)))) {
if ((((Y_DEFP(F.v5191) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_depth) == Y_DEFI(v1273)))))) {
if (yr2320_DeclaredFrom(Y_DEFP(((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))]), F.p2301)) {
yr1186_FailN(F.p2302, F.p2301, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((Y_DEFP(F.v5191) == ((void *)0))) {
yr1186_FailN(F.p2302, F.p2301, y_str(" is not declared here", 21));
}
F.lo5199 = INT64_C(1);
F.hi5200 = Y_DEFI(v1328);
{ rt_int hi5204 = F.hi5200;
for (rt_int i5203 = F.lo5199; i5203 <= hi5204; i5203++) { F.c_5202 = i5203; Y_TICK();
if (((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_depth) == Y_DEFI(((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5202)]))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_serial) > Y_DEFI(((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5202)])))) && yr2314_IsSimple(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_kind)))) {
yr1186_FailN(F.p2302, F.p2301, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i5203 == hi5204) break;
}}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_kind) == v894)) {
F.v5193 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_chain);
while ((!(Y_DEFP(F.v5193) == ((void *)0)))) {
Y_TICK();
if ((((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5193)))).f_name) == F.p2301)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5193)))).f_depth) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5191)))).f_depth)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5193)))).f_kind) == v894))) && yr2341_Resolved(Y_DEFP(F.v5193))) && ((!(yr2393_Real(Y_DEFP(F.v5193)) == yr2393_Real(Y_DEFP(F.v5191)))))) && ((!(Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v5191))))).f_kind) == v873))))) {
yr1186_FailN(F.p2302, F.p2301, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v5193 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5193)))).f_chain);
}
}
{ void * rv5207 = Y_DEFP(F.v5191);
y_use = F.yu; return rv5207; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2307_AltOf(void * a_p2308, void * a_p2309) {
struct yf2310 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2308 = a_p2308;
F.p2309 = a_p2309;
F.v5212 = Y_UNDEF_P;
F.v5212 = Y_DEFP(((*(yR125 *)y_deref(F.p2308))).f_alt);
while ((!(Y_DEFP(F.v5212) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(F.v5212) == F.p2309)) {
{ rt_int rv5214 = 1;
y_use = F.yu; return rv5214; }
}
F.v5212 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5212)))).f_alt);
}
{ rt_int rv5216 = 0;
y_use = F.yu; return rv5216; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2314_IsSimple(rt_int a_p2315) {
struct yf2316 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2315 = a_p2315;
{ rt_int rv5219 = (((((((F.p2315 == v861)) || ((F.p2315 == v864))) || ((F.p2315 == v867))) || ((F.p2315 == v870))) || ((F.p2315 == v873))) || ((F.p2315 == v888)));
y_use = F.yu; return rv5219; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2320_DeclaredFrom(void * a_p2321, rt_int a_p2322) {
struct yf2323 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2321 = a_p2321;
F.p2322 = a_p2322;
F.v5224 = Y_UNDEF_P;
F.v5224 = F.p2321;
F.v5226 = Y_UNDEF_P;
F.v5226 = F.p2321;
F.v5228 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v5224) == ((void *)0)))) {
Y_TICK();
F.v5228 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_kind);
if (((((Y_DEFI(F.v5228) == v639)) || ((Y_DEFI(F.v5228) == v642))) || ((Y_DEFI(F.v5228) == v645)))) {
F.v5226 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_a);
while ((!(Y_DEFP(F.v5226) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_name) == F.p2322)) {
{ rt_int rv5230 = 1;
y_use = F.yu; return rv5230; }
}
F.v5226 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_next);
}
}
if ((((((((Y_DEFI(F.v5228) == v648)) || ((Y_DEFI(F.v5228) == v651))) || ((Y_DEFI(F.v5228) == v654))) || ((Y_DEFI(F.v5228) == v666))) || ((Y_DEFI(F.v5228) == v624))) || ((Y_DEFI(F.v5228) == v660)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_name) == F.p2322)) {
{ rt_int rv5232 = 1;
y_use = F.yu; return rv5232; }
}
}
if ((((((Y_DEFI(F.v5228) == v639)) || ((Y_DEFI(F.v5228) == v642))) || ((Y_DEFI(F.v5228) == v648))) || ((Y_DEFI(F.v5228) == v651)))) {
if (yr2327_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b), F.p2322)) {
{ rt_int rv5234 = 1;
y_use = F.yu; return rv5234; }
}
}
if ((Y_DEFI(F.v5228) == v624)) {
F.v5226 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_b);
while ((!(Y_DEFP(F.v5226) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_ival) == F.p2322)) || ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_name) == F.p2322)))))) {
{ rt_int rv5237 = 1;
y_use = F.yu; return rv5237; }
}
F.v5226 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5226)))).f_next);
}
}
F.v5224 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5224)))).f_next);
}
{ rt_int rv5239 = 0;
y_use = F.yu; return rv5239; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2327_LiteralIn(void * a_p2328, rt_int a_p2329) {
struct yf2330 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2328 = a_p2328;
F.p2329 = a_p2329;
F.v5244 = Y_UNDEF_P;
if ((F.p2328 == ((void *)0))) {
{ rt_int rv5246 = 0;
y_use = F.yu; return rv5246; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2328))).f_kind) == v675)) {
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_a);
while ((!(Y_DEFP(F.v5244) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_name) == F.p2329)) {
{ rt_int rv5248 = 1;
y_use = F.yu; return rv5248; }
}
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_next);
}
{ rt_int rv5250 = 0;
y_use = F.yu; return rv5250; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2328))).f_kind) == v681)) {
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_a);
while ((!(Y_DEFP(F.v5244) == ((void *)0)))) {
Y_TICK();
if (yr2327_LiteralIn(Y_DEFP(F.v5244), F.p2329)) {
{ rt_int rv5252 = 1;
y_use = F.yu; return rv5252; }
}
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_next);
}
{ rt_int rv5253 = yr2327_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_b), F.p2329);
y_use = F.yu; return rv5253; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2328))).f_kind) == v684)) {
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_a);
while ((!(Y_DEFP(F.v5244) == ((void *)0)))) {
Y_TICK();
if (yr2327_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_b), F.p2329)) {
{ rt_int rv5255 = 1;
y_use = F.yu; return rv5255; }
}
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_next);
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_b) == ((void *)0)))) {
if (yr2327_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_b)))).f_b), F.p2329)) {
{ rt_int rv5257 = 1;
y_use = F.yu; return rv5257; }
}
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_b)))).f_a);
while ((!(Y_DEFP(F.v5244) == ((void *)0)))) {
Y_TICK();
if (yr2334_LiteralInGroups(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_b), F.p2329)) {
{ rt_int rv5259 = 1;
y_use = F.yu; return rv5259; }
}
F.v5244 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5244)))).f_next);
}
}
{ rt_int rv5261 = 0;
y_use = F.yu; return rv5261; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2328))).f_kind) == v687)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2328))).f_kind) == v693)))) {
{ rt_int rv5262 = yr2327_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(F.p2328))).f_a), F.p2329);
y_use = F.yu; return rv5262; }
}
{ rt_int rv5264 = 0;
y_use = F.yu; return rv5264; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2334_LiteralInGroups(void * a_p2335, rt_int a_p2336) {
struct yf2337 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2335 = a_p2335;
F.p2336 = a_p2336;
F.v5269 = Y_UNDEF_P;
F.v5269 = F.p2335;
while ((!(Y_DEFP(F.v5269) == ((void *)0)))) {
Y_TICK();
if (yr2327_LiteralIn(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5269)))).f_b), F.p2336)) {
{ rt_int rv5271 = 1;
y_use = F.yu; return rv5271; }
}
F.v5269 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5269)))).f_next);
}
{ rt_int rv5273 = 0;
y_use = F.yu; return rv5273; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2341_Resolved(void * a_p2342) {
struct yf2343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2342 = a_p2342;
if ((!(Y_DEFI(((*(yR125 *)y_deref(F.p2342))).f_kind) == v894))) {
{ rt_int rv5277 = 1;
y_use = F.yu; return rv5277; }
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p2342))).f_target) == ((void *)0))) {
{ rt_int rv5279 = 0;
y_use = F.yu; return rv5279; }
}
{ rt_int rv5280 = yr2341_Resolved(Y_DEFP(((*(yR125 *)y_deref(F.p2342))).f_target));
y_use = F.yu; return rv5280; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2347_Ambiguous(void * a_p2348) {
struct yf2349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2348 = a_p2348;
F.v5284 = Y_UNDEF_P;
F.v5284 = Y_DEFP(((*(yR125 *)y_deref(F.p2348))).f_chain);
while ((!(Y_DEFP(F.v5284) == ((void *)0)))) {
Y_TICK();
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5284)))).f_name) == Y_DEFI(((*(yR125 *)y_deref(F.p2348))).f_name))) && yr2282_Visible(Y_DEFP(F.v5284))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5284)))).f_kind) == v873))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5284)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p2348))).f_rep)))).f_tid)))))) {
{ rt_int rv5286 = 1;
y_use = F.yu; return rv5286; }
}
F.v5284 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5284)))).f_chain);
}
{ rt_int rv5288 = 0;
y_use = F.yu; return rv5288; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2353_FindLit(rt_int a_p2354, void * a_p2355) {
struct yf2356 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2354 = a_p2354;
F.p2355 = a_p2355;
F.v5293 = Y_UNDEF_P;
F.v5293 = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2354, INT64_C(8192)))]);
while ((!(Y_DEFP(F.v5293) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5293)))).f_name) == F.p2354)) && yr2341_Resolved(Y_DEFP(F.v5293)))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v5293))))).f_kind) == v873)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v5293))))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2355))).f_tid))))) {
{ void * rv5296 = Y_DEFP(F.v5293);
y_use = F.yu; return rv5296; }
}
}
F.v5293 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5293)))).f_chain);
}
{ void * rv5297 = ((void *)0);
y_use = F.yu; return rv5297; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2360_Define(void * a_p2361, rt_int a_p2362) {
struct yf2363 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2361 = a_p2361;
F.p2362 = a_p2362;
F.v5302 = Y_UNDEF_P;
F.v5302 = yr2294_FindHere(Y_DEFI(((*(yR125 *)y_deref(F.p2361))).f_name));
F.v5304 = Y_UNDEF_I;
F.v5304 = y_range(y_mod(Y_DEFI(((*(yR125 *)y_deref(F.p2361))).f_name), INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(Y_DEFP(F.v5302) == ((void *)0)))) && (!((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5302)))).f_kind) == v873)) && ((Y_DEFI(((*(yR125 *)y_deref(F.p2361))).f_kind) == v873)))))) && (!(((((Y_DEFI(((*(yR125 *)y_deref(F.p2361))).f_kind) == v876)) && yr2341_Resolved(Y_DEFP(F.v5302))) && yr2307_AltOf(F.p2361, yr2393_Real(Y_DEFP(F.v5302))))))) && (!((((Y_DEFI(((*(yR125 *)y_deref(F.p2361))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5302)))).f_kind) == v894))))))) {
yr1186_FailN(F.p2362, Y_DEFI(((*(yR125 *)y_deref(F.p2361))).f_name), y_str(" is declared twice in this scope", 32));
}
((*(yR125 *)y_deref(F.p2361))).f_depth = Y_DEFI(v1273);
((*(yR125 *)y_deref(F.p2361))).f_chain = Y_DEFP(((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5304))]);
((void * *)(v1260).p)[y_ix1(v1260, Y_DEFI(F.v5304))] = F.p2361;
((*(yR125 *)y_deref(F.p2361))).f_stack = Y_DEFP(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms);
((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_syms = F.p2361;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2367_Path(rt_int a_p2368, rt_int a_p2369) {
struct yf2370 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2368 = a_p2368;
F.p2369 = a_p2369;
F.v5312 = Y_UNDEF_I;
F.v5312 = y_range(y_sub(Y_DEFI(v1279), F.p2368), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2368 == INT64_C(0))) {
{ rt_int rv5315 = F.p2369;
y_use = F.yu; return rv5315; }
}
yr1026_SB();
if ((Y_DEFI(F.v5312) == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
} else {
yr1037_SA(y_str("F.up->", 6));
while ((Y_DEFI(F.v5312) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
F.v5312 = y_range(y_sub(Y_DEFI(F.v5312), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1044_ST(F.p2369);
{ rt_int rv5323 = yr1056_SE();
y_use = F.yu; return rv5323; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2374_FramePtr(rt_int a_p2375) {
struct yf2376 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2375 = a_p2375;
F.v5327 = Y_UNDEF_I;
F.v5327 = y_range(y_sub(Y_DEFI(v1279), F.p2375), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v5327) == INT64_C(0))) {
{ rt_int rv5331 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5331; }
}
yr1026_SB();
yr1037_SA(y_str("F.up", 4));
while ((Y_DEFI(F.v5327) > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
F.v5327 = y_range(y_sub(Y_DEFI(F.v5327), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5337 = yr1056_SE();
y_use = F.yu; return rv5337; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2380_DeclStorage(rt_int a_p2381, rt_int a_p2382) {
struct yf2383 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2381 = a_p2381;
F.p2382 = a_p2382;
F.v5342 = Y_UNDEF_I;
yr1026_SB();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
}
yr1044_ST(F.p2381);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p2382);
yr1037_SA(y_str(";", 1));
F.v5342 = yr1056_SE();
if ((Y_DEFI(v1279) == INT64_C(0))) {
yr1110_Put(&v984, Y_DEFI(F.v5342));
} else {
yr1110_Put(&v998, Y_DEFI(F.v5342));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2387_SymPath(void * a_p2388) {
struct yf2389 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2388 = a_p2388;
F.v5351 = Y_UNDEF_I;
F.v5351 = yr2367_Path(Y_DEFI(((*(yR125 *)y_deref(F.p2388))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p2388))).f_cname));
if (Y_DEFI(((*(yR125 *)y_deref(F.p2388))).f_byref)) {
yr1026_SB();
yr1037_SA(y_str("(*", 2));
yr1044_ST(Y_DEFI(F.v5351));
yr1037_SA(y_str(")", 1));
{ rt_int rv5354 = yr1056_SE();
y_use = F.yu; return rv5354; }
}
{ rt_int rv5355 = Y_DEFI(F.v5351);
y_use = F.yu; return rv5355; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2393_Real(void * a_p2394) {
struct yf2395 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2394 = a_p2394;
F.v5359 = Y_UNDEF_P;
F.v5359 = F.p2394;
while ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5359)))).f_kind) == v894)) {
Y_TICK();
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5359)))).f_target) == ((void *)0))) {
yr1186_FailN(Y_DEFI(v1000), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5359)))).f_name), y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5359 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5359)))).f_target);
}
{ void * rv5361 = Y_DEFP(F.v5359);
y_use = F.yu; return rv5361; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2399_NewRep(rt_int a_p2400, rt_int a_p2401) {
struct yf2402 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2400 = a_p2400;
F.p2401 = a_p2401;
F.v5366 = Y_UNDEF_P;
({ F.v5366 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5366)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5366))) = ((yR110){ .f_kind = F.p2400, .f_tid = F.p2401, .f_tname = F.p2401, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
((*(yR110 *)y_deref(Y_DEFP(F.v5366)))).f_serial = yr1195_NewSerial();
{ void * rv5394 = Y_DEFP(F.v5366);
y_use = F.yu; return rv5394; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2406_CopyRep(void * a_p2407) {
struct yf2408 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2407 = a_p2407;
F.v5398 = Y_UNDEF_P;
({ F.v5398 = y_new(sizeof(yR110)); y_initu(&yd_111, y_deref(F.v5398)); });
(*(yR110 *)y_deref(Y_DEFP(F.v5398))) = (*(yR110 *)y_deref(F.p2407));
((*(yR110 *)y_deref(Y_DEFP(F.v5398)))).f_serial = yr1195_NewSerial();
((*(yR110 *)y_deref(Y_DEFP(F.v5398)))).f_sig = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v5398)))).f_bits = INT64_C(0);
{ void * rv5401 = Y_DEFP(F.v5398);
y_use = F.yu; return rv5401; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2412_IsDiscrete(void * a_p2413) {
struct yf2414 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2413 = a_p2413;
{ rt_int rv5404 = (((((Y_DEFI(((*(yR110 *)y_deref(F.p2413))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2413))).f_kind) == v813))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2413))).f_kind) == v816))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2413))).f_kind) == v819)));
y_use = F.yu; return rv5404; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2418_IsNumeric(void * a_p2419) {
struct yf2420 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2419 = a_p2419;
{ rt_int rv5407 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2419))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2419))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2419))).f_kind) == v810)));
y_use = F.yu; return rv5407; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2424_IsArrayLike(void * a_p2425) {
struct yf2426 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2425 = a_p2425;
{ rt_int rv5410 = ((((Y_DEFI(((*(yR110 *)y_deref(F.p2425))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2425))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2425))).f_kind) == v846)));
y_use = F.yu; return rv5410; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2430_IsString(void * a_p2431) {
struct yf2432 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2431 = a_p2431;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2431))).f_kind) == v846)) {
{ rt_int rv5414 = 1;
y_use = F.yu; return rv5414; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2431))).f_kind) == v822)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2431))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5416 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2431))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5416; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2431))).f_kind) == v843)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2431))).f_nidx) == INT64_C(1))))) {
{ rt_int rv5418 = (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2431))).f_elem)))).f_kind) == v819);
y_use = F.yu; return rv5418; }
}
{ rt_int rv5420 = 0;
y_use = F.yu; return rv5420; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2436_Deep(void * a_p2437) {
struct yf2438 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2437 = a_p2437;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2437))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2437))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2437))).f_kind) == v846)))) {
{ rt_int rv5424 = 1;
y_use = F.yu; return rv5424; }
}
{ rt_int rv5425 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2437))).f_kind) == v825)) && Y_DEFI(((*(yR110 *)y_deref(F.p2437))).f_deep));
y_use = F.yu; return rv5425; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2442_Holds(void * a_p2443, rt_int a_p2444) {
struct yf2445 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2443 = a_p2443;
F.p2444 = a_p2444;
F.v5430 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2443))).f_kind) == v822)) {
{ rt_int rv5431 = (((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2443))).f_elem)))).f_kind) == F.p2444)) || yr2442_Holds(Y_DEFP(((*(yR110 *)y_deref(F.p2443))).f_elem), F.p2444));
y_use = F.yu; return rv5431; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2443))).f_kind) == v825)) {
F.v5430 = Y_DEFP(((*(yR110 *)y_deref(F.p2443))).f_fields);
while ((!(Y_DEFP(F.v5430) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5430)))).f_rep)))).f_kind) == F.p2444)) || yr2442_Holds(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5430)))).f_rep), F.p2444))) {
{ rt_int rv5433 = 1;
y_use = F.yu; return rv5433; }
}
F.v5430 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5430)))).f_next);
}
}
{ rt_int rv5435 = 0;
y_use = F.yu; return rv5435; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2449_HoldsSignal(void * a_p2450) {
struct yf2451 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2450 = a_p2450;
{ rt_int rv5438 = yr2442_Holds(F.p2450, v837);
y_use = F.yu; return rv5438; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2455_NonAssignable(void * a_p2456) {
struct yf2457 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2456 = a_p2456;
F.v5442 = Y_UNDEF_I;
F.v5442 = Y_DEFI(((*(yR110 *)y_deref(F.p2456))).f_kind);
if (((((Y_DEFI(F.v5442) == v837)) || ((Y_DEFI(F.v5442) == v831))) || ((Y_DEFI(F.v5442) == v840)))) {
{ rt_int rv5444 = 1;
y_use = F.yu; return rv5444; }
}
{ rt_int rv5445 = ((yr2442_Holds(F.p2456, v837) || yr2442_Holds(F.p2456, v831)) || yr2442_Holds(F.p2456, v840));
y_use = F.yu; return rv5445; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2461_CType(void * a_p2462) {
struct yf2463 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2462 = a_p2462;
F.v5449 = Y_UNDEF_I;
F.v5449 = Y_DEFI(((*(yR110 *)y_deref(F.p2462))).f_kind);
if (((((Y_DEFI(F.v5449) == v804)) || ((Y_DEFI(F.v5449) == v813))) || ((Y_DEFI(F.v5449) == v816)))) {
{ rt_int rv5451 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5451; }
}
if ((Y_DEFI(F.v5449) == v819)) {
{ rt_int rv5453 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5453; }
}
if ((Y_DEFI(F.v5449) == v810)) {
{ rt_int rv5455 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5455; }
}
if ((Y_DEFI(F.v5449) == v807)) {
{ rt_int rv5457 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5457; }
}
if (((((Y_DEFI(F.v5449) == v822)) || ((Y_DEFI(F.v5449) == v843))) || ((Y_DEFI(F.v5449) == v846)))) {
{ rt_int rv5459 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5459; }
}
if ((Y_DEFI(F.v5449) == v825)) {
{ rt_int rv5460 = Y_DEFI(((*(yR110 *)y_deref(F.p2462))).f_cname);
y_use = F.yu; return rv5460; }
}
if ((((Y_DEFI(F.v5449) == v828)) || ((Y_DEFI(F.v5449) == v849)))) {
{ rt_int rv5462 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5462; }
}
if ((Y_DEFI(F.v5449) == v831)) {
{ rt_int rv5464 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5464; }
}
if ((Y_DEFI(F.v5449) == v834)) {
{ rt_int rv5466 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5466; }
}
if ((Y_DEFI(F.v5449) == v837)) {
{ rt_int rv5468 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5468; }
}
if ((Y_DEFI(F.v5449) == v840)) {
{ rt_int rv5470 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5470; }
}
if ((Y_DEFI(F.v5449) == v855)) {
{ rt_int rv5472 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5472; }
}
{ rt_int rv5474 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5474; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2467_DescOf(void * a_p2468) {
struct yf2469 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2468 = a_p2468;
F.v5478 = Y_UNDEF_I;
F.v5478 = Y_DEFI(((*(yR110 *)y_deref(F.p2468))).f_kind);
if (((((Y_DEFI(F.v5478) == v804)) || ((Y_DEFI(F.v5478) == v813))) || ((Y_DEFI(F.v5478) == v816)))) {
{ rt_int rv5480 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5480; }
}
if ((((Y_DEFI(F.v5478) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2468))).f_nlits) >= INT64_C(256))))) {
{ rt_int rv5483 = yr1061_T(y_str("&y_d_byte256", 12));
y_use = F.yu; return rv5483; }
}
if ((Y_DEFI(F.v5478) == v819)) {
{ rt_int rv5485 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5485; }
}
if ((Y_DEFI(F.v5478) == v810)) {
{ rt_int rv5487 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5487; }
}
if ((Y_DEFI(F.v5478) == v807)) {
{ rt_int rv5489 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5489; }
}
if ((((Y_DEFI(F.v5478) == v828)) || ((Y_DEFI(F.v5478) == v849)))) {
{ rt_int rv5491 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5491; }
}
if ((Y_DEFI(F.v5478) == v834)) {
{ rt_int rv5493 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5493; }
}
if ((((Y_DEFI(F.v5478) == v822)) || ((Y_DEFI(F.v5478) == v825)))) {
yr1026_SB();
yr1037_SA(y_str("&", 1));
yr1044_ST(yr2367_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2468))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2468))).f_dname)));
{ rt_int rv5495 = yr1056_SE();
y_use = F.yu; return rv5495; }
}
if ((Y_DEFI(F.v5478) == v846)) {
{ rt_int rv5497 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5497; }
}
if ((Y_DEFI(F.v5478) == v837)) {
{ rt_int rv5499 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5499; }
}
if ((Y_DEFI(F.v5478) == v840)) {
{ rt_int rv5501 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5501; }
}
{ rt_int rv5503 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5503; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2473_NewDesc(void * a_p2474) {
struct yf2475 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2474 = a_p2474;
((*(yR110 *)y_deref(F.p2474))).f_dname = yr1200_Fresh(y_str("yd_", 3));
((*(yR110 *)y_deref(F.p2474))).f_dlevel = Y_DEFI(v1279);
yr2380_DeclStorage(yr1061_T(y_str("ydesc", 5)), Y_DEFI(((*(yR110 *)y_deref(F.p2474))).f_dname));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2479_SameType(void * a_p2480, void * a_p2481) {
struct yf2482 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2480 = a_p2480;
F.p2481 = a_p2481;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2480))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(F.p2481))).f_tid))) {
{ rt_int rv5512 = 1;
y_use = F.yu; return rv5512; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2480))).f_kind) == v846)) && yr2430_IsString(F.p2481))) {
{ rt_int rv5514 = 1;
y_use = F.yu; return rv5514; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2481))).f_kind) == v846)) && yr2430_IsString(F.p2480))) {
{ rt_int rv5516 = 1;
y_use = F.yu; return rv5516; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2480))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2481))).f_kind) == v828)))) {
{ rt_int rv5518 = 1;
y_use = F.yu; return rv5518; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2481))).f_kind) == v849)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2480))).f_kind) == v828)))) {
{ rt_int rv5520 = 1;
y_use = F.yu; return rv5520; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2480))).f_kind) == v858)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2481))).f_kind) == v858)))) {
{ rt_int rv5522 = 1;
y_use = F.yu; return rv5522; }
}
{ rt_int rv5524 = 0;
y_use = F.yu; return rv5524; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2486_TypeClash(rt_int a_p2487, void * a_p2488, void * a_p2489) {
struct yf2490 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2487 = a_p2487;
F.p2488 = a_p2488;
F.p2489 = a_p2489;
F.v5530 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("type conflict: ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2488))).f_tname));
yr1037_SA(y_str(" expected, ", 11));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2489))).f_tname));
yr1037_SA(y_str(" found", 6));
F.v5530 = yr1056_SE();
yr1157_Fail(F.p2487, Y_DEFI(F.v5530));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2494_CheckType(rt_int a_p2495, void * a_p2496, void * a_p2497) {
struct yf2498 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2495 = a_p2495;
F.p2496 = a_p2496;
F.p2497 = a_p2497;
if ((!yr2479_SameType(F.p2496, F.p2497))) {
yr2486_TypeClash(F.p2495, F.p2496, F.p2497);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2502_CheckRepresented(void * a_p2503, rt_int a_p2504) {
struct yf2505 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2503 = a_p2503;
F.p2504 = a_p2504;
if (Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_abstract)) {
yr1186_FailN(F.p2504, Y_DEFI(((*(yR110 *)y_deref(F.p2503))).f_tname), y_str(" is a type, not a representation (VI.A.1)", 41));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2509_SigText(void * a_p2510) {
struct yf2511 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2510 = a_p2510;
F.v5545 = Y_UNDEF_I;
F.v5545 = Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_kind);
F.v5547 = Y_UNDEF_P;
F.v5549 = Y_UNDEF_P;
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_tid));
if (((yr2412_IsDiscrete(F.p2510) || ((Y_DEFI(F.v5545) == v810))) || ((Y_DEFI(F.v5545) == v807)))) {
yr1037_SA(y_str("[", 1));
if (Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_hasm)) {
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_mlo));
yr1037_SA(y_str("..", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_mhi));
} else {
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_lo));
yr1037_SA(y_str("..", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_hi));
}
yr1037_SA(y_str("]", 1));
if ((Y_DEFI(F.v5545) == v810)) {
yr1037_SA(y_str("P", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_prec));
}
if ((Y_DEFI(F.v5545) == v807)) {
yr1037_SA(y_str("S", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_fsn));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_fsd));
}
} else if ((Y_DEFI(F.v5545) == v822)) {
yr1037_SA(y_str("(", 1));
F.v5547 = Y_DEFP(((*(yR110 *)y_deref(F.p2510))).f_idx);
while ((!(Y_DEFP(F.v5547) == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2515_RepSig(Y_DEFP(F.v5547)));
yr1037_SA(y_str(",", 1));
F.v5547 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5547)))).f_link);
}
yr1037_SA(y_str("OF ", 3));
yr1044_ST(yr2515_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2510))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5545) == v843)) {
yr1037_SA(y_str("(", 1));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_nidx));
yr1037_SA(y_str("D ", 2));
yr1044_ST(yr2515_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2510))).f_elem)));
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(F.v5545) == v825)) {
yr1037_SA(y_str("{", 1));
F.v5549 = Y_DEFP(((*(yR110 *)y_deref(F.p2510))).f_fields);
while ((!(Y_DEFP(F.v5549) == ((void *)0)))) {
Y_TICK();
if (Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5549)))).f_isconst)) {
yr1037_SA(y_str("C ", 2));
} else {
yr1037_SA(y_str("V ", 2));
}
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5549)))).f_name));
yr1037_SA(y_str(":", 1));
yr1044_ST(yr2515_RepSig(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5549)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v5549 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5549)))).f_next);
}
yr1037_SA(y_str("}", 1));
} else if ((((Y_DEFI(F.v5545) == v834)) || ((Y_DEFI(F.v5545) == v831)))) {
yr1037_SA(y_str("(", 1));
yr1044_ST(yr2515_RepSig(Y_DEFP(((*(yR110 *)y_deref(F.p2510))).f_elem)));
yr1037_SA(y_str(")", 1));
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_packed)) {
yr1037_SA(y_str(" PACKED ", 8));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_pbits));
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_align) == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2510))).f_align));
}
{ rt_int rv5575 = yr1056_SE();
y_use = F.yu; return rv5575; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2515_RepSig(void * a_p2516) {
struct yf2517 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2516 = a_p2516;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2516))).f_sig) == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2516))).f_sig = yr1075_Name(yr2509_SigText(F.p2516));
}
{ rt_int rv5579 = Y_DEFI(((*(yR110 *)y_deref(F.p2516))).f_sig);
y_use = F.yu; return rv5579; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2521_Identical(void * a_p2522, void * a_p2523) {
struct yf2524 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2522 = a_p2522;
F.p2523 = a_p2523;
if ((F.p2522 == F.p2523)) {
{ rt_int rv5584 = 1;
y_use = F.yu; return rv5584; }
}
if ((!yr2479_SameType(F.p2522, F.p2523))) {
{ rt_int rv5586 = 0;
y_use = F.yu; return rv5586; }
}
{ rt_int rv5587 = (yr2515_RepSig(F.p2522) == yr2515_RepSig(F.p2523));
y_use = F.yu; return rv5587; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2528_IsLiteralNode(void * a_p2529) {
struct yf2530 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2529 = a_p2529;
if ((((((Y_DEFI(((*(yR105 *)y_deref(F.p2529))).f_kind) == v759)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2529))).f_kind) == v765))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2529))).f_kind) == v762))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2529))).f_kind) == v768)))) {
{ rt_int rv5590 = (Y_DEFP(((*(yR105 *)y_deref(F.p2529))).f_d) == ((void *)0));
y_use = F.yu; return rv5590; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2529))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2529))).f_kind) == v801)))) {
{ rt_int rv5591 = yr2528_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2529))).f_a));
y_use = F.yu; return rv5591; }
}
{ rt_int rv5593 = 0;
y_use = F.yu; return rv5593; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2534_StoreBounds(void * a_p2535, yarr a_p2537) {
struct yf2538 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2535 = a_p2535;
F.p2537 = a_p2537;
F.v5598 = Y_UNDEF_I;
F.v5600 = Y_UNDEF_I;
F.v5598 = yr1200_Fresh(y_str("lo", 2));
F.v5600 = yr1200_Fresh(y_str("hi", 2));
yr2380_DeclStorage(yr1061_T(F.p2537), Y_DEFI(F.v5598));
yr2380_DeclStorage(yr1061_T(F.p2537), Y_DEFI(F.v5600));
yr1132_Emit(yr3388_Join(yr2367_Path(Y_DEFI(v1279), Y_DEFI(F.v5598)), yr1061_T(y_str(" = ", 3)), yr3388_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_lo), yr1061_T(y_str(";", 1)), INT64_C(0))));
yr1132_Emit(yr3388_Join(yr2367_Path(Y_DEFI(v1279), Y_DEFI(F.v5600)), yr1061_T(y_str(" = ", 3)), yr3388_Join(Y_DEFI(((*(yR110 *)y_deref(F.p2535))).f_hi), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR110 *)y_deref(F.p2535))).f_lo = Y_DEFI(F.v5598);
((*(yR110 *)y_deref(F.p2535))).f_hi = Y_DEFI(F.v5600);
((*(yR110 *)y_deref(F.p2535))).f_dname = Y_DEFI(F.v5598);
((*(yR110 *)y_deref(F.p2535))).f_dlevel = Y_DEFI(v1279);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2542_LoText(void * a_p2543) {
struct yf2544 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2543 = a_p2543;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_lo) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_kind) == v825))))) {
{ rt_int rv5613 = yr2367_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_lo));
y_use = F.yu; return rv5613; }
}
{ rt_int rv5614 = Y_DEFI(((*(yR110 *)y_deref(F.p2543))).f_lo);
y_use = F.yu; return rv5614; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2548_HiText(void * a_p2549) {
struct yf2550 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2549 = a_p2549;
if ((((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_dname) == INT64_C(0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_hi) == INT64_C(0))))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_kind) == v822)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_kind) == v825))))) {
{ rt_int rv5619 = yr2367_Path(Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_dlevel), Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_hi));
y_use = F.yu; return rv5619; }
}
{ rt_int rv5620 = Y_DEFI(((*(yR110 *)y_deref(F.p2549))).f_hi);
y_use = F.yu; return rv5620; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2554_AdoptLiteral(void * a_p2555, void * a_p2556, void * a_p2557) {
struct yf2558 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2555 = a_p2555;
F.p2556 = a_p2556;
F.p2557 = a_p2557;
F.v5626 = Y_UNDEF_P;
if ((((!yr2528_IsLiteralNode(F.p2555)) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2556))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2557))).f_kind))))) || (!yr2418_IsNumeric(F.p2557)))) {
{ void * rv5627 = F.p2556;
y_use = F.yu; return rv5627; }
}
if (yr2562_HasQualifier(F.p2555)) {
{ void * rv5628 = F.p2556;
y_use = F.yu; return rv5628; }
}
F.v5626 = yr2406_CopyRep(F.p2556);
((*(yR110 *)y_deref(Y_DEFP(F.v5626)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(F.p2557))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.v5626)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(F.p2557))).f_tname);
{ void * rv5629 = Y_DEFP(F.v5626);
y_use = F.yu; return rv5629; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2562_HasQualifier(void * a_p2563) {
struct yf2564 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2563 = a_p2563;
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2563))).f_kind) == v795)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p2563))).f_kind) == v801)))) {
{ rt_int rv5632 = yr2562_HasQualifier(Y_DEFP(((*(yR105 *)y_deref(F.p2563))).f_a));
y_use = F.yu; return rv5632; }
}
{ rt_int rv5633 = (!(Y_DEFP(((*(yR105 *)y_deref(F.p2563))).f_d) == ((void *)0)));
y_use = F.yu; return rv5633; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2568_Gcd(rt_int a_p2569, rt_int a_p2570) {
struct yf2571 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2569 = a_p2569;
F.p2570 = a_p2570;
F.v5638 = Y_UNDEF_I;
F.v5640 = Y_UNDEF_I;
F.v5642 = Y_UNDEF_I;
F.v5638 = F.p2569;
F.v5640 = F.p2570;
if ((Y_DEFI(F.v5638) < INT64_C(0))) {
F.v5638 = y_range(y_neg(Y_DEFI(F.v5638)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v5640) < INT64_C(0))) {
F.v5640 = y_range(y_neg(Y_DEFI(F.v5640)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(Y_DEFI(F.v5640) == INT64_C(0)))) {
Y_TICK();
F.v5642 = y_range(y_mod(Y_DEFI(F.v5638), Y_DEFI(F.v5640)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5638 = Y_DEFI(F.v5640);
F.v5640 = Y_DEFI(F.v5642);
}
if ((Y_DEFI(F.v5638) == INT64_C(0))) {
{ rt_int rv5651 = INT64_C(1);
y_use = F.yu; return rv5651; }
}
{ rt_int rv5652 = Y_DEFI(F.v5638);
y_use = F.yu; return rv5652; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2575_MulChk(rt_int a_p2576, rt_int a_p2577, rt_int a_p2578) {
struct yf2579 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2576 = a_p2576;
F.p2577 = a_p2577;
F.p2578 = a_p2578;
F.v5658 = Y_UNDEF_I;
F.v5660 = Y_UNDEF_I;
F.v5658 = F.p2576;
F.v5660 = F.p2577;
if ((Y_DEFI(F.v5658) < INT64_C(0))) {
F.v5658 = y_range(y_neg(Y_DEFI(F.v5658)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v5660) < INT64_C(0))) {
F.v5660 = y_range(y_neg(Y_DEFI(F.v5660)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(Y_DEFI(F.v5658) == INT64_C(0)))) && ((Y_DEFI(F.v5660) > (y_div(v906, Y_DEFI(F.v5658))))))) {
yr1178_FailS(F.p2578, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5669 = y_range(y_mul(F.p2576, F.p2577), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5669; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2583_PowChk(rt_int a_p2584, rt_int a_p2585, rt_int a_p2586) {
struct yf2587 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2584 = a_p2584;
F.p2585 = a_p2585;
F.p2586 = a_p2586;
F.v5675 = Y_UNDEF_I;
F.v5675 = INT64_C(1);
F.lo5680 = INT64_C(1);
F.hi5681 = F.p2585;
{ rt_int hi5685 = F.hi5681;
for (rt_int i5684 = F.lo5680; i5684 <= hi5685; i5684++) { F.c_5683 = i5684; Y_TICK();
F.v5675 = yr2575_MulChk(Y_DEFI(F.v5675), F.p2584, F.p2586);
if (i5684 == hi5685) break;
}}
{ rt_int rv5686 = Y_DEFI(F.v5675);
y_use = F.yu; return rv5686; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2591_ScaleRatio(void * a_p2592, void * a_p2593, rt_int * a_p2594, rt_int * a_p2595, rt_int * a_p2596) {
struct yf2597 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2592 = a_p2592;
F.p2593 = a_p2593;
F.p2594_o = a_p2594;
F.p2595_o = a_p2595;
F.p2596_o = a_p2596;
F.v5694 = Y_UNDEF_I;
F.v5696 = Y_UNDEF_I;
F.v5698 = Y_UNDEF_I;
F.v5700 = Y_UNDEF_I;
F.v5702 = Y_UNDEF_I;
F.v5704 = Y_UNDEF_I;
F.p2594 = yr1061_T(y_str("1", 1));
F.p2595 = yr1061_T(y_str("1", 1));
F.p2596 = 1;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2592))).f_fsd) == INT64_C(0))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_fsd) == INT64_C(0))))) {
(*F.p2594_o) = F.p2594;
(*F.p2595_o) = F.p2595;
(*F.p2596_o) = F.p2596;
y_use = F.yu; return;
}
F.v5694 = yr2568_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2592))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_fsn));
F.v5696 = yr2568_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2592))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_fsd));
F.v5698 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2592))).f_fsn), Y_DEFI(F.v5694)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5700 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_fsd), Y_DEFI(F.v5696)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5702 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2592))).f_fsd), Y_DEFI(F.v5696)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5704 = y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2593))).f_fsn), Y_DEFI(F.v5694)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2596 = (((((Y_DEFI(F.v5698) == INT64_C(1))) && ((Y_DEFI(F.v5700) == INT64_C(1)))) && ((Y_DEFI(F.v5702) == INT64_C(1)))) && ((Y_DEFI(F.v5704) == INT64_C(1))));
F.p2594 = yr2601_Factor(Y_DEFI(F.v5698), Y_DEFI(F.v5700));
F.p2595 = yr2601_Factor(Y_DEFI(F.v5702), Y_DEFI(F.v5704));
(*F.p2594_o) = F.p2594;
(*F.p2595_o) = F.p2595;
(*F.p2596_o) = F.p2596;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2601_Factor(rt_int a_p2602, rt_int a_p2603) {
struct yf2604 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2602 = a_p2602;
F.p2603 = a_p2603;
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(F.p2602);
yr1037_SA(y_str(")", 1));
if ((!(F.p2603 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
yr1050_SI(F.p2603);
yr1037_SA(y_str(")", 1));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv5727 = yr1056_SE();
y_use = F.yu; return rv5727; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2608_SetScale(void * a_p2609, rt_int a_p2610, rt_int a_p2611) {
struct yf2612 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2609 = a_p2609;
F.p2610 = a_p2610;
F.p2611 = a_p2611;
F.v5733 = Y_UNDEF_I;
F.v5733 = yr2568_Gcd(F.p2610, F.p2611);
((*(yR110 *)y_deref(F.p2609))).f_fsn = y_range(y_div(F.p2610, Y_DEFI(F.v5733)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2609))).f_fsd = y_range(y_div(F.p2611, Y_DEFI(F.v5733)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2609))).f_fsd) < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2609))).f_fsn = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2609))).f_fsn)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2609))).f_fsd = y_range(y_neg(Y_DEFI(((*(yR110 *)y_deref(F.p2609))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2616_Qualify(void * a_p2617, void * a_p2618) {
struct yf2619 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2617 = a_p2617;
F.p2618 = a_p2618;
F.v5743 = Y_UNDEF_I;
F.v5745 = Y_UNDEF_I;
F.v5747 = Y_UNDEF_I;
F.v5749 = Y_UNDEF_I;
F.v5751 = Y_UNDEF_P;
F.v5753 = Y_UNDEF_P;
F.v5755 = Y_UNDEF_I;
F.v5757 = Y_UNDEF_I;
F.v5759 = Y_UNDEF_I;
F.v5761 = Y_UNDEF_I;
F.v5763 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2617))).f_kind) == v807)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_c) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2896_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_c), &F.v5755, &F.v5761, &F.v5763);
if (((!Y_DEFI(F.v5755)) || ((Y_DEFI(F.v5761) <= INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR110 *)y_deref(F.p2617))).f_fsn = Y_DEFI(F.v5761);
((*(yR110 *)y_deref(F.p2617))).f_fsd = Y_DEFI(F.v5763);
yr1026_SB();
yr1050_SI(Y_DEFI(F.v5761));
yr1037_SA(y_str("/", 1));
yr1050_SI(Y_DEFI(F.v5763));
((*(yR110 *)y_deref(F.p2617))).f_scale = yr1056_SE();
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_a), F.p2617, &F.v5743, &F.v5751);
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_b), F.p2617, &F.v5745, &F.v5753);
F.v5751 = yr2554_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_a), Y_DEFP(F.v5751), F.p2617);
F.v5753 = yr2554_AdoptLiteral(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_b), Y_DEFP(F.v5753), F.p2617);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2617))).f_kind) == v807)) {
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), F.p2617, Y_DEFP(F.v5751));
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), F.p2617, Y_DEFP(F.v5753));
yr2591_ScaleRatio(Y_DEFP(F.v5751), F.p2617, &F.v5747, &F.v5749, &F.v5757);
((*(yR110 *)y_deref(F.p2617))).f_lo = yr3388_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v5743), yr3388_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v5747), yr3388_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v5749), yr1061_T(y_str(", 1)", 4)))));
yr2591_ScaleRatio(Y_DEFP(F.v5753), F.p2617, &F.v5747, &F.v5749, &F.v5757);
((*(yR110 *)y_deref(F.p2617))).f_hi = yr3388_Join(yr1061_T(y_str("y_fix_bound(", 12)), Y_DEFI(F.v5745), yr3388_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v5747), yr3388_Join(yr1061_T(y_str(", ", 2)), Y_DEFI(F.v5749), yr1061_T(y_str(", 0)", 4)))));
((*(yR110 *)y_deref(F.p2617))).f_dname = INT64_C(0);
yr2534_StoreBounds(F.p2617, y_str("yfix", 4));
((*(yR110 *)y_deref(F.p2617))).f_abstract = 0;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2617))).f_kind) == v810)) {
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), F.p2617, Y_DEFP(F.v5751));
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), F.p2617, Y_DEFP(F.v5753));
((*(yR110 *)y_deref(F.p2617))).f_lo = Y_DEFI(F.v5743);
((*(yR110 *)y_deref(F.p2617))).f_hi = Y_DEFI(F.v5745);
((*(yR110 *)y_deref(F.p2617))).f_dname = INT64_C(0);
if ((!((yr2528_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_a)) && yr2528_IsLiteralNode(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_b)))))) {
yr2534_StoreBounds(F.p2617, y_str("double", 6));
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_d), &F.v5755, &F.v5759);
if ((!Y_DEFI(F.v5755))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("PRECISION is a manifest constant", 32));
}
if ((((Y_DEFI(F.v5759) < INT64_C(1))) || ((Y_DEFI(F.v5759) > INT64_C(15))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1026_SB();
yr1050_SI(Y_DEFI(F.v5759));
((*(yR110 *)y_deref(F.p2617))).f_prec = yr1056_SE();
((*(yR110 *)y_deref(F.p2617))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2412_IsDiscrete(F.p2617))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_c) == ((void *)0)))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_d) == ((void *)0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), F.p2617, Y_DEFP(F.v5751));
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2618))).f_line), F.p2617, Y_DEFP(F.v5753));
((*(yR110 *)y_deref(F.p2617))).f_lo = Y_DEFI(F.v5743);
((*(yR110 *)y_deref(F.p2617))).f_hi = Y_DEFI(F.v5745);
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_a), &F.v5755, &((*(yR110 *)y_deref(F.p2617))).f_mlo);
((*(yR110 *)y_deref(F.p2617))).f_hasm = Y_DEFI(F.v5755);
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2618))).f_b), &F.v5755, &((*(yR110 *)y_deref(F.p2617))).f_mhi);
((*(yR110 *)y_deref(F.p2617))).f_hasm = (Y_DEFI(((*(yR110 *)y_deref(F.p2617))).f_hasm) && Y_DEFI(F.v5755));
((*(yR110 *)y_deref(F.p2617))).f_abstract = 0;
((*(yR110 *)y_deref(F.p2617))).f_dname = INT64_C(0);
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2617))).f_hasm))) {
yr2534_StoreBounds(F.p2617, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2623_DefineLits(void * a_p2624) {
struct yf2625 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2624 = a_p2624;
F.v5795 = Y_UNDEF_P;
F.v5795 = Y_DEFP(((*(yR110 *)y_deref(F.p2624))).f_lits);
F.v5797 = Y_UNDEF_P;
F.v5799 = Y_UNDEF_I;
F.v5799 = INT64_C(0);
while ((!(Y_DEFP(F.v5795) == ((void *)0)))) {
Y_TICK();
if ((!(yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_name)) == ((void *)0)))) {
F.v5797 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_name));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5797)))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5797)))).f_depth) == Y_DEFI(v1273))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_name), y_str(" is declared twice in this scope", 32));
}
}
F.v5797 = yr2258_NewSym(v873, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v5797)))).f_rep = F.p2624;
((*(yR125 *)y_deref(Y_DEFP(F.v5797)))).f_mval = Y_DEFI(F.v5799);
((*(yR125 *)y_deref(Y_DEFP(F.v5797)))).f_hasmv = 1;
yr2360_Define(Y_DEFP(F.v5797), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_line));
F.v5799 = y_range(y_add(Y_DEFI(F.v5799), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5795 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5795)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2629_SetRange(void * a_p2630, rt_int a_p2631, rt_int a_p2632) {
struct yf2633 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2630 = a_p2630;
F.p2631 = a_p2631;
F.p2632 = a_p2632;
yr1026_SB();
yr1050_SI(F.p2631);
((*(yR110 *)y_deref(F.p2630))).f_lo = yr1056_SE();
yr1026_SB();
yr1050_SI(F.p2632);
((*(yR110 *)y_deref(F.p2630))).f_hi = yr1056_SE();
((*(yR110 *)y_deref(F.p2630))).f_mlo = F.p2631;
((*(yR110 *)y_deref(F.p2630))).f_mhi = F.p2632;
((*(yR110 *)y_deref(F.p2630))).f_hasm = 1;
((*(yR110 *)y_deref(F.p2630))).f_dname = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2637_NewTid(rt_int a_p2638) {
struct yf2639 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2638 = a_p2638;
F.v5814 = Y_UNDEF_I;
F.v5814 = yr1195_NewSerial();
yr1026_SB();
if ((!(F.p2638 == INT64_C(0)))) {
yr1044_ST(F.p2638);
} else {
yr1037_SA(y_str("anonymous", 9));
}
yr1037_SA(y_str("#", 1));
yr1050_SI(Y_DEFI(F.v5814));
{ rt_int rv5818 = yr1056_SE();
y_use = F.yu; return rv5818; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2643_MakeRep(void * a_p2644, rt_int a_p2645, rt_int a_p2646) {
struct yf2647 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2644 = a_p2644;
F.p2645 = a_p2645;
F.p2646 = a_p2646;
F.v5824 = Y_UNDEF_P;
F.v5824 = yr2658_MakeRep1(F.p2644, F.p2645, F.p2646);
F.v5826 = Y_UNDEF_P;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2644))).f_x) == ((void *)0)))) {
F.v5824 = yr2758_ApplyStorage(Y_DEFP(F.v5824), Y_DEFP(((*(yR105 *)y_deref(F.p2644))).f_x));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2644))).f_text) == INT64_C(0)))) {
F.v5826 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2644))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2644))).f_line)));
if (((!yr2651_Conforms(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5826)))).f_rep), Y_DEFP(F.v5824))) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2644))).f_kind) == v672)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5824)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5826)))).f_rep)))).f_tid)))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2644))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5826)))).f_rep)))).f_tname), y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5829 = Y_DEFP(F.v5824);
y_use = F.yu; return rv5829; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2651_Conforms(void * a_p2652, void * a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2652 = a_p2652;
F.p2653 = a_p2653;
F.v5834 = Y_UNDEF_P;
F.v5836 = Y_UNDEF_P;
F.v5838 = Y_UNDEF_P;
F.v5840 = Y_UNDEF_P;
F.v5842 = Y_UNDEF_P;
F.v5844 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == Y_DEFI(((*(yR110 *)y_deref(F.p2653))).f_kind)))) {
{ rt_int rv5846 = 0;
y_use = F.yu; return rv5846; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v825)) {
F.v5834 = Y_DEFP(((*(yR110 *)y_deref(F.p2652))).f_fields);
F.v5836 = Y_DEFP(((*(yR110 *)y_deref(F.p2653))).f_fields);
while ((((!(Y_DEFP(F.v5834) == ((void *)0)))) && ((!(Y_DEFP(F.v5836) == ((void *)0)))))) {
Y_TICK();
if (((((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5834)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5836)))).f_name)))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5834)))).f_isconst) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5836)))).f_isconst))))) || ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5834)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5836)))).f_variant)))))) {
{ rt_int rv5848 = 0;
y_use = F.yu; return rv5848; }
}
if ((!yr2479_SameType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5834)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5836)))).f_rep)))) {
{ rt_int rv5850 = 0;
y_use = F.yu; return rv5850; }
}
F.v5834 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5834)))).f_next);
F.v5836 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5836)))).f_next);
}
{ rt_int rv5851 = (((Y_DEFP(F.v5834) == ((void *)0))) && ((Y_DEFP(F.v5836) == ((void *)0))));
y_use = F.yu; return rv5851; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v822)) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p2653))).f_nidx)))) {
{ rt_int rv5853 = 0;
y_use = F.yu; return rv5853; }
}
F.v5838 = Y_DEFP(((*(yR110 *)y_deref(F.p2652))).f_idx);
F.v5840 = Y_DEFP(((*(yR110 *)y_deref(F.p2653))).f_idx);
while ((!(Y_DEFP(F.v5838) == ((void *)0)))) {
Y_TICK();
if ((!yr2521_Identical(Y_DEFP(F.v5838), Y_DEFP(F.v5840)))) {
{ rt_int rv5855 = 0;
y_use = F.yu; return rv5855; }
}
F.v5838 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5838)))).f_link);
F.v5840 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5840)))).f_link);
}
{ rt_int rv5856 = yr2479_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2652))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2653))).f_elem));
y_use = F.yu; return rv5856; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v816)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v819)))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_nlits) == Y_DEFI(((*(yR110 *)y_deref(F.p2653))).f_nlits)))) {
{ rt_int rv5858 = 0;
y_use = F.yu; return rv5858; }
}
F.v5842 = Y_DEFP(((*(yR110 *)y_deref(F.p2652))).f_lits);
F.v5844 = Y_DEFP(((*(yR110 *)y_deref(F.p2653))).f_lits);
while ((((!(Y_DEFP(F.v5842) == ((void *)0)))) && ((!(Y_DEFP(F.v5844) == ((void *)0)))))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5842)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5844)))).f_name)))) || (!yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5842)))).f_text), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5844)))).f_text))))) {
{ rt_int rv5860 = 0;
y_use = F.yu; return rv5860; }
}
F.v5842 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5842)))).f_next);
F.v5844 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5844)))).f_next);
}
{ rt_int rv5862 = 1;
y_use = F.yu; return rv5862; }
}
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v834)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v831))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2652))).f_kind) == v828)))) {
if ((((Y_DEFP(((*(yR110 *)y_deref(F.p2652))).f_elem) == ((void *)0))) || ((Y_DEFP(((*(yR110 *)y_deref(F.p2653))).f_elem) == ((void *)0))))) {
{ rt_int rv5864 = 1;
y_use = F.yu; return rv5864; }
}
{ rt_int rv5865 = yr2479_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p2652))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2653))).f_elem));
y_use = F.yu; return rv5865; }
}
{ rt_int rv5867 = 1;
y_use = F.yu; return rv5867; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2658_MakeRep1(void * a_p2659, rt_int a_p2660, rt_int a_p2661) {
struct yf2662 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2659 = a_p2659;
F.p2660 = a_p2660;
F.p2661 = a_p2661;
F.v5873 = Y_UNDEF_P;
F.v5875 = Y_UNDEF_P;
F.v5877 = Y_UNDEF_P;
F.v5879 = Y_UNDEF_P;
F.v5881 = Y_UNDEF_P;
F.v5883 = Y_UNDEF_I;
F.v5883 = Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_kind);
F.v5885 = Y_UNDEF_P;
F.v5887 = Y_UNDEF_I;
F.v5889 = Y_UNDEF_I;
F.v5887 = INT64_C(0);
F.v5889 = F.p2660;
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_text) == INT64_C(0)))) {
F.v5881 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_text), y_str(" is not a type", 14));
}
F.v5887 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_rep)))).f_tid);
F.v5889 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_rep)))).f_tname);
}
if ((Y_DEFI(F.v5883) == v672)) {
F.v5881 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_kind) == v870))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_kind) == v867))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_name), y_str(" is not a representation", 24));
}
F.v5873 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v5881)))).f_rep);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a) == ((void *)0)))) {
F.v5873 = yr2406_CopyRep(Y_DEFP(F.v5873));
yr2616_Qualify(Y_DEFP(F.v5873), Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a));
}
{ void * rv5894 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5894; }
}
if ((Y_DEFI(F.v5887) == INT64_C(0))) {
F.v5887 = yr2637_NewTid(F.p2660);
if ((Y_DEFI(F.v5889) == INT64_C(0))) {
F.v5889 = Y_DEFI(F.v5887);
}
}
if ((Y_DEFI(F.v5883) == v675)) {
F.v5873 = yr2399_NewRep(v816, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_ordered = (Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_flag) == INT64_C(1));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nlits = yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a));
yr2629_SetRange(Y_DEFP(F.v5873), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2623_DefineLits(Y_DEFP(F.v5873));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_b) == ((void *)0)))) {
yr2616_Qualify(Y_DEFP(F.v5873), Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_b));
}
{ void * rv5901 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5901; }
}
if ((Y_DEFI(F.v5883) == v678)) {
F.v5873 = yr2399_NewRep(v819, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_lits = Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nlits = yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nlits) > INT64_C(256))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line), y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2629_SetRange(Y_DEFP(F.v5873), INT64_C(0), y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_b) == ((void *)0)))) {
yr2616_Qualify(Y_DEFP(F.v5873), Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_b));
}
{ void * rv5908 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5908; }
}
if ((Y_DEFI(F.v5883) == v681)) {
F.v5873 = yr2399_NewRep(v822, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
F.v5885 = Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a);
F.v5879 = ((void *)0);
while ((!(Y_DEFP(F.v5885) == ((void *)0)))) {
Y_TICK();
F.v5877 = yr2406_CopyRep(yr2643_MakeRep(Y_DEFP(F.v5885), INT64_C(0), 0));
if ((!yr2412_IsDiscrete(Y_DEFP(F.v5877)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5885)))).f_line), y_str("an index is an integer or scalar representation", 47));
}
yr2502_CheckRepresented(Y_DEFP(F.v5877), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5885)))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v5877)))).f_link = ((void *)0);
if ((Y_DEFP(F.v5879) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_idx = Y_DEFP(F.v5877);
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v5879)))).f_link = Y_DEFP(F.v5877);
}
F.v5879 = Y_DEFP(F.v5877);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nidx = y_range(y_add(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nidx), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5885 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5885)))).f_next);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_nidx) > INT64_C(8))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line), y_str("this implementation takes arrays of up to 8 dimensions", 54));
}
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_b), INT64_C(0), F.p2661);
if ((!F.p2661)) {
yr2502_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line));
yr2678_BuildArrayDesc(Y_DEFP(F.v5873));
} else {
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_abstract = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem)))).f_abstract);
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_abstract))) {
yr2678_BuildArrayDesc(Y_DEFP(F.v5873));
}
}
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_deep = 1;
{ void * rv5918 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5918; }
}
if ((Y_DEFI(F.v5883) == v684)) {
F.v5873 = yr2399_NewRep(v825, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
yr2708_MakeRecord(Y_DEFP(F.v5873), F.p2659, F.p2661);
{ void * rv5919 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5919; }
}
if (((((Y_DEFI(F.v5883) == v690)) || ((Y_DEFI(F.v5883) == v687))) || ((Y_DEFI(F.v5883) == v693)))) {
if ((Y_DEFI(F.v5883) == v690)) {
F.v5873 = yr2399_NewRep(v828, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a)))).f_kind) == v672)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a)))).f_a) == ((void *)0)))) && ((yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a)))).f_name)) == ((void *)0))))) {
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_forward = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a)))).f_name);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_fwdscope = Y_DEFI(v1273);
F.v5885 = yr1944_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v5885)))).f_rep = Y_DEFP(F.v5873);
((*(yR105 *)y_deref(Y_DEFP(F.v5885)))).f_next = Y_DEFP(v1364);
v1364 = Y_DEFP(F.v5885);
{ void * rv5920 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5920; }
}
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a), INT64_C(0), 0);
{ void * rv5923 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5923; }
}
if ((Y_DEFI(F.v5883) == v687)) {
F.v5873 = yr2399_NewRep(v831, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a), INT64_C(0), F.p2661);
{ void * rv5925 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5925; }
}
F.v5873 = yr2399_NewRep(v834, Y_DEFI(F.v5887));
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_tname = Y_DEFI(F.v5889);
((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p2659))).f_a), INT64_C(0), 0);
if ((!yr2412_IsDiscrete(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line), y_str("a set is of an integer or scalar representation", 47));
}
yr2502_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5873)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line));
{ void * rv5929 = Y_DEFP(F.v5873);
y_use = F.yu; return rv5929; }
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2659))).f_line), y_str("this representation is not translated", 37));
{ void * rv5931 = ((void *)0);
y_use = F.yu; return rv5931; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2666_ResolvePending(rt_int a_p2667, void * a_p2668) {
struct yf2669 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2667 = a_p2667;
F.p2668 = a_p2668;
F.v5936 = Y_UNDEF_P;
F.v5936 = Y_DEFP(v1364);
F.v5938 = Y_UNDEF_P;
F.v5938 = ((void *)0);
while ((!(Y_DEFP(F.v5936) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5936)))).f_rep)))).f_forward) == F.p2667)) {
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5936)))).f_rep)))).f_elem = F.p2668;
((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5936)))).f_rep)))).f_forward = INT64_C(0);
if ((Y_DEFP(F.v5938) == ((void *)0))) {
v1364 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5936)))).f_next);
} else {
((*(yR105 *)y_deref(Y_DEFP(F.v5938)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5936)))).f_next);
}
} else {
F.v5938 = Y_DEFP(F.v5936);
}
F.v5936 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5936)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2673_CheckPending(void) {
struct yf2674 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5942 = Y_UNDEF_P;
F.v5942 = Y_DEFP(v1364);
while ((!(Y_DEFP(F.v5942) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5942)))).f_rep)))).f_fwdscope) >= Y_DEFI(v1273))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5942)))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5942)))).f_rep)))).f_forward), y_str(" is named by a pointer but not declared", 39));
}
F.v5942 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5942)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2678_BuildArrayDesc(void * a_p2679) {
struct yf2680 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2679 = a_p2679;
F.v5947 = Y_UNDEF_P;
F.v5949 = Y_UNDEF_I;
F.v5951 = Y_UNDEF_I;
yr2473_NewDesc(F.p2679);
yr1026_SB();
yr1037_SA(y_str("{ rt_int lo[", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2679))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v5947 = Y_DEFP(((*(yR110 *)y_deref(F.p2679))).f_idx);
F.v5951 = 1;
while ((!(Y_DEFP(F.v5947) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v5951))) {
yr1037_SA(y_str(", ", 2));
}
F.v5951 = 0;
yr1044_ST(yr2542_LoText(Y_DEFP(F.v5947)));
F.v5947 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5947)))).f_link);
}
yr1037_SA(y_str("}, hi[", 6));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2679))).f_nidx));
yr1037_SA(y_str("] = {", 5));
F.v5947 = Y_DEFP(((*(yR110 *)y_deref(F.p2679))).f_idx);
F.v5951 = 1;
while ((!(Y_DEFP(F.v5947) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v5951))) {
yr1037_SA(y_str(", ", 2));
}
F.v5951 = 0;
yr1044_ST(yr2548_HiText(Y_DEFP(F.v5947)));
F.v5947 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v5947)))).f_link);
}
yr1037_SA(y_str("}; y_desc_array(", 16));
yr1044_ST(yr2467_DescOf(F.p2679));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2679))).f_nidx));
yr1037_SA(y_str(", lo, hi, ", 10));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2679))).f_elem)));
yr1037_SA(y_str("); }", 4));
F.v5949 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v5949));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2684_AddField(void * a_p2685, void * * a_p2686, rt_int a_p2687, void * a_p2688, rt_int a_p2689, rt_int a_p2690, void * a_p2691, rt_int a_p2692) {
struct yf2693 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2685 = a_p2685;
F.p2686 = a_p2686;
F.p2687 = a_p2687;
F.p2688 = a_p2688;
F.p2689 = a_p2689;
F.p2690 = a_p2690;
F.p2691 = a_p2691;
F.p2692 = a_p2692;
F.v5976 = Y_UNDEF_P;
F.v5976 = Y_DEFP(((*(yR110 *)y_deref(F.p2685))).f_fields);
while ((!(Y_DEFP(F.v5976) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v5976)))).f_name) == F.p2687)) {
yr1186_FailN(F.p2692, F.p2687, y_str(" is a component twice", 21));
}
F.v5976 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v5976)))).f_next);
}
({ F.v5976 = y_new(sizeof(yR115)); y_initu(&yd_116, y_deref(F.v5976)); });
(*(yR115 *)y_deref(Y_DEFP(F.v5976))) = ((yR115){ .f_name = F.p2687, .f_rep = F.p2688, .f_isconst = F.p2689, .f_variant = F.p2690, .f_labels = F.p2691, .f_next = ((void *)0), .f_at = INT64_C(-1) });
if ((Y_DEFP((*F.p2686)) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2685))).f_fields = Y_DEFP(F.v5976);
} else {
((*(yR115 *)y_deref(Y_DEFP((*F.p2686))))).f_next = Y_DEFP(F.v5976);
}
(*F.p2686) = Y_DEFP(F.v5976);
if (yr2436_Deep(F.p2688)) {
((*(yR110 *)y_deref(F.p2685))).f_deep = 1;
}
if (Y_DEFI(((*(yR110 *)y_deref(F.p2688))).f_abstract)) {
((*(yR110 *)y_deref(F.p2685))).f_abstract = 1;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2697_AddFields(void * a_p2698, void * * a_p2699, void * a_p2700, rt_int a_p2701, void * a_p2702, rt_int a_p2703) {
struct yf2704 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2698 = a_p2698;
F.p2699 = a_p2699;
F.p2700 = a_p2700;
F.p2701 = a_p2701;
F.p2702 = a_p2702;
F.p2703 = a_p2703;
F.v5989 = Y_UNDEF_P;
F.v5989 = F.p2700;
F.v5991 = Y_UNDEF_P;
F.v5991 = F.p2700;
F.v5993 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v5989) == ((void *)0)))) {
Y_TICK();
F.v5993 = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5989)))).f_b), INT64_C(0), F.p2703);
if ((!F.p2703)) {
yr2502_CheckRepresented(Y_DEFP(F.v5993), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5989)))).f_line));
}
F.v5991 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5989)))).f_a);
while ((!(Y_DEFP(F.v5991) == ((void *)0)))) {
Y_TICK();
yr2684_AddField(F.p2698, &(*F.p2699), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5991)))).f_name), Y_DEFP(F.v5993), (Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5989)))).f_ival) == v270), F.p2701, F.p2702, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v5991)))).f_line));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5991)))).f_a) == ((void *)0)))) {
((*(yR115 *)y_deref(Y_DEFP((*F.p2699))))).f_at = yr2765_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5991)))).f_a));
}
F.v5991 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5991)))).f_next);
}
F.v5989 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v5989)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2708_MakeRecord(void * a_p2709, void * a_p2710, rt_int a_p2711) {
struct yf2712 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2709 = a_p2709;
F.p2710 = a_p2710;
F.p2711 = a_p2711;
F.v6000 = Y_UNDEF_P;
F.v6000 = ((void *)0);
F.v6002 = Y_UNDEF_P;
F.v6004 = Y_UNDEF_P;
F.v6006 = Y_UNDEF_P;
F.v6008 = Y_UNDEF_I;
F.v6008 = INT64_C(0);
F.v6011 = Y_UNDEF_P;
F.v6013 = Y_UNDEF_I;
F.v6015 = Y_UNDEF_I;
F.v6015 = INT64_C(0);
yr2697_AddFields(F.p2709, &F.v6000, Y_DEFP(((*(yR105 *)y_deref(F.p2710))).f_a), INT64_C(0), ((void *)0), F.p2711);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2710))).f_b) == ((void *)0)))) {
F.v6002 = Y_DEFP(((*(yR105 *)y_deref(F.p2710))).f_b);
F.v6006 = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6002)))).f_b), INT64_C(0), 0);
if ((!yr2412_IsDiscrete(Y_DEFP(F.v6006)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6002)))).f_line), y_str("the case-selection component is integer or scalar", 49));
}
yr2684_AddField(F.p2709, &F.v6000, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6002)))).f_name), Y_DEFP(F.v6006), 1, INT64_C(0), ((void *)0), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6002)))).f_line));
((*(yR110 *)y_deref(F.p2709))).f_selector = Y_DEFP(F.v6000);
F.v6004 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6002)))).f_a);
while ((!(Y_DEFP(F.v6004) == ((void *)0)))) {
Y_TICK();
F.v6008 = y_range(y_add(Y_DEFI(F.v6008), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2697_AddFields(F.p2709, &F.v6000, Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6004)))).f_b), Y_DEFI(F.v6008), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6004)))).f_a), F.p2711);
F.v6004 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6004)))).f_next);
}
}
if ((F.p2711 && Y_DEFI(((*(yR110 *)y_deref(F.p2709))).f_abstract))) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2709))).f_abstract = 0;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p2710))).f_line);
F.v6008 = yr2743_RecordBits(F.p2709, 0, 1);
F.v6008 = INT64_C(0);
((*(yR110 *)y_deref(F.p2709))).f_cname = yr1200_Fresh(y_str("yR", 2));
yr1026_SB();
yr1037_SA(y_str("typedef struct ", 15));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2709))).f_cname));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2709))).f_cname));
yr1037_SA(y_str(";", 1));
F.v6013 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v6013));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2709))).f_cname));
yr1037_SA(y_str(" {", 2));
F.v6011 = Y_DEFP(((*(yR110 *)y_deref(F.p2709))).f_fields);
while ((!(Y_DEFP(F.v6011) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_rep)));
yr1037_SA(y_str(" f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_name));
yr1037_SA(y_str(";", 1));
F.v6015 = y_range(y_add(Y_DEFI(F.v6015), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6011 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_next);
}
if ((Y_DEFI(F.v6015) == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
}
yr1037_SA(y_str(" };", 3));
F.v6013 = yr1056_SE();
yr1110_Put(&v980, Y_DEFI(F.v6013));
yr2473_NewDesc(F.p2709);
yr1026_SB();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
F.v6011 = Y_DEFP(((*(yR110 *)y_deref(F.p2709))).f_fields);
while ((!(Y_DEFP(F.v6011) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2709))).f_cname));
yr1037_SA(y_str(", f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_name));
yr1037_SA(y_str("), ", 3));
F.v6011 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_next);
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1050_SI(y_range(y_add(Y_DEFI(F.v6015), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" * sizeof *f);", 14));
F.v6008 = INT64_C(0);
F.v6011 = Y_DEFP(((*(yR110 *)y_deref(F.p2709))).f_fields);
while ((!(Y_DEFP(F.v6011) == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
yr1050_SI(Y_DEFI(F.v6008));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_rep)));
yr1037_SA(y_str(";", 1));
F.v6008 = y_range(y_add(Y_DEFI(F.v6008), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6011 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6011)))).f_next);
}
yr1037_SA(y_str(" y_desc_record(", 15));
yr1044_ST(yr2467_DescOf(F.p2709));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2709))).f_cname));
yr1037_SA(y_str("), ", 3));
yr1050_SI(Y_DEFI(F.v6015));
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v6013 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v6013));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2716_FindField(void * a_p2717, rt_int a_p2718) {
struct yf2719 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2717 = a_p2717;
F.p2718 = a_p2718;
F.v6065 = Y_UNDEF_P;
F.v6065 = Y_DEFP(((*(yR110 *)y_deref(F.p2717))).f_fields);
while ((!(Y_DEFP(F.v6065) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6065)))).f_name) == F.p2718)) {
{ void * rv6066 = Y_DEFP(F.v6065);
y_use = F.yu; return rv6066; }
}
F.v6065 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6065)))).f_next);
}
{ void * rv6067 = ((void *)0);
y_use = F.yu; return rv6067; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2723_BitsFor(rt_int a_p2724) {
struct yf2725 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2724 = a_p2724;
F.v6071 = Y_UNDEF_I;
F.v6071 = INT64_C(1);
F.v6074 = Y_UNDEF_I;
F.v6074 = INT64_C(2);
while ((((Y_DEFI(F.v6074) <= F.p2724)) && ((Y_DEFI(F.v6071) < INT64_C(63))))) {
Y_TICK();
F.v6071 = y_range(y_add(Y_DEFI(F.v6071), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6074 = y_range(y_mul(Y_DEFI(F.v6074), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv6081 = Y_DEFI(F.v6071);
y_use = F.yu; return rv6081; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2729_RoundUp(rt_int a_p2730, rt_int a_p2731) {
struct yf2732 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2730 = a_p2730;
F.p2731 = a_p2731;
if ((F.p2731 <= INT64_C(1))) {
{ rt_int rv6086 = F.p2730;
y_use = F.yu; return rv6086; }
}
{ rt_int rv6092 = y_range(y_mul((y_div((y_sub((y_add(F.p2730, F.p2731)), INT64_C(1))), F.p2731)), F.p2731), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6092; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2736_Bits(void * a_p2737, rt_int a_p2738) {
struct yf2739 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2737 = a_p2737;
F.p2738 = a_p2738;
F.v6097 = Y_UNDEF_I;
F.v6097 = Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_kind);
F.v6099 = Y_UNDEF_I;
F.v6099 = (F.p2738 || Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_packed));
F.v6101 = Y_UNDEF_I;
F.v6103 = Y_UNDEF_I;
F.v6105 = Y_UNDEF_I;
F.v6107 = Y_UNDEF_I;
F.v6109 = Y_UNDEF_P;
if (((!Y_DEFI(F.v6099)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_bits) == INT64_C(0)))))) {
{ rt_int rv6111 = Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_bits);
y_use = F.yu; return rv6111; }
}
F.v6101 = INT64_C(64);
if (yr2412_IsDiscrete(F.p2737)) {
if (Y_DEFI(F.v6099)) {
if (((((Y_DEFI(F.v6097) == v816)) || ((Y_DEFI(F.v6097) == v819))) || ((Y_DEFI(F.v6097) == v813)))) {
F.v6101 = yr2723_BitsFor(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
} else if (Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_hasm)) {
F.v6105 = Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_mlo);
F.v6107 = Y_DEFI(((*(yR110 *)y_deref(F.p2737))).f_mhi);
if ((Y_DEFI(F.v6105) >= INT64_C(0))) {
F.v6101 = yr2723_BitsFor(Y_DEFI(F.v6107));
} else if (((y_sub(INT64_C(-1), Y_DEFI(F.v6105))) > Y_DEFI(F.v6107))) {
F.v6101 = y_range(y_add(INT64_C(1), yr2723_BitsFor(y_range(y_sub(INT64_C(-1), Y_DEFI(F.v6105)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6101 = y_range(y_add(INT64_C(1), yr2723_BitsFor(Y_DEFI(F.v6107))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
} else if ((Y_DEFI(F.v6097) == v807)) {
F.v6101 = INT64_C(128);
} else if ((((Y_DEFI(F.v6097) == v828)) || ((Y_DEFI(F.v6097) == v849)))) {
if (Y_DEFI(F.v6099)) {
F.v6101 = INT64_C(24);
}
} else if ((Y_DEFI(F.v6097) == v834)) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_elem)))).f_hasm)) {
F.v6103 = y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_elem)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_elem)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6103) > (y_div(v906, INT64_C(2))))) {
F.v6101 = INT64_C(-1);
} else if (Y_DEFI(F.v6099)) {
F.v6101 = Y_DEFI(F.v6103);
} else {
F.v6101 = yr2729_RoundUp(Y_DEFI(F.v6103), INT64_C(64));
}
} else {
F.v6101 = INT64_C(-1);
}
} else if ((Y_DEFI(F.v6097) == v822)) {
F.v6103 = INT64_C(1);
F.v6109 = Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_idx);
while ((!(Y_DEFP(F.v6109) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6109)))).f_hasm))) {
{ rt_int rv6136 = INT64_C(-1);
y_use = F.yu; return rv6136; }
}
F.v6103 = y_range(y_mul(Y_DEFI(F.v6103), (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6109)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6109)))).f_mlo))), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6103) > INT64_C(100000000000))) {
{ rt_int rv6143 = INT64_C(-1);
y_use = F.yu; return rv6143; }
}
F.v6109 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6109)))).f_link);
}
F.v6101 = yr2736_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_elem), Y_DEFI(F.v6099));
if ((Y_DEFI(F.v6101) < INT64_C(0))) {
{ rt_int rv6146 = INT64_C(-1);
y_use = F.yu; return rv6146; }
}
if (((!Y_DEFI(F.v6099)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_elem)))).f_packed)))) {
F.v6101 = yr2729_RoundUp(Y_DEFI(F.v6101), INT64_C(64));
}
F.v6101 = yr2729_RoundUp(Y_DEFI(F.v6101), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2737))).f_elem)))).f_align));
F.v6101 = y_range(y_mul(Y_DEFI(F.v6101), Y_DEFI(F.v6103)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6097) == v825)) {
F.v6101 = yr2743_RecordBits(F.p2737, Y_DEFI(F.v6099), 0);
} else if (((((Y_DEFI(F.v6097) == v843)) || ((Y_DEFI(F.v6097) == v846))) || ((Y_DEFI(F.v6097) == v855)))) {
F.v6101 = INT64_C(-1);
}
if ((((Y_DEFI(F.v6101) > INT64_C(0))) && (!Y_DEFI(F.v6099)))) {
F.v6101 = yr2729_RoundUp(Y_DEFI(F.v6101), INT64_C(64));
}
if ((!Y_DEFI(F.v6099))) {
((*(yR110 *)y_deref(F.p2737))).f_bits = Y_DEFI(F.v6101);
}
{ rt_int rv6153 = Y_DEFI(F.v6101);
y_use = F.yu; return rv6153; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2743_RecordBits(void * a_p2744, rt_int a_p2745, rt_int a_p2746) {
struct yf2747 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2744 = a_p2744;
F.p2745 = a_p2745;
F.p2746 = a_p2746;
F.v6159 = Y_UNDEF_P;
F.v6161 = Y_UNDEF_I;
F.v6161 = INT64_C(0);
F.v6164 = Y_UNDEF_I;
F.v6164 = INT64_C(0);
F.v6167 = Y_UNDEF_I;
F.v6167 = INT64_C(0);
F.v6170 = Y_UNDEF_I;
F.v6170 = INT64_C(0);
F.v6173 = Y_UNDEF_I;
F.v6173 = INT64_C(0);
F.v6176 = Y_UNDEF_I;
F.v6176 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6186, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6186, &F.v6188);
y_initu(&F.yd_6186, &F.v6190);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6199, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_6199, &F.v6201);
F.v6159 = Y_DEFP(((*(yR110 *)y_deref(F.p2744))).f_fields);
while ((!(Y_DEFP(F.v6159) == ((void *)0)))) {
Y_TICK();
F.v6167 = yr2736_Bits(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_rep), F.p2745);
if ((Y_DEFI(F.v6167) < INT64_C(0))) {
{ rt_int rv6204 = INT64_C(-1);
y_use = F.yu; return rv6204; }
}
if (((!F.p2745) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_rep)))).f_packed)))) {
F.v6167 = yr2729_RoundUp(Y_DEFI(F.v6167), INT64_C(64));
}
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_variant) == INT64_C(0)))) {
if ((Y_DEFI(F.v6173) == INT64_C(0))) {
F.v6173 = Y_DEFI(F.v6161);
}
if (yr2751_FirstOfVariant(F.p2744, Y_DEFP(F.v6159))) {
F.v6161 = Y_DEFI(F.v6173);
}
}
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_at) >= INT64_C(0))) {
F.v6170 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_at);
} else if ((F.p2745 || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_rep)))).f_packed))) {
F.v6170 = yr2729_RoundUp(Y_DEFI(F.v6161), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_rep)))).f_align));
} else {
F.v6170 = yr2729_RoundUp(Y_DEFI(F.v6161), INT64_C(64));
}
if ((F.p2746 && ((Y_DEFI(F.v6176) < INT64_C(512))))) {
F.v6176 = y_range(y_add(Y_DEFI(F.v6176), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6188).p)[y_ix1(F.v6188, Y_DEFI(F.v6176))] = Y_DEFI(F.v6170);
((rt_int *)(F.v6190).p)[y_ix1(F.v6190, Y_DEFI(F.v6176))] = y_range(y_add(Y_DEFI(F.v6170), Y_DEFI(F.v6167)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(F.v6201).p)[y_ix1(F.v6201, Y_DEFI(F.v6176))] = Y_DEFP(F.v6159);
}
F.v6161 = y_range(y_add(Y_DEFI(F.v6170), Y_DEFI(F.v6167)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((Y_DEFI(F.v6161) > Y_DEFI(F.v6164))) {
F.v6164 = Y_DEFI(F.v6161);
}
F.v6159 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6159)))).f_next);
}
if (F.p2746) {
F.lo6218 = INT64_C(1);
F.hi6219 = Y_DEFI(F.v6176);
{ rt_int hi6223 = F.hi6219;
for (rt_int i6222 = F.lo6218; i6222 <= hi6223; i6222++) { F.c_6221 = i6222; Y_TICK();
F.lo6227 = y_add(F.c_6221, INT64_C(1));
F.hi6228 = Y_DEFI(F.v6176);
{ rt_int hi6232 = F.hi6228;
for (rt_int i6231 = F.lo6227; i6231 <= hi6232; i6231++) { F.c_6230 = i6231; Y_TICK();
if ((((((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6221)])))).f_at) >= INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6230)])))).f_at) >= INT64_C(0))))) && ((Y_DEFI(((rt_int *)(F.v6188).p)[y_ix1(F.v6188, F.c_6221)]) < Y_DEFI(((rt_int *)(F.v6190).p)[y_ix1(F.v6190, F.c_6230)])))) && ((Y_DEFI(((rt_int *)(F.v6188).p)[y_ix1(F.v6188, F.c_6230)]) < Y_DEFI(((rt_int *)(F.v6190).p)[y_ix1(F.v6190, F.c_6221)])))) && (((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6221)])))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6230)])))).f_variant) == INT64_C(0)))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6221)])))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6230)])))).f_variant))))))) {
yr1157_Fail(Y_DEFI(v1000), yr3388_Join(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6230)])))).f_name), yr3388_Join(yr1061_T(y_str(" overlaps ", 10)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((void * *)(F.v6201).p)[y_ix1(F.v6201, F.c_6221)])))).f_name), INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
}
if (i6231 == hi6232) break;
}}
if (i6222 == hi6223) break;
}}
}
{ rt_int rv6240 = Y_DEFI(F.v6164);
y_use = F.yu; return rv6240; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2751_FirstOfVariant(void * a_p2752, void * a_p2753) {
struct yf2754 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2752 = a_p2752;
F.p2753 = a_p2753;
F.v6245 = Y_UNDEF_P;
F.v6245 = Y_DEFP(((*(yR110 *)y_deref(F.p2752))).f_fields);
while ((!(Y_DEFP(F.v6245) == F.p2753))) {
Y_TICK();
if ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6245)))).f_variant) == Y_DEFI(((*(yR115 *)y_deref(F.p2753))).f_variant))) {
{ rt_int rv6247 = 0;
y_use = F.yu; return rv6247; }
}
F.v6245 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6245)))).f_next);
}
{ rt_int rv6249 = 1;
y_use = F.yu; return rv6249; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2758_ApplyStorage(void * a_p2759, void * a_p2760) {
struct yf2761 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2759 = a_p2759;
F.p2760 = a_p2760;
F.v6254 = Y_UNDEF_P;
F.v6254 = yr2406_CopyRep(F.p2759);
F.v6256 = Y_UNDEF_I;
F.v6258 = Y_UNDEF_I;
F.v6260 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2760))).f_flag) == INT64_C(1))) {
((*(yR110 *)y_deref(Y_DEFP(F.v6254)))).f_packed = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2760))).f_a) == ((void *)0)))) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2760))).f_a), &F.v6256, &F.v6258);
if (((!Y_DEFI(F.v6256)) || ((Y_DEFI(F.v6258) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2760))).f_line), y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6254)))).f_pbits = Y_DEFI(F.v6258);
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2760))).f_b) == ((void *)0)))) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2760))).f_b), &F.v6256, &F.v6258);
if ((((!Y_DEFI(F.v6256)) || ((Y_DEFI(F.v6258) < INT64_C(1)))) || ((Y_DEFI(F.v6258) > INT64_C(64))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2760))).f_line), y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
}
((*(yR110 *)y_deref(Y_DEFP(F.v6254)))).f_align = Y_DEFI(F.v6258);
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6254)))).f_pbits) > INT64_C(0))) {
F.v6260 = yr2736_Bits(Y_DEFP(F.v6254), 1);
if ((Y_DEFI(F.v6260) < INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2760))).f_line), y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
}
if ((Y_DEFI(F.v6260) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6254)))).f_pbits))) {
yr1026_SB();
yr1037_SA(y_str("this representation needs ", 26));
yr1050_SI(Y_DEFI(F.v6260));
yr1037_SA(y_str(" bits, more than PACKED ", 24));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6254)))).f_pbits));
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p2760))).f_line), yr1056_SE());
}
}
{ void * rv6275 = Y_DEFP(F.v6254);
y_use = F.yu; return rv6275; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2765_AtAddress(void * a_p2766) {
struct yf2767 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2766 = a_p2766;
F.v6279 = Y_UNDEF_I;
F.v6281 = Y_UNDEF_I;
yr2830_Manifest(F.p2766, &F.v6279, &F.v6281);
if (((!Y_DEFI(F.v6279)) || ((Y_DEFI(F.v6281) < INT64_C(0))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2766))).f_line), y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
}
{ rt_int rv6284 = Y_DEFI(F.v6281);
y_use = F.yu; return rv6284; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2771_StoreAt(rt_int a_p2772, rt_int a_p2773) {
struct yf2774 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2772 = a_p2772;
F.p2773 = a_p2773;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(F.p2772);
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
yr1050_SI(F.p2773);
yr1037_SA(y_str("), sizeof(", 10));
yr1044_ST(F.p2772);
yr1037_SA(y_str(")))", 3));
{ rt_int rv6292 = yr1056_SE();
y_use = F.yu; return rv6292; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2778_ExtentCode(rt_int a_p2779, void * a_p2780) {
struct yf2781 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2779 = a_p2779;
F.p2780 = a_p2780;
F.v6297 = Y_UNDEF_I;
F.v6299 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2780))).f_kind) == v855)) {
{ rt_int rv6302 = yr3388_Join(yr1061_T(y_str("(", 1)), F.p2779, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6302; }
}
F.v6297 = yr2736_Bits(F.p2780, 0);
if ((Y_DEFI(F.v6297) >= INT64_C(0))) {
{ rt_int rv6309 = yr3170_Num(y_range(y_div((y_add(Y_DEFI(F.v6297), INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6309; }
}
if (yr2424_IsArrayLike(F.p2780)) {
F.v6299 = yr2736_Bits(Y_DEFP(((*(yR110 *)y_deref(F.p2780))).f_elem), Y_DEFI(((*(yR110 *)y_deref(F.p2780))).f_packed));
if ((Y_DEFI(F.v6299) >= INT64_C(0))) {
if ((!Y_DEFI(((*(yR110 *)y_deref(F.p2780))).f_packed))) {
F.v6299 = yr2729_RoundUp(Y_DEFI(F.v6299), INT64_C(64));
}
yr1026_SB();
yr1037_SA(y_str("((y_count(", 10));
yr1044_ST(F.p2779);
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2780))).f_nidx));
yr1037_SA(y_str(") * INT64_C(", 12));
yr1050_SI(Y_DEFI(F.v6299));
yr1037_SA(y_str(") + 63) / 64)", 13));
{ rt_int rv6316 = yr1056_SE();
y_use = F.yu; return rv6316; }
}
}
{ rt_int rv6319 = yr3388_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2779, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6319; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2785_SpaceArg(void * a_p2786, rt_int a_p2787, void * a_p2788) {
struct yf2789 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2786 = a_p2786;
F.p2787 = a_p2787;
F.p2788 = a_p2788;
F.v6325 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2788))).f_kind) == v855)) {
{ rt_int rv6326 = F.p2787;
y_use = F.yu; return rv6326; }
}
if ((yr2939_IsVariable(F.p2786) || ((((Y_DEFI(((*(yR105 *)y_deref(F.p2786))).f_kind) == v777)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2788))).f_kind) == v846))))))) {
{ rt_int rv6330 = yr3388_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), yr3013_RawCode(F.p2786, F.p2787), yr3388_Join(yr1061_T(y_str("), ", 3)), yr2778_ExtentCode(F.p2787, F.p2788), yr1061_T(y_str(" })", 3))));
y_use = F.yu; return rv6330; }
}
F.v6325 = yr1200_Fresh(y_str("sp", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2461_CType(F.p2788));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2787);
yr1037_SA(y_str("; void *", 8));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str("); memcpy(", 10));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str("c, &", 4));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str(", sizeof ", 9));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str("); (yspace){ ", 13));
yr1044_ST(Y_DEFI(F.v6325));
yr1037_SA(y_str("c, ", 3));
yr1044_ST(yr2778_ExtentCode(Y_DEFI(F.v6325), F.p2788));
yr1037_SA(y_str(" }; })", 6));
{ rt_int rv6343 = yr1056_SE();
y_use = F.yu; return rv6343; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2793_PackedComponent(void * a_p2794) {
struct yf2795 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2794 = a_p2794;
F.v6347 = Y_UNDEF_P;
F.v6347 = F.p2794;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_kind) == v801)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_kind) == v801))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_a)))).f_rep) == ((void *)0)))) {
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_a)))).f_rep)))).f_packed)) {
{ rt_int rv6349 = 1;
y_use = F.yu; return rv6349; }
}
}
}
F.v6347 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6347)))).f_a);
}
{ rt_int rv6351 = 0;
y_use = F.yu; return rv6351; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2799_CharOrd(void * a_p2800, rt_int a_p2801) {
struct yf2802 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2800 = a_p2800;
F.p2801 = a_p2801;
F.v6356 = Y_UNDEF_P;
F.v6358 = Y_UNDEF_I;
F.v6360 = Y_UNDEF_I;
F.v6362 = Y_UNDEF_I;
F.v6364 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2800))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_tid))) {
if ((Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2801)]) == INT64_C(1))) {
{ rt_int rv6367 = Y_DEFI(((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2801, INT64_C(1)))]);
y_use = F.yu; return rv6367; }
}
F.v6358 = INT64_C(0);
F.v6362 = INT64_C(1);
F.lo6373 = INT64_C(1);
F.hi6374 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(v1501))]);
{ rt_int hi6378 = F.hi6374;
for (rt_int i6377 = F.lo6373; i6377 <= hi6378; i6377++) { F.c_6376 = i6377; Y_TICK();
if ((yr1103_TChar(Y_DEFI(v1501), y_range(F.c_6376, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6364 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(v1501))]), (y_sub(Y_DEFI(F.v6362), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_6376, Y_DEFI(F.v6362)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((Y_DEFI(F.v6364) == F.p2801)) {
if ((Y_DEFI(F.v6358) < INT64_C(32))) {
{ rt_int rv6385 = Y_DEFI(F.v6358);
y_use = F.yu; return rv6385; }
}
if ((Y_DEFI(F.v6358) == INT64_C(32))) {
{ rt_int rv6388 = INT64_C(32);
y_use = F.yu; return rv6388; }
}
if ((Y_DEFI(F.v6358) == INT64_C(33))) {
{ rt_int rv6391 = INT64_C(127);
y_use = F.yu; return rv6391; }
}
if ((Y_DEFI(F.v6358) == INT64_C(34))) {
{ rt_int rv6394 = INT64_C(39);
y_use = F.yu; return rv6394; }
}
{ rt_int rv6396 = INT64_C(34);
y_use = F.yu; return rv6396; }
}
F.v6358 = y_range(y_add(Y_DEFI(F.v6358), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6362 = y_range(y_add(F.c_6376, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i6377 == hi6378) break;
}}
{ rt_int rv6402 = INT64_C(-1);
y_use = F.yu; return rv6402; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2800))).f_kind) == v819))) {
{ rt_int rv6404 = INT64_C(-1);
y_use = F.yu; return rv6404; }
}
F.v6356 = Y_DEFP(((*(yR110 *)y_deref(F.p2800))).f_lits);
F.v6360 = INT64_C(0);
while ((!(Y_DEFP(F.v6356) == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6356)))).f_text), F.p2801)) {
{ rt_int rv6406 = Y_DEFI(F.v6360);
y_use = F.yu; return rv6406; }
}
F.v6360 = y_range(y_add(Y_DEFI(F.v6360), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6356 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6356)))).f_next);
}
{ rt_int rv6410 = INT64_C(-1);
y_use = F.yu; return rv6410; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2806_AlphabetFor(void * a_p2807, void * a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2807 = a_p2807;
F.p2808 = a_p2808;
F.v6415 = Y_UNDEF_P;
F.v6417 = Y_UNDEF_P;
F.v6419 = Y_UNDEF_P;
F.v6419 = ((void *)0);
F.v6421 = Y_UNDEF_I;
F.v6421 = INT64_C(0);
F.v6424 = Y_UNDEF_I;
F.v6424 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2807))).f_d) == ((void *)0)))) {
F.v6415 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2807))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_line)));
if ((((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_kind) == v870))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_rep)))).f_kind) == v819))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2807))).f_d)))).f_name), y_str(" is not an alphabet", 19));
}
{ void * rv6427 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_rep);
y_use = F.yu; return rv6427; }
}
F.v6424 = INT64_C(1);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_kind) == v771)) || ((yr2799_CharOrd(Y_DEFP(v1346), Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_text)) >= INT64_C(0))))) {
F.v6421 = INT64_C(1);
F.v6419 = Y_DEFP(v1346);
}
F.v6417 = Y_DEFP(v1504);
while ((!(Y_DEFP(F.v6417) == ((void *)0)))) {
Y_TICK();
F.v6415 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6417)))).f_name));
if ((!(Y_DEFP(F.v6415) == ((void *)0)))) {
F.v6415 = yr2393_Real(Y_DEFP(F.v6415));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_kind) == v870)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6415)))).f_rep)))).f_tid) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6417)))).f_rep)))).f_tid))))) {
F.v6424 = y_range(y_add(Y_DEFI(F.v6424), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_kind) == v768)) && ((yr2799_CharOrd(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6417)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_text)) >= INT64_C(0))))) {
F.v6421 = y_range(y_add(Y_DEFI(F.v6421), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6419 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6417)))).f_rep);
}
}
}
F.v6417 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6417)))).f_next);
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_kind) == v771)) && ((Y_DEFI(F.v6424) > INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_line), y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((Y_DEFI(F.v6421) > INT64_C(1))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_line), yr3388_Join(yr1061_T(y_str("'", 1)), Y_DEFI(((*(yR105 *)y_deref(F.p2807))).f_text), yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((Y_DEFP(F.v6419) == ((void *)0))) {
{ void * rv6442 = Y_DEFP(v1346);
y_use = F.yu; return rv6442; }
}
{ void * rv6443 = Y_DEFP(F.v6419);
y_use = F.yu; return rv6443; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2813_CharValue(void * a_p2814, rt_int a_p2815, rt_int a_p2816) {
struct yf2817 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2814 = a_p2814;
F.p2815 = a_p2815;
F.p2816 = a_p2816;
F.v6449 = Y_UNDEF_I;
F.v6449 = yr2799_CharOrd(F.p2814, F.p2815);
F.v6451 = Y_UNDEF_I;
if ((Y_DEFI(F.v6449) < INT64_C(0))) {
yr1026_SB();
yr1037_SA(y_str("'", 1));
yr1044_ST(F.p2815);
yr1037_SA(y_str("' is not a character of ", 24));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p2814))).f_tname));
F.v6451 = yr1056_SE();
yr1157_Fail(F.p2816, Y_DEFI(F.v6451));
}
{ rt_int rv6455 = Y_DEFI(F.v6449);
y_use = F.yu; return rv6455; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2821_StringCodes(void * a_p2822, rt_int a_p2823, rt_int * a_p2824, rt_int a_p2825) {
struct yf2826 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2822 = a_p2822;
F.p2823 = a_p2823;
F.p2824_o = a_p2824;
F.p2825 = a_p2825;
F.v6462 = Y_UNDEF_I;
F.v6464 = Y_UNDEF_I;
F.v6466 = Y_UNDEF_I;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_6475, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_6475, &F.v6477);
F.v6479 = Y_UNDEF_B;
F.v6481 = Y_UNDEF_I;
F.p2824 = INT64_C(0);
F.v6462 = INT64_C(1);
while ((Y_DEFI(F.v6462) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2823)]))) {
Y_TICK();
F.v6479 = yr1103_TChar(F.p2823, Y_DEFI(F.v6462));
if ((Y_DEFB(F.v6479) == 39)) {
F.v6464 = y_range(y_add(Y_DEFI(F.v6462), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v6464) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2823)]))) && ((!(yr1103_TChar(F.p2823, Y_DEFI(F.v6464)) == 39))))) {
Y_TICK();
F.v6464 = y_range(y_add(Y_DEFI(F.v6464), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v6464) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p2823)]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(F.p2825, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v6481 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2823)]), Y_DEFI(F.v6462)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v6464), Y_DEFI(F.v6462))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6466 = yr2813_CharValue(F.p2822, Y_DEFI(F.v6481), F.p2825);
F.v6462 = y_range(y_add(Y_DEFI(F.v6464), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6481 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, F.p2823)]), (y_sub(Y_DEFI(F.v6462), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v6466 = yr2813_CharValue(F.p2822, Y_DEFI(F.v6481), F.p2825);
F.v6462 = y_range(y_add(Y_DEFI(F.v6462), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.p2824) >= INT64_C(65536))) {
yr1178_FailS(F.p2825, y_str("this implementation takes string literals of up to 65536 characters", 67));
}
F.p2824 = y_range(y_add(Y_DEFI(F.p2824), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6477).p)[y_ix1(F.v6477, Y_DEFI(F.p2824))] = Y_DEFI(F.v6466);
}
yr1026_SB();
yr1031_SC(34);
F.lo6513 = INT64_C(1);
F.hi6514 = Y_DEFI(F.p2824);
{ rt_int hi6518 = F.hi6514;
for (rt_int i6517 = F.lo6513; i6517 <= hi6518; i6517++) { F.c_6516 = i6517; Y_TICK();
F.v6466 = Y_DEFI(((rt_int *)(F.v6477).p)[y_ix1(F.v6477, F.c_6516)]);
if ((((Y_DEFI(F.v6466) == INT64_C(34))) || ((Y_DEFI(F.v6466) == INT64_C(92))))) {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6466))]));
} else if (((((Y_DEFI(F.v6466) >= INT64_C(32))) && ((Y_DEFI(F.v6466) < INT64_C(127)))) && (((((!(Y_DEFI(F.v6466) == INT64_C(63)))) || ((F.c_6516 == INT64_C(1)))) || ((!(Y_DEFI(((rt_int *)(F.v6477).p)[y_ix1(F.v6477, y_sub(F.c_6516, INT64_C(1)))]) == INT64_C(63)))))))) {
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, Y_DEFI(F.v6466))]));
} else {
yr1031_SC(92);
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_div(Y_DEFI(F.v6466), INT64_C(64)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod((y_div(Y_DEFI(F.v6466), INT64_C(8))), INT64_C(8)))))]));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod(Y_DEFI(F.v6466), INT64_C(8)))))]));
}
if (i6517 == hi6518) break;
}}
yr1031_SC(34);
{ rt_int rv6545 = yr1056_SE();
(*F.p2824_o) = F.p2824;
y_use = F.yu; return rv6545; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2830_Manifest(void * a_p2831, rt_int * a_p2832, rt_int * a_p2833) {
struct yf2834 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2831 = a_p2831;
F.p2832_o = a_p2832;
F.p2833_o = a_p2833;
F.v6551 = Y_UNDEF_P;
F.v6553 = Y_UNDEF_I;
F.v6555 = Y_UNDEF_I;
F.v6557 = Y_UNDEF_I;
F.v6559 = Y_UNDEF_I;
F.v6561 = Y_UNDEF_I;
F.v6563 = Y_UNDEF_P;
F.p2832 = 0;
F.p2833 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v759)) {
F.p2832 = 1;
F.p2833 = Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_ival);
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v768)) {
F.v6563 = yr2806_AlphabetFor(F.p2831, ((void *)0));
F.p2833 = yr2799_CharOrd(Y_DEFP(F.v6563), Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_text));
F.p2832 = (Y_DEFI(F.p2833) >= INT64_C(0));
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_d) == ((void *)0)))) {
F.v6551 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_line)));
F.v6551 = yr2353_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_name), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6551)))).f_rep));
} else {
F.v6551 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_name));
}
if ((Y_DEFP(F.v6551) == ((void *)0))) {
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
F.v6551 = yr2393_Real(Y_DEFP(F.v6551));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6551)))).f_kind) == v873)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6551)))).f_kind) == v864)))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6551)))).f_hasmv))) {
F.p2832 = 1;
F.p2833 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6551)))).f_mval);
}
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v801)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_a), &F.p2832, &F.p2833);
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v795)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_a), &F.p2832, &F.p2833);
F.p2833 = y_range(y_neg(Y_DEFI(F.p2833)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v798)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_a), &F.v6557, &F.v6553);
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_b), &F.v6559, &F.v6555);
if ((!((Y_DEFI(F.v6557) && Y_DEFI(F.v6559))))) {
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
F.v6561 = Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_name);
F.p2832 = 1;
if ((Y_DEFI(F.v6561) == v573)) {
F.p2833 = y_range(y_add(Y_DEFI(F.v6553), Y_DEFI(F.v6555)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6561) == v576)) {
F.p2833 = y_range(y_sub(Y_DEFI(F.v6553), Y_DEFI(F.v6555)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6561) == v579)) {
F.p2833 = y_range(y_mul(Y_DEFI(F.v6553), Y_DEFI(F.v6555)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6561) == v276)) && ((!(Y_DEFI(F.v6555) == INT64_C(0)))))) {
F.p2833 = y_range(y_div(Y_DEFI(F.v6553), Y_DEFI(F.v6555)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(F.v6561) == v378)) && ((!(Y_DEFI(F.v6555) == INT64_C(0)))))) {
F.p2833 = y_range(y_mod(Y_DEFI(F.v6553), Y_DEFI(F.v6555)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6561) == v237)) {
F.p2833 = y_range(y_mul(Y_DEFI(F.v6553), Y_DEFI(F.v6555)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6561) == v399)) {
F.p2833 = y_range(y_sub((y_add(Y_DEFI(F.v6553), Y_DEFI(F.v6555))), (y_mul(Y_DEFI(F.v6553), Y_DEFI(F.v6555)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v6561) == v489)) {
F.p2833 = y_range(y_mod((y_add(Y_DEFI(F.v6553), Y_DEFI(F.v6555))), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2832 = 0;
}
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v792)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2831))).f_a), &F.p2832, &F.p2833);
F.p2833 = y_range(y_sub(INT64_C(1), Y_DEFI(F.p2833)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2831))).f_kind) == v780)) {
yr2838_ManifestStd(F.p2831, &F.p2832, &F.p2833);
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
}
(*F.p2832_o) = F.p2832;
(*F.p2833_o) = F.p2833;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2838_ManifestStd(void * a_p2839, rt_int * a_p2840, rt_int * a_p2841) {
struct yf2842 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2839 = a_p2839;
F.p2840_o = a_p2840;
F.p2841_o = a_p2841;
F.v6593 = Y_UNDEF_P;
F.v6595 = Y_UNDEF_I;
F.v6597 = Y_UNDEF_I;
F.v6599 = Y_UNDEF_I;
F.v6601 = Y_UNDEF_I;
F.v6603 = Y_UNDEF_I;
F.v6605 = Y_UNDEF_P;
F.v6607 = Y_UNDEF_P;
F.p2840 = 0;
F.p2841 = INT64_C(0);
F.v6593 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2839))).f_name));
if ((Y_DEFP(F.v6593) == ((void *)0))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
F.v6593 = yr2393_Real(Y_DEFP(F.v6593));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6593)))).f_kind) == v891))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
F.v6595 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6593)))).f_mval);
if ((((((Y_DEFI(F.v6595) == v1372)) || ((Y_DEFI(F.v6595) == v1375))) || ((Y_DEFI(F.v6595) == v1378))) || ((Y_DEFI(F.v6595) == v1381)))) {
if ((!(yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2839))).f_a)) == INT64_C(1)))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2839))).f_a), ((void *)0), &F.v6603, &F.v6605);
if ((!yr2412_IsDiscrete(Y_DEFP(F.v6605)))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6595) == v1378)) || ((Y_DEFI(F.v6595) == v1381)))) {
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_elem) == ((void *)0)))) {
F.v6605 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_elem);
}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_hasm))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
F.p2840 = 1;
if ((Y_DEFI(F.v6595) == v1378)) {
F.p2841 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_mlo);
} else {
F.p2841 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_mhi);
}
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p2839))).f_a), &F.v6599, &F.p2841);
if ((!Y_DEFI(F.v6599))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v6595) == v1372)) {
F.p2841 = y_range(y_add(Y_DEFI(F.p2841), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2841 = y_range(y_sub(Y_DEFI(F.p2841), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_elem) == ((void *)0)))) {
F.v6605 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_elem);
}
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_kind) == v804))) && ((((Y_DEFI(F.p2841) < INT64_C(0))) || ((Y_DEFI(F.p2841) >= Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_nlits))))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2839))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2839))).f_name), y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2840 = 1;
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v6595) == v1366)) || ((Y_DEFI(F.v6595) == v1369)))) {
if ((!(yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p2839))).f_a)) == INT64_C(2)))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2839))).f_a)))).f_next), &F.v6601, &F.v6597);
if ((!Y_DEFI(F.v6601))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2839))).f_a), ((void *)0), &F.v6603, &F.v6605);
if (((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_kind) == v822))) || ((Y_DEFI(F.v6597) < INT64_C(1)))) || ((Y_DEFI(F.v6597) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_nidx))))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
F.v6607 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6605)))).f_idx);
F.lo6624 = INT64_C(2);
F.hi6625 = Y_DEFI(F.v6597);
{ rt_int hi6629 = F.hi6625;
for (rt_int i6628 = F.lo6624; i6628 <= hi6629; i6628++) { F.c_6627 = i6628; Y_TICK();
F.v6607 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6607)))).f_link);
if (i6628 == hi6629) break;
}}
if ((!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6607)))).f_hasm))) {
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
F.p2840 = 1;
if ((Y_DEFI(F.v6595) == v1366)) {
F.p2841 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6607)))).f_mlo);
} else {
F.p2841 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6607)))).f_mhi);
}
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
}
(*F.p2840_o) = F.p2840;
(*F.p2841_o) = F.p2841;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2846_NeedsConv(void * a_p2847, void * a_p2848) {
struct yf2849 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2847 = a_p2847;
F.p2848 = a_p2848;
if ((F.p2847 == F.p2848)) {
{ rt_int rv6635 = 0;
y_use = F.yu; return rv6635; }
}
if (yr2412_IsDiscrete(F.p2847)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_lo) == INT64_C(0))) {
{ rt_int rv6638 = 0;
y_use = F.yu; return rv6638; }
}
{ rt_int rv6639 = (!((((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_hasm) && Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_hasm)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_mlo) <= Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_mlo)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_mhi) <= Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_mhi))))));
y_use = F.yu; return rv6639; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_kind) == v810)) {
{ rt_int rv6641 = (!(Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_lo) == INT64_C(0)));
y_use = F.yu; return rv6641; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_kind) == v807)) {
{ rt_int rv6643 = ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_lo) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_fsn) == Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_fsn))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_fsd) == Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_fsd)))));
y_use = F.yu; return rv6643; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_kind) == v825)) {
{ rt_int rv6644 = (((Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_kind) == v825)) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_cname) == Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_cname)))));
y_use = F.yu; return rv6644; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2847))).f_kind) == v843)))) {
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_kind) == v822))) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2848))).f_kind) == v843))))) {
{ rt_int rv6646 = 0;
y_use = F.yu; return rv6646; }
}
{ rt_int rv6647 = yr2846_NeedsConv(Y_DEFP(((*(yR110 *)y_deref(F.p2847))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2848))).f_elem));
y_use = F.yu; return rv6647; }
}
{ rt_int rv6649 = 0;
y_use = F.yu; return rv6649; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2853_ConvertRecord(rt_int a_p2854, void * a_p2855, void * a_p2856) {
struct yf2857 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2854 = a_p2854;
F.p2855 = a_p2855;
F.p2856 = a_p2856;
F.v6655 = Y_UNDEF_I;
F.v6657 = Y_UNDEF_I;
F.v6659 = Y_UNDEF_P;
F.v6661 = Y_UNDEF_P;
F.v6655 = yr1200_Fresh(y_str("cs", 2));
F.v6657 = yr1200_Fresh(y_str("cd", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2461_CType(F.p2856));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6655));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2854);
yr1037_SA(y_str("; ", 2));
yr1044_ST(yr2461_CType(F.p2855));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6657));
yr1037_SA(y_str("; memset(&", 10));
yr1044_ST(Y_DEFI(F.v6657));
yr1037_SA(y_str(", 0, sizeof ", 12));
yr1044_ST(Y_DEFI(F.v6657));
yr1037_SA(y_str(");", 2));
F.v6659 = Y_DEFP(((*(yR110 *)y_deref(F.p2855))).f_fields);
while ((!(Y_DEFP(F.v6659) == ((void *)0)))) {
Y_TICK();
F.v6661 = yr2716_FindField(F.p2856, Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6659)))).f_name));
if ((!(Y_DEFP(F.v6661) == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6661)))).f_variant) == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
yr1044_ST(yr3020_VariantTest(F.p2856, Y_DEFP(F.v6661), yr3388_Join(yr1061_T(y_str("(&", 2)), Y_DEFI(F.v6655), yr1061_T(y_str(")", 1)))));
yr1037_SA(y_str(") ", 2));
}
yr1044_ST(Y_DEFI(F.v6657));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6659)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2911_Convert(yr3388_Join(Y_DEFI(F.v6655), yr1061_T(y_str(".f_", 3)), Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6659)))).f_name)), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6659)))).f_rep), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6661)))).f_rep)));
yr1037_SA(y_str(";", 1));
}
F.v6659 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6659)))).f_next);
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6657));
yr1037_SA(y_str("; })", 4));
{ rt_int rv6684 = yr1056_SE();
y_use = F.yu; return rv6684; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2861_ConvertArray(rt_int a_p2862, void * a_p2863, void * a_p2864) {
struct yf2865 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2862 = a_p2862;
F.p2863 = a_p2863;
F.p2864 = a_p2864;
F.v6690 = Y_UNDEF_I;
F.v6692 = Y_UNDEF_I;
F.v6694 = Y_UNDEF_I;
F.v6696 = Y_UNDEF_I;
F.v6698 = Y_UNDEF_I;
F.v6700 = Y_UNDEF_I;
F.v6690 = yr1200_Fresh(y_str("cs", 2));
F.v6692 = yr1200_Fresh(y_str("cd", 2));
F.v6694 = yr1200_Fresh(y_str("ck", 2));
F.v6696 = yr1200_Fresh(y_str("cn", 2));
F.v6698 = yr2461_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2863))).f_elem));
F.v6700 = yr2461_CType(Y_DEFP(((*(yR110 *)y_deref(F.p2864))).f_elem));
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v6690));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2862);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v6692));
yr1037_SA(y_str("; rt_int ", 9));
yr1044_ST(Y_DEFI(F.v6696));
yr1037_SA(y_str(" = y_count(", 11));
yr1044_ST(Y_DEFI(F.v6690));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2864))).f_nidx));
yr1037_SA(y_str(");", 2));
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2863))).f_kind) == v822)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2467_DescOf(F.p2863));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v6692));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v6692));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2863))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1044_ST(Y_DEFI(F.v6696));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("array lengths differ", 20));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
} else {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6692));
yr1037_SA(y_str(" = y_like(", 10));
yr1044_ST(Y_DEFI(F.v6690));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2864))).f_nidx));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p2863))).f_elem)));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" for (rt_int ", 13));
yr1044_ST(Y_DEFI(F.v6694));
yr1037_SA(y_str(" = 0; ", 6));
yr1044_ST(Y_DEFI(F.v6694));
yr1037_SA(y_str(" < ", 3));
yr1044_ST(Y_DEFI(F.v6696));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v6694));
yr1037_SA(y_str("++) ((", 6));
yr1044_ST(Y_DEFI(F.v6698));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v6692));
yr1037_SA(y_str(".p)[", 4));
yr1044_ST(Y_DEFI(F.v6694));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2911_Convert(yr3388_Join(yr1061_T(y_str("((", 2)), Y_DEFI(F.v6700), yr3388_Join(yr1061_T(y_str(" *)", 3)), Y_DEFI(F.v6690), yr3388_Join(yr1061_T(y_str(".p)[", 4)), Y_DEFI(F.v6694), yr1061_T(y_str("]", 1))))), Y_DEFP(((*(yR110 *)y_deref(F.p2863))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p2864))).f_elem)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v6692));
yr1037_SA(y_str("; })", 4));
{ rt_int rv6741 = yr1056_SE();
y_use = F.yu; return rv6741; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2869_RescaleCode(rt_int a_p2870, void * a_p2871, void * a_p2872) {
struct yf2873 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2870 = a_p2870;
F.p2871 = a_p2871;
F.p2872 = a_p2872;
F.v6747 = Y_UNDEF_I;
F.v6749 = Y_UNDEF_I;
F.v6751 = Y_UNDEF_I;
yr2591_ScaleRatio(F.p2871, F.p2872, &F.v6747, &F.v6749, &F.v6751);
if (Y_DEFI(F.v6751)) {
{ rt_int rv6752 = F.p2870;
y_use = F.yu; return rv6752; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_conv(", 11));
yr1044_ST(F.p2870);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v6747));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v6749));
yr1037_SA(y_str(")", 1));
{ rt_int rv6757 = yr1056_SE();
y_use = F.yu; return rv6757; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2877_CommonScale(rt_int * a_p2878, void * a_p2879, rt_int * a_p2880, void * a_p2881, void * a_p2882, rt_int a_p2883) {
struct yf2884 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2878 = a_p2878;
F.p2879 = a_p2879;
F.p2880 = a_p2880;
F.p2881 = a_p2881;
F.p2882 = a_p2882;
F.p2883 = a_p2883;
F.v6766 = Y_UNDEF_I;
F.v6768 = Y_UNDEF_I;
F.v6766 = yr2568_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2879))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(F.p2881))).f_fsn));
F.v6768 = yr2575_MulChk(y_range(y_div(Y_DEFI(((*(yR110 *)y_deref(F.p2879))).f_fsd), yr2568_Gcd(Y_DEFI(((*(yR110 *)y_deref(F.p2879))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(F.p2881))).f_fsd))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR110 *)y_deref(F.p2881))).f_fsd), F.p2883);
yr2608_SetScale(F.p2882, Y_DEFI(F.v6766), Y_DEFI(F.v6768));
(*F.p2878) = yr2869_RescaleCode(Y_DEFI((*F.p2878)), F.p2879, F.p2882);
(*F.p2880) = yr2869_RescaleCode(Y_DEFI((*F.p2880)), F.p2881, F.p2882);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2888_FixLiteral(void * a_p2889, rt_int * a_p2890, void * * a_p2891) {
struct yf2892 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2889 = a_p2889;
F.p2890_o = a_p2890;
F.p2891_o = a_p2891;
F.v6775 = Y_UNDEF_I;
F.v6775 = Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_ival);
F.v6777 = Y_UNDEF_I;
F.v6777 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v6775))]);
F.p2891 = yr2406_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.p2891)))).f_abstract = 0;
if ((Y_DEFI(F.v6777) >= INT64_C(0))) {
yr2608_SetScale(Y_DEFP(F.p2891), yr2583_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v6775))]), Y_DEFI(F.v6777), Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_line)), INT64_C(1));
} else {
yr2608_SetScale(Y_DEFP(F.p2891), INT64_C(1), yr2583_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v6775))]), y_range(y_neg(Y_DEFI(F.v6777)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2889))).f_line)));
}
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v6775))]));
yr1037_SA(y_str("))", 2));
F.p2890 = yr1056_SE();
(*F.p2890_o) = F.p2890;
(*F.p2891_o) = F.p2891;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2896_ManifestFix(void * a_p2897, rt_int * a_p2898, rt_int * a_p2899, rt_int * a_p2900) {
struct yf2901 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2897 = a_p2897;
F.p2898_o = a_p2898;
F.p2899_o = a_p2899;
F.p2900_o = a_p2900;
F.v6791 = Y_UNDEF_I;
F.v6793 = Y_UNDEF_I;
F.v6795 = Y_UNDEF_I;
F.v6797 = Y_UNDEF_I;
F.v6799 = Y_UNDEF_I;
F.v6801 = Y_UNDEF_I;
F.p2898 = 0;
F.p2899 = INT64_C(0);
F.p2900 = INT64_C(1);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v762)) {
F.v6791 = Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_ival);
F.v6793 = Y_DEFI(((rt_int *)(v1244).p)[y_ix1(v1244, Y_DEFI(F.v6791))]);
F.p2899 = Y_DEFI(((rt_int *)(v1240).p)[y_ix1(v1240, Y_DEFI(F.v6791))]);
if ((Y_DEFI(F.v6793) >= INT64_C(0))) {
F.p2899 = yr2575_MulChk(Y_DEFI(F.p2899), yr2583_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v6791))]), Y_DEFI(F.v6793), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line)), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line));
} else {
F.p2900 = yr2583_PowChk(Y_DEFI(((rt_int *)(v1242).p)[y_ix1(v1242, Y_DEFI(F.v6791))]), y_range(y_neg(Y_DEFI(F.v6793)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line));
}
F.p2898 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v759)) {
F.p2899 = Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_ival);
F.p2898 = 1;
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v801)) {
yr2896_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_a), &F.p2898, &F.p2899, &F.p2900);
} else if ((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v795)) {
yr2896_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_a), &F.p2898, &F.p2899, &F.p2900);
F.p2899 = y_range(y_neg(Y_DEFI(F.p2899)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_kind) == v798)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_name) == v579)))) {
yr2896_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_a), &F.p2898, &F.p2899, &F.p2900);
yr2896_ManifestFix(Y_DEFP(((*(yR105 *)y_deref(F.p2897))).f_b), &F.v6801, &F.v6797, &F.v6799);
F.p2898 = (Y_DEFI(F.p2898) && Y_DEFI(F.v6801));
F.p2899 = yr2575_MulChk(Y_DEFI(F.p2899), Y_DEFI(F.v6797), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line));
F.p2900 = yr2575_MulChk(Y_DEFI(F.p2900), Y_DEFI(F.v6799), Y_DEFI(((*(yR105 *)y_deref(F.p2897))).f_line));
}
F.v6795 = yr2568_Gcd(Y_DEFI(F.p2899), Y_DEFI(F.p2900));
F.p2899 = y_range(y_div(Y_DEFI(F.p2899), Y_DEFI(F.v6795)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2900 = y_range(y_div(Y_DEFI(F.p2900), Y_DEFI(F.v6795)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2898_o) = F.p2898;
(*F.p2899_o) = F.p2899;
(*F.p2900_o) = F.p2900;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2905_FloatChk(rt_int a_p2906) {
struct yf2907 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2906 = a_p2906;
{ rt_int rv6816 = yr3388_Join(yr1061_T(y_str("y_fchk(", 7)), F.p2906, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv6816; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2911_Convert(rt_int a_p2912, void * a_p2913, void * a_p2914) {
struct yf2915 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2912 = a_p2912;
F.p2913 = a_p2913;
F.p2914 = a_p2914;
F.v6822 = Y_UNDEF_I;
F.v6824 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR110 *)y_deref(F.p2914))).f_kind) == v846)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v822))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_nidx) == INT64_C(1))))) {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2913))).f_idx)))).f_hasm) && ((!(Y_DEFI(((*(yR110 *)y_deref(F.p2914))).f_nlits) == (y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2913))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2913))).f_idx)))).f_mlo))), INT64_C(1)))))))) {
yr1026_SB();
yr1037_SA(y_str("a string of ", 12));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p2914))).f_nlits));
yr1037_SA(y_str(" characters for an array of ", 28));
yr1050_SI(y_range(y_add((y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2913))).f_idx)))).f_mhi), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p2913))).f_idx)))).f_mlo))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" (VI.B.1)", 9));
F.v6822 = yr1056_SE();
yr1157_Fail(Y_DEFI(v1000), Y_DEFI(F.v6822));
}
}
if ((!yr2846_NeedsConv(F.p2913, F.p2914))) {
{ rt_int rv6835 = F.p2912;
y_use = F.yu; return rv6835; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v825)) {
{ rt_int rv6836 = yr2853_ConvertRecord(F.p2912, F.p2913, F.p2914);
y_use = F.yu; return rv6836; }
}
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v843)))) {
{ rt_int rv6837 = yr2861_ConvertArray(F.p2912, F.p2913, F.p2914);
y_use = F.yu; return rv6837; }
}
if (yr3205_Suppressed(v1480)) {
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v807)) {
{ rt_int rv6838 = yr2869_RescaleCode(F.p2912, F.p2914, F.p2913);
y_use = F.yu; return rv6838; }
}
{ rt_int rv6839 = F.p2912;
y_use = F.yu; return rv6839; }
}
if (yr2412_IsDiscrete(F.p2913)) {
yr1026_SB();
yr1037_SA(y_str("y_range(", 8));
yr1044_ST(F.p2912);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2542_LoText(F.p2913));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2548_HiText(F.p2913));
yr1037_SA(y_str(")", 1));
{ rt_int rv6844 = yr1056_SE();
y_use = F.yu; return rv6844; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_frange(", 9));
yr1044_ST(F.p2912);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2542_LoText(F.p2913));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2548_HiText(F.p2913));
yr1037_SA(y_str(")", 1));
{ rt_int rv6849 = yr1056_SE();
y_use = F.yu; return rv6849; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_kind) == v807)) {
F.v6822 = yr2869_RescaleCode(F.p2912, F.p2914, F.p2913);
if ((Y_DEFI(((*(yR110 *)y_deref(F.p2913))).f_lo) == INT64_C(0))) {
{ rt_int rv6851 = Y_DEFI(F.v6822);
y_use = F.yu; return rv6851; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_range(", 12));
yr1044_ST(Y_DEFI(F.v6822));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2542_LoText(F.p2913));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2548_HiText(F.p2913));
yr1037_SA(y_str(")", 1));
{ rt_int rv6856 = yr1056_SE();
y_use = F.yu; return rv6856; }
}
{ rt_int rv6857 = F.p2912;
y_use = F.yu; return rv6857; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2919_StoreText(rt_int a_p2920, void * a_p2921, rt_int a_p2922, void * a_p2923, rt_int a_p2924) {
struct yf2925 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2920 = a_p2920;
F.p2921 = a_p2921;
F.p2922 = a_p2922;
F.p2923 = a_p2923;
F.p2924 = a_p2924;
F.v6865 = Y_UNDEF_I;
yr2494_CheckType(F.p2924, F.p2921, F.p2923);
if (yr2436_Deep(F.p2921)) {
F.v6865 = yr1200_Fresh(y_str("t", 1));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2461_CType(F.p2921));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v6865));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2911_Convert(F.p2922, F.p2921, F.p2923));
yr1037_SA(y_str("; y_store(", 10));
yr1044_ST(yr2467_DescOf(F.p2921));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.p2920);
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v6865));
yr1037_SA(y_str("); }", 4));
{ rt_int rv6874 = yr1056_SE();
y_use = F.yu; return rv6874; }
}
yr1026_SB();
yr1044_ST(F.p2920);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2911_Convert(F.p2922, F.p2921, F.p2923));
yr1037_SA(y_str(";", 1));
{ rt_int rv6877 = yr1056_SE();
y_use = F.yu; return rv6877; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2929_Store(rt_int a_p2930, void * a_p2931, rt_int a_p2932, void * a_p2933, rt_int a_p2934) {
struct yf2935 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2930 = a_p2930;
F.p2931 = a_p2931;
F.p2932 = a_p2932;
F.p2933 = a_p2933;
F.p2934 = a_p2934;
yr1132_Emit(yr2919_StoreText(F.p2930, F.p2931, F.p2932, F.p2933, F.p2934));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2939_IsVariable(void * a_p2940) {
struct yf2941 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2940 = a_p2940;
F.v6887 = Y_UNDEF_P;
F.v6889 = Y_UNDEF_P;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_kind) == v777)) {
F.v6887 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_name));
if ((Y_DEFP(F.v6887) == ((void *)0))) {
{ rt_int rv6891 = 0;
y_use = F.yu; return rv6891; }
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6887)))).f_readonly)) {
{ rt_int rv6893 = 0;
y_use = F.yu; return rv6893; }
}
{ rt_int rv6894 = (Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v6887))))).f_kind) == v861);
y_use = F.yu; return rv6894; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_kind) == v789)) {
{ rt_int rv6896 = (Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_flag) == INT64_C(0));
y_use = F.yu; return rv6896; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_kind) == v786)) {
{ rt_int rv6897 = (yr3037_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p2940))).f_a)) || yr2939_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p2940))).f_a)));
y_use = F.yu; return rv6897; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_kind) == v783)) {
if ((!yr2939_IsVariable(Y_DEFP(((*(yR105 *)y_deref(F.p2940))).f_a)))) {
{ rt_int rv6899 = 0;
y_use = F.yu; return rv6899; }
}
F.v6889 = yr2716_FindField(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2940))).f_a)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(F.p2940))).f_name));
if ((Y_DEFP(F.v6889) == ((void *)0))) {
{ rt_int rv6901 = 0;
y_use = F.yu; return rv6901; }
}
{ rt_int rv6902 = (!Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6889)))).f_isconst));
y_use = F.yu; return rv6902; }
}
{ rt_int rv6904 = 0;
y_use = F.yu; return rv6904; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2945_CheckPure(void * a_p2946) {
struct yf2947 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2946 = a_p2946;
F.v6908 = Y_UNDEF_P;
F.v6908 = F.p2946;
F.v6910 = Y_UNDEF_P;
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_func))) {
y_use = F.yu; return;
}
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_kind) == v786)))) {
Y_TICK();
F.v6908 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_kind) == v789)) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_flag) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2946))).f_line), y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_kind) == v777)) {
F.v6910 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_name));
if ((!(Y_DEFP(F.v6910) == ((void *)0)))) {
F.v6910 = yr2393_Real(Y_DEFP(F.v6910));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6910)))).f_level) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_level))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2946))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v6908)))).f_name), y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2951_LValue(void * a_p2952, rt_int * a_p2953, void * * a_p2954) {
struct yf2955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2952 = a_p2952;
F.p2953_o = a_p2953;
F.p2954_o = a_p2954;
F.v6919 = Y_UNDEF_P;
F.v6919 = Y_DEFP(v1666);
v1666 = F.p2952;
yr2978_Expr(F.p2952, ((void *)0), &F.p2953, &F.p2954);
v1666 = Y_DEFP(F.v6919);
if ((!yr2939_IsVariable(F.p2952))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2952))).f_line), y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2953_o) = F.p2953;
(*F.p2954_o) = F.p2954;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2959_Paren(rt_int a_p2960) {
struct yf2961 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2960 = a_p2960;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p2960);
yr1037_SA(y_str(")", 1));
{ rt_int rv6925 = yr1056_SE();
y_use = F.yu; return rv6925; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2965_Lit(void * a_p2966, rt_int a_p2967) {
struct yf2968 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2966 = a_p2966;
F.p2967 = a_p2967;
F.v6930 = Y_UNDEF_P;
F.v6930 = yr2406_CopyRep(F.p2966);
yr2629_SetRange(Y_DEFP(F.v6930), F.p2967, F.p2967);
((*(yR110 *)y_deref(Y_DEFP(F.v6930)))).f_elem = F.p2966;
{ void * rv6931 = Y_DEFP(F.v6930);
y_use = F.yu; return rv6931; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2972_Qualifier(void * a_p2973) {
struct yf2974 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2973 = a_p2973;
F.v6935 = Y_UNDEF_P;
F.v6935 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2973))).f_d)))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2973))).f_line)));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6935)))).f_kind) == v867))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v6935)))).f_kind) == v870))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2973))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2973))).f_d)))).f_name), y_str(" is not a type", 14));
}
{ void * rv6937 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v6935)))).f_rep);
y_use = F.yu; return rv6937; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2978_Expr(void * a_p2979, void * a_p2980, rt_int * a_p2981, void * * a_p2982) {
struct yf2983 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2979 = a_p2979;
F.p2980 = a_p2980;
F.p2981_o = a_p2981;
F.p2982_o = a_p2982;
F.v6944 = Y_UNDEF_I;
F.v6944 = Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_kind);
F.v6946 = Y_UNDEF_P;
F.v6948 = Y_UNDEF_I;
F.v6950 = Y_UNDEF_I;
F.v6952 = Y_UNDEF_P;
F.v6954 = Y_UNDEF_P;
F.v6956 = Y_UNDEF_P;
F.v6958 = Y_UNDEF_I;
F.v6960 = Y_UNDEF_I;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line);
if ((Y_DEFI(F.v6944) == v801)) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), F.p2980, &F.v6948, &F.p2982);
F.p2981 = yr2959_Paren(Y_DEFI(F.v6948));
} else if ((Y_DEFI(F.v6944) == v759)) {
F.p2982 = yr2965_Lit(Y_DEFP(v1342), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_ival));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_d) == ((void *)0)))) {
F.v6954 = yr2972_Qualifier(F.p2979);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_tname);
}
yr1026_SB();
yr1037_SA(y_str("INT64_C(", 8));
yr1050_SI(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_ival));
yr1037_SA(y_str(")", 1));
F.p2981 = yr1056_SE();
} else if ((Y_DEFI(F.v6944) == v768)) {
F.v6954 = yr2806_AlphabetFor(F.p2979, F.p2980);
F.v6960 = yr2813_CharValue(Y_DEFP(F.v6954), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line));
F.p2982 = yr2965_Lit(Y_DEFP(F.v6954), Y_DEFI(F.v6960));
yr1026_SB();
yr1050_SI(Y_DEFI(F.v6960));
F.p2981 = yr1056_SE();
} else if ((Y_DEFI(F.v6944) == v771)) {
F.v6954 = yr2806_AlphabetFor(F.p2979, F.p2980);
F.v6948 = yr2821_StringCodes(Y_DEFP(F.v6954), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_text), &F.v6958, Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line));
F.p2982 = yr2399_NewRep(v846, yr1061_T(y_str("string", 6)));
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_tname = yr1061_T(y_str("a string literal", 16));
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_elem = Y_DEFP(F.v6954);
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_nidx = INT64_C(1);
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_nlits = Y_DEFI(F.v6958);
yr1026_SB();
yr1037_SA(y_str("y_str(", 6));
yr1044_ST(Y_DEFI(F.v6948));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v6958));
yr1037_SA(y_str(")", 1));
F.p2981 = yr1056_SE();
} else if ((Y_DEFI(F.v6944) == v765)) {
F.p2982 = Y_DEFP(v1354);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_d) == ((void *)0)))) {
F.p2982 = yr2972_Qualifier(F.p2979);
}
F.p2981 = yr2959_Paren(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_text));
} else if ((Y_DEFI(F.v6944) == v762)) {
yr2888_FixLiteral(F.p2979, &F.p2981, &F.p2982);
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_d) == ((void *)0)))) {
F.v6954 = yr2972_Qualifier(F.p2979);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v807))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_tname);
}
} else if ((Y_DEFI(F.v6944) == v774)) {
if ((Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_d) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2982 = yr2972_Qualifier(F.p2979);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p2982)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), y_str("NIL of a type that is not a pointer", 35));
}
F.p2981 = yr1061_T(y_str("((void *)0)", 11));
} else if ((Y_DEFI(F.v6944) == v777)) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_d) == ((void *)0)))) {
F.v6954 = yr2972_Qualifier(F.p2979);
F.v6946 = yr2353_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name), Y_DEFP(F.v6954));
if ((Y_DEFP(F.v6946) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name), y_str(" is not a literal of that type", 30));
}
} else {
F.v6946 = yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line));
}
yr3028_NameExpr(F.p2979, Y_DEFP(F.v6946), &F.p2981, &F.p2982);
} else if ((Y_DEFI(F.v6944) == v780)) {
yr3231_CallExpr(F.p2979, F.p2980, 0, &F.p2981, &F.p2982);
} else if ((Y_DEFI(F.v6944) == v783)) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), ((void *)0), &F.v6948, &F.v6954);
((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a)))).f_rep = Y_DEFP(F.v6954);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v825))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name), y_str(": a component of something that is not a record", 47));
}
if (Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_tname), y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6956 = yr2716_FindField(Y_DEFP(F.v6954), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name));
if ((Y_DEFP(F.v6956) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name), y_str(" is not a component of this record", 34));
}
F.p2982 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v6956)))).f_rep);
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v6956)))).f_variant) == INT64_C(0)))) {
yr3312_CheckVariantSelected(F.p2979, Y_DEFP(F.v6954), Y_DEFP(F.v6956));
F.v6950 = yr1200_Fresh(y_str("vr", 2));
yr1026_SB();
yr1037_SA(y_str("(*({ ", 5));
yr1044_ST(yr2461_CType(Y_DEFP(F.v6954)));
yr1037_SA(y_str(" *", 2));
yr1044_ST(Y_DEFI(F.v6950));
yr1037_SA(y_str(" = &", 4));
yr1044_ST(yr2959_Paren(Y_DEFI(F.v6948)));
yr1037_SA(y_str("; if (!(", 8));
yr1044_ST(yr3020_VariantTest(Y_DEFP(F.v6954), Y_DEFP(F.v6956), Y_DEFI(F.v6950)));
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1044_ST(Y_DEFI(F.v6950));
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name));
yr1037_SA(y_str("; }))", 5));
F.p2981 = yr1056_SE();
} else {
yr1026_SB();
yr1044_ST(yr2959_Paren(Y_DEFI(F.v6948)));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_name));
F.p2981 = yr1056_SE();
}
} else if ((((Y_DEFI(F.v6944) == v789)) && yr3176_UserOp(F.p2979, y_range(v618, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), ((void *)0), &F.p2981, &F.p2982))) {
((*(yR105 *)y_deref(F.p2979))).f_flag = INT64_C(1);
} else if ((Y_DEFI(F.v6944) == v789)) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), ((void *)0), &F.v6948, &F.v6954);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_kind) == v828))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), y_str("^ of something that is not a pointer", 36));
}
yr3455_NoteFreeDeref(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_tid));
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_forward), y_str(" is not declared", 16));
}
F.p2982 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v6954)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(yr2461_CType(Y_DEFP(F.p2982)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v6948));
yr1037_SA(y_str("))", 2));
F.p2981 = yr1056_SE();
} else if ((Y_DEFI(F.v6944) == v786)) {
yr3043_IndexExpr(F.p2979, &F.p2981, &F.p2982);
} else if ((((Y_DEFI(F.v6944) == v792)) && yr3176_UserOp(F.p2979, y_range(v390, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), ((void *)0), &F.p2981, &F.p2982))) {
F.p2982 = Y_DEFP(F.p2982);
} else if ((Y_DEFI(F.v6944) == v792)) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), Y_DEFP(v1344), &F.v6948, &F.v6954);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), Y_DEFP(v1344), Y_DEFP(F.v6954));
F.p2982 = Y_DEFP(v1344);
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.v6948));
yr1037_SA(y_str(")", 1));
F.p2981 = yr1056_SE();
} else if ((Y_DEFI(F.v6944) == v795)) {
if ((!yr3176_UserOp(F.p2979, y_range(v576, INT64_C(0), INT64_C(4000000)), Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), ((void *)0), &F.p2981, &F.p2982))) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p2979))).f_a), F.p2980, &F.v6948, &F.v6954);
yr3051_NegExpr(F.p2979, Y_DEFI(F.v6948), Y_DEFP(F.v6954), &F.p2981, &F.p2982);
}
} else if ((Y_DEFI(F.v6944) == v798)) {
yr3107_BinExpr(F.p2979, F.p2980, &F.p2981, &F.p2982);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p2979))).f_line), y_str("not an expression", 17));
}
((*(yR105 *)y_deref(F.p2979))).f_rep = Y_DEFP(F.p2982);
yr2987_CheckDefined(F.p2979, &F.p2981, Y_DEFP(F.p2982));
(*F.p2981_o) = F.p2981;
(*F.p2982_o) = F.p2982;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2987_CheckDefined(void * a_p2988, rt_int * a_p2989, void * a_p2990) {
struct yf2991 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2988 = a_p2988;
F.p2989 = a_p2989;
F.p2990 = a_p2990;
F.v7003 = Y_UNDEF_I;
F.v7003 = Y_DEFI(((*(yR105 *)y_deref(F.p2988))).f_kind);
F.v7005 = Y_UNDEF_I;
F.v7005 = INT64_C(0);
if ((((((Y_DEFI(F.v7003) == v777)) || ((Y_DEFI(F.v7003) == v783))) || ((Y_DEFI(F.v7003) == v786))) || ((Y_DEFI(F.v7003) == v789)))) {
((*(yR105 *)y_deref(F.p2988))).f_text = INT64_C(0);
} else {
y_use = F.yu; return;
}
if ((F.p2988 == Y_DEFP(v1666))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7003) == v777)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2988))).f_ival) == INT64_C(1)))))) {
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7003) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p2988))).f_flag) == INT64_C(0)))))) {
y_use = F.yu; return;
}
if (yr3205_Suppressed(v1489)) {
y_use = F.yu; return;
}
F.v7005 = yr3001_UndefMacro(F.p2990);
if ((Y_DEFI(F.v7005) == INT64_C(0))) {
y_use = F.yu; return;
}
((*(yR105 *)y_deref(F.p2988))).f_text = Y_DEFI((*F.p2989));
if ((!yr2995_Addressable(F.p2988))) {
yr1026_SB();
yr1037_SA(y_str("y_vchk_", 7));
yr1031_SC(yr1103_TChar(Y_DEFI(F.v7005), INT64_C(6)));
yr1037_SA(y_str("(", 1));
F.v7005 = yr1056_SE();
}
(*F.p2989) = yr3388_Join(Y_DEFI(F.v7005), Y_DEFI((*F.p2989)), yr1061_T(y_str(")", 1)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2995_Addressable(void * a_p2996) {
struct yf2997 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2996 = a_p2996;
F.v7018 = Y_UNDEF_P;
F.v7018 = F.p2996;
while ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7018)))).f_kind) == v783)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7018)))).f_kind) == v801)))) {
Y_TICK();
F.v7018 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7018)))).f_a);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7018)))).f_kind) == v780)) {
{ rt_int rv7020 = 0;
y_use = F.yu; return rv7020; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7018)))).f_kind) == v789)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7018)))).f_flag) == INT64_C(0)))))) {
{ rt_int rv7023 = 0;
y_use = F.yu; return rv7023; }
}
{ rt_int rv7025 = 1;
y_use = F.yu; return rv7025; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3001_UndefMacro(void * a_p3002) {
struct yf3003 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3002 = a_p3002;
F.v7029 = Y_UNDEF_I;
F.v7029 = Y_DEFI(((*(yR110 *)y_deref(F.p3002))).f_kind);
if (((((Y_DEFI(F.v7029) == v804)) || ((Y_DEFI(F.v7029) == v813))) || ((Y_DEFI(F.v7029) == v816)))) {
{ rt_int rv7031 = yr1061_T(y_str("Y_DEFI(", 7));
y_use = F.yu; return rv7031; }
}
if ((((Y_DEFI(F.v7029) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3002))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7034 = yr1061_T(y_str("Y_DEFB(", 7));
y_use = F.yu; return rv7034; }
}
if ((Y_DEFI(F.v7029) == v810)) {
{ rt_int rv7036 = yr1061_T(y_str("Y_DEFF(", 7));
y_use = F.yu; return rv7036; }
}
if ((Y_DEFI(F.v7029) == v807)) {
{ rt_int rv7038 = yr1061_T(y_str("Y_DEFX(", 7));
y_use = F.yu; return rv7038; }
}
if ((Y_DEFI(F.v7029) == v828)) {
{ rt_int rv7040 = yr1061_T(y_str("Y_DEFP(", 7));
y_use = F.yu; return rv7040; }
}
if ((Y_DEFI(F.v7029) == v834)) {
{ rt_int rv7042 = yr1061_T(y_str("Y_DEFS(", 7));
y_use = F.yu; return rv7042; }
}
{ rt_int rv7044 = INT64_C(0);
y_use = F.yu; return rv7044; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3007_UndefValue(void * a_p3008) {
struct yf3009 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3008 = a_p3008;
F.v7048 = Y_UNDEF_I;
F.v7048 = Y_DEFI(((*(yR110 *)y_deref(F.p3008))).f_kind);
if (((((Y_DEFI(F.v7048) == v804)) || ((Y_DEFI(F.v7048) == v813))) || ((Y_DEFI(F.v7048) == v816)))) {
{ rt_int rv7050 = yr1061_T(y_str("Y_UNDEF_I", 9));
y_use = F.yu; return rv7050; }
}
if ((((Y_DEFI(F.v7048) == v819)) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3008))).f_nlits) < INT64_C(256))))) {
{ rt_int rv7053 = yr1061_T(y_str("Y_UNDEF_B", 9));
y_use = F.yu; return rv7053; }
}
if ((Y_DEFI(F.v7048) == v810)) {
{ rt_int rv7055 = yr1061_T(y_str("Y_UNDEF_F_VALUE", 15));
y_use = F.yu; return rv7055; }
}
if ((Y_DEFI(F.v7048) == v807)) {
{ rt_int rv7057 = yr1061_T(y_str("Y_UNDEF_X", 9));
y_use = F.yu; return rv7057; }
}
if ((Y_DEFI(F.v7048) == v828)) {
{ rt_int rv7059 = yr1061_T(y_str("Y_UNDEF_P", 9));
y_use = F.yu; return rv7059; }
}
{ rt_int rv7061 = INT64_C(0);
y_use = F.yu; return rv7061; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3013_RawCode(void * a_p3014, rt_int a_p3015) {
struct yf3016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3014 = a_p3014;
F.p3015 = a_p3015;
if ((((((((Y_DEFI(((*(yR105 *)y_deref(F.p3014))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3014))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3014))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3014))).f_kind) == v789)))) && ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3014))).f_text) == INT64_C(0)))))) {
{ rt_int rv7066 = Y_DEFI(((*(yR105 *)y_deref(F.p3014))).f_text);
y_use = F.yu; return rv7066; }
}
{ rt_int rv7067 = F.p3015;
y_use = F.yu; return rv7067; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3020_VariantTest(void * a_p3021, void * a_p3022, rt_int a_p3023) {
struct yf3024 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3021 = a_p3021;
F.p3022 = a_p3022;
F.p3023 = a_p3023;
F.v7073 = Y_UNDEF_P;
F.v7073 = Y_DEFP(((*(yR115 *)y_deref(F.p3022))).f_labels);
F.v7075 = Y_UNDEF_I;
F.v7077 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(y_str("0", 1));
while ((!(Y_DEFP(F.v7073) == ((void *)0)))) {
Y_TICK();
yr2830_Manifest(Y_DEFP(F.v7073), &F.v7075, &F.v7077);
yr1037_SA(y_str(" || ", 4));
yr1044_ST(F.p3023);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3021))).f_selector)))).f_name));
yr1037_SA(y_str(" == ", 4));
yr1050_SI(Y_DEFI(F.v7077));
F.v7073 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7073)))).f_next);
}
{ rt_int rv7082 = yr1056_SE();
y_use = F.yu; return rv7082; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3028_NameExpr(void * a_p3029, void * a_p3030, rt_int * a_p3031, void * * a_p3032) {
struct yf3033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3029 = a_p3029;
F.p3030 = a_p3030;
F.p3031_o = a_p3031;
F.p3032_o = a_p3032;
F.v7089 = Y_UNDEF_P;
F.v7089 = yr2393_Real(F.p3030);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_kind) == v873)) {
if ((((Y_DEFP(((*(yR105 *)y_deref(F.p3029))).f_d) == ((void *)0))) && yr2347_Ambiguous(Y_DEFP(F.v7089)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3029))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3029))).f_name), y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p3032 = yr2965_Lit(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_rep), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_mval));
yr1026_SB();
yr1050_SI(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_mval));
F.p3031 = yr1056_SE();
(*F.p3031_o) = F.p3031;
(*F.p3032_o) = F.p3032;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_kind) == v864)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_kind) == v861)) {
((*(yR105 *)y_deref(F.p3029))).f_ival = INT64_C(1);
} else {
((*(yR105 *)y_deref(F.p3029))).f_ival = INT64_C(0);
}
yr3449_NoteFree(Y_DEFP(F.v7089));
F.p3032 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_rep);
F.p3031 = yr2387_SymPath(Y_DEFP(F.v7089));
(*F.p3031_o) = F.p3031;
(*F.p3032_o) = F.p3032;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7089)))).f_kind) == v876)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3029))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3029))).f_name), y_str(" is a routine: a call needs ()", 30));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3029))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3029))).f_name), y_str(" is not a value", 15));
(*F.p3031_o) = F.p3031;
(*F.p3032_o) = F.p3032;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3037_IsMainStore(void * a_p3038) {
struct yf3039 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3038 = a_p3038;
F.v7098 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3038))).f_kind) == v777))) || ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3038))).f_d) == ((void *)0)))))) {
{ rt_int rv7100 = 0;
y_use = F.yu; return rv7100; }
}
F.v7098 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3038))).f_name));
if ((Y_DEFP(F.v7098) == ((void *)0))) {
{ rt_int rv7102 = 0;
y_use = F.yu; return rv7102; }
}
if ((!yr2341_Resolved(Y_DEFP(F.v7098)))) {
{ rt_int rv7104 = 0;
y_use = F.yu; return rv7104; }
}
F.v7098 = yr2393_Real(Y_DEFP(F.v7098));
{ rt_int rv7105 = (((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7098)))).f_kind) == v891)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7098)))).f_mval) == v1477)));
y_use = F.yu; return rv7105; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3043_IndexExpr(void * a_p3044, rt_int * a_p3045, void * * a_p3046) {
struct yf3047 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3044 = a_p3044;
F.p3045_o = a_p3045;
F.p3046_o = a_p3046;
F.v7111 = Y_UNDEF_I;
F.v7113 = Y_UNDEF_I;
F.v7115 = Y_UNDEF_I;
F.v7117 = Y_UNDEF_P;
F.v7119 = Y_UNDEF_P;
F.v7121 = Y_UNDEF_P;
F.v7123 = Y_UNDEF_P;
F.v7125 = Y_UNDEF_I;
F.v7127 = Y_UNDEF_I;
if (yr3037_IsMainStore(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a))) {
if ((!(yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_b)) == INT64_C(1)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("MAIN_STORE_ARRAY has one subscript", 34));
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_b), Y_DEFP(v1874), &F.v7113, &F.v7119);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), Y_DEFP(v1874), Y_DEFP(F.v7119));
F.p3046 = Y_DEFP(v1876);
F.p3045 = yr3388_Join(yr1061_T(y_str("(*y_mem_word(", 13)), Y_DEFI(F.v7113), yr1061_T(y_str("))", 2)));
(*F.p3045_o) = F.p3045;
(*F.p3046_o) = F.p3046;
y_use = F.yu; return;
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a), ((void *)0), &F.v7111, &F.v7117);
if ((!yr2424_IsArrayLike(Y_DEFP(F.v7117)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("[] of something that is not an array", 36));
}
F.v7125 = yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_b));
if ((!(Y_DEFI(F.v7125) == Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7117)))).f_nidx)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3044))).f_line), y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p3046 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7117)))).f_elem);
F.v7127 = (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_a)))).f_kind) == v789)));
if (Y_DEFI(F.v7127)) {
F.v7115 = Y_DEFI(F.v7111);
} else {
F.v7115 = yr1200_Fresh(y_str("ya", 2));
}
yr1026_SB();
if ((!Y_DEFI(F.v7127))) {
yr1037_SA(y_str("(*({ yarr ", 10));
yr1044_ST(Y_DEFI(F.v7115));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7111));
yr1037_SA(y_str("; &", 3));
}
yr1037_SA(y_str("((", 2));
yr1044_ST(yr2461_CType(Y_DEFP(F.p3046)));
yr1037_SA(y_str(" *)(", 4));
yr1044_ST(Y_DEFI(F.v7115));
yr1037_SA(y_str(").p)[y_ix", 9));
yr1050_SI(Y_DEFI(F.v7125));
yr1037_SA(y_str("(", 1));
yr1044_ST(Y_DEFI(F.v7115));
F.p3045 = yr1056_SE();
F.v7123 = Y_DEFP(((*(yR105 *)y_deref(F.p3044))).f_b);
F.v7121 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7117)))).f_idx);
while ((!(Y_DEFP(F.v7123) == ((void *)0)))) {
Y_TICK();
yr2978_Expr(Y_DEFP(F.v7123), Y_DEFP(F.v7121), &F.v7113, &F.v7119);
if ((((!(Y_DEFP(F.v7121) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7117)))).f_kind) == v822)))) {
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7123)))).f_line), Y_DEFP(F.v7121), Y_DEFP(F.v7119));
} else if ((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7119)))).f_kind) == v804)) || yr2412_IsDiscrete(Y_DEFP(F.v7119)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7123)))).f_line), y_str("a subscript is an integer or scalar value", 41));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3045));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7113));
F.p3045 = yr1056_SE();
if ((!(Y_DEFP(F.v7121) == ((void *)0)))) {
F.v7121 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7121)))).f_link);
}
F.v7123 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7123)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3045));
yr1037_SA(y_str(")]", 2));
if ((!Y_DEFI(F.v7127))) {
yr1037_SA(y_str("; }))", 5));
}
F.p3045 = yr1056_SE();
(*F.p3045_o) = F.p3045;
(*F.p3046_o) = F.p3046;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3051_NegExpr(void * a_p3052, rt_int a_p3053, void * a_p3054, rt_int * a_p3055, void * * a_p3056) {
struct yf3057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3052 = a_p3052;
F.p3053 = a_p3053;
F.p3054 = a_p3054;
F.p3055_o = a_p3055;
F.p3056_o = a_p3056;
yr1026_SB();
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3054))).f_kind) == v804)) {
F.p3056 = yr2406_CopyRep(F.p3054);
((*(yR110 *)y_deref(Y_DEFP(F.p3056)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.p3056)))).f_hasm = 0;
if (yr3205_Suppressed(v1483)) {
yr1037_SA(y_str("Y_NEGW(", 7));
} else {
yr1037_SA(y_str("y_neg(", 6));
}
yr1044_ST(F.p3053);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3054))).f_kind) == v810)) {
F.p3056 = yr2406_CopyRep(F.p3054);
((*(yR110 *)y_deref(Y_DEFP(F.p3056)))).f_lo = INT64_C(0);
yr1037_SA(y_str("(-", 2));
yr1044_ST(F.p3053);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3054))).f_kind) == v807)) {
F.p3056 = yr2406_CopyRep(F.p3054);
((*(yR110 *)y_deref(Y_DEFP(F.p3056)))).f_lo = INT64_C(0);
yr1037_SA(y_str("y_fix_neg(", 10));
yr1044_ST(F.p3053);
yr1037_SA(y_str(")", 1));
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3054))).f_kind) == v834)) {
F.p3056 = F.p3054;
yr1037_SA(y_str("y_set_compl(", 12));
yr1044_ST(F.p3053);
yr1037_SA(y_str(")", 1));
} else {
v927 = 0;
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3052))).f_line), y_str("- of something that is not a number or a set", 44));
}
F.p3055 = yr1056_SE();
(*F.p3055_o) = F.p3055;
(*F.p3056_o) = F.p3056;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3061_Unbounded(void * a_p3062) {
struct yf3063 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3062 = a_p3062;
F.v7170 = Y_UNDEF_P;
F.v7170 = yr2406_CopyRep(F.p3062);
((*(yR110 *)y_deref(Y_DEFP(F.v7170)))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7170)))).f_hi = INT64_C(0);
((*(yR110 *)y_deref(Y_DEFP(F.v7170)))).f_hasm = 0;
{ void * rv7174 = Y_DEFP(F.v7170);
y_use = F.yu; return rv7174; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3067_Call2(yarr a_p3069, rt_int a_p3070, rt_int a_p3071) {
struct yf3072 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3069 = a_p3069;
F.p3070 = a_p3070;
F.p3071 = a_p3071;
yr1026_SB();
yr1037_SA(F.p3069);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3070);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p3071);
yr1037_SA(y_str(")", 1));
{ rt_int rv7182 = yr1056_SE();
y_use = F.yu; return rv7182; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3076_Infix(rt_int a_p3077, yarr a_p3079, rt_int a_p3080) {
struct yf3081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3077 = a_p3077;
F.p3079 = a_p3079;
F.p3080 = a_p3080;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3077);
yr1037_SA(y_str(" ", 1));
yr1037_SA(F.p3079);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p3080);
yr1037_SA(y_str(")", 1));
{ rt_int rv7191 = yr1056_SE();
y_use = F.yu; return rv7191; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3085_EqCode(rt_int a_p3086, void * a_p3087, rt_int a_p3088, void * a_p3089) {
struct yf3090 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3086 = a_p3086;
F.p3087 = a_p3087;
F.p3088 = a_p3088;
F.p3089 = a_p3089;
F.v7198 = Y_UNDEF_I;
F.v7200 = Y_UNDEF_I;
F.v7202 = Y_UNDEF_P;
F.v7202 = F.p3087;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3087))).f_kind) == v846)) {
F.v7202 = F.p3089;
}
if ((((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v825))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v843))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v846)))) {
F.v7198 = yr1200_Fresh(y_str("e", 1));
F.v7200 = yr1200_Fresh(y_str("e", 1));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2461_CType(Y_DEFP(F.v7202)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7198));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3086);
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v7200));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3088);
yr1037_SA(y_str("; y_eq(", 7));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v843)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_elem)));
yr1037_SA(y_str(")", 1));
} else {
yr1044_ST(yr2467_DescOf(Y_DEFP(F.v7202)));
}
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7198));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7200));
yr1037_SA(y_str("); })", 5));
{ rt_int rv7216 = yr1056_SE();
y_use = F.yu; return rv7216; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7202)))).f_kind) == v834)) {
{ rt_int rv7218 = yr3067_Call2(y_str("y_set_eq", 8), F.p3086, F.p3088);
y_use = F.yu; return rv7218; }
}
{ rt_int rv7220 = yr3076_Infix(F.p3086, y_str("==", 2), F.p3088);
y_use = F.yu; return rv7220; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3094_IsOrdered(void * a_p3095) {
struct yf3096 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3095 = a_p3095;
if ((((((Y_DEFI(((*(yR110 *)y_deref(F.p3095))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3095))).f_kind) == v810))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3095))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3095))).f_kind) == v819)))) {
{ rt_int rv7224 = 1;
y_use = F.yu; return rv7224; }
}
{ rt_int rv7225 = (((Y_DEFI(((*(yR110 *)y_deref(F.p3095))).f_kind) == v816)) && Y_DEFI(((*(yR110 *)y_deref(F.p3095))).f_ordered));
y_use = F.yu; return rv7225; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3100_FixToFloat(rt_int a_p3101, void * a_p3102) {
struct yf3103 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3101 = a_p3101;
F.p3102 = a_p3102;
yr1026_SB();
yr1037_SA(y_str("y_fix_float(", 12));
yr1044_ST(F.p3101);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3102))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3102))).f_fsd));
yr1037_SA(y_str("))", 2));
{ rt_int rv7233 = yr1056_SE();
y_use = F.yu; return rv7233; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3107_BinExpr(void * a_p3108, void * a_p3109, rt_int * a_p3110, void * * a_p3111) {
struct yf3112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3108 = a_p3108;
F.p3109 = a_p3109;
F.p3110_o = a_p3110;
F.p3111_o = a_p3111;
F.v7240 = Y_UNDEF_I;
F.v7240 = Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_name);
F.v7242 = Y_UNDEF_I;
F.v7244 = Y_UNDEF_I;
F.v7246 = Y_UNDEF_I;
F.v7248 = Y_UNDEF_P;
F.v7250 = Y_UNDEF_P;
F.v7252 = Y_UNDEF_P;
F.v7254 = Y_UNDEF_I;
if (yr3176_UserOp(F.p3108, Y_DEFI(F.v7240), Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_b), &F.p3110, &F.p3111)) {
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((((Y_DEFI(F.v7240) == v237)) || ((Y_DEFI(F.v7240) == v399)))) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), Y_DEFP(v1344), &F.v7242, &F.v7248);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7248));
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_b), Y_DEFP(v1344), &F.v7244, &F.v7250);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7250));
F.p3111 = Y_DEFP(v1344);
if ((Y_DEFI(F.v7240) == v237)) {
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str("&&", 2), Y_DEFI(F.v7244));
} else {
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str("||", 2), Y_DEFI(F.v7244));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7240) == v360)) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_b), ((void *)0), &F.v7244, &F.v7250);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7250)))).f_kind) == v834))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("IN needs a set on its right", 27));
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7250)))).f_elem), &F.v7242, &F.v7248);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7250)))).f_elem), Y_DEFP(F.v7248));
F.p3111 = Y_DEFP(v1344);
F.p3110 = yr3067_Call2(y_str("y_set_in", 8), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
F.v7252 = ((void *)0);
if (((((((((!(F.p3109 == ((void *)0)))) && ((!(Y_DEFI(F.v7240) == v585)))) && ((!(Y_DEFI(F.v7240) == v570)))) && ((!(Y_DEFI(F.v7240) == v588)))) && ((!(Y_DEFI(F.v7240) == v540)))) && ((!(Y_DEFI(F.v7240) == v591)))) && ((!(Y_DEFI(F.v7240) == v543))))) {
F.v7252 = F.p3109;
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_a), Y_DEFP(F.v7252), &F.v7242, &F.v7248);
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3108))).f_b), Y_DEFP(F.v7248), &F.v7244, &F.v7250);
if ((((Y_DEFI(F.v7240) == v585)) || ((Y_DEFI(F.v7240) == v570)))) {
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(F.v7248), Y_DEFP(F.v7250));
if (yr2455_NonAssignable(Y_DEFP(F.v7248))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_opaque) && (((y_div(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_tname), y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p3111 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_kind) == v807)) {
yr2877_CommonScale(&F.v7242, Y_DEFP(F.v7248), &F.v7244, Y_DEFP(F.v7250), yr3061_Unbounded(Y_DEFP(F.v7248)), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line));
}
F.p3110 = yr3085_EqCode(Y_DEFI(F.v7242), Y_DEFP(F.v7248), Y_DEFI(F.v7244), Y_DEFP(F.v7250));
if ((Y_DEFI(F.v7240) == v570)) {
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(Y_DEFI(F.p3110));
yr1037_SA(y_str(")", 1));
F.p3110 = yr1056_SE();
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((((((Y_DEFI(F.v7240) == v588)) || ((Y_DEFI(F.v7240) == v540))) || ((Y_DEFI(F.v7240) == v591))) || ((Y_DEFI(F.v7240) == v543)))) {
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(F.v7248), Y_DEFP(F.v7250));
if ((!yr3094_IsOrdered(Y_DEFP(F.v7248)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p3111 = Y_DEFP(v1344);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_kind) == v807)) {
yr2877_CommonScale(&F.v7242, Y_DEFP(F.v7248), &F.v7244, Y_DEFP(F.v7250), yr3061_Unbounded(Y_DEFP(F.v7248)), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line));
}
if ((Y_DEFI(F.v7240) == v588)) {
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str("<", 1), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v540)) {
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str("<=", 2), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v591)) {
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str(">", 1), Y_DEFI(F.v7244));
} else {
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str(">=", 2), Y_DEFI(F.v7244));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFP(F.v7248), Y_DEFP(F.v7250));
F.v7254 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_kind);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_kind) == v846)) {
F.v7254 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7250)))).f_kind);
}
if ((Y_DEFI(F.v7240) == v489)) {
if ((Y_DEFI(F.v7254) == v813)) {
F.p3111 = Y_DEFP(v1344);
F.p3110 = yr3076_Infix(Y_DEFI(F.v7242), y_str("!=", 2), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7254) == v834)) {
F.p3111 = Y_DEFP(F.v7248);
F.p3110 = yr3067_Call2(y_str("y_set_xor", 9), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7254) == v834)) {
F.p3111 = Y_DEFP(F.v7248);
if ((Y_DEFI(F.v7240) == v573)) {
F.p3110 = yr3067_Call2(y_str("y_set_union", 11), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v576)) {
F.p3110 = yr3067_Call2(y_str("y_set_diff", 10), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v579)) {
F.p3110 = yr3067_Call2(y_str("y_set_inter", 11), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), y_str("this operator does not apply to sets", 36));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7254) == v804)) {
F.p3111 = yr3061_Unbounded(Y_DEFP(F.v7248));
if ((yr3205_Suppressed(v1483) && (((((Y_DEFI(F.v7240) == v573)) || ((Y_DEFI(F.v7240) == v576))) || ((Y_DEFI(F.v7240) == v579)))))) {
if ((Y_DEFI(F.v7240) == v573)) {
F.p3110 = yr3067_Call2(y_str("Y_ADDW", 6), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v576)) {
F.p3110 = yr3067_Call2(y_str("Y_SUBW", 6), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else {
F.p3110 = yr3067_Call2(y_str("Y_MULW", 6), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
}
} else if ((Y_DEFI(F.v7240) == v573)) {
F.p3110 = yr3067_Call2(y_str("y_add", 5), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v576)) {
F.p3110 = yr3067_Call2(y_str("y_sub", 5), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v579)) {
F.p3110 = yr3067_Call2(y_str("y_mul", 5), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v276)) {
F.p3110 = yr3067_Call2(y_str("y_div", 5), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v378)) {
F.p3110 = yr3067_Call2(y_str("y_mod", 5), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v582)) {
F.p3111 = Y_DEFP(v1354);
yr1026_SB();
yr1037_SA(y_str("y_fdiv((double)(", 16));
yr1044_ST(Y_DEFI(F.v7242));
yr1037_SA(y_str("), (double)(", 12));
yr1044_ST(Y_DEFI(F.v7244));
yr1037_SA(y_str("))", 2));
F.p3110 = yr1056_SE();
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(F.v7240), y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7254) == v810)) {
F.p3111 = yr3061_Unbounded(Y_DEFP(F.v7248));
if ((Y_DEFI(F.v7240) == v573)) {
F.p3110 = yr2905_FloatChk(yr3076_Infix(Y_DEFI(F.v7242), y_str("+", 1), Y_DEFI(F.v7244)));
} else if ((Y_DEFI(F.v7240) == v576)) {
F.p3110 = yr2905_FloatChk(yr3076_Infix(Y_DEFI(F.v7242), y_str("-", 1), Y_DEFI(F.v7244)));
} else if ((Y_DEFI(F.v7240) == v579)) {
F.p3110 = yr2905_FloatChk(yr3076_Infix(Y_DEFI(F.v7242), y_str("*", 1), Y_DEFI(F.v7244)));
} else if ((Y_DEFI(F.v7240) == v582)) {
F.p3111 = Y_DEFP(v1354);
F.p3110 = yr2905_FloatChk(yr3067_Call2(y_str("y_fdiv", 6), Y_DEFI(F.v7242), Y_DEFI(F.v7244)));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(F.v7240), y_str(" does not apply to these numbers", 32));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
if ((Y_DEFI(F.v7254) == v807)) {
F.p3111 = yr3061_Unbounded(Y_DEFP(F.v7248));
if ((((Y_DEFI(F.v7240) == v573)) || ((Y_DEFI(F.v7240) == v576)))) {
yr2877_CommonScale(&F.v7242, Y_DEFP(F.v7248), &F.v7244, Y_DEFP(F.v7250), Y_DEFP(F.p3111), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line));
if ((Y_DEFI(F.v7240) == v573)) {
F.p3110 = yr3067_Call2(y_str("y_fix_add", 9), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else {
F.p3110 = yr3067_Call2(y_str("y_fix_sub", 9), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
}
} else if ((Y_DEFI(F.v7240) == v579)) {
yr2608_SetScale(Y_DEFP(F.p3111), yr2575_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7250)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line)), yr2575_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7248)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7250)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line)));
F.p3110 = yr3067_Call2(y_str("y_fix_mul", 9), Y_DEFI(F.v7242), Y_DEFI(F.v7244));
} else if ((Y_DEFI(F.v7240) == v582)) {
F.p3111 = Y_DEFP(v1354);
F.p3110 = yr2905_FloatChk(yr3067_Call2(y_str("y_fdiv", 6), yr3100_FixToFloat(Y_DEFI(F.v7242), Y_DEFP(F.v7248)), yr3100_FixToFloat(Y_DEFI(F.v7244), Y_DEFP(F.v7250))));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(F.v7240), y_str(" does not apply to these numbers", 32));
}
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3108))).f_line), Y_DEFI(F.v7240), y_str(" does not apply to these values", 31));
(*F.p3110_o) = F.p3110;
(*F.p3111_o) = F.p3111;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3116_Fits(void * a_p3117, void * a_p3118) {
struct yf3119 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3117 = a_p3117;
F.p3118 = a_p3118;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3117))).f_kind) == v843)) {
if ((!yr2424_IsArrayLike(F.p3118))) {
{ rt_int rv7305 = 0;
y_use = F.yu; return rv7305; }
}
if ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3118))).f_nidx) == Y_DEFI(((*(yR110 *)y_deref(F.p3117))).f_nidx)))) {
{ rt_int rv7307 = 0;
y_use = F.yu; return rv7307; }
}
{ rt_int rv7308 = yr2479_SameType(Y_DEFP(((*(yR110 *)y_deref(F.p3117))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3118))).f_elem));
y_use = F.yu; return rv7308; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3117))).f_kind) == v855)) {
{ rt_int rv7310 = 1;
y_use = F.yu; return rv7310; }
}
{ rt_int rv7311 = yr2479_SameType(F.p3117, F.p3118);
y_use = F.yu; return rv7311; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3123_Choose(void * a_p3124, rt_int a_p3125, rt_int a_p3126) {
struct yf3127 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3124 = a_p3124;
F.p3125 = a_p3125;
F.p3126 = a_p3126;
F.v7317 = Y_UNDEF_P;
F.v7317 = F.p3124;
F.v7319 = Y_UNDEF_P;
F.v7321 = Y_UNDEF_I;
F.v7323 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7317) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7317)))).f_nparams) == F.p3126)) {
F.v7321 = 1;
F.v7319 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7317)))).f_params);
F.v7323 = INT64_C(1);
while ((!(Y_DEFP(F.v7319) == ((void *)0)))) {
Y_TICK();
if ((!yr3116_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7319)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, y_add(F.p3125, Y_DEFI(F.v7323)))])))) {
F.v7321 = 0;
}
F.v7323 = y_range(y_add(Y_DEFI(F.v7323), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7319 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7319)))).f_next);
}
if (Y_DEFI(F.v7321)) {
{ void * rv7330 = Y_DEFP(F.v7317);
y_use = F.yu; return rv7330; }
}
}
F.v7317 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7317)))).f_alt);
}
{ void * rv7331 = ((void *)0);
y_use = F.yu; return rv7331; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3131_HidesStandard(void * a_p3132) {
struct yf3133 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3132 = a_p3132;
F.v7335 = Y_UNDEF_P;
F.v7335 = F.p3132;
while ((!(Y_DEFP(F.v7335) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7335)))).f_decl) == ((void *)0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7335)))).f_decl)))).f_ival) == INT64_C(0))))) {
{ rt_int rv7338 = 1;
y_use = F.yu; return rv7338; }
}
F.v7335 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7335)))).f_alt);
}
{ rt_int rv7340 = 0;
y_use = F.yu; return rv7340; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3137_CompileArgs(void * a_p3138, void * a_p3139, rt_int * a_p3140, rt_int * a_p3141) {
struct yf3142 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3138 = a_p3138;
F.p3139 = a_p3139;
F.p3140_o = a_p3140;
F.p3141_o = a_p3141;
F.v7347 = Y_UNDEF_P;
F.v7347 = F.p3138;
F.v7349 = Y_UNDEF_P;
F.v7349 = ((void *)0);
F.v7351 = Y_UNDEF_P;
F.p3140 = Y_DEFI(v1539);
F.p3141 = INT64_C(0);
if ((!(F.p3139 == ((void *)0)))) {
F.v7349 = Y_DEFP(((*(yR125 *)y_deref(F.p3139))).f_params);
}
while ((!(Y_DEFP(F.v7347) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(v1539) >= INT64_C(4000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7347)))).f_line), y_str("calls nested too deeply", 23));
}
F.p3141 = y_range(y_add(Y_DEFI(F.p3141), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1539 = y_range(y_add(Y_DEFI(F.p3140), Y_DEFI(F.p3141)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7351 = ((void *)0);
if ((!(Y_DEFP(F.v7349) == ((void *)0)))) {
F.v7351 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7349)))).f_rep);
F.v7349 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7349)))).f_next);
}
yr2978_Expr(Y_DEFP(F.v7347), Y_DEFP(F.v7351), &((rt_int *)(v1515).p)[y_ix1(v1515, y_add(Y_DEFI(F.p3140), Y_DEFI(F.p3141)))], &((void * *)(v1526).p)[y_ix1(v1526, y_add(Y_DEFI(F.p3140), Y_DEFI(F.p3141)))]);
((void * *)(v1537).p)[y_ix1(v1537, y_add(Y_DEFI(F.p3140), Y_DEFI(F.p3141)))] = Y_DEFP(F.v7347);
F.v7347 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7347)))).f_next);
}
(*F.p3140_o) = F.p3140;
(*F.p3141_o) = F.p3141;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3146_CheckUnresolved(void * a_p3147, void * a_p3148, rt_int a_p3149) {
struct yf3150 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3147 = a_p3147;
F.p3148 = a_p3148;
F.p3149 = a_p3149;
F.v7366 = Y_UNDEF_P;
if ((((!(Y_DEFI(((*(yR110 *)y_deref(F.p3147))).f_kind) == v843))) || ((!(Y_DEFI(((*(yR110 *)y_deref(F.p3148))).f_kind) == v822))))) {
y_use = F.yu; return;
}
F.v7366 = Y_DEFP(((*(yR110 *)y_deref(F.p3148))).f_idx);
while ((!(Y_DEFP(F.v7366) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v7366)))).f_kind) == v804))) {
yr1178_FailS(F.p3149, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v7366 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v7366)))).f_link);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3154_SameAsFormal(void * a_p3155, void * a_p3156) {
struct yf3157 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3155 = a_p3155;
F.p3156 = a_p3156;
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3155))).f_kind) == v855)) {
{ rt_int rv7372 = 1;
y_use = F.yu; return rv7372; }
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3155))).f_kind) == v843)) {
if ((!((((Y_DEFI(((*(yR110 *)y_deref(F.p3156))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3156))).f_kind) == v843)))))) {
{ rt_int rv7374 = 0;
y_use = F.yu; return rv7374; }
}
{ rt_int rv7375 = yr2521_Identical(Y_DEFP(((*(yR110 *)y_deref(F.p3155))).f_elem), Y_DEFP(((*(yR110 *)y_deref(F.p3156))).f_elem));
y_use = F.yu; return rv7375; }
}
{ rt_int rv7376 = yr2521_Identical(F.p3155, F.p3156);
y_use = F.yu; return rv7376; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3161_CallCode(void * a_p3162, rt_int a_p3163, rt_int a_p3164, rt_int a_p3165) {
struct yf3166 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3162 = a_p3162;
F.p3163 = a_p3163;
F.p3164 = a_p3164;
F.p3165 = a_p3165;
F.v7383 = Y_UNDEF_P;
F.v7383 = Y_DEFP(((*(yR125 *)y_deref(F.p3162))).f_params);
F.v7385 = Y_UNDEF_I;
F.v7385 = y_range(y_add(F.p3163, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7389 = Y_UNDEF_I;
F.v7389 = 1;
F.v7392 = Y_UNDEF_I;
F.v7392 = INT64_C(0);
F.v7395 = Y_UNDEF_I;
F.v7395 = INT64_C(0);
F.v7398 = Y_UNDEF_I;
F.v7398 = INT64_C(0);
F.v7401 = Y_UNDEF_I;
F.v7401 = INT64_C(0);
F.v7404 = Y_UNDEF_I;
F.v7404 = INT64_C(0);
if ((!(F.p3164 == Y_DEFI(((*(yR125 *)y_deref(F.p3162))).f_nparams)))) {
yr1186_FailN(F.p3165, Y_DEFI(((*(yR125 *)y_deref(F.p3162))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3476_CheckActuals(F.p3162, F.p3163, F.p3165);
yr1026_SB();
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3162))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3162))).f_level) > INT64_C(1))) {
yr1044_ST(yr2374_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3162))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7389 = 0;
}
while ((!(Y_DEFP(F.v7383) == ((void *)0)))) {
Y_TICK();
if ((!Y_DEFI(F.v7389))) {
yr1037_SA(y_str(", ", 2));
}
F.v7389 = 0;
if ((!yr3116_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))])))) {
v927 = 0;
yr2486_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))]));
}
yr3146_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep)))).f_kind) == v855)) {
if (((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_cls) == v897))) && (!yr2939_IsVariable(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))])))).f_kind) == v855))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr1044_ST(yr2785_SpaceArg(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))]), Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v7385))]), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_cls) == v897)) {
yr1044_ST(yr2911_Convert(Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v7385))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))])));
} else {
if ((!yr2939_IsVariable(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))) {
v927 = 0;
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_name), y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2945_CheckPure(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))]));
yr3443_NoteWrite(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))]));
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_cls) == v903)) && yr2793_PackedComponent(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_name), y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
}
if (yr3154_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))]))) {
yr1037_SA(y_str("&", 1));
yr1044_ST(yr3013_RawCode(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))]), Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v7385))])));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_cls) == v903)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v7398 = yr1200_Fresh(y_str("yo", 2));
F.v7392 = yr3388_Join(Y_DEFI(F.v7392), yr3388_Join(yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep)), yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7398)), yr1061_T(y_str(";", 1)));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep)))).f_kind) == v843)) {
F.v7392 = yr3388_Join(Y_DEFI(F.v7392), yr3388_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v7398), yr1061_T(y_str(" = y_like(", 10))), yr3388_Join(yr3013_RawCode(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))]), Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v7385))])), yr3388_Join(yr1061_T(y_str(", ", 2)), yr3170_Num(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))])))).f_nidx)), yr1061_T(y_str(", ", 2))), yr3388_Join(yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep)))).f_elem)), yr1061_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2436_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep))) {
F.v7392 = yr3388_Join(Y_DEFI(F.v7392), yr3388_Join(yr1061_T(y_str(" y_init(", 8)), yr2467_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep)), yr1061_T(y_str(", &", 3))), yr3388_Join(Y_DEFI(F.v7398), yr1061_T(y_str(");", 2)), INT64_C(0)));
}
F.v7395 = yr3388_Join(Y_DEFI(F.v7395), yr1061_T(y_str(" ", 1)), yr2919_StoreText(yr3013_RawCode(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))]), Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v7385))])), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v7385))]), Y_DEFI(F.v7398), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_rep), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v7385))])))).f_line)));
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7398));
}
}
F.v7385 = y_range(y_add(Y_DEFI(F.v7385), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7383 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7383)))).f_next);
}
yr1037_SA(y_str(")", 1));
v1539 = F.p3163;
F.v7401 = yr1056_SE();
if ((Y_DEFI(F.v7392) == INT64_C(0))) {
{ rt_int rv7440 = Y_DEFI(F.v7401);
y_use = F.yu; return rv7440; }
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v7392));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3162))).f_ret)))).f_kind) == v852)) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7401));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7395));
yr1037_SA(y_str(" })", 3));
} else {
F.v7404 = yr1200_Fresh(y_str("yv", 2));
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR125 *)y_deref(F.p3162))).f_ret)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7404));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v7401));
yr1037_SA(y_str(";", 1));
yr1044_ST(Y_DEFI(F.v7395));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7404));
yr1037_SA(y_str("; })", 4));
}
{ rt_int rv7452 = yr1056_SE();
y_use = F.yu; return rv7452; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3170_Num(rt_int a_p3171) {
struct yf3172 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3171 = a_p3171;
yr1026_SB();
yr1050_SI(F.p3171);
{ rt_int rv7455 = yr1056_SE();
y_use = F.yu; return rv7455; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3176_UserOp(void * a_p3177, rt_int a_p3178, void * a_p3179, void * a_p3180, rt_int * a_p3181, void * * a_p3182) {
struct yf3183 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3177 = a_p3177;
F.p3178 = a_p3178;
F.p3179 = a_p3179;
F.p3180 = a_p3180;
F.p3181_o = a_p3181;
F.p3182_o = a_p3182;
F.v7464 = Y_UNDEF_P;
F.v7466 = Y_UNDEF_P;
F.v7468 = Y_UNDEF_I;
F.v7470 = Y_UNDEF_I;
F.v7464 = yr2288_Find(F.p3178);
if ((Y_DEFP(F.v7464) == ((void *)0))) {
{ rt_int rv7472 = 0;
(*F.p3181_o) = F.p3181;
(*F.p3182_o) = F.p3182;
y_use = F.yu; return rv7472; }
}
F.v7464 = yr2393_Real(Y_DEFP(F.v7464));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7464)))).f_kind) == v876))) {
{ rt_int rv7474 = 0;
(*F.p3181_o) = F.p3181;
(*F.p3182_o) = F.p3182;
y_use = F.yu; return rv7474; }
}
((*(yR105 *)y_deref(F.p3179))).f_next = F.p3180;
if ((!(F.p3180 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3180))).f_next = ((void *)0);
}
yr3137_CompileArgs(F.p3179, ((void *)0), &F.v7468, &F.v7470);
F.v7466 = yr3123_Choose(Y_DEFP(F.v7464), Y_DEFI(F.v7468), Y_DEFI(F.v7470));
if ((Y_DEFP(F.v7466) == ((void *)0))) {
v1539 = Y_DEFI(F.v7468);
if (yr3131_HidesStandard(Y_DEFP(F.v7464))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3177))).f_line), F.p3178, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv7477 = 0;
(*F.p3181_o) = F.p3181;
(*F.p3182_o) = F.p3182;
y_use = F.yu; return rv7477; }
}
yr3187_NoteCall(Y_DEFP(F.v7466), Y_DEFI(((*(yR105 *)y_deref(F.p3177))).f_line));
F.p3181 = yr3161_CallCode(Y_DEFP(F.v7466), Y_DEFI(F.v7468), Y_DEFI(F.v7470), Y_DEFI(((*(yR105 *)y_deref(F.p3177))).f_line));
F.p3182 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7466)))).f_ret);
{ rt_int rv7479 = 1;
(*F.p3181_o) = F.p3181;
(*F.p3182_o) = F.p3182;
y_use = F.yu; return rv7479; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3187_NoteCall(void * a_p3188, rt_int a_p3189) {
struct yf3190 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3188 = a_p3188;
F.p3189 = a_p3189;
F.v7484 = Y_UNDEF_P;
F.v7486 = Y_UNDEF_P;
F.v7486 = F.p3188;
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7486)))).f_kind) == v876)) && ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7486)))).f_target) == ((void *)0)))))) {
F.v7486 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7486)))).f_target);
}
if ((!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7486)))).f_func))) {
v1660 = y_range(y_add(Y_DEFI(v1660), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
F.v7484 = yr1944_NewNode(v669, F.p3189);
((*(yR105 *)y_deref(Y_DEFP(F.v7484)))).f_sym = Y_DEFP(F.v7486);
((*(yR105 *)y_deref(Y_DEFP(F.v7484)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_calls);
((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_calls = Y_DEFP(F.v7484);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3194_Directive(void * a_p3195, void * a_p3196, rt_int a_p3197, rt_int a_p3198, rt_int * a_p3199, void * * a_p3200) {
struct yf3201 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3195 = a_p3195;
F.p3196 = a_p3196;
F.p3197 = a_p3197;
F.p3198 = a_p3198;
F.p3199_o = a_p3199;
F.p3200_o = a_p3200;
F.v7497 = Y_UNDEF_I;
F.v7499 = Y_UNDEF_I;
F.v7501 = Y_UNDEF_I;
v1539 = F.p3197;
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3196))).f_a), &F.v7497, &F.v7499);
if (((!Y_DEFI(F.v7497)) || ((!(F.p3198 == INT64_C(1)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3196))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3196))).f_name), y_str(" takes a manifest TRAP_KIND (XIV.XIII.2)", 40));
}
F.v7501 = INT64_C(0);
if ((Y_DEFI(F.v7499) == INT64_C(0))) {
F.v7501 = v1480;
} else if ((Y_DEFI(F.v7499) == INT64_C(1))) {
F.v7501 = v1483;
} else if ((Y_DEFI(F.v7499) == INT64_C(2))) {
F.v7501 = v1486;
} else if ((Y_DEFI(F.v7499) == INT64_C(6))) {
F.v7501 = v1489;
}
F.p3200 = Y_DEFP(v1348);
F.p3199 = yr1061_T(y_str("((void)0)", 9));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3195))).f_mval) == v1492)) {
if ((!yr3205_Suppressed(Y_DEFI(F.v7501)))) {
v1663 = y_range(y_add(Y_DEFI(v1663), Y_DEFI(F.v7501)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else if ((Y_DEFI(((*(yR125 *)y_deref(F.p3195))).f_mval) == v1495)) {
if (yr3205_Suppressed(Y_DEFI(F.v7501))) {
v1663 = y_range(y_sub(Y_DEFI(v1663), Y_DEFI(F.v7501)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else {
F.p3200 = Y_DEFP(v1344);
if ((yr3205_Suppressed(Y_DEFI(F.v7501)) && ((!(Y_DEFI(F.v7501) == INT64_C(0)))))) {
F.p3199 = yr1061_T(y_str("1", 1));
} else {
F.p3199 = yr1061_T(y_str("0", 1));
}
}
(*F.p3199_o) = F.p3199;
(*F.p3200_o) = F.p3200;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3205_Suppressed(rt_int a_p3206) {
struct yf3207 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3206 = a_p3206;
if ((F.p3206 == INT64_C(0))) {
{ rt_int rv7519 = 0;
y_use = F.yu; return rv7519; }
}
{ rt_int rv7524 = ((y_mod((y_div(Y_DEFI(v1663), F.p3206)), INT64_C(2))) == INT64_C(1));
y_use = F.yu; return rv7524; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3211_UserAssign(rt_int a_p3212, void * a_p3213, rt_int a_p3214, void * a_p3215, rt_int a_p3216) {
struct yf3217 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3212 = a_p3212;
F.p3213 = a_p3213;
F.p3214 = a_p3214;
F.p3215 = a_p3215;
F.p3216 = a_p3216;
F.v7532 = Y_UNDEF_P;
F.v7534 = Y_UNDEF_P;
F.v7536 = Y_UNDEF_P;
F.v7538 = Y_UNDEF_P;
F.v7540 = Y_UNDEF_I;
F.v7532 = yr2288_Find(y_range(v531, INT64_C(0), INT64_C(4000000)));
if ((Y_DEFP(F.v7532) == ((void *)0))) {
{ rt_int rv7542 = INT64_C(0);
y_use = F.yu; return rv7542; }
}
F.v7532 = yr2393_Real(Y_DEFP(F.v7532));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7532)))).f_kind) == v876))) {
{ rt_int rv7544 = INT64_C(0);
y_use = F.yu; return rv7544; }
}
F.v7534 = Y_DEFP(F.v7532);
while ((!(Y_DEFP(F.v7534) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_nparams) == INT64_C(2))) {
F.v7536 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_params);
F.v7538 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_next);
if ((((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_cls) == v897))) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v7538)))).f_cls) == v897))) && yr2479_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep), F.p3213)) && yr2479_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7538)))).f_rep), F.p3215))) {
if ((Y_DEFP(v1628) == Y_DEFP(F.v7534))) {
{ rt_int rv7547 = INT64_C(0);
y_use = F.yu; return rv7547; }
}
yr3187_NoteCall(Y_DEFP(F.v7534), F.p3216);
yr1026_SB();
if (yr2521_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep), F.p3213)) {
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2374_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.p3212);
} else {
F.v7540 = yr1200_Fresh(y_str("yo", 2));
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7540));
yr1037_SA(y_str(";", 1));
if (yr2436_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep))) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep)));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7540));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_cname));
yr1037_SA(y_str("(", 1));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_level) > INT64_C(1))) {
yr1044_ST(yr2374_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(Y_DEFI(F.v7540));
}
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2911_Convert(F.p3214, Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7538)))).f_rep), F.p3215));
yr1037_SA(y_str(");", 2));
if ((!yr2521_Identical(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep), F.p3213))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2919_StoreText(F.p3212, F.p3213, Y_DEFI(F.v7540), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v7536)))).f_rep), F.p3216));
yr1037_SA(y_str(" }", 2));
}
{ rt_int rv7572 = yr1056_SE();
y_use = F.yu; return rv7572; }
}
}
F.v7534 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7534)))).f_alt);
}
{ rt_int rv7574 = INT64_C(0);
y_use = F.yu; return rv7574; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3221_Assign(rt_int a_p3222, void * a_p3223, rt_int a_p3224, void * a_p3225, rt_int a_p3226) {
struct yf3227 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3222 = a_p3222;
F.p3223 = a_p3223;
F.p3224 = a_p3224;
F.p3225 = a_p3225;
F.p3226 = a_p3226;
F.v7582 = Y_UNDEF_I;
F.v7582 = yr3211_UserAssign(F.p3222, F.p3223, F.p3224, F.p3225, F.p3226);
if ((!(Y_DEFI(F.v7582) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v7582));
} else {
yr2929_Store(F.p3222, F.p3223, F.p3224, F.p3225, F.p3226);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3231_CallExpr(void * a_p3232, void * a_p3233, rt_int a_p3234, rt_int * a_p3235, void * * a_p3236) {
struct yf3237 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3232 = a_p3232;
F.p3233 = a_p3233;
F.p3234 = a_p3234;
F.p3235_o = a_p3235;
F.p3236_o = a_p3236;
F.v7591 = Y_UNDEF_P;
F.v7593 = Y_UNDEF_P;
F.v7595 = Y_UNDEF_I;
F.v7597 = Y_UNDEF_I;
F.v7591 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line)));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_kind) == v891)) {
yr3873_StdCall(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_mval), F.p3232, F.p3234, &F.p3235, &F.p3236);
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return;
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_kind) == v870)))) {
if (F.p3234) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line), y_str("a value is not a statement", 26));
}
yr3241_Denote(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_rep), F.p3232, &F.p3235, &F.p3236);
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return;
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_kind) == v876))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_name), y_str(" is not a routine", 17));
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7591)))).f_alt) == ((void *)0))) {
yr3137_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3232))).f_a), Y_DEFP(F.v7591), &F.v7595, &F.v7597);
F.v7593 = Y_DEFP(F.v7591);
} else {
yr3137_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3232))).f_a), ((void *)0), &F.v7595, &F.v7597);
F.v7593 = yr3123_Choose(Y_DEFP(F.v7591), Y_DEFI(F.v7595), Y_DEFI(F.v7597));
if ((Y_DEFP(F.v7593) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_name), y_str(": no definition takes actuals of these types", 44));
}
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v7593))))).f_mval) == INT64_C(0)))) {
yr3194_Directive(yr2393_Real(Y_DEFP(F.v7593)), F.p3232, Y_DEFI(F.v7595), Y_DEFI(F.v7597), &F.p3235, &F.p3236);
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return;
}
yr3187_NoteCall(Y_DEFP(F.v7593), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line));
F.p3235 = yr3161_CallCode(Y_DEFP(F.v7593), Y_DEFI(F.v7595), Y_DEFI(F.v7597), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line));
F.p3236 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v7593)))).f_ret);
if ((F.p3234 && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3236)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_name), y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3234) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3236)))).f_kind) == v852)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3232))).f_name), y_str(" returns no value", 17));
}
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3241_Denote(void * a_p3242, void * a_p3243, rt_int * a_p3244, void * * a_p3245) {
struct yf3246 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3242 = a_p3242;
F.p3243 = a_p3243;
F.p3244_o = a_p3244;
F.p3245_o = a_p3245;
F.v7610 = Y_UNDEF_P;
F.v7610 = Y_DEFP(((*(yR105 *)y_deref(F.p3243))).f_a);
F.v7612 = Y_UNDEF_P;
F.v7614 = Y_UNDEF_I;
F.v7616 = Y_UNDEF_I;
F.v7618 = Y_UNDEF_I;
F.v7620 = Y_UNDEF_P;
F.v7622 = Y_UNDEF_I;
F.v7624 = Y_UNDEF_I;
F.v7626 = Y_UNDEF_I;
F.v7628 = Y_UNDEF_I;
F.v7630 = Y_UNDEF_I;
F.v7630 = INT64_C(0);
F.v7633 = Y_UNDEF_I;
F.v7635 = Y_UNDEF_P;
F.v7637 = Y_UNDEF_I;
F.v7637 = 1;
F.p3245 = F.p3242;
if (Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_abstract)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3243))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_tname), y_str(" has no representation to denote a value of", 43));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_kind) == v825)) {
if (Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_opaque)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3243))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_tname), y_str(" is opaque here (X.B.3)", 23));
}
yr1026_SB();
yr1037_SA(y_str("((", 2));
yr1044_ST(Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_cname));
yr1037_SA(y_str("){ ", 3));
F.v7616 = yr1056_SE();
F.v7612 = Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_fields);
while ((!(Y_DEFP(F.v7612) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_variant) == INT64_C(0))) || ((Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_variant) == Y_DEFI(F.v7630))))) {
if ((Y_DEFP(F.v7610) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3243))).f_line), y_str("too few components in this record value", 39));
}
yr2978_Expr(Y_DEFP(F.v7610), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_rep), &F.v7614, &F.v7620);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_line), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_rep), Y_DEFP(F.v7620));
if ((Y_DEFP(F.v7612) == Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_selector))) {
yr2830_Manifest(Y_DEFP(F.v7610), &F.v7628, &F.v7633);
if ((!Y_DEFI(F.v7628))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_line), y_str("the case-selection value is a manifest constant", 47));
}
F.v7630 = yr3250_VariantOf(F.p3242, Y_DEFI(F.v7633), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_line));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7616));
if ((!Y_DEFI(F.v7637))) {
yr1037_SA(y_str(", ", 2));
}
F.v7637 = 0;
yr1037_SA(y_str(".f_", 3));
yr1044_ST(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_name));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2911_Convert(Y_DEFI(F.v7614), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_rep), Y_DEFP(F.v7620)));
F.v7616 = yr1056_SE();
F.v7610 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_next);
}
F.v7612 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7612)))).f_next);
}
if ((!(Y_DEFP(F.v7610) == ((void *)0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3243))).f_line), y_str("too many components in this record value", 40));
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str(" })", 3));
F.p3244 = yr1056_SE();
(*F.p3244_o) = F.p3244;
(*F.p3245_o) = F.p3245;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_kind) == v822)) {
F.v7622 = yr1959_Count(Y_DEFP(F.v7610));
F.v7616 = yr1200_Fresh(y_str("da", 2));
if ((Y_DEFI(F.v7622) == INT64_C(1))) {
yr2978_Expr(Y_DEFP(F.v7610), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), &F.v7614, &F.v7620);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), Y_DEFP(F.v7620));
F.v7618 = yr1200_Fresh(y_str("dv", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7618));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2911_Convert(Y_DEFI(F.v7614), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), Y_DEFP(F.v7620)));
yr1037_SA(y_str("; y_fill(", 9));
yr1044_ST(yr2467_DescOf(F.p3242));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7618));
yr1037_SA(y_str("); })", 5));
F.p3244 = yr1056_SE();
(*F.p3244_o) = F.p3244;
(*F.p3245_o) = F.p3245;
y_use = F.yu; return;
}
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str("; y_init(", 9));
yr1044_ST(yr2467_DescOf(F.p3242));
yr1037_SA(y_str(", &", 3));
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_nidx));
yr1037_SA(y_str(") != ", 5));
yr1050_SI(Y_DEFI(F.v7622));
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("wrong number of components", 26));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
F.p3244 = yr1056_SE();
F.v7626 = INT64_C(0);
while ((!(Y_DEFP(F.v7610) == ((void *)0)))) {
Y_TICK();
yr2978_Expr(Y_DEFP(F.v7610), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), &F.v7614, &F.v7620);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), Y_DEFP(F.v7620));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3244));
if (yr2436_Deep(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem))) {
yr1037_SA(y_str(" { ", 3));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(" dv = ", 6));
yr1044_ST(Y_DEFI(F.v7614));
yr1037_SA(y_str("; y_copy(", 9));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(", &((", 5));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v7626));
yr1037_SA(y_str("], &dv); }", 10));
} else {
yr1037_SA(y_str(" ((", 3));
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(Y_DEFI(F.v7626));
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2911_Convert(Y_DEFI(F.v7614), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), Y_DEFP(F.v7620)));
yr1037_SA(y_str(";", 1));
}
F.p3244 = yr1056_SE();
F.v7626 = y_range(y_add(Y_DEFI(F.v7626), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7610 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_next);
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3244));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v7616));
yr1037_SA(y_str("; })", 4));
F.p3244 = yr1056_SE();
(*F.p3244_o) = F.p3244;
(*F.p3245_o) = F.p3245;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_kind) == v834)) {
yr1026_SB();
yr1037_SA(y_str("y_set_new(", 10));
yr1044_ST(yr2542_LoText(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2548_HiText(Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem)));
yr1037_SA(y_str(")", 1));
F.p3244 = yr1056_SE();
while ((!(Y_DEFP(F.v7610) == ((void *)0)))) {
Y_TICK();
yr2978_Expr(Y_DEFP(F.v7610), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), &F.v7614, &F.v7620);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_line), Y_DEFP(((*(yR110 *)y_deref(F.p3242))).f_elem), Y_DEFP(F.v7620));
F.p3244 = yr3067_Call2(y_str("y_set_add", 9), Y_DEFI(F.p3244), Y_DEFI(F.v7614));
F.v7610 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7610)))).f_next);
}
(*F.p3244_o) = F.p3244;
(*F.p3245_o) = F.p3245;
y_use = F.yu; return;
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3243))).f_line), Y_DEFI(((*(yR110 *)y_deref(F.p3242))).f_tname), y_str(" has no denotations of values", 29));
(*F.p3244_o) = F.p3244;
(*F.p3245_o) = F.p3245;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3250_VariantOf(void * a_p3251, rt_int a_p3252, rt_int a_p3253) {
struct yf3254 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3251 = a_p3251;
F.p3252 = a_p3252;
F.p3253 = a_p3253;
F.v7699 = Y_UNDEF_P;
F.v7699 = Y_DEFP(((*(yR110 *)y_deref(F.p3251))).f_fields);
F.v7701 = Y_UNDEF_P;
F.v7703 = Y_UNDEF_I;
F.v7705 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v7699) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7699)))).f_variant) == INT64_C(0)))) {
F.v7701 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7699)))).f_labels);
while ((!(Y_DEFP(F.v7701) == ((void *)0)))) {
Y_TICK();
yr2830_Manifest(Y_DEFP(F.v7701), &F.v7703, &F.v7705);
if ((Y_DEFI(F.v7703) && ((Y_DEFI(F.v7705) == F.p3252)))) {
{ rt_int rv7707 = Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(F.v7699)))).f_variant);
y_use = F.yu; return rv7707; }
}
F.v7701 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7701)))).f_next);
}
}
F.v7699 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v7699)))).f_next);
}
{ rt_int rv7709 = INT64_C(-1);
y_use = F.yu; return rv7709; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3258_Emit2(yarr a_p3260, rt_int a_p3261) {
struct yf3262 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3260 = a_p3260;
F.p3261 = a_p3261;
F.v7714 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3260);
yr1044_ST(F.p3261);
F.v7714 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v7714));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3266_Emit3(yarr a_p3268, rt_int a_p3269, yarr a_p3271) {
struct yf3272 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3268 = a_p3268;
F.p3269 = a_p3269;
F.p3271 = a_p3271;
F.v7720 = Y_UNDEF_I;
yr1026_SB();
yr1037_SA(F.p3268);
yr1044_ST(F.p3269);
yr1037_SA(F.p3271);
F.v7720 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v7720));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3276_PopTo(rt_int a_p3277) {
struct yf3278 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3277 = a_p3277;
if ((Y_DEFI(v1553) > F.p3277)) {
yr3266_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1551).p)[y_ix1(v1551, y_add(F.p3277, INT64_C(1)))]), y_str(".prev;", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3282_LeaveBlock(void) {
struct yf3283 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFI(v1581) > INT64_C(0))) {
if ((!(Y_DEFI(((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))]) == INT64_C(0)))) {
yr3266_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))]), y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3287_RaiseCode(rt_int a_p3288) {
struct yf3289 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3288 = a_p3288;
yr1026_SB();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
yr1031_SC(34);
yr1044_ST(F.p3288);
yr1031_SC(34);
yr1037_SA(y_str("));", 3));
{ rt_int rv7738 = yr1056_SE();
y_use = F.yu; return rv7738; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3293_BlockStatements(void * a_p3294) {
struct yf3295 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3294 = a_p3294;
F.v7742 = Y_UNDEF_I;
F.v7742 = Y_DEFI(v1663);
yr3299_BlockStatements1(F.p3294);
v1663 = Y_DEFI(F.v7742);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3299_BlockStatements1(void * a_p3300) {
struct yf3301 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3300 = a_p3300;
F.v7746 = Y_UNDEF_I;
F.v7748 = Y_UNDEF_I;
F.v7750 = Y_UNDEF_I;
F.v7752 = Y_UNDEF_P;
F.v7754 = Y_UNDEF_P;
F.v7756 = Y_UNDEF_I;
F.v7758 = Y_UNDEF_P;
F.v7758 = Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_a);
F.v7760 = Y_UNDEF_I;
F.v7760 = INT64_C(0);
while ((!(Y_DEFP(F.v7758) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7758)))).f_kind) == v645)) && ((Y_DEFI(F.v7760) == INT64_C(0))))) {
F.v7760 = yr1200_Fresh(y_str("xs", 2));
yr3266_Emit3(y_str("rt_frame *", 10), Y_DEFI(F.v7760), y_str(" = rt_xtop;", 11));
}
F.v7758 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7758)))).f_next);
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_b) == ((void *)0))) {
v1581 = y_range(y_add(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))] = INT64_C(0);
((rt_int *)(v1579).p)[y_ix1(v1579, Y_DEFI(v1581))] = Y_DEFI(F.v7760);
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_c));
v1581 = y_range(y_sub(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3420_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_a));
y_use = F.yu; return;
}
v1657 = 1;
F.v7746 = yr1200_Fresh(y_str("xf", 2));
yr3266_Emit3(y_str("{ rt_frame ", 11), Y_DEFI(F.v7746), y_str(";", 1));
yr3266_Emit3(y_str("if (RT_TRY(", 11), Y_DEFI(F.v7746), y_str(")) {", 4));
v1553 = y_range(y_add(Y_DEFI(v1553), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1551).p)[y_ix1(v1551, Y_DEFI(v1553))] = Y_DEFI(F.v7746);
v1581 = y_range(y_add(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))] = Y_DEFI(F.v7746);
((rt_int *)(v1579).p)[y_ix1(v1579, Y_DEFI(v1581))] = Y_DEFI(F.v7760);
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_c));
v1581 = y_range(y_sub(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1553 = y_range(y_sub(Y_DEFI(v1553), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3420_CheckLabels(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_a));
yr3266_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v7746), y_str(");", 2));
yr1138_EmitS(y_str("} else {", 8));
yr3266_Emit3(y_str("RT_POP(", 7), Y_DEFI(F.v7746), y_str(");", 2));
if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
}
F.v7748 = yr1200_Fresh(y_str("xc", 2));
yr3266_Emit3(y_str("int ", 4), Y_DEFI(F.v7748), y_str(" = rt_xcur;", 11));
v1581 = y_range(y_add(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))] = INT64_C(0);
((rt_int *)(v1579).p)[y_ix1(v1579, Y_DEFI(v1581))] = INT64_C(0);
v1595 = y_range(y_add(Y_DEFI(v1595), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1593).p)[y_ix1(v1593, Y_DEFI(v1595))] = Y_DEFI(F.v7748);
F.v7756 = 1;
F.v7752 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_b)))).f_a);
while ((!(Y_DEFP(F.v7752) == ((void *)0)))) {
Y_TICK();
yr1026_SB();
if (Y_DEFI(F.v7756)) {
yr1037_SA(y_str("if (", 4));
} else {
yr1037_SA(y_str("} else if (", 11));
}
F.v7756 = 0;
F.v7754 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7752)))).f_a);
while ((!(Y_DEFP(F.v7754) == ((void *)0)))) {
Y_TICK();
yr1044_ST(Y_DEFI(F.v7748));
yr1037_SA(y_str(" == rt_exc(", 11));
yr1031_SC(34);
yr1044_ST(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7754)))).f_name));
yr1031_SC(34);
yr1037_SA(y_str(")", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7754)))).f_next) == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
}
F.v7754 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7754)))).f_next);
}
yr1037_SA(y_str(") {", 3));
F.v7750 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v7750));
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7752)))).f_b));
F.v7752 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7752)))).f_next);
}
if ((!Y_DEFI(F.v7756))) {
yr1138_EmitS(y_str("} else {", 8));
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_b)))).f_flag) == INT64_C(1))) {
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3300))).f_b)))).f_b));
} else {
yr3266_Emit3(y_str("rt_raise(", 9), Y_DEFI(F.v7748), y_str(");", 2));
}
if ((!Y_DEFI(F.v7756))) {
yr1138_EmitS(y_str("}", 1));
}
v1595 = y_range(y_sub(Y_DEFI(v1595), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1581 = y_range(y_sub(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3305_SameDesig(void * a_p3306, void * a_p3307) {
struct yf3308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3306 = a_p3306;
F.p3307 = a_p3307;
F.v7826 = Y_UNDEF_P;
F.v7828 = Y_UNDEF_P;
F.v7830 = Y_UNDEF_I;
F.v7832 = Y_UNDEF_I;
F.v7834 = Y_UNDEF_I;
F.v7836 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_kind) == v801)) {
{ rt_int rv7837 = yr3305_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3306))).f_a), F.p3307);
y_use = F.yu; return rv7837; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3307))).f_kind) == v801)) {
{ rt_int rv7838 = yr3305_SameDesig(F.p3306, Y_DEFP(((*(yR105 *)y_deref(F.p3307))).f_a));
y_use = F.yu; return rv7838; }
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(F.p3307))).f_kind)))) {
{ rt_int rv7840 = 0;
y_use = F.yu; return rv7840; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_kind) == v777)) {
{ rt_int rv7841 = ((((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3307))).f_name))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3306))).f_d) == ((void *)0)))) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3307))).f_d) == ((void *)0))));
y_use = F.yu; return rv7841; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_kind) == v783)) {
{ rt_int rv7842 = (((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3307))).f_name))) && yr3305_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3306))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3307))).f_a)));
y_use = F.yu; return rv7842; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_kind) == v789)) {
{ rt_int rv7843 = yr3305_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3306))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3307))).f_a));
y_use = F.yu; return rv7843; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3306))).f_kind) == v786)) {
if ((!yr3305_SameDesig(Y_DEFP(((*(yR105 *)y_deref(F.p3306))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3307))).f_a)))) {
{ rt_int rv7845 = 0;
y_use = F.yu; return rv7845; }
}
F.v7826 = Y_DEFP(((*(yR105 *)y_deref(F.p3306))).f_b);
F.v7828 = Y_DEFP(((*(yR105 *)y_deref(F.p3307))).f_b);
while ((((!(Y_DEFP(F.v7826) == ((void *)0)))) && ((!(Y_DEFP(F.v7828) == ((void *)0)))))) {
Y_TICK();
yr2830_Manifest(Y_DEFP(F.v7826), &F.v7830, &F.v7834);
yr2830_Manifest(Y_DEFP(F.v7828), &F.v7832, &F.v7836);
if ((Y_DEFI(F.v7830) && Y_DEFI(F.v7832))) {
if ((!(Y_DEFI(F.v7834) == Y_DEFI(F.v7836)))) {
{ rt_int rv7847 = 0;
y_use = F.yu; return rv7847; }
}
} else if ((!yr3305_SameDesig(Y_DEFP(F.v7826), Y_DEFP(F.v7828)))) {
{ rt_int rv7849 = 0;
y_use = F.yu; return rv7849; }
}
F.v7826 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7826)))).f_next);
F.v7828 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7828)))).f_next);
}
{ rt_int rv7850 = (((Y_DEFP(F.v7826) == ((void *)0))) && ((Y_DEFP(F.v7828) == ((void *)0))));
y_use = F.yu; return rv7850; }
}
{ rt_int rv7852 = 0;
y_use = F.yu; return rv7852; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3312_CheckVariantSelected(void * a_p3313, void * a_p3314, void * a_p3315) {
struct yf3316 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3313 = a_p3313;
F.p3314 = a_p3314;
F.p3315 = a_p3315;
F.v7858 = Y_UNDEF_I;
F.v7858 = Y_DEFI(v1643);
F.v7860 = Y_UNDEF_P;
F.v7862 = Y_UNDEF_P;
F.v7864 = Y_UNDEF_P;
F.v7866 = Y_UNDEF_I;
F.v7868 = Y_UNDEF_I;
F.v7870 = Y_UNDEF_I;
F.v7872 = Y_UNDEF_I;
while ((Y_DEFI(F.v7858) > INT64_C(0))) {
Y_TICK();
F.v7860 = Y_DEFP(((void * *)(v1639).p)[y_ix1(v1639, Y_DEFI(F.v7858))]);
while ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7860)))).f_kind) == v801)) {
Y_TICK();
F.v7860 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7860)))).f_a);
}
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7860)))).f_kind) == v783)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7860)))).f_name) == Y_DEFI(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3314))).f_selector)))).f_name)))) && yr3305_SameDesig(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7860)))).f_a), Y_DEFP(((*(yR105 *)y_deref(F.p3313))).f_a)))) {
F.v7862 = Y_DEFP(((void * *)(v1641).p)[y_ix1(v1641, Y_DEFI(F.v7858))]);
if ((Y_DEFP(F.v7862) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3313))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3313))).f_name), y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(Y_DEFP(F.v7862) == ((void *)0)))) {
Y_TICK();
F.v7866 = yr3364_Label(Y_DEFP(F.v7862), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(((*(yR110 *)y_deref(F.p3314))).f_selector)))).f_rep));
F.v7872 = 0;
F.v7864 = Y_DEFP(((*(yR115 *)y_deref(F.p3315))).f_labels);
while ((!(Y_DEFP(F.v7864) == ((void *)0)))) {
Y_TICK();
yr2830_Manifest(Y_DEFP(F.v7864), &F.v7870, &F.v7868);
if ((Y_DEFI(F.v7870) && ((Y_DEFI(F.v7868) == Y_DEFI(F.v7866))))) {
F.v7872 = 1;
}
F.v7864 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7864)))).f_next);
}
if ((!Y_DEFI(F.v7872))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3313))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3313))).f_name), y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7862 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7862)))).f_next);
}
y_use = F.yu; return;
}
F.v7858 = y_range(y_sub(Y_DEFI(F.v7858), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3313))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3313))).f_name), y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3320_CheckCaseLabels(void * a_p3321, void * a_p3322) {
struct yf3323 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3321 = a_p3321;
F.p3322 = a_p3322;
F.v7885 = Y_UNDEF_P;
F.v7885 = Y_DEFP(((*(yR105 *)y_deref(F.p3321))).f_b);
F.v7887 = Y_UNDEF_P;
F.v7887 = Y_DEFP(((*(yR105 *)y_deref(F.p3321))).f_b);
F.v7889 = Y_UNDEF_I;
F.v7889 = INT64_C(0);
F.v7892 = Y_UNDEF_I;
F.v7892 = INT64_C(0);
while ((!(Y_DEFP(F.v7885) == ((void *)0)))) {
Y_TICK();
F.v7887 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7885)))).f_a);
while ((!(Y_DEFP(F.v7887) == ((void *)0)))) {
Y_TICK();
F.v7892 = yr3364_Label(Y_DEFP(F.v7887), F.p3322);
F.lo7897 = INT64_C(1);
F.hi7898 = Y_DEFI(F.v7889);
{ rt_int hi7902 = F.hi7898;
for (rt_int i7901 = F.lo7897; i7901 <= hi7902; i7901++) { F.c_7900 = i7901; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1655).p)[y_ix1(v1655, F.c_7900)]) == Y_DEFI(F.v7892))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7887)))).f_line), y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7901 == hi7902) break;
}}
if ((Y_DEFI(F.v7889) < INT64_C(4096))) {
F.v7889 = y_range(y_add(Y_DEFI(F.v7889), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1655).p)[y_ix1(v1655, Y_DEFI(F.v7889))] = Y_DEFI(F.v7892);
}
F.v7887 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7887)))).f_next);
}
F.v7885 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7885)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3327_Falls(void * a_p3328) {
struct yf3329 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3328 = a_p3328;
F.v7910 = Y_UNDEF_P;
F.v7910 = F.p3328;
F.v7912 = Y_UNDEF_I;
F.v7912 = 1;
while ((!(Y_DEFP(F.v7910) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7910)))).f_text) == INT64_C(0)))) {
F.v7912 = 1;
}
if (Y_DEFI(F.v7912)) {
F.v7912 = yr3339_Completes(Y_DEFP(F.v7910));
}
F.v7910 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7910)))).f_next);
}
{ rt_int rv7916 = Y_DEFI(F.v7912);
y_use = F.yu; return rv7916; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3333_BlockFalls(void * a_p3334) {
struct yf3335 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3334 = a_p3334;
F.v7920 = Y_UNDEF_P;
if (yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3334))).f_c))) {
{ rt_int rv7922 = 1;
y_use = F.yu; return rv7922; }
}
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3334))).f_b) == ((void *)0))) {
{ rt_int rv7924 = 0;
y_use = F.yu; return rv7924; }
}
F.v7920 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3334))).f_b)))).f_a);
while ((!(Y_DEFP(F.v7920) == ((void *)0)))) {
Y_TICK();
if (yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7920)))).f_b))) {
{ rt_int rv7926 = 1;
y_use = F.yu; return rv7926; }
}
F.v7920 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7920)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3334))).f_b)))).f_flag) == INT64_C(1))) {
{ rt_int rv7928 = yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3334))).f_b)))).f_b));
y_use = F.yu; return rv7928; }
}
{ rt_int rv7930 = 0;
y_use = F.yu; return rv7930; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3339_Completes(void * a_p3340) {
struct yf3341 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3340 = a_p3340;
F.v7934 = Y_UNDEF_I;
F.v7934 = Y_DEFI(((*(yR105 *)y_deref(F.p3340))).f_kind);
F.v7936 = Y_UNDEF_P;
F.v7938 = Y_UNDEF_I;
F.v7940 = Y_UNDEF_I;
if (((((((Y_DEFI(F.v7934) == v729)) || ((Y_DEFI(F.v7934) == v732))) || ((Y_DEFI(F.v7934) == v735))) || ((Y_DEFI(F.v7934) == v723))) || ((Y_DEFI(F.v7934) == v726)))) {
{ rt_int rv7942 = 0;
y_use = F.yu; return rv7942; }
}
if ((Y_DEFI(F.v7934) == v738)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3340))).f_flag) == INT64_C(1)))) {
{ rt_int rv7945 = 1;
y_use = F.yu; return rv7945; }
}
F.v7936 = Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_a);
while ((!(Y_DEFP(F.v7936) == ((void *)0)))) {
Y_TICK();
if (yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7936)))).f_b))) {
{ rt_int rv7947 = 1;
y_use = F.yu; return rv7947; }
}
F.v7936 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7936)))).f_next);
}
{ rt_int rv7948 = yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_b));
y_use = F.yu; return rv7948; }
}
if ((Y_DEFI(F.v7934) == v741)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3340))).f_flag) == INT64_C(1)))) {
{ rt_int rv7951 = 1;
y_use = F.yu; return rv7951; }
}
F.v7936 = Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_b);
while ((!(Y_DEFP(F.v7936) == ((void *)0)))) {
Y_TICK();
if (yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7936)))).f_b))) {
{ rt_int rv7953 = 1;
y_use = F.yu; return rv7953; }
}
F.v7936 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7936)))).f_next);
}
{ rt_int rv7954 = yr3327_Falls(Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_c));
y_use = F.yu; return rv7954; }
}
if ((Y_DEFI(F.v7934) == v744)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_a), &F.v7938, &F.v7940);
{ rt_int rv7956 = (!((Y_DEFI(F.v7938) && ((Y_DEFI(F.v7940) == INT64_C(1))))));
y_use = F.yu; return rv7956; }
}
if ((Y_DEFI(F.v7934) == v750)) {
{ rt_int rv7957 = yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3340))).f_name));
y_use = F.yu; return rv7957; }
}
if ((Y_DEFI(F.v7934) == v753)) {
{ rt_int rv7958 = yr3333_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3340))).f_a));
y_use = F.yu; return rv7958; }
}
{ rt_int rv7960 = 1;
y_use = F.yu; return rv7960; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3345_Exits(void * a_p3346, rt_int a_p3347) {
struct yf3348 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3346 = a_p3346;
F.p3347 = a_p3347;
F.v7965 = Y_UNDEF_P;
F.v7965 = F.p3346;
F.v7967 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v7965) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v726)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_name) == F.p3347)))) {
{ rt_int rv7969 = 1;
y_use = F.yu; return rv7969; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v738)) {
F.v7967 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_a);
while ((!(Y_DEFP(F.v7967) == ((void *)0)))) {
Y_TICK();
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7967)))).f_b), F.p3347)) {
{ rt_int rv7971 = 1;
y_use = F.yu; return rv7971; }
}
F.v7967 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7967)))).f_next);
}
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_b), F.p3347)) {
{ rt_int rv7973 = 1;
y_use = F.yu; return rv7973; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v741)) {
F.v7967 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_b);
while ((!(Y_DEFP(F.v7967) == ((void *)0)))) {
Y_TICK();
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7967)))).f_b), F.p3347)) {
{ rt_int rv7975 = 1;
y_use = F.yu; return rv7975; }
}
F.v7967 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7967)))).f_next);
}
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_c), F.p3347)) {
{ rt_int rv7977 = 1;
y_use = F.yu; return rv7977; }
}
} else if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v744)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v747))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v750)))) {
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_b), F.p3347)) {
{ rt_int rv7979 = 1;
y_use = F.yu; return rv7979; }
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_kind) == v753)) {
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_a)))).f_c), F.p3347)) {
{ rt_int rv7981 = 1;
y_use = F.yu; return rv7981; }
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_a)))).f_b) == ((void *)0)))) {
F.v7967 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_a)))).f_b)))).f_a);
while ((!(Y_DEFP(F.v7967) == ((void *)0)))) {
Y_TICK();
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7967)))).f_b), F.p3347)) {
{ rt_int rv7983 = 1;
y_use = F.yu; return rv7983; }
}
F.v7967 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7967)))).f_next);
}
if (yr3345_Exits(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_a)))).f_b)))).f_b), F.p3347)) {
{ rt_int rv7985 = 1;
y_use = F.yu; return rv7985; }
}
}
}
F.v7965 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7965)))).f_next);
}
{ rt_int rv7987 = 0;
y_use = F.yu; return rv7987; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3352_Statements(void * a_p3353) {
struct yf3354 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3353 = a_p3353;
F.v7991 = Y_UNDEF_P;
F.v7991 = F.p3353;
while ((!(Y_DEFP(F.v7991) == ((void *)0)))) {
Y_TICK();
yr3376_Statement(Y_DEFP(F.v7991));
F.v7991 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v7991)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3358_Cond(void * a_p3359) {
struct yf3360 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3359 = a_p3359;
F.v7995 = Y_UNDEF_I;
F.v7997 = Y_UNDEF_P;
yr2978_Expr(F.p3359, Y_DEFP(v1344), &F.v7995, &F.v7997);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3359))).f_line), Y_DEFP(v1344), Y_DEFP(F.v7997));
{ rt_int rv7998 = Y_DEFI(F.v7995);
y_use = F.yu; return rv7998; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3364_Label(void * a_p3365, void * a_p3366) {
struct yf3367 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3365 = a_p3365;
F.p3366 = a_p3366;
F.v8003 = Y_UNDEF_I;
F.v8005 = Y_UNDEF_I;
F.v8007 = Y_UNDEF_P;
F.v8009 = Y_UNDEF_P;
F.v8011 = Y_UNDEF_I;
if (((((Y_DEFI(((*(yR105 *)y_deref(F.p3365))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(F.p3365))).f_d) == ((void *)0)))) && ((Y_DEFI(((*(yR110 *)y_deref(F.p3366))).f_kind) == v816)))) {
F.v8007 = yr2353_FindLit(Y_DEFI(((*(yR105 *)y_deref(F.p3365))).f_name), F.p3366);
if ((!(Y_DEFP(F.v8007) == ((void *)0)))) {
{ rt_int rv8012 = Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v8007))))).f_mval);
y_use = F.yu; return rv8012; }
}
}
yr2978_Expr(F.p3365, F.p3366, &F.v8011, &F.v8009);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3365))).f_line), F.p3366, Y_DEFP(F.v8009));
yr2830_Manifest(F.p3365, &F.v8003, &F.v8005);
if ((!Y_DEFI(F.v8003))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3365))).f_line), y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv8014 = Y_DEFI(F.v8005);
y_use = F.yu; return rv8014; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3371_CopyOut(void) {
struct yf3372 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8017 = Y_UNDEF_P;
F.v8019 = Y_UNDEF_I;
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
F.v8017 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_params);
while ((!(Y_DEFP(F.v8017) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_cls) == v900)) {
yr1026_SB();
yr1037_SA(y_str("(*F.", 4));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_cname));
yr1037_SA(y_str("_o)", 3));
F.v8019 = yr1056_SE();
if ((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_path) == INT64_C(0)))) {
yr3221_Assign(Y_DEFI(F.v8019), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_rep), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_path), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_rep), INT64_C(0));
} else {
yr3221_Assign(Y_DEFI(F.v8019), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_rep), yr2367_Path(Y_DEFI(v1279), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_cname)), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_rep), INT64_C(0));
}
}
F.v8017 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8017)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3376_Statement(void * a_p3377) {
struct yf3378 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3377 = a_p3377;
F.v8028 = Y_UNDEF_I;
F.v8028 = Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_kind);
F.v8030 = Y_UNDEF_I;
F.v8032 = Y_UNDEF_I;
F.v8034 = Y_UNDEF_I;
F.v8036 = Y_UNDEF_I;
F.v8038 = Y_UNDEF_I;
F.v8040 = Y_UNDEF_I;
F.v8042 = Y_UNDEF_P;
F.v8044 = Y_UNDEF_P;
F.v8046 = Y_UNDEF_P;
F.v8048 = Y_UNDEF_P;
F.v8050 = Y_UNDEF_I;
F.v8052 = Y_UNDEF_I;
F.v8054 = Y_UNDEF_I;
F.v8056 = Y_UNDEF_I;
F.v8058 = Y_UNDEF_P;
v1000 = Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_text) == INT64_C(0)))) {
yr3408_PlaceLabel(F.p3377);
}
if ((Y_DEFI(F.v8028) == v714)) {
yr2951_LValue(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a), &F.v8030, &F.v8042);
yr2945_CheckPure(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a));
yr3443_NoteWrite(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a));
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8042)))).f_kind) == v837)) || yr2449_HoldsSignal(Y_DEFP(F.v8042)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2455_NonAssignable(Y_DEFP(F.v8042))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_b), Y_DEFP(F.v8042), &F.v8032, &F.v8044);
F.v8034 = yr3211_UserAssign(Y_DEFI(F.v8030), Y_DEFP(F.v8042), Y_DEFI(F.v8032), Y_DEFP(F.v8044), Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line));
if ((!(Y_DEFI(F.v8034) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v8034));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8042)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8042)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8042)))).f_tname), y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2929_Store(Y_DEFI(F.v8030), Y_DEFP(F.v8042), Y_DEFI(F.v8032), Y_DEFP(F.v8044), Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line));
}
} else if ((Y_DEFI(F.v8028) == v717)) {
F.v8058 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a)))).f_name));
if ((!(Y_DEFP(F.v8058) == ((void *)0)))) {
F.v8058 = yr2393_Real(Y_DEFP(F.v8058));
}
if ((((!(Y_DEFP(F.v8058) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8058)))).f_kind) == v885)))) {
yr3752_Activate(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a), Y_DEFP(F.v8058));
} else {
yr3231_CallExpr(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a), ((void *)0), 1, &F.v8030, &F.v8042);
yr3258_Emit2(y_str("", 0), Y_DEFI(F.v8030));
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8030));
yr1037_SA(y_str(";", 1));
F.v8034 = yr1056_SE();
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = Y_DEFI(F.v8034);
}
} else if ((Y_DEFI(F.v8028) == v738)) {
F.v8050 = 1;
F.v8046 = Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a);
while ((!(Y_DEFP(F.v8046) == ((void *)0)))) {
Y_TICK();
F.v8030 = yr3358_Cond(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_a));
if (Y_DEFI(F.v8050)) {
yr3266_Emit3(y_str("if (", 4), Y_DEFI(F.v8030), y_str(") {", 3));
} else {
yr3266_Emit3(y_str("} else if (", 11), Y_DEFI(F.v8030), y_str(") {", 3));
}
F.v8050 = 0;
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_b));
F.v8046 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_next);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_flag) == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_b));
}
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8028) == v744)) {
F.v8030 = yr3358_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a));
yr3266_Emit3(y_str("while (", 7), Y_DEFI(F.v8030), y_str(") {", 3));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_b));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8028) == v750)) {
F.v8036 = yr1200_Fresh(y_str("yl_", 3));
v1622 = y_range(y_add(Y_DEFI(v1622), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1607).p)[y_ix1(v1607, Y_DEFI(v1622))] = Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_name);
((rt_int *)(v1609).p)[y_ix1(v1609, Y_DEFI(v1622))] = Y_DEFI(F.v8036);
((rt_int *)(v1620).p)[y_ix1(v1620, Y_DEFI(v1622))] = Y_DEFI(v1553);
yr1138_EmitS(y_str("for (;;) {", 10));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_b));
yr1138_EmitS(y_str("}", 1));
yr3266_Emit3(y_str("", 0), Y_DEFI(F.v8036), y_str(": ;", 3));
v1622 = y_range(y_sub(Y_DEFI(v1622), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFI(F.v8028) == v726)) {
F.v8052 = 0;
F.v8054 = Y_DEFI(v1622);
while ((((Y_DEFI(F.v8054) > Y_DEFI(v1625))) && (!Y_DEFI(F.v8052)))) {
Y_TICK();
if ((Y_DEFI(((rt_int *)(v1607).p)[y_ix1(v1607, Y_DEFI(F.v8054))]) == Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_name))) {
F.v8052 = 1;
yr3276_PopTo(Y_DEFI(((rt_int *)(v1620).p)[y_ix1(v1620, Y_DEFI(F.v8054))]));
yr3266_Emit3(y_str("goto ", 5), Y_DEFI(((rt_int *)(v1609).p)[y_ix1(v1609, Y_DEFI(F.v8054))]), y_str(";", 1));
}
F.v8054 = y_range(y_sub(Y_DEFI(F.v8054), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!Y_DEFI(F.v8052))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_name), y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((Y_DEFI(F.v8028) == v747)) {
yr3382_ForStatement(F.p3377);
} else if ((Y_DEFI(F.v8028) == v741)) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a), ((void *)0), &F.v8030, &F.v8042);
if ((!yr2412_IsDiscrete(Y_DEFP(F.v8042)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3320_CheckCaseLabels(F.p3377, Y_DEFP(F.v8042));
yr3266_Emit3(y_str("switch (", 8), Y_DEFI(F.v8030), y_str(") {", 3));
F.v8046 = Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_b);
while ((!(Y_DEFP(F.v8046) == ((void *)0)))) {
Y_TICK();
F.v8048 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_a);
while ((!(Y_DEFP(F.v8048) == ((void *)0)))) {
Y_TICK();
F.v8056 = yr3364_Label(Y_DEFP(F.v8048), Y_DEFP(F.v8042));
yr1026_SB();
yr1037_SA(y_str("case ", 5));
yr1050_SI(Y_DEFI(F.v8056));
yr1037_SA(y_str(":", 1));
F.v8034 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8034));
F.v8048 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8048)))).f_next);
}
yr1138_EmitS(y_str("{", 1));
v1643 = y_range(y_add(Y_DEFI(v1643), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1639).p)[y_ix1(v1639, Y_DEFI(v1643))] = Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a);
((void * *)(v1641).p)[y_ix1(v1641, Y_DEFI(v1643))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_a);
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_b));
v1643 = y_range(y_sub(Y_DEFI(v1643), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
F.v8046 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8046)))).f_next);
}
yr1138_EmitS(y_str("default: {", 10));
v1643 = y_range(y_add(Y_DEFI(v1643), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1639).p)[y_ix1(v1639, Y_DEFI(v1643))] = Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a);
((void * *)(v1641).p)[y_ix1(v1641, Y_DEFI(v1643))] = ((void *)0);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_flag) == INT64_C(1))) {
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_c));
}
v1643 = y_range(y_sub(Y_DEFI(v1643), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
yr1138_EmitS(y_str("}", 1));
} else if ((Y_DEFI(F.v8028) == v729)) {
yr3396_ReturnStatement(F.p3377);
} else if ((Y_DEFI(F.v8028) == v735)) {
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_name) == INT64_C(0))) {
if ((Y_DEFI(v1595) == INT64_C(0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3266_Emit3(y_str("rt_raise(", 9), Y_DEFI(((rt_int *)(v1593).p)[y_ix1(v1593, Y_DEFI(v1595))]), y_str(");", 2));
} else {
yr3282_LeaveBlock();
yr1132_Emit(yr3287_RaiseCode(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_name)));
}
} else if ((((Y_DEFI(F.v8028) == v720)) && yr3205_Suppressed(v1486))) {
F.v8054 = INT64_C(0);
} else if ((Y_DEFI(F.v8028) == v720)) {
F.v8054 = Y_DEFI(v1660);
F.v8030 = yr3358_Cond(Y_DEFP(((*(yR105 *)y_deref(F.p3377))).f_a));
if ((!(Y_DEFI(v1660) == Y_DEFI(F.v8054)))) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3266_Emit3(y_str("if (!(", 6), Y_DEFI(F.v8030), y_str(")) {", 4));
yr3282_LeaveBlock();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((Y_DEFI(F.v8028) == v753)) {
yr3402_BeginStatement(F.p3377);
} else if ((Y_DEFI(F.v8028) == v732)) {
yr3782_TerminateStatement(F.p3377);
} else if ((Y_DEFI(F.v8028) == v723)) {
yr3414_GotoStatement(F.p3377);
} else {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3377))).f_line), y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3382_ForStatement(void * a_p3383) {
struct yf3384 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3383 = a_p3383;
F.v8133 = Y_UNDEF_P;
F.v8135 = Y_UNDEF_I;
F.v8137 = Y_UNDEF_I;
F.v8139 = Y_UNDEF_I;
F.v8141 = Y_UNDEF_P;
F.v8133 = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3383))).f_a), INT64_C(0), 0);
if ((((!yr2412_IsDiscrete(Y_DEFP(F.v8133))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8133)))).f_kind) == v813))) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8133)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8133)))).f_ordered)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3383))).f_line), y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2502_CheckRepresented(Y_DEFP(F.v8133), Y_DEFI(((*(yR105 *)y_deref(F.p3383))).f_line));
yr2265_OpenScope(0);
F.v8141 = yr2258_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(F.p3383))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v8141)))).f_rep = Y_DEFP(F.v8133);
((*(yR125 *)y_deref(Y_DEFP(F.v8141)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v8141)))).f_cname = yr1200_Fresh(y_str("c_", 2));
yr2380_DeclStorage(yr1061_T(y_str("rt_int", 6)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8141)))).f_cname));
yr2360_Define(Y_DEFP(F.v8141), Y_DEFI(((*(yR105 *)y_deref(F.p3383))).f_line));
F.v8135 = yr1200_Fresh(y_str("i", 1));
F.v8137 = yr1200_Fresh(y_str("hi", 2));
yr1026_SB();
yr1037_SA(y_str("{ rt_int ", 9));
yr1044_ST(Y_DEFI(F.v8137));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2548_HiText(Y_DEFP(F.v8133)));
yr1037_SA(y_str(";", 1));
F.v8139 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8139));
yr1026_SB();
yr1037_SA(y_str("for (rt_int ", 12));
yr1044_ST(Y_DEFI(F.v8135));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2542_LoText(Y_DEFP(F.v8133)));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8135));
yr1037_SA(y_str(" <= ", 4));
yr1044_ST(Y_DEFI(F.v8137));
yr1037_SA(y_str("; ", 2));
yr1044_ST(Y_DEFI(F.v8135));
yr1037_SA(y_str("++) { ", 6));
yr1044_ST(yr2387_SymPath(Y_DEFP(F.v8141)));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v8135));
yr1037_SA(y_str("; Y_TICK();", 11));
F.v8139 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8139));
yr3352_Statements(Y_DEFP(((*(yR105 *)y_deref(F.p3383))).f_b));
yr3266_Emit3(y_str("if (", 4), Y_DEFI(F.v8135), y_str(" == ", 4));
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t = yr3388_Join(Y_DEFI(((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_t), Y_DEFI(F.v8137), yr1061_T(y_str(") break;", 8)));
yr1138_EmitS(y_str("}}", 2));
yr2277_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3388_Join(rt_int a_p3389, rt_int a_p3390, rt_int a_p3391) {
struct yf3392 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3389 = a_p3389;
F.p3390 = a_p3390;
F.p3391 = a_p3391;
yr1026_SB();
yr1044_ST(F.p3389);
yr1044_ST(F.p3390);
yr1044_ST(F.p3391);
{ rt_int rv8169 = yr1056_SE();
y_use = F.yu; return rv8169; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3396_ReturnStatement(void * a_p3397) {
struct yf3398 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3397 = a_p3397;
F.v8173 = Y_UNDEF_I;
F.v8175 = Y_UNDEF_I;
F.v8177 = Y_UNDEF_I;
F.v8179 = Y_UNDEF_P;
F.v8181 = Y_UNDEF_P;
if ((Y_DEFP(v1628) == ((void *)0))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3397))).f_line), y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_kind) == v885)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3397))).f_line), y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v8181 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_ret);
if ((Y_DEFP(((*(yR105 *)y_deref(F.p3397))).f_a) == ((void *)0))) {
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8181)))).f_kind) == v852))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3397))).f_line), y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3371_CopyOut();
yr3777_LeaveMonitor();
yr3276_PopTo(Y_DEFI(v1556));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v8181)))).f_kind) == v852)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3397))).f_line), y_str("this routine returns no value (IX.A.6)", 38));
}
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3397))).f_a), Y_DEFP(F.v8181), &F.v8173, &F.v8179);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3397))).f_line), Y_DEFP(F.v8181), Y_DEFP(F.v8179));
F.v8177 = yr1200_Fresh(y_str("rv", 2));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2461_CType(Y_DEFP(F.v8181)));
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(F.v8177));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2911_Convert(Y_DEFI(F.v8173), Y_DEFP(F.v8181), Y_DEFP(F.v8179)));
yr1037_SA(y_str(";", 1));
F.v8175 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v8175));
yr3371_CopyOut();
yr3777_LeaveMonitor();
yr3276_PopTo(Y_DEFI(v1556));
yr3266_Emit3(y_str("y_use = F.yu; return ", 21), Y_DEFI(F.v8177), y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3402_BeginStatement(void * a_p3403) {
struct yf3404 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3403 = a_p3403;
F.v8197 = Y_UNDEF_I;
F.v8199 = Y_UNDEF_I;
yr1138_EmitS(y_str("{", 1));
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3403))).f_flag) == INT64_C(1))) {
F.v8197 = yr1200_Fresh(y_str("sf", 2));
F.v8199 = yr1200_Fresh(y_str("ys", 2));
v1657 = 1;
yr1132_Emit(yr3388_Join(yr1061_T(y_str("int ", 4)), Y_DEFI(F.v8199), yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v8197), yr1061_T(y_str(";", 1))));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), Y_DEFI(F.v8197), yr3388_Join(yr1061_T(y_str(")) { RT_POP(", 12)), Y_DEFI(F.v8197), yr3388_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8199), yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1553 = y_range(y_add(Y_DEFI(v1553), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1551).p)[y_ix1(v1551, Y_DEFI(v1553))] = Y_DEFI(F.v8197);
}
yr2265_OpenScope(0);
yr3615_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_a)))).f_a));
yr3293_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3403))).f_a));
yr3747_AwaitProcesses();
yr2277_CloseScope();
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3403))).f_flag) == INT64_C(1))) {
v1553 = y_range(y_sub(Y_DEFI(v1553), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("RT_POP(", 7)), Y_DEFI(F.v8197), yr3388_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), Y_DEFI(F.v8199), yr1061_T(y_str(";", 1)))));
}
yr1138_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3408_PlaceLabel(void * a_p3409) {
struct yf3410 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3409 = a_p3409;
F.v8226 = Y_UNDEF_P;
F.v8226 = yr2294_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_text));
if ((((Y_DEFP(F.v8226) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8226)))).f_kind) == v888))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_text), y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8226)))).f_hasmv)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3409))).f_text), y_str(" labels two statements", 22));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8226)))).f_hasmv = 1;
yr3266_Emit3(y_str("", 0), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8226)))).f_cname), y_str(": ;", 3));
if ((!(Y_DEFI(((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))]) == INT64_C(0)))) {
yr3266_Emit3(y_str("rt_xtop = &", 11), Y_DEFI(((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))]), y_str(";", 1));
} else if ((!(Y_DEFI(((rt_int *)(v1579).p)[y_ix1(v1579, Y_DEFI(v1581))]) == INT64_C(0)))) {
yr3266_Emit3(y_str("rt_xtop = ", 10), Y_DEFI(((rt_int *)(v1579).p)[y_ix1(v1579, Y_DEFI(v1581))]), y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3414_GotoStatement(void * a_p3415) {
struct yf3416 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3415 = a_p3415;
F.v8241 = Y_UNDEF_P;
F.v8241 = yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3415))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3415))).f_line));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8241)))).f_kind) == v888))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3415))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3415))).f_name), y_str(" is not a label", 15));
}
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8241)))).f_level) == Y_DEFI(v1279)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3415))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3415))).f_name), y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8241)))).f_readonly = 1;
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3266_Emit3(y_str("goto ", 5), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8241)))).f_cname), y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3420_CheckLabels(void * a_p3421) {
struct yf3422 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3421 = a_p3421;
F.v8251 = Y_UNDEF_P;
F.v8251 = F.p3421;
F.v8253 = Y_UNDEF_P;
F.v8255 = Y_UNDEF_P;
while ((!(Y_DEFP(F.v8251) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8251)))).f_kind) == v645)) {
F.v8253 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8251)))).f_a);
while ((!(Y_DEFP(F.v8253) == ((void *)0)))) {
Y_TICK();
F.v8255 = yr2294_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8253)))).f_name));
if ((((((!(Y_DEFP(F.v8255) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8255)))).f_kind) == v888))) && Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8255)))).f_readonly)) && (!Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8255)))).f_hasmv)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8253)))).f_line), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8253)))).f_name), y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v8253 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8253)))).f_next);
}
}
F.v8251 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8251)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3426_DesigBase(void * a_p3427, void * * a_p3428, rt_int * a_p3429, rt_int * a_p3430) {
struct yf3431 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3427 = a_p3427;
F.p3428_o = a_p3428;
F.p3429_o = a_p3429;
F.p3430_o = a_p3430;
F.v8263 = Y_UNDEF_P;
F.v8263 = F.p3427;
F.v8265 = Y_UNDEF_P;
F.p3428 = ((void *)0);
F.p3429 = 0;
F.p3430 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_kind) == v786)))) {
F.v8263 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_a);
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_kind) == v789)) {
if ((!Y_DEFI(F.p3429))) {
F.p3429 = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_a)))).f_rep) == ((void *)0)))) {
F.p3430 = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_a)))).f_rep)))).f_tid);
}
}
F.v8263 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_a);
} else {
goto yl_8268;
}
}
yl_8268: ;
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_kind) == v777)) && ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_d) == ((void *)0))))) {
F.v8265 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8263)))).f_name));
if ((!(Y_DEFP(F.v8265) == ((void *)0)))) {
if (yr2341_Resolved(Y_DEFP(F.v8265))) {
F.v8265 = yr2393_Real(Y_DEFP(F.v8265));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8265)))).f_kind) == v861)) {
F.p3428 = Y_DEFP(F.v8265);
}
}
}
}
(*F.p3428_o) = F.p3428;
(*F.p3429_o) = F.p3429;
(*F.p3430_o) = F.p3430;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3435_Note(void * a_p3436, rt_int a_p3437, rt_int a_p3438) {
struct yf3439 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3436 = a_p3436;
F.p3437 = a_p3437;
F.p3438 = a_p3438;
F.v8275 = Y_UNDEF_P;
F.v8275 = yr1944_NewNode(v669, F.p3438);
((*(yR105 *)y_deref(Y_DEFP(F.v8275)))).f_sym = F.p3436;
((*(yR105 *)y_deref(Y_DEFP(F.v8275)))).f_name = F.p3437;
{ void * rv8276 = Y_DEFP(F.v8275);
y_use = F.yu; return rv8276; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3443_NoteWrite(void * a_p3444) {
struct yf3445 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3444 = a_p3444;
F.v8280 = Y_UNDEF_P;
F.v8282 = Y_UNDEF_I;
F.v8284 = Y_UNDEF_I;
F.v8286 = Y_UNDEF_P;
F.v8288 = Y_UNDEF_P;
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
yr3426_DesigBase(F.p3444, &F.v8280, &F.v8282, &F.v8284);
if (Y_DEFI(F.v8282)) {
F.v8280 = ((void *)0);
} else if ((((Y_DEFP(F.v8280) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8280)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_level))))) {
y_use = F.yu; return;
}
F.v8286 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_writes);
while ((!(Y_DEFP(F.v8286) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8286)))).f_sym) == Y_DEFP(F.v8280))) {
y_use = F.yu; return;
}
F.v8286 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8286)))).f_next);
}
F.v8288 = yr3435_Note(Y_DEFP(F.v8280), INT64_C(0), Y_DEFI(((*(yR105 *)y_deref(F.p3444))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8288)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_writes);
((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_writes = Y_DEFP(F.v8288);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3449_NoteFree(void * a_p3450) {
struct yf3451 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3450 = a_p3450;
F.v8293 = Y_UNDEF_P;
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3450))).f_kind) == v861))) || ((Y_DEFI(((*(yR125 *)y_deref(F.p3450))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_level))))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3450))).f_seen) == Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_serial))) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3450))).f_seen = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_serial);
F.v8293 = yr3435_Note(F.p3450, INT64_C(0), Y_DEFI(v1000));
((*(yR105 *)y_deref(Y_DEFP(F.v8293)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_frees = Y_DEFP(F.v8293);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3455_NoteFreeDeref(void * a_p3456, rt_int a_p3457) {
struct yf3458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3456 = a_p3456;
F.p3457 = a_p3457;
F.v8299 = Y_UNDEF_P;
F.v8301 = Y_UNDEF_I;
F.v8303 = Y_UNDEF_I;
F.v8305 = Y_UNDEF_P;
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
yr3426_DesigBase(F.p3456, &F.v8299, &F.v8301, &F.v8303);
if ((((Y_DEFP(F.v8299) == ((void *)0))) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8299)))).f_level) >= Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_level))))) {
y_use = F.yu; return;
}
F.v8305 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_frees);
while ((!(Y_DEFP(F.v8305) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8305)))).f_sym) == ((void *)0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8305)))).f_name) == F.p3457)))) {
y_use = F.yu; return;
}
F.v8305 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8305)))).f_next);
}
F.v8305 = yr3435_Note(((void *)0), F.p3457, Y_DEFI(((*(yR105 *)y_deref(F.p3456))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8305)))).f_next = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_frees);
((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_frees = Y_DEFP(F.v8305);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3462_DSteps(void * a_p3463, yarr * a_p3464) {
struct yf3465 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3463 = a_p3463;
F.p3464 = a_p3464;
F.v8310 = Y_UNDEF_P;
F.v8310 = F.p3463;
F.v8312 = Y_UNDEF_I;
F.v8312 = INT64_C(0);
F.v8315 = Y_UNDEF_P;
while (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8310)))).f_kind) == v801)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8310)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8310)))).f_kind) == v786)))) {
Y_TICK();
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8310)))).f_kind) == v801))) {
if ((Y_DEFI(F.v8312) < INT64_C(64))) {
F.v8312 = y_range(y_add(Y_DEFI(F.v8312), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3464)).p)[y_ix1((*F.p3464), Y_DEFI(F.v8312))] = Y_DEFP(F.v8310);
}
}
F.v8310 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8310)))).f_a);
}
F.lo8324 = INT64_C(1);
F.hi8325 = y_div(Y_DEFI(F.v8312), INT64_C(2));
{ rt_int hi8329 = F.hi8325;
for (rt_int i8328 = F.lo8324; i8328 <= hi8329; i8328++) { F.c_8327 = i8328; Y_TICK();
F.v8315 = Y_DEFP(((void * *)((*F.p3464)).p)[y_ix1((*F.p3464), F.c_8327)]);
((void * *)((*F.p3464)).p)[y_ix1((*F.p3464), F.c_8327)] = Y_DEFP(((void * *)((*F.p3464)).p)[y_ix1((*F.p3464), y_sub((y_add(Y_DEFI(F.v8312), INT64_C(1))), F.c_8327))]);
((void * *)((*F.p3464)).p)[y_ix1((*F.p3464), y_sub((y_add(Y_DEFI(F.v8312), INT64_C(1))), F.c_8327))] = Y_DEFP(F.v8315);
if (i8328 == hi8329) break;
}}
{ rt_int rv8336 = Y_DEFI(F.v8312);
y_use = F.yu; return rv8336; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3469_Overlaps(void * a_p3470, void * a_p3471) {
struct yf3472 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3470 = a_p3470;
F.p3471 = a_p3471;
F.v8341 = Y_UNDEF_P;
F.v8343 = Y_UNDEF_P;
F.v8345 = Y_UNDEF_I;
F.v8347 = Y_UNDEF_I;
F.v8349 = Y_UNDEF_I;
F.v8351 = Y_UNDEF_I;
F.v8353 = Y_UNDEF_I;
F.v8355 = Y_UNDEF_I;
F.v8357 = Y_UNDEF_I;
F.v8359 = Y_UNDEF_I;
y_initu(&yd_201, &F.v8361);
y_initu(&yd_201, &F.v8363);
F.v8365 = Y_UNDEF_I;
F.v8367 = Y_UNDEF_I;
F.v8369 = Y_UNDEF_I;
F.v8371 = Y_UNDEF_I;
F.v8373 = Y_UNDEF_P;
F.v8375 = Y_UNDEF_P;
F.v8377 = Y_UNDEF_P;
F.v8379 = Y_UNDEF_P;
yr3426_DesigBase(F.p3470, &F.v8341, &F.v8345, &F.v8357);
yr3426_DesigBase(F.p3471, &F.v8343, &F.v8347, &F.v8359);
if ((!(Y_DEFI(F.v8345) == Y_DEFI(F.v8347)))) {
if (((Y_DEFI(F.v8345) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3470))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3471))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3471))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3471))).f_rep)))).f_tid) == Y_DEFI(F.v8357))))) {
{ rt_int rv8381 = 1;
y_use = F.yu; return rv8381; }
}
}
if (((Y_DEFI(F.v8347) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3471))).f_kind) == v789))) && ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3470))).f_rep) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3470))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3470))).f_rep)))).f_tid) == Y_DEFI(F.v8359))))) {
{ rt_int rv8383 = 1;
y_use = F.yu; return rv8383; }
}
}
{ rt_int rv8385 = 0;
y_use = F.yu; return rv8385; }
}
if (Y_DEFI(F.v8345)) {
if ((!(Y_DEFI(F.v8357) == Y_DEFI(F.v8359)))) {
{ rt_int rv8387 = 0;
y_use = F.yu; return rv8387; }
}
} else if ((((Y_DEFP(F.v8341) == ((void *)0))) || ((!(Y_DEFP(F.v8341) == Y_DEFP(F.v8343)))))) {
{ rt_int rv8389 = 0;
y_use = F.yu; return rv8389; }
}
F.v8365 = yr3462_DSteps(F.p3470, &F.v8361);
F.v8367 = yr3462_DSteps(F.p3471, &F.v8363);
F.lo8393 = INT64_C(1);
F.hi8394 = Y_DEFI(F.v8365);
{ rt_int hi8398 = F.hi8394;
for (rt_int i8397 = F.lo8393; i8397 <= hi8398; i8397++) { F.c_8396 = i8397; Y_TICK();
if ((F.c_8396 <= Y_DEFI(F.v8367))) {
F.v8373 = Y_DEFP(((void * *)(F.v8361).p)[y_ix1(F.v8361, F.c_8396)]);
F.v8375 = Y_DEFP(((void * *)(F.v8363).p)[y_ix1(F.v8363, F.c_8396)]);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8373)))).f_kind) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8375)))).f_kind)))) {
{ rt_int rv8400 = 1;
y_use = F.yu; return rv8400; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8373)))).f_kind) == v783)) {
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8373)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8375)))).f_name)))) {
{ rt_int rv8402 = 0;
y_use = F.yu; return rv8402; }
}
} else {
F.v8353 = 1;
F.v8355 = 0;
F.v8377 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8373)))).f_b);
F.v8379 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8375)))).f_b);
while ((((!(Y_DEFP(F.v8377) == ((void *)0)))) && ((!(Y_DEFP(F.v8379) == ((void *)0)))))) {
Y_TICK();
yr2830_Manifest(Y_DEFP(F.v8377), &F.v8349, &F.v8369);
yr2830_Manifest(Y_DEFP(F.v8379), &F.v8351, &F.v8371);
if ((Y_DEFI(F.v8349) && Y_DEFI(F.v8351))) {
if ((!(Y_DEFI(F.v8369) == Y_DEFI(F.v8371)))) {
F.v8355 = 1;
}
} else {
F.v8353 = 0;
}
F.v8377 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8377)))).f_next);
F.v8379 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8379)))).f_next);
}
if ((!Y_DEFI(F.v8353))) {
{ rt_int rv8408 = 1;
y_use = F.yu; return rv8408; }
}
if (Y_DEFI(F.v8355)) {
{ rt_int rv8410 = 0;
y_use = F.yu; return rv8410; }
}
}
}
if (i8397 == hi8398) break;
}}
{ rt_int rv8412 = 1;
y_use = F.yu; return rv8412; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3476_CheckActuals(void * a_p3477, rt_int a_p3478, rt_int a_p3479) {
struct yf3480 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3477 = a_p3477;
F.p3478 = a_p3478;
F.p3479 = a_p3479;
F.v8418 = Y_UNDEF_P;
F.v8420 = Y_UNDEF_P;
F.v8422 = Y_UNDEF_I;
F.v8424 = Y_UNDEF_I;
F.v8426 = Y_UNDEF_P;
F.v8428 = Y_UNDEF_P;
F.v8430 = Y_UNDEF_P;
F.v8432 = Y_UNDEF_I;
F.v8434 = Y_UNDEF_I;
F.v8418 = Y_DEFP(((*(yR125 *)y_deref(F.p3477))).f_params);
F.v8422 = y_range(y_add(F.p3478, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8426 = ((void *)0);
while ((!(Y_DEFP(F.v8418) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_cls) == v897))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_rep)))).f_kind) == v855))))) {
F.v8420 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_next);
F.v8424 = y_range(y_add(Y_DEFI(F.v8422), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v8420) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_cls) == v903)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8420)))).f_cls) == v903)))) {
if (yr3469_Overlaps(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8422))]), Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8424))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8424))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8420)))).f_name), y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_cls) == v900)) && ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8420)))).f_cls) == v900)))) {
if (yr3305_SameDesig(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8422))]), Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8424))]))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8424))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8420)))).f_name), y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v8420 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8420)))).f_next);
F.v8424 = y_range(y_add(Y_DEFI(F.v8424), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_cls) == v903)) {
yr3426_DesigBase(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8422))]), &F.v8430, &F.v8432, &F.v8434);
F.v8428 = yr3435_Note(Y_DEFP(F.v8430), Y_DEFI(F.v8434), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8422))])))).f_line));
if (Y_DEFI(F.v8432)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8428)))).f_flag = INT64_C(1);
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v8422))])))).f_kind) == v789)) {
((*(yR105 *)y_deref(Y_DEFP(F.v8428)))).f_ival = INT64_C(1);
}
if ((Y_DEFP(F.v8426) == ((void *)0))) {
F.v8426 = yr3435_Note(F.p3477, INT64_C(0), F.p3479);
((*(yR105 *)y_deref(Y_DEFP(F.v8426)))).f_next = Y_DEFP(v1673);
v1673 = Y_DEFP(F.v8426);
}
((*(yR105 *)y_deref(Y_DEFP(F.v8428)))).f_next = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8426)))).f_a);
((*(yR105 *)y_deref(Y_DEFP(F.v8426)))).f_a = Y_DEFP(F.v8428);
}
}
F.v8422 = y_range(y_add(Y_DEFI(F.v8422), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8418 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8418)))).f_next);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8567_At(struct yf3485 *up, rt_int a_p8568, rt_int a_p8569) {
struct yf8570 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8568 = a_p8568;
F.p8569 = a_p8569;
{ rt_int rv8592 = y_range(y_add((y_mul(F.p8568, (y_add(Y_DEFI(F.up->v8459), INT64_C(1))))), F.p8569), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv8592; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8574_Reaches(struct yf3485 *up, rt_int a_p8575, rt_int a_p8576) {
struct yf8577 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8575 = a_p8575;
F.p8576 = a_p8576;
F.v8597 = Y_UNDEF_P;
F.v8597 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8543).p)[y_ix1(F.up->v8543, F.p8576)])))).f_calls);
if (Y_DEFI(((rt_int *)(F.up->v8554).p)[y_ix1(F.up->v8554, F.p8576)])) {
{ rt_int rv8599 = 0;
y_use = F.yu; return rv8599; }
}
((rt_int *)(F.up->v8554).p)[y_ix1(F.up->v8554, F.p8576)] = 1;
while ((!(Y_DEFP(F.v8597) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8597)))).f_sym)))).f_vix) > INT64_C(0))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8597)))).f_sym)))).f_vix) == F.p8575)) {
{ rt_int rv8603 = 1;
y_use = F.yu; return rv8603; }
}
if (yr8574_Reaches(F.up, F.p8575, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8597)))).f_sym)))).f_vix))) {
{ rt_int rv8605 = 1;
y_use = F.yu; return rv8605; }
}
}
F.v8597 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8597)))).f_next);
}
{ rt_int rv8607 = 0;
y_use = F.yu; return rv8607; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8581_VName(struct yf3485 *up, rt_int a_p8582) {
struct yf8583 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8582 = a_p8582;
if ((Y_DEFP(((void * *)(F.up->v8521).p)[y_ix1(F.up->v8521, F.p8582)]) == ((void *)0))) {
{ rt_int rv8611 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv8611; }
}
{ rt_int rv8612 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.up->v8521).p)[y_ix1(F.up->v8521, F.p8582)])))).f_name);
y_use = F.yu; return rv8612; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3484_CheckEffects(void) {
struct yf3485 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8450 = Y_UNDEF_P;
F.v8452 = Y_UNDEF_P;
F.v8454 = Y_UNDEF_P;
F.v8456 = Y_UNDEF_I;
F.v8456 = INT64_C(0);
F.v8459 = Y_UNDEF_I;
F.v8459 = INT64_C(0);
F.v8462 = Y_UNDEF_I;
F.v8462 = INT64_C(0);
F.v8465 = Y_UNDEF_P;
F.v8462 = INT64_C(1);
F.v8459 = INT64_C(1);
F.v8450 = Y_DEFP(v1671);
while ((!(Y_DEFP(F.v8450) == ((void *)0)))) {
Y_TICK();
F.v8456 = y_range(y_add(Y_DEFI(F.v8456), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_sym)))).f_vix = Y_DEFI(F.v8456);
F.v8452 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_sym)))).f_writes);
while ((!(Y_DEFP(F.v8452) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix) == INT64_C(0))))) {
F.v8459 = y_range(y_add(Y_DEFI(F.v8459), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix = Y_DEFI(F.v8459);
}
F.v8452 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_next);
}
F.v8452 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_sym)))).f_frees);
while ((!(Y_DEFP(F.v8452) == ((void *)0)))) {
Y_TICK();
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym) == ((void *)0)))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix) == INT64_C(0))) {
F.v8459 = y_range(y_add(Y_DEFI(F.v8459), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix = Y_DEFI(F.v8459);
}
} else if ((yr3489_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_name), Y_DEFI(F.v8459), 0) == INT64_C(0))) {
F.v8459 = y_range(y_add(Y_DEFI(F.v8459), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_ival = yr3489_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_name), Y_DEFI(F.v8459), 1);
}
F.v8452 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_next);
}
F.v8450 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_next);
}
if ((Y_DEFI(F.v8456) == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo8492 = INT64_C(0);
F.hi8493 = y_mul((y_add(Y_DEFI(F.v8456), INT64_C(1))), (y_add(Y_DEFI(F.v8459), INT64_C(1))));
{ rt_int lo[1] = {F.lo8492}, hi[1] = {F.hi8493}; y_desc_array(&F.yd_8495, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8495, &F.v8497);
y_initu(&F.yd_8495, &F.v8499);
F.lo8505 = INT64_C(0);
F.hi8506 = Y_DEFI(F.v8459);
{ rt_int lo[1] = {F.lo8505}, hi[1] = {F.hi8506}; y_desc_array(&F.yd_8508, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8508, &F.v8510);
F.lo8516 = INT64_C(0);
F.hi8517 = Y_DEFI(F.v8459);
{ rt_int lo[1] = {F.lo8516}, hi[1] = {F.hi8517}; y_desc_array(&F.yd_8519, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8519, &F.v8521);
F.lo8527 = INT64_C(0);
F.hi8528 = Y_DEFI(F.v8459);
{ rt_int lo[1] = {F.lo8527}, hi[1] = {F.hi8528}; y_desc_array(&F.yd_8530, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8530, &F.v8532);
F.lo8538 = INT64_C(0);
F.hi8539 = Y_DEFI(F.v8456);
{ rt_int lo[1] = {F.lo8538}, hi[1] = {F.hi8539}; y_desc_array(&F.yd_8541, 1, lo, hi, &y_d_ptr); }
y_initu(&F.yd_8541, &F.v8543);
F.lo8549 = INT64_C(0);
F.hi8550 = Y_DEFI(F.v8456);
{ rt_int lo[1] = {F.lo8549}, hi[1] = {F.hi8550}; y_desc_array(&F.yd_8552, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_8552, &F.v8554);
F.v8556 = Y_UNDEF_I;
F.v8556 = 1;
F.v8559 = Y_UNDEF_I;
F.v8561 = Y_UNDEF_I;
F.v8563 = Y_UNDEF_I;
F.v8565 = Y_UNDEF_P;
F.lo8622 = INT64_C(0);
F.hi8623 = y_mul((y_add(Y_DEFI(F.v8456), INT64_C(1))), (y_add(Y_DEFI(F.v8459), INT64_C(1))));
{ rt_int hi8627 = F.hi8623;
for (rt_int i8626 = F.lo8622; i8626 <= hi8627; i8626++) { F.c_8625 = i8626; Y_TICK();
((rt_int *)(F.v8497).p)[y_ix1(F.v8497, F.c_8625)] = 0;
((rt_int *)(F.v8499).p)[y_ix1(F.v8499, F.c_8625)] = 0;
if (i8626 == hi8627) break;
}}
F.lo8633 = INT64_C(0);
F.hi8634 = Y_DEFI(F.v8459);
{ rt_int hi8638 = F.hi8634;
for (rt_int i8637 = F.lo8633; i8637 <= hi8638; i8637++) { F.c_8636 = i8637; Y_TICK();
((rt_int *)(F.v8510).p)[y_ix1(F.v8510, F.c_8636)] = INT64_C(-1);
((void * *)(F.v8521).p)[y_ix1(F.v8521, F.c_8636)] = ((void *)0);
((rt_int *)(F.v8532).p)[y_ix1(F.v8532, F.c_8636)] = INT64_C(0);
if (i8637 == hi8638) break;
}}
F.lo8644 = INT64_C(0);
F.hi8645 = Y_DEFI(F.v8456);
{ rt_int hi8649 = F.hi8645;
for (rt_int i8648 = F.lo8644; i8648 <= hi8649; i8648++) { F.c_8647 = i8648; Y_TICK();
((rt_int *)(F.v8554).p)[y_ix1(F.v8554, F.c_8647)] = 0;
if (i8648 == hi8649) break;
}}
F.v8450 = Y_DEFP(v1671);
while ((!(Y_DEFP(F.v8450) == ((void *)0)))) {
Y_TICK();
F.v8465 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_sym);
((void * *)(F.v8543).p)[y_ix1(F.v8543, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_vix))] = Y_DEFP(F.v8465);
F.v8452 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_writes);
while ((!(Y_DEFP(F.v8452) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym) == ((void *)0))) {
F.v8561 = INT64_C(1);
} else {
F.v8561 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix);
}
((rt_int *)(F.v8497).p)[y_ix1(F.v8497, yr8567_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_vix), Y_DEFI(F.v8561)))] = 1;
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym) == ((void *)0)))) {
((rt_int *)(F.v8510).p)[y_ix1(F.v8510, Y_DEFI(F.v8561))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_level);
((void * *)(F.v8521).p)[y_ix1(F.v8521, Y_DEFI(F.v8561))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym);
}
F.v8452 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_next);
}
F.v8452 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_frees);
while ((!(Y_DEFP(F.v8452) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym) == ((void *)0))) {
F.v8561 = yr3489_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_name), INT64_C(0), 0);
((rt_int *)(F.v8532).p)[y_ix1(F.v8532, Y_DEFI(F.v8561))] = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_name);
} else {
F.v8561 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix);
((rt_int *)(F.v8510).p)[y_ix1(F.v8510, Y_DEFI(F.v8561))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_level);
((void * *)(F.v8521).p)[y_ix1(F.v8521, Y_DEFI(F.v8561))] = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym);
}
((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_vix), Y_DEFI(F.v8561)))] = 1;
F.v8452 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_next);
}
F.v8450 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_next);
}
while (Y_DEFI(F.v8556)) {
Y_TICK();
F.v8556 = 0;
F.lo8660 = INT64_C(1);
F.hi8661 = Y_DEFI(F.v8456);
{ rt_int hi8665 = F.hi8661;
for (rt_int i8664 = F.lo8660; i8664 <= hi8665; i8664++) { F.c_8663 = i8664; Y_TICK();
F.v8454 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8543).p)[y_ix1(F.v8543, F.c_8663)])))).f_calls);
while ((!(Y_DEFP(F.v8454) == ((void *)0)))) {
Y_TICK();
F.v8563 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8454)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8563) > INT64_C(0))) {
F.lo8670 = INT64_C(1);
F.hi8671 = Y_DEFI(F.v8459);
{ rt_int hi8675 = F.hi8671;
for (rt_int i8674 = F.lo8670; i8674 <= hi8675; i8674++) { F.c_8673 = i8674; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8510).p)[y_ix1(F.v8510, F.c_8673)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8543).p)[y_ix1(F.v8543, F.c_8663)])))).f_level))) {
if ((Y_DEFI(((rt_int *)(F.v8497).p)[y_ix1(F.v8497, yr8567_At(&F, Y_DEFI(F.v8563), y_range(F.c_8673, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8497).p)[y_ix1(F.v8497, yr8567_At(&F, y_range(F.c_8663, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8673, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8497).p)[y_ix1(F.v8497, yr8567_At(&F, y_range(F.c_8663, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8673, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8556 = 1;
}
if ((Y_DEFI(((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, Y_DEFI(F.v8563), y_range(F.c_8673, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && (!Y_DEFI(((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, y_range(F.c_8663, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8673, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))])))) {
((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, y_range(F.c_8663, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8673, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8556 = 1;
}
}
if (i8674 == hi8675) break;
}}
}
F.v8454 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8454)))).f_next);
}
if (i8664 == hi8665) break;
}}
}
F.lo8683 = INT64_C(1);
F.hi8684 = Y_DEFI(F.v8456);
{ rt_int hi8688 = F.hi8684;
for (rt_int i8687 = F.lo8683; i8687 <= hi8688; i8687++) { F.c_8686 = i8687; Y_TICK();
F.v8465 = Y_DEFP(((void * *)(F.v8543).p)[y_ix1(F.v8543, F.c_8686)]);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_func)) {
F.v8454 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_calls);
while ((!(Y_DEFP(F.v8454) == ((void *)0)))) {
Y_TICK();
F.v8563 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8454)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8563) > INT64_C(0))) {
F.lo8693 = INT64_C(1);
F.hi8694 = Y_DEFI(F.v8459);
{ rt_int hi8698 = F.hi8694;
for (rt_int i8697 = F.lo8693; i8697 <= hi8698; i8697++) { F.c_8696 = i8697; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8497).p)[y_ix1(F.v8497, yr8567_At(&F, Y_DEFI(F.v8563), y_range(F.c_8696, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((Y_DEFI(((rt_int *)(F.v8510).p)[y_ix1(F.v8510, F.c_8696)]) < Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_level))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8454)))).f_line), yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_name), yr3388_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8454)))).f_sym)))).f_name), INT64_C(0)), yr3388_Join(yr1061_T(y_str(", which assigns to ", 19)), yr8581_VName(&F, y_range(F.c_8696, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
}
if (i8697 == hi8698) break;
}}
}
F.v8454 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8454)))).f_next);
}
}
if ((!(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_decl) == ((void *)0)))) {
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_decl)))).f_e) == ((void *)0)))) {
F.lo8706 = INT64_C(0);
F.hi8707 = Y_DEFI(F.v8456);
{ rt_int hi8711 = F.hi8707;
for (rt_int i8710 = F.lo8706; i8710 <= hi8711; i8710++) { F.c_8709 = i8710; Y_TICK();
((rt_int *)(F.v8554).p)[y_ix1(F.v8554, F.c_8709)] = 0;
if (i8710 == hi8711) break;
}}
if (yr8574_Reaches(&F, y_range(F.c_8686, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8686, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_decl)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8465)))).f_name), y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i8687 == hi8688) break;
}}
F.v8450 = Y_DEFP(v1673);
while ((!(Y_DEFP(F.v8450) == ((void *)0)))) {
Y_TICK();
F.v8565 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_sym);
F.v8563 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8565)))).f_vix);
if ((Y_DEFI(F.v8563) > INT64_C(0))) {
F.v8452 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_a);
while ((!(Y_DEFP(F.v8452) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_flag) == INT64_C(0))) && ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym) == ((void *)0)))))) {
F.v8561 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_vix);
if ((Y_DEFI(F.v8561) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, Y_DEFI(F.v8563), Y_DEFI(F.v8561)))])) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_line), yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_sym)))).f_name), yr3388_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8565)))).f_name), INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v8559 = INT64_C(0);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_flag) == INT64_C(1))) {
F.v8559 = yr3489_DynIndex(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_name), INT64_C(0), 0);
}
if ((Y_DEFI(F.v8559) > INT64_C(0))) {
if (Y_DEFI(((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, Y_DEFI(F.v8563), Y_DEFI(F.v8559)))])) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8565)))).f_name), y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_flag) == INT64_C(1))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_ival) == INT64_C(1))))) {
F.lo8731 = INT64_C(1);
F.hi8732 = Y_DEFI(F.v8459);
{ rt_int hi8736 = F.hi8732;
for (rt_int i8735 = F.lo8731; i8735 <= hi8736; i8735++) { F.c_8734 = i8735; Y_TICK();
if ((Y_DEFI(((rt_int *)(F.v8499).p)[y_ix1(F.v8499, yr8567_At(&F, Y_DEFI(F.v8563), y_range(F.c_8734, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]) && ((!(Y_DEFP(((void * *)(F.v8521).p)[y_ix1(F.v8521, F.c_8734)]) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8521).p)[y_ix1(F.v8521, F.c_8734)])))).f_rep)))).f_kind) == v828)) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8521).p)[y_ix1(F.v8521, F.c_8734)])))).f_rep)))).f_tid) == Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_name))))) {
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_line), yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8565)))).f_name), yr3388_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((void * *)(F.v8521).p)[y_ix1(F.v8521, F.c_8734)])))).f_name), INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i8735 == hi8736) break;
}}
}
F.v8452 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8452)))).f_next);
}
}
F.v8450 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8450)))).f_next);
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3489_DynIndex(rt_int a_p3490, rt_int a_p3491, rt_int a_p3492) {
struct yf3493 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3490 = a_p3490;
F.p3491 = a_p3491;
F.p3492 = a_p3492;
F.lo8747 = INT64_C(1);
F.hi8748 = Y_DEFI(v1697);
{ rt_int hi8752 = F.hi8748;
for (rt_int i8751 = F.lo8747; i8751 <= hi8752; i8751++) { F.c_8750 = i8751; Y_TICK();
if ((Y_DEFI(((rt_int *)(v1684).p)[y_ix1(v1684, F.c_8750)]) == F.p3490)) {
{ rt_int rv8753 = Y_DEFI(((rt_int *)(v1695).p)[y_ix1(v1695, F.c_8750)]);
y_use = F.yu; return rv8753; }
}
if (i8751 == hi8752) break;
}}
if ((!F.p3492)) {
{ rt_int rv8755 = INT64_C(0);
y_use = F.yu; return rv8755; }
}
if ((Y_DEFI(v1697) >= INT64_C(4096))) {
yr1178_FailS(Y_DEFI(v1000), y_str("too many pointer types for this implementation", 46));
}
v1697 = y_range(y_add(Y_DEFI(v1697), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1684).p)[y_ix1(v1684, Y_DEFI(v1697))] = F.p3490;
((rt_int *)(v1695).p)[y_ix1(v1695, Y_DEFI(v1697))] = F.p3491;
{ rt_int rv8760 = F.p3491;
y_use = F.yu; return rv8760; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3497_RoutineCName(rt_int a_p3498) {
struct yf3499 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3498 = a_p3498;
F.v8764 = Y_UNDEF_I;
F.v8764 = yr1195_NewSerial();
F.v8766 = Y_UNDEF_I;
F.v8766 = 1;
F.lo8771 = INT64_C(1);
F.hi8772 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, F.p3498)]);
{ rt_int hi8776 = F.hi8772;
for (rt_int i8775 = F.lo8771; i8775 <= hi8776; i8775++) { F.c_8774 = i8775; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3498, y_range(F.c_8774, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3498, y_range(F.c_8774, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v8766 = 0;
}
if (i8775 == hi8776) break;
}}
yr1026_SB();
yr1037_SA(y_str("yr", 2));
yr1050_SI(Y_DEFI(F.v8764));
if (Y_DEFI(F.v8766)) {
yr1037_SA(y_str("_", 1));
yr1044_ST(F.p3498);
}
{ rt_int rv8780 = yr1056_SE();
y_use = F.yu; return rv8780; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3503_FormalRep(void * a_p3504) {
struct yf3505 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3504 = a_p3504;
F.v8784 = Y_UNDEF_P;
F.v8786 = Y_UNDEF_I;
F.v8788 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3504))).f_kind) == v696)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3504))).f_a), &F.v8786, &F.v8788);
if ((((!Y_DEFI(F.v8786)) || ((Y_DEFI(F.v8788) < INT64_C(1)))) || ((Y_DEFI(F.v8788) > INT64_C(8))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3504))).f_line), y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
}
F.v8784 = yr2399_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
((*(yR110 *)y_deref(Y_DEFP(F.v8784)))).f_nidx = Y_DEFI(F.v8788);
((*(yR110 *)y_deref(Y_DEFP(F.v8784)))).f_elem = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3504))).f_b), INT64_C(0), 0);
yr2502_CheckRepresented(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v8784)))).f_elem), Y_DEFI(((*(yR105 *)y_deref(F.p3504))).f_line));
((*(yR110 *)y_deref(Y_DEFP(F.v8784)))).f_deep = 1;
{ void * rv8796 = Y_DEFP(F.v8784);
y_use = F.yu; return rv8796; }
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3504))).f_kind) == v699)) {
{ void * rv8798 = yr2399_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv8798; }
}
F.v8784 = yr2643_MakeRep(F.p3504, INT64_C(0), 0);
yr2502_CheckRepresented(Y_DEFP(F.v8784), Y_DEFI(((*(yR105 *)y_deref(F.p3504))).f_line));
{ void * rv8801 = Y_DEFP(F.v8784);
y_use = F.yu; return rv8801; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3509_ParamCType(void * a_p3510) {
struct yf3511 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3510 = a_p3510;
F.v8805 = Y_UNDEF_I;
F.v8805 = yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3510))).f_rep));
if ((((Y_DEFI(((*(yR120 *)y_deref(F.p3510))).f_cls) == v897)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(F.p3510))).f_rep)))).f_kind) == v855)))) {
{ rt_int rv8806 = Y_DEFI(F.v8805);
y_use = F.yu; return rv8806; }
}
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8805));
yr1037_SA(y_str(" *", 2));
{ rt_int rv8808 = yr1056_SE();
y_use = F.yu; return rv8808; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3515_InstallTrap(void * a_p3516, void * a_p3517) {
struct yf3518 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3516 = a_p3516;
F.p3517 = a_p3517;
F.v8813 = Y_UNDEF_I;
F.v8815 = Y_UNDEF_I;
F.v8815 = 0;
F.v8818 = Y_UNDEF_I;
F.v8820 = Y_UNDEF_I;
F.v8820 = INT64_C(1);
F.v8813 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_name))]), INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8818 = yr1061_T(y_str("OUT_OF_RANGE OVERFLOW ZERO_DIVIDE INVALID_POINTER FIXED_NOT_REPRESENTABLE TOO_MANY_PROCESS_INSTANCES TOO_LITTLE_LOCAL_STORAGE ADDRESS_VIOLATION UNINITIALIZED ", 158));
F.lo8830 = INT64_C(1);
F.hi8831 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v8818))]);
{ rt_int hi8835 = F.hi8831;
for (rt_int i8834 = F.lo8830; i8834 <= hi8835; i8834++) { F.c_8833 = i8834; Y_TICK();
if ((yr1103_TChar(Y_DEFI(F.v8818), y_range(F.c_8833, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
if ((yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v8818))]), (y_sub(Y_DEFI(F.v8820), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_8833, Y_DEFI(F.v8820)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == Y_DEFI(F.v8813))) {
F.v8815 = 1;
}
F.v8820 = y_range(y_add(F.c_8833, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i8834 == hi8835) break;
}}
if ((!Y_DEFI(F.v8815))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_line), Y_DEFI(F.v8813), y_str(" is not a trap of this implementation (XIV.X.3)", 47));
}
if ((((!(Y_DEFI(v1279) == INT64_C(0)))) || ((!(Y_DEFI(v1273) == INT64_C(2)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_name), y_str(": a trap handler is declared in the outermost scope of a program (XIV.X.3)", 74));
}
if ((((!(Y_DEFI(((*(yR125 *)y_deref(F.p3516))).f_nparams) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3516))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3517))).f_name), y_str(": a trap handler of this implementation is a procedure without parameters (XIV.X.3)", 83));
}
yr1026_SB();
yr1037_SA(y_str("y_trap_install(rt_exc(", 22));
yr1031_SC(34);
yr1044_ST(Y_DEFI(F.v8813));
yr1031_SC(34);
yr1037_SA(y_str("), ", 3));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3516))).f_cname));
yr1037_SA(y_str(");", 2));
yr1132_Emit(yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3522_DeclType(void * a_p3523) {
struct yf3524 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3523 = a_p3523;
if ((Y_DEFI(((*(yR120 *)y_deref(F.p3523))).f_cls) == v900)) {
{ rt_int rv8857 = yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(F.p3523))).f_rep));
y_use = F.yu; return rv8857; }
}
{ rt_int rv8858 = yr3509_ParamCType(F.p3523);
y_use = F.yu; return rv8858; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3528_RoutineHeader(void * a_p3529, rt_int a_p3530) {
struct yf3531 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3529 = a_p3529;
F.p3530 = a_p3530;
F.v8863 = Y_UNDEF_P;
F.v8865 = Y_UNDEF_P;
F.v8867 = Y_UNDEF_P;
F.v8869 = Y_UNDEF_P;
F.v8871 = Y_UNDEF_P;
F.v8873 = Y_UNDEF_P;
F.v8875 = Y_UNDEF_P;
F.v8877 = Y_UNDEF_I;
F.v8879 = Y_UNDEF_I;
F.v8879 = 1;
F.v8863 = yr2258_NewSym(F.p3530, Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_decl = F.p3529;
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_func = (Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_flag) == INT64_C(1));
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_level = y_range(y_add(Y_DEFI(v1279), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_cname = yr3497_RoutineCName(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name));
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3529))).f_b) == ((void *)0)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_ret = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3529))).f_b), INT64_C(0), 0);
yr2502_CheckRepresented(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_ret), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line));
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_ret = Y_DEFP(v1348);
if (Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_func)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v8873 = ((void *)0);
F.v8867 = Y_DEFP(((*(yR105 *)y_deref(F.p3529))).f_a);
while ((!(Y_DEFP(F.v8867) == ((void *)0)))) {
Y_TICK();
F.v8875 = yr3503_FormalRep(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_b));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_func) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_ival) == v897))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3530 == v885)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_ival) == v900)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str(": a process has no OUT parameters", 33));
}
F.v8869 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_a);
while ((!(Y_DEFP(F.v8869) == ((void *)0)))) {
Y_TICK();
({ F.v8871 = y_new(sizeof(yR120)); y_initu(&yd_121, y_deref(F.v8871)); });
(*(yR120 *)y_deref(Y_DEFP(F.v8871))) = ((yR120){ .f_name = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8869)))).f_name), .f_cls = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_ival), .f_rep = Y_DEFP(F.v8875), .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8869)))).f_a) == ((void *)0)))) {
((*(yR120 *)y_deref(Y_DEFP(F.v8871)))).f_at = yr2765_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8869)))).f_a));
}
if ((Y_DEFP(F.v8873) == ((void *)0))) {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_params = Y_DEFP(F.v8871);
} else {
((*(yR120 *)y_deref(Y_DEFP(F.v8873)))).f_next = Y_DEFP(F.v8871);
}
F.v8873 = Y_DEFP(F.v8871);
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_nparams = y_range(y_add(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_nparams), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8869 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8869)))).f_next);
}
F.v8867 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_next);
}
F.v8865 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name));
if ((!(Y_DEFP(F.v8865) == ((void *)0)))) {
F.v8865 = yr2393_Real(Y_DEFP(F.v8865));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_ival) == INT64_C(0))) && ((!(Y_DEFP(F.v8865) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8865)))).f_kind) == v891)) {
yr1164_Warn(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line), yr3388_Join(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_ival) == INT64_C(0)))) && ((!(Y_DEFP(F.v8865) == ((void *)0))))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8865)))).f_kind) == v876)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_alt = Y_DEFP(F.v8865);
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8865)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_ival) == v339)) && ((!(yr3535_SameSignature(Y_DEFP(F.v8863), Y_DEFP(F.v8865)) == ((void *)0)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_ival) == v435)) && ((yr3535_SameSignature(Y_DEFP(F.v8863), Y_DEFP(F.v8865)) == ((void *)0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR105 *)y_deref(F.p3529))).f_sym = Y_DEFP(F.v8863);
yr2360_Define(Y_DEFP(F.v8863), Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line));
if ((((!(Y_DEFI(v1668) == INT64_C(0)))) && yr1088_TEq(Y_DEFI(v1668), yr1061_T(y_str("CompilerStatus", 14))))) {
if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), yr1061_T(y_str("SUPPRESS_TRAP", 13)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_mval = v1492;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), yr1061_T(y_str("RESTORE_TRAP", 12)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_mval = v1495;
} else if (yr1088_TEq(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), yr1061_T(y_str("TRAP_SUPPRESSED", 15)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_mval = v1498;
}
}
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_ival) == v435)) && yr1095_TStarts(Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_name), y_str("TRAP_", 5)))) {
yr3515_InstallTrap(Y_DEFP(F.v8863), F.p3529);
}
F.v8867 = yr1944_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3529))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_sym = Y_DEFP(F.v8863);
((*(yR105 *)y_deref(Y_DEFP(F.v8867)))).f_next = Y_DEFP(v1671);
v1671 = Y_DEFP(F.v8867);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_level))] = yr1200_Fresh(y_str("yf", 2));
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_members = yr2258_NewSym(v891, Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_level))]));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_level))]));
yr1037_SA(y_str(";", 1));
F.v8877 = yr1056_SE();
yr1110_Put(&v978, Y_DEFI(F.v8877));
yr1026_SB();
yr1037_SA(y_str("static ", 7));
if ((F.p3530 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2461_CType(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_ret)));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_cname));
yr1037_SA(y_str("(", 1));
F.v8877 = yr1056_SE();
if ((F.p3530 == v885)) {
F.v8877 = yr3388_Join(Y_DEFI(F.v8877), yr1061_T(y_str("void *arg", 9)), INT64_C(0));
F.v8879 = 0;
} else if ((Y_DEFI(v1279) > INT64_C(0))) {
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8877));
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))]));
yr1037_SA(y_str(" *up", 4));
F.v8877 = yr1056_SE();
F.v8879 = 0;
}
F.v8871 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_params);
while ((((!(Y_DEFP(F.v8871) == ((void *)0)))) && ((!(F.p3530 == v885))))) {
Y_TICK();
yr1026_SB();
yr1044_ST(Y_DEFI(F.v8877));
if ((!Y_DEFI(F.v8879))) {
yr1037_SA(y_str(", ", 2));
}
F.v8879 = 0;
yr1044_ST(yr3509_ParamCType(Y_DEFP(F.v8871)));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8871)))).f_cname));
F.v8877 = yr1056_SE();
F.v8871 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8871)))).f_next);
}
if (Y_DEFI(F.v8879)) {
F.v8877 = yr3388_Join(Y_DEFI(F.v8877), yr1061_T(y_str("void", 4)), INT64_C(0));
}
F.v8877 = yr3388_Join(Y_DEFI(F.v8877), yr1061_T(y_str(")", 1)), INT64_C(0));
((*(yR125 *)y_deref(Y_DEFP(F.v8863)))).f_mnext = yr2258_NewSym(v891, Y_DEFI(F.v8877));
yr1110_Put(&v986, yr3388_Join(Y_DEFI(F.v8877), yr1061_T(y_str(";", 1)), INT64_C(0)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3535_SameSignature(void * a_p3536, void * a_p3537) {
struct yf3538 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3536 = a_p3536;
F.p3537 = a_p3537;
F.v8934 = Y_UNDEF_P;
F.v8934 = F.p3537;
F.v8936 = Y_UNDEF_P;
F.v8938 = Y_UNDEF_P;
F.v8940 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v8934) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8934)))).f_nparams) == Y_DEFI(((*(yR125 *)y_deref(F.p3536))).f_nparams))) {
F.v8940 = 1;
F.v8936 = Y_DEFP(((*(yR125 *)y_deref(F.p3536))).f_params);
F.v8938 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8934)))).f_params);
while ((!(Y_DEFP(F.v8936) == ((void *)0)))) {
Y_TICK();
if ((!yr2479_SameType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8936)))).f_rep), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8938)))).f_rep)))) {
F.v8940 = 0;
}
F.v8936 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8936)))).f_next);
F.v8938 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8938)))).f_next);
}
if (Y_DEFI(F.v8940)) {
{ void * rv8943 = Y_DEFP(F.v8934);
y_use = F.yu; return rv8943; }
}
}
F.v8934 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8934)))).f_alt);
}
{ void * rv8944 = ((void *)0);
y_use = F.yu; return rv8944; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3542_RoutineBody(void * a_p3543) {
struct yf3544 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3543 = a_p3543;
F.v8948 = Y_UNDEF_P;
F.v8948 = Y_DEFP(((*(yR105 *)y_deref(F.p3543))).f_sym);
y_initu(&yd_141, &F.v8950);
y_initu(&yd_141, &F.v8952);
F.v8954 = Y_UNDEF_I;
F.v8956 = Y_UNDEF_I;
F.v8958 = Y_UNDEF_I;
F.v8960 = Y_UNDEF_I;
F.v8962 = Y_UNDEF_I;
F.v8964 = Y_UNDEF_I;
F.v8966 = Y_UNDEF_I;
F.v8968 = Y_UNDEF_P;
F.v8970 = Y_UNDEF_I;
F.v8972 = Y_UNDEF_P;
F.v8974 = Y_UNDEF_P;
F.v8976 = Y_UNDEF_I;
F.v8978 = Y_UNDEF_I;
y_initu(&yd_141, &F.v8980);
F.v8950 = v996;
F.v8952 = v998;
F.v8954 = Y_DEFI(v1279);
F.v8956 = Y_DEFI(v1553);
F.v8958 = Y_DEFI(v1556);
F.v8960 = Y_DEFI(v1581);
F.v8962 = Y_DEFI(v1595);
F.v8964 = Y_DEFI(v1622);
F.v8966 = Y_DEFI(v1625);
F.v8968 = Y_DEFP(v1628);
F.v8970 = Y_DEFI(v1657);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v8980 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1279 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_level);
F.v8976 = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_members)))).f_name);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(F.v8976);
v1556 = Y_DEFI(v1553);
v1625 = Y_DEFI(v1622);
v1595 = INT64_C(0);
v1628 = Y_DEFP(F.v8948);
v1657 = 0;
yr2265_OpenScope(0);
v1328 = y_range(y_add(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1324).p)[y_ix1(v1324, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_depth);
((rt_int *)(v1326).p)[y_ix1(v1326, Y_DEFI(v1328))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_serial);
F.v8972 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_params);
while ((!(Y_DEFP(F.v8972) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cls) == v897)) {
F.v8974 = yr2258_NewSym(v864, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_name));
} else {
F.v8974 = yr2258_NewSym(v861, Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_name));
}
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_rep = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep);
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_cname = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname);
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_kind) == v885)) {
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_byref = (((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cls) == v903)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)))).f_kind) == v855))));
yr2380_DeclStorage(yr3509_ParamCType(Y_DEFP(F.v8972)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname));
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)))).f_kind) == v855)) {
yr2380_DeclStorage(yr1061_T(y_str("yspace", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr3388_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cls) == v903)) {
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_byref = 1;
yr2380_DeclStorage(yr3509_ParamCType(Y_DEFP(F.v8972)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr3388_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(";", 1)))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cls) == v900)) {
yr2380_DeclStorage(yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname));
yr2380_DeclStorage(yr3509_ParamCType(Y_DEFP(F.v8972)), yr3388_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str("_o", 2)), INT64_C(0)));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr3388_Join(yr1061_T(y_str("_o = a_", 7)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(";", 1)))));
if ((yr2436_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)))).f_kind) == v843))))) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_init(", 7)), yr2467_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)), yr3388_Join(yr1061_T(y_str(", &F.", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(");", 2)))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr3388_Join(yr1061_T(y_str(" = *a_", 6)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(";", 1)))));
}
} else {
yr2380_DeclStorage(yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_rep)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("F.", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr3388_Join(yr1061_T(y_str(" = a_", 5)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(";", 1)))));
}
if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_at) >= INT64_C(0))) {
F.v8978 = yr2771_StoreAt(yr3522_DeclType(Y_DEFP(F.v8972)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_at));
yr1132_Emit(yr3388_Join(Y_DEFI(F.v8978), yr1061_T(y_str(" = F.", 5)), yr3388_Join(Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_cname), yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_level = INT64_C(0);
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_cname = Y_DEFI(F.v8978);
((*(yR125 *)y_deref(Y_DEFP(F.v8974)))).f_at = Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_at);
((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_path = Y_DEFI(F.v8978);
}
yr2360_Define(Y_DEFP(F.v8974), Y_DEFI(((*(yR105 *)y_deref(F.p3543))).f_line));
F.v8972 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v8972)))).f_next);
}
yr3771_EnterMonitor(Y_DEFP(F.v8948));
yr3615_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3543))).f_c)))).f_a));
if (yr3333_BlockFalls(Y_DEFP(((*(yR105 *)y_deref(F.p3543))).f_c))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_kind) == v885)) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3543))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3543))).f_name), y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3543))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3543))).f_name), y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3293_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(F.p3543))).f_c));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_kind) == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3747_AwaitProcesses();
yr2277_CloseScope();
v1328 = y_range(y_sub(Y_DEFI(v1328), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(Y_DEFI(F.v8976));
yr1037_SA(y_str(" {", 2));
if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
yr1044_ST(Y_DEFI(((rt_int *)(v1291).p)[y_ix1(v1291, y_sub(Y_DEFI(v1279), INT64_C(1)))]));
yr1037_SA(y_str(" *up;", 5));
} else {
yr1037_SA(y_str(" void *up;", 10));
}
F.v8978 = yr1056_SE();
yr1110_Put(&v982, Y_DEFI(F.v8978));
yr1125_Append(&v982, &v998);
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
yr1117_PutS(&v982, y_str("};", 2));
yr1110_Put(&F.v8980, yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_mnext)))).f_name), yr1061_T(y_str(" {", 2)), INT64_C(0)));
if (Y_DEFI(v1657)) {
yr1117_PutS(&F.v8980, y_str("volatile", 8));
}
yr1110_Put(&F.v8980, yr3388_Join(yr1061_T(y_str("struct ", 7)), Y_DEFI(F.v8976), yr1061_T(y_str(" F;", 3))));
yr1117_PutS(&F.v8980, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v8948)))).f_kind) == v885)) {
yr1110_Put(&F.v8980, yr3388_Join(yr1061_T(y_str("F = *(struct ", 13)), Y_DEFI(F.v8976), yr1061_T(y_str(" *)arg;", 7))));
} else if ((Y_DEFI(v1279) > INT64_C(1))) {
yr1117_PutS(&F.v8980, y_str("F.up = up;", 10));
}
yr1117_PutS(&F.v8980, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1125_Append(&F.v8980, &v996);
yr1117_PutS(&F.v8980, y_str("}", 1));
yr1125_Append(&v988, &F.v8980);
v996 = F.v8950;
v998 = F.v8952;
v1279 = Y_DEFI(F.v8954);
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = yr1200_Fresh(y_str("unused", 6));
if ((!(Y_DEFP(F.v8968) == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, Y_DEFI(v1279))] = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v8968)))).f_members)))).f_name);
}
v1553 = Y_DEFI(F.v8956);
v1556 = Y_DEFI(F.v8958);
v1581 = Y_DEFI(F.v8960);
v1595 = Y_DEFI(F.v8962);
v1622 = Y_DEFI(F.v8964);
v1625 = Y_DEFI(F.v8966);
v1628 = Y_DEFP(F.v8968);
v1657 = Y_DEFI(F.v8970);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3548_DeclareStorage(void * a_p3549, void * a_p3550, rt_int a_p3551) {
struct yf3552 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3549 = a_p3549;
F.p3550 = a_p3550;
F.p3551 = a_p3551;
((*(yR125 *)y_deref(F.p3549))).f_rep = F.p3550;
((*(yR125 *)y_deref(F.p3549))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(F.p3549))).f_cname = yr1200_Fresh(y_str("v", 1));
yr2380_DeclStorage(yr2461_CType(F.p3550), Y_DEFI(((*(yR125 *)y_deref(F.p3549))).f_cname));
yr3565_InitStorage(F.p3549, F.p3550, F.p3551);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3556_DeclareAt(void * a_p3557, void * a_p3558, rt_int a_p3559, rt_int a_p3560) {
struct yf3561 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3557 = a_p3557;
F.p3558 = a_p3558;
F.p3559 = a_p3559;
F.p3560 = a_p3560;
((*(yR125 *)y_deref(F.p3557))).f_rep = F.p3558;
((*(yR125 *)y_deref(F.p3557))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.p3557))).f_at = F.p3559;
((*(yR125 *)y_deref(F.p3557))).f_cname = yr2771_StoreAt(yr2461_CType(F.p3558), F.p3559);
yr3565_InitStorage(F.p3557, F.p3558, F.p3560);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3565_InitStorage(void * a_p3566, void * a_p3567, rt_int a_p3568) {
struct yf3569 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3566 = a_p3566;
F.p3567 = a_p3567;
F.p3568 = a_p3568;
if ((yr2436_Deep(F.p3567) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3567))).f_kind) == v825)))) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_initu(", 8)), yr2467_DescOf(F.p3567), yr3388_Join(yr1061_T(y_str(", &", 3)), yr2387_SymPath(F.p3566), yr1061_T(y_str(");", 2)))));
} else if ((!(yr3007_UndefValue(F.p3567) == INT64_C(0)))) {
yr1132_Emit(yr3388_Join(yr2387_SymPath(F.p3566), yr1061_T(y_str(" = ", 3)), yr3388_Join(yr3007_UndefValue(F.p3567), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3567))).f_kind) == v837)) {
yr3788_DeclareSignal(F.p3566, F.p3568);
}
if (yr2449_HoldsSignal(F.p3567)) {
yr3795_DeclareSignalArray(F.p3566, F.p3568);
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3567))).f_kind) == v840)) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2387_SymPath(F.p3566), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3573_SimpleDecl(void * a_p3574) {
struct yf3575 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3574 = a_p3574;
F.v9069 = Y_UNDEF_I;
F.v9069 = Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_kind);
F.v9071 = Y_UNDEF_P;
F.v9073 = Y_UNDEF_P;
F.v9075 = Y_UNDEF_P;
F.v9077 = Y_UNDEF_P;
F.v9079 = Y_UNDEF_I;
F.v9081 = Y_UNDEF_I;
F.v9083 = Y_UNDEF_I;
F.v9085 = Y_UNDEF_I;
if ((((Y_DEFI(F.v9069) == v639)) || ((Y_DEFI(F.v9069) == v642)))) {
F.v9071 = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_b), INT64_C(0), 0);
yr2502_CheckRepresented(Y_DEFP(F.v9071), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
if ((((Y_DEFI(F.v9069) == v639)) && yr2455_NonAssignable(Y_DEFP(F.v9071)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line), y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v9075 = Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_a);
while ((!(Y_DEFP(F.v9075) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(F.v9069) == v639)) {
F.v9077 = yr2258_NewSym(v864, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_name));
} else {
F.v9077 = yr2258_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_name));
}
if ((((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_a) == ((void *)0)))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_kind) == v837))))) {
yr3556_DeclareAt(Y_DEFP(F.v9077), Y_DEFP(F.v9071), yr2765_AtAddress(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_a)), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
} else {
yr3548_DeclareStorage(Y_DEFP(F.v9077), Y_DEFP(F.v9071), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_c) == ((void *)0)))) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_c), Y_DEFP(F.v9071), &F.v9079, &F.v9073);
if ((Y_DEFI(F.v9069) == v639)) {
yr2929_Store(yr2387_SymPath(Y_DEFP(F.v9077)), Y_DEFP(F.v9071), Y_DEFI(F.v9079), Y_DEFP(F.v9073), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
} else {
F.v9081 = yr3211_UserAssign(yr2387_SymPath(Y_DEFP(F.v9077)), Y_DEFP(F.v9071), Y_DEFI(F.v9079), Y_DEFP(F.v9073), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
if ((!(Y_DEFI(F.v9081) == INT64_C(0)))) {
yr1132_Emit(Y_DEFI(F.v9081));
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_opaque) && (((y_mod(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_opaqueops), INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_tname), y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2929_Store(yr2387_SymPath(Y_DEFP(F.v9077)), Y_DEFP(F.v9071), Y_DEFI(F.v9079), Y_DEFP(F.v9073), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
}
}
if ((Y_DEFI(F.v9069) == v639)) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_c), &F.v9083, &F.v9085);
if ((Y_DEFI(F.v9083) && yr2412_IsDiscrete(Y_DEFP(F.v9071)))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9077)))).f_hasmv = 1;
((*(yR125 *)y_deref(Y_DEFP(F.v9077)))).f_mval = Y_DEFI(F.v9085);
}
}
}
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_a) == ((void *)0)))) {
yr3586_AtLocation(Y_DEFP(F.v9077), Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_a));
}
yr2360_Define(Y_DEFP(F.v9077), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_line));
F.v9075 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_next);
}
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9069) == v651)) {
F.v9071 = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name), 0);
yr2502_CheckRepresented(Y_DEFP(F.v9071), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
F.v9077 = yr2258_NewSym(v867, Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9077)))).f_rep = Y_DEFP(F.v9071);
yr2360_Define(Y_DEFP(F.v9077), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
yr2666_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name), Y_DEFP(F.v9071));
yr3579_NoteAlphabet(F.p3574, Y_DEFP(F.v9071));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9069) == v648)) {
F.v9071 = yr2643_MakeRep(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_b), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name), 1);
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_b)))).f_kind) == v672)) {
F.v9071 = yr2406_CopyRep(Y_DEFP(F.v9071));
((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_tid = yr2637_NewTid(Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name));
((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_tname = Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name);
if (((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_kind) == v804)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_kind) == v807))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_kind) == v810)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_b)))).f_a) == ((void *)0))) {
((*(yR110 *)y_deref(Y_DEFP(F.v9071)))).f_abstract = 1;
}
}
}
F.v9077 = yr2258_NewSym(v870, Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9077)))).f_rep = Y_DEFP(F.v9071);
yr2360_Define(Y_DEFP(F.v9077), Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line));
yr2666_ResolvePending(Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_name), Y_DEFP(F.v9071));
yr3579_NoteAlphabet(F.p3574, Y_DEFP(F.v9071));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9069) == v645)) {
F.v9075 = Y_DEFP(((*(yR105 *)y_deref(F.p3574))).f_a);
while ((!(Y_DEFP(F.v9075) == ((void *)0)))) {
Y_TICK();
F.v9077 = yr2258_NewSym(v888, Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9077)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9077)))).f_cname = yr1200_Fresh(y_str("lab", 3));
yr2360_Define(Y_DEFP(F.v9077), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_line));
F.v9075 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9075)))).f_next);
}
y_use = F.yu; return;
}
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3574))).f_line), y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3579_NoteAlphabet(void * a_p3580, void * a_p3581) {
struct yf3582 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3580 = a_p3580;
F.p3581 = a_p3581;
F.v9104 = Y_UNDEF_P;
if ((((Y_DEFI(((*(yR110 *)y_deref(F.p3581))).f_kind) == v819)) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3580))).f_b)))).f_kind) == v678)))) {
F.v9104 = yr1944_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3580))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9104)))).f_name = Y_DEFI(((*(yR105 *)y_deref(F.p3580))).f_name);
((*(yR105 *)y_deref(Y_DEFP(F.v9104)))).f_rep = F.p3581;
((*(yR105 *)y_deref(Y_DEFP(F.v9104)))).f_next = Y_DEFP(v1504);
v1504 = Y_DEFP(F.v9104);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3586_AtLocation(void * a_p3587, void * a_p3588) {
struct yf3589 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3587 = a_p3587;
F.p3588 = a_p3588;
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3587))).f_rep)))).f_kind) == v837)) {
yr3802_DeviceSignal(F.p3587, F.p3588);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3593_Defer(void * a_p3594, rt_int a_p3595, void * a_p3596, rt_int a_p3597) {
struct yf3598 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3594 = a_p3594;
F.p3595 = a_p3595;
F.p3596 = a_p3596;
F.p3597 = a_p3597;
F.v9114 = Y_UNDEF_I;
F.v9114 = Y_DEFI(v1273);
if ((Y_DEFI(v1801) >= INT64_C(20000))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3594))).f_line), y_str("too many routines for this implementation", 41));
}
v1801 = y_range(y_add(Y_DEFI(v1801), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1709).p)[y_ix1(v1709, Y_DEFI(v1801))] = F.p3594;
((rt_int *)(v1720).p)[y_ix1(v1720, Y_DEFI(v1801))] = F.p3595;
((rt_int *)(v1731).p)[y_ix1(v1731, Y_DEFI(v1801))] = Y_DEFI(v1276);
((void * *)(v1742).p)[y_ix1(v1742, Y_DEFI(v1801))] = Y_DEFP(v1807);
((void * *)(v1753).p)[y_ix1(v1753, Y_DEFI(v1801))] = F.p3596;
((rt_int *)(v1764).p)[y_ix1(v1764, Y_DEFI(v1801))] = F.p3597;
((rt_int *)(v1775).p)[y_ix1(v1775, Y_DEFI(v1801))] = Y_DEFI(v1663);
while (Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9114))])))).f_closed)) {
Y_TICK();
F.v9114 = y_range(y_sub(Y_DEFI(F.v9114), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1786).p)[y_ix1(v1786, Y_DEFI(v1801))] = y_range(y_add(Y_DEFI(v1804), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1788).p)[y_ix1(v1788, Y_DEFI(v1801))] = y_range(y_sub(Y_DEFI(v1273), Y_DEFI(F.v9114)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9127 = y_add(Y_DEFI(F.v9114), INT64_C(1));
F.hi9128 = Y_DEFI(v1273);
{ rt_int hi9132 = F.hi9128;
for (rt_int i9131 = F.lo9127; i9131 <= hi9132; i9131++) { F.c_9130 = i9131; Y_TICK();
v1804 = y_range(y_add(Y_DEFI(v1804), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1799).p)[y_ix1(v1799, Y_DEFI(v1804))] = Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, F.c_9130)]);
if (i9131 == hi9132) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3602_RunDeferred(rt_int a_p3603, rt_int a_p3604) {
struct yf3605 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3603 = a_p3603;
F.p3604 = a_p3604;
F.v9139 = Y_UNDEF_I;
F.v9139 = y_range(y_add(F.p3603, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9143 = Y_UNDEF_I;
F.v9145 = Y_UNDEF_I;
F.v9147 = Y_UNDEF_P;
while ((Y_DEFI(F.v9139) <= Y_DEFI(v1801))) {
Y_TICK();
F.lo9152 = Y_DEFI(((rt_int *)(v1786).p)[y_ix1(v1786, Y_DEFI(F.v9139))]);
F.hi9153 = y_sub((y_add(Y_DEFI(((rt_int *)(v1786).p)[y_ix1(v1786, Y_DEFI(F.v9139))]), Y_DEFI(((rt_int *)(v1788).p)[y_ix1(v1788, Y_DEFI(F.v9139))]))), INT64_C(1));
{ rt_int hi9157 = F.hi9153;
for (rt_int i9156 = F.lo9152; i9156 <= hi9157; i9156++) { F.c_9155 = i9156; Y_TICK();
yr2271_ReopenScope(Y_DEFP(((void * *)(v1799).p)[y_ix1(v1799, F.c_9155)]));
if (i9156 == hi9157) break;
}}
F.v9143 = Y_DEFI(v1276);
F.v9147 = Y_DEFP(v1807);
F.v9145 = Y_DEFI(v1663);
v1276 = Y_DEFI(((rt_int *)(v1731).p)[y_ix1(v1731, Y_DEFI(F.v9139))]);
v1807 = Y_DEFP(((void * *)(v1742).p)[y_ix1(v1742, Y_DEFI(F.v9139))]);
v1663 = Y_DEFI(((rt_int *)(v1775).p)[y_ix1(v1775, Y_DEFI(F.v9139))]);
if ((Y_DEFI(((rt_int *)(v1720).p)[y_ix1(v1720, Y_DEFI(F.v9139))]) == INT64_C(1))) {
yr3542_RoutineBody(Y_DEFP(((void * *)(v1709).p)[y_ix1(v1709, Y_DEFI(F.v9139))]));
} else {
yr3609_ModuleInit(Y_DEFI(F.v9139));
}
v1276 = Y_DEFI(F.v9143);
v1807 = Y_DEFP(F.v9147);
v1663 = Y_DEFI(F.v9145);
F.lo9162 = INT64_C(1);
F.hi9163 = Y_DEFI(((rt_int *)(v1788).p)[y_ix1(v1788, Y_DEFI(F.v9139))]);
{ rt_int hi9167 = F.hi9163;
for (rt_int i9166 = F.lo9162; i9166 <= hi9167; i9166++) { F.c_9165 = i9166; Y_TICK();
yr2277_CloseScope();
if (i9166 == hi9167) break;
}}
F.v9139 = y_range(y_add(Y_DEFI(F.v9139), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1801 = F.p3603;
v1804 = F.p3604;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3609_ModuleInit(rt_int a_p3610) {
struct yf3611 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3610 = a_p3610;
F.v9173 = Y_UNDEF_P;
F.v9173 = Y_DEFP(((void * *)(v1709).p)[y_ix1(v1709, F.p3610)]);
y_initu(&yd_141, &F.v9175);
F.v9175 = v996;
F.v9177 = Y_UNDEF_P;
F.v9177 = Y_DEFP(((void * *)(v1753).p)[y_ix1(v1753, F.p3610)]);
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (Y_DEFI(((rt_int *)(v1764).p)[y_ix1(v1764, F.p3610)])) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3765_MonitorPath(Y_DEFP(v1807)), yr1061_T(y_str(");", 2))));
}
v1581 = y_range(y_add(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1568).p)[y_ix1(v1568, Y_DEFI(v1581))] = INT64_C(0);
((rt_int *)(v1579).p)[y_ix1(v1579, Y_DEFI(v1581))] = INT64_C(0);
yr3293_BlockStatements(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9173)))).f_c));
v1581 = y_range(y_sub(Y_DEFI(v1581), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (Y_DEFI(((rt_int *)(v1764).p)[y_ix1(v1764, F.p3610)])) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3765_MonitorPath(Y_DEFP(v1807)), yr1061_T(y_str(");", 2))));
}
if ((!(Y_DEFP((v996).f_head) == ((void *)0)))) {
((*(yR135 *)y_deref(Y_DEFP((v996).f_tail)))).f_next = Y_DEFP(((*(yR135 *)y_deref(Y_DEFP(F.v9177)))).f_next);
((*(yR135 *)y_deref(Y_DEFP(F.v9177)))).f_next = Y_DEFP((v996).f_head);
if ((Y_DEFP((F.v9175).f_tail) == Y_DEFP(F.v9177))) {
(F.v9175).f_tail = Y_DEFP((v996).f_tail);
}
}
v996 = F.v9175;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3615_Declarations(void * a_p3616) {
struct yf3617 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3616 = a_p3616;
F.v9191 = Y_UNDEF_P;
F.v9191 = F.p3616;
F.v9193 = Y_UNDEF_P;
F.v9193 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
F.v9195 = Y_UNDEF_I;
F.v9195 = Y_DEFI(v1801);
F.v9197 = Y_UNDEF_I;
F.v9197 = Y_DEFI(v1804);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = F.p3616;
while ((!(Y_DEFP(F.v9191) == ((void *)0)))) {
Y_TICK();
v1000 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_line);
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = Y_DEFP(F.v9191);
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_kind) == v666)))) {
if ((Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_sym) == ((void *)0))) {
yr3621_DeclareRoutine(Y_DEFP(F.v9191));
}
} else if (((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_kind) == v624))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_ival) == INT64_C(0))) {
yr3723_CompileModule(Y_DEFP(F.v9191));
}
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_kind) == v660)) {
yr3729_DeclareTemplate(Y_DEFP(F.v9191));
} else if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_kind) == v663)) {
yr3735_Instantiate(Y_DEFP(F.v9191));
} else {
yr3573_SimpleDecl(Y_DEFP(F.v9191));
}
F.v9191 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9191)))).f_next);
}
((void * *)(v1313).p)[y_ix1(v1313, Y_DEFI(v1273))] = ((void *)0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(F.v9193);
yr2673_CheckPending();
yr3686_ResolveLater(Y_DEFI(v1273));
if ((!Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(v1273))])))).f_closed))) {
yr3602_RunDeferred(Y_DEFI(F.v9195), Y_DEFI(F.v9197));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3621_DeclareRoutine(void * a_p3622) {
struct yf3623 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3622 = a_p3622;
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3622))).f_kind) == v654)) {
yr3528_RoutineHeader(F.p3622, v876);
} else {
yr3528_RoutineHeader(F.p3622, v885);
}
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3622))).f_kind) == v666)) {
yr3741_DeclareProcess(F.p3622);
}
yr3593_Defer(F.p3622, INT64_C(1), ((void *)0), 0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3627_Alias(rt_int a_p3628, void * a_p3629) {
struct yf3630 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3628 = a_p3628;
F.p3629 = a_p3629;
F.v9207 = Y_UNDEF_P;
F.v9207 = yr2258_NewSym(v894, F.p3628);
((*(yR125 *)y_deref(Y_DEFP(F.v9207)))).f_target = F.p3629;
((*(yR125 *)y_deref(Y_DEFP(F.v9207)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3629))).f_readonly);
{ void * rv9208 = Y_DEFP(F.v9207);
y_use = F.yu; return rv9208; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3634_AddLits(void * * a_p3635, void * a_p3636, rt_int a_p3637) {
struct yf3638 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3635 = a_p3635;
F.p3636 = a_p3636;
F.p3637 = a_p3637;
F.v9214 = Y_UNDEF_P;
F.v9216 = Y_UNDEF_P;
F.v9218 = Y_UNDEF_P;
if ((((F.p3637 > INT64_C(8))) || Y_DEFI(((*(yR110 *)y_deref(F.p3636))).f_opaque))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR110 *)y_deref(F.p3636))).f_kind) == v816)) {
F.v9214 = Y_DEFP(((*(yR110 *)y_deref(F.p3636))).f_lits);
while ((!(Y_DEFP(F.v9214) == ((void *)0)))) {
Y_TICK();
F.v9216 = yr2353_FindLit(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9214)))).f_name), F.p3636);
if ((!(Y_DEFP(F.v9216) == ((void *)0)))) {
F.v9216 = yr3627_Alias(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9214)))).f_name), Y_DEFP(F.v9216));
((*(yR125 *)y_deref(Y_DEFP(F.v9216)))).f_mnext = Y_DEFP((*F.p3635));
(*F.p3635) = Y_DEFP(F.v9216);
}
F.v9214 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9214)))).f_next);
}
} else if ((Y_DEFI(((*(yR110 *)y_deref(F.p3636))).f_kind) == v825)) {
F.v9218 = Y_DEFP(((*(yR110 *)y_deref(F.p3636))).f_fields);
while ((!(Y_DEFP(F.v9218) == ((void *)0)))) {
Y_TICK();
yr3634_AddLits(&(*F.p3635), Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9218)))).f_rep), y_range(y_add(F.p3637, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9218 = Y_DEFP(((*(yR115 *)y_deref(Y_DEFP(F.v9218)))).f_next);
}
} else if (((((Y_DEFI(((*(yR110 *)y_deref(F.p3636))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3636))).f_kind) == v834))) || ((Y_DEFI(((*(yR110 *)y_deref(F.p3636))).f_kind) == v831)))) {
yr3634_AddLits(&(*F.p3635), Y_DEFP(((*(yR110 *)y_deref(F.p3636))).f_elem), y_range(y_add(F.p3637, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3642_Provides(void * a_p3643, rt_int a_p3644) {
struct yf3645 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3643 = a_p3643;
F.p3644 = a_p3644;
F.v9228 = Y_UNDEF_P;
F.v9228 = Y_DEFP(((*(yR105 *)y_deref(F.p3643))).f_b);
if ((Y_DEFI(((*(yR105 *)y_deref(F.p3643))).f_name) == F.p3644)) {
{ rt_int rv9230 = 1;
y_use = F.yu; return rv9230; }
}
while ((!(Y_DEFP(F.v9228) == ((void *)0)))) {
Y_TICK();
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9228)))).f_ival) == INT64_C(0)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9228)))).f_ival) == F.p3644)))) {
{ rt_int rv9233 = 1;
y_use = F.yu; return rv9233; }
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9228)))).f_ival) == INT64_C(0))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9228)))).f_name) == F.p3644)))) {
{ rt_int rv9236 = 1;
y_use = F.yu; return rv9236; }
}
F.v9228 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9228)))).f_next);
}
{ rt_int rv9238 = 0;
y_use = F.yu; return rv9238; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3649_ImportLater(rt_int a_p3650, rt_int a_p3651, void * * a_p3652) {
struct yf3653 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3650 = a_p3650;
F.p3651 = a_p3651;
F.p3652_o = a_p3652;
F.v9244 = Y_UNDEF_P;
F.p3652 = ((void *)0);
if ((Y_DEFI(v1273) < INT64_C(0))) {
{ rt_int rv9247 = INT64_C(0);
(*F.p3652_o) = F.p3652;
y_use = F.yu; return rv9247; }
}
F.v9244 = Y_DEFP(((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9244) == ((void *)0)))) {
Y_TICK();
if (((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_kind) == v624)) && ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_ival) == INT64_C(2))))) && yr3642_Provides(Y_DEFP(F.v9244), F.p3650))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_ival) == INT64_C(1))) {
F.p3652 = Y_DEFP(F.v9244);
{ rt_int rv9251 = INT64_C(2);
(*F.p3652_o) = F.p3652;
y_use = F.yu; return rv9251; }
}
yr3723_CompileModule(Y_DEFP(F.v9244));
{ rt_int rv9253 = INT64_C(1);
(*F.p3652_o) = F.p3652;
y_use = F.yu; return rv9253; }
}
if ((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_kind) == v654)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_kind) == v666)))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_name) == F.p3650)))) {
{ rt_int rv9255 = INT64_C(3);
(*F.p3652_o) = F.p3652;
y_use = F.yu; return rv9255; }
}
if ((((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_kind) == v624))) && yr2320_DeclaredFrom(yr3657_OneDecl(Y_DEFP(F.v9244)), F.p3650))) {
yr1186_FailN(F.p3651, F.p3650, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v9244 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9244)))).f_next);
}
{ rt_int rv9258 = INT64_C(0);
(*F.p3652_o) = F.p3652;
y_use = F.yu; return rv9258; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3657_OneDecl(void * a_p3658) {
struct yf3659 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3658 = a_p3658;
F.v9262 = Y_UNDEF_P;
({ F.v9262 = y_new(sizeof(yR105)); y_initu(&yd_106, y_deref(F.v9262)); });
(*(yR105 *)y_deref(Y_DEFP(F.v9262))) = (*(yR105 *)y_deref(F.p3658));
((*(yR105 *)y_deref(Y_DEFP(F.v9262)))).f_next = ((void *)0);
{ void * rv9263 = Y_DEFP(F.v9262);
y_use = F.yu; return rv9263; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3663_Lazy(rt_int a_p3664, rt_int a_p3665, void * a_p3666, rt_int a_p3667) {
struct yf3668 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3664 = a_p3664;
F.p3665 = a_p3665;
F.p3666 = a_p3666;
F.p3667 = a_p3667;
F.v9270 = Y_UNDEF_P;
F.v9270 = yr2258_NewSym(v894, F.p3664);
if ((Y_DEFI(v1869) >= INT64_C(10000))) {
yr1178_FailS(F.p3667, y_str("too many imports translated later", 33));
}
v1869 = y_range(y_add(Y_DEFI(v1869), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1832).p)[y_ix1(v1832, Y_DEFI(v1869))] = Y_DEFP(F.v9270);
((rt_int *)(v1843).p)[y_ix1(v1843, Y_DEFI(v1869))] = F.p3665;
((void * *)(v1854).p)[y_ix1(v1854, Y_DEFI(v1869))] = F.p3666;
((rt_int *)(v1865).p)[y_ix1(v1865, Y_DEFI(v1869))] = Y_DEFI(v1273);
((rt_int *)(v1867).p)[y_ix1(v1867, Y_DEFI(v1869))] = F.p3667;
{ void * rv9275 = Y_DEFP(F.v9270);
y_use = F.yu; return rv9275; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3672_SetLazy(rt_int a_p3673, void * a_p3674) {
struct yf3675 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3673 = a_p3673;
F.p3674 = a_p3674;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1832).p)[y_ix1(v1832, F.p3673)])))).f_target = F.p3674;
((*(yR125 *)y_deref(Y_DEFP(((void * *)(v1832).p)[y_ix1(v1832, F.p3673)])))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(F.p3674))).f_readonly);
((void * *)(v1832).p)[y_ix1(v1832, F.p3673)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3679_ResolveFrom(void * a_p3680, void * a_p3681) {
struct yf3682 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3680 = a_p3680;
F.p3681 = a_p3681;
F.v9283 = Y_UNDEF_P;
F.lo9287 = INT64_C(1);
F.hi9288 = Y_DEFI(v1869);
{ rt_int hi9292 = F.hi9288;
for (rt_int i9291 = F.lo9287; i9291 <= hi9292; i9291++) { F.c_9290 = i9291; Y_TICK();
if ((((!(Y_DEFP(((void * *)(v1832).p)[y_ix1(v1832, F.c_9290)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1854).p)[y_ix1(v1854, F.c_9290)]) == F.p3680)))) {
F.v9283 = Y_DEFP(((*(yR125 *)y_deref(F.p3681))).f_members);
while ((((!(Y_DEFP(F.v9283) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9283)))).f_name) == Y_DEFI(((rt_int *)(v1843).p)[y_ix1(v1843, F.c_9290)])))))) {
Y_TICK();
F.v9283 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9283)))).f_mnext);
}
if ((Y_DEFP(F.v9283) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1867).p)[y_ix1(v1867, F.c_9290)]), Y_DEFI(((rt_int *)(v1843).p)[y_ix1(v1843, F.c_9290)]), y_str(" is not exported by that module", 31));
}
yr3672_SetLazy(y_range(F.c_9290, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9283));
}
if (i9291 == hi9292) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3686_ResolveLater(rt_int a_p3687) {
struct yf3688 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3687 = a_p3687;
F.v9297 = Y_UNDEF_P;
F.lo9301 = INT64_C(1);
F.hi9302 = Y_DEFI(v1869);
{ rt_int hi9306 = F.hi9302;
for (rt_int i9305 = F.lo9301; i9305 <= hi9306; i9305++) { F.c_9304 = i9305; Y_TICK();
if (((((!(Y_DEFP(((void * *)(v1832).p)[y_ix1(v1832, F.c_9304)]) == ((void *)0)))) && ((Y_DEFP(((void * *)(v1854).p)[y_ix1(v1854, F.c_9304)]) == ((void *)0)))) && ((Y_DEFI(((rt_int *)(v1865).p)[y_ix1(v1865, F.c_9304)]) == F.p3687)))) {
F.v9297 = yr2288_Find(Y_DEFI(((rt_int *)(v1843).p)[y_ix1(v1843, F.c_9304)]));
if ((Y_DEFP(F.v9297) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((rt_int *)(v1867).p)[y_ix1(v1867, F.c_9304)]), Y_DEFI(((rt_int *)(v1843).p)[y_ix1(v1843, F.c_9304)]), y_str(" is not declared around this module (X.B.2)", 43));
}
yr3672_SetLazy(y_range(F.c_9304, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), Y_DEFP(F.v9297));
}
if (i9305 == hi9306) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3692_LazyModule(void * a_p3693, void * * a_p3694, rt_int a_p3695) {
struct yf3696 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3693 = a_p3693;
F.p3694 = a_p3694;
F.p3695 = a_p3695;
F.v9313 = Y_UNDEF_P;
F.v9313 = Y_DEFP(((*(yR105 *)y_deref(F.p3693))).f_b);
F.v9315 = Y_UNDEF_P;
F.v9317 = Y_UNDEF_I;
while ((!(Y_DEFP(F.v9313) == ((void *)0)))) {
Y_TICK();
F.v9317 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9313)))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9313)))).f_ival) == INT64_C(0)))) {
F.v9317 = y_range(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9313)))).f_ival), INT64_C(0), INT64_C(4000000));
}
if (((((!(Y_DEFI(F.v9317) == v531))) && ((!(Y_DEFI(F.v9317) == v585)))) && ((!(Y_DEFI(F.v9317) == v570))))) {
F.v9315 = yr3663_Lazy(Y_DEFI(F.v9317), Y_DEFI(F.v9317), F.p3693, F.p3695);
((*(yR125 *)y_deref(Y_DEFP(F.v9315)))).f_mnext = Y_DEFP((*F.p3694));
(*F.p3694) = Y_DEFP(F.v9315);
}
F.v9313 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9313)))).f_next);
}
F.v9315 = yr3663_Lazy(Y_DEFI(((*(yR105 *)y_deref(F.p3693))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3693))).f_name), ((void *)0), F.p3695);
((*(yR125 *)y_deref(Y_DEFP(F.v9315)))).f_mnext = Y_DEFP((*F.p3694));
(*F.p3694) = Y_DEFP(F.v9315);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3700_ResolveItem(void * a_p3701, void * * a_p3702, rt_int a_p3703) {
struct yf3704 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3701 = a_p3701;
F.p3702 = a_p3702;
F.p3703 = a_p3703;
F.v9324 = Y_UNDEF_P;
F.v9326 = Y_UNDEF_P;
F.v9328 = Y_UNDEF_P;
F.v9330 = Y_UNDEF_I;
F.v9332 = Y_UNDEF_P;
F.v9334 = Y_UNDEF_I;
F.v9334 = Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_flag);
F.v9336 = Y_UNDEF_I;
F.v9338 = Y_UNDEF_P;
if (((F.p3703 && ((Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text) == INT64_C(0)))) && (((((Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name) == v531)) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name) == v585))) || ((Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name) == v570)))))) {
if ((yr2294_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name)) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v9330 = Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name);
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_ival) == INT64_C(0)))) {
F.v9330 = y_range(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_ival), INT64_C(0), INT64_C(4000000));
}
if ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text) == INT64_C(0)))) {
if ((((!F.p3703)) && ((yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text)) == ((void *)0))))) {
F.v9336 = yr3649_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), &F.v9338);
if ((Y_DEFI(F.v9336) == INT64_C(2))) {
F.v9328 = yr3663_Lazy(Y_DEFI(F.v9330), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), Y_DEFP(F.v9338), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_mnext = Y_DEFP((*F.p3702));
(*F.p3702) = Y_DEFP(F.v9328);
y_use = F.yu; return;
}
}
F.v9326 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line)));
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v879))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text), y_str(" is not a module", 16));
}
F.v9324 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_members);
while ((((!(Y_DEFP(F.v9324) == ((void *)0)))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name)))))) {
Y_TICK();
F.v9324 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_mnext);
}
if ((Y_DEFP(F.v9324) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), y_str(" is not exported by that module", 31));
}
} else {
if (F.p3703) {
F.v9324 = yr2294_FindHere(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name));
} else {
F.v9324 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name));
}
if ((((Y_DEFP(F.v9324) == ((void *)0))) && (!F.p3703))) {
F.v9336 = yr3649_ImportLater(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), &F.v9338);
if ((((Y_DEFI(F.v9336) == INT64_C(2))) && ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9338)))).f_name) == Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name))))) {
if ((((!(Y_DEFI(F.v9334) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3692_LazyModule(Y_DEFP(F.v9338), &(*F.p3702), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line));
y_use = F.yu; return;
}
if ((Y_DEFI(F.v9336) >= INT64_C(2))) {
F.v9328 = yr3663_Lazy(Y_DEFI(F.v9330), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), Y_DEFP(F.v9338), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line));
((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_mnext = Y_DEFP((*F.p3702));
(*F.p3702) = Y_DEFP(F.v9328);
y_use = F.yu; return;
}
F.v9324 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name));
}
if ((F.p3703 && ((!(Y_DEFP(F.v9324) == ((void *)0)))))) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_kind) == v894)) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_mval) == INT64_C(1))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((Y_DEFP(F.v9324) == ((void *)0))) {
if (F.p3703) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), y_str(" is not declared in this module", 31));
} else {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v9326 = yr2393_Real(Y_DEFP(F.v9324));
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v879)) && ((Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_text) == INT64_C(0))))) {
if ((((!(Y_DEFI(F.v9334) == INT64_C(0)))) || ((!(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_ival) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v9328 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_members);
while ((!(Y_DEFP(F.v9328) == ((void *)0)))) {
Y_TICK();
F.v9324 = yr3627_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_name), Y_DEFP(F.v9328));
((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_mnext = Y_DEFP((*F.p3702));
(*F.p3702) = Y_DEFP(F.v9324);
F.v9328 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_mnext);
}
if ((!F.p3703)) {
F.v9324 = yr3627_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_name), Y_DEFP(F.v9326));
((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_mnext = Y_DEFP((*F.p3702));
(*F.p3702) = Y_DEFP(F.v9324);
}
y_use = F.yu; return;
}
F.v9328 = yr3627_Alias(Y_DEFI(F.v9330), Y_DEFP(F.v9324));
if (F.p3703) {
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v870)))) {
if ((((Y_DEFI(F.v9334) == v429)) || ((Y_DEFI(F.v9334) == v483)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), y_str("READONLY and VAR are for variables", 34));
}
if ((((Y_DEFI(F.v9334) == v474)) && Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep)))).f_opaque))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(Y_DEFI(F.v9334) == v474))) || Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep)))).f_opaque))) {
F.v9332 = yr2406_CopyRep(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(F.v9332)))).f_opaque = 1;
((*(yR110 *)y_deref(Y_DEFP(F.v9332)))).f_opaqueops = Y_DEFI(v1820);
((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_target = yr2258_NewSym(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_name));
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_target)))).f_rep = Y_DEFP(F.v9332);
((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_target)))).f_decl = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_decl);
} else {
yr3634_AddLits(&(*F.p3702), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep), INT64_C(0));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v864)))) {
if ((((Y_DEFI(F.v9334) == v396)) || ((Y_DEFI(F.v9334) == v474)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((Y_DEFI(F.v9334) == v483)) && ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v864)) || Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9324)))).f_readonly))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_name), y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(Y_DEFI(F.v9334) == v483))) {
((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_readonly = 1;
}
} else if ((!(Y_DEFI(F.v9334) == INT64_C(0)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v861)) && ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep)))).f_kind) == v837)) || yr2449_HoldsSignal(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3701))).f_line), y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v867)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_kind) == v870)))) {
yr3634_AddLits(&(*F.p3702), Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9326)))).f_rep), INT64_C(0));
}
((*(yR125 *)y_deref(Y_DEFP(F.v9328)))).f_mnext = Y_DEFP((*F.p3702));
(*F.p3702) = Y_DEFP(F.v9328);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3708_DefineAll(void * a_p3709, rt_int a_p3710) {
struct yf3711 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3709 = a_p3709;
F.p3710 = a_p3710;
F.v9373 = Y_UNDEF_P;
F.v9373 = F.p3709;
F.v9375 = Y_UNDEF_P;
F.v9375 = F.p3709;
F.v9377 = Y_UNDEF_P;
F.v9377 = F.p3709;
while ((!(Y_DEFP(F.v9373) == ((void *)0)))) {
Y_TICK();
F.v9375 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9373)))).f_mnext);
F.v9377 = yr2294_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9373)))).f_name));
if (((!yr2341_Resolved(Y_DEFP(F.v9373))) || ((((!(Y_DEFP(F.v9377) == ((void *)0)))) && (!yr2341_Resolved(Y_DEFP(F.v9377))))))) {
if ((!(Y_DEFP(F.v9377) == ((void *)0)))) {
yr1186_FailN(F.p3710, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9373)))).f_name), y_str(" comes into this scope twice", 28));
}
yr2360_Define(Y_DEFP(F.v9373), F.p3710);
} else if ((((Y_DEFP(F.v9377) == ((void *)0))) || ((!(yr2393_Real(Y_DEFP(F.v9377)) == yr2393_Real(Y_DEFP(F.v9373))))))) {
if (((((!(Y_DEFP(F.v9377) == ((void *)0)))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v9373))))).f_kind) == v873))) && ((Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v9377))))).f_kind) == v873)))) {
yr2360_Define(Y_DEFP(F.v9373), F.p3710);
} else if ((Y_DEFP(F.v9377) == ((void *)0))) {
yr2360_Define(Y_DEFP(F.v9373), F.p3710);
} else {
yr1186_FailN(F.p3710, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9373)))).f_name), y_str(" comes into this scope twice", 28));
}
}
F.v9373 = Y_DEFP(F.v9375);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3715_ExtendWith(void * a_p3716, void * a_p3717, rt_int a_p3718) {
struct yf3719 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3716 = a_p3716;
F.p3717 = a_p3717;
F.p3718 = a_p3718;
F.v9385 = Y_UNDEF_P;
F.v9385 = ((void *)0);
F.v9387 = Y_UNDEF_P;
F.v9387 = ((void *)0);
F.v9389 = Y_UNDEF_P;
F.v9389 = ((void *)0);
F.v9391 = Y_UNDEF_P;
F.v9391 = ((void *)0);
F.v9391 = F.p3716;
while ((!(Y_DEFP(F.v9391) == ((void *)0)))) {
Y_TICK();
if ((!(yr3535_SameSignature(Y_DEFP(F.v9391), F.p3717) == ((void *)0)))) {
yr1186_FailN(F.p3718, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9391)))).f_name), y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9391)))).f_ret)))).f_kind) == v852)) == ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3717))).f_ret)))).f_kind) == v852))))) {
yr1186_FailN(F.p3718, Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9391)))).f_name), y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v9389 = y_new(sizeof(yR125)); y_initu(&yd_126, y_deref(F.v9389)); });
(*(yR125 *)y_deref(Y_DEFP(F.v9389))) = (*(yR125 *)y_deref(Y_DEFP(F.v9391)));
((*(yR125 *)y_deref(Y_DEFP(F.v9389)))).f_target = Y_DEFP(F.v9391);
((*(yR125 *)y_deref(Y_DEFP(F.v9389)))).f_alt = ((void *)0);
if ((Y_DEFP(F.v9387) == ((void *)0))) {
F.v9385 = Y_DEFP(F.v9389);
} else {
((*(yR125 *)y_deref(Y_DEFP(F.v9387)))).f_alt = Y_DEFP(F.v9389);
}
F.v9387 = Y_DEFP(F.v9389);
F.v9391 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9391)))).f_alt);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9387)))).f_alt = F.p3717;
{ void * rv9394 = Y_DEFP(F.v9385);
y_use = F.yu; return rv9394; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3723_CompileModule(void * a_p3724) {
struct yf3725 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3724 = a_p3724;
F.v9398 = Y_UNDEF_P;
F.v9400 = Y_UNDEF_P;
F.v9402 = Y_UNDEF_P;
F.v9404 = Y_UNDEF_P;
F.v9406 = Y_UNDEF_P;
F.v9408 = Y_UNDEF_P;
F.v9410 = Y_UNDEF_P;
F.v9412 = Y_UNDEF_P;
F.v9414 = Y_UNDEF_P;
F.v9416 = Y_UNDEF_I;
F.v9418 = Y_UNDEF_P;
F.v9420 = Y_UNDEF_P;
F.v9422 = Y_UNDEF_I;
F.v9424 = Y_UNDEF_I;
F.v9426 = Y_UNDEF_I;
F.v9426 = 0;
((*(yR105 *)y_deref(F.p3724))).f_ival = INT64_C(1);
F.v9416 = Y_DEFI(v1668);
F.v9398 = ((void *)0);
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(F.p3724))).f_a);
while ((!(Y_DEFP(F.v9418) == ((void *)0)))) {
Y_TICK();
yr3700_ResolveItem(Y_DEFP(F.v9418), &F.v9398, 0);
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_next);
}
F.v9408 = Y_DEFP(v1807);
if ((((Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_flag) == INT64_C(1))) && ((Y_DEFP(v1807) == ((void *)0))))) {
F.v9410 = yr2258_NewSym(v861, Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9410)))).f_level = Y_DEFI(v1279);
((*(yR125 *)y_deref(Y_DEFP(F.v9410)))).f_cname = yr1200_Fresh(y_str("mon", 3));
((*(yR125 *)y_deref(Y_DEFP(F.v9410)))).f_rep = Y_DEFP(v1348);
yr2380_DeclStorage(yr1061_T(y_str("ymon", 4)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9410)))).f_cname));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2367_Path(Y_DEFI(v1279), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9410)))).f_cname)), yr1061_T(y_str(");", 2))));
v1807 = Y_DEFP(F.v9410);
F.v9426 = 1;
}
yr2265_OpenScope(1);
v1668 = Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_name);
((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))] = ((void *)0);
F.v9422 = Y_DEFI(v1276);
v1276 = Y_DEFI(v1273);
F.v9402 = Y_DEFP(F.v9398);
while ((!(Y_DEFP(F.v9402) == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(Y_DEFP(F.v9402)))).f_mval = INT64_C(1);
F.v9402 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9402)))).f_mnext);
}
yr3708_DefineAll(Y_DEFP(F.v9398), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line));
yr3615_Declarations(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(F.p3724))).f_c)))).f_a));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("/* ", 3)), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_name), yr1061_T(y_str(" */", 3))));
yr3593_Defer(F.p3724, INT64_C(2), Y_DEFP((v996).f_tail), Y_DEFI(F.v9426));
v1820 = INT64_C(0);
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(F.p3724))).f_b);
while ((!(Y_DEFP(F.v9418) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_text) == INT64_C(0))) && ((yr2294_FindHere(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_name)) == ((void *)0))))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_name) == v531)) {
v1820 = y_range(y_add(Y_DEFI(v1820), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_name) == v585)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_name) == v570)))) {
if (((y_div(Y_DEFI(v1820), INT64_C(2))) == INT64_C(0))) {
v1820 = y_range(y_add(Y_DEFI(v1820), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_next);
}
F.v9400 = ((void *)0);
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(F.p3724))).f_b);
while ((!(Y_DEFP(F.v9418) == ((void *)0)))) {
Y_TICK();
yr3700_ResolveItem(Y_DEFP(F.v9418), &F.v9400, 1);
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9418)))).f_next);
}
F.v9420 = Y_DEFP(((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))]);
v1276 = Y_DEFI(F.v9422);
v1668 = Y_DEFI(F.v9416);
yr2277_CloseScope();
while ((!(Y_DEFP(F.v9420) == ((void *)0)))) {
Y_TICK();
F.v9418 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9420)))).f_next);
((*(yR105 *)y_deref(Y_DEFP(F.v9420)))).f_next = Y_DEFP(((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))]);
((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))] = Y_DEFP(F.v9420);
F.v9420 = Y_DEFP(F.v9418);
}
v1807 = Y_DEFP(F.v9408);
F.v9404 = yr2258_NewSym(v879, Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9404)))).f_members = Y_DEFP(F.v9400);
yr2360_Define(Y_DEFP(F.v9404), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line));
F.v9406 = Y_DEFP(F.v9400);
F.v9400 = ((void *)0);
while ((!(Y_DEFP(F.v9406) == ((void *)0)))) {
Y_TICK();
F.v9412 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_mnext);
F.v9402 = yr3627_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name), Y_DEFP(F.v9406));
((*(yR125 *)y_deref(Y_DEFP(F.v9402)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_readonly);
((*(yR125 *)y_deref(Y_DEFP(F.v9402)))).f_mnext = Y_DEFP(F.v9400);
F.v9400 = Y_DEFP(F.v9402);
F.v9406 = Y_DEFP(F.v9412);
}
((*(yR125 *)y_deref(Y_DEFP(F.v9404)))).f_members = Y_DEFP(F.v9400);
((*(yR105 *)y_deref(F.p3724))).f_ival = INT64_C(2);
yr3679_ResolveFrom(F.p3724, Y_DEFP(F.v9404));
F.v9406 = Y_DEFP(F.v9400);
while ((!(Y_DEFP(F.v9406) == ((void *)0)))) {
Y_TICK();
F.v9412 = yr3627_Alias(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name), Y_DEFP(F.v9406));
((*(yR125 *)y_deref(Y_DEFP(F.v9412)))).f_readonly = Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_readonly);
F.v9414 = yr2288_Find(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name));
if ((!(Y_DEFP(F.v9414) == ((void *)0)))) {
if ((!yr2341_Resolved(Y_DEFP(F.v9414)))) {
F.v9414 = ((void *)0);
} else {
F.v9414 = yr2393_Real(Y_DEFP(F.v9414));
}
}
if ((((Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v9406))))).f_kind) == v876)) && ((!(Y_DEFP(F.v9414) == ((void *)0)))))) {
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9414)))).f_kind) == v876)) {
F.v9412 = yr3715_ExtendWith(yr2393_Real(Y_DEFP(F.v9406)), Y_DEFP(F.v9414), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line));
}
}
if ((yr2294_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name)) == ((void *)0))) {
yr2360_Define(Y_DEFP(F.v9412), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line));
} else if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9412)))).f_kind) == v876)) {
yr2360_Define(Y_DEFP(F.v9412), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line));
} else if ((((Y_DEFI(((*(yR125 *)y_deref(yr2294_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name))))).f_kind) == v894)) && ((!(yr2393_Real(yr2294_FindHere(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name))) == yr2393_Real(Y_DEFP(F.v9406))))))) {
yr2360_Define(Y_DEFP(F.v9412), Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line));
} else if ((!(Y_DEFI(((*(yR125 *)y_deref(yr2393_Real(Y_DEFP(F.v9406))))).f_kind) == v873))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3724))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_name), y_str(" is exported into a scope that has it already", 45));
}
F.v9406 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9406)))).f_mnext);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3729_DeclareTemplate(void * a_p3730) {
struct yf3731 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3730 = a_p3730;
F.v9456 = Y_UNDEF_P;
F.v9456 = yr2258_NewSym(v882, Y_DEFI(((*(yR105 *)y_deref(F.p3730))).f_name));
((*(yR125 *)y_deref(Y_DEFP(F.v9456)))).f_decl = F.p3730;
yr2360_Define(Y_DEFP(F.v9456), Y_DEFI(((*(yR105 *)y_deref(F.p3730))).f_line));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3735_Instantiate(void * a_p3736) {
struct yf3737 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3736 = a_p3736;
F.v9460 = Y_UNDEF_P;
F.v9460 = yr2393_Real(yr2300_Lookup(Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_name), Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_line)));
F.v9462 = Y_UNDEF_P;
F.v9464 = Y_UNDEF_P;
F.v9466 = Y_UNDEF_P;
F.v9468 = Y_UNDEF_I;
F.v9470 = Y_UNDEF_I;
F.v9472 = Y_UNDEF_I;
F.v9474 = Y_UNDEF_I;
F.v9476 = Y_UNDEF_P;
if ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9460)))).f_kind) == v882))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_name), y_str(" is not a template", 18));
}
F.v9462 = Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(F.v9460)))).f_decl);
if ((!(yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9462)))).f_a)) == yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3736))).f_a))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_name), y_str(": the number of actuals is wrong", 32));
}
F.v9468 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9484 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9462)))).f_ival);
F.hi9485 = y_sub(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9462)))).f_flag), INT64_C(1));
{ rt_int hi9489 = F.hi9485;
for (rt_int i9488 = F.lo9484; i9488 <= hi9489; i9488++) { F.c_9487 = i9488; Y_TICK();
F.v9472 = Y_DEFI(((rt_int *)(v1207).p)[y_ix1(v1207, F.c_9487)]);
F.v9474 = Y_DEFI(((rt_int *)(v1209).p)[y_ix1(v1209, F.c_9487)]);
if ((Y_DEFI(F.v9472) == v207)) {
F.v9464 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9462)))).f_a);
F.v9466 = Y_DEFP(((*(yR105 *)y_deref(F.p3736))).f_a);
while ((!(Y_DEFP(F.v9464) == ((void *)0)))) {
Y_TICK();
if ((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9464)))).f_name) == Y_DEFI(F.v9474))) && ((Y_DEFI(F.v9472) == v207)))) {
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9466)))).f_flag) == INT64_C(1))) {
F.v9472 = v216;
F.v9474 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9466)))).f_ival);
} else {
F.v9474 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9466)))).f_name);
if ((Y_DEFI(F.v9474) <= v492)) {
F.v9472 = v210;
} else if ((Y_DEFI(F.v9474) <= v621)) {
F.v9472 = v213;
}
}
}
F.v9464 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9464)))).f_next);
F.v9466 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9466)))).f_next);
}
}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = Y_DEFI(F.v9472);
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = Y_DEFI(F.v9474);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((rt_int *)(v1211).p)[y_ix1(v1211, F.c_9487)]);
if (i9488 == hi9489) break;
}}
v1213 = y_range(y_add(Y_DEFI(v1213), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, Y_DEFI(v1213))] = v204;
((rt_int *)(v1209).p)[y_ix1(v1209, Y_DEFI(v1213))] = INT64_C(0);
((rt_int *)(v1211).p)[y_ix1(v1211, Y_DEFI(v1213))] = Y_DEFI(((*(yR105 *)y_deref(F.p3736))).f_line);
F.v9470 = Y_DEFI(v1249);
v1249 = Y_DEFI(F.v9468);
F.v9476 = yr2049_ParseModule();
v1249 = Y_DEFI(F.v9470);
yr3723_CompileModule(Y_DEFP(F.v9476));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3741_DeclareProcess(void * a_p3742) {
struct yf3743 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3742 = a_p3742;
F.v9499 = Y_UNDEF_P;
F.v9499 = Y_DEFP(((*(yR105 *)y_deref(F.p3742))).f_sym);
F.v9501 = Y_UNDEF_P;
((*(yR125 *)y_deref(Y_DEFP(F.v9499)))).f_monitor = Y_DEFP(v1807);
yr2380_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9499)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0)));
F.v9501 = yr1944_NewNode(v669, Y_DEFI(((*(yR105 *)y_deref(F.p3742))).f_line));
((*(yR105 *)y_deref(Y_DEFP(F.v9501)))).f_sym = Y_DEFP(F.v9499);
((*(yR105 *)y_deref(Y_DEFP(F.v9501)))).f_next = Y_DEFP(((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))]);
((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))] = Y_DEFP(F.v9501);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3747_AwaitProcesses(void) {
struct yf3748 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9507 = Y_UNDEF_P;
F.v9507 = Y_DEFP(((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))]);
while ((!(Y_DEFP(F.v9507) == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3388_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2367_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9507)))).f_sym)))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9507)))).f_sym)))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
F.v9507 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9507)))).f_next);
}
((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3752_Activate(void * a_p3753, void * a_p3754) {
struct yf3755 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3753 = a_p3753;
F.p3754 = a_p3754;
F.v9518 = Y_UNDEF_I;
F.v9520 = Y_UNDEF_I;
F.v9522 = Y_UNDEF_I;
F.v9524 = Y_UNDEF_I;
F.v9526 = Y_UNDEF_I;
F.v9528 = Y_UNDEF_P;
F.v9530 = Y_UNDEF_I;
F.v9532 = Y_UNDEF_I;
F.v9534 = Y_UNDEF_P;
F.v9536 = Y_UNDEF_I;
F.v9538 = Y_UNDEF_I;
F.v9540 = Y_UNDEF_I;
F.v9542 = Y_UNDEF_I;
F.v9544 = Y_UNDEF_I;
F.v9546 = Y_UNDEF_I;
F.v9548 = Y_UNDEF_P;
F.v9548 = Y_DEFP(((*(yR125 *)y_deref(F.p3754))).f_decl);
F.v9550 = Y_UNDEF_P;
yr3137_CompileArgs(Y_DEFP(((*(yR105 *)y_deref(F.p3753))).f_a), F.p3754, &F.v9518, &F.v9520);
if ((!(Y_DEFI(F.v9520) == Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_nparams)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3753))).f_line), Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
yr3187_NoteCall(F.p3754, Y_DEFI(((*(yR105 *)y_deref(F.p3753))).f_line));
yr3476_CheckActuals(F.p3754, Y_DEFI(F.v9518), Y_DEFI(((*(yR105 *)y_deref(F.p3753))).f_line));
F.v9536 = yr1200_Fresh(y_str("pf", 2));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("{ struct ", 9)), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3754))).f_members)))).f_name), yr3388_Join(yr1061_T(y_str(" *", 2)), Y_DEFI(F.v9536), yr3388_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), Y_DEFI(F.v9536), yr1061_T(y_str(");", 2))))));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_level) > INT64_C(1))) {
yr1132_Emit(yr3388_Join(Y_DEFI(F.v9536), yr1061_T(y_str("->up = ", 7)), yr3388_Join(yr2374_FramePtr(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9534 = Y_DEFP(((*(yR125 *)y_deref(F.p3754))).f_params);
F.v9522 = y_range(y_add(Y_DEFI(F.v9518), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(Y_DEFP(F.v9534) == ((void *)0)))) {
Y_TICK();
if ((!yr3116_Fits(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))])))) {
yr2486_TypeClash(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))])))).f_line), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))]));
}
F.v9542 = yr3388_Join(Y_DEFI(F.v9536), yr1061_T(y_str("->", 2)), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_cname));
yr3146_CheckUnresolved(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))]), Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))])))).f_line));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep)))).f_kind) == v855)) {
yr1132_Emit(yr3388_Join(Y_DEFI(F.v9542), yr1061_T(y_str(" = ", 3)), yr3388_Join(yr2785_SpaceArg(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))]), Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v9522))]), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if ((Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_cls) == v903)) {
if ((!yr2939_IsVariable(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_name), y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr3154_SameAsFormal(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))])))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))])))).f_line), Y_DEFI(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_name), y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3443_NoteWrite(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))]));
yr3426_DesigBase(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))]), &F.v9528, &F.v9530, &F.v9532);
if ((((!(Y_DEFP(F.v9528) == ((void *)0)))) && (!Y_DEFI(F.v9530)))) {
if ((yr3759_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9528)))).f_depth)) > yr3759_LifeDepth(Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_depth)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))])))).f_line), Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9528)))).f_name), y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1132_Emit(yr3388_Join(Y_DEFI(F.v9542), yr1061_T(y_str(" = &", 4)), yr3388_Join(yr3013_RawCode(Y_DEFP(((void * *)(v1537).p)[y_ix1(v1537, Y_DEFI(F.v9522))]), Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v9522))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2436_Deep(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep))) {
F.v9538 = yr1200_Fresh(y_str("t", 1));
yr1132_Emit(yr3388_Join(yr1061_T(y_str("{ ", 2)), yr2461_CType(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep)), yr3388_Join(yr1061_T(y_str(" ", 1)), Y_DEFI(F.v9538), yr3388_Join(yr1061_T(y_str(" = ", 3)), yr2911_Convert(Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v9522))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))])), yr1061_T(y_str(";", 1))))));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep)))).f_kind) == v843)) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep)))).f_elem)), yr3388_Join(yr1061_T(y_str("), &", 4)), Y_DEFI(F.v9542), yr3388_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9538), yr1061_T(y_str("); }", 4))))));
} else {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_copy(", 7)), yr2467_DescOf(Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep)), yr3388_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9542), yr3388_Join(yr1061_T(y_str(", &", 3)), Y_DEFI(F.v9538), yr1061_T(y_str("); }", 4))))));
}
} else {
yr1132_Emit(yr3388_Join(Y_DEFI(F.v9542), yr1061_T(y_str(" = ", 3)), yr3388_Join(yr2911_Convert(Y_DEFI(((rt_int *)(v1515).p)[y_ix1(v1515, Y_DEFI(F.v9522))]), Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_rep), Y_DEFP(((void * *)(v1526).p)[y_ix1(v1526, Y_DEFI(F.v9522))])), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9522 = y_range(y_add(Y_DEFI(F.v9522), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9534 = Y_DEFP(((*(yR120 *)y_deref(Y_DEFP(F.v9534)))).f_next);
}
v1539 = Y_DEFI(F.v9518);
F.v9544 = yr1061_T(y_str("0", 1));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_e) == ((void *)0)))) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_e), Y_DEFP(v1342), &F.v9544, &F.v9550);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v9550));
}
F.v9546 = yr1061_T(y_str("0, 0", 4));
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_d) == ((void *)0)))) {
yr2978_Expr(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_d), Y_DEFP(v1342), &F.v9540, &F.v9550);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_line), Y_DEFP(v1342), Y_DEFP(F.v9550));
F.v9546 = yr3388_Join(yr1061_T(y_str("1, ", 3)), Y_DEFI(F.v9540), INT64_C(0));
}
F.v9524 = INT64_C(0);
if ((!(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_x) == ((void *)0)))) {
yr2830_Manifest(Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_x), &F.v9526, &F.v9524);
if (((!Y_DEFI(F.v9526)) || ((Y_DEFI(F.v9524) < INT64_C(1))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9548)))).f_line), y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(yr2367_Path(y_range(y_sub(Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_level), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3388_Join(Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_cname), yr1061_T(y_str("_d", 2)), INT64_C(0))));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9544));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9546));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v9524));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(((*(yR125 *)y_deref(F.p3754))).f_cname));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9536));
yr1037_SA(y_str("); }", 4));
F.v9538 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9538));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3759_LifeDepth(rt_int a_p3760) {
struct yf3761 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3760 = a_p3760;
F.v9614 = Y_UNDEF_I;
F.v9614 = F.p3760;
while ((((Y_DEFI(F.v9614) > INT64_C(1))) && Y_DEFI(((*(yR130 *)y_deref(Y_DEFP(((void * *)(v1271).p)[y_ix1(v1271, Y_DEFI(F.v9614))])))).f_closed))) {
Y_TICK();
F.v9614 = y_range(y_sub(Y_DEFI(F.v9614), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv9618 = Y_DEFI(F.v9614);
y_use = F.yu; return rv9618; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3765_MonitorPath(void * a_p3766) {
struct yf3767 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3766 = a_p3766;
{ rt_int rv9623 = yr3388_Join(yr1061_T(y_str("&", 1)), yr2367_Path(Y_DEFI(((*(yR125 *)y_deref(F.p3766))).f_level), Y_DEFI(((*(yR125 *)y_deref(F.p3766))).f_cname)), INT64_C(0));
y_use = F.yu; return rv9623; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3771_EnterMonitor(void * a_p3772) {
struct yf3773 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3772 = a_p3772;
F.v9627 = Y_UNDEF_I;
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3772))).f_kind) == v876)) {
((*(yR125 *)y_deref(F.p3772))).f_monitor = Y_DEFP(v1807);
}
if ((Y_DEFP(((*(yR125 *)y_deref(F.p3772))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3765_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3772))).f_monitor)), yr1061_T(y_str(");", 2))));
F.v9627 = yr1200_Fresh(y_str("mf", 2));
v1657 = 1;
yr1132_Emit(yr3388_Join(yr1061_T(y_str("rt_frame ", 9)), Y_DEFI(F.v9627), yr1061_T(y_str(";", 1))));
yr1026_SB();
yr1037_SA(y_str("if (!RT_TRY(", 12));
yr1044_ST(Y_DEFI(F.v9627));
yr1037_SA(y_str(")) { RT_POP(", 12));
yr1044_ST(Y_DEFI(F.v9627));
yr1037_SA(y_str("); ", 3));
if ((Y_DEFI(((*(yR125 *)y_deref(F.p3772))).f_kind) == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
}
yr1044_ST(yr3765_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(F.p3772))).f_monitor)));
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1132_Emit(yr1056_SE());
v1553 = y_range(y_add(Y_DEFI(v1553), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1551).p)[y_ix1(v1551, Y_DEFI(v1553))] = Y_DEFI(F.v9627);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3777_LeaveMonitor(void) {
struct yf3778 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((Y_DEFP(v1628) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_monitor) == ((void *)0))) {
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_kind) == v885)) {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3765_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_monitor)), yr1061_T(y_str(");", 2))));
} else {
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3765_MonitorPath(Y_DEFP(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_monitor)), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3782_TerminateStatement(void * a_p3783) {
struct yf3784 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3783 = a_p3783;
if ((((Y_DEFP(v1628) == ((void *)0))) || ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(v1628)))).f_kind) == v885))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3783))).f_line), y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3747_AwaitProcesses();
yr3777_LeaveMonitor();
yr3276_PopTo(Y_DEFI(v1556));
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3788_DeclareSignal(void * a_p3789, rt_int a_p3790) {
struct yf3791 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3789 = a_p3789;
F.p3790 = a_p3790;
if ((Y_DEFP(v1807) == ((void *)0))) {
yr1178_FailS(F.p3790, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR125 *)y_deref(F.p3789))).f_rep = yr2406_CopyRep(Y_DEFP(((*(yR125 *)y_deref(F.p3789))).f_rep));
((*(yR110 *)y_deref(Y_DEFP(((*(yR125 *)y_deref(F.p3789))).f_rep)))).f_monitor = Y_DEFP(v1807);
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2387_SymPath(F.p3789), yr3388_Join(yr1061_T(y_str(", ", 2)), yr3765_MonitorPath(Y_DEFP(v1807)), yr1061_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3795_DeclareSignalArray(void * a_p3796, rt_int a_p3797) {
struct yf3798 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3796 = a_p3796;
F.p3797 = a_p3797;
if ((Y_DEFP(v1807) == ((void *)0))) {
yr1178_FailS(F.p3797, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1132_Emit(yr3388_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2467_DescOf(Y_DEFP(((*(yR125 *)y_deref(F.p3796))).f_rep)), yr3388_Join(yr1061_T(y_str(", &", 3)), yr2387_SymPath(F.p3796), yr3388_Join(yr1061_T(y_str(", ", 2)), yr3765_MonitorPath(Y_DEFP(v1807)), yr1061_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3802_DeviceSignal(void * a_p3803, void * a_p3804) {
struct yf3805 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3803 = a_p3803;
F.p3804 = a_p3804;
F.v9670 = Y_UNDEF_I;
F.v9672 = Y_UNDEF_I;
F.v9674 = Y_UNDEF_I;
yr2830_Manifest(F.p3804, &F.v9670, &F.v9672);
if ((!Y_DEFI(F.v9670))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3804))).f_line), y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1026_SB();
yr1037_SA(y_str("y_device(&", 10));
yr1044_ST(yr2387_SymPath(F.p3803));
yr1037_SA(y_str(", ", 2));
yr1050_SI(Y_DEFI(F.v9672));
yr1037_SA(y_str(");", 2));
F.v9674 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9674));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3809_Arg(void * a_p3810, rt_int a_p3811) {
struct yf3812 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3810 = a_p3810;
F.p3811 = a_p3811;
F.v9683 = Y_UNDEF_P;
F.v9683 = Y_DEFP(((*(yR105 *)y_deref(F.p3810))).f_a);
F.v9685 = Y_UNDEF_I;
F.v9685 = INT64_C(1);
while ((((!(Y_DEFP(F.v9683) == ((void *)0)))) && ((Y_DEFI(F.v9685) < F.p3811)))) {
Y_TICK();
F.v9683 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v9683)))).f_next);
F.v9685 = y_range(y_add(Y_DEFI(F.v9685), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFP(F.v9683) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3810))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3810))).f_name), y_str(": too few actual parameters", 27));
}
{ void * rv9690 = Y_DEFP(F.v9683);
y_use = F.yu; return rv9690; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3816_NArgs(void * a_p3817, rt_int a_p3818) {
struct yf3819 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3817 = a_p3817;
F.p3818 = a_p3818;
if ((!(yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3817))).f_a)) == F.p3818))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3817))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3817))).f_name), y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3823_Call1(yarr a_p3825, rt_int a_p3826) {
struct yf3827 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3825 = a_p3825;
F.p3826 = a_p3826;
yr1026_SB();
yr1037_SA(F.p3825);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3826);
yr1037_SA(y_str(")", 1));
{ rt_int rv9700 = yr1056_SE();
y_use = F.yu; return rv9700; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3831_Addr(rt_int a_p3832) {
struct yf3833 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3832 = a_p3832;
{ rt_int rv9705 = yr3388_Join(yr1061_T(y_str("&", 1)), F.p3832, INT64_C(0));
y_use = F.yu; return rv9705; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3837_StdVar(void * a_p3838, rt_int a_p3839, rt_int * a_p3840, void * * a_p3841) {
struct yf3842 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3838 = a_p3838;
F.p3839 = a_p3839;
F.p3840_o = a_p3840;
F.p3841_o = a_p3841;
F.v9712 = Y_UNDEF_I;
yr2951_LValue(F.p3838, &F.p3840, &F.p3841);
yr3443_NoteWrite(F.p3838);
if ((((!(F.p3839 == v858))) && ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3841)))).f_kind) == F.p3839))))) {
yr1026_SB();
yr1037_SA(y_str("a ", 2));
if ((F.p3839 == v831)) {
yr1037_SA(y_str("file", 4));
} else if ((F.p3839 == v837)) {
yr1037_SA(y_str("signal", 6));
} else if ((F.p3839 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3839 == v828)) {
yr1037_SA(y_str("pointer", 7));
} else {
yr1037_SA(y_str("variable", 8));
}
yr1037_SA(y_str(" is needed here", 15));
F.v9712 = yr1056_SE();
yr1157_Fail(Y_DEFI(((*(yR105 *)y_deref(F.p3838))).f_line), Y_DEFI(F.v9712));
}
(*F.p3840_o) = F.p3840;
(*F.p3841_o) = F.p3841;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3846_NumArg(void * a_p3847, rt_int * a_p3848, void * * a_p3849) {
struct yf3850 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3847 = a_p3847;
F.p3848_o = a_p3848;
F.p3849_o = a_p3849;
yr2978_Expr(F.p3847, ((void *)0), &F.p3848, &F.p3849);
if ((!yr2418_IsNumeric(Y_DEFP(F.p3849)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3847))).f_line), y_str("a number is needed here", 23));
}
(*F.p3848_o) = F.p3848;
(*F.p3849_o) = F.p3849;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3854_IntArg(void * a_p3855) {
struct yf3856 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3855 = a_p3855;
F.v9728 = Y_UNDEF_I;
F.v9730 = Y_UNDEF_P;
yr2978_Expr(F.p3855, Y_DEFP(v1342), &F.v9728, &F.v9730);
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9730)))).f_kind) == v804))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3855))).f_line), y_str("an integer is needed here", 25));
}
{ rt_int rv9732 = Y_DEFI(F.v9728);
y_use = F.yu; return rv9732; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3860_CodeInsert(void * a_p3861) {
struct yf3862 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3861 = a_p3861;
F.v9736 = Y_UNDEF_P;
F.v9736 = yr3809_Arg(F.p3861, INT64_C(1));
F.v9739 = Y_UNDEF_I;
F.v9741 = Y_UNDEF_I;
F.v9743 = Y_UNDEF_I;
F.v9745 = Y_UNDEF_I;
F.v9747 = Y_UNDEF_I;
F.v9749 = Y_UNDEF_I;
F.v9751 = Y_UNDEF_B;
F.v9753 = Y_UNDEF_P;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_9762, 1, lo, hi, &y_d_int); }
y_initu(&F.yd_9762, &F.v9764);
if ((!(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9736)))).f_kind) == v771))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3861))).f_line), y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v9739 = Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9736)))).f_text);
F.v9749 = Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9739))]);
yr1026_SB();
F.v9745 = INT64_C(1);
while ((Y_DEFI(F.v9745) <= Y_DEFI(F.v9749))) {
Y_TICK();
F.v9751 = yr1103_TChar(Y_DEFI(F.v9739), Y_DEFI(F.v9745));
if ((Y_DEFB(F.v9751) == 39)) {
F.v9747 = y_range(y_add(Y_DEFI(F.v9745), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v9747) <= Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9739))]))) && ((!(yr1103_TChar(Y_DEFI(F.v9739), Y_DEFI(F.v9747)) == 39))))) {
Y_TICK();
F.v9747 = y_range(y_add(Y_DEFI(F.v9747), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((Y_DEFI(F.v9747) > Y_DEFI(((rt_int *)(v920).p)[y_ix1(v920, Y_DEFI(F.v9739))]))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3861))).f_line), y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v9741 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v9739))]), Y_DEFI(F.v9745)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v9747), Y_DEFI(F.v9745))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SC(Y_DEFB(((unsigned char *)(v976).p)[y_ix1(v976, yr2813_CharValue(Y_DEFP(v1346), Y_DEFI(F.v9741), Y_DEFI(((*(yR105 *)y_deref(F.p3861))).f_line)))]));
F.v9745 = y_range(y_add(Y_DEFI(F.v9747), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((Y_DEFB(F.v9751) == 36)) {
F.v9747 = y_range(y_add(Y_DEFI(F.v9745), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((Y_DEFI(F.v9747) <= Y_DEFI(F.v9749))) && ((yr1008_IsLetter(yr1103_TChar(Y_DEFI(F.v9739), Y_DEFI(F.v9747))) || yr1014_IsDigit(yr1103_TChar(Y_DEFI(F.v9739), Y_DEFI(F.v9747))))))) {
Y_TICK();
F.v9747 = y_range(y_add(Y_DEFI(F.v9747), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v9741 = yr1068_Intern(y_range(y_add(Y_DEFI(((rt_int *)(v918).p)[y_ix1(v918, Y_DEFI(F.v9739))]), Y_DEFI(F.v9745)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(Y_DEFI(F.v9747), Y_DEFI(F.v9745))), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9753 = yr2288_Find(Y_DEFI(F.v9741));
if ((Y_DEFP(F.v9753) == ((void *)0))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3861))).f_line), Y_DEFI(F.v9741), y_str(" in a code insert is not declared here", 38));
}
F.v9753 = yr2393_Real(Y_DEFP(F.v9753));
if ((((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9753)))).f_kind) == v861))) && ((!(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9753)))).f_kind) == v864))))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3861))).f_line), Y_DEFI(F.v9741), y_str(" in a code insert is not a variable or constant", 47));
}
yr1044_ST(yr2959_Paren(yr2387_SymPath(Y_DEFP(F.v9753))));
F.v9745 = Y_DEFI(F.v9747);
} else {
yr1031_SC(Y_DEFB(F.v9751));
F.v9745 = y_range(y_add(Y_DEFI(F.v9745), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v9743 = yr1056_SE();
yr1132_Emit(Y_DEFI(F.v9743));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3866_ManifestScale(void * a_p3867, void * a_p3868) {
struct yf3869 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3867 = a_p3867;
F.p3868 = a_p3868;
F.v9803 = Y_UNDEF_I;
F.v9805 = Y_UNDEF_I;
F.v9807 = Y_UNDEF_I;
F.v9809 = Y_UNDEF_P;
yr2896_ManifestFix(F.p3867, &F.v9803, &F.v9805, &F.v9807);
if (((!Y_DEFI(F.v9803)) || ((Y_DEFI(F.v9805) <= INT64_C(0))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3868))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3868))).f_name), y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v9809 = yr2406_CopyRep(Y_DEFP(v1356));
((*(yR110 *)y_deref(Y_DEFP(F.v9809)))).f_abstract = 0;
yr2608_SetScale(Y_DEFP(F.v9809), Y_DEFI(F.v9805), Y_DEFI(F.v9807));
{ void * rv9813 = Y_DEFP(F.v9809);
y_use = F.yu; return rv9813; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3873_StdCall(rt_int a_p3874, void * a_p3875, rt_int a_p3876, rt_int * a_p3877, void * * a_p3878) {
struct yf3879 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3874 = a_p3874;
F.p3875 = a_p3875;
F.p3876 = a_p3876;
F.p3877_o = a_p3877;
F.p3878_o = a_p3878;
F.v9821 = Y_UNDEF_P;
F.v9823 = Y_UNDEF_I;
F.v9825 = Y_UNDEF_I;
F.v9827 = Y_UNDEF_I;
F.v9829 = Y_UNDEF_I;
F.v9831 = Y_UNDEF_I;
F.v9833 = Y_UNDEF_P;
F.v9835 = Y_UNDEF_P;
F.v9837 = Y_UNDEF_P;
F.v9839 = Y_UNDEF_P;
F.v9841 = Y_UNDEF_I;
F.v9843 = Y_UNDEF_I;
F.v9845 = Y_UNDEF_I;
F.v9847 = Y_UNDEF_I;
F.v9849 = Y_UNDEF_P;
F.v9851 = Y_UNDEF_I;
F.p3878 = Y_DEFP(v1348);
F.p3877 = yr1061_T(y_str("((void)0)", 9));
F.v9851 = (((((((((((((((((F.p3874 == v1384)) || ((F.p3874 == v1387))) || ((F.p3874 == v1390))) || ((F.p3874 == v1393))) || ((F.p3874 == v1396))) || ((F.p3874 == v1402))) || ((F.p3874 == v1411))) || ((F.p3874 == v1417))) || ((F.p3874 == v1420))) || ((F.p3874 == v1444))) || ((F.p3874 == v1447))) || ((F.p3874 == v1456))) || ((F.p3874 == v1459))) || ((F.p3874 == v1462))) || ((F.p3874 == v1465))) || ((F.p3874 == v1474)));
if ((F.p3876 && (!Y_DEFI(F.v9851)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3876) && Y_DEFI(F.v9851))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(" returns no value", 17));
}
if ((((F.p3874 == v1366)) || ((F.p3874 == v1369)))) {
yr3816_NArgs(F.p3875, INT64_C(2));
yr2978_Expr(yr3809_Arg(F.p3875, INT64_C(1)), ((void *)0), &F.v9823, &F.v9833);
if ((!yr2424_IsArrayLike(Y_DEFP(F.v9833)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(" of something that is not an array", 34));
}
F.v9825 = yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(2)));
yr2830_Manifest(yr3809_Arg(F.p3875, INT64_C(2)), &F.v9847, &F.v9845);
F.p3878 = yr3061_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(F.v9847) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v822)))) {
if ((((Y_DEFI(F.v9845) < INT64_C(1))) || ((Y_DEFI(F.v9845) > Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_nidx))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("no such dimension", 17));
}
F.v9839 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_idx);
F.lo9865 = INT64_C(2);
F.hi9866 = Y_DEFI(F.v9845);
{ rt_int hi9870 = F.hi9866;
for (rt_int i9869 = F.lo9865; i9869 <= hi9870; i9869++) { F.c_9868 = i9869; Y_TICK();
F.v9839 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9839)))).f_link);
if (i9869 == hi9870) break;
}}
F.p3878 = Y_DEFP(F.v9839);
}
if ((F.p3874 == v1366)) {
F.p3877 = yr3067_Call2(y_str("y_low", 5), Y_DEFI(F.v9823), Y_DEFI(F.v9825));
} else {
F.p3877 = yr3067_Call2(y_str("y_high", 6), Y_DEFI(F.v9823), Y_DEFI(F.v9825));
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((((((F.p3874 == v1372)) || ((F.p3874 == v1375))) || ((F.p3874 == v1378))) || ((F.p3874 == v1381)))) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr2978_Expr(yr3809_Arg(F.p3875, INT64_C(1)), ((void *)0), &F.v9823, &F.v9833);
if ((!yr2412_IsDiscrete(Y_DEFP(F.v9833)))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(" of something that is not integer or scalar", 43));
}
if ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v813)) || ((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v816)) && (!Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_ordered)))))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem) == ((void *)0)))) {
F.v9833 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem);
}
if ((((((F.p3874 == v1378)) || ((F.p3874 == v1381)))) && ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v804)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3874 == v1378)) {
F.p3878 = Y_DEFP(F.v9833);
F.p3877 = yr2542_LoText(Y_DEFP(F.v9833));
} else if ((F.p3874 == v1381)) {
F.p3878 = Y_DEFP(F.v9833);
F.p3877 = yr2548_HiText(Y_DEFP(F.v9833));
} else {
F.p3878 = yr3061_Unbounded(Y_DEFP(F.v9833));
yr1026_SB();
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v804))) {
yr1037_SA(y_str("y_range(", 8));
}
if ((F.p3874 == v1372)) {
yr1037_SA(y_str("y_add(", 6));
} else {
yr1037_SA(y_str("y_sub(", 6));
}
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", 1)", 4));
if ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v804))) {
yr1037_SA(y_str(", 0, ", 5));
yr1050_SI(y_range(y_sub(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_nlits), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(")", 1));
}
F.p3877 = yr1056_SE();
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1384)) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v828, &F.v9823, &F.v9833);
if ((Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem) == ((void *)0))) {
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_forward), y_str(" is not declared", 16));
}
F.v9839 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem);
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(" = y_new(sizeof(", 16));
yr1044_ST(yr2461_CType(Y_DEFP(F.v9839)));
yr1037_SA(y_str("));", 3));
if ((yr2436_Deep(Y_DEFP(F.v9839)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9839)))).f_kind) == v825)))) {
yr1037_SA(y_str(" y_initu(", 9));
yr1044_ST(yr2467_DescOf(Y_DEFP(F.v9839)));
yr1037_SA(y_str(", y_deref(", 10));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str("));", 3));
} else if ((!(yr3007_UndefValue(Y_DEFP(F.v9839)) == INT64_C(0)))) {
yr1037_SA(y_str(" *(", 3));
yr1044_ST(yr2461_CType(Y_DEFP(F.v9839)));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(") = ", 4));
yr1044_ST(yr3007_UndefValue(Y_DEFP(F.v9839)));
yr1037_SA(y_str(";", 1));
}
yr1037_SA(y_str(" })", 3));
F.p3877 = yr1056_SE();
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1462)) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v828, &F.v9823, &F.v9833);
F.p3877 = yr3388_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), Y_DEFI(F.v9823), yr1061_T(y_str("))", 2)));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1387)) {
yr3816_NArgs(F.p3875, INT64_C(3));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v831, &F.v9823, &F.v9833);
yr2978_Expr(yr3809_Arg(F.p3875, INT64_C(2)), Y_DEFP(v1346), &F.v9825, &F.v9835);
if ((!yr2430_IsString(Y_DEFP(F.v9835)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2978_Expr(yr3809_Arg(F.p3875, INT64_C(3)), Y_DEFP(v1872), &F.v9827, &F.v9837);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFP(v1872), Y_DEFP(F.v9837));
yr1026_SB();
yr1037_SA(y_str("y_open(&", 8));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9825));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9827));
yr1037_SA(y_str(")", 1));
F.p3877 = yr1056_SE();
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((((F.p3874 == v1390)) || ((F.p3874 == v1399)))) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v831, &F.v9823, &F.v9833);
if ((F.p3874 == v1390)) {
F.p3877 = yr3823_Call1(y_str("y_close", 7), yr3831_Addr(Y_DEFI(F.v9823)));
} else {
F.p3878 = Y_DEFP(v1344);
F.p3877 = yr3823_Call1(y_str("y_check_eof", 11), yr3831_Addr(Y_DEFI(F.v9823)));
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1393)) {
yr3816_NArgs(F.p3875, INT64_C(2));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v831, &F.v9823, &F.v9833);
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(2)), v858, &F.v9825, &F.v9835);
F.v9839 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFP(F.v9839), Y_DEFP(F.v9835));
if (yr2455_NonAssignable(Y_DEFP(F.v9839))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2461_CType(Y_DEFP(F.v9839)));
yr1037_SA(y_str(" g; ", 4));
if (yr2436_Deep(Y_DEFP(F.v9839))) {
yr1037_SA(y_str("y_init(", 7));
yr1044_ST(yr2467_DescOf(Y_DEFP(F.v9839)));
yr1037_SA(y_str(", &g); ", 7));
}
yr1037_SA(y_str("y_get_value(&", 13));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2467_DescOf(Y_DEFP(F.v9839)));
yr1037_SA(y_str(", &g); ", 7));
yr1044_ST(yr2919_StoreText(Y_DEFI(F.v9825), Y_DEFP(F.v9835), yr1061_T(y_str("g", 1)), Y_DEFP(F.v9839), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line)));
yr1037_SA(y_str(" })", 3));
F.p3877 = yr1056_SE();
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1396)) {
yr3816_NArgs(F.p3875, INT64_C(2));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v831, &F.v9823, &F.v9833);
F.v9839 = Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem);
yr2978_Expr(yr3809_Arg(F.p3875, INT64_C(2)), Y_DEFP(F.v9839), &F.v9825, &F.v9835);
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFP(F.v9839), Y_DEFP(F.v9835));
if (yr2455_NonAssignable(Y_DEFP(F.v9839))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2461_CType(Y_DEFP(F.v9839)));
yr1037_SA(y_str(" pv = ", 6));
yr1044_ST(yr2911_Convert(Y_DEFI(F.v9825), Y_DEFP(F.v9839), Y_DEFP(F.v9835)));
yr1037_SA(y_str("; y_put_value(&", 15));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2467_DescOf(Y_DEFP(F.v9839)));
yr1037_SA(y_str(", &pv); })", 10));
F.p3877 = yr1056_SE();
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1402)) {
F.v9841 = yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3875))).f_a));
if ((((Y_DEFI(F.v9841) < INT64_C(5))) || ((!((y_mod((y_sub(Y_DEFI(F.v9841), INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("MOVE takes an object, an index and triples", 42));
}
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v858, &F.v9823, &F.v9833);
if (((!((((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v822)) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v843))))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_nidx) == INT64_C(1)))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("MOVE works on one-dimensional arrays", 36));
}
F.v9825 = yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(2)));
F.v9831 = yr1200_Fresh(y_str("at", 2));
yr1026_SB();
yr1037_SA(y_str("({ rt_int ", 10));
yr1044_ST(Y_DEFI(F.v9831));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(Y_DEFI(F.v9825));
yr1037_SA(y_str(";", 1));
F.p3877 = yr1056_SE();
F.v9843 = INT64_C(3);
while ((Y_DEFI(F.v9843) < Y_DEFI(F.v9841))) {
Y_TICK();
yr2978_Expr(yr3809_Arg(F.p3875, Y_DEFI(F.v9843)), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem), &F.v9827, &F.v9837);
if (((!yr2424_IsArrayLike(Y_DEFP(F.v9837))) || (!yr2479_SameType(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem), Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9837)))).f_elem))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("MOVE: the components differ in type", 35));
}
F.v9829 = yr3854_IntArg(yr3809_Arg(F.p3875, y_range(y_add(Y_DEFI(F.v9843), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v9825 = yr3854_IntArg(yr3809_Arg(F.p3875, y_range(y_add(Y_DEFI(F.v9843), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1026_SB();
yr1044_ST(Y_DEFI(F.p3877));
yr1037_SA(y_str(" { rt_int mi = ", 15));
yr1044_ST(Y_DEFI(F.v9829));
yr1037_SA(y_str(", mj = ", 7));
yr1044_ST(Y_DEFI(F.v9825));
yr1037_SA(y_str("; y_move(&", 10));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9831));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9827));
yr1037_SA(y_str(", mi, mj, ", 10));
yr1044_ST(yr2467_DescOf(Y_DEFP(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_elem)));
yr1037_SA(y_str("); if (mj >= mi) ", 17));
yr1044_ST(Y_DEFI(F.v9831));
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
F.p3877 = yr1056_SE();
F.v9843 = y_range(y_add(Y_DEFI(F.v9843), INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3877 = yr3388_Join(Y_DEFI(F.p3877), yr1061_T(y_str(" })", 3)), INT64_C(0));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((((F.p3874 == v1405)) || ((F.p3874 == v1408)))) {
yr3816_NArgs(F.p3875, INT64_C(2));
F.v9823 = yr3358_Cond(yr3809_Arg(F.p3875, INT64_C(1)));
F.v9825 = yr3358_Cond(yr3809_Arg(F.p3875, INT64_C(2)));
F.p3878 = Y_DEFP(v1344);
if ((F.p3874 == v1405)) {
F.p3877 = yr3076_Infix(yr2959_Paren(yr3076_Infix(Y_DEFI(F.v9823), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr2959_Paren(yr3076_Infix(Y_DEFI(F.v9825), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
} else {
F.p3877 = yr3076_Infix(yr2959_Paren(yr3076_Infix(Y_DEFI(F.v9823), y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr2959_Paren(yr3076_Infix(Y_DEFI(F.v9825), y_str("!=", 2), yr1061_T(y_str("0", 1)))));
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1411)) {
yr3816_NArgs(F.p3875, INT64_C(1));
F.p3877 = yr3823_Call1(y_str("rt_delay", 8), yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(1))));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1414)) {
yr3816_NArgs(F.p3875, INT64_C(0));
F.p3878 = yr3061_Unbounded(Y_DEFP(v1342));
F.p3877 = yr1061_T(y_str("rt_time()", 9));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if (((((F.p3874 == v1417)) || ((F.p3874 == v1420))) || ((F.p3874 == v1423)))) {
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v837, &F.v9823, &F.v9833);
if ((F.p3874 == v1417)) {
if ((yr1959_Count(Y_DEFP(((*(yR105 *)y_deref(F.p3875))).f_a)) == INT64_C(1))) {
F.v9825 = yr1061_T(y_str("1", 1));
} else {
yr3816_NArgs(F.p3875, INT64_C(2));
F.v9825 = yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(2)));
}
F.p3877 = yr3067_Call2(y_str("y_wait", 6), yr3831_Addr(Y_DEFI(F.v9823)), Y_DEFI(F.v9825));
} else {
yr3816_NArgs(F.p3875, INT64_C(1));
if ((F.p3874 == v1420)) {
F.p3877 = yr3823_Call1(y_str("y_send", 6), yr3831_Addr(Y_DEFI(F.v9823)));
} else {
F.p3878 = Y_DEFP(v1344);
F.p3877 = yr3823_Call1(y_str("y_awaited", 9), yr3831_Addr(Y_DEFI(F.v9823)));
}
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if (((((F.p3874 == v1426)) || ((F.p3874 == v1429))) || ((F.p3874 == v1432)))) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3846_NumArg(yr3809_Arg(F.p3875, INT64_C(1)), &F.v9823, &F.v9833);
F.p3878 = yr3061_Unbounded(Y_DEFP(v1342));
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v804)) {
F.p3877 = Y_DEFI(F.v9823);
} else if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v807)) {
yr1026_SB();
if ((F.p3874 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3874 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
}
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3877 = yr1056_SE();
} else if ((F.p3874 == v1426)) {
F.p3877 = yr3823_Call1(y_str("y_floor", 7), Y_DEFI(F.v9823));
} else if ((F.p3874 == v1429)) {
F.p3877 = yr3823_Call1(y_str("y_ceiling", 9), Y_DEFI(F.v9823));
} else {
F.p3877 = yr3823_Call1(y_str("y_near_integer", 14), Y_DEFI(F.v9823));
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1438)) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3846_NumArg(yr3809_Arg(F.p3875, INT64_C(1)), &F.v9823, &F.v9833);
F.p3878 = Y_DEFP(v1354);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v807)) {
F.p3877 = yr3100_FixToFloat(Y_DEFI(F.v9823), Y_DEFP(F.v9833));
} else {
F.p3877 = yr3388_Join(yr1061_T(y_str("((double)(", 10)), Y_DEFI(F.v9823), yr1061_T(y_str("))", 2)));
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1435)) {
yr3816_NArgs(F.p3875, INT64_C(2));
yr3846_NumArg(yr3809_Arg(F.p3875, INT64_C(1)), &F.v9823, &F.v9833);
F.p3878 = yr3866_ManifestScale(yr3809_Arg(F.p3875, INT64_C(2)), F.p3875);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_fix_of_float(", 15));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3878)))).f_fsn));
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3878)))).f_fsd));
yr1037_SA(y_str("))", 2));
F.p3877 = yr1056_SE();
} else {
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v804)) {
F.v9837 = yr2406_CopyRep(Y_DEFP(v1356));
yr2608_SetScale(Y_DEFP(F.v9837), INT64_C(1), INT64_C(1));
F.v9823 = yr3388_Join(yr1061_T(y_str("((yfix)(", 8)), Y_DEFI(F.v9823), yr1061_T(y_str("))", 2)));
} else {
F.v9837 = Y_DEFP(F.v9833);
}
yr2591_ScaleRatio(Y_DEFP(F.v9837), Y_DEFP(F.p3878), &F.v9829, &F.v9831, &F.v9847);
yr1026_SB();
yr1037_SA(y_str("y_fix_near(", 11));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9829));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9831));
yr1037_SA(y_str(")", 1));
F.p3877 = yr1056_SE();
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1441)) {
yr3816_NArgs(F.p3875, INT64_C(3));
yr3846_NumArg(yr3809_Arg(F.p3875, INT64_C(1)), &F.v9823, &F.v9833);
yr3846_NumArg(yr3809_Arg(F.p3875, INT64_C(2)), &F.v9825, &F.v9835);
if ((((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v807))) || ((!(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9835)))).f_kind) == v807))))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2494_CheckType(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFP(F.v9833), Y_DEFP(F.v9835));
F.p3878 = yr3866_ManifestScale(yr3809_Arg(F.p3875, INT64_C(3)), F.p3875);
((*(yR110 *)y_deref(Y_DEFP(F.p3878)))).f_tid = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_tid);
((*(yR110 *)y_deref(Y_DEFP(F.p3878)))).f_tname = Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_tname);
F.v9837 = yr2406_CopyRep(Y_DEFP(v1356));
yr2608_SetScale(Y_DEFP(F.v9837), yr2575_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9835)))).f_fsn), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3878)))).f_fsn), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line)), yr2575_MulChk(Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9835)))).f_fsd), Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.p3878)))).f_fsd), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line)));
yr2591_ScaleRatio(Y_DEFP(F.v9833), Y_DEFP(F.v9837), &F.v9829, &F.v9831, &F.v9847);
yr1026_SB();
yr1037_SA(y_str("y_fix_div(", 10));
yr1044_ST(Y_DEFI(F.v9823));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9825));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9829));
yr1037_SA(y_str(", ", 2));
yr1044_ST(Y_DEFI(F.v9831));
yr1037_SA(y_str(")", 1));
F.p3877 = yr1056_SE();
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1450)) {
v1660 = y_range(y_add(Y_DEFI(v1660), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3874 == v1444)) || ((F.p3874 == v1447))) || ((F.p3874 == v1450)))) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v840, &F.v9823, &F.v9833);
if ((F.p3874 == v1444)) {
F.p3877 = yr3823_Call1(y_str("rt_region_enter", 15), yr3831_Addr(Y_DEFI(F.v9823)));
} else if ((F.p3874 == v1447)) {
F.p3877 = yr3823_Call1(y_str("rt_region_leave", 15), yr3831_Addr(Y_DEFI(F.v9823)));
} else {
F.p3878 = Y_DEFP(v1344);
F.p3877 = yr3823_Call1(y_str("y_cond_claim", 12), yr3831_Addr(Y_DEFI(F.v9823)));
}
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1453)) {
yr3816_NArgs(F.p3875, INT64_C(0));
F.p3878 = yr3061_Unbounded(Y_DEFP(v1342));
F.p3877 = yr1061_T(y_str("y_self()", 8));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1456)) {
yr3816_NArgs(F.p3875, INT64_C(2));
F.p3877 = yr3067_Call2(y_str("y_change_priority", 17), yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(1))), yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(2))));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1459)) {
yr3816_NArgs(F.p3875, INT64_C(1));
F.p3877 = yr3823_Call1(y_str("y_raise_termination", 19), yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(1))));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1465)) {
yr3816_NArgs(F.p3875, INT64_C(1));
yr3860_CodeInsert(F.p3875);
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((((F.p3874 == v1468)) || ((F.p3874 == v1471)))) {
yr3816_NArgs(F.p3875, INT64_C(1));
F.v9849 = yr3809_Arg(F.p3875, INT64_C(1));
yr2978_Expr(Y_DEFP(F.v9849), ((void *)0), &F.v9823, &F.v9833);
if ((F.p3874 == v1471)) {
F.p3878 = yr3061_Unbounded(Y_DEFP(v1342));
F.p3877 = yr2778_ExtentCode(Y_DEFI(F.v9823), Y_DEFP(F.v9833));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
F.p3878 = Y_DEFP(v1874);
if ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v855)) {
F.p3877 = yr3388_Join(yr1061_T(y_str("y_addr((", 8)), Y_DEFI(F.v9823), yr3388_Join(yr1061_T(y_str(").p, (", 6)), Y_DEFI(F.v9823), yr1061_T(y_str(").words)", 8))));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9849)))).f_kind) == v777)) {
F.v9821 = yr2288_Find(Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9849)))).f_name));
if ((!(Y_DEFP(F.v9821) == ((void *)0)))) {
if (yr2341_Resolved(Y_DEFP(F.v9821))) {
F.v9821 = yr2393_Real(Y_DEFP(F.v9821));
if ((((((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9821)))).f_kind) == v861)) || ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9821)))).f_kind) == v864)))) && ((Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9821)))).f_at) >= INT64_C(0))))) {
F.p3877 = yr3170_Num(Y_DEFI(((*(yR125 *)y_deref(Y_DEFP(F.v9821)))).f_at));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
}
}
}
if (((!((((((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9849)))).f_kind) == v777)) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9849)))).f_kind) == v783))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9849)))).f_kind) == v786))) || ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v9849)))).f_kind) == v789))))) || ((Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(F.v9833)))).f_kind) == v846)))) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
}
F.p3877 = yr3388_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), yr3013_RawCode(Y_DEFP(F.v9849), Y_DEFI(F.v9823)), yr3388_Join(yr1061_T(y_str("), ", 3)), yr2778_ExtentCode(Y_DEFI(F.v9823), Y_DEFP(F.v9833)), yr1061_T(y_str(")", 1))));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1474)) {
yr3816_NArgs(F.p3875, INT64_C(2));
yr3837_StdVar(yr3809_Arg(F.p3875, INT64_C(1)), v828, &F.v9823, &F.v9833);
F.v9825 = yr3854_IntArg(yr3809_Arg(F.p3875, INT64_C(2)));
F.p3877 = yr3388_Join(yr1061_T(y_str("(", 1)), Y_DEFI(F.v9823), yr3388_Join(yr1061_T(y_str(" = y_cell(y_mem_ptr(", 20)), Y_DEFI(F.v9825), yr1061_T(y_str(")))", 3))));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
}
if ((F.p3874 == v1477)) {
yr1178_FailS(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
}
yr1186_FailN(Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_line), Y_DEFI(((*(yR105 *)y_deref(F.p3875))).f_name), y_str(" is not translated", 18));
(*F.p3877_o) = F.p3877;
(*F.p3878_o) = F.p3878;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3883_StdRep(yarr a_p3885, void * a_p3886) {
struct yf3887 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3885 = a_p3885;
F.p3886 = a_p3886;
F.v10079 = Y_UNDEF_P;
F.v10079 = yr2258_NewSym(v870, yr1081_N(F.p3885));
((*(yR125 *)y_deref(Y_DEFP(F.v10079)))).f_rep = F.p3886;
yr2360_Define(Y_DEFP(F.v10079), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3891_StdOp(yarr a_p3893, rt_int a_p3894) {
struct yf3895 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3893 = a_p3893;
F.p3894 = a_p3894;
F.v10085 = Y_UNDEF_P;
F.v10085 = yr2258_NewSym(v891, yr1081_N(F.p3893));
((*(yR125 *)y_deref(Y_DEFP(F.v10085)))).f_mval = F.p3894;
yr2360_Define(Y_DEFP(F.v10085), INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3899_LitList(yarr a_p3901, yarr a_p3902, yarr a_p3903, rt_int a_p3904) {
struct yf3905 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3901 = a_p3901;
F.p3902 = a_p3902;
F.p3903 = a_p3903;
F.p3904 = a_p3904;
F.v10093 = Y_UNDEF_P;
F.v10093 = ((void *)0);
F.v10095 = Y_UNDEF_P;
F.v10095 = ((void *)0);
F.v10097 = Y_UNDEF_P;
F.v10097 = ((void *)0);
F.v10097 = yr1944_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v10097)))).f_name = yr1081_N(F.p3901);
yr1951_Link(&F.v10093, &F.v10095, Y_DEFP(F.v10097));
F.v10097 = yr1944_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v10097)))).f_name = yr1081_N(F.p3902);
yr1951_Link(&F.v10093, &F.v10095, Y_DEFP(F.v10097));
if (F.p3904) {
F.v10097 = yr1944_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(Y_DEFP(F.v10097)))).f_name = yr1081_N(F.p3903);
yr1951_Link(&F.v10093, &F.v10095, Y_DEFP(F.v10097));
}
{ void * rv10101 = Y_DEFP(F.v10093);
y_use = F.yu; return rv10101; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3909_Abstract(rt_int a_p3910, yarr a_p3912) {
struct yf3913 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3910 = a_p3910;
F.p3912 = a_p3912;
F.v10106 = Y_UNDEF_P;
F.v10106 = yr2399_NewRep(F.p3910, yr1081_N(F.p3912));
((*(yR110 *)y_deref(Y_DEFP(F.v10106)))).f_abstract = 1;
{ void * rv10108 = Y_DEFP(F.v10106);
y_use = F.yu; return rv10108; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3917_Predefine(void) {
struct yf3918 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2265_OpenScope(0);
((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))] = ((void *)0);
v1342 = yr3909_Abstract(v804, y_str("INTEGER", 7));
v1356 = yr3909_Abstract(v807, y_str("FIXED", 5));
v1354 = yr3909_Abstract(v810, y_str("FLOATING", 8));
v1358 = yr2399_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
v1360 = yr2399_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
v1348 = yr2399_NewRep(v852, yr1081_N(y_str("no value", 8)));
v1362 = yr2399_NewRep(v858, yr1081_N(y_str("any", 3)));
v1344 = yr2399_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_lits = yr3899_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR110 *)y_deref(Y_DEFP(v1344)))).f_nlits = INT64_C(2);
yr2629_SetRange(Y_DEFP(v1344), INT64_C(0), INT64_C(1));
yr2623_DefineLits(Y_DEFP(v1344));
v1346 = yr2399_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_ordered = 1;
((*(yR110 *)y_deref(Y_DEFP(v1346)))).f_nlits = INT64_C(128);
yr2629_SetRange(Y_DEFP(v1346), INT64_C(0), INT64_C(127));
v1872 = yr2399_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
((*(yR110 *)y_deref(Y_DEFP(v1872)))).f_lits = yr3899_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR110 *)y_deref(Y_DEFP(v1872)))).f_nlits = INT64_C(3);
yr2629_SetRange(Y_DEFP(v1872), INT64_C(0), INT64_C(2));
yr2623_DefineLits(Y_DEFP(v1872));
yr3883_StdRep(y_str("INTEGER", 7), Y_DEFP(v1342));
yr3883_StdRep(y_str("FIXED", 5), Y_DEFP(v1356));
yr3883_StdRep(y_str("FLOATING", 8), Y_DEFP(v1354));
yr3883_StdRep(y_str("BOOLEAN", 7), Y_DEFP(v1344));
yr3883_StdRep(y_str("SIGNAL", 6), Y_DEFP(v1358));
yr3883_StdRep(y_str("SEMAPHORE", 9), Y_DEFP(v1360));
yr3883_StdRep(y_str("ASCII", 5), Y_DEFP(v1346));
yr3883_StdRep(y_str("STANDARD_ALPHABET", 17), Y_DEFP(v1346));
yr3883_StdRep(y_str("OPEN_MODE", 9), Y_DEFP(v1872));
v1874 = yr2399_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1874)))).f_tname = yr1081_N(y_str("ADDRESS", 7));
yr2629_SetRange(Y_DEFP(v1874), INT64_C(0), INT64_C(16777215));
v1876 = yr2399_NewRep(v804, Y_DEFI(((*(yR110 *)y_deref(Y_DEFP(v1342)))).f_tid));
((*(yR110 *)y_deref(Y_DEFP(v1876)))).f_tname = yr1081_N(y_str("WORD", 4));
yr2629_SetRange(Y_DEFP(v1876), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3883_StdRep(y_str("ADDRESS", 7), Y_DEFP(v1874));
yr3883_StdRep(y_str("WORD", 4), Y_DEFP(v1876));
yr3891_StdOp(y_str("MAKE_POINTER", 12), v1474);
yr3891_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
yr3891_StdOp(y_str("LOW", 3), v1366);
yr3891_StdOp(y_str("HIGH", 4), v1369);
yr3891_StdOp(y_str("SUCC", 4), v1372);
yr3891_StdOp(y_str("PRED", 4), v1375);
yr3891_StdOp(y_str("FIRST", 5), v1378);
yr3891_StdOp(y_str("LAST", 4), v1381);
yr3891_StdOp(y_str("NEW", 3), v1384);
yr3891_StdOp(y_str("OPEN", 4), v1387);
yr3891_StdOp(y_str("CLOSE", 5), v1390);
yr3891_StdOp(y_str("GET", 3), v1393);
yr3891_StdOp(y_str("PUT", 3), v1396);
yr3891_StdOp(y_str("CHECK_EOF", 9), v1399);
yr3891_StdOp(y_str("MOVE", 4), v1402);
yr3891_StdOp(y_str("AND_LONG", 8), v1405);
yr3891_StdOp(y_str("OR_LONG", 7), v1408);
yr3891_StdOp(y_str("DELAY", 5), v1411);
yr3891_StdOp(y_str("CLOCK_TIME", 10), v1414);
yr3891_StdOp(y_str("WAIT", 4), v1417);
yr3891_StdOp(y_str("SEND", 4), v1420);
yr3891_StdOp(y_str("AWAITED", 7), v1423);
yr3891_StdOp(y_str("FLOOR", 5), v1426);
yr3891_StdOp(y_str("CEILING", 7), v1429);
yr3891_StdOp(y_str("NEAR_INTEGER", 12), v1432);
yr3891_StdOp(y_str("NEAR_FIXED", 10), v1435);
yr3891_StdOp(y_str("NEAR_FLOATING", 13), v1438);
yr3891_StdOp(y_str("FIXED_DIV", 9), v1441);
yr3891_StdOp(y_str("CLAIM", 5), v1444);
yr3891_StdOp(y_str("RELEASE", 7), v1447);
yr3891_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
yr3891_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
yr3891_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
yr3891_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
yr3891_StdOp(y_str("FREE_POINTER", 12), v1462);
yr3891_StdOp(y_str("C_CODE_INSERT", 13), v1465);
yr3891_StdOp(y_str("ADDR", 4), v1468);
yr3891_StdOp(y_str("EXTENT", 6), v1471);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3922_Translate(void) {
struct yf3923 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10196 = Y_UNDEF_P;
F.v10196 = Y_DEFP(v1878);
yr2265_OpenScope(0);
((void * *)(v1818).p)[y_ix1(v1818, Y_DEFI(v1273))] = ((void *)0);
v1279 = INT64_C(0);
((void * *)(v1302).p)[y_ix1(v1302, Y_DEFI(v1273))] = Y_DEFP(v1878);
while ((!(Y_DEFP(F.v10196) == ((void *)0)))) {
Y_TICK();
if ((Y_DEFI(((*(yR105 *)y_deref(Y_DEFP(F.v10196)))).f_ival) == INT64_C(0))) {
yr3723_CompileModule(Y_DEFP(F.v10196));
}
F.v10196 = Y_DEFP(((*(yR105 *)y_deref(Y_DEFP(F.v10196)))).f_next);
}
yr3686_ResolveLater(Y_DEFI(v1273));
yr3602_RunDeferred(INT64_C(0), INT64_C(0));
yr3484_CheckEffects();
yr3747_AwaitProcesses();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3927_WriteProgram(void) {
struct yf3928 F;
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
v1492 = INT64_C(1);
v1495 = Y_UNDEF_I;
v1495 = INT64_C(2);
v1498 = Y_UNDEF_I;
v1498 = INT64_C(3);
v1501 = Y_UNDEF_I;
v1501 = INT64_C(0);
v1504 = Y_UNDEF_P;
v1504 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1513, 1, lo, hi, &y_d_int); }
y_initu(&yd_1513, &v1515);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1524, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1524, &v1526);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1535, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1535, &v1537);
v1539 = Y_UNDEF_I;
v1539 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1549, 1, lo, hi, &y_d_int); }
y_initu(&yd_1549, &v1551);
v1553 = Y_UNDEF_I;
v1553 = INT64_C(0);
v1556 = Y_UNDEF_I;
v1556 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1566, 1, lo, hi, &y_d_int); }
y_initu(&yd_1566, &v1568);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1577, 1, lo, hi, &y_d_int); }
y_initu(&yd_1577, &v1579);
v1581 = Y_UNDEF_I;
v1581 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1591, 1, lo, hi, &y_d_int); }
y_initu(&yd_1591, &v1593);
v1595 = Y_UNDEF_I;
v1595 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1605, 1, lo, hi, &y_d_int); }
y_initu(&yd_1605, &v1607);
y_initu(&yd_1605, &v1609);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1618, 1, lo, hi, &y_d_int); }
y_initu(&yd_1618, &v1620);
v1622 = Y_UNDEF_I;
v1622 = INT64_C(0);
v1625 = Y_UNDEF_I;
v1625 = INT64_C(0);
v1628 = Y_UNDEF_P;
v1628 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1637, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1637, &v1639);
y_initu(&yd_1637, &v1641);
v1643 = Y_UNDEF_I;
v1643 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1653, 1, lo, hi, &y_d_int); }
y_initu(&yd_1653, &v1655);
v1657 = Y_UNDEF_I;
v1657 = 0;
v1660 = Y_UNDEF_I;
v1660 = INT64_C(0);
v1663 = Y_UNDEF_I;
v1663 = INT64_C(0);
v1666 = Y_UNDEF_P;
v1666 = ((void *)0);
v1668 = Y_UNDEF_I;
v1668 = INT64_C(0);
v1671 = Y_UNDEF_P;
v1671 = ((void *)0);
v1673 = Y_UNDEF_P;
v1673 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1682, 1, lo, hi, &y_d_int); }
y_initu(&yd_1682, &v1684);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1693, 1, lo, hi, &y_d_int); }
y_initu(&yd_1693, &v1695);
v1697 = Y_UNDEF_I;
v1697 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1707, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1707, &v1709);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1718, 1, lo, hi, &y_d_int); }
y_initu(&yd_1718, &v1720);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1729, 1, lo, hi, &y_d_int); }
y_initu(&yd_1729, &v1731);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1740, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1740, &v1742);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1751, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1751, &v1753);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1762, 1, lo, hi, &y_d_int); }
y_initu(&yd_1762, &v1764);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1773, 1, lo, hi, &y_d_int); }
y_initu(&yd_1773, &v1775);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1784, 1, lo, hi, &y_d_int); }
y_initu(&yd_1784, &v1786);
y_initu(&yd_1784, &v1788);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1797, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1797, &v1799);
v1801 = Y_UNDEF_I;
v1801 = INT64_C(0);
v1804 = Y_UNDEF_I;
v1804 = INT64_C(0);
v1807 = Y_UNDEF_P;
v1807 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1816, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1816, &v1818);
v1820 = Y_UNDEF_I;
v1820 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1830, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1830, &v1832);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1841, 1, lo, hi, &y_d_int); }
y_initu(&yd_1841, &v1843);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1852, 1, lo, hi, &y_d_ptr); }
y_initu(&yd_1852, &v1854);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1863, 1, lo, hi, &y_d_int); }
y_initu(&yd_1863, &v1865);
y_initu(&yd_1863, &v1867);
v1869 = Y_UNDEF_I;
v1869 = INT64_C(0);
v1872 = Y_UNDEF_P;
v1874 = Y_UNDEF_P;
v1876 = Y_UNDEF_P;
v1878 = Y_UNDEF_P;
/* yellowc */
{ rt_int hi10229 = INT64_C(262143);
for (rt_int i10228 = INT64_C(0); i10228 <= hi10229; i10228++) { c_10227 = i10228; Y_TICK();
((rt_int *)(v925).p)[y_ix1(v925, c_10227)] = INT64_C(0);
if (i10228 == hi10229) break;
}}
{ rt_int hi10239 = INT64_C(8191);
for (rt_int i10238 = INT64_C(0); i10238 <= hi10239; i10238++) { c_10237 = i10238; Y_TICK();
((void * *)(v1260).p)[y_ix1(v1260, c_10237)] = ((void *)0);
if (i10238 == hi10239) break;
}}
{ rt_int hi10248 = INT64_C(400);
for (rt_int i10247 = INT64_C(0); i10247 <= hi10248; i10247++) { c_10246 = i10247; Y_TICK();
((void * *)(v1302).p)[y_ix1(v1302, c_10246)] = ((void *)0);
((void * *)(v1313).p)[y_ix1(v1313, c_10246)] = ((void *)0);
((void * *)(v1818).p)[y_ix1(v1818, c_10246)] = ((void *)0);
if (i10247 == hi10248) break;
}}
v978 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v980 = v978;
v982 = v978;
v984 = v978;
v986 = v978;
v988 = v978;
v990 = v978;
v992 = v978;
v996 = v978;
v998 = v978;
yr1003_InitChars();
yr1880_InitWords();
v1254 = yr1081_N(y_str("FROM", 4));
v1257 = yr1081_N(y_str("DIMENSION", 9));
v1501 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v911, y_str("OUTPUT", 6), 1);
y_open(&v994, y_str("ERROR", 5), 1);
yr1885_ReadSource();
yr1939_Lex();
v1878 = yr2253_ParseProgram();
yr3917_Predefine();
yr3922_Translate();
yr3927_WriteProgram();
y_close(&v911);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
