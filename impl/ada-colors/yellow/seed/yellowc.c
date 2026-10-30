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
struct yf1841;
struct yf1846;
struct yf1853;
struct yf1859;
struct yf1864;
struct yf1870;
struct yf1877;
struct yf1884;
struct yf1890;
struct yf1895;
struct yf1900;
struct yf1907;
struct yf1915;
struct yf1921;
struct yf1926;
struct yf1931;
struct yf1936;
struct yf1943;
struct yf1949;
struct yf1955;
struct yf1960;
struct yf1966;
struct yf1971;
struct yf1977;
struct yf1982;
struct yf1989;
struct yf1994;
struct yf2000;
struct yf2005;
struct yf2010;
struct yf2015;
struct yf2020;
struct yf2025;
struct yf2030;
struct yf2036;
struct yf2042;
struct yf2049;
struct yf2054;
struct yf2060;
struct yf2065;
struct yf2071;
struct yf2076;
struct yf2081;
struct yf2086;
struct yf2091;
struct yf2096;
struct yf2101;
struct yf2106;
struct yf2112;
struct yf2117;
struct yf2122;
struct yf2128;
struct yf2134;
struct yf2140;
struct yf2146;
struct yf2152;
struct yf2161;
struct yf2168;
struct yf2173;
struct yf2178;
struct yf2183;
struct yf2189;
struct yf2194;
struct yf2199;
struct yf2204;
struct yf2209;
struct yf2214;
struct yf2221;
struct yf2227;
struct yf2233;
struct yf2238;
struct yf2244;
struct yf2250;
struct yf2256;
struct yf2263;
struct yf2270;
struct yf2276;
struct yf2283;
struct yf2290;
struct yf2297;
struct yf2303;
struct yf2309;
struct yf2316;
struct yf2323;
struct yf2330;
struct yf2336;
struct yf2343;
struct yf2349;
struct yf2355;
struct yf2362;
struct yf2368;
struct yf2374;
struct yf2380;
struct yf2386;
struct yf2392;
struct yf2398;
struct yf2405;
struct yf2411;
struct yf2417;
struct yf2423;
struct yf2429;
struct yf2435;
struct yf2442;
struct yf2450;
struct yf2458;
struct yf2465;
struct yf2471;
struct yf2477;
struct yf2484;
struct yf2490;
struct yf2498;
struct yf2504;
struct yf2510;
struct yf2518;
struct yf2524;
struct yf2531;
struct yf2539;
struct yf2547;
struct yf2557;
struct yf2564;
struct yf2572;
struct yf2579;
struct yf2585;
struct yf2593;
struct yf2599;
struct yf2607;
struct yf2614;
struct yf2622;
struct yf2629;
struct yf2634;
struct yf2640;
struct yf2653;
struct yf2664;
struct yf2672;
struct yf2679;
struct yf2685;
struct yf2692;
struct yf2699;
struct yf2707;
struct yf2714;
struct yf2721;
struct yf2727;
struct yf2734;
struct yf2741;
struct yf2749;
struct yf2755;
struct yf2762;
struct yf2769;
struct yf2777;
struct yf2786;
struct yf2794;
struct yf2802;
struct yf2809;
struct yf2817;
struct yf2825;
struct yf2833;
struct yf2844;
struct yf2852;
struct yf2861;
struct yf2867;
struct yf2875;
struct yf2885;
struct yf2895;
struct yf2901;
struct yf2907;
struct yf2915;
struct yf2921;
struct yf2928;
struct yf2934;
struct yf2943;
struct yf2951;
struct yf2960;
struct yf2966;
struct yf2974;
struct yf2984;
struct yf2990;
struct yf2999;
struct yf3008;
struct yf3017;
struct yf3023;
struct yf3030;
struct yf3039;
struct yf3046;
struct yf3054;
struct yf3060;
struct yf3069;
struct yf3077;
struct yf3084;
struct yf3093;
struct yf3099;
struct yf3110;
struct yf3117;
struct yf3127;
struct yf3137;
struct yf3147;
struct yf3156;
struct yf3164;
struct yf3172;
struct yf3182;
struct yf3188;
struct yf3193;
struct yf3199;
struct yf3205;
struct yf3212;
struct yf3220;
struct yf3227;
struct yf3233;
struct yf3239;
struct yf3245;
struct yf3252;
struct yf3258;
struct yf3264;
struct yf3271;
struct yf3276;
struct yf3282;
struct yf3288;
struct yf3296;
struct yf3302;
struct yf3308;
struct yf3314;
struct yf3320;
struct yf3326;
struct yf3335;
struct yf3343;
struct yf3349;
struct yf3355;
struct yf3362;
struct yf3369;
struct yf3376;
struct yf3384;
struct yf3389;
struct yf3397;
struct yf3403;
struct yf3409;
struct yf3415;
struct yf3421;
struct yf3428;
struct yf3435;
struct yf3441;
struct yf3449;
struct yf3458;
struct yf3466;
struct yf3472;
struct yf3479;
struct yf3486;
struct yf3495;
struct yf3502;
struct yf3508;
struct yf3514;
struct yf3520;
struct yf3527;
struct yf3535;
struct yf3542;
struct yf3550;
struct yf3556;
struct yf3565;
struct yf3572;
struct yf3579;
struct yf3585;
struct yf3593;
struct yf3601;
struct yf3608;
struct yf3616;
struct yf3622;
struct yf3628;
struct yf3634;
struct yf3640;
struct yf3645;
struct yf3652;
struct yf3658;
struct yf3664;
struct yf3670;
struct yf3675;
struct yf3681;
struct yf3688;
struct yf3695;
struct yf3702;
struct yf3709;
struct yf3716;
struct yf3724;
struct yf3730;
struct yf3739;
struct yf3747;
struct yf3753;
struct yf3759;
struct yf3766;
struct yf3776;
struct yf3784;
struct yf3792;
struct yf3802;
struct yf3810;
struct yf3815;
struct yf3820;
struct yf3825;
struct yf8340;
struct yf8347;
struct yf8353;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v3830;
rt_int c_3833;
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
rt_int lo3869;
rt_int hi3870;
rt_int c_3872;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v3878;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_3893;
yarr v3895;
rt_int v3897;
rt_int v3900;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v3919;
rt_int lo3930;
rt_int hi3931;
rt_int c_3933;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v3944;
rt_int v3947;
rt_int v3949;
rt_int lo3954;
rt_int hi3955;
rt_int c_3957;
rt_int lo3976;
rt_int hi3977;
rt_int c_3979;
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
rt_int lo4008;
rt_int hi4009;
rt_int c_4011;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4024;
rt_int lo4040;
rt_int hi4041;
rt_int c_4043;
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
void * v4064;
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
rt_int v4078;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4085;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4091;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4101;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4111;
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
rt_int v4123;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4131;
rt_int yu;
};
struct yf1841 { void *up;
rt_int v4135;
rt_int v4137;
rt_int v4139;
rt_int lo4156;
rt_int hi4157;
rt_int c_4159;
rt_int yu;
};
struct yf1846 { void *up;
unsigned char v4168;
rt_int yu;
};
struct yf1853 { void *up;
rt_int p1851;
rt_int p1852;
rt_int yu;
};
struct yf1859 { void *up;
rt_int p1858;
rt_int yu;
};
struct yf1864 { void *up;
rt_int v4185;
rt_int v4187;
rt_int yu;
};
struct yf1870 { void *up;
unsigned char p1869;
rt_int yu;
};
struct yf1877 { void *up;
yarr p1876;
rt_int yu;
};
struct yf1884 { void *up;
rt_int p1882;
rt_int p1883;
rt_int v4217;
rt_int yu;
};
struct yf1890 { void *up;
rt_int p1889;
rt_int v4227;
rt_int v4230;
rt_int v4232;
rt_int v4234;
rt_int v4236;
rt_int v4238;
rt_int v4241;
rt_int v4244;
rt_int v4247;
rt_int v4250;
rt_int v4253;
rt_int v4256;
rt_int v4259;
rt_int lo4297;
rt_int hi4298;
rt_int c_4300;
rt_int lo4329;
rt_int hi4330;
rt_int c_4332;
rt_int lo4339;
rt_int hi4340;
rt_int c_4342;
rt_int yu;
};
struct yf1895 { void *up;
rt_int v4353;
rt_int v4355;
rt_int v4357;
rt_int v4359;
rt_int yu;
};
struct yf1900 { void *up;
unsigned char v4388;
rt_int v4390;
rt_int v4392;
rt_int v4394;
rt_int v4396;
rt_int v4398;
rt_int v4400;
rt_int v4402;
rt_int lo4477;
rt_int hi4478;
rt_int c_4480;
rt_int yu;
};
struct yf1907 { void *up;
rt_int p1905;
rt_int p1906;
void * v4496;
rt_int yu;
};
struct yf1915 { void *up;
void * * p1912;
void * * p1913;
void * p1914;
rt_int yu;
};
struct yf1921 { void *up;
void * p1920;
rt_int v4509;
void * v4512;
rt_int yu;
};
struct yf1926 { void *up;
rt_int yu;
};
struct yf1931 { void *up;
rt_int yu;
};
struct yf1936 { void *up;
rt_int yu;
};
struct yf1943 { void *up;
rt_int p1941;
rt_int p1942;
rt_int v4526;
rt_int yu;
};
struct yf1949 { void *up;
rt_int p1948;
rt_int yu;
};
struct yf1955 { void *up;
rt_int p1954;
rt_int yu;
};
struct yf1960 { void *up;
rt_int yu;
};
struct yf1966 { void *up;
rt_int p1965;
rt_int yu;
};
struct yf1971 { void *up;
rt_int v4549;
rt_int yu;
};
struct yf1977 { void *up;
rt_int p1976;
rt_int v4559;
rt_int yu;
};
struct yf1982 { void *up;
rt_int v4564;
rt_int yu;
};
struct yf1989 { void *up;
rt_int p1987;
rt_int p1988;
rt_int v4571;
rt_int yu;
};
struct yf1994 { void *up;
rt_int v4575;
rt_int yu;
};
struct yf2000 { void *up;
rt_int p1999;
void * v4585;
rt_int yu;
};
struct yf2005 { void *up;
void * v4592;
rt_int yu;
};
struct yf2010 { void *up;
void * v4597;
void * v4599;
void * v4601;
void * v4603;
rt_int v4605;
rt_int yu;
};
struct yf2015 { void *up;
rt_int v4614;
rt_int yu;
};
struct yf2020 { void *up;
void * v4620;
void * v4622;
void * v4624;
void * v4626;
rt_int yu;
};
struct yf2025 { void *up;
void * v4631;
void * v4633;
void * v4635;
void * v4637;
void * v4639;
rt_int yu;
};
struct yf2030 { void *up;
void * v4647;
void * v4649;
void * v4651;
rt_int yu;
};
struct yf2036 { void *up;
rt_int p2035;
void * v4657;
rt_int yu;
};
struct yf2042 { void *up;
rt_int p2041;
rt_int yu;
};
struct yf2049 { void *up;
void * * p2047;
void * * p2048;
rt_int v4678;
void * v4680;
void * v4682;
void * v4684;
rt_int yu;
};
struct yf2054 { void *up;
void * v4688;
void * v4690;
void * v4692;
rt_int v4694;
rt_int v4696;
rt_int v4698;
rt_int yu;
};
struct yf2060 { void *up;
void * p2059;
void * v4714;
void * v4716;
rt_int v4718;
rt_int yu;
};
struct yf2065 { void *up;
void * v4724;
rt_int yu;
};
struct yf2071 { void *up;
rt_int p2070;
rt_int v4736;
rt_int yu;
};
struct yf2076 { void *up;
rt_int v4744;
void * v4746;
rt_int yu;
};
struct yf2081 { void *up;
void * v4755;
void * v4757;
rt_int yu;
};
struct yf2086 { void *up;
void * v4762;
void * v4764;
void * v4766;
rt_int yu;
};
struct yf2091 { void *up;
void * v4771;
void * v4773;
void * v4775;
rt_int v4777;
rt_int yu;
};
struct yf2096 { void *up;
void * v4784;
void * v4786;
void * v4788;
void * v4790;
void * v4792;
void * v4794;
rt_int v4796;
rt_int v4798;
rt_int yu;
};
struct yf2101 { void *up;
void * v4815;
rt_int yu;
};
struct yf2106 { void *up;
rt_int v4820;
rt_int yu;
};
struct yf2112 { void *up;
rt_int p2111;
void * v4829;
void * v4831;
void * v4833;
rt_int v4835;
rt_int yu;
};
struct yf2117 { void *up;
void * v4843;
void * v4845;
void * v4847;
void * v4849;
void * v4851;
void * v4853;
rt_int v4855;
rt_int v4857;
rt_int yu;
};
struct yf2122 { void *up;
rt_int yu;
};
struct yf2128 { void *up;
rt_int p2127;
rt_int yu;
};
struct yf2134 { void *up;
rt_int p2133;
rt_int yu;
};
struct yf2140 { void *up;
rt_int p2139;
rt_int yu;
};
struct yf2146 { void *up;
rt_int p2145;
rt_int yu;
};
struct yf2152 { void *up;
rt_int p2151;
rt_int yu;
};
struct yf2161 { void *up;
rt_int p2157;
void * p2158;
void * p2159;
rt_int p2160;
void * v4911;
rt_int yu;
};
struct yf2168 { void *up;
rt_int p2166;
rt_int p2167;
rt_int v4917;
rt_int yu;
};
struct yf2173 { void *up;
void * v4921;
rt_int v4923;
rt_int v4925;
rt_int yu;
};
struct yf2178 { void *up;
void * v4929;
void * v4931;
rt_int v4933;
rt_int v4935;
rt_int yu;
};
struct yf2183 { void *up;
void * v4941;
rt_int v4943;
rt_int v4945;
rt_int yu;
};
struct yf2189 { void *up;
rt_int p2188;
rt_int v4951;
rt_int yu;
};
struct yf2194 { void *up;
void * v4956;
rt_int v4958;
rt_int v4960;
rt_int yu;
};
struct yf2199 { void *up;
void * v4964;
rt_int v4966;
rt_int v4968;
rt_int yu;
};
struct yf2204 { void *up;
void * v4989;
void * v4991;
void * v4993;
rt_int v4995;
rt_int yu;
};
struct yf2209 { void *up;
rt_int yu;
};
struct yf2214 { void *up;
void * v5002;
void * v5004;
rt_int yu;
};
struct yf2221 { void *up;
rt_int p2219;
rt_int p2220;
void * v5011;
rt_int yu;
};
struct yf2227 { void *up;
rt_int p2226;
void * v5029;
rt_int yu;
};
struct yf2233 { void *up;
void * p2232;
void * v5036;
rt_int v5038;
rt_int v5041;
rt_int yu;
};
struct yf2238 { void *up;
void * v5053;
void * v5055;
void * v5057;
rt_int v5059;
rt_int yu;
};
struct yf2244 { void *up;
void * p2243;
rt_int yu;
};
struct yf2250 { void *up;
rt_int p2249;
void * v5071;
rt_int yu;
};
struct yf2256 { void *up;
rt_int p2255;
void * v5079;
rt_int yu;
};
struct yf2263 { void *up;
rt_int p2261;
rt_int p2262;
void * v5088;
void * v5090;
rt_int lo5096;
rt_int hi5097;
rt_int c_5099;
rt_int yu;
};
struct yf2270 { void *up;
void * p2268;
void * p2269;
void * v5109;
rt_int yu;
};
struct yf2276 { void *up;
rt_int p2275;
rt_int yu;
};
struct yf2283 { void *up;
void * p2281;
rt_int p2282;
void * v5121;
void * v5123;
rt_int v5125;
rt_int yu;
};
struct yf2290 { void *up;
void * p2288;
rt_int p2289;
void * v5141;
rt_int yu;
};
struct yf2297 { void *up;
void * p2295;
rt_int p2296;
void * v5166;
rt_int yu;
};
struct yf2303 { void *up;
void * p2302;
rt_int yu;
};
struct yf2309 { void *up;
void * p2308;
void * v5181;
rt_int yu;
};
struct yf2316 { void *up;
rt_int p2314;
void * p2315;
void * v5190;
rt_int yu;
};
struct yf2323 { void *up;
void * p2321;
rt_int p2322;
void * v5199;
rt_int v5201;
rt_int yu;
};
struct yf2330 { void *up;
rt_int p2328;
rt_int p2329;
rt_int v5209;
rt_int yu;
};
struct yf2336 { void *up;
rt_int p2335;
rt_int v5224;
rt_int yu;
};
struct yf2343 { void *up;
rt_int p2341;
rt_int p2342;
rt_int v5239;
rt_int yu;
};
struct yf2349 { void *up;
void * p2348;
rt_int v5248;
rt_int yu;
};
struct yf2355 { void *up;
void * p2354;
void * v5256;
rt_int yu;
};
struct yf2362 { void *up;
rt_int p2360;
rt_int p2361;
void * v5263;
rt_int yu;
};
struct yf2368 { void *up;
void * p2367;
void * v5295;
rt_int yu;
};
struct yf2374 { void *up;
void * p2373;
rt_int yu;
};
struct yf2380 { void *up;
void * p2379;
rt_int yu;
};
struct yf2386 { void *up;
void * p2385;
rt_int yu;
};
struct yf2392 { void *up;
void * p2391;
rt_int yu;
};
struct yf2398 { void *up;
void * p2397;
rt_int yu;
};
struct yf2405 { void *up;
void * p2403;
rt_int p2404;
void * v5327;
rt_int yu;
};
struct yf2411 { void *up;
void * p2410;
rt_int yu;
};
struct yf2417 { void *up;
void * p2416;
rt_int v5339;
rt_int yu;
};
struct yf2423 { void *up;
void * p2422;
rt_int v5346;
rt_int yu;
};
struct yf2429 { void *up;
void * p2428;
rt_int v5375;
rt_int yu;
};
struct yf2435 { void *up;
void * p2434;
rt_int yu;
};
struct yf2442 { void *up;
void * p2440;
void * p2441;
rt_int yu;
};
struct yf2450 { void *up;
rt_int p2447;
void * p2448;
void * p2449;
rt_int v5424;
rt_int yu;
};
struct yf2458 { void *up;
rt_int p2455;
void * p2456;
void * p2457;
rt_int yu;
};
struct yf2465 { void *up;
void * p2463;
rt_int p2464;
rt_int yu;
};
struct yf2471 { void *up;
void * p2470;
rt_int v5439;
void * v5441;
void * v5443;
rt_int yu;
};
struct yf2477 { void *up;
void * p2476;
rt_int yu;
};
struct yf2484 { void *up;
void * p2482;
void * p2483;
rt_int yu;
};
struct yf2490 { void *up;
void * p2489;
rt_int yu;
};
struct yf2498 { void *up;
void * p2495;
yarr p2497;
rt_int v5492;
rt_int v5494;
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
struct yf2518 { void *up;
void * p2515;
void * p2516;
void * p2517;
void * v5520;
rt_int yu;
};
struct yf2524 { void *up;
void * p2523;
rt_int yu;
};
struct yf2531 { void *up;
rt_int p2529;
rt_int p2530;
rt_int v5532;
rt_int v5534;
rt_int v5536;
rt_int yu;
};
struct yf2539 { void *up;
rt_int p2536;
rt_int p2537;
rt_int p2538;
rt_int v5552;
rt_int v5554;
rt_int yu;
};
struct yf2547 { void *up;
rt_int p2544;
rt_int p2545;
rt_int p2546;
rt_int v5569;
rt_int lo5574;
rt_int hi5575;
rt_int c_5577;
rt_int yu;
};
struct yf2557 { void *up;
void * p2552;
void * p2553;
rt_int p2554;
rt_int * p2554_o;
rt_int p2555;
rt_int * p2555_o;
rt_int p2556;
rt_int * p2556_o;
rt_int v5588;
rt_int v5590;
rt_int v5592;
rt_int v5594;
rt_int v5596;
rt_int v5598;
rt_int yu;
};
struct yf2564 { void *up;
rt_int p2562;
rt_int p2563;
rt_int yu;
};
struct yf2572 { void *up;
void * p2569;
rt_int p2570;
rt_int p2571;
rt_int v5627;
rt_int yu;
};
struct yf2579 { void *up;
void * p2577;
void * p2578;
rt_int v5637;
rt_int v5639;
rt_int v5641;
rt_int v5643;
void * v5645;
void * v5647;
rt_int v5649;
rt_int v5651;
rt_int v5653;
rt_int v5655;
rt_int v5657;
rt_int yu;
};
struct yf2585 { void *up;
void * p2584;
void * v5689;
void * v5691;
rt_int v5693;
rt_int yu;
};
struct yf2593 { void *up;
void * p2590;
rt_int p2591;
rt_int p2592;
rt_int yu;
};
struct yf2599 { void *up;
rt_int p2598;
rt_int v5708;
rt_int yu;
};
struct yf2607 { void *up;
void * p2604;
rt_int p2605;
rt_int p2606;
void * v5718;
void * v5720;
rt_int yu;
};
struct yf2614 { void *up;
void * p2612;
void * p2613;
void * v5728;
void * v5730;
void * v5732;
void * v5734;
void * v5736;
void * v5738;
rt_int yu;
};
struct yf2622 { void *up;
void * p2619;
rt_int p2620;
rt_int p2621;
void * v5767;
void * v5769;
void * v5771;
void * v5773;
void * v5775;
rt_int v5777;
void * v5779;
rt_int v5781;
rt_int v5783;
rt_int yu;
};
struct yf2629 { void *up;
rt_int p2627;
void * p2628;
void * v5830;
void * v5832;
rt_int yu;
};
struct yf2634 { void *up;
void * v5836;
rt_int yu;
};
struct yf2640 { void *up;
void * p2639;
void * v5841;
rt_int v5843;
rt_int v5845;
rt_int yu;
};
struct yf2653 { void *up;
void * p2645;
void * * p2646;
rt_int p2647;
void * p2648;
rt_int p2649;
rt_int p2650;
void * p2651;
rt_int p2652;
void * v5870;
rt_int yu;
};
struct yf2664 { void *up;
void * p2658;
void * * p2659;
void * p2660;
rt_int p2661;
void * p2662;
rt_int p2663;
void * v5883;
void * v5885;
void * v5887;
rt_int yu;
};
struct yf2672 { void *up;
void * p2669;
void * p2670;
rt_int p2671;
void * v5894;
void * v5896;
void * v5898;
void * v5900;
rt_int v5902;
void * v5905;
rt_int v5907;
rt_int v5909;
rt_int yu;
};
struct yf2679 { void *up;
void * p2677;
rt_int p2678;
void * v5959;
rt_int yu;
};
struct yf2685 { void *up;
rt_int p2684;
rt_int v5965;
rt_int v5968;
rt_int yu;
};
struct yf2692 { void *up;
rt_int p2690;
rt_int p2691;
rt_int yu;
};
struct yf2699 { void *up;
void * p2697;
rt_int p2698;
rt_int v5991;
rt_int v5993;
rt_int v5995;
rt_int v5997;
rt_int v5999;
rt_int v6001;
void * v6003;
rt_int yu;
};
struct yf2707 { void *up;
void * p2704;
rt_int p2705;
rt_int p2706;
void * v6053;
rt_int v6055;
rt_int v6058;
rt_int v6061;
rt_int v6064;
rt_int v6067;
rt_int v6070;
ydesc yd_6080;
yarr v6082;
yarr v6084;
ydesc yd_6093;
yarr v6095;
rt_int lo6112;
rt_int hi6113;
rt_int c_6115;
rt_int lo6121;
rt_int hi6122;
rt_int c_6124;
rt_int yu;
};
struct yf2714 { void *up;
void * p2712;
void * p2713;
void * v6139;
rt_int yu;
};
struct yf2721 { void *up;
void * p2719;
void * p2720;
void * v6148;
rt_int v6150;
rt_int v6152;
rt_int v6154;
rt_int yu;
};
struct yf2727 { void *up;
void * p2726;
rt_int v6173;
rt_int v6175;
rt_int yu;
};
struct yf2734 { void *up;
rt_int p2732;
rt_int p2733;
rt_int yu;
};
struct yf2741 { void *up;
rt_int p2739;
void * p2740;
rt_int v6191;
rt_int v6193;
rt_int yu;
};
struct yf2749 { void *up;
void * p2746;
rt_int p2747;
void * p2748;
rt_int v6219;
rt_int yu;
};
struct yf2755 { void *up;
void * p2754;
void * v6241;
rt_int yu;
};
struct yf2762 { void *up;
void * p2760;
rt_int p2761;
void * v6250;
rt_int v6252;
rt_int v6254;
rt_int v6256;
rt_int v6258;
rt_int lo6267;
rt_int hi6268;
rt_int c_6270;
rt_int yu;
};
struct yf2769 { void *up;
void * p2767;
void * p2768;
void * v6309;
void * v6311;
void * v6313;
rt_int v6315;
rt_int v6318;
rt_int yu;
};
struct yf2777 { void *up;
void * p2774;
rt_int p2775;
rt_int p2776;
rt_int v6343;
rt_int v6345;
rt_int yu;
};
struct yf2786 { void *up;
void * p2782;
rt_int p2783;
rt_int p2784;
rt_int * p2784_o;
rt_int p2785;
rt_int v6356;
rt_int v6358;
rt_int v6360;
ydesc yd_6369;
yarr v6371;
unsigned char v6373;
rt_int v6375;
rt_int lo6407;
rt_int hi6408;
rt_int c_6410;
rt_int yu;
};
struct yf2794 { void *up;
void * p2791;
rt_int p2792;
rt_int * p2792_o;
rt_int p2793;
rt_int * p2793_o;
void * v6445;
rt_int v6447;
rt_int v6449;
rt_int v6451;
rt_int v6453;
rt_int v6455;
void * v6457;
rt_int yu;
};
struct yf2802 { void *up;
void * p2799;
rt_int p2800;
rt_int * p2800_o;
rt_int p2801;
rt_int * p2801_o;
void * v6487;
rt_int v6489;
rt_int v6491;
rt_int v6493;
rt_int v6495;
rt_int v6497;
void * v6499;
void * v6501;
rt_int lo6518;
rt_int hi6519;
rt_int c_6521;
rt_int yu;
};
struct yf2809 { void *up;
void * p2807;
void * p2808;
rt_int yu;
};
struct yf2817 { void *up;
rt_int p2814;
void * p2815;
void * p2816;
rt_int v6549;
rt_int v6551;
void * v6553;
void * v6555;
rt_int yu;
};
struct yf2825 { void *up;
rt_int p2822;
void * p2823;
void * p2824;
rt_int v6584;
rt_int v6586;
rt_int v6588;
rt_int v6590;
rt_int v6592;
rt_int v6594;
rt_int yu;
};
struct yf2833 { void *up;
rt_int p2830;
void * p2831;
void * p2832;
rt_int v6641;
rt_int v6643;
rt_int v6645;
rt_int yu;
};
struct yf2844 { void *up;
rt_int * p2838;
void * p2839;
rt_int * p2840;
void * p2841;
void * p2842;
rt_int p2843;
rt_int v6660;
rt_int v6662;
rt_int yu;
};
struct yf2852 { void *up;
void * p2849;
rt_int p2850;
rt_int * p2850_o;
void * p2851;
void * * p2851_o;
rt_int v6669;
rt_int v6671;
rt_int yu;
};
struct yf2861 { void *up;
void * p2857;
rt_int p2858;
rt_int * p2858_o;
rt_int p2859;
rt_int * p2859_o;
rt_int p2860;
rt_int * p2860_o;
rt_int v6685;
rt_int v6687;
rt_int v6689;
rt_int v6691;
rt_int v6693;
rt_int v6695;
rt_int yu;
};
struct yf2867 { void *up;
rt_int p2866;
rt_int yu;
};
struct yf2875 { void *up;
rt_int p2872;
void * p2873;
void * p2874;
rt_int v6716;
rt_int yu;
};
struct yf2885 { void *up;
rt_int p2880;
void * p2881;
rt_int p2882;
void * p2883;
rt_int p2884;
rt_int v6755;
rt_int yu;
};
struct yf2895 { void *up;
rt_int p2890;
void * p2891;
rt_int p2892;
void * p2893;
rt_int p2894;
rt_int yu;
};
struct yf2901 { void *up;
void * p2900;
void * v6777;
void * v6779;
rt_int yu;
};
struct yf2907 { void *up;
void * p2906;
void * v6798;
void * v6800;
rt_int yu;
};
struct yf2915 { void *up;
void * p2912;
rt_int p2913;
rt_int * p2913_o;
void * p2914;
void * * p2914_o;
rt_int yu;
};
struct yf2921 { void *up;
rt_int p2920;
rt_int yu;
};
struct yf2928 { void *up;
void * p2926;
rt_int p2927;
void * v6818;
rt_int yu;
};
struct yf2934 { void *up;
void * p2933;
void * v6823;
rt_int yu;
};
struct yf2943 { void *up;
void * p2939;
void * p2940;
rt_int p2941;
rt_int * p2941_o;
void * p2942;
void * * p2942_o;
rt_int v6832;
void * v6834;
rt_int v6836;
rt_int v6838;
void * v6840;
void * v6842;
void * v6844;
rt_int v6846;
rt_int v6848;
rt_int yu;
};
struct yf2951 { void *up;
void * p2948;
void * p2949;
rt_int p2950;
void * v6891;
rt_int v6893;
rt_int v6895;
rt_int yu;
};
struct yf2960 { void *up;
void * p2956;
void * p2957;
rt_int p2958;
rt_int * p2958_o;
void * p2959;
void * * p2959_o;
void * v6907;
rt_int yu;
};
struct yf2966 { void *up;
void * p2965;
void * v6914;
rt_int yu;
};
struct yf2974 { void *up;
void * p2971;
rt_int p2972;
rt_int * p2972_o;
void * p2973;
void * * p2973_o;
rt_int v6927;
rt_int v6929;
rt_int v6931;
void * v6933;
void * v6935;
void * v6937;
void * v6939;
rt_int v6941;
rt_int v6943;
rt_int yu;
};
struct yf2984 { void *up;
void * p2979;
rt_int p2980;
void * p2981;
rt_int p2982;
rt_int * p2982_o;
void * p2983;
void * * p2983_o;
rt_int yu;
};
struct yf2990 { void *up;
void * p2989;
void * v6985;
rt_int yu;
};
struct yf2999 { void *up;
yarr p2996;
rt_int p2997;
rt_int p2998;
rt_int yu;
};
struct yf3008 { void *up;
rt_int p3004;
yarr p3006;
rt_int p3007;
rt_int yu;
};
struct yf3017 { void *up;
rt_int p3013;
void * p3014;
rt_int p3015;
void * p3016;
rt_int v7013;
rt_int v7015;
void * v7017;
rt_int yu;
};
struct yf3023 { void *up;
void * p3022;
rt_int yu;
};
struct yf3030 { void *up;
rt_int p3028;
void * p3029;
rt_int yu;
};
struct yf3039 { void *up;
void * p3035;
void * p3036;
rt_int p3037;
rt_int * p3037_o;
void * p3038;
void * * p3038_o;
rt_int v7055;
rt_int v7057;
rt_int v7059;
rt_int v7061;
void * v7063;
void * v7065;
void * v7067;
rt_int v7069;
rt_int yu;
};
struct yf3046 { void *up;
void * p3044;
void * p3045;
rt_int yu;
};
struct yf3054 { void *up;
void * p3051;
rt_int p3052;
rt_int p3053;
void * v7129;
void * v7131;
rt_int v7133;
rt_int v7135;
rt_int yu;
};
struct yf3060 { void *up;
void * p3059;
void * v7147;
rt_int yu;
};
struct yf3069 { void *up;
void * p3065;
void * p3066;
rt_int p3067;
rt_int * p3067_o;
rt_int p3068;
rt_int * p3068_o;
void * v7159;
void * v7161;
void * v7163;
rt_int yu;
};
struct yf3077 { void *up;
void * p3074;
void * p3075;
rt_int p3076;
void * v7178;
rt_int yu;
};
struct yf3084 { void *up;
void * p3082;
void * p3083;
rt_int yu;
};
struct yf3093 { void *up;
void * p3089;
rt_int p3090;
rt_int p3091;
rt_int p3092;
void * v7195;
rt_int v7197;
rt_int v7201;
rt_int v7204;
rt_int v7207;
rt_int v7210;
rt_int v7213;
rt_int v7216;
rt_int yu;
};
struct yf3099 { void *up;
rt_int p3098;
rt_int yu;
};
struct yf3110 { void *up;
void * p3104;
rt_int p3105;
void * p3106;
void * p3107;
rt_int p3108;
rt_int * p3108_o;
void * p3109;
void * * p3109_o;
void * v7276;
void * v7278;
rt_int v7280;
rt_int v7282;
rt_int yu;
};
struct yf3117 { void *up;
void * p3115;
rt_int p3116;
void * v7296;
void * v7298;
rt_int yu;
};
struct yf3127 { void *up;
rt_int p3122;
void * p3123;
rt_int p3124;
void * p3125;
rt_int p3126;
void * v7308;
void * v7310;
void * v7312;
void * v7314;
rt_int v7316;
rt_int yu;
};
struct yf3137 { void *up;
rt_int p3132;
void * p3133;
rt_int p3134;
void * p3135;
rt_int p3136;
rt_int v7358;
rt_int yu;
};
struct yf3147 { void *up;
void * p3142;
void * p3143;
rt_int p3144;
rt_int p3145;
rt_int * p3145_o;
void * p3146;
void * * p3146_o;
void * v7367;
void * v7369;
rt_int v7371;
rt_int v7373;
rt_int yu;
};
struct yf3156 { void *up;
void * p3152;
void * p3153;
rt_int p3154;
rt_int * p3154_o;
void * p3155;
void * * p3155_o;
void * v7385;
void * v7387;
rt_int v7389;
rt_int v7391;
rt_int v7393;
void * v7395;
rt_int v7397;
rt_int v7399;
rt_int v7401;
rt_int v7403;
rt_int v7405;
rt_int v7408;
void * v7410;
rt_int v7412;
rt_int yu;
};
struct yf3164 { void *up;
void * p3161;
rt_int p3162;
rt_int p3163;
void * v7474;
void * v7476;
rt_int v7478;
rt_int v7480;
rt_int yu;
};
struct yf3172 { void *up;
yarr p3170;
rt_int p3171;
rt_int v7489;
rt_int yu;
};
struct yf3182 { void *up;
yarr p3178;
rt_int p3179;
yarr p3181;
rt_int v7495;
rt_int yu;
};
struct yf3188 { void *up;
rt_int p3187;
rt_int yu;
};
struct yf3193 { void *up;
rt_int yu;
};
struct yf3199 { void *up;
rt_int p3198;
rt_int yu;
};
struct yf3205 { void *up;
void * p3204;
rt_int v7517;
rt_int v7519;
rt_int v7521;
void * v7523;
void * v7525;
rt_int v7527;
void * v7529;
rt_int v7531;
rt_int yu;
};
struct yf3212 { void *up;
void * p3210;
void * p3211;
void * v7597;
void * v7599;
rt_int v7601;
rt_int v7603;
rt_int v7605;
rt_int v7607;
rt_int yu;
};
struct yf3220 { void *up;
void * p3217;
void * p3218;
void * p3219;
rt_int v7629;
void * v7631;
void * v7633;
void * v7635;
rt_int v7637;
rt_int v7639;
rt_int v7641;
rt_int v7643;
rt_int yu;
};
struct yf3227 { void *up;
void * p3225;
void * p3226;
void * v7656;
void * v7658;
rt_int v7660;
rt_int v7663;
rt_int lo7668;
rt_int hi7669;
rt_int c_7671;
rt_int yu;
};
struct yf3233 { void *up;
void * p3232;
void * v7681;
rt_int v7683;
rt_int yu;
};
struct yf3239 { void *up;
void * p3238;
void * v7691;
rt_int yu;
};
struct yf3245 { void *up;
void * p3244;
rt_int v7705;
void * v7707;
rt_int v7709;
rt_int v7711;
rt_int yu;
};
struct yf3252 { void *up;
void * p3250;
rt_int p3251;
void * v7736;
void * v7738;
rt_int yu;
};
struct yf3258 { void *up;
void * p3257;
void * v7762;
rt_int yu;
};
struct yf3264 { void *up;
void * p3263;
rt_int v7766;
void * v7768;
rt_int yu;
};
struct yf3271 { void *up;
void * p3269;
void * p3270;
rt_int v7774;
rt_int v7776;
void * v7778;
void * v7780;
rt_int v7782;
rt_int yu;
};
struct yf3276 { void *up;
void * v7788;
rt_int v7790;
rt_int yu;
};
struct yf3282 { void *up;
void * p3281;
rt_int v7799;
rt_int v7801;
rt_int v7803;
rt_int v7805;
rt_int v7807;
rt_int v7809;
rt_int v7811;
void * v7813;
void * v7815;
void * v7817;
void * v7819;
rt_int v7821;
rt_int v7823;
rt_int v7825;
rt_int v7827;
void * v7829;
rt_int yu;
};
struct yf3288 { void *up;
void * p3287;
void * v7903;
rt_int v7905;
rt_int v7907;
rt_int v7909;
void * v7911;
rt_int yu;
};
struct yf3296 { void *up;
rt_int p3293;
rt_int p3294;
rt_int p3295;
rt_int yu;
};
struct yf3302 { void *up;
void * p3301;
rt_int v7943;
rt_int v7945;
rt_int v7947;
void * v7949;
void * v7951;
rt_int yu;
};
struct yf3308 { void *up;
void * p3307;
rt_int v7967;
rt_int v7969;
rt_int yu;
};
struct yf3314 { void *up;
void * p3313;
void * v7996;
rt_int yu;
};
struct yf3320 { void *up;
void * p3319;
void * v8011;
rt_int yu;
};
struct yf3326 { void *up;
void * p3325;
void * v8021;
void * v8023;
void * v8025;
rt_int yu;
};
struct yf3335 { void *up;
void * p3331;
void * p3332;
void * * p3332_o;
rt_int p3333;
rt_int * p3333_o;
rt_int p3334;
rt_int * p3334_o;
void * v8033;
void * v8035;
rt_int yu;
};
struct yf3343 { void *up;
void * p3340;
rt_int p3341;
rt_int p3342;
void * v8045;
rt_int yu;
};
struct yf3349 { void *up;
void * p3348;
void * v8050;
rt_int v8052;
rt_int v8054;
void * v8056;
void * v8058;
rt_int yu;
};
struct yf3355 { void *up;
void * p3354;
void * v8063;
rt_int yu;
};
struct yf3362 { void *up;
void * p3360;
rt_int p3361;
void * v8069;
rt_int v8071;
rt_int v8073;
void * v8075;
rt_int yu;
};
struct yf3369 { void *up;
void * p3367;
yarr * p3368;
void * v8080;
rt_int v8082;
void * v8085;
rt_int lo8094;
rt_int hi8095;
rt_int c_8097;
rt_int yu;
};
struct yf3376 { void *up;
void * p3374;
void * p3375;
void * v8111;
void * v8113;
rt_int v8115;
rt_int v8117;
rt_int v8119;
rt_int v8121;
rt_int v8123;
rt_int v8125;
rt_int v8127;
rt_int v8129;
yarr v8131;
yarr v8133;
rt_int v8135;
rt_int v8137;
rt_int v8139;
rt_int v8141;
void * v8143;
void * v8145;
void * v8147;
void * v8149;
rt_int lo8163;
rt_int hi8164;
rt_int c_8166;
rt_int yu;
};
struct yf3384 { void *up;
void * p3381;
rt_int p3382;
rt_int p3383;
void * v8188;
void * v8190;
rt_int v8192;
rt_int v8194;
void * v8196;
void * v8198;
void * v8200;
rt_int v8202;
rt_int v8204;
rt_int yu;
};
struct yf8340 { struct yf3389 *up;
rt_int p8338;
rt_int p8339;
rt_int yu;
};
struct yf8347 { struct yf3389 *up;
rt_int p8345;
rt_int p8346;
void * v8367;
rt_int yu;
};
struct yf8353 { struct yf3389 *up;
rt_int p8352;
rt_int yu;
};
struct yf3389 { void *up;
void * v8220;
void * v8222;
void * v8224;
rt_int v8226;
rt_int v8229;
rt_int v8232;
void * v8235;
rt_int lo8262;
rt_int hi8263;
ydesc yd_8265;
yarr v8267;
yarr v8269;
rt_int lo8275;
rt_int hi8276;
ydesc yd_8278;
yarr v8280;
rt_int lo8286;
rt_int hi8287;
ydesc yd_8289;
yarr v8291;
rt_int lo8297;
rt_int hi8298;
ydesc yd_8300;
yarr v8302;
rt_int lo8308;
rt_int hi8309;
ydesc yd_8311;
yarr v8313;
rt_int lo8319;
rt_int hi8320;
ydesc yd_8322;
yarr v8324;
rt_int v8326;
rt_int v8329;
rt_int v8331;
rt_int v8333;
void * v8335;
rt_int lo8392;
rt_int hi8393;
rt_int c_8395;
rt_int lo8403;
rt_int hi8404;
rt_int c_8406;
rt_int lo8414;
rt_int hi8415;
rt_int c_8417;
rt_int lo8430;
rt_int hi8431;
rt_int c_8433;
rt_int lo8440;
rt_int hi8441;
rt_int c_8443;
rt_int lo8453;
rt_int hi8454;
rt_int c_8456;
rt_int lo8463;
rt_int hi8464;
rt_int c_8466;
rt_int lo8476;
rt_int hi8477;
rt_int c_8479;
rt_int lo8501;
rt_int hi8502;
rt_int c_8504;
rt_int yu;
};
struct yf3397 { void *up;
rt_int p3394;
rt_int p3395;
rt_int p3396;
rt_int lo8517;
rt_int hi8518;
rt_int c_8520;
rt_int yu;
};
struct yf3403 { void *up;
rt_int p3402;
rt_int v8534;
rt_int v8536;
rt_int lo8541;
rt_int hi8542;
rt_int c_8544;
rt_int yu;
};
struct yf3409 { void *up;
void * p3408;
void * v8554;
rt_int v8556;
rt_int v8558;
rt_int yu;
};
struct yf3415 { void *up;
void * p3414;
rt_int v8575;
rt_int yu;
};
struct yf3421 { void *up;
void * p3420;
rt_int yu;
};
struct yf3428 { void *up;
void * p3426;
rt_int p3427;
void * v8587;
void * v8589;
void * v8591;
void * v8593;
void * v8595;
void * v8597;
void * v8599;
rt_int v8601;
rt_int v8603;
rt_int yu;
};
struct yf3435 { void *up;
void * p3433;
void * p3434;
void * v8652;
void * v8654;
void * v8656;
rt_int v8658;
rt_int yu;
};
struct yf3441 { void *up;
void * p3440;
void * v8666;
yR140 v8668;
yR140 v8670;
rt_int v8672;
rt_int v8674;
rt_int v8676;
rt_int v8678;
rt_int v8680;
rt_int v8682;
rt_int v8684;
void * v8686;
rt_int v8688;
void * v8690;
void * v8692;
rt_int v8694;
rt_int v8696;
yR140 v8698;
rt_int yu;
};
struct yf3449 { void *up;
void * p3446;
void * p3447;
rt_int p3448;
rt_int yu;
};
struct yf3458 { void *up;
void * p3454;
void * p3455;
rt_int p3456;
rt_int p3457;
rt_int yu;
};
struct yf3466 { void *up;
void * p3463;
void * p3464;
rt_int p3465;
rt_int yu;
};
struct yf3472 { void *up;
void * p3471;
rt_int v8787;
void * v8789;
void * v8791;
void * v8793;
void * v8795;
rt_int v8797;
rt_int v8799;
rt_int v8801;
rt_int v8803;
rt_int yu;
};
struct yf3479 { void *up;
void * p3477;
void * p3478;
void * v8822;
rt_int yu;
};
struct yf3486 { void *up;
void * p3484;
void * p3485;
rt_int yu;
};
struct yf3495 { void *up;
void * p3491;
rt_int p3492;
void * p3493;
rt_int p3494;
rt_int v8832;
rt_int lo8845;
rt_int hi8846;
rt_int c_8848;
rt_int yu;
};
struct yf3502 { void *up;
rt_int p3500;
rt_int p3501;
rt_int v8857;
rt_int v8861;
void * v8863;
rt_int lo8868;
rt_int hi8869;
rt_int c_8871;
rt_int lo8878;
rt_int hi8879;
rt_int c_8881;
rt_int yu;
};
struct yf3508 { void *up;
rt_int p3507;
void * v8889;
yR140 v8891;
void * v8893;
rt_int yu;
};
struct yf3514 { void *up;
void * p3513;
void * v8907;
void * v8909;
rt_int v8911;
rt_int v8913;
rt_int yu;
};
struct yf3520 { void *up;
void * p3519;
rt_int yu;
};
struct yf3527 { void *up;
rt_int p3525;
void * p3526;
void * v8923;
rt_int yu;
};
struct yf3535 { void *up;
void * * p3532;
void * p3533;
rt_int p3534;
void * v8930;
void * v8932;
void * v8934;
rt_int yu;
};
struct yf3542 { void *up;
void * p3540;
rt_int p3541;
void * v8944;
rt_int yu;
};
struct yf3550 { void *up;
rt_int p3547;
rt_int p3548;
void * p3549;
void * * p3549_o;
void * v8960;
rt_int yu;
};
struct yf3556 { void *up;
void * p3555;
void * v8978;
rt_int yu;
};
struct yf3565 { void *up;
rt_int p3561;
rt_int p3562;
void * p3563;
rt_int p3564;
void * v8986;
rt_int yu;
};
struct yf3572 { void *up;
rt_int p3570;
void * p3571;
rt_int yu;
};
struct yf3579 { void *up;
void * p3577;
void * p3578;
void * v8999;
rt_int lo9003;
rt_int hi9004;
rt_int c_9006;
rt_int yu;
};
struct yf3585 { void *up;
rt_int p3584;
void * v9013;
rt_int lo9017;
rt_int hi9018;
rt_int c_9020;
rt_int yu;
};
struct yf3593 { void *up;
void * p3590;
void * * p3591;
rt_int p3592;
void * v9029;
void * v9031;
rt_int v9033;
rt_int yu;
};
struct yf3601 { void *up;
void * p3598;
void * * p3599;
rt_int p3600;
void * v9040;
void * v9042;
void * v9044;
rt_int v9046;
void * v9048;
rt_int v9050;
rt_int v9052;
void * v9054;
rt_int yu;
};
struct yf3608 { void *up;
void * p3606;
rt_int p3607;
void * v9089;
void * v9091;
void * v9093;
rt_int yu;
};
struct yf3616 { void *up;
void * p3613;
void * p3614;
rt_int p3615;
void * v9101;
void * v9103;
void * v9105;
void * v9107;
rt_int yu;
};
struct yf3622 { void *up;
void * p3621;
void * v9114;
void * v9116;
void * v9118;
void * v9120;
void * v9122;
void * v9124;
void * v9126;
void * v9128;
void * v9130;
void * v9132;
void * v9134;
rt_int v9136;
rt_int v9138;
rt_int v9140;
rt_int yu;
};
struct yf3628 { void *up;
void * p3627;
void * v9170;
rt_int yu;
};
struct yf3634 { void *up;
void * p3633;
void * v9174;
void * v9176;
void * v9178;
void * v9180;
rt_int v9182;
rt_int v9184;
rt_int v9186;
rt_int v9188;
void * v9190;
rt_int lo9198;
rt_int hi9199;
rt_int c_9201;
rt_int yu;
};
struct yf3640 { void *up;
void * p3639;
void * v9213;
void * v9215;
rt_int yu;
};
struct yf3645 { void *up;
void * v9221;
rt_int yu;
};
struct yf3652 { void *up;
void * p3650;
void * p3651;
rt_int v9232;
rt_int v9234;
rt_int v9236;
rt_int v9238;
rt_int v9240;
void * v9242;
rt_int v9244;
rt_int v9246;
void * v9248;
rt_int v9250;
rt_int v9252;
rt_int v9254;
rt_int v9256;
rt_int v9258;
rt_int v9260;
void * v9262;
void * v9264;
rt_int yu;
};
struct yf3658 { void *up;
rt_int p3657;
rt_int v9328;
rt_int yu;
};
struct yf3664 { void *up;
void * p3663;
rt_int yu;
};
struct yf3670 { void *up;
void * p3669;
rt_int v9341;
rt_int yu;
};
struct yf3675 { void *up;
rt_int yu;
};
struct yf3681 { void *up;
void * p3680;
rt_int yu;
};
struct yf3688 { void *up;
void * p3686;
rt_int p3687;
rt_int yu;
};
struct yf3695 { void *up;
void * p3693;
rt_int p3694;
rt_int yu;
};
struct yf3702 { void *up;
void * p3700;
void * p3701;
rt_int v9384;
rt_int v9386;
rt_int v9388;
rt_int yu;
};
struct yf3709 { void *up;
void * p3707;
rt_int p3708;
void * v9397;
rt_int v9399;
rt_int yu;
};
struct yf3716 { void *up;
void * p3714;
rt_int p3715;
rt_int yu;
};
struct yf3724 { void *up;
yarr p3722;
rt_int p3723;
rt_int yu;
};
struct yf3730 { void *up;
rt_int p3729;
rt_int yu;
};
struct yf3739 { void *up;
void * p3735;
rt_int p3736;
rt_int p3737;
rt_int * p3737_o;
void * p3738;
void * * p3738_o;
rt_int v9426;
rt_int yu;
};
struct yf3747 { void *up;
void * p3744;
rt_int p3745;
rt_int * p3745_o;
void * p3746;
void * * p3746_o;
rt_int yu;
};
struct yf3753 { void *up;
void * p3752;
rt_int v9442;
void * v9444;
rt_int yu;
};
struct yf3759 { void *up;
void * p3758;
void * v9450;
rt_int v9453;
rt_int v9455;
rt_int v9457;
rt_int v9459;
rt_int v9461;
rt_int v9463;
unsigned char v9465;
void * v9467;
ydesc yd_9476;
yarr v9478;
rt_int yu;
};
struct yf3766 { void *up;
void * p3764;
void * p3765;
rt_int v9517;
rt_int v9519;
rt_int v9521;
void * v9523;
rt_int yu;
};
struct yf3776 { void *up;
rt_int p3771;
void * p3772;
rt_int p3773;
rt_int p3774;
rt_int * p3774_o;
void * p3775;
void * * p3775_o;
void * v9535;
rt_int v9537;
rt_int v9539;
rt_int v9541;
rt_int v9543;
rt_int v9545;
void * v9547;
void * v9549;
void * v9551;
void * v9553;
rt_int v9555;
rt_int v9557;
rt_int v9559;
rt_int v9561;
void * v9563;
rt_int v9565;
rt_int lo9579;
rt_int hi9580;
rt_int c_9582;
rt_int yu;
};
struct yf3784 { void *up;
yarr p3782;
void * p3783;
void * v9788;
rt_int yu;
};
struct yf3792 { void *up;
yarr p3790;
rt_int p3791;
void * v9794;
rt_int yu;
};
struct yf3802 { void *up;
yarr p3798;
yarr p3799;
yarr p3800;
rt_int p3801;
void * v9802;
void * v9804;
void * v9806;
rt_int yu;
};
struct yf3810 { void *up;
rt_int p3807;
yarr p3809;
void * v9815;
rt_int yu;
};
struct yf3815 { void *up;
rt_int yu;
};
struct yf3820 { void *up;
void * v9905;
rt_int yu;
};
struct yf3825 { void *up;
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
static void * v1483;
static ydesc yd_1492;
static yarr v1494;
static ydesc yd_1503;
static yarr v1505;
static ydesc yd_1514;
static yarr v1516;
static rt_int v1518;
static ydesc yd_1528;
static yarr v1530;
static rt_int v1532;
static rt_int v1535;
static ydesc yd_1545;
static yarr v1547;
static ydesc yd_1556;
static yarr v1558;
static rt_int v1560;
static ydesc yd_1570;
static yarr v1572;
static rt_int v1574;
static ydesc yd_1584;
static yarr v1586;
static yarr v1588;
static ydesc yd_1597;
static yarr v1599;
static rt_int v1601;
static rt_int v1604;
static void * v1607;
static ydesc yd_1616;
static yarr v1618;
static yarr v1620;
static rt_int v1622;
static ydesc yd_1632;
static yarr v1634;
static rt_int v1636;
static rt_int v1639;
static void * v1642;
static void * v1644;
static ydesc yd_1653;
static yarr v1655;
static ydesc yd_1664;
static yarr v1666;
static rt_int v1668;
static ydesc yd_1678;
static yarr v1680;
static ydesc yd_1689;
static yarr v1691;
static ydesc yd_1700;
static yarr v1702;
static ydesc yd_1711;
static yarr v1713;
static ydesc yd_1722;
static yarr v1724;
static ydesc yd_1733;
static yarr v1735;
static ydesc yd_1744;
static yarr v1746;
static yarr v1748;
static ydesc yd_1757;
static yarr v1759;
static rt_int v1761;
static rt_int v1764;
static void * v1767;
static ydesc yd_1776;
static yarr v1778;
static rt_int v1780;
static ydesc yd_1790;
static yarr v1792;
static ydesc yd_1801;
static yarr v1803;
static ydesc yd_1812;
static yarr v1814;
static ydesc yd_1823;
static yarr v1825;
static yarr v1827;
static rt_int v1829;
static void * v1832;
static void * v1834;
static void * v1836;
static void * v1838;
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
static void yr1840_InitWords(void);
static void yr1845_ReadSource(void);
static void yr1850_AddTok(rt_int a_p1851, rt_int a_p1852);
static unsigned char yr1857_At(rt_int a_p1858);
static rt_int yr1863_EndsOperand(void);
static rt_int yr1868_DigitVal(unsigned char a_p1869);
static void yr1874_LexError(yarr a_p1876);
static void yr1881_LexDigits(rt_int a_p1882, rt_int a_p1883);
static void yr1888_LexNumber(rt_int a_p1889);
static void yr1894_LexString(void);
static void yr1899_Lex(void);
static void * yr1904_NewNode(rt_int a_p1905, rt_int a_p1906);
static void yr1911_Link(void * * a_p1912, void * * a_p1913, void * a_p1914);
static rt_int yr1919_Count(void * a_p1920);
static rt_int yr1925_TK(void);
static rt_int yr1930_TV(void);
static rt_int yr1935_TLn(void);
static rt_int yr1940_IsAt(rt_int a_p1941, rt_int a_p1942);
static rt_int yr1947_Is(rt_int a_p1948);
static rt_int yr1953_IsIdAt(rt_int a_p1954);
static void yr1959_Skip(void);
static rt_int yr1964_Accept(rt_int a_p1965);
static rt_int yr1970_TokText(void);
static void yr1975_Expect(rt_int a_p1976);
static rt_int yr1981_Ident(void);
static void yr1986_CloseName(rt_int a_p1987, rt_int a_p1988);
static rt_int yr1993_ExtendedId(void);
static rt_int yr1998_IsLabel(rt_int a_p1999);
static void * yr2004_ImportItem(void);
static void * yr2009_ParseModule(void);
static rt_int yr2014_IsDeclWord(void);
static void * yr2019_ParseBlock(void);
static void * yr2024_ParseHandler(void);
static void * yr2029_ParseNames(void);
static void * yr2034_SimpleEntry(rt_int a_p2035);
static rt_int yr2040_Continues(rt_int a_p2041);
static void yr2046_ParseDeclGroup(void * * a_p2047, void * * a_p2048);
static void * yr2053_ParseDecl(void);
static void yr2058_ParseFormals(void * a_p2059);
static void * yr2064_ParseFormalRep(void);
static rt_int yr2069_IsStructWord(rt_int a_p2070);
static void * yr2075_ParseRep(void);
static void * yr2080_ParseConcrete(void);
static void * yr2085_ParseIds(void);
static void * yr2090_ParseFieldGroups(void);
static void * yr2095_ParseConcrete1(void);
static void * yr2100_ParseQualifier(void);
static rt_int yr2105_IsStop(void);
static void * yr2110_ParseStatements(rt_int a_p2111);
static void * yr2116_ParseStatement(void);
static rt_int yr2121_OpAt(void);
static rt_int yr2126_IsRel(rt_int a_p2127);
static rt_int yr2132_IsAssocMul(rt_int a_p2133);
static rt_int yr2138_IsNonAssocMul(rt_int a_p2139);
static rt_int yr2144_IsAssocAdd(rt_int a_p2145);
static rt_int yr2150_IsNonAssocAdd(rt_int a_p2151);
static void * yr2156_Bin(rt_int a_p2157, void * a_p2158, void * a_p2159, rt_int a_p2160);
static void yr2165_NeedParens(rt_int a_p2166, rt_int a_p2167);
static void * yr2172_ParseExpr(void);
static void * yr2177_ParseSimple(void);
static void * yr2182_ParseTerm(void);
static rt_int yr2187_IsLiteralAt(rt_int a_p2188);
static void * yr2193_ParseLiteral(void);
static void * yr2198_ParseFactor(void);
static void * yr2203_ParseDesignator(void);
static void yr2208_EXIT_ARGS(void);
static void * yr2213_ParseProgram(void);
static void * yr2218_NewSym(rt_int a_p2219, rt_int a_p2220);
static void yr2225_OpenScope(rt_int a_p2226);
static void yr2231_ReopenScope(void * a_p2232);
static void yr2237_CloseScope(void);
static rt_int yr2242_Visible(void * a_p2243);
static void * yr2248_Find(rt_int a_p2249);
static void * yr2254_FindHere(rt_int a_p2255);
static void * yr2260_Lookup(rt_int a_p2261, rt_int a_p2262);
static rt_int yr2267_AltOf(void * a_p2268, void * a_p2269);
static rt_int yr2274_IsSimple(rt_int a_p2275);
static rt_int yr2280_DeclaredFrom(void * a_p2281, rt_int a_p2282);
static rt_int yr2287_LiteralIn(void * a_p2288, rt_int a_p2289);
static rt_int yr2294_LiteralInGroups(void * a_p2295, rt_int a_p2296);
static rt_int yr2301_Resolved(void * a_p2302);
static rt_int yr2307_Ambiguous(void * a_p2308);
static void * yr2313_FindLit(rt_int a_p2314, void * a_p2315);
static void yr2320_Define(void * a_p2321, rt_int a_p2322);
static rt_int yr2327_Path(rt_int a_p2328, rt_int a_p2329);
static rt_int yr2334_FramePtr(rt_int a_p2335);
static void yr2340_DeclStorage(rt_int a_p2341, rt_int a_p2342);
static rt_int yr2347_SymPath(void * a_p2348);
static void * yr2353_Real(void * a_p2354);
static void * yr2359_NewRep(rt_int a_p2360, rt_int a_p2361);
static void * yr2366_CopyRep(void * a_p2367);
static rt_int yr2372_IsDiscrete(void * a_p2373);
static rt_int yr2378_IsNumeric(void * a_p2379);
static rt_int yr2384_IsArrayLike(void * a_p2385);
static rt_int yr2390_IsString(void * a_p2391);
static rt_int yr2396_Deep(void * a_p2397);
static rt_int yr2402_Holds(void * a_p2403, rt_int a_p2404);
static rt_int yr2409_HoldsSignal(void * a_p2410);
static rt_int yr2415_NonAssignable(void * a_p2416);
static rt_int yr2421_CType(void * a_p2422);
static rt_int yr2427_DescOf(void * a_p2428);
static void yr2433_NewDesc(void * a_p2434);
static rt_int yr2439_SameType(void * a_p2440, void * a_p2441);
static void yr2446_TypeClash(rt_int a_p2447, void * a_p2448, void * a_p2449);
static void yr2454_CheckType(rt_int a_p2455, void * a_p2456, void * a_p2457);
static void yr2462_CheckRepresented(void * a_p2463, rt_int a_p2464);
static rt_int yr2469_SigText(void * a_p2470);
static rt_int yr2475_RepSig(void * a_p2476);
static rt_int yr2481_Identical(void * a_p2482, void * a_p2483);
static rt_int yr2488_IsLiteralNode(void * a_p2489);
static void yr2494_StoreBounds(void * a_p2495, yarr a_p2497);
static rt_int yr2502_LoText(void * a_p2503);
static rt_int yr2508_HiText(void * a_p2509);
static void * yr2514_AdoptLiteral(void * a_p2515, void * a_p2516, void * a_p2517);
static rt_int yr2522_HasQualifier(void * a_p2523);
static rt_int yr2528_Gcd(rt_int a_p2529, rt_int a_p2530);
static rt_int yr2535_MulChk(rt_int a_p2536, rt_int a_p2537, rt_int a_p2538);
static rt_int yr2543_PowChk(rt_int a_p2544, rt_int a_p2545, rt_int a_p2546);
static void yr2551_ScaleRatio(void * a_p2552, void * a_p2553, rt_int * a_p2554, rt_int * a_p2555, rt_int * a_p2556);
static rt_int yr2561_Factor(rt_int a_p2562, rt_int a_p2563);
static void yr2568_SetScale(void * a_p2569, rt_int a_p2570, rt_int a_p2571);
static void yr2576_Qualify(void * a_p2577, void * a_p2578);
static void yr2583_DefineLits(void * a_p2584);
static void yr2589_SetRange(void * a_p2590, rt_int a_p2591, rt_int a_p2592);
static rt_int yr2597_NewTid(rt_int a_p2598);
static void * yr2603_MakeRep(void * a_p2604, rt_int a_p2605, rt_int a_p2606);
static rt_int yr2611_Conforms(void * a_p2612, void * a_p2613);
static void * yr2618_MakeRep1(void * a_p2619, rt_int a_p2620, rt_int a_p2621);
static void yr2626_ResolvePending(rt_int a_p2627, void * a_p2628);
static void yr2633_CheckPending(void);
static void yr2638_BuildArrayDesc(void * a_p2639);
static void yr2644_AddField(void * a_p2645, void * * a_p2646, rt_int a_p2647, void * a_p2648, rt_int a_p2649, rt_int a_p2650, void * a_p2651, rt_int a_p2652);
static void yr2657_AddFields(void * a_p2658, void * * a_p2659, void * a_p2660, rt_int a_p2661, void * a_p2662, rt_int a_p2663);
static void yr2668_MakeRecord(void * a_p2669, void * a_p2670, rt_int a_p2671);
static void * yr2676_FindField(void * a_p2677, rt_int a_p2678);
static rt_int yr2683_BitsFor(rt_int a_p2684);
static rt_int yr2689_RoundUp(rt_int a_p2690, rt_int a_p2691);
static rt_int yr2696_Bits(void * a_p2697, rt_int a_p2698);
static rt_int yr2703_RecordBits(void * a_p2704, rt_int a_p2705, rt_int a_p2706);
static rt_int yr2711_FirstOfVariant(void * a_p2712, void * a_p2713);
static void * yr2718_ApplyStorage(void * a_p2719, void * a_p2720);
static rt_int yr2725_AtAddress(void * a_p2726);
static rt_int yr2731_StoreAt(rt_int a_p2732, rt_int a_p2733);
static rt_int yr2738_ExtentCode(rt_int a_p2739, void * a_p2740);
static rt_int yr2745_SpaceArg(void * a_p2746, rt_int a_p2747, void * a_p2748);
static rt_int yr2753_PackedComponent(void * a_p2754);
static rt_int yr2759_CharOrd(void * a_p2760, rt_int a_p2761);
static void * yr2766_AlphabetFor(void * a_p2767, void * a_p2768);
static rt_int yr2773_CharValue(void * a_p2774, rt_int a_p2775, rt_int a_p2776);
static rt_int yr2781_StringCodes(void * a_p2782, rt_int a_p2783, rt_int * a_p2784, rt_int a_p2785);
static void yr2790_Manifest(void * a_p2791, rt_int * a_p2792, rt_int * a_p2793);
static void yr2798_ManifestStd(void * a_p2799, rt_int * a_p2800, rt_int * a_p2801);
static rt_int yr2806_NeedsConv(void * a_p2807, void * a_p2808);
static rt_int yr2813_ConvertRecord(rt_int a_p2814, void * a_p2815, void * a_p2816);
static rt_int yr2821_ConvertArray(rt_int a_p2822, void * a_p2823, void * a_p2824);
static rt_int yr2829_RescaleCode(rt_int a_p2830, void * a_p2831, void * a_p2832);
static void yr2837_CommonScale(rt_int * a_p2838, void * a_p2839, rt_int * a_p2840, void * a_p2841, void * a_p2842, rt_int a_p2843);
static void yr2848_FixLiteral(void * a_p2849, rt_int * a_p2850, void * * a_p2851);
static void yr2856_ManifestFix(void * a_p2857, rt_int * a_p2858, rt_int * a_p2859, rt_int * a_p2860);
static rt_int yr2865_FloatChk(rt_int a_p2866);
static rt_int yr2871_Convert(rt_int a_p2872, void * a_p2873, void * a_p2874);
static rt_int yr2879_StoreText(rt_int a_p2880, void * a_p2881, rt_int a_p2882, void * a_p2883, rt_int a_p2884);
static void yr2889_Store(rt_int a_p2890, void * a_p2891, rt_int a_p2892, void * a_p2893, rt_int a_p2894);
static rt_int yr2899_IsVariable(void * a_p2900);
static void yr2905_CheckPure(void * a_p2906);
static void yr2911_LValue(void * a_p2912, rt_int * a_p2913, void * * a_p2914);
static rt_int yr2919_Paren(rt_int a_p2920);
static void * yr2925_Lit(void * a_p2926, rt_int a_p2927);
static void * yr2932_Qualifier(void * a_p2933);
static void yr2938_Expr(void * a_p2939, void * a_p2940, rt_int * a_p2941, void * * a_p2942);
static rt_int yr2947_VariantTest(void * a_p2948, void * a_p2949, rt_int a_p2950);
static void yr2955_NameExpr(void * a_p2956, void * a_p2957, rt_int * a_p2958, void * * a_p2959);
static rt_int yr2964_IsMainStore(void * a_p2965);
static void yr2970_IndexExpr(void * a_p2971, rt_int * a_p2972, void * * a_p2973);
static void yr2978_NegExpr(void * a_p2979, rt_int a_p2980, void * a_p2981, rt_int * a_p2982, void * * a_p2983);
static void * yr2988_Unbounded(void * a_p2989);
static rt_int yr2994_Call2(yarr a_p2996, rt_int a_p2997, rt_int a_p2998);
static rt_int yr3003_Infix(rt_int a_p3004, yarr a_p3006, rt_int a_p3007);
static rt_int yr3012_EqCode(rt_int a_p3013, void * a_p3014, rt_int a_p3015, void * a_p3016);
static rt_int yr3021_IsOrdered(void * a_p3022);
static rt_int yr3027_FixToFloat(rt_int a_p3028, void * a_p3029);
static void yr3034_BinExpr(void * a_p3035, void * a_p3036, rt_int * a_p3037, void * * a_p3038);
static rt_int yr3043_Fits(void * a_p3044, void * a_p3045);
static void * yr3050_Choose(void * a_p3051, rt_int a_p3052, rt_int a_p3053);
static rt_int yr3058_HidesStandard(void * a_p3059);
static void yr3064_CompileArgs(void * a_p3065, void * a_p3066, rt_int * a_p3067, rt_int * a_p3068);
static void yr3073_CheckUnresolved(void * a_p3074, void * a_p3075, rt_int a_p3076);
static rt_int yr3081_SameAsFormal(void * a_p3082, void * a_p3083);
static rt_int yr3088_CallCode(void * a_p3089, rt_int a_p3090, rt_int a_p3091, rt_int a_p3092);
static rt_int yr3097_Num(rt_int a_p3098);
static rt_int yr3103_UserOp(void * a_p3104, rt_int a_p3105, void * a_p3106, void * a_p3107, rt_int * a_p3108, void * * a_p3109);
static void yr3114_NoteCall(void * a_p3115, rt_int a_p3116);
static rt_int yr3121_UserAssign(rt_int a_p3122, void * a_p3123, rt_int a_p3124, void * a_p3125, rt_int a_p3126);
static void yr3131_Assign(rt_int a_p3132, void * a_p3133, rt_int a_p3134, void * a_p3135, rt_int a_p3136);
static void yr3141_CallExpr(void * a_p3142, void * a_p3143, rt_int a_p3144, rt_int * a_p3145, void * * a_p3146);
static void yr3151_Denote(void * a_p3152, void * a_p3153, rt_int * a_p3154, void * * a_p3155);
static rt_int yr3160_VariantOf(void * a_p3161, rt_int a_p3162, rt_int a_p3163);
static void yr3168_Emit2(yarr a_p3170, rt_int a_p3171);
static void yr3176_Emit3(yarr a_p3178, rt_int a_p3179, yarr a_p3181);
static void yr3186_PopTo(rt_int a_p3187);
static void yr3192_LeaveBlock(void);
static rt_int yr3197_RaiseCode(rt_int a_p3198);
static void yr3203_BlockStatements(void * a_p3204);
static rt_int yr3209_SameDesig(void * a_p3210, void * a_p3211);
static void yr3216_CheckVariantSelected(void * a_p3217, void * a_p3218, void * a_p3219);
static void yr3224_CheckCaseLabels(void * a_p3225, void * a_p3226);
static rt_int yr3231_Falls(void * a_p3232);
static rt_int yr3237_BlockFalls(void * a_p3238);
static rt_int yr3243_Completes(void * a_p3244);
static rt_int yr3249_Exits(void * a_p3250, rt_int a_p3251);
static void yr3256_Statements(void * a_p3257);
static rt_int yr3262_Cond(void * a_p3263);
static rt_int yr3268_Label(void * a_p3269, void * a_p3270);
static void yr3275_CopyOut(void);
static void yr3280_Statement(void * a_p3281);
static void yr3286_ForStatement(void * a_p3287);
static rt_int yr3292_Join(rt_int a_p3293, rt_int a_p3294, rt_int a_p3295);
static void yr3300_ReturnStatement(void * a_p3301);
static void yr3306_BeginStatement(void * a_p3307);
static void yr3312_PlaceLabel(void * a_p3313);
static void yr3318_GotoStatement(void * a_p3319);
static void yr3324_CheckLabels(void * a_p3325);
static void yr3330_DesigBase(void * a_p3331, void * * a_p3332, rt_int * a_p3333, rt_int * a_p3334);
static void * yr3339_Note(void * a_p3340, rt_int a_p3341, rt_int a_p3342);
static void yr3347_NoteWrite(void * a_p3348);
static void yr3353_NoteFree(void * a_p3354);
static void yr3359_NoteFreeDeref(void * a_p3360, rt_int a_p3361);
static rt_int yr3366_DSteps(void * a_p3367, yarr * a_p3368);
static rt_int yr3373_Overlaps(void * a_p3374, void * a_p3375);
static void yr3380_CheckActuals(void * a_p3381, rt_int a_p3382, rt_int a_p3383);
static void yr3388_CheckEffects(void);
static rt_int yr3393_DynIndex(rt_int a_p3394, rt_int a_p3395, rt_int a_p3396);
static rt_int yr3401_RoutineCName(rt_int a_p3402);
static void * yr3407_FormalRep(void * a_p3408);
static rt_int yr3413_ParamCType(void * a_p3414);
static rt_int yr3419_DeclType(void * a_p3420);
static void yr3425_RoutineHeader(void * a_p3426, rt_int a_p3427);
static void * yr3432_SameSignature(void * a_p3433, void * a_p3434);
static void yr3439_RoutineBody(void * a_p3440);
static void yr3445_DeclareStorage(void * a_p3446, void * a_p3447, rt_int a_p3448);
static void yr3453_DeclareAt(void * a_p3454, void * a_p3455, rt_int a_p3456, rt_int a_p3457);
static void yr3462_InitStorage(void * a_p3463, void * a_p3464, rt_int a_p3465);
static void yr3470_SimpleDecl(void * a_p3471);
static void yr3476_NoteAlphabet(void * a_p3477, void * a_p3478);
static void yr3483_AtLocation(void * a_p3484, void * a_p3485);
static void yr3490_Defer(void * a_p3491, rt_int a_p3492, void * a_p3493, rt_int a_p3494);
static void yr3499_RunDeferred(rt_int a_p3500, rt_int a_p3501);
static void yr3506_ModuleInit(rt_int a_p3507);
static void yr3512_Declarations(void * a_p3513);
static void yr3518_DeclareRoutine(void * a_p3519);
static void * yr3524_Alias(rt_int a_p3525, void * a_p3526);
static void yr3531_AddLits(void * * a_p3532, void * a_p3533, rt_int a_p3534);
static rt_int yr3539_Provides(void * a_p3540, rt_int a_p3541);
static rt_int yr3546_ImportLater(rt_int a_p3547, rt_int a_p3548, void * * a_p3549);
static void * yr3554_OneDecl(void * a_p3555);
static void * yr3560_Lazy(rt_int a_p3561, rt_int a_p3562, void * a_p3563, rt_int a_p3564);
static void yr3569_SetLazy(rt_int a_p3570, void * a_p3571);
static void yr3576_ResolveFrom(void * a_p3577, void * a_p3578);
static void yr3583_ResolveLater(rt_int a_p3584);
static void yr3589_LazyModule(void * a_p3590, void * * a_p3591, rt_int a_p3592);
static void yr3597_ResolveItem(void * a_p3598, void * * a_p3599, rt_int a_p3600);
static void yr3605_DefineAll(void * a_p3606, rt_int a_p3607);
static void * yr3612_ExtendWith(void * a_p3613, void * a_p3614, rt_int a_p3615);
static void yr3620_CompileModule(void * a_p3621);
static void yr3626_DeclareTemplate(void * a_p3627);
static void yr3632_Instantiate(void * a_p3633);
static void yr3638_DeclareProcess(void * a_p3639);
static void yr3644_AwaitProcesses(void);
static void yr3649_Activate(void * a_p3650, void * a_p3651);
static rt_int yr3656_LifeDepth(rt_int a_p3657);
static rt_int yr3662_MonitorPath(void * a_p3663);
static void yr3668_EnterMonitor(void * a_p3669);
static void yr3674_LeaveMonitor(void);
static void yr3679_TerminateStatement(void * a_p3680);
static void yr3685_DeclareSignal(void * a_p3686, rt_int a_p3687);
static void yr3692_DeclareSignalArray(void * a_p3693, rt_int a_p3694);
static void yr3699_DeviceSignal(void * a_p3700, void * a_p3701);
static void * yr3706_Arg(void * a_p3707, rt_int a_p3708);
static void yr3713_NArgs(void * a_p3714, rt_int a_p3715);
static rt_int yr3720_Call1(yarr a_p3722, rt_int a_p3723);
static rt_int yr3728_Addr(rt_int a_p3729);
static void yr3734_StdVar(void * a_p3735, rt_int a_p3736, rt_int * a_p3737, void * * a_p3738);
static void yr3743_NumArg(void * a_p3744, rt_int * a_p3745, void * * a_p3746);
static rt_int yr3751_IntArg(void * a_p3752);
static void yr3757_CodeInsert(void * a_p3758);
static void * yr3763_ManifestScale(void * a_p3764, void * a_p3765);
static void yr3770_StdCall(rt_int a_p3771, void * a_p3772, rt_int a_p3773, rt_int * a_p3774, void * * a_p3775);
static void yr3780_StdRep(yarr a_p3782, void * a_p3783);
static void yr3788_StdOp(yarr a_p3790, rt_int a_p3791);
static void * yr3796_LitList(yarr a_p3798, yarr a_p3799, yarr a_p3800, rt_int a_p3801);
static void * yr3806_Abstract(rt_int a_p3807, yarr a_p3809);
static void yr3814_Predefine(void);
static void yr3819_Translate(void);
static void yr3824_WriteProgram(void);
static rt_int yr8337_At(struct yf3389 *up, rt_int a_p8338, rt_int a_p8339);
static rt_int yr8344_Reaches(struct yf3389 *up, rt_int a_p8345, rt_int a_p8346);
static rt_int yr8351_VName(struct yf3389 *up, rt_int a_p8352);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3830 = INT64_C(0);
{ rt_int hi3835 = 127;
for (rt_int i3834 = 0; i3834 <= hi3835; i3834++) { F.c_3833 = i3834; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_3833)] = F.v3830;
((unsigned char *)(v976).p)[y_ix1(v976, F.v3830)] = F.c_3833;
F.v3830 = rt_range(rt_add(F.v3830, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3834 == hi3835) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv3845 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv3845; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv3850 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv3850; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1020_PoolAdd(unsigned char a_p1021) {
struct yf1022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1021 = a_p1021;
v915 = rt_range(rt_add(v915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v913).p)[y_ix1(v913, v915)] = F.p1021;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1026_SB(void) {
struct yf1027 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v955 = rt_range(rt_add(v955, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v953).p)[y_ix1(v953, v955)] = v941;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1031_SC(unsigned char a_p1032) {
struct yf1033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1032 = a_p1032;
v941 = rt_range(rt_add(v941, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v939).p)[y_ix1(v939, v941)] = F.p1032;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1037_SA(yarr a_p1039) {
struct yf1040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1039 = a_p1039;
F.lo3869 = y_low(F.p1039, INT64_C(1));
F.hi3870 = y_high(F.p1039, INT64_C(1));
{ rt_int hi3874 = F.hi3870;
for (rt_int i3873 = F.lo3869; i3873 <= hi3874; i3873++) { F.c_3872 = i3873; Y_TICK();
yr1031_SC(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_3872)]);
if (i3873 == hi3874) break;
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
F.v3878 = ((rt_int *)(v918).p)[y_ix1(v918, F.p1045)];
while ((F.v3878 < (rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1045)])))) {
Y_TICK();
yr1031_SC(((unsigned char *)(v913).p)[y_ix1(v913, F.v3878)]);
F.v3878 = rt_range(rt_add(F.v3878, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3893, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3893, &F.v3895);
F.v3897 = INT64_C(0);
F.v3900 = F.p1051;
if ((F.v3900 < INT64_C(0))) {
yr1031_SC(45);
F.v3900 = rt_range(rt_neg(F.v3900), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v3897 = rt_range(rt_add(F.v3897, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3895).p)[y_ix1(F.v3895, F.v3897)] = ((unsigned char *)(v976).p)[y_ix1(v976, rt_add((rt_mod(F.v3900, INT64_C(10))), INT64_C(48)))];
F.v3900 = rt_range(rt_div(F.v3900, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3900 == INT64_C(0))) {
goto yl_3904;
}
}
yl_3904: ;
while ((F.v3897 > INT64_C(0))) {
Y_TICK();
yr1031_SC(((unsigned char *)(F.v3895).p)[y_ix1(F.v3895, F.v3897)]);
F.v3897 = rt_range(rt_sub(F.v3897, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3919 = ((rt_int *)(v953).p)[y_ix1(v953, v955)];
v955 = rt_range(rt_sub(v955, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v922 = rt_range(rt_add(v922, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, v922)] = rt_range(rt_add(v915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v920).p)[y_ix1(v920, v922)] = rt_range(rt_sub(v941, F.v3919), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3930 = rt_add(F.v3919, INT64_C(1));
F.hi3931 = v941;
{ rt_int hi3935 = F.hi3931;
for (rt_int i3934 = F.lo3930; i3934 <= hi3935; i3934++) { F.c_3933 = i3934; Y_TICK();
yr1020_PoolAdd(((unsigned char *)(v939).p)[y_ix1(v939, F.c_3933)]);
if (i3934 == hi3935) break;
}}
v941 = F.v3919;
{ rt_int rv3936 = rt_range(v922, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv3936; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
yr1037_SA(F.p1063);
{ rt_int rv3939 = yr1056_SE();
y_use = F.yu; return rv3939; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v3944 = INT64_C(0);
F.lo3954 = F.p1069;
F.hi3955 = rt_sub((rt_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi3959 = F.hi3955;
for (rt_int i3958 = F.lo3954; i3958 <= hi3959; i3958++) { F.c_3957 = i3958; Y_TICK();
F.v3944 = rt_range(rt_mod((rt_add((rt_mul(F.v3944, INT64_C(31))), ((rt_int *)(v965).p)[y_ix1(v965, ((unsigned char *)(v913).p)[y_ix1(v913, F.c_3957)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3958 == hi3959) break;
}}
for (;;) {
Y_TICK();
if ((((rt_int *)(v925).p)[y_ix1(v925, F.v3944)] == INT64_C(0))) {
v922 = rt_range(rt_add(v922, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, v922)] = F.p1069;
((rt_int *)(v920).p)[y_ix1(v920, v922)] = F.p1070;
((rt_int *)(v925).p)[y_ix1(v925, F.v3944)] = rt_range(v922, INT64_C(0), INT64_C(4000000));
{ rt_int rv3969 = rt_range(v922, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv3969; }
}
F.v3947 = ((rt_int *)(v925).p)[y_ix1(v925, F.v3944)];
if ((((rt_int *)(v920).p)[y_ix1(v920, F.v3947)] == F.p1070)) {
F.v3949 = 1;
F.lo3976 = INT64_C(0);
F.hi3977 = rt_sub(F.p1070, INT64_C(1));
{ rt_int hi3981 = F.hi3977;
for (rt_int i3980 = F.lo3976; i3980 <= hi3981; i3980++) { F.c_3979 = i3980; Y_TICK();
if ((!(((unsigned char *)(v913).p)[y_ix1(v913, rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.v3947)], F.c_3979))] == ((unsigned char *)(v913).p)[y_ix1(v913, rt_add(F.p1069, F.c_3979))]))) {
F.v3949 = 0;
}
if (i3980 == hi3981) break;
}}
if (F.v3949) {
{ rt_int rv3985 = rt_range(F.v3947, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv3985; }
}
}
F.v3944 = rt_range(rt_mod((rt_add(F.v3944, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3965: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv3992 = yr1068_Intern(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]);
y_use = F.yu; return rv3992; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv3995 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv3995; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4000 = 1;
y_use = F.yu; return rv4000; }
}
if ((!(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)] == ((rt_int *)(v920).p)[y_ix1(v920, F.p1090)]))) {
{ rt_int rv4002 = 0;
y_use = F.yu; return rv4002; }
}
F.lo4008 = INT64_C(0);
F.hi4009 = rt_sub(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)], INT64_C(1));
{ rt_int hi4013 = F.hi4009;
for (rt_int i4012 = F.lo4008; i4012 <= hi4013; i4012++) { F.c_4011 = i4012; Y_TICK();
if ((!(((unsigned char *)(v913).p)[y_ix1(v913, rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)], F.c_4011))] == ((unsigned char *)(v913).p)[y_ix1(v913, rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)], F.c_4011))]))) {
{ rt_int rv4017 = 0;
y_use = F.yu; return rv4017; }
}
if (i4012 == hi4013) break;
}}
{ rt_int rv4019 = 1;
y_use = F.yu; return rv4019; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4024 = INT64_C(0);
if ((((rt_int *)(v920).p)[y_ix1(v920, F.p1096)] < (rt_add((rt_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4034 = 0;
y_use = F.yu; return rv4034; }
}
F.lo4040 = y_low(F.p1098, INT64_C(1));
F.hi4041 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4045 = F.hi4041;
for (rt_int i4044 = F.lo4040; i4044 <= hi4045; i4044++) { F.c_4043 = i4044; Y_TICK();
if ((!(((unsigned char *)(v913).p)[y_ix1(v913, rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)], F.v4024))] == ((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4043)]))) {
{ rt_int rv4048 = 0;
y_use = F.yu; return rv4048; }
}
F.v4024 = rt_range(rt_add(F.v4024, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4044 == hi4045) break;
}}
{ rt_int rv4052 = 1;
y_use = F.yu; return rv4052; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4059 = ((unsigned char *)(v913).p)[y_ix1(v913, rt_sub((rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)], F.p1105)), INT64_C(1)))];
y_use = F.yu; return rv4059; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
({ F.v4064 = y_new(sizeof(yR135)); });
(*(yR135 *)y_deref(F.v4064)) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
if ((((*F.p1111)).f_head == ((void *)0))) {
((*F.p1111)).f_head = F.v4064;
} else {
((*(yR135 *)y_deref(((*F.p1111)).f_tail))).f_next = F.v4064;
}
((*F.p1111)).f_tail = F.v4064;
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
F.v4078 = ((rt_int *)(v918).p)[y_ix1(v918, F.p1146)];
while ((F.v4078 < (rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1146)])))) {
Y_TICK();
({ unsigned char pv = ((unsigned char *)(v913).p)[y_ix1(v913, F.v4078)]; y_put_value(&v911, &y_d_byte, &pv); });
F.v4078 = rt_range(rt_add(F.v4078, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4085 = (F.p1152).f_head;
while ((!(F.v4085 == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(((*(yR135 *)y_deref(F.v4085))).f_t);
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
F.v4085 = ((*(yR135 *)y_deref(F.v4085))).f_next;
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
F.v4091 = yr1056_SE();
yr1145_WriteTxt(F.v4091);
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
F.v4101 = yr1056_SE();
yr1171_WriteTo(&v994, F.v4101);
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
yr1026_SB();
yr1037_SA(y_str("/* ", 3));
yr1044_ST(F.v4101);
yr1037_SA(y_str(" */", 3));
F.v4101 = yr1056_SE();
yr1110_Put(&v992, F.v4101);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4111 = ((rt_int *)(v918).p)[y_ix1(v918, F.p1173)];
while ((F.v4111 < (rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1173)])))) {
Y_TICK();
({ unsigned char pv = ((unsigned char *)(v913).p)[y_ix1(v913, F.v4111)]; y_put_value(&(*F.p1172), &y_d_byte, &pv); });
F.v4111 = rt_range(rt_add(F.v4111, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v4123 = yr1056_SE();
yr1157_Fail(F.p1187, F.v4123);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = rt_range(rt_add(v958, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4127 = v958;
y_use = F.yu; return rv4127; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4131 = yr1195_NewSerial();
yr1026_SB();
yr1037_SA(F.p1202);
yr1050_SI(F.v4131);
{ rt_int rv4132 = yr1056_SE();
y_use = F.yu; return rv4132; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1840_InitWords(void) {
struct yf1841 F;
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
F.v4139 = yr1056_SE();
v922 = INT64_C(0);
F.v4135 = ((rt_int *)(v918).p)[y_ix1(v918, F.v4139)];
F.lo4156 = ((rt_int *)(v918).p)[y_ix1(v918, F.v4139)];
F.hi4157 = rt_sub((rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.v4139)], ((rt_int *)(v920).p)[y_ix1(v920, F.v4139)])), INT64_C(1));
{ rt_int hi4161 = F.hi4157;
for (rt_int i4160 = F.lo4156; i4160 <= hi4161; i4160++) { F.c_4159 = i4160; Y_TICK();
if ((((unsigned char *)(v913).p)[y_ix1(v913, F.c_4159)] == 32)) {
F.v4137 = yr1068_Intern(F.v4135, rt_range(rt_sub(F.c_4159, F.v4135), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4135 = rt_range(rt_add(F.c_4159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4160 == hi4161) break;
}}
if ((!(v922 == v621))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1845_ReadSource(void) {
struct yf1846 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
y_open(&v909, y_str("INPUT", 5), 0);
v1216 = rt_range(rt_add(v915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4168 = g; });
yr1020_PoolAdd(F.v4168);
}
v1219 = v915;
y_close(&v909);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1850_AddTok(rt_int a_p1851, rt_int a_p1852) {
struct yf1853 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1851 = a_p1851;
F.p1852 = a_p1852;
v1213 = rt_range(rt_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, v1213)] = F.p1851;
((rt_int *)(v1209).p)[y_ix1(v1209, v1213)] = F.p1852;
((rt_int *)(v1211).p)[y_ix1(v1211, v1213)] = v1225;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1857_At(rt_int a_p1858) {
struct yf1859 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1858 = a_p1858;
if ((F.p1858 > v1219)) {
{ unsigned char rv4181 = 0;
y_use = F.yu; return rv4181; }
}
{ unsigned char rv4182 = ((unsigned char *)(v913).p)[y_ix1(v913, F.p1858)];
y_use = F.yu; return rv4182; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1863_EndsOperand(void) {
struct yf1864 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1213 == INT64_C(0))) {
{ rt_int rv4190 = 0;
y_use = F.yu; return rv4190; }
}
F.v4185 = ((rt_int *)(v1207).p)[y_ix1(v1207, v1213)];
F.v4187 = ((rt_int *)(v1209).p)[y_ix1(v1209, v1213)];
if ((((((((F.v4185 == v207)) || ((F.v4185 == v216))) || ((F.v4185 == v219))) || ((F.v4185 == v222))) || ((F.v4185 == v225))) || ((F.v4185 == v228)))) {
{ rt_int rv4192 = 1;
y_use = F.yu; return rv4192; }
}
if ((F.v4185 == v213)) {
{ rt_int rv4193 = ((((F.v4187 == v597)) || ((F.v4187 == v603))) || ((F.v4187 == v618)));
y_use = F.yu; return rv4193; }
}
if ((F.v4185 == v210)) {
{ rt_int rv4194 = (F.v4187 == v387);
y_use = F.yu; return rv4194; }
}
{ rt_int rv4196 = 0;
y_use = F.yu; return rv4196; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1868_DigitVal(unsigned char a_p1869) {
struct yf1870 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1869 = a_p1869;
if ((((F.p1869 >= 48)) && ((F.p1869 <= 57)))) {
{ rt_int rv4203 = rt_range(rt_sub(((rt_int *)(v965).p)[y_ix1(v965, F.p1869)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4203; }
}
if ((((F.p1869 >= 65)) && ((F.p1869 <= 70)))) {
{ rt_int rv4208 = rt_range(rt_sub(((rt_int *)(v965).p)[y_ix1(v965, F.p1869)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4208; }
}
{ rt_int rv4210 = INT64_C(99);
y_use = F.yu; return rv4210; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1874_LexError(yarr a_p1876) {
struct yf1877 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1876 = a_p1876;
yr1178_FailS(v1225, F.p1876);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1881_LexDigits(rt_int a_p1882, rt_int a_p1883) {
struct yf1884 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1882 = a_p1882;
F.p1883 = a_p1883;
while ((yr1014_IsDigit(yr1857_At(v1222)) || ((F.p1883 && ((yr1868_DigitVal(yr1857_At(v1222)) < INT64_C(16))))))) {
Y_TICK();
if ((yr1868_DigitVal(yr1857_At(v1222)) >= F.p1882)) {
yr1026_SB();
yr1031_SC(39);
yr1031_SC(yr1857_At(v1222));
yr1037_SA(y_str("' is not a digit of BASE", 24));
yr1050_SI(F.p1882);
yr1037_SA(y_str(" (IV.B)", 7));
F.v4217 = yr1056_SE();
yr1157_Fail(v1225, F.v4217);
}
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1888_LexNumber(rt_int a_p1889) {
struct yf1890 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1889 = a_p1889;
F.v4227 = INT64_C(10);
F.v4238 = 0;
F.v4241 = 0;
F.v4244 = INT64_C(0);
F.v4247 = INT64_C(0);
F.v4250 = INT64_C(0);
F.v4253 = INT64_C(0);
F.v4256 = INT64_C(0);
if ((!(v1228 == INT64_C(0)))) {
F.v4227 = v1228;
F.v4241 = 1;
}
v1228 = INT64_C(0);
F.v4230 = v1222;
yr1881_LexDigits(F.v4227, F.v4241);
F.v4232 = v1222;
if ((F.v4232 == F.v4230)) {
yr1874_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4234 = v1222;
F.v4236 = v1222;
if ((((yr1857_At(v1222) == 46)) && ((!(yr1857_At(rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4238 = 1;
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4234 = v1222;
yr1881_LexDigits(F.v4227, F.v4241);
F.v4236 = v1222;
}
if ((yr1857_At(v1222) == 80)) {
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4253 = INT64_C(1);
if ((((((yr1857_At(v1222) == 45)) || ((yr1857_At(v1222) == 43)))) && yr1014_IsDigit(yr1857_At(rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1857_At(v1222) == 45)) {
F.v4253 = INT64_C(-1);
}
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4250 = INT64_C(0);
while (yr1014_IsDigit(yr1857_At(v1222))) {
Y_TICK();
if ((F.v4250 > INT64_C(1000))) {
yr1874_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4250 = rt_range(rt_add((rt_mul(F.v4250, INT64_C(10))), yr1868_DigitVal(yr1857_At(v1222))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4250 = rt_range(rt_mul(F.v4250, F.v4253), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4244 = INT64_C(0);
F.v4256 = rt_range(rt_sub(F.v4236, F.v4234), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4297 = F.v4230;
F.hi4298 = rt_sub(F.v4236, INT64_C(1));
{ rt_int hi4302 = F.hi4298;
for (rt_int i4301 = F.lo4297; i4301 <= hi4302; i4301++) { F.c_4300 = i4301; Y_TICK();
if ((((F.c_4300 < F.v4232)) || ((F.c_4300 >= F.v4234)))) {
F.v4247 = yr1868_DigitVal(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4300)]);
if ((F.v4244 > (rt_div((rt_sub(v906, F.v4247)), F.v4227)))) {
yr1874_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4244 = rt_range(rt_add((rt_mul(F.v4244, F.v4227)), F.v4247), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4301 == hi4302) break;
}}
if (F.p1889) {
F.v4244 = rt_range(rt_neg(F.v4244), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1246 >= INT64_C(200000))) {
yr1874_LexError(y_str("too many fixed-point literals", 29));
}
v1246 = rt_range(rt_add(v1246, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1240).p)[y_ix1(v1240, v1246)] = F.v4244;
((rt_int *)(v1242).p)[y_ix1(v1242, v1246)] = F.v4227;
((rt_int *)(v1244).p)[y_ix1(v1244, v1246)] = rt_range(rt_sub(F.v4250, F.v4256), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1850_AddTok(v219, v1246);
y_use = F.yu; return;
}
if (F.v4238) {
if ((!(F.v4227 == INT64_C(10)))) {
yr1874_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1857_At(v1222) == 69)) {
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1857_At(v1222) == 45)) || ((yr1857_At(v1222) == 43)))) {
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1014_IsDigit(yr1857_At(v1222))) {
Y_TICK();
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1026_SB();
if (F.p1889) {
yr1037_SA(y_str("-", 1));
}
F.lo4329 = F.v4230;
F.hi4330 = rt_sub(v1222, INT64_C(1));
{ rt_int hi4334 = F.hi4330;
for (rt_int i4333 = F.lo4329; i4333 <= hi4334; i4333++) { F.c_4332 = i4333; Y_TICK();
yr1031_SC(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4332)]);
if (i4333 == hi4334) break;
}}
F.v4259 = yr1056_SE();
yr1850_AddTok(v222, F.v4259);
y_use = F.yu; return;
}
F.v4244 = INT64_C(0);
F.lo4339 = F.v4230;
F.hi4340 = rt_sub(F.v4232, INT64_C(1));
{ rt_int hi4344 = F.hi4340;
for (rt_int i4343 = F.lo4339; i4343 <= hi4344; i4343++) { F.c_4342 = i4343; Y_TICK();
F.v4247 = yr1868_DigitVal(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4342)]);
if ((F.v4244 > (rt_div((rt_sub(v906, F.v4247)), F.v4227)))) {
yr1874_LexError(y_str("integer literal too large", 25));
}
F.v4244 = rt_range(rt_add((rt_mul(F.v4244, F.v4227)), F.v4247), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4343 == hi4344) break;
}}
if (F.p1889) {
F.v4244 = rt_range(rt_neg(F.v4244), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1850_AddTok(v216, F.v4244);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1894_LexString(void) {
struct yf1895 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1026_SB();
for (;;) {
Y_TICK();
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1857_At(v1222) == 34))) {
Y_TICK();
if ((((yr1857_At(v1222) == 10)) || ((v1222 > v1219)))) {
v927 = 0;
yr1874_LexError(y_str("a string must close on its line", 31));
}
yr1031_SC(yr1857_At(v1222));
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4355 = v1222;
F.v4357 = INT64_C(0);
F.v4359 = 1;
while (F.v4359) {
Y_TICK();
if (((((yr1857_At(F.v4355) == 32)) || ((yr1857_At(F.v4355) == 9))) || ((yr1857_At(F.v4355) == 13)))) {
F.v4355 = rt_range(rt_add(F.v4355, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1857_At(F.v4355) == 10)) {
F.v4357 = rt_range(rt_add(F.v4357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4355 = rt_range(rt_add(F.v4355, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4359 = 0;
}
}
if ((!(yr1857_At(F.v4355) == 34))) {
goto yl_4360;
}
v1225 = rt_range(rt_add(v1225, F.v4357), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = F.v4355;
}
yl_4360: ;
F.v4353 = yr1056_SE();
yr1850_AddTok(v228, F.v4353);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1899_Lex(void) {
struct yf1900 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v1222 = v1216;
while ((v1222 <= v1219)) {
Y_TICK();
F.v4388 = ((unsigned char *)(v913).p)[y_ix1(v913, v1222)];
if ((F.v4388 == 10)) {
v1225 = rt_range(rt_add(v1225, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4388 == 32)) || ((F.v4388 == 9))) || ((F.v4388 == 13))) || ((F.v4388 == 12)))) {
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4388 == 40)) && ((yr1857_At(rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = rt_range(rt_add(v1222, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1857_At(v1222) == 42)) && ((yr1857_At(rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1857_At(v1222) == 10)) || ((v1222 > v1219)))) {
yr1874_LexError(y_str("a comment must close on its line", 32));
}
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = rt_range(rt_add(v1222, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1014_IsDigit(F.v4388) || ((((v1228 == INT64_C(16))) && ((yr1868_DigitVal(F.v4388) < INT64_C(16))))))) {
yr1888_LexNumber(0);
} else if (((((((F.v4388 == 45)) || ((F.v4388 == 43)))) && (!yr1863_EndsOperand())) && ((yr1014_IsDigit(yr1857_At(rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1228 == INT64_C(16))) && ((yr1868_DigitVal(yr1857_At(rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1888_LexNumber((F.v4388 == 45));
} else if ((!(v1228 == INT64_C(0)))) {
yr1874_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1008_IsLetter(F.v4388)) {
F.v4390 = v1222;
while ((yr1008_IsLetter(yr1857_At(v1222)) || yr1014_IsDigit(yr1857_At(v1222)))) {
Y_TICK();
v1222 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4398 = yr1068_Intern(F.v4390, rt_range(rt_sub(v1222, F.v4390), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4398 == v252)) {
v1228 = INT64_C(2);
} else if ((F.v4398 == v255)) {
v1228 = INT64_C(8);
} else if ((F.v4398 == v258)) {
v1228 = INT64_C(10);
} else if ((F.v4398 == v261)) {
v1228 = INT64_C(16);
} else if ((F.v4398 <= v492)) {
yr1850_AddTok(v210, F.v4398);
} else {
yr1850_AddTok(v207, F.v4398);
}
} else if ((F.v4388 == 39)) {
F.v4390 = rt_range(rt_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4392 = F.v4390;
while ((!(yr1857_At(F.v4392) == 39))) {
Y_TICK();
if (((((yr1857_At(F.v4392) == 10)) || ((yr1857_At(F.v4392) == 34))) || ((F.v4392 > v1219)))) {
yr1874_LexError(y_str("bad character literal", 21));
}
F.v4392 = rt_range(rt_add(F.v4392, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4392 == F.v4390)) {
yr1874_LexError(y_str("empty character literal", 23));
}
F.v4398 = yr1068_Intern(F.v4390, rt_range(rt_sub(F.v4392, F.v4390), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1850_AddTok(v225, F.v4398);
v1222 = rt_range(rt_add(F.v4392, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4388 == 34)) {
yr1894_LexString();
} else {
F.v4394 = INT64_C(0);
F.v4392 = rt_range(rt_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4394 == INT64_C(0))) && ((F.v4392 <= v621)))) {
Y_TICK();
F.v4396 = ((rt_int *)(v920).p)[y_ix1(v920, F.v4392)];
F.v4402 = 1;
F.lo4477 = INT64_C(0);
F.hi4478 = rt_sub(F.v4396, INT64_C(1));
{ rt_int hi4482 = F.hi4478;
for (rt_int i4481 = F.lo4477; i4481 <= hi4482; i4481++) { F.c_4480 = i4481; Y_TICK();
if ((!(yr1857_At(rt_range(rt_add(v1222, F.c_4480), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v913).p)[y_ix1(v913, rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.v4392)], F.c_4480))]))) {
F.v4402 = 0;
}
if (i4481 == hi4482) break;
}}
if (F.v4402) {
F.v4394 = F.v4392;
}
F.v4392 = rt_range(rt_add(F.v4392, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4394 == INT64_C(0))) {
yr1874_LexError(y_str("a character that is not in the language", 39));
}
yr1850_AddTok(v213, F.v4394);
v1222 = rt_range(rt_add(v1222, ((rt_int *)(v920).p)[y_ix1(v920, F.v4394)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1850_AddTok(v204, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1904_NewNode(rt_int a_p1905, rt_int a_p1906) {
struct yf1907 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1905 = a_p1905;
F.p1906 = a_p1906;
({ F.v4496 = y_new(sizeof(yR105)); });
(*(yR105 *)y_deref(F.v4496)) = ((yR105){ .f_kind = F.p1905, .f_line = F.p1906, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0) });
{ void * rv4501 = F.v4496;
y_use = F.yu; return rv4501; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1911_Link(void * * a_p1912, void * * a_p1913, void * a_p1914) {
struct yf1915 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1912 = a_p1912;
F.p1913 = a_p1913;
F.p1914 = a_p1914;
if (((*F.p1912) == ((void *)0))) {
(*F.p1912) = F.p1914;
} else {
((*(yR105 *)y_deref((*F.p1913)))).f_next = F.p1914;
}
(*F.p1913) = F.p1914;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1919_Count(void * a_p1920) {
struct yf1921 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1920 = a_p1920;
F.v4509 = INT64_C(0);
F.v4512 = F.p1920;
while ((!(F.v4512 == ((void *)0)))) {
Y_TICK();
F.v4509 = rt_range(rt_add(F.v4509, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4512 = ((*(yR105 *)y_deref(F.v4512))).f_next;
}
{ rt_int rv4515 = F.v4509;
y_use = F.yu; return rv4515; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1925_TK(void) {
struct yf1926 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4517 = ((rt_int *)(v1207).p)[y_ix1(v1207, v1249)];
y_use = F.yu; return rv4517; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1930_TV(void) {
struct yf1931 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4519 = ((rt_int *)(v1209).p)[y_ix1(v1209, v1249)];
y_use = F.yu; return rv4519; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1935_TLn(void) {
struct yf1936 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4521 = ((rt_int *)(v1211).p)[y_ix1(v1211, v1249)];
y_use = F.yu; return rv4521; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1940_IsAt(rt_int a_p1941, rt_int a_p1942) {
struct yf1943 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1941 = a_p1941;
F.p1942 = a_p1942;
F.v4526 = ((rt_int *)(v1207).p)[y_ix1(v1207, rt_add(v1249, F.p1941))];
{ rt_int rv4529 = (((((F.v4526 == v210)) || ((F.v4526 == v213)))) && ((((rt_int *)(v1209).p)[y_ix1(v1209, rt_add(v1249, F.p1941))] == F.p1942)));
y_use = F.yu; return rv4529; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1947_Is(rt_int a_p1948) {
struct yf1949 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1948 = a_p1948;
{ rt_int rv4533 = yr1940_IsAt(INT64_C(0), F.p1948);
y_use = F.yu; return rv4533; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1953_IsIdAt(rt_int a_p1954) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1954 = a_p1954;
{ rt_int rv4537 = (((rt_int *)(v1207).p)[y_ix1(v1207, rt_add(v1249, F.p1954))] == v207);
y_use = F.yu; return rv4537; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1959_Skip(void) {
struct yf1960 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(((rt_int *)(v1207).p)[y_ix1(v1207, v1249)] == v204))) {
v1249 = rt_range(rt_add(v1249, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1964_Accept(rt_int a_p1965) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1965 = a_p1965;
if (yr1947_Is(F.p1965)) {
yr1959_Skip();
{ rt_int rv4544 = 1;
y_use = F.yu; return rv4544; }
}
{ rt_int rv4546 = 0;
y_use = F.yu; return rv4546; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1970_TokText(void) {
struct yf1971 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4549 = yr1925_TK();
if ((((((F.v4549 == v207)) || ((F.v4549 == v210))) || ((F.v4549 == v213))) || ((F.v4549 == v225)))) {
{ rt_int rv4550 = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4550; }
}
if ((F.v4549 == v204)) {
{ rt_int rv4552 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv4552; }
}
if ((F.v4549 == v216)) {
yr1026_SB();
yr1050_SI(yr1930_TV());
{ rt_int rv4553 = yr1056_SE();
y_use = F.yu; return rv4553; }
}
{ rt_int rv4555 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv4555; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1975_Expect(rt_int a_p1976) {
struct yf1977 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1976 = a_p1976;
if ((!yr1964_Accept(F.p1976))) {
yr1026_SB();
yr1037_SA(y_str("expected ", 9));
yr1044_ST(rt_range(F.p1976, INT64_C(0), INT64_C(4000000)));
yr1037_SA(y_str(", found ", 8));
yr1044_ST(yr1970_TokText());
F.v4559 = yr1056_SE();
yr1157_Fail(yr1935_TLn(), F.v4559);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1981_Ident(void) {
struct yf1982 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(yr1925_TK() == v207))) {
yr1026_SB();
yr1037_SA(y_str("expected an identifier, found ", 30));
yr1044_ST(yr1970_TokText());
F.v4564 = yr1056_SE();
yr1157_Fail(yr1935_TLn(), F.v4564);
}
F.v4564 = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
yr1959_Skip();
{ rt_int rv4566 = F.v4564;
y_use = F.yu; return rv4566; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1986_CloseName(rt_int a_p1987, rt_int a_p1988) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1987 = a_p1987;
F.p1988 = a_p1988;
if (((((yr1925_TK() == v207)) || ((yr1925_TK() == v210))) || ((yr1925_TK() == v213)))) {
F.v4571 = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4571 == F.p1987)) {
yr1959_Skip();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p1988, F.p1987, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1993_ExtendedId(void) {
struct yf1994 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4575 = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1925_TK() == v207)) {
yr1959_Skip();
{ rt_int rv4576 = F.v4575;
y_use = F.yu; return rv4576; }
}
if ((((yr1925_TK() == v210)) && (((((((((F.v4575 == v390)) || ((F.v4575 == v237))) || ((F.v4575 == v399))) || ((F.v4575 == v276))) || ((F.v4575 == v378))) || ((F.v4575 == v489))) || ((F.v4575 == v360)))))) {
yr1959_Skip();
{ rt_int rv4577 = F.v4575;
y_use = F.yu; return rv4577; }
}
if (((((((((((((yr1925_TK() == v213)) && ((!(F.v4575 == v594)))) && ((!(F.v4575 == v597)))) && ((!(F.v4575 == v600)))) && ((!(F.v4575 == v603)))) && ((!(F.v4575 == v606)))) && ((!(F.v4575 == v609)))) && ((!(F.v4575 == v612)))) && ((!(F.v4575 == v615)))) && ((!(F.v4575 == v537)))) && ((!(F.v4575 == v534))))) {
yr1959_Skip();
{ rt_int rv4578 = F.v4575;
y_use = F.yu; return rv4578; }
}
yr1178_FailS(yr1935_TLn(), y_str("expected a name", 15));
{ rt_int rv4581 = INT64_C(0);
y_use = F.yu; return rv4581; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1998_IsLabel(rt_int a_p1999) {
struct yf2000 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1999 = a_p1999;
F.v4585 = v1252;
while ((!(F.v4585 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v4585))).f_name == F.p1999)) {
{ rt_int rv4587 = 1;
y_use = F.yu; return rv4587; }
}
F.v4585 = ((*(yR105 *)y_deref(F.v4585))).f_next;
}
{ rt_int rv4589 = 0;
y_use = F.yu; return rv4589; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2004_ImportItem(void) {
struct yf2005 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4592 = yr1904_NewNode(v627, yr1935_TLn());
((*(yR105 *)y_deref(F.v4592))).f_name = yr1993_ExtendedId();
if ((yr1953_IsIdAt(INT64_C(0)) && ((yr1930_TV() == v1254)))) {
yr1959_Skip();
((*(yR105 *)y_deref(F.v4592))).f_text = yr1981_Ident();
}
if (yr1964_Accept(v243)) {
((*(yR105 *)y_deref(F.v4592))).f_ival = yr1993_ExtendedId();
}
{ void * rv4594 = F.v4592;
y_use = F.yu; return rv4594; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2009_ParseModule(void) {
struct yf2010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4597 = yr1904_NewNode(v624, yr1935_TLn());
F.v4599 = ((void *)0);
F.v4601 = ((void *)0);
F.v4603 = ((void *)0);
if (yr1964_Accept(v384)) {
((*(yR105 *)y_deref(F.v4597))).f_flag = INT64_C(1);
} else {
yr1975_Expect(v381);
}
((*(yR105 *)y_deref(F.v4597))).f_name = yr1981_Ident();
while (yr1964_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v4599 = yr2004_ImportItem();
yr1911_Link(&((*(yR105 *)y_deref(F.v4597))).f_a, &F.v4601, F.v4599);
if ((!yr1964_Accept(v606))) {
goto yl_4607;
}
}
yl_4607: ;
yr1975_Expect(v609);
}
while (yr1964_Accept(v336)) {
Y_TICK();
F.v4605 = INT64_C(0);
if ((((yr1947_Is(v396) || yr1947_Is(v474)) || yr1947_Is(v429)) || yr1947_Is(v483))) {
F.v4605 = yr1930_TV();
yr1959_Skip();
}
for (;;) {
Y_TICK();
F.v4599 = yr2004_ImportItem();
((*(yR105 *)y_deref(F.v4599))).f_flag = F.v4605;
yr1911_Link(&((*(yR105 *)y_deref(F.v4597))).f_b, &F.v4603, F.v4599);
if ((!yr1964_Accept(v606))) {
goto yl_4609;
}
}
yl_4609: ;
yr1975_Expect(v609);
}
((*(yR105 *)y_deref(F.v4597))).f_c = yr2019_ParseBlock();
if ((((*(yR105 *)y_deref(F.v4597))).f_flag == INT64_C(1))) {
yr1975_Expect(v309);
} else {
yr1975_Expect(v306);
}
yr1986_CloseName(((*(yR105 *)y_deref(F.v4597))).f_name, ((*(yR105 *)y_deref(F.v4597))).f_line);
{ void * rv4611 = F.v4597;
y_use = F.yu; return rv4611; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2014_IsDeclWord(void) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(yr1925_TK() == v210))) {
{ rt_int rv4616 = 0;
y_use = F.yu; return rv4616; }
}
F.v4614 = yr1930_TV();
{ rt_int rv4617 = (((((((((((((F.v4614 == v270)) || ((F.v4614 == v483))) || ((F.v4614 == v372))) || ((F.v4614 == v477))) || ((F.v4614 == v438))) || ((F.v4614 == v348))) || ((F.v4614 == v420))) || ((F.v4614 == v381))) || ((F.v4614 == v384))) || ((F.v4614 == v465))) || ((F.v4614 == v366))) || ((F.v4614 == v423)));
y_use = F.yu; return rv4617; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2019_ParseBlock(void) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4620 = yr1904_NewNode(v630, yr1935_TLn());
F.v4622 = ((void *)0);
F.v4624 = v1252;
while (yr2014_IsDeclWord()) {
Y_TICK();
yr2046_ParseDeclGroup(&((*(yR105 *)y_deref(F.v4620))).f_a, &F.v4622);
while (yr1964_Accept(v609)) {
Y_TICK();
}
}
if (yr1947_Is(v330)) {
((*(yR105 *)y_deref(F.v4620))).f_b = yr2024_ParseHandler();
F.v4626 = ((*(yR105 *)y_deref(F.v4620))).f_b;
if (yr1964_Accept(v609)) {
}
}
((*(yR105 *)y_deref(F.v4620))).f_c = yr2110_ParseStatements(1);
v1252 = F.v4624;
{ void * rv4628 = F.v4620;
y_use = F.yu; return rv4628; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2024_ParseHandler(void) {
struct yf2025 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4631 = yr1904_NewNode(v633, yr1935_TLn());
F.v4633 = ((void *)0);
F.v4635 = ((void *)0);
F.v4637 = ((void *)0);
F.v4639 = ((void *)0);
yr1975_Expect(v330);
while (yr1964_Accept(v267)) {
Y_TICK();
F.v4633 = yr1904_NewNode(v636, yr1935_TLn());
F.v4639 = ((void *)0);
for (;;) {
Y_TICK();
F.v4637 = yr1904_NewNode(v669, yr1935_TLn());
((*(yR105 *)y_deref(F.v4637))).f_name = yr1981_Ident();
yr1911_Link(&((*(yR105 *)y_deref(F.v4633))).f_a, &F.v4639, F.v4637);
if ((!yr1964_Accept(v606))) {
goto yl_4640;
}
}
yl_4640: ;
yr1975_Expect(v534);
((*(yR105 *)y_deref(F.v4633))).f_b = yr2110_ParseStatements(0);
yr1911_Link(&((*(yR105 *)y_deref(F.v4631))).f_a, &F.v4635, F.v4633);
}
if (yr1964_Accept(v282)) {
((*(yR105 *)y_deref(F.v4631))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4631))).f_b = yr2110_ParseStatements(0);
}
yr1975_Expect(v291);
{ void * rv4644 = F.v4631;
y_use = F.yu; return rv4644; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2029_ParseNames(void) {
struct yf2030 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4647 = ((void *)0);
F.v4649 = ((void *)0);
F.v4651 = ((void *)0);
for (;;) {
Y_TICK();
F.v4651 = yr1904_NewNode(v669, yr1935_TLn());
((*(yR105 *)y_deref(F.v4651))).f_name = yr1981_Ident();
if (yr1964_Accept(v249)) {
((*(yR105 *)y_deref(F.v4651))).f_a = yr2172_ParseExpr();
}
yr1911_Link(&F.v4647, &F.v4649, F.v4651);
if ((!yr1964_Accept(v606))) {
goto yl_4652;
}
}
yl_4652: ;
{ void * rv4653 = F.v4647;
y_use = F.yu; return rv4653; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2034_SimpleEntry(rt_int a_p2035) {
struct yf2036 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2035 = a_p2035;
if ((F.p2035 == v270)) {
F.v4657 = yr1904_NewNode(v639, yr1935_TLn());
((*(yR105 *)y_deref(F.v4657))).f_a = yr2029_ParseNames();
yr1975_Expect(v612);
((*(yR105 *)y_deref(F.v4657))).f_b = yr2075_ParseRep();
yr1975_Expect(v585);
((*(yR105 *)y_deref(F.v4657))).f_c = yr2172_ParseExpr();
} else if ((F.p2035 == v483)) {
F.v4657 = yr1904_NewNode(v642, yr1935_TLn());
((*(yR105 *)y_deref(F.v4657))).f_a = yr2029_ParseNames();
yr1975_Expect(v612);
((*(yR105 *)y_deref(F.v4657))).f_b = yr2075_ParseRep();
if (yr1964_Accept(v531)) {
((*(yR105 *)y_deref(F.v4657))).f_c = yr2172_ParseExpr();
}
} else if ((F.p2035 == v477)) {
F.v4657 = yr1904_NewNode(v648, yr1935_TLn());
((*(yR105 *)y_deref(F.v4657))).f_name = yr1981_Ident();
yr1975_Expect(v585);
((*(yR105 *)y_deref(F.v4657))).f_b = yr2095_ParseConcrete1();
} else {
F.v4657 = yr1904_NewNode(v651, yr1935_TLn());
((*(yR105 *)y_deref(F.v4657))).f_name = yr1981_Ident();
yr1975_Expect(v585);
((*(yR105 *)y_deref(F.v4657))).f_b = yr2075_ParseRep();
}
{ void * rv4658 = F.v4657;
y_use = F.yu; return rv4658; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2040_Continues(rt_int a_p2041) {
struct yf2042 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2041 = a_p2041;
if ((!((yr1947_Is(v609) && yr1953_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4663 = 0;
y_use = F.yu; return rv4663; }
}
if (yr1998_IsLabel(rt_range(((rt_int *)(v1209).p)[y_ix1(v1209, rt_add(v1249, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4667 = 0;
y_use = F.yu; return rv4667; }
}
if ((((F.p2041 == v270)) || ((F.p2041 == v483)))) {
{ rt_int rv4671 = ((yr1940_IsAt(INT64_C(2), v606) || yr1940_IsAt(INT64_C(2), v612)) || yr1940_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv4671; }
}
{ rt_int rv4673 = yr1940_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv4673; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2046_ParseDeclGroup(void * * a_p2047, void * * a_p2048) {
struct yf2049 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2047 = a_p2047;
F.p2048 = a_p2048;
F.v4678 = yr1930_TV();
if ((((((F.v4678 == v270)) || ((F.v4678 == v483))) || ((F.v4678 == v477))) || ((F.v4678 == v438)))) {
yr1959_Skip();
yr1911_Link(&(*F.p2047), &(*F.p2048), yr2034_SimpleEntry(F.v4678));
while (yr2040_Continues(F.v4678)) {
Y_TICK();
yr1959_Skip();
yr1911_Link(&(*F.p2047), &(*F.p2048), yr2034_SimpleEntry(F.v4678));
}
y_use = F.yu; return;
}
if ((F.v4678 == v372)) {
F.v4680 = yr1904_NewNode(v645, yr1935_TLn());
yr1959_Skip();
F.v4684 = ((void *)0);
for (;;) {
Y_TICK();
F.v4682 = yr1904_NewNode(v669, yr1935_TLn());
((*(yR105 *)y_deref(F.v4682))).f_name = yr1981_Ident();
yr1911_Link(&((*(yR105 *)y_deref(F.v4680))).f_a, &F.v4684, F.v4682);
if ((!yr1964_Accept(v606))) {
goto yl_4685;
}
}
yl_4685: ;
F.v4682 = ((*(yR105 *)y_deref(F.v4680))).f_a;
while ((!(F.v4682 == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(F.v4680))).f_b = yr1904_NewNode(v669, ((*(yR105 *)y_deref(F.v4682))).f_line);
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v4680))).f_b))).f_name = ((*(yR105 *)y_deref(F.v4682))).f_name;
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v4680))).f_b))).f_next = v1252;
v1252 = ((*(yR105 *)y_deref(F.v4680))).f_b;
F.v4682 = ((*(yR105 *)y_deref(F.v4682))).f_next;
}
((*(yR105 *)y_deref(F.v4680))).f_b = ((void *)0);
yr1911_Link(&(*F.p2047), &(*F.p2048), F.v4680);
y_use = F.yu; return;
}
yr1911_Link(&(*F.p2047), &(*F.p2048), yr2053_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2053_ParseDecl(void) {
struct yf2054 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4694 = yr1930_TV();
F.v4696 = yr1935_TLn();
if ((((F.v4694 == v348)) || ((F.v4694 == v420)))) {
F.v4688 = yr1904_NewNode(v654, F.v4696);
yr1959_Skip();
if ((F.v4694 == v348)) {
((*(yR105 *)y_deref(F.v4688))).f_flag = INT64_C(1);
}
if ((yr1947_Is(v339) || yr1947_Is(v435))) {
((*(yR105 *)y_deref(F.v4688))).f_ival = yr1930_TV();
yr1959_Skip();
}
((*(yR105 *)y_deref(F.v4688))).f_name = yr1993_ExtendedId();
yr2058_ParseFormals(F.v4688);
if (yr1964_Accept(v363)) {
((*(yR105 *)y_deref(F.v4688))).f_e = yr1904_NewNode(v669, F.v4696);
}
((*(yR105 *)y_deref(F.v4688))).f_c = yr2019_ParseBlock();
if ((F.v4694 == v348)) {
yr1975_Expect(v297);
} else {
yr1975_Expect(v312);
}
yr1986_CloseName(((*(yR105 *)y_deref(F.v4688))).f_name, F.v4696);
{ void * rv4700 = F.v4688;
y_use = F.yu; return rv4700; }
}
if ((((F.v4694 == v381)) || ((F.v4694 == v384)))) {
{ void * rv4701 = yr2009_ParseModule();
y_use = F.yu; return rv4701; }
}
if ((F.v4694 == v465)) {
F.v4688 = yr1904_NewNode(v660, F.v4696);
yr1959_Skip();
((*(yR105 *)y_deref(F.v4688))).f_name = yr1981_Ident();
yr1975_Expect(v594);
F.v4692 = ((void *)0);
for (;;) {
Y_TICK();
F.v4690 = yr1904_NewNode(v669, yr1935_TLn());
((*(yR105 *)y_deref(F.v4690))).f_name = yr1981_Ident();
yr1911_Link(&((*(yR105 *)y_deref(F.v4688))).f_a, &F.v4692, F.v4690);
if ((!yr1964_Accept(v606))) {
goto yl_4702;
}
}
yl_4702: ;
yr1975_Expect(v597);
F.v4698 = v1249;
((*(yR105 *)y_deref(F.v4688))).f_b = yr2009_ParseModule();
((*(yR105 *)y_deref(F.v4688))).f_ival = F.v4698;
((*(yR105 *)y_deref(F.v4688))).f_flag = v1249;
yr1975_Expect(v324);
yr1986_CloseName(((*(yR105 *)y_deref(F.v4688))).f_name, F.v4696);
{ void * rv4703 = F.v4688;
y_use = F.yu; return rv4703; }
}
if ((F.v4694 == v366)) {
F.v4688 = yr1904_NewNode(v663, F.v4696);
yr1959_Skip();
((*(yR105 *)y_deref(F.v4688))).f_name = yr1981_Ident();
yr1975_Expect(v594);
F.v4692 = ((void *)0);
for (;;) {
Y_TICK();
F.v4690 = yr1904_NewNode(v669, yr1935_TLn());
if ((yr1925_TK() == v216)) {
((*(yR105 *)y_deref(F.v4690))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4690))).f_ival = yr1930_TV();
yr1959_Skip();
} else {
((*(yR105 *)y_deref(F.v4690))).f_name = yr1993_ExtendedId();
}
yr1911_Link(&((*(yR105 *)y_deref(F.v4688))).f_a, &F.v4692, F.v4690);
if ((!yr1964_Accept(v606))) {
goto yl_4704;
}
}
yl_4704: ;
yr1975_Expect(v597);
{ void * rv4706 = F.v4688;
y_use = F.yu; return rv4706; }
}
if ((F.v4694 == v423)) {
F.v4688 = yr1904_NewNode(v666, F.v4696);
yr1959_Skip();
((*(yR105 *)y_deref(F.v4688))).f_name = yr1981_Ident();
yr2058_ParseFormals(F.v4688);
if ((!(((*(yR105 *)y_deref(F.v4688))).f_b == ((void *)0)))) {
yr1178_FailS(F.v4696, y_str("a process returns no value", 26));
}
if (yr1964_Accept(v417)) {
((*(yR105 *)y_deref(F.v4688))).f_d = yr2172_ParseExpr();
}
if (yr1964_Accept(v369)) {
((*(yR105 *)y_deref(F.v4688))).f_e = yr2172_ParseExpr();
}
if (yr1964_Accept(v459)) {
((*(yR105 *)y_deref(F.v4688))).f_x = yr2172_ParseExpr();
}
((*(yR105 *)y_deref(F.v4688))).f_c = yr2019_ParseBlock();
yr1975_Expect(v315);
yr1986_CloseName(((*(yR105 *)y_deref(F.v4688))).f_name, F.v4696);
{ void * rv4708 = F.v4688;
y_use = F.yu; return rv4708; }
}
yr1178_FailS(F.v4696, y_str("expected a declaration", 22));
{ void * rv4710 = ((void *)0);
y_use = F.yu; return rv4710; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2058_ParseFormals(void * a_p2059) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2059 = a_p2059;
F.v4714 = ((void *)0);
F.v4716 = ((void *)0);
if (yr1964_Accept(v444)) {
((*(yR105 *)y_deref(F.p2059))).f_b = yr2075_ParseRep();
}
yr1975_Expect(v594);
while ((!yr1947_Is(v597))) {
Y_TICK();
if (yr1964_Accept(v270)) {
F.v4718 = v897;
} else if (yr1964_Accept(v405)) {
F.v4718 = v900;
} else if (yr1964_Accept(v483)) {
F.v4718 = v903;
} else {
yr1178_FailS(yr1935_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v4714 = yr1904_NewNode(v657, yr1935_TLn());
((*(yR105 *)y_deref(F.v4714))).f_ival = F.v4718;
((*(yR105 *)y_deref(F.v4714))).f_a = yr2029_ParseNames();
yr1975_Expect(v612);
((*(yR105 *)y_deref(F.v4714))).f_b = yr2064_ParseFormalRep();
yr1911_Link(&((*(yR105 *)y_deref(F.p2059))).f_a, &F.v4716, F.v4714);
if ((!((((yr1947_Is(v609) || yr1947_Is(v606))) && yr1953_IsIdAt(INT64_C(1)))))) {
goto yl_4720;
}
yr1959_Skip();
}
yl_4720: ;
if ((!yr1964_Accept(v609))) {
if ((!yr1964_Accept(v606))) {
yr1975_Expect(v597);
y_use = F.yu; return;
}
}
}
yr1975_Expect(v597);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2064_ParseFormalRep(void) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if (((yr1947_Is(v240) && yr1940_IsAt(INT64_C(1), v594)) && ((yr1940_IsAt(INT64_C(3), v273) || ((yr1953_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1209).p)[y_ix1(v1209, rt_add(v1249, INT64_C(3)))] == v1257)))))))) {
F.v4724 = yr1904_NewNode(v696, yr1935_TLn());
yr1959_Skip();
yr1959_Skip();
((*(yR105 *)y_deref(F.v4724))).f_a = yr2172_ParseExpr();
yr1959_Skip();
yr1975_Expect(v393);
((*(yR105 *)y_deref(F.v4724))).f_b = yr2075_ParseRep();
yr1975_Expect(v597);
{ void * rv4730 = F.v4724;
y_use = F.yu; return rv4730; }
}
if (yr1947_Is(v462)) {
F.v4724 = yr1904_NewNode(v699, yr1935_TLn());
yr1959_Skip();
{ void * rv4731 = F.v4724;
y_use = F.yu; return rv4731; }
}
{ void * rv4732 = yr2075_ParseRep();
y_use = F.yu; return rv4732; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2069_IsStructWord(rt_int a_p2070) {
struct yf2071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2070 = a_p2070;
F.v4736 = ((rt_int *)(v1209).p)[y_ix1(v1209, rt_add(v1249, F.p2070))];
if ((!(((rt_int *)(v1207).p)[y_ix1(v1207, rt_add(v1249, F.p2070))] == v210))) {
{ rt_int rv4740 = 0;
y_use = F.yu; return rv4740; }
}
{ rt_int rv4741 = (((((((((F.v4736 == v480)) || ((F.v4736 == v402))) || ((F.v4736 == v234))) || ((F.v4736 == v240))) || ((F.v4736 == v432))) || ((F.v4736 == v342))) || ((F.v4736 == v411))) || ((F.v4736 == v453)));
y_use = F.yu; return rv4741; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2075_ParseRep(void) {
struct yf2076 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((yr1953_IsIdAt(INT64_C(0)) && ((yr2069_IsStructWord(INT64_C(1)) || ((yr1953_IsIdAt(INT64_C(1)) && yr1940_IsAt(INT64_C(2), v600))))))) {
F.v4744 = yr1981_Ident();
F.v4746 = yr2080_ParseConcrete();
((*(yR105 *)y_deref(F.v4746))).f_text = F.v4744;
{ void * rv4751 = F.v4746;
y_use = F.yu; return rv4751; }
}
{ void * rv4752 = yr2080_ParseConcrete();
y_use = F.yu; return rv4752; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2080_ParseConcrete(void) {
struct yf2081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4755 = yr2095_ParseConcrete1();
if ((yr1947_Is(v408) || yr1947_Is(v231))) {
F.v4757 = yr1904_NewNode(v669, yr1935_TLn());
if (yr1964_Accept(v408)) {
((*(yR105 *)y_deref(F.v4757))).f_flag = INT64_C(1);
if (((((yr1925_TK() == v216)) || ((yr1925_TK() == v207))) || yr1947_Is(v594))) {
((*(yR105 *)y_deref(F.v4757))).f_a = yr2177_ParseSimple();
}
}
if (yr1964_Accept(v231)) {
((*(yR105 *)y_deref(F.v4757))).f_b = yr2177_ParseSimple();
}
((*(yR105 *)y_deref(F.v4755))).f_x = F.v4757;
}
{ void * rv4759 = F.v4755;
y_use = F.yu; return rv4759; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2085_ParseIds(void) {
struct yf2086 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4762 = ((void *)0);
F.v4764 = ((void *)0);
F.v4766 = ((void *)0);
for (;;) {
Y_TICK();
F.v4766 = yr1904_NewNode(v669, yr1935_TLn());
((*(yR105 *)y_deref(F.v4766))).f_name = yr1981_Ident();
yr1911_Link(&F.v4762, &F.v4764, F.v4766);
if ((!yr1964_Accept(v606))) {
goto yl_4767;
}
}
yl_4767: ;
{ void * rv4768 = F.v4762;
y_use = F.yu; return rv4768; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2090_ParseFieldGroups(void) {
struct yf2091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4771 = ((void *)0);
F.v4773 = ((void *)0);
F.v4775 = ((void *)0);
while ((yr1947_Is(v270) || yr1947_Is(v483))) {
Y_TICK();
F.v4777 = yr1930_TV();
yr1959_Skip();
for (;;) {
Y_TICK();
F.v4775 = yr1904_NewNode(v705, yr1935_TLn());
((*(yR105 *)y_deref(F.v4775))).f_ival = F.v4777;
((*(yR105 *)y_deref(F.v4775))).f_a = yr2029_ParseNames();
yr1975_Expect(v612);
((*(yR105 *)y_deref(F.v4775))).f_b = yr2075_ParseRep();
yr1911_Link(&F.v4771, &F.v4773, F.v4775);
if ((!((yr1947_Is(v609) && yr1953_IsIdAt(INT64_C(1)))))) {
goto yl_4778;
}
yr1959_Skip();
}
yl_4778: ;
if ((!yr1964_Accept(v609))) {
{ void * rv4780 = F.v4771;
y_use = F.yu; return rv4780; }
}
}
{ void * rv4781 = F.v4771;
y_use = F.yu; return rv4781; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2095_ParseConcrete1(void) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4798 = yr1935_TLn();
if ((yr1925_TK() == v207)) {
F.v4784 = yr1904_NewNode(v672, F.v4798);
((*(yR105 *)y_deref(F.v4784))).f_name = yr1981_Ident();
((*(yR105 *)y_deref(F.v4784))).f_a = yr2100_ParseQualifier();
{ void * rv4799 = F.v4784;
y_use = F.yu; return rv4799; }
}
if ((!(yr1925_TK() == v210))) {
yr1178_FailS(F.v4798, y_str("expected a representation", 25));
}
F.v4796 = yr1930_TV();
if ((((F.v4796 == v480)) || ((F.v4796 == v402)))) {
F.v4784 = yr1904_NewNode(v675, F.v4798);
if ((F.v4796 == v402)) {
((*(yR105 *)y_deref(F.v4784))).f_flag = INT64_C(1);
}
yr1959_Skip();
yr1975_Expect(v594);
((*(yR105 *)y_deref(F.v4784))).f_a = yr2085_ParseIds();
yr1975_Expect(v597);
((*(yR105 *)y_deref(F.v4784))).f_b = yr2100_ParseQualifier();
{ void * rv4802 = F.v4784;
y_use = F.yu; return rv4802; }
}
if ((F.v4796 == v234)) {
F.v4784 = yr1904_NewNode(v678, F.v4798);
yr1959_Skip();
yr1975_Expect(v594);
F.v4794 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr1925_TK() == v225))) {
yr1178_FailS(yr1935_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4792 = yr1904_NewNode(v768, yr1935_TLn());
((*(yR105 *)y_deref(F.v4792))).f_text = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
yr1959_Skip();
yr1911_Link(&((*(yR105 *)y_deref(F.v4784))).f_a, &F.v4794, F.v4792);
if ((!yr1964_Accept(v606))) {
goto yl_4803;
}
}
yl_4803: ;
yr1975_Expect(v597);
((*(yR105 *)y_deref(F.v4784))).f_b = yr2100_ParseQualifier();
{ void * rv4805 = F.v4784;
y_use = F.yu; return rv4805; }
}
if ((F.v4796 == v240)) {
F.v4784 = yr1904_NewNode(v681, F.v4798);
yr1959_Skip();
yr1975_Expect(v594);
F.v4794 = ((void *)0);
for (;;) {
Y_TICK();
yr1911_Link(&((*(yR105 *)y_deref(F.v4784))).f_a, &F.v4794, yr2075_ParseRep());
if ((!yr1964_Accept(v606))) {
goto yl_4806;
}
}
yl_4806: ;
yr1975_Expect(v393);
((*(yR105 *)y_deref(F.v4784))).f_b = yr2075_ParseRep();
yr1975_Expect(v597);
{ void * rv4807 = F.v4784;
y_use = F.yu; return rv4807; }
}
if ((F.v4796 == v432)) {
F.v4784 = yr1904_NewNode(v684, F.v4798);
yr1959_Skip();
((*(yR105 *)y_deref(F.v4784))).f_a = yr2090_ParseFieldGroups();
if (yr1964_Accept(v450)) {
F.v4786 = yr1904_NewNode(v708, yr1935_TLn());
((*(yR105 *)y_deref(F.v4786))).f_name = yr1981_Ident();
yr1975_Expect(v612);
((*(yR105 *)y_deref(F.v4786))).f_b = yr2075_ParseRep();
F.v4790 = ((void *)0);
while (yr1964_Accept(v267)) {
Y_TICK();
F.v4788 = yr1904_NewNode(v711, yr1935_TLn());
F.v4794 = ((void *)0);
for (;;) {
Y_TICK();
yr1911_Link(&((*(yR105 *)y_deref(F.v4788))).f_a, &F.v4794, yr2172_ParseExpr());
if ((!yr1964_Accept(v606))) {
goto yl_4808;
}
}
yl_4808: ;
yr1975_Expect(v534);
((*(yR105 *)y_deref(F.v4788))).f_b = yr2090_ParseFieldGroups();
while (yr1964_Accept(v609)) {
Y_TICK();
}
yr1911_Link(&((*(yR105 *)y_deref(F.v4786))).f_a, &F.v4790, F.v4788);
}
yr1975_Expect(v321);
if (yr1964_Accept(v609)) {
}
((*(yR105 *)y_deref(F.v4784))).f_b = F.v4786;
}
yr1975_Expect(v318);
{ void * rv4809 = F.v4784;
y_use = F.yu; return rv4809; }
}
if (((((F.v4796 == v342)) || ((F.v4796 == v411))) || ((F.v4796 == v453)))) {
if ((F.v4796 == v342)) {
F.v4784 = yr1904_NewNode(v687, F.v4798);
} else if ((F.v4796 == v411)) {
F.v4784 = yr1904_NewNode(v690, F.v4798);
} else {
F.v4784 = yr1904_NewNode(v693, F.v4798);
}
yr1959_Skip();
yr1975_Expect(v594);
((*(yR105 *)y_deref(F.v4784))).f_a = yr2075_ParseRep();
yr1975_Expect(v597);
{ void * rv4810 = F.v4784;
y_use = F.yu; return rv4810; }
}
yr1178_FailS(F.v4798, y_str("expected a representation", 25));
{ void * rv4812 = ((void *)0);
y_use = F.yu; return rv4812; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2100_ParseQualifier(void) {
struct yf2101 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1947_Is(v600))) {
{ void * rv4816 = ((void *)0);
y_use = F.yu; return rv4816; }
}
F.v4815 = yr1904_NewNode(v702, yr1935_TLn());
yr1959_Skip();
((*(yR105 *)y_deref(F.v4815))).f_a = yr2172_ParseExpr();
yr1975_Expect(v537);
((*(yR105 *)y_deref(F.v4815))).f_b = yr2172_ParseExpr();
yr1975_Expect(v603);
if (yr1964_Accept(v447)) {
((*(yR105 *)y_deref(F.v4815))).f_c = yr2177_ParseSimple();
} else if (yr1964_Accept(v414)) {
((*(yR105 *)y_deref(F.v4815))).f_d = yr2177_ParseSimple();
}
{ void * rv4817 = F.v4815;
y_use = F.yu; return rv4817; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2105_IsStop(void) {
struct yf2106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((yr1925_TK() == v204)) {
{ rt_int rv4822 = 1;
y_use = F.yu; return rv4822; }
}
if ((!(yr1925_TK() == v210))) {
{ rt_int rv4824 = 0;
y_use = F.yu; return rv4824; }
}
F.v4820 = yr1930_TV();
{ rt_int rv4825 = ((((((((((((((((F.v4820 == v285)) || ((F.v4820 == v282))) || ((F.v4820 == v300))) || ((F.v4820 == v267))) || ((F.v4820 == v321))) || ((F.v4820 == v327))) || ((F.v4820 == v294))) || ((F.v4820 == v303))) || ((F.v4820 == v288))) || ((F.v4820 == v291))) || ((F.v4820 == v312))) || ((F.v4820 == v297))) || ((F.v4820 == v315))) || ((F.v4820 == v306))) || ((F.v4820 == v309)));
y_use = F.yu; return rv4825; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2110_ParseStatements(rt_int a_p2111) {
struct yf2112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2111 = a_p2111;
F.v4829 = ((void *)0);
F.v4831 = ((void *)0);
F.v4833 = ((void *)0);
for (;;) {
Y_TICK();
while (yr1964_Accept(v609)) {
Y_TICK();
}
if (yr2105_IsStop()) {
goto yl_4836;
}
F.v4835 = INT64_C(0);
if (((F.p2111 && yr1953_IsIdAt(INT64_C(0))) && yr1940_IsAt(INT64_C(1), v612))) {
F.v4835 = yr1981_Ident();
yr1959_Skip();
}
F.v4833 = yr2116_ParseStatement();
((*(yR105 *)y_deref(F.v4833))).f_text = F.v4835;
yr1911_Link(&F.v4829, &F.v4831, F.v4833);
if ((!yr1947_Is(v609))) {
goto yl_4836;
}
}
yl_4836: ;
{ void * rv4840 = F.v4829;
y_use = F.yu; return rv4840; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2116_ParseStatement(void) {
struct yf2117 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4857 = yr1935_TLn();
if ((yr1925_TK() == v210)) {
F.v4855 = yr1930_TV();
if ((F.v4855 == v246)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v720, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_a = yr2172_ParseExpr();
{ void * rv4858 = F.v4843;
y_use = F.yu; return rv4858; }
}
if ((F.v4855 == v351)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v723, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_name = yr1981_Ident();
{ void * rv4859 = F.v4843;
y_use = F.yu; return rv4859; }
}
if ((F.v4855 == v333)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v726, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_name = yr1981_Ident();
{ void * rv4860 = F.v4843;
y_use = F.yu; return rv4860; }
}
if ((F.v4855 == v441)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v729, F.v4857);
if ((!((yr1947_Is(v609) || yr2105_IsStop())))) {
((*(yR105 *)y_deref(F.v4843))).f_a = yr2172_ParseExpr();
}
{ void * rv4861 = F.v4843;
y_use = F.yu; return rv4861; }
}
if ((F.v4855 == v468)) {
yr1959_Skip();
{ void * rv4862 = yr1904_NewNode(v732, F.v4857);
y_use = F.yu; return rv4862; }
}
if ((F.v4855 == v426)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v735, F.v4857);
if (yr1953_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(F.v4843))).f_name = yr1981_Ident();
}
{ void * rv4864 = F.v4843;
y_use = F.yu; return rv4864; }
}
if ((F.v4855 == v354)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v738, F.v4857);
F.v4847 = ((void *)0);
F.v4845 = yr1904_NewNode(v756, F.v4857);
((*(yR105 *)y_deref(F.v4845))).f_a = yr2172_ParseExpr();
yr1975_Expect(v471);
((*(yR105 *)y_deref(F.v4845))).f_b = yr2110_ParseStatements(0);
yr1911_Link(&((*(yR105 *)y_deref(F.v4843))).f_a, &F.v4847, F.v4845);
while (yr1947_Is(v285)) {
Y_TICK();
F.v4845 = yr1904_NewNode(v756, yr1935_TLn());
yr1959_Skip();
((*(yR105 *)y_deref(F.v4845))).f_a = yr2172_ParseExpr();
yr1975_Expect(v471);
((*(yR105 *)y_deref(F.v4845))).f_b = yr2110_ParseStatements(0);
yr1911_Link(&((*(yR105 *)y_deref(F.v4843))).f_a, &F.v4847, F.v4845);
}
if (yr1964_Accept(v282)) {
((*(yR105 *)y_deref(F.v4843))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4843))).f_b = yr2110_ParseStatements(0);
}
yr1975_Expect(v300);
{ void * rv4869 = F.v4843;
y_use = F.yu; return rv4869; }
}
if ((F.v4855 == v450)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v741, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_a = yr2172_ParseExpr();
F.v4847 = ((void *)0);
while (yr1947_Is(v267)) {
Y_TICK();
F.v4845 = yr1904_NewNode(v756, yr1935_TLn());
yr1959_Skip();
F.v4851 = ((void *)0);
for (;;) {
Y_TICK();
yr1911_Link(&((*(yR105 *)y_deref(F.v4845))).f_a, &F.v4851, yr2172_ParseExpr());
if ((!yr1964_Accept(v606))) {
goto yl_4870;
}
}
yl_4870: ;
yr1975_Expect(v534);
((*(yR105 *)y_deref(F.v4845))).f_b = yr2110_ParseStatements(0);
yr1911_Link(&((*(yR105 *)y_deref(F.v4843))).f_b, &F.v4847, F.v4845);
}
if (yr1964_Accept(v282)) {
((*(yR105 *)y_deref(F.v4843))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4843))).f_c = yr2110_ParseStatements(0);
}
yr1975_Expect(v321);
{ void * rv4874 = F.v4843;
y_use = F.yu; return rv4874; }
}
if ((F.v4855 == v486)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v744, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_a = yr2172_ParseExpr();
yr1975_Expect(v279);
((*(yR105 *)y_deref(F.v4843))).f_b = yr2110_ParseStatements(0);
yr1975_Expect(v327);
{ void * rv4876 = F.v4843;
y_use = F.yu; return rv4876; }
}
if ((F.v4855 == v345)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v747, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_name = yr1981_Ident();
yr1975_Expect(v612);
((*(yR105 *)y_deref(F.v4843))).f_a = yr2075_ParseRep();
yr1975_Expect(v279);
((*(yR105 *)y_deref(F.v4843))).f_b = yr2110_ParseStatements(0);
yr1975_Expect(v294);
{ void * rv4878 = F.v4843;
y_use = F.yu; return rv4878; }
}
if ((F.v4855 == v375)) {
yr1959_Skip();
F.v4843 = yr1904_NewNode(v750, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_name = yr1981_Ident();
((*(yR105 *)y_deref(F.v4843))).f_b = yr2110_ParseStatements(0);
yr1975_Expect(v303);
yr1986_CloseName(((*(yR105 *)y_deref(F.v4843))).f_name, F.v4857);
{ void * rv4880 = F.v4843;
y_use = F.yu; return rv4880; }
}
if ((((F.v4855 == v264)) || ((F.v4855 == v456)))) {
F.v4843 = yr1904_NewNode(v753, F.v4857);
if (yr1964_Accept(v456)) {
((*(yR105 *)y_deref(F.v4843))).f_flag = INT64_C(1);
}
yr1975_Expect(v264);
((*(yR105 *)y_deref(F.v4843))).f_a = yr2019_ParseBlock();
yr1975_Expect(v288);
{ void * rv4882 = F.v4843;
y_use = F.yu; return rv4882; }
}
}
F.v4853 = yr2203_ParseDesignator();
if (yr1964_Accept(v531)) {
F.v4843 = yr1904_NewNode(v714, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_a = F.v4853;
((*(yR105 *)y_deref(F.v4843))).f_b = yr2172_ParseExpr();
{ void * rv4883 = F.v4843;
y_use = F.yu; return rv4883; }
}
if ((!(((*(yR105 *)y_deref(F.v4853))).f_kind == v780))) {
yr1178_FailS(F.v4857, y_str("expected a statement", 20));
}
F.v4843 = yr1904_NewNode(v717, F.v4857);
((*(yR105 *)y_deref(F.v4843))).f_a = F.v4853;
{ void * rv4885 = F.v4843;
y_use = F.yu; return rv4885; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2121_OpAt(void) {
struct yf2122 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr1925_TK() == v213)) || ((yr1925_TK() == v210)))) {
{ rt_int rv4887 = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4887; }
}
{ rt_int rv4889 = INT64_C(0);
y_use = F.yu; return rv4889; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2126_IsRel(rt_int a_p2127) {
struct yf2128 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2127 = a_p2127;
{ rt_int rv4892 = ((((((((((((((((((((F.p2127 == v360)) || ((F.p2127 == v570))) || ((F.p2127 == v585))) || ((F.p2127 == v588))) || ((F.p2127 == v540))) || ((F.p2127 == v591))) || ((F.p2127 == v543))) || ((F.p2127 == v546))) || ((F.p2127 == v501))) || ((F.p2127 == v549))) || ((F.p2127 == v504))) || ((F.p2127 == v552))) || ((F.p2127 == v513))) || ((F.p2127 == v507))) || ((F.p2127 == v495))) || ((F.p2127 == v555))) || ((F.p2127 == v516))) || ((F.p2127 == v510))) || ((F.p2127 == v498)));
y_use = F.yu; return rv4892; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2132_IsAssocMul(rt_int a_p2133) {
struct yf2134 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2133 = a_p2133;
{ rt_int rv4895 = (((F.p2133 == v579)) || ((F.p2133 == v237)));
y_use = F.yu; return rv4895; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2138_IsNonAssocMul(rt_int a_p2139) {
struct yf2140 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2139 = a_p2139;
{ rt_int rv4898 = ((((((((F.p2139 == v582)) || ((F.p2139 == v276))) || ((F.p2139 == v378))) || ((F.p2139 == v558))) || ((F.p2139 == v519))) || ((F.p2139 == v561))) || ((F.p2139 == v522)));
y_use = F.yu; return rv4898; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2144_IsAssocAdd(rt_int a_p2145) {
struct yf2146 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2145 = a_p2145;
{ rt_int rv4901 = (((F.p2145 == v573)) || ((F.p2145 == v399)));
y_use = F.yu; return rv4901; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2150_IsNonAssocAdd(rt_int a_p2151) {
struct yf2152 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2151 = a_p2151;
{ rt_int rv4904 = (((((((F.p2151 == v576)) || ((F.p2151 == v489))) || ((F.p2151 == v564))) || ((F.p2151 == v525))) || ((F.p2151 == v567))) || ((F.p2151 == v528)));
y_use = F.yu; return rv4904; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2156_Bin(rt_int a_p2157, void * a_p2158, void * a_p2159, rt_int a_p2160) {
struct yf2161 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2157 = a_p2157;
F.p2158 = a_p2158;
F.p2159 = a_p2159;
F.p2160 = a_p2160;
F.v4911 = yr1904_NewNode(v798, F.p2160);
((*(yR105 *)y_deref(F.v4911))).f_name = F.p2157;
((*(yR105 *)y_deref(F.v4911))).f_a = F.p2158;
((*(yR105 *)y_deref(F.v4911))).f_b = F.p2159;
{ void * rv4912 = F.v4911;
y_use = F.yu; return rv4912; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2165_NeedParens(rt_int a_p2166, rt_int a_p2167) {
struct yf2168 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2166 = a_p2166;
F.p2167 = a_p2167;
yr1026_SB();
yr1044_ST(F.p2166);
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4917 = yr1056_SE();
yr1157_Fail(F.p2167, F.v4917);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2172_ParseExpr(void) {
struct yf2173 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4925 = yr1935_TLn();
F.v4921 = yr2177_ParseSimple();
F.v4923 = yr2121_OpAt();
if (yr2126_IsRel(F.v4923)) {
yr1959_Skip();
F.v4921 = yr2156_Bin(F.v4923, F.v4921, yr2177_ParseSimple(), F.v4925);
if (yr2126_IsRel(yr2121_OpAt())) {
yr2165_NeedParens(F.v4923, F.v4925);
}
}
{ void * rv4926 = F.v4921;
y_use = F.yu; return rv4926; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2177_ParseSimple(void) {
struct yf2178 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4935 = yr1935_TLn();
if (yr1947_Is(v576)) {
yr1959_Skip();
F.v4931 = yr1904_NewNode(v795, F.v4935);
((*(yR105 *)y_deref(F.v4931))).f_a = yr2182_ParseTerm();
F.v4933 = yr2121_OpAt();
if ((yr2144_IsAssocAdd(F.v4933) || yr2150_IsNonAssocAdd(F.v4933))) {
yr2165_NeedParens(rt_range(v576, INT64_C(0), INT64_C(4000000)), F.v4935);
}
{ void * rv4936 = F.v4931;
y_use = F.yu; return rv4936; }
}
F.v4929 = yr2182_ParseTerm();
F.v4933 = yr2121_OpAt();
if (yr2150_IsNonAssocAdd(F.v4933)) {
yr1959_Skip();
F.v4929 = yr2156_Bin(F.v4933, F.v4929, yr2182_ParseTerm(), F.v4935);
if ((yr2144_IsAssocAdd(yr2121_OpAt()) || yr2150_IsNonAssocAdd(yr2121_OpAt()))) {
yr2165_NeedParens(F.v4933, F.v4935);
}
{ void * rv4937 = F.v4929;
y_use = F.yu; return rv4937; }
}
while (yr2144_IsAssocAdd(F.v4933)) {
Y_TICK();
yr1959_Skip();
F.v4929 = yr2156_Bin(F.v4933, F.v4929, yr2182_ParseTerm(), F.v4935);
if (yr2150_IsNonAssocAdd(yr2121_OpAt())) {
yr2165_NeedParens(yr2121_OpAt(), F.v4935);
}
F.v4933 = yr2121_OpAt();
}
{ void * rv4938 = F.v4929;
y_use = F.yu; return rv4938; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2182_ParseTerm(void) {
struct yf2183 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4945 = yr1935_TLn();
F.v4941 = yr2198_ParseFactor();
F.v4943 = yr2121_OpAt();
if (yr2138_IsNonAssocMul(F.v4943)) {
yr1959_Skip();
F.v4941 = yr2156_Bin(F.v4943, F.v4941, yr2198_ParseFactor(), F.v4945);
if ((yr2132_IsAssocMul(yr2121_OpAt()) || yr2138_IsNonAssocMul(yr2121_OpAt()))) {
yr2165_NeedParens(F.v4943, F.v4945);
}
{ void * rv4946 = F.v4941;
y_use = F.yu; return rv4946; }
}
while (yr2132_IsAssocMul(F.v4943)) {
Y_TICK();
yr1959_Skip();
F.v4941 = yr2156_Bin(F.v4943, F.v4941, yr2198_ParseFactor(), F.v4945);
if (yr2138_IsNonAssocMul(yr2121_OpAt())) {
yr2165_NeedParens(yr2121_OpAt(), F.v4945);
}
F.v4943 = yr2121_OpAt();
}
{ void * rv4947 = F.v4941;
y_use = F.yu; return rv4947; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2187_IsLiteralAt(rt_int a_p2188) {
struct yf2189 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2188 = a_p2188;
F.v4951 = ((rt_int *)(v1207).p)[y_ix1(v1207, rt_add(v1249, F.p2188))];
{ rt_int rv4953 = (((((((F.v4951 == v216)) || ((F.v4951 == v219))) || ((F.v4951 == v222))) || ((F.v4951 == v225))) || ((F.v4951 == v228))) || yr1940_IsAt(F.p2188, v387));
y_use = F.yu; return rv4953; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2193_ParseLiteral(void) {
struct yf2194 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4958 = yr1925_TK();
F.v4960 = yr1935_TLn();
if ((F.v4958 == v216)) {
F.v4956 = yr1904_NewNode(v759, F.v4960);
((*(yR105 *)y_deref(F.v4956))).f_ival = yr1930_TV();
} else if ((F.v4958 == v219)) {
F.v4956 = yr1904_NewNode(v762, F.v4960);
((*(yR105 *)y_deref(F.v4956))).f_ival = yr1930_TV();
} else if ((F.v4958 == v222)) {
F.v4956 = yr1904_NewNode(v765, F.v4960);
((*(yR105 *)y_deref(F.v4956))).f_text = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4958 == v225)) {
F.v4956 = yr1904_NewNode(v768, F.v4960);
((*(yR105 *)y_deref(F.v4956))).f_text = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4958 == v228)) {
F.v4956 = yr1904_NewNode(v771, F.v4960);
((*(yR105 *)y_deref(F.v4956))).f_text = rt_range(yr1930_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4956 = yr1904_NewNode(v774, F.v4960);
}
yr1959_Skip();
{ void * rv4961 = F.v4956;
y_use = F.yu; return rv4961; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2198_ParseFactor(void) {
struct yf2199 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4968 = yr1935_TLn();
if (yr1947_Is(v390)) {
yr1959_Skip();
F.v4964 = yr1904_NewNode(v792, F.v4968);
((*(yR105 *)y_deref(F.v4964))).f_a = yr2198_ParseFactor();
{ void * rv4969 = F.v4964;
y_use = F.yu; return rv4969; }
}
if (yr1947_Is(v594)) {
yr1959_Skip();
F.v4964 = yr1904_NewNode(v801, F.v4968);
((*(yR105 *)y_deref(F.v4964))).f_a = yr2172_ParseExpr();
yr1975_Expect(v597);
{ void * rv4970 = F.v4964;
y_use = F.yu; return rv4970; }
}
if (yr2187_IsLiteralAt(INT64_C(0))) {
{ void * rv4972 = yr2193_ParseLiteral();
y_use = F.yu; return rv4972; }
}
if (yr1953_IsIdAt(INT64_C(0))) {
if ((yr2187_IsLiteralAt(INT64_C(1)) || ((yr1953_IsIdAt(INT64_C(1)) && (!((((((yr1940_IsAt(INT64_C(2), v594) || yr1940_IsAt(INT64_C(2), v600)) || yr1940_IsAt(INT64_C(2), v615)) || yr1940_IsAt(INT64_C(2), v618)) || yr1940_IsAt(INT64_C(2), v531)) || yr1940_IsAt(INT64_C(2), v612)))))))) {
F.v4966 = yr1981_Ident();
if (yr1953_IsIdAt(INT64_C(0))) {
F.v4964 = yr1904_NewNode(v777, F.v4968);
((*(yR105 *)y_deref(F.v4964))).f_name = yr1981_Ident();
} else {
F.v4964 = yr2193_ParseLiteral();
}
((*(yR105 *)y_deref(F.v4964))).f_d = yr1904_NewNode(v669, F.v4968);
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v4964))).f_d))).f_name = F.v4966;
{ void * rv4983 = F.v4964;
y_use = F.yu; return rv4983; }
}
{ void * rv4984 = yr2203_ParseDesignator();
y_use = F.yu; return rv4984; }
}
yr1186_FailN(F.v4968, yr1970_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4986 = ((void *)0);
y_use = F.yu; return rv4986; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2203_ParseDesignator(void) {
struct yf2204 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4995 = yr1935_TLn();
F.v4989 = yr1904_NewNode(v777, F.v4995);
((*(yR105 *)y_deref(F.v4989))).f_name = yr1981_Ident();
if (yr1964_Accept(v594)) {
((*(yR105 *)y_deref(F.v4989))).f_kind = v780;
F.v4993 = ((void *)0);
while ((!yr1947_Is(v597))) {
Y_TICK();
yr1911_Link(&((*(yR105 *)y_deref(F.v4989))).f_a, &F.v4993, yr2172_ParseExpr());
if ((!yr1964_Accept(v606))) {
yr2208_EXIT_ARGS();
}
}
yr1975_Expect(v597);
}
for (;;) {
Y_TICK();
if (yr1964_Accept(v615)) {
F.v4991 = yr1904_NewNode(v783, yr1935_TLn());
((*(yR105 *)y_deref(F.v4991))).f_a = F.v4989;
((*(yR105 *)y_deref(F.v4991))).f_name = yr1981_Ident();
F.v4989 = F.v4991;
} else if (yr1964_Accept(v600)) {
F.v4991 = yr1904_NewNode(v786, yr1935_TLn());
((*(yR105 *)y_deref(F.v4991))).f_a = F.v4989;
F.v4993 = ((void *)0);
for (;;) {
Y_TICK();
yr1911_Link(&((*(yR105 *)y_deref(F.v4991))).f_b, &F.v4993, yr2172_ParseExpr());
if ((!yr1964_Accept(v606))) {
goto yl_4997;
}
}
yl_4997: ;
yr1975_Expect(v603);
F.v4989 = F.v4991;
} else if (yr1964_Accept(v618)) {
F.v4991 = yr1904_NewNode(v789, yr1935_TLn());
((*(yR105 *)y_deref(F.v4991))).f_a = F.v4989;
F.v4989 = F.v4991;
} else {
goto yl_4996;
}
}
yl_4996: ;
{ void * rv4998 = F.v4989;
y_use = F.yu; return rv4998; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2208_EXIT_ARGS(void) {
struct yf2209 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1947_Is(v597))) {
yr1975_Expect(v597);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2213_ParseProgram(void) {
struct yf2214 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5002 = ((void *)0);
F.v5004 = ((void *)0);
while ((!(yr1925_TK() == v204))) {
Y_TICK();
if ((!((yr1947_Is(v381) || yr1947_Is(v384))))) {
yr1178_FailS(yr1935_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1911_Link(&F.v5002, &F.v5004, yr2009_ParseModule());
while (yr1964_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5006 = F.v5002;
y_use = F.yu; return rv5006; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2218_NewSym(rt_int a_p2219, rt_int a_p2220) {
struct yf2221 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2219 = a_p2219;
F.p2220 = a_p2220;
({ F.v5011 = y_new(sizeof(yR125)); });
(*(yR125 *)y_deref(F.v5011)) = ((yR125){ .f_kind = F.p2219, .f_name = F.p2220, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1) });
((*(yR125 *)y_deref(F.v5011))).f_serial = yr1195_NewSerial();
{ void * rv5025 = F.v5011;
y_use = F.yu; return rv5025; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2225_OpenScope(rt_int a_p2226) {
struct yf2227 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2226 = a_p2226;
({ F.v5029 = y_new(sizeof(yR130)); });
(*(yR130 *)y_deref(F.v5029)) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2226, .f_module = ((void *)0), .f_level = v1279, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1273 >= INT64_C(0))) {
((*(yR130 *)y_deref(F.v5029))).f_up = ((void * *)(v1271).p)[y_ix1(v1271, v1273)];
}
v1273 = rt_range(rt_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, v1273)] = F.v5029;
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2231_ReopenScope(void * a_p2232) {
struct yf2233 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2232 = a_p2232;
F.v5036 = ((*(yR130 *)y_deref(F.p2232))).f_syms;
F.v5038 = INT64_C(0);
v1273 = rt_range(rt_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, v1273)] = F.p2232;
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = ((void *)0);
while ((!(F.v5036 == ((void *)0)))) {
Y_TICK();
F.v5038 = rt_range(rt_add(F.v5038, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1340).p)[y_ix1(v1340, F.v5038)] = F.v5036;
F.v5036 = ((*(yR125 *)y_deref(F.v5036))).f_stack;
}
while ((F.v5038 > INT64_C(0))) {
Y_TICK();
F.v5036 = ((void * *)(v1340).p)[y_ix1(v1340, F.v5038)];
F.v5041 = rt_range(rt_mod(((*(yR125 *)y_deref(F.v5036))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(F.v5036))).f_chain = ((void * *)(v1260).p)[y_ix1(v1260, F.v5041)];
((void * *)(v1260).p)[y_ix1(v1260, F.v5041)] = F.v5036;
F.v5038 = rt_range(rt_sub(F.v5038, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2237_CloseScope(void) {
struct yf2238 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5053 = ((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_syms;
while ((!(F.v5053 == ((void *)0)))) {
Y_TICK();
F.v5059 = rt_range(rt_mod(((*(yR125 *)y_deref(F.v5053))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5055 = ((void * *)(v1260).p)[y_ix1(v1260, F.v5059)];
F.v5057 = ((void *)0);
while ((((!(F.v5055 == ((void *)0)))) && ((!(F.v5055 == F.v5053))))) {
Y_TICK();
F.v5057 = F.v5055;
F.v5055 = ((*(yR125 *)y_deref(F.v5055))).f_chain;
}
if ((F.v5055 == F.v5053)) {
if ((F.v5057 == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, F.v5059)] = ((*(yR125 *)y_deref(F.v5053))).f_chain;
} else {
((*(yR125 *)y_deref(F.v5057))).f_chain = ((*(yR125 *)y_deref(F.v5053))).f_chain;
}
}
F.v5053 = ((*(yR125 *)y_deref(F.v5053))).f_stack;
}
v1273 = rt_range(rt_sub(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2242_Visible(void * a_p2243) {
struct yf2244 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2243 = a_p2243;
{ rt_int rv5067 = (((((*(yR125 *)y_deref(F.p2243))).f_depth >= v1276)) || ((((*(yR125 *)y_deref(F.p2243))).f_depth == INT64_C(0))));
y_use = F.yu; return rv5067; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2248_Find(rt_int a_p2249) {
struct yf2250 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2249 = a_p2249;
F.v5071 = ((void * *)(v1260).p)[y_ix1(v1260, rt_mod(F.p2249, INT64_C(8192)))];
while ((!(F.v5071 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR125 *)y_deref(F.v5071))).f_name == F.p2249)) && yr2242_Visible(F.v5071))) {
{ void * rv5074 = F.v5071;
y_use = F.yu; return rv5074; }
}
F.v5071 = ((*(yR125 *)y_deref(F.v5071))).f_chain;
}
{ void * rv5075 = ((void *)0);
y_use = F.yu; return rv5075; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2254_FindHere(rt_int a_p2255) {
struct yf2256 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2255 = a_p2255;
F.v5079 = ((void * *)(v1260).p)[y_ix1(v1260, rt_mod(F.p2255, INT64_C(8192)))];
while ((!(F.v5079 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR125 *)y_deref(F.v5079))).f_name == F.p2255)) && ((((*(yR125 *)y_deref(F.v5079))).f_depth == v1273)))) {
{ void * rv5082 = F.v5079;
y_use = F.yu; return rv5082; }
}
F.v5079 = ((*(yR125 *)y_deref(F.v5079))).f_chain;
}
{ void * rv5083 = ((void *)0);
y_use = F.yu; return rv5083; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2260_Lookup(rt_int a_p2261, rt_int a_p2262) {
struct yf2263 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2261 = a_p2261;
F.p2262 = a_p2262;
F.v5088 = yr2248_Find(F.p2261);
if ((!(((void * *)(v1313).p)[y_ix1(v1313, v1273)] == ((void *)0)))) {
if ((((F.v5088 == ((void *)0))) || ((!(((*(yR125 *)y_deref(F.v5088))).f_depth == v1273))))) {
if (yr2280_DeclaredFrom(((void * *)(v1313).p)[y_ix1(v1313, v1273)], F.p2261)) {
yr1186_FailN(F.p2262, F.p2261, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v5088 == ((void *)0))) {
yr1186_FailN(F.p2262, F.p2261, y_str(" is not declared here", 21));
}
F.lo5096 = INT64_C(1);
F.hi5097 = v1328;
{ rt_int hi5101 = F.hi5097;
for (rt_int i5100 = F.lo5096; i5100 <= hi5101; i5100++) { F.c_5099 = i5100; Y_TICK();
if (((((((*(yR125 *)y_deref(F.v5088))).f_depth == ((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5099)])) && ((((*(yR125 *)y_deref(F.v5088))).f_serial > ((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5099)]))) && yr2274_IsSimple(((*(yR125 *)y_deref(F.v5088))).f_kind))) {
yr1186_FailN(F.p2262, F.p2261, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i5100 == hi5101) break;
}}
if ((((*(yR125 *)y_deref(F.v5088))).f_kind == v894)) {
F.v5090 = ((*(yR125 *)y_deref(F.v5088))).f_chain;
while ((!(F.v5090 == ((void *)0)))) {
Y_TICK();
if ((((((((((*(yR125 *)y_deref(F.v5090))).f_name == F.p2261)) && ((((*(yR125 *)y_deref(F.v5090))).f_depth == ((*(yR125 *)y_deref(F.v5088))).f_depth))) && ((((*(yR125 *)y_deref(F.v5090))).f_kind == v894))) && yr2301_Resolved(F.v5090)) && ((!(yr2353_Real(F.v5090) == yr2353_Real(F.v5088))))) && ((!(((*(yR125 *)y_deref(yr2353_Real(F.v5088)))).f_kind == v873))))) {
yr1186_FailN(F.p2262, F.p2261, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v5090 = ((*(yR125 *)y_deref(F.v5090))).f_chain;
}
}
{ void * rv5104 = F.v5088;
y_use = F.yu; return rv5104; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2267_AltOf(void * a_p2268, void * a_p2269) {
struct yf2270 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2268 = a_p2268;
F.p2269 = a_p2269;
F.v5109 = ((*(yR125 *)y_deref(F.p2268))).f_alt;
while ((!(F.v5109 == ((void *)0)))) {
Y_TICK();
if ((F.v5109 == F.p2269)) {
{ rt_int rv5111 = 1;
y_use = F.yu; return rv5111; }
}
F.v5109 = ((*(yR125 *)y_deref(F.v5109))).f_alt;
}
{ rt_int rv5113 = 0;
y_use = F.yu; return rv5113; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2274_IsSimple(rt_int a_p2275) {
struct yf2276 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2275 = a_p2275;
{ rt_int rv5116 = (((((((F.p2275 == v861)) || ((F.p2275 == v864))) || ((F.p2275 == v867))) || ((F.p2275 == v870))) || ((F.p2275 == v873))) || ((F.p2275 == v888)));
y_use = F.yu; return rv5116; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2280_DeclaredFrom(void * a_p2281, rt_int a_p2282) {
struct yf2283 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2281 = a_p2281;
F.p2282 = a_p2282;
F.v5121 = F.p2281;
F.v5123 = F.p2281;
while ((!(F.v5121 == ((void *)0)))) {
Y_TICK();
F.v5125 = ((*(yR105 *)y_deref(F.v5121))).f_kind;
if (((((F.v5125 == v639)) || ((F.v5125 == v642))) || ((F.v5125 == v645)))) {
F.v5123 = ((*(yR105 *)y_deref(F.v5121))).f_a;
while ((!(F.v5123 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v5123))).f_name == F.p2282)) {
{ rt_int rv5127 = 1;
y_use = F.yu; return rv5127; }
}
F.v5123 = ((*(yR105 *)y_deref(F.v5123))).f_next;
}
}
if ((((((((F.v5125 == v648)) || ((F.v5125 == v651))) || ((F.v5125 == v654))) || ((F.v5125 == v666))) || ((F.v5125 == v624))) || ((F.v5125 == v660)))) {
if ((((*(yR105 *)y_deref(F.v5121))).f_name == F.p2282)) {
{ rt_int rv5129 = 1;
y_use = F.yu; return rv5129; }
}
}
if ((((((F.v5125 == v639)) || ((F.v5125 == v642))) || ((F.v5125 == v648))) || ((F.v5125 == v651)))) {
if (yr2287_LiteralIn(((*(yR105 *)y_deref(F.v5121))).f_b, F.p2282)) {
{ rt_int rv5131 = 1;
y_use = F.yu; return rv5131; }
}
}
if ((F.v5125 == v624)) {
F.v5123 = ((*(yR105 *)y_deref(F.v5121))).f_b;
while ((!(F.v5123 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v5123))).f_ival == F.p2282)) || ((((((*(yR105 *)y_deref(F.v5123))).f_ival == INT64_C(0))) && ((((*(yR105 *)y_deref(F.v5123))).f_name == F.p2282)))))) {
{ rt_int rv5134 = 1;
y_use = F.yu; return rv5134; }
}
F.v5123 = ((*(yR105 *)y_deref(F.v5123))).f_next;
}
}
F.v5121 = ((*(yR105 *)y_deref(F.v5121))).f_next;
}
{ rt_int rv5136 = 0;
y_use = F.yu; return rv5136; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2287_LiteralIn(void * a_p2288, rt_int a_p2289) {
struct yf2290 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2288 = a_p2288;
F.p2289 = a_p2289;
if ((F.p2288 == ((void *)0))) {
{ rt_int rv5143 = 0;
y_use = F.yu; return rv5143; }
}
if ((((*(yR105 *)y_deref(F.p2288))).f_kind == v675)) {
F.v5141 = ((*(yR105 *)y_deref(F.p2288))).f_a;
while ((!(F.v5141 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v5141))).f_name == F.p2289)) {
{ rt_int rv5145 = 1;
y_use = F.yu; return rv5145; }
}
F.v5141 = ((*(yR105 *)y_deref(F.v5141))).f_next;
}
{ rt_int rv5147 = 0;
y_use = F.yu; return rv5147; }
}
if ((((*(yR105 *)y_deref(F.p2288))).f_kind == v681)) {
F.v5141 = ((*(yR105 *)y_deref(F.p2288))).f_a;
while ((!(F.v5141 == ((void *)0)))) {
Y_TICK();
if (yr2287_LiteralIn(F.v5141, F.p2289)) {
{ rt_int rv5149 = 1;
y_use = F.yu; return rv5149; }
}
F.v5141 = ((*(yR105 *)y_deref(F.v5141))).f_next;
}
{ rt_int rv5150 = yr2287_LiteralIn(((*(yR105 *)y_deref(F.p2288))).f_b, F.p2289);
y_use = F.yu; return rv5150; }
}
if ((((*(yR105 *)y_deref(F.p2288))).f_kind == v684)) {
F.v5141 = ((*(yR105 *)y_deref(F.p2288))).f_a;
while ((!(F.v5141 == ((void *)0)))) {
Y_TICK();
if (yr2287_LiteralIn(((*(yR105 *)y_deref(F.v5141))).f_b, F.p2289)) {
{ rt_int rv5152 = 1;
y_use = F.yu; return rv5152; }
}
F.v5141 = ((*(yR105 *)y_deref(F.v5141))).f_next;
}
if ((!(((*(yR105 *)y_deref(F.p2288))).f_b == ((void *)0)))) {
if (yr2287_LiteralIn(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2288))).f_b))).f_b, F.p2289)) {
{ rt_int rv5154 = 1;
y_use = F.yu; return rv5154; }
}
F.v5141 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2288))).f_b))).f_a;
while ((!(F.v5141 == ((void *)0)))) {
Y_TICK();
if (yr2294_LiteralInGroups(((*(yR105 *)y_deref(F.v5141))).f_b, F.p2289)) {
{ rt_int rv5156 = 1;
y_use = F.yu; return rv5156; }
}
F.v5141 = ((*(yR105 *)y_deref(F.v5141))).f_next;
}
}
{ rt_int rv5158 = 0;
y_use = F.yu; return rv5158; }
}
if ((((((*(yR105 *)y_deref(F.p2288))).f_kind == v687)) || ((((*(yR105 *)y_deref(F.p2288))).f_kind == v693)))) {
{ rt_int rv5159 = yr2287_LiteralIn(((*(yR105 *)y_deref(F.p2288))).f_a, F.p2289);
y_use = F.yu; return rv5159; }
}
{ rt_int rv5161 = 0;
y_use = F.yu; return rv5161; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2294_LiteralInGroups(void * a_p2295, rt_int a_p2296) {
struct yf2297 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2295 = a_p2295;
F.p2296 = a_p2296;
F.v5166 = F.p2295;
while ((!(F.v5166 == ((void *)0)))) {
Y_TICK();
if (yr2287_LiteralIn(((*(yR105 *)y_deref(F.v5166))).f_b, F.p2296)) {
{ rt_int rv5168 = 1;
y_use = F.yu; return rv5168; }
}
F.v5166 = ((*(yR105 *)y_deref(F.v5166))).f_next;
}
{ rt_int rv5170 = 0;
y_use = F.yu; return rv5170; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2301_Resolved(void * a_p2302) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2302 = a_p2302;
if ((!(((*(yR125 *)y_deref(F.p2302))).f_kind == v894))) {
{ rt_int rv5174 = 1;
y_use = F.yu; return rv5174; }
}
if ((((*(yR125 *)y_deref(F.p2302))).f_target == ((void *)0))) {
{ rt_int rv5176 = 0;
y_use = F.yu; return rv5176; }
}
{ rt_int rv5177 = yr2301_Resolved(((*(yR125 *)y_deref(F.p2302))).f_target);
y_use = F.yu; return rv5177; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2307_Ambiguous(void * a_p2308) {
struct yf2309 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2308 = a_p2308;
F.v5181 = ((*(yR125 *)y_deref(F.p2308))).f_chain;
while ((!(F.v5181 == ((void *)0)))) {
Y_TICK();
if ((((((((*(yR125 *)y_deref(F.v5181))).f_name == ((*(yR125 *)y_deref(F.p2308))).f_name)) && yr2242_Visible(F.v5181)) && ((((*(yR125 *)y_deref(F.v5181))).f_kind == v873))) && ((!(((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5181))).f_rep))).f_tid == ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p2308))).f_rep))).f_tid))))) {
{ rt_int rv5183 = 1;
y_use = F.yu; return rv5183; }
}
F.v5181 = ((*(yR125 *)y_deref(F.v5181))).f_chain;
}
{ rt_int rv5185 = 0;
y_use = F.yu; return rv5185; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2313_FindLit(rt_int a_p2314, void * a_p2315) {
struct yf2316 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2314 = a_p2314;
F.p2315 = a_p2315;
F.v5190 = ((void * *)(v1260).p)[y_ix1(v1260, rt_mod(F.p2314, INT64_C(8192)))];
while ((!(F.v5190 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR125 *)y_deref(F.v5190))).f_name == F.p2314)) && yr2301_Resolved(F.v5190))) {
if ((((((*(yR125 *)y_deref(yr2353_Real(F.v5190)))).f_kind == v873)) && ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(yr2353_Real(F.v5190)))).f_rep))).f_tid == ((*(yR110 *)y_deref(F.p2315))).f_tid)))) {
{ void * rv5193 = F.v5190;
y_use = F.yu; return rv5193; }
}
}
F.v5190 = ((*(yR125 *)y_deref(F.v5190))).f_chain;
}
{ void * rv5194 = ((void *)0);
y_use = F.yu; return rv5194; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2320_Define(void * a_p2321, rt_int a_p2322) {
struct yf2323 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2321 = a_p2321;
F.p2322 = a_p2322;
F.v5199 = yr2254_FindHere(((*(yR125 *)y_deref(F.p2321))).f_name);
F.v5201 = rt_range(rt_mod(((*(yR125 *)y_deref(F.p2321))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v5199 == ((void *)0)))) && (!((((((*(yR125 *)y_deref(F.v5199))).f_kind == v873)) && ((((*(yR125 *)y_deref(F.p2321))).f_kind == v873)))))) && (!(((((((*(yR125 *)y_deref(F.p2321))).f_kind == v876)) && yr2301_Resolved(F.v5199)) && yr2267_AltOf(F.p2321, yr2353_Real(F.v5199)))))) && (!((((((*(yR125 *)y_deref(F.p2321))).f_kind == v894)) && ((((*(yR125 *)y_deref(F.v5199))).f_kind == v894))))))) {
yr1186_FailN(F.p2322, ((*(yR125 *)y_deref(F.p2321))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR125 *)y_deref(F.p2321))).f_depth = v1273;
((*(yR125 *)y_deref(F.p2321))).f_chain = ((void * *)(v1260).p)[y_ix1(v1260, F.v5201)];
((void * *)(v1260).p)[y_ix1(v1260, F.v5201)] = F.p2321;
((*(yR125 *)y_deref(F.p2321))).f_stack = ((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_syms;
((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_syms = F.p2321;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2327_Path(rt_int a_p2328, rt_int a_p2329) {
struct yf2330 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2328 = a_p2328;
F.p2329 = a_p2329;
F.v5209 = rt_range(rt_sub(v1279, F.p2328), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2328 == INT64_C(0))) {
{ rt_int rv5212 = F.p2329;
y_use = F.yu; return rv5212; }
}
yr1026_SB();
if ((F.v5209 == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
} else {
yr1037_SA(y_str("F.up->", 6));
while ((F.v5209 > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
F.v5209 = rt_range(rt_sub(F.v5209, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1044_ST(F.p2329);
{ rt_int rv5220 = yr1056_SE();
y_use = F.yu; return rv5220; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2334_FramePtr(rt_int a_p2335) {
struct yf2336 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2335 = a_p2335;
F.v5224 = rt_range(rt_sub(v1279, F.p2335), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5224 == INT64_C(0))) {
{ rt_int rv5228 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5228; }
}
yr1026_SB();
yr1037_SA(y_str("F.up", 4));
while ((F.v5224 > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
F.v5224 = rt_range(rt_sub(F.v5224, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5234 = yr1056_SE();
y_use = F.yu; return rv5234; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2340_DeclStorage(rt_int a_p2341, rt_int a_p2342) {
struct yf2343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2341 = a_p2341;
F.p2342 = a_p2342;
yr1026_SB();
if ((v1279 == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
}
yr1044_ST(F.p2341);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p2342);
yr1037_SA(y_str(";", 1));
F.v5239 = yr1056_SE();
if ((v1279 == INT64_C(0))) {
yr1110_Put(&v984, F.v5239);
} else {
yr1110_Put(&v998, F.v5239);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2347_SymPath(void * a_p2348) {
struct yf2349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2348 = a_p2348;
F.v5248 = yr2327_Path(((*(yR125 *)y_deref(F.p2348))).f_level, ((*(yR125 *)y_deref(F.p2348))).f_cname);
if (((*(yR125 *)y_deref(F.p2348))).f_byref) {
yr1026_SB();
yr1037_SA(y_str("(*", 2));
yr1044_ST(F.v5248);
yr1037_SA(y_str(")", 1));
{ rt_int rv5251 = yr1056_SE();
y_use = F.yu; return rv5251; }
}
{ rt_int rv5252 = F.v5248;
y_use = F.yu; return rv5252; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2353_Real(void * a_p2354) {
struct yf2355 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2354 = a_p2354;
F.v5256 = F.p2354;
while ((((*(yR125 *)y_deref(F.v5256))).f_kind == v894)) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v5256))).f_target == ((void *)0))) {
yr1186_FailN(v1000, ((*(yR125 *)y_deref(F.v5256))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5256 = ((*(yR125 *)y_deref(F.v5256))).f_target;
}
{ void * rv5258 = F.v5256;
y_use = F.yu; return rv5258; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2359_NewRep(rt_int a_p2360, rt_int a_p2361) {
struct yf2362 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2360 = a_p2360;
F.p2361 = a_p2361;
({ F.v5263 = y_new(sizeof(yR110)); });
(*(yR110 *)y_deref(F.v5263)) = ((yR110){ .f_kind = F.p2360, .f_tid = F.p2361, .f_tname = F.p2361, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
((*(yR110 *)y_deref(F.v5263))).f_serial = yr1195_NewSerial();
{ void * rv5291 = F.v5263;
y_use = F.yu; return rv5291; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2366_CopyRep(void * a_p2367) {
struct yf2368 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2367 = a_p2367;
({ F.v5295 = y_new(sizeof(yR110)); });
(*(yR110 *)y_deref(F.v5295)) = (*(yR110 *)y_deref(F.p2367));
((*(yR110 *)y_deref(F.v5295))).f_serial = yr1195_NewSerial();
((*(yR110 *)y_deref(F.v5295))).f_sig = INT64_C(0);
((*(yR110 *)y_deref(F.v5295))).f_bits = INT64_C(0);
{ void * rv5298 = F.v5295;
y_use = F.yu; return rv5298; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2372_IsDiscrete(void * a_p2373) {
struct yf2374 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2373 = a_p2373;
{ rt_int rv5301 = (((((((*(yR110 *)y_deref(F.p2373))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.p2373))).f_kind == v813))) || ((((*(yR110 *)y_deref(F.p2373))).f_kind == v816))) || ((((*(yR110 *)y_deref(F.p2373))).f_kind == v819)));
y_use = F.yu; return rv5301; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2378_IsNumeric(void * a_p2379) {
struct yf2380 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2379 = a_p2379;
{ rt_int rv5304 = ((((((*(yR110 *)y_deref(F.p2379))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.p2379))).f_kind == v807))) || ((((*(yR110 *)y_deref(F.p2379))).f_kind == v810)));
y_use = F.yu; return rv5304; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2384_IsArrayLike(void * a_p2385) {
struct yf2386 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2385 = a_p2385;
{ rt_int rv5307 = ((((((*(yR110 *)y_deref(F.p2385))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2385))).f_kind == v843))) || ((((*(yR110 *)y_deref(F.p2385))).f_kind == v846)));
y_use = F.yu; return rv5307; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2390_IsString(void * a_p2391) {
struct yf2392 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2391 = a_p2391;
if ((((*(yR110 *)y_deref(F.p2391))).f_kind == v846)) {
{ rt_int rv5311 = 1;
y_use = F.yu; return rv5311; }
}
if ((((((*(yR110 *)y_deref(F.p2391))).f_kind == v822)) && ((((*(yR110 *)y_deref(F.p2391))).f_nidx == INT64_C(1))))) {
{ rt_int rv5313 = (((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2391))).f_elem))).f_kind == v819);
y_use = F.yu; return rv5313; }
}
if ((((((*(yR110 *)y_deref(F.p2391))).f_kind == v843)) && ((((*(yR110 *)y_deref(F.p2391))).f_nidx == INT64_C(1))))) {
{ rt_int rv5315 = (((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2391))).f_elem))).f_kind == v819);
y_use = F.yu; return rv5315; }
}
{ rt_int rv5317 = 0;
y_use = F.yu; return rv5317; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2396_Deep(void * a_p2397) {
struct yf2398 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2397 = a_p2397;
if (((((((*(yR110 *)y_deref(F.p2397))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2397))).f_kind == v843))) || ((((*(yR110 *)y_deref(F.p2397))).f_kind == v846)))) {
{ rt_int rv5321 = 1;
y_use = F.yu; return rv5321; }
}
{ rt_int rv5322 = (((((*(yR110 *)y_deref(F.p2397))).f_kind == v825)) && ((*(yR110 *)y_deref(F.p2397))).f_deep);
y_use = F.yu; return rv5322; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2402_Holds(void * a_p2403, rt_int a_p2404) {
struct yf2405 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2403 = a_p2403;
F.p2404 = a_p2404;
if ((((*(yR110 *)y_deref(F.p2403))).f_kind == v822)) {
{ rt_int rv5328 = (((((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2403))).f_elem))).f_kind == F.p2404)) || yr2402_Holds(((*(yR110 *)y_deref(F.p2403))).f_elem, F.p2404));
y_use = F.yu; return rv5328; }
}
if ((((*(yR110 *)y_deref(F.p2403))).f_kind == v825)) {
F.v5327 = ((*(yR110 *)y_deref(F.p2403))).f_fields;
while ((!(F.v5327 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v5327))).f_rep))).f_kind == F.p2404)) || yr2402_Holds(((*(yR115 *)y_deref(F.v5327))).f_rep, F.p2404))) {
{ rt_int rv5330 = 1;
y_use = F.yu; return rv5330; }
}
F.v5327 = ((*(yR115 *)y_deref(F.v5327))).f_next;
}
}
{ rt_int rv5332 = 0;
y_use = F.yu; return rv5332; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2409_HoldsSignal(void * a_p2410) {
struct yf2411 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2410 = a_p2410;
{ rt_int rv5335 = yr2402_Holds(F.p2410, v837);
y_use = F.yu; return rv5335; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2415_NonAssignable(void * a_p2416) {
struct yf2417 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2416 = a_p2416;
F.v5339 = ((*(yR110 *)y_deref(F.p2416))).f_kind;
if (((((F.v5339 == v837)) || ((F.v5339 == v831))) || ((F.v5339 == v840)))) {
{ rt_int rv5341 = 1;
y_use = F.yu; return rv5341; }
}
{ rt_int rv5342 = ((yr2402_Holds(F.p2416, v837) || yr2402_Holds(F.p2416, v831)) || yr2402_Holds(F.p2416, v840));
y_use = F.yu; return rv5342; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2421_CType(void * a_p2422) {
struct yf2423 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2422 = a_p2422;
F.v5346 = ((*(yR110 *)y_deref(F.p2422))).f_kind;
if (((((F.v5346 == v804)) || ((F.v5346 == v813))) || ((F.v5346 == v816)))) {
{ rt_int rv5348 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5348; }
}
if ((F.v5346 == v819)) {
{ rt_int rv5350 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5350; }
}
if ((F.v5346 == v810)) {
{ rt_int rv5352 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5352; }
}
if ((F.v5346 == v807)) {
{ rt_int rv5354 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5354; }
}
if (((((F.v5346 == v822)) || ((F.v5346 == v843))) || ((F.v5346 == v846)))) {
{ rt_int rv5356 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5356; }
}
if ((F.v5346 == v825)) {
{ rt_int rv5357 = ((*(yR110 *)y_deref(F.p2422))).f_cname;
y_use = F.yu; return rv5357; }
}
if ((((F.v5346 == v828)) || ((F.v5346 == v849)))) {
{ rt_int rv5359 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5359; }
}
if ((F.v5346 == v831)) {
{ rt_int rv5361 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5361; }
}
if ((F.v5346 == v834)) {
{ rt_int rv5363 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5363; }
}
if ((F.v5346 == v837)) {
{ rt_int rv5365 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5365; }
}
if ((F.v5346 == v840)) {
{ rt_int rv5367 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5367; }
}
if ((F.v5346 == v855)) {
{ rt_int rv5369 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5369; }
}
{ rt_int rv5371 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5371; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2427_DescOf(void * a_p2428) {
struct yf2429 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2428 = a_p2428;
F.v5375 = ((*(yR110 *)y_deref(F.p2428))).f_kind;
if (((((F.v5375 == v804)) || ((F.v5375 == v813))) || ((F.v5375 == v816)))) {
{ rt_int rv5377 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5377; }
}
if ((F.v5375 == v819)) {
{ rt_int rv5379 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5379; }
}
if ((F.v5375 == v810)) {
{ rt_int rv5381 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5381; }
}
if ((F.v5375 == v807)) {
{ rt_int rv5383 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5383; }
}
if ((((F.v5375 == v828)) || ((F.v5375 == v849)))) {
{ rt_int rv5385 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5385; }
}
if ((F.v5375 == v834)) {
{ rt_int rv5387 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5387; }
}
if ((((F.v5375 == v822)) || ((F.v5375 == v825)))) {
yr1026_SB();
yr1037_SA(y_str("&", 1));
yr1044_ST(yr2327_Path(((*(yR110 *)y_deref(F.p2428))).f_dlevel, ((*(yR110 *)y_deref(F.p2428))).f_dname));
{ rt_int rv5389 = yr1056_SE();
y_use = F.yu; return rv5389; }
}
if ((F.v5375 == v846)) {
{ rt_int rv5391 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5391; }
}
if ((F.v5375 == v837)) {
{ rt_int rv5393 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5393; }
}
if ((F.v5375 == v840)) {
{ rt_int rv5395 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5395; }
}
{ rt_int rv5397 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5397; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2433_NewDesc(void * a_p2434) {
struct yf2435 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2434 = a_p2434;
((*(yR110 *)y_deref(F.p2434))).f_dname = yr1200_Fresh(y_str("yd_", 3));
((*(yR110 *)y_deref(F.p2434))).f_dlevel = v1279;
yr2340_DeclStorage(yr1061_T(y_str("ydesc", 5)), ((*(yR110 *)y_deref(F.p2434))).f_dname);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2439_SameType(void * a_p2440, void * a_p2441) {
struct yf2442 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2440 = a_p2440;
F.p2441 = a_p2441;
if ((((*(yR110 *)y_deref(F.p2440))).f_tid == ((*(yR110 *)y_deref(F.p2441))).f_tid)) {
{ rt_int rv5406 = 1;
y_use = F.yu; return rv5406; }
}
if ((((((*(yR110 *)y_deref(F.p2440))).f_kind == v846)) && yr2390_IsString(F.p2441))) {
{ rt_int rv5408 = 1;
y_use = F.yu; return rv5408; }
}
if ((((((*(yR110 *)y_deref(F.p2441))).f_kind == v846)) && yr2390_IsString(F.p2440))) {
{ rt_int rv5410 = 1;
y_use = F.yu; return rv5410; }
}
if ((((((*(yR110 *)y_deref(F.p2440))).f_kind == v849)) && ((((*(yR110 *)y_deref(F.p2441))).f_kind == v828)))) {
{ rt_int rv5412 = 1;
y_use = F.yu; return rv5412; }
}
if ((((((*(yR110 *)y_deref(F.p2441))).f_kind == v849)) && ((((*(yR110 *)y_deref(F.p2440))).f_kind == v828)))) {
{ rt_int rv5414 = 1;
y_use = F.yu; return rv5414; }
}
if ((((((*(yR110 *)y_deref(F.p2440))).f_kind == v858)) || ((((*(yR110 *)y_deref(F.p2441))).f_kind == v858)))) {
{ rt_int rv5416 = 1;
y_use = F.yu; return rv5416; }
}
{ rt_int rv5418 = 0;
y_use = F.yu; return rv5418; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2446_TypeClash(rt_int a_p2447, void * a_p2448, void * a_p2449) {
struct yf2450 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2447 = a_p2447;
F.p2448 = a_p2448;
F.p2449 = a_p2449;
yr1026_SB();
yr1037_SA(y_str("type conflict: ", 15));
yr1044_ST(((*(yR110 *)y_deref(F.p2448))).f_tname);
yr1037_SA(y_str(" expected, ", 11));
yr1044_ST(((*(yR110 *)y_deref(F.p2449))).f_tname);
yr1037_SA(y_str(" found", 6));
F.v5424 = yr1056_SE();
yr1157_Fail(F.p2447, F.v5424);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2454_CheckType(rt_int a_p2455, void * a_p2456, void * a_p2457) {
struct yf2458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2455 = a_p2455;
F.p2456 = a_p2456;
F.p2457 = a_p2457;
if ((!yr2439_SameType(F.p2456, F.p2457))) {
yr2446_TypeClash(F.p2455, F.p2456, F.p2457);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2462_CheckRepresented(void * a_p2463, rt_int a_p2464) {
struct yf2465 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2463 = a_p2463;
F.p2464 = a_p2464;
if (((*(yR110 *)y_deref(F.p2463))).f_abstract) {
yr1186_FailN(F.p2464, ((*(yR110 *)y_deref(F.p2463))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2469_SigText(void * a_p2470) {
struct yf2471 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2470 = a_p2470;
F.v5439 = ((*(yR110 *)y_deref(F.p2470))).f_kind;
yr1026_SB();
yr1044_ST(((*(yR110 *)y_deref(F.p2470))).f_tid);
if (((yr2372_IsDiscrete(F.p2470) || ((F.v5439 == v810))) || ((F.v5439 == v807)))) {
yr1037_SA(y_str("[", 1));
if (((*(yR110 *)y_deref(F.p2470))).f_hasm) {
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_mlo);
yr1037_SA(y_str("..", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_mhi);
} else {
yr1044_ST(((*(yR110 *)y_deref(F.p2470))).f_lo);
yr1037_SA(y_str("..", 2));
yr1044_ST(((*(yR110 *)y_deref(F.p2470))).f_hi);
}
yr1037_SA(y_str("]", 1));
if ((F.v5439 == v810)) {
yr1037_SA(y_str("P", 1));
yr1044_ST(((*(yR110 *)y_deref(F.p2470))).f_prec);
}
if ((F.v5439 == v807)) {
yr1037_SA(y_str("S", 1));
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_fsn);
yr1037_SA(y_str("/", 1));
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_fsd);
}
} else if ((F.v5439 == v822)) {
yr1037_SA(y_str("(", 1));
F.v5441 = ((*(yR110 *)y_deref(F.p2470))).f_idx;
while ((!(F.v5441 == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2475_RepSig(F.v5441));
yr1037_SA(y_str(",", 1));
F.v5441 = ((*(yR110 *)y_deref(F.v5441))).f_link;
}
yr1037_SA(y_str("OF ", 3));
yr1044_ST(yr2475_RepSig(((*(yR110 *)y_deref(F.p2470))).f_elem));
yr1037_SA(y_str(")", 1));
} else if ((F.v5439 == v843)) {
yr1037_SA(y_str("(", 1));
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_nidx);
yr1037_SA(y_str("D ", 2));
yr1044_ST(yr2475_RepSig(((*(yR110 *)y_deref(F.p2470))).f_elem));
yr1037_SA(y_str(")", 1));
} else if ((F.v5439 == v825)) {
yr1037_SA(y_str("{", 1));
F.v5443 = ((*(yR110 *)y_deref(F.p2470))).f_fields;
while ((!(F.v5443 == ((void *)0)))) {
Y_TICK();
if (((*(yR115 *)y_deref(F.v5443))).f_isconst) {
yr1037_SA(y_str("C ", 2));
} else {
yr1037_SA(y_str("V ", 2));
}
yr1044_ST(((*(yR115 *)y_deref(F.v5443))).f_name);
yr1037_SA(y_str(":", 1));
yr1044_ST(yr2475_RepSig(((*(yR115 *)y_deref(F.v5443))).f_rep));
yr1037_SA(y_str(";", 1));
F.v5443 = ((*(yR115 *)y_deref(F.v5443))).f_next;
}
yr1037_SA(y_str("}", 1));
} else if ((((F.v5439 == v834)) || ((F.v5439 == v831)))) {
yr1037_SA(y_str("(", 1));
yr1044_ST(yr2475_RepSig(((*(yR110 *)y_deref(F.p2470))).f_elem));
yr1037_SA(y_str(")", 1));
}
if (((*(yR110 *)y_deref(F.p2470))).f_packed) {
yr1037_SA(y_str(" PACKED ", 8));
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_pbits);
}
if ((!(((*(yR110 *)y_deref(F.p2470))).f_align == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
yr1050_SI(((*(yR110 *)y_deref(F.p2470))).f_align);
}
{ rt_int rv5469 = yr1056_SE();
y_use = F.yu; return rv5469; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2475_RepSig(void * a_p2476) {
struct yf2477 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2476 = a_p2476;
if ((((*(yR110 *)y_deref(F.p2476))).f_sig == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2476))).f_sig = yr1075_Name(yr2469_SigText(F.p2476));
}
{ rt_int rv5473 = ((*(yR110 *)y_deref(F.p2476))).f_sig;
y_use = F.yu; return rv5473; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2481_Identical(void * a_p2482, void * a_p2483) {
struct yf2484 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2482 = a_p2482;
F.p2483 = a_p2483;
if ((F.p2482 == F.p2483)) {
{ rt_int rv5478 = 1;
y_use = F.yu; return rv5478; }
}
if ((!yr2439_SameType(F.p2482, F.p2483))) {
{ rt_int rv5480 = 0;
y_use = F.yu; return rv5480; }
}
{ rt_int rv5481 = (yr2475_RepSig(F.p2482) == yr2475_RepSig(F.p2483));
y_use = F.yu; return rv5481; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2488_IsLiteralNode(void * a_p2489) {
struct yf2490 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2489 = a_p2489;
if ((((((((*(yR105 *)y_deref(F.p2489))).f_kind == v759)) || ((((*(yR105 *)y_deref(F.p2489))).f_kind == v765))) || ((((*(yR105 *)y_deref(F.p2489))).f_kind == v762))) || ((((*(yR105 *)y_deref(F.p2489))).f_kind == v768)))) {
{ rt_int rv5484 = (((*(yR105 *)y_deref(F.p2489))).f_d == ((void *)0));
y_use = F.yu; return rv5484; }
}
if ((((((*(yR105 *)y_deref(F.p2489))).f_kind == v795)) || ((((*(yR105 *)y_deref(F.p2489))).f_kind == v801)))) {
{ rt_int rv5485 = yr2488_IsLiteralNode(((*(yR105 *)y_deref(F.p2489))).f_a);
y_use = F.yu; return rv5485; }
}
{ rt_int rv5487 = 0;
y_use = F.yu; return rv5487; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2494_StoreBounds(void * a_p2495, yarr a_p2497) {
struct yf2498 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2495 = a_p2495;
F.p2497 = a_p2497;
F.v5492 = yr1200_Fresh(y_str("lo", 2));
F.v5494 = yr1200_Fresh(y_str("hi", 2));
yr2340_DeclStorage(yr1061_T(F.p2497), F.v5492);
yr2340_DeclStorage(yr1061_T(F.p2497), F.v5494);
yr1132_Emit(yr3292_Join(yr2327_Path(v1279, F.v5492), yr1061_T(y_str(" = ", 3)), yr3292_Join(((*(yR110 *)y_deref(F.p2495))).f_lo, yr1061_T(y_str(";", 1)), INT64_C(0))));
yr1132_Emit(yr3292_Join(yr2327_Path(v1279, F.v5494), yr1061_T(y_str(" = ", 3)), yr3292_Join(((*(yR110 *)y_deref(F.p2495))).f_hi, yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR110 *)y_deref(F.p2495))).f_lo = F.v5492;
((*(yR110 *)y_deref(F.p2495))).f_hi = F.v5494;
((*(yR110 *)y_deref(F.p2495))).f_dname = F.v5492;
((*(yR110 *)y_deref(F.p2495))).f_dlevel = v1279;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2502_LoText(void * a_p2503) {
struct yf2504 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2503 = a_p2503;
if ((((((!(((*(yR110 *)y_deref(F.p2503))).f_dname == INT64_C(0)))) && ((!(((*(yR110 *)y_deref(F.p2503))).f_lo == INT64_C(0))))) && ((!(((*(yR110 *)y_deref(F.p2503))).f_kind == v822)))) && ((!(((*(yR110 *)y_deref(F.p2503))).f_kind == v825))))) {
{ rt_int rv5507 = yr2327_Path(((*(yR110 *)y_deref(F.p2503))).f_dlevel, ((*(yR110 *)y_deref(F.p2503))).f_lo);
y_use = F.yu; return rv5507; }
}
{ rt_int rv5508 = ((*(yR110 *)y_deref(F.p2503))).f_lo;
y_use = F.yu; return rv5508; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2508_HiText(void * a_p2509) {
struct yf2510 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2509 = a_p2509;
if ((((((!(((*(yR110 *)y_deref(F.p2509))).f_dname == INT64_C(0)))) && ((!(((*(yR110 *)y_deref(F.p2509))).f_hi == INT64_C(0))))) && ((!(((*(yR110 *)y_deref(F.p2509))).f_kind == v822)))) && ((!(((*(yR110 *)y_deref(F.p2509))).f_kind == v825))))) {
{ rt_int rv5513 = yr2327_Path(((*(yR110 *)y_deref(F.p2509))).f_dlevel, ((*(yR110 *)y_deref(F.p2509))).f_hi);
y_use = F.yu; return rv5513; }
}
{ rt_int rv5514 = ((*(yR110 *)y_deref(F.p2509))).f_hi;
y_use = F.yu; return rv5514; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2514_AdoptLiteral(void * a_p2515, void * a_p2516, void * a_p2517) {
struct yf2518 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2515 = a_p2515;
F.p2516 = a_p2516;
F.p2517 = a_p2517;
if ((((!yr2488_IsLiteralNode(F.p2515)) || ((!(((*(yR110 *)y_deref(F.p2516))).f_kind == ((*(yR110 *)y_deref(F.p2517))).f_kind)))) || (!yr2378_IsNumeric(F.p2517)))) {
{ void * rv5521 = F.p2516;
y_use = F.yu; return rv5521; }
}
if (yr2522_HasQualifier(F.p2515)) {
{ void * rv5522 = F.p2516;
y_use = F.yu; return rv5522; }
}
F.v5520 = yr2366_CopyRep(F.p2516);
((*(yR110 *)y_deref(F.v5520))).f_tid = ((*(yR110 *)y_deref(F.p2517))).f_tid;
((*(yR110 *)y_deref(F.v5520))).f_tname = ((*(yR110 *)y_deref(F.p2517))).f_tname;
{ void * rv5523 = F.v5520;
y_use = F.yu; return rv5523; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2522_HasQualifier(void * a_p2523) {
struct yf2524 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2523 = a_p2523;
if ((((((*(yR105 *)y_deref(F.p2523))).f_kind == v795)) || ((((*(yR105 *)y_deref(F.p2523))).f_kind == v801)))) {
{ rt_int rv5526 = yr2522_HasQualifier(((*(yR105 *)y_deref(F.p2523))).f_a);
y_use = F.yu; return rv5526; }
}
{ rt_int rv5527 = (!(((*(yR105 *)y_deref(F.p2523))).f_d == ((void *)0)));
y_use = F.yu; return rv5527; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2528_Gcd(rt_int a_p2529, rt_int a_p2530) {
struct yf2531 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2529 = a_p2529;
F.p2530 = a_p2530;
F.v5532 = F.p2529;
F.v5534 = F.p2530;
if ((F.v5532 < INT64_C(0))) {
F.v5532 = rt_range(rt_neg(F.v5532), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5534 < INT64_C(0))) {
F.v5534 = rt_range(rt_neg(F.v5534), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5534 == INT64_C(0)))) {
Y_TICK();
F.v5536 = rt_range(rt_mod(F.v5532, F.v5534), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5532 = F.v5534;
F.v5534 = F.v5536;
}
if ((F.v5532 == INT64_C(0))) {
{ rt_int rv5545 = INT64_C(1);
y_use = F.yu; return rv5545; }
}
{ rt_int rv5546 = F.v5532;
y_use = F.yu; return rv5546; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2535_MulChk(rt_int a_p2536, rt_int a_p2537, rt_int a_p2538) {
struct yf2539 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2536 = a_p2536;
F.p2537 = a_p2537;
F.p2538 = a_p2538;
F.v5552 = F.p2536;
F.v5554 = F.p2537;
if ((F.v5552 < INT64_C(0))) {
F.v5552 = rt_range(rt_neg(F.v5552), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5554 < INT64_C(0))) {
F.v5554 = rt_range(rt_neg(F.v5554), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5552 == INT64_C(0)))) && ((F.v5554 > (rt_div(v906, F.v5552)))))) {
yr1178_FailS(F.p2538, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5563 = rt_range(rt_mul(F.p2536, F.p2537), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5563; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2543_PowChk(rt_int a_p2544, rt_int a_p2545, rt_int a_p2546) {
struct yf2547 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2544 = a_p2544;
F.p2545 = a_p2545;
F.p2546 = a_p2546;
F.v5569 = INT64_C(1);
F.lo5574 = INT64_C(1);
F.hi5575 = F.p2545;
{ rt_int hi5579 = F.hi5575;
for (rt_int i5578 = F.lo5574; i5578 <= hi5579; i5578++) { F.c_5577 = i5578; Y_TICK();
F.v5569 = yr2535_MulChk(F.v5569, F.p2544, F.p2546);
if (i5578 == hi5579) break;
}}
{ rt_int rv5580 = F.v5569;
y_use = F.yu; return rv5580; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2551_ScaleRatio(void * a_p2552, void * a_p2553, rt_int * a_p2554, rt_int * a_p2555, rt_int * a_p2556) {
struct yf2557 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2552 = a_p2552;
F.p2553 = a_p2553;
F.p2554_o = a_p2554;
F.p2555_o = a_p2555;
F.p2556_o = a_p2556;
F.p2554 = yr1061_T(y_str("1", 1));
F.p2555 = yr1061_T(y_str("1", 1));
F.p2556 = 1;
if ((((((*(yR110 *)y_deref(F.p2552))).f_fsd == INT64_C(0))) || ((((*(yR110 *)y_deref(F.p2553))).f_fsd == INT64_C(0))))) {
(*F.p2554_o) = F.p2554;
(*F.p2555_o) = F.p2555;
(*F.p2556_o) = F.p2556;
y_use = F.yu; return;
}
F.v5588 = yr2528_Gcd(((*(yR110 *)y_deref(F.p2552))).f_fsn, ((*(yR110 *)y_deref(F.p2553))).f_fsn);
F.v5590 = yr2528_Gcd(((*(yR110 *)y_deref(F.p2552))).f_fsd, ((*(yR110 *)y_deref(F.p2553))).f_fsd);
F.v5592 = rt_range(rt_div(((*(yR110 *)y_deref(F.p2552))).f_fsn, F.v5588), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5594 = rt_range(rt_div(((*(yR110 *)y_deref(F.p2553))).f_fsd, F.v5590), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5596 = rt_range(rt_div(((*(yR110 *)y_deref(F.p2552))).f_fsd, F.v5590), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5598 = rt_range(rt_div(((*(yR110 *)y_deref(F.p2553))).f_fsn, F.v5588), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2556 = (((((F.v5592 == INT64_C(1))) && ((F.v5594 == INT64_C(1)))) && ((F.v5596 == INT64_C(1)))) && ((F.v5598 == INT64_C(1))));
F.p2554 = yr2561_Factor(F.v5592, F.v5594);
F.p2555 = yr2561_Factor(F.v5596, F.v5598);
(*F.p2554_o) = F.p2554;
(*F.p2555_o) = F.p2555;
(*F.p2556_o) = F.p2556;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2561_Factor(rt_int a_p2562, rt_int a_p2563) {
struct yf2564 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2562 = a_p2562;
F.p2563 = a_p2563;
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(F.p2562);
yr1037_SA(y_str(")", 1));
if ((!(F.p2563 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
yr1050_SI(F.p2563);
yr1037_SA(y_str(")", 1));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv5621 = yr1056_SE();
y_use = F.yu; return rv5621; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2568_SetScale(void * a_p2569, rt_int a_p2570, rt_int a_p2571) {
struct yf2572 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2569 = a_p2569;
F.p2570 = a_p2570;
F.p2571 = a_p2571;
F.v5627 = yr2528_Gcd(F.p2570, F.p2571);
((*(yR110 *)y_deref(F.p2569))).f_fsn = rt_range(rt_div(F.p2570, F.v5627), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2569))).f_fsd = rt_range(rt_div(F.p2571, F.v5627), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR110 *)y_deref(F.p2569))).f_fsd < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2569))).f_fsn = rt_range(rt_neg(((*(yR110 *)y_deref(F.p2569))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2569))).f_fsd = rt_range(rt_neg(((*(yR110 *)y_deref(F.p2569))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2576_Qualify(void * a_p2577, void * a_p2578) {
struct yf2579 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2577 = a_p2577;
F.p2578 = a_p2578;
if ((((*(yR110 *)y_deref(F.p2577))).f_kind == v807)) {
if ((((*(yR105 *)y_deref(F.p2578))).f_c == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2856_ManifestFix(((*(yR105 *)y_deref(F.p2578))).f_c, &F.v5649, &F.v5655, &F.v5657);
if (((!F.v5649) || ((F.v5655 <= INT64_C(0))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR110 *)y_deref(F.p2577))).f_fsn = F.v5655;
((*(yR110 *)y_deref(F.p2577))).f_fsd = F.v5657;
yr1026_SB();
yr1050_SI(F.v5655);
yr1037_SA(y_str("/", 1));
yr1050_SI(F.v5657);
((*(yR110 *)y_deref(F.p2577))).f_scale = yr1056_SE();
}
yr2938_Expr(((*(yR105 *)y_deref(F.p2578))).f_a, F.p2577, &F.v5637, &F.v5645);
yr2938_Expr(((*(yR105 *)y_deref(F.p2578))).f_b, F.p2577, &F.v5639, &F.v5647);
F.v5645 = yr2514_AdoptLiteral(((*(yR105 *)y_deref(F.p2578))).f_a, F.v5645, F.p2577);
F.v5647 = yr2514_AdoptLiteral(((*(yR105 *)y_deref(F.p2578))).f_b, F.v5647, F.p2577);
if ((((*(yR110 *)y_deref(F.p2577))).f_kind == v807)) {
yr2454_CheckType(((*(yR105 *)y_deref(F.p2578))).f_line, F.p2577, F.v5645);
yr2454_CheckType(((*(yR105 *)y_deref(F.p2578))).f_line, F.p2577, F.v5647);
yr2551_ScaleRatio(F.v5645, F.p2577, &F.v5641, &F.v5643, &F.v5651);
((*(yR110 *)y_deref(F.p2577))).f_lo = yr3292_Join(yr1061_T(y_str("y_fix_bound(", 12)), F.v5637, yr3292_Join(yr1061_T(y_str(", ", 2)), F.v5641, yr3292_Join(yr1061_T(y_str(", ", 2)), F.v5643, yr1061_T(y_str(", 1)", 4)))));
yr2551_ScaleRatio(F.v5647, F.p2577, &F.v5641, &F.v5643, &F.v5651);
((*(yR110 *)y_deref(F.p2577))).f_hi = yr3292_Join(yr1061_T(y_str("y_fix_bound(", 12)), F.v5639, yr3292_Join(yr1061_T(y_str(", ", 2)), F.v5641, yr3292_Join(yr1061_T(y_str(", ", 2)), F.v5643, yr1061_T(y_str(", 0)", 4)))));
((*(yR110 *)y_deref(F.p2577))).f_dname = INT64_C(0);
yr2494_StoreBounds(F.p2577, y_str("yfix", 4));
((*(yR110 *)y_deref(F.p2577))).f_abstract = 0;
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p2577))).f_kind == v810)) {
yr2454_CheckType(((*(yR105 *)y_deref(F.p2578))).f_line, F.p2577, F.v5645);
yr2454_CheckType(((*(yR105 *)y_deref(F.p2578))).f_line, F.p2577, F.v5647);
((*(yR110 *)y_deref(F.p2577))).f_lo = F.v5637;
((*(yR110 *)y_deref(F.p2577))).f_hi = F.v5639;
((*(yR110 *)y_deref(F.p2577))).f_dname = INT64_C(0);
if ((!((yr2488_IsLiteralNode(((*(yR105 *)y_deref(F.p2578))).f_a) && yr2488_IsLiteralNode(((*(yR105 *)y_deref(F.p2578))).f_b))))) {
yr2494_StoreBounds(F.p2577, y_str("double", 6));
}
if ((((*(yR105 *)y_deref(F.p2578))).f_d == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2790_Manifest(((*(yR105 *)y_deref(F.p2578))).f_d, &F.v5649, &F.v5653);
if ((!F.v5649)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5653 < INT64_C(1))) || ((F.v5653 > INT64_C(15))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1026_SB();
yr1050_SI(F.v5653);
((*(yR110 *)y_deref(F.p2577))).f_prec = yr1056_SE();
((*(yR110 *)y_deref(F.p2577))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2372_IsDiscrete(F.p2577))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR105 *)y_deref(F.p2578))).f_c == ((void *)0)))) || ((!(((*(yR105 *)y_deref(F.p2578))).f_d == ((void *)0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2578))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2454_CheckType(((*(yR105 *)y_deref(F.p2578))).f_line, F.p2577, F.v5645);
yr2454_CheckType(((*(yR105 *)y_deref(F.p2578))).f_line, F.p2577, F.v5647);
((*(yR110 *)y_deref(F.p2577))).f_lo = F.v5637;
((*(yR110 *)y_deref(F.p2577))).f_hi = F.v5639;
yr2790_Manifest(((*(yR105 *)y_deref(F.p2578))).f_a, &F.v5649, &((*(yR110 *)y_deref(F.p2577))).f_mlo);
((*(yR110 *)y_deref(F.p2577))).f_hasm = F.v5649;
yr2790_Manifest(((*(yR105 *)y_deref(F.p2578))).f_b, &F.v5649, &((*(yR110 *)y_deref(F.p2577))).f_mhi);
((*(yR110 *)y_deref(F.p2577))).f_hasm = (((*(yR110 *)y_deref(F.p2577))).f_hasm && F.v5649);
((*(yR110 *)y_deref(F.p2577))).f_abstract = 0;
((*(yR110 *)y_deref(F.p2577))).f_dname = INT64_C(0);
if ((!((*(yR110 *)y_deref(F.p2577))).f_hasm)) {
yr2494_StoreBounds(F.p2577, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2583_DefineLits(void * a_p2584) {
struct yf2585 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2584 = a_p2584;
F.v5689 = ((*(yR110 *)y_deref(F.p2584))).f_lits;
F.v5693 = INT64_C(0);
while ((!(F.v5689 == ((void *)0)))) {
Y_TICK();
if ((!(yr2248_Find(((*(yR105 *)y_deref(F.v5689))).f_name) == ((void *)0)))) {
F.v5691 = yr2248_Find(((*(yR105 *)y_deref(F.v5689))).f_name);
if ((((!(((*(yR125 *)y_deref(F.v5691))).f_kind == v873))) && ((((*(yR125 *)y_deref(F.v5691))).f_depth == v1273)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v5689))).f_line, ((*(yR105 *)y_deref(F.v5689))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5691 = yr2218_NewSym(v873, ((*(yR105 *)y_deref(F.v5689))).f_name);
((*(yR125 *)y_deref(F.v5691))).f_rep = F.p2584;
((*(yR125 *)y_deref(F.v5691))).f_mval = F.v5693;
((*(yR125 *)y_deref(F.v5691))).f_hasmv = 1;
yr2320_Define(F.v5691, ((*(yR105 *)y_deref(F.v5689))).f_line);
F.v5693 = rt_range(rt_add(F.v5693, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5689 = ((*(yR105 *)y_deref(F.v5689))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2589_SetRange(void * a_p2590, rt_int a_p2591, rt_int a_p2592) {
struct yf2593 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2590 = a_p2590;
F.p2591 = a_p2591;
F.p2592 = a_p2592;
yr1026_SB();
yr1050_SI(F.p2591);
((*(yR110 *)y_deref(F.p2590))).f_lo = yr1056_SE();
yr1026_SB();
yr1050_SI(F.p2592);
((*(yR110 *)y_deref(F.p2590))).f_hi = yr1056_SE();
((*(yR110 *)y_deref(F.p2590))).f_mlo = F.p2591;
((*(yR110 *)y_deref(F.p2590))).f_mhi = F.p2592;
((*(yR110 *)y_deref(F.p2590))).f_hasm = 1;
((*(yR110 *)y_deref(F.p2590))).f_dname = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2597_NewTid(rt_int a_p2598) {
struct yf2599 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2598 = a_p2598;
F.v5708 = yr1195_NewSerial();
yr1026_SB();
if ((!(F.p2598 == INT64_C(0)))) {
yr1044_ST(F.p2598);
} else {
yr1037_SA(y_str("anonymous", 9));
}
yr1037_SA(y_str("#", 1));
yr1050_SI(F.v5708);
{ rt_int rv5712 = yr1056_SE();
y_use = F.yu; return rv5712; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2603_MakeRep(void * a_p2604, rt_int a_p2605, rt_int a_p2606) {
struct yf2607 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2604 = a_p2604;
F.p2605 = a_p2605;
F.p2606 = a_p2606;
F.v5718 = yr2618_MakeRep1(F.p2604, F.p2605, F.p2606);
if ((!(((*(yR105 *)y_deref(F.p2604))).f_x == ((void *)0)))) {
F.v5718 = yr2718_ApplyStorage(F.v5718, ((*(yR105 *)y_deref(F.p2604))).f_x);
}
if ((!(((*(yR105 *)y_deref(F.p2604))).f_text == INT64_C(0)))) {
F.v5720 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(F.p2604))).f_text, ((*(yR105 *)y_deref(F.p2604))).f_line));
if (((!yr2611_Conforms(((*(yR125 *)y_deref(F.v5720))).f_rep, F.v5718)) || ((((((*(yR105 *)y_deref(F.p2604))).f_kind == v672)) && ((!(((*(yR110 *)y_deref(F.v5718))).f_tid == ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5720))).f_rep))).f_tid))))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2604))).f_line, ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5720))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5723 = F.v5718;
y_use = F.yu; return rv5723; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2611_Conforms(void * a_p2612, void * a_p2613) {
struct yf2614 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2612 = a_p2612;
F.p2613 = a_p2613;
if ((!(((*(yR110 *)y_deref(F.p2612))).f_kind == ((*(yR110 *)y_deref(F.p2613))).f_kind))) {
{ rt_int rv5740 = 0;
y_use = F.yu; return rv5740; }
}
if ((((*(yR110 *)y_deref(F.p2612))).f_kind == v825)) {
F.v5728 = ((*(yR110 *)y_deref(F.p2612))).f_fields;
F.v5730 = ((*(yR110 *)y_deref(F.p2613))).f_fields;
while ((((!(F.v5728 == ((void *)0)))) && ((!(F.v5730 == ((void *)0)))))) {
Y_TICK();
if (((((!(((*(yR115 *)y_deref(F.v5728))).f_name == ((*(yR115 *)y_deref(F.v5730))).f_name))) || ((!(((*(yR115 *)y_deref(F.v5728))).f_isconst == ((*(yR115 *)y_deref(F.v5730))).f_isconst)))) || ((!(((*(yR115 *)y_deref(F.v5728))).f_variant == ((*(yR115 *)y_deref(F.v5730))).f_variant))))) {
{ rt_int rv5742 = 0;
y_use = F.yu; return rv5742; }
}
if ((!yr2439_SameType(((*(yR115 *)y_deref(F.v5728))).f_rep, ((*(yR115 *)y_deref(F.v5730))).f_rep))) {
{ rt_int rv5744 = 0;
y_use = F.yu; return rv5744; }
}
F.v5728 = ((*(yR115 *)y_deref(F.v5728))).f_next;
F.v5730 = ((*(yR115 *)y_deref(F.v5730))).f_next;
}
{ rt_int rv5745 = (((F.v5728 == ((void *)0))) && ((F.v5730 == ((void *)0))));
y_use = F.yu; return rv5745; }
}
if ((((*(yR110 *)y_deref(F.p2612))).f_kind == v822)) {
if ((!(((*(yR110 *)y_deref(F.p2612))).f_nidx == ((*(yR110 *)y_deref(F.p2613))).f_nidx))) {
{ rt_int rv5747 = 0;
y_use = F.yu; return rv5747; }
}
F.v5732 = ((*(yR110 *)y_deref(F.p2612))).f_idx;
F.v5734 = ((*(yR110 *)y_deref(F.p2613))).f_idx;
while ((!(F.v5732 == ((void *)0)))) {
Y_TICK();
if ((!yr2481_Identical(F.v5732, F.v5734))) {
{ rt_int rv5749 = 0;
y_use = F.yu; return rv5749; }
}
F.v5732 = ((*(yR110 *)y_deref(F.v5732))).f_link;
F.v5734 = ((*(yR110 *)y_deref(F.v5734))).f_link;
}
{ rt_int rv5750 = yr2439_SameType(((*(yR110 *)y_deref(F.p2612))).f_elem, ((*(yR110 *)y_deref(F.p2613))).f_elem);
y_use = F.yu; return rv5750; }
}
if ((((((*(yR110 *)y_deref(F.p2612))).f_kind == v816)) || ((((*(yR110 *)y_deref(F.p2612))).f_kind == v819)))) {
if ((!(((*(yR110 *)y_deref(F.p2612))).f_nlits == ((*(yR110 *)y_deref(F.p2613))).f_nlits))) {
{ rt_int rv5752 = 0;
y_use = F.yu; return rv5752; }
}
F.v5736 = ((*(yR110 *)y_deref(F.p2612))).f_lits;
F.v5738 = ((*(yR110 *)y_deref(F.p2613))).f_lits;
while ((((!(F.v5736 == ((void *)0)))) && ((!(F.v5738 == ((void *)0)))))) {
Y_TICK();
if ((((!(((*(yR105 *)y_deref(F.v5736))).f_name == ((*(yR105 *)y_deref(F.v5738))).f_name))) || (!yr1088_TEq(((*(yR105 *)y_deref(F.v5736))).f_text, ((*(yR105 *)y_deref(F.v5738))).f_text)))) {
{ rt_int rv5754 = 0;
y_use = F.yu; return rv5754; }
}
F.v5736 = ((*(yR105 *)y_deref(F.v5736))).f_next;
F.v5738 = ((*(yR105 *)y_deref(F.v5738))).f_next;
}
{ rt_int rv5756 = 1;
y_use = F.yu; return rv5756; }
}
if (((((((*(yR110 *)y_deref(F.p2612))).f_kind == v834)) || ((((*(yR110 *)y_deref(F.p2612))).f_kind == v831))) || ((((*(yR110 *)y_deref(F.p2612))).f_kind == v828)))) {
if ((((((*(yR110 *)y_deref(F.p2612))).f_elem == ((void *)0))) || ((((*(yR110 *)y_deref(F.p2613))).f_elem == ((void *)0))))) {
{ rt_int rv5758 = 1;
y_use = F.yu; return rv5758; }
}
{ rt_int rv5759 = yr2439_SameType(((*(yR110 *)y_deref(F.p2612))).f_elem, ((*(yR110 *)y_deref(F.p2613))).f_elem);
y_use = F.yu; return rv5759; }
}
{ rt_int rv5761 = 1;
y_use = F.yu; return rv5761; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2618_MakeRep1(void * a_p2619, rt_int a_p2620, rt_int a_p2621) {
struct yf2622 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2619 = a_p2619;
F.p2620 = a_p2620;
F.p2621 = a_p2621;
F.v5777 = ((*(yR105 *)y_deref(F.p2619))).f_kind;
F.v5781 = INT64_C(0);
F.v5783 = F.p2620;
if ((!(((*(yR105 *)y_deref(F.p2619))).f_text == INT64_C(0)))) {
F.v5775 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(F.p2619))).f_text, ((*(yR105 *)y_deref(F.p2619))).f_line));
if ((((!(((*(yR125 *)y_deref(F.v5775))).f_kind == v870))) && ((!(((*(yR125 *)y_deref(F.v5775))).f_kind == v867))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2619))).f_line, ((*(yR105 *)y_deref(F.p2619))).f_text, y_str(" is not a type", 14));
}
F.v5781 = ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5775))).f_rep))).f_tid;
F.v5783 = ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5775))).f_rep))).f_tname;
}
if ((F.v5777 == v672)) {
F.v5775 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(F.p2619))).f_name, ((*(yR105 *)y_deref(F.p2619))).f_line));
if ((((!(((*(yR125 *)y_deref(F.v5775))).f_kind == v870))) && ((!(((*(yR125 *)y_deref(F.v5775))).f_kind == v867))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2619))).f_line, ((*(yR105 *)y_deref(F.p2619))).f_name, y_str(" is not a representation", 24));
}
F.v5767 = ((*(yR125 *)y_deref(F.v5775))).f_rep;
if ((!(((*(yR105 *)y_deref(F.p2619))).f_a == ((void *)0)))) {
F.v5767 = yr2366_CopyRep(F.v5767);
yr2576_Qualify(F.v5767, ((*(yR105 *)y_deref(F.p2619))).f_a);
}
{ void * rv5788 = F.v5767;
y_use = F.yu; return rv5788; }
}
if ((F.v5781 == INT64_C(0))) {
F.v5781 = yr2597_NewTid(F.p2620);
if ((F.v5783 == INT64_C(0))) {
F.v5783 = F.v5781;
}
}
if ((F.v5777 == v675)) {
F.v5767 = yr2359_NewRep(v816, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
((*(yR110 *)y_deref(F.v5767))).f_ordered = (((*(yR105 *)y_deref(F.p2619))).f_flag == INT64_C(1));
((*(yR110 *)y_deref(F.v5767))).f_lits = ((*(yR105 *)y_deref(F.p2619))).f_a;
((*(yR110 *)y_deref(F.v5767))).f_nlits = yr1919_Count(((*(yR105 *)y_deref(F.p2619))).f_a);
yr2589_SetRange(F.v5767, INT64_C(0), rt_range(rt_sub(((*(yR110 *)y_deref(F.v5767))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2583_DefineLits(F.v5767);
if ((!(((*(yR105 *)y_deref(F.p2619))).f_b == ((void *)0)))) {
yr2576_Qualify(F.v5767, ((*(yR105 *)y_deref(F.p2619))).f_b);
}
{ void * rv5795 = F.v5767;
y_use = F.yu; return rv5795; }
}
if ((F.v5777 == v678)) {
F.v5767 = yr2359_NewRep(v819, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
((*(yR110 *)y_deref(F.v5767))).f_ordered = 1;
((*(yR110 *)y_deref(F.v5767))).f_lits = ((*(yR105 *)y_deref(F.p2619))).f_a;
((*(yR110 *)y_deref(F.v5767))).f_nlits = yr1919_Count(((*(yR105 *)y_deref(F.p2619))).f_a);
if ((((*(yR110 *)y_deref(F.v5767))).f_nlits > INT64_C(256))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2619))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2589_SetRange(F.v5767, INT64_C(0), rt_range(rt_sub(((*(yR110 *)y_deref(F.v5767))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR105 *)y_deref(F.p2619))).f_b == ((void *)0)))) {
yr2576_Qualify(F.v5767, ((*(yR105 *)y_deref(F.p2619))).f_b);
}
{ void * rv5802 = F.v5767;
y_use = F.yu; return rv5802; }
}
if ((F.v5777 == v681)) {
F.v5767 = yr2359_NewRep(v822, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
F.v5779 = ((*(yR105 *)y_deref(F.p2619))).f_a;
F.v5773 = ((void *)0);
while ((!(F.v5779 == ((void *)0)))) {
Y_TICK();
F.v5771 = yr2366_CopyRep(yr2603_MakeRep(F.v5779, INT64_C(0), 0));
if ((!yr2372_IsDiscrete(F.v5771))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v5779))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2462_CheckRepresented(F.v5771, ((*(yR105 *)y_deref(F.v5779))).f_line);
((*(yR110 *)y_deref(F.v5771))).f_link = ((void *)0);
if ((F.v5773 == ((void *)0))) {
((*(yR110 *)y_deref(F.v5767))).f_idx = F.v5771;
} else {
((*(yR110 *)y_deref(F.v5773))).f_link = F.v5771;
}
F.v5773 = F.v5771;
((*(yR110 *)y_deref(F.v5767))).f_nidx = rt_range(rt_add(((*(yR110 *)y_deref(F.v5767))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5779 = ((*(yR105 *)y_deref(F.v5779))).f_next;
}
if ((((*(yR110 *)y_deref(F.v5767))).f_nidx > INT64_C(8))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2619))).f_line, y_str("this implementation takes arrays of up to 8 dimensions", 54));
}
((*(yR110 *)y_deref(F.v5767))).f_elem = yr2603_MakeRep(((*(yR105 *)y_deref(F.p2619))).f_b, INT64_C(0), F.p2621);
if ((!F.p2621)) {
yr2462_CheckRepresented(((*(yR110 *)y_deref(F.v5767))).f_elem, ((*(yR105 *)y_deref(F.p2619))).f_line);
yr2638_BuildArrayDesc(F.v5767);
} else {
((*(yR110 *)y_deref(F.v5767))).f_abstract = ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.v5767))).f_elem))).f_abstract;
if ((!((*(yR110 *)y_deref(F.v5767))).f_abstract)) {
yr2638_BuildArrayDesc(F.v5767);
}
}
((*(yR110 *)y_deref(F.v5767))).f_deep = 1;
{ void * rv5812 = F.v5767;
y_use = F.yu; return rv5812; }
}
if ((F.v5777 == v684)) {
F.v5767 = yr2359_NewRep(v825, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
yr2668_MakeRecord(F.v5767, F.p2619, F.p2621);
{ void * rv5813 = F.v5767;
y_use = F.yu; return rv5813; }
}
if (((((F.v5777 == v690)) || ((F.v5777 == v687))) || ((F.v5777 == v693)))) {
if ((F.v5777 == v690)) {
F.v5767 = yr2359_NewRep(v828, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
if (((((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2619))).f_a))).f_kind == v672)) && ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2619))).f_a))).f_a == ((void *)0)))) && ((yr2248_Find(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2619))).f_a))).f_name) == ((void *)0))))) {
((*(yR110 *)y_deref(F.v5767))).f_forward = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2619))).f_a))).f_name;
((*(yR110 *)y_deref(F.v5767))).f_fwdscope = v1273;
F.v5779 = yr1904_NewNode(v669, ((*(yR105 *)y_deref(F.p2619))).f_line);
((*(yR105 *)y_deref(F.v5779))).f_rep = F.v5767;
((*(yR105 *)y_deref(F.v5779))).f_next = v1364;
v1364 = F.v5779;
{ void * rv5814 = F.v5767;
y_use = F.yu; return rv5814; }
}
((*(yR110 *)y_deref(F.v5767))).f_elem = yr2603_MakeRep(((*(yR105 *)y_deref(F.p2619))).f_a, INT64_C(0), 0);
{ void * rv5817 = F.v5767;
y_use = F.yu; return rv5817; }
}
if ((F.v5777 == v687)) {
F.v5767 = yr2359_NewRep(v831, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
((*(yR110 *)y_deref(F.v5767))).f_elem = yr2603_MakeRep(((*(yR105 *)y_deref(F.p2619))).f_a, INT64_C(0), F.p2621);
{ void * rv5819 = F.v5767;
y_use = F.yu; return rv5819; }
}
F.v5767 = yr2359_NewRep(v834, F.v5781);
((*(yR110 *)y_deref(F.v5767))).f_tname = F.v5783;
((*(yR110 *)y_deref(F.v5767))).f_elem = yr2603_MakeRep(((*(yR105 *)y_deref(F.p2619))).f_a, INT64_C(0), 0);
if ((!yr2372_IsDiscrete(((*(yR110 *)y_deref(F.v5767))).f_elem))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2619))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2462_CheckRepresented(((*(yR110 *)y_deref(F.v5767))).f_elem, ((*(yR105 *)y_deref(F.p2619))).f_line);
{ void * rv5823 = F.v5767;
y_use = F.yu; return rv5823; }
}
yr1178_FailS(((*(yR105 *)y_deref(F.p2619))).f_line, y_str("this representation is not translated", 37));
{ void * rv5825 = ((void *)0);
y_use = F.yu; return rv5825; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2626_ResolvePending(rt_int a_p2627, void * a_p2628) {
struct yf2629 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2627 = a_p2627;
F.p2628 = a_p2628;
F.v5830 = v1364;
F.v5832 = ((void *)0);
while ((!(F.v5830 == ((void *)0)))) {
Y_TICK();
if ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5830))).f_rep))).f_forward == F.p2627)) {
((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5830))).f_rep))).f_elem = F.p2628;
((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5830))).f_rep))).f_forward = INT64_C(0);
if ((F.v5832 == ((void *)0))) {
v1364 = ((*(yR105 *)y_deref(F.v5830))).f_next;
} else {
((*(yR105 *)y_deref(F.v5832))).f_next = ((*(yR105 *)y_deref(F.v5830))).f_next;
}
} else {
F.v5832 = F.v5830;
}
F.v5830 = ((*(yR105 *)y_deref(F.v5830))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2633_CheckPending(void) {
struct yf2634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5836 = v1364;
while ((!(F.v5836 == ((void *)0)))) {
Y_TICK();
if ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5836))).f_rep))).f_fwdscope >= v1273)) {
yr1186_FailN(((*(yR105 *)y_deref(F.v5836))).f_line, ((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5836))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5836 = ((*(yR105 *)y_deref(F.v5836))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2638_BuildArrayDesc(void * a_p2639) {
struct yf2640 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2639 = a_p2639;
yr2433_NewDesc(F.p2639);
yr1026_SB();
yr1037_SA(y_str("{ rt_int lo[", 12));
yr1050_SI(((*(yR110 *)y_deref(F.p2639))).f_nidx);
yr1037_SA(y_str("] = {", 5));
F.v5841 = ((*(yR110 *)y_deref(F.p2639))).f_idx;
F.v5845 = 1;
while ((!(F.v5841 == ((void *)0)))) {
Y_TICK();
if ((!F.v5845)) {
yr1037_SA(y_str(", ", 2));
}
F.v5845 = 0;
yr1044_ST(yr2502_LoText(F.v5841));
F.v5841 = ((*(yR110 *)y_deref(F.v5841))).f_link;
}
yr1037_SA(y_str("}, hi[", 6));
yr1050_SI(((*(yR110 *)y_deref(F.p2639))).f_nidx);
yr1037_SA(y_str("] = {", 5));
F.v5841 = ((*(yR110 *)y_deref(F.p2639))).f_idx;
F.v5845 = 1;
while ((!(F.v5841 == ((void *)0)))) {
Y_TICK();
if ((!F.v5845)) {
yr1037_SA(y_str(", ", 2));
}
F.v5845 = 0;
yr1044_ST(yr2508_HiText(F.v5841));
F.v5841 = ((*(yR110 *)y_deref(F.v5841))).f_link;
}
yr1037_SA(y_str("}; y_desc_array(", 16));
yr1044_ST(yr2427_DescOf(F.p2639));
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2639))).f_nidx);
yr1037_SA(y_str(", lo, hi, ", 10));
yr1044_ST(yr2427_DescOf(((*(yR110 *)y_deref(F.p2639))).f_elem));
yr1037_SA(y_str("); }", 4));
F.v5843 = yr1056_SE();
yr1132_Emit(F.v5843);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2644_AddField(void * a_p2645, void * * a_p2646, rt_int a_p2647, void * a_p2648, rt_int a_p2649, rt_int a_p2650, void * a_p2651, rt_int a_p2652) {
struct yf2653 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2645 = a_p2645;
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.p2648 = a_p2648;
F.p2649 = a_p2649;
F.p2650 = a_p2650;
F.p2651 = a_p2651;
F.p2652 = a_p2652;
F.v5870 = ((*(yR110 *)y_deref(F.p2645))).f_fields;
while ((!(F.v5870 == ((void *)0)))) {
Y_TICK();
if ((((*(yR115 *)y_deref(F.v5870))).f_name == F.p2647)) {
yr1186_FailN(F.p2652, F.p2647, y_str(" is a component twice", 21));
}
F.v5870 = ((*(yR115 *)y_deref(F.v5870))).f_next;
}
({ F.v5870 = y_new(sizeof(yR115)); });
(*(yR115 *)y_deref(F.v5870)) = ((yR115){ .f_name = F.p2647, .f_rep = F.p2648, .f_isconst = F.p2649, .f_variant = F.p2650, .f_labels = F.p2651, .f_next = ((void *)0), .f_at = INT64_C(-1) });
if (((*F.p2646) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2645))).f_fields = F.v5870;
} else {
((*(yR115 *)y_deref((*F.p2646)))).f_next = F.v5870;
}
(*F.p2646) = F.v5870;
if (yr2396_Deep(F.p2648)) {
((*(yR110 *)y_deref(F.p2645))).f_deep = 1;
}
if (((*(yR110 *)y_deref(F.p2648))).f_abstract) {
((*(yR110 *)y_deref(F.p2645))).f_abstract = 1;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2657_AddFields(void * a_p2658, void * * a_p2659, void * a_p2660, rt_int a_p2661, void * a_p2662, rt_int a_p2663) {
struct yf2664 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2658 = a_p2658;
F.p2659 = a_p2659;
F.p2660 = a_p2660;
F.p2661 = a_p2661;
F.p2662 = a_p2662;
F.p2663 = a_p2663;
F.v5883 = F.p2660;
F.v5885 = F.p2660;
while ((!(F.v5883 == ((void *)0)))) {
Y_TICK();
F.v5887 = yr2603_MakeRep(((*(yR105 *)y_deref(F.v5883))).f_b, INT64_C(0), F.p2663);
if ((!F.p2663)) {
yr2462_CheckRepresented(F.v5887, ((*(yR105 *)y_deref(F.v5883))).f_line);
}
F.v5885 = ((*(yR105 *)y_deref(F.v5883))).f_a;
while ((!(F.v5885 == ((void *)0)))) {
Y_TICK();
yr2644_AddField(F.p2658, &(*F.p2659), ((*(yR105 *)y_deref(F.v5885))).f_name, F.v5887, (((*(yR105 *)y_deref(F.v5883))).f_ival == v270), F.p2661, F.p2662, ((*(yR105 *)y_deref(F.v5885))).f_line);
if ((!(((*(yR105 *)y_deref(F.v5885))).f_a == ((void *)0)))) {
((*(yR115 *)y_deref((*F.p2659)))).f_at = yr2725_AtAddress(((*(yR105 *)y_deref(F.v5885))).f_a);
}
F.v5885 = ((*(yR105 *)y_deref(F.v5885))).f_next;
}
F.v5883 = ((*(yR105 *)y_deref(F.v5883))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2668_MakeRecord(void * a_p2669, void * a_p2670, rt_int a_p2671) {
struct yf2672 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2669 = a_p2669;
F.p2670 = a_p2670;
F.p2671 = a_p2671;
F.v5894 = ((void *)0);
F.v5902 = INT64_C(0);
F.v5909 = INT64_C(0);
yr2657_AddFields(F.p2669, &F.v5894, ((*(yR105 *)y_deref(F.p2670))).f_a, INT64_C(0), ((void *)0), F.p2671);
if ((!(((*(yR105 *)y_deref(F.p2670))).f_b == ((void *)0)))) {
F.v5896 = ((*(yR105 *)y_deref(F.p2670))).f_b;
F.v5900 = yr2603_MakeRep(((*(yR105 *)y_deref(F.v5896))).f_b, INT64_C(0), 0);
if ((!yr2372_IsDiscrete(F.v5900))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v5896))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2644_AddField(F.p2669, &F.v5894, ((*(yR105 *)y_deref(F.v5896))).f_name, F.v5900, 1, INT64_C(0), ((void *)0), ((*(yR105 *)y_deref(F.v5896))).f_line);
((*(yR110 *)y_deref(F.p2669))).f_selector = F.v5894;
F.v5898 = ((*(yR105 *)y_deref(F.v5896))).f_a;
while ((!(F.v5898 == ((void *)0)))) {
Y_TICK();
F.v5902 = rt_range(rt_add(F.v5902, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2657_AddFields(F.p2669, &F.v5894, ((*(yR105 *)y_deref(F.v5898))).f_b, F.v5902, ((*(yR105 *)y_deref(F.v5898))).f_a, F.p2671);
F.v5898 = ((*(yR105 *)y_deref(F.v5898))).f_next;
}
}
if ((F.p2671 && ((*(yR110 *)y_deref(F.p2669))).f_abstract)) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2669))).f_abstract = 0;
v1000 = ((*(yR105 *)y_deref(F.p2670))).f_line;
F.v5902 = yr2703_RecordBits(F.p2669, 0, 1);
F.v5902 = INT64_C(0);
((*(yR110 *)y_deref(F.p2669))).f_cname = yr1200_Fresh(y_str("yR", 2));
yr1026_SB();
yr1037_SA(y_str("typedef struct ", 15));
yr1044_ST(((*(yR110 *)y_deref(F.p2669))).f_cname);
yr1037_SA(y_str(" ", 1));
yr1044_ST(((*(yR110 *)y_deref(F.p2669))).f_cname);
yr1037_SA(y_str(";", 1));
F.v5907 = yr1056_SE();
yr1110_Put(&v978, F.v5907);
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(((*(yR110 *)y_deref(F.p2669))).f_cname);
yr1037_SA(y_str(" {", 2));
F.v5905 = ((*(yR110 *)y_deref(F.p2669))).f_fields;
while ((!(F.v5905 == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2421_CType(((*(yR115 *)y_deref(F.v5905))).f_rep));
yr1037_SA(y_str(" f_", 3));
yr1044_ST(((*(yR115 *)y_deref(F.v5905))).f_name);
yr1037_SA(y_str(";", 1));
F.v5909 = rt_range(rt_add(F.v5909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5905 = ((*(yR115 *)y_deref(F.v5905))).f_next;
}
if ((F.v5909 == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
}
yr1037_SA(y_str(" };", 3));
F.v5907 = yr1056_SE();
yr1110_Put(&v980, F.v5907);
yr2433_NewDesc(F.p2669);
yr1026_SB();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
F.v5905 = ((*(yR110 *)y_deref(F.p2669))).f_fields;
while ((!(F.v5905 == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
yr1044_ST(((*(yR110 *)y_deref(F.p2669))).f_cname);
yr1037_SA(y_str(", f_", 4));
yr1044_ST(((*(yR115 *)y_deref(F.v5905))).f_name);
yr1037_SA(y_str("), ", 3));
F.v5905 = ((*(yR115 *)y_deref(F.v5905))).f_next;
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1050_SI(rt_range(rt_add(F.v5909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" * sizeof *f);", 14));
F.v5902 = INT64_C(0);
F.v5905 = ((*(yR110 *)y_deref(F.p2669))).f_fields;
while ((!(F.v5905 == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
yr1050_SI(F.v5902);
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2427_DescOf(((*(yR115 *)y_deref(F.v5905))).f_rep));
yr1037_SA(y_str(";", 1));
F.v5902 = rt_range(rt_add(F.v5902, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5905 = ((*(yR115 *)y_deref(F.v5905))).f_next;
}
yr1037_SA(y_str(" y_desc_record(", 15));
yr1044_ST(yr2427_DescOf(F.p2669));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(((*(yR110 *)y_deref(F.p2669))).f_cname);
yr1037_SA(y_str("), ", 3));
yr1050_SI(F.v5909);
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5907 = yr1056_SE();
yr1132_Emit(F.v5907);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2676_FindField(void * a_p2677, rt_int a_p2678) {
struct yf2679 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2677 = a_p2677;
F.p2678 = a_p2678;
F.v5959 = ((*(yR110 *)y_deref(F.p2677))).f_fields;
while ((!(F.v5959 == ((void *)0)))) {
Y_TICK();
if ((((*(yR115 *)y_deref(F.v5959))).f_name == F.p2678)) {
{ void * rv5960 = F.v5959;
y_use = F.yu; return rv5960; }
}
F.v5959 = ((*(yR115 *)y_deref(F.v5959))).f_next;
}
{ void * rv5961 = ((void *)0);
y_use = F.yu; return rv5961; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2683_BitsFor(rt_int a_p2684) {
struct yf2685 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2684 = a_p2684;
F.v5965 = INT64_C(1);
F.v5968 = INT64_C(2);
while ((((F.v5968 <= F.p2684)) && ((F.v5965 < INT64_C(63))))) {
Y_TICK();
F.v5965 = rt_range(rt_add(F.v5965, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5968 = rt_range(rt_mul(F.v5968, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5975 = F.v5965;
y_use = F.yu; return rv5975; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2689_RoundUp(rt_int a_p2690, rt_int a_p2691) {
struct yf2692 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2690 = a_p2690;
F.p2691 = a_p2691;
if ((F.p2691 <= INT64_C(1))) {
{ rt_int rv5980 = F.p2690;
y_use = F.yu; return rv5980; }
}
{ rt_int rv5986 = rt_range(rt_mul((rt_div((rt_sub((rt_add(F.p2690, F.p2691)), INT64_C(1))), F.p2691)), F.p2691), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5986; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2696_Bits(void * a_p2697, rt_int a_p2698) {
struct yf2699 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2697 = a_p2697;
F.p2698 = a_p2698;
F.v5991 = ((*(yR110 *)y_deref(F.p2697))).f_kind;
F.v5993 = (F.p2698 || ((*(yR110 *)y_deref(F.p2697))).f_packed);
if (((!F.v5993) && ((!(((*(yR110 *)y_deref(F.p2697))).f_bits == INT64_C(0)))))) {
{ rt_int rv6005 = ((*(yR110 *)y_deref(F.p2697))).f_bits;
y_use = F.yu; return rv6005; }
}
F.v5995 = INT64_C(64);
if (yr2372_IsDiscrete(F.p2697)) {
if (F.v5993) {
if (((((F.v5991 == v816)) || ((F.v5991 == v819))) || ((F.v5991 == v813)))) {
F.v5995 = yr2683_BitsFor(rt_range(rt_sub(((*(yR110 *)y_deref(F.p2697))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
} else if (((*(yR110 *)y_deref(F.p2697))).f_hasm) {
F.v5999 = ((*(yR110 *)y_deref(F.p2697))).f_mlo;
F.v6001 = ((*(yR110 *)y_deref(F.p2697))).f_mhi;
if ((F.v5999 >= INT64_C(0))) {
F.v5995 = yr2683_BitsFor(F.v6001);
} else if (((rt_sub(INT64_C(-1), F.v5999)) > F.v6001)) {
F.v5995 = rt_range(rt_add(INT64_C(1), yr2683_BitsFor(rt_range(rt_sub(INT64_C(-1), F.v5999), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5995 = rt_range(rt_add(INT64_C(1), yr2683_BitsFor(F.v6001)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
} else if ((F.v5991 == v807)) {
F.v5995 = INT64_C(128);
} else if ((((F.v5991 == v828)) || ((F.v5991 == v849)))) {
if (F.v5993) {
F.v5995 = INT64_C(24);
}
} else if ((F.v5991 == v834)) {
if (((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2697))).f_elem))).f_hasm) {
F.v5997 = rt_range(rt_add((rt_sub(((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2697))).f_elem))).f_mhi, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2697))).f_elem))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5997 > (rt_div(v906, INT64_C(2))))) {
F.v5995 = INT64_C(-1);
} else if (F.v5993) {
F.v5995 = F.v5997;
} else {
F.v5995 = yr2689_RoundUp(F.v5997, INT64_C(64));
}
} else {
F.v5995 = INT64_C(-1);
}
} else if ((F.v5991 == v822)) {
F.v5997 = INT64_C(1);
F.v6003 = ((*(yR110 *)y_deref(F.p2697))).f_idx;
while ((!(F.v6003 == ((void *)0)))) {
Y_TICK();
if ((!((*(yR110 *)y_deref(F.v6003))).f_hasm)) {
{ rt_int rv6030 = INT64_C(-1);
y_use = F.yu; return rv6030; }
}
F.v5997 = rt_range(rt_mul(F.v5997, (rt_add((rt_sub(((*(yR110 *)y_deref(F.v6003))).f_mhi, ((*(yR110 *)y_deref(F.v6003))).f_mlo)), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5997 > INT64_C(100000000000))) {
{ rt_int rv6037 = INT64_C(-1);
y_use = F.yu; return rv6037; }
}
F.v6003 = ((*(yR110 *)y_deref(F.v6003))).f_link;
}
F.v5995 = yr2696_Bits(((*(yR110 *)y_deref(F.p2697))).f_elem, F.v5993);
if ((F.v5995 < INT64_C(0))) {
{ rt_int rv6040 = INT64_C(-1);
y_use = F.yu; return rv6040; }
}
if (((!F.v5993) && (!((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2697))).f_elem))).f_packed))) {
F.v5995 = yr2689_RoundUp(F.v5995, INT64_C(64));
}
F.v5995 = yr2689_RoundUp(F.v5995, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2697))).f_elem))).f_align);
F.v5995 = rt_range(rt_mul(F.v5995, F.v5997), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5991 == v825)) {
F.v5995 = yr2703_RecordBits(F.p2697, F.v5993, 0);
} else if (((((F.v5991 == v843)) || ((F.v5991 == v846))) || ((F.v5991 == v855)))) {
F.v5995 = INT64_C(-1);
}
if ((((F.v5995 > INT64_C(0))) && (!F.v5993))) {
F.v5995 = yr2689_RoundUp(F.v5995, INT64_C(64));
}
if ((!F.v5993)) {
((*(yR110 *)y_deref(F.p2697))).f_bits = F.v5995;
}
{ rt_int rv6047 = F.v5995;
y_use = F.yu; return rv6047; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2703_RecordBits(void * a_p2704, rt_int a_p2705, rt_int a_p2706) {
struct yf2707 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2704 = a_p2704;
F.p2705 = a_p2705;
F.p2706 = a_p2706;
F.v6055 = INT64_C(0);
F.v6058 = INT64_C(0);
F.v6061 = INT64_C(0);
F.v6064 = INT64_C(0);
F.v6067 = INT64_C(0);
F.v6070 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6080, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6080, &F.v6082);
y_init(&F.yd_6080, &F.v6084);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6093, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_6093, &F.v6095);
F.v6053 = ((*(yR110 *)y_deref(F.p2704))).f_fields;
while ((!(F.v6053 == ((void *)0)))) {
Y_TICK();
F.v6061 = yr2696_Bits(((*(yR115 *)y_deref(F.v6053))).f_rep, F.p2705);
if ((F.v6061 < INT64_C(0))) {
{ rt_int rv6098 = INT64_C(-1);
y_use = F.yu; return rv6098; }
}
if (((!F.p2705) && (!((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v6053))).f_rep))).f_packed))) {
F.v6061 = yr2689_RoundUp(F.v6061, INT64_C(64));
}
if ((!(((*(yR115 *)y_deref(F.v6053))).f_variant == INT64_C(0)))) {
if ((F.v6067 == INT64_C(0))) {
F.v6067 = F.v6055;
}
if (yr2711_FirstOfVariant(F.p2704, F.v6053)) {
F.v6055 = F.v6067;
}
}
if ((((*(yR115 *)y_deref(F.v6053))).f_at >= INT64_C(0))) {
F.v6064 = ((*(yR115 *)y_deref(F.v6053))).f_at;
} else if ((F.p2705 || ((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v6053))).f_rep))).f_packed)) {
F.v6064 = yr2689_RoundUp(F.v6055, ((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v6053))).f_rep))).f_align);
} else {
F.v6064 = yr2689_RoundUp(F.v6055, INT64_C(64));
}
if ((F.p2706 && ((F.v6070 < INT64_C(512))))) {
F.v6070 = rt_range(rt_add(F.v6070, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6082).p)[y_ix1(F.v6082, F.v6070)] = F.v6064;
((rt_int *)(F.v6084).p)[y_ix1(F.v6084, F.v6070)] = rt_range(rt_add(F.v6064, F.v6061), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(F.v6095).p)[y_ix1(F.v6095, F.v6070)] = F.v6053;
}
F.v6055 = rt_range(rt_add(F.v6064, F.v6061), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v6055 > F.v6058)) {
F.v6058 = F.v6055;
}
F.v6053 = ((*(yR115 *)y_deref(F.v6053))).f_next;
}
if (F.p2706) {
F.lo6112 = INT64_C(1);
F.hi6113 = F.v6070;
{ rt_int hi6117 = F.hi6113;
for (rt_int i6116 = F.lo6112; i6116 <= hi6117; i6116++) { F.c_6115 = i6116; Y_TICK();
F.lo6121 = rt_add(F.c_6115, INT64_C(1));
F.hi6122 = F.v6070;
{ rt_int hi6126 = F.hi6122;
for (rt_int i6125 = F.lo6121; i6125 <= hi6126; i6125++) { F.c_6124 = i6125; Y_TICK();
if ((((((((((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6115)]))).f_at >= INT64_C(0))) || ((((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6124)]))).f_at >= INT64_C(0))))) && ((((rt_int *)(F.v6082).p)[y_ix1(F.v6082, F.c_6115)] < ((rt_int *)(F.v6084).p)[y_ix1(F.v6084, F.c_6124)]))) && ((((rt_int *)(F.v6082).p)[y_ix1(F.v6082, F.c_6124)] < ((rt_int *)(F.v6084).p)[y_ix1(F.v6084, F.c_6115)]))) && (((((((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6115)]))).f_variant == INT64_C(0))) || ((((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6124)]))).f_variant == INT64_C(0)))) || ((((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6115)]))).f_variant == ((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6124)]))).f_variant)))))) {
yr1157_Fail(v1000, yr3292_Join(((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6124)]))).f_name, yr3292_Join(yr1061_T(y_str(" overlaps ", 10)), ((*(yR115 *)y_deref(((void * *)(F.v6095).p)[y_ix1(F.v6095, F.c_6115)]))).f_name, INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
}
if (i6125 == hi6126) break;
}}
if (i6116 == hi6117) break;
}}
}
{ rt_int rv6134 = F.v6058;
y_use = F.yu; return rv6134; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2711_FirstOfVariant(void * a_p2712, void * a_p2713) {
struct yf2714 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2712 = a_p2712;
F.p2713 = a_p2713;
F.v6139 = ((*(yR110 *)y_deref(F.p2712))).f_fields;
while ((!(F.v6139 == F.p2713))) {
Y_TICK();
if ((((*(yR115 *)y_deref(F.v6139))).f_variant == ((*(yR115 *)y_deref(F.p2713))).f_variant)) {
{ rt_int rv6141 = 0;
y_use = F.yu; return rv6141; }
}
F.v6139 = ((*(yR115 *)y_deref(F.v6139))).f_next;
}
{ rt_int rv6143 = 1;
y_use = F.yu; return rv6143; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2718_ApplyStorage(void * a_p2719, void * a_p2720) {
struct yf2721 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2719 = a_p2719;
F.p2720 = a_p2720;
F.v6148 = yr2366_CopyRep(F.p2719);
if ((((*(yR105 *)y_deref(F.p2720))).f_flag == INT64_C(1))) {
((*(yR110 *)y_deref(F.v6148))).f_packed = 1;
if ((!(((*(yR105 *)y_deref(F.p2720))).f_a == ((void *)0)))) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p2720))).f_a, &F.v6150, &F.v6152);
if (((!F.v6150) || ((F.v6152 < INT64_C(1))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2720))).f_line, y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
}
((*(yR110 *)y_deref(F.v6148))).f_pbits = F.v6152;
}
}
if ((!(((*(yR105 *)y_deref(F.p2720))).f_b == ((void *)0)))) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p2720))).f_b, &F.v6150, &F.v6152);
if ((((!F.v6150) || ((F.v6152 < INT64_C(1)))) || ((F.v6152 > INT64_C(64))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2720))).f_line, y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
}
((*(yR110 *)y_deref(F.v6148))).f_align = F.v6152;
}
if ((((*(yR110 *)y_deref(F.v6148))).f_pbits > INT64_C(0))) {
F.v6154 = yr2696_Bits(F.v6148, 1);
if ((F.v6154 < INT64_C(0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2720))).f_line, y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
}
if ((F.v6154 > ((*(yR110 *)y_deref(F.v6148))).f_pbits)) {
yr1026_SB();
yr1037_SA(y_str("this representation needs ", 26));
yr1050_SI(F.v6154);
yr1037_SA(y_str(" bits, more than PACKED ", 24));
yr1050_SI(((*(yR110 *)y_deref(F.v6148))).f_pbits);
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
yr1157_Fail(((*(yR105 *)y_deref(F.p2720))).f_line, yr1056_SE());
}
}
{ void * rv6169 = F.v6148;
y_use = F.yu; return rv6169; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2725_AtAddress(void * a_p2726) {
struct yf2727 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2726 = a_p2726;
yr2790_Manifest(F.p2726, &F.v6173, &F.v6175);
if (((!F.v6173) || ((F.v6175 < INT64_C(0))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2726))).f_line, y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
}
{ rt_int rv6178 = F.v6175;
y_use = F.yu; return rv6178; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2731_StoreAt(rt_int a_p2732, rt_int a_p2733) {
struct yf2734 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2732 = a_p2732;
F.p2733 = a_p2733;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(F.p2732);
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
yr1050_SI(F.p2733);
yr1037_SA(y_str("), sizeof(", 10));
yr1044_ST(F.p2732);
yr1037_SA(y_str(")))", 3));
{ rt_int rv6186 = yr1056_SE();
y_use = F.yu; return rv6186; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2738_ExtentCode(rt_int a_p2739, void * a_p2740) {
struct yf2741 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2739 = a_p2739;
F.p2740 = a_p2740;
if ((((*(yR110 *)y_deref(F.p2740))).f_kind == v855)) {
{ rt_int rv6196 = yr3292_Join(yr1061_T(y_str("(", 1)), F.p2739, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6196; }
}
F.v6191 = yr2696_Bits(F.p2740, 0);
if ((F.v6191 >= INT64_C(0))) {
{ rt_int rv6203 = yr3097_Num(rt_range(rt_div((rt_add(F.v6191, INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6203; }
}
if (yr2384_IsArrayLike(F.p2740)) {
F.v6193 = yr2696_Bits(((*(yR110 *)y_deref(F.p2740))).f_elem, ((*(yR110 *)y_deref(F.p2740))).f_packed);
if ((F.v6193 >= INT64_C(0))) {
if ((!((*(yR110 *)y_deref(F.p2740))).f_packed)) {
F.v6193 = yr2689_RoundUp(F.v6193, INT64_C(64));
}
yr1026_SB();
yr1037_SA(y_str("((y_count(", 10));
yr1044_ST(F.p2739);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2740))).f_nidx);
yr1037_SA(y_str(") * INT64_C(", 12));
yr1050_SI(F.v6193);
yr1037_SA(y_str(") + 63) / 64)", 13));
{ rt_int rv6210 = yr1056_SE();
y_use = F.yu; return rv6210; }
}
}
{ rt_int rv6213 = yr3292_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2739, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6213; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2745_SpaceArg(void * a_p2746, rt_int a_p2747, void * a_p2748) {
struct yf2749 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2746 = a_p2746;
F.p2747 = a_p2747;
F.p2748 = a_p2748;
if ((((*(yR110 *)y_deref(F.p2748))).f_kind == v855)) {
{ rt_int rv6220 = F.p2747;
y_use = F.yu; return rv6220; }
}
if ((yr2899_IsVariable(F.p2746) || ((((((*(yR105 *)y_deref(F.p2746))).f_kind == v777)) && ((!(((*(yR110 *)y_deref(F.p2748))).f_kind == v846))))))) {
{ rt_int rv6224 = yr3292_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), F.p2747, yr3292_Join(yr1061_T(y_str("), ", 3)), yr2738_ExtentCode(F.p2747, F.p2748), yr1061_T(y_str(" })", 3))));
y_use = F.yu; return rv6224; }
}
F.v6219 = yr1200_Fresh(y_str("sp", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2421_CType(F.p2748));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6219);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2747);
yr1037_SA(y_str("; void *", 8));
yr1044_ST(F.v6219);
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
yr1044_ST(F.v6219);
yr1037_SA(y_str("); memcpy(", 10));
yr1044_ST(F.v6219);
yr1037_SA(y_str("c, &", 4));
yr1044_ST(F.v6219);
yr1037_SA(y_str(", sizeof ", 9));
yr1044_ST(F.v6219);
yr1037_SA(y_str("); (yspace){ ", 13));
yr1044_ST(F.v6219);
yr1037_SA(y_str("c, ", 3));
yr1044_ST(yr2738_ExtentCode(F.v6219, F.p2748));
yr1037_SA(y_str(" }; })", 6));
{ rt_int rv6237 = yr1056_SE();
y_use = F.yu; return rv6237; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2753_PackedComponent(void * a_p2754) {
struct yf2755 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2754 = a_p2754;
F.v6241 = F.p2754;
while (((((((*(yR105 *)y_deref(F.v6241))).f_kind == v783)) || ((((*(yR105 *)y_deref(F.v6241))).f_kind == v786))) || ((((*(yR105 *)y_deref(F.v6241))).f_kind == v801)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v6241))).f_kind == v801))) {
if ((!(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v6241))).f_a))).f_rep == ((void *)0)))) {
if (((*(yR110 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v6241))).f_a))).f_rep))).f_packed) {
{ rt_int rv6243 = 1;
y_use = F.yu; return rv6243; }
}
}
}
F.v6241 = ((*(yR105 *)y_deref(F.v6241))).f_a;
}
{ rt_int rv6245 = 0;
y_use = F.yu; return rv6245; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2759_CharOrd(void * a_p2760, rt_int a_p2761) {
struct yf2762 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2760 = a_p2760;
F.p2761 = a_p2761;
if ((((*(yR110 *)y_deref(F.p2760))).f_tid == ((*(yR110 *)y_deref(v1346))).f_tid)) {
if ((((rt_int *)(v920).p)[y_ix1(v920, F.p2761)] == INT64_C(1))) {
{ rt_int rv6261 = ((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2761, INT64_C(1)))];
y_use = F.yu; return rv6261; }
}
F.v6252 = INT64_C(0);
F.v6256 = INT64_C(1);
F.lo6267 = INT64_C(1);
F.hi6268 = ((rt_int *)(v920).p)[y_ix1(v920, v1480)];
{ rt_int hi6272 = F.hi6268;
for (rt_int i6271 = F.lo6267; i6271 <= hi6272; i6271++) { F.c_6270 = i6271; Y_TICK();
if ((yr1103_TChar(v1480, rt_range(F.c_6270, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6258 = yr1068_Intern(rt_range(rt_add(((rt_int *)(v918).p)[y_ix1(v918, v1480)], (rt_sub(F.v6256, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_6270, F.v6256), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v6258 == F.p2761)) {
if ((F.v6252 < INT64_C(32))) {
{ rt_int rv6279 = F.v6252;
y_use = F.yu; return rv6279; }
}
if ((F.v6252 == INT64_C(32))) {
{ rt_int rv6282 = INT64_C(32);
y_use = F.yu; return rv6282; }
}
if ((F.v6252 == INT64_C(33))) {
{ rt_int rv6285 = INT64_C(127);
y_use = F.yu; return rv6285; }
}
if ((F.v6252 == INT64_C(34))) {
{ rt_int rv6288 = INT64_C(39);
y_use = F.yu; return rv6288; }
}
{ rt_int rv6290 = INT64_C(34);
y_use = F.yu; return rv6290; }
}
F.v6252 = rt_range(rt_add(F.v6252, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6256 = rt_range(rt_add(F.c_6270, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i6271 == hi6272) break;
}}
{ rt_int rv6296 = INT64_C(-1);
y_use = F.yu; return rv6296; }
}
if ((!(((*(yR110 *)y_deref(F.p2760))).f_kind == v819))) {
{ rt_int rv6298 = INT64_C(-1);
y_use = F.yu; return rv6298; }
}
F.v6250 = ((*(yR110 *)y_deref(F.p2760))).f_lits;
F.v6254 = INT64_C(0);
while ((!(F.v6250 == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(((*(yR105 *)y_deref(F.v6250))).f_text, F.p2761)) {
{ rt_int rv6300 = F.v6254;
y_use = F.yu; return rv6300; }
}
F.v6254 = rt_range(rt_add(F.v6254, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6250 = ((*(yR105 *)y_deref(F.v6250))).f_next;
}
{ rt_int rv6304 = INT64_C(-1);
y_use = F.yu; return rv6304; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2766_AlphabetFor(void * a_p2767, void * a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2767 = a_p2767;
F.p2768 = a_p2768;
F.v6313 = ((void *)0);
F.v6315 = INT64_C(0);
F.v6318 = INT64_C(0);
if ((!(((*(yR105 *)y_deref(F.p2767))).f_d == ((void *)0)))) {
F.v6309 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2767))).f_d))).f_name, ((*(yR105 *)y_deref(F.p2767))).f_line));
if ((((((!(((*(yR125 *)y_deref(F.v6309))).f_kind == v867))) && ((!(((*(yR125 *)y_deref(F.v6309))).f_kind == v870))))) || ((!(((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v6309))).f_rep))).f_kind == v819))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2767))).f_line, ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2767))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv6321 = ((*(yR125 *)y_deref(F.v6309))).f_rep;
y_use = F.yu; return rv6321; }
}
F.v6318 = INT64_C(1);
if ((((((*(yR105 *)y_deref(F.p2767))).f_kind == v771)) || ((yr2759_CharOrd(v1346, ((*(yR105 *)y_deref(F.p2767))).f_text) >= INT64_C(0))))) {
F.v6315 = INT64_C(1);
F.v6313 = v1346;
}
F.v6311 = v1483;
while ((!(F.v6311 == ((void *)0)))) {
Y_TICK();
F.v6309 = yr2248_Find(((*(yR105 *)y_deref(F.v6311))).f_name);
if ((!(F.v6309 == ((void *)0)))) {
F.v6309 = yr2353_Real(F.v6309);
if ((((((((*(yR125 *)y_deref(F.v6309))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v6309))).f_kind == v870)))) && ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v6309))).f_rep))).f_tid == ((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v6311))).f_rep))).f_tid)))) {
F.v6318 = rt_range(rt_add(F.v6318, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR105 *)y_deref(F.p2767))).f_kind == v768)) && ((yr2759_CharOrd(((*(yR105 *)y_deref(F.v6311))).f_rep, ((*(yR105 *)y_deref(F.p2767))).f_text) >= INT64_C(0))))) {
F.v6315 = rt_range(rt_add(F.v6315, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6313 = ((*(yR105 *)y_deref(F.v6311))).f_rep;
}
}
}
F.v6311 = ((*(yR105 *)y_deref(F.v6311))).f_next;
}
if ((((((*(yR105 *)y_deref(F.p2767))).f_kind == v771)) && ((F.v6318 > INT64_C(1))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2767))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v6315 > INT64_C(1))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2767))).f_line, yr3292_Join(yr1061_T(y_str("'", 1)), ((*(yR105 *)y_deref(F.p2767))).f_text, yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v6313 == ((void *)0))) {
{ void * rv6336 = v1346;
y_use = F.yu; return rv6336; }
}
{ void * rv6337 = F.v6313;
y_use = F.yu; return rv6337; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2773_CharValue(void * a_p2774, rt_int a_p2775, rt_int a_p2776) {
struct yf2777 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2774 = a_p2774;
F.p2775 = a_p2775;
F.p2776 = a_p2776;
F.v6343 = yr2759_CharOrd(F.p2774, F.p2775);
if ((F.v6343 < INT64_C(0))) {
yr1026_SB();
yr1037_SA(y_str("'", 1));
yr1044_ST(F.p2775);
yr1037_SA(y_str("' is not a character of ", 24));
yr1044_ST(((*(yR110 *)y_deref(F.p2774))).f_tname);
F.v6345 = yr1056_SE();
yr1157_Fail(F.p2776, F.v6345);
}
{ rt_int rv6349 = F.v6343;
y_use = F.yu; return rv6349; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2781_StringCodes(void * a_p2782, rt_int a_p2783, rt_int * a_p2784, rt_int a_p2785) {
struct yf2786 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2782 = a_p2782;
F.p2783 = a_p2783;
F.p2784_o = a_p2784;
F.p2785 = a_p2785;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_6369, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6369, &F.v6371);
F.p2784 = INT64_C(0);
F.v6356 = INT64_C(1);
while ((F.v6356 <= ((rt_int *)(v920).p)[y_ix1(v920, F.p2783)])) {
Y_TICK();
F.v6373 = yr1103_TChar(F.p2783, F.v6356);
if ((F.v6373 == 39)) {
F.v6358 = rt_range(rt_add(F.v6356, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6358 <= ((rt_int *)(v920).p)[y_ix1(v920, F.p2783)])) && ((!(yr1103_TChar(F.p2783, F.v6358) == 39))))) {
Y_TICK();
F.v6358 = rt_range(rt_add(F.v6358, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6358 > ((rt_int *)(v920).p)[y_ix1(v920, F.p2783)])) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(F.p2785, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v6375 = yr1068_Intern(rt_range(rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p2783)], F.v6356), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6358, F.v6356)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6360 = yr2773_CharValue(F.p2782, F.v6375, F.p2785);
F.v6356 = rt_range(rt_add(F.v6358, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6375 = yr1068_Intern(rt_range(rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.p2783)], (rt_sub(F.v6356, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v6360 = yr2773_CharValue(F.p2782, F.v6375, F.p2785);
F.v6356 = rt_range(rt_add(F.v6356, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2784 >= INT64_C(65536))) {
yr1178_FailS(F.p2785, y_str("this implementation takes string literals of up to 65536 characters", 67));
}
F.p2784 = rt_range(rt_add(F.p2784, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6371).p)[y_ix1(F.v6371, F.p2784)] = F.v6360;
}
yr1026_SB();
yr1031_SC(34);
F.lo6407 = INT64_C(1);
F.hi6408 = F.p2784;
{ rt_int hi6412 = F.hi6408;
for (rt_int i6411 = F.lo6407; i6411 <= hi6412; i6411++) { F.c_6410 = i6411; Y_TICK();
F.v6360 = ((rt_int *)(F.v6371).p)[y_ix1(F.v6371, F.c_6410)];
if ((((F.v6360 == INT64_C(34))) || ((F.v6360 == INT64_C(92))))) {
yr1031_SC(92);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, F.v6360)]);
} else if (((((F.v6360 >= INT64_C(32))) && ((F.v6360 < INT64_C(127)))) && (((((!(F.v6360 == INT64_C(63)))) || ((F.c_6410 == INT64_C(1)))) || ((!(((rt_int *)(F.v6371).p)[y_ix1(F.v6371, rt_sub(F.c_6410, INT64_C(1)))] == INT64_C(63)))))))) {
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, F.v6360)]);
} else {
yr1031_SC(92);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, rt_add(INT64_C(48), (rt_div(F.v6360, INT64_C(64)))))]);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, rt_add(INT64_C(48), (rt_mod((rt_div(F.v6360, INT64_C(8))), INT64_C(8)))))]);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, rt_add(INT64_C(48), (rt_mod(F.v6360, INT64_C(8)))))]);
}
if (i6411 == hi6412) break;
}}
yr1031_SC(34);
{ rt_int rv6439 = yr1056_SE();
(*F.p2784_o) = F.p2784;
y_use = F.yu; return rv6439; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2790_Manifest(void * a_p2791, rt_int * a_p2792, rt_int * a_p2793) {
struct yf2794 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2791 = a_p2791;
F.p2792_o = a_p2792;
F.p2793_o = a_p2793;
F.p2792 = 0;
F.p2793 = INT64_C(0);
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v759)) {
F.p2792 = 1;
F.p2793 = ((*(yR105 *)y_deref(F.p2791))).f_ival;
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v768)) {
F.v6457 = yr2766_AlphabetFor(F.p2791, ((void *)0));
F.p2793 = yr2759_CharOrd(F.v6457, ((*(yR105 *)y_deref(F.p2791))).f_text);
F.p2792 = (F.p2793 >= INT64_C(0));
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v777)) {
if ((!(((*(yR105 *)y_deref(F.p2791))).f_d == ((void *)0)))) {
F.v6445 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2791))).f_d))).f_name, ((*(yR105 *)y_deref(F.p2791))).f_line));
F.v6445 = yr2313_FindLit(((*(yR105 *)y_deref(F.p2791))).f_name, ((*(yR125 *)y_deref(F.v6445))).f_rep);
} else {
F.v6445 = yr2248_Find(((*(yR105 *)y_deref(F.p2791))).f_name);
}
if ((F.v6445 == ((void *)0))) {
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
F.v6445 = yr2353_Real(F.v6445);
if ((((((((*(yR125 *)y_deref(F.v6445))).f_kind == v873)) || ((((*(yR125 *)y_deref(F.v6445))).f_kind == v864)))) && ((*(yR125 *)y_deref(F.v6445))).f_hasmv)) {
F.p2792 = 1;
F.p2793 = ((*(yR125 *)y_deref(F.v6445))).f_mval;
}
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v801)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p2791))).f_a, &F.p2792, &F.p2793);
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v795)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p2791))).f_a, &F.p2792, &F.p2793);
F.p2793 = rt_range(rt_neg(F.p2793), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v798)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p2791))).f_a, &F.v6451, &F.v6447);
yr2790_Manifest(((*(yR105 *)y_deref(F.p2791))).f_b, &F.v6453, &F.v6449);
if ((!((F.v6451 && F.v6453)))) {
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
F.v6455 = ((*(yR105 *)y_deref(F.p2791))).f_name;
F.p2792 = 1;
if ((F.v6455 == v573)) {
F.p2793 = rt_range(rt_add(F.v6447, F.v6449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6455 == v576)) {
F.p2793 = rt_range(rt_sub(F.v6447, F.v6449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6455 == v579)) {
F.p2793 = rt_range(rt_mul(F.v6447, F.v6449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6455 == v276)) && ((!(F.v6449 == INT64_C(0)))))) {
F.p2793 = rt_range(rt_div(F.v6447, F.v6449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6455 == v378)) && ((!(F.v6449 == INT64_C(0)))))) {
F.p2793 = rt_range(rt_mod(F.v6447, F.v6449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6455 == v237)) {
F.p2793 = rt_range(rt_mul(F.v6447, F.v6449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6455 == v399)) {
F.p2793 = rt_range(rt_sub((rt_add(F.v6447, F.v6449)), (rt_mul(F.v6447, F.v6449))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6455 == v489)) {
F.p2793 = rt_range(rt_mod((rt_add(F.v6447, F.v6449)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2792 = 0;
}
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v792)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p2791))).f_a, &F.p2792, &F.p2793);
F.p2793 = rt_range(rt_sub(INT64_C(1), F.p2793), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2791))).f_kind == v780)) {
yr2798_ManifestStd(F.p2791, &F.p2792, &F.p2793);
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
}
(*F.p2792_o) = F.p2792;
(*F.p2793_o) = F.p2793;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2798_ManifestStd(void * a_p2799, rt_int * a_p2800, rt_int * a_p2801) {
struct yf2802 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2799 = a_p2799;
F.p2800_o = a_p2800;
F.p2801_o = a_p2801;
F.p2800 = 0;
F.p2801 = INT64_C(0);
F.v6487 = yr2248_Find(((*(yR105 *)y_deref(F.p2799))).f_name);
if ((F.v6487 == ((void *)0))) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
F.v6487 = yr2353_Real(F.v6487);
if ((!(((*(yR125 *)y_deref(F.v6487))).f_kind == v891))) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
F.v6489 = ((*(yR125 *)y_deref(F.v6487))).f_mval;
if ((((((F.v6489 == v1372)) || ((F.v6489 == v1375))) || ((F.v6489 == v1378))) || ((F.v6489 == v1381)))) {
if ((!(yr1919_Count(((*(yR105 *)y_deref(F.p2799))).f_a) == INT64_C(1)))) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
yr2938_Expr(((*(yR105 *)y_deref(F.p2799))).f_a, ((void *)0), &F.v6497, &F.v6499);
if ((!yr2372_IsDiscrete(F.v6499))) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
if ((((F.v6489 == v1378)) || ((F.v6489 == v1381)))) {
if ((!(((*(yR110 *)y_deref(F.v6499))).f_elem == ((void *)0)))) {
F.v6499 = ((*(yR110 *)y_deref(F.v6499))).f_elem;
}
if ((!((*(yR110 *)y_deref(F.v6499))).f_hasm)) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
F.p2800 = 1;
if ((F.v6489 == v1378)) {
F.p2801 = ((*(yR110 *)y_deref(F.v6499))).f_mlo;
} else {
F.p2801 = ((*(yR110 *)y_deref(F.v6499))).f_mhi;
}
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
yr2790_Manifest(((*(yR105 *)y_deref(F.p2799))).f_a, &F.v6493, &F.p2801);
if ((!F.v6493)) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
if ((F.v6489 == v1372)) {
F.p2801 = rt_range(rt_add(F.p2801, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2801 = rt_range(rt_sub(F.p2801, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR110 *)y_deref(F.v6499))).f_elem == ((void *)0)))) {
F.v6499 = ((*(yR110 *)y_deref(F.v6499))).f_elem;
}
if ((((!(((*(yR110 *)y_deref(F.v6499))).f_kind == v804))) && ((((F.p2801 < INT64_C(0))) || ((F.p2801 >= ((*(yR110 *)y_deref(F.v6499))).f_nlits)))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2799))).f_line, ((*(yR105 *)y_deref(F.p2799))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2800 = 1;
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
if ((((F.v6489 == v1366)) || ((F.v6489 == v1369)))) {
if ((!(yr1919_Count(((*(yR105 *)y_deref(F.p2799))).f_a) == INT64_C(2)))) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
yr2790_Manifest(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2799))).f_a))).f_next, &F.v6495, &F.v6491);
if ((!F.v6495)) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
yr2938_Expr(((*(yR105 *)y_deref(F.p2799))).f_a, ((void *)0), &F.v6497, &F.v6499);
if (((((!(((*(yR110 *)y_deref(F.v6499))).f_kind == v822))) || ((F.v6491 < INT64_C(1)))) || ((F.v6491 > ((*(yR110 *)y_deref(F.v6499))).f_nidx)))) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
F.v6501 = ((*(yR110 *)y_deref(F.v6499))).f_idx;
F.lo6518 = INT64_C(2);
F.hi6519 = F.v6491;
{ rt_int hi6523 = F.hi6519;
for (rt_int i6522 = F.lo6518; i6522 <= hi6523; i6522++) { F.c_6521 = i6522; Y_TICK();
F.v6501 = ((*(yR110 *)y_deref(F.v6501))).f_link;
if (i6522 == hi6523) break;
}}
if ((!((*(yR110 *)y_deref(F.v6501))).f_hasm)) {
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
F.p2800 = 1;
if ((F.v6489 == v1366)) {
F.p2801 = ((*(yR110 *)y_deref(F.v6501))).f_mlo;
} else {
F.p2801 = ((*(yR110 *)y_deref(F.v6501))).f_mhi;
}
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
}
(*F.p2800_o) = F.p2800;
(*F.p2801_o) = F.p2801;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2806_NeedsConv(void * a_p2807, void * a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2807 = a_p2807;
F.p2808 = a_p2808;
if ((F.p2807 == F.p2808)) {
{ rt_int rv6529 = 0;
y_use = F.yu; return rv6529; }
}
if (yr2372_IsDiscrete(F.p2807)) {
if ((((*(yR110 *)y_deref(F.p2807))).f_lo == INT64_C(0))) {
{ rt_int rv6532 = 0;
y_use = F.yu; return rv6532; }
}
{ rt_int rv6533 = (!((((((*(yR110 *)y_deref(F.p2807))).f_hasm && ((*(yR110 *)y_deref(F.p2808))).f_hasm) && ((((*(yR110 *)y_deref(F.p2807))).f_mlo <= ((*(yR110 *)y_deref(F.p2808))).f_mlo))) && ((((*(yR110 *)y_deref(F.p2808))).f_mhi <= ((*(yR110 *)y_deref(F.p2807))).f_mhi)))));
y_use = F.yu; return rv6533; }
}
if ((((*(yR110 *)y_deref(F.p2807))).f_kind == v810)) {
{ rt_int rv6535 = (!(((*(yR110 *)y_deref(F.p2807))).f_lo == INT64_C(0)));
y_use = F.yu; return rv6535; }
}
if ((((*(yR110 *)y_deref(F.p2807))).f_kind == v807)) {
{ rt_int rv6537 = ((((!(((*(yR110 *)y_deref(F.p2807))).f_lo == INT64_C(0)))) || ((!(((*(yR110 *)y_deref(F.p2807))).f_fsn == ((*(yR110 *)y_deref(F.p2808))).f_fsn)))) || ((!(((*(yR110 *)y_deref(F.p2807))).f_fsd == ((*(yR110 *)y_deref(F.p2808))).f_fsd))));
y_use = F.yu; return rv6537; }
}
if ((((*(yR110 *)y_deref(F.p2807))).f_kind == v825)) {
{ rt_int rv6538 = (((((*(yR110 *)y_deref(F.p2808))).f_kind == v825)) && ((!(((*(yR110 *)y_deref(F.p2807))).f_cname == ((*(yR110 *)y_deref(F.p2808))).f_cname))));
y_use = F.yu; return rv6538; }
}
if ((((((*(yR110 *)y_deref(F.p2807))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2807))).f_kind == v843)))) {
if ((((!(((*(yR110 *)y_deref(F.p2808))).f_kind == v822))) && ((!(((*(yR110 *)y_deref(F.p2808))).f_kind == v843))))) {
{ rt_int rv6540 = 0;
y_use = F.yu; return rv6540; }
}
{ rt_int rv6541 = yr2806_NeedsConv(((*(yR110 *)y_deref(F.p2807))).f_elem, ((*(yR110 *)y_deref(F.p2808))).f_elem);
y_use = F.yu; return rv6541; }
}
{ rt_int rv6543 = 0;
y_use = F.yu; return rv6543; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2813_ConvertRecord(rt_int a_p2814, void * a_p2815, void * a_p2816) {
struct yf2817 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2814 = a_p2814;
F.p2815 = a_p2815;
F.p2816 = a_p2816;
F.v6549 = yr1200_Fresh(y_str("cs", 2));
F.v6551 = yr1200_Fresh(y_str("cd", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2421_CType(F.p2816));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6549);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2814);
yr1037_SA(y_str("; ", 2));
yr1044_ST(yr2421_CType(F.p2815));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6551);
yr1037_SA(y_str("; memset(&", 10));
yr1044_ST(F.v6551);
yr1037_SA(y_str(", 0, sizeof ", 12));
yr1044_ST(F.v6551);
yr1037_SA(y_str(");", 2));
F.v6553 = ((*(yR110 *)y_deref(F.p2815))).f_fields;
while ((!(F.v6553 == ((void *)0)))) {
Y_TICK();
F.v6555 = yr2676_FindField(F.p2816, ((*(yR115 *)y_deref(F.v6553))).f_name);
if ((!(F.v6555 == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
if ((!(((*(yR115 *)y_deref(F.v6555))).f_variant == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
yr1044_ST(yr2947_VariantTest(F.p2816, F.v6555, yr3292_Join(yr1061_T(y_str("(&", 2)), F.v6549, yr1061_T(y_str(")", 1)))));
yr1037_SA(y_str(") ", 2));
}
yr1044_ST(F.v6551);
yr1037_SA(y_str(".f_", 3));
yr1044_ST(((*(yR115 *)y_deref(F.v6553))).f_name);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2871_Convert(yr3292_Join(F.v6549, yr1061_T(y_str(".f_", 3)), ((*(yR115 *)y_deref(F.v6553))).f_name), ((*(yR115 *)y_deref(F.v6553))).f_rep, ((*(yR115 *)y_deref(F.v6555))).f_rep));
yr1037_SA(y_str(";", 1));
}
F.v6553 = ((*(yR115 *)y_deref(F.v6553))).f_next;
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6551);
yr1037_SA(y_str("; })", 4));
{ rt_int rv6578 = yr1056_SE();
y_use = F.yu; return rv6578; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2821_ConvertArray(rt_int a_p2822, void * a_p2823, void * a_p2824) {
struct yf2825 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2822 = a_p2822;
F.p2823 = a_p2823;
F.p2824 = a_p2824;
F.v6584 = yr1200_Fresh(y_str("cs", 2));
F.v6586 = yr1200_Fresh(y_str("cd", 2));
F.v6588 = yr1200_Fresh(y_str("ck", 2));
F.v6590 = yr1200_Fresh(y_str("cn", 2));
F.v6592 = yr2421_CType(((*(yR110 *)y_deref(F.p2823))).f_elem);
F.v6594 = yr2421_CType(((*(yR110 *)y_deref(F.p2824))).f_elem);
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(F.v6584);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2822);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6586);
yr1037_SA(y_str("; rt_int ", 9));
yr1044_ST(F.v6590);
yr1037_SA(y_str(" = y_count(", 11));
yr1044_ST(F.v6584);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2824))).f_nidx);
yr1037_SA(y_str(");", 2));
if ((((*(yR110 *)y_deref(F.p2823))).f_kind == v822)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2427_DescOf(F.p2823));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v6586);
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(F.v6586);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2823))).f_nidx);
yr1037_SA(y_str(") != ", 5));
yr1044_ST(F.v6590);
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("array lengths differ", 20));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
} else {
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6586);
yr1037_SA(y_str(" = y_like(", 10));
yr1044_ST(F.v6584);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2824))).f_nidx);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2427_DescOf(((*(yR110 *)y_deref(F.p2823))).f_elem));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" for (rt_int ", 13));
yr1044_ST(F.v6588);
yr1037_SA(y_str(" = 0; ", 6));
yr1044_ST(F.v6588);
yr1037_SA(y_str(" < ", 3));
yr1044_ST(F.v6590);
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v6588);
yr1037_SA(y_str("++) ((", 6));
yr1044_ST(F.v6592);
yr1037_SA(y_str(" *)", 3));
yr1044_ST(F.v6586);
yr1037_SA(y_str(".p)[", 4));
yr1044_ST(F.v6588);
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2871_Convert(yr3292_Join(yr1061_T(y_str("((", 2)), F.v6594, yr3292_Join(yr1061_T(y_str(" *)", 3)), F.v6584, yr3292_Join(yr1061_T(y_str(".p)[", 4)), F.v6588, yr1061_T(y_str("]", 1))))), ((*(yR110 *)y_deref(F.p2823))).f_elem, ((*(yR110 *)y_deref(F.p2824))).f_elem));
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v6586);
yr1037_SA(y_str("; })", 4));
{ rt_int rv6635 = yr1056_SE();
y_use = F.yu; return rv6635; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2829_RescaleCode(rt_int a_p2830, void * a_p2831, void * a_p2832) {
struct yf2833 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2830 = a_p2830;
F.p2831 = a_p2831;
F.p2832 = a_p2832;
yr2551_ScaleRatio(F.p2831, F.p2832, &F.v6641, &F.v6643, &F.v6645);
if (F.v6645) {
{ rt_int rv6646 = F.p2830;
y_use = F.yu; return rv6646; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_conv(", 11));
yr1044_ST(F.p2830);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6641);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6643);
yr1037_SA(y_str(")", 1));
{ rt_int rv6651 = yr1056_SE();
y_use = F.yu; return rv6651; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2837_CommonScale(rt_int * a_p2838, void * a_p2839, rt_int * a_p2840, void * a_p2841, void * a_p2842, rt_int a_p2843) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2838 = a_p2838;
F.p2839 = a_p2839;
F.p2840 = a_p2840;
F.p2841 = a_p2841;
F.p2842 = a_p2842;
F.p2843 = a_p2843;
F.v6660 = yr2528_Gcd(((*(yR110 *)y_deref(F.p2839))).f_fsn, ((*(yR110 *)y_deref(F.p2841))).f_fsn);
F.v6662 = yr2535_MulChk(rt_range(rt_div(((*(yR110 *)y_deref(F.p2839))).f_fsd, yr2528_Gcd(((*(yR110 *)y_deref(F.p2839))).f_fsd, ((*(yR110 *)y_deref(F.p2841))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR110 *)y_deref(F.p2841))).f_fsd, F.p2843);
yr2568_SetScale(F.p2842, F.v6660, F.v6662);
(*F.p2838) = yr2829_RescaleCode((*F.p2838), F.p2839, F.p2842);
(*F.p2840) = yr2829_RescaleCode((*F.p2840), F.p2841, F.p2842);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2848_FixLiteral(void * a_p2849, rt_int * a_p2850, void * * a_p2851) {
struct yf2852 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2849 = a_p2849;
F.p2850_o = a_p2850;
F.p2851_o = a_p2851;
F.v6669 = ((*(yR105 *)y_deref(F.p2849))).f_ival;
F.v6671 = ((rt_int *)(v1244).p)[y_ix1(v1244, F.v6669)];
F.p2851 = yr2366_CopyRep(v1356);
((*(yR110 *)y_deref(F.p2851))).f_abstract = 0;
if ((F.v6671 >= INT64_C(0))) {
yr2568_SetScale(F.p2851, yr2543_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6669)], F.v6671, ((*(yR105 *)y_deref(F.p2849))).f_line), INT64_C(1));
} else {
yr2568_SetScale(F.p2851, INT64_C(1), yr2543_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6669)], rt_range(rt_neg(F.v6671), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR105 *)y_deref(F.p2849))).f_line));
}
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(((rt_int *)(v1240).p)[y_ix1(v1240, F.v6669)]);
yr1037_SA(y_str("))", 2));
F.p2850 = yr1056_SE();
(*F.p2850_o) = F.p2850;
(*F.p2851_o) = F.p2851;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2856_ManifestFix(void * a_p2857, rt_int * a_p2858, rt_int * a_p2859, rt_int * a_p2860) {
struct yf2861 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2857 = a_p2857;
F.p2858_o = a_p2858;
F.p2859_o = a_p2859;
F.p2860_o = a_p2860;
F.p2858 = 0;
F.p2859 = INT64_C(0);
F.p2860 = INT64_C(1);
if ((((*(yR105 *)y_deref(F.p2857))).f_kind == v762)) {
F.v6685 = ((*(yR105 *)y_deref(F.p2857))).f_ival;
F.v6687 = ((rt_int *)(v1244).p)[y_ix1(v1244, F.v6685)];
F.p2859 = ((rt_int *)(v1240).p)[y_ix1(v1240, F.v6685)];
if ((F.v6687 >= INT64_C(0))) {
F.p2859 = yr2535_MulChk(F.p2859, yr2543_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6685)], F.v6687, ((*(yR105 *)y_deref(F.p2857))).f_line), ((*(yR105 *)y_deref(F.p2857))).f_line);
} else {
F.p2860 = yr2543_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6685)], rt_range(rt_neg(F.v6687), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR105 *)y_deref(F.p2857))).f_line);
}
F.p2858 = 1;
} else if ((((*(yR105 *)y_deref(F.p2857))).f_kind == v759)) {
F.p2859 = ((*(yR105 *)y_deref(F.p2857))).f_ival;
F.p2858 = 1;
} else if ((((*(yR105 *)y_deref(F.p2857))).f_kind == v801)) {
yr2856_ManifestFix(((*(yR105 *)y_deref(F.p2857))).f_a, &F.p2858, &F.p2859, &F.p2860);
} else if ((((*(yR105 *)y_deref(F.p2857))).f_kind == v795)) {
yr2856_ManifestFix(((*(yR105 *)y_deref(F.p2857))).f_a, &F.p2858, &F.p2859, &F.p2860);
F.p2859 = rt_range(rt_neg(F.p2859), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR105 *)y_deref(F.p2857))).f_kind == v798)) && ((((*(yR105 *)y_deref(F.p2857))).f_name == v579)))) {
yr2856_ManifestFix(((*(yR105 *)y_deref(F.p2857))).f_a, &F.p2858, &F.p2859, &F.p2860);
yr2856_ManifestFix(((*(yR105 *)y_deref(F.p2857))).f_b, &F.v6695, &F.v6691, &F.v6693);
F.p2858 = (F.p2858 && F.v6695);
F.p2859 = yr2535_MulChk(F.p2859, F.v6691, ((*(yR105 *)y_deref(F.p2857))).f_line);
F.p2860 = yr2535_MulChk(F.p2860, F.v6693, ((*(yR105 *)y_deref(F.p2857))).f_line);
}
F.v6689 = yr2528_Gcd(F.p2859, F.p2860);
F.p2859 = rt_range(rt_div(F.p2859, F.v6689), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2860 = rt_range(rt_div(F.p2860, F.v6689), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2858_o) = F.p2858;
(*F.p2859_o) = F.p2859;
(*F.p2860_o) = F.p2860;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2865_FloatChk(rt_int a_p2866) {
struct yf2867 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2866 = a_p2866;
{ rt_int rv6710 = yr3292_Join(yr1061_T(y_str("y_fchk(", 7)), F.p2866, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv6710; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2871_Convert(rt_int a_p2872, void * a_p2873, void * a_p2874) {
struct yf2875 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2872 = a_p2872;
F.p2873 = a_p2873;
F.p2874 = a_p2874;
if (((((((*(yR110 *)y_deref(F.p2874))).f_kind == v846)) && ((((*(yR110 *)y_deref(F.p2873))).f_kind == v822))) && ((((*(yR110 *)y_deref(F.p2873))).f_nidx == INT64_C(1))))) {
if ((((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2873))).f_idx))).f_hasm && ((!(((*(yR110 *)y_deref(F.p2874))).f_nlits == (rt_add((rt_sub(((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2873))).f_idx))).f_mhi, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2873))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1026_SB();
yr1037_SA(y_str("a string of ", 12));
yr1050_SI(((*(yR110 *)y_deref(F.p2874))).f_nlits);
yr1037_SA(y_str(" characters for an array of ", 28));
yr1050_SI(rt_range(rt_add((rt_sub(((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2873))).f_idx))).f_mhi, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2873))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" (VI.B.1)", 9));
F.v6716 = yr1056_SE();
yr1157_Fail(v1000, F.v6716);
}
}
if ((!yr2806_NeedsConv(F.p2873, F.p2874))) {
{ rt_int rv6727 = F.p2872;
y_use = F.yu; return rv6727; }
}
if ((((*(yR110 *)y_deref(F.p2873))).f_kind == v825)) {
{ rt_int rv6728 = yr2813_ConvertRecord(F.p2872, F.p2873, F.p2874);
y_use = F.yu; return rv6728; }
}
if ((((((*(yR110 *)y_deref(F.p2873))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2873))).f_kind == v843)))) {
{ rt_int rv6729 = yr2821_ConvertArray(F.p2872, F.p2873, F.p2874);
y_use = F.yu; return rv6729; }
}
if (yr2372_IsDiscrete(F.p2873)) {
yr1026_SB();
yr1037_SA(y_str("rt_range(", 9));
yr1044_ST(F.p2872);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2502_LoText(F.p2873));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2508_HiText(F.p2873));
yr1037_SA(y_str(")", 1));
{ rt_int rv6734 = yr1056_SE();
y_use = F.yu; return rv6734; }
}
if ((((*(yR110 *)y_deref(F.p2873))).f_kind == v810)) {
yr1026_SB();
yr1037_SA(y_str("rt_frange(", 10));
yr1044_ST(F.p2872);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2502_LoText(F.p2873));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2508_HiText(F.p2873));
yr1037_SA(y_str(")", 1));
{ rt_int rv6739 = yr1056_SE();
y_use = F.yu; return rv6739; }
}
if ((((*(yR110 *)y_deref(F.p2873))).f_kind == v807)) {
F.v6716 = yr2829_RescaleCode(F.p2872, F.p2874, F.p2873);
if ((((*(yR110 *)y_deref(F.p2873))).f_lo == INT64_C(0))) {
{ rt_int rv6741 = F.v6716;
y_use = F.yu; return rv6741; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_range(", 12));
yr1044_ST(F.v6716);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2502_LoText(F.p2873));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2508_HiText(F.p2873));
yr1037_SA(y_str(")", 1));
{ rt_int rv6746 = yr1056_SE();
y_use = F.yu; return rv6746; }
}
{ rt_int rv6747 = F.p2872;
y_use = F.yu; return rv6747; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2879_StoreText(rt_int a_p2880, void * a_p2881, rt_int a_p2882, void * a_p2883, rt_int a_p2884) {
struct yf2885 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2880 = a_p2880;
F.p2881 = a_p2881;
F.p2882 = a_p2882;
F.p2883 = a_p2883;
F.p2884 = a_p2884;
yr2454_CheckType(F.p2884, F.p2881, F.p2883);
if (yr2396_Deep(F.p2881)) {
F.v6755 = yr1200_Fresh(y_str("t", 1));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2421_CType(F.p2881));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6755);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2871_Convert(F.p2882, F.p2881, F.p2883));
yr1037_SA(y_str("; y_store(", 10));
yr1044_ST(yr2427_DescOf(F.p2881));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.p2880);
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v6755);
yr1037_SA(y_str("); }", 4));
{ rt_int rv6764 = yr1056_SE();
y_use = F.yu; return rv6764; }
}
yr1026_SB();
yr1044_ST(F.p2880);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2871_Convert(F.p2882, F.p2881, F.p2883));
yr1037_SA(y_str(";", 1));
{ rt_int rv6767 = yr1056_SE();
y_use = F.yu; return rv6767; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2889_Store(rt_int a_p2890, void * a_p2891, rt_int a_p2892, void * a_p2893, rt_int a_p2894) {
struct yf2895 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2890 = a_p2890;
F.p2891 = a_p2891;
F.p2892 = a_p2892;
F.p2893 = a_p2893;
F.p2894 = a_p2894;
yr1132_Emit(yr2879_StoreText(F.p2890, F.p2891, F.p2892, F.p2893, F.p2894));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2899_IsVariable(void * a_p2900) {
struct yf2901 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2900 = a_p2900;
if ((((*(yR105 *)y_deref(F.p2900))).f_kind == v777)) {
F.v6777 = yr2248_Find(((*(yR105 *)y_deref(F.p2900))).f_name);
if ((F.v6777 == ((void *)0))) {
{ rt_int rv6781 = 0;
y_use = F.yu; return rv6781; }
}
if (((*(yR125 *)y_deref(F.v6777))).f_readonly) {
{ rt_int rv6783 = 0;
y_use = F.yu; return rv6783; }
}
{ rt_int rv6784 = (((*(yR125 *)y_deref(yr2353_Real(F.v6777)))).f_kind == v861);
y_use = F.yu; return rv6784; }
}
if ((((*(yR105 *)y_deref(F.p2900))).f_kind == v789)) {
{ rt_int rv6786 = (((*(yR105 *)y_deref(F.p2900))).f_flag == INT64_C(0));
y_use = F.yu; return rv6786; }
}
if ((((*(yR105 *)y_deref(F.p2900))).f_kind == v786)) {
{ rt_int rv6787 = (yr2964_IsMainStore(((*(yR105 *)y_deref(F.p2900))).f_a) || yr2899_IsVariable(((*(yR105 *)y_deref(F.p2900))).f_a));
y_use = F.yu; return rv6787; }
}
if ((((*(yR105 *)y_deref(F.p2900))).f_kind == v783)) {
if ((!yr2899_IsVariable(((*(yR105 *)y_deref(F.p2900))).f_a))) {
{ rt_int rv6789 = 0;
y_use = F.yu; return rv6789; }
}
F.v6779 = yr2676_FindField(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2900))).f_a))).f_rep, ((*(yR105 *)y_deref(F.p2900))).f_name);
if ((F.v6779 == ((void *)0))) {
{ rt_int rv6791 = 0;
y_use = F.yu; return rv6791; }
}
{ rt_int rv6792 = (!((*(yR115 *)y_deref(F.v6779))).f_isconst);
y_use = F.yu; return rv6792; }
}
{ rt_int rv6794 = 0;
y_use = F.yu; return rv6794; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2905_CheckPure(void * a_p2906) {
struct yf2907 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2906 = a_p2906;
F.v6798 = F.p2906;
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
if ((!((*(yR125 *)y_deref(v1607))).f_func)) {
y_use = F.yu; return;
}
while ((((((*(yR105 *)y_deref(F.v6798))).f_kind == v783)) || ((((*(yR105 *)y_deref(F.v6798))).f_kind == v786)))) {
Y_TICK();
F.v6798 = ((*(yR105 *)y_deref(F.v6798))).f_a;
}
if ((((*(yR105 *)y_deref(F.v6798))).f_kind == v789)) {
if ((((*(yR105 *)y_deref(F.v6798))).f_flag == INT64_C(0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2906))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.v6798))).f_kind == v777)) {
F.v6800 = yr2248_Find(((*(yR105 *)y_deref(F.v6798))).f_name);
if ((!(F.v6800 == ((void *)0)))) {
F.v6800 = yr2353_Real(F.v6800);
if ((((*(yR125 *)y_deref(F.v6800))).f_level < ((*(yR125 *)y_deref(v1607))).f_level)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2906))).f_line, ((*(yR105 *)y_deref(F.v6798))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2911_LValue(void * a_p2912, rt_int * a_p2913, void * * a_p2914) {
struct yf2915 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2912 = a_p2912;
F.p2913_o = a_p2913;
F.p2914_o = a_p2914;
yr2938_Expr(F.p2912, ((void *)0), &F.p2913, &F.p2914);
if ((!yr2899_IsVariable(F.p2912))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2912))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2913_o) = F.p2913;
(*F.p2914_o) = F.p2914;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2919_Paren(rt_int a_p2920) {
struct yf2921 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2920 = a_p2920;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p2920);
yr1037_SA(y_str(")", 1));
{ rt_int rv6813 = yr1056_SE();
y_use = F.yu; return rv6813; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2925_Lit(void * a_p2926, rt_int a_p2927) {
struct yf2928 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2926 = a_p2926;
F.p2927 = a_p2927;
F.v6818 = yr2366_CopyRep(F.p2926);
yr2589_SetRange(F.v6818, F.p2927, F.p2927);
((*(yR110 *)y_deref(F.v6818))).f_elem = F.p2926;
{ void * rv6819 = F.v6818;
y_use = F.yu; return rv6819; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2932_Qualifier(void * a_p2933) {
struct yf2934 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2933 = a_p2933;
F.v6823 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2933))).f_d))).f_name, ((*(yR105 *)y_deref(F.p2933))).f_line));
if ((((!(((*(yR125 *)y_deref(F.v6823))).f_kind == v867))) && ((!(((*(yR125 *)y_deref(F.v6823))).f_kind == v870))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2933))).f_line, ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2933))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6825 = ((*(yR125 *)y_deref(F.v6823))).f_rep;
y_use = F.yu; return rv6825; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2938_Expr(void * a_p2939, void * a_p2940, rt_int * a_p2941, void * * a_p2942) {
struct yf2943 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2939 = a_p2939;
F.p2940 = a_p2940;
F.p2941_o = a_p2941;
F.p2942_o = a_p2942;
F.v6832 = ((*(yR105 *)y_deref(F.p2939))).f_kind;
v1000 = ((*(yR105 *)y_deref(F.p2939))).f_line;
if ((F.v6832 == v801)) {
yr2938_Expr(((*(yR105 *)y_deref(F.p2939))).f_a, F.p2940, &F.v6836, &F.p2942);
F.p2941 = yr2919_Paren(F.v6836);
} else if ((F.v6832 == v759)) {
F.p2942 = yr2925_Lit(v1342, ((*(yR105 *)y_deref(F.p2939))).f_ival);
if ((!(((*(yR105 *)y_deref(F.p2939))).f_d == ((void *)0)))) {
F.v6842 = yr2932_Qualifier(F.p2939);
if ((!(((*(yR110 *)y_deref(F.v6842))).f_kind == v804))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2939))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR110 *)y_deref(F.p2942))).f_tid = ((*(yR110 *)y_deref(F.v6842))).f_tid;
((*(yR110 *)y_deref(F.p2942))).f_tname = ((*(yR110 *)y_deref(F.v6842))).f_tname;
}
yr1026_SB();
yr1037_SA(y_str("INT64_C(", 8));
yr1050_SI(((*(yR105 *)y_deref(F.p2939))).f_ival);
yr1037_SA(y_str(")", 1));
F.p2941 = yr1056_SE();
} else if ((F.v6832 == v768)) {
F.v6842 = yr2766_AlphabetFor(F.p2939, F.p2940);
F.v6848 = yr2773_CharValue(F.v6842, ((*(yR105 *)y_deref(F.p2939))).f_text, ((*(yR105 *)y_deref(F.p2939))).f_line);
F.p2942 = yr2925_Lit(F.v6842, F.v6848);
yr1026_SB();
yr1050_SI(F.v6848);
F.p2941 = yr1056_SE();
} else if ((F.v6832 == v771)) {
F.v6842 = yr2766_AlphabetFor(F.p2939, F.p2940);
F.v6836 = yr2781_StringCodes(F.v6842, ((*(yR105 *)y_deref(F.p2939))).f_text, &F.v6846, ((*(yR105 *)y_deref(F.p2939))).f_line);
F.p2942 = yr2359_NewRep(v846, yr1061_T(y_str("string", 6)));
((*(yR110 *)y_deref(F.p2942))).f_tname = yr1061_T(y_str("a string literal", 16));
((*(yR110 *)y_deref(F.p2942))).f_elem = F.v6842;
((*(yR110 *)y_deref(F.p2942))).f_nidx = INT64_C(1);
((*(yR110 *)y_deref(F.p2942))).f_nlits = F.v6846;
yr1026_SB();
yr1037_SA(y_str("y_str(", 6));
yr1044_ST(F.v6836);
yr1037_SA(y_str(", ", 2));
yr1050_SI(F.v6846);
yr1037_SA(y_str(")", 1));
F.p2941 = yr1056_SE();
} else if ((F.v6832 == v765)) {
F.p2942 = v1354;
if ((!(((*(yR105 *)y_deref(F.p2939))).f_d == ((void *)0)))) {
F.p2942 = yr2932_Qualifier(F.p2939);
}
F.p2941 = yr2919_Paren(((*(yR105 *)y_deref(F.p2939))).f_text);
} else if ((F.v6832 == v762)) {
yr2848_FixLiteral(F.p2939, &F.p2941, &F.p2942);
if ((!(((*(yR105 *)y_deref(F.p2939))).f_d == ((void *)0)))) {
F.v6842 = yr2932_Qualifier(F.p2939);
if ((!(((*(yR110 *)y_deref(F.v6842))).f_kind == v807))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2939))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR110 *)y_deref(F.p2942))).f_tid = ((*(yR110 *)y_deref(F.v6842))).f_tid;
((*(yR110 *)y_deref(F.p2942))).f_tname = ((*(yR110 *)y_deref(F.v6842))).f_tname;
}
} else if ((F.v6832 == v774)) {
if ((((*(yR105 *)y_deref(F.p2939))).f_d == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2939))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2942 = yr2932_Qualifier(F.p2939);
if ((!(((*(yR110 *)y_deref(F.p2942))).f_kind == v828))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2939))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2941 = yr1061_T(y_str("((void *)0)", 11));
} else if ((F.v6832 == v777)) {
if ((!(((*(yR105 *)y_deref(F.p2939))).f_d == ((void *)0)))) {
F.v6842 = yr2932_Qualifier(F.p2939);
F.v6834 = yr2313_FindLit(((*(yR105 *)y_deref(F.p2939))).f_name, F.v6842);
if ((F.v6834 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2939))).f_line, ((*(yR105 *)y_deref(F.p2939))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6834 = yr2260_Lookup(((*(yR105 *)y_deref(F.p2939))).f_name, ((*(yR105 *)y_deref(F.p2939))).f_line);
}
yr2955_NameExpr(F.p2939, F.v6834, &F.p2941, &F.p2942);
} else if ((F.v6832 == v780)) {
yr3141_CallExpr(F.p2939, F.p2940, 0, &F.p2941, &F.p2942);
} else if ((F.v6832 == v783)) {
yr2938_Expr(((*(yR105 *)y_deref(F.p2939))).f_a, ((void *)0), &F.v6836, &F.v6842);
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2939))).f_a))).f_rep = F.v6842;
if ((!(((*(yR110 *)y_deref(F.v6842))).f_kind == v825))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2939))).f_line, ((*(yR105 *)y_deref(F.p2939))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR110 *)y_deref(F.v6842))).f_opaque) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2939))).f_line, ((*(yR110 *)y_deref(F.v6842))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6844 = yr2676_FindField(F.v6842, ((*(yR105 *)y_deref(F.p2939))).f_name);
if ((F.v6844 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2939))).f_line, ((*(yR105 *)y_deref(F.p2939))).f_name, y_str(" is not a component of this record", 34));
}
F.p2942 = ((*(yR115 *)y_deref(F.v6844))).f_rep;
if ((!(((*(yR115 *)y_deref(F.v6844))).f_variant == INT64_C(0)))) {
yr3216_CheckVariantSelected(F.p2939, F.v6842, F.v6844);
F.v6838 = yr1200_Fresh(y_str("vr", 2));
yr1026_SB();
yr1037_SA(y_str("(*({ ", 5));
yr1044_ST(yr2421_CType(F.v6842));
yr1037_SA(y_str(" *", 2));
yr1044_ST(F.v6838);
yr1037_SA(y_str(" = &", 4));
yr1044_ST(yr2919_Paren(F.v6836));
yr1037_SA(y_str("; if (!(", 8));
yr1044_ST(yr2947_VariantTest(F.v6842, F.v6844, F.v6838));
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1044_ST(F.v6838);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(((*(yR105 *)y_deref(F.p2939))).f_name);
yr1037_SA(y_str("; }))", 5));
F.p2941 = yr1056_SE();
} else {
yr1026_SB();
yr1044_ST(yr2919_Paren(F.v6836));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(((*(yR105 *)y_deref(F.p2939))).f_name);
F.p2941 = yr1056_SE();
}
} else if ((((F.v6832 == v789)) && yr3103_UserOp(F.p2939, rt_range(v618, INT64_C(0), INT64_C(4000000)), ((*(yR105 *)y_deref(F.p2939))).f_a, ((void *)0), &F.p2941, &F.p2942))) {
((*(yR105 *)y_deref(F.p2939))).f_flag = INT64_C(1);
} else if ((F.v6832 == v789)) {
yr2938_Expr(((*(yR105 *)y_deref(F.p2939))).f_a, ((void *)0), &F.v6836, &F.v6842);
if ((!(((*(yR110 *)y_deref(F.v6842))).f_kind == v828))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2939))).f_line, y_str("^ of something that is not a pointer", 36));
}
yr3359_NoteFreeDeref(((*(yR105 *)y_deref(F.p2939))).f_a, ((*(yR110 *)y_deref(F.v6842))).f_tid);
if ((((*(yR110 *)y_deref(F.v6842))).f_elem == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2939))).f_line, ((*(yR110 *)y_deref(F.v6842))).f_forward, y_str(" is not declared", 16));
}
F.p2942 = ((*(yR110 *)y_deref(F.v6842))).f_elem;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(yr2421_CType(F.p2942));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(F.v6836);
yr1037_SA(y_str("))", 2));
F.p2941 = yr1056_SE();
} else if ((F.v6832 == v786)) {
yr2970_IndexExpr(F.p2939, &F.p2941, &F.p2942);
} else if ((((F.v6832 == v792)) && yr3103_UserOp(F.p2939, rt_range(v390, INT64_C(0), INT64_C(4000000)), ((*(yR105 *)y_deref(F.p2939))).f_a, ((void *)0), &F.p2941, &F.p2942))) {
F.p2942 = F.p2942;
} else if ((F.v6832 == v792)) {
yr2938_Expr(((*(yR105 *)y_deref(F.p2939))).f_a, v1344, &F.v6836, &F.v6842);
yr2454_CheckType(((*(yR105 *)y_deref(F.p2939))).f_line, v1344, F.v6842);
F.p2942 = v1344;
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(F.v6836);
yr1037_SA(y_str(")", 1));
F.p2941 = yr1056_SE();
} else if ((F.v6832 == v795)) {
if ((!yr3103_UserOp(F.p2939, rt_range(v576, INT64_C(0), INT64_C(4000000)), ((*(yR105 *)y_deref(F.p2939))).f_a, ((void *)0), &F.p2941, &F.p2942))) {
yr2938_Expr(((*(yR105 *)y_deref(F.p2939))).f_a, F.p2940, &F.v6836, &F.v6842);
yr2978_NegExpr(F.p2939, F.v6836, F.v6842, &F.p2941, &F.p2942);
}
} else if ((F.v6832 == v798)) {
yr3034_BinExpr(F.p2939, F.p2940, &F.p2941, &F.p2942);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p2939))).f_line, y_str("not an expression", 17));
}
((*(yR105 *)y_deref(F.p2939))).f_rep = F.p2942;
(*F.p2941_o) = F.p2941;
(*F.p2942_o) = F.p2942;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2947_VariantTest(void * a_p2948, void * a_p2949, rt_int a_p2950) {
struct yf2951 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2948 = a_p2948;
F.p2949 = a_p2949;
F.p2950 = a_p2950;
F.v6891 = ((*(yR115 *)y_deref(F.p2949))).f_labels;
yr1026_SB();
yr1037_SA(y_str("0", 1));
while ((!(F.v6891 == ((void *)0)))) {
Y_TICK();
yr2790_Manifest(F.v6891, &F.v6893, &F.v6895);
yr1037_SA(y_str(" || ", 4));
yr1044_ST(F.p2950);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(((*(yR115 *)y_deref(((*(yR110 *)y_deref(F.p2948))).f_selector))).f_name);
yr1037_SA(y_str(" == ", 4));
yr1050_SI(F.v6895);
F.v6891 = ((*(yR105 *)y_deref(F.v6891))).f_next;
}
{ rt_int rv6900 = yr1056_SE();
y_use = F.yu; return rv6900; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2955_NameExpr(void * a_p2956, void * a_p2957, rt_int * a_p2958, void * * a_p2959) {
struct yf2960 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2956 = a_p2956;
F.p2957 = a_p2957;
F.p2958_o = a_p2958;
F.p2959_o = a_p2959;
F.v6907 = yr2353_Real(F.p2957);
if ((((*(yR125 *)y_deref(F.v6907))).f_kind == v873)) {
if ((((((*(yR105 *)y_deref(F.p2956))).f_d == ((void *)0))) && yr2307_Ambiguous(F.v6907))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2956))).f_line, ((*(yR105 *)y_deref(F.p2956))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2959 = yr2925_Lit(((*(yR125 *)y_deref(F.v6907))).f_rep, ((*(yR125 *)y_deref(F.v6907))).f_mval);
yr1026_SB();
yr1050_SI(((*(yR125 *)y_deref(F.v6907))).f_mval);
F.p2958 = yr1056_SE();
(*F.p2958_o) = F.p2958;
(*F.p2959_o) = F.p2959;
y_use = F.yu; return;
}
if ((((((*(yR125 *)y_deref(F.v6907))).f_kind == v861)) || ((((*(yR125 *)y_deref(F.v6907))).f_kind == v864)))) {
yr3353_NoteFree(F.v6907);
F.p2959 = ((*(yR125 *)y_deref(F.v6907))).f_rep;
F.p2958 = yr2347_SymPath(F.v6907);
(*F.p2958_o) = F.p2958;
(*F.p2959_o) = F.p2959;
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(F.v6907))).f_kind == v876)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2956))).f_line, ((*(yR105 *)y_deref(F.p2956))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1186_FailN(((*(yR105 *)y_deref(F.p2956))).f_line, ((*(yR105 *)y_deref(F.p2956))).f_name, y_str(" is not a value", 15));
(*F.p2958_o) = F.p2958;
(*F.p2959_o) = F.p2959;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2964_IsMainStore(void * a_p2965) {
struct yf2966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2965 = a_p2965;
if ((((!(((*(yR105 *)y_deref(F.p2965))).f_kind == v777))) || ((!(((*(yR105 *)y_deref(F.p2965))).f_d == ((void *)0)))))) {
{ rt_int rv6916 = 0;
y_use = F.yu; return rv6916; }
}
F.v6914 = yr2248_Find(((*(yR105 *)y_deref(F.p2965))).f_name);
if ((F.v6914 == ((void *)0))) {
{ rt_int rv6918 = 0;
y_use = F.yu; return rv6918; }
}
if ((!yr2301_Resolved(F.v6914))) {
{ rt_int rv6920 = 0;
y_use = F.yu; return rv6920; }
}
F.v6914 = yr2353_Real(F.v6914);
{ rt_int rv6921 = (((((*(yR125 *)y_deref(F.v6914))).f_kind == v891)) && ((((*(yR125 *)y_deref(F.v6914))).f_mval == v1477)));
y_use = F.yu; return rv6921; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2970_IndexExpr(void * a_p2971, rt_int * a_p2972, void * * a_p2973) {
struct yf2974 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2971 = a_p2971;
F.p2972_o = a_p2972;
F.p2973_o = a_p2973;
if (yr2964_IsMainStore(((*(yR105 *)y_deref(F.p2971))).f_a)) {
if ((!(yr1919_Count(((*(yR105 *)y_deref(F.p2971))).f_b) == INT64_C(1)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2971))).f_line, y_str("MAIN_STORE_ARRAY has one subscript", 34));
}
yr2938_Expr(((*(yR105 *)y_deref(F.p2971))).f_b, v1834, &F.v6929, &F.v6935);
yr2454_CheckType(((*(yR105 *)y_deref(F.p2971))).f_line, v1834, F.v6935);
F.p2973 = v1836;
F.p2972 = yr3292_Join(yr1061_T(y_str("(*y_mem_word(", 13)), F.v6929, yr1061_T(y_str("))", 2)));
(*F.p2972_o) = F.p2972;
(*F.p2973_o) = F.p2973;
y_use = F.yu; return;
}
yr2938_Expr(((*(yR105 *)y_deref(F.p2971))).f_a, ((void *)0), &F.v6927, &F.v6933);
if ((!yr2384_IsArrayLike(F.v6933))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2971))).f_line, y_str("[] of something that is not an array", 36));
}
F.v6941 = yr1919_Count(((*(yR105 *)y_deref(F.p2971))).f_b);
if ((!(F.v6941 == ((*(yR110 *)y_deref(F.v6933))).f_nidx))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2971))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2973 = ((*(yR110 *)y_deref(F.v6933))).f_elem;
F.v6943 = (((((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2971))).f_a))).f_kind == v777)) || ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2971))).f_a))).f_kind == v783))) || ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2971))).f_a))).f_kind == v786))) || ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2971))).f_a))).f_kind == v789)));
if (F.v6943) {
F.v6931 = F.v6927;
} else {
F.v6931 = yr1200_Fresh(y_str("ya", 2));
}
yr1026_SB();
if ((!F.v6943)) {
yr1037_SA(y_str("(*({ yarr ", 10));
yr1044_ST(F.v6931);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v6927);
yr1037_SA(y_str("; &", 3));
}
yr1037_SA(y_str("((", 2));
yr1044_ST(yr2421_CType(F.p2973));
yr1037_SA(y_str(" *)(", 4));
yr1044_ST(F.v6931);
yr1037_SA(y_str(").p)[y_ix", 9));
yr1050_SI(F.v6941);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.v6931);
F.p2972 = yr1056_SE();
F.v6939 = ((*(yR105 *)y_deref(F.p2971))).f_b;
F.v6937 = ((*(yR110 *)y_deref(F.v6933))).f_idx;
while ((!(F.v6939 == ((void *)0)))) {
Y_TICK();
yr2938_Expr(F.v6939, F.v6937, &F.v6929, &F.v6935);
if ((((!(F.v6937 == ((void *)0)))) && ((((*(yR110 *)y_deref(F.v6933))).f_kind == v822)))) {
yr2454_CheckType(((*(yR105 *)y_deref(F.v6939))).f_line, F.v6937, F.v6935);
} else if ((!((((((*(yR110 *)y_deref(F.v6935))).f_kind == v804)) || yr2372_IsDiscrete(F.v6935))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v6939))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1026_SB();
yr1044_ST(F.p2972);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6929);
F.p2972 = yr1056_SE();
if ((!(F.v6937 == ((void *)0)))) {
F.v6937 = ((*(yR110 *)y_deref(F.v6937))).f_link;
}
F.v6939 = ((*(yR105 *)y_deref(F.v6939))).f_next;
}
yr1026_SB();
yr1044_ST(F.p2972);
yr1037_SA(y_str(")]", 2));
if ((!F.v6943)) {
yr1037_SA(y_str("; }))", 5));
}
F.p2972 = yr1056_SE();
(*F.p2972_o) = F.p2972;
(*F.p2973_o) = F.p2973;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2978_NegExpr(void * a_p2979, rt_int a_p2980, void * a_p2981, rt_int * a_p2982, void * * a_p2983) {
struct yf2984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2979 = a_p2979;
F.p2980 = a_p2980;
F.p2981 = a_p2981;
F.p2982_o = a_p2982;
F.p2983_o = a_p2983;
yr1026_SB();
if ((((*(yR110 *)y_deref(F.p2981))).f_kind == v804)) {
F.p2983 = yr2366_CopyRep(F.p2981);
((*(yR110 *)y_deref(F.p2983))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(F.p2983))).f_hasm = 0;
yr1037_SA(y_str("rt_neg(", 7));
yr1044_ST(F.p2980);
yr1037_SA(y_str(")", 1));
} else if ((((*(yR110 *)y_deref(F.p2981))).f_kind == v810)) {
F.p2983 = yr2366_CopyRep(F.p2981);
((*(yR110 *)y_deref(F.p2983))).f_lo = INT64_C(0);
yr1037_SA(y_str("(-", 2));
yr1044_ST(F.p2980);
yr1037_SA(y_str(")", 1));
} else if ((((*(yR110 *)y_deref(F.p2981))).f_kind == v807)) {
F.p2983 = yr2366_CopyRep(F.p2981);
((*(yR110 *)y_deref(F.p2983))).f_lo = INT64_C(0);
yr1037_SA(y_str("y_fix_neg(", 10));
yr1044_ST(F.p2980);
yr1037_SA(y_str(")", 1));
} else if ((((*(yR110 *)y_deref(F.p2981))).f_kind == v834)) {
F.p2983 = F.p2981;
yr1037_SA(y_str("y_set_compl(", 12));
yr1044_ST(F.p2980);
yr1037_SA(y_str(")", 1));
} else {
v927 = 0;
yr1178_FailS(((*(yR105 *)y_deref(F.p2979))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2982 = yr1056_SE();
(*F.p2982_o) = F.p2982;
(*F.p2983_o) = F.p2983;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2988_Unbounded(void * a_p2989) {
struct yf2990 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2989 = a_p2989;
F.v6985 = yr2366_CopyRep(F.p2989);
((*(yR110 *)y_deref(F.v6985))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(F.v6985))).f_hi = INT64_C(0);
((*(yR110 *)y_deref(F.v6985))).f_hasm = 0;
{ void * rv6989 = F.v6985;
y_use = F.yu; return rv6989; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2994_Call2(yarr a_p2996, rt_int a_p2997, rt_int a_p2998) {
struct yf2999 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2996 = a_p2996;
F.p2997 = a_p2997;
F.p2998 = a_p2998;
yr1026_SB();
yr1037_SA(F.p2996);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p2997);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p2998);
yr1037_SA(y_str(")", 1));
{ rt_int rv6997 = yr1056_SE();
y_use = F.yu; return rv6997; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3003_Infix(rt_int a_p3004, yarr a_p3006, rt_int a_p3007) {
struct yf3008 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3004 = a_p3004;
F.p3006 = a_p3006;
F.p3007 = a_p3007;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3004);
yr1037_SA(y_str(" ", 1));
yr1037_SA(F.p3006);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p3007);
yr1037_SA(y_str(")", 1));
{ rt_int rv7006 = yr1056_SE();
y_use = F.yu; return rv7006; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3012_EqCode(rt_int a_p3013, void * a_p3014, rt_int a_p3015, void * a_p3016) {
struct yf3017 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3013 = a_p3013;
F.p3014 = a_p3014;
F.p3015 = a_p3015;
F.p3016 = a_p3016;
F.v7017 = F.p3014;
if ((((*(yR110 *)y_deref(F.p3014))).f_kind == v846)) {
F.v7017 = F.p3016;
}
if ((((((((*(yR110 *)y_deref(F.v7017))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.v7017))).f_kind == v825))) || ((((*(yR110 *)y_deref(F.v7017))).f_kind == v843))) || ((((*(yR110 *)y_deref(F.v7017))).f_kind == v846)))) {
F.v7013 = yr1200_Fresh(y_str("e", 1));
F.v7015 = yr1200_Fresh(y_str("e", 1));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2421_CType(F.v7017));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7013);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3013);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v7015);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3015);
yr1037_SA(y_str("; y_eq(", 7));
if ((((((*(yR110 *)y_deref(F.v7017))).f_kind == v843)) || ((((*(yR110 *)y_deref(F.v7017))).f_kind == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
yr1044_ST(yr2427_DescOf(((*(yR110 *)y_deref(F.v7017))).f_elem));
yr1037_SA(y_str(")", 1));
} else {
yr1044_ST(yr2427_DescOf(F.v7017));
}
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7013);
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7015);
yr1037_SA(y_str("); })", 5));
{ rt_int rv7031 = yr1056_SE();
y_use = F.yu; return rv7031; }
}
if ((((*(yR110 *)y_deref(F.v7017))).f_kind == v834)) {
{ rt_int rv7033 = yr2994_Call2(y_str("y_set_eq", 8), F.p3013, F.p3015);
y_use = F.yu; return rv7033; }
}
{ rt_int rv7035 = yr3003_Infix(F.p3013, y_str("==", 2), F.p3015);
y_use = F.yu; return rv7035; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3021_IsOrdered(void * a_p3022) {
struct yf3023 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3022 = a_p3022;
if ((((((((*(yR110 *)y_deref(F.p3022))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.p3022))).f_kind == v810))) || ((((*(yR110 *)y_deref(F.p3022))).f_kind == v807))) || ((((*(yR110 *)y_deref(F.p3022))).f_kind == v819)))) {
{ rt_int rv7039 = 1;
y_use = F.yu; return rv7039; }
}
{ rt_int rv7040 = (((((*(yR110 *)y_deref(F.p3022))).f_kind == v816)) && ((*(yR110 *)y_deref(F.p3022))).f_ordered);
y_use = F.yu; return rv7040; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3027_FixToFloat(rt_int a_p3028, void * a_p3029) {
struct yf3030 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3028 = a_p3028;
F.p3029 = a_p3029;
yr1026_SB();
yr1037_SA(y_str("y_fix_float(", 12));
yr1044_ST(F.p3028);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(((*(yR110 *)y_deref(F.p3029))).f_fsn);
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(((*(yR110 *)y_deref(F.p3029))).f_fsd);
yr1037_SA(y_str("))", 2));
{ rt_int rv7048 = yr1056_SE();
y_use = F.yu; return rv7048; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3034_BinExpr(void * a_p3035, void * a_p3036, rt_int * a_p3037, void * * a_p3038) {
struct yf3039 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3035 = a_p3035;
F.p3036 = a_p3036;
F.p3037_o = a_p3037;
F.p3038_o = a_p3038;
F.v7055 = ((*(yR105 *)y_deref(F.p3035))).f_name;
if (yr3103_UserOp(F.p3035, F.v7055, ((*(yR105 *)y_deref(F.p3035))).f_a, ((*(yR105 *)y_deref(F.p3035))).f_b, &F.p3037, &F.p3038)) {
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((((F.v7055 == v237)) || ((F.v7055 == v399)))) {
yr2938_Expr(((*(yR105 *)y_deref(F.p3035))).f_a, v1344, &F.v7057, &F.v7063);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3035))).f_line, v1344, F.v7063);
yr2938_Expr(((*(yR105 *)y_deref(F.p3035))).f_b, v1344, &F.v7059, &F.v7065);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3035))).f_line, v1344, F.v7065);
F.p3038 = v1344;
if ((F.v7055 == v237)) {
F.p3037 = yr3003_Infix(F.v7057, y_str("&&", 2), F.v7059);
} else {
F.p3037 = yr3003_Infix(F.v7057, y_str("||", 2), F.v7059);
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((F.v7055 == v360)) {
yr2938_Expr(((*(yR105 *)y_deref(F.p3035))).f_b, ((void *)0), &F.v7059, &F.v7065);
if ((!(((*(yR110 *)y_deref(F.v7065))).f_kind == v834))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3035))).f_line, y_str("IN needs a set on its right", 27));
}
yr2938_Expr(((*(yR105 *)y_deref(F.p3035))).f_a, ((*(yR110 *)y_deref(F.v7065))).f_elem, &F.v7057, &F.v7063);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3035))).f_line, ((*(yR110 *)y_deref(F.v7065))).f_elem, F.v7063);
F.p3038 = v1344;
F.p3037 = yr2994_Call2(y_str("y_set_in", 8), F.v7057, F.v7059);
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
F.v7067 = ((void *)0);
if (((((((((!(F.p3036 == ((void *)0)))) && ((!(F.v7055 == v585)))) && ((!(F.v7055 == v570)))) && ((!(F.v7055 == v588)))) && ((!(F.v7055 == v540)))) && ((!(F.v7055 == v591)))) && ((!(F.v7055 == v543))))) {
F.v7067 = F.p3036;
}
yr2938_Expr(((*(yR105 *)y_deref(F.p3035))).f_a, F.v7067, &F.v7057, &F.v7063);
yr2938_Expr(((*(yR105 *)y_deref(F.p3035))).f_b, F.v7063, &F.v7059, &F.v7065);
if ((((F.v7055 == v585)) || ((F.v7055 == v570)))) {
yr2454_CheckType(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7063, F.v7065);
if (yr2415_NonAssignable(F.v7063)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3035))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR110 *)y_deref(F.v7063))).f_opaque && (((rt_div(((*(yR110 *)y_deref(F.v7063))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3035))).f_line, ((*(yR110 *)y_deref(F.v7063))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p3038 = v1344;
if ((((*(yR110 *)y_deref(F.v7063))).f_kind == v807)) {
yr2837_CommonScale(&F.v7057, F.v7063, &F.v7059, F.v7065, yr2988_Unbounded(F.v7063), ((*(yR105 *)y_deref(F.p3035))).f_line);
}
F.p3037 = yr3012_EqCode(F.v7057, F.v7063, F.v7059, F.v7065);
if ((F.v7055 == v570)) {
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(F.p3037);
yr1037_SA(y_str(")", 1));
F.p3037 = yr1056_SE();
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((((((F.v7055 == v588)) || ((F.v7055 == v540))) || ((F.v7055 == v591))) || ((F.v7055 == v543)))) {
yr2454_CheckType(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7063, F.v7065);
if ((!yr3021_IsOrdered(F.v7063))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3035))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p3038 = v1344;
if ((((*(yR110 *)y_deref(F.v7063))).f_kind == v807)) {
yr2837_CommonScale(&F.v7057, F.v7063, &F.v7059, F.v7065, yr2988_Unbounded(F.v7063), ((*(yR105 *)y_deref(F.p3035))).f_line);
}
if ((F.v7055 == v588)) {
F.p3037 = yr3003_Infix(F.v7057, y_str("<", 1), F.v7059);
} else if ((F.v7055 == v540)) {
F.p3037 = yr3003_Infix(F.v7057, y_str("<=", 2), F.v7059);
} else if ((F.v7055 == v591)) {
F.p3037 = yr3003_Infix(F.v7057, y_str(">", 1), F.v7059);
} else {
F.p3037 = yr3003_Infix(F.v7057, y_str(">=", 2), F.v7059);
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
yr2454_CheckType(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7063, F.v7065);
F.v7069 = ((*(yR110 *)y_deref(F.v7063))).f_kind;
if ((((*(yR110 *)y_deref(F.v7063))).f_kind == v846)) {
F.v7069 = ((*(yR110 *)y_deref(F.v7065))).f_kind;
}
if ((F.v7055 == v489)) {
if ((F.v7069 == v813)) {
F.p3038 = v1344;
F.p3037 = yr3003_Infix(F.v7057, y_str("!=", 2), F.v7059);
} else if ((F.v7069 == v834)) {
F.p3038 = F.v7063;
F.p3037 = yr2994_Call2(y_str("y_set_xor", 9), F.v7057, F.v7059);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p3035))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((F.v7069 == v834)) {
F.p3038 = F.v7063;
if ((F.v7055 == v573)) {
F.p3037 = yr2994_Call2(y_str("y_set_union", 11), F.v7057, F.v7059);
} else if ((F.v7055 == v576)) {
F.p3037 = yr2994_Call2(y_str("y_set_diff", 10), F.v7057, F.v7059);
} else if ((F.v7055 == v579)) {
F.p3037 = yr2994_Call2(y_str("y_set_inter", 11), F.v7057, F.v7059);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p3035))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((F.v7069 == v804)) {
F.p3038 = yr2988_Unbounded(F.v7063);
if ((F.v7055 == v573)) {
F.p3037 = yr2994_Call2(y_str("rt_add", 6), F.v7057, F.v7059);
} else if ((F.v7055 == v576)) {
F.p3037 = yr2994_Call2(y_str("rt_sub", 6), F.v7057, F.v7059);
} else if ((F.v7055 == v579)) {
F.p3037 = yr2994_Call2(y_str("rt_mul", 6), F.v7057, F.v7059);
} else if ((F.v7055 == v276)) {
F.p3037 = yr2994_Call2(y_str("rt_div", 6), F.v7057, F.v7059);
} else if ((F.v7055 == v378)) {
F.p3037 = yr2994_Call2(y_str("rt_mod", 6), F.v7057, F.v7059);
} else if ((F.v7055 == v582)) {
F.p3038 = v1354;
yr1026_SB();
yr1037_SA(y_str("rt_fdiv((double)(", 17));
yr1044_ST(F.v7057);
yr1037_SA(y_str("), (double)(", 12));
yr1044_ST(F.v7059);
yr1037_SA(y_str("))", 2));
F.p3037 = yr1056_SE();
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7055, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((F.v7069 == v810)) {
F.p3038 = yr2988_Unbounded(F.v7063);
if ((F.v7055 == v573)) {
F.p3037 = yr2865_FloatChk(yr3003_Infix(F.v7057, y_str("+", 1), F.v7059));
} else if ((F.v7055 == v576)) {
F.p3037 = yr2865_FloatChk(yr3003_Infix(F.v7057, y_str("-", 1), F.v7059));
} else if ((F.v7055 == v579)) {
F.p3037 = yr2865_FloatChk(yr3003_Infix(F.v7057, y_str("*", 1), F.v7059));
} else if ((F.v7055 == v582)) {
F.p3038 = v1354;
F.p3037 = yr2865_FloatChk(yr2994_Call2(y_str("rt_fdiv", 7), F.v7057, F.v7059));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7055, y_str(" does not apply to these numbers", 32));
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
if ((F.v7069 == v807)) {
F.p3038 = yr2988_Unbounded(F.v7063);
if ((((F.v7055 == v573)) || ((F.v7055 == v576)))) {
yr2837_CommonScale(&F.v7057, F.v7063, &F.v7059, F.v7065, F.p3038, ((*(yR105 *)y_deref(F.p3035))).f_line);
if ((F.v7055 == v573)) {
F.p3037 = yr2994_Call2(y_str("y_fix_add", 9), F.v7057, F.v7059);
} else {
F.p3037 = yr2994_Call2(y_str("y_fix_sub", 9), F.v7057, F.v7059);
}
} else if ((F.v7055 == v579)) {
yr2568_SetScale(F.p3038, yr2535_MulChk(((*(yR110 *)y_deref(F.v7063))).f_fsn, ((*(yR110 *)y_deref(F.v7065))).f_fsn, ((*(yR105 *)y_deref(F.p3035))).f_line), yr2535_MulChk(((*(yR110 *)y_deref(F.v7063))).f_fsd, ((*(yR110 *)y_deref(F.v7065))).f_fsd, ((*(yR105 *)y_deref(F.p3035))).f_line));
F.p3037 = yr2994_Call2(y_str("y_fix_mul", 9), F.v7057, F.v7059);
} else if ((F.v7055 == v582)) {
F.p3038 = v1354;
F.p3037 = yr2865_FloatChk(yr2994_Call2(y_str("rt_fdiv", 7), yr3027_FixToFloat(F.v7057, F.v7063), yr3027_FixToFloat(F.v7059, F.v7065)));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7055, y_str(" does not apply to these numbers", 32));
}
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3035))).f_line, F.v7055, y_str(" does not apply to these values", 31));
(*F.p3037_o) = F.p3037;
(*F.p3038_o) = F.p3038;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3043_Fits(void * a_p3044, void * a_p3045) {
struct yf3046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3044 = a_p3044;
F.p3045 = a_p3045;
if ((((*(yR110 *)y_deref(F.p3044))).f_kind == v843)) {
if ((!yr2384_IsArrayLike(F.p3045))) {
{ rt_int rv7117 = 0;
y_use = F.yu; return rv7117; }
}
if ((!(((*(yR110 *)y_deref(F.p3045))).f_nidx == ((*(yR110 *)y_deref(F.p3044))).f_nidx))) {
{ rt_int rv7119 = 0;
y_use = F.yu; return rv7119; }
}
{ rt_int rv7120 = yr2439_SameType(((*(yR110 *)y_deref(F.p3044))).f_elem, ((*(yR110 *)y_deref(F.p3045))).f_elem);
y_use = F.yu; return rv7120; }
}
if ((((*(yR110 *)y_deref(F.p3044))).f_kind == v855)) {
{ rt_int rv7122 = 1;
y_use = F.yu; return rv7122; }
}
{ rt_int rv7123 = yr2439_SameType(F.p3044, F.p3045);
y_use = F.yu; return rv7123; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3050_Choose(void * a_p3051, rt_int a_p3052, rt_int a_p3053) {
struct yf3054 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3051 = a_p3051;
F.p3052 = a_p3052;
F.p3053 = a_p3053;
F.v7129 = F.p3051;
while ((!(F.v7129 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v7129))).f_nparams == F.p3053)) {
F.v7133 = 1;
F.v7131 = ((*(yR125 *)y_deref(F.v7129))).f_params;
F.v7135 = INT64_C(1);
while ((!(F.v7131 == ((void *)0)))) {
Y_TICK();
if ((!yr3043_Fits(((*(yR120 *)y_deref(F.v7131))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, rt_add(F.p3052, F.v7135))]))) {
F.v7133 = 0;
}
F.v7135 = rt_range(rt_add(F.v7135, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7131 = ((*(yR120 *)y_deref(F.v7131))).f_next;
}
if (F.v7133) {
{ void * rv7142 = F.v7129;
y_use = F.yu; return rv7142; }
}
}
F.v7129 = ((*(yR125 *)y_deref(F.v7129))).f_alt;
}
{ void * rv7143 = ((void *)0);
y_use = F.yu; return rv7143; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3058_HidesStandard(void * a_p3059) {
struct yf3060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3059 = a_p3059;
F.v7147 = F.p3059;
while ((!(F.v7147 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR125 *)y_deref(F.v7147))).f_decl == ((void *)0)))) && ((((*(yR105 *)y_deref(((*(yR125 *)y_deref(F.v7147))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv7150 = 1;
y_use = F.yu; return rv7150; }
}
F.v7147 = ((*(yR125 *)y_deref(F.v7147))).f_alt;
}
{ rt_int rv7152 = 0;
y_use = F.yu; return rv7152; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3064_CompileArgs(void * a_p3065, void * a_p3066, rt_int * a_p3067, rt_int * a_p3068) {
struct yf3069 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3065 = a_p3065;
F.p3066 = a_p3066;
F.p3067_o = a_p3067;
F.p3068_o = a_p3068;
F.v7159 = F.p3065;
F.v7161 = ((void *)0);
F.p3067 = v1518;
F.p3068 = INT64_C(0);
if ((!(F.p3066 == ((void *)0)))) {
F.v7161 = ((*(yR125 *)y_deref(F.p3066))).f_params;
}
while ((!(F.v7159 == ((void *)0)))) {
Y_TICK();
if ((v1518 >= INT64_C(4000))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7159))).f_line, y_str("calls nested too deeply", 23));
}
F.p3068 = rt_range(rt_add(F.p3068, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1518 = rt_range(rt_add(F.p3067, F.p3068), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7163 = ((void *)0);
if ((!(F.v7161 == ((void *)0)))) {
F.v7163 = ((*(yR120 *)y_deref(F.v7161))).f_rep;
F.v7161 = ((*(yR120 *)y_deref(F.v7161))).f_next;
}
yr2938_Expr(F.v7159, F.v7163, &((rt_int *)(v1494).p)[y_ix1(v1494, rt_add(F.p3067, F.p3068))], &((void * *)(v1505).p)[y_ix1(v1505, rt_add(F.p3067, F.p3068))]);
((void * *)(v1516).p)[y_ix1(v1516, rt_add(F.p3067, F.p3068))] = F.v7159;
F.v7159 = ((*(yR105 *)y_deref(F.v7159))).f_next;
}
(*F.p3067_o) = F.p3067;
(*F.p3068_o) = F.p3068;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3073_CheckUnresolved(void * a_p3074, void * a_p3075, rt_int a_p3076) {
struct yf3077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3074 = a_p3074;
F.p3075 = a_p3075;
F.p3076 = a_p3076;
if ((((!(((*(yR110 *)y_deref(F.p3074))).f_kind == v843))) || ((!(((*(yR110 *)y_deref(F.p3075))).f_kind == v822))))) {
y_use = F.yu; return;
}
F.v7178 = ((*(yR110 *)y_deref(F.p3075))).f_idx;
while ((!(F.v7178 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR110 *)y_deref(F.v7178))).f_kind == v804))) {
yr1178_FailS(F.p3076, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v7178 = ((*(yR110 *)y_deref(F.v7178))).f_link;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3081_SameAsFormal(void * a_p3082, void * a_p3083) {
struct yf3084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3082 = a_p3082;
F.p3083 = a_p3083;
if ((((*(yR110 *)y_deref(F.p3082))).f_kind == v855)) {
{ rt_int rv7184 = 1;
y_use = F.yu; return rv7184; }
}
if ((((*(yR110 *)y_deref(F.p3082))).f_kind == v843)) {
if ((!((((((*(yR110 *)y_deref(F.p3083))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p3083))).f_kind == v843)))))) {
{ rt_int rv7186 = 0;
y_use = F.yu; return rv7186; }
}
{ rt_int rv7187 = yr2481_Identical(((*(yR110 *)y_deref(F.p3082))).f_elem, ((*(yR110 *)y_deref(F.p3083))).f_elem);
y_use = F.yu; return rv7187; }
}
{ rt_int rv7188 = yr2481_Identical(F.p3082, F.p3083);
y_use = F.yu; return rv7188; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3088_CallCode(void * a_p3089, rt_int a_p3090, rt_int a_p3091, rt_int a_p3092) {
struct yf3093 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3089 = a_p3089;
F.p3090 = a_p3090;
F.p3091 = a_p3091;
F.p3092 = a_p3092;
F.v7195 = ((*(yR125 *)y_deref(F.p3089))).f_params;
F.v7197 = rt_range(rt_add(F.p3090, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7201 = 1;
F.v7204 = INT64_C(0);
F.v7207 = INT64_C(0);
F.v7210 = INT64_C(0);
F.v7213 = INT64_C(0);
F.v7216 = INT64_C(0);
if ((!(F.p3091 == ((*(yR125 *)y_deref(F.p3089))).f_nparams))) {
yr1186_FailN(F.p3092, ((*(yR125 *)y_deref(F.p3089))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3380_CheckActuals(F.p3089, F.p3090, F.p3092);
yr1026_SB();
yr1044_ST(((*(yR125 *)y_deref(F.p3089))).f_cname);
yr1037_SA(y_str("(", 1));
if ((((*(yR125 *)y_deref(F.p3089))).f_level > INT64_C(1))) {
yr1044_ST(yr2334_FramePtr(rt_range(rt_sub(((*(yR125 *)y_deref(F.p3089))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7201 = 0;
}
while ((!(F.v7195 == ((void *)0)))) {
Y_TICK();
if ((!F.v7201)) {
yr1037_SA(y_str(", ", 2));
}
F.v7201 = 0;
if ((!yr3043_Fits(((*(yR120 *)y_deref(F.v7195))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)]))) {
v927 = 0;
yr2446_TypeClash(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line, ((*(yR120 *)y_deref(F.v7195))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)]);
}
yr3073_CheckUnresolved(((*(yR120 *)y_deref(F.v7195))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)], ((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line);
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v7195))).f_rep))).f_kind == v855)) {
if (((((!(((*(yR120 *)y_deref(F.v7195))).f_cls == v897))) && (!yr2899_IsVariable(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))) && ((!(((*(yR110 *)y_deref(((void * *)(v1505).p)[y_ix1(v1505, F.v7197)]))).f_kind == v855))))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line, ((*(yR120 *)y_deref(F.v7195))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr1044_ST(yr2745_SpaceArg(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)], ((rt_int *)(v1494).p)[y_ix1(v1494, F.v7197)], ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)]));
} else if ((((*(yR120 *)y_deref(F.v7195))).f_cls == v897)) {
yr1044_ST(yr2871_Convert(((rt_int *)(v1494).p)[y_ix1(v1494, F.v7197)], ((*(yR120 *)y_deref(F.v7195))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)]));
} else {
if ((!yr2899_IsVariable(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))) {
v927 = 0;
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line, ((*(yR120 *)y_deref(F.v7195))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2905_CheckPure(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]);
yr3347_NoteWrite(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]);
if ((((((*(yR120 *)y_deref(F.v7195))).f_cls == v903)) && yr2753_PackedComponent(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line, ((*(yR120 *)y_deref(F.v7195))).f_name, y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
}
if (yr3081_SameAsFormal(((*(yR120 *)y_deref(F.v7195))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)])) {
yr1037_SA(y_str("&", 1));
yr1044_ST(((rt_int *)(v1494).p)[y_ix1(v1494, F.v7197)]);
} else if ((((*(yR120 *)y_deref(F.v7195))).f_cls == v903)) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line, ((*(yR120 *)y_deref(F.v7195))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v7210 = yr1200_Fresh(y_str("yo", 2));
F.v7204 = yr3292_Join(F.v7204, yr3292_Join(yr2421_CType(((*(yR120 *)y_deref(F.v7195))).f_rep), yr1061_T(y_str(" ", 1)), F.v7210), yr1061_T(y_str(";", 1)));
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v7195))).f_rep))).f_kind == v843)) {
F.v7204 = yr3292_Join(F.v7204, yr3292_Join(yr1061_T(y_str(" ", 1)), F.v7210, yr1061_T(y_str(" = y_like(", 10))), yr3292_Join(((rt_int *)(v1494).p)[y_ix1(v1494, F.v7197)], yr3292_Join(yr1061_T(y_str(", ", 2)), yr3097_Num(((*(yR110 *)y_deref(((void * *)(v1505).p)[y_ix1(v1505, F.v7197)]))).f_nidx), yr1061_T(y_str(", ", 2))), yr3292_Join(yr2427_DescOf(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v7195))).f_rep))).f_elem), yr1061_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2396_Deep(((*(yR120 *)y_deref(F.v7195))).f_rep)) {
F.v7204 = yr3292_Join(F.v7204, yr3292_Join(yr1061_T(y_str(" y_init(", 8)), yr2427_DescOf(((*(yR120 *)y_deref(F.v7195))).f_rep), yr1061_T(y_str(", &", 3))), yr3292_Join(F.v7210, yr1061_T(y_str(");", 2)), INT64_C(0)));
}
F.v7207 = yr3292_Join(F.v7207, yr1061_T(y_str(" ", 1)), yr2879_StoreText(((rt_int *)(v1494).p)[y_ix1(v1494, F.v7197)], ((void * *)(v1505).p)[y_ix1(v1505, F.v7197)], F.v7210, ((*(yR120 *)y_deref(F.v7195))).f_rep, ((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v7197)]))).f_line));
yr1037_SA(y_str("&", 1));
yr1044_ST(F.v7210);
}
}
F.v7197 = rt_range(rt_add(F.v7197, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7195 = ((*(yR120 *)y_deref(F.v7195))).f_next;
}
yr1037_SA(y_str(")", 1));
v1518 = F.p3090;
F.v7213 = yr1056_SE();
if ((F.v7204 == INT64_C(0))) {
{ rt_int rv7252 = F.v7213;
y_use = F.yu; return rv7252; }
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(F.v7204);
if ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3089))).f_ret))).f_kind == v852)) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7213);
yr1037_SA(y_str(";", 1));
yr1044_ST(F.v7207);
yr1037_SA(y_str(" })", 3));
} else {
F.v7216 = yr1200_Fresh(y_str("yv", 2));
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2421_CType(((*(yR125 *)y_deref(F.p3089))).f_ret));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7216);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v7213);
yr1037_SA(y_str(";", 1));
yr1044_ST(F.v7207);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7216);
yr1037_SA(y_str("; })", 4));
}
{ rt_int rv7264 = yr1056_SE();
y_use = F.yu; return rv7264; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3097_Num(rt_int a_p3098) {
struct yf3099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3098 = a_p3098;
yr1026_SB();
yr1050_SI(F.p3098);
{ rt_int rv7267 = yr1056_SE();
y_use = F.yu; return rv7267; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3103_UserOp(void * a_p3104, rt_int a_p3105, void * a_p3106, void * a_p3107, rt_int * a_p3108, void * * a_p3109) {
struct yf3110 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3104 = a_p3104;
F.p3105 = a_p3105;
F.p3106 = a_p3106;
F.p3107 = a_p3107;
F.p3108_o = a_p3108;
F.p3109_o = a_p3109;
F.v7276 = yr2248_Find(F.p3105);
if ((F.v7276 == ((void *)0))) {
{ rt_int rv7284 = 0;
(*F.p3108_o) = F.p3108;
(*F.p3109_o) = F.p3109;
y_use = F.yu; return rv7284; }
}
F.v7276 = yr2353_Real(F.v7276);
if ((!(((*(yR125 *)y_deref(F.v7276))).f_kind == v876))) {
{ rt_int rv7286 = 0;
(*F.p3108_o) = F.p3108;
(*F.p3109_o) = F.p3109;
y_use = F.yu; return rv7286; }
}
((*(yR105 *)y_deref(F.p3106))).f_next = F.p3107;
if ((!(F.p3107 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3107))).f_next = ((void *)0);
}
yr3064_CompileArgs(F.p3106, ((void *)0), &F.v7280, &F.v7282);
F.v7278 = yr3050_Choose(F.v7276, F.v7280, F.v7282);
if ((F.v7278 == ((void *)0))) {
v1518 = F.v7280;
if (yr3058_HidesStandard(F.v7276)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3104))).f_line, F.p3105, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv7289 = 0;
(*F.p3108_o) = F.p3108;
(*F.p3109_o) = F.p3109;
y_use = F.yu; return rv7289; }
}
yr3114_NoteCall(F.v7278, ((*(yR105 *)y_deref(F.p3104))).f_line);
F.p3108 = yr3088_CallCode(F.v7278, F.v7280, F.v7282, ((*(yR105 *)y_deref(F.p3104))).f_line);
F.p3109 = ((*(yR125 *)y_deref(F.v7278))).f_ret;
{ rt_int rv7291 = 1;
(*F.p3108_o) = F.p3108;
(*F.p3109_o) = F.p3109;
y_use = F.yu; return rv7291; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3114_NoteCall(void * a_p3115, rt_int a_p3116) {
struct yf3117 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3115 = a_p3115;
F.p3116 = a_p3116;
F.v7298 = F.p3115;
if ((((((*(yR125 *)y_deref(F.v7298))).f_kind == v876)) && ((!(((*(yR125 *)y_deref(F.v7298))).f_target == ((void *)0)))))) {
F.v7298 = ((*(yR125 *)y_deref(F.v7298))).f_target;
}
if ((!((*(yR125 *)y_deref(F.v7298))).f_func)) {
v1639 = rt_range(rt_add(v1639, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
F.v7296 = yr1904_NewNode(v669, F.p3116);
((*(yR105 *)y_deref(F.v7296))).f_sym = F.v7298;
((*(yR105 *)y_deref(F.v7296))).f_next = ((*(yR125 *)y_deref(v1607))).f_calls;
((*(yR125 *)y_deref(v1607))).f_calls = F.v7296;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3121_UserAssign(rt_int a_p3122, void * a_p3123, rt_int a_p3124, void * a_p3125, rt_int a_p3126) {
struct yf3127 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3122 = a_p3122;
F.p3123 = a_p3123;
F.p3124 = a_p3124;
F.p3125 = a_p3125;
F.p3126 = a_p3126;
F.v7308 = yr2248_Find(rt_range(v531, INT64_C(0), INT64_C(4000000)));
if ((F.v7308 == ((void *)0))) {
{ rt_int rv7318 = INT64_C(0);
y_use = F.yu; return rv7318; }
}
F.v7308 = yr2353_Real(F.v7308);
if ((!(((*(yR125 *)y_deref(F.v7308))).f_kind == v876))) {
{ rt_int rv7320 = INT64_C(0);
y_use = F.yu; return rv7320; }
}
F.v7310 = F.v7308;
while ((!(F.v7310 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v7310))).f_nparams == INT64_C(2))) {
F.v7312 = ((*(yR125 *)y_deref(F.v7310))).f_params;
F.v7314 = ((*(yR120 *)y_deref(F.v7312))).f_next;
if ((((((!(((*(yR120 *)y_deref(F.v7312))).f_cls == v897))) && ((((*(yR120 *)y_deref(F.v7314))).f_cls == v897))) && yr2439_SameType(((*(yR120 *)y_deref(F.v7312))).f_rep, F.p3123)) && yr2439_SameType(((*(yR120 *)y_deref(F.v7314))).f_rep, F.p3125))) {
if ((v1607 == F.v7310)) {
{ rt_int rv7323 = INT64_C(0);
y_use = F.yu; return rv7323; }
}
yr3114_NoteCall(F.v7310, F.p3126);
yr1026_SB();
if (yr2481_Identical(((*(yR120 *)y_deref(F.v7312))).f_rep, F.p3123)) {
yr1044_ST(((*(yR125 *)y_deref(F.v7310))).f_cname);
yr1037_SA(y_str("(", 1));
if ((((*(yR125 *)y_deref(F.v7310))).f_level > INT64_C(1))) {
yr1044_ST(yr2334_FramePtr(rt_range(rt_sub(((*(yR125 *)y_deref(F.v7310))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.p3122);
} else {
F.v7316 = yr1200_Fresh(y_str("yo", 2));
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2421_CType(((*(yR120 *)y_deref(F.v7312))).f_rep));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7316);
yr1037_SA(y_str(";", 1));
if (yr2396_Deep(((*(yR120 *)y_deref(F.v7312))).f_rep)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2427_DescOf(((*(yR120 *)y_deref(F.v7312))).f_rep));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7316);
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(((*(yR125 *)y_deref(F.v7310))).f_cname);
yr1037_SA(y_str("(", 1));
if ((((*(yR125 *)y_deref(F.v7310))).f_level > INT64_C(1))) {
yr1044_ST(yr2334_FramePtr(rt_range(rt_sub(((*(yR125 *)y_deref(F.v7310))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.v7316);
}
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2871_Convert(F.p3124, ((*(yR120 *)y_deref(F.v7314))).f_rep, F.p3125));
yr1037_SA(y_str(");", 2));
if ((!yr2481_Identical(((*(yR120 *)y_deref(F.v7312))).f_rep, F.p3123))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2879_StoreText(F.p3122, F.p3123, F.v7316, ((*(yR120 *)y_deref(F.v7312))).f_rep, F.p3126));
yr1037_SA(y_str(" }", 2));
}
{ rt_int rv7348 = yr1056_SE();
y_use = F.yu; return rv7348; }
}
}
F.v7310 = ((*(yR125 *)y_deref(F.v7310))).f_alt;
}
{ rt_int rv7350 = INT64_C(0);
y_use = F.yu; return rv7350; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3131_Assign(rt_int a_p3132, void * a_p3133, rt_int a_p3134, void * a_p3135, rt_int a_p3136) {
struct yf3137 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3132 = a_p3132;
F.p3133 = a_p3133;
F.p3134 = a_p3134;
F.p3135 = a_p3135;
F.p3136 = a_p3136;
F.v7358 = yr3121_UserAssign(F.p3132, F.p3133, F.p3134, F.p3135, F.p3136);
if ((!(F.v7358 == INT64_C(0)))) {
yr1132_Emit(F.v7358);
} else {
yr2889_Store(F.p3132, F.p3133, F.p3134, F.p3135, F.p3136);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3141_CallExpr(void * a_p3142, void * a_p3143, rt_int a_p3144, rt_int * a_p3145, void * * a_p3146) {
struct yf3147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3142 = a_p3142;
F.p3143 = a_p3143;
F.p3144 = a_p3144;
F.p3145_o = a_p3145;
F.p3146_o = a_p3146;
F.v7367 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(F.p3142))).f_name, ((*(yR105 *)y_deref(F.p3142))).f_line));
if ((((*(yR125 *)y_deref(F.v7367))).f_kind == v891)) {
yr3770_StdCall(((*(yR125 *)y_deref(F.v7367))).f_mval, F.p3142, F.p3144, &F.p3145, &F.p3146);
(*F.p3145_o) = F.p3145;
(*F.p3146_o) = F.p3146;
y_use = F.yu; return;
}
if ((((((*(yR125 *)y_deref(F.v7367))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v7367))).f_kind == v870)))) {
if (F.p3144) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3142))).f_line, y_str("a value is not a statement", 26));
}
yr3151_Denote(((*(yR125 *)y_deref(F.v7367))).f_rep, F.p3142, &F.p3145, &F.p3146);
(*F.p3145_o) = F.p3145;
(*F.p3146_o) = F.p3146;
y_use = F.yu; return;
}
if ((!(((*(yR125 *)y_deref(F.v7367))).f_kind == v876))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3142))).f_line, ((*(yR105 *)y_deref(F.p3142))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR125 *)y_deref(F.v7367))).f_alt == ((void *)0))) {
yr3064_CompileArgs(((*(yR105 *)y_deref(F.p3142))).f_a, F.v7367, &F.v7371, &F.v7373);
F.v7369 = F.v7367;
} else {
yr3064_CompileArgs(((*(yR105 *)y_deref(F.p3142))).f_a, ((void *)0), &F.v7371, &F.v7373);
F.v7369 = yr3050_Choose(F.v7367, F.v7371, F.v7373);
if ((F.v7369 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3142))).f_line, ((*(yR105 *)y_deref(F.p3142))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr3114_NoteCall(F.v7369, ((*(yR105 *)y_deref(F.p3142))).f_line);
F.p3145 = yr3088_CallCode(F.v7369, F.v7371, F.v7373, ((*(yR105 *)y_deref(F.p3142))).f_line);
F.p3146 = ((*(yR125 *)y_deref(F.v7369))).f_ret;
if ((F.p3144 && ((!(((*(yR110 *)y_deref(F.p3146))).f_kind == v852))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3142))).f_line, ((*(yR105 *)y_deref(F.p3142))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3144) && ((((*(yR110 *)y_deref(F.p3146))).f_kind == v852)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3142))).f_line, ((*(yR105 *)y_deref(F.p3142))).f_name, y_str(" returns no value", 17));
}
(*F.p3145_o) = F.p3145;
(*F.p3146_o) = F.p3146;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3151_Denote(void * a_p3152, void * a_p3153, rt_int * a_p3154, void * * a_p3155) {
struct yf3156 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3152 = a_p3152;
F.p3153 = a_p3153;
F.p3154_o = a_p3154;
F.p3155_o = a_p3155;
F.v7385 = ((*(yR105 *)y_deref(F.p3153))).f_a;
F.v7405 = INT64_C(0);
F.v7412 = 1;
F.p3155 = F.p3152;
if (((*(yR110 *)y_deref(F.p3152))).f_abstract) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3153))).f_line, ((*(yR110 *)y_deref(F.p3152))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR110 *)y_deref(F.p3152))).f_kind == v825)) {
if (((*(yR110 *)y_deref(F.p3152))).f_opaque) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3153))).f_line, ((*(yR110 *)y_deref(F.p3152))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1026_SB();
yr1037_SA(y_str("((", 2));
yr1044_ST(((*(yR110 *)y_deref(F.p3152))).f_cname);
yr1037_SA(y_str("){ ", 3));
F.v7391 = yr1056_SE();
F.v7387 = ((*(yR110 *)y_deref(F.p3152))).f_fields;
while ((!(F.v7387 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR115 *)y_deref(F.v7387))).f_variant == INT64_C(0))) || ((((*(yR115 *)y_deref(F.v7387))).f_variant == F.v7405)))) {
if ((F.v7385 == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3153))).f_line, y_str("too few components in this record value", 39));
}
yr2938_Expr(F.v7385, ((*(yR115 *)y_deref(F.v7387))).f_rep, &F.v7389, &F.v7395);
yr2454_CheckType(((*(yR105 *)y_deref(F.v7385))).f_line, ((*(yR115 *)y_deref(F.v7387))).f_rep, F.v7395);
if ((F.v7387 == ((*(yR110 *)y_deref(F.p3152))).f_selector)) {
yr2790_Manifest(F.v7385, &F.v7403, &F.v7408);
if ((!F.v7403)) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7385))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v7405 = yr3160_VariantOf(F.p3152, F.v7408, ((*(yR105 *)y_deref(F.v7385))).f_line);
}
yr1026_SB();
yr1044_ST(F.v7391);
if ((!F.v7412)) {
yr1037_SA(y_str(", ", 2));
}
F.v7412 = 0;
yr1037_SA(y_str(".f_", 3));
yr1044_ST(((*(yR115 *)y_deref(F.v7387))).f_name);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2871_Convert(F.v7389, ((*(yR115 *)y_deref(F.v7387))).f_rep, F.v7395));
F.v7391 = yr1056_SE();
F.v7385 = ((*(yR105 *)y_deref(F.v7385))).f_next;
}
F.v7387 = ((*(yR115 *)y_deref(F.v7387))).f_next;
}
if ((!(F.v7385 == ((void *)0)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3153))).f_line, y_str("too many components in this record value", 40));
}
yr1026_SB();
yr1044_ST(F.v7391);
yr1037_SA(y_str(" })", 3));
F.p3154 = yr1056_SE();
(*F.p3154_o) = F.p3154;
(*F.p3155_o) = F.p3155;
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p3152))).f_kind == v822)) {
F.v7397 = yr1919_Count(F.v7385);
F.v7391 = yr1200_Fresh(y_str("da", 2));
if ((F.v7397 == INT64_C(1))) {
yr2938_Expr(F.v7385, ((*(yR110 *)y_deref(F.p3152))).f_elem, &F.v7389, &F.v7395);
yr2454_CheckType(((*(yR105 *)y_deref(F.v7385))).f_line, ((*(yR110 *)y_deref(F.p3152))).f_elem, F.v7395);
F.v7393 = yr1200_Fresh(y_str("dv", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2421_CType(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7393);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2871_Convert(F.v7389, ((*(yR110 *)y_deref(F.p3152))).f_elem, F.v7395));
yr1037_SA(y_str("; y_fill(", 9));
yr1044_ST(yr2427_DescOf(F.p3152));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7393);
yr1037_SA(y_str("); })", 5));
F.p3154 = yr1056_SE();
(*F.p3154_o) = F.p3154;
(*F.p3155_o) = F.p3155;
y_use = F.yu; return;
}
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(F.v7391);
yr1037_SA(y_str("; y_init(", 9));
yr1044_ST(yr2427_DescOf(F.p3152));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7391);
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(F.v7391);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p3152))).f_nidx);
yr1037_SA(y_str(") != ", 5));
yr1050_SI(F.v7397);
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("wrong number of components", 26));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
F.p3154 = yr1056_SE();
F.v7401 = INT64_C(0);
while ((!(F.v7385 == ((void *)0)))) {
Y_TICK();
yr2938_Expr(F.v7385, ((*(yR110 *)y_deref(F.p3152))).f_elem, &F.v7389, &F.v7395);
yr2454_CheckType(((*(yR105 *)y_deref(F.v7385))).f_line, ((*(yR110 *)y_deref(F.p3152))).f_elem, F.v7395);
yr1026_SB();
yr1044_ST(F.p3154);
if (yr2396_Deep(((*(yR110 *)y_deref(F.p3152))).f_elem)) {
yr1037_SA(y_str(" { ", 3));
yr1044_ST(yr2421_CType(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(" dv = ", 6));
yr1044_ST(F.v7389);
yr1037_SA(y_str("; y_copy(", 9));
yr1044_ST(yr2427_DescOf(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(", &((", 5));
yr1044_ST(yr2421_CType(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(F.v7391);
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(F.v7401);
yr1037_SA(y_str("], &dv); }", 10));
} else {
yr1037_SA(y_str(" ((", 3));
yr1044_ST(yr2421_CType(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(F.v7391);
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(F.v7401);
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2871_Convert(F.v7389, ((*(yR110 *)y_deref(F.p3152))).f_elem, F.v7395));
yr1037_SA(y_str(";", 1));
}
F.p3154 = yr1056_SE();
F.v7401 = rt_range(rt_add(F.v7401, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7385 = ((*(yR105 *)y_deref(F.v7385))).f_next;
}
yr1026_SB();
yr1044_ST(F.p3154);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7391);
yr1037_SA(y_str("; })", 4));
F.p3154 = yr1056_SE();
(*F.p3154_o) = F.p3154;
(*F.p3155_o) = F.p3155;
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p3152))).f_kind == v834)) {
yr1026_SB();
yr1037_SA(y_str("y_set_new(", 10));
yr1044_ST(yr2502_LoText(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2508_HiText(((*(yR110 *)y_deref(F.p3152))).f_elem));
yr1037_SA(y_str(")", 1));
F.p3154 = yr1056_SE();
while ((!(F.v7385 == ((void *)0)))) {
Y_TICK();
yr2938_Expr(F.v7385, ((*(yR110 *)y_deref(F.p3152))).f_elem, &F.v7389, &F.v7395);
yr2454_CheckType(((*(yR105 *)y_deref(F.v7385))).f_line, ((*(yR110 *)y_deref(F.p3152))).f_elem, F.v7395);
F.p3154 = yr2994_Call2(y_str("y_set_add", 9), F.p3154, F.v7389);
F.v7385 = ((*(yR105 *)y_deref(F.v7385))).f_next;
}
(*F.p3154_o) = F.p3154;
(*F.p3155_o) = F.p3155;
y_use = F.yu; return;
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3153))).f_line, ((*(yR110 *)y_deref(F.p3152))).f_tname, y_str(" has no denotations of values", 29));
(*F.p3154_o) = F.p3154;
(*F.p3155_o) = F.p3155;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3160_VariantOf(void * a_p3161, rt_int a_p3162, rt_int a_p3163) {
struct yf3164 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3161 = a_p3161;
F.p3162 = a_p3162;
F.p3163 = a_p3163;
F.v7474 = ((*(yR110 *)y_deref(F.p3161))).f_fields;
while ((!(F.v7474 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR115 *)y_deref(F.v7474))).f_variant == INT64_C(0)))) {
F.v7476 = ((*(yR115 *)y_deref(F.v7474))).f_labels;
while ((!(F.v7476 == ((void *)0)))) {
Y_TICK();
yr2790_Manifest(F.v7476, &F.v7478, &F.v7480);
if ((F.v7478 && ((F.v7480 == F.p3162)))) {
{ rt_int rv7482 = ((*(yR115 *)y_deref(F.v7474))).f_variant;
y_use = F.yu; return rv7482; }
}
F.v7476 = ((*(yR105 *)y_deref(F.v7476))).f_next;
}
}
F.v7474 = ((*(yR115 *)y_deref(F.v7474))).f_next;
}
{ rt_int rv7484 = INT64_C(-1);
y_use = F.yu; return rv7484; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3168_Emit2(yarr a_p3170, rt_int a_p3171) {
struct yf3172 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3170 = a_p3170;
F.p3171 = a_p3171;
yr1026_SB();
yr1037_SA(F.p3170);
yr1044_ST(F.p3171);
F.v7489 = yr1056_SE();
yr1132_Emit(F.v7489);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3176_Emit3(yarr a_p3178, rt_int a_p3179, yarr a_p3181) {
struct yf3182 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3178 = a_p3178;
F.p3179 = a_p3179;
F.p3181 = a_p3181;
yr1026_SB();
yr1037_SA(F.p3178);
yr1044_ST(F.p3179);
yr1037_SA(F.p3181);
F.v7495 = yr1056_SE();
yr1132_Emit(F.v7495);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3186_PopTo(rt_int a_p3187) {
struct yf3188 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3187 = a_p3187;
if ((v1532 > F.p3187)) {
yr3176_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1530).p)[y_ix1(v1530, rt_add(F.p3187, INT64_C(1)))], y_str(".prev;", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3192_LeaveBlock(void) {
struct yf3193 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1560 > INT64_C(0))) {
if ((!(((rt_int *)(v1547).p)[y_ix1(v1547, v1560)] == INT64_C(0)))) {
yr3176_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1547).p)[y_ix1(v1547, v1560)], y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3197_RaiseCode(rt_int a_p3198) {
struct yf3199 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3198 = a_p3198;
yr1026_SB();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
yr1031_SC(34);
yr1044_ST(F.p3198);
yr1031_SC(34);
yr1037_SA(y_str("));", 3));
{ rt_int rv7513 = yr1056_SE();
y_use = F.yu; return rv7513; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3203_BlockStatements(void * a_p3204) {
struct yf3205 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3204 = a_p3204;
F.v7529 = ((*(yR105 *)y_deref(F.p3204))).f_a;
F.v7531 = INT64_C(0);
while ((!(F.v7529 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v7529))).f_kind == v645)) && ((F.v7531 == INT64_C(0))))) {
F.v7531 = yr1200_Fresh(y_str("xs", 2));
yr3176_Emit3(y_str("rt_frame *", 10), F.v7531, y_str(" = rt_xtop;", 11));
}
F.v7529 = ((*(yR105 *)y_deref(F.v7529))).f_next;
}
if ((((*(yR105 *)y_deref(F.p3204))).f_b == ((void *)0))) {
v1560 = rt_range(rt_add(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1547).p)[y_ix1(v1547, v1560)] = INT64_C(0);
((rt_int *)(v1558).p)[y_ix1(v1558, v1560)] = F.v7531;
yr3256_Statements(((*(yR105 *)y_deref(F.p3204))).f_c);
v1560 = rt_range(rt_sub(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3324_CheckLabels(((*(yR105 *)y_deref(F.p3204))).f_a);
y_use = F.yu; return;
}
v1636 = 1;
F.v7517 = yr1200_Fresh(y_str("xf", 2));
yr3176_Emit3(y_str("{ rt_frame ", 11), F.v7517, y_str(";", 1));
yr3176_Emit3(y_str("if (RT_TRY(", 11), F.v7517, y_str(")) {", 4));
v1532 = rt_range(rt_add(v1532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1530).p)[y_ix1(v1530, v1532)] = F.v7517;
v1560 = rt_range(rt_add(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1547).p)[y_ix1(v1547, v1560)] = F.v7517;
((rt_int *)(v1558).p)[y_ix1(v1558, v1560)] = F.v7531;
yr3256_Statements(((*(yR105 *)y_deref(F.p3204))).f_c);
v1560 = rt_range(rt_sub(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1532 = rt_range(rt_sub(v1532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3324_CheckLabels(((*(yR105 *)y_deref(F.p3204))).f_a);
yr3176_Emit3(y_str("RT_POP(", 7), F.v7517, y_str(");", 2));
yr1138_EmitS(y_str("} else {", 8));
yr3176_Emit3(y_str("RT_POP(", 7), F.v7517, y_str(");", 2));
if ((v1279 > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
}
F.v7519 = yr1200_Fresh(y_str("xc", 2));
yr3176_Emit3(y_str("int ", 4), F.v7519, y_str(" = rt_xcur;", 11));
v1560 = rt_range(rt_add(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1547).p)[y_ix1(v1547, v1560)] = INT64_C(0);
((rt_int *)(v1558).p)[y_ix1(v1558, v1560)] = INT64_C(0);
v1574 = rt_range(rt_add(v1574, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1572).p)[y_ix1(v1572, v1574)] = F.v7519;
F.v7527 = 1;
F.v7523 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3204))).f_b))).f_a;
while ((!(F.v7523 == ((void *)0)))) {
Y_TICK();
yr1026_SB();
if (F.v7527) {
yr1037_SA(y_str("if (", 4));
} else {
yr1037_SA(y_str("} else if (", 11));
}
F.v7527 = 0;
F.v7525 = ((*(yR105 *)y_deref(F.v7523))).f_a;
while ((!(F.v7525 == ((void *)0)))) {
Y_TICK();
yr1044_ST(F.v7519);
yr1037_SA(y_str(" == rt_exc(", 11));
yr1031_SC(34);
yr1044_ST(((*(yR105 *)y_deref(F.v7525))).f_name);
yr1031_SC(34);
yr1037_SA(y_str(")", 1));
if ((!(((*(yR105 *)y_deref(F.v7525))).f_next == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
}
F.v7525 = ((*(yR105 *)y_deref(F.v7525))).f_next;
}
yr1037_SA(y_str(") {", 3));
F.v7521 = yr1056_SE();
yr1132_Emit(F.v7521);
yr3256_Statements(((*(yR105 *)y_deref(F.v7523))).f_b);
F.v7523 = ((*(yR105 *)y_deref(F.v7523))).f_next;
}
if ((!F.v7527)) {
yr1138_EmitS(y_str("} else {", 8));
}
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3204))).f_b))).f_flag == INT64_C(1))) {
yr3256_Statements(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3204))).f_b))).f_b);
} else {
yr3176_Emit3(y_str("rt_raise(", 9), F.v7519, y_str(");", 2));
}
if ((!F.v7527)) {
yr1138_EmitS(y_str("}", 1));
}
v1574 = rt_range(rt_sub(v1574, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1560 = rt_range(rt_sub(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3209_SameDesig(void * a_p3210, void * a_p3211) {
struct yf3212 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3210 = a_p3210;
F.p3211 = a_p3211;
if ((((*(yR105 *)y_deref(F.p3210))).f_kind == v801)) {
{ rt_int rv7608 = yr3209_SameDesig(((*(yR105 *)y_deref(F.p3210))).f_a, F.p3211);
y_use = F.yu; return rv7608; }
}
if ((((*(yR105 *)y_deref(F.p3211))).f_kind == v801)) {
{ rt_int rv7609 = yr3209_SameDesig(F.p3210, ((*(yR105 *)y_deref(F.p3211))).f_a);
y_use = F.yu; return rv7609; }
}
if ((!(((*(yR105 *)y_deref(F.p3210))).f_kind == ((*(yR105 *)y_deref(F.p3211))).f_kind))) {
{ rt_int rv7611 = 0;
y_use = F.yu; return rv7611; }
}
if ((((*(yR105 *)y_deref(F.p3210))).f_kind == v777)) {
{ rt_int rv7612 = ((((((*(yR105 *)y_deref(F.p3210))).f_name == ((*(yR105 *)y_deref(F.p3211))).f_name)) && ((((*(yR105 *)y_deref(F.p3210))).f_d == ((void *)0)))) && ((((*(yR105 *)y_deref(F.p3211))).f_d == ((void *)0))));
y_use = F.yu; return rv7612; }
}
if ((((*(yR105 *)y_deref(F.p3210))).f_kind == v783)) {
{ rt_int rv7613 = (((((*(yR105 *)y_deref(F.p3210))).f_name == ((*(yR105 *)y_deref(F.p3211))).f_name)) && yr3209_SameDesig(((*(yR105 *)y_deref(F.p3210))).f_a, ((*(yR105 *)y_deref(F.p3211))).f_a));
y_use = F.yu; return rv7613; }
}
if ((((*(yR105 *)y_deref(F.p3210))).f_kind == v789)) {
{ rt_int rv7614 = yr3209_SameDesig(((*(yR105 *)y_deref(F.p3210))).f_a, ((*(yR105 *)y_deref(F.p3211))).f_a);
y_use = F.yu; return rv7614; }
}
if ((((*(yR105 *)y_deref(F.p3210))).f_kind == v786)) {
if ((!yr3209_SameDesig(((*(yR105 *)y_deref(F.p3210))).f_a, ((*(yR105 *)y_deref(F.p3211))).f_a))) {
{ rt_int rv7616 = 0;
y_use = F.yu; return rv7616; }
}
F.v7597 = ((*(yR105 *)y_deref(F.p3210))).f_b;
F.v7599 = ((*(yR105 *)y_deref(F.p3211))).f_b;
while ((((!(F.v7597 == ((void *)0)))) && ((!(F.v7599 == ((void *)0)))))) {
Y_TICK();
yr2790_Manifest(F.v7597, &F.v7601, &F.v7605);
yr2790_Manifest(F.v7599, &F.v7603, &F.v7607);
if ((F.v7601 && F.v7603)) {
if ((!(F.v7605 == F.v7607))) {
{ rt_int rv7618 = 0;
y_use = F.yu; return rv7618; }
}
} else if ((!yr3209_SameDesig(F.v7597, F.v7599))) {
{ rt_int rv7620 = 0;
y_use = F.yu; return rv7620; }
}
F.v7597 = ((*(yR105 *)y_deref(F.v7597))).f_next;
F.v7599 = ((*(yR105 *)y_deref(F.v7599))).f_next;
}
{ rt_int rv7621 = (((F.v7597 == ((void *)0))) && ((F.v7599 == ((void *)0))));
y_use = F.yu; return rv7621; }
}
{ rt_int rv7623 = 0;
y_use = F.yu; return rv7623; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3216_CheckVariantSelected(void * a_p3217, void * a_p3218, void * a_p3219) {
struct yf3220 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3217 = a_p3217;
F.p3218 = a_p3218;
F.p3219 = a_p3219;
F.v7629 = v1622;
while ((F.v7629 > INT64_C(0))) {
Y_TICK();
F.v7631 = ((void * *)(v1618).p)[y_ix1(v1618, F.v7629)];
while ((((*(yR105 *)y_deref(F.v7631))).f_kind == v801)) {
Y_TICK();
F.v7631 = ((*(yR105 *)y_deref(F.v7631))).f_a;
}
if (((((((*(yR105 *)y_deref(F.v7631))).f_kind == v783)) && ((((*(yR105 *)y_deref(F.v7631))).f_name == ((*(yR115 *)y_deref(((*(yR110 *)y_deref(F.p3218))).f_selector))).f_name))) && yr3209_SameDesig(((*(yR105 *)y_deref(F.v7631))).f_a, ((*(yR105 *)y_deref(F.p3217))).f_a))) {
F.v7633 = ((void * *)(v1620).p)[y_ix1(v1620, F.v7629)];
if ((F.v7633 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3217))).f_line, ((*(yR105 *)y_deref(F.p3217))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v7633 == ((void *)0)))) {
Y_TICK();
F.v7637 = yr3268_Label(F.v7633, ((*(yR115 *)y_deref(((*(yR110 *)y_deref(F.p3218))).f_selector))).f_rep);
F.v7643 = 0;
F.v7635 = ((*(yR115 *)y_deref(F.p3219))).f_labels;
while ((!(F.v7635 == ((void *)0)))) {
Y_TICK();
yr2790_Manifest(F.v7635, &F.v7641, &F.v7639);
if ((F.v7641 && ((F.v7639 == F.v7637)))) {
F.v7643 = 1;
}
F.v7635 = ((*(yR105 *)y_deref(F.v7635))).f_next;
}
if ((!F.v7643)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3217))).f_line, ((*(yR105 *)y_deref(F.p3217))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7633 = ((*(yR105 *)y_deref(F.v7633))).f_next;
}
y_use = F.yu; return;
}
F.v7629 = rt_range(rt_sub(F.v7629, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3217))).f_line, ((*(yR105 *)y_deref(F.p3217))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3224_CheckCaseLabels(void * a_p3225, void * a_p3226) {
struct yf3227 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3225 = a_p3225;
F.p3226 = a_p3226;
F.v7656 = ((*(yR105 *)y_deref(F.p3225))).f_b;
F.v7658 = ((*(yR105 *)y_deref(F.p3225))).f_b;
F.v7660 = INT64_C(0);
F.v7663 = INT64_C(0);
while ((!(F.v7656 == ((void *)0)))) {
Y_TICK();
F.v7658 = ((*(yR105 *)y_deref(F.v7656))).f_a;
while ((!(F.v7658 == ((void *)0)))) {
Y_TICK();
F.v7663 = yr3268_Label(F.v7658, F.p3226);
F.lo7668 = INT64_C(1);
F.hi7669 = F.v7660;
{ rt_int hi7673 = F.hi7669;
for (rt_int i7672 = F.lo7668; i7672 <= hi7673; i7672++) { F.c_7671 = i7672; Y_TICK();
if ((((rt_int *)(v1634).p)[y_ix1(v1634, F.c_7671)] == F.v7663)) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7658))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7672 == hi7673) break;
}}
if ((F.v7660 < INT64_C(4096))) {
F.v7660 = rt_range(rt_add(F.v7660, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1634).p)[y_ix1(v1634, F.v7660)] = F.v7663;
}
F.v7658 = ((*(yR105 *)y_deref(F.v7658))).f_next;
}
F.v7656 = ((*(yR105 *)y_deref(F.v7656))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3231_Falls(void * a_p3232) {
struct yf3233 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3232 = a_p3232;
F.v7681 = F.p3232;
F.v7683 = 1;
while ((!(F.v7681 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v7681))).f_text == INT64_C(0)))) {
F.v7683 = 1;
}
if (F.v7683) {
F.v7683 = yr3243_Completes(F.v7681);
}
F.v7681 = ((*(yR105 *)y_deref(F.v7681))).f_next;
}
{ rt_int rv7687 = F.v7683;
y_use = F.yu; return rv7687; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3237_BlockFalls(void * a_p3238) {
struct yf3239 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3238 = a_p3238;
if (yr3231_Falls(((*(yR105 *)y_deref(F.p3238))).f_c)) {
{ rt_int rv7693 = 1;
y_use = F.yu; return rv7693; }
}
if ((((*(yR105 *)y_deref(F.p3238))).f_b == ((void *)0))) {
{ rt_int rv7695 = 0;
y_use = F.yu; return rv7695; }
}
F.v7691 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3238))).f_b))).f_a;
while ((!(F.v7691 == ((void *)0)))) {
Y_TICK();
if (yr3231_Falls(((*(yR105 *)y_deref(F.v7691))).f_b)) {
{ rt_int rv7697 = 1;
y_use = F.yu; return rv7697; }
}
F.v7691 = ((*(yR105 *)y_deref(F.v7691))).f_next;
}
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3238))).f_b))).f_flag == INT64_C(1))) {
{ rt_int rv7699 = yr3231_Falls(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3238))).f_b))).f_b);
y_use = F.yu; return rv7699; }
}
{ rt_int rv7701 = 0;
y_use = F.yu; return rv7701; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3243_Completes(void * a_p3244) {
struct yf3245 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3244 = a_p3244;
F.v7705 = ((*(yR105 *)y_deref(F.p3244))).f_kind;
if (((((((F.v7705 == v729)) || ((F.v7705 == v732))) || ((F.v7705 == v735))) || ((F.v7705 == v723))) || ((F.v7705 == v726)))) {
{ rt_int rv7713 = 0;
y_use = F.yu; return rv7713; }
}
if ((F.v7705 == v738)) {
if ((!(((*(yR105 *)y_deref(F.p3244))).f_flag == INT64_C(1)))) {
{ rt_int rv7716 = 1;
y_use = F.yu; return rv7716; }
}
F.v7707 = ((*(yR105 *)y_deref(F.p3244))).f_a;
while ((!(F.v7707 == ((void *)0)))) {
Y_TICK();
if (yr3231_Falls(((*(yR105 *)y_deref(F.v7707))).f_b)) {
{ rt_int rv7718 = 1;
y_use = F.yu; return rv7718; }
}
F.v7707 = ((*(yR105 *)y_deref(F.v7707))).f_next;
}
{ rt_int rv7719 = yr3231_Falls(((*(yR105 *)y_deref(F.p3244))).f_b);
y_use = F.yu; return rv7719; }
}
if ((F.v7705 == v741)) {
if ((!(((*(yR105 *)y_deref(F.p3244))).f_flag == INT64_C(1)))) {
{ rt_int rv7722 = 1;
y_use = F.yu; return rv7722; }
}
F.v7707 = ((*(yR105 *)y_deref(F.p3244))).f_b;
while ((!(F.v7707 == ((void *)0)))) {
Y_TICK();
if (yr3231_Falls(((*(yR105 *)y_deref(F.v7707))).f_b)) {
{ rt_int rv7724 = 1;
y_use = F.yu; return rv7724; }
}
F.v7707 = ((*(yR105 *)y_deref(F.v7707))).f_next;
}
{ rt_int rv7725 = yr3231_Falls(((*(yR105 *)y_deref(F.p3244))).f_c);
y_use = F.yu; return rv7725; }
}
if ((F.v7705 == v744)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p3244))).f_a, &F.v7709, &F.v7711);
{ rt_int rv7727 = (!((F.v7709 && ((F.v7711 == INT64_C(1))))));
y_use = F.yu; return rv7727; }
}
if ((F.v7705 == v750)) {
{ rt_int rv7728 = yr3249_Exits(((*(yR105 *)y_deref(F.p3244))).f_b, ((*(yR105 *)y_deref(F.p3244))).f_name);
y_use = F.yu; return rv7728; }
}
if ((F.v7705 == v753)) {
{ rt_int rv7729 = yr3237_BlockFalls(((*(yR105 *)y_deref(F.p3244))).f_a);
y_use = F.yu; return rv7729; }
}
{ rt_int rv7731 = 1;
y_use = F.yu; return rv7731; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3249_Exits(void * a_p3250, rt_int a_p3251) {
struct yf3252 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3250 = a_p3250;
F.p3251 = a_p3251;
F.v7736 = F.p3250;
while ((!(F.v7736 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v7736))).f_kind == v726)) && ((((*(yR105 *)y_deref(F.v7736))).f_name == F.p3251)))) {
{ rt_int rv7740 = 1;
y_use = F.yu; return rv7740; }
}
if ((((*(yR105 *)y_deref(F.v7736))).f_kind == v738)) {
F.v7738 = ((*(yR105 *)y_deref(F.v7736))).f_a;
while ((!(F.v7738 == ((void *)0)))) {
Y_TICK();
if (yr3249_Exits(((*(yR105 *)y_deref(F.v7738))).f_b, F.p3251)) {
{ rt_int rv7742 = 1;
y_use = F.yu; return rv7742; }
}
F.v7738 = ((*(yR105 *)y_deref(F.v7738))).f_next;
}
if (yr3249_Exits(((*(yR105 *)y_deref(F.v7736))).f_b, F.p3251)) {
{ rt_int rv7744 = 1;
y_use = F.yu; return rv7744; }
}
} else if ((((*(yR105 *)y_deref(F.v7736))).f_kind == v741)) {
F.v7738 = ((*(yR105 *)y_deref(F.v7736))).f_b;
while ((!(F.v7738 == ((void *)0)))) {
Y_TICK();
if (yr3249_Exits(((*(yR105 *)y_deref(F.v7738))).f_b, F.p3251)) {
{ rt_int rv7746 = 1;
y_use = F.yu; return rv7746; }
}
F.v7738 = ((*(yR105 *)y_deref(F.v7738))).f_next;
}
if (yr3249_Exits(((*(yR105 *)y_deref(F.v7736))).f_c, F.p3251)) {
{ rt_int rv7748 = 1;
y_use = F.yu; return rv7748; }
}
} else if (((((((*(yR105 *)y_deref(F.v7736))).f_kind == v744)) || ((((*(yR105 *)y_deref(F.v7736))).f_kind == v747))) || ((((*(yR105 *)y_deref(F.v7736))).f_kind == v750)))) {
if (yr3249_Exits(((*(yR105 *)y_deref(F.v7736))).f_b, F.p3251)) {
{ rt_int rv7750 = 1;
y_use = F.yu; return rv7750; }
}
} else if ((((*(yR105 *)y_deref(F.v7736))).f_kind == v753)) {
if (yr3249_Exits(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7736))).f_a))).f_c, F.p3251)) {
{ rt_int rv7752 = 1;
y_use = F.yu; return rv7752; }
}
if ((!(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7736))).f_a))).f_b == ((void *)0)))) {
F.v7738 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7736))).f_a))).f_b))).f_a;
while ((!(F.v7738 == ((void *)0)))) {
Y_TICK();
if (yr3249_Exits(((*(yR105 *)y_deref(F.v7738))).f_b, F.p3251)) {
{ rt_int rv7754 = 1;
y_use = F.yu; return rv7754; }
}
F.v7738 = ((*(yR105 *)y_deref(F.v7738))).f_next;
}
if (yr3249_Exits(((*(yR105 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7736))).f_a))).f_b))).f_b, F.p3251)) {
{ rt_int rv7756 = 1;
y_use = F.yu; return rv7756; }
}
}
}
F.v7736 = ((*(yR105 *)y_deref(F.v7736))).f_next;
}
{ rt_int rv7758 = 0;
y_use = F.yu; return rv7758; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3256_Statements(void * a_p3257) {
struct yf3258 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3257 = a_p3257;
F.v7762 = F.p3257;
while ((!(F.v7762 == ((void *)0)))) {
Y_TICK();
yr3280_Statement(F.v7762);
F.v7762 = ((*(yR105 *)y_deref(F.v7762))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3262_Cond(void * a_p3263) {
struct yf3264 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3263 = a_p3263;
yr2938_Expr(F.p3263, v1344, &F.v7766, &F.v7768);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3263))).f_line, v1344, F.v7768);
{ rt_int rv7769 = F.v7766;
y_use = F.yu; return rv7769; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3268_Label(void * a_p3269, void * a_p3270) {
struct yf3271 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3269 = a_p3269;
F.p3270 = a_p3270;
if (((((((*(yR105 *)y_deref(F.p3269))).f_kind == v777)) && ((((*(yR105 *)y_deref(F.p3269))).f_d == ((void *)0)))) && ((((*(yR110 *)y_deref(F.p3270))).f_kind == v816)))) {
F.v7778 = yr2313_FindLit(((*(yR105 *)y_deref(F.p3269))).f_name, F.p3270);
if ((!(F.v7778 == ((void *)0)))) {
{ rt_int rv7783 = ((*(yR125 *)y_deref(yr2353_Real(F.v7778)))).f_mval;
y_use = F.yu; return rv7783; }
}
}
yr2938_Expr(F.p3269, F.p3270, &F.v7782, &F.v7780);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3269))).f_line, F.p3270, F.v7780);
yr2790_Manifest(F.p3269, &F.v7774, &F.v7776);
if ((!F.v7774)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3269))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7785 = F.v7776;
y_use = F.yu; return rv7785; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3275_CopyOut(void) {
struct yf3276 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
F.v7788 = ((*(yR125 *)y_deref(v1607))).f_params;
while ((!(F.v7788 == ((void *)0)))) {
Y_TICK();
if ((((*(yR120 *)y_deref(F.v7788))).f_cls == v900)) {
yr1026_SB();
yr1037_SA(y_str("(*F.", 4));
yr1044_ST(((*(yR120 *)y_deref(F.v7788))).f_cname);
yr1037_SA(y_str("_o)", 3));
F.v7790 = yr1056_SE();
if ((!(((*(yR120 *)y_deref(F.v7788))).f_path == INT64_C(0)))) {
yr3131_Assign(F.v7790, ((*(yR120 *)y_deref(F.v7788))).f_rep, ((*(yR120 *)y_deref(F.v7788))).f_path, ((*(yR120 *)y_deref(F.v7788))).f_rep, INT64_C(0));
} else {
yr3131_Assign(F.v7790, ((*(yR120 *)y_deref(F.v7788))).f_rep, yr2327_Path(v1279, ((*(yR120 *)y_deref(F.v7788))).f_cname), ((*(yR120 *)y_deref(F.v7788))).f_rep, INT64_C(0));
}
}
F.v7788 = ((*(yR120 *)y_deref(F.v7788))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3280_Statement(void * a_p3281) {
struct yf3282 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3281 = a_p3281;
F.v7799 = ((*(yR105 *)y_deref(F.p3281))).f_kind;
v1000 = ((*(yR105 *)y_deref(F.p3281))).f_line;
if ((!(((*(yR105 *)y_deref(F.p3281))).f_text == INT64_C(0)))) {
yr3312_PlaceLabel(F.p3281);
}
if ((F.v7799 == v714)) {
yr2911_LValue(((*(yR105 *)y_deref(F.p3281))).f_a, &F.v7801, &F.v7813);
yr2905_CheckPure(((*(yR105 *)y_deref(F.p3281))).f_a);
yr3347_NoteWrite(((*(yR105 *)y_deref(F.p3281))).f_a);
if ((((((*(yR110 *)y_deref(F.v7813))).f_kind == v837)) || yr2409_HoldsSignal(F.v7813))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3281))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2415_NonAssignable(F.v7813)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3281))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2938_Expr(((*(yR105 *)y_deref(F.p3281))).f_b, F.v7813, &F.v7803, &F.v7815);
F.v7805 = yr3121_UserAssign(F.v7801, F.v7813, F.v7803, F.v7815, ((*(yR105 *)y_deref(F.p3281))).f_line);
if ((!(F.v7805 == INT64_C(0)))) {
yr1132_Emit(F.v7805);
} else {
if ((((*(yR110 *)y_deref(F.v7813))).f_opaque && (((rt_mod(((*(yR110 *)y_deref(F.v7813))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3281))).f_line, ((*(yR110 *)y_deref(F.v7813))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2889_Store(F.v7801, F.v7813, F.v7803, F.v7815, ((*(yR105 *)y_deref(F.p3281))).f_line);
}
} else if ((F.v7799 == v717)) {
F.v7829 = yr2248_Find(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3281))).f_a))).f_name);
if ((!(F.v7829 == ((void *)0)))) {
F.v7829 = yr2353_Real(F.v7829);
}
if ((((!(F.v7829 == ((void *)0)))) && ((((*(yR125 *)y_deref(F.v7829))).f_kind == v885)))) {
yr3649_Activate(((*(yR105 *)y_deref(F.p3281))).f_a, F.v7829);
} else {
yr3141_CallExpr(((*(yR105 *)y_deref(F.p3281))).f_a, ((void *)0), 1, &F.v7801, &F.v7813);
yr3168_Emit2(y_str("", 0), F.v7801);
yr1026_SB();
yr1044_ST(F.v7801);
yr1037_SA(y_str(";", 1));
F.v7805 = yr1056_SE();
((*(yR135 *)y_deref((v996).f_tail))).f_t = F.v7805;
}
} else if ((F.v7799 == v738)) {
F.v7821 = 1;
F.v7817 = ((*(yR105 *)y_deref(F.p3281))).f_a;
while ((!(F.v7817 == ((void *)0)))) {
Y_TICK();
F.v7801 = yr3262_Cond(((*(yR105 *)y_deref(F.v7817))).f_a);
if (F.v7821) {
yr3176_Emit3(y_str("if (", 4), F.v7801, y_str(") {", 3));
} else {
yr3176_Emit3(y_str("} else if (", 11), F.v7801, y_str(") {", 3));
}
F.v7821 = 0;
yr3256_Statements(((*(yR105 *)y_deref(F.v7817))).f_b);
F.v7817 = ((*(yR105 *)y_deref(F.v7817))).f_next;
}
if ((((*(yR105 *)y_deref(F.p3281))).f_flag == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
yr3256_Statements(((*(yR105 *)y_deref(F.p3281))).f_b);
}
yr1138_EmitS(y_str("}", 1));
} else if ((F.v7799 == v744)) {
F.v7801 = yr3262_Cond(((*(yR105 *)y_deref(F.p3281))).f_a);
yr3176_Emit3(y_str("while (", 7), F.v7801, y_str(") {", 3));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3256_Statements(((*(yR105 *)y_deref(F.p3281))).f_b);
yr1138_EmitS(y_str("}", 1));
} else if ((F.v7799 == v750)) {
F.v7807 = yr1200_Fresh(y_str("yl_", 3));
v1601 = rt_range(rt_add(v1601, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1586).p)[y_ix1(v1586, v1601)] = ((*(yR105 *)y_deref(F.p3281))).f_name;
((rt_int *)(v1588).p)[y_ix1(v1588, v1601)] = F.v7807;
((rt_int *)(v1599).p)[y_ix1(v1599, v1601)] = v1532;
yr1138_EmitS(y_str("for (;;) {", 10));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3256_Statements(((*(yR105 *)y_deref(F.p3281))).f_b);
yr1138_EmitS(y_str("}", 1));
yr3176_Emit3(y_str("", 0), F.v7807, y_str(": ;", 3));
v1601 = rt_range(rt_sub(v1601, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7799 == v726)) {
F.v7823 = 0;
F.v7825 = v1601;
while ((((F.v7825 > v1604)) && (!F.v7823))) {
Y_TICK();
if ((((rt_int *)(v1586).p)[y_ix1(v1586, F.v7825)] == ((*(yR105 *)y_deref(F.p3281))).f_name)) {
F.v7823 = 1;
yr3186_PopTo(((rt_int *)(v1599).p)[y_ix1(v1599, F.v7825)]);
yr3176_Emit3(y_str("goto ", 5), ((rt_int *)(v1588).p)[y_ix1(v1588, F.v7825)], y_str(";", 1));
}
F.v7825 = rt_range(rt_sub(F.v7825, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7823)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3281))).f_line, ((*(yR105 *)y_deref(F.p3281))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7799 == v747)) {
yr3286_ForStatement(F.p3281);
} else if ((F.v7799 == v741)) {
yr2938_Expr(((*(yR105 *)y_deref(F.p3281))).f_a, ((void *)0), &F.v7801, &F.v7813);
if ((!yr2372_IsDiscrete(F.v7813))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3281))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3224_CheckCaseLabels(F.p3281, F.v7813);
yr3176_Emit3(y_str("switch (", 8), F.v7801, y_str(") {", 3));
F.v7817 = ((*(yR105 *)y_deref(F.p3281))).f_b;
while ((!(F.v7817 == ((void *)0)))) {
Y_TICK();
F.v7819 = ((*(yR105 *)y_deref(F.v7817))).f_a;
while ((!(F.v7819 == ((void *)0)))) {
Y_TICK();
F.v7827 = yr3268_Label(F.v7819, F.v7813);
yr1026_SB();
yr1037_SA(y_str("case ", 5));
yr1050_SI(F.v7827);
yr1037_SA(y_str(":", 1));
F.v7805 = yr1056_SE();
yr1132_Emit(F.v7805);
F.v7819 = ((*(yR105 *)y_deref(F.v7819))).f_next;
}
yr1138_EmitS(y_str("{", 1));
v1622 = rt_range(rt_add(v1622, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1618).p)[y_ix1(v1618, v1622)] = ((*(yR105 *)y_deref(F.p3281))).f_a;
((void * *)(v1620).p)[y_ix1(v1620, v1622)] = ((*(yR105 *)y_deref(F.v7817))).f_a;
yr3256_Statements(((*(yR105 *)y_deref(F.v7817))).f_b);
v1622 = rt_range(rt_sub(v1622, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
F.v7817 = ((*(yR105 *)y_deref(F.v7817))).f_next;
}
yr1138_EmitS(y_str("default: {", 10));
v1622 = rt_range(rt_add(v1622, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1618).p)[y_ix1(v1618, v1622)] = ((*(yR105 *)y_deref(F.p3281))).f_a;
((void * *)(v1620).p)[y_ix1(v1620, v1622)] = ((void *)0);
if ((((*(yR105 *)y_deref(F.p3281))).f_flag == INT64_C(1))) {
yr3256_Statements(((*(yR105 *)y_deref(F.p3281))).f_c);
}
v1622 = rt_range(rt_sub(v1622, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
yr1138_EmitS(y_str("}", 1));
} else if ((F.v7799 == v729)) {
yr3300_ReturnStatement(F.p3281);
} else if ((F.v7799 == v735)) {
if ((((*(yR105 *)y_deref(F.p3281))).f_name == INT64_C(0))) {
if ((v1574 == INT64_C(0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3281))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3176_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1572).p)[y_ix1(v1572, v1574)], y_str(");", 2));
} else {
yr3192_LeaveBlock();
yr1132_Emit(yr3197_RaiseCode(((*(yR105 *)y_deref(F.p3281))).f_name));
}
} else if ((F.v7799 == v720)) {
F.v7825 = v1639;
F.v7801 = yr3262_Cond(((*(yR105 *)y_deref(F.p3281))).f_a);
if ((!(v1639 == F.v7825))) {
yr1164_Warn(((*(yR105 *)y_deref(F.p3281))).f_line, yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3176_Emit3(y_str("if (!(", 6), F.v7801, y_str(")) {", 4));
yr3192_LeaveBlock();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7799 == v753)) {
yr3306_BeginStatement(F.p3281);
} else if ((F.v7799 == v732)) {
yr3679_TerminateStatement(F.p3281);
} else if ((F.v7799 == v723)) {
yr3318_GotoStatement(F.p3281);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p3281))).f_line, y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3286_ForStatement(void * a_p3287) {
struct yf3288 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3287 = a_p3287;
F.v7903 = yr2603_MakeRep(((*(yR105 *)y_deref(F.p3287))).f_a, INT64_C(0), 0);
if ((((!yr2372_IsDiscrete(F.v7903)) || ((((*(yR110 *)y_deref(F.v7903))).f_kind == v813))) || ((((((*(yR110 *)y_deref(F.v7903))).f_kind == v816)) && (!((*(yR110 *)y_deref(F.v7903))).f_ordered))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3287))).f_line, y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2462_CheckRepresented(F.v7903, ((*(yR105 *)y_deref(F.p3287))).f_line);
yr2225_OpenScope(0);
F.v7911 = yr2218_NewSym(v864, ((*(yR105 *)y_deref(F.p3287))).f_name);
((*(yR125 *)y_deref(F.v7911))).f_rep = F.v7903;
((*(yR125 *)y_deref(F.v7911))).f_level = v1279;
((*(yR125 *)y_deref(F.v7911))).f_cname = yr1200_Fresh(y_str("c_", 2));
yr2340_DeclStorage(yr1061_T(y_str("rt_int", 6)), ((*(yR125 *)y_deref(F.v7911))).f_cname);
yr2320_Define(F.v7911, ((*(yR105 *)y_deref(F.p3287))).f_line);
F.v7905 = yr1200_Fresh(y_str("i", 1));
F.v7907 = yr1200_Fresh(y_str("hi", 2));
yr1026_SB();
yr1037_SA(y_str("{ rt_int ", 9));
yr1044_ST(F.v7907);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2508_HiText(F.v7903));
yr1037_SA(y_str(";", 1));
F.v7909 = yr1056_SE();
yr1132_Emit(F.v7909);
yr1026_SB();
yr1037_SA(y_str("for (rt_int ", 12));
yr1044_ST(F.v7905);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2502_LoText(F.v7903));
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v7905);
yr1037_SA(y_str(" <= ", 4));
yr1044_ST(F.v7907);
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v7905);
yr1037_SA(y_str("++) { ", 6));
yr1044_ST(yr2347_SymPath(F.v7911));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v7905);
yr1037_SA(y_str("; Y_TICK();", 11));
F.v7909 = yr1056_SE();
yr1132_Emit(F.v7909);
yr3256_Statements(((*(yR105 *)y_deref(F.p3287))).f_b);
yr3176_Emit3(y_str("if (", 4), F.v7905, y_str(" == ", 4));
((*(yR135 *)y_deref((v996).f_tail))).f_t = yr3292_Join(((*(yR135 *)y_deref((v996).f_tail))).f_t, F.v7907, yr1061_T(y_str(") break;", 8)));
yr1138_EmitS(y_str("}}", 2));
yr2237_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3292_Join(rt_int a_p3293, rt_int a_p3294, rt_int a_p3295) {
struct yf3296 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3293 = a_p3293;
F.p3294 = a_p3294;
F.p3295 = a_p3295;
yr1026_SB();
yr1044_ST(F.p3293);
yr1044_ST(F.p3294);
yr1044_ST(F.p3295);
{ rt_int rv7939 = yr1056_SE();
y_use = F.yu; return rv7939; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3300_ReturnStatement(void * a_p3301) {
struct yf3302 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3301 = a_p3301;
if ((v1607 == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3301))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR125 *)y_deref(v1607))).f_kind == v885)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3301))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v7951 = ((*(yR125 *)y_deref(v1607))).f_ret;
if ((((*(yR105 *)y_deref(F.p3301))).f_a == ((void *)0))) {
if ((!(((*(yR110 *)y_deref(F.v7951))).f_kind == v852))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3301))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3275_CopyOut();
yr3674_LeaveMonitor();
yr3186_PopTo(v1535);
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.v7951))).f_kind == v852)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3301))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2938_Expr(((*(yR105 *)y_deref(F.p3301))).f_a, F.v7951, &F.v7943, &F.v7949);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3301))).f_line, F.v7951, F.v7949);
F.v7947 = yr1200_Fresh(y_str("rv", 2));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2421_CType(F.v7951));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7947);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2871_Convert(F.v7943, F.v7951, F.v7949));
yr1037_SA(y_str(";", 1));
F.v7945 = yr1056_SE();
yr1132_Emit(F.v7945);
yr3275_CopyOut();
yr3674_LeaveMonitor();
yr3186_PopTo(v1535);
yr3176_Emit3(y_str("y_use = F.yu; return ", 21), F.v7947, y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3306_BeginStatement(void * a_p3307) {
struct yf3308 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3307 = a_p3307;
yr1138_EmitS(y_str("{", 1));
if ((((*(yR105 *)y_deref(F.p3307))).f_flag == INT64_C(1))) {
F.v7967 = yr1200_Fresh(y_str("sf", 2));
F.v7969 = yr1200_Fresh(y_str("ys", 2));
v1636 = 1;
yr1132_Emit(yr3292_Join(yr1061_T(y_str("int ", 4)), F.v7969, yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1132_Emit(yr3292_Join(yr1061_T(y_str("rt_frame ", 9)), F.v7967, yr1061_T(y_str(";", 1))));
yr1132_Emit(yr3292_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), F.v7967, yr3292_Join(yr1061_T(y_str(")) { RT_POP(", 12)), F.v7967, yr3292_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), F.v7969, yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1532 = rt_range(rt_add(v1532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1530).p)[y_ix1(v1530, v1532)] = F.v7967;
}
yr2225_OpenScope(0);
yr3512_Declarations(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3307))).f_a))).f_a);
yr3203_BlockStatements(((*(yR105 *)y_deref(F.p3307))).f_a);
yr3644_AwaitProcesses();
yr2237_CloseScope();
if ((((*(yR105 *)y_deref(F.p3307))).f_flag == INT64_C(1))) {
v1532 = rt_range(rt_sub(v1532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_Emit(yr3292_Join(yr1061_T(y_str("RT_POP(", 7)), F.v7967, yr3292_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), F.v7969, yr1061_T(y_str(";", 1)))));
}
yr1138_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3312_PlaceLabel(void * a_p3313) {
struct yf3314 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3313 = a_p3313;
F.v7996 = yr2254_FindHere(((*(yR105 *)y_deref(F.p3313))).f_text);
if ((((F.v7996 == ((void *)0))) || ((!(((*(yR125 *)y_deref(F.v7996))).f_kind == v888))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3313))).f_line, ((*(yR105 *)y_deref(F.p3313))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR125 *)y_deref(F.v7996))).f_hasmv) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3313))).f_line, ((*(yR105 *)y_deref(F.p3313))).f_text, y_str(" labels two statements", 22));
}
((*(yR125 *)y_deref(F.v7996))).f_hasmv = 1;
yr3176_Emit3(y_str("", 0), ((*(yR125 *)y_deref(F.v7996))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1547).p)[y_ix1(v1547, v1560)] == INT64_C(0)))) {
yr3176_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1547).p)[y_ix1(v1547, v1560)], y_str(";", 1));
} else if ((!(((rt_int *)(v1558).p)[y_ix1(v1558, v1560)] == INT64_C(0)))) {
yr3176_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1558).p)[y_ix1(v1558, v1560)], y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3318_GotoStatement(void * a_p3319) {
struct yf3320 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3319 = a_p3319;
F.v8011 = yr2260_Lookup(((*(yR105 *)y_deref(F.p3319))).f_name, ((*(yR105 *)y_deref(F.p3319))).f_line);
if ((!(((*(yR125 *)y_deref(F.v8011))).f_kind == v888))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3319))).f_line, ((*(yR105 *)y_deref(F.p3319))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR125 *)y_deref(F.v8011))).f_level == v1279))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3319))).f_line, ((*(yR105 *)y_deref(F.p3319))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR125 *)y_deref(F.v8011))).f_readonly = 1;
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3176_Emit3(y_str("goto ", 5), ((*(yR125 *)y_deref(F.v8011))).f_cname, y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3324_CheckLabels(void * a_p3325) {
struct yf3326 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3325 = a_p3325;
F.v8021 = F.p3325;
while ((!(F.v8021 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8021))).f_kind == v645)) {
F.v8023 = ((*(yR105 *)y_deref(F.v8021))).f_a;
while ((!(F.v8023 == ((void *)0)))) {
Y_TICK();
F.v8025 = yr2254_FindHere(((*(yR105 *)y_deref(F.v8023))).f_name);
if ((((((!(F.v8025 == ((void *)0)))) && ((((*(yR125 *)y_deref(F.v8025))).f_kind == v888))) && ((*(yR125 *)y_deref(F.v8025))).f_readonly) && (!((*(yR125 *)y_deref(F.v8025))).f_hasmv))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8023))).f_line, ((*(yR105 *)y_deref(F.v8023))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v8023 = ((*(yR105 *)y_deref(F.v8023))).f_next;
}
}
F.v8021 = ((*(yR105 *)y_deref(F.v8021))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3330_DesigBase(void * a_p3331, void * * a_p3332, rt_int * a_p3333, rt_int * a_p3334) {
struct yf3335 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3331 = a_p3331;
F.p3332_o = a_p3332;
F.p3333_o = a_p3333;
F.p3334_o = a_p3334;
F.v8033 = F.p3331;
F.p3332 = ((void *)0);
F.p3333 = 0;
F.p3334 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((((*(yR105 *)y_deref(F.v8033))).f_kind == v801)) || ((((*(yR105 *)y_deref(F.v8033))).f_kind == v783))) || ((((*(yR105 *)y_deref(F.v8033))).f_kind == v786)))) {
F.v8033 = ((*(yR105 *)y_deref(F.v8033))).f_a;
} else if ((((*(yR105 *)y_deref(F.v8033))).f_kind == v789)) {
if ((!F.p3333)) {
F.p3333 = 1;
if ((!(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v8033))).f_a))).f_rep == ((void *)0)))) {
F.p3334 = ((*(yR110 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v8033))).f_a))).f_rep))).f_tid;
}
}
F.v8033 = ((*(yR105 *)y_deref(F.v8033))).f_a;
} else {
goto yl_8038;
}
}
yl_8038: ;
if ((((((*(yR105 *)y_deref(F.v8033))).f_kind == v777)) && ((((*(yR105 *)y_deref(F.v8033))).f_d == ((void *)0))))) {
F.v8035 = yr2248_Find(((*(yR105 *)y_deref(F.v8033))).f_name);
if ((!(F.v8035 == ((void *)0)))) {
if (yr2301_Resolved(F.v8035)) {
F.v8035 = yr2353_Real(F.v8035);
if ((((*(yR125 *)y_deref(F.v8035))).f_kind == v861)) {
F.p3332 = F.v8035;
}
}
}
}
(*F.p3332_o) = F.p3332;
(*F.p3333_o) = F.p3333;
(*F.p3334_o) = F.p3334;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3339_Note(void * a_p3340, rt_int a_p3341, rt_int a_p3342) {
struct yf3343 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3340 = a_p3340;
F.p3341 = a_p3341;
F.p3342 = a_p3342;
F.v8045 = yr1904_NewNode(v669, F.p3342);
((*(yR105 *)y_deref(F.v8045))).f_sym = F.p3340;
((*(yR105 *)y_deref(F.v8045))).f_name = F.p3341;
{ void * rv8046 = F.v8045;
y_use = F.yu; return rv8046; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3347_NoteWrite(void * a_p3348) {
struct yf3349 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3348 = a_p3348;
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
yr3330_DesigBase(F.p3348, &F.v8050, &F.v8052, &F.v8054);
if (F.v8052) {
F.v8050 = ((void *)0);
} else if ((((F.v8050 == ((void *)0))) || ((((*(yR125 *)y_deref(F.v8050))).f_level >= ((*(yR125 *)y_deref(v1607))).f_level)))) {
y_use = F.yu; return;
}
F.v8056 = ((*(yR125 *)y_deref(v1607))).f_writes;
while ((!(F.v8056 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8056))).f_sym == F.v8050)) {
y_use = F.yu; return;
}
F.v8056 = ((*(yR105 *)y_deref(F.v8056))).f_next;
}
F.v8058 = yr3339_Note(F.v8050, INT64_C(0), ((*(yR105 *)y_deref(F.p3348))).f_line);
((*(yR105 *)y_deref(F.v8058))).f_next = ((*(yR125 *)y_deref(v1607))).f_writes;
((*(yR125 *)y_deref(v1607))).f_writes = F.v8058;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3353_NoteFree(void * a_p3354) {
struct yf3355 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3354 = a_p3354;
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(((*(yR125 *)y_deref(F.p3354))).f_kind == v861))) || ((((*(yR125 *)y_deref(F.p3354))).f_level >= ((*(yR125 *)y_deref(v1607))).f_level)))) {
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(F.p3354))).f_seen == ((*(yR125 *)y_deref(v1607))).f_serial)) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3354))).f_seen = ((*(yR125 *)y_deref(v1607))).f_serial;
F.v8063 = yr3339_Note(F.p3354, INT64_C(0), v1000);
((*(yR105 *)y_deref(F.v8063))).f_next = ((*(yR125 *)y_deref(v1607))).f_frees;
((*(yR125 *)y_deref(v1607))).f_frees = F.v8063;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3359_NoteFreeDeref(void * a_p3360, rt_int a_p3361) {
struct yf3362 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3360 = a_p3360;
F.p3361 = a_p3361;
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
yr3330_DesigBase(F.p3360, &F.v8069, &F.v8071, &F.v8073);
if ((((F.v8069 == ((void *)0))) || ((((*(yR125 *)y_deref(F.v8069))).f_level >= ((*(yR125 *)y_deref(v1607))).f_level)))) {
y_use = F.yu; return;
}
F.v8075 = ((*(yR125 *)y_deref(v1607))).f_frees;
while ((!(F.v8075 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v8075))).f_sym == ((void *)0))) && ((((*(yR105 *)y_deref(F.v8075))).f_name == F.p3361)))) {
y_use = F.yu; return;
}
F.v8075 = ((*(yR105 *)y_deref(F.v8075))).f_next;
}
F.v8075 = yr3339_Note(((void *)0), F.p3361, ((*(yR105 *)y_deref(F.p3360))).f_line);
((*(yR105 *)y_deref(F.v8075))).f_next = ((*(yR125 *)y_deref(v1607))).f_frees;
((*(yR125 *)y_deref(v1607))).f_frees = F.v8075;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3366_DSteps(void * a_p3367, yarr * a_p3368) {
struct yf3369 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3367 = a_p3367;
F.p3368 = a_p3368;
F.v8080 = F.p3367;
F.v8082 = INT64_C(0);
while (((((((*(yR105 *)y_deref(F.v8080))).f_kind == v801)) || ((((*(yR105 *)y_deref(F.v8080))).f_kind == v783))) || ((((*(yR105 *)y_deref(F.v8080))).f_kind == v786)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v8080))).f_kind == v801))) {
if ((F.v8082 < INT64_C(64))) {
F.v8082 = rt_range(rt_add(F.v8082, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3368)).p)[y_ix1((*F.p3368), F.v8082)] = F.v8080;
}
}
F.v8080 = ((*(yR105 *)y_deref(F.v8080))).f_a;
}
F.lo8094 = INT64_C(1);
F.hi8095 = rt_div(F.v8082, INT64_C(2));
{ rt_int hi8099 = F.hi8095;
for (rt_int i8098 = F.lo8094; i8098 <= hi8099; i8098++) { F.c_8097 = i8098; Y_TICK();
F.v8085 = ((void * *)((*F.p3368)).p)[y_ix1((*F.p3368), F.c_8097)];
((void * *)((*F.p3368)).p)[y_ix1((*F.p3368), F.c_8097)] = ((void * *)((*F.p3368)).p)[y_ix1((*F.p3368), rt_sub((rt_add(F.v8082, INT64_C(1))), F.c_8097))];
((void * *)((*F.p3368)).p)[y_ix1((*F.p3368), rt_sub((rt_add(F.v8082, INT64_C(1))), F.c_8097))] = F.v8085;
if (i8098 == hi8099) break;
}}
{ rt_int rv8106 = F.v8082;
y_use = F.yu; return rv8106; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3373_Overlaps(void * a_p3374, void * a_p3375) {
struct yf3376 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3374 = a_p3374;
F.p3375 = a_p3375;
y_init(&yd_201, &F.v8131);
y_init(&yd_201, &F.v8133);
yr3330_DesigBase(F.p3374, &F.v8111, &F.v8115, &F.v8127);
yr3330_DesigBase(F.p3375, &F.v8113, &F.v8117, &F.v8129);
if ((!(F.v8115 == F.v8117))) {
if (((F.v8115 && ((((*(yR105 *)y_deref(F.p3374))).f_kind == v789))) && ((!(((*(yR105 *)y_deref(F.p3375))).f_rep == ((void *)0)))))) {
if ((((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3375))).f_rep))).f_kind == v828)) && ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3375))).f_rep))).f_tid == F.v8127)))) {
{ rt_int rv8151 = 1;
y_use = F.yu; return rv8151; }
}
}
if (((F.v8117 && ((((*(yR105 *)y_deref(F.p3375))).f_kind == v789))) && ((!(((*(yR105 *)y_deref(F.p3374))).f_rep == ((void *)0)))))) {
if ((((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3374))).f_rep))).f_kind == v828)) && ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3374))).f_rep))).f_tid == F.v8129)))) {
{ rt_int rv8153 = 1;
y_use = F.yu; return rv8153; }
}
}
{ rt_int rv8155 = 0;
y_use = F.yu; return rv8155; }
}
if (F.v8115) {
if ((!(F.v8127 == F.v8129))) {
{ rt_int rv8157 = 0;
y_use = F.yu; return rv8157; }
}
} else if ((((F.v8111 == ((void *)0))) || ((!(F.v8111 == F.v8113))))) {
{ rt_int rv8159 = 0;
y_use = F.yu; return rv8159; }
}
F.v8135 = yr3366_DSteps(F.p3374, &F.v8131);
F.v8137 = yr3366_DSteps(F.p3375, &F.v8133);
F.lo8163 = INT64_C(1);
F.hi8164 = F.v8135;
{ rt_int hi8168 = F.hi8164;
for (rt_int i8167 = F.lo8163; i8167 <= hi8168; i8167++) { F.c_8166 = i8167; Y_TICK();
if ((F.c_8166 <= F.v8137)) {
F.v8143 = ((void * *)(F.v8131).p)[y_ix1(F.v8131, F.c_8166)];
F.v8145 = ((void * *)(F.v8133).p)[y_ix1(F.v8133, F.c_8166)];
if ((!(((*(yR105 *)y_deref(F.v8143))).f_kind == ((*(yR105 *)y_deref(F.v8145))).f_kind))) {
{ rt_int rv8170 = 1;
y_use = F.yu; return rv8170; }
}
if ((((*(yR105 *)y_deref(F.v8143))).f_kind == v783)) {
if ((!(((*(yR105 *)y_deref(F.v8143))).f_name == ((*(yR105 *)y_deref(F.v8145))).f_name))) {
{ rt_int rv8172 = 0;
y_use = F.yu; return rv8172; }
}
} else {
F.v8123 = 1;
F.v8125 = 0;
F.v8147 = ((*(yR105 *)y_deref(F.v8143))).f_b;
F.v8149 = ((*(yR105 *)y_deref(F.v8145))).f_b;
while ((((!(F.v8147 == ((void *)0)))) && ((!(F.v8149 == ((void *)0)))))) {
Y_TICK();
yr2790_Manifest(F.v8147, &F.v8119, &F.v8139);
yr2790_Manifest(F.v8149, &F.v8121, &F.v8141);
if ((F.v8119 && F.v8121)) {
if ((!(F.v8139 == F.v8141))) {
F.v8125 = 1;
}
} else {
F.v8123 = 0;
}
F.v8147 = ((*(yR105 *)y_deref(F.v8147))).f_next;
F.v8149 = ((*(yR105 *)y_deref(F.v8149))).f_next;
}
if ((!F.v8123)) {
{ rt_int rv8178 = 1;
y_use = F.yu; return rv8178; }
}
if (F.v8125) {
{ rt_int rv8180 = 0;
y_use = F.yu; return rv8180; }
}
}
}
if (i8167 == hi8168) break;
}}
{ rt_int rv8182 = 1;
y_use = F.yu; return rv8182; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3380_CheckActuals(void * a_p3381, rt_int a_p3382, rt_int a_p3383) {
struct yf3384 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3381 = a_p3381;
F.p3382 = a_p3382;
F.p3383 = a_p3383;
F.v8188 = ((*(yR125 *)y_deref(F.p3381))).f_params;
F.v8192 = rt_range(rt_add(F.p3382, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8196 = ((void *)0);
while ((!(F.v8188 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR120 *)y_deref(F.v8188))).f_cls == v897))) && ((!(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8188))).f_rep))).f_kind == v855))))) {
F.v8190 = ((*(yR120 *)y_deref(F.v8188))).f_next;
F.v8194 = rt_range(rt_add(F.v8192, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v8190 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR120 *)y_deref(F.v8188))).f_cls == v903)) && ((((*(yR120 *)y_deref(F.v8190))).f_cls == v903)))) {
if (yr3373_Overlaps(((void * *)(v1516).p)[y_ix1(v1516, F.v8192)], ((void * *)(v1516).p)[y_ix1(v1516, F.v8194)])) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v8194)]))).f_line, ((*(yR120 *)y_deref(F.v8190))).f_name, y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((((*(yR120 *)y_deref(F.v8188))).f_cls == v900)) && ((((*(yR120 *)y_deref(F.v8190))).f_cls == v900)))) {
if (yr3209_SameDesig(((void * *)(v1516).p)[y_ix1(v1516, F.v8192)], ((void * *)(v1516).p)[y_ix1(v1516, F.v8194)])) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v8194)]))).f_line, ((*(yR120 *)y_deref(F.v8190))).f_name, y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v8190 = ((*(yR120 *)y_deref(F.v8190))).f_next;
F.v8194 = rt_range(rt_add(F.v8194, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((*(yR120 *)y_deref(F.v8188))).f_cls == v903)) {
yr3330_DesigBase(((void * *)(v1516).p)[y_ix1(v1516, F.v8192)], &F.v8200, &F.v8202, &F.v8204);
F.v8198 = yr3339_Note(F.v8200, F.v8204, ((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v8192)]))).f_line);
if (F.v8202) {
((*(yR105 *)y_deref(F.v8198))).f_flag = INT64_C(1);
}
if ((((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v8192)]))).f_kind == v789)) {
((*(yR105 *)y_deref(F.v8198))).f_ival = INT64_C(1);
}
if ((F.v8196 == ((void *)0))) {
F.v8196 = yr3339_Note(F.p3381, INT64_C(0), F.p3383);
((*(yR105 *)y_deref(F.v8196))).f_next = v1644;
v1644 = F.v8196;
}
((*(yR105 *)y_deref(F.v8198))).f_next = ((*(yR105 *)y_deref(F.v8196))).f_a;
((*(yR105 *)y_deref(F.v8196))).f_a = F.v8198;
}
}
F.v8192 = rt_range(rt_add(F.v8192, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8188 = ((*(yR120 *)y_deref(F.v8188))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8337_At(struct yf3389 *up, rt_int a_p8338, rt_int a_p8339) {
struct yf8340 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8338 = a_p8338;
F.p8339 = a_p8339;
{ rt_int rv8362 = rt_range(rt_add((rt_mul(F.p8338, (rt_add(F.up->v8229, INT64_C(1))))), F.p8339), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv8362; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8344_Reaches(struct yf3389 *up, rt_int a_p8345, rt_int a_p8346) {
struct yf8347 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8345 = a_p8345;
F.p8346 = a_p8346;
F.v8367 = ((*(yR125 *)y_deref(((void * *)(F.up->v8313).p)[y_ix1(F.up->v8313, F.p8346)]))).f_calls;
if (((rt_int *)(F.up->v8324).p)[y_ix1(F.up->v8324, F.p8346)]) {
{ rt_int rv8369 = 0;
y_use = F.yu; return rv8369; }
}
((rt_int *)(F.up->v8324).p)[y_ix1(F.up->v8324, F.p8346)] = 1;
while ((!(F.v8367 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8367))).f_sym))).f_vix > INT64_C(0))) {
if ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8367))).f_sym))).f_vix == F.p8345)) {
{ rt_int rv8373 = 1;
y_use = F.yu; return rv8373; }
}
if (yr8344_Reaches(F.up, F.p8345, ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8367))).f_sym))).f_vix)) {
{ rt_int rv8375 = 1;
y_use = F.yu; return rv8375; }
}
}
F.v8367 = ((*(yR105 *)y_deref(F.v8367))).f_next;
}
{ rt_int rv8377 = 0;
y_use = F.yu; return rv8377; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8351_VName(struct yf3389 *up, rt_int a_p8352) {
struct yf8353 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8352 = a_p8352;
if ((((void * *)(F.up->v8291).p)[y_ix1(F.up->v8291, F.p8352)] == ((void *)0))) {
{ rt_int rv8381 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv8381; }
}
{ rt_int rv8382 = ((*(yR125 *)y_deref(((void * *)(F.up->v8291).p)[y_ix1(F.up->v8291, F.p8352)]))).f_name;
y_use = F.yu; return rv8382; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3388_CheckEffects(void) {
struct yf3389 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8226 = INT64_C(0);
F.v8229 = INT64_C(0);
F.v8232 = INT64_C(0);
F.v8232 = INT64_C(1);
F.v8229 = INT64_C(1);
F.v8220 = v1642;
while ((!(F.v8220 == ((void *)0)))) {
Y_TICK();
F.v8226 = rt_range(rt_add(F.v8226, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8220))).f_sym))).f_vix = F.v8226;
F.v8222 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8220))).f_sym))).f_writes;
while ((!(F.v8222 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR105 *)y_deref(F.v8222))).f_sym == ((void *)0)))) && ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix == INT64_C(0))))) {
F.v8229 = rt_range(rt_add(F.v8229, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix = F.v8229;
}
F.v8222 = ((*(yR105 *)y_deref(F.v8222))).f_next;
}
F.v8222 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8220))).f_sym))).f_frees;
while ((!(F.v8222 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v8222))).f_sym == ((void *)0)))) {
if ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix == INT64_C(0))) {
F.v8229 = rt_range(rt_add(F.v8229, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix = F.v8229;
}
} else if ((yr3393_DynIndex(((*(yR105 *)y_deref(F.v8222))).f_name, F.v8229, 0) == INT64_C(0))) {
F.v8229 = rt_range(rt_add(F.v8229, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR105 *)y_deref(F.v8222))).f_ival = yr3393_DynIndex(((*(yR105 *)y_deref(F.v8222))).f_name, F.v8229, 1);
}
F.v8222 = ((*(yR105 *)y_deref(F.v8222))).f_next;
}
F.v8220 = ((*(yR105 *)y_deref(F.v8220))).f_next;
}
if ((F.v8226 == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo8262 = INT64_C(0);
F.hi8263 = rt_mul((rt_add(F.v8226, INT64_C(1))), (rt_add(F.v8229, INT64_C(1))));
{ rt_int lo[1] = {F.lo8262}, hi[1] = {F.hi8263}; y_desc_array(&F.yd_8265, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8265, &F.v8267);
y_init(&F.yd_8265, &F.v8269);
F.lo8275 = INT64_C(0);
F.hi8276 = F.v8229;
{ rt_int lo[1] = {F.lo8275}, hi[1] = {F.hi8276}; y_desc_array(&F.yd_8278, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8278, &F.v8280);
F.lo8286 = INT64_C(0);
F.hi8287 = F.v8229;
{ rt_int lo[1] = {F.lo8286}, hi[1] = {F.hi8287}; y_desc_array(&F.yd_8289, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_8289, &F.v8291);
F.lo8297 = INT64_C(0);
F.hi8298 = F.v8229;
{ rt_int lo[1] = {F.lo8297}, hi[1] = {F.hi8298}; y_desc_array(&F.yd_8300, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8300, &F.v8302);
F.lo8308 = INT64_C(0);
F.hi8309 = F.v8226;
{ rt_int lo[1] = {F.lo8308}, hi[1] = {F.hi8309}; y_desc_array(&F.yd_8311, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_8311, &F.v8313);
F.lo8319 = INT64_C(0);
F.hi8320 = F.v8226;
{ rt_int lo[1] = {F.lo8319}, hi[1] = {F.hi8320}; y_desc_array(&F.yd_8322, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8322, &F.v8324);
F.v8326 = 1;
F.lo8392 = INT64_C(0);
F.hi8393 = rt_mul((rt_add(F.v8226, INT64_C(1))), (rt_add(F.v8229, INT64_C(1))));
{ rt_int hi8397 = F.hi8393;
for (rt_int i8396 = F.lo8392; i8396 <= hi8397; i8396++) { F.c_8395 = i8396; Y_TICK();
((rt_int *)(F.v8267).p)[y_ix1(F.v8267, F.c_8395)] = 0;
((rt_int *)(F.v8269).p)[y_ix1(F.v8269, F.c_8395)] = 0;
if (i8396 == hi8397) break;
}}
F.lo8403 = INT64_C(0);
F.hi8404 = F.v8229;
{ rt_int hi8408 = F.hi8404;
for (rt_int i8407 = F.lo8403; i8407 <= hi8408; i8407++) { F.c_8406 = i8407; Y_TICK();
((rt_int *)(F.v8280).p)[y_ix1(F.v8280, F.c_8406)] = INT64_C(-1);
((void * *)(F.v8291).p)[y_ix1(F.v8291, F.c_8406)] = ((void *)0);
((rt_int *)(F.v8302).p)[y_ix1(F.v8302, F.c_8406)] = INT64_C(0);
if (i8407 == hi8408) break;
}}
F.lo8414 = INT64_C(0);
F.hi8415 = F.v8226;
{ rt_int hi8419 = F.hi8415;
for (rt_int i8418 = F.lo8414; i8418 <= hi8419; i8418++) { F.c_8417 = i8418; Y_TICK();
((rt_int *)(F.v8324).p)[y_ix1(F.v8324, F.c_8417)] = 0;
if (i8418 == hi8419) break;
}}
F.v8220 = v1642;
while ((!(F.v8220 == ((void *)0)))) {
Y_TICK();
F.v8235 = ((*(yR105 *)y_deref(F.v8220))).f_sym;
((void * *)(F.v8313).p)[y_ix1(F.v8313, ((*(yR125 *)y_deref(F.v8235))).f_vix)] = F.v8235;
F.v8222 = ((*(yR125 *)y_deref(F.v8235))).f_writes;
while ((!(F.v8222 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8222))).f_sym == ((void *)0))) {
F.v8331 = INT64_C(1);
} else {
F.v8331 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix;
}
((rt_int *)(F.v8267).p)[y_ix1(F.v8267, yr8337_At(&F, ((*(yR125 *)y_deref(F.v8235))).f_vix, F.v8331))] = 1;
if ((!(((*(yR105 *)y_deref(F.v8222))).f_sym == ((void *)0)))) {
((rt_int *)(F.v8280).p)[y_ix1(F.v8280, F.v8331)] = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_level;
((void * *)(F.v8291).p)[y_ix1(F.v8291, F.v8331)] = ((*(yR105 *)y_deref(F.v8222))).f_sym;
}
F.v8222 = ((*(yR105 *)y_deref(F.v8222))).f_next;
}
F.v8222 = ((*(yR125 *)y_deref(F.v8235))).f_frees;
while ((!(F.v8222 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8222))).f_sym == ((void *)0))) {
F.v8331 = yr3393_DynIndex(((*(yR105 *)y_deref(F.v8222))).f_name, INT64_C(0), 0);
((rt_int *)(F.v8302).p)[y_ix1(F.v8302, F.v8331)] = ((*(yR105 *)y_deref(F.v8222))).f_name;
} else {
F.v8331 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix;
((rt_int *)(F.v8280).p)[y_ix1(F.v8280, F.v8331)] = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_level;
((void * *)(F.v8291).p)[y_ix1(F.v8291, F.v8331)] = ((*(yR105 *)y_deref(F.v8222))).f_sym;
}
((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, ((*(yR125 *)y_deref(F.v8235))).f_vix, F.v8331))] = 1;
F.v8222 = ((*(yR105 *)y_deref(F.v8222))).f_next;
}
F.v8220 = ((*(yR105 *)y_deref(F.v8220))).f_next;
}
while (F.v8326) {
Y_TICK();
F.v8326 = 0;
F.lo8430 = INT64_C(1);
F.hi8431 = F.v8226;
{ rt_int hi8435 = F.hi8431;
for (rt_int i8434 = F.lo8430; i8434 <= hi8435; i8434++) { F.c_8433 = i8434; Y_TICK();
F.v8224 = ((*(yR125 *)y_deref(((void * *)(F.v8313).p)[y_ix1(F.v8313, F.c_8433)]))).f_calls;
while ((!(F.v8224 == ((void *)0)))) {
Y_TICK();
F.v8333 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8224))).f_sym))).f_vix;
if ((F.v8333 > INT64_C(0))) {
F.lo8440 = INT64_C(1);
F.hi8441 = F.v8229;
{ rt_int hi8445 = F.hi8441;
for (rt_int i8444 = F.lo8440; i8444 <= hi8445; i8444++) { F.c_8443 = i8444; Y_TICK();
if ((((rt_int *)(F.v8280).p)[y_ix1(F.v8280, F.c_8443)] < ((*(yR125 *)y_deref(((void * *)(F.v8313).p)[y_ix1(F.v8313, F.c_8433)]))).f_level)) {
if ((((rt_int *)(F.v8267).p)[y_ix1(F.v8267, yr8337_At(&F, F.v8333, rt_range(F.c_8443, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v8267).p)[y_ix1(F.v8267, yr8337_At(&F, rt_range(F.c_8433, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8443, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v8267).p)[y_ix1(F.v8267, yr8337_At(&F, rt_range(F.c_8433, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8443, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8326 = 1;
}
if ((((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, F.v8333, rt_range(F.c_8443, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, rt_range(F.c_8433, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8443, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, rt_range(F.c_8433, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8443, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8326 = 1;
}
}
if (i8444 == hi8445) break;
}}
}
F.v8224 = ((*(yR105 *)y_deref(F.v8224))).f_next;
}
if (i8434 == hi8435) break;
}}
}
F.lo8453 = INT64_C(1);
F.hi8454 = F.v8226;
{ rt_int hi8458 = F.hi8454;
for (rt_int i8457 = F.lo8453; i8457 <= hi8458; i8457++) { F.c_8456 = i8457; Y_TICK();
F.v8235 = ((void * *)(F.v8313).p)[y_ix1(F.v8313, F.c_8456)];
if (((*(yR125 *)y_deref(F.v8235))).f_func) {
F.v8224 = ((*(yR125 *)y_deref(F.v8235))).f_calls;
while ((!(F.v8224 == ((void *)0)))) {
Y_TICK();
F.v8333 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8224))).f_sym))).f_vix;
if ((F.v8333 > INT64_C(0))) {
F.lo8463 = INT64_C(1);
F.hi8464 = F.v8229;
{ rt_int hi8468 = F.hi8464;
for (rt_int i8467 = F.lo8463; i8467 <= hi8468; i8467++) { F.c_8466 = i8467; Y_TICK();
if ((((rt_int *)(F.v8267).p)[y_ix1(F.v8267, yr8337_At(&F, F.v8333, rt_range(F.c_8466, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((((rt_int *)(F.v8280).p)[y_ix1(F.v8280, F.c_8466)] < ((*(yR125 *)y_deref(F.v8235))).f_level)))) {
yr1157_Fail(((*(yR105 *)y_deref(F.v8224))).f_line, yr3292_Join(((*(yR125 *)y_deref(F.v8235))).f_name, yr3292_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8224))).f_sym))).f_name, INT64_C(0)), yr3292_Join(yr1061_T(y_str(", which assigns to ", 19)), yr8351_VName(&F, rt_range(F.c_8466, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
}
if (i8467 == hi8468) break;
}}
}
F.v8224 = ((*(yR105 *)y_deref(F.v8224))).f_next;
}
}
if ((!(((*(yR125 *)y_deref(F.v8235))).f_decl == ((void *)0)))) {
if ((!(((*(yR105 *)y_deref(((*(yR125 *)y_deref(F.v8235))).f_decl))).f_e == ((void *)0)))) {
F.lo8476 = INT64_C(0);
F.hi8477 = F.v8226;
{ rt_int hi8481 = F.hi8477;
for (rt_int i8480 = F.lo8476; i8480 <= hi8481; i8480++) { F.c_8479 = i8480; Y_TICK();
((rt_int *)(F.v8324).p)[y_ix1(F.v8324, F.c_8479)] = 0;
if (i8480 == hi8481) break;
}}
if (yr8344_Reaches(&F, rt_range(F.c_8456, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8456, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(((*(yR105 *)y_deref(((*(yR125 *)y_deref(F.v8235))).f_decl))).f_line, ((*(yR125 *)y_deref(F.v8235))).f_name, y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i8457 == hi8458) break;
}}
F.v8220 = v1644;
while ((!(F.v8220 == ((void *)0)))) {
Y_TICK();
F.v8335 = ((*(yR105 *)y_deref(F.v8220))).f_sym;
F.v8333 = ((*(yR125 *)y_deref(F.v8335))).f_vix;
if ((F.v8333 > INT64_C(0))) {
F.v8222 = ((*(yR105 *)y_deref(F.v8220))).f_a;
while ((!(F.v8222 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v8222))).f_flag == INT64_C(0))) && ((!(((*(yR105 *)y_deref(F.v8222))).f_sym == ((void *)0)))))) {
F.v8331 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_vix;
if ((F.v8331 > INT64_C(0))) {
if (((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, F.v8333, F.v8331))]) {
yr1157_Fail(((*(yR105 *)y_deref(F.v8222))).f_line, yr3292_Join(((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8222))).f_sym))).f_name, yr3292_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), ((*(yR125 *)y_deref(F.v8335))).f_name, INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v8329 = INT64_C(0);
if ((((*(yR105 *)y_deref(F.v8222))).f_flag == INT64_C(1))) {
F.v8329 = yr3393_DynIndex(((*(yR105 *)y_deref(F.v8222))).f_name, INT64_C(0), 0);
}
if ((F.v8329 > INT64_C(0))) {
if (((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, F.v8333, F.v8329))]) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8222))).f_line, ((*(yR125 *)y_deref(F.v8335))).f_name, y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((((*(yR105 *)y_deref(F.v8222))).f_flag == INT64_C(1))) && ((((*(yR105 *)y_deref(F.v8222))).f_ival == INT64_C(1))))) {
F.lo8501 = INT64_C(1);
F.hi8502 = F.v8229;
{ rt_int hi8506 = F.hi8502;
for (rt_int i8505 = F.lo8501; i8505 <= hi8506; i8505++) { F.c_8504 = i8505; Y_TICK();
if ((((rt_int *)(F.v8269).p)[y_ix1(F.v8269, yr8337_At(&F, F.v8333, rt_range(F.c_8504, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((!(((void * *)(F.v8291).p)[y_ix1(F.v8291, F.c_8504)] == ((void *)0)))))) {
if ((((((*(yR110 *)y_deref(((*(yR125 *)y_deref(((void * *)(F.v8291).p)[y_ix1(F.v8291, F.c_8504)]))).f_rep))).f_kind == v828)) && ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(((void * *)(F.v8291).p)[y_ix1(F.v8291, F.c_8504)]))).f_rep))).f_tid == ((*(yR105 *)y_deref(F.v8222))).f_name)))) {
yr1157_Fail(((*(yR105 *)y_deref(F.v8222))).f_line, yr3292_Join(((*(yR125 *)y_deref(F.v8335))).f_name, yr3292_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), ((*(yR125 *)y_deref(((void * *)(F.v8291).p)[y_ix1(F.v8291, F.c_8504)]))).f_name, INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i8505 == hi8506) break;
}}
}
F.v8222 = ((*(yR105 *)y_deref(F.v8222))).f_next;
}
}
F.v8220 = ((*(yR105 *)y_deref(F.v8220))).f_next;
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3393_DynIndex(rt_int a_p3394, rt_int a_p3395, rt_int a_p3396) {
struct yf3397 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3394 = a_p3394;
F.p3395 = a_p3395;
F.p3396 = a_p3396;
F.lo8517 = INT64_C(1);
F.hi8518 = v1668;
{ rt_int hi8522 = F.hi8518;
for (rt_int i8521 = F.lo8517; i8521 <= hi8522; i8521++) { F.c_8520 = i8521; Y_TICK();
if ((((rt_int *)(v1655).p)[y_ix1(v1655, F.c_8520)] == F.p3394)) {
{ rt_int rv8523 = ((rt_int *)(v1666).p)[y_ix1(v1666, F.c_8520)];
y_use = F.yu; return rv8523; }
}
if (i8521 == hi8522) break;
}}
if ((!F.p3396)) {
{ rt_int rv8525 = INT64_C(0);
y_use = F.yu; return rv8525; }
}
if ((v1668 >= INT64_C(4096))) {
yr1178_FailS(v1000, y_str("too many pointer types for this implementation", 46));
}
v1668 = rt_range(rt_add(v1668, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1655).p)[y_ix1(v1655, v1668)] = F.p3394;
((rt_int *)(v1666).p)[y_ix1(v1666, v1668)] = F.p3395;
{ rt_int rv8530 = F.p3395;
y_use = F.yu; return rv8530; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3401_RoutineCName(rt_int a_p3402) {
struct yf3403 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3402 = a_p3402;
F.v8534 = yr1195_NewSerial();
F.v8536 = 1;
F.lo8541 = INT64_C(1);
F.hi8542 = ((rt_int *)(v920).p)[y_ix1(v920, F.p3402)];
{ rt_int hi8546 = F.hi8542;
for (rt_int i8545 = F.lo8541; i8545 <= hi8546; i8545++) { F.c_8544 = i8545; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3402, rt_range(F.c_8544, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3402, rt_range(F.c_8544, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v8536 = 0;
}
if (i8545 == hi8546) break;
}}
yr1026_SB();
yr1037_SA(y_str("yr", 2));
yr1050_SI(F.v8534);
if (F.v8536) {
yr1037_SA(y_str("_", 1));
yr1044_ST(F.p3402);
}
{ rt_int rv8550 = yr1056_SE();
y_use = F.yu; return rv8550; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3407_FormalRep(void * a_p3408) {
struct yf3409 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3408 = a_p3408;
if ((((*(yR105 *)y_deref(F.p3408))).f_kind == v696)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p3408))).f_a, &F.v8556, &F.v8558);
if ((((!F.v8556) || ((F.v8558 < INT64_C(1)))) || ((F.v8558 > INT64_C(8))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3408))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
}
F.v8554 = yr2359_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
((*(yR110 *)y_deref(F.v8554))).f_nidx = F.v8558;
((*(yR110 *)y_deref(F.v8554))).f_elem = yr2603_MakeRep(((*(yR105 *)y_deref(F.p3408))).f_b, INT64_C(0), 0);
yr2462_CheckRepresented(((*(yR110 *)y_deref(F.v8554))).f_elem, ((*(yR105 *)y_deref(F.p3408))).f_line);
((*(yR110 *)y_deref(F.v8554))).f_deep = 1;
{ void * rv8566 = F.v8554;
y_use = F.yu; return rv8566; }
}
if ((((*(yR105 *)y_deref(F.p3408))).f_kind == v699)) {
{ void * rv8568 = yr2359_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv8568; }
}
F.v8554 = yr2603_MakeRep(F.p3408, INT64_C(0), 0);
yr2462_CheckRepresented(F.v8554, ((*(yR105 *)y_deref(F.p3408))).f_line);
{ void * rv8571 = F.v8554;
y_use = F.yu; return rv8571; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3413_ParamCType(void * a_p3414) {
struct yf3415 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3414 = a_p3414;
F.v8575 = yr2421_CType(((*(yR120 *)y_deref(F.p3414))).f_rep);
if ((((((*(yR120 *)y_deref(F.p3414))).f_cls == v897)) || ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.p3414))).f_rep))).f_kind == v855)))) {
{ rt_int rv8576 = F.v8575;
y_use = F.yu; return rv8576; }
}
yr1026_SB();
yr1044_ST(F.v8575);
yr1037_SA(y_str(" *", 2));
{ rt_int rv8578 = yr1056_SE();
y_use = F.yu; return rv8578; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3419_DeclType(void * a_p3420) {
struct yf3421 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3420 = a_p3420;
if ((((*(yR120 *)y_deref(F.p3420))).f_cls == v900)) {
{ rt_int rv8581 = yr2421_CType(((*(yR120 *)y_deref(F.p3420))).f_rep);
y_use = F.yu; return rv8581; }
}
{ rt_int rv8582 = yr3413_ParamCType(F.p3420);
y_use = F.yu; return rv8582; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3425_RoutineHeader(void * a_p3426, rt_int a_p3427) {
struct yf3428 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3426 = a_p3426;
F.p3427 = a_p3427;
F.v8603 = 1;
F.v8587 = yr2218_NewSym(F.p3427, ((*(yR105 *)y_deref(F.p3426))).f_name);
((*(yR125 *)y_deref(F.v8587))).f_decl = F.p3426;
((*(yR125 *)y_deref(F.v8587))).f_func = (((*(yR105 *)y_deref(F.p3426))).f_flag == INT64_C(1));
((*(yR125 *)y_deref(F.v8587))).f_level = rt_range(rt_add(v1279, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(F.v8587))).f_cname = yr3401_RoutineCName(((*(yR105 *)y_deref(F.p3426))).f_name);
if ((!(((*(yR105 *)y_deref(F.p3426))).f_b == ((void *)0)))) {
((*(yR125 *)y_deref(F.v8587))).f_ret = yr2603_MakeRep(((*(yR105 *)y_deref(F.p3426))).f_b, INT64_C(0), 0);
yr2462_CheckRepresented(((*(yR125 *)y_deref(F.v8587))).f_ret, ((*(yR105 *)y_deref(F.p3426))).f_line);
} else {
((*(yR125 *)y_deref(F.v8587))).f_ret = v1348;
if (((*(yR125 *)y_deref(F.v8587))).f_func) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3426))).f_line, ((*(yR105 *)y_deref(F.p3426))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v8597 = ((void *)0);
F.v8591 = ((*(yR105 *)y_deref(F.p3426))).f_a;
while ((!(F.v8591 == ((void *)0)))) {
Y_TICK();
F.v8599 = yr3407_FormalRep(((*(yR105 *)y_deref(F.v8591))).f_b);
if ((((*(yR125 *)y_deref(F.v8587))).f_func && ((!(((*(yR105 *)y_deref(F.v8591))).f_ival == v897))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8591))).f_line, ((*(yR105 *)y_deref(F.p3426))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3427 == v885)) && ((((*(yR105 *)y_deref(F.v8591))).f_ival == v900)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8591))).f_line, ((*(yR105 *)y_deref(F.p3426))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v8593 = ((*(yR105 *)y_deref(F.v8591))).f_a;
while ((!(F.v8593 == ((void *)0)))) {
Y_TICK();
({ F.v8595 = y_new(sizeof(yR120)); });
(*(yR120 *)y_deref(F.v8595)) = ((yR120){ .f_name = ((*(yR105 *)y_deref(F.v8593))).f_name, .f_cls = ((*(yR105 *)y_deref(F.v8591))).f_ival, .f_rep = F.v8599, .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
if ((!(((*(yR105 *)y_deref(F.v8593))).f_a == ((void *)0)))) {
((*(yR120 *)y_deref(F.v8595))).f_at = yr2725_AtAddress(((*(yR105 *)y_deref(F.v8593))).f_a);
}
if ((F.v8597 == ((void *)0))) {
((*(yR125 *)y_deref(F.v8587))).f_params = F.v8595;
} else {
((*(yR120 *)y_deref(F.v8597))).f_next = F.v8595;
}
F.v8597 = F.v8595;
((*(yR125 *)y_deref(F.v8587))).f_nparams = rt_range(rt_add(((*(yR125 *)y_deref(F.v8587))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8593 = ((*(yR105 *)y_deref(F.v8593))).f_next;
}
F.v8591 = ((*(yR105 *)y_deref(F.v8591))).f_next;
}
F.v8589 = yr2248_Find(((*(yR105 *)y_deref(F.p3426))).f_name);
if ((!(F.v8589 == ((void *)0)))) {
F.v8589 = yr2353_Real(F.v8589);
}
if ((((((*(yR105 *)y_deref(F.p3426))).f_ival == INT64_C(0))) && ((!(F.v8589 == ((void *)0)))))) {
if ((((*(yR125 *)y_deref(F.v8589))).f_kind == v891)) {
yr1164_Warn(((*(yR105 *)y_deref(F.p3426))).f_line, yr3292_Join(((*(yR105 *)y_deref(F.p3426))).f_name, yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(((*(yR105 *)y_deref(F.p3426))).f_ival == INT64_C(0)))) && ((!(F.v8589 == ((void *)0))))) && ((((*(yR125 *)y_deref(F.v8589))).f_kind == v876)))) {
((*(yR125 *)y_deref(F.v8587))).f_alt = F.v8589;
if ((!(((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v8589))).f_ret))).f_kind == v852)) == ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v8587))).f_ret))).f_kind == v852))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3426))).f_line, ((*(yR105 *)y_deref(F.p3426))).f_name, y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((((*(yR105 *)y_deref(F.p3426))).f_ival == v339)) && ((!(yr3432_SameSignature(F.v8587, F.v8589) == ((void *)0)))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3426))).f_line, ((*(yR105 *)y_deref(F.p3426))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR105 *)y_deref(F.p3426))).f_ival == v435)) && ((yr3432_SameSignature(F.v8587, F.v8589) == ((void *)0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3426))).f_line, ((*(yR105 *)y_deref(F.p3426))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR105 *)y_deref(F.p3426))).f_sym = F.v8587;
yr2320_Define(F.v8587, ((*(yR105 *)y_deref(F.p3426))).f_line);
F.v8591 = yr1904_NewNode(v669, ((*(yR105 *)y_deref(F.p3426))).f_line);
((*(yR105 *)y_deref(F.v8591))).f_sym = F.v8587;
((*(yR105 *)y_deref(F.v8591))).f_next = v1642;
v1642 = F.v8591;
((rt_int *)(v1291).p)[y_ix1(v1291, ((*(yR125 *)y_deref(F.v8587))).f_level)] = yr1200_Fresh(y_str("yf", 2));
((*(yR125 *)y_deref(F.v8587))).f_members = yr2218_NewSym(v891, ((rt_int *)(v1291).p)[y_ix1(v1291, ((*(yR125 *)y_deref(F.v8587))).f_level)]);
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(((rt_int *)(v1291).p)[y_ix1(v1291, ((*(yR125 *)y_deref(F.v8587))).f_level)]);
yr1037_SA(y_str(";", 1));
F.v8601 = yr1056_SE();
yr1110_Put(&v978, F.v8601);
yr1026_SB();
yr1037_SA(y_str("static ", 7));
if ((F.p3427 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2421_CType(((*(yR125 *)y_deref(F.v8587))).f_ret));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(((*(yR125 *)y_deref(F.v8587))).f_cname);
yr1037_SA(y_str("(", 1));
F.v8601 = yr1056_SE();
if ((F.p3427 == v885)) {
F.v8601 = yr3292_Join(F.v8601, yr1061_T(y_str("void *arg", 9)), INT64_C(0));
F.v8603 = 0;
} else if ((v1279 > INT64_C(0))) {
yr1026_SB();
yr1044_ST(F.v8601);
yr1037_SA(y_str("struct ", 7));
yr1044_ST(((rt_int *)(v1291).p)[y_ix1(v1291, v1279)]);
yr1037_SA(y_str(" *up", 4));
F.v8601 = yr1056_SE();
F.v8603 = 0;
}
F.v8595 = ((*(yR125 *)y_deref(F.v8587))).f_params;
while ((((!(F.v8595 == ((void *)0)))) && ((!(F.p3427 == v885))))) {
Y_TICK();
yr1026_SB();
yr1044_ST(F.v8601);
if ((!F.v8603)) {
yr1037_SA(y_str(", ", 2));
}
F.v8603 = 0;
yr1044_ST(yr3413_ParamCType(F.v8595));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(((*(yR120 *)y_deref(F.v8595))).f_cname);
F.v8601 = yr1056_SE();
F.v8595 = ((*(yR120 *)y_deref(F.v8595))).f_next;
}
if (F.v8603) {
F.v8601 = yr3292_Join(F.v8601, yr1061_T(y_str("void", 4)), INT64_C(0));
}
F.v8601 = yr3292_Join(F.v8601, yr1061_T(y_str(")", 1)), INT64_C(0));
((*(yR125 *)y_deref(F.v8587))).f_mnext = yr2218_NewSym(v891, F.v8601);
yr1110_Put(&v986, yr3292_Join(F.v8601, yr1061_T(y_str(";", 1)), INT64_C(0)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3432_SameSignature(void * a_p3433, void * a_p3434) {
struct yf3435 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3433 = a_p3433;
F.p3434 = a_p3434;
F.v8652 = F.p3434;
while ((!(F.v8652 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v8652))).f_nparams == ((*(yR125 *)y_deref(F.p3433))).f_nparams)) {
F.v8658 = 1;
F.v8654 = ((*(yR125 *)y_deref(F.p3433))).f_params;
F.v8656 = ((*(yR125 *)y_deref(F.v8652))).f_params;
while ((!(F.v8654 == ((void *)0)))) {
Y_TICK();
if ((!yr2439_SameType(((*(yR120 *)y_deref(F.v8654))).f_rep, ((*(yR120 *)y_deref(F.v8656))).f_rep))) {
F.v8658 = 0;
}
F.v8654 = ((*(yR120 *)y_deref(F.v8654))).f_next;
F.v8656 = ((*(yR120 *)y_deref(F.v8656))).f_next;
}
if (F.v8658) {
{ void * rv8661 = F.v8652;
y_use = F.yu; return rv8661; }
}
}
F.v8652 = ((*(yR125 *)y_deref(F.v8652))).f_alt;
}
{ void * rv8662 = ((void *)0);
y_use = F.yu; return rv8662; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3439_RoutineBody(void * a_p3440) {
struct yf3441 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3440 = a_p3440;
F.v8666 = ((*(yR105 *)y_deref(F.p3440))).f_sym;
F.v8668 = v996;
F.v8670 = v998;
F.v8672 = v1279;
F.v8674 = v1532;
F.v8676 = v1535;
F.v8678 = v1560;
F.v8680 = v1574;
F.v8682 = v1601;
F.v8684 = v1604;
F.v8686 = v1607;
F.v8688 = v1636;
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v8698 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1279 = ((*(yR125 *)y_deref(F.v8666))).f_level;
F.v8694 = ((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v8666))).f_members))).f_name;
((rt_int *)(v1291).p)[y_ix1(v1291, v1279)] = F.v8694;
v1535 = v1532;
v1604 = v1601;
v1574 = INT64_C(0);
v1607 = F.v8666;
v1636 = 0;
yr2225_OpenScope(0);
v1328 = rt_range(rt_add(v1328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1324).p)[y_ix1(v1324, v1328)] = ((*(yR125 *)y_deref(F.v8666))).f_depth;
((rt_int *)(v1326).p)[y_ix1(v1326, v1328)] = ((*(yR125 *)y_deref(F.v8666))).f_serial;
F.v8690 = ((*(yR125 *)y_deref(F.v8666))).f_params;
while ((!(F.v8690 == ((void *)0)))) {
Y_TICK();
if ((((*(yR120 *)y_deref(F.v8690))).f_cls == v897)) {
F.v8692 = yr2218_NewSym(v864, ((*(yR120 *)y_deref(F.v8690))).f_name);
} else {
F.v8692 = yr2218_NewSym(v861, ((*(yR120 *)y_deref(F.v8690))).f_name);
}
((*(yR125 *)y_deref(F.v8692))).f_rep = ((*(yR120 *)y_deref(F.v8690))).f_rep;
((*(yR125 *)y_deref(F.v8692))).f_level = v1279;
((*(yR125 *)y_deref(F.v8692))).f_cname = ((*(yR120 *)y_deref(F.v8690))).f_cname;
if ((((*(yR125 *)y_deref(F.v8666))).f_kind == v885)) {
((*(yR125 *)y_deref(F.v8692))).f_byref = (((((*(yR120 *)y_deref(F.v8690))).f_cls == v903)) && ((!(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8690))).f_rep))).f_kind == v855))));
yr2340_DeclStorage(yr3413_ParamCType(F.v8690), ((*(yR120 *)y_deref(F.v8690))).f_cname);
} else if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8690))).f_rep))).f_kind == v855)) {
yr2340_DeclStorage(yr1061_T(y_str("yspace", 6)), ((*(yR120 *)y_deref(F.v8690))).f_cname);
yr1132_Emit(yr3292_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr3292_Join(yr1061_T(y_str(" = a_", 5)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(";", 1)))));
} else if ((((*(yR120 *)y_deref(F.v8690))).f_cls == v903)) {
((*(yR125 *)y_deref(F.v8692))).f_byref = 1;
yr2340_DeclStorage(yr3413_ParamCType(F.v8690), ((*(yR120 *)y_deref(F.v8690))).f_cname);
yr1132_Emit(yr3292_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr3292_Join(yr1061_T(y_str(" = a_", 5)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(";", 1)))));
} else if ((((*(yR120 *)y_deref(F.v8690))).f_cls == v900)) {
yr2340_DeclStorage(yr2421_CType(((*(yR120 *)y_deref(F.v8690))).f_rep), ((*(yR120 *)y_deref(F.v8690))).f_cname);
yr2340_DeclStorage(yr3413_ParamCType(F.v8690), yr3292_Join(((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str("_o", 2)), INT64_C(0)));
yr1132_Emit(yr3292_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr3292_Join(yr1061_T(y_str("_o = a_", 7)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(";", 1)))));
if ((yr2396_Deep(((*(yR120 *)y_deref(F.v8690))).f_rep) && ((!(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8690))).f_rep))).f_kind == v843))))) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_init(", 7)), yr2427_DescOf(((*(yR120 *)y_deref(F.v8690))).f_rep), yr3292_Join(yr1061_T(y_str(", &F.", 5)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(");", 2)))));
}
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8690))).f_rep))).f_kind == v843)) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr3292_Join(yr1061_T(y_str(" = *a_", 6)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(";", 1)))));
}
} else {
yr2340_DeclStorage(yr2421_CType(((*(yR120 *)y_deref(F.v8690))).f_rep), ((*(yR120 *)y_deref(F.v8690))).f_cname);
yr1132_Emit(yr3292_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr3292_Join(yr1061_T(y_str(" = a_", 5)), ((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(";", 1)))));
}
if ((((*(yR120 *)y_deref(F.v8690))).f_at >= INT64_C(0))) {
F.v8696 = yr2731_StoreAt(yr3419_DeclType(F.v8690), ((*(yR120 *)y_deref(F.v8690))).f_at);
yr1132_Emit(yr3292_Join(F.v8696, yr1061_T(y_str(" = F.", 5)), yr3292_Join(((*(yR120 *)y_deref(F.v8690))).f_cname, yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR125 *)y_deref(F.v8692))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.v8692))).f_cname = F.v8696;
((*(yR125 *)y_deref(F.v8692))).f_at = ((*(yR120 *)y_deref(F.v8690))).f_at;
((*(yR120 *)y_deref(F.v8690))).f_path = F.v8696;
}
yr2320_Define(F.v8692, ((*(yR105 *)y_deref(F.p3440))).f_line);
F.v8690 = ((*(yR120 *)y_deref(F.v8690))).f_next;
}
yr3668_EnterMonitor(F.v8666);
yr3512_Declarations(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3440))).f_c))).f_a);
if (yr3237_BlockFalls(((*(yR105 *)y_deref(F.p3440))).f_c)) {
if ((((*(yR125 *)y_deref(F.v8666))).f_kind == v885)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3440))).f_line, ((*(yR105 *)y_deref(F.p3440))).f_name, y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3440))).f_line, ((*(yR105 *)y_deref(F.p3440))).f_name, y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3203_BlockStatements(((*(yR105 *)y_deref(F.p3440))).f_c);
if ((((*(yR125 *)y_deref(F.v8666))).f_kind == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3644_AwaitProcesses();
yr2237_CloseScope();
v1328 = rt_range(rt_sub(v1328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(F.v8694);
yr1037_SA(y_str(" {", 2));
if ((v1279 > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
yr1044_ST(((rt_int *)(v1291).p)[y_ix1(v1291, rt_sub(v1279, INT64_C(1)))]);
yr1037_SA(y_str(" *up;", 5));
} else {
yr1037_SA(y_str(" void *up;", 10));
}
F.v8696 = yr1056_SE();
yr1110_Put(&v982, F.v8696);
yr1125_Append(&v982, &v998);
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
yr1117_PutS(&v982, y_str("};", 2));
yr1110_Put(&F.v8698, yr3292_Join(((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v8666))).f_mnext))).f_name, yr1061_T(y_str(" {", 2)), INT64_C(0)));
if (v1636) {
yr1117_PutS(&F.v8698, y_str("volatile", 8));
}
yr1110_Put(&F.v8698, yr3292_Join(yr1061_T(y_str("struct ", 7)), F.v8694, yr1061_T(y_str(" F;", 3))));
yr1117_PutS(&F.v8698, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR125 *)y_deref(F.v8666))).f_kind == v885)) {
yr1110_Put(&F.v8698, yr3292_Join(yr1061_T(y_str("F = *(struct ", 13)), F.v8694, yr1061_T(y_str(" *)arg;", 7))));
} else if ((v1279 > INT64_C(1))) {
yr1117_PutS(&F.v8698, y_str("F.up = up;", 10));
}
yr1117_PutS(&F.v8698, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1125_Append(&F.v8698, &v996);
yr1117_PutS(&F.v8698, y_str("}", 1));
yr1125_Append(&v988, &F.v8698);
v996 = F.v8668;
v998 = F.v8670;
v1279 = F.v8672;
((rt_int *)(v1291).p)[y_ix1(v1291, v1279)] = yr1200_Fresh(y_str("unused", 6));
if ((!(F.v8686 == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, v1279)] = ((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v8686))).f_members))).f_name;
}
v1532 = F.v8674;
v1535 = F.v8676;
v1560 = F.v8678;
v1574 = F.v8680;
v1601 = F.v8682;
v1604 = F.v8684;
v1607 = F.v8686;
v1636 = F.v8688;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3445_DeclareStorage(void * a_p3446, void * a_p3447, rt_int a_p3448) {
struct yf3449 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3446 = a_p3446;
F.p3447 = a_p3447;
F.p3448 = a_p3448;
((*(yR125 *)y_deref(F.p3446))).f_rep = F.p3447;
((*(yR125 *)y_deref(F.p3446))).f_level = v1279;
((*(yR125 *)y_deref(F.p3446))).f_cname = yr1200_Fresh(y_str("v", 1));
yr2340_DeclStorage(yr2421_CType(F.p3447), ((*(yR125 *)y_deref(F.p3446))).f_cname);
yr3462_InitStorage(F.p3446, F.p3447, F.p3448);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3453_DeclareAt(void * a_p3454, void * a_p3455, rt_int a_p3456, rt_int a_p3457) {
struct yf3458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3454 = a_p3454;
F.p3455 = a_p3455;
F.p3456 = a_p3456;
F.p3457 = a_p3457;
((*(yR125 *)y_deref(F.p3454))).f_rep = F.p3455;
((*(yR125 *)y_deref(F.p3454))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.p3454))).f_at = F.p3456;
((*(yR125 *)y_deref(F.p3454))).f_cname = yr2731_StoreAt(yr2421_CType(F.p3455), F.p3456);
yr3462_InitStorage(F.p3454, F.p3455, F.p3457);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3462_InitStorage(void * a_p3463, void * a_p3464, rt_int a_p3465) {
struct yf3466 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3463 = a_p3463;
F.p3464 = a_p3464;
F.p3465 = a_p3465;
if (yr2396_Deep(F.p3464)) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_init(", 7)), yr2427_DescOf(F.p3464), yr3292_Join(yr1061_T(y_str(", &", 3)), yr2347_SymPath(F.p3463), yr1061_T(y_str(");", 2)))));
}
if ((((*(yR110 *)y_deref(F.p3464))).f_kind == v834)) {
yr1132_Emit(yr3292_Join(yr2347_SymPath(F.p3463), yr1061_T(y_str(" = y_set_new(", 13)), yr3292_Join(yr2502_LoText(((*(yR110 *)y_deref(F.p3464))).f_elem), yr1061_T(y_str(", ", 2)), yr3292_Join(yr2508_HiText(((*(yR110 *)y_deref(F.p3464))).f_elem), yr1061_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR110 *)y_deref(F.p3464))).f_kind == v837)) {
yr3685_DeclareSignal(F.p3463, F.p3465);
}
if (yr2409_HoldsSignal(F.p3464)) {
yr3692_DeclareSignalArray(F.p3463, F.p3465);
}
if ((((*(yR110 *)y_deref(F.p3464))).f_kind == v840)) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2347_SymPath(F.p3463), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3470_SimpleDecl(void * a_p3471) {
struct yf3472 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3471 = a_p3471;
F.v8787 = ((*(yR105 *)y_deref(F.p3471))).f_kind;
if ((((F.v8787 == v639)) || ((F.v8787 == v642)))) {
F.v8789 = yr2603_MakeRep(((*(yR105 *)y_deref(F.p3471))).f_b, INT64_C(0), 0);
yr2462_CheckRepresented(F.v8789, ((*(yR105 *)y_deref(F.p3471))).f_line);
if ((((F.v8787 == v639)) && yr2415_NonAssignable(F.v8789))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3471))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v8793 = ((*(yR105 *)y_deref(F.p3471))).f_a;
while ((!(F.v8793 == ((void *)0)))) {
Y_TICK();
if ((F.v8787 == v639)) {
F.v8795 = yr2218_NewSym(v864, ((*(yR105 *)y_deref(F.v8793))).f_name);
} else {
F.v8795 = yr2218_NewSym(v861, ((*(yR105 *)y_deref(F.v8793))).f_name);
}
if ((((!(((*(yR105 *)y_deref(F.v8793))).f_a == ((void *)0)))) && ((!(((*(yR110 *)y_deref(F.v8789))).f_kind == v837))))) {
yr3453_DeclareAt(F.v8795, F.v8789, yr2725_AtAddress(((*(yR105 *)y_deref(F.v8793))).f_a), ((*(yR105 *)y_deref(F.p3471))).f_line);
} else {
yr3445_DeclareStorage(F.v8795, F.v8789, ((*(yR105 *)y_deref(F.p3471))).f_line);
}
if ((!(((*(yR105 *)y_deref(F.p3471))).f_c == ((void *)0)))) {
yr2938_Expr(((*(yR105 *)y_deref(F.p3471))).f_c, F.v8789, &F.v8797, &F.v8791);
if ((F.v8787 == v639)) {
yr2889_Store(yr2347_SymPath(F.v8795), F.v8789, F.v8797, F.v8791, ((*(yR105 *)y_deref(F.p3471))).f_line);
} else {
F.v8799 = yr3121_UserAssign(yr2347_SymPath(F.v8795), F.v8789, F.v8797, F.v8791, ((*(yR105 *)y_deref(F.p3471))).f_line);
if ((!(F.v8799 == INT64_C(0)))) {
yr1132_Emit(F.v8799);
} else {
if ((((*(yR110 *)y_deref(F.v8789))).f_opaque && (((rt_mod(((*(yR110 *)y_deref(F.v8789))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3471))).f_line, ((*(yR110 *)y_deref(F.v8789))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2889_Store(yr2347_SymPath(F.v8795), F.v8789, F.v8797, F.v8791, ((*(yR105 *)y_deref(F.p3471))).f_line);
}
}
if ((F.v8787 == v639)) {
yr2790_Manifest(((*(yR105 *)y_deref(F.p3471))).f_c, &F.v8801, &F.v8803);
if ((F.v8801 && yr2372_IsDiscrete(F.v8789))) {
((*(yR125 *)y_deref(F.v8795))).f_hasmv = 1;
((*(yR125 *)y_deref(F.v8795))).f_mval = F.v8803;
}
}
}
if ((!(((*(yR105 *)y_deref(F.v8793))).f_a == ((void *)0)))) {
yr3483_AtLocation(F.v8795, ((*(yR105 *)y_deref(F.v8793))).f_a);
}
yr2320_Define(F.v8795, ((*(yR105 *)y_deref(F.v8793))).f_line);
F.v8793 = ((*(yR105 *)y_deref(F.v8793))).f_next;
}
y_use = F.yu; return;
}
if ((F.v8787 == v651)) {
F.v8789 = yr2603_MakeRep(((*(yR105 *)y_deref(F.p3471))).f_b, ((*(yR105 *)y_deref(F.p3471))).f_name, 0);
yr2462_CheckRepresented(F.v8789, ((*(yR105 *)y_deref(F.p3471))).f_line);
F.v8795 = yr2218_NewSym(v867, ((*(yR105 *)y_deref(F.p3471))).f_name);
((*(yR125 *)y_deref(F.v8795))).f_rep = F.v8789;
yr2320_Define(F.v8795, ((*(yR105 *)y_deref(F.p3471))).f_line);
yr2626_ResolvePending(((*(yR105 *)y_deref(F.p3471))).f_name, F.v8789);
yr3476_NoteAlphabet(F.p3471, F.v8789);
y_use = F.yu; return;
}
if ((F.v8787 == v648)) {
F.v8789 = yr2603_MakeRep(((*(yR105 *)y_deref(F.p3471))).f_b, ((*(yR105 *)y_deref(F.p3471))).f_name, 1);
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3471))).f_b))).f_kind == v672)) {
F.v8789 = yr2366_CopyRep(F.v8789);
((*(yR110 *)y_deref(F.v8789))).f_tid = yr2597_NewTid(((*(yR105 *)y_deref(F.p3471))).f_name);
((*(yR110 *)y_deref(F.v8789))).f_tname = ((*(yR105 *)y_deref(F.p3471))).f_name;
if (((((((*(yR110 *)y_deref(F.v8789))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.v8789))).f_kind == v807))) || ((((*(yR110 *)y_deref(F.v8789))).f_kind == v810)))) {
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3471))).f_b))).f_a == ((void *)0))) {
((*(yR110 *)y_deref(F.v8789))).f_abstract = 1;
}
}
}
F.v8795 = yr2218_NewSym(v870, ((*(yR105 *)y_deref(F.p3471))).f_name);
((*(yR125 *)y_deref(F.v8795))).f_rep = F.v8789;
yr2320_Define(F.v8795, ((*(yR105 *)y_deref(F.p3471))).f_line);
yr2626_ResolvePending(((*(yR105 *)y_deref(F.p3471))).f_name, F.v8789);
yr3476_NoteAlphabet(F.p3471, F.v8789);
y_use = F.yu; return;
}
if ((F.v8787 == v645)) {
F.v8793 = ((*(yR105 *)y_deref(F.p3471))).f_a;
while ((!(F.v8793 == ((void *)0)))) {
Y_TICK();
F.v8795 = yr2218_NewSym(v888, ((*(yR105 *)y_deref(F.v8793))).f_name);
((*(yR125 *)y_deref(F.v8795))).f_level = v1279;
((*(yR125 *)y_deref(F.v8795))).f_cname = yr1200_Fresh(y_str("lab", 3));
yr2320_Define(F.v8795, ((*(yR105 *)y_deref(F.v8793))).f_line);
F.v8793 = ((*(yR105 *)y_deref(F.v8793))).f_next;
}
y_use = F.yu; return;
}
yr1178_FailS(((*(yR105 *)y_deref(F.p3471))).f_line, y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3476_NoteAlphabet(void * a_p3477, void * a_p3478) {
struct yf3479 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3477 = a_p3477;
F.p3478 = a_p3478;
if ((((((*(yR110 *)y_deref(F.p3478))).f_kind == v819)) && ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3477))).f_b))).f_kind == v678)))) {
F.v8822 = yr1904_NewNode(v669, ((*(yR105 *)y_deref(F.p3477))).f_line);
((*(yR105 *)y_deref(F.v8822))).f_name = ((*(yR105 *)y_deref(F.p3477))).f_name;
((*(yR105 *)y_deref(F.v8822))).f_rep = F.p3478;
((*(yR105 *)y_deref(F.v8822))).f_next = v1483;
v1483 = F.v8822;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3483_AtLocation(void * a_p3484, void * a_p3485) {
struct yf3486 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3484 = a_p3484;
F.p3485 = a_p3485;
if ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3484))).f_rep))).f_kind == v837)) {
yr3699_DeviceSignal(F.p3484, F.p3485);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3490_Defer(void * a_p3491, rt_int a_p3492, void * a_p3493, rt_int a_p3494) {
struct yf3495 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3491 = a_p3491;
F.p3492 = a_p3492;
F.p3493 = a_p3493;
F.p3494 = a_p3494;
F.v8832 = v1273;
if ((v1761 >= INT64_C(20000))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3491))).f_line, y_str("too many routines for this implementation", 41));
}
v1761 = rt_range(rt_add(v1761, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1680).p)[y_ix1(v1680, v1761)] = F.p3491;
((rt_int *)(v1691).p)[y_ix1(v1691, v1761)] = F.p3492;
((rt_int *)(v1702).p)[y_ix1(v1702, v1761)] = v1276;
((void * *)(v1713).p)[y_ix1(v1713, v1761)] = v1767;
((void * *)(v1724).p)[y_ix1(v1724, v1761)] = F.p3493;
((rt_int *)(v1735).p)[y_ix1(v1735, v1761)] = F.p3494;
while (((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, F.v8832)]))).f_closed) {
Y_TICK();
F.v8832 = rt_range(rt_sub(F.v8832, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1746).p)[y_ix1(v1746, v1761)] = rt_range(rt_add(v1764, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1748).p)[y_ix1(v1748, v1761)] = rt_range(rt_sub(v1273, F.v8832), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8845 = rt_add(F.v8832, INT64_C(1));
F.hi8846 = v1273;
{ rt_int hi8850 = F.hi8846;
for (rt_int i8849 = F.lo8845; i8849 <= hi8850; i8849++) { F.c_8848 = i8849; Y_TICK();
v1764 = rt_range(rt_add(v1764, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1759).p)[y_ix1(v1759, v1764)] = ((void * *)(v1271).p)[y_ix1(v1271, F.c_8848)];
if (i8849 == hi8850) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3499_RunDeferred(rt_int a_p3500, rt_int a_p3501) {
struct yf3502 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3500 = a_p3500;
F.p3501 = a_p3501;
F.v8857 = rt_range(rt_add(F.p3500, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v8857 <= v1761)) {
Y_TICK();
F.lo8868 = ((rt_int *)(v1746).p)[y_ix1(v1746, F.v8857)];
F.hi8869 = rt_sub((rt_add(((rt_int *)(v1746).p)[y_ix1(v1746, F.v8857)], ((rt_int *)(v1748).p)[y_ix1(v1748, F.v8857)])), INT64_C(1));
{ rt_int hi8873 = F.hi8869;
for (rt_int i8872 = F.lo8868; i8872 <= hi8873; i8872++) { F.c_8871 = i8872; Y_TICK();
yr2231_ReopenScope(((void * *)(v1759).p)[y_ix1(v1759, F.c_8871)]);
if (i8872 == hi8873) break;
}}
F.v8861 = v1276;
F.v8863 = v1767;
v1276 = ((rt_int *)(v1702).p)[y_ix1(v1702, F.v8857)];
v1767 = ((void * *)(v1713).p)[y_ix1(v1713, F.v8857)];
if ((((rt_int *)(v1691).p)[y_ix1(v1691, F.v8857)] == INT64_C(1))) {
yr3439_RoutineBody(((void * *)(v1680).p)[y_ix1(v1680, F.v8857)]);
} else {
yr3506_ModuleInit(F.v8857);
}
v1276 = F.v8861;
v1767 = F.v8863;
F.lo8878 = INT64_C(1);
F.hi8879 = ((rt_int *)(v1748).p)[y_ix1(v1748, F.v8857)];
{ rt_int hi8883 = F.hi8879;
for (rt_int i8882 = F.lo8878; i8882 <= hi8883; i8882++) { F.c_8881 = i8882; Y_TICK();
yr2237_CloseScope();
if (i8882 == hi8883) break;
}}
F.v8857 = rt_range(rt_add(F.v8857, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1761 = F.p3500;
v1764 = F.p3501;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3506_ModuleInit(rt_int a_p3507) {
struct yf3508 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3507 = a_p3507;
F.v8889 = ((void * *)(v1680).p)[y_ix1(v1680, F.p3507)];
F.v8891 = v996;
F.v8893 = ((void * *)(v1724).p)[y_ix1(v1724, F.p3507)];
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1735).p)[y_ix1(v1735, F.p3507)]) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3662_MonitorPath(v1767), yr1061_T(y_str(");", 2))));
}
v1560 = rt_range(rt_add(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1547).p)[y_ix1(v1547, v1560)] = INT64_C(0);
((rt_int *)(v1558).p)[y_ix1(v1558, v1560)] = INT64_C(0);
yr3203_BlockStatements(((*(yR105 *)y_deref(F.v8889))).f_c);
v1560 = rt_range(rt_sub(v1560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1735).p)[y_ix1(v1735, F.p3507)]) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3662_MonitorPath(v1767), yr1061_T(y_str(");", 2))));
}
if ((!((v996).f_head == ((void *)0)))) {
((*(yR135 *)y_deref((v996).f_tail))).f_next = ((*(yR135 *)y_deref(F.v8893))).f_next;
((*(yR135 *)y_deref(F.v8893))).f_next = (v996).f_head;
if (((F.v8891).f_tail == F.v8893)) {
(F.v8891).f_tail = (v996).f_tail;
}
}
v996 = F.v8891;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3512_Declarations(void * a_p3513) {
struct yf3514 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3513 = a_p3513;
F.v8907 = F.p3513;
F.v8909 = ((void * *)(v1302).p)[y_ix1(v1302, v1273)];
F.v8911 = v1761;
F.v8913 = v1764;
((void * *)(v1302).p)[y_ix1(v1302, v1273)] = F.p3513;
while ((!(F.v8907 == ((void *)0)))) {
Y_TICK();
v1000 = ((*(yR105 *)y_deref(F.v8907))).f_line;
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = F.v8907;
if ((((((*(yR105 *)y_deref(F.v8907))).f_kind == v654)) || ((((*(yR105 *)y_deref(F.v8907))).f_kind == v666)))) {
if ((((*(yR105 *)y_deref(F.v8907))).f_sym == ((void *)0))) {
yr3518_DeclareRoutine(F.v8907);
}
} else if (((((*(yR105 *)y_deref(F.v8907))).f_kind == v624))) {
if ((((*(yR105 *)y_deref(F.v8907))).f_ival == INT64_C(0))) {
yr3620_CompileModule(F.v8907);
}
} else if ((((*(yR105 *)y_deref(F.v8907))).f_kind == v660)) {
yr3626_DeclareTemplate(F.v8907);
} else if ((((*(yR105 *)y_deref(F.v8907))).f_kind == v663)) {
yr3632_Instantiate(F.v8907);
} else {
yr3470_SimpleDecl(F.v8907);
}
F.v8907 = ((*(yR105 *)y_deref(F.v8907))).f_next;
}
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = ((void *)0);
((void * *)(v1302).p)[y_ix1(v1302, v1273)] = F.v8909;
yr2633_CheckPending();
yr3583_ResolveLater(v1273);
if ((!((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_closed)) {
yr3499_RunDeferred(F.v8911, F.v8913);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3518_DeclareRoutine(void * a_p3519) {
struct yf3520 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3519 = a_p3519;
if ((((*(yR105 *)y_deref(F.p3519))).f_kind == v654)) {
yr3425_RoutineHeader(F.p3519, v876);
} else {
yr3425_RoutineHeader(F.p3519, v885);
}
if ((((*(yR105 *)y_deref(F.p3519))).f_kind == v666)) {
yr3638_DeclareProcess(F.p3519);
}
yr3490_Defer(F.p3519, INT64_C(1), ((void *)0), 0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3524_Alias(rt_int a_p3525, void * a_p3526) {
struct yf3527 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3525 = a_p3525;
F.p3526 = a_p3526;
F.v8923 = yr2218_NewSym(v894, F.p3525);
((*(yR125 *)y_deref(F.v8923))).f_target = F.p3526;
((*(yR125 *)y_deref(F.v8923))).f_readonly = ((*(yR125 *)y_deref(F.p3526))).f_readonly;
{ void * rv8924 = F.v8923;
y_use = F.yu; return rv8924; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3531_AddLits(void * * a_p3532, void * a_p3533, rt_int a_p3534) {
struct yf3535 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3532 = a_p3532;
F.p3533 = a_p3533;
F.p3534 = a_p3534;
if ((((F.p3534 > INT64_C(8))) || ((*(yR110 *)y_deref(F.p3533))).f_opaque)) {
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p3533))).f_kind == v816)) {
F.v8930 = ((*(yR110 *)y_deref(F.p3533))).f_lits;
while ((!(F.v8930 == ((void *)0)))) {
Y_TICK();
F.v8932 = yr2313_FindLit(((*(yR105 *)y_deref(F.v8930))).f_name, F.p3533);
if ((!(F.v8932 == ((void *)0)))) {
F.v8932 = yr3524_Alias(((*(yR105 *)y_deref(F.v8930))).f_name, F.v8932);
((*(yR125 *)y_deref(F.v8932))).f_mnext = (*F.p3532);
(*F.p3532) = F.v8932;
}
F.v8930 = ((*(yR105 *)y_deref(F.v8930))).f_next;
}
} else if ((((*(yR110 *)y_deref(F.p3533))).f_kind == v825)) {
F.v8934 = ((*(yR110 *)y_deref(F.p3533))).f_fields;
while ((!(F.v8934 == ((void *)0)))) {
Y_TICK();
yr3531_AddLits(&(*F.p3532), ((*(yR115 *)y_deref(F.v8934))).f_rep, rt_range(rt_add(F.p3534, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8934 = ((*(yR115 *)y_deref(F.v8934))).f_next;
}
} else if (((((((*(yR110 *)y_deref(F.p3533))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p3533))).f_kind == v834))) || ((((*(yR110 *)y_deref(F.p3533))).f_kind == v831)))) {
yr3531_AddLits(&(*F.p3532), ((*(yR110 *)y_deref(F.p3533))).f_elem, rt_range(rt_add(F.p3534, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3539_Provides(void * a_p3540, rt_int a_p3541) {
struct yf3542 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3540 = a_p3540;
F.p3541 = a_p3541;
F.v8944 = ((*(yR105 *)y_deref(F.p3540))).f_b;
if ((((*(yR105 *)y_deref(F.p3540))).f_name == F.p3541)) {
{ rt_int rv8946 = 1;
y_use = F.yu; return rv8946; }
}
while ((!(F.v8944 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR105 *)y_deref(F.v8944))).f_ival == INT64_C(0)))) && ((((*(yR105 *)y_deref(F.v8944))).f_ival == F.p3541)))) {
{ rt_int rv8949 = 1;
y_use = F.yu; return rv8949; }
}
if ((((((*(yR105 *)y_deref(F.v8944))).f_ival == INT64_C(0))) && ((((*(yR105 *)y_deref(F.v8944))).f_name == F.p3541)))) {
{ rt_int rv8952 = 1;
y_use = F.yu; return rv8952; }
}
F.v8944 = ((*(yR105 *)y_deref(F.v8944))).f_next;
}
{ rt_int rv8954 = 0;
y_use = F.yu; return rv8954; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3546_ImportLater(rt_int a_p3547, rt_int a_p3548, void * * a_p3549) {
struct yf3550 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3547 = a_p3547;
F.p3548 = a_p3548;
F.p3549_o = a_p3549;
F.p3549 = ((void *)0);
if ((v1273 < INT64_C(0))) {
{ rt_int rv8963 = INT64_C(0);
(*F.p3549_o) = F.p3549;
y_use = F.yu; return rv8963; }
}
F.v8960 = ((void * *)(v1302).p)[y_ix1(v1302, v1273)];
while ((!(F.v8960 == ((void *)0)))) {
Y_TICK();
if (((((((*(yR105 *)y_deref(F.v8960))).f_kind == v624)) && ((!(((*(yR105 *)y_deref(F.v8960))).f_ival == INT64_C(2))))) && yr3539_Provides(F.v8960, F.p3547))) {
if ((((*(yR105 *)y_deref(F.v8960))).f_ival == INT64_C(1))) {
F.p3549 = F.v8960;
{ rt_int rv8967 = INT64_C(2);
(*F.p3549_o) = F.p3549;
y_use = F.yu; return rv8967; }
}
yr3620_CompileModule(F.v8960);
{ rt_int rv8969 = INT64_C(1);
(*F.p3549_o) = F.p3549;
y_use = F.yu; return rv8969; }
}
if ((((((((*(yR105 *)y_deref(F.v8960))).f_kind == v654)) || ((((*(yR105 *)y_deref(F.v8960))).f_kind == v666)))) && ((((*(yR105 *)y_deref(F.v8960))).f_name == F.p3547)))) {
{ rt_int rv8971 = INT64_C(3);
(*F.p3549_o) = F.p3549;
y_use = F.yu; return rv8971; }
}
if ((((!(((*(yR105 *)y_deref(F.v8960))).f_kind == v624))) && yr2280_DeclaredFrom(yr3554_OneDecl(F.v8960), F.p3547))) {
yr1186_FailN(F.p3548, F.p3547, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v8960 = ((*(yR105 *)y_deref(F.v8960))).f_next;
}
{ rt_int rv8974 = INT64_C(0);
(*F.p3549_o) = F.p3549;
y_use = F.yu; return rv8974; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3554_OneDecl(void * a_p3555) {
struct yf3556 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3555 = a_p3555;
({ F.v8978 = y_new(sizeof(yR105)); });
(*(yR105 *)y_deref(F.v8978)) = (*(yR105 *)y_deref(F.p3555));
((*(yR105 *)y_deref(F.v8978))).f_next = ((void *)0);
{ void * rv8979 = F.v8978;
y_use = F.yu; return rv8979; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3560_Lazy(rt_int a_p3561, rt_int a_p3562, void * a_p3563, rt_int a_p3564) {
struct yf3565 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3561 = a_p3561;
F.p3562 = a_p3562;
F.p3563 = a_p3563;
F.p3564 = a_p3564;
F.v8986 = yr2218_NewSym(v894, F.p3561);
if ((v1829 >= INT64_C(10000))) {
yr1178_FailS(F.p3564, y_str("too many imports translated later", 33));
}
v1829 = rt_range(rt_add(v1829, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1792).p)[y_ix1(v1792, v1829)] = F.v8986;
((rt_int *)(v1803).p)[y_ix1(v1803, v1829)] = F.p3562;
((void * *)(v1814).p)[y_ix1(v1814, v1829)] = F.p3563;
((rt_int *)(v1825).p)[y_ix1(v1825, v1829)] = v1273;
((rt_int *)(v1827).p)[y_ix1(v1827, v1829)] = F.p3564;
{ void * rv8991 = F.v8986;
y_use = F.yu; return rv8991; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3569_SetLazy(rt_int a_p3570, void * a_p3571) {
struct yf3572 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3570 = a_p3570;
F.p3571 = a_p3571;
((*(yR125 *)y_deref(((void * *)(v1792).p)[y_ix1(v1792, F.p3570)]))).f_target = F.p3571;
((*(yR125 *)y_deref(((void * *)(v1792).p)[y_ix1(v1792, F.p3570)]))).f_readonly = ((*(yR125 *)y_deref(F.p3571))).f_readonly;
((void * *)(v1792).p)[y_ix1(v1792, F.p3570)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3576_ResolveFrom(void * a_p3577, void * a_p3578) {
struct yf3579 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3577 = a_p3577;
F.p3578 = a_p3578;
F.lo9003 = INT64_C(1);
F.hi9004 = v1829;
{ rt_int hi9008 = F.hi9004;
for (rt_int i9007 = F.lo9003; i9007 <= hi9008; i9007++) { F.c_9006 = i9007; Y_TICK();
if ((((!(((void * *)(v1792).p)[y_ix1(v1792, F.c_9006)] == ((void *)0)))) && ((((void * *)(v1814).p)[y_ix1(v1814, F.c_9006)] == F.p3577)))) {
F.v8999 = ((*(yR125 *)y_deref(F.p3578))).f_members;
while ((((!(F.v8999 == ((void *)0)))) && ((!(((*(yR125 *)y_deref(F.v8999))).f_name == ((rt_int *)(v1803).p)[y_ix1(v1803, F.c_9006)]))))) {
Y_TICK();
F.v8999 = ((*(yR125 *)y_deref(F.v8999))).f_mnext;
}
if ((F.v8999 == ((void *)0))) {
yr1186_FailN(((rt_int *)(v1827).p)[y_ix1(v1827, F.c_9006)], ((rt_int *)(v1803).p)[y_ix1(v1803, F.c_9006)], y_str(" is not exported by that module", 31));
}
yr3569_SetLazy(rt_range(F.c_9006, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8999);
}
if (i9007 == hi9008) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3583_ResolveLater(rt_int a_p3584) {
struct yf3585 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3584 = a_p3584;
F.lo9017 = INT64_C(1);
F.hi9018 = v1829;
{ rt_int hi9022 = F.hi9018;
for (rt_int i9021 = F.lo9017; i9021 <= hi9022; i9021++) { F.c_9020 = i9021; Y_TICK();
if (((((!(((void * *)(v1792).p)[y_ix1(v1792, F.c_9020)] == ((void *)0)))) && ((((void * *)(v1814).p)[y_ix1(v1814, F.c_9020)] == ((void *)0)))) && ((((rt_int *)(v1825).p)[y_ix1(v1825, F.c_9020)] == F.p3584)))) {
F.v9013 = yr2248_Find(((rt_int *)(v1803).p)[y_ix1(v1803, F.c_9020)]);
if ((F.v9013 == ((void *)0))) {
yr1186_FailN(((rt_int *)(v1827).p)[y_ix1(v1827, F.c_9020)], ((rt_int *)(v1803).p)[y_ix1(v1803, F.c_9020)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3569_SetLazy(rt_range(F.c_9020, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v9013);
}
if (i9021 == hi9022) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3589_LazyModule(void * a_p3590, void * * a_p3591, rt_int a_p3592) {
struct yf3593 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3590 = a_p3590;
F.p3591 = a_p3591;
F.p3592 = a_p3592;
F.v9029 = ((*(yR105 *)y_deref(F.p3590))).f_b;
while ((!(F.v9029 == ((void *)0)))) {
Y_TICK();
F.v9033 = ((*(yR105 *)y_deref(F.v9029))).f_name;
if ((!(((*(yR105 *)y_deref(F.v9029))).f_ival == INT64_C(0)))) {
F.v9033 = rt_range(((*(yR105 *)y_deref(F.v9029))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v9033 == v531))) && ((!(F.v9033 == v585)))) && ((!(F.v9033 == v570))))) {
F.v9031 = yr3560_Lazy(F.v9033, F.v9033, F.p3590, F.p3592);
((*(yR125 *)y_deref(F.v9031))).f_mnext = (*F.p3591);
(*F.p3591) = F.v9031;
}
F.v9029 = ((*(yR105 *)y_deref(F.v9029))).f_next;
}
F.v9031 = yr3560_Lazy(((*(yR105 *)y_deref(F.p3590))).f_name, ((*(yR105 *)y_deref(F.p3590))).f_name, ((void *)0), F.p3592);
((*(yR125 *)y_deref(F.v9031))).f_mnext = (*F.p3591);
(*F.p3591) = F.v9031;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3597_ResolveItem(void * a_p3598, void * * a_p3599, rt_int a_p3600) {
struct yf3601 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3598 = a_p3598;
F.p3599 = a_p3599;
F.p3600 = a_p3600;
F.v9050 = ((*(yR105 *)y_deref(F.p3598))).f_flag;
if (((F.p3600 && ((((*(yR105 *)y_deref(F.p3598))).f_text == INT64_C(0)))) && (((((((*(yR105 *)y_deref(F.p3598))).f_name == v531)) || ((((*(yR105 *)y_deref(F.p3598))).f_name == v585))) || ((((*(yR105 *)y_deref(F.p3598))).f_name == v570)))))) {
if ((yr2254_FindHere(((*(yR105 *)y_deref(F.p3598))).f_name) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v9046 = ((*(yR105 *)y_deref(F.p3598))).f_name;
if ((!(((*(yR105 *)y_deref(F.p3598))).f_ival == INT64_C(0)))) {
F.v9046 = rt_range(((*(yR105 *)y_deref(F.p3598))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR105 *)y_deref(F.p3598))).f_text == INT64_C(0)))) {
if ((((!F.p3600)) && ((yr2248_Find(((*(yR105 *)y_deref(F.p3598))).f_text) == ((void *)0))))) {
F.v9052 = yr3546_ImportLater(((*(yR105 *)y_deref(F.p3598))).f_text, ((*(yR105 *)y_deref(F.p3598))).f_line, &F.v9054);
if ((F.v9052 == INT64_C(2))) {
F.v9044 = yr3560_Lazy(F.v9046, ((*(yR105 *)y_deref(F.p3598))).f_name, F.v9054, ((*(yR105 *)y_deref(F.p3598))).f_line);
((*(yR125 *)y_deref(F.v9044))).f_mnext = (*F.p3599);
(*F.p3599) = F.v9044;
y_use = F.yu; return;
}
}
F.v9042 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(F.p3598))).f_text, ((*(yR105 *)y_deref(F.p3598))).f_line));
if ((!(((*(yR125 *)y_deref(F.v9042))).f_kind == v879))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_text, y_str(" is not a module", 16));
}
F.v9040 = ((*(yR125 *)y_deref(F.v9042))).f_members;
while ((((!(F.v9040 == ((void *)0)))) && ((!(((*(yR125 *)y_deref(F.v9040))).f_name == ((*(yR105 *)y_deref(F.p3598))).f_name))))) {
Y_TICK();
F.v9040 = ((*(yR125 *)y_deref(F.v9040))).f_mnext;
}
if ((F.v9040 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3600) {
F.v9040 = yr2254_FindHere(((*(yR105 *)y_deref(F.p3598))).f_name);
} else {
F.v9040 = yr2248_Find(((*(yR105 *)y_deref(F.p3598))).f_name);
}
if ((((F.v9040 == ((void *)0))) && (!F.p3600))) {
F.v9052 = yr3546_ImportLater(((*(yR105 *)y_deref(F.p3598))).f_name, ((*(yR105 *)y_deref(F.p3598))).f_line, &F.v9054);
if ((((F.v9052 == INT64_C(2))) && ((((*(yR105 *)y_deref(F.v9054))).f_name == ((*(yR105 *)y_deref(F.p3598))).f_name)))) {
if ((((!(F.v9050 == INT64_C(0)))) || ((!(((*(yR105 *)y_deref(F.p3598))).f_ival == INT64_C(0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3598))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3589_LazyModule(F.v9054, &(*F.p3599), ((*(yR105 *)y_deref(F.p3598))).f_line);
y_use = F.yu; return;
}
if ((F.v9052 >= INT64_C(2))) {
F.v9044 = yr3560_Lazy(F.v9046, ((*(yR105 *)y_deref(F.p3598))).f_name, F.v9054, ((*(yR105 *)y_deref(F.p3598))).f_line);
((*(yR125 *)y_deref(F.v9044))).f_mnext = (*F.p3599);
(*F.p3599) = F.v9044;
y_use = F.yu; return;
}
F.v9040 = yr2248_Find(((*(yR105 *)y_deref(F.p3598))).f_name);
}
if ((F.p3600 && ((!(F.v9040 == ((void *)0)))))) {
if ((((((*(yR125 *)y_deref(F.v9040))).f_kind == v894)) && ((((*(yR125 *)y_deref(F.v9040))).f_mval == INT64_C(1))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_name, y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((F.v9040 == ((void *)0))) {
if (F.p3600) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v9042 = yr2353_Real(F.v9040);
if ((((((*(yR125 *)y_deref(F.v9042))).f_kind == v879)) && ((((*(yR105 *)y_deref(F.p3598))).f_text == INT64_C(0))))) {
if ((((!(F.v9050 == INT64_C(0)))) || ((!(((*(yR105 *)y_deref(F.p3598))).f_ival == INT64_C(0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3598))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v9044 = ((*(yR125 *)y_deref(F.v9042))).f_members;
while ((!(F.v9044 == ((void *)0)))) {
Y_TICK();
F.v9040 = yr3524_Alias(((*(yR125 *)y_deref(F.v9044))).f_name, F.v9044);
((*(yR125 *)y_deref(F.v9040))).f_mnext = (*F.p3599);
(*F.p3599) = F.v9040;
F.v9044 = ((*(yR125 *)y_deref(F.v9044))).f_mnext;
}
if ((!F.p3600)) {
F.v9040 = yr3524_Alias(((*(yR125 *)y_deref(F.v9042))).f_name, F.v9042);
((*(yR125 *)y_deref(F.v9040))).f_mnext = (*F.p3599);
(*F.p3599) = F.v9040;
}
y_use = F.yu; return;
}
F.v9044 = yr3524_Alias(F.v9046, F.v9040);
if (F.p3600) {
if ((((((*(yR125 *)y_deref(F.v9042))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v9042))).f_kind == v870)))) {
if ((((F.v9050 == v429)) || ((F.v9050 == v483)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3598))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((F.v9050 == v474)) && ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9042))).f_rep))).f_opaque)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_name, y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(F.v9050 == v474))) || ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9042))).f_rep))).f_opaque)) {
F.v9048 = yr2366_CopyRep(((*(yR125 *)y_deref(F.v9042))).f_rep);
((*(yR110 *)y_deref(F.v9048))).f_opaque = 1;
((*(yR110 *)y_deref(F.v9048))).f_opaqueops = v1780;
((*(yR125 *)y_deref(F.v9044))).f_target = yr2218_NewSym(((*(yR125 *)y_deref(F.v9042))).f_kind, ((*(yR125 *)y_deref(F.v9042))).f_name);
((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v9044))).f_target))).f_rep = F.v9048;
((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v9044))).f_target))).f_decl = ((*(yR125 *)y_deref(F.v9042))).f_decl;
} else {
yr3531_AddLits(&(*F.p3599), ((*(yR125 *)y_deref(F.v9042))).f_rep, INT64_C(0));
}
} else if ((((((*(yR125 *)y_deref(F.v9042))).f_kind == v861)) || ((((*(yR125 *)y_deref(F.v9042))).f_kind == v864)))) {
if ((((F.v9050 == v396)) || ((F.v9050 == v474)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3598))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((F.v9050 == v483)) && ((((((*(yR125 *)y_deref(F.v9042))).f_kind == v864)) || ((*(yR125 *)y_deref(F.v9040))).f_readonly)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3598))).f_line, ((*(yR105 *)y_deref(F.p3598))).f_name, y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(F.v9050 == v483))) {
((*(yR125 *)y_deref(F.v9044))).f_readonly = 1;
}
} else if ((!(F.v9050 == INT64_C(0)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3598))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR125 *)y_deref(F.v9042))).f_kind == v861)) && ((((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9042))).f_rep))).f_kind == v837)) || yr2409_HoldsSignal(((*(yR125 *)y_deref(F.v9042))).f_rep))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3598))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR125 *)y_deref(F.v9042))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v9042))).f_kind == v870)))) {
yr3531_AddLits(&(*F.p3599), ((*(yR125 *)y_deref(F.v9042))).f_rep, INT64_C(0));
}
((*(yR125 *)y_deref(F.v9044))).f_mnext = (*F.p3599);
(*F.p3599) = F.v9044;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3605_DefineAll(void * a_p3606, rt_int a_p3607) {
struct yf3608 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3606 = a_p3606;
F.p3607 = a_p3607;
F.v9089 = F.p3606;
F.v9091 = F.p3606;
F.v9093 = F.p3606;
while ((!(F.v9089 == ((void *)0)))) {
Y_TICK();
F.v9091 = ((*(yR125 *)y_deref(F.v9089))).f_mnext;
F.v9093 = yr2254_FindHere(((*(yR125 *)y_deref(F.v9089))).f_name);
if (((!yr2301_Resolved(F.v9089)) || ((((!(F.v9093 == ((void *)0)))) && (!yr2301_Resolved(F.v9093)))))) {
if ((!(F.v9093 == ((void *)0)))) {
yr1186_FailN(F.p3607, ((*(yR125 *)y_deref(F.v9089))).f_name, y_str(" comes into this scope twice", 28));
}
yr2320_Define(F.v9089, F.p3607);
} else if ((((F.v9093 == ((void *)0))) || ((!(yr2353_Real(F.v9093) == yr2353_Real(F.v9089)))))) {
if (((((!(F.v9093 == ((void *)0)))) && ((((*(yR125 *)y_deref(yr2353_Real(F.v9089)))).f_kind == v873))) && ((((*(yR125 *)y_deref(yr2353_Real(F.v9093)))).f_kind == v873)))) {
yr2320_Define(F.v9089, F.p3607);
} else if ((F.v9093 == ((void *)0))) {
yr2320_Define(F.v9089, F.p3607);
} else {
yr1186_FailN(F.p3607, ((*(yR125 *)y_deref(F.v9089))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v9089 = F.v9091;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3612_ExtendWith(void * a_p3613, void * a_p3614, rt_int a_p3615) {
struct yf3616 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3613 = a_p3613;
F.p3614 = a_p3614;
F.p3615 = a_p3615;
F.v9101 = ((void *)0);
F.v9103 = ((void *)0);
F.v9105 = ((void *)0);
F.v9107 = ((void *)0);
F.v9107 = F.p3613;
while ((!(F.v9107 == ((void *)0)))) {
Y_TICK();
if ((!(yr3432_SameSignature(F.v9107, F.p3614) == ((void *)0)))) {
yr1186_FailN(F.p3615, ((*(yR125 *)y_deref(F.v9107))).f_name, y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9107))).f_ret))).f_kind == v852)) == ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3614))).f_ret))).f_kind == v852))))) {
yr1186_FailN(F.p3615, ((*(yR125 *)y_deref(F.v9107))).f_name, y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v9105 = y_new(sizeof(yR125)); });
(*(yR125 *)y_deref(F.v9105)) = (*(yR125 *)y_deref(F.v9107));
((*(yR125 *)y_deref(F.v9105))).f_target = F.v9107;
((*(yR125 *)y_deref(F.v9105))).f_alt = ((void *)0);
if ((F.v9103 == ((void *)0))) {
F.v9101 = F.v9105;
} else {
((*(yR125 *)y_deref(F.v9103))).f_alt = F.v9105;
}
F.v9103 = F.v9105;
F.v9107 = ((*(yR125 *)y_deref(F.v9107))).f_alt;
}
((*(yR125 *)y_deref(F.v9103))).f_alt = F.p3614;
{ void * rv9110 = F.v9101;
y_use = F.yu; return rv9110; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3620_CompileModule(void * a_p3621) {
struct yf3622 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3621 = a_p3621;
F.v9140 = 0;
((*(yR105 *)y_deref(F.p3621))).f_ival = INT64_C(1);
F.v9114 = ((void *)0);
F.v9132 = ((*(yR105 *)y_deref(F.p3621))).f_a;
while ((!(F.v9132 == ((void *)0)))) {
Y_TICK();
yr3597_ResolveItem(F.v9132, &F.v9114, 0);
F.v9132 = ((*(yR105 *)y_deref(F.v9132))).f_next;
}
F.v9124 = v1767;
if ((((((*(yR105 *)y_deref(F.p3621))).f_flag == INT64_C(1))) && ((v1767 == ((void *)0))))) {
F.v9126 = yr2218_NewSym(v861, ((*(yR105 *)y_deref(F.p3621))).f_name);
((*(yR125 *)y_deref(F.v9126))).f_level = v1279;
((*(yR125 *)y_deref(F.v9126))).f_cname = yr1200_Fresh(y_str("mon", 3));
((*(yR125 *)y_deref(F.v9126))).f_rep = v1348;
yr2340_DeclStorage(yr1061_T(y_str("ymon", 4)), ((*(yR125 *)y_deref(F.v9126))).f_cname);
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2327_Path(v1279, ((*(yR125 *)y_deref(F.v9126))).f_cname), yr1061_T(y_str(");", 2))));
v1767 = F.v9126;
F.v9140 = 1;
}
yr2225_OpenScope(1);
((void * *)(v1778).p)[y_ix1(v1778, v1273)] = ((void *)0);
F.v9136 = v1276;
v1276 = v1273;
F.v9118 = F.v9114;
while ((!(F.v9118 == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(F.v9118))).f_mval = INT64_C(1);
F.v9118 = ((*(yR125 *)y_deref(F.v9118))).f_mnext;
}
yr3605_DefineAll(F.v9114, ((*(yR105 *)y_deref(F.p3621))).f_line);
yr3512_Declarations(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3621))).f_c))).f_a);
yr1132_Emit(yr3292_Join(yr1061_T(y_str("/* ", 3)), ((*(yR105 *)y_deref(F.p3621))).f_name, yr1061_T(y_str(" */", 3))));
yr3490_Defer(F.p3621, INT64_C(2), (v996).f_tail, F.v9140);
v1780 = INT64_C(0);
F.v9132 = ((*(yR105 *)y_deref(F.p3621))).f_b;
while ((!(F.v9132 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v9132))).f_text == INT64_C(0))) && ((yr2254_FindHere(((*(yR105 *)y_deref(F.v9132))).f_name) == ((void *)0))))) {
if ((((*(yR105 *)y_deref(F.v9132))).f_name == v531)) {
v1780 = rt_range(rt_add(v1780, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR105 *)y_deref(F.v9132))).f_name == v585)) || ((((*(yR105 *)y_deref(F.v9132))).f_name == v570)))) {
if (((rt_div(v1780, INT64_C(2))) == INT64_C(0))) {
v1780 = rt_range(rt_add(v1780, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v9132 = ((*(yR105 *)y_deref(F.v9132))).f_next;
}
F.v9116 = ((void *)0);
F.v9132 = ((*(yR105 *)y_deref(F.p3621))).f_b;
while ((!(F.v9132 == ((void *)0)))) {
Y_TICK();
yr3597_ResolveItem(F.v9132, &F.v9116, 1);
F.v9132 = ((*(yR105 *)y_deref(F.v9132))).f_next;
}
F.v9134 = ((void * *)(v1778).p)[y_ix1(v1778, v1273)];
v1276 = F.v9136;
yr2237_CloseScope();
while ((!(F.v9134 == ((void *)0)))) {
Y_TICK();
F.v9132 = ((*(yR105 *)y_deref(F.v9134))).f_next;
((*(yR105 *)y_deref(F.v9134))).f_next = ((void * *)(v1778).p)[y_ix1(v1778, v1273)];
((void * *)(v1778).p)[y_ix1(v1778, v1273)] = F.v9134;
F.v9134 = F.v9132;
}
v1767 = F.v9124;
F.v9120 = yr2218_NewSym(v879, ((*(yR105 *)y_deref(F.p3621))).f_name);
((*(yR125 *)y_deref(F.v9120))).f_members = F.v9116;
yr2320_Define(F.v9120, ((*(yR105 *)y_deref(F.p3621))).f_line);
F.v9122 = F.v9116;
F.v9116 = ((void *)0);
while ((!(F.v9122 == ((void *)0)))) {
Y_TICK();
F.v9128 = ((*(yR125 *)y_deref(F.v9122))).f_mnext;
F.v9118 = yr3524_Alias(((*(yR125 *)y_deref(F.v9122))).f_name, F.v9122);
((*(yR125 *)y_deref(F.v9118))).f_readonly = ((*(yR125 *)y_deref(F.v9122))).f_readonly;
((*(yR125 *)y_deref(F.v9118))).f_mnext = F.v9116;
F.v9116 = F.v9118;
F.v9122 = F.v9128;
}
((*(yR125 *)y_deref(F.v9120))).f_members = F.v9116;
((*(yR105 *)y_deref(F.p3621))).f_ival = INT64_C(2);
yr3576_ResolveFrom(F.p3621, F.v9120);
F.v9122 = F.v9116;
while ((!(F.v9122 == ((void *)0)))) {
Y_TICK();
F.v9128 = yr3524_Alias(((*(yR125 *)y_deref(F.v9122))).f_name, F.v9122);
((*(yR125 *)y_deref(F.v9128))).f_readonly = ((*(yR125 *)y_deref(F.v9122))).f_readonly;
F.v9130 = yr2248_Find(((*(yR125 *)y_deref(F.v9122))).f_name);
if ((!(F.v9130 == ((void *)0)))) {
if ((!yr2301_Resolved(F.v9130))) {
F.v9130 = ((void *)0);
} else {
F.v9130 = yr2353_Real(F.v9130);
}
}
if ((((((*(yR125 *)y_deref(yr2353_Real(F.v9122)))).f_kind == v876)) && ((!(F.v9130 == ((void *)0)))))) {
if ((((*(yR125 *)y_deref(F.v9130))).f_kind == v876)) {
F.v9128 = yr3612_ExtendWith(yr2353_Real(F.v9122), F.v9130, ((*(yR105 *)y_deref(F.p3621))).f_line);
}
}
if ((yr2254_FindHere(((*(yR125 *)y_deref(F.v9122))).f_name) == ((void *)0))) {
yr2320_Define(F.v9128, ((*(yR105 *)y_deref(F.p3621))).f_line);
} else if ((((*(yR125 *)y_deref(F.v9128))).f_kind == v876)) {
yr2320_Define(F.v9128, ((*(yR105 *)y_deref(F.p3621))).f_line);
} else if ((((((*(yR125 *)y_deref(yr2254_FindHere(((*(yR125 *)y_deref(F.v9122))).f_name)))).f_kind == v894)) && ((!(yr2353_Real(yr2254_FindHere(((*(yR125 *)y_deref(F.v9122))).f_name)) == yr2353_Real(F.v9122)))))) {
yr2320_Define(F.v9128, ((*(yR105 *)y_deref(F.p3621))).f_line);
} else if ((!(((*(yR125 *)y_deref(yr2353_Real(F.v9122)))).f_kind == v873))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3621))).f_line, ((*(yR125 *)y_deref(F.v9122))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v9122 = ((*(yR125 *)y_deref(F.v9122))).f_mnext;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3626_DeclareTemplate(void * a_p3627) {
struct yf3628 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3627 = a_p3627;
F.v9170 = yr2218_NewSym(v882, ((*(yR105 *)y_deref(F.p3627))).f_name);
((*(yR125 *)y_deref(F.v9170))).f_decl = F.p3627;
yr2320_Define(F.v9170, ((*(yR105 *)y_deref(F.p3627))).f_line);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3632_Instantiate(void * a_p3633) {
struct yf3634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3633 = a_p3633;
F.v9174 = yr2353_Real(yr2260_Lookup(((*(yR105 *)y_deref(F.p3633))).f_name, ((*(yR105 *)y_deref(F.p3633))).f_line));
if ((!(((*(yR125 *)y_deref(F.v9174))).f_kind == v882))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3633))).f_line, ((*(yR105 *)y_deref(F.p3633))).f_name, y_str(" is not a template", 18));
}
F.v9176 = ((*(yR125 *)y_deref(F.v9174))).f_decl;
if ((!(yr1919_Count(((*(yR105 *)y_deref(F.v9176))).f_a) == yr1919_Count(((*(yR105 *)y_deref(F.p3633))).f_a)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3633))).f_line, ((*(yR105 *)y_deref(F.p3633))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v9182 = rt_range(rt_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9198 = ((*(yR105 *)y_deref(F.v9176))).f_ival;
F.hi9199 = rt_sub(((*(yR105 *)y_deref(F.v9176))).f_flag, INT64_C(1));
{ rt_int hi9203 = F.hi9199;
for (rt_int i9202 = F.lo9198; i9202 <= hi9203; i9202++) { F.c_9201 = i9202; Y_TICK();
F.v9186 = ((rt_int *)(v1207).p)[y_ix1(v1207, F.c_9201)];
F.v9188 = ((rt_int *)(v1209).p)[y_ix1(v1209, F.c_9201)];
if ((F.v9186 == v207)) {
F.v9178 = ((*(yR105 *)y_deref(F.v9176))).f_a;
F.v9180 = ((*(yR105 *)y_deref(F.p3633))).f_a;
while ((!(F.v9178 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v9178))).f_name == F.v9188)) && ((F.v9186 == v207)))) {
if ((((*(yR105 *)y_deref(F.v9180))).f_flag == INT64_C(1))) {
F.v9186 = v216;
F.v9188 = ((*(yR105 *)y_deref(F.v9180))).f_ival;
} else {
F.v9188 = ((*(yR105 *)y_deref(F.v9180))).f_name;
if ((F.v9188 <= v492)) {
F.v9186 = v210;
} else if ((F.v9188 <= v621)) {
F.v9186 = v213;
}
}
}
F.v9178 = ((*(yR105 *)y_deref(F.v9178))).f_next;
F.v9180 = ((*(yR105 *)y_deref(F.v9180))).f_next;
}
}
v1213 = rt_range(rt_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, v1213)] = F.v9186;
((rt_int *)(v1209).p)[y_ix1(v1209, v1213)] = F.v9188;
((rt_int *)(v1211).p)[y_ix1(v1211, v1213)] = ((rt_int *)(v1211).p)[y_ix1(v1211, F.c_9201)];
if (i9202 == hi9203) break;
}}
v1213 = rt_range(rt_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, v1213)] = v204;
((rt_int *)(v1209).p)[y_ix1(v1209, v1213)] = INT64_C(0);
((rt_int *)(v1211).p)[y_ix1(v1211, v1213)] = ((*(yR105 *)y_deref(F.p3633))).f_line;
F.v9184 = v1249;
v1249 = F.v9182;
F.v9190 = yr2009_ParseModule();
v1249 = F.v9184;
yr3620_CompileModule(F.v9190);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3638_DeclareProcess(void * a_p3639) {
struct yf3640 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3639 = a_p3639;
F.v9213 = ((*(yR105 *)y_deref(F.p3639))).f_sym;
((*(yR125 *)y_deref(F.v9213))).f_monitor = v1767;
yr2340_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3292_Join(((*(yR125 *)y_deref(F.v9213))).f_cname, yr1061_T(y_str("_d", 2)), INT64_C(0)));
F.v9215 = yr1904_NewNode(v669, ((*(yR105 *)y_deref(F.p3639))).f_line);
((*(yR105 *)y_deref(F.v9215))).f_sym = F.v9213;
((*(yR105 *)y_deref(F.v9215))).f_next = ((void * *)(v1778).p)[y_ix1(v1778, v1273)];
((void * *)(v1778).p)[y_ix1(v1778, v1273)] = F.v9215;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3644_AwaitProcesses(void) {
struct yf3645 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9221 = ((void * *)(v1778).p)[y_ix1(v1778, v1273)];
while ((!(F.v9221 == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3292_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2327_Path(rt_range(rt_sub(((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v9221))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3292_Join(((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v9221))).f_sym))).f_cname, yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
F.v9221 = ((*(yR105 *)y_deref(F.v9221))).f_next;
}
((void * *)(v1778).p)[y_ix1(v1778, v1273)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3649_Activate(void * a_p3650, void * a_p3651) {
struct yf3652 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3650 = a_p3650;
F.p3651 = a_p3651;
F.v9262 = ((*(yR125 *)y_deref(F.p3651))).f_decl;
yr3064_CompileArgs(((*(yR105 *)y_deref(F.p3650))).f_a, F.p3651, &F.v9232, &F.v9234);
if ((!(F.v9234 == ((*(yR125 *)y_deref(F.p3651))).f_nparams))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3650))).f_line, ((*(yR125 *)y_deref(F.p3651))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3114_NoteCall(F.p3651, ((*(yR105 *)y_deref(F.p3650))).f_line);
yr3380_CheckActuals(F.p3651, F.v9232, ((*(yR105 *)y_deref(F.p3650))).f_line);
F.v9250 = yr1200_Fresh(y_str("pf", 2));
yr1132_Emit(yr3292_Join(yr1061_T(y_str("{ struct ", 9)), ((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.p3651))).f_members))).f_name, yr3292_Join(yr1061_T(y_str(" *", 2)), F.v9250, yr3292_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), F.v9250, yr1061_T(y_str(");", 2))))));
if ((((*(yR125 *)y_deref(F.p3651))).f_level > INT64_C(1))) {
yr1132_Emit(yr3292_Join(F.v9250, yr1061_T(y_str("->up = ", 7)), yr3292_Join(yr2334_FramePtr(rt_range(rt_sub(((*(yR125 *)y_deref(F.p3651))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9248 = ((*(yR125 *)y_deref(F.p3651))).f_params;
F.v9236 = rt_range(rt_add(F.v9232, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v9248 == ((void *)0)))) {
Y_TICK();
if ((!yr3043_Fits(((*(yR120 *)y_deref(F.v9248))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)]))) {
yr2446_TypeClash(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]))).f_line, ((*(yR120 *)y_deref(F.v9248))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)]);
}
F.v9256 = yr3292_Join(F.v9250, yr1061_T(y_str("->", 2)), ((*(yR120 *)y_deref(F.v9248))).f_cname);
yr3073_CheckUnresolved(((*(yR120 *)y_deref(F.v9248))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)], ((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]))).f_line);
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v9248))).f_rep))).f_kind == v855)) {
yr1132_Emit(yr3292_Join(F.v9256, yr1061_T(y_str(" = ", 3)), yr3292_Join(yr2745_SpaceArg(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)], ((rt_int *)(v1494).p)[y_ix1(v1494, F.v9236)], ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)]), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if ((((*(yR120 *)y_deref(F.v9248))).f_cls == v903)) {
if ((!yr2899_IsVariable(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]))).f_line, ((*(yR120 *)y_deref(F.v9248))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr3081_SameAsFormal(((*(yR120 *)y_deref(F.v9248))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)]))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]))).f_line, ((*(yR120 *)y_deref(F.v9248))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3347_NoteWrite(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]);
yr3330_DesigBase(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)], &F.v9242, &F.v9244, &F.v9246);
if ((((!(F.v9242 == ((void *)0)))) && (!F.v9244))) {
if ((yr3656_LifeDepth(((*(yR125 *)y_deref(F.v9242))).f_depth) > yr3656_LifeDepth(((*(yR125 *)y_deref(F.p3651))).f_depth))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1516).p)[y_ix1(v1516, F.v9236)]))).f_line, ((*(yR125 *)y_deref(F.v9242))).f_name, y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1132_Emit(yr3292_Join(F.v9256, yr1061_T(y_str(" = &", 4)), yr3292_Join(((rt_int *)(v1494).p)[y_ix1(v1494, F.v9236)], yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2396_Deep(((*(yR120 *)y_deref(F.v9248))).f_rep)) {
F.v9252 = yr1200_Fresh(y_str("t", 1));
yr1132_Emit(yr3292_Join(yr1061_T(y_str("{ ", 2)), yr2421_CType(((*(yR120 *)y_deref(F.v9248))).f_rep), yr3292_Join(yr1061_T(y_str(" ", 1)), F.v9252, yr3292_Join(yr1061_T(y_str(" = ", 3)), yr2871_Convert(((rt_int *)(v1494).p)[y_ix1(v1494, F.v9236)], ((*(yR120 *)y_deref(F.v9248))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)]), yr1061_T(y_str(";", 1))))));
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v9248))).f_rep))).f_kind == v843)) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2427_DescOf(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v9248))).f_rep))).f_elem), yr3292_Join(yr1061_T(y_str("), &", 4)), F.v9256, yr3292_Join(yr1061_T(y_str(", &", 3)), F.v9252, yr1061_T(y_str("); }", 4))))));
} else {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_copy(", 7)), yr2427_DescOf(((*(yR120 *)y_deref(F.v9248))).f_rep), yr3292_Join(yr1061_T(y_str(", &", 3)), F.v9256, yr3292_Join(yr1061_T(y_str(", &", 3)), F.v9252, yr1061_T(y_str("); }", 4))))));
}
} else {
yr1132_Emit(yr3292_Join(F.v9256, yr1061_T(y_str(" = ", 3)), yr3292_Join(yr2871_Convert(((rt_int *)(v1494).p)[y_ix1(v1494, F.v9236)], ((*(yR120 *)y_deref(F.v9248))).f_rep, ((void * *)(v1505).p)[y_ix1(v1505, F.v9236)]), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9236 = rt_range(rt_add(F.v9236, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9248 = ((*(yR120 *)y_deref(F.v9248))).f_next;
}
v1518 = F.v9232;
F.v9258 = yr1061_T(y_str("0", 1));
if ((!(((*(yR105 *)y_deref(F.v9262))).f_e == ((void *)0)))) {
yr2938_Expr(((*(yR105 *)y_deref(F.v9262))).f_e, v1342, &F.v9258, &F.v9264);
yr2454_CheckType(((*(yR105 *)y_deref(F.v9262))).f_line, v1342, F.v9264);
}
F.v9260 = yr1061_T(y_str("0, 0", 4));
if ((!(((*(yR105 *)y_deref(F.v9262))).f_d == ((void *)0)))) {
yr2938_Expr(((*(yR105 *)y_deref(F.v9262))).f_d, v1342, &F.v9254, &F.v9264);
yr2454_CheckType(((*(yR105 *)y_deref(F.v9262))).f_line, v1342, F.v9264);
F.v9260 = yr3292_Join(yr1061_T(y_str("1, ", 3)), F.v9254, INT64_C(0));
}
F.v9238 = INT64_C(0);
if ((!(((*(yR105 *)y_deref(F.v9262))).f_x == ((void *)0)))) {
yr2790_Manifest(((*(yR105 *)y_deref(F.v9262))).f_x, &F.v9240, &F.v9238);
if (((!F.v9240) || ((F.v9238 < INT64_C(1))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v9262))).f_line, y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(yr2327_Path(rt_range(rt_sub(((*(yR125 *)y_deref(F.p3651))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3292_Join(((*(yR125 *)y_deref(F.p3651))).f_cname, yr1061_T(y_str("_d", 2)), INT64_C(0))));
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9258);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9260);
yr1037_SA(y_str(", ", 2));
yr1050_SI(F.v9238);
yr1037_SA(y_str(", ", 2));
yr1044_ST(((*(yR125 *)y_deref(F.p3651))).f_cname);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9250);
yr1037_SA(y_str("); }", 4));
F.v9252 = yr1056_SE();
yr1132_Emit(F.v9252);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3656_LifeDepth(rt_int a_p3657) {
struct yf3658 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3657 = a_p3657;
F.v9328 = F.p3657;
while ((((F.v9328 > INT64_C(1))) && ((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, F.v9328)]))).f_closed)) {
Y_TICK();
F.v9328 = rt_range(rt_sub(F.v9328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv9332 = F.v9328;
y_use = F.yu; return rv9332; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3662_MonitorPath(void * a_p3663) {
struct yf3664 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3663 = a_p3663;
{ rt_int rv9337 = yr3292_Join(yr1061_T(y_str("&", 1)), yr2327_Path(((*(yR125 *)y_deref(F.p3663))).f_level, ((*(yR125 *)y_deref(F.p3663))).f_cname), INT64_C(0));
y_use = F.yu; return rv9337; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3668_EnterMonitor(void * a_p3669) {
struct yf3670 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3669 = a_p3669;
if ((((*(yR125 *)y_deref(F.p3669))).f_kind == v876)) {
((*(yR125 *)y_deref(F.p3669))).f_monitor = v1767;
}
if ((((*(yR125 *)y_deref(F.p3669))).f_monitor == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3662_MonitorPath(((*(yR125 *)y_deref(F.p3669))).f_monitor), yr1061_T(y_str(");", 2))));
F.v9341 = yr1200_Fresh(y_str("mf", 2));
v1636 = 1;
yr1132_Emit(yr3292_Join(yr1061_T(y_str("rt_frame ", 9)), F.v9341, yr1061_T(y_str(";", 1))));
yr1026_SB();
yr1037_SA(y_str("if (!RT_TRY(", 12));
yr1044_ST(F.v9341);
yr1037_SA(y_str(")) { RT_POP(", 12));
yr1044_ST(F.v9341);
yr1037_SA(y_str("); ", 3));
if ((((*(yR125 *)y_deref(F.p3669))).f_kind == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
}
yr1044_ST(yr3662_MonitorPath(((*(yR125 *)y_deref(F.p3669))).f_monitor));
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1132_Emit(yr1056_SE());
v1532 = rt_range(rt_add(v1532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1530).p)[y_ix1(v1530, v1532)] = F.v9341;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3674_LeaveMonitor(void) {
struct yf3675 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1607 == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(v1607))).f_monitor == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(v1607))).f_kind == v885)) {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3662_MonitorPath(((*(yR125 *)y_deref(v1607))).f_monitor), yr1061_T(y_str(");", 2))));
} else {
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3662_MonitorPath(((*(yR125 *)y_deref(v1607))).f_monitor), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3679_TerminateStatement(void * a_p3680) {
struct yf3681 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3680 = a_p3680;
if ((((v1607 == ((void *)0))) || ((!(((*(yR125 *)y_deref(v1607))).f_kind == v885))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3680))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3644_AwaitProcesses();
yr3674_LeaveMonitor();
yr3186_PopTo(v1535);
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3685_DeclareSignal(void * a_p3686, rt_int a_p3687) {
struct yf3688 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3686 = a_p3686;
F.p3687 = a_p3687;
if ((v1767 == ((void *)0))) {
yr1178_FailS(F.p3687, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR125 *)y_deref(F.p3686))).f_rep = yr2366_CopyRep(((*(yR125 *)y_deref(F.p3686))).f_rep);
((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3686))).f_rep))).f_monitor = v1767;
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2347_SymPath(F.p3686), yr3292_Join(yr1061_T(y_str(", ", 2)), yr3662_MonitorPath(v1767), yr1061_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3692_DeclareSignalArray(void * a_p3693, rt_int a_p3694) {
struct yf3695 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3693 = a_p3693;
F.p3694 = a_p3694;
if ((v1767 == ((void *)0))) {
yr1178_FailS(F.p3694, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1132_Emit(yr3292_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2427_DescOf(((*(yR125 *)y_deref(F.p3693))).f_rep), yr3292_Join(yr1061_T(y_str(", &", 3)), yr2347_SymPath(F.p3693), yr3292_Join(yr1061_T(y_str(", ", 2)), yr3662_MonitorPath(v1767), yr1061_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3699_DeviceSignal(void * a_p3700, void * a_p3701) {
struct yf3702 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3700 = a_p3700;
F.p3701 = a_p3701;
yr2790_Manifest(F.p3701, &F.v9384, &F.v9386);
if ((!F.v9384)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3701))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1026_SB();
yr1037_SA(y_str("y_device(&", 10));
yr1044_ST(yr2347_SymPath(F.p3700));
yr1037_SA(y_str(", ", 2));
yr1050_SI(F.v9386);
yr1037_SA(y_str(");", 2));
F.v9388 = yr1056_SE();
yr1132_Emit(F.v9388);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3706_Arg(void * a_p3707, rt_int a_p3708) {
struct yf3709 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3707 = a_p3707;
F.p3708 = a_p3708;
F.v9397 = ((*(yR105 *)y_deref(F.p3707))).f_a;
F.v9399 = INT64_C(1);
while ((((!(F.v9397 == ((void *)0)))) && ((F.v9399 < F.p3708)))) {
Y_TICK();
F.v9397 = ((*(yR105 *)y_deref(F.v9397))).f_next;
F.v9399 = rt_range(rt_add(F.v9399, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v9397 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3707))).f_line, ((*(yR105 *)y_deref(F.p3707))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv9404 = F.v9397;
y_use = F.yu; return rv9404; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3713_NArgs(void * a_p3714, rt_int a_p3715) {
struct yf3716 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3714 = a_p3714;
F.p3715 = a_p3715;
if ((!(yr1919_Count(((*(yR105 *)y_deref(F.p3714))).f_a) == F.p3715))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3714))).f_line, ((*(yR105 *)y_deref(F.p3714))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3720_Call1(yarr a_p3722, rt_int a_p3723) {
struct yf3724 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3722 = a_p3722;
F.p3723 = a_p3723;
yr1026_SB();
yr1037_SA(F.p3722);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3723);
yr1037_SA(y_str(")", 1));
{ rt_int rv9414 = yr1056_SE();
y_use = F.yu; return rv9414; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3728_Addr(rt_int a_p3729) {
struct yf3730 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3729 = a_p3729;
{ rt_int rv9419 = yr3292_Join(yr1061_T(y_str("&", 1)), F.p3729, INT64_C(0));
y_use = F.yu; return rv9419; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3734_StdVar(void * a_p3735, rt_int a_p3736, rt_int * a_p3737, void * * a_p3738) {
struct yf3739 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3735 = a_p3735;
F.p3736 = a_p3736;
F.p3737_o = a_p3737;
F.p3738_o = a_p3738;
yr2911_LValue(F.p3735, &F.p3737, &F.p3738);
yr3347_NoteWrite(F.p3735);
if ((((!(F.p3736 == v858))) && ((!(((*(yR110 *)y_deref(F.p3738))).f_kind == F.p3736))))) {
yr1026_SB();
yr1037_SA(y_str("a ", 2));
if ((F.p3736 == v831)) {
yr1037_SA(y_str("file", 4));
} else if ((F.p3736 == v837)) {
yr1037_SA(y_str("signal", 6));
} else if ((F.p3736 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3736 == v828)) {
yr1037_SA(y_str("pointer", 7));
} else {
yr1037_SA(y_str("variable", 8));
}
yr1037_SA(y_str(" is needed here", 15));
F.v9426 = yr1056_SE();
yr1157_Fail(((*(yR105 *)y_deref(F.p3735))).f_line, F.v9426);
}
(*F.p3737_o) = F.p3737;
(*F.p3738_o) = F.p3738;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3743_NumArg(void * a_p3744, rt_int * a_p3745, void * * a_p3746) {
struct yf3747 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3744 = a_p3744;
F.p3745_o = a_p3745;
F.p3746_o = a_p3746;
yr2938_Expr(F.p3744, ((void *)0), &F.p3745, &F.p3746);
if ((!yr2378_IsNumeric(F.p3746))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3744))).f_line, y_str("a number is needed here", 23));
}
(*F.p3745_o) = F.p3745;
(*F.p3746_o) = F.p3746;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3751_IntArg(void * a_p3752) {
struct yf3753 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3752 = a_p3752;
yr2938_Expr(F.p3752, v1342, &F.v9442, &F.v9444);
if ((!(((*(yR110 *)y_deref(F.v9444))).f_kind == v804))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3752))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv9446 = F.v9442;
y_use = F.yu; return rv9446; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3757_CodeInsert(void * a_p3758) {
struct yf3759 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3758 = a_p3758;
F.v9450 = yr3706_Arg(F.p3758, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_9476, 1, lo, hi, &y_d_int); }
y_init(&F.yd_9476, &F.v9478);
if ((!(((*(yR105 *)y_deref(F.v9450))).f_kind == v771))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3758))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v9453 = ((*(yR105 *)y_deref(F.v9450))).f_text;
F.v9463 = ((rt_int *)(v920).p)[y_ix1(v920, F.v9453)];
yr1026_SB();
F.v9459 = INT64_C(1);
while ((F.v9459 <= F.v9463)) {
Y_TICK();
F.v9465 = yr1103_TChar(F.v9453, F.v9459);
if ((F.v9465 == 39)) {
F.v9461 = rt_range(rt_add(F.v9459, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v9461 <= ((rt_int *)(v920).p)[y_ix1(v920, F.v9453)])) && ((!(yr1103_TChar(F.v9453, F.v9461) == 39))))) {
Y_TICK();
F.v9461 = rt_range(rt_add(F.v9461, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v9461 > ((rt_int *)(v920).p)[y_ix1(v920, F.v9453)])) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(((*(yR105 *)y_deref(F.p3758))).f_line, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v9455 = yr1068_Intern(rt_range(rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.v9453)], F.v9459), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v9461, F.v9459)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, yr2773_CharValue(v1346, F.v9455, ((*(yR105 *)y_deref(F.p3758))).f_line))]);
F.v9459 = rt_range(rt_add(F.v9461, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v9465 == 36)) {
F.v9461 = rt_range(rt_add(F.v9459, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v9461 <= F.v9463)) && ((yr1008_IsLetter(yr1103_TChar(F.v9453, F.v9461)) || yr1014_IsDigit(yr1103_TChar(F.v9453, F.v9461)))))) {
Y_TICK();
F.v9461 = rt_range(rt_add(F.v9461, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v9455 = yr1068_Intern(rt_range(rt_add(((rt_int *)(v918).p)[y_ix1(v918, F.v9453)], F.v9459), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v9461, F.v9459)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9467 = yr2248_Find(F.v9455);
if ((F.v9467 == ((void *)0))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(((*(yR105 *)y_deref(F.p3758))).f_line, F.v9455, y_str(" in a code insert is not declared here", 38));
}
F.v9467 = yr2353_Real(F.v9467);
if ((((!(((*(yR125 *)y_deref(F.v9467))).f_kind == v861))) && ((!(((*(yR125 *)y_deref(F.v9467))).f_kind == v864))))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(((*(yR105 *)y_deref(F.p3758))).f_line, F.v9455, y_str(" in a code insert is not a variable or constant", 47));
}
yr1044_ST(yr2919_Paren(yr2347_SymPath(F.v9467)));
F.v9459 = F.v9461;
} else {
yr1031_SC(F.v9465);
F.v9459 = rt_range(rt_add(F.v9459, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v9457 = yr1056_SE();
yr1132_Emit(F.v9457);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3763_ManifestScale(void * a_p3764, void * a_p3765) {
struct yf3766 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3764 = a_p3764;
F.p3765 = a_p3765;
yr2856_ManifestFix(F.p3764, &F.v9517, &F.v9519, &F.v9521);
if (((!F.v9517) || ((F.v9519 <= INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3765))).f_line, ((*(yR105 *)y_deref(F.p3765))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v9523 = yr2366_CopyRep(v1356);
((*(yR110 *)y_deref(F.v9523))).f_abstract = 0;
yr2568_SetScale(F.v9523, F.v9519, F.v9521);
{ void * rv9527 = F.v9523;
y_use = F.yu; return rv9527; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3770_StdCall(rt_int a_p3771, void * a_p3772, rt_int a_p3773, rt_int * a_p3774, void * * a_p3775) {
struct yf3776 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3771 = a_p3771;
F.p3772 = a_p3772;
F.p3773 = a_p3773;
F.p3774_o = a_p3774;
F.p3775_o = a_p3775;
F.p3775 = v1348;
F.p3774 = yr1061_T(y_str("((void)0)", 9));
F.v9565 = (((((((((((((((((F.p3771 == v1384)) || ((F.p3771 == v1387))) || ((F.p3771 == v1390))) || ((F.p3771 == v1393))) || ((F.p3771 == v1396))) || ((F.p3771 == v1402))) || ((F.p3771 == v1411))) || ((F.p3771 == v1417))) || ((F.p3771 == v1420))) || ((F.p3771 == v1444))) || ((F.p3771 == v1447))) || ((F.p3771 == v1456))) || ((F.p3771 == v1459))) || ((F.p3771 == v1462))) || ((F.p3771 == v1465))) || ((F.p3771 == v1474)));
if ((F.p3773 && (!F.v9565))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3773) && F.v9565)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3771 == v1366)) || ((F.p3771 == v1369)))) {
yr3713_NArgs(F.p3772, INT64_C(2));
yr2938_Expr(yr3706_Arg(F.p3772, INT64_C(1)), ((void *)0), &F.v9537, &F.v9547);
if ((!yr2384_IsArrayLike(F.v9547))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(" of something that is not an array", 34));
}
F.v9539 = yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(2)));
yr2790_Manifest(yr3706_Arg(F.p3772, INT64_C(2)), &F.v9561, &F.v9559);
F.p3775 = yr2988_Unbounded(v1342);
if ((F.v9561 && ((((*(yR110 *)y_deref(F.v9547))).f_kind == v822)))) {
if ((((F.v9559 < INT64_C(1))) || ((F.v9559 > ((*(yR110 *)y_deref(F.v9547))).f_nidx)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("no such dimension", 17));
}
F.v9553 = ((*(yR110 *)y_deref(F.v9547))).f_idx;
F.lo9579 = INT64_C(2);
F.hi9580 = F.v9559;
{ rt_int hi9584 = F.hi9580;
for (rt_int i9583 = F.lo9579; i9583 <= hi9584; i9583++) { F.c_9582 = i9583; Y_TICK();
F.v9553 = ((*(yR110 *)y_deref(F.v9553))).f_link;
if (i9583 == hi9584) break;
}}
F.p3775 = F.v9553;
}
if ((F.p3771 == v1366)) {
F.p3774 = yr2994_Call2(y_str("y_low", 5), F.v9537, F.v9539);
} else {
F.p3774 = yr2994_Call2(y_str("y_high", 6), F.v9537, F.v9539);
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((((((F.p3771 == v1372)) || ((F.p3771 == v1375))) || ((F.p3771 == v1378))) || ((F.p3771 == v1381)))) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr2938_Expr(yr3706_Arg(F.p3772, INT64_C(1)), ((void *)0), &F.v9537, &F.v9547);
if ((!yr2372_IsDiscrete(F.v9547))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR110 *)y_deref(F.v9547))).f_kind == v813)) || ((((((*(yR110 *)y_deref(F.v9547))).f_kind == v816)) && (!((*(yR110 *)y_deref(F.v9547))).f_ordered))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR110 *)y_deref(F.v9547))).f_elem == ((void *)0)))) {
F.v9547 = ((*(yR110 *)y_deref(F.v9547))).f_elem;
}
if ((((((F.p3771 == v1378)) || ((F.p3771 == v1381)))) && ((((*(yR110 *)y_deref(F.v9547))).f_kind == v804)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3771 == v1378)) {
F.p3775 = F.v9547;
F.p3774 = yr2502_LoText(F.v9547);
} else if ((F.p3771 == v1381)) {
F.p3775 = F.v9547;
F.p3774 = yr2508_HiText(F.v9547);
} else {
F.p3775 = yr2988_Unbounded(F.v9547);
yr1026_SB();
if ((!(((*(yR110 *)y_deref(F.v9547))).f_kind == v804))) {
yr1037_SA(y_str("rt_range(", 9));
}
if ((F.p3771 == v1372)) {
yr1037_SA(y_str("rt_add(", 7));
} else {
yr1037_SA(y_str("rt_sub(", 7));
}
yr1044_ST(F.v9537);
yr1037_SA(y_str(", 1)", 4));
if ((!(((*(yR110 *)y_deref(F.v9547))).f_kind == v804))) {
yr1037_SA(y_str(", 0, ", 5));
yr1050_SI(rt_range(rt_sub(((*(yR110 *)y_deref(F.v9547))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(")", 1));
}
F.p3774 = yr1056_SE();
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1384)) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v828, &F.v9537, &F.v9547);
if ((((*(yR110 *)y_deref(F.v9547))).f_elem == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR110 *)y_deref(F.v9547))).f_forward, y_str(" is not declared", 16));
}
F.v9553 = ((*(yR110 *)y_deref(F.v9547))).f_elem;
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(F.v9537);
yr1037_SA(y_str(" = y_new(sizeof(", 16));
yr1044_ST(yr2421_CType(F.v9553));
yr1037_SA(y_str("));", 3));
if (yr2396_Deep(F.v9553)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2427_DescOf(F.v9553));
yr1037_SA(y_str(", y_deref(", 10));
yr1044_ST(F.v9537);
yr1037_SA(y_str("));", 3));
}
yr1037_SA(y_str(" })", 3));
F.p3774 = yr1056_SE();
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1462)) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v828, &F.v9537, &F.v9547);
F.p3774 = yr3292_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), F.v9537, yr1061_T(y_str("))", 2)));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1387)) {
yr3713_NArgs(F.p3772, INT64_C(3));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v831, &F.v9537, &F.v9547);
yr2938_Expr(yr3706_Arg(F.p3772, INT64_C(2)), v1346, &F.v9539, &F.v9549);
if ((!yr2390_IsString(F.v9549))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2938_Expr(yr3706_Arg(F.p3772, INT64_C(3)), v1832, &F.v9541, &F.v9551);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3772))).f_line, v1832, F.v9551);
yr1026_SB();
yr1037_SA(y_str("y_open(&", 8));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9539);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9541);
yr1037_SA(y_str(")", 1));
F.p3774 = yr1056_SE();
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((((F.p3771 == v1390)) || ((F.p3771 == v1399)))) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v831, &F.v9537, &F.v9547);
if ((F.p3771 == v1390)) {
F.p3774 = yr3720_Call1(y_str("y_close", 7), yr3728_Addr(F.v9537));
} else {
F.p3775 = v1344;
F.p3774 = yr3720_Call1(y_str("y_check_eof", 11), yr3728_Addr(F.v9537));
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1393)) {
yr3713_NArgs(F.p3772, INT64_C(2));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v831, &F.v9537, &F.v9547);
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(2)), v858, &F.v9539, &F.v9549);
F.v9553 = ((*(yR110 *)y_deref(F.v9547))).f_elem;
yr2454_CheckType(((*(yR105 *)y_deref(F.p3772))).f_line, F.v9553, F.v9549);
if (yr2415_NonAssignable(F.v9553)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2421_CType(F.v9553));
yr1037_SA(y_str(" g; ", 4));
if (yr2396_Deep(F.v9553)) {
yr1037_SA(y_str("y_init(", 7));
yr1044_ST(yr2427_DescOf(F.v9553));
yr1037_SA(y_str(", &g); ", 7));
}
yr1037_SA(y_str("y_get_value(&", 13));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2427_DescOf(F.v9553));
yr1037_SA(y_str(", &g); ", 7));
yr1044_ST(yr2879_StoreText(F.v9539, F.v9549, yr1061_T(y_str("g", 1)), F.v9553, ((*(yR105 *)y_deref(F.p3772))).f_line));
yr1037_SA(y_str(" })", 3));
F.p3774 = yr1056_SE();
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1396)) {
yr3713_NArgs(F.p3772, INT64_C(2));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v831, &F.v9537, &F.v9547);
F.v9553 = ((*(yR110 *)y_deref(F.v9547))).f_elem;
yr2938_Expr(yr3706_Arg(F.p3772, INT64_C(2)), F.v9553, &F.v9539, &F.v9549);
yr2454_CheckType(((*(yR105 *)y_deref(F.p3772))).f_line, F.v9553, F.v9549);
if (yr2415_NonAssignable(F.v9553)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2421_CType(F.v9553));
yr1037_SA(y_str(" pv = ", 6));
yr1044_ST(yr2871_Convert(F.v9539, F.v9553, F.v9549));
yr1037_SA(y_str("; y_put_value(&", 15));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2427_DescOf(F.v9553));
yr1037_SA(y_str(", &pv); })", 10));
F.p3774 = yr1056_SE();
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1402)) {
F.v9555 = yr1919_Count(((*(yR105 *)y_deref(F.p3772))).f_a);
if ((((F.v9555 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v9555, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v858, &F.v9537, &F.v9547);
if (((!((((((*(yR110 *)y_deref(F.v9547))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.v9547))).f_kind == v843))))) || ((!(((*(yR110 *)y_deref(F.v9547))).f_nidx == INT64_C(1)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v9539 = yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(2)));
F.v9545 = yr1200_Fresh(y_str("at", 2));
yr1026_SB();
yr1037_SA(y_str("({ rt_int ", 10));
yr1044_ST(F.v9545);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v9539);
yr1037_SA(y_str(";", 1));
F.p3774 = yr1056_SE();
F.v9557 = INT64_C(3);
while ((F.v9557 < F.v9555)) {
Y_TICK();
yr2938_Expr(yr3706_Arg(F.p3772, F.v9557), ((*(yR110 *)y_deref(F.v9547))).f_elem, &F.v9541, &F.v9551);
if (((!yr2384_IsArrayLike(F.v9551)) || (!yr2439_SameType(((*(yR110 *)y_deref(F.v9547))).f_elem, ((*(yR110 *)y_deref(F.v9551))).f_elem)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v9543 = yr3751_IntArg(yr3706_Arg(F.p3772, rt_range(rt_add(F.v9557, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v9539 = yr3751_IntArg(yr3706_Arg(F.p3772, rt_range(rt_add(F.v9557, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1026_SB();
yr1044_ST(F.p3774);
yr1037_SA(y_str(" { rt_int mi = ", 15));
yr1044_ST(F.v9543);
yr1037_SA(y_str(", mj = ", 7));
yr1044_ST(F.v9539);
yr1037_SA(y_str("; y_move(&", 10));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9545);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9541);
yr1037_SA(y_str(", mi, mj, ", 10));
yr1044_ST(yr2427_DescOf(((*(yR110 *)y_deref(F.v9547))).f_elem));
yr1037_SA(y_str("); if (mj >= mi) ", 17));
yr1044_ST(F.v9545);
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
F.p3774 = yr1056_SE();
F.v9557 = rt_range(rt_add(F.v9557, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3774 = yr3292_Join(F.p3774, yr1061_T(y_str(" })", 3)), INT64_C(0));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((((F.p3771 == v1405)) || ((F.p3771 == v1408)))) {
yr3713_NArgs(F.p3772, INT64_C(2));
F.v9537 = yr3262_Cond(yr3706_Arg(F.p3772, INT64_C(1)));
F.v9539 = yr3262_Cond(yr3706_Arg(F.p3772, INT64_C(2)));
F.p3775 = v1344;
if ((F.p3771 == v1405)) {
F.p3774 = yr3003_Infix(yr2919_Paren(yr3003_Infix(F.v9537, y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr2919_Paren(yr3003_Infix(F.v9539, y_str("!=", 2), yr1061_T(y_str("0", 1)))));
} else {
F.p3774 = yr3003_Infix(yr2919_Paren(yr3003_Infix(F.v9537, y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr2919_Paren(yr3003_Infix(F.v9539, y_str("!=", 2), yr1061_T(y_str("0", 1)))));
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1411)) {
yr3713_NArgs(F.p3772, INT64_C(1));
F.p3774 = yr3720_Call1(y_str("rt_delay", 8), yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(1))));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1414)) {
yr3713_NArgs(F.p3772, INT64_C(0));
F.p3775 = yr2988_Unbounded(v1342);
F.p3774 = yr1061_T(y_str("rt_time()", 9));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if (((((F.p3771 == v1417)) || ((F.p3771 == v1420))) || ((F.p3771 == v1423)))) {
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v837, &F.v9537, &F.v9547);
if ((F.p3771 == v1417)) {
if ((yr1919_Count(((*(yR105 *)y_deref(F.p3772))).f_a) == INT64_C(1))) {
F.v9539 = yr1061_T(y_str("1", 1));
} else {
yr3713_NArgs(F.p3772, INT64_C(2));
F.v9539 = yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(2)));
}
F.p3774 = yr2994_Call2(y_str("y_wait", 6), yr3728_Addr(F.v9537), F.v9539);
} else {
yr3713_NArgs(F.p3772, INT64_C(1));
if ((F.p3771 == v1420)) {
F.p3774 = yr3720_Call1(y_str("y_send", 6), yr3728_Addr(F.v9537));
} else {
F.p3775 = v1344;
F.p3774 = yr3720_Call1(y_str("y_awaited", 9), yr3728_Addr(F.v9537));
}
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if (((((F.p3771 == v1426)) || ((F.p3771 == v1429))) || ((F.p3771 == v1432)))) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3743_NumArg(yr3706_Arg(F.p3772, INT64_C(1)), &F.v9537, &F.v9547);
F.p3775 = yr2988_Unbounded(v1342);
if ((((*(yR110 *)y_deref(F.v9547))).f_kind == v804)) {
F.p3774 = F.v9537;
} else if ((((*(yR110 *)y_deref(F.v9547))).f_kind == v807)) {
yr1026_SB();
if ((F.p3771 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3771 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
}
yr1044_ST(F.v9537);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(((*(yR110 *)y_deref(F.v9547))).f_fsn);
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(((*(yR110 *)y_deref(F.v9547))).f_fsd);
yr1037_SA(y_str("))", 2));
F.p3774 = yr1056_SE();
} else if ((F.p3771 == v1426)) {
F.p3774 = yr3720_Call1(y_str("y_floor", 7), F.v9537);
} else if ((F.p3771 == v1429)) {
F.p3774 = yr3720_Call1(y_str("y_ceiling", 9), F.v9537);
} else {
F.p3774 = yr3720_Call1(y_str("y_near_integer", 14), F.v9537);
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1438)) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3743_NumArg(yr3706_Arg(F.p3772, INT64_C(1)), &F.v9537, &F.v9547);
F.p3775 = v1354;
if ((((*(yR110 *)y_deref(F.v9547))).f_kind == v807)) {
F.p3774 = yr3027_FixToFloat(F.v9537, F.v9547);
} else {
F.p3774 = yr3292_Join(yr1061_T(y_str("((double)(", 10)), F.v9537, yr1061_T(y_str("))", 2)));
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1435)) {
yr3713_NArgs(F.p3772, INT64_C(2));
yr3743_NumArg(yr3706_Arg(F.p3772, INT64_C(1)), &F.v9537, &F.v9547);
F.p3775 = yr3763_ManifestScale(yr3706_Arg(F.p3772, INT64_C(2)), F.p3772);
if ((((*(yR110 *)y_deref(F.v9547))).f_kind == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_fix_of_float(", 15));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(((*(yR110 *)y_deref(F.p3775))).f_fsn);
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(((*(yR110 *)y_deref(F.p3775))).f_fsd);
yr1037_SA(y_str("))", 2));
F.p3774 = yr1056_SE();
} else {
if ((((*(yR110 *)y_deref(F.v9547))).f_kind == v804)) {
F.v9551 = yr2366_CopyRep(v1356);
yr2568_SetScale(F.v9551, INT64_C(1), INT64_C(1));
F.v9537 = yr3292_Join(yr1061_T(y_str("((yfix)(", 8)), F.v9537, yr1061_T(y_str("))", 2)));
} else {
F.v9551 = F.v9547;
}
yr2551_ScaleRatio(F.v9551, F.p3775, &F.v9543, &F.v9545, &F.v9561);
yr1026_SB();
yr1037_SA(y_str("y_fix_near(", 11));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9543);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9545);
yr1037_SA(y_str(")", 1));
F.p3774 = yr1056_SE();
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1441)) {
yr3713_NArgs(F.p3772, INT64_C(3));
yr3743_NumArg(yr3706_Arg(F.p3772, INT64_C(1)), &F.v9537, &F.v9547);
yr3743_NumArg(yr3706_Arg(F.p3772, INT64_C(2)), &F.v9539, &F.v9549);
if ((((!(((*(yR110 *)y_deref(F.v9547))).f_kind == v807))) || ((!(((*(yR110 *)y_deref(F.v9549))).f_kind == v807))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2454_CheckType(((*(yR105 *)y_deref(F.p3772))).f_line, F.v9547, F.v9549);
F.p3775 = yr3763_ManifestScale(yr3706_Arg(F.p3772, INT64_C(3)), F.p3772);
((*(yR110 *)y_deref(F.p3775))).f_tid = ((*(yR110 *)y_deref(F.v9547))).f_tid;
((*(yR110 *)y_deref(F.p3775))).f_tname = ((*(yR110 *)y_deref(F.v9547))).f_tname;
F.v9551 = yr2366_CopyRep(v1356);
yr2568_SetScale(F.v9551, yr2535_MulChk(((*(yR110 *)y_deref(F.v9549))).f_fsn, ((*(yR110 *)y_deref(F.p3775))).f_fsn, ((*(yR105 *)y_deref(F.p3772))).f_line), yr2535_MulChk(((*(yR110 *)y_deref(F.v9549))).f_fsd, ((*(yR110 *)y_deref(F.p3775))).f_fsd, ((*(yR105 *)y_deref(F.p3772))).f_line));
yr2551_ScaleRatio(F.v9547, F.v9551, &F.v9543, &F.v9545, &F.v9561);
yr1026_SB();
yr1037_SA(y_str("y_fix_div(", 10));
yr1044_ST(F.v9537);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9539);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9543);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9545);
yr1037_SA(y_str(")", 1));
F.p3774 = yr1056_SE();
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1450)) {
v1639 = rt_range(rt_add(v1639, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3771 == v1444)) || ((F.p3771 == v1447))) || ((F.p3771 == v1450)))) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v840, &F.v9537, &F.v9547);
if ((F.p3771 == v1444)) {
F.p3774 = yr3720_Call1(y_str("rt_region_enter", 15), yr3728_Addr(F.v9537));
} else if ((F.p3771 == v1447)) {
F.p3774 = yr3720_Call1(y_str("rt_region_leave", 15), yr3728_Addr(F.v9537));
} else {
F.p3775 = v1344;
F.p3774 = yr3720_Call1(y_str("y_cond_claim", 12), yr3728_Addr(F.v9537));
}
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1453)) {
yr3713_NArgs(F.p3772, INT64_C(0));
F.p3775 = yr2988_Unbounded(v1342);
F.p3774 = yr1061_T(y_str("y_self()", 8));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1456)) {
yr3713_NArgs(F.p3772, INT64_C(2));
F.p3774 = yr2994_Call2(y_str("y_change_priority", 17), yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(1))), yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(2))));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1459)) {
yr3713_NArgs(F.p3772, INT64_C(1));
F.p3774 = yr3720_Call1(y_str("y_raise_termination", 19), yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(1))));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1465)) {
yr3713_NArgs(F.p3772, INT64_C(1));
yr3757_CodeInsert(F.p3772);
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((((F.p3771 == v1468)) || ((F.p3771 == v1471)))) {
yr3713_NArgs(F.p3772, INT64_C(1));
F.v9563 = yr3706_Arg(F.p3772, INT64_C(1));
yr2938_Expr(F.v9563, ((void *)0), &F.v9537, &F.v9547);
if ((F.p3771 == v1471)) {
F.p3775 = yr2988_Unbounded(v1342);
F.p3774 = yr2738_ExtentCode(F.v9537, F.v9547);
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
F.p3775 = v1834;
if ((((*(yR110 *)y_deref(F.v9547))).f_kind == v855)) {
F.p3774 = yr3292_Join(yr1061_T(y_str("y_addr((", 8)), F.v9537, yr3292_Join(yr1061_T(y_str(").p, (", 6)), F.v9537, yr1061_T(y_str(").words)", 8))));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.v9563))).f_kind == v777)) {
F.v9535 = yr2248_Find(((*(yR105 *)y_deref(F.v9563))).f_name);
if ((!(F.v9535 == ((void *)0)))) {
if (yr2301_Resolved(F.v9535)) {
F.v9535 = yr2353_Real(F.v9535);
if ((((((((*(yR125 *)y_deref(F.v9535))).f_kind == v861)) || ((((*(yR125 *)y_deref(F.v9535))).f_kind == v864)))) && ((((*(yR125 *)y_deref(F.v9535))).f_at >= INT64_C(0))))) {
F.p3774 = yr3097_Num(((*(yR125 *)y_deref(F.v9535))).f_at);
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
}
}
}
if (((!((((((((*(yR105 *)y_deref(F.v9563))).f_kind == v777)) || ((((*(yR105 *)y_deref(F.v9563))).f_kind == v783))) || ((((*(yR105 *)y_deref(F.v9563))).f_kind == v786))) || ((((*(yR105 *)y_deref(F.v9563))).f_kind == v789))))) || ((((*(yR110 *)y_deref(F.v9547))).f_kind == v846)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
}
F.p3774 = yr3292_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), F.v9537, yr3292_Join(yr1061_T(y_str("), ", 3)), yr2738_ExtentCode(F.v9537, F.v9547), yr1061_T(y_str(")", 1))));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1474)) {
yr3713_NArgs(F.p3772, INT64_C(2));
yr3734_StdVar(yr3706_Arg(F.p3772, INT64_C(1)), v828, &F.v9537, &F.v9547);
F.v9539 = yr3751_IntArg(yr3706_Arg(F.p3772, INT64_C(2)));
F.p3774 = yr3292_Join(yr1061_T(y_str("(", 1)), F.v9537, yr3292_Join(yr1061_T(y_str(" = y_cell(y_mem_ptr(", 20)), F.v9539, yr1061_T(y_str(")))", 3))));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
}
if ((F.p3771 == v1477)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3772))).f_line, y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(" is not translated", 18));
(*F.p3774_o) = F.p3774;
(*F.p3775_o) = F.p3775;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3780_StdRep(yarr a_p3782, void * a_p3783) {
struct yf3784 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3782 = a_p3782;
F.p3783 = a_p3783;
F.v9788 = yr2218_NewSym(v870, yr1081_N(F.p3782));
((*(yR125 *)y_deref(F.v9788))).f_rep = F.p3783;
yr2320_Define(F.v9788, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3788_StdOp(yarr a_p3790, rt_int a_p3791) {
struct yf3792 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3790 = a_p3790;
F.p3791 = a_p3791;
F.v9794 = yr2218_NewSym(v891, yr1081_N(F.p3790));
((*(yR125 *)y_deref(F.v9794))).f_mval = F.p3791;
yr2320_Define(F.v9794, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3796_LitList(yarr a_p3798, yarr a_p3799, yarr a_p3800, rt_int a_p3801) {
struct yf3802 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3798 = a_p3798;
F.p3799 = a_p3799;
F.p3800 = a_p3800;
F.p3801 = a_p3801;
F.v9802 = ((void *)0);
F.v9804 = ((void *)0);
F.v9806 = ((void *)0);
F.v9806 = yr1904_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(F.v9806))).f_name = yr1081_N(F.p3798);
yr1911_Link(&F.v9802, &F.v9804, F.v9806);
F.v9806 = yr1904_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(F.v9806))).f_name = yr1081_N(F.p3799);
yr1911_Link(&F.v9802, &F.v9804, F.v9806);
if (F.p3801) {
F.v9806 = yr1904_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(F.v9806))).f_name = yr1081_N(F.p3800);
yr1911_Link(&F.v9802, &F.v9804, F.v9806);
}
{ void * rv9810 = F.v9802;
y_use = F.yu; return rv9810; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3806_Abstract(rt_int a_p3807, yarr a_p3809) {
struct yf3810 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3807 = a_p3807;
F.p3809 = a_p3809;
F.v9815 = yr2359_NewRep(F.p3807, yr1081_N(F.p3809));
((*(yR110 *)y_deref(F.v9815))).f_abstract = 1;
{ void * rv9817 = F.v9815;
y_use = F.yu; return rv9817; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3814_Predefine(void) {
struct yf3815 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2225_OpenScope(0);
((void * *)(v1778).p)[y_ix1(v1778, v1273)] = ((void *)0);
v1342 = yr3806_Abstract(v804, y_str("INTEGER", 7));
v1356 = yr3806_Abstract(v807, y_str("FIXED", 5));
v1354 = yr3806_Abstract(v810, y_str("FLOATING", 8));
v1358 = yr2359_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
v1360 = yr2359_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
v1348 = yr2359_NewRep(v852, yr1081_N(y_str("no value", 8)));
v1362 = yr2359_NewRep(v858, yr1081_N(y_str("any", 3)));
v1344 = yr2359_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
((*(yR110 *)y_deref(v1344))).f_lits = yr3796_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR110 *)y_deref(v1344))).f_nlits = INT64_C(2);
yr2589_SetRange(v1344, INT64_C(0), INT64_C(1));
yr2583_DefineLits(v1344);
v1346 = yr2359_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
((*(yR110 *)y_deref(v1346))).f_ordered = 1;
((*(yR110 *)y_deref(v1346))).f_nlits = INT64_C(128);
yr2589_SetRange(v1346, INT64_C(0), INT64_C(127));
v1832 = yr2359_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
((*(yR110 *)y_deref(v1832))).f_lits = yr3796_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR110 *)y_deref(v1832))).f_nlits = INT64_C(3);
yr2589_SetRange(v1832, INT64_C(0), INT64_C(2));
yr2583_DefineLits(v1832);
yr3780_StdRep(y_str("INTEGER", 7), v1342);
yr3780_StdRep(y_str("FIXED", 5), v1356);
yr3780_StdRep(y_str("FLOATING", 8), v1354);
yr3780_StdRep(y_str("BOOLEAN", 7), v1344);
yr3780_StdRep(y_str("SIGNAL", 6), v1358);
yr3780_StdRep(y_str("SEMAPHORE", 9), v1360);
yr3780_StdRep(y_str("ASCII", 5), v1346);
yr3780_StdRep(y_str("STANDARD_ALPHABET", 17), v1346);
yr3780_StdRep(y_str("OPEN_MODE", 9), v1832);
v1834 = yr2359_NewRep(v804, ((*(yR110 *)y_deref(v1342))).f_tid);
((*(yR110 *)y_deref(v1834))).f_tname = yr1081_N(y_str("ADDRESS", 7));
yr2589_SetRange(v1834, INT64_C(0), INT64_C(16777215));
v1836 = yr2359_NewRep(v804, ((*(yR110 *)y_deref(v1342))).f_tid);
((*(yR110 *)y_deref(v1836))).f_tname = yr1081_N(y_str("WORD", 4));
yr2589_SetRange(v1836, INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3780_StdRep(y_str("ADDRESS", 7), v1834);
yr3780_StdRep(y_str("WORD", 4), v1836);
yr3788_StdOp(y_str("MAKE_POINTER", 12), v1474);
yr3788_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
yr3788_StdOp(y_str("LOW", 3), v1366);
yr3788_StdOp(y_str("HIGH", 4), v1369);
yr3788_StdOp(y_str("SUCC", 4), v1372);
yr3788_StdOp(y_str("PRED", 4), v1375);
yr3788_StdOp(y_str("FIRST", 5), v1378);
yr3788_StdOp(y_str("LAST", 4), v1381);
yr3788_StdOp(y_str("NEW", 3), v1384);
yr3788_StdOp(y_str("OPEN", 4), v1387);
yr3788_StdOp(y_str("CLOSE", 5), v1390);
yr3788_StdOp(y_str("GET", 3), v1393);
yr3788_StdOp(y_str("PUT", 3), v1396);
yr3788_StdOp(y_str("CHECK_EOF", 9), v1399);
yr3788_StdOp(y_str("MOVE", 4), v1402);
yr3788_StdOp(y_str("AND_LONG", 8), v1405);
yr3788_StdOp(y_str("OR_LONG", 7), v1408);
yr3788_StdOp(y_str("DELAY", 5), v1411);
yr3788_StdOp(y_str("CLOCK_TIME", 10), v1414);
yr3788_StdOp(y_str("WAIT", 4), v1417);
yr3788_StdOp(y_str("SEND", 4), v1420);
yr3788_StdOp(y_str("AWAITED", 7), v1423);
yr3788_StdOp(y_str("FLOOR", 5), v1426);
yr3788_StdOp(y_str("CEILING", 7), v1429);
yr3788_StdOp(y_str("NEAR_INTEGER", 12), v1432);
yr3788_StdOp(y_str("NEAR_FIXED", 10), v1435);
yr3788_StdOp(y_str("NEAR_FLOATING", 13), v1438);
yr3788_StdOp(y_str("FIXED_DIV", 9), v1441);
yr3788_StdOp(y_str("CLAIM", 5), v1444);
yr3788_StdOp(y_str("RELEASE", 7), v1447);
yr3788_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
yr3788_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
yr3788_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
yr3788_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
yr3788_StdOp(y_str("FREE_POINTER", 12), v1462);
yr3788_StdOp(y_str("C_CODE_INSERT", 13), v1465);
yr3788_StdOp(y_str("ADDR", 4), v1468);
yr3788_StdOp(y_str("EXTENT", 6), v1471);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3819_Translate(void) {
struct yf3820 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9905 = v1838;
yr2225_OpenScope(0);
((void * *)(v1778).p)[y_ix1(v1778, v1273)] = ((void *)0);
v1279 = INT64_C(0);
((void * *)(v1302).p)[y_ix1(v1302, v1273)] = v1838;
while ((!(F.v9905 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v9905))).f_ival == INT64_C(0))) {
yr3620_CompileModule(F.v9905);
}
F.v9905 = ((*(yR105 *)y_deref(F.v9905))).f_next;
}
yr3583_ResolveLater(v1273);
yr3499_RunDeferred(INT64_C(0), INT64_C(0));
yr3388_CheckEffects();
yr3644_AwaitProcesses();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3824_WriteProgram(void) {
struct yf3825 F;
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
v1480 = INT64_C(0);
v1483 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1492, 1, lo, hi, &y_d_int); }
y_init(&yd_1492, &v1494);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1503, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1503, &v1505);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1514, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1514, &v1516);
v1518 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1528, 1, lo, hi, &y_d_int); }
y_init(&yd_1528, &v1530);
v1532 = INT64_C(0);
v1535 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1545, 1, lo, hi, &y_d_int); }
y_init(&yd_1545, &v1547);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1556, 1, lo, hi, &y_d_int); }
y_init(&yd_1556, &v1558);
v1560 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1570, 1, lo, hi, &y_d_int); }
y_init(&yd_1570, &v1572);
v1574 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1584, 1, lo, hi, &y_d_int); }
y_init(&yd_1584, &v1586);
y_init(&yd_1584, &v1588);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1597, 1, lo, hi, &y_d_int); }
y_init(&yd_1597, &v1599);
v1601 = INT64_C(0);
v1604 = INT64_C(0);
v1607 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1616, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1616, &v1618);
y_init(&yd_1616, &v1620);
v1622 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1632, 1, lo, hi, &y_d_int); }
y_init(&yd_1632, &v1634);
v1636 = 0;
v1639 = INT64_C(0);
v1642 = ((void *)0);
v1644 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1653, 1, lo, hi, &y_d_int); }
y_init(&yd_1653, &v1655);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1664, 1, lo, hi, &y_d_int); }
y_init(&yd_1664, &v1666);
v1668 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1678, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1678, &v1680);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1689, 1, lo, hi, &y_d_int); }
y_init(&yd_1689, &v1691);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1700, 1, lo, hi, &y_d_int); }
y_init(&yd_1700, &v1702);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1711, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1711, &v1713);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1722, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1722, &v1724);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1733, 1, lo, hi, &y_d_int); }
y_init(&yd_1733, &v1735);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1744, 1, lo, hi, &y_d_int); }
y_init(&yd_1744, &v1746);
y_init(&yd_1744, &v1748);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1757, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1757, &v1759);
v1761 = INT64_C(0);
v1764 = INT64_C(0);
v1767 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1776, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1776, &v1778);
v1780 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1790, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1790, &v1792);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1801, 1, lo, hi, &y_d_int); }
y_init(&yd_1801, &v1803);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1812, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1812, &v1814);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1823, 1, lo, hi, &y_d_int); }
y_init(&yd_1823, &v1825);
y_init(&yd_1823, &v1827);
v1829 = INT64_C(0);
/* yellowc */
yr1003_InitChars();
yr1840_InitWords();
v1254 = yr1081_N(y_str("FROM", 4));
v1257 = yr1081_N(y_str("DIMENSION", 9));
v1480 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v911, y_str("OUTPUT", 6), 1);
y_open(&v994, y_str("ERROR", 5), 1);
yr1845_ReadSource();
yr1899_Lex();
v1838 = yr2213_ParseProgram();
yr3814_Predefine();
yr3819_Translate();
yr3824_WriteProgram();
y_close(&v911);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
