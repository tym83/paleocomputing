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
struct yf988;
struct yf994;
struct yf1000;
struct yf1006;
struct yf1011;
struct yf1017;
struct yf1024;
struct yf1030;
struct yf1036;
struct yf1041;
struct yf1048;
struct yf1055;
struct yf1061;
struct yf1068;
struct yf1075;
struct yf1083;
struct yf1090;
struct yf1097;
struct yf1105;
struct yf1112;
struct yf1118;
struct yf1125;
struct yf1131;
struct yf1137;
struct yf1144;
struct yf1151;
struct yf1158;
struct yf1166;
struct yf1175;
struct yf1180;
struct yf1187;
struct yf1786;
struct yf1791;
struct yf1798;
struct yf1804;
struct yf1809;
struct yf1815;
struct yf1822;
struct yf1829;
struct yf1835;
struct yf1840;
struct yf1845;
struct yf1852;
struct yf1860;
struct yf1866;
struct yf1871;
struct yf1876;
struct yf1881;
struct yf1888;
struct yf1894;
struct yf1900;
struct yf1905;
struct yf1911;
struct yf1916;
struct yf1922;
struct yf1927;
struct yf1934;
struct yf1939;
struct yf1945;
struct yf1950;
struct yf1955;
struct yf1960;
struct yf1965;
struct yf1970;
struct yf1975;
struct yf1981;
struct yf1987;
struct yf1994;
struct yf1999;
struct yf2005;
struct yf2010;
struct yf2016;
struct yf2021;
struct yf2026;
struct yf2031;
struct yf2036;
struct yf2041;
struct yf2046;
struct yf2051;
struct yf2057;
struct yf2062;
struct yf2067;
struct yf2073;
struct yf2079;
struct yf2085;
struct yf2091;
struct yf2097;
struct yf2106;
struct yf2113;
struct yf2118;
struct yf2123;
struct yf2128;
struct yf2134;
struct yf2139;
struct yf2144;
struct yf2149;
struct yf2154;
struct yf2159;
struct yf2166;
struct yf2172;
struct yf2178;
struct yf2183;
struct yf2189;
struct yf2195;
struct yf2201;
struct yf2208;
struct yf2214;
struct yf2221;
struct yf2228;
struct yf2235;
struct yf2241;
struct yf2247;
struct yf2254;
struct yf2261;
struct yf2268;
struct yf2274;
struct yf2281;
struct yf2287;
struct yf2293;
struct yf2300;
struct yf2306;
struct yf2312;
struct yf2318;
struct yf2324;
struct yf2330;
struct yf2336;
struct yf2343;
struct yf2349;
struct yf2355;
struct yf2361;
struct yf2367;
struct yf2373;
struct yf2380;
struct yf2388;
struct yf2396;
struct yf2403;
struct yf2409;
struct yf2415;
struct yf2422;
struct yf2428;
struct yf2436;
struct yf2442;
struct yf2448;
struct yf2456;
struct yf2462;
struct yf2469;
struct yf2477;
struct yf2485;
struct yf2495;
struct yf2502;
struct yf2510;
struct yf2517;
struct yf2523;
struct yf2531;
struct yf2537;
struct yf2545;
struct yf2552;
struct yf2560;
struct yf2567;
struct yf2572;
struct yf2578;
struct yf2591;
struct yf2602;
struct yf2610;
struct yf2617;
struct yf2624;
struct yf2631;
struct yf2639;
struct yf2648;
struct yf2656;
struct yf2664;
struct yf2671;
struct yf2679;
struct yf2687;
struct yf2695;
struct yf2706;
struct yf2714;
struct yf2723;
struct yf2729;
struct yf2737;
struct yf2747;
struct yf2757;
struct yf2763;
struct yf2769;
struct yf2777;
struct yf2783;
struct yf2790;
struct yf2796;
struct yf2805;
struct yf2813;
struct yf2822;
struct yf2830;
struct yf2840;
struct yf2846;
struct yf2855;
struct yf2864;
struct yf2873;
struct yf2879;
struct yf2886;
struct yf2895;
struct yf2902;
struct yf2910;
struct yf2916;
struct yf2925;
struct yf2933;
struct yf2940;
struct yf2949;
struct yf2955;
struct yf2966;
struct yf2973;
struct yf2983;
struct yf2993;
struct yf3003;
struct yf3012;
struct yf3020;
struct yf3028;
struct yf3038;
struct yf3044;
struct yf3049;
struct yf3055;
struct yf3061;
struct yf3068;
struct yf3076;
struct yf3083;
struct yf3089;
struct yf3095;
struct yf3101;
struct yf3108;
struct yf3114;
struct yf3120;
struct yf3127;
struct yf3132;
struct yf3138;
struct yf3144;
struct yf3152;
struct yf3158;
struct yf3164;
struct yf3170;
struct yf3176;
struct yf3182;
struct yf3188;
struct yf3194;
struct yf3200;
struct yf3207;
struct yf3214;
struct yf3220;
struct yf3228;
struct yf3234;
struct yf3241;
struct yf3248;
struct yf3257;
struct yf3264;
struct yf3270;
struct yf3276;
struct yf3282;
struct yf3289;
struct yf3297;
struct yf3304;
struct yf3312;
struct yf3318;
struct yf3327;
struct yf3334;
struct yf3341;
struct yf3347;
struct yf3355;
struct yf3363;
struct yf3370;
struct yf3376;
struct yf3382;
struct yf3388;
struct yf3394;
struct yf3399;
struct yf3406;
struct yf3412;
struct yf3418;
struct yf3423;
struct yf3429;
struct yf3436;
struct yf3443;
struct yf3450;
struct yf3457;
struct yf3464;
struct yf3472;
struct yf3478;
struct yf3487;
struct yf3495;
struct yf3501;
struct yf3507;
struct yf3514;
struct yf3524;
struct yf3532;
struct yf3540;
struct yf3550;
struct yf3558;
struct yf3563;
struct yf3568;
struct yf3573;
struct yR99 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR104 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; };
struct yR109 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR114 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR119 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; };
struct yR124 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR129 { rt_int f_t; void * f_next; };
struct yR134 { void * f_head; void * f_tail; };
struct yf988 { void *up;
rt_int v3578;
rt_int c_3581;
};
struct yf994 { void *up;
unsigned char p993;
};
struct yf1000 { void *up;
unsigned char p999;
};
struct yf1006 { void *up;
unsigned char p1005;
};
struct yf1011 { void *up;
};
struct yf1017 { void *up;
unsigned char p1016;
};
struct yf1024 { void *up;
yarr p1023;
rt_int lo3617;
rt_int hi3618;
rt_int c_3620;
};
struct yf1030 { void *up;
rt_int p1029;
rt_int v3626;
};
struct yf1036 { void *up;
rt_int p1035;
ydesc yd_3641;
yarr v3643;
rt_int v3645;
rt_int v3648;
};
struct yf1041 { void *up;
rt_int v3667;
rt_int lo3678;
rt_int hi3679;
rt_int c_3681;
};
struct yf1048 { void *up;
yarr p1047;
};
struct yf1055 { void *up;
rt_int p1053;
rt_int p1054;
rt_int v3692;
rt_int v3695;
rt_int v3697;
rt_int lo3702;
rt_int hi3703;
rt_int c_3705;
rt_int lo3724;
rt_int hi3725;
rt_int c_3727;
};
struct yf1061 { void *up;
rt_int p1060;
};
struct yf1068 { void *up;
yarr p1067;
};
struct yf1075 { void *up;
rt_int p1073;
rt_int p1074;
rt_int lo3756;
rt_int hi3757;
rt_int c_3759;
};
struct yf1083 { void *up;
rt_int p1080;
yarr p1082;
rt_int v3772;
rt_int lo3788;
rt_int hi3789;
rt_int c_3791;
};
struct yf1090 { void *up;
rt_int p1088;
rt_int p1089;
};
struct yf1097 { void *up;
yR134 * p1095;
rt_int p1096;
void * v3812;
};
struct yf1105 { void *up;
yR134 * p1102;
yarr p1104;
};
struct yf1112 { void *up;
yR134 * p1110;
yR134 * p1111;
};
struct yf1118 { void *up;
rt_int p1117;
};
struct yf1125 { void *up;
yarr p1124;
};
struct yf1131 { void *up;
rt_int p1130;
rt_int v3826;
};
struct yf1137 { void *up;
yR134 p1136;
void * v3833;
};
struct yf1144 { void *up;
rt_int p1142;
rt_int p1143;
rt_int v3839;
};
struct yf1151 { void *up;
rt_int p1149;
rt_int p1150;
rt_int v3849;
};
struct yf1158 { void *up;
yfile * * p1156;
rt_int p1157;
rt_int v3859;
};
struct yf1166 { void *up;
rt_int p1163;
yarr p1165;
};
struct yf1175 { void *up;
rt_int p1171;
rt_int p1172;
yarr p1174;
rt_int v3871;
};
struct yf1180 { void *up;
};
struct yf1187 { void *up;
yarr p1186;
rt_int v3879;
};
struct yf1786 { void *up;
rt_int v3883;
rt_int v3885;
rt_int v3887;
rt_int lo3904;
rt_int hi3905;
rt_int c_3907;
};
struct yf1791 { void *up;
unsigned char v3916;
};
struct yf1798 { void *up;
rt_int p1796;
rt_int p1797;
};
struct yf1804 { void *up;
rt_int p1803;
};
struct yf1809 { void *up;
rt_int v3933;
rt_int v3935;
};
struct yf1815 { void *up;
unsigned char p1814;
};
struct yf1822 { void *up;
yarr p1821;
};
struct yf1829 { void *up;
rt_int p1827;
rt_int p1828;
rt_int v3965;
};
struct yf1835 { void *up;
rt_int p1834;
rt_int v3975;
rt_int v3978;
rt_int v3980;
rt_int v3982;
rt_int v3984;
rt_int v3986;
rt_int v3989;
rt_int v3992;
rt_int v3995;
rt_int v3998;
rt_int v4001;
rt_int v4004;
rt_int v4007;
rt_int lo4045;
rt_int hi4046;
rt_int c_4048;
rt_int lo4077;
rt_int hi4078;
rt_int c_4080;
rt_int lo4087;
rt_int hi4088;
rt_int c_4090;
};
struct yf1840 { void *up;
rt_int v4101;
rt_int v4103;
rt_int v4105;
rt_int v4107;
};
struct yf1845 { void *up;
unsigned char v4136;
rt_int v4138;
rt_int v4140;
rt_int v4142;
rt_int v4144;
rt_int v4146;
rt_int v4148;
rt_int v4150;
rt_int lo4225;
rt_int hi4226;
rt_int c_4228;
};
struct yf1852 { void *up;
rt_int p1850;
rt_int p1851;
void * v4244;
};
struct yf1860 { void *up;
void * * p1857;
void * * p1858;
void * p1859;
};
struct yf1866 { void *up;
void * p1865;
rt_int v4257;
void * v4260;
};
struct yf1871 { void *up;
};
struct yf1876 { void *up;
};
struct yf1881 { void *up;
};
struct yf1888 { void *up;
rt_int p1886;
rt_int p1887;
rt_int v4274;
};
struct yf1894 { void *up;
rt_int p1893;
};
struct yf1900 { void *up;
rt_int p1899;
};
struct yf1905 { void *up;
};
struct yf1911 { void *up;
rt_int p1910;
};
struct yf1916 { void *up;
rt_int v4297;
};
struct yf1922 { void *up;
rt_int p1921;
rt_int v4307;
};
struct yf1927 { void *up;
rt_int v4312;
};
struct yf1934 { void *up;
rt_int p1932;
rt_int p1933;
rt_int v4319;
};
struct yf1939 { void *up;
rt_int v4323;
};
struct yf1945 { void *up;
rt_int p1944;
void * v4333;
};
struct yf1950 { void *up;
void * v4340;
};
struct yf1955 { void *up;
void * v4345;
void * v4347;
void * v4349;
void * v4351;
rt_int v4353;
};
struct yf1960 { void *up;
rt_int v4362;
};
struct yf1965 { void *up;
void * v4368;
void * v4370;
void * v4372;
void * v4374;
};
struct yf1970 { void *up;
void * v4379;
void * v4381;
void * v4383;
void * v4385;
void * v4387;
};
struct yf1975 { void *up;
void * v4395;
void * v4397;
void * v4399;
};
struct yf1981 { void *up;
rt_int p1980;
void * v4405;
};
struct yf1987 { void *up;
rt_int p1986;
};
struct yf1994 { void *up;
void * * p1992;
void * * p1993;
rt_int v4426;
void * v4428;
void * v4430;
void * v4432;
};
struct yf1999 { void *up;
void * v4436;
void * v4438;
void * v4440;
rt_int v4442;
rt_int v4444;
rt_int v4446;
};
struct yf2005 { void *up;
void * p2004;
void * v4462;
void * v4464;
rt_int v4466;
};
struct yf2010 { void *up;
void * v4472;
};
struct yf2016 { void *up;
rt_int p2015;
rt_int v4484;
};
struct yf2021 { void *up;
rt_int v4492;
void * v4494;
};
struct yf2026 { void *up;
void * v4503;
void * v4505;
};
struct yf2031 { void *up;
void * v4509;
void * v4511;
void * v4513;
};
struct yf2036 { void *up;
void * v4518;
void * v4520;
void * v4522;
rt_int v4524;
};
struct yf2041 { void *up;
void * v4531;
void * v4533;
void * v4535;
void * v4537;
void * v4539;
void * v4541;
rt_int v4543;
rt_int v4545;
};
struct yf2046 { void *up;
void * v4562;
};
struct yf2051 { void *up;
rt_int v4567;
};
struct yf2057 { void *up;
rt_int p2056;
void * v4576;
void * v4578;
void * v4580;
rt_int v4582;
};
struct yf2062 { void *up;
void * v4590;
void * v4592;
void * v4594;
void * v4596;
void * v4598;
void * v4600;
rt_int v4602;
rt_int v4604;
};
struct yf2067 { void *up;
};
struct yf2073 { void *up;
rt_int p2072;
};
struct yf2079 { void *up;
rt_int p2078;
};
struct yf2085 { void *up;
rt_int p2084;
};
struct yf2091 { void *up;
rt_int p2090;
};
struct yf2097 { void *up;
rt_int p2096;
};
struct yf2106 { void *up;
rt_int p2102;
void * p2103;
void * p2104;
rt_int p2105;
void * v4658;
};
struct yf2113 { void *up;
rt_int p2111;
rt_int p2112;
rt_int v4664;
};
struct yf2118 { void *up;
void * v4668;
rt_int v4670;
rt_int v4672;
};
struct yf2123 { void *up;
void * v4676;
void * v4678;
rt_int v4680;
rt_int v4682;
};
struct yf2128 { void *up;
void * v4688;
rt_int v4690;
rt_int v4692;
};
struct yf2134 { void *up;
rt_int p2133;
rt_int v4698;
};
struct yf2139 { void *up;
void * v4703;
rt_int v4705;
rt_int v4707;
};
struct yf2144 { void *up;
void * v4711;
rt_int v4713;
rt_int v4715;
};
struct yf2149 { void *up;
void * v4736;
void * v4738;
void * v4740;
rt_int v4742;
};
struct yf2154 { void *up;
};
struct yf2159 { void *up;
void * v4749;
void * v4751;
};
struct yf2166 { void *up;
rt_int p2164;
rt_int p2165;
void * v4758;
};
struct yf2172 { void *up;
rt_int p2171;
void * v4773;
};
struct yf2178 { void *up;
void * p2177;
void * v4780;
rt_int v4782;
rt_int v4785;
};
struct yf2183 { void *up;
void * v4797;
void * v4799;
void * v4801;
rt_int v4803;
};
struct yf2189 { void *up;
void * p2188;
};
struct yf2195 { void *up;
rt_int p2194;
void * v4815;
};
struct yf2201 { void *up;
rt_int p2200;
void * v4823;
};
struct yf2208 { void *up;
rt_int p2206;
rt_int p2207;
void * v4832;
void * v4834;
rt_int lo4840;
rt_int hi4841;
rt_int c_4843;
};
struct yf2214 { void *up;
rt_int p2213;
};
struct yf2221 { void *up;
void * p2219;
rt_int p2220;
void * v4856;
void * v4858;
rt_int v4860;
};
struct yf2228 { void *up;
void * p2226;
rt_int p2227;
void * v4876;
};
struct yf2235 { void *up;
void * p2233;
rt_int p2234;
void * v4901;
};
struct yf2241 { void *up;
void * p2240;
};
struct yf2247 { void *up;
void * p2246;
void * v4916;
};
struct yf2254 { void *up;
rt_int p2252;
void * p2253;
void * v4925;
};
struct yf2261 { void *up;
void * p2259;
rt_int p2260;
void * v4934;
rt_int v4936;
};
struct yf2268 { void *up;
rt_int p2266;
rt_int p2267;
rt_int v4944;
};
struct yf2274 { void *up;
rt_int p2273;
rt_int v4959;
};
struct yf2281 { void *up;
rt_int p2279;
rt_int p2280;
rt_int v4974;
};
struct yf2287 { void *up;
void * p2286;
rt_int v4983;
};
struct yf2293 { void *up;
void * p2292;
void * v4991;
};
struct yf2300 { void *up;
rt_int p2298;
rt_int p2299;
void * v4998;
};
struct yf2306 { void *up;
void * p2305;
void * v5026;
};
struct yf2312 { void *up;
void * p2311;
};
struct yf2318 { void *up;
void * p2317;
};
struct yf2324 { void *up;
void * p2323;
};
struct yf2330 { void *up;
void * p2329;
};
struct yf2336 { void *up;
void * p2335;
};
struct yf2343 { void *up;
void * p2341;
rt_int p2342;
void * v5057;
};
struct yf2349 { void *up;
void * p2348;
};
struct yf2355 { void *up;
void * p2354;
rt_int v5069;
};
struct yf2361 { void *up;
void * p2360;
rt_int v5076;
};
struct yf2367 { void *up;
void * p2366;
rt_int v5103;
};
struct yf2373 { void *up;
void * p2372;
};
struct yf2380 { void *up;
void * p2378;
void * p2379;
};
struct yf2388 { void *up;
rt_int p2385;
void * p2386;
void * p2387;
rt_int v5152;
};
struct yf2396 { void *up;
rt_int p2393;
void * p2394;
void * p2395;
};
struct yf2403 { void *up;
void * p2401;
rt_int p2402;
};
struct yf2409 { void *up;
void * p2408;
rt_int v5167;
void * v5169;
void * v5171;
};
struct yf2415 { void *up;
void * p2414;
};
struct yf2422 { void *up;
void * p2420;
void * p2421;
};
struct yf2428 { void *up;
void * p2427;
};
struct yf2436 { void *up;
void * p2433;
yarr p2435;
rt_int v5217;
rt_int v5219;
};
struct yf2442 { void *up;
void * p2441;
};
struct yf2448 { void *up;
void * p2447;
};
struct yf2456 { void *up;
void * p2453;
void * p2454;
void * p2455;
void * v5245;
};
struct yf2462 { void *up;
void * p2461;
};
struct yf2469 { void *up;
rt_int p2467;
rt_int p2468;
rt_int v5257;
rt_int v5259;
rt_int v5261;
};
struct yf2477 { void *up;
rt_int p2474;
rt_int p2475;
rt_int p2476;
rt_int v5277;
rt_int v5279;
};
struct yf2485 { void *up;
rt_int p2482;
rt_int p2483;
rt_int p2484;
rt_int v5294;
rt_int lo5299;
rt_int hi5300;
rt_int c_5302;
};
struct yf2495 { void *up;
void * p2490;
void * p2491;
rt_int p2492;
rt_int * p2492_o;
rt_int p2493;
rt_int * p2493_o;
rt_int p2494;
rt_int * p2494_o;
rt_int v5313;
rt_int v5315;
rt_int v5317;
rt_int v5319;
rt_int v5321;
rt_int v5323;
};
struct yf2502 { void *up;
rt_int p2500;
rt_int p2501;
};
struct yf2510 { void *up;
void * p2507;
rt_int p2508;
rt_int p2509;
rt_int v5352;
};
struct yf2517 { void *up;
void * p2515;
void * p2516;
rt_int v5362;
rt_int v5364;
rt_int v5366;
rt_int v5368;
void * v5370;
void * v5372;
rt_int v5374;
rt_int v5376;
rt_int v5378;
rt_int v5380;
rt_int v5382;
};
struct yf2523 { void *up;
void * p2522;
void * v5414;
void * v5416;
rt_int v5418;
};
struct yf2531 { void *up;
void * p2528;
rt_int p2529;
rt_int p2530;
};
struct yf2537 { void *up;
rt_int p2536;
rt_int v5433;
};
struct yf2545 { void *up;
void * p2542;
rt_int p2543;
rt_int p2544;
void * v5443;
void * v5445;
};
struct yf2552 { void *up;
void * p2550;
void * p2551;
void * v5453;
void * v5455;
void * v5457;
void * v5459;
void * v5461;
void * v5463;
};
struct yf2560 { void *up;
void * p2557;
rt_int p2558;
rt_int p2559;
void * v5492;
void * v5494;
void * v5496;
void * v5498;
void * v5500;
rt_int v5502;
void * v5504;
rt_int v5506;
rt_int v5508;
};
struct yf2567 { void *up;
rt_int p2565;
void * p2566;
void * v5555;
void * v5557;
};
struct yf2572 { void *up;
void * v5561;
};
struct yf2578 { void *up;
void * p2577;
void * v5566;
rt_int v5568;
rt_int v5570;
};
struct yf2591 { void *up;
void * p2583;
void * * p2584;
rt_int p2585;
void * p2586;
rt_int p2587;
rt_int p2588;
void * p2589;
rt_int p2590;
void * v5595;
};
struct yf2602 { void *up;
void * p2596;
void * * p2597;
void * p2598;
rt_int p2599;
void * p2600;
rt_int p2601;
void * v5607;
void * v5609;
void * v5611;
};
struct yf2610 { void *up;
void * p2607;
void * p2608;
rt_int p2609;
void * v5618;
void * v5620;
void * v5622;
void * v5624;
rt_int v5626;
void * v5629;
rt_int v5631;
rt_int v5633;
};
struct yf2617 { void *up;
void * p2615;
rt_int p2616;
void * v5680;
};
struct yf2624 { void *up;
void * p2622;
rt_int p2623;
void * v5687;
rt_int v5689;
rt_int v5691;
rt_int v5693;
rt_int v5695;
rt_int lo5704;
rt_int hi5705;
rt_int c_5707;
};
struct yf2631 { void *up;
void * p2629;
void * p2630;
void * v5746;
void * v5748;
void * v5750;
rt_int v5752;
rt_int v5755;
};
struct yf2639 { void *up;
void * p2636;
rt_int p2637;
rt_int p2638;
rt_int v5780;
rt_int v5782;
};
struct yf2648 { void *up;
void * p2644;
rt_int p2645;
rt_int p2646;
rt_int * p2646_o;
rt_int p2647;
rt_int v5793;
rt_int v5795;
rt_int v5797;
ydesc yd_5806;
yarr v5808;
unsigned char v5810;
rt_int v5812;
rt_int lo5841;
rt_int hi5842;
rt_int c_5844;
};
struct yf2656 { void *up;
void * p2653;
rt_int p2654;
rt_int * p2654_o;
rt_int p2655;
rt_int * p2655_o;
void * v5879;
rt_int v5881;
rt_int v5883;
rt_int v5885;
rt_int v5887;
rt_int v5889;
void * v5891;
};
struct yf2664 { void *up;
void * p2661;
rt_int p2662;
rt_int * p2662_o;
rt_int p2663;
rt_int * p2663_o;
void * v5921;
rt_int v5923;
rt_int v5925;
rt_int v5927;
rt_int v5929;
rt_int v5931;
void * v5933;
void * v5935;
rt_int lo5952;
rt_int hi5953;
rt_int c_5955;
};
struct yf2671 { void *up;
void * p2669;
void * p2670;
};
struct yf2679 { void *up;
rt_int p2676;
void * p2677;
void * p2678;
rt_int v5983;
rt_int v5985;
void * v5987;
void * v5989;
};
struct yf2687 { void *up;
rt_int p2684;
void * p2685;
void * p2686;
rt_int v6018;
rt_int v6020;
rt_int v6022;
rt_int v6024;
rt_int v6026;
rt_int v6028;
};
struct yf2695 { void *up;
rt_int p2692;
void * p2693;
void * p2694;
rt_int v6075;
rt_int v6077;
rt_int v6079;
};
struct yf2706 { void *up;
rt_int * p2700;
void * p2701;
rt_int * p2702;
void * p2703;
void * p2704;
rt_int p2705;
rt_int v6094;
rt_int v6096;
};
struct yf2714 { void *up;
void * p2711;
rt_int p2712;
rt_int * p2712_o;
void * p2713;
void * * p2713_o;
rt_int v6103;
rt_int v6105;
};
struct yf2723 { void *up;
void * p2719;
rt_int p2720;
rt_int * p2720_o;
rt_int p2721;
rt_int * p2721_o;
rt_int p2722;
rt_int * p2722_o;
rt_int v6119;
rt_int v6121;
rt_int v6123;
rt_int v6125;
rt_int v6127;
rt_int v6129;
};
struct yf2729 { void *up;
rt_int p2728;
};
struct yf2737 { void *up;
rt_int p2734;
void * p2735;
void * p2736;
rt_int v6150;
};
struct yf2747 { void *up;
rt_int p2742;
void * p2743;
rt_int p2744;
void * p2745;
rt_int p2746;
rt_int v6189;
};
struct yf2757 { void *up;
rt_int p2752;
void * p2753;
rt_int p2754;
void * p2755;
rt_int p2756;
};
struct yf2763 { void *up;
void * p2762;
void * v6211;
void * v6213;
};
struct yf2769 { void *up;
void * p2768;
void * v6232;
void * v6234;
};
struct yf2777 { void *up;
void * p2774;
rt_int p2775;
rt_int * p2775_o;
void * p2776;
void * * p2776_o;
};
struct yf2783 { void *up;
rt_int p2782;
};
struct yf2790 { void *up;
void * p2788;
rt_int p2789;
void * v6252;
};
struct yf2796 { void *up;
void * p2795;
void * v6257;
};
struct yf2805 { void *up;
void * p2801;
void * p2802;
rt_int p2803;
rt_int * p2803_o;
void * p2804;
void * * p2804_o;
rt_int v6266;
void * v6268;
rt_int v6270;
rt_int v6272;
void * v6274;
void * v6276;
void * v6278;
rt_int v6280;
rt_int v6282;
};
struct yf2813 { void *up;
void * p2810;
void * p2811;
rt_int p2812;
void * v6325;
rt_int v6327;
rt_int v6329;
};
struct yf2822 { void *up;
void * p2818;
void * p2819;
rt_int p2820;
rt_int * p2820_o;
void * p2821;
void * * p2821_o;
void * v6341;
};
struct yf2830 { void *up;
void * p2827;
rt_int p2828;
rt_int * p2828_o;
void * p2829;
void * * p2829_o;
rt_int v6350;
rt_int v6352;
rt_int v6354;
void * v6356;
void * v6358;
void * v6360;
void * v6362;
rt_int v6364;
rt_int v6366;
};
struct yf2840 { void *up;
void * p2835;
rt_int p2836;
void * p2837;
rt_int p2838;
rt_int * p2838_o;
void * p2839;
void * * p2839_o;
};
struct yf2846 { void *up;
void * p2845;
void * v6404;
};
struct yf2855 { void *up;
yarr p2852;
rt_int p2853;
rt_int p2854;
};
struct yf2864 { void *up;
rt_int p2860;
yarr p2862;
rt_int p2863;
};
struct yf2873 { void *up;
rt_int p2869;
void * p2870;
rt_int p2871;
void * p2872;
rt_int v6432;
rt_int v6434;
void * v6436;
};
struct yf2879 { void *up;
void * p2878;
};
struct yf2886 { void *up;
rt_int p2884;
void * p2885;
};
struct yf2895 { void *up;
void * p2891;
void * p2892;
rt_int p2893;
rt_int * p2893_o;
void * p2894;
void * * p2894_o;
rt_int v6474;
rt_int v6476;
rt_int v6478;
rt_int v6480;
void * v6482;
void * v6484;
void * v6486;
rt_int v6488;
};
struct yf2902 { void *up;
void * p2900;
void * p2901;
};
struct yf2910 { void *up;
void * p2907;
rt_int p2908;
rt_int p2909;
void * v6548;
void * v6550;
rt_int v6552;
rt_int v6554;
};
struct yf2916 { void *up;
void * p2915;
void * v6566;
};
struct yf2925 { void *up;
void * p2921;
void * p2922;
rt_int p2923;
rt_int * p2923_o;
rt_int p2924;
rt_int * p2924_o;
void * v6578;
void * v6580;
void * v6582;
};
struct yf2933 { void *up;
void * p2930;
void * p2931;
rt_int p2932;
void * v6597;
};
struct yf2940 { void *up;
void * p2938;
void * p2939;
};
struct yf2949 { void *up;
void * p2945;
rt_int p2946;
rt_int p2947;
rt_int p2948;
void * v6614;
rt_int v6616;
rt_int v6620;
rt_int v6623;
rt_int v6626;
rt_int v6629;
rt_int v6632;
rt_int v6635;
};
struct yf2955 { void *up;
rt_int p2954;
};
struct yf2966 { void *up;
void * p2960;
rt_int p2961;
void * p2962;
void * p2963;
rt_int p2964;
rt_int * p2964_o;
void * p2965;
void * * p2965_o;
void * v6693;
void * v6695;
rt_int v6697;
rt_int v6699;
};
struct yf2973 { void *up;
void * p2971;
rt_int p2972;
void * v6713;
};
struct yf2983 { void *up;
rt_int p2978;
void * p2979;
rt_int p2980;
void * p2981;
rt_int p2982;
void * v6723;
void * v6725;
void * v6727;
void * v6729;
rt_int v6731;
};
struct yf2993 { void *up;
rt_int p2988;
void * p2989;
rt_int p2990;
void * p2991;
rt_int p2992;
rt_int v6773;
};
struct yf3003 { void *up;
void * p2998;
void * p2999;
rt_int p3000;
rt_int p3001;
rt_int * p3001_o;
void * p3002;
void * * p3002_o;
void * v6782;
void * v6784;
rt_int v6786;
rt_int v6788;
};
struct yf3012 { void *up;
void * p3008;
void * p3009;
rt_int p3010;
rt_int * p3010_o;
void * p3011;
void * * p3011_o;
void * v6800;
void * v6802;
rt_int v6804;
rt_int v6806;
rt_int v6808;
void * v6810;
rt_int v6812;
rt_int v6814;
rt_int v6816;
rt_int v6818;
rt_int v6820;
rt_int v6823;
void * v6825;
rt_int v6827;
};
struct yf3020 { void *up;
void * p3017;
rt_int p3018;
rt_int p3019;
void * v6889;
void * v6891;
rt_int v6893;
rt_int v6895;
};
struct yf3028 { void *up;
yarr p3026;
rt_int p3027;
rt_int v6904;
};
struct yf3038 { void *up;
yarr p3034;
rt_int p3035;
yarr p3037;
rt_int v6910;
};
struct yf3044 { void *up;
rt_int p3043;
};
struct yf3049 { void *up;
};
struct yf3055 { void *up;
rt_int p3054;
};
struct yf3061 { void *up;
void * p3060;
rt_int v6932;
rt_int v6934;
rt_int v6936;
void * v6938;
void * v6940;
rt_int v6942;
void * v6944;
rt_int v6946;
};
struct yf3068 { void *up;
void * p3066;
void * p3067;
void * v7009;
void * v7011;
rt_int v7013;
rt_int v7015;
rt_int v7017;
rt_int v7019;
};
struct yf3076 { void *up;
void * p3073;
void * p3074;
void * p3075;
rt_int v7041;
void * v7043;
void * v7045;
void * v7047;
rt_int v7049;
rt_int v7051;
rt_int v7053;
rt_int v7055;
};
struct yf3083 { void *up;
void * p3081;
void * p3082;
void * v7068;
void * v7070;
rt_int v7072;
rt_int v7075;
rt_int lo7080;
rt_int hi7081;
rt_int c_7083;
};
struct yf3089 { void *up;
void * p3088;
void * v7093;
rt_int v7095;
};
struct yf3095 { void *up;
void * p3094;
void * v7103;
};
struct yf3101 { void *up;
void * p3100;
rt_int v7117;
void * v7119;
rt_int v7121;
rt_int v7123;
};
struct yf3108 { void *up;
void * p3106;
rt_int p3107;
void * v7148;
void * v7150;
};
struct yf3114 { void *up;
void * p3113;
void * v7174;
};
struct yf3120 { void *up;
void * p3119;
rt_int v7178;
void * v7180;
};
struct yf3127 { void *up;
void * p3125;
void * p3126;
rt_int v7186;
rt_int v7188;
void * v7190;
void * v7192;
rt_int v7194;
};
struct yf3132 { void *up;
void * v7200;
rt_int v7202;
};
struct yf3138 { void *up;
void * p3137;
rt_int v7209;
rt_int v7211;
rt_int v7213;
rt_int v7215;
rt_int v7217;
rt_int v7219;
rt_int v7221;
void * v7223;
void * v7225;
void * v7227;
void * v7229;
rt_int v7231;
rt_int v7233;
rt_int v7235;
rt_int v7237;
void * v7239;
};
struct yf3144 { void *up;
void * p3143;
void * v7311;
rt_int v7313;
rt_int v7315;
rt_int v7317;
void * v7319;
};
struct yf3152 { void *up;
rt_int p3149;
rt_int p3150;
rt_int p3151;
};
struct yf3158 { void *up;
void * p3157;
rt_int v7351;
rt_int v7353;
rt_int v7355;
void * v7357;
void * v7359;
};
struct yf3164 { void *up;
void * p3163;
};
struct yf3170 { void *up;
void * p3169;
void * v7380;
};
struct yf3176 { void *up;
void * p3175;
void * v7395;
};
struct yf3182 { void *up;
void * p3181;
void * v7404;
void * v7406;
void * v7408;
};
struct yf3188 { void *up;
rt_int p3187;
rt_int v7413;
rt_int v7415;
rt_int lo7420;
rt_int hi7421;
rt_int c_7423;
};
struct yf3194 { void *up;
void * p3193;
void * v7433;
rt_int v7435;
rt_int v7437;
};
struct yf3200 { void *up;
void * p3199;
rt_int v7454;
};
struct yf3207 { void *up;
void * p3205;
rt_int p3206;
void * v7462;
void * v7464;
void * v7466;
void * v7468;
void * v7470;
void * v7472;
void * v7474;
rt_int v7476;
rt_int v7478;
};
struct yf3214 { void *up;
void * p3212;
void * p3213;
void * v7524;
void * v7526;
void * v7528;
rt_int v7530;
};
struct yf3220 { void *up;
void * p3219;
void * v7538;
yR134 v7540;
yR134 v7542;
rt_int v7544;
rt_int v7546;
rt_int v7548;
rt_int v7550;
rt_int v7552;
rt_int v7554;
rt_int v7556;
void * v7558;
rt_int v7560;
void * v7562;
void * v7564;
rt_int v7566;
rt_int v7568;
yR134 v7570;
};
struct yf3228 { void *up;
void * p3225;
void * p3226;
rt_int p3227;
};
struct yf3234 { void *up;
void * p3233;
rt_int v7638;
void * v7640;
void * v7642;
void * v7644;
void * v7646;
rt_int v7648;
rt_int v7650;
rt_int v7652;
rt_int v7654;
};
struct yf3241 { void *up;
void * p3239;
void * p3240;
void * v7673;
};
struct yf3248 { void *up;
void * p3246;
void * p3247;
};
struct yf3257 { void *up;
void * p3253;
rt_int p3254;
void * p3255;
rt_int p3256;
rt_int v7683;
rt_int lo7696;
rt_int hi7697;
rt_int c_7699;
};
struct yf3264 { void *up;
rt_int p3262;
rt_int p3263;
rt_int v7708;
rt_int v7712;
void * v7714;
rt_int lo7719;
rt_int hi7720;
rt_int c_7722;
rt_int lo7729;
rt_int hi7730;
rt_int c_7732;
};
struct yf3270 { void *up;
rt_int p3269;
void * v7740;
yR134 v7742;
void * v7744;
};
struct yf3276 { void *up;
void * p3275;
void * v7758;
void * v7760;
rt_int v7762;
rt_int v7764;
};
struct yf3282 { void *up;
void * p3281;
};
struct yf3289 { void *up;
rt_int p3287;
void * p3288;
void * v7774;
};
struct yf3297 { void *up;
void * * p3294;
void * p3295;
rt_int p3296;
void * v7781;
void * v7783;
void * v7785;
};
struct yf3304 { void *up;
void * p3302;
rt_int p3303;
void * v7795;
};
struct yf3312 { void *up;
rt_int p3309;
rt_int p3310;
void * p3311;
void * * p3311_o;
void * v7811;
};
struct yf3318 { void *up;
void * p3317;
void * v7829;
};
struct yf3327 { void *up;
rt_int p3323;
rt_int p3324;
void * p3325;
rt_int p3326;
void * v7837;
};
struct yf3334 { void *up;
rt_int p3332;
void * p3333;
};
struct yf3341 { void *up;
void * p3339;
void * p3340;
void * v7850;
rt_int lo7854;
rt_int hi7855;
rt_int c_7857;
};
struct yf3347 { void *up;
rt_int p3346;
void * v7864;
rt_int lo7868;
rt_int hi7869;
rt_int c_7871;
};
struct yf3355 { void *up;
void * p3352;
void * * p3353;
rt_int p3354;
void * v7880;
void * v7882;
rt_int v7884;
};
struct yf3363 { void *up;
void * p3360;
void * * p3361;
rt_int p3362;
void * v7891;
void * v7893;
void * v7895;
rt_int v7897;
void * v7899;
rt_int v7901;
rt_int v7903;
void * v7905;
};
struct yf3370 { void *up;
void * p3368;
rt_int p3369;
void * v7936;
void * v7938;
void * v7940;
};
struct yf3376 { void *up;
void * p3375;
void * v7946;
void * v7948;
void * v7950;
void * v7952;
void * v7954;
void * v7956;
void * v7958;
void * v7960;
void * v7962;
void * v7964;
rt_int v7966;
rt_int v7968;
rt_int v7970;
};
struct yf3382 { void *up;
void * p3381;
void * v7999;
};
struct yf3388 { void *up;
void * p3387;
void * v8003;
void * v8005;
void * v8007;
void * v8009;
rt_int v8011;
rt_int v8013;
rt_int v8015;
rt_int v8017;
void * v8019;
rt_int lo8027;
rt_int hi8028;
rt_int c_8030;
};
struct yf3394 { void *up;
void * p3393;
void * v8042;
void * v8044;
};
struct yf3399 { void *up;
void * v8050;
};
struct yf3406 { void *up;
void * p3404;
void * p3405;
rt_int v8061;
rt_int v8063;
rt_int v8065;
void * v8067;
rt_int v8069;
rt_int v8071;
rt_int v8073;
rt_int v8075;
rt_int v8077;
rt_int v8079;
void * v8081;
void * v8083;
};
struct yf3412 { void *up;
void * p3411;
};
struct yf3418 { void *up;
void * p3417;
rt_int v8144;
};
struct yf3423 { void *up;
};
struct yf3429 { void *up;
void * p3428;
};
struct yf3436 { void *up;
void * p3434;
rt_int p3435;
};
struct yf3443 { void *up;
void * p3441;
rt_int p3442;
};
struct yf3450 { void *up;
void * p3448;
void * p3449;
rt_int v8187;
rt_int v8189;
rt_int v8191;
};
struct yf3457 { void *up;
void * p3455;
rt_int p3456;
void * v8200;
rt_int v8202;
};
struct yf3464 { void *up;
void * p3462;
rt_int p3463;
};
struct yf3472 { void *up;
yarr p3470;
rt_int p3471;
};
struct yf3478 { void *up;
rt_int p3477;
};
struct yf3487 { void *up;
void * p3483;
rt_int p3484;
rt_int p3485;
rt_int * p3485_o;
void * p3486;
void * * p3486_o;
rt_int v8229;
};
struct yf3495 { void *up;
void * p3492;
rt_int p3493;
rt_int * p3493_o;
void * p3494;
void * * p3494_o;
};
struct yf3501 { void *up;
void * p3500;
rt_int v8245;
void * v8247;
};
struct yf3507 { void *up;
void * p3506;
void * v8253;
rt_int v8256;
rt_int v8258;
rt_int v8260;
rt_int v8262;
rt_int v8264;
rt_int v8266;
unsigned char v8268;
void * v8270;
ydesc yd_8279;
yarr v8281;
};
struct yf3514 { void *up;
void * p3512;
void * p3513;
rt_int v8317;
rt_int v8319;
rt_int v8321;
void * v8323;
};
struct yf3524 { void *up;
rt_int p3519;
void * p3520;
rt_int p3521;
rt_int p3522;
rt_int * p3522_o;
void * p3523;
void * * p3523_o;
rt_int v8335;
rt_int v8337;
rt_int v8339;
rt_int v8341;
rt_int v8343;
void * v8345;
void * v8347;
void * v8349;
void * v8351;
rt_int v8353;
rt_int v8355;
rt_int v8357;
rt_int v8359;
void * v8361;
rt_int v8363;
rt_int lo8377;
rt_int hi8378;
rt_int c_8380;
};
struct yf3532 { void *up;
yarr p3530;
void * p3531;
void * v8572;
};
struct yf3540 { void *up;
yarr p3538;
rt_int p3539;
void * v8578;
};
struct yf3550 { void *up;
yarr p3546;
yarr p3547;
yarr p3548;
rt_int p3549;
void * v8586;
void * v8588;
void * v8590;
};
struct yf3558 { void *up;
rt_int p3555;
yarr p3557;
void * v8599;
};
struct yf3563 { void *up;
};
struct yf3568 { void *up;
void * v8679;
};
struct yf3573 { void *up;
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
static rt_int v188;
static rt_int v191;
static rt_int v194;
static rt_int v197;
static rt_int v200;
static rt_int v203;
static rt_int v206;
static rt_int v209;
static rt_int v212;
static rt_int v215;
static rt_int v218;
static rt_int v221;
static rt_int v224;
static rt_int v227;
static rt_int v230;
static rt_int v233;
static rt_int v236;
static rt_int v239;
static rt_int v242;
static rt_int v245;
static rt_int v248;
static rt_int v251;
static rt_int v254;
static rt_int v257;
static rt_int v260;
static rt_int v263;
static rt_int v266;
static rt_int v269;
static rt_int v272;
static rt_int v275;
static rt_int v278;
static rt_int v281;
static rt_int v284;
static rt_int v287;
static rt_int v290;
static rt_int v293;
static rt_int v296;
static rt_int v299;
static rt_int v302;
static rt_int v305;
static rt_int v308;
static rt_int v311;
static rt_int v314;
static rt_int v317;
static rt_int v320;
static rt_int v323;
static rt_int v326;
static rt_int v329;
static rt_int v332;
static rt_int v335;
static rt_int v338;
static rt_int v341;
static rt_int v344;
static rt_int v347;
static rt_int v350;
static rt_int v353;
static rt_int v356;
static rt_int v359;
static rt_int v362;
static rt_int v365;
static rt_int v368;
static rt_int v371;
static rt_int v374;
static rt_int v377;
static rt_int v380;
static rt_int v383;
static rt_int v386;
static rt_int v389;
static rt_int v392;
static rt_int v395;
static rt_int v398;
static rt_int v401;
static rt_int v404;
static rt_int v407;
static rt_int v410;
static rt_int v413;
static rt_int v416;
static rt_int v419;
static rt_int v422;
static rt_int v425;
static rt_int v428;
static rt_int v431;
static rt_int v434;
static rt_int v437;
static rt_int v440;
static rt_int v443;
static rt_int v446;
static rt_int v449;
static rt_int v452;
static rt_int v455;
static rt_int v458;
static rt_int v461;
static rt_int v464;
static rt_int v467;
static rt_int v470;
static rt_int v473;
static rt_int v476;
static rt_int v479;
static rt_int v482;
static rt_int v485;
static rt_int v488;
static rt_int v491;
static rt_int v494;
static rt_int v497;
static rt_int v500;
static rt_int v503;
static rt_int v506;
static rt_int v509;
static rt_int v512;
static rt_int v515;
static rt_int v518;
static rt_int v521;
static rt_int v524;
static rt_int v527;
static rt_int v530;
static rt_int v533;
static rt_int v536;
static rt_int v539;
static rt_int v542;
static rt_int v545;
static rt_int v548;
static rt_int v551;
static rt_int v554;
static rt_int v557;
static rt_int v560;
static rt_int v563;
static rt_int v566;
static rt_int v569;
static rt_int v572;
static rt_int v575;
static rt_int v578;
static rt_int v581;
static rt_int v584;
static rt_int v587;
static rt_int v590;
static rt_int v593;
static rt_int v596;
static rt_int v599;
static rt_int v602;
static rt_int v605;
static rt_int v608;
static rt_int v611;
static rt_int v614;
static rt_int v617;
static rt_int v620;
static rt_int v623;
static rt_int v626;
static rt_int v629;
static rt_int v632;
static rt_int v635;
static rt_int v638;
static rt_int v641;
static rt_int v644;
static rt_int v647;
static rt_int v650;
static rt_int v653;
static rt_int v656;
static rt_int v659;
static rt_int v662;
static rt_int v665;
static rt_int v668;
static rt_int v671;
static rt_int v674;
static rt_int v677;
static rt_int v680;
static rt_int v683;
static rt_int v686;
static rt_int v689;
static rt_int v692;
static rt_int v695;
static rt_int v698;
static rt_int v701;
static rt_int v704;
static rt_int v707;
static rt_int v710;
static rt_int v713;
static rt_int v716;
static rt_int v719;
static rt_int v722;
static rt_int v725;
static rt_int v728;
static rt_int v731;
static rt_int v734;
static rt_int v737;
static rt_int v740;
static rt_int v743;
static rt_int v746;
static rt_int v749;
static rt_int v752;
static rt_int v755;
static rt_int v758;
static rt_int v761;
static rt_int v764;
static rt_int v767;
static rt_int v770;
static rt_int v773;
static rt_int v776;
static rt_int v779;
static rt_int v782;
static rt_int v785;
static rt_int v788;
static rt_int v791;
static rt_int v794;
static rt_int v797;
static rt_int v800;
static rt_int v803;
static rt_int v806;
static rt_int v809;
static rt_int v812;
static rt_int v815;
static rt_int v818;
static rt_int v821;
static rt_int v824;
static rt_int v827;
static rt_int v830;
static rt_int v833;
static rt_int v836;
static rt_int v839;
static rt_int v842;
static rt_int v845;
static rt_int v848;
static rt_int v851;
static rt_int v854;
static rt_int v857;
static rt_int v860;
static rt_int v863;
static rt_int v866;
static rt_int v869;
static rt_int v872;
static rt_int v875;
static rt_int v878;
static rt_int v881;
static rt_int v884;
static rt_int v887;
static rt_int v890;
static yfile * v893;
static yfile * v895;
static yarr v897;
static rt_int v899;
static yarr v902;
static yarr v904;
static rt_int v906;
static yarr v909;
static rt_int v911;
static ydesc yd_921;
static yarr v923;
static rt_int v925;
static ydesc yd_935;
static yarr v937;
static rt_int v939;
static rt_int v942;
static ydesc yd_947;
static yarr v949;
static ydesc yd_958;
static yarr v960;
static yR134 v962;
static yR134 v964;
static yR134 v966;
static yR134 v968;
static yR134 v970;
static yR134 v972;
static yR134 v974;
static yR134 v976;
static yfile * v978;
static yR134 v980;
static yR134 v982;
static rt_int v984;
static yarr v1191;
static yarr v1193;
static yarr v1195;
static rt_int v1197;
static rt_int v1200;
static rt_int v1203;
static rt_int v1206;
static rt_int v1209;
static rt_int v1212;
static ydesc yd_1222;
static yarr v1224;
static yarr v1226;
static yarr v1228;
static rt_int v1230;
static rt_int v1233;
static void * v1236;
static rt_int v1238;
static rt_int v1241;
static yarr v1244;
static ydesc yd_1253;
static yarr v1255;
static rt_int v1257;
static rt_int v1260;
static rt_int v1263;
static ydesc yd_1273;
static yarr v1275;
static ydesc yd_1284;
static yarr v1286;
static ydesc yd_1295;
static yarr v1297;
static ydesc yd_1306;
static yarr v1308;
static yarr v1310;
static rt_int v1312;
static ydesc yd_1322;
static yarr v1324;
static void * v1326;
static void * v1328;
static void * v1330;
static void * v1332;
static void * v1334;
static void * v1336;
static void * v1338;
static void * v1340;
static void * v1342;
static void * v1344;
static void * v1346;
static void * v1348;
static rt_int v1350;
static rt_int v1353;
static rt_int v1356;
static rt_int v1359;
static rt_int v1362;
static rt_int v1365;
static rt_int v1368;
static rt_int v1371;
static rt_int v1374;
static rt_int v1377;
static rt_int v1380;
static rt_int v1383;
static rt_int v1386;
static rt_int v1389;
static rt_int v1392;
static rt_int v1395;
static rt_int v1398;
static rt_int v1401;
static rt_int v1404;
static rt_int v1407;
static rt_int v1410;
static rt_int v1413;
static rt_int v1416;
static rt_int v1419;
static rt_int v1422;
static rt_int v1425;
static rt_int v1428;
static rt_int v1431;
static rt_int v1434;
static rt_int v1437;
static rt_int v1440;
static rt_int v1443;
static rt_int v1446;
static rt_int v1449;
static rt_int v1452;
static rt_int v1455;
static rt_int v1458;
static void * v1461;
static ydesc yd_1470;
static yarr v1472;
static ydesc yd_1481;
static yarr v1483;
static ydesc yd_1492;
static yarr v1494;
static rt_int v1496;
static ydesc yd_1506;
static yarr v1508;
static rt_int v1510;
static rt_int v1513;
static ydesc yd_1523;
static yarr v1525;
static ydesc yd_1534;
static yarr v1536;
static rt_int v1538;
static ydesc yd_1548;
static yarr v1550;
static rt_int v1552;
static ydesc yd_1562;
static yarr v1564;
static yarr v1566;
static ydesc yd_1575;
static yarr v1577;
static rt_int v1579;
static rt_int v1582;
static void * v1585;
static ydesc yd_1594;
static yarr v1596;
static yarr v1598;
static rt_int v1600;
static ydesc yd_1610;
static yarr v1612;
static rt_int v1614;
static rt_int v1617;
static ydesc yd_1627;
static yarr v1629;
static ydesc yd_1638;
static yarr v1640;
static ydesc yd_1649;
static yarr v1651;
static ydesc yd_1660;
static yarr v1662;
static ydesc yd_1671;
static yarr v1673;
static ydesc yd_1682;
static yarr v1684;
static ydesc yd_1693;
static yarr v1695;
static yarr v1697;
static ydesc yd_1706;
static yarr v1708;
static rt_int v1710;
static rt_int v1713;
static void * v1716;
static ydesc yd_1725;
static yarr v1727;
static rt_int v1729;
static ydesc yd_1739;
static yarr v1741;
static ydesc yd_1750;
static yarr v1752;
static ydesc yd_1761;
static yarr v1763;
static ydesc yd_1772;
static yarr v1774;
static yarr v1776;
static rt_int v1778;
static void * v1781;
static void * v1783;
static void yr987_InitChars(void);
static rt_int yr992_IsLetter(unsigned char a_p993);
static rt_int yr998_IsDigit(unsigned char a_p999);
static void yr1004_PoolAdd(unsigned char a_p1005);
static void yr1010_SB(void);
static void yr1015_SC(unsigned char a_p1016);
static void yr1021_SA(yarr a_p1023);
static void yr1028_ST(rt_int a_p1029);
static void yr1034_SI(rt_int a_p1035);
static rt_int yr1040_SE(void);
static rt_int yr1045_T(yarr a_p1047);
static rt_int yr1052_Intern(rt_int a_p1053, rt_int a_p1054);
static rt_int yr1059_Name(rt_int a_p1060);
static rt_int yr1065_N(yarr a_p1067);
static rt_int yr1072_TEq(rt_int a_p1073, rt_int a_p1074);
static rt_int yr1079_TStarts(rt_int a_p1080, yarr a_p1082);
static unsigned char yr1087_TChar(rt_int a_p1088, rt_int a_p1089);
static void yr1094_Put(yR134 * a_p1095, rt_int a_p1096);
static void yr1101_PutS(yR134 * a_p1102, yarr a_p1104);
static void yr1109_Append(yR134 * a_p1110, yR134 * a_p1111);
static void yr1116_Emit(rt_int a_p1117);
static void yr1122_EmitS(yarr a_p1124);
static void yr1129_WriteTxt(rt_int a_p1130);
static void yr1135_WriteBuf(yR134 a_p1136);
static void yr1141_Fail(rt_int a_p1142, rt_int a_p1143);
static void yr1148_Warn(rt_int a_p1149, rt_int a_p1150);
static void yr1155_WriteTo(yfile * * a_p1156, rt_int a_p1157);
static void yr1162_FailS(rt_int a_p1163, yarr a_p1165);
static void yr1170_FailN(rt_int a_p1171, rt_int a_p1172, yarr a_p1174);
static rt_int yr1179_NewSerial(void);
static rt_int yr1184_Fresh(yarr a_p1186);
static void yr1785_InitWords(void);
static void yr1790_ReadSource(void);
static void yr1795_AddTok(rt_int a_p1796, rt_int a_p1797);
static unsigned char yr1802_At(rt_int a_p1803);
static rt_int yr1808_EndsOperand(void);
static rt_int yr1813_DigitVal(unsigned char a_p1814);
static void yr1819_LexError(yarr a_p1821);
static void yr1826_LexDigits(rt_int a_p1827, rt_int a_p1828);
static void yr1833_LexNumber(rt_int a_p1834);
static void yr1839_LexString(void);
static void yr1844_Lex(void);
static void * yr1849_NewNode(rt_int a_p1850, rt_int a_p1851);
static void yr1856_Link(void * * a_p1857, void * * a_p1858, void * a_p1859);
static rt_int yr1864_Count(void * a_p1865);
static rt_int yr1870_TK(void);
static rt_int yr1875_TV(void);
static rt_int yr1880_TLn(void);
static rt_int yr1885_IsAt(rt_int a_p1886, rt_int a_p1887);
static rt_int yr1892_Is(rt_int a_p1893);
static rt_int yr1898_IsIdAt(rt_int a_p1899);
static void yr1904_Skip(void);
static rt_int yr1909_Accept(rt_int a_p1910);
static rt_int yr1915_TokText(void);
static void yr1920_Expect(rt_int a_p1921);
static rt_int yr1926_Ident(void);
static void yr1931_CloseName(rt_int a_p1932, rt_int a_p1933);
static rt_int yr1938_ExtendedId(void);
static rt_int yr1943_IsLabel(rt_int a_p1944);
static void * yr1949_ImportItem(void);
static void * yr1954_ParseModule(void);
static rt_int yr1959_IsDeclWord(void);
static void * yr1964_ParseBlock(void);
static void * yr1969_ParseHandler(void);
static void * yr1974_ParseNames(void);
static void * yr1979_SimpleEntry(rt_int a_p1980);
static rt_int yr1985_Continues(rt_int a_p1986);
static void yr1991_ParseDeclGroup(void * * a_p1992, void * * a_p1993);
static void * yr1998_ParseDecl(void);
static void yr2003_ParseFormals(void * a_p2004);
static void * yr2009_ParseFormalRep(void);
static rt_int yr2014_IsStructWord(rt_int a_p2015);
static void * yr2020_ParseRep(void);
static void * yr2025_ParseConcrete(void);
static void * yr2030_ParseIds(void);
static void * yr2035_ParseFieldGroups(void);
static void * yr2040_ParseConcrete1(void);
static void * yr2045_ParseQualifier(void);
static rt_int yr2050_IsStop(void);
static void * yr2055_ParseStatements(rt_int a_p2056);
static void * yr2061_ParseStatement(void);
static rt_int yr2066_OpAt(void);
static rt_int yr2071_IsRel(rt_int a_p2072);
static rt_int yr2077_IsAssocMul(rt_int a_p2078);
static rt_int yr2083_IsNonAssocMul(rt_int a_p2084);
static rt_int yr2089_IsAssocAdd(rt_int a_p2090);
static rt_int yr2095_IsNonAssocAdd(rt_int a_p2096);
static void * yr2101_Bin(rt_int a_p2102, void * a_p2103, void * a_p2104, rt_int a_p2105);
static void yr2110_NeedParens(rt_int a_p2111, rt_int a_p2112);
static void * yr2117_ParseExpr(void);
static void * yr2122_ParseSimple(void);
static void * yr2127_ParseTerm(void);
static rt_int yr2132_IsLiteralAt(rt_int a_p2133);
static void * yr2138_ParseLiteral(void);
static void * yr2143_ParseFactor(void);
static void * yr2148_ParseDesignator(void);
static void yr2153_EXIT_ARGS(void);
static void * yr2158_ParseProgram(void);
static void * yr2163_NewSym(rt_int a_p2164, rt_int a_p2165);
static void yr2170_OpenScope(rt_int a_p2171);
static void yr2176_ReopenScope(void * a_p2177);
static void yr2182_CloseScope(void);
static rt_int yr2187_Visible(void * a_p2188);
static void * yr2193_Find(rt_int a_p2194);
static void * yr2199_FindHere(rt_int a_p2200);
static void * yr2205_Lookup(rt_int a_p2206, rt_int a_p2207);
static rt_int yr2212_IsSimple(rt_int a_p2213);
static rt_int yr2218_DeclaredFrom(void * a_p2219, rt_int a_p2220);
static rt_int yr2225_LiteralIn(void * a_p2226, rt_int a_p2227);
static rt_int yr2232_LiteralInGroups(void * a_p2233, rt_int a_p2234);
static rt_int yr2239_Resolved(void * a_p2240);
static rt_int yr2245_Ambiguous(void * a_p2246);
static void * yr2251_FindLit(rt_int a_p2252, void * a_p2253);
static void yr2258_Define(void * a_p2259, rt_int a_p2260);
static rt_int yr2265_Path(rt_int a_p2266, rt_int a_p2267);
static rt_int yr2272_FramePtr(rt_int a_p2273);
static void yr2278_DeclStorage(rt_int a_p2279, rt_int a_p2280);
static rt_int yr2285_SymPath(void * a_p2286);
static void * yr2291_Real(void * a_p2292);
static void * yr2297_NewRep(rt_int a_p2298, rt_int a_p2299);
static void * yr2304_CopyRep(void * a_p2305);
static rt_int yr2310_IsDiscrete(void * a_p2311);
static rt_int yr2316_IsNumeric(void * a_p2317);
static rt_int yr2322_IsArrayLike(void * a_p2323);
static rt_int yr2328_IsString(void * a_p2329);
static rt_int yr2334_Deep(void * a_p2335);
static rt_int yr2340_Holds(void * a_p2341, rt_int a_p2342);
static rt_int yr2347_HoldsSignal(void * a_p2348);
static rt_int yr2353_NonAssignable(void * a_p2354);
static rt_int yr2359_CType(void * a_p2360);
static rt_int yr2365_DescOf(void * a_p2366);
static void yr2371_NewDesc(void * a_p2372);
static rt_int yr2377_SameType(void * a_p2378, void * a_p2379);
static void yr2384_TypeClash(rt_int a_p2385, void * a_p2386, void * a_p2387);
static void yr2392_CheckType(rt_int a_p2393, void * a_p2394, void * a_p2395);
static void yr2400_CheckRepresented(void * a_p2401, rt_int a_p2402);
static rt_int yr2407_SigText(void * a_p2408);
static rt_int yr2413_RepSig(void * a_p2414);
static rt_int yr2419_Identical(void * a_p2420, void * a_p2421);
static rt_int yr2426_IsLiteralNode(void * a_p2427);
static void yr2432_StoreBounds(void * a_p2433, yarr a_p2435);
static rt_int yr2440_LoText(void * a_p2441);
static rt_int yr2446_HiText(void * a_p2447);
static void * yr2452_AdoptLiteral(void * a_p2453, void * a_p2454, void * a_p2455);
static rt_int yr2460_HasQualifier(void * a_p2461);
static rt_int yr2466_Gcd(rt_int a_p2467, rt_int a_p2468);
static rt_int yr2473_MulChk(rt_int a_p2474, rt_int a_p2475, rt_int a_p2476);
static rt_int yr2481_PowChk(rt_int a_p2482, rt_int a_p2483, rt_int a_p2484);
static void yr2489_ScaleRatio(void * a_p2490, void * a_p2491, rt_int * a_p2492, rt_int * a_p2493, rt_int * a_p2494);
static rt_int yr2499_Factor(rt_int a_p2500, rt_int a_p2501);
static void yr2506_SetScale(void * a_p2507, rt_int a_p2508, rt_int a_p2509);
static void yr2514_Qualify(void * a_p2515, void * a_p2516);
static void yr2521_DefineLits(void * a_p2522);
static void yr2527_SetRange(void * a_p2528, rt_int a_p2529, rt_int a_p2530);
static rt_int yr2535_NewTid(rt_int a_p2536);
static void * yr2541_MakeRep(void * a_p2542, rt_int a_p2543, rt_int a_p2544);
static rt_int yr2549_Conforms(void * a_p2550, void * a_p2551);
static void * yr2556_MakeRep1(void * a_p2557, rt_int a_p2558, rt_int a_p2559);
static void yr2564_ResolvePending(rt_int a_p2565, void * a_p2566);
static void yr2571_CheckPending(void);
static void yr2576_BuildArrayDesc(void * a_p2577);
static void yr2582_AddField(void * a_p2583, void * * a_p2584, rt_int a_p2585, void * a_p2586, rt_int a_p2587, rt_int a_p2588, void * a_p2589, rt_int a_p2590);
static void yr2595_AddFields(void * a_p2596, void * * a_p2597, void * a_p2598, rt_int a_p2599, void * a_p2600, rt_int a_p2601);
static void yr2606_MakeRecord(void * a_p2607, void * a_p2608, rt_int a_p2609);
static void * yr2614_FindField(void * a_p2615, rt_int a_p2616);
static rt_int yr2621_CharOrd(void * a_p2622, rt_int a_p2623);
static void * yr2628_AlphabetFor(void * a_p2629, void * a_p2630);
static rt_int yr2635_CharValue(void * a_p2636, rt_int a_p2637, rt_int a_p2638);
static rt_int yr2643_StringCodes(void * a_p2644, rt_int a_p2645, rt_int * a_p2646, rt_int a_p2647);
static void yr2652_Manifest(void * a_p2653, rt_int * a_p2654, rt_int * a_p2655);
static void yr2660_ManifestStd(void * a_p2661, rt_int * a_p2662, rt_int * a_p2663);
static rt_int yr2668_NeedsConv(void * a_p2669, void * a_p2670);
static rt_int yr2675_ConvertRecord(rt_int a_p2676, void * a_p2677, void * a_p2678);
static rt_int yr2683_ConvertArray(rt_int a_p2684, void * a_p2685, void * a_p2686);
static rt_int yr2691_RescaleCode(rt_int a_p2692, void * a_p2693, void * a_p2694);
static void yr2699_CommonScale(rt_int * a_p2700, void * a_p2701, rt_int * a_p2702, void * a_p2703, void * a_p2704, rt_int a_p2705);
static void yr2710_FixLiteral(void * a_p2711, rt_int * a_p2712, void * * a_p2713);
static void yr2718_ManifestFix(void * a_p2719, rt_int * a_p2720, rt_int * a_p2721, rt_int * a_p2722);
static rt_int yr2727_FloatChk(rt_int a_p2728);
static rt_int yr2733_Convert(rt_int a_p2734, void * a_p2735, void * a_p2736);
static rt_int yr2741_StoreText(rt_int a_p2742, void * a_p2743, rt_int a_p2744, void * a_p2745, rt_int a_p2746);
static void yr2751_Store(rt_int a_p2752, void * a_p2753, rt_int a_p2754, void * a_p2755, rt_int a_p2756);
static rt_int yr2761_IsVariable(void * a_p2762);
static void yr2767_CheckPure(void * a_p2768);
static void yr2773_LValue(void * a_p2774, rt_int * a_p2775, void * * a_p2776);
static rt_int yr2781_Paren(rt_int a_p2782);
static void * yr2787_Lit(void * a_p2788, rt_int a_p2789);
static void * yr2794_Qualifier(void * a_p2795);
static void yr2800_Expr(void * a_p2801, void * a_p2802, rt_int * a_p2803, void * * a_p2804);
static rt_int yr2809_VariantTest(void * a_p2810, void * a_p2811, rt_int a_p2812);
static void yr2817_NameExpr(void * a_p2818, void * a_p2819, rt_int * a_p2820, void * * a_p2821);
static void yr2826_IndexExpr(void * a_p2827, rt_int * a_p2828, void * * a_p2829);
static void yr2834_NegExpr(void * a_p2835, rt_int a_p2836, void * a_p2837, rt_int * a_p2838, void * * a_p2839);
static void * yr2844_Unbounded(void * a_p2845);
static rt_int yr2850_Call2(yarr a_p2852, rt_int a_p2853, rt_int a_p2854);
static rt_int yr2859_Infix(rt_int a_p2860, yarr a_p2862, rt_int a_p2863);
static rt_int yr2868_EqCode(rt_int a_p2869, void * a_p2870, rt_int a_p2871, void * a_p2872);
static rt_int yr2877_IsOrdered(void * a_p2878);
static rt_int yr2883_FixToFloat(rt_int a_p2884, void * a_p2885);
static void yr2890_BinExpr(void * a_p2891, void * a_p2892, rt_int * a_p2893, void * * a_p2894);
static rt_int yr2899_Fits(void * a_p2900, void * a_p2901);
static void * yr2906_Choose(void * a_p2907, rt_int a_p2908, rt_int a_p2909);
static rt_int yr2914_HidesStandard(void * a_p2915);
static void yr2920_CompileArgs(void * a_p2921, void * a_p2922, rt_int * a_p2923, rt_int * a_p2924);
static void yr2929_CheckUnresolved(void * a_p2930, void * a_p2931, rt_int a_p2932);
static rt_int yr2937_SameAsFormal(void * a_p2938, void * a_p2939);
static rt_int yr2944_CallCode(void * a_p2945, rt_int a_p2946, rt_int a_p2947, rt_int a_p2948);
static rt_int yr2953_Num(rt_int a_p2954);
static rt_int yr2959_UserOp(void * a_p2960, rt_int a_p2961, void * a_p2962, void * a_p2963, rt_int * a_p2964, void * * a_p2965);
static void yr2970_NoteCall(void * a_p2971, rt_int a_p2972);
static rt_int yr2977_UserAssign(rt_int a_p2978, void * a_p2979, rt_int a_p2980, void * a_p2981, rt_int a_p2982);
static void yr2987_Assign(rt_int a_p2988, void * a_p2989, rt_int a_p2990, void * a_p2991, rt_int a_p2992);
static void yr2997_CallExpr(void * a_p2998, void * a_p2999, rt_int a_p3000, rt_int * a_p3001, void * * a_p3002);
static void yr3007_Denote(void * a_p3008, void * a_p3009, rt_int * a_p3010, void * * a_p3011);
static rt_int yr3016_VariantOf(void * a_p3017, rt_int a_p3018, rt_int a_p3019);
static void yr3024_Emit2(yarr a_p3026, rt_int a_p3027);
static void yr3032_Emit3(yarr a_p3034, rt_int a_p3035, yarr a_p3037);
static void yr3042_PopTo(rt_int a_p3043);
static void yr3048_LeaveBlock(void);
static rt_int yr3053_RaiseCode(rt_int a_p3054);
static void yr3059_BlockStatements(void * a_p3060);
static rt_int yr3065_SameDesig(void * a_p3066, void * a_p3067);
static void yr3072_CheckVariantSelected(void * a_p3073, void * a_p3074, void * a_p3075);
static void yr3080_CheckCaseLabels(void * a_p3081, void * a_p3082);
static rt_int yr3087_Falls(void * a_p3088);
static rt_int yr3093_BlockFalls(void * a_p3094);
static rt_int yr3099_Completes(void * a_p3100);
static rt_int yr3105_Exits(void * a_p3106, rt_int a_p3107);
static void yr3112_Statements(void * a_p3113);
static rt_int yr3118_Cond(void * a_p3119);
static rt_int yr3124_Label(void * a_p3125, void * a_p3126);
static void yr3131_CopyOut(void);
static void yr3136_Statement(void * a_p3137);
static void yr3142_ForStatement(void * a_p3143);
static rt_int yr3148_Join(rt_int a_p3149, rt_int a_p3150, rt_int a_p3151);
static void yr3156_ReturnStatement(void * a_p3157);
static void yr3162_BeginStatement(void * a_p3163);
static void yr3168_PlaceLabel(void * a_p3169);
static void yr3174_GotoStatement(void * a_p3175);
static void yr3180_CheckLabels(void * a_p3181);
static rt_int yr3186_RoutineCName(rt_int a_p3187);
static void * yr3192_FormalRep(void * a_p3193);
static rt_int yr3198_ParamCType(void * a_p3199);
static void yr3204_RoutineHeader(void * a_p3205, rt_int a_p3206);
static void * yr3211_SameSignature(void * a_p3212, void * a_p3213);
static void yr3218_RoutineBody(void * a_p3219);
static void yr3224_DeclareStorage(void * a_p3225, void * a_p3226, rt_int a_p3227);
static void yr3232_SimpleDecl(void * a_p3233);
static void yr3238_NoteAlphabet(void * a_p3239, void * a_p3240);
static void yr3245_AtLocation(void * a_p3246, void * a_p3247);
static void yr3252_Defer(void * a_p3253, rt_int a_p3254, void * a_p3255, rt_int a_p3256);
static void yr3261_RunDeferred(rt_int a_p3262, rt_int a_p3263);
static void yr3268_ModuleInit(rt_int a_p3269);
static void yr3274_Declarations(void * a_p3275);
static void yr3280_DeclareRoutine(void * a_p3281);
static void * yr3286_Alias(rt_int a_p3287, void * a_p3288);
static void yr3293_AddLits(void * * a_p3294, void * a_p3295, rt_int a_p3296);
static rt_int yr3301_Provides(void * a_p3302, rt_int a_p3303);
static rt_int yr3308_ImportLater(rt_int a_p3309, rt_int a_p3310, void * * a_p3311);
static void * yr3316_OneDecl(void * a_p3317);
static void * yr3322_Lazy(rt_int a_p3323, rt_int a_p3324, void * a_p3325, rt_int a_p3326);
static void yr3331_SetLazy(rt_int a_p3332, void * a_p3333);
static void yr3338_ResolveFrom(void * a_p3339, void * a_p3340);
static void yr3345_ResolveLater(rt_int a_p3346);
static void yr3351_LazyModule(void * a_p3352, void * * a_p3353, rt_int a_p3354);
static void yr3359_ResolveItem(void * a_p3360, void * * a_p3361, rt_int a_p3362);
static void yr3367_DefineAll(void * a_p3368, rt_int a_p3369);
static void yr3374_CompileModule(void * a_p3375);
static void yr3380_DeclareTemplate(void * a_p3381);
static void yr3386_Instantiate(void * a_p3387);
static void yr3392_DeclareProcess(void * a_p3393);
static void yr3398_AwaitProcesses(void);
static void yr3403_Activate(void * a_p3404, void * a_p3405);
static rt_int yr3410_MonitorPath(void * a_p3411);
static void yr3416_EnterMonitor(void * a_p3417);
static void yr3422_LeaveMonitor(void);
static void yr3427_TerminateStatement(void * a_p3428);
static void yr3433_DeclareSignal(void * a_p3434, rt_int a_p3435);
static void yr3440_DeclareSignalArray(void * a_p3441, rt_int a_p3442);
static void yr3447_DeviceSignal(void * a_p3448, void * a_p3449);
static void * yr3454_Arg(void * a_p3455, rt_int a_p3456);
static void yr3461_NArgs(void * a_p3462, rt_int a_p3463);
static rt_int yr3468_Call1(yarr a_p3470, rt_int a_p3471);
static rt_int yr3476_Addr(rt_int a_p3477);
static void yr3482_StdVar(void * a_p3483, rt_int a_p3484, rt_int * a_p3485, void * * a_p3486);
static void yr3491_NumArg(void * a_p3492, rt_int * a_p3493, void * * a_p3494);
static rt_int yr3499_IntArg(void * a_p3500);
static void yr3505_CodeInsert(void * a_p3506);
static void * yr3511_ManifestScale(void * a_p3512, void * a_p3513);
static void yr3518_StdCall(rt_int a_p3519, void * a_p3520, rt_int a_p3521, rt_int * a_p3522, void * * a_p3523);
static void yr3528_StdRep(yarr a_p3530, void * a_p3531);
static void yr3536_StdOp(yarr a_p3538, rt_int a_p3539);
static void * yr3544_LitList(yarr a_p3546, yarr a_p3547, yarr a_p3548, rt_int a_p3549);
static void * yr3554_Abstract(rt_int a_p3555, yarr a_p3557);
static void yr3562_Predefine(void);
static void yr3567_Translate(void);
static void yr3572_WriteProgram(void);
static void yr987_InitChars(void) {
struct yf988 F;
memset((void *)&F, 0, sizeof F);
F.v3578 = INT64_C(0);
{ rt_int hi3583 = 127;
for (rt_int i3582 = 0; i3582 <= hi3583; i3582++) { F.c_3581 = i3582;
((rt_int *)(v949).p)[y_ix1(v949, F.c_3581)] = F.v3578;
((unsigned char *)(v960).p)[y_ix1(v960, F.v3578)] = F.c_3581;
F.v3578 = rt_range(rt_add(F.v3578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3582 == hi3583) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr992_IsLetter(unsigned char a_p993) {
struct yf994 F;
memset((void *)&F, 0, sizeof F);
F.p993 = a_p993;
{ rt_int rv3593 = ((((((F.p993 >= 65)) && ((F.p993 <= 90)))) || ((((F.p993 >= 97)) && ((F.p993 <= 122))))) || ((F.p993 == 95)));
return rv3593; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr998_IsDigit(unsigned char a_p999) {
struct yf1000 F;
memset((void *)&F, 0, sizeof F);
F.p999 = a_p999;
{ rt_int rv3598 = (((F.p999 >= 48)) && ((F.p999 <= 57)));
return rv3598; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1004_PoolAdd(unsigned char a_p1005) {
struct yf1006 F;
memset((void *)&F, 0, sizeof F);
F.p1005 = a_p1005;
v899 = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v897).p)[y_ix1(v897, v899)] = F.p1005;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SB(void) {
struct yf1011 F;
memset((void *)&F, 0, sizeof F);
v939 = rt_range(rt_add(v939, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v937).p)[y_ix1(v937, v939)] = v925;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1015_SC(unsigned char a_p1016) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.p1016 = a_p1016;
v925 = rt_range(rt_add(v925, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v923).p)[y_ix1(v923, v925)] = F.p1016;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1021_SA(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
F.lo3617 = y_low(F.p1023, INT64_C(1));
F.hi3618 = y_high(F.p1023, INT64_C(1));
{ rt_int hi3622 = F.hi3618;
for (rt_int i3621 = F.lo3617; i3621 <= hi3622; i3621++) { F.c_3620 = i3621;
yr1015_SC(((unsigned char *)(F.p1023).p)[y_ix1(F.p1023, F.c_3620)]);
if (i3621 == hi3622) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1028_ST(rt_int a_p1029) {
struct yf1030 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
if ((F.p1029 == INT64_C(0))) {
return;
}
F.v3626 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1029)];
while ((F.v3626 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1029)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1029)])))) {
yr1015_SC(((unsigned char *)(v897).p)[y_ix1(v897, F.v3626)]);
F.v3626 = rt_range(rt_add(F.v3626, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1034_SI(rt_int a_p1035) {
struct yf1036 F;
memset((void *)&F, 0, sizeof F);
F.p1035 = a_p1035;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3641, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3641, &F.v3643);
F.v3645 = INT64_C(0);
F.v3648 = F.p1035;
if ((F.v3648 < INT64_C(0))) {
yr1015_SC(45);
F.v3648 = rt_range(rt_neg(F.v3648), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v3645 = rt_range(rt_add(F.v3645, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3643).p)[y_ix1(F.v3643, F.v3645)] = ((unsigned char *)(v960).p)[y_ix1(v960, rt_add((rt_mod(F.v3648, INT64_C(10))), INT64_C(48)))];
F.v3648 = rt_range(rt_div(F.v3648, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3648 == INT64_C(0))) {
goto yl_3652;
}
}
yl_3652: ;
while ((F.v3645 > INT64_C(0))) {
yr1015_SC(((unsigned char *)(F.v3643).p)[y_ix1(F.v3643, F.v3645)]);
F.v3645 = rt_range(rt_sub(F.v3645, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1040_SE(void) {
struct yf1041 F;
memset((void *)&F, 0, sizeof F);
F.v3667 = ((rt_int *)(v937).p)[y_ix1(v937, v939)];
v939 = rt_range(rt_sub(v939, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v902).p)[y_ix1(v902, v906)] = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v904).p)[y_ix1(v904, v906)] = rt_range(rt_sub(v925, F.v3667), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3678 = rt_add(F.v3667, INT64_C(1));
F.hi3679 = v925;
{ rt_int hi3683 = F.hi3679;
for (rt_int i3682 = F.lo3678; i3682 <= hi3683; i3682++) { F.c_3681 = i3682;
yr1004_PoolAdd(((unsigned char *)(v923).p)[y_ix1(v923, F.c_3681)]);
if (i3682 == hi3683) break;
}}
v925 = F.v3667;
{ rt_int rv3684 = rt_range(v906, INT64_C(0), INT64_C(4000000));
return rv3684; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1045_T(yarr a_p1047) {
struct yf1048 F;
memset((void *)&F, 0, sizeof F);
F.p1047 = a_p1047;
yr1010_SB();
yr1021_SA(F.p1047);
{ rt_int rv3687 = yr1040_SE();
return rv3687; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1052_Intern(rt_int a_p1053, rt_int a_p1054) {
struct yf1055 F;
memset((void *)&F, 0, sizeof F);
F.p1053 = a_p1053;
F.p1054 = a_p1054;
F.v3692 = INT64_C(0);
F.lo3702 = F.p1053;
F.hi3703 = rt_sub((rt_add(F.p1053, F.p1054)), INT64_C(1));
{ rt_int hi3707 = F.hi3703;
for (rt_int i3706 = F.lo3702; i3706 <= hi3707; i3706++) { F.c_3705 = i3706;
F.v3692 = rt_range(rt_mod((rt_add((rt_mul(F.v3692, INT64_C(31))), ((rt_int *)(v949).p)[y_ix1(v949, ((unsigned char *)(v897).p)[y_ix1(v897, F.c_3705)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3706 == hi3707) break;
}}
for (;;) {
if ((((rt_int *)(v909).p)[y_ix1(v909, F.v3692)] == INT64_C(0))) {
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v902).p)[y_ix1(v902, v906)] = F.p1053;
((rt_int *)(v904).p)[y_ix1(v904, v906)] = F.p1054;
((rt_int *)(v909).p)[y_ix1(v909, F.v3692)] = rt_range(v906, INT64_C(0), INT64_C(4000000));
{ rt_int rv3717 = rt_range(v906, INT64_C(0), INT64_C(4000000));
return rv3717; }
}
F.v3695 = ((rt_int *)(v909).p)[y_ix1(v909, F.v3692)];
if ((((rt_int *)(v904).p)[y_ix1(v904, F.v3695)] == F.p1054)) {
F.v3697 = 1;
F.lo3724 = INT64_C(0);
F.hi3725 = rt_sub(F.p1054, INT64_C(1));
{ rt_int hi3729 = F.hi3725;
for (rt_int i3728 = F.lo3724; i3728 <= hi3729; i3728++) { F.c_3727 = i3728;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3695)], F.c_3727))] == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(F.p1053, F.c_3727))]))) {
F.v3697 = 0;
}
if (i3728 == hi3729) break;
}}
if (F.v3697) {
{ rt_int rv3733 = rt_range(F.v3695, INT64_C(0), INT64_C(4000000));
return rv3733; }
}
}
F.v3692 = rt_range(rt_mod((rt_add(F.v3692, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3713: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1059_Name(rt_int a_p1060) {
struct yf1061 F;
memset((void *)&F, 0, sizeof F);
F.p1060 = a_p1060;
{ rt_int rv3740 = yr1052_Intern(((rt_int *)(v902).p)[y_ix1(v902, F.p1060)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1060)]);
return rv3740; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1065_N(yarr a_p1067) {
struct yf1068 F;
memset((void *)&F, 0, sizeof F);
F.p1067 = a_p1067;
{ rt_int rv3743 = yr1059_Name(yr1045_T(F.p1067));
return rv3743; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1072_TEq(rt_int a_p1073, rt_int a_p1074) {
struct yf1075 F;
memset((void *)&F, 0, sizeof F);
F.p1073 = a_p1073;
F.p1074 = a_p1074;
if ((F.p1073 == F.p1074)) {
{ rt_int rv3748 = 1;
return rv3748; }
}
if ((!(((rt_int *)(v904).p)[y_ix1(v904, F.p1073)] == ((rt_int *)(v904).p)[y_ix1(v904, F.p1074)]))) {
{ rt_int rv3750 = 0;
return rv3750; }
}
F.lo3756 = INT64_C(0);
F.hi3757 = rt_sub(((rt_int *)(v904).p)[y_ix1(v904, F.p1073)], INT64_C(1));
{ rt_int hi3761 = F.hi3757;
for (rt_int i3760 = F.lo3756; i3760 <= hi3761; i3760++) { F.c_3759 = i3760;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1073)], F.c_3759))] == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1074)], F.c_3759))]))) {
{ rt_int rv3765 = 0;
return rv3765; }
}
if (i3760 == hi3761) break;
}}
{ rt_int rv3767 = 1;
return rv3767; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1079_TStarts(rt_int a_p1080, yarr a_p1082) {
struct yf1083 F;
memset((void *)&F, 0, sizeof F);
F.p1080 = a_p1080;
F.p1082 = a_p1082;
F.v3772 = INT64_C(0);
if ((((rt_int *)(v904).p)[y_ix1(v904, F.p1080)] < (rt_add((rt_sub(y_high(F.p1082, INT64_C(1)), y_low(F.p1082, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3782 = 0;
return rv3782; }
}
F.lo3788 = y_low(F.p1082, INT64_C(1));
F.hi3789 = y_high(F.p1082, INT64_C(1));
{ rt_int hi3793 = F.hi3789;
for (rt_int i3792 = F.lo3788; i3792 <= hi3793; i3792++) { F.c_3791 = i3792;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1080)], F.v3772))] == ((unsigned char *)(F.p1082).p)[y_ix1(F.p1082, F.c_3791)]))) {
{ rt_int rv3796 = 0;
return rv3796; }
}
F.v3772 = rt_range(rt_add(F.v3772, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3792 == hi3793) break;
}}
{ rt_int rv3800 = 1;
return rv3800; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1087_TChar(rt_int a_p1088, rt_int a_p1089) {
struct yf1090 F;
memset((void *)&F, 0, sizeof F);
F.p1088 = a_p1088;
F.p1089 = a_p1089;
{ unsigned char rv3807 = ((unsigned char *)(v897).p)[y_ix1(v897, rt_sub((rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1088)], F.p1089)), INT64_C(1)))];
return rv3807; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1094_Put(yR134 * a_p1095, rt_int a_p1096) {
struct yf1097 F;
memset((void *)&F, 0, sizeof F);
F.p1095 = a_p1095;
F.p1096 = a_p1096;
({ F.v3812 = rt_alloc(sizeof(yR129)); });
(*(yR129 *)rt_nil_check(F.v3812)) = ((yR129){ .f_t = F.p1096, .f_next = ((void *)0) });
if ((((*F.p1095)).f_head == ((void *)0))) {
((*F.p1095)).f_head = F.v3812;
} else {
((*(yR129 *)rt_nil_check(((*F.p1095)).f_tail))).f_next = F.v3812;
}
((*F.p1095)).f_tail = F.v3812;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1101_PutS(yR134 * a_p1102, yarr a_p1104) {
struct yf1105 F;
memset((void *)&F, 0, sizeof F);
F.p1102 = a_p1102;
F.p1104 = a_p1104;
yr1094_Put(&(*F.p1102), yr1045_T(F.p1104));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1109_Append(yR134 * a_p1110, yR134 * a_p1111) {
struct yf1112 F;
memset((void *)&F, 0, sizeof F);
F.p1110 = a_p1110;
F.p1111 = a_p1111;
if ((((*F.p1111)).f_head == ((void *)0))) {
return;
}
if ((((*F.p1110)).f_head == ((void *)0))) {
((*F.p1110)).f_head = ((*F.p1111)).f_head;
} else {
((*(yR129 *)rt_nil_check(((*F.p1110)).f_tail))).f_next = ((*F.p1111)).f_head;
}
((*F.p1110)).f_tail = ((*F.p1111)).f_tail;
((*F.p1111)).f_head = ((void *)0);
((*F.p1111)).f_tail = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1116_Emit(rt_int a_p1117) {
struct yf1118 F;
memset((void *)&F, 0, sizeof F);
F.p1117 = a_p1117;
yr1094_Put(&v980, F.p1117);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1122_EmitS(yarr a_p1124) {
struct yf1125 F;
memset((void *)&F, 0, sizeof F);
F.p1124 = a_p1124;
yr1094_Put(&v980, yr1045_T(F.p1124));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1129_WriteTxt(rt_int a_p1130) {
struct yf1131 F;
memset((void *)&F, 0, sizeof F);
F.p1130 = a_p1130;
F.v3826 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1130)];
while ((F.v3826 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1130)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1130)])))) {
({ unsigned char pv = ((unsigned char *)(v897).p)[y_ix1(v897, F.v3826)]; y_put(&v895, &pv, sizeof pv); });
F.v3826 = rt_range(rt_add(F.v3826, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1135_WriteBuf(yR134 a_p1136) {
struct yf1137 F;
memset((void *)&F, 0, sizeof F);
F.p1136 = a_p1136;
F.v3833 = (F.p1136).f_head;
while ((!(F.v3833 == ((void *)0)))) {
yr1129_WriteTxt(((*(yR129 *)rt_nil_check(F.v3833))).f_t);
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
F.v3833 = ((*(yR129 *)rt_nil_check(F.v3833))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1141_Fail(rt_int a_p1142, rt_int a_p1143) {
struct yf1144 F;
memset((void *)&F, 0, sizeof F);
F.p1142 = a_p1142;
F.p1143 = a_p1143;
v939 = INT64_C(0);
v925 = INT64_C(0);
yr1010_SB();
yr1021_SA(y_str("line ", 5));
yr1034_SI(F.p1142);
yr1021_SA(y_str(": ", 2));
yr1028_ST(F.p1143);
F.v3839 = yr1040_SE();
yr1129_WriteTxt(F.v3839);
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
y_close(&v895);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1148_Warn(rt_int a_p1149, rt_int a_p1150) {
struct yf1151 F;
memset((void *)&F, 0, sizeof F);
F.p1149 = a_p1149;
F.p1150 = a_p1150;
yr1010_SB();
yr1021_SA(y_str("line ", 5));
yr1034_SI(F.p1149);
yr1021_SA(y_str(": warning: ", 11));
yr1028_ST(F.p1150);
F.v3849 = yr1040_SE();
yr1155_WriteTo(&v978, F.v3849);
({ unsigned char pv = 10; y_put(&v978, &pv, sizeof pv); });
yr1010_SB();
yr1021_SA(y_str("/* ", 3));
yr1028_ST(F.v3849);
yr1021_SA(y_str(" */", 3));
F.v3849 = yr1040_SE();
yr1094_Put(&v976, F.v3849);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1155_WriteTo(yfile * * a_p1156, rt_int a_p1157) {
struct yf1158 F;
memset((void *)&F, 0, sizeof F);
F.p1156 = a_p1156;
F.p1157 = a_p1157;
F.v3859 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1157)];
while ((F.v3859 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1157)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1157)])))) {
({ unsigned char pv = ((unsigned char *)(v897).p)[y_ix1(v897, F.v3859)]; y_put(&(*F.p1156), &pv, sizeof pv); });
F.v3859 = rt_range(rt_add(F.v3859, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1162_FailS(rt_int a_p1163, yarr a_p1165) {
struct yf1166 F;
memset((void *)&F, 0, sizeof F);
F.p1163 = a_p1163;
F.p1165 = a_p1165;
yr1141_Fail(F.p1163, yr1045_T(F.p1165));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1170_FailN(rt_int a_p1171, rt_int a_p1172, yarr a_p1174) {
struct yf1175 F;
memset((void *)&F, 0, sizeof F);
F.p1171 = a_p1171;
F.p1172 = a_p1172;
F.p1174 = a_p1174;
yr1010_SB();
yr1028_ST(F.p1172);
yr1021_SA(F.p1174);
F.v3871 = yr1040_SE();
yr1141_Fail(F.p1171, F.v3871);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1179_NewSerial(void) {
struct yf1180 F;
memset((void *)&F, 0, sizeof F);
v942 = rt_range(rt_add(v942, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3875 = v942;
return rv3875; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1184_Fresh(yarr a_p1186) {
struct yf1187 F;
memset((void *)&F, 0, sizeof F);
F.p1186 = a_p1186;
F.v3879 = yr1179_NewSerial();
yr1010_SB();
yr1021_SA(F.p1186);
yr1034_SI(F.v3879);
{ rt_int rv3880 = yr1040_SE();
return rv3880; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1785_InitWords(void) {
struct yf1786 F;
memset((void *)&F, 0, sizeof F);
yr1010_SB();
yr1021_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
yr1021_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
yr1021_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
yr1021_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
yr1021_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
yr1021_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
yr1021_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
yr1021_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
yr1021_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
yr1021_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := => .. <= >= ## == << >> ", 77));
yr1021_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v3887 = yr1040_SE();
v906 = INT64_C(0);
F.v3883 = ((rt_int *)(v902).p)[y_ix1(v902, F.v3887)];
F.lo3904 = ((rt_int *)(v902).p)[y_ix1(v902, F.v3887)];
F.hi3905 = rt_sub((rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3887)], ((rt_int *)(v904).p)[y_ix1(v904, F.v3887)])), INT64_C(1));
{ rt_int hi3909 = F.hi3905;
for (rt_int i3908 = F.lo3904; i3908 <= hi3909; i3908++) { F.c_3907 = i3908;
if ((((unsigned char *)(v897).p)[y_ix1(v897, F.c_3907)] == 32)) {
F.v3885 = yr1052_Intern(F.v3883, rt_range(rt_sub(F.c_3907, F.v3883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3883 = rt_range(rt_add(F.c_3907, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3908 == hi3909) break;
}}
if ((!(v906 == v605))) {
rt_raise(rt_exc("word_table"));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1790_ReadSource(void) {
struct yf1791 F;
memset((void *)&F, 0, sizeof F);
y_open(&v893, y_str("INPUT", 5), 0);
v1200 = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v893))) {
({ unsigned char g; y_get(&v893, &g, sizeof g); F.v3916 = g; });
yr1004_PoolAdd(F.v3916);
}
v1203 = v899;
y_close(&v893);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1795_AddTok(rt_int a_p1796, rt_int a_p1797) {
struct yf1798 F;
memset((void *)&F, 0, sizeof F);
F.p1796 = a_p1796;
F.p1797 = a_p1797;
v1197 = rt_range(rt_add(v1197, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1191).p)[y_ix1(v1191, v1197)] = F.p1796;
((rt_int *)(v1193).p)[y_ix1(v1193, v1197)] = F.p1797;
((rt_int *)(v1195).p)[y_ix1(v1195, v1197)] = v1209;
return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1802_At(rt_int a_p1803) {
struct yf1804 F;
memset((void *)&F, 0, sizeof F);
F.p1803 = a_p1803;
if ((F.p1803 > v1203)) {
{ unsigned char rv3929 = 0;
return rv3929; }
}
{ unsigned char rv3930 = ((unsigned char *)(v897).p)[y_ix1(v897, F.p1803)];
return rv3930; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1808_EndsOperand(void) {
struct yf1809 F;
memset((void *)&F, 0, sizeof F);
if ((v1197 == INT64_C(0))) {
{ rt_int rv3938 = 0;
return rv3938; }
}
F.v3933 = ((rt_int *)(v1191).p)[y_ix1(v1191, v1197)];
F.v3935 = ((rt_int *)(v1193).p)[y_ix1(v1193, v1197)];
if ((((((((F.v3933 == v191)) || ((F.v3933 == v200))) || ((F.v3933 == v203))) || ((F.v3933 == v206))) || ((F.v3933 == v209))) || ((F.v3933 == v212)))) {
{ rt_int rv3940 = 1;
return rv3940; }
}
if ((F.v3933 == v197)) {
{ rt_int rv3941 = ((((F.v3935 == v581)) || ((F.v3935 == v587))) || ((F.v3935 == v602)));
return rv3941; }
}
if ((F.v3933 == v194)) {
{ rt_int rv3942 = (F.v3935 == v371);
return rv3942; }
}
{ rt_int rv3944 = 0;
return rv3944; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1813_DigitVal(unsigned char a_p1814) {
struct yf1815 F;
memset((void *)&F, 0, sizeof F);
F.p1814 = a_p1814;
if ((((F.p1814 >= 48)) && ((F.p1814 <= 57)))) {
{ rt_int rv3951 = rt_range(rt_sub(((rt_int *)(v949).p)[y_ix1(v949, F.p1814)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3951; }
}
if ((((F.p1814 >= 65)) && ((F.p1814 <= 70)))) {
{ rt_int rv3956 = rt_range(rt_sub(((rt_int *)(v949).p)[y_ix1(v949, F.p1814)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3956; }
}
{ rt_int rv3958 = INT64_C(99);
return rv3958; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1819_LexError(yarr a_p1821) {
struct yf1822 F;
memset((void *)&F, 0, sizeof F);
F.p1821 = a_p1821;
yr1162_FailS(v1209, F.p1821);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1826_LexDigits(rt_int a_p1827, rt_int a_p1828) {
struct yf1829 F;
memset((void *)&F, 0, sizeof F);
F.p1827 = a_p1827;
F.p1828 = a_p1828;
while ((yr998_IsDigit(yr1802_At(v1206)) || ((F.p1828 && ((yr1813_DigitVal(yr1802_At(v1206)) < INT64_C(16))))))) {
if ((yr1813_DigitVal(yr1802_At(v1206)) >= F.p1827)) {
yr1010_SB();
yr1015_SC(39);
yr1015_SC(yr1802_At(v1206));
yr1021_SA(y_str("' is not a digit of BASE", 24));
yr1034_SI(F.p1827);
yr1021_SA(y_str(" (IV.B)", 7));
F.v3965 = yr1040_SE();
yr1141_Fail(v1209, F.v3965);
}
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1833_LexNumber(rt_int a_p1834) {
struct yf1835 F;
memset((void *)&F, 0, sizeof F);
F.p1834 = a_p1834;
F.v3975 = INT64_C(10);
F.v3986 = 0;
F.v3989 = 0;
F.v3992 = INT64_C(0);
F.v3995 = INT64_C(0);
F.v3998 = INT64_C(0);
F.v4001 = INT64_C(0);
F.v4004 = INT64_C(0);
if ((!(v1212 == INT64_C(0)))) {
F.v3975 = v1212;
F.v3989 = 1;
}
v1212 = INT64_C(0);
F.v3978 = v1206;
yr1826_LexDigits(F.v3975, F.v3989);
F.v3980 = v1206;
if ((F.v3980 == F.v3978)) {
yr1819_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v3982 = v1206;
F.v3984 = v1206;
if ((((yr1802_At(v1206) == 46)) && ((!(yr1802_At(rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3986 = 1;
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3982 = v1206;
yr1826_LexDigits(F.v3975, F.v3989);
F.v3984 = v1206;
}
if ((yr1802_At(v1206) == 80)) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4001 = INT64_C(1);
if ((((((yr1802_At(v1206) == 45)) || ((yr1802_At(v1206) == 43)))) && yr998_IsDigit(yr1802_At(rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1802_At(v1206) == 45)) {
F.v4001 = INT64_C(-1);
}
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3998 = INT64_C(0);
while (yr998_IsDigit(yr1802_At(v1206))) {
if ((F.v3998 > INT64_C(1000))) {
yr1819_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v3998 = rt_range(rt_add((rt_mul(F.v3998, INT64_C(10))), yr1813_DigitVal(yr1802_At(v1206))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3998 = rt_range(rt_mul(F.v3998, F.v4001), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3992 = INT64_C(0);
F.v4004 = rt_range(rt_sub(F.v3984, F.v3982), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4045 = F.v3978;
F.hi4046 = rt_sub(F.v3984, INT64_C(1));
{ rt_int hi4050 = F.hi4046;
for (rt_int i4049 = F.lo4045; i4049 <= hi4050; i4049++) { F.c_4048 = i4049;
if ((((F.c_4048 < F.v3980)) || ((F.c_4048 >= F.v3982)))) {
F.v3995 = yr1813_DigitVal(((unsigned char *)(v897).p)[y_ix1(v897, F.c_4048)]);
if ((F.v3992 > (rt_div((rt_sub(v890, F.v3995)), F.v3975)))) {
yr1819_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v3992 = rt_range(rt_add((rt_mul(F.v3992, F.v3975)), F.v3995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4049 == hi4050) break;
}}
if (F.p1834) {
F.v3992 = rt_range(rt_neg(F.v3992), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1230 >= INT64_C(200000))) {
yr1819_LexError(y_str("too many fixed-point literals", 29));
}
v1230 = rt_range(rt_add(v1230, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1224).p)[y_ix1(v1224, v1230)] = F.v3992;
((rt_int *)(v1226).p)[y_ix1(v1226, v1230)] = F.v3975;
((rt_int *)(v1228).p)[y_ix1(v1228, v1230)] = rt_range(rt_sub(F.v3998, F.v4004), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1795_AddTok(v203, v1230);
return;
}
if (F.v3986) {
if ((!(F.v3975 == INT64_C(10)))) {
yr1819_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1802_At(v1206) == 69)) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1802_At(v1206) == 45)) || ((yr1802_At(v1206) == 43)))) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr998_IsDigit(yr1802_At(v1206))) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1010_SB();
if (F.p1834) {
yr1021_SA(y_str("-", 1));
}
F.lo4077 = F.v3978;
F.hi4078 = rt_sub(v1206, INT64_C(1));
{ rt_int hi4082 = F.hi4078;
for (rt_int i4081 = F.lo4077; i4081 <= hi4082; i4081++) { F.c_4080 = i4081;
yr1015_SC(((unsigned char *)(v897).p)[y_ix1(v897, F.c_4080)]);
if (i4081 == hi4082) break;
}}
F.v4007 = yr1040_SE();
yr1795_AddTok(v206, F.v4007);
return;
}
F.v3992 = INT64_C(0);
F.lo4087 = F.v3978;
F.hi4088 = rt_sub(F.v3980, INT64_C(1));
{ rt_int hi4092 = F.hi4088;
for (rt_int i4091 = F.lo4087; i4091 <= hi4092; i4091++) { F.c_4090 = i4091;
F.v3995 = yr1813_DigitVal(((unsigned char *)(v897).p)[y_ix1(v897, F.c_4090)]);
if ((F.v3992 > (rt_div((rt_sub(v890, F.v3995)), F.v3975)))) {
yr1819_LexError(y_str("integer literal too large", 25));
}
F.v3992 = rt_range(rt_add((rt_mul(F.v3992, F.v3975)), F.v3995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4091 == hi4092) break;
}}
if (F.p1834) {
F.v3992 = rt_range(rt_neg(F.v3992), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1795_AddTok(v200, F.v3992);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1839_LexString(void) {
struct yf1840 F;
memset((void *)&F, 0, sizeof F);
yr1010_SB();
for (;;) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1802_At(v1206) == 34))) {
if ((((yr1802_At(v1206) == 10)) || ((v1206 > v1203)))) {
v911 = 0;
yr1819_LexError(y_str("a string must close on its line", 31));
}
yr1015_SC(yr1802_At(v1206));
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4103 = v1206;
F.v4105 = INT64_C(0);
F.v4107 = 1;
while (F.v4107) {
if (((((yr1802_At(F.v4103) == 32)) || ((yr1802_At(F.v4103) == 9))) || ((yr1802_At(F.v4103) == 13)))) {
F.v4103 = rt_range(rt_add(F.v4103, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1802_At(F.v4103) == 10)) {
F.v4105 = rt_range(rt_add(F.v4105, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4103 = rt_range(rt_add(F.v4103, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4107 = 0;
}
}
if ((!(yr1802_At(F.v4103) == 34))) {
goto yl_4108;
}
v1209 = rt_range(rt_add(v1209, F.v4105), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1206 = F.v4103;
}
yl_4108: ;
F.v4101 = yr1040_SE();
yr1795_AddTok(v212, F.v4101);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1844_Lex(void) {
struct yf1845 F;
memset((void *)&F, 0, sizeof F);
v1206 = v1200;
while ((v1206 <= v1203)) {
F.v4136 = ((unsigned char *)(v897).p)[y_ix1(v897, v1206)];
if ((F.v4136 == 10)) {
v1209 = rt_range(rt_add(v1209, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4136 == 32)) || ((F.v4136 == 9))) || ((F.v4136 == 13))) || ((F.v4136 == 12)))) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4136 == 40)) && ((yr1802_At(rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1206 = rt_range(rt_add(v1206, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1802_At(v1206) == 42)) && ((yr1802_At(rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1802_At(v1206) == 10)) || ((v1206 > v1203)))) {
yr1819_LexError(y_str("a comment must close on its line", 32));
}
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1206 = rt_range(rt_add(v1206, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr998_IsDigit(F.v4136) || ((((v1212 == INT64_C(16))) && ((yr1813_DigitVal(F.v4136) < INT64_C(16))))))) {
yr1833_LexNumber(0);
} else if (((((((F.v4136 == 45)) || ((F.v4136 == 43)))) && (!yr1808_EndsOperand())) && ((yr998_IsDigit(yr1802_At(rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1212 == INT64_C(16))) && ((yr1813_DigitVal(yr1802_At(rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1833_LexNumber((F.v4136 == 45));
} else if ((!(v1212 == INT64_C(0)))) {
yr1819_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr992_IsLetter(F.v4136)) {
F.v4138 = v1206;
while ((yr992_IsLetter(yr1802_At(v1206)) || yr998_IsDigit(yr1802_At(v1206)))) {
v1206 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4146 = yr1052_Intern(F.v4138, rt_range(rt_sub(v1206, F.v4138), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4146 == v236)) {
v1212 = INT64_C(2);
} else if ((F.v4146 == v239)) {
v1212 = INT64_C(8);
} else if ((F.v4146 == v242)) {
v1212 = INT64_C(10);
} else if ((F.v4146 == v245)) {
v1212 = INT64_C(16);
} else if ((F.v4146 <= v476)) {
yr1795_AddTok(v194, F.v4146);
} else {
yr1795_AddTok(v191, F.v4146);
}
} else if ((F.v4136 == 39)) {
F.v4138 = rt_range(rt_add(v1206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4140 = F.v4138;
while ((!(yr1802_At(F.v4140) == 39))) {
if (((((yr1802_At(F.v4140) == 10)) || ((yr1802_At(F.v4140) == 34))) || ((F.v4140 > v1203)))) {
yr1819_LexError(y_str("bad character literal", 21));
}
F.v4140 = rt_range(rt_add(F.v4140, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4140 == F.v4138)) {
yr1819_LexError(y_str("empty character literal", 23));
}
F.v4146 = yr1052_Intern(F.v4138, rt_range(rt_sub(F.v4140, F.v4138), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1795_AddTok(v209, F.v4146);
v1206 = rt_range(rt_add(F.v4140, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4136 == 34)) {
yr1839_LexString();
} else {
F.v4142 = INT64_C(0);
F.v4140 = rt_range(rt_add(v476, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4142 == INT64_C(0))) && ((F.v4140 <= v605)))) {
F.v4144 = ((rt_int *)(v904).p)[y_ix1(v904, F.v4140)];
F.v4150 = 1;
F.lo4225 = INT64_C(0);
F.hi4226 = rt_sub(F.v4144, INT64_C(1));
{ rt_int hi4230 = F.hi4226;
for (rt_int i4229 = F.lo4225; i4229 <= hi4230; i4229++) { F.c_4228 = i4229;
if ((!(yr1802_At(rt_range(rt_add(v1206, F.c_4228), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v4140)], F.c_4228))]))) {
F.v4150 = 0;
}
if (i4229 == hi4230) break;
}}
if (F.v4150) {
F.v4142 = F.v4140;
}
F.v4140 = rt_range(rt_add(F.v4140, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4142 == INT64_C(0))) {
yr1819_LexError(y_str("a character that is not in the language", 39));
}
yr1795_AddTok(v197, F.v4142);
v1206 = rt_range(rt_add(v1206, ((rt_int *)(v904).p)[y_ix1(v904, F.v4142)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1795_AddTok(v188, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1849_NewNode(rt_int a_p1850, rt_int a_p1851) {
struct yf1852 F;
memset((void *)&F, 0, sizeof F);
F.p1850 = a_p1850;
F.p1851 = a_p1851;
({ F.v4244 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v4244)) = ((yR99){ .f_kind = F.p1850, .f_line = F.p1851, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv4249 = F.v4244;
return rv4249; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1856_Link(void * * a_p1857, void * * a_p1858, void * a_p1859) {
struct yf1860 F;
memset((void *)&F, 0, sizeof F);
F.p1857 = a_p1857;
F.p1858 = a_p1858;
F.p1859 = a_p1859;
if (((*F.p1857) == ((void *)0))) {
(*F.p1857) = F.p1859;
} else {
((*(yR99 *)rt_nil_check((*F.p1858)))).f_next = F.p1859;
}
(*F.p1858) = F.p1859;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1864_Count(void * a_p1865) {
struct yf1866 F;
memset((void *)&F, 0, sizeof F);
F.p1865 = a_p1865;
F.v4257 = INT64_C(0);
F.v4260 = F.p1865;
while ((!(F.v4260 == ((void *)0)))) {
F.v4257 = rt_range(rt_add(F.v4257, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4260 = ((*(yR99 *)rt_nil_check(F.v4260))).f_next;
}
{ rt_int rv4263 = F.v4257;
return rv4263; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1870_TK(void) {
struct yf1871 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4265 = ((rt_int *)(v1191).p)[y_ix1(v1191, v1233)];
return rv4265; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1875_TV(void) {
struct yf1876 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4267 = ((rt_int *)(v1193).p)[y_ix1(v1193, v1233)];
return rv4267; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1880_TLn(void) {
struct yf1881 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4269 = ((rt_int *)(v1195).p)[y_ix1(v1195, v1233)];
return rv4269; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1885_IsAt(rt_int a_p1886, rt_int a_p1887) {
struct yf1888 F;
memset((void *)&F, 0, sizeof F);
F.p1886 = a_p1886;
F.p1887 = a_p1887;
F.v4274 = ((rt_int *)(v1191).p)[y_ix1(v1191, rt_add(v1233, F.p1886))];
{ rt_int rv4277 = (((((F.v4274 == v194)) || ((F.v4274 == v197)))) && ((((rt_int *)(v1193).p)[y_ix1(v1193, rt_add(v1233, F.p1886))] == F.p1887)));
return rv4277; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1892_Is(rt_int a_p1893) {
struct yf1894 F;
memset((void *)&F, 0, sizeof F);
F.p1893 = a_p1893;
{ rt_int rv4281 = yr1885_IsAt(INT64_C(0), F.p1893);
return rv4281; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1898_IsIdAt(rt_int a_p1899) {
struct yf1900 F;
memset((void *)&F, 0, sizeof F);
F.p1899 = a_p1899;
{ rt_int rv4285 = (((rt_int *)(v1191).p)[y_ix1(v1191, rt_add(v1233, F.p1899))] == v191);
return rv4285; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1904_Skip(void) {
struct yf1905 F;
memset((void *)&F, 0, sizeof F);
if ((!(((rt_int *)(v1191).p)[y_ix1(v1191, v1233)] == v188))) {
v1233 = rt_range(rt_add(v1233, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1909_Accept(rt_int a_p1910) {
struct yf1911 F;
memset((void *)&F, 0, sizeof F);
F.p1910 = a_p1910;
if (yr1892_Is(F.p1910)) {
yr1904_Skip();
{ rt_int rv4292 = 1;
return rv4292; }
}
{ rt_int rv4294 = 0;
return rv4294; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1915_TokText(void) {
struct yf1916 F;
memset((void *)&F, 0, sizeof F);
F.v4297 = yr1870_TK();
if ((((((F.v4297 == v191)) || ((F.v4297 == v194))) || ((F.v4297 == v197))) || ((F.v4297 == v209)))) {
{ rt_int rv4298 = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
return rv4298; }
}
if ((F.v4297 == v188)) {
{ rt_int rv4300 = yr1045_T(y_str("the end of the text", 19));
return rv4300; }
}
if ((F.v4297 == v200)) {
yr1010_SB();
yr1034_SI(yr1875_TV());
{ rt_int rv4301 = yr1040_SE();
return rv4301; }
}
{ rt_int rv4303 = yr1045_T(y_str("a literal", 9));
return rv4303; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1920_Expect(rt_int a_p1921) {
struct yf1922 F;
memset((void *)&F, 0, sizeof F);
F.p1921 = a_p1921;
if ((!yr1909_Accept(F.p1921))) {
yr1010_SB();
yr1021_SA(y_str("expected ", 9));
yr1028_ST(rt_range(F.p1921, INT64_C(0), INT64_C(4000000)));
yr1021_SA(y_str(", found ", 8));
yr1028_ST(yr1915_TokText());
F.v4307 = yr1040_SE();
yr1141_Fail(yr1880_TLn(), F.v4307);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1926_Ident(void) {
struct yf1927 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1870_TK() == v191))) {
yr1010_SB();
yr1021_SA(y_str("expected an identifier, found ", 30));
yr1028_ST(yr1915_TokText());
F.v4312 = yr1040_SE();
yr1141_Fail(yr1880_TLn(), F.v4312);
}
F.v4312 = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
yr1904_Skip();
{ rt_int rv4314 = F.v4312;
return rv4314; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1931_CloseName(rt_int a_p1932, rt_int a_p1933) {
struct yf1934 F;
memset((void *)&F, 0, sizeof F);
F.p1932 = a_p1932;
F.p1933 = a_p1933;
if (((((yr1870_TK() == v191)) || ((yr1870_TK() == v194))) || ((yr1870_TK() == v197)))) {
F.v4319 = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4319 == F.p1932)) {
yr1904_Skip();
return;
}
}
yr1170_FailN(F.p1933, F.p1932, y_str(" is closed with another name", 28));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1938_ExtendedId(void) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
F.v4323 = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1870_TK() == v191)) {
yr1904_Skip();
{ rt_int rv4324 = F.v4323;
return rv4324; }
}
if ((((yr1870_TK() == v194)) && (((((((((F.v4323 == v374)) || ((F.v4323 == v221))) || ((F.v4323 == v383))) || ((F.v4323 == v260))) || ((F.v4323 == v362))) || ((F.v4323 == v473))) || ((F.v4323 == v344)))))) {
yr1904_Skip();
{ rt_int rv4325 = F.v4323;
return rv4325; }
}
if (((((((((((((yr1870_TK() == v197)) && ((!(F.v4323 == v578)))) && ((!(F.v4323 == v581)))) && ((!(F.v4323 == v584)))) && ((!(F.v4323 == v587)))) && ((!(F.v4323 == v590)))) && ((!(F.v4323 == v593)))) && ((!(F.v4323 == v596)))) && ((!(F.v4323 == v599)))) && ((!(F.v4323 == v521)))) && ((!(F.v4323 == v518))))) {
yr1904_Skip();
{ rt_int rv4326 = F.v4323;
return rv4326; }
}
yr1162_FailS(yr1880_TLn(), y_str("expected a name", 15));
{ rt_int rv4329 = INT64_C(0);
return rv4329; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1943_IsLabel(rt_int a_p1944) {
struct yf1945 F;
memset((void *)&F, 0, sizeof F);
F.p1944 = a_p1944;
F.v4333 = v1236;
while ((!(F.v4333 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4333))).f_name == F.p1944)) {
{ rt_int rv4335 = 1;
return rv4335; }
}
F.v4333 = ((*(yR99 *)rt_nil_check(F.v4333))).f_next;
}
{ rt_int rv4337 = 0;
return rv4337; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1949_ImportItem(void) {
struct yf1950 F;
memset((void *)&F, 0, sizeof F);
F.v4340 = yr1849_NewNode(v611, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4340))).f_name = yr1938_ExtendedId();
if ((yr1898_IsIdAt(INT64_C(0)) && ((yr1875_TV() == v1238)))) {
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4340))).f_text = yr1926_Ident();
}
if (yr1909_Accept(v227)) {
((*(yR99 *)rt_nil_check(F.v4340))).f_ival = yr1938_ExtendedId();
}
{ void * rv4342 = F.v4340;
return rv4342; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1954_ParseModule(void) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.v4345 = yr1849_NewNode(v608, yr1880_TLn());
F.v4347 = ((void *)0);
F.v4349 = ((void *)0);
F.v4351 = ((void *)0);
if (yr1909_Accept(v368)) {
((*(yR99 *)rt_nil_check(F.v4345))).f_flag = INT64_C(1);
} else {
yr1920_Expect(v365);
}
((*(yR99 *)rt_nil_check(F.v4345))).f_name = yr1926_Ident();
while (yr1909_Accept(v341)) {
for (;;) {
F.v4347 = yr1949_ImportItem();
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4345))).f_a, &F.v4349, F.v4347);
if ((!yr1909_Accept(v590))) {
goto yl_4355;
}
}
yl_4355: ;
yr1920_Expect(v593);
}
while (yr1909_Accept(v320)) {
F.v4353 = INT64_C(0);
if ((((yr1892_Is(v380) || yr1892_Is(v458)) || yr1892_Is(v413)) || yr1892_Is(v467))) {
F.v4353 = yr1875_TV();
yr1904_Skip();
}
for (;;) {
F.v4347 = yr1949_ImportItem();
((*(yR99 *)rt_nil_check(F.v4347))).f_flag = F.v4353;
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4345))).f_b, &F.v4351, F.v4347);
if ((!yr1909_Accept(v590))) {
goto yl_4357;
}
}
yl_4357: ;
yr1920_Expect(v593);
}
((*(yR99 *)rt_nil_check(F.v4345))).f_c = yr1964_ParseBlock();
if ((((*(yR99 *)rt_nil_check(F.v4345))).f_flag == INT64_C(1))) {
yr1920_Expect(v293);
} else {
yr1920_Expect(v290);
}
yr1931_CloseName(((*(yR99 *)rt_nil_check(F.v4345))).f_name, ((*(yR99 *)rt_nil_check(F.v4345))).f_line);
{ void * rv4359 = F.v4345;
return rv4359; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1959_IsDeclWord(void) {
struct yf1960 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1870_TK() == v194))) {
{ rt_int rv4364 = 0;
return rv4364; }
}
F.v4362 = yr1875_TV();
{ rt_int rv4365 = (((((((((((((F.v4362 == v254)) || ((F.v4362 == v467))) || ((F.v4362 == v356))) || ((F.v4362 == v461))) || ((F.v4362 == v422))) || ((F.v4362 == v332))) || ((F.v4362 == v404))) || ((F.v4362 == v365))) || ((F.v4362 == v368))) || ((F.v4362 == v449))) || ((F.v4362 == v350))) || ((F.v4362 == v407)));
return rv4365; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1964_ParseBlock(void) {
struct yf1965 F;
memset((void *)&F, 0, sizeof F);
F.v4368 = yr1849_NewNode(v614, yr1880_TLn());
F.v4370 = ((void *)0);
F.v4372 = v1236;
while (yr1959_IsDeclWord()) {
yr1991_ParseDeclGroup(&((*(yR99 *)rt_nil_check(F.v4368))).f_a, &F.v4370);
while (yr1909_Accept(v593)) {
}
}
if (yr1892_Is(v314)) {
((*(yR99 *)rt_nil_check(F.v4368))).f_b = yr1969_ParseHandler();
F.v4374 = ((*(yR99 *)rt_nil_check(F.v4368))).f_b;
if (yr1909_Accept(v593)) {
}
}
((*(yR99 *)rt_nil_check(F.v4368))).f_c = yr2055_ParseStatements(1);
v1236 = F.v4372;
{ void * rv4376 = F.v4368;
return rv4376; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1969_ParseHandler(void) {
struct yf1970 F;
memset((void *)&F, 0, sizeof F);
F.v4379 = yr1849_NewNode(v617, yr1880_TLn());
F.v4381 = ((void *)0);
F.v4383 = ((void *)0);
F.v4385 = ((void *)0);
F.v4387 = ((void *)0);
yr1920_Expect(v314);
while (yr1909_Accept(v251)) {
F.v4381 = yr1849_NewNode(v620, yr1880_TLn());
F.v4387 = ((void *)0);
for (;;) {
F.v4385 = yr1849_NewNode(v653, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4385))).f_name = yr1926_Ident();
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4381))).f_a, &F.v4387, F.v4385);
if ((!yr1909_Accept(v590))) {
goto yl_4388;
}
}
yl_4388: ;
yr1920_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4381))).f_b = yr2055_ParseStatements(0);
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4379))).f_a, &F.v4383, F.v4381);
}
if (yr1909_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4379))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4379))).f_b = yr2055_ParseStatements(0);
}
yr1920_Expect(v275);
{ void * rv4392 = F.v4379;
return rv4392; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1974_ParseNames(void) {
struct yf1975 F;
memset((void *)&F, 0, sizeof F);
F.v4395 = ((void *)0);
F.v4397 = ((void *)0);
F.v4399 = ((void *)0);
for (;;) {
F.v4399 = yr1849_NewNode(v653, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4399))).f_name = yr1926_Ident();
if (yr1909_Accept(v233)) {
((*(yR99 *)rt_nil_check(F.v4399))).f_a = yr2117_ParseExpr();
}
yr1856_Link(&F.v4395, &F.v4397, F.v4399);
if ((!yr1909_Accept(v590))) {
goto yl_4400;
}
}
yl_4400: ;
{ void * rv4401 = F.v4395;
return rv4401; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1979_SimpleEntry(rt_int a_p1980) {
struct yf1981 F;
memset((void *)&F, 0, sizeof F);
F.p1980 = a_p1980;
if ((F.p1980 == v254)) {
F.v4405 = yr1849_NewNode(v623, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4405))).f_a = yr1974_ParseNames();
yr1920_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4405))).f_b = yr2020_ParseRep();
yr1920_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4405))).f_c = yr2117_ParseExpr();
} else if ((F.p1980 == v467)) {
F.v4405 = yr1849_NewNode(v626, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4405))).f_a = yr1974_ParseNames();
yr1920_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4405))).f_b = yr2020_ParseRep();
if (yr1909_Accept(v515)) {
((*(yR99 *)rt_nil_check(F.v4405))).f_c = yr2117_ParseExpr();
}
} else if ((F.p1980 == v461)) {
F.v4405 = yr1849_NewNode(v632, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4405))).f_name = yr1926_Ident();
yr1920_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4405))).f_b = yr2040_ParseConcrete1();
} else {
F.v4405 = yr1849_NewNode(v635, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4405))).f_name = yr1926_Ident();
yr1920_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4405))).f_b = yr2020_ParseRep();
}
{ void * rv4406 = F.v4405;
return rv4406; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1985_Continues(rt_int a_p1986) {
struct yf1987 F;
memset((void *)&F, 0, sizeof F);
F.p1986 = a_p1986;
if ((!((yr1892_Is(v593) && yr1898_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4411 = 0;
return rv4411; }
}
if (yr1943_IsLabel(rt_range(((rt_int *)(v1193).p)[y_ix1(v1193, rt_add(v1233, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4415 = 0;
return rv4415; }
}
if ((((F.p1986 == v254)) || ((F.p1986 == v467)))) {
{ rt_int rv4419 = ((yr1885_IsAt(INT64_C(2), v590) || yr1885_IsAt(INT64_C(2), v596)) || yr1885_IsAt(INT64_C(2), v233));
return rv4419; }
}
{ rt_int rv4421 = yr1885_IsAt(INT64_C(2), v569);
return rv4421; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1991_ParseDeclGroup(void * * a_p1992, void * * a_p1993) {
struct yf1994 F;
memset((void *)&F, 0, sizeof F);
F.p1992 = a_p1992;
F.p1993 = a_p1993;
F.v4426 = yr1875_TV();
if ((((((F.v4426 == v254)) || ((F.v4426 == v467))) || ((F.v4426 == v461))) || ((F.v4426 == v422)))) {
yr1904_Skip();
yr1856_Link(&(*F.p1992), &(*F.p1993), yr1979_SimpleEntry(F.v4426));
while (yr1985_Continues(F.v4426)) {
yr1904_Skip();
yr1856_Link(&(*F.p1992), &(*F.p1993), yr1979_SimpleEntry(F.v4426));
}
return;
}
if ((F.v4426 == v356)) {
F.v4428 = yr1849_NewNode(v629, yr1880_TLn());
yr1904_Skip();
F.v4432 = ((void *)0);
for (;;) {
F.v4430 = yr1849_NewNode(v653, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4430))).f_name = yr1926_Ident();
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4428))).f_a, &F.v4432, F.v4430);
if ((!yr1909_Accept(v590))) {
goto yl_4433;
}
}
yl_4433: ;
F.v4430 = ((*(yR99 *)rt_nil_check(F.v4428))).f_a;
while ((!(F.v4430 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.v4428))).f_b = yr1849_NewNode(v653, ((*(yR99 *)rt_nil_check(F.v4430))).f_line);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4428))).f_b))).f_name = ((*(yR99 *)rt_nil_check(F.v4430))).f_name;
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4428))).f_b))).f_next = v1236;
v1236 = ((*(yR99 *)rt_nil_check(F.v4428))).f_b;
F.v4430 = ((*(yR99 *)rt_nil_check(F.v4430))).f_next;
}
((*(yR99 *)rt_nil_check(F.v4428))).f_b = ((void *)0);
yr1856_Link(&(*F.p1992), &(*F.p1993), F.v4428);
return;
}
yr1856_Link(&(*F.p1992), &(*F.p1993), yr1998_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1998_ParseDecl(void) {
struct yf1999 F;
memset((void *)&F, 0, sizeof F);
F.v4442 = yr1875_TV();
F.v4444 = yr1880_TLn();
if ((((F.v4442 == v332)) || ((F.v4442 == v404)))) {
F.v4436 = yr1849_NewNode(v638, F.v4444);
yr1904_Skip();
if ((F.v4442 == v332)) {
((*(yR99 *)rt_nil_check(F.v4436))).f_flag = INT64_C(1);
}
if ((yr1892_Is(v323) || yr1892_Is(v419))) {
((*(yR99 *)rt_nil_check(F.v4436))).f_ival = yr1875_TV();
yr1904_Skip();
}
((*(yR99 *)rt_nil_check(F.v4436))).f_name = yr1938_ExtendedId();
yr2003_ParseFormals(F.v4436);
if (yr1909_Accept(v347)) {
((*(yR99 *)rt_nil_check(F.v4436))).f_e = yr1849_NewNode(v653, F.v4444);
}
((*(yR99 *)rt_nil_check(F.v4436))).f_c = yr1964_ParseBlock();
if ((F.v4442 == v332)) {
yr1920_Expect(v281);
} else {
yr1920_Expect(v296);
}
yr1931_CloseName(((*(yR99 *)rt_nil_check(F.v4436))).f_name, F.v4444);
{ void * rv4448 = F.v4436;
return rv4448; }
}
if ((((F.v4442 == v365)) || ((F.v4442 == v368)))) {
{ void * rv4449 = yr1954_ParseModule();
return rv4449; }
}
if ((F.v4442 == v449)) {
F.v4436 = yr1849_NewNode(v644, F.v4444);
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4436))).f_name = yr1926_Ident();
yr1920_Expect(v578);
F.v4440 = ((void *)0);
for (;;) {
F.v4438 = yr1849_NewNode(v653, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4438))).f_name = yr1926_Ident();
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4436))).f_a, &F.v4440, F.v4438);
if ((!yr1909_Accept(v590))) {
goto yl_4450;
}
}
yl_4450: ;
yr1920_Expect(v581);
F.v4446 = v1233;
((*(yR99 *)rt_nil_check(F.v4436))).f_b = yr1954_ParseModule();
((*(yR99 *)rt_nil_check(F.v4436))).f_ival = F.v4446;
((*(yR99 *)rt_nil_check(F.v4436))).f_flag = v1233;
yr1920_Expect(v308);
yr1931_CloseName(((*(yR99 *)rt_nil_check(F.v4436))).f_name, F.v4444);
{ void * rv4451 = F.v4436;
return rv4451; }
}
if ((F.v4442 == v350)) {
F.v4436 = yr1849_NewNode(v647, F.v4444);
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4436))).f_name = yr1926_Ident();
yr1920_Expect(v578);
F.v4440 = ((void *)0);
for (;;) {
F.v4438 = yr1849_NewNode(v653, yr1880_TLn());
if ((yr1870_TK() == v200)) {
((*(yR99 *)rt_nil_check(F.v4438))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4438))).f_ival = yr1875_TV();
yr1904_Skip();
} else {
((*(yR99 *)rt_nil_check(F.v4438))).f_name = yr1938_ExtendedId();
}
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4436))).f_a, &F.v4440, F.v4438);
if ((!yr1909_Accept(v590))) {
goto yl_4452;
}
}
yl_4452: ;
yr1920_Expect(v581);
{ void * rv4454 = F.v4436;
return rv4454; }
}
if ((F.v4442 == v407)) {
F.v4436 = yr1849_NewNode(v650, F.v4444);
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4436))).f_name = yr1926_Ident();
yr2003_ParseFormals(F.v4436);
if ((!(((*(yR99 *)rt_nil_check(F.v4436))).f_b == ((void *)0)))) {
yr1162_FailS(F.v4444, y_str("a process returns no value", 26));
}
if (yr1909_Accept(v401)) {
((*(yR99 *)rt_nil_check(F.v4436))).f_d = yr2117_ParseExpr();
}
if (yr1909_Accept(v353)) {
((*(yR99 *)rt_nil_check(F.v4436))).f_e = yr2117_ParseExpr();
}
if (yr1909_Accept(v443)) {
F.v4438 = yr2117_ParseExpr();
}
((*(yR99 *)rt_nil_check(F.v4436))).f_c = yr1964_ParseBlock();
yr1920_Expect(v299);
yr1931_CloseName(((*(yR99 *)rt_nil_check(F.v4436))).f_name, F.v4444);
{ void * rv4456 = F.v4436;
return rv4456; }
}
yr1162_FailS(F.v4444, y_str("expected a declaration", 22));
{ void * rv4458 = ((void *)0);
return rv4458; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2003_ParseFormals(void * a_p2004) {
struct yf2005 F;
memset((void *)&F, 0, sizeof F);
F.p2004 = a_p2004;
F.v4462 = ((void *)0);
F.v4464 = ((void *)0);
if (yr1909_Accept(v428)) {
((*(yR99 *)rt_nil_check(F.p2004))).f_b = yr2020_ParseRep();
}
yr1920_Expect(v578);
while ((!yr1892_Is(v581))) {
if (yr1909_Accept(v254)) {
F.v4466 = v881;
} else if (yr1909_Accept(v389)) {
F.v4466 = v884;
} else if (yr1909_Accept(v467)) {
F.v4466 = v887;
} else {
yr1162_FailS(yr1880_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v4462 = yr1849_NewNode(v641, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4462))).f_ival = F.v4466;
((*(yR99 *)rt_nil_check(F.v4462))).f_a = yr1974_ParseNames();
yr1920_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4462))).f_b = yr2009_ParseFormalRep();
yr1856_Link(&((*(yR99 *)rt_nil_check(F.p2004))).f_a, &F.v4464, F.v4462);
if ((!((((yr1892_Is(v593) || yr1892_Is(v590))) && yr1898_IsIdAt(INT64_C(1)))))) {
goto yl_4468;
}
yr1904_Skip();
}
yl_4468: ;
if ((!yr1909_Accept(v593))) {
if ((!yr1909_Accept(v590))) {
yr1920_Expect(v581);
return;
}
}
}
yr1920_Expect(v581);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2009_ParseFormalRep(void) {
struct yf2010 F;
memset((void *)&F, 0, sizeof F);
if (((yr1892_Is(v224) && yr1885_IsAt(INT64_C(1), v578)) && ((yr1885_IsAt(INT64_C(3), v257) || ((yr1898_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1193).p)[y_ix1(v1193, rt_add(v1233, INT64_C(3)))] == v1241)))))))) {
F.v4472 = yr1849_NewNode(v680, yr1880_TLn());
yr1904_Skip();
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4472))).f_a = yr2117_ParseExpr();
yr1904_Skip();
yr1920_Expect(v377);
((*(yR99 *)rt_nil_check(F.v4472))).f_b = yr2020_ParseRep();
yr1920_Expect(v581);
{ void * rv4478 = F.v4472;
return rv4478; }
}
if (yr1892_Is(v446)) {
F.v4472 = yr1849_NewNode(v683, yr1880_TLn());
yr1904_Skip();
{ void * rv4479 = F.v4472;
return rv4479; }
}
{ void * rv4480 = yr2020_ParseRep();
return rv4480; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2014_IsStructWord(rt_int a_p2015) {
struct yf2016 F;
memset((void *)&F, 0, sizeof F);
F.p2015 = a_p2015;
F.v4484 = ((rt_int *)(v1193).p)[y_ix1(v1193, rt_add(v1233, F.p2015))];
if ((!(((rt_int *)(v1191).p)[y_ix1(v1191, rt_add(v1233, F.p2015))] == v194))) {
{ rt_int rv4488 = 0;
return rv4488; }
}
{ rt_int rv4489 = (((((((((F.v4484 == v464)) || ((F.v4484 == v386))) || ((F.v4484 == v218))) || ((F.v4484 == v224))) || ((F.v4484 == v416))) || ((F.v4484 == v326))) || ((F.v4484 == v395))) || ((F.v4484 == v437)));
return rv4489; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2020_ParseRep(void) {
struct yf2021 F;
memset((void *)&F, 0, sizeof F);
if ((yr1898_IsIdAt(INT64_C(0)) && ((yr2014_IsStructWord(INT64_C(1)) || ((yr1898_IsIdAt(INT64_C(1)) && yr1885_IsAt(INT64_C(2), v584))))))) {
F.v4492 = yr1926_Ident();
F.v4494 = yr2025_ParseConcrete();
((*(yR99 *)rt_nil_check(F.v4494))).f_text = F.v4492;
{ void * rv4499 = F.v4494;
return rv4499; }
}
{ void * rv4500 = yr2025_ParseConcrete();
return rv4500; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2025_ParseConcrete(void) {
struct yf2026 F;
memset((void *)&F, 0, sizeof F);
F.v4503 = yr2040_ParseConcrete1();
if (yr1909_Accept(v392)) {
if (((((yr1870_TK() == v200)) || ((yr1870_TK() == v191))) || yr1892_Is(v578))) {
F.v4505 = yr2122_ParseSimple();
}
}
if (yr1909_Accept(v215)) {
F.v4505 = yr2122_ParseSimple();
}
{ void * rv4506 = F.v4503;
return rv4506; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2030_ParseIds(void) {
struct yf2031 F;
memset((void *)&F, 0, sizeof F);
F.v4509 = ((void *)0);
F.v4511 = ((void *)0);
F.v4513 = ((void *)0);
for (;;) {
F.v4513 = yr1849_NewNode(v653, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4513))).f_name = yr1926_Ident();
yr1856_Link(&F.v4509, &F.v4511, F.v4513);
if ((!yr1909_Accept(v590))) {
goto yl_4514;
}
}
yl_4514: ;
{ void * rv4515 = F.v4509;
return rv4515; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2035_ParseFieldGroups(void) {
struct yf2036 F;
memset((void *)&F, 0, sizeof F);
F.v4518 = ((void *)0);
F.v4520 = ((void *)0);
F.v4522 = ((void *)0);
while ((yr1892_Is(v254) || yr1892_Is(v467))) {
F.v4524 = yr1875_TV();
yr1904_Skip();
for (;;) {
F.v4522 = yr1849_NewNode(v689, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4522))).f_ival = F.v4524;
((*(yR99 *)rt_nil_check(F.v4522))).f_a = yr1974_ParseNames();
yr1920_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4522))).f_b = yr2020_ParseRep();
yr1856_Link(&F.v4518, &F.v4520, F.v4522);
if ((!((yr1892_Is(v593) && yr1898_IsIdAt(INT64_C(1)))))) {
goto yl_4525;
}
yr1904_Skip();
}
yl_4525: ;
if ((!yr1909_Accept(v593))) {
{ void * rv4527 = F.v4518;
return rv4527; }
}
}
{ void * rv4528 = F.v4518;
return rv4528; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2040_ParseConcrete1(void) {
struct yf2041 F;
memset((void *)&F, 0, sizeof F);
F.v4545 = yr1880_TLn();
if ((yr1870_TK() == v191)) {
F.v4531 = yr1849_NewNode(v656, F.v4545);
((*(yR99 *)rt_nil_check(F.v4531))).f_name = yr1926_Ident();
((*(yR99 *)rt_nil_check(F.v4531))).f_a = yr2045_ParseQualifier();
{ void * rv4546 = F.v4531;
return rv4546; }
}
if ((!(yr1870_TK() == v194))) {
yr1162_FailS(F.v4545, y_str("expected a representation", 25));
}
F.v4543 = yr1875_TV();
if ((((F.v4543 == v464)) || ((F.v4543 == v386)))) {
F.v4531 = yr1849_NewNode(v659, F.v4545);
if ((F.v4543 == v386)) {
((*(yR99 *)rt_nil_check(F.v4531))).f_flag = INT64_C(1);
}
yr1904_Skip();
yr1920_Expect(v578);
((*(yR99 *)rt_nil_check(F.v4531))).f_a = yr2030_ParseIds();
yr1920_Expect(v581);
((*(yR99 *)rt_nil_check(F.v4531))).f_b = yr2045_ParseQualifier();
{ void * rv4549 = F.v4531;
return rv4549; }
}
if ((F.v4543 == v218)) {
F.v4531 = yr1849_NewNode(v662, F.v4545);
yr1904_Skip();
yr1920_Expect(v578);
F.v4541 = ((void *)0);
for (;;) {
if ((!(yr1870_TK() == v209))) {
yr1162_FailS(yr1880_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4539 = yr1849_NewNode(v752, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4539))).f_text = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
yr1904_Skip();
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4531))).f_a, &F.v4541, F.v4539);
if ((!yr1909_Accept(v590))) {
goto yl_4550;
}
}
yl_4550: ;
yr1920_Expect(v581);
((*(yR99 *)rt_nil_check(F.v4531))).f_b = yr2045_ParseQualifier();
{ void * rv4552 = F.v4531;
return rv4552; }
}
if ((F.v4543 == v224)) {
F.v4531 = yr1849_NewNode(v665, F.v4545);
yr1904_Skip();
yr1920_Expect(v578);
F.v4541 = ((void *)0);
for (;;) {
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4531))).f_a, &F.v4541, yr2020_ParseRep());
if ((!yr1909_Accept(v590))) {
goto yl_4553;
}
}
yl_4553: ;
yr1920_Expect(v377);
((*(yR99 *)rt_nil_check(F.v4531))).f_b = yr2020_ParseRep();
yr1920_Expect(v581);
{ void * rv4554 = F.v4531;
return rv4554; }
}
if ((F.v4543 == v416)) {
F.v4531 = yr1849_NewNode(v668, F.v4545);
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4531))).f_a = yr2035_ParseFieldGroups();
if (yr1909_Accept(v434)) {
F.v4533 = yr1849_NewNode(v692, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4533))).f_name = yr1926_Ident();
yr1920_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4533))).f_b = yr2020_ParseRep();
F.v4537 = ((void *)0);
while (yr1909_Accept(v251)) {
F.v4535 = yr1849_NewNode(v695, yr1880_TLn());
F.v4541 = ((void *)0);
for (;;) {
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4535))).f_a, &F.v4541, yr2117_ParseExpr());
if ((!yr1909_Accept(v590))) {
goto yl_4555;
}
}
yl_4555: ;
yr1920_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4535))).f_b = yr2035_ParseFieldGroups();
while (yr1909_Accept(v593)) {
}
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4533))).f_a, &F.v4537, F.v4535);
}
yr1920_Expect(v305);
if (yr1909_Accept(v593)) {
}
((*(yR99 *)rt_nil_check(F.v4531))).f_b = F.v4533;
}
yr1920_Expect(v302);
{ void * rv4556 = F.v4531;
return rv4556; }
}
if (((((F.v4543 == v326)) || ((F.v4543 == v395))) || ((F.v4543 == v437)))) {
if ((F.v4543 == v326)) {
F.v4531 = yr1849_NewNode(v671, F.v4545);
} else if ((F.v4543 == v395)) {
F.v4531 = yr1849_NewNode(v674, F.v4545);
} else {
F.v4531 = yr1849_NewNode(v677, F.v4545);
}
yr1904_Skip();
yr1920_Expect(v578);
((*(yR99 *)rt_nil_check(F.v4531))).f_a = yr2020_ParseRep();
yr1920_Expect(v581);
{ void * rv4557 = F.v4531;
return rv4557; }
}
yr1162_FailS(F.v4545, y_str("expected a representation", 25));
{ void * rv4559 = ((void *)0);
return rv4559; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2045_ParseQualifier(void) {
struct yf2046 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1892_Is(v584))) {
{ void * rv4563 = ((void *)0);
return rv4563; }
}
F.v4562 = yr1849_NewNode(v686, yr1880_TLn());
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4562))).f_a = yr2117_ParseExpr();
yr1920_Expect(v521);
((*(yR99 *)rt_nil_check(F.v4562))).f_b = yr2117_ParseExpr();
yr1920_Expect(v587);
if (yr1909_Accept(v431)) {
((*(yR99 *)rt_nil_check(F.v4562))).f_c = yr2122_ParseSimple();
} else if (yr1909_Accept(v398)) {
((*(yR99 *)rt_nil_check(F.v4562))).f_d = yr2122_ParseSimple();
}
{ void * rv4564 = F.v4562;
return rv4564; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2050_IsStop(void) {
struct yf2051 F;
memset((void *)&F, 0, sizeof F);
if ((yr1870_TK() == v188)) {
{ rt_int rv4569 = 1;
return rv4569; }
}
if ((!(yr1870_TK() == v194))) {
{ rt_int rv4571 = 0;
return rv4571; }
}
F.v4567 = yr1875_TV();
{ rt_int rv4572 = ((((((((((((((((F.v4567 == v269)) || ((F.v4567 == v266))) || ((F.v4567 == v284))) || ((F.v4567 == v251))) || ((F.v4567 == v305))) || ((F.v4567 == v311))) || ((F.v4567 == v278))) || ((F.v4567 == v287))) || ((F.v4567 == v272))) || ((F.v4567 == v275))) || ((F.v4567 == v296))) || ((F.v4567 == v281))) || ((F.v4567 == v299))) || ((F.v4567 == v290))) || ((F.v4567 == v293)));
return rv4572; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2055_ParseStatements(rt_int a_p2056) {
struct yf2057 F;
memset((void *)&F, 0, sizeof F);
F.p2056 = a_p2056;
F.v4576 = ((void *)0);
F.v4578 = ((void *)0);
F.v4580 = ((void *)0);
for (;;) {
while (yr1909_Accept(v593)) {
}
if (yr2050_IsStop()) {
goto yl_4583;
}
F.v4582 = INT64_C(0);
if (((F.p2056 && yr1898_IsIdAt(INT64_C(0))) && yr1885_IsAt(INT64_C(1), v596))) {
F.v4582 = yr1926_Ident();
yr1904_Skip();
}
F.v4580 = yr2061_ParseStatement();
((*(yR99 *)rt_nil_check(F.v4580))).f_text = F.v4582;
yr1856_Link(&F.v4576, &F.v4578, F.v4580);
if ((!yr1892_Is(v593))) {
goto yl_4583;
}
}
yl_4583: ;
{ void * rv4587 = F.v4576;
return rv4587; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2061_ParseStatement(void) {
struct yf2062 F;
memset((void *)&F, 0, sizeof F);
F.v4604 = yr1880_TLn();
if ((yr1870_TK() == v194)) {
F.v4602 = yr1875_TV();
if ((F.v4602 == v230)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v704, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = yr2117_ParseExpr();
{ void * rv4605 = F.v4590;
return rv4605; }
}
if ((F.v4602 == v335)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v707, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_name = yr1926_Ident();
{ void * rv4606 = F.v4590;
return rv4606; }
}
if ((F.v4602 == v317)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v710, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_name = yr1926_Ident();
{ void * rv4607 = F.v4590;
return rv4607; }
}
if ((F.v4602 == v425)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v713, F.v4604);
if ((!((yr1892_Is(v593) || yr2050_IsStop())))) {
((*(yR99 *)rt_nil_check(F.v4590))).f_a = yr2117_ParseExpr();
}
{ void * rv4608 = F.v4590;
return rv4608; }
}
if ((F.v4602 == v452)) {
yr1904_Skip();
{ void * rv4609 = yr1849_NewNode(v716, F.v4604);
return rv4609; }
}
if ((F.v4602 == v410)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v719, F.v4604);
if (yr1898_IsIdAt(INT64_C(0))) {
((*(yR99 *)rt_nil_check(F.v4590))).f_name = yr1926_Ident();
}
{ void * rv4611 = F.v4590;
return rv4611; }
}
if ((F.v4602 == v338)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v722, F.v4604);
F.v4594 = ((void *)0);
F.v4592 = yr1849_NewNode(v740, F.v4604);
((*(yR99 *)rt_nil_check(F.v4592))).f_a = yr2117_ParseExpr();
yr1920_Expect(v455);
((*(yR99 *)rt_nil_check(F.v4592))).f_b = yr2055_ParseStatements(0);
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4590))).f_a, &F.v4594, F.v4592);
while (yr1892_Is(v269)) {
F.v4592 = yr1849_NewNode(v740, yr1880_TLn());
yr1904_Skip();
((*(yR99 *)rt_nil_check(F.v4592))).f_a = yr2117_ParseExpr();
yr1920_Expect(v455);
((*(yR99 *)rt_nil_check(F.v4592))).f_b = yr2055_ParseStatements(0);
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4590))).f_a, &F.v4594, F.v4592);
}
if (yr1909_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4590))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4590))).f_b = yr2055_ParseStatements(0);
}
yr1920_Expect(v284);
{ void * rv4616 = F.v4590;
return rv4616; }
}
if ((F.v4602 == v434)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v725, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = yr2117_ParseExpr();
F.v4594 = ((void *)0);
while (yr1892_Is(v251)) {
F.v4592 = yr1849_NewNode(v740, yr1880_TLn());
yr1904_Skip();
F.v4598 = ((void *)0);
for (;;) {
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4592))).f_a, &F.v4598, yr2117_ParseExpr());
if ((!yr1909_Accept(v590))) {
goto yl_4617;
}
}
yl_4617: ;
yr1920_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4592))).f_b = yr2055_ParseStatements(0);
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4590))).f_b, &F.v4594, F.v4592);
}
if (yr1909_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4590))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4590))).f_c = yr2055_ParseStatements(0);
}
yr1920_Expect(v305);
{ void * rv4621 = F.v4590;
return rv4621; }
}
if ((F.v4602 == v470)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v728, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = yr2117_ParseExpr();
yr1920_Expect(v263);
((*(yR99 *)rt_nil_check(F.v4590))).f_b = yr2055_ParseStatements(0);
yr1920_Expect(v311);
{ void * rv4623 = F.v4590;
return rv4623; }
}
if ((F.v4602 == v329)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v731, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_name = yr1926_Ident();
yr1920_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = yr2020_ParseRep();
yr1920_Expect(v263);
((*(yR99 *)rt_nil_check(F.v4590))).f_b = yr2055_ParseStatements(0);
yr1920_Expect(v278);
{ void * rv4625 = F.v4590;
return rv4625; }
}
if ((F.v4602 == v359)) {
yr1904_Skip();
F.v4590 = yr1849_NewNode(v734, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_name = yr1926_Ident();
((*(yR99 *)rt_nil_check(F.v4590))).f_b = yr2055_ParseStatements(0);
yr1920_Expect(v287);
yr1931_CloseName(((*(yR99 *)rt_nil_check(F.v4590))).f_name, F.v4604);
{ void * rv4627 = F.v4590;
return rv4627; }
}
if ((((F.v4602 == v248)) || ((F.v4602 == v440)))) {
F.v4590 = yr1849_NewNode(v737, F.v4604);
if (yr1909_Accept(v440)) {
((*(yR99 *)rt_nil_check(F.v4590))).f_flag = INT64_C(1);
}
yr1920_Expect(v248);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = yr1964_ParseBlock();
yr1920_Expect(v272);
{ void * rv4629 = F.v4590;
return rv4629; }
}
}
F.v4600 = yr2148_ParseDesignator();
if (yr1909_Accept(v515)) {
F.v4590 = yr1849_NewNode(v698, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = F.v4600;
((*(yR99 *)rt_nil_check(F.v4590))).f_b = yr2117_ParseExpr();
{ void * rv4630 = F.v4590;
return rv4630; }
}
if ((!(((*(yR99 *)rt_nil_check(F.v4600))).f_kind == v764))) {
yr1162_FailS(F.v4604, y_str("expected a statement", 20));
}
F.v4590 = yr1849_NewNode(v701, F.v4604);
((*(yR99 *)rt_nil_check(F.v4590))).f_a = F.v4600;
{ void * rv4632 = F.v4590;
return rv4632; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2066_OpAt(void) {
struct yf2067 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1870_TK() == v197)) || ((yr1870_TK() == v194)))) {
{ rt_int rv4634 = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
return rv4634; }
}
{ rt_int rv4636 = INT64_C(0);
return rv4636; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2071_IsRel(rt_int a_p2072) {
struct yf2073 F;
memset((void *)&F, 0, sizeof F);
F.p2072 = a_p2072;
{ rt_int rv4639 = ((((((((((((((((((((F.p2072 == v344)) || ((F.p2072 == v554))) || ((F.p2072 == v569))) || ((F.p2072 == v572))) || ((F.p2072 == v524))) || ((F.p2072 == v575))) || ((F.p2072 == v527))) || ((F.p2072 == v530))) || ((F.p2072 == v485))) || ((F.p2072 == v533))) || ((F.p2072 == v488))) || ((F.p2072 == v536))) || ((F.p2072 == v497))) || ((F.p2072 == v491))) || ((F.p2072 == v479))) || ((F.p2072 == v539))) || ((F.p2072 == v500))) || ((F.p2072 == v494))) || ((F.p2072 == v482)));
return rv4639; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2077_IsAssocMul(rt_int a_p2078) {
struct yf2079 F;
memset((void *)&F, 0, sizeof F);
F.p2078 = a_p2078;
{ rt_int rv4642 = (((F.p2078 == v563)) || ((F.p2078 == v221)));
return rv4642; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2083_IsNonAssocMul(rt_int a_p2084) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
F.p2084 = a_p2084;
{ rt_int rv4645 = ((((((((F.p2084 == v566)) || ((F.p2084 == v260))) || ((F.p2084 == v362))) || ((F.p2084 == v542))) || ((F.p2084 == v503))) || ((F.p2084 == v545))) || ((F.p2084 == v506)));
return rv4645; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2089_IsAssocAdd(rt_int a_p2090) {
struct yf2091 F;
memset((void *)&F, 0, sizeof F);
F.p2090 = a_p2090;
{ rt_int rv4648 = (((F.p2090 == v557)) || ((F.p2090 == v383)));
return rv4648; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2095_IsNonAssocAdd(rt_int a_p2096) {
struct yf2097 F;
memset((void *)&F, 0, sizeof F);
F.p2096 = a_p2096;
{ rt_int rv4651 = (((((((F.p2096 == v560)) || ((F.p2096 == v473))) || ((F.p2096 == v548))) || ((F.p2096 == v509))) || ((F.p2096 == v551))) || ((F.p2096 == v512)));
return rv4651; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2101_Bin(rt_int a_p2102, void * a_p2103, void * a_p2104, rt_int a_p2105) {
struct yf2106 F;
memset((void *)&F, 0, sizeof F);
F.p2102 = a_p2102;
F.p2103 = a_p2103;
F.p2104 = a_p2104;
F.p2105 = a_p2105;
F.v4658 = yr1849_NewNode(v782, F.p2105);
((*(yR99 *)rt_nil_check(F.v4658))).f_name = F.p2102;
((*(yR99 *)rt_nil_check(F.v4658))).f_a = F.p2103;
((*(yR99 *)rt_nil_check(F.v4658))).f_b = F.p2104;
{ void * rv4659 = F.v4658;
return rv4659; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2110_NeedParens(rt_int a_p2111, rt_int a_p2112) {
struct yf2113 F;
memset((void *)&F, 0, sizeof F);
F.p2111 = a_p2111;
F.p2112 = a_p2112;
yr1010_SB();
yr1028_ST(F.p2111);
yr1021_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4664 = yr1040_SE();
yr1141_Fail(F.p2112, F.v4664);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2117_ParseExpr(void) {
struct yf2118 F;
memset((void *)&F, 0, sizeof F);
F.v4672 = yr1880_TLn();
F.v4668 = yr2122_ParseSimple();
F.v4670 = yr2066_OpAt();
if (yr2071_IsRel(F.v4670)) {
yr1904_Skip();
F.v4668 = yr2101_Bin(F.v4670, F.v4668, yr2122_ParseSimple(), F.v4672);
if (yr2071_IsRel(yr2066_OpAt())) {
yr2110_NeedParens(F.v4670, F.v4672);
}
}
{ void * rv4673 = F.v4668;
return rv4673; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2122_ParseSimple(void) {
struct yf2123 F;
memset((void *)&F, 0, sizeof F);
F.v4682 = yr1880_TLn();
if (yr1892_Is(v560)) {
yr1904_Skip();
F.v4678 = yr1849_NewNode(v779, F.v4682);
((*(yR99 *)rt_nil_check(F.v4678))).f_a = yr2127_ParseTerm();
F.v4680 = yr2066_OpAt();
if ((yr2089_IsAssocAdd(F.v4680) || yr2095_IsNonAssocAdd(F.v4680))) {
yr2110_NeedParens(rt_range(v560, INT64_C(0), INT64_C(4000000)), F.v4682);
}
{ void * rv4683 = F.v4678;
return rv4683; }
}
F.v4676 = yr2127_ParseTerm();
F.v4680 = yr2066_OpAt();
if (yr2095_IsNonAssocAdd(F.v4680)) {
yr1904_Skip();
F.v4676 = yr2101_Bin(F.v4680, F.v4676, yr2127_ParseTerm(), F.v4682);
if ((yr2089_IsAssocAdd(yr2066_OpAt()) || yr2095_IsNonAssocAdd(yr2066_OpAt()))) {
yr2110_NeedParens(F.v4680, F.v4682);
}
{ void * rv4684 = F.v4676;
return rv4684; }
}
while (yr2089_IsAssocAdd(F.v4680)) {
yr1904_Skip();
F.v4676 = yr2101_Bin(F.v4680, F.v4676, yr2127_ParseTerm(), F.v4682);
if (yr2095_IsNonAssocAdd(yr2066_OpAt())) {
yr2110_NeedParens(yr2066_OpAt(), F.v4682);
}
F.v4680 = yr2066_OpAt();
}
{ void * rv4685 = F.v4676;
return rv4685; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2127_ParseTerm(void) {
struct yf2128 F;
memset((void *)&F, 0, sizeof F);
F.v4692 = yr1880_TLn();
F.v4688 = yr2143_ParseFactor();
F.v4690 = yr2066_OpAt();
if (yr2083_IsNonAssocMul(F.v4690)) {
yr1904_Skip();
F.v4688 = yr2101_Bin(F.v4690, F.v4688, yr2143_ParseFactor(), F.v4692);
if ((yr2077_IsAssocMul(yr2066_OpAt()) || yr2083_IsNonAssocMul(yr2066_OpAt()))) {
yr2110_NeedParens(F.v4690, F.v4692);
}
{ void * rv4693 = F.v4688;
return rv4693; }
}
while (yr2077_IsAssocMul(F.v4690)) {
yr1904_Skip();
F.v4688 = yr2101_Bin(F.v4690, F.v4688, yr2143_ParseFactor(), F.v4692);
if (yr2083_IsNonAssocMul(yr2066_OpAt())) {
yr2110_NeedParens(yr2066_OpAt(), F.v4692);
}
F.v4690 = yr2066_OpAt();
}
{ void * rv4694 = F.v4688;
return rv4694; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2132_IsLiteralAt(rt_int a_p2133) {
struct yf2134 F;
memset((void *)&F, 0, sizeof F);
F.p2133 = a_p2133;
F.v4698 = ((rt_int *)(v1191).p)[y_ix1(v1191, rt_add(v1233, F.p2133))];
{ rt_int rv4700 = (((((((F.v4698 == v200)) || ((F.v4698 == v203))) || ((F.v4698 == v206))) || ((F.v4698 == v209))) || ((F.v4698 == v212))) || yr1885_IsAt(F.p2133, v371));
return rv4700; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2138_ParseLiteral(void) {
struct yf2139 F;
memset((void *)&F, 0, sizeof F);
F.v4705 = yr1870_TK();
F.v4707 = yr1880_TLn();
if ((F.v4705 == v200)) {
F.v4703 = yr1849_NewNode(v743, F.v4707);
((*(yR99 *)rt_nil_check(F.v4703))).f_ival = yr1875_TV();
} else if ((F.v4705 == v203)) {
F.v4703 = yr1849_NewNode(v746, F.v4707);
((*(yR99 *)rt_nil_check(F.v4703))).f_ival = yr1875_TV();
} else if ((F.v4705 == v206)) {
F.v4703 = yr1849_NewNode(v749, F.v4707);
((*(yR99 *)rt_nil_check(F.v4703))).f_text = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4705 == v209)) {
F.v4703 = yr1849_NewNode(v752, F.v4707);
((*(yR99 *)rt_nil_check(F.v4703))).f_text = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4705 == v212)) {
F.v4703 = yr1849_NewNode(v755, F.v4707);
((*(yR99 *)rt_nil_check(F.v4703))).f_text = rt_range(yr1875_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4703 = yr1849_NewNode(v758, F.v4707);
}
yr1904_Skip();
{ void * rv4708 = F.v4703;
return rv4708; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2143_ParseFactor(void) {
struct yf2144 F;
memset((void *)&F, 0, sizeof F);
F.v4715 = yr1880_TLn();
if (yr1892_Is(v374)) {
yr1904_Skip();
F.v4711 = yr1849_NewNode(v776, F.v4715);
((*(yR99 *)rt_nil_check(F.v4711))).f_a = yr2143_ParseFactor();
{ void * rv4716 = F.v4711;
return rv4716; }
}
if (yr1892_Is(v578)) {
yr1904_Skip();
F.v4711 = yr1849_NewNode(v785, F.v4715);
((*(yR99 *)rt_nil_check(F.v4711))).f_a = yr2117_ParseExpr();
yr1920_Expect(v581);
{ void * rv4717 = F.v4711;
return rv4717; }
}
if (yr2132_IsLiteralAt(INT64_C(0))) {
{ void * rv4719 = yr2138_ParseLiteral();
return rv4719; }
}
if (yr1898_IsIdAt(INT64_C(0))) {
if ((yr2132_IsLiteralAt(INT64_C(1)) || ((yr1898_IsIdAt(INT64_C(1)) && (!((((((yr1885_IsAt(INT64_C(2), v578) || yr1885_IsAt(INT64_C(2), v584)) || yr1885_IsAt(INT64_C(2), v599)) || yr1885_IsAt(INT64_C(2), v602)) || yr1885_IsAt(INT64_C(2), v515)) || yr1885_IsAt(INT64_C(2), v596)))))))) {
F.v4713 = yr1926_Ident();
if (yr1898_IsIdAt(INT64_C(0))) {
F.v4711 = yr1849_NewNode(v761, F.v4715);
((*(yR99 *)rt_nil_check(F.v4711))).f_name = yr1926_Ident();
} else {
F.v4711 = yr2138_ParseLiteral();
}
((*(yR99 *)rt_nil_check(F.v4711))).f_d = yr1849_NewNode(v653, F.v4715);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4711))).f_d))).f_name = F.v4713;
{ void * rv4730 = F.v4711;
return rv4730; }
}
{ void * rv4731 = yr2148_ParseDesignator();
return rv4731; }
}
yr1170_FailN(F.v4715, yr1915_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4733 = ((void *)0);
return rv4733; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2148_ParseDesignator(void) {
struct yf2149 F;
memset((void *)&F, 0, sizeof F);
F.v4742 = yr1880_TLn();
F.v4736 = yr1849_NewNode(v761, F.v4742);
((*(yR99 *)rt_nil_check(F.v4736))).f_name = yr1926_Ident();
if (yr1909_Accept(v578)) {
((*(yR99 *)rt_nil_check(F.v4736))).f_kind = v764;
F.v4740 = ((void *)0);
while ((!yr1892_Is(v581))) {
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4736))).f_a, &F.v4740, yr2117_ParseExpr());
if ((!yr1909_Accept(v590))) {
yr2153_EXIT_ARGS();
}
}
yr1920_Expect(v581);
}
for (;;) {
if (yr1909_Accept(v599)) {
F.v4738 = yr1849_NewNode(v767, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4738))).f_a = F.v4736;
((*(yR99 *)rt_nil_check(F.v4738))).f_name = yr1926_Ident();
F.v4736 = F.v4738;
} else if (yr1909_Accept(v584)) {
F.v4738 = yr1849_NewNode(v770, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4738))).f_a = F.v4736;
F.v4740 = ((void *)0);
for (;;) {
yr1856_Link(&((*(yR99 *)rt_nil_check(F.v4738))).f_b, &F.v4740, yr2117_ParseExpr());
if ((!yr1909_Accept(v590))) {
goto yl_4744;
}
}
yl_4744: ;
yr1920_Expect(v587);
F.v4736 = F.v4738;
} else if (yr1909_Accept(v602)) {
F.v4738 = yr1849_NewNode(v773, yr1880_TLn());
((*(yR99 *)rt_nil_check(F.v4738))).f_a = F.v4736;
F.v4736 = F.v4738;
} else {
goto yl_4743;
}
}
yl_4743: ;
{ void * rv4745 = F.v4736;
return rv4745; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2153_EXIT_ARGS(void) {
struct yf2154 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1892_Is(v581))) {
yr1920_Expect(v581);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2158_ParseProgram(void) {
struct yf2159 F;
memset((void *)&F, 0, sizeof F);
F.v4749 = ((void *)0);
F.v4751 = ((void *)0);
while ((!(yr1870_TK() == v188))) {
if ((!((yr1892_Is(v365) || yr1892_Is(v368))))) {
yr1162_FailS(yr1880_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1856_Link(&F.v4749, &F.v4751, yr1954_ParseModule());
while (yr1909_Accept(v593)) {
}
}
{ void * rv4753 = F.v4749;
return rv4753; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2163_NewSym(rt_int a_p2164, rt_int a_p2165) {
struct yf2166 F;
memset((void *)&F, 0, sizeof F);
F.p2164 = a_p2164;
F.p2165 = a_p2165;
({ F.v4758 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v4758)) = ((yR119){ .f_kind = F.p2164, .f_name = F.p2165, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0) });
((*(yR119 *)rt_nil_check(F.v4758))).f_serial = yr1179_NewSerial();
{ void * rv4769 = F.v4758;
return rv4769; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2170_OpenScope(rt_int a_p2171) {
struct yf2172 F;
memset((void *)&F, 0, sizeof F);
F.p2171 = a_p2171;
({ F.v4773 = rt_alloc(sizeof(yR124)); });
(*(yR124 *)rt_nil_check(F.v4773)) = ((yR124){ .f_syms = ((void *)0), .f_closed = F.p2171, .f_module = ((void *)0), .f_level = v1263, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1257 >= INT64_C(0))) {
((*(yR124 *)rt_nil_check(F.v4773))).f_up = ((void * *)(v1255).p)[y_ix1(v1255, v1257)];
}
v1257 = rt_range(rt_add(v1257, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1255).p)[y_ix1(v1255, v1257)] = F.v4773;
((void * *)(v1297).p)[y_ix1(v1297, v1257)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2176_ReopenScope(void * a_p2177) {
struct yf2178 F;
memset((void *)&F, 0, sizeof F);
F.p2177 = a_p2177;
F.v4780 = ((*(yR124 *)rt_nil_check(F.p2177))).f_syms;
F.v4782 = INT64_C(0);
v1257 = rt_range(rt_add(v1257, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1255).p)[y_ix1(v1255, v1257)] = F.p2177;
((void * *)(v1297).p)[y_ix1(v1297, v1257)] = ((void *)0);
while ((!(F.v4780 == ((void *)0)))) {
F.v4782 = rt_range(rt_add(F.v4782, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1324).p)[y_ix1(v1324, F.v4782)] = F.v4780;
F.v4780 = ((*(yR119 *)rt_nil_check(F.v4780))).f_stack;
}
while ((F.v4782 > INT64_C(0))) {
F.v4780 = ((void * *)(v1324).p)[y_ix1(v1324, F.v4782)];
F.v4785 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4780))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v4780))).f_chain = ((void * *)(v1244).p)[y_ix1(v1244, F.v4785)];
((void * *)(v1244).p)[y_ix1(v1244, F.v4785)] = F.v4780;
F.v4782 = rt_range(rt_sub(F.v4782, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2182_CloseScope(void) {
struct yf2183 F;
memset((void *)&F, 0, sizeof F);
F.v4797 = ((*(yR124 *)rt_nil_check(((void * *)(v1255).p)[y_ix1(v1255, v1257)]))).f_syms;
while ((!(F.v4797 == ((void *)0)))) {
F.v4803 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4797))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4799 = ((void * *)(v1244).p)[y_ix1(v1244, F.v4803)];
F.v4801 = ((void *)0);
while ((((!(F.v4799 == ((void *)0)))) && ((!(F.v4799 == F.v4797))))) {
F.v4801 = F.v4799;
F.v4799 = ((*(yR119 *)rt_nil_check(F.v4799))).f_chain;
}
if ((F.v4799 == F.v4797)) {
if ((F.v4801 == ((void *)0))) {
((void * *)(v1244).p)[y_ix1(v1244, F.v4803)] = ((*(yR119 *)rt_nil_check(F.v4797))).f_chain;
} else {
((*(yR119 *)rt_nil_check(F.v4801))).f_chain = ((*(yR119 *)rt_nil_check(F.v4797))).f_chain;
}
}
F.v4797 = ((*(yR119 *)rt_nil_check(F.v4797))).f_stack;
}
v1257 = rt_range(rt_sub(v1257, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2187_Visible(void * a_p2188) {
struct yf2189 F;
memset((void *)&F, 0, sizeof F);
F.p2188 = a_p2188;
{ rt_int rv4811 = (((((*(yR119 *)rt_nil_check(F.p2188))).f_depth >= v1260)) || ((((*(yR119 *)rt_nil_check(F.p2188))).f_depth == INT64_C(0))));
return rv4811; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2193_Find(rt_int a_p2194) {
struct yf2195 F;
memset((void *)&F, 0, sizeof F);
F.p2194 = a_p2194;
F.v4815 = ((void * *)(v1244).p)[y_ix1(v1244, rt_mod(F.p2194, INT64_C(8192)))];
while ((!(F.v4815 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4815))).f_name == F.p2194)) && yr2187_Visible(F.v4815))) {
{ void * rv4818 = F.v4815;
return rv4818; }
}
F.v4815 = ((*(yR119 *)rt_nil_check(F.v4815))).f_chain;
}
{ void * rv4819 = ((void *)0);
return rv4819; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2199_FindHere(rt_int a_p2200) {
struct yf2201 F;
memset((void *)&F, 0, sizeof F);
F.p2200 = a_p2200;
F.v4823 = ((void * *)(v1244).p)[y_ix1(v1244, rt_mod(F.p2200, INT64_C(8192)))];
while ((!(F.v4823 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4823))).f_name == F.p2200)) && ((((*(yR119 *)rt_nil_check(F.v4823))).f_depth == v1257)))) {
{ void * rv4826 = F.v4823;
return rv4826; }
}
F.v4823 = ((*(yR119 *)rt_nil_check(F.v4823))).f_chain;
}
{ void * rv4827 = ((void *)0);
return rv4827; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2205_Lookup(rt_int a_p2206, rt_int a_p2207) {
struct yf2208 F;
memset((void *)&F, 0, sizeof F);
F.p2206 = a_p2206;
F.p2207 = a_p2207;
F.v4832 = yr2193_Find(F.p2206);
if ((!(((void * *)(v1297).p)[y_ix1(v1297, v1257)] == ((void *)0)))) {
if ((((F.v4832 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v4832))).f_depth == v1257))))) {
if (yr2218_DeclaredFrom(((void * *)(v1297).p)[y_ix1(v1297, v1257)], F.p2206)) {
yr1170_FailN(F.p2207, F.p2206, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v4832 == ((void *)0))) {
yr1170_FailN(F.p2207, F.p2206, y_str(" is not declared here", 21));
}
F.lo4840 = INT64_C(1);
F.hi4841 = v1312;
{ rt_int hi4845 = F.hi4841;
for (rt_int i4844 = F.lo4840; i4844 <= hi4845; i4844++) { F.c_4843 = i4844;
if (((((((*(yR119 *)rt_nil_check(F.v4832))).f_depth == ((rt_int *)(v1308).p)[y_ix1(v1308, F.c_4843)])) && ((((*(yR119 *)rt_nil_check(F.v4832))).f_serial > ((rt_int *)(v1310).p)[y_ix1(v1310, F.c_4843)]))) && yr2212_IsSimple(((*(yR119 *)rt_nil_check(F.v4832))).f_kind))) {
yr1170_FailN(F.p2207, F.p2206, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i4844 == hi4845) break;
}}
if ((((*(yR119 *)rt_nil_check(F.v4832))).f_kind == v878)) {
F.v4834 = ((*(yR119 *)rt_nil_check(F.v4832))).f_chain;
while ((!(F.v4834 == ((void *)0)))) {
if ((((((((((*(yR119 *)rt_nil_check(F.v4834))).f_name == F.p2206)) && ((((*(yR119 *)rt_nil_check(F.v4834))).f_depth == ((*(yR119 *)rt_nil_check(F.v4832))).f_depth))) && ((((*(yR119 *)rt_nil_check(F.v4834))).f_kind == v878))) && yr2239_Resolved(F.v4834)) && ((!(yr2291_Real(F.v4834) == yr2291_Real(F.v4832))))) && ((!(((*(yR119 *)rt_nil_check(yr2291_Real(F.v4832)))).f_kind == v857))))) {
yr1170_FailN(F.p2207, F.p2206, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4834 = ((*(yR119 *)rt_nil_check(F.v4834))).f_chain;
}
}
{ void * rv4848 = F.v4832;
return rv4848; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2212_IsSimple(rt_int a_p2213) {
struct yf2214 F;
memset((void *)&F, 0, sizeof F);
F.p2213 = a_p2213;
{ rt_int rv4851 = (((((((F.p2213 == v845)) || ((F.p2213 == v848))) || ((F.p2213 == v851))) || ((F.p2213 == v854))) || ((F.p2213 == v857))) || ((F.p2213 == v872)));
return rv4851; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2218_DeclaredFrom(void * a_p2219, rt_int a_p2220) {
struct yf2221 F;
memset((void *)&F, 0, sizeof F);
F.p2219 = a_p2219;
F.p2220 = a_p2220;
F.v4856 = F.p2219;
F.v4858 = F.p2219;
while ((!(F.v4856 == ((void *)0)))) {
F.v4860 = ((*(yR99 *)rt_nil_check(F.v4856))).f_kind;
if (((((F.v4860 == v623)) || ((F.v4860 == v626))) || ((F.v4860 == v629)))) {
F.v4858 = ((*(yR99 *)rt_nil_check(F.v4856))).f_a;
while ((!(F.v4858 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4858))).f_name == F.p2220)) {
{ rt_int rv4862 = 1;
return rv4862; }
}
F.v4858 = ((*(yR99 *)rt_nil_check(F.v4858))).f_next;
}
}
if ((((((((F.v4860 == v632)) || ((F.v4860 == v635))) || ((F.v4860 == v638))) || ((F.v4860 == v650))) || ((F.v4860 == v608))) || ((F.v4860 == v644)))) {
if ((((*(yR99 *)rt_nil_check(F.v4856))).f_name == F.p2220)) {
{ rt_int rv4864 = 1;
return rv4864; }
}
}
if ((((((F.v4860 == v623)) || ((F.v4860 == v626))) || ((F.v4860 == v632))) || ((F.v4860 == v635)))) {
if (yr2225_LiteralIn(((*(yR99 *)rt_nil_check(F.v4856))).f_b, F.p2220)) {
{ rt_int rv4866 = 1;
return rv4866; }
}
}
if ((F.v4860 == v608)) {
F.v4858 = ((*(yR99 *)rt_nil_check(F.v4856))).f_b;
while ((!(F.v4858 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v4858))).f_ival == F.p2220)) || ((((((*(yR99 *)rt_nil_check(F.v4858))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v4858))).f_name == F.p2220)))))) {
{ rt_int rv4869 = 1;
return rv4869; }
}
F.v4858 = ((*(yR99 *)rt_nil_check(F.v4858))).f_next;
}
}
F.v4856 = ((*(yR99 *)rt_nil_check(F.v4856))).f_next;
}
{ rt_int rv4871 = 0;
return rv4871; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2225_LiteralIn(void * a_p2226, rt_int a_p2227) {
struct yf2228 F;
memset((void *)&F, 0, sizeof F);
F.p2226 = a_p2226;
F.p2227 = a_p2227;
if ((F.p2226 == ((void *)0))) {
{ rt_int rv4878 = 0;
return rv4878; }
}
if ((((*(yR99 *)rt_nil_check(F.p2226))).f_kind == v659)) {
F.v4876 = ((*(yR99 *)rt_nil_check(F.p2226))).f_a;
while ((!(F.v4876 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4876))).f_name == F.p2227)) {
{ rt_int rv4880 = 1;
return rv4880; }
}
F.v4876 = ((*(yR99 *)rt_nil_check(F.v4876))).f_next;
}
{ rt_int rv4882 = 0;
return rv4882; }
}
if ((((*(yR99 *)rt_nil_check(F.p2226))).f_kind == v665)) {
F.v4876 = ((*(yR99 *)rt_nil_check(F.p2226))).f_a;
while ((!(F.v4876 == ((void *)0)))) {
if (yr2225_LiteralIn(F.v4876, F.p2227)) {
{ rt_int rv4884 = 1;
return rv4884; }
}
F.v4876 = ((*(yR99 *)rt_nil_check(F.v4876))).f_next;
}
{ rt_int rv4885 = yr2225_LiteralIn(((*(yR99 *)rt_nil_check(F.p2226))).f_b, F.p2227);
return rv4885; }
}
if ((((*(yR99 *)rt_nil_check(F.p2226))).f_kind == v668)) {
F.v4876 = ((*(yR99 *)rt_nil_check(F.p2226))).f_a;
while ((!(F.v4876 == ((void *)0)))) {
if (yr2225_LiteralIn(((*(yR99 *)rt_nil_check(F.v4876))).f_b, F.p2227)) {
{ rt_int rv4887 = 1;
return rv4887; }
}
F.v4876 = ((*(yR99 *)rt_nil_check(F.v4876))).f_next;
}
if ((!(((*(yR99 *)rt_nil_check(F.p2226))).f_b == ((void *)0)))) {
if (yr2225_LiteralIn(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2226))).f_b))).f_b, F.p2227)) {
{ rt_int rv4889 = 1;
return rv4889; }
}
F.v4876 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2226))).f_b))).f_a;
while ((!(F.v4876 == ((void *)0)))) {
if (yr2232_LiteralInGroups(((*(yR99 *)rt_nil_check(F.v4876))).f_b, F.p2227)) {
{ rt_int rv4891 = 1;
return rv4891; }
}
F.v4876 = ((*(yR99 *)rt_nil_check(F.v4876))).f_next;
}
}
{ rt_int rv4893 = 0;
return rv4893; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2226))).f_kind == v671)) || ((((*(yR99 *)rt_nil_check(F.p2226))).f_kind == v677)))) {
{ rt_int rv4894 = yr2225_LiteralIn(((*(yR99 *)rt_nil_check(F.p2226))).f_a, F.p2227);
return rv4894; }
}
{ rt_int rv4896 = 0;
return rv4896; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2232_LiteralInGroups(void * a_p2233, rt_int a_p2234) {
struct yf2235 F;
memset((void *)&F, 0, sizeof F);
F.p2233 = a_p2233;
F.p2234 = a_p2234;
F.v4901 = F.p2233;
while ((!(F.v4901 == ((void *)0)))) {
if (yr2225_LiteralIn(((*(yR99 *)rt_nil_check(F.v4901))).f_b, F.p2234)) {
{ rt_int rv4903 = 1;
return rv4903; }
}
F.v4901 = ((*(yR99 *)rt_nil_check(F.v4901))).f_next;
}
{ rt_int rv4905 = 0;
return rv4905; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2239_Resolved(void * a_p2240) {
struct yf2241 F;
memset((void *)&F, 0, sizeof F);
F.p2240 = a_p2240;
if ((!(((*(yR119 *)rt_nil_check(F.p2240))).f_kind == v878))) {
{ rt_int rv4909 = 1;
return rv4909; }
}
if ((((*(yR119 *)rt_nil_check(F.p2240))).f_target == ((void *)0))) {
{ rt_int rv4911 = 0;
return rv4911; }
}
{ rt_int rv4912 = yr2239_Resolved(((*(yR119 *)rt_nil_check(F.p2240))).f_target);
return rv4912; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2245_Ambiguous(void * a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.p2246 = a_p2246;
F.v4916 = ((*(yR119 *)rt_nil_check(F.p2246))).f_chain;
while ((!(F.v4916 == ((void *)0)))) {
if ((((((((*(yR119 *)rt_nil_check(F.v4916))).f_name == ((*(yR119 *)rt_nil_check(F.p2246))).f_name)) && yr2187_Visible(F.v4916)) && ((((*(yR119 *)rt_nil_check(F.v4916))).f_kind == v857))) && ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v4916))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2246))).f_rep))).f_tid))))) {
{ rt_int rv4918 = 1;
return rv4918; }
}
F.v4916 = ((*(yR119 *)rt_nil_check(F.v4916))).f_chain;
}
{ rt_int rv4920 = 0;
return rv4920; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2251_FindLit(rt_int a_p2252, void * a_p2253) {
struct yf2254 F;
memset((void *)&F, 0, sizeof F);
F.p2252 = a_p2252;
F.p2253 = a_p2253;
F.v4925 = ((void * *)(v1244).p)[y_ix1(v1244, rt_mod(F.p2252, INT64_C(8192)))];
while ((!(F.v4925 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4925))).f_name == F.p2252)) && yr2239_Resolved(F.v4925))) {
if ((((((*(yR119 *)rt_nil_check(yr2291_Real(F.v4925)))).f_kind == v857)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(yr2291_Real(F.v4925)))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(F.p2253))).f_tid)))) {
{ void * rv4928 = F.v4925;
return rv4928; }
}
}
F.v4925 = ((*(yR119 *)rt_nil_check(F.v4925))).f_chain;
}
{ void * rv4929 = ((void *)0);
return rv4929; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2258_Define(void * a_p2259, rt_int a_p2260) {
struct yf2261 F;
memset((void *)&F, 0, sizeof F);
F.p2259 = a_p2259;
F.p2260 = a_p2260;
F.v4934 = yr2199_FindHere(((*(yR119 *)rt_nil_check(F.p2259))).f_name);
F.v4936 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.p2259))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4934 == ((void *)0)))) && (!((((((*(yR119 *)rt_nil_check(F.v4934))).f_kind == v857)) && ((((*(yR119 *)rt_nil_check(F.p2259))).f_kind == v857)))))) && (!((((((((*(yR119 *)rt_nil_check(F.p2259))).f_kind == v860)) && ((!(((*(yR119 *)rt_nil_check(F.p2259))).f_alt == ((void *)0))))) && yr2239_Resolved(F.v4934)) && ((((*(yR119 *)rt_nil_check(F.p2259))).f_alt == yr2291_Real(F.v4934))))))) && (!((((((*(yR119 *)rt_nil_check(F.p2259))).f_kind == v878)) && ((((*(yR119 *)rt_nil_check(F.v4934))).f_kind == v878))))))) {
yr1170_FailN(F.p2260, ((*(yR119 *)rt_nil_check(F.p2259))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR119 *)rt_nil_check(F.p2259))).f_depth = v1257;
((*(yR119 *)rt_nil_check(F.p2259))).f_chain = ((void * *)(v1244).p)[y_ix1(v1244, F.v4936)];
((void * *)(v1244).p)[y_ix1(v1244, F.v4936)] = F.p2259;
((*(yR119 *)rt_nil_check(F.p2259))).f_stack = ((*(yR124 *)rt_nil_check(((void * *)(v1255).p)[y_ix1(v1255, v1257)]))).f_syms;
((*(yR124 *)rt_nil_check(((void * *)(v1255).p)[y_ix1(v1255, v1257)]))).f_syms = F.p2259;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2265_Path(rt_int a_p2266, rt_int a_p2267) {
struct yf2268 F;
memset((void *)&F, 0, sizeof F);
F.p2266 = a_p2266;
F.p2267 = a_p2267;
F.v4944 = rt_range(rt_sub(v1263, F.p2266), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2266 == INT64_C(0))) {
{ rt_int rv4947 = F.p2267;
return rv4947; }
}
yr1010_SB();
if ((F.v4944 == INT64_C(0))) {
yr1021_SA(y_str("F.", 2));
} else {
yr1021_SA(y_str("F.up->", 6));
while ((F.v4944 > INT64_C(1))) {
yr1021_SA(y_str("up->", 4));
F.v4944 = rt_range(rt_sub(F.v4944, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1028_ST(F.p2267);
{ rt_int rv4955 = yr1040_SE();
return rv4955; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2272_FramePtr(rt_int a_p2273) {
struct yf2274 F;
memset((void *)&F, 0, sizeof F);
F.p2273 = a_p2273;
F.v4959 = rt_range(rt_sub(v1263, F.p2273), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4959 == INT64_C(0))) {
{ rt_int rv4963 = yr1045_T(y_str("&F", 2));
return rv4963; }
}
yr1010_SB();
yr1021_SA(y_str("F.up", 4));
while ((F.v4959 > INT64_C(1))) {
yr1021_SA(y_str("->up", 4));
F.v4959 = rt_range(rt_sub(F.v4959, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4969 = yr1040_SE();
return rv4969; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2278_DeclStorage(rt_int a_p2279, rt_int a_p2280) {
struct yf2281 F;
memset((void *)&F, 0, sizeof F);
F.p2279 = a_p2279;
F.p2280 = a_p2280;
yr1010_SB();
if ((v1263 == INT64_C(0))) {
yr1021_SA(y_str("static ", 7));
}
yr1028_ST(F.p2279);
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.p2280);
yr1021_SA(y_str(";", 1));
F.v4974 = yr1040_SE();
if ((v1263 == INT64_C(0))) {
yr1094_Put(&v968, F.v4974);
} else {
yr1094_Put(&v982, F.v4974);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2285_SymPath(void * a_p2286) {
struct yf2287 F;
memset((void *)&F, 0, sizeof F);
F.p2286 = a_p2286;
F.v4983 = yr2265_Path(((*(yR119 *)rt_nil_check(F.p2286))).f_level, ((*(yR119 *)rt_nil_check(F.p2286))).f_cname);
if (((*(yR119 *)rt_nil_check(F.p2286))).f_byref) {
yr1010_SB();
yr1021_SA(y_str("(*", 2));
yr1028_ST(F.v4983);
yr1021_SA(y_str(")", 1));
{ rt_int rv4986 = yr1040_SE();
return rv4986; }
}
{ rt_int rv4987 = F.v4983;
return rv4987; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2291_Real(void * a_p2292) {
struct yf2293 F;
memset((void *)&F, 0, sizeof F);
F.p2292 = a_p2292;
F.v4991 = F.p2292;
while ((((*(yR119 *)rt_nil_check(F.v4991))).f_kind == v878)) {
if ((((*(yR119 *)rt_nil_check(F.v4991))).f_target == ((void *)0))) {
yr1170_FailN(v984, ((*(yR119 *)rt_nil_check(F.v4991))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v4991 = ((*(yR119 *)rt_nil_check(F.v4991))).f_target;
}
{ void * rv4993 = F.v4991;
return rv4993; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2297_NewRep(rt_int a_p2298, rt_int a_p2299) {
struct yf2300 F;
memset((void *)&F, 0, sizeof F);
F.p2298 = a_p2298;
F.p2299 = a_p2299;
({ F.v4998 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v4998)) = ((yR104){ .f_kind = F.p2298, .f_tid = F.p2299, .f_tname = F.p2299, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0) });
((*(yR104 *)rt_nil_check(F.v4998))).f_serial = yr1179_NewSerial();
{ void * rv5022 = F.v4998;
return rv5022; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2304_CopyRep(void * a_p2305) {
struct yf2306 F;
memset((void *)&F, 0, sizeof F);
F.p2305 = a_p2305;
({ F.v5026 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5026)) = (*(yR104 *)rt_nil_check(F.p2305));
((*(yR104 *)rt_nil_check(F.v5026))).f_serial = yr1179_NewSerial();
((*(yR104 *)rt_nil_check(F.v5026))).f_sig = INT64_C(0);
{ void * rv5028 = F.v5026;
return rv5028; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2310_IsDiscrete(void * a_p2311) {
struct yf2312 F;
memset((void *)&F, 0, sizeof F);
F.p2311 = a_p2311;
{ rt_int rv5031 = (((((((*(yR104 *)rt_nil_check(F.p2311))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2311))).f_kind == v797))) || ((((*(yR104 *)rt_nil_check(F.p2311))).f_kind == v800))) || ((((*(yR104 *)rt_nil_check(F.p2311))).f_kind == v803)));
return rv5031; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2316_IsNumeric(void * a_p2317) {
struct yf2318 F;
memset((void *)&F, 0, sizeof F);
F.p2317 = a_p2317;
{ rt_int rv5034 = ((((((*(yR104 *)rt_nil_check(F.p2317))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2317))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.p2317))).f_kind == v794)));
return rv5034; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2322_IsArrayLike(void * a_p2323) {
struct yf2324 F;
memset((void *)&F, 0, sizeof F);
F.p2323 = a_p2323;
{ rt_int rv5037 = ((((((*(yR104 *)rt_nil_check(F.p2323))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2323))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.p2323))).f_kind == v830)));
return rv5037; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2328_IsString(void * a_p2329) {
struct yf2330 F;
memset((void *)&F, 0, sizeof F);
F.p2329 = a_p2329;
if ((((*(yR104 *)rt_nil_check(F.p2329))).f_kind == v830)) {
{ rt_int rv5041 = 1;
return rv5041; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2329))).f_kind == v806)) && ((((*(yR104 *)rt_nil_check(F.p2329))).f_nidx == INT64_C(1))))) {
{ rt_int rv5043 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2329))).f_elem))).f_kind == v803);
return rv5043; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2329))).f_kind == v827)) && ((((*(yR104 *)rt_nil_check(F.p2329))).f_nidx == INT64_C(1))))) {
{ rt_int rv5045 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2329))).f_elem))).f_kind == v803);
return rv5045; }
}
{ rt_int rv5047 = 0;
return rv5047; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2334_Deep(void * a_p2335) {
struct yf2336 F;
memset((void *)&F, 0, sizeof F);
F.p2335 = a_p2335;
if (((((((*(yR104 *)rt_nil_check(F.p2335))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2335))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.p2335))).f_kind == v830)))) {
{ rt_int rv5051 = 1;
return rv5051; }
}
{ rt_int rv5052 = (((((*(yR104 *)rt_nil_check(F.p2335))).f_kind == v809)) && ((*(yR104 *)rt_nil_check(F.p2335))).f_deep);
return rv5052; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2340_Holds(void * a_p2341, rt_int a_p2342) {
struct yf2343 F;
memset((void *)&F, 0, sizeof F);
F.p2341 = a_p2341;
F.p2342 = a_p2342;
if ((((*(yR104 *)rt_nil_check(F.p2341))).f_kind == v806)) {
{ rt_int rv5058 = (((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2341))).f_elem))).f_kind == F.p2342)) || yr2340_Holds(((*(yR104 *)rt_nil_check(F.p2341))).f_elem, F.p2342));
return rv5058; }
}
if ((((*(yR104 *)rt_nil_check(F.p2341))).f_kind == v809)) {
F.v5057 = ((*(yR104 *)rt_nil_check(F.p2341))).f_fields;
while ((!(F.v5057 == ((void *)0)))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR109 *)rt_nil_check(F.v5057))).f_rep))).f_kind == F.p2342)) || yr2340_Holds(((*(yR109 *)rt_nil_check(F.v5057))).f_rep, F.p2342))) {
{ rt_int rv5060 = 1;
return rv5060; }
}
F.v5057 = ((*(yR109 *)rt_nil_check(F.v5057))).f_next;
}
}
{ rt_int rv5062 = 0;
return rv5062; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2347_HoldsSignal(void * a_p2348) {
struct yf2349 F;
memset((void *)&F, 0, sizeof F);
F.p2348 = a_p2348;
{ rt_int rv5065 = yr2340_Holds(F.p2348, v821);
return rv5065; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2353_NonAssignable(void * a_p2354) {
struct yf2355 F;
memset((void *)&F, 0, sizeof F);
F.p2354 = a_p2354;
F.v5069 = ((*(yR104 *)rt_nil_check(F.p2354))).f_kind;
if (((((F.v5069 == v821)) || ((F.v5069 == v815))) || ((F.v5069 == v824)))) {
{ rt_int rv5071 = 1;
return rv5071; }
}
{ rt_int rv5072 = ((yr2340_Holds(F.p2354, v821) || yr2340_Holds(F.p2354, v815)) || yr2340_Holds(F.p2354, v824));
return rv5072; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2359_CType(void * a_p2360) {
struct yf2361 F;
memset((void *)&F, 0, sizeof F);
F.p2360 = a_p2360;
F.v5076 = ((*(yR104 *)rt_nil_check(F.p2360))).f_kind;
if (((((F.v5076 == v788)) || ((F.v5076 == v797))) || ((F.v5076 == v800)))) {
{ rt_int rv5078 = yr1045_T(y_str("rt_int", 6));
return rv5078; }
}
if ((F.v5076 == v803)) {
{ rt_int rv5080 = yr1045_T(y_str("unsigned char", 13));
return rv5080; }
}
if ((F.v5076 == v794)) {
{ rt_int rv5082 = yr1045_T(y_str("double", 6));
return rv5082; }
}
if ((F.v5076 == v791)) {
{ rt_int rv5084 = yr1045_T(y_str("yfix", 4));
return rv5084; }
}
if (((((F.v5076 == v806)) || ((F.v5076 == v827))) || ((F.v5076 == v830)))) {
{ rt_int rv5086 = yr1045_T(y_str("yarr", 4));
return rv5086; }
}
if ((F.v5076 == v809)) {
{ rt_int rv5087 = ((*(yR104 *)rt_nil_check(F.p2360))).f_cname;
return rv5087; }
}
if ((((F.v5076 == v812)) || ((F.v5076 == v833)))) {
{ rt_int rv5089 = yr1045_T(y_str("void *", 6));
return rv5089; }
}
if ((F.v5076 == v815)) {
{ rt_int rv5091 = yr1045_T(y_str("yfile *", 7));
return rv5091; }
}
if ((F.v5076 == v818)) {
{ rt_int rv5093 = yr1045_T(y_str("yset", 4));
return rv5093; }
}
if ((F.v5076 == v821)) {
{ rt_int rv5095 = yr1045_T(y_str("ysig", 4));
return rv5095; }
}
if ((F.v5076 == v824)) {
{ rt_int rv5097 = yr1045_T(y_str("rt_lock", 7));
return rv5097; }
}
{ rt_int rv5099 = yr1045_T(y_str("void", 4));
return rv5099; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2365_DescOf(void * a_p2366) {
struct yf2367 F;
memset((void *)&F, 0, sizeof F);
F.p2366 = a_p2366;
F.v5103 = ((*(yR104 *)rt_nil_check(F.p2366))).f_kind;
if (((((F.v5103 == v788)) || ((F.v5103 == v797))) || ((F.v5103 == v800)))) {
{ rt_int rv5105 = yr1045_T(y_str("&y_d_int", 8));
return rv5105; }
}
if ((F.v5103 == v803)) {
{ rt_int rv5107 = yr1045_T(y_str("&y_d_byte", 9));
return rv5107; }
}
if ((F.v5103 == v794)) {
{ rt_int rv5109 = yr1045_T(y_str("&y_d_float", 10));
return rv5109; }
}
if ((F.v5103 == v791)) {
{ rt_int rv5111 = yr1045_T(y_str("&y_d_fix", 8));
return rv5111; }
}
if ((((F.v5103 == v812)) || ((F.v5103 == v833)))) {
{ rt_int rv5113 = yr1045_T(y_str("&y_d_ptr", 8));
return rv5113; }
}
if ((F.v5103 == v818)) {
{ rt_int rv5115 = yr1045_T(y_str("&y_d_set", 8));
return rv5115; }
}
if ((((F.v5103 == v806)) || ((F.v5103 == v809)))) {
yr1010_SB();
yr1021_SA(y_str("&", 1));
yr1028_ST(yr2265_Path(((*(yR104 *)rt_nil_check(F.p2366))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2366))).f_dname));
{ rt_int rv5117 = yr1040_SE();
return rv5117; }
}
if ((F.v5103 == v830)) {
{ rt_int rv5119 = yr1045_T(y_str("&y_d_str", 8));
return rv5119; }
}
if ((F.v5103 == v821)) {
{ rt_int rv5121 = yr1045_T(y_str("&y_d_sig", 8));
return rv5121; }
}
if ((F.v5103 == v824)) {
{ rt_int rv5123 = yr1045_T(y_str("&y_d_sem", 8));
return rv5123; }
}
{ rt_int rv5125 = yr1045_T(y_str("&y_d_opaque", 11));
return rv5125; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2371_NewDesc(void * a_p2372) {
struct yf2373 F;
memset((void *)&F, 0, sizeof F);
F.p2372 = a_p2372;
((*(yR104 *)rt_nil_check(F.p2372))).f_dname = yr1184_Fresh(y_str("yd_", 3));
((*(yR104 *)rt_nil_check(F.p2372))).f_dlevel = v1263;
yr2278_DeclStorage(yr1045_T(y_str("ydesc", 5)), ((*(yR104 *)rt_nil_check(F.p2372))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2377_SameType(void * a_p2378, void * a_p2379) {
struct yf2380 F;
memset((void *)&F, 0, sizeof F);
F.p2378 = a_p2378;
F.p2379 = a_p2379;
if ((((*(yR104 *)rt_nil_check(F.p2378))).f_tid == ((*(yR104 *)rt_nil_check(F.p2379))).f_tid)) {
{ rt_int rv5134 = 1;
return rv5134; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2378))).f_kind == v830)) && yr2328_IsString(F.p2379))) {
{ rt_int rv5136 = 1;
return rv5136; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2379))).f_kind == v830)) && yr2328_IsString(F.p2378))) {
{ rt_int rv5138 = 1;
return rv5138; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2378))).f_kind == v833)) && ((((*(yR104 *)rt_nil_check(F.p2379))).f_kind == v812)))) {
{ rt_int rv5140 = 1;
return rv5140; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2379))).f_kind == v833)) && ((((*(yR104 *)rt_nil_check(F.p2378))).f_kind == v812)))) {
{ rt_int rv5142 = 1;
return rv5142; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2378))).f_kind == v842)) || ((((*(yR104 *)rt_nil_check(F.p2379))).f_kind == v842)))) {
{ rt_int rv5144 = 1;
return rv5144; }
}
{ rt_int rv5146 = 0;
return rv5146; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2384_TypeClash(rt_int a_p2385, void * a_p2386, void * a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.p2385 = a_p2385;
F.p2386 = a_p2386;
F.p2387 = a_p2387;
yr1010_SB();
yr1021_SA(y_str("type conflict: ", 15));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2386))).f_tname);
yr1021_SA(y_str(" expected, ", 11));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2387))).f_tname);
yr1021_SA(y_str(" found", 6));
F.v5152 = yr1040_SE();
yr1141_Fail(F.p2385, F.v5152);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2392_CheckType(rt_int a_p2393, void * a_p2394, void * a_p2395) {
struct yf2396 F;
memset((void *)&F, 0, sizeof F);
F.p2393 = a_p2393;
F.p2394 = a_p2394;
F.p2395 = a_p2395;
if ((!yr2377_SameType(F.p2394, F.p2395))) {
yr2384_TypeClash(F.p2393, F.p2394, F.p2395);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2400_CheckRepresented(void * a_p2401, rt_int a_p2402) {
struct yf2403 F;
memset((void *)&F, 0, sizeof F);
F.p2401 = a_p2401;
F.p2402 = a_p2402;
if (((*(yR104 *)rt_nil_check(F.p2401))).f_abstract) {
yr1170_FailN(F.p2402, ((*(yR104 *)rt_nil_check(F.p2401))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2407_SigText(void * a_p2408) {
struct yf2409 F;
memset((void *)&F, 0, sizeof F);
F.p2408 = a_p2408;
F.v5167 = ((*(yR104 *)rt_nil_check(F.p2408))).f_kind;
yr1010_SB();
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2408))).f_tid);
if (((yr2310_IsDiscrete(F.p2408) || ((F.v5167 == v794))) || ((F.v5167 == v791)))) {
yr1021_SA(y_str("[", 1));
if (((*(yR104 *)rt_nil_check(F.p2408))).f_hasm) {
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2408))).f_mlo);
yr1021_SA(y_str("..", 2));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2408))).f_mhi);
} else {
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2408))).f_lo);
yr1021_SA(y_str("..", 2));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2408))).f_hi);
}
yr1021_SA(y_str("]", 1));
if ((F.v5167 == v794)) {
yr1021_SA(y_str("P", 1));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2408))).f_prec);
}
if ((F.v5167 == v791)) {
yr1021_SA(y_str("S", 1));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2408))).f_fsn);
yr1021_SA(y_str("/", 1));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2408))).f_fsd);
}
} else if ((F.v5167 == v806)) {
yr1021_SA(y_str("(", 1));
F.v5169 = ((*(yR104 *)rt_nil_check(F.p2408))).f_idx;
while ((!(F.v5169 == ((void *)0)))) {
yr1028_ST(yr2413_RepSig(F.v5169));
yr1021_SA(y_str(",", 1));
F.v5169 = ((*(yR104 *)rt_nil_check(F.v5169))).f_link;
}
yr1021_SA(y_str("OF ", 3));
yr1028_ST(yr2413_RepSig(((*(yR104 *)rt_nil_check(F.p2408))).f_elem));
yr1021_SA(y_str(")", 1));
} else if ((F.v5167 == v827)) {
yr1021_SA(y_str("(", 1));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2408))).f_nidx);
yr1021_SA(y_str("D ", 2));
yr1028_ST(yr2413_RepSig(((*(yR104 *)rt_nil_check(F.p2408))).f_elem));
yr1021_SA(y_str(")", 1));
} else if ((F.v5167 == v809)) {
yr1021_SA(y_str("{", 1));
F.v5171 = ((*(yR104 *)rt_nil_check(F.p2408))).f_fields;
while ((!(F.v5171 == ((void *)0)))) {
if (((*(yR109 *)rt_nil_check(F.v5171))).f_isconst) {
yr1021_SA(y_str("C ", 2));
} else {
yr1021_SA(y_str("V ", 2));
}
yr1028_ST(((*(yR109 *)rt_nil_check(F.v5171))).f_name);
yr1021_SA(y_str(":", 1));
yr1028_ST(yr2413_RepSig(((*(yR109 *)rt_nil_check(F.v5171))).f_rep));
yr1021_SA(y_str(";", 1));
F.v5171 = ((*(yR109 *)rt_nil_check(F.v5171))).f_next;
}
yr1021_SA(y_str("}", 1));
} else if ((((F.v5167 == v818)) || ((F.v5167 == v815)))) {
yr1021_SA(y_str("(", 1));
yr1028_ST(yr2413_RepSig(((*(yR104 *)rt_nil_check(F.p2408))).f_elem));
yr1021_SA(y_str(")", 1));
}
{ rt_int rv5194 = yr1040_SE();
return rv5194; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2413_RepSig(void * a_p2414) {
struct yf2415 F;
memset((void *)&F, 0, sizeof F);
F.p2414 = a_p2414;
if ((((*(yR104 *)rt_nil_check(F.p2414))).f_sig == INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2414))).f_sig = yr1059_Name(yr2407_SigText(F.p2414));
}
{ rt_int rv5198 = ((*(yR104 *)rt_nil_check(F.p2414))).f_sig;
return rv5198; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2419_Identical(void * a_p2420, void * a_p2421) {
struct yf2422 F;
memset((void *)&F, 0, sizeof F);
F.p2420 = a_p2420;
F.p2421 = a_p2421;
if ((F.p2420 == F.p2421)) {
{ rt_int rv5203 = 1;
return rv5203; }
}
if ((!yr2377_SameType(F.p2420, F.p2421))) {
{ rt_int rv5205 = 0;
return rv5205; }
}
{ rt_int rv5206 = (yr2413_RepSig(F.p2420) == yr2413_RepSig(F.p2421));
return rv5206; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2426_IsLiteralNode(void * a_p2427) {
struct yf2428 F;
memset((void *)&F, 0, sizeof F);
F.p2427 = a_p2427;
if ((((((((*(yR99 *)rt_nil_check(F.p2427))).f_kind == v743)) || ((((*(yR99 *)rt_nil_check(F.p2427))).f_kind == v749))) || ((((*(yR99 *)rt_nil_check(F.p2427))).f_kind == v746))) || ((((*(yR99 *)rt_nil_check(F.p2427))).f_kind == v752)))) {
{ rt_int rv5209 = (((*(yR99 *)rt_nil_check(F.p2427))).f_d == ((void *)0));
return rv5209; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2427))).f_kind == v779)) || ((((*(yR99 *)rt_nil_check(F.p2427))).f_kind == v785)))) {
{ rt_int rv5210 = yr2426_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2427))).f_a);
return rv5210; }
}
{ rt_int rv5212 = 0;
return rv5212; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2432_StoreBounds(void * a_p2433, yarr a_p2435) {
struct yf2436 F;
memset((void *)&F, 0, sizeof F);
F.p2433 = a_p2433;
F.p2435 = a_p2435;
F.v5217 = yr1184_Fresh(y_str("lo", 2));
F.v5219 = yr1184_Fresh(y_str("hi", 2));
yr2278_DeclStorage(yr1045_T(F.p2435), F.v5217);
yr2278_DeclStorage(yr1045_T(F.p2435), F.v5219);
yr1116_Emit(yr3148_Join(yr2265_Path(v1263, F.v5217), yr1045_T(y_str(" = ", 3)), yr3148_Join(((*(yR104 *)rt_nil_check(F.p2433))).f_lo, yr1045_T(y_str(";", 1)), INT64_C(0))));
yr1116_Emit(yr3148_Join(yr2265_Path(v1263, F.v5219), yr1045_T(y_str(" = ", 3)), yr3148_Join(((*(yR104 *)rt_nil_check(F.p2433))).f_hi, yr1045_T(y_str(";", 1)), INT64_C(0))));
((*(yR104 *)rt_nil_check(F.p2433))).f_lo = F.v5217;
((*(yR104 *)rt_nil_check(F.p2433))).f_hi = F.v5219;
((*(yR104 *)rt_nil_check(F.p2433))).f_dname = F.v5217;
((*(yR104 *)rt_nil_check(F.p2433))).f_dlevel = v1263;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2440_LoText(void * a_p2441) {
struct yf2442 F;
memset((void *)&F, 0, sizeof F);
F.p2441 = a_p2441;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2441))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2441))).f_lo == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2441))).f_kind == v806)))) && ((!(((*(yR104 *)rt_nil_check(F.p2441))).f_kind == v809))))) {
{ rt_int rv5232 = yr2265_Path(((*(yR104 *)rt_nil_check(F.p2441))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2441))).f_lo);
return rv5232; }
}
{ rt_int rv5233 = ((*(yR104 *)rt_nil_check(F.p2441))).f_lo;
return rv5233; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2446_HiText(void * a_p2447) {
struct yf2448 F;
memset((void *)&F, 0, sizeof F);
F.p2447 = a_p2447;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2447))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2447))).f_hi == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2447))).f_kind == v806)))) && ((!(((*(yR104 *)rt_nil_check(F.p2447))).f_kind == v809))))) {
{ rt_int rv5238 = yr2265_Path(((*(yR104 *)rt_nil_check(F.p2447))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2447))).f_hi);
return rv5238; }
}
{ rt_int rv5239 = ((*(yR104 *)rt_nil_check(F.p2447))).f_hi;
return rv5239; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2452_AdoptLiteral(void * a_p2453, void * a_p2454, void * a_p2455) {
struct yf2456 F;
memset((void *)&F, 0, sizeof F);
F.p2453 = a_p2453;
F.p2454 = a_p2454;
F.p2455 = a_p2455;
if ((((!yr2426_IsLiteralNode(F.p2453)) || ((!(((*(yR104 *)rt_nil_check(F.p2454))).f_kind == ((*(yR104 *)rt_nil_check(F.p2455))).f_kind)))) || (!yr2316_IsNumeric(F.p2455)))) {
{ void * rv5246 = F.p2454;
return rv5246; }
}
if (yr2460_HasQualifier(F.p2453)) {
{ void * rv5247 = F.p2454;
return rv5247; }
}
F.v5245 = yr2304_CopyRep(F.p2454);
((*(yR104 *)rt_nil_check(F.v5245))).f_tid = ((*(yR104 *)rt_nil_check(F.p2455))).f_tid;
((*(yR104 *)rt_nil_check(F.v5245))).f_tname = ((*(yR104 *)rt_nil_check(F.p2455))).f_tname;
{ void * rv5248 = F.v5245;
return rv5248; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2460_HasQualifier(void * a_p2461) {
struct yf2462 F;
memset((void *)&F, 0, sizeof F);
F.p2461 = a_p2461;
if ((((((*(yR99 *)rt_nil_check(F.p2461))).f_kind == v779)) || ((((*(yR99 *)rt_nil_check(F.p2461))).f_kind == v785)))) {
{ rt_int rv5251 = yr2460_HasQualifier(((*(yR99 *)rt_nil_check(F.p2461))).f_a);
return rv5251; }
}
{ rt_int rv5252 = (!(((*(yR99 *)rt_nil_check(F.p2461))).f_d == ((void *)0)));
return rv5252; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2466_Gcd(rt_int a_p2467, rt_int a_p2468) {
struct yf2469 F;
memset((void *)&F, 0, sizeof F);
F.p2467 = a_p2467;
F.p2468 = a_p2468;
F.v5257 = F.p2467;
F.v5259 = F.p2468;
if ((F.v5257 < INT64_C(0))) {
F.v5257 = rt_range(rt_neg(F.v5257), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5259 < INT64_C(0))) {
F.v5259 = rt_range(rt_neg(F.v5259), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5259 == INT64_C(0)))) {
F.v5261 = rt_range(rt_mod(F.v5257, F.v5259), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5257 = F.v5259;
F.v5259 = F.v5261;
}
if ((F.v5257 == INT64_C(0))) {
{ rt_int rv5270 = INT64_C(1);
return rv5270; }
}
{ rt_int rv5271 = F.v5257;
return rv5271; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2473_MulChk(rt_int a_p2474, rt_int a_p2475, rt_int a_p2476) {
struct yf2477 F;
memset((void *)&F, 0, sizeof F);
F.p2474 = a_p2474;
F.p2475 = a_p2475;
F.p2476 = a_p2476;
F.v5277 = F.p2474;
F.v5279 = F.p2475;
if ((F.v5277 < INT64_C(0))) {
F.v5277 = rt_range(rt_neg(F.v5277), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5279 < INT64_C(0))) {
F.v5279 = rt_range(rt_neg(F.v5279), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5277 == INT64_C(0)))) && ((F.v5279 > (rt_div(v890, F.v5277)))))) {
yr1162_FailS(F.p2476, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5288 = rt_range(rt_mul(F.p2474, F.p2475), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv5288; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2481_PowChk(rt_int a_p2482, rt_int a_p2483, rt_int a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.p2482 = a_p2482;
F.p2483 = a_p2483;
F.p2484 = a_p2484;
F.v5294 = INT64_C(1);
F.lo5299 = INT64_C(1);
F.hi5300 = F.p2483;
{ rt_int hi5304 = F.hi5300;
for (rt_int i5303 = F.lo5299; i5303 <= hi5304; i5303++) { F.c_5302 = i5303;
F.v5294 = yr2473_MulChk(F.v5294, F.p2482, F.p2484);
if (i5303 == hi5304) break;
}}
{ rt_int rv5305 = F.v5294;
return rv5305; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2489_ScaleRatio(void * a_p2490, void * a_p2491, rt_int * a_p2492, rt_int * a_p2493, rt_int * a_p2494) {
struct yf2495 F;
memset((void *)&F, 0, sizeof F);
F.p2490 = a_p2490;
F.p2491 = a_p2491;
F.p2492_o = a_p2492;
F.p2493_o = a_p2493;
F.p2494_o = a_p2494;
F.p2492 = yr1045_T(y_str("1", 1));
F.p2493 = yr1045_T(y_str("1", 1));
F.p2494 = 1;
if ((((((*(yR104 *)rt_nil_check(F.p2490))).f_fsd == INT64_C(0))) || ((((*(yR104 *)rt_nil_check(F.p2491))).f_fsd == INT64_C(0))))) {
(*F.p2492_o) = F.p2492;
(*F.p2493_o) = F.p2493;
(*F.p2494_o) = F.p2494;
return;
}
F.v5313 = yr2466_Gcd(((*(yR104 *)rt_nil_check(F.p2490))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2491))).f_fsn);
F.v5315 = yr2466_Gcd(((*(yR104 *)rt_nil_check(F.p2490))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2491))).f_fsd);
F.v5317 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2490))).f_fsn, F.v5313), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5319 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2491))).f_fsd, F.v5315), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5321 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2490))).f_fsd, F.v5315), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5323 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2491))).f_fsn, F.v5313), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2494 = (((((F.v5317 == INT64_C(1))) && ((F.v5319 == INT64_C(1)))) && ((F.v5321 == INT64_C(1)))) && ((F.v5323 == INT64_C(1))));
F.p2492 = yr2499_Factor(F.v5317, F.v5319);
F.p2493 = yr2499_Factor(F.v5321, F.v5323);
(*F.p2492_o) = F.p2492;
(*F.p2493_o) = F.p2493;
(*F.p2494_o) = F.p2494;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2499_Factor(rt_int a_p2500, rt_int a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.p2500 = a_p2500;
F.p2501 = a_p2501;
yr1010_SB();
yr1021_SA(y_str("((yfix)INT64_C(", 15));
yr1034_SI(F.p2500);
yr1021_SA(y_str(")", 1));
if ((!(F.p2501 == INT64_C(1)))) {
yr1021_SA(y_str(" * INT64_C(", 11));
yr1034_SI(F.p2501);
yr1021_SA(y_str(")", 1));
}
yr1021_SA(y_str(")", 1));
{ rt_int rv5346 = yr1040_SE();
return rv5346; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2506_SetScale(void * a_p2507, rt_int a_p2508, rt_int a_p2509) {
struct yf2510 F;
memset((void *)&F, 0, sizeof F);
F.p2507 = a_p2507;
F.p2508 = a_p2508;
F.p2509 = a_p2509;
F.v5352 = yr2466_Gcd(F.p2508, F.p2509);
((*(yR104 *)rt_nil_check(F.p2507))).f_fsn = rt_range(rt_div(F.p2508, F.v5352), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2507))).f_fsd = rt_range(rt_div(F.p2509, F.v5352), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR104 *)rt_nil_check(F.p2507))).f_fsd < INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2507))).f_fsn = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2507))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2507))).f_fsd = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2507))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2514_Qualify(void * a_p2515, void * a_p2516) {
struct yf2517 F;
memset((void *)&F, 0, sizeof F);
F.p2515 = a_p2515;
F.p2516 = a_p2516;
if ((((*(yR104 *)rt_nil_check(F.p2515))).f_kind == v791)) {
if ((((*(yR99 *)rt_nil_check(F.p2516))).f_c == ((void *)0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2718_ManifestFix(((*(yR99 *)rt_nil_check(F.p2516))).f_c, &F.v5374, &F.v5380, &F.v5382);
if (((!F.v5374) || ((F.v5380 <= INT64_C(0))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR104 *)rt_nil_check(F.p2515))).f_fsn = F.v5380;
((*(yR104 *)rt_nil_check(F.p2515))).f_fsd = F.v5382;
yr1010_SB();
yr1034_SI(F.v5380);
yr1021_SA(y_str("/", 1));
yr1034_SI(F.v5382);
((*(yR104 *)rt_nil_check(F.p2515))).f_scale = yr1040_SE();
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2516))).f_a, F.p2515, &F.v5362, &F.v5370);
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2516))).f_b, F.p2515, &F.v5364, &F.v5372);
F.v5370 = yr2452_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2516))).f_a, F.v5370, F.p2515);
F.v5372 = yr2452_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2516))).f_b, F.v5372, F.p2515);
if ((((*(yR104 *)rt_nil_check(F.p2515))).f_kind == v791)) {
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2516))).f_line, F.p2515, F.v5370);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2516))).f_line, F.p2515, F.v5372);
yr2489_ScaleRatio(F.v5370, F.p2515, &F.v5366, &F.v5368, &F.v5376);
((*(yR104 *)rt_nil_check(F.p2515))).f_lo = yr3148_Join(yr1045_T(y_str("y_fix_bound(", 12)), F.v5362, yr3148_Join(yr1045_T(y_str(", ", 2)), F.v5366, yr3148_Join(yr1045_T(y_str(", ", 2)), F.v5368, yr1045_T(y_str(", 1)", 4)))));
yr2489_ScaleRatio(F.v5372, F.p2515, &F.v5366, &F.v5368, &F.v5376);
((*(yR104 *)rt_nil_check(F.p2515))).f_hi = yr3148_Join(yr1045_T(y_str("y_fix_bound(", 12)), F.v5364, yr3148_Join(yr1045_T(y_str(", ", 2)), F.v5366, yr3148_Join(yr1045_T(y_str(", ", 2)), F.v5368, yr1045_T(y_str(", 0)", 4)))));
((*(yR104 *)rt_nil_check(F.p2515))).f_dname = INT64_C(0);
yr2432_StoreBounds(F.p2515, y_str("yfix", 4));
((*(yR104 *)rt_nil_check(F.p2515))).f_abstract = 0;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2515))).f_kind == v794)) {
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2516))).f_line, F.p2515, F.v5370);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2516))).f_line, F.p2515, F.v5372);
((*(yR104 *)rt_nil_check(F.p2515))).f_lo = F.v5362;
((*(yR104 *)rt_nil_check(F.p2515))).f_hi = F.v5364;
((*(yR104 *)rt_nil_check(F.p2515))).f_dname = INT64_C(0);
if ((!((yr2426_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2516))).f_a) && yr2426_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2516))).f_b))))) {
yr2432_StoreBounds(F.p2515, y_str("double", 6));
}
if ((((*(yR99 *)rt_nil_check(F.p2516))).f_d == ((void *)0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2516))).f_d, &F.v5374, &F.v5378);
if ((!F.v5374)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5378 < INT64_C(1))) || ((F.v5378 > INT64_C(15))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1010_SB();
yr1034_SI(F.v5378);
((*(yR104 *)rt_nil_check(F.p2515))).f_prec = yr1040_SE();
((*(yR104 *)rt_nil_check(F.p2515))).f_abstract = 0;
return;
}
if ((!yr2310_IsDiscrete(F.p2515))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR99 *)rt_nil_check(F.p2516))).f_c == ((void *)0)))) || ((!(((*(yR99 *)rt_nil_check(F.p2516))).f_d == ((void *)0)))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2516))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2516))).f_line, F.p2515, F.v5370);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2516))).f_line, F.p2515, F.v5372);
((*(yR104 *)rt_nil_check(F.p2515))).f_lo = F.v5362;
((*(yR104 *)rt_nil_check(F.p2515))).f_hi = F.v5364;
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2516))).f_a, &F.v5374, &((*(yR104 *)rt_nil_check(F.p2515))).f_mlo);
((*(yR104 *)rt_nil_check(F.p2515))).f_hasm = F.v5374;
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2516))).f_b, &F.v5374, &((*(yR104 *)rt_nil_check(F.p2515))).f_mhi);
((*(yR104 *)rt_nil_check(F.p2515))).f_hasm = (((*(yR104 *)rt_nil_check(F.p2515))).f_hasm && F.v5374);
((*(yR104 *)rt_nil_check(F.p2515))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2515))).f_dname = INT64_C(0);
if ((!((*(yR104 *)rt_nil_check(F.p2515))).f_hasm)) {
yr2432_StoreBounds(F.p2515, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2521_DefineLits(void * a_p2522) {
struct yf2523 F;
memset((void *)&F, 0, sizeof F);
F.p2522 = a_p2522;
F.v5414 = ((*(yR104 *)rt_nil_check(F.p2522))).f_lits;
F.v5418 = INT64_C(0);
while ((!(F.v5414 == ((void *)0)))) {
if ((!(yr2193_Find(((*(yR99 *)rt_nil_check(F.v5414))).f_name) == ((void *)0)))) {
F.v5416 = yr2193_Find(((*(yR99 *)rt_nil_check(F.v5414))).f_name);
if ((((!(((*(yR119 *)rt_nil_check(F.v5416))).f_kind == v857))) && ((((*(yR119 *)rt_nil_check(F.v5416))).f_depth == v1257)))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.v5414))).f_line, ((*(yR99 *)rt_nil_check(F.v5414))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5416 = yr2163_NewSym(v857, ((*(yR99 *)rt_nil_check(F.v5414))).f_name);
((*(yR119 *)rt_nil_check(F.v5416))).f_rep = F.p2522;
((*(yR119 *)rt_nil_check(F.v5416))).f_mval = F.v5418;
((*(yR119 *)rt_nil_check(F.v5416))).f_hasmv = 1;
yr2258_Define(F.v5416, ((*(yR99 *)rt_nil_check(F.v5414))).f_line);
F.v5418 = rt_range(rt_add(F.v5418, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5414 = ((*(yR99 *)rt_nil_check(F.v5414))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2527_SetRange(void * a_p2528, rt_int a_p2529, rt_int a_p2530) {
struct yf2531 F;
memset((void *)&F, 0, sizeof F);
F.p2528 = a_p2528;
F.p2529 = a_p2529;
F.p2530 = a_p2530;
yr1010_SB();
yr1034_SI(F.p2529);
((*(yR104 *)rt_nil_check(F.p2528))).f_lo = yr1040_SE();
yr1010_SB();
yr1034_SI(F.p2530);
((*(yR104 *)rt_nil_check(F.p2528))).f_hi = yr1040_SE();
((*(yR104 *)rt_nil_check(F.p2528))).f_mlo = F.p2529;
((*(yR104 *)rt_nil_check(F.p2528))).f_mhi = F.p2530;
((*(yR104 *)rt_nil_check(F.p2528))).f_hasm = 1;
((*(yR104 *)rt_nil_check(F.p2528))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2535_NewTid(rt_int a_p2536) {
struct yf2537 F;
memset((void *)&F, 0, sizeof F);
F.p2536 = a_p2536;
F.v5433 = yr1179_NewSerial();
yr1010_SB();
if ((!(F.p2536 == INT64_C(0)))) {
yr1028_ST(F.p2536);
} else {
yr1021_SA(y_str("anonymous", 9));
}
yr1021_SA(y_str("#", 1));
yr1034_SI(F.v5433);
{ rt_int rv5437 = yr1040_SE();
return rv5437; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2541_MakeRep(void * a_p2542, rt_int a_p2543, rt_int a_p2544) {
struct yf2545 F;
memset((void *)&F, 0, sizeof F);
F.p2542 = a_p2542;
F.p2543 = a_p2543;
F.p2544 = a_p2544;
F.v5443 = yr2556_MakeRep1(F.p2542, F.p2543, F.p2544);
if ((!(((*(yR99 *)rt_nil_check(F.p2542))).f_text == INT64_C(0)))) {
F.v5445 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p2542))).f_text, ((*(yR99 *)rt_nil_check(F.p2542))).f_line));
if (((!yr2549_Conforms(((*(yR119 *)rt_nil_check(F.v5445))).f_rep, F.v5443)) || ((((((*(yR99 *)rt_nil_check(F.p2542))).f_kind == v656)) && ((!(((*(yR104 *)rt_nil_check(F.v5443))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5445))).f_rep))).f_tid))))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2542))).f_line, ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5445))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5448 = F.v5443;
return rv5448; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2549_Conforms(void * a_p2550, void * a_p2551) {
struct yf2552 F;
memset((void *)&F, 0, sizeof F);
F.p2550 = a_p2550;
F.p2551 = a_p2551;
if ((!(((*(yR104 *)rt_nil_check(F.p2550))).f_kind == ((*(yR104 *)rt_nil_check(F.p2551))).f_kind))) {
{ rt_int rv5465 = 0;
return rv5465; }
}
if ((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v809)) {
F.v5453 = ((*(yR104 *)rt_nil_check(F.p2550))).f_fields;
F.v5455 = ((*(yR104 *)rt_nil_check(F.p2551))).f_fields;
while ((((!(F.v5453 == ((void *)0)))) && ((!(F.v5455 == ((void *)0)))))) {
if (((((!(((*(yR109 *)rt_nil_check(F.v5453))).f_name == ((*(yR109 *)rt_nil_check(F.v5455))).f_name))) || ((!(((*(yR109 *)rt_nil_check(F.v5453))).f_isconst == ((*(yR109 *)rt_nil_check(F.v5455))).f_isconst)))) || ((!(((*(yR109 *)rt_nil_check(F.v5453))).f_variant == ((*(yR109 *)rt_nil_check(F.v5455))).f_variant))))) {
{ rt_int rv5467 = 0;
return rv5467; }
}
if ((!yr2377_SameType(((*(yR109 *)rt_nil_check(F.v5453))).f_rep, ((*(yR109 *)rt_nil_check(F.v5455))).f_rep))) {
{ rt_int rv5469 = 0;
return rv5469; }
}
F.v5453 = ((*(yR109 *)rt_nil_check(F.v5453))).f_next;
F.v5455 = ((*(yR109 *)rt_nil_check(F.v5455))).f_next;
}
{ rt_int rv5470 = (((F.v5453 == ((void *)0))) && ((F.v5455 == ((void *)0))));
return rv5470; }
}
if ((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v806)) {
if ((!(((*(yR104 *)rt_nil_check(F.p2550))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2551))).f_nidx))) {
{ rt_int rv5472 = 0;
return rv5472; }
}
F.v5457 = ((*(yR104 *)rt_nil_check(F.p2550))).f_idx;
F.v5459 = ((*(yR104 *)rt_nil_check(F.p2551))).f_idx;
while ((!(F.v5457 == ((void *)0)))) {
if ((!yr2419_Identical(F.v5457, F.v5459))) {
{ rt_int rv5474 = 0;
return rv5474; }
}
F.v5457 = ((*(yR104 *)rt_nil_check(F.v5457))).f_link;
F.v5459 = ((*(yR104 *)rt_nil_check(F.v5459))).f_link;
}
{ rt_int rv5475 = yr2377_SameType(((*(yR104 *)rt_nil_check(F.p2550))).f_elem, ((*(yR104 *)rt_nil_check(F.p2551))).f_elem);
return rv5475; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v800)) || ((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v803)))) {
if ((!(((*(yR104 *)rt_nil_check(F.p2550))).f_nlits == ((*(yR104 *)rt_nil_check(F.p2551))).f_nlits))) {
{ rt_int rv5477 = 0;
return rv5477; }
}
F.v5461 = ((*(yR104 *)rt_nil_check(F.p2550))).f_lits;
F.v5463 = ((*(yR104 *)rt_nil_check(F.p2551))).f_lits;
while ((((!(F.v5461 == ((void *)0)))) && ((!(F.v5463 == ((void *)0)))))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v5461))).f_name == ((*(yR99 *)rt_nil_check(F.v5463))).f_name))) || (!yr1072_TEq(((*(yR99 *)rt_nil_check(F.v5461))).f_text, ((*(yR99 *)rt_nil_check(F.v5463))).f_text)))) {
{ rt_int rv5479 = 0;
return rv5479; }
}
F.v5461 = ((*(yR99 *)rt_nil_check(F.v5461))).f_next;
F.v5463 = ((*(yR99 *)rt_nil_check(F.v5463))).f_next;
}
{ rt_int rv5481 = 1;
return rv5481; }
}
if (((((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v818)) || ((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v815))) || ((((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v812)))) {
if ((((((*(yR104 *)rt_nil_check(F.p2550))).f_elem == ((void *)0))) || ((((*(yR104 *)rt_nil_check(F.p2551))).f_elem == ((void *)0))))) {
{ rt_int rv5483 = 1;
return rv5483; }
}
{ rt_int rv5484 = yr2377_SameType(((*(yR104 *)rt_nil_check(F.p2550))).f_elem, ((*(yR104 *)rt_nil_check(F.p2551))).f_elem);
return rv5484; }
}
{ rt_int rv5486 = 1;
return rv5486; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2556_MakeRep1(void * a_p2557, rt_int a_p2558, rt_int a_p2559) {
struct yf2560 F;
memset((void *)&F, 0, sizeof F);
F.p2557 = a_p2557;
F.p2558 = a_p2558;
F.p2559 = a_p2559;
F.v5502 = ((*(yR99 *)rt_nil_check(F.p2557))).f_kind;
F.v5506 = INT64_C(0);
F.v5508 = F.p2558;
if ((!(((*(yR99 *)rt_nil_check(F.p2557))).f_text == INT64_C(0)))) {
F.v5500 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p2557))).f_text, ((*(yR99 *)rt_nil_check(F.p2557))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5500))).f_kind == v854))) && ((!(((*(yR119 *)rt_nil_check(F.v5500))).f_kind == v851))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2557))).f_line, ((*(yR99 *)rt_nil_check(F.p2557))).f_text, y_str(" is not a type", 14));
}
F.v5506 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5500))).f_rep))).f_tid;
F.v5508 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5500))).f_rep))).f_tname;
}
if ((F.v5502 == v656)) {
F.v5500 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p2557))).f_name, ((*(yR99 *)rt_nil_check(F.p2557))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5500))).f_kind == v854))) && ((!(((*(yR119 *)rt_nil_check(F.v5500))).f_kind == v851))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2557))).f_line, ((*(yR99 *)rt_nil_check(F.p2557))).f_name, y_str(" is not a representation", 24));
}
F.v5492 = ((*(yR119 *)rt_nil_check(F.v5500))).f_rep;
if ((!(((*(yR99 *)rt_nil_check(F.p2557))).f_a == ((void *)0)))) {
F.v5492 = yr2304_CopyRep(F.v5492);
yr2514_Qualify(F.v5492, ((*(yR99 *)rt_nil_check(F.p2557))).f_a);
}
{ void * rv5513 = F.v5492;
return rv5513; }
}
if ((F.v5506 == INT64_C(0))) {
F.v5506 = yr2535_NewTid(F.p2558);
if ((F.v5508 == INT64_C(0))) {
F.v5508 = F.v5506;
}
}
if ((F.v5502 == v659)) {
F.v5492 = yr2297_NewRep(v800, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
((*(yR104 *)rt_nil_check(F.v5492))).f_ordered = (((*(yR99 *)rt_nil_check(F.p2557))).f_flag == INT64_C(1));
((*(yR104 *)rt_nil_check(F.v5492))).f_lits = ((*(yR99 *)rt_nil_check(F.p2557))).f_a;
((*(yR104 *)rt_nil_check(F.v5492))).f_nlits = yr1864_Count(((*(yR99 *)rt_nil_check(F.p2557))).f_a);
yr2527_SetRange(F.v5492, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5492))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2521_DefineLits(F.v5492);
if ((!(((*(yR99 *)rt_nil_check(F.p2557))).f_b == ((void *)0)))) {
yr2514_Qualify(F.v5492, ((*(yR99 *)rt_nil_check(F.p2557))).f_b);
}
{ void * rv5520 = F.v5492;
return rv5520; }
}
if ((F.v5502 == v662)) {
F.v5492 = yr2297_NewRep(v803, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
((*(yR104 *)rt_nil_check(F.v5492))).f_ordered = 1;
((*(yR104 *)rt_nil_check(F.v5492))).f_lits = ((*(yR99 *)rt_nil_check(F.p2557))).f_a;
((*(yR104 *)rt_nil_check(F.v5492))).f_nlits = yr1864_Count(((*(yR99 *)rt_nil_check(F.p2557))).f_a);
if ((((*(yR104 *)rt_nil_check(F.v5492))).f_nlits > INT64_C(256))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2557))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2527_SetRange(F.v5492, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5492))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR99 *)rt_nil_check(F.p2557))).f_b == ((void *)0)))) {
yr2514_Qualify(F.v5492, ((*(yR99 *)rt_nil_check(F.p2557))).f_b);
}
{ void * rv5527 = F.v5492;
return rv5527; }
}
if ((F.v5502 == v665)) {
F.v5492 = yr2297_NewRep(v806, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
F.v5504 = ((*(yR99 *)rt_nil_check(F.p2557))).f_a;
F.v5498 = ((void *)0);
while ((!(F.v5504 == ((void *)0)))) {
F.v5496 = yr2304_CopyRep(yr2541_MakeRep(F.v5504, INT64_C(0), 0));
if ((!yr2310_IsDiscrete(F.v5496))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.v5504))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2400_CheckRepresented(F.v5496, ((*(yR99 *)rt_nil_check(F.v5504))).f_line);
((*(yR104 *)rt_nil_check(F.v5496))).f_link = ((void *)0);
if ((F.v5498 == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v5492))).f_idx = F.v5496;
} else {
((*(yR104 *)rt_nil_check(F.v5498))).f_link = F.v5496;
}
F.v5498 = F.v5496;
((*(yR104 *)rt_nil_check(F.v5492))).f_nidx = rt_range(rt_add(((*(yR104 *)rt_nil_check(F.v5492))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5504 = ((*(yR99 *)rt_nil_check(F.v5504))).f_next;
}
if ((((*(yR104 *)rt_nil_check(F.v5492))).f_nidx > INT64_C(4))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2557))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR104 *)rt_nil_check(F.v5492))).f_elem = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p2557))).f_b, INT64_C(0), F.p2559);
if ((!F.p2559)) {
yr2400_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5492))).f_elem, ((*(yR99 *)rt_nil_check(F.p2557))).f_line);
yr2576_BuildArrayDesc(F.v5492);
} else {
((*(yR104 *)rt_nil_check(F.v5492))).f_abstract = ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.v5492))).f_elem))).f_abstract;
if ((!((*(yR104 *)rt_nil_check(F.v5492))).f_abstract)) {
yr2576_BuildArrayDesc(F.v5492);
}
}
((*(yR104 *)rt_nil_check(F.v5492))).f_deep = 1;
{ void * rv5537 = F.v5492;
return rv5537; }
}
if ((F.v5502 == v668)) {
F.v5492 = yr2297_NewRep(v809, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
yr2606_MakeRecord(F.v5492, F.p2557, F.p2559);
{ void * rv5538 = F.v5492;
return rv5538; }
}
if (((((F.v5502 == v674)) || ((F.v5502 == v671))) || ((F.v5502 == v677)))) {
if ((F.v5502 == v674)) {
F.v5492 = yr2297_NewRep(v812, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
if (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2557))).f_a))).f_kind == v656)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2557))).f_a))).f_a == ((void *)0)))) && ((yr2193_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2557))).f_a))).f_name) == ((void *)0))))) {
((*(yR104 *)rt_nil_check(F.v5492))).f_forward = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2557))).f_a))).f_name;
((*(yR104 *)rt_nil_check(F.v5492))).f_fwdscope = v1257;
F.v5504 = yr1849_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p2557))).f_line);
((*(yR99 *)rt_nil_check(F.v5504))).f_rep = F.v5492;
((*(yR99 *)rt_nil_check(F.v5504))).f_next = v1348;
v1348 = F.v5504;
{ void * rv5539 = F.v5492;
return rv5539; }
}
((*(yR104 *)rt_nil_check(F.v5492))).f_elem = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p2557))).f_a, INT64_C(0), 0);
{ void * rv5542 = F.v5492;
return rv5542; }
}
if ((F.v5502 == v671)) {
F.v5492 = yr2297_NewRep(v815, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
((*(yR104 *)rt_nil_check(F.v5492))).f_elem = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p2557))).f_a, INT64_C(0), F.p2559);
{ void * rv5544 = F.v5492;
return rv5544; }
}
F.v5492 = yr2297_NewRep(v818, F.v5506);
((*(yR104 *)rt_nil_check(F.v5492))).f_tname = F.v5508;
((*(yR104 *)rt_nil_check(F.v5492))).f_elem = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p2557))).f_a, INT64_C(0), 0);
if ((!yr2310_IsDiscrete(((*(yR104 *)rt_nil_check(F.v5492))).f_elem))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2557))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2400_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5492))).f_elem, ((*(yR99 *)rt_nil_check(F.p2557))).f_line);
{ void * rv5548 = F.v5492;
return rv5548; }
}
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2557))).f_line, y_str("this representation is not translated", 37));
{ void * rv5550 = ((void *)0);
return rv5550; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2564_ResolvePending(rt_int a_p2565, void * a_p2566) {
struct yf2567 F;
memset((void *)&F, 0, sizeof F);
F.p2565 = a_p2565;
F.p2566 = a_p2566;
F.v5555 = v1348;
F.v5557 = ((void *)0);
while ((!(F.v5555 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5555))).f_rep))).f_forward == F.p2565)) {
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5555))).f_rep))).f_elem = F.p2566;
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5555))).f_rep))).f_forward = INT64_C(0);
if ((F.v5557 == ((void *)0))) {
v1348 = ((*(yR99 *)rt_nil_check(F.v5555))).f_next;
} else {
((*(yR99 *)rt_nil_check(F.v5557))).f_next = ((*(yR99 *)rt_nil_check(F.v5555))).f_next;
}
} else {
F.v5557 = F.v5555;
}
F.v5555 = ((*(yR99 *)rt_nil_check(F.v5555))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2571_CheckPending(void) {
struct yf2572 F;
memset((void *)&F, 0, sizeof F);
F.v5561 = v1348;
while ((!(F.v5561 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5561))).f_rep))).f_fwdscope >= v1257)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.v5561))).f_line, ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5561))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5561 = ((*(yR99 *)rt_nil_check(F.v5561))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2576_BuildArrayDesc(void * a_p2577) {
struct yf2578 F;
memset((void *)&F, 0, sizeof F);
F.p2577 = a_p2577;
yr2371_NewDesc(F.p2577);
yr1010_SB();
yr1021_SA(y_str("{ rt_int lo[", 12));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2577))).f_nidx);
yr1021_SA(y_str("] = {", 5));
F.v5566 = ((*(yR104 *)rt_nil_check(F.p2577))).f_idx;
F.v5570 = 1;
while ((!(F.v5566 == ((void *)0)))) {
if ((!F.v5570)) {
yr1021_SA(y_str(", ", 2));
}
F.v5570 = 0;
yr1028_ST(yr2440_LoText(F.v5566));
F.v5566 = ((*(yR104 *)rt_nil_check(F.v5566))).f_link;
}
yr1021_SA(y_str("}, hi[", 6));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2577))).f_nidx);
yr1021_SA(y_str("] = {", 5));
F.v5566 = ((*(yR104 *)rt_nil_check(F.p2577))).f_idx;
F.v5570 = 1;
while ((!(F.v5566 == ((void *)0)))) {
if ((!F.v5570)) {
yr1021_SA(y_str(", ", 2));
}
F.v5570 = 0;
yr1028_ST(yr2446_HiText(F.v5566));
F.v5566 = ((*(yR104 *)rt_nil_check(F.v5566))).f_link;
}
yr1021_SA(y_str("}; y_desc_array(", 16));
yr1028_ST(yr2365_DescOf(F.p2577));
yr1021_SA(y_str(", ", 2));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2577))).f_nidx);
yr1021_SA(y_str(", lo, hi, ", 10));
yr1028_ST(yr2365_DescOf(((*(yR104 *)rt_nil_check(F.p2577))).f_elem));
yr1021_SA(y_str("); }", 4));
F.v5568 = yr1040_SE();
yr1116_Emit(F.v5568);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2582_AddField(void * a_p2583, void * * a_p2584, rt_int a_p2585, void * a_p2586, rt_int a_p2587, rt_int a_p2588, void * a_p2589, rt_int a_p2590) {
struct yf2591 F;
memset((void *)&F, 0, sizeof F);
F.p2583 = a_p2583;
F.p2584 = a_p2584;
F.p2585 = a_p2585;
F.p2586 = a_p2586;
F.p2587 = a_p2587;
F.p2588 = a_p2588;
F.p2589 = a_p2589;
F.p2590 = a_p2590;
F.v5595 = ((*(yR104 *)rt_nil_check(F.p2583))).f_fields;
while ((!(F.v5595 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5595))).f_name == F.p2585)) {
yr1170_FailN(F.p2590, F.p2585, y_str(" is a component twice", 21));
}
F.v5595 = ((*(yR109 *)rt_nil_check(F.v5595))).f_next;
}
({ F.v5595 = rt_alloc(sizeof(yR109)); });
(*(yR109 *)rt_nil_check(F.v5595)) = ((yR109){ .f_name = F.p2585, .f_rep = F.p2586, .f_isconst = F.p2587, .f_variant = F.p2588, .f_labels = F.p2589, .f_next = ((void *)0) });
if (((*F.p2584) == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.p2583))).f_fields = F.v5595;
} else {
((*(yR109 *)rt_nil_check((*F.p2584)))).f_next = F.v5595;
}
(*F.p2584) = F.v5595;
if (yr2334_Deep(F.p2586)) {
((*(yR104 *)rt_nil_check(F.p2583))).f_deep = 1;
}
if (((*(yR104 *)rt_nil_check(F.p2586))).f_abstract) {
((*(yR104 *)rt_nil_check(F.p2583))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2595_AddFields(void * a_p2596, void * * a_p2597, void * a_p2598, rt_int a_p2599, void * a_p2600, rt_int a_p2601) {
struct yf2602 F;
memset((void *)&F, 0, sizeof F);
F.p2596 = a_p2596;
F.p2597 = a_p2597;
F.p2598 = a_p2598;
F.p2599 = a_p2599;
F.p2600 = a_p2600;
F.p2601 = a_p2601;
F.v5607 = F.p2598;
F.v5609 = F.p2598;
while ((!(F.v5607 == ((void *)0)))) {
F.v5611 = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.v5607))).f_b, INT64_C(0), F.p2601);
if ((!F.p2601)) {
yr2400_CheckRepresented(F.v5611, ((*(yR99 *)rt_nil_check(F.v5607))).f_line);
}
F.v5609 = ((*(yR99 *)rt_nil_check(F.v5607))).f_a;
while ((!(F.v5609 == ((void *)0)))) {
yr2582_AddField(F.p2596, &(*F.p2597), ((*(yR99 *)rt_nil_check(F.v5609))).f_name, F.v5611, (((*(yR99 *)rt_nil_check(F.v5607))).f_ival == v254), F.p2599, F.p2600, ((*(yR99 *)rt_nil_check(F.v5609))).f_line);
F.v5609 = ((*(yR99 *)rt_nil_check(F.v5609))).f_next;
}
F.v5607 = ((*(yR99 *)rt_nil_check(F.v5607))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2606_MakeRecord(void * a_p2607, void * a_p2608, rt_int a_p2609) {
struct yf2610 F;
memset((void *)&F, 0, sizeof F);
F.p2607 = a_p2607;
F.p2608 = a_p2608;
F.p2609 = a_p2609;
F.v5618 = ((void *)0);
F.v5626 = INT64_C(0);
F.v5633 = INT64_C(0);
yr2595_AddFields(F.p2607, &F.v5618, ((*(yR99 *)rt_nil_check(F.p2608))).f_a, INT64_C(0), ((void *)0), F.p2609);
if ((!(((*(yR99 *)rt_nil_check(F.p2608))).f_b == ((void *)0)))) {
F.v5620 = ((*(yR99 *)rt_nil_check(F.p2608))).f_b;
F.v5624 = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.v5620))).f_b, INT64_C(0), 0);
if ((!yr2310_IsDiscrete(F.v5624))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.v5620))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2582_AddField(F.p2607, &F.v5618, ((*(yR99 *)rt_nil_check(F.v5620))).f_name, F.v5624, 1, INT64_C(0), ((void *)0), ((*(yR99 *)rt_nil_check(F.v5620))).f_line);
((*(yR104 *)rt_nil_check(F.p2607))).f_selector = F.v5618;
F.v5622 = ((*(yR99 *)rt_nil_check(F.v5620))).f_a;
while ((!(F.v5622 == ((void *)0)))) {
F.v5626 = rt_range(rt_add(F.v5626, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2595_AddFields(F.p2607, &F.v5618, ((*(yR99 *)rt_nil_check(F.v5622))).f_b, F.v5626, ((*(yR99 *)rt_nil_check(F.v5622))).f_a, F.p2609);
F.v5622 = ((*(yR99 *)rt_nil_check(F.v5622))).f_next;
}
}
if ((F.p2609 && ((*(yR104 *)rt_nil_check(F.p2607))).f_abstract)) {
return;
}
((*(yR104 *)rt_nil_check(F.p2607))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2607))).f_cname = yr1184_Fresh(y_str("yR", 2));
yr1010_SB();
yr1021_SA(y_str("typedef struct ", 15));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2607))).f_cname);
yr1021_SA(y_str(" ", 1));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2607))).f_cname);
yr1021_SA(y_str(";", 1));
F.v5631 = yr1040_SE();
yr1094_Put(&v962, F.v5631);
yr1010_SB();
yr1021_SA(y_str("struct ", 7));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2607))).f_cname);
yr1021_SA(y_str(" {", 2));
F.v5629 = ((*(yR104 *)rt_nil_check(F.p2607))).f_fields;
while ((!(F.v5629 == ((void *)0)))) {
yr1021_SA(y_str(" ", 1));
yr1028_ST(yr2359_CType(((*(yR109 *)rt_nil_check(F.v5629))).f_rep));
yr1021_SA(y_str(" f_", 3));
yr1028_ST(((*(yR109 *)rt_nil_check(F.v5629))).f_name);
yr1021_SA(y_str(";", 1));
F.v5633 = rt_range(rt_add(F.v5633, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5629 = ((*(yR109 *)rt_nil_check(F.v5629))).f_next;
}
if ((F.v5633 == INT64_C(0))) {
yr1021_SA(y_str(" int empty_;", 12));
}
yr1021_SA(y_str(" };", 3));
F.v5631 = yr1040_SE();
yr1094_Put(&v964, F.v5631);
yr2371_NewDesc(F.p2607);
yr1010_SB();
yr1021_SA(y_str("{ static const size_t o[] = {", 29));
F.v5629 = ((*(yR104 *)rt_nil_check(F.p2607))).f_fields;
while ((!(F.v5629 == ((void *)0)))) {
yr1021_SA(y_str("offsetof(", 9));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2607))).f_cname);
yr1021_SA(y_str(", f_", 4));
yr1028_ST(((*(yR109 *)rt_nil_check(F.v5629))).f_name);
yr1021_SA(y_str("), ", 3));
F.v5629 = ((*(yR109 *)rt_nil_check(F.v5629))).f_next;
}
yr1021_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1034_SI(rt_range(rt_add(F.v5633, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1021_SA(y_str(" * sizeof *f);", 14));
F.v5626 = INT64_C(0);
F.v5629 = ((*(yR104 *)rt_nil_check(F.p2607))).f_fields;
while ((!(F.v5629 == ((void *)0)))) {
yr1021_SA(y_str(" f[", 3));
yr1034_SI(F.v5626);
yr1021_SA(y_str("] = ", 4));
yr1028_ST(yr2365_DescOf(((*(yR109 *)rt_nil_check(F.v5629))).f_rep));
yr1021_SA(y_str(";", 1));
F.v5626 = rt_range(rt_add(F.v5626, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5629 = ((*(yR109 *)rt_nil_check(F.v5629))).f_next;
}
yr1021_SA(y_str(" y_desc_record(", 15));
yr1028_ST(yr2365_DescOf(F.p2607));
yr1021_SA(y_str(", sizeof(", 9));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2607))).f_cname);
yr1021_SA(y_str("), ", 3));
yr1034_SI(F.v5633);
yr1021_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5631 = yr1040_SE();
yr1116_Emit(F.v5631);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2614_FindField(void * a_p2615, rt_int a_p2616) {
struct yf2617 F;
memset((void *)&F, 0, sizeof F);
F.p2615 = a_p2615;
F.p2616 = a_p2616;
F.v5680 = ((*(yR104 *)rt_nil_check(F.p2615))).f_fields;
while ((!(F.v5680 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5680))).f_name == F.p2616)) {
{ void * rv5681 = F.v5680;
return rv5681; }
}
F.v5680 = ((*(yR109 *)rt_nil_check(F.v5680))).f_next;
}
{ void * rv5682 = ((void *)0);
return rv5682; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2621_CharOrd(void * a_p2622, rt_int a_p2623) {
struct yf2624 F;
memset((void *)&F, 0, sizeof F);
F.p2622 = a_p2622;
F.p2623 = a_p2623;
if ((((*(yR104 *)rt_nil_check(F.p2622))).f_tid == ((*(yR104 *)rt_nil_check(v1330))).f_tid)) {
if ((((rt_int *)(v904).p)[y_ix1(v904, F.p2623)] == INT64_C(1))) {
{ rt_int rv5698 = ((rt_int *)(v949).p)[y_ix1(v949, yr1087_TChar(F.p2623, INT64_C(1)))];
return rv5698; }
}
F.v5689 = INT64_C(0);
F.v5693 = INT64_C(1);
F.lo5704 = INT64_C(1);
F.hi5705 = ((rt_int *)(v904).p)[y_ix1(v904, v1458)];
{ rt_int hi5709 = F.hi5705;
for (rt_int i5708 = F.lo5704; i5708 <= hi5709; i5708++) { F.c_5707 = i5708;
if ((yr1087_TChar(v1458, rt_range(F.c_5707, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v5695 = yr1052_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, v1458)], (rt_sub(F.v5693, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_5707, F.v5693), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v5695 == F.p2623)) {
if ((F.v5689 < INT64_C(32))) {
{ rt_int rv5716 = F.v5689;
return rv5716; }
}
if ((F.v5689 == INT64_C(32))) {
{ rt_int rv5719 = INT64_C(32);
return rv5719; }
}
if ((F.v5689 == INT64_C(33))) {
{ rt_int rv5722 = INT64_C(127);
return rv5722; }
}
if ((F.v5689 == INT64_C(34))) {
{ rt_int rv5725 = INT64_C(39);
return rv5725; }
}
{ rt_int rv5727 = INT64_C(34);
return rv5727; }
}
F.v5689 = rt_range(rt_add(F.v5689, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5693 = rt_range(rt_add(F.c_5707, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i5708 == hi5709) break;
}}
{ rt_int rv5733 = INT64_C(-1);
return rv5733; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2622))).f_kind == v803))) {
{ rt_int rv5735 = INT64_C(-1);
return rv5735; }
}
F.v5687 = ((*(yR104 *)rt_nil_check(F.p2622))).f_lits;
F.v5691 = INT64_C(0);
while ((!(F.v5687 == ((void *)0)))) {
if (yr1072_TEq(((*(yR99 *)rt_nil_check(F.v5687))).f_text, F.p2623)) {
{ rt_int rv5737 = F.v5691;
return rv5737; }
}
F.v5691 = rt_range(rt_add(F.v5691, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5687 = ((*(yR99 *)rt_nil_check(F.v5687))).f_next;
}
{ rt_int rv5741 = INT64_C(-1);
return rv5741; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2628_AlphabetFor(void * a_p2629, void * a_p2630) {
struct yf2631 F;
memset((void *)&F, 0, sizeof F);
F.p2629 = a_p2629;
F.p2630 = a_p2630;
F.v5750 = ((void *)0);
F.v5752 = INT64_C(0);
F.v5755 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.p2629))).f_d == ((void *)0)))) {
F.v5746 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2629))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2629))).f_line));
if ((((((!(((*(yR119 *)rt_nil_check(F.v5746))).f_kind == v851))) && ((!(((*(yR119 *)rt_nil_check(F.v5746))).f_kind == v854))))) || ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5746))).f_rep))).f_kind == v803))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2629))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2629))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv5758 = ((*(yR119 *)rt_nil_check(F.v5746))).f_rep;
return rv5758; }
}
F.v5755 = INT64_C(1);
if ((((((*(yR99 *)rt_nil_check(F.p2629))).f_kind == v755)) || ((yr2621_CharOrd(v1330, ((*(yR99 *)rt_nil_check(F.p2629))).f_text) >= INT64_C(0))))) {
F.v5752 = INT64_C(1);
F.v5750 = v1330;
}
F.v5748 = v1461;
while ((!(F.v5748 == ((void *)0)))) {
F.v5746 = yr2193_Find(((*(yR99 *)rt_nil_check(F.v5748))).f_name);
if ((!(F.v5746 == ((void *)0)))) {
F.v5746 = yr2291_Real(F.v5746);
if ((((((((*(yR119 *)rt_nil_check(F.v5746))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v5746))).f_kind == v854)))) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5746))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5748))).f_rep))).f_tid)))) {
F.v5755 = rt_range(rt_add(F.v5755, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR99 *)rt_nil_check(F.p2629))).f_kind == v752)) && ((yr2621_CharOrd(((*(yR99 *)rt_nil_check(F.v5748))).f_rep, ((*(yR99 *)rt_nil_check(F.p2629))).f_text) >= INT64_C(0))))) {
F.v5752 = rt_range(rt_add(F.v5752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5750 = ((*(yR99 *)rt_nil_check(F.v5748))).f_rep;
}
}
}
F.v5748 = ((*(yR99 *)rt_nil_check(F.v5748))).f_next;
}
if ((((((*(yR99 *)rt_nil_check(F.p2629))).f_kind == v755)) && ((F.v5755 > INT64_C(1))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2629))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v5752 > INT64_C(1))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2629))).f_line, yr3148_Join(yr1045_T(y_str("'", 1)), ((*(yR99 *)rt_nil_check(F.p2629))).f_text, yr1045_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v5750 == ((void *)0))) {
{ void * rv5773 = v1330;
return rv5773; }
}
{ void * rv5774 = F.v5750;
return rv5774; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2635_CharValue(void * a_p2636, rt_int a_p2637, rt_int a_p2638) {
struct yf2639 F;
memset((void *)&F, 0, sizeof F);
F.p2636 = a_p2636;
F.p2637 = a_p2637;
F.p2638 = a_p2638;
F.v5780 = yr2621_CharOrd(F.p2636, F.p2637);
if ((F.v5780 < INT64_C(0))) {
yr1010_SB();
yr1021_SA(y_str("'", 1));
yr1028_ST(F.p2637);
yr1021_SA(y_str("' is not a character of ", 24));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p2636))).f_tname);
F.v5782 = yr1040_SE();
yr1141_Fail(F.p2638, F.v5782);
}
{ rt_int rv5786 = F.v5780;
return rv5786; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2643_StringCodes(void * a_p2644, rt_int a_p2645, rt_int * a_p2646, rt_int a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.p2644 = a_p2644;
F.p2645 = a_p2645;
F.p2646_o = a_p2646;
F.p2647 = a_p2647;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_5806, 1, lo, hi, &y_d_int); }
y_init(&F.yd_5806, &F.v5808);
F.p2646 = INT64_C(0);
F.v5793 = INT64_C(1);
while ((F.v5793 <= ((rt_int *)(v904).p)[y_ix1(v904, F.p2645)])) {
F.v5810 = yr1087_TChar(F.p2645, F.v5793);
if ((F.v5810 == 39)) {
F.v5795 = rt_range(rt_add(F.v5793, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1087_TChar(F.p2645, F.v5795) == 39))) {
F.v5795 = rt_range(rt_add(F.v5795, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v5812 = yr1052_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p2645)], F.v5793), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v5795, F.v5793)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5797 = yr2635_CharValue(F.p2644, F.v5812, F.p2647);
F.v5793 = rt_range(rt_add(F.v5795, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5812 = yr1052_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p2645)], (rt_sub(F.v5793, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v5797 = yr2635_CharValue(F.p2644, F.v5812, F.p2647);
F.v5793 = rt_range(rt_add(F.v5793, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2646 >= INT64_C(4096))) {
yr1162_FailS(F.p2647, y_str("string literal too long", 23));
}
F.p2646 = rt_range(rt_add(F.p2646, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v5808).p)[y_ix1(F.v5808, F.p2646)] = F.v5797;
}
yr1010_SB();
yr1015_SC(34);
F.lo5841 = INT64_C(1);
F.hi5842 = F.p2646;
{ rt_int hi5846 = F.hi5842;
for (rt_int i5845 = F.lo5841; i5845 <= hi5846; i5845++) { F.c_5844 = i5845;
F.v5797 = ((rt_int *)(F.v5808).p)[y_ix1(F.v5808, F.c_5844)];
if ((((F.v5797 == INT64_C(34))) || ((F.v5797 == INT64_C(92))))) {
yr1015_SC(92);
yr1015_SC(((unsigned char *)(v960).p)[y_ix1(v960, F.v5797)]);
} else if (((((F.v5797 >= INT64_C(32))) && ((F.v5797 < INT64_C(127)))) && (((((!(F.v5797 == INT64_C(63)))) || ((F.c_5844 == INT64_C(1)))) || ((!(((rt_int *)(F.v5808).p)[y_ix1(F.v5808, rt_sub(F.c_5844, INT64_C(1)))] == INT64_C(63)))))))) {
yr1015_SC(((unsigned char *)(v960).p)[y_ix1(v960, F.v5797)]);
} else {
yr1015_SC(92);
yr1015_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_div(F.v5797, INT64_C(64)))))]);
yr1015_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_mod((rt_div(F.v5797, INT64_C(8))), INT64_C(8)))))]);
yr1015_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_mod(F.v5797, INT64_C(8)))))]);
}
if (i5845 == hi5846) break;
}}
yr1015_SC(34);
{ rt_int rv5873 = yr1040_SE();
(*F.p2646_o) = F.p2646;
return rv5873; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2652_Manifest(void * a_p2653, rt_int * a_p2654, rt_int * a_p2655) {
struct yf2656 F;
memset((void *)&F, 0, sizeof F);
F.p2653 = a_p2653;
F.p2654_o = a_p2654;
F.p2655_o = a_p2655;
F.p2654 = 0;
F.p2655 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v743)) {
F.p2654 = 1;
F.p2655 = ((*(yR99 *)rt_nil_check(F.p2653))).f_ival;
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v752)) {
F.v5891 = yr2628_AlphabetFor(F.p2653, ((void *)0));
F.p2655 = yr2621_CharOrd(F.v5891, ((*(yR99 *)rt_nil_check(F.p2653))).f_text);
F.p2654 = (F.p2655 >= INT64_C(0));
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v761)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2653))).f_d == ((void *)0)))) {
F.v5879 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2653))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2653))).f_line));
F.v5879 = yr2251_FindLit(((*(yR99 *)rt_nil_check(F.p2653))).f_name, ((*(yR119 *)rt_nil_check(F.v5879))).f_rep);
} else {
F.v5879 = yr2193_Find(((*(yR99 *)rt_nil_check(F.p2653))).f_name);
}
if ((F.v5879 == ((void *)0))) {
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
F.v5879 = yr2291_Real(F.v5879);
if ((((((((*(yR119 *)rt_nil_check(F.v5879))).f_kind == v857)) || ((((*(yR119 *)rt_nil_check(F.v5879))).f_kind == v848)))) && ((*(yR119 *)rt_nil_check(F.v5879))).f_hasmv)) {
F.p2654 = 1;
F.p2655 = ((*(yR119 *)rt_nil_check(F.v5879))).f_mval;
}
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v785)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2653))).f_a, &F.p2654, &F.p2655);
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v779)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2653))).f_a, &F.p2654, &F.p2655);
F.p2655 = rt_range(rt_neg(F.p2655), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v782)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2653))).f_a, &F.v5885, &F.v5881);
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2653))).f_b, &F.v5887, &F.v5883);
if ((!((F.v5885 && F.v5887)))) {
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
F.v5889 = ((*(yR99 *)rt_nil_check(F.p2653))).f_name;
F.p2654 = 1;
if ((F.v5889 == v557)) {
F.p2655 = rt_range(rt_add(F.v5881, F.v5883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5889 == v560)) {
F.p2655 = rt_range(rt_sub(F.v5881, F.v5883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5889 == v563)) {
F.p2655 = rt_range(rt_mul(F.v5881, F.v5883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v5889 == v260)) && ((!(F.v5883 == INT64_C(0)))))) {
F.p2655 = rt_range(rt_div(F.v5881, F.v5883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v5889 == v362)) && ((!(F.v5883 == INT64_C(0)))))) {
F.p2655 = rt_range(rt_mod(F.v5881, F.v5883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5889 == v221)) {
F.p2655 = rt_range(rt_mul(F.v5881, F.v5883), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5889 == v383)) {
F.p2655 = rt_range(rt_sub((rt_add(F.v5881, F.v5883)), (rt_mul(F.v5881, F.v5883))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5889 == v473)) {
F.p2655 = rt_range(rt_mod((rt_add(F.v5881, F.v5883)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2654 = 0;
}
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v776)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2653))).f_a, &F.p2654, &F.p2655);
F.p2655 = rt_range(rt_sub(INT64_C(1), F.p2655), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2653))).f_kind == v764)) {
yr2660_ManifestStd(F.p2653, &F.p2654, &F.p2655);
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
}
(*F.p2654_o) = F.p2654;
(*F.p2655_o) = F.p2655;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2660_ManifestStd(void * a_p2661, rt_int * a_p2662, rt_int * a_p2663) {
struct yf2664 F;
memset((void *)&F, 0, sizeof F);
F.p2661 = a_p2661;
F.p2662_o = a_p2662;
F.p2663_o = a_p2663;
F.p2662 = 0;
F.p2663 = INT64_C(0);
F.v5921 = yr2193_Find(((*(yR99 *)rt_nil_check(F.p2661))).f_name);
if ((F.v5921 == ((void *)0))) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
F.v5921 = yr2291_Real(F.v5921);
if ((!(((*(yR119 *)rt_nil_check(F.v5921))).f_kind == v875))) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
F.v5923 = ((*(yR119 *)rt_nil_check(F.v5921))).f_mval;
if ((((((F.v5923 == v1356)) || ((F.v5923 == v1359))) || ((F.v5923 == v1362))) || ((F.v5923 == v1365)))) {
if ((!(yr1864_Count(((*(yR99 *)rt_nil_check(F.p2661))).f_a) == INT64_C(1)))) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2661))).f_a, ((void *)0), &F.v5931, &F.v5933);
if ((!yr2310_IsDiscrete(F.v5933))) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
if ((((F.v5923 == v1362)) || ((F.v5923 == v1365)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v5933))).f_elem == ((void *)0)))) {
F.v5933 = ((*(yR104 *)rt_nil_check(F.v5933))).f_elem;
}
if ((!((*(yR104 *)rt_nil_check(F.v5933))).f_hasm)) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
F.p2662 = 1;
if ((F.v5923 == v1362)) {
F.p2663 = ((*(yR104 *)rt_nil_check(F.v5933))).f_mlo;
} else {
F.p2663 = ((*(yR104 *)rt_nil_check(F.v5933))).f_mhi;
}
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p2661))).f_a, &F.v5927, &F.p2663);
if ((!F.v5927)) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
if ((F.v5923 == v1356)) {
F.p2663 = rt_range(rt_add(F.p2663, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2663 = rt_range(rt_sub(F.p2663, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR104 *)rt_nil_check(F.v5933))).f_elem == ((void *)0)))) {
F.v5933 = ((*(yR104 *)rt_nil_check(F.v5933))).f_elem;
}
if ((((!(((*(yR104 *)rt_nil_check(F.v5933))).f_kind == v788))) && ((((F.p2663 < INT64_C(0))) || ((F.p2663 >= ((*(yR104 *)rt_nil_check(F.v5933))).f_nlits)))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2661))).f_line, ((*(yR99 *)rt_nil_check(F.p2661))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2662 = 1;
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
if ((((F.v5923 == v1350)) || ((F.v5923 == v1353)))) {
if ((!(yr1864_Count(((*(yR99 *)rt_nil_check(F.p2661))).f_a) == INT64_C(2)))) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
yr2652_Manifest(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2661))).f_a))).f_next, &F.v5929, &F.v5925);
if ((!F.v5929)) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2661))).f_a, ((void *)0), &F.v5931, &F.v5933);
if (((((!(((*(yR104 *)rt_nil_check(F.v5933))).f_kind == v806))) || ((F.v5925 < INT64_C(1)))) || ((F.v5925 > ((*(yR104 *)rt_nil_check(F.v5933))).f_nidx)))) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
F.v5935 = ((*(yR104 *)rt_nil_check(F.v5933))).f_idx;
F.lo5952 = INT64_C(2);
F.hi5953 = F.v5925;
{ rt_int hi5957 = F.hi5953;
for (rt_int i5956 = F.lo5952; i5956 <= hi5957; i5956++) { F.c_5955 = i5956;
F.v5935 = ((*(yR104 *)rt_nil_check(F.v5935))).f_link;
if (i5956 == hi5957) break;
}}
if ((!((*(yR104 *)rt_nil_check(F.v5935))).f_hasm)) {
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
F.p2662 = 1;
if ((F.v5923 == v1350)) {
F.p2663 = ((*(yR104 *)rt_nil_check(F.v5935))).f_mlo;
} else {
F.p2663 = ((*(yR104 *)rt_nil_check(F.v5935))).f_mhi;
}
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
}
(*F.p2662_o) = F.p2662;
(*F.p2663_o) = F.p2663;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2668_NeedsConv(void * a_p2669, void * a_p2670) {
struct yf2671 F;
memset((void *)&F, 0, sizeof F);
F.p2669 = a_p2669;
F.p2670 = a_p2670;
if ((F.p2669 == F.p2670)) {
{ rt_int rv5963 = 0;
return rv5963; }
}
if (yr2310_IsDiscrete(F.p2669)) {
if ((((*(yR104 *)rt_nil_check(F.p2669))).f_lo == INT64_C(0))) {
{ rt_int rv5966 = 0;
return rv5966; }
}
{ rt_int rv5967 = (!((((((*(yR104 *)rt_nil_check(F.p2669))).f_hasm && ((*(yR104 *)rt_nil_check(F.p2670))).f_hasm) && ((((*(yR104 *)rt_nil_check(F.p2669))).f_mlo <= ((*(yR104 *)rt_nil_check(F.p2670))).f_mlo))) && ((((*(yR104 *)rt_nil_check(F.p2670))).f_mhi <= ((*(yR104 *)rt_nil_check(F.p2669))).f_mhi)))));
return rv5967; }
}
if ((((*(yR104 *)rt_nil_check(F.p2669))).f_kind == v794)) {
{ rt_int rv5969 = (!(((*(yR104 *)rt_nil_check(F.p2669))).f_lo == INT64_C(0)));
return rv5969; }
}
if ((((*(yR104 *)rt_nil_check(F.p2669))).f_kind == v791)) {
{ rt_int rv5971 = ((((!(((*(yR104 *)rt_nil_check(F.p2669))).f_lo == INT64_C(0)))) || ((!(((*(yR104 *)rt_nil_check(F.p2669))).f_fsn == ((*(yR104 *)rt_nil_check(F.p2670))).f_fsn)))) || ((!(((*(yR104 *)rt_nil_check(F.p2669))).f_fsd == ((*(yR104 *)rt_nil_check(F.p2670))).f_fsd))));
return rv5971; }
}
if ((((*(yR104 *)rt_nil_check(F.p2669))).f_kind == v809)) {
{ rt_int rv5972 = (((((*(yR104 *)rt_nil_check(F.p2670))).f_kind == v809)) && ((!(((*(yR104 *)rt_nil_check(F.p2669))).f_cname == ((*(yR104 *)rt_nil_check(F.p2670))).f_cname))));
return rv5972; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2669))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2669))).f_kind == v827)))) {
if ((((!(((*(yR104 *)rt_nil_check(F.p2670))).f_kind == v806))) && ((!(((*(yR104 *)rt_nil_check(F.p2670))).f_kind == v827))))) {
{ rt_int rv5974 = 0;
return rv5974; }
}
{ rt_int rv5975 = yr2668_NeedsConv(((*(yR104 *)rt_nil_check(F.p2669))).f_elem, ((*(yR104 *)rt_nil_check(F.p2670))).f_elem);
return rv5975; }
}
{ rt_int rv5977 = 0;
return rv5977; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2675_ConvertRecord(rt_int a_p2676, void * a_p2677, void * a_p2678) {
struct yf2679 F;
memset((void *)&F, 0, sizeof F);
F.p2676 = a_p2676;
F.p2677 = a_p2677;
F.p2678 = a_p2678;
F.v5983 = yr1184_Fresh(y_str("cs", 2));
F.v5985 = yr1184_Fresh(y_str("cd", 2));
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(yr2359_CType(F.p2678));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v5983);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.p2676);
yr1021_SA(y_str("; ", 2));
yr1028_ST(yr2359_CType(F.p2677));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v5985);
yr1021_SA(y_str("; memset(&", 10));
yr1028_ST(F.v5985);
yr1021_SA(y_str(", 0, sizeof ", 12));
yr1028_ST(F.v5985);
yr1021_SA(y_str(");", 2));
F.v5987 = ((*(yR104 *)rt_nil_check(F.p2677))).f_fields;
while ((!(F.v5987 == ((void *)0)))) {
F.v5989 = yr2614_FindField(F.p2678, ((*(yR109 *)rt_nil_check(F.v5987))).f_name);
if ((!(F.v5989 == ((void *)0)))) {
yr1021_SA(y_str(" ", 1));
if ((!(((*(yR109 *)rt_nil_check(F.v5989))).f_variant == INT64_C(0)))) {
yr1021_SA(y_str("if (", 4));
yr1028_ST(yr2809_VariantTest(F.p2678, F.v5989, yr3148_Join(yr1045_T(y_str("(&", 2)), F.v5983, yr1045_T(y_str(")", 1)))));
yr1021_SA(y_str(") ", 2));
}
yr1028_ST(F.v5985);
yr1021_SA(y_str(".f_", 3));
yr1028_ST(((*(yR109 *)rt_nil_check(F.v5987))).f_name);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(yr3148_Join(F.v5983, yr1045_T(y_str(".f_", 3)), ((*(yR109 *)rt_nil_check(F.v5987))).f_name), ((*(yR109 *)rt_nil_check(F.v5987))).f_rep, ((*(yR109 *)rt_nil_check(F.v5989))).f_rep));
yr1021_SA(y_str(";", 1));
}
F.v5987 = ((*(yR109 *)rt_nil_check(F.v5987))).f_next;
}
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v5985);
yr1021_SA(y_str("; })", 4));
{ rt_int rv6012 = yr1040_SE();
return rv6012; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2683_ConvertArray(rt_int a_p2684, void * a_p2685, void * a_p2686) {
struct yf2687 F;
memset((void *)&F, 0, sizeof F);
F.p2684 = a_p2684;
F.p2685 = a_p2685;
F.p2686 = a_p2686;
F.v6018 = yr1184_Fresh(y_str("cs", 2));
F.v6020 = yr1184_Fresh(y_str("cd", 2));
F.v6022 = yr1184_Fresh(y_str("ck", 2));
F.v6024 = yr1184_Fresh(y_str("cn", 2));
F.v6026 = yr2359_CType(((*(yR104 *)rt_nil_check(F.p2685))).f_elem);
F.v6028 = yr2359_CType(((*(yR104 *)rt_nil_check(F.p2686))).f_elem);
yr1010_SB();
yr1021_SA(y_str("({ yarr ", 8));
yr1028_ST(F.v6018);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.p2684);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v6020);
yr1021_SA(y_str("; rt_int ", 9));
yr1028_ST(F.v6024);
yr1021_SA(y_str(" = y_count(", 11));
yr1028_ST(F.v6018);
yr1021_SA(y_str(", ", 2));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2686))).f_nidx);
yr1021_SA(y_str(");", 2));
if ((((*(yR104 *)rt_nil_check(F.p2685))).f_kind == v806)) {
yr1021_SA(y_str(" y_init(", 8));
yr1028_ST(yr2365_DescOf(F.p2685));
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6020);
yr1021_SA(y_str("); if (y_count(", 15));
yr1028_ST(F.v6020);
yr1021_SA(y_str(", ", 2));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2685))).f_nidx);
yr1021_SA(y_str(") != ", 5));
yr1028_ST(F.v6024);
yr1021_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1015_SC(34);
yr1021_SA(y_str("array lengths differ", 20));
yr1015_SC(34);
yr1021_SA(y_str(");", 2));
} else {
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6020);
yr1021_SA(y_str(" = y_like(", 10));
yr1028_ST(F.v6018);
yr1021_SA(y_str(", ", 2));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2686))).f_nidx);
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2365_DescOf(((*(yR104 *)rt_nil_check(F.p2685))).f_elem));
yr1021_SA(y_str(");", 2));
}
yr1021_SA(y_str(" for (rt_int ", 13));
yr1028_ST(F.v6022);
yr1021_SA(y_str(" = 0; ", 6));
yr1028_ST(F.v6022);
yr1021_SA(y_str(" < ", 3));
yr1028_ST(F.v6024);
yr1021_SA(y_str("; ", 2));
yr1028_ST(F.v6022);
yr1021_SA(y_str("++) ((", 6));
yr1028_ST(F.v6026);
yr1021_SA(y_str(" *)", 3));
yr1028_ST(F.v6020);
yr1021_SA(y_str(".p)[", 4));
yr1028_ST(F.v6022);
yr1021_SA(y_str("] = ", 4));
yr1028_ST(yr2733_Convert(yr3148_Join(yr1045_T(y_str("((", 2)), F.v6028, yr3148_Join(yr1045_T(y_str(" *)", 3)), F.v6018, yr3148_Join(yr1045_T(y_str(".p)[", 4)), F.v6022, yr1045_T(y_str("]", 1))))), ((*(yR104 *)rt_nil_check(F.p2685))).f_elem, ((*(yR104 *)rt_nil_check(F.p2686))).f_elem));
yr1021_SA(y_str("; ", 2));
yr1028_ST(F.v6020);
yr1021_SA(y_str("; })", 4));
{ rt_int rv6069 = yr1040_SE();
return rv6069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2691_RescaleCode(rt_int a_p2692, void * a_p2693, void * a_p2694) {
struct yf2695 F;
memset((void *)&F, 0, sizeof F);
F.p2692 = a_p2692;
F.p2693 = a_p2693;
F.p2694 = a_p2694;
yr2489_ScaleRatio(F.p2693, F.p2694, &F.v6075, &F.v6077, &F.v6079);
if (F.v6079) {
{ rt_int rv6080 = F.p2692;
return rv6080; }
}
yr1010_SB();
yr1021_SA(y_str("y_fix_conv(", 11));
yr1028_ST(F.p2692);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v6075);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v6077);
yr1021_SA(y_str(")", 1));
{ rt_int rv6085 = yr1040_SE();
return rv6085; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2699_CommonScale(rt_int * a_p2700, void * a_p2701, rt_int * a_p2702, void * a_p2703, void * a_p2704, rt_int a_p2705) {
struct yf2706 F;
memset((void *)&F, 0, sizeof F);
F.p2700 = a_p2700;
F.p2701 = a_p2701;
F.p2702 = a_p2702;
F.p2703 = a_p2703;
F.p2704 = a_p2704;
F.p2705 = a_p2705;
F.v6094 = yr2466_Gcd(((*(yR104 *)rt_nil_check(F.p2701))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2703))).f_fsn);
F.v6096 = yr2473_MulChk(rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2701))).f_fsd, yr2466_Gcd(((*(yR104 *)rt_nil_check(F.p2701))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2703))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR104 *)rt_nil_check(F.p2703))).f_fsd, F.p2705);
yr2506_SetScale(F.p2704, F.v6094, F.v6096);
(*F.p2700) = yr2691_RescaleCode((*F.p2700), F.p2701, F.p2704);
(*F.p2702) = yr2691_RescaleCode((*F.p2702), F.p2703, F.p2704);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2710_FixLiteral(void * a_p2711, rt_int * a_p2712, void * * a_p2713) {
struct yf2714 F;
memset((void *)&F, 0, sizeof F);
F.p2711 = a_p2711;
F.p2712_o = a_p2712;
F.p2713_o = a_p2713;
F.v6103 = ((*(yR99 *)rt_nil_check(F.p2711))).f_ival;
F.v6105 = ((rt_int *)(v1228).p)[y_ix1(v1228, F.v6103)];
F.p2713 = yr2304_CopyRep(v1340);
((*(yR104 *)rt_nil_check(F.p2713))).f_abstract = 0;
if ((F.v6105 >= INT64_C(0))) {
yr2506_SetScale(F.p2713, yr2481_PowChk(((rt_int *)(v1226).p)[y_ix1(v1226, F.v6103)], F.v6105, ((*(yR99 *)rt_nil_check(F.p2711))).f_line), INT64_C(1));
} else {
yr2506_SetScale(F.p2713, INT64_C(1), yr2481_PowChk(((rt_int *)(v1226).p)[y_ix1(v1226, F.v6103)], rt_range(rt_neg(F.v6105), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2711))).f_line));
}
yr1010_SB();
yr1021_SA(y_str("((yfix)INT64_C(", 15));
yr1034_SI(((rt_int *)(v1224).p)[y_ix1(v1224, F.v6103)]);
yr1021_SA(y_str("))", 2));
F.p2712 = yr1040_SE();
(*F.p2712_o) = F.p2712;
(*F.p2713_o) = F.p2713;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2718_ManifestFix(void * a_p2719, rt_int * a_p2720, rt_int * a_p2721, rt_int * a_p2722) {
struct yf2723 F;
memset((void *)&F, 0, sizeof F);
F.p2719 = a_p2719;
F.p2720_o = a_p2720;
F.p2721_o = a_p2721;
F.p2722_o = a_p2722;
F.p2720 = 0;
F.p2721 = INT64_C(0);
F.p2722 = INT64_C(1);
if ((((*(yR99 *)rt_nil_check(F.p2719))).f_kind == v746)) {
F.v6119 = ((*(yR99 *)rt_nil_check(F.p2719))).f_ival;
F.v6121 = ((rt_int *)(v1228).p)[y_ix1(v1228, F.v6119)];
F.p2721 = ((rt_int *)(v1224).p)[y_ix1(v1224, F.v6119)];
if ((F.v6121 >= INT64_C(0))) {
F.p2721 = yr2473_MulChk(F.p2721, yr2481_PowChk(((rt_int *)(v1226).p)[y_ix1(v1226, F.v6119)], F.v6121, ((*(yR99 *)rt_nil_check(F.p2719))).f_line), ((*(yR99 *)rt_nil_check(F.p2719))).f_line);
} else {
F.p2722 = yr2481_PowChk(((rt_int *)(v1226).p)[y_ix1(v1226, F.v6119)], rt_range(rt_neg(F.v6121), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2719))).f_line);
}
F.p2720 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2719))).f_kind == v743)) {
F.p2721 = ((*(yR99 *)rt_nil_check(F.p2719))).f_ival;
F.p2720 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2719))).f_kind == v785)) {
yr2718_ManifestFix(((*(yR99 *)rt_nil_check(F.p2719))).f_a, &F.p2720, &F.p2721, &F.p2722);
} else if ((((*(yR99 *)rt_nil_check(F.p2719))).f_kind == v779)) {
yr2718_ManifestFix(((*(yR99 *)rt_nil_check(F.p2719))).f_a, &F.p2720, &F.p2721, &F.p2722);
F.p2721 = rt_range(rt_neg(F.p2721), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR99 *)rt_nil_check(F.p2719))).f_kind == v782)) && ((((*(yR99 *)rt_nil_check(F.p2719))).f_name == v563)))) {
yr2718_ManifestFix(((*(yR99 *)rt_nil_check(F.p2719))).f_a, &F.p2720, &F.p2721, &F.p2722);
yr2718_ManifestFix(((*(yR99 *)rt_nil_check(F.p2719))).f_b, &F.v6129, &F.v6125, &F.v6127);
F.p2720 = (F.p2720 && F.v6129);
F.p2721 = yr2473_MulChk(F.p2721, F.v6125, ((*(yR99 *)rt_nil_check(F.p2719))).f_line);
F.p2722 = yr2473_MulChk(F.p2722, F.v6127, ((*(yR99 *)rt_nil_check(F.p2719))).f_line);
}
F.v6123 = yr2466_Gcd(F.p2721, F.p2722);
F.p2721 = rt_range(rt_div(F.p2721, F.v6123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2722 = rt_range(rt_div(F.p2722, F.v6123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2720_o) = F.p2720;
(*F.p2721_o) = F.p2721;
(*F.p2722_o) = F.p2722;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2727_FloatChk(rt_int a_p2728) {
struct yf2729 F;
memset((void *)&F, 0, sizeof F);
F.p2728 = a_p2728;
{ rt_int rv6144 = yr3148_Join(yr1045_T(y_str("y_fchk(", 7)), F.p2728, yr1045_T(y_str(")", 1)));
return rv6144; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2733_Convert(rt_int a_p2734, void * a_p2735, void * a_p2736) {
struct yf2737 F;
memset((void *)&F, 0, sizeof F);
F.p2734 = a_p2734;
F.p2735 = a_p2735;
F.p2736 = a_p2736;
if (((((((*(yR104 *)rt_nil_check(F.p2736))).f_kind == v830)) && ((((*(yR104 *)rt_nil_check(F.p2735))).f_kind == v806))) && ((((*(yR104 *)rt_nil_check(F.p2735))).f_nidx == INT64_C(1))))) {
if ((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2735))).f_idx))).f_hasm && ((!(((*(yR104 *)rt_nil_check(F.p2736))).f_nlits == (rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2735))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2735))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1010_SB();
yr1021_SA(y_str("a string of ", 12));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2736))).f_nlits);
yr1021_SA(y_str(" characters for an array of ", 28));
yr1034_SI(rt_range(rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2735))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2735))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1021_SA(y_str(" (VI.B.1)", 9));
F.v6150 = yr1040_SE();
yr1141_Fail(v984, F.v6150);
}
}
if ((!yr2668_NeedsConv(F.p2735, F.p2736))) {
{ rt_int rv6161 = F.p2734;
return rv6161; }
}
if ((((*(yR104 *)rt_nil_check(F.p2735))).f_kind == v809)) {
{ rt_int rv6162 = yr2675_ConvertRecord(F.p2734, F.p2735, F.p2736);
return rv6162; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2735))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2735))).f_kind == v827)))) {
{ rt_int rv6163 = yr2683_ConvertArray(F.p2734, F.p2735, F.p2736);
return rv6163; }
}
if (yr2310_IsDiscrete(F.p2735)) {
yr1010_SB();
yr1021_SA(y_str("rt_range(", 9));
yr1028_ST(F.p2734);
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2440_LoText(F.p2735));
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2446_HiText(F.p2735));
yr1021_SA(y_str(")", 1));
{ rt_int rv6168 = yr1040_SE();
return rv6168; }
}
if ((((*(yR104 *)rt_nil_check(F.p2735))).f_kind == v794)) {
yr1010_SB();
yr1021_SA(y_str("rt_frange(", 10));
yr1028_ST(F.p2734);
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2440_LoText(F.p2735));
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2446_HiText(F.p2735));
yr1021_SA(y_str(")", 1));
{ rt_int rv6173 = yr1040_SE();
return rv6173; }
}
if ((((*(yR104 *)rt_nil_check(F.p2735))).f_kind == v791)) {
F.v6150 = yr2691_RescaleCode(F.p2734, F.p2736, F.p2735);
if ((((*(yR104 *)rt_nil_check(F.p2735))).f_lo == INT64_C(0))) {
{ rt_int rv6175 = F.v6150;
return rv6175; }
}
yr1010_SB();
yr1021_SA(y_str("y_fix_range(", 12));
yr1028_ST(F.v6150);
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2440_LoText(F.p2735));
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2446_HiText(F.p2735));
yr1021_SA(y_str(")", 1));
{ rt_int rv6180 = yr1040_SE();
return rv6180; }
}
{ rt_int rv6181 = F.p2734;
return rv6181; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2741_StoreText(rt_int a_p2742, void * a_p2743, rt_int a_p2744, void * a_p2745, rt_int a_p2746) {
struct yf2747 F;
memset((void *)&F, 0, sizeof F);
F.p2742 = a_p2742;
F.p2743 = a_p2743;
F.p2744 = a_p2744;
F.p2745 = a_p2745;
F.p2746 = a_p2746;
yr2392_CheckType(F.p2746, F.p2743, F.p2745);
if (yr2334_Deep(F.p2743)) {
F.v6189 = yr1184_Fresh(y_str("t", 1));
yr1010_SB();
yr1021_SA(y_str("{ ", 2));
yr1028_ST(yr2359_CType(F.p2743));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6189);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(F.p2744, F.p2743, F.p2745));
yr1021_SA(y_str("; y_store(", 10));
yr1028_ST(yr2365_DescOf(F.p2743));
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.p2742);
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6189);
yr1021_SA(y_str("); }", 4));
{ rt_int rv6198 = yr1040_SE();
return rv6198; }
}
yr1010_SB();
yr1028_ST(F.p2742);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(F.p2744, F.p2743, F.p2745));
yr1021_SA(y_str(";", 1));
{ rt_int rv6201 = yr1040_SE();
return rv6201; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2751_Store(rt_int a_p2752, void * a_p2753, rt_int a_p2754, void * a_p2755, rt_int a_p2756) {
struct yf2757 F;
memset((void *)&F, 0, sizeof F);
F.p2752 = a_p2752;
F.p2753 = a_p2753;
F.p2754 = a_p2754;
F.p2755 = a_p2755;
F.p2756 = a_p2756;
yr1116_Emit(yr2741_StoreText(F.p2752, F.p2753, F.p2754, F.p2755, F.p2756));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2761_IsVariable(void * a_p2762) {
struct yf2763 F;
memset((void *)&F, 0, sizeof F);
F.p2762 = a_p2762;
if ((((*(yR99 *)rt_nil_check(F.p2762))).f_kind == v761)) {
F.v6211 = yr2193_Find(((*(yR99 *)rt_nil_check(F.p2762))).f_name);
if ((F.v6211 == ((void *)0))) {
{ rt_int rv6215 = 0;
return rv6215; }
}
if (((*(yR119 *)rt_nil_check(F.v6211))).f_readonly) {
{ rt_int rv6217 = 0;
return rv6217; }
}
{ rt_int rv6218 = (((*(yR119 *)rt_nil_check(yr2291_Real(F.v6211)))).f_kind == v845);
return rv6218; }
}
if ((((*(yR99 *)rt_nil_check(F.p2762))).f_kind == v773)) {
{ rt_int rv6220 = (((*(yR99 *)rt_nil_check(F.p2762))).f_flag == INT64_C(0));
return rv6220; }
}
if ((((*(yR99 *)rt_nil_check(F.p2762))).f_kind == v770)) {
{ rt_int rv6221 = yr2761_IsVariable(((*(yR99 *)rt_nil_check(F.p2762))).f_a);
return rv6221; }
}
if ((((*(yR99 *)rt_nil_check(F.p2762))).f_kind == v767)) {
if ((!yr2761_IsVariable(((*(yR99 *)rt_nil_check(F.p2762))).f_a))) {
{ rt_int rv6223 = 0;
return rv6223; }
}
F.v6213 = yr2614_FindField(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2762))).f_a))).f_rep, ((*(yR99 *)rt_nil_check(F.p2762))).f_name);
if ((F.v6213 == ((void *)0))) {
{ rt_int rv6225 = 0;
return rv6225; }
}
{ rt_int rv6226 = (!((*(yR109 *)rt_nil_check(F.v6213))).f_isconst);
return rv6226; }
}
{ rt_int rv6228 = 0;
return rv6228; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2767_CheckPure(void * a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.p2768 = a_p2768;
F.v6232 = F.p2768;
if ((v1585 == ((void *)0))) {
return;
}
if ((!((*(yR119 *)rt_nil_check(v1585))).f_func)) {
return;
}
while ((((((*(yR99 *)rt_nil_check(F.v6232))).f_kind == v767)) || ((((*(yR99 *)rt_nil_check(F.v6232))).f_kind == v770)))) {
F.v6232 = ((*(yR99 *)rt_nil_check(F.v6232))).f_a;
}
if ((((*(yR99 *)rt_nil_check(F.v6232))).f_kind == v773)) {
if ((((*(yR99 *)rt_nil_check(F.v6232))).f_flag == INT64_C(0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2768))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR99 *)rt_nil_check(F.v6232))).f_kind == v761)) {
F.v6234 = yr2193_Find(((*(yR99 *)rt_nil_check(F.v6232))).f_name);
if ((!(F.v6234 == ((void *)0)))) {
F.v6234 = yr2291_Real(F.v6234);
if ((((*(yR119 *)rt_nil_check(F.v6234))).f_level < ((*(yR119 *)rt_nil_check(v1585))).f_level)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2768))).f_line, ((*(yR99 *)rt_nil_check(F.v6232))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2773_LValue(void * a_p2774, rt_int * a_p2775, void * * a_p2776) {
struct yf2777 F;
memset((void *)&F, 0, sizeof F);
F.p2774 = a_p2774;
F.p2775_o = a_p2775;
F.p2776_o = a_p2776;
yr2800_Expr(F.p2774, ((void *)0), &F.p2775, &F.p2776);
if ((!yr2761_IsVariable(F.p2774))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2774))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2775_o) = F.p2775;
(*F.p2776_o) = F.p2776;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2781_Paren(rt_int a_p2782) {
struct yf2783 F;
memset((void *)&F, 0, sizeof F);
F.p2782 = a_p2782;
yr1010_SB();
yr1021_SA(y_str("(", 1));
yr1028_ST(F.p2782);
yr1021_SA(y_str(")", 1));
{ rt_int rv6247 = yr1040_SE();
return rv6247; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2787_Lit(void * a_p2788, rt_int a_p2789) {
struct yf2790 F;
memset((void *)&F, 0, sizeof F);
F.p2788 = a_p2788;
F.p2789 = a_p2789;
F.v6252 = yr2304_CopyRep(F.p2788);
yr2527_SetRange(F.v6252, F.p2789, F.p2789);
((*(yR104 *)rt_nil_check(F.v6252))).f_elem = F.p2788;
{ void * rv6253 = F.v6252;
return rv6253; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2794_Qualifier(void * a_p2795) {
struct yf2796 F;
memset((void *)&F, 0, sizeof F);
F.p2795 = a_p2795;
F.v6257 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2795))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2795))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v6257))).f_kind == v851))) && ((!(((*(yR119 *)rt_nil_check(F.v6257))).f_kind == v854))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2795))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2795))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6259 = ((*(yR119 *)rt_nil_check(F.v6257))).f_rep;
return rv6259; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2800_Expr(void * a_p2801, void * a_p2802, rt_int * a_p2803, void * * a_p2804) {
struct yf2805 F;
memset((void *)&F, 0, sizeof F);
F.p2801 = a_p2801;
F.p2802 = a_p2802;
F.p2803_o = a_p2803;
F.p2804_o = a_p2804;
F.v6266 = ((*(yR99 *)rt_nil_check(F.p2801))).f_kind;
v984 = ((*(yR99 *)rt_nil_check(F.p2801))).f_line;
if ((F.v6266 == v785)) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2801))).f_a, F.p2802, &F.v6270, &F.p2804);
F.p2803 = yr2781_Paren(F.v6270);
} else if ((F.v6266 == v743)) {
F.p2804 = yr2787_Lit(v1326, ((*(yR99 *)rt_nil_check(F.p2801))).f_ival);
if ((!(((*(yR99 *)rt_nil_check(F.p2801))).f_d == ((void *)0)))) {
F.v6276 = yr2794_Qualifier(F.p2801);
if ((!(((*(yR104 *)rt_nil_check(F.v6276))).f_kind == v788))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2801))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR104 *)rt_nil_check(F.p2804))).f_tid = ((*(yR104 *)rt_nil_check(F.v6276))).f_tid;
((*(yR104 *)rt_nil_check(F.p2804))).f_tname = ((*(yR104 *)rt_nil_check(F.v6276))).f_tname;
}
yr1010_SB();
yr1021_SA(y_str("INT64_C(", 8));
yr1034_SI(((*(yR99 *)rt_nil_check(F.p2801))).f_ival);
yr1021_SA(y_str(")", 1));
F.p2803 = yr1040_SE();
} else if ((F.v6266 == v752)) {
F.v6276 = yr2628_AlphabetFor(F.p2801, F.p2802);
F.v6282 = yr2635_CharValue(F.v6276, ((*(yR99 *)rt_nil_check(F.p2801))).f_text, ((*(yR99 *)rt_nil_check(F.p2801))).f_line);
F.p2804 = yr2787_Lit(F.v6276, F.v6282);
yr1010_SB();
yr1034_SI(F.v6282);
F.p2803 = yr1040_SE();
} else if ((F.v6266 == v755)) {
F.v6276 = yr2628_AlphabetFor(F.p2801, F.p2802);
F.v6270 = yr2643_StringCodes(F.v6276, ((*(yR99 *)rt_nil_check(F.p2801))).f_text, &F.v6280, ((*(yR99 *)rt_nil_check(F.p2801))).f_line);
F.p2804 = yr2297_NewRep(v830, yr1045_T(y_str("string", 6)));
((*(yR104 *)rt_nil_check(F.p2804))).f_tname = yr1045_T(y_str("a string literal", 16));
((*(yR104 *)rt_nil_check(F.p2804))).f_elem = F.v6276;
((*(yR104 *)rt_nil_check(F.p2804))).f_nidx = INT64_C(1);
((*(yR104 *)rt_nil_check(F.p2804))).f_nlits = F.v6280;
yr1010_SB();
yr1021_SA(y_str("y_str(", 6));
yr1028_ST(F.v6270);
yr1021_SA(y_str(", ", 2));
yr1034_SI(F.v6280);
yr1021_SA(y_str(")", 1));
F.p2803 = yr1040_SE();
} else if ((F.v6266 == v749)) {
F.p2804 = v1338;
if ((!(((*(yR99 *)rt_nil_check(F.p2801))).f_d == ((void *)0)))) {
F.p2804 = yr2794_Qualifier(F.p2801);
}
F.p2803 = yr2781_Paren(((*(yR99 *)rt_nil_check(F.p2801))).f_text);
} else if ((F.v6266 == v746)) {
yr2710_FixLiteral(F.p2801, &F.p2803, &F.p2804);
if ((!(((*(yR99 *)rt_nil_check(F.p2801))).f_d == ((void *)0)))) {
F.v6276 = yr2794_Qualifier(F.p2801);
if ((!(((*(yR104 *)rt_nil_check(F.v6276))).f_kind == v791))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2801))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR104 *)rt_nil_check(F.p2804))).f_tid = ((*(yR104 *)rt_nil_check(F.v6276))).f_tid;
((*(yR104 *)rt_nil_check(F.p2804))).f_tname = ((*(yR104 *)rt_nil_check(F.v6276))).f_tname;
}
} else if ((F.v6266 == v758)) {
if ((((*(yR99 *)rt_nil_check(F.p2801))).f_d == ((void *)0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2801))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2804 = yr2794_Qualifier(F.p2801);
if ((!(((*(yR104 *)rt_nil_check(F.p2804))).f_kind == v812))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2801))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2803 = yr1045_T(y_str("((void *)0)", 11));
} else if ((F.v6266 == v761)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2801))).f_d == ((void *)0)))) {
F.v6276 = yr2794_Qualifier(F.p2801);
F.v6268 = yr2251_FindLit(((*(yR99 *)rt_nil_check(F.p2801))).f_name, F.v6276);
if ((F.v6268 == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2801))).f_line, ((*(yR99 *)rt_nil_check(F.p2801))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6268 = yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p2801))).f_name, ((*(yR99 *)rt_nil_check(F.p2801))).f_line);
}
yr2817_NameExpr(F.p2801, F.v6268, &F.p2803, &F.p2804);
} else if ((F.v6266 == v764)) {
yr2997_CallExpr(F.p2801, F.p2802, 0, &F.p2803, &F.p2804);
} else if ((F.v6266 == v767)) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2801))).f_a, ((void *)0), &F.v6270, &F.v6276);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2801))).f_a))).f_rep = F.v6276;
if ((!(((*(yR104 *)rt_nil_check(F.v6276))).f_kind == v809))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2801))).f_line, ((*(yR99 *)rt_nil_check(F.p2801))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR104 *)rt_nil_check(F.v6276))).f_opaque) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2801))).f_line, ((*(yR104 *)rt_nil_check(F.v6276))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6278 = yr2614_FindField(F.v6276, ((*(yR99 *)rt_nil_check(F.p2801))).f_name);
if ((F.v6278 == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2801))).f_line, ((*(yR99 *)rt_nil_check(F.p2801))).f_name, y_str(" is not a component of this record", 34));
}
F.p2804 = ((*(yR109 *)rt_nil_check(F.v6278))).f_rep;
if ((!(((*(yR109 *)rt_nil_check(F.v6278))).f_variant == INT64_C(0)))) {
yr3072_CheckVariantSelected(F.p2801, F.v6276, F.v6278);
F.v6272 = yr1184_Fresh(y_str("vr", 2));
yr1010_SB();
yr1021_SA(y_str("(*({ ", 5));
yr1028_ST(yr2359_CType(F.v6276));
yr1021_SA(y_str(" *", 2));
yr1028_ST(F.v6272);
yr1021_SA(y_str(" = &", 4));
yr1028_ST(yr2781_Paren(F.v6270));
yr1021_SA(y_str("; if (!(", 8));
yr1028_ST(yr2809_VariantTest(F.v6276, F.v6278, F.v6272));
yr1021_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1028_ST(F.v6272);
yr1021_SA(y_str("->f_", 4));
yr1028_ST(((*(yR99 *)rt_nil_check(F.p2801))).f_name);
yr1021_SA(y_str("; }))", 5));
F.p2803 = yr1040_SE();
} else {
yr1010_SB();
yr1028_ST(yr2781_Paren(F.v6270));
yr1021_SA(y_str(".f_", 3));
yr1028_ST(((*(yR99 *)rt_nil_check(F.p2801))).f_name);
F.p2803 = yr1040_SE();
}
} else if ((((F.v6266 == v773)) && yr2959_UserOp(F.p2801, rt_range(v602, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2801))).f_a, ((void *)0), &F.p2803, &F.p2804))) {
((*(yR99 *)rt_nil_check(F.p2801))).f_flag = INT64_C(1);
} else if ((F.v6266 == v773)) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2801))).f_a, ((void *)0), &F.v6270, &F.v6276);
if ((!(((*(yR104 *)rt_nil_check(F.v6276))).f_kind == v812))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2801))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR104 *)rt_nil_check(F.v6276))).f_elem == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2801))).f_line, ((*(yR104 *)rt_nil_check(F.v6276))).f_forward, y_str(" is not declared", 16));
}
F.p2804 = ((*(yR104 *)rt_nil_check(F.v6276))).f_elem;
yr1010_SB();
yr1021_SA(y_str("(*(", 3));
yr1028_ST(yr2359_CType(F.p2804));
yr1021_SA(y_str(" *)rt_nil_check(", 16));
yr1028_ST(F.v6270);
yr1021_SA(y_str("))", 2));
F.p2803 = yr1040_SE();
} else if ((F.v6266 == v770)) {
yr2826_IndexExpr(F.p2801, &F.p2803, &F.p2804);
} else if ((((F.v6266 == v776)) && yr2959_UserOp(F.p2801, rt_range(v374, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2801))).f_a, ((void *)0), &F.p2803, &F.p2804))) {
F.p2804 = F.p2804;
} else if ((F.v6266 == v776)) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2801))).f_a, v1328, &F.v6270, &F.v6276);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2801))).f_line, v1328, F.v6276);
F.p2804 = v1328;
yr1010_SB();
yr1021_SA(y_str("(!", 2));
yr1028_ST(F.v6270);
yr1021_SA(y_str(")", 1));
F.p2803 = yr1040_SE();
} else if ((F.v6266 == v779)) {
if ((!yr2959_UserOp(F.p2801, rt_range(v560, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2801))).f_a, ((void *)0), &F.p2803, &F.p2804))) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2801))).f_a, F.p2802, &F.v6270, &F.v6276);
yr2834_NegExpr(F.p2801, F.v6270, F.v6276, &F.p2803, &F.p2804);
}
} else if ((F.v6266 == v782)) {
yr2890_BinExpr(F.p2801, F.p2802, &F.p2803, &F.p2804);
} else {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2801))).f_line, y_str("not an expression", 17));
}
((*(yR99 *)rt_nil_check(F.p2801))).f_rep = F.p2804;
(*F.p2803_o) = F.p2803;
(*F.p2804_o) = F.p2804;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2809_VariantTest(void * a_p2810, void * a_p2811, rt_int a_p2812) {
struct yf2813 F;
memset((void *)&F, 0, sizeof F);
F.p2810 = a_p2810;
F.p2811 = a_p2811;
F.p2812 = a_p2812;
F.v6325 = ((*(yR109 *)rt_nil_check(F.p2811))).f_labels;
yr1010_SB();
yr1021_SA(y_str("0", 1));
while ((!(F.v6325 == ((void *)0)))) {
yr2652_Manifest(F.v6325, &F.v6327, &F.v6329);
yr1021_SA(y_str(" || ", 4));
yr1028_ST(F.p2812);
yr1021_SA(y_str("->f_", 4));
yr1028_ST(((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2810))).f_selector))).f_name);
yr1021_SA(y_str(" == ", 4));
yr1034_SI(F.v6329);
F.v6325 = ((*(yR99 *)rt_nil_check(F.v6325))).f_next;
}
{ rt_int rv6334 = yr1040_SE();
return rv6334; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2817_NameExpr(void * a_p2818, void * a_p2819, rt_int * a_p2820, void * * a_p2821) {
struct yf2822 F;
memset((void *)&F, 0, sizeof F);
F.p2818 = a_p2818;
F.p2819 = a_p2819;
F.p2820_o = a_p2820;
F.p2821_o = a_p2821;
F.v6341 = yr2291_Real(F.p2819);
if ((((*(yR119 *)rt_nil_check(F.v6341))).f_kind == v857)) {
if ((((((*(yR99 *)rt_nil_check(F.p2818))).f_d == ((void *)0))) && yr2245_Ambiguous(F.v6341))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2818))).f_line, ((*(yR99 *)rt_nil_check(F.p2818))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2821 = yr2787_Lit(((*(yR119 *)rt_nil_check(F.v6341))).f_rep, ((*(yR119 *)rt_nil_check(F.v6341))).f_mval);
yr1010_SB();
yr1034_SI(((*(yR119 *)rt_nil_check(F.v6341))).f_mval);
F.p2820 = yr1040_SE();
(*F.p2820_o) = F.p2820;
(*F.p2821_o) = F.p2821;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6341))).f_kind == v845)) || ((((*(yR119 *)rt_nil_check(F.v6341))).f_kind == v848)))) {
F.p2821 = ((*(yR119 *)rt_nil_check(F.v6341))).f_rep;
F.p2820 = yr2285_SymPath(F.v6341);
(*F.p2820_o) = F.p2820;
(*F.p2821_o) = F.p2821;
return;
}
if ((((*(yR119 *)rt_nil_check(F.v6341))).f_kind == v860)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2818))).f_line, ((*(yR99 *)rt_nil_check(F.p2818))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2818))).f_line, ((*(yR99 *)rt_nil_check(F.p2818))).f_name, y_str(" is not a value", 15));
(*F.p2820_o) = F.p2820;
(*F.p2821_o) = F.p2821;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2826_IndexExpr(void * a_p2827, rt_int * a_p2828, void * * a_p2829) {
struct yf2830 F;
memset((void *)&F, 0, sizeof F);
F.p2827 = a_p2827;
F.p2828_o = a_p2828;
F.p2829_o = a_p2829;
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2827))).f_a, ((void *)0), &F.v6350, &F.v6356);
if ((!yr2322_IsArrayLike(F.v6356))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2827))).f_line, y_str("[] of something that is not an array", 36));
}
F.v6364 = yr1864_Count(((*(yR99 *)rt_nil_check(F.p2827))).f_b);
if ((!(F.v6364 == ((*(yR104 *)rt_nil_check(F.v6356))).f_nidx))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2827))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2829 = ((*(yR104 *)rt_nil_check(F.v6356))).f_elem;
F.v6366 = (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2827))).f_a))).f_kind == v761)) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2827))).f_a))).f_kind == v767))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2827))).f_a))).f_kind == v770))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2827))).f_a))).f_kind == v773)));
if (F.v6366) {
F.v6354 = F.v6350;
} else {
F.v6354 = yr1184_Fresh(y_str("ya", 2));
}
yr1010_SB();
if ((!F.v6366)) {
yr1021_SA(y_str("(*({ yarr ", 10));
yr1028_ST(F.v6354);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.v6350);
yr1021_SA(y_str("; &", 3));
}
yr1021_SA(y_str("((", 2));
yr1028_ST(yr2359_CType(F.p2829));
yr1021_SA(y_str(" *)(", 4));
yr1028_ST(F.v6354);
yr1021_SA(y_str(").p)[y_ix", 9));
yr1034_SI(F.v6364);
yr1021_SA(y_str("(", 1));
yr1028_ST(F.v6354);
F.p2828 = yr1040_SE();
F.v6362 = ((*(yR99 *)rt_nil_check(F.p2827))).f_b;
F.v6360 = ((*(yR104 *)rt_nil_check(F.v6356))).f_idx;
while ((!(F.v6362 == ((void *)0)))) {
yr2800_Expr(F.v6362, F.v6360, &F.v6352, &F.v6358);
if ((((!(F.v6360 == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.v6356))).f_kind == v806)))) {
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v6362))).f_line, F.v6360, F.v6358);
} else if ((!((((((*(yR104 *)rt_nil_check(F.v6358))).f_kind == v788)) || yr2310_IsDiscrete(F.v6358))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.v6362))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1010_SB();
yr1028_ST(F.p2828);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v6352);
F.p2828 = yr1040_SE();
if ((!(F.v6360 == ((void *)0)))) {
F.v6360 = ((*(yR104 *)rt_nil_check(F.v6360))).f_link;
}
F.v6362 = ((*(yR99 *)rt_nil_check(F.v6362))).f_next;
}
yr1010_SB();
yr1028_ST(F.p2828);
yr1021_SA(y_str(")]", 2));
if ((!F.v6366)) {
yr1021_SA(y_str("; }))", 5));
}
F.p2828 = yr1040_SE();
(*F.p2828_o) = F.p2828;
(*F.p2829_o) = F.p2829;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2834_NegExpr(void * a_p2835, rt_int a_p2836, void * a_p2837, rt_int * a_p2838, void * * a_p2839) {
struct yf2840 F;
memset((void *)&F, 0, sizeof F);
F.p2835 = a_p2835;
F.p2836 = a_p2836;
F.p2837 = a_p2837;
F.p2838_o = a_p2838;
F.p2839_o = a_p2839;
yr1010_SB();
if ((((*(yR104 *)rt_nil_check(F.p2837))).f_kind == v788)) {
F.p2839 = yr2304_CopyRep(F.p2837);
((*(yR104 *)rt_nil_check(F.p2839))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.p2839))).f_hasm = 0;
yr1021_SA(y_str("rt_neg(", 7));
yr1028_ST(F.p2836);
yr1021_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2837))).f_kind == v794)) {
F.p2839 = yr2304_CopyRep(F.p2837);
((*(yR104 *)rt_nil_check(F.p2839))).f_lo = INT64_C(0);
yr1021_SA(y_str("(-", 2));
yr1028_ST(F.p2836);
yr1021_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2837))).f_kind == v791)) {
F.p2839 = yr2304_CopyRep(F.p2837);
((*(yR104 *)rt_nil_check(F.p2839))).f_lo = INT64_C(0);
yr1021_SA(y_str("y_fix_neg(", 10));
yr1028_ST(F.p2836);
yr1021_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2837))).f_kind == v818)) {
F.p2839 = F.p2837;
yr1021_SA(y_str("y_set_compl(", 12));
yr1028_ST(F.p2836);
yr1021_SA(y_str(")", 1));
} else {
v911 = 0;
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2835))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2838 = yr1040_SE();
(*F.p2838_o) = F.p2838;
(*F.p2839_o) = F.p2839;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2844_Unbounded(void * a_p2845) {
struct yf2846 F;
memset((void *)&F, 0, sizeof F);
F.p2845 = a_p2845;
F.v6404 = yr2304_CopyRep(F.p2845);
((*(yR104 *)rt_nil_check(F.v6404))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6404))).f_hi = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6404))).f_hasm = 0;
{ void * rv6408 = F.v6404;
return rv6408; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2850_Call2(yarr a_p2852, rt_int a_p2853, rt_int a_p2854) {
struct yf2855 F;
memset((void *)&F, 0, sizeof F);
F.p2852 = a_p2852;
F.p2853 = a_p2853;
F.p2854 = a_p2854;
yr1010_SB();
yr1021_SA(F.p2852);
yr1021_SA(y_str("(", 1));
yr1028_ST(F.p2853);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.p2854);
yr1021_SA(y_str(")", 1));
{ rt_int rv6416 = yr1040_SE();
return rv6416; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2859_Infix(rt_int a_p2860, yarr a_p2862, rt_int a_p2863) {
struct yf2864 F;
memset((void *)&F, 0, sizeof F);
F.p2860 = a_p2860;
F.p2862 = a_p2862;
F.p2863 = a_p2863;
yr1010_SB();
yr1021_SA(y_str("(", 1));
yr1028_ST(F.p2860);
yr1021_SA(y_str(" ", 1));
yr1021_SA(F.p2862);
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.p2863);
yr1021_SA(y_str(")", 1));
{ rt_int rv6425 = yr1040_SE();
return rv6425; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2868_EqCode(rt_int a_p2869, void * a_p2870, rt_int a_p2871, void * a_p2872) {
struct yf2873 F;
memset((void *)&F, 0, sizeof F);
F.p2869 = a_p2869;
F.p2870 = a_p2870;
F.p2871 = a_p2871;
F.p2872 = a_p2872;
F.v6436 = F.p2870;
if ((((*(yR104 *)rt_nil_check(F.p2870))).f_kind == v830)) {
F.v6436 = F.p2872;
}
if ((((((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v809))) || ((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v830)))) {
F.v6432 = yr1184_Fresh(y_str("e", 1));
F.v6434 = yr1184_Fresh(y_str("e", 1));
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(yr2359_CType(F.v6436));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6432);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.p2869);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v6434);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.p2871);
yr1021_SA(y_str("; y_eq(", 7));
if ((((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v827)) || ((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v830)))) {
yr1021_SA(y_str("y_desc_vector(", 14));
yr1028_ST(yr2365_DescOf(((*(yR104 *)rt_nil_check(F.v6436))).f_elem));
yr1021_SA(y_str(")", 1));
} else {
yr1028_ST(yr2365_DescOf(F.v6436));
}
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6432);
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6434);
yr1021_SA(y_str("); })", 5));
{ rt_int rv6450 = yr1040_SE();
return rv6450; }
}
if ((((*(yR104 *)rt_nil_check(F.v6436))).f_kind == v818)) {
{ rt_int rv6452 = yr2850_Call2(y_str("y_set_eq", 8), F.p2869, F.p2871);
return rv6452; }
}
{ rt_int rv6454 = yr2859_Infix(F.p2869, y_str("==", 2), F.p2871);
return rv6454; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2877_IsOrdered(void * a_p2878) {
struct yf2879 F;
memset((void *)&F, 0, sizeof F);
F.p2878 = a_p2878;
if ((((((((*(yR104 *)rt_nil_check(F.p2878))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2878))).f_kind == v794))) || ((((*(yR104 *)rt_nil_check(F.p2878))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.p2878))).f_kind == v803)))) {
{ rt_int rv6458 = 1;
return rv6458; }
}
{ rt_int rv6459 = (((((*(yR104 *)rt_nil_check(F.p2878))).f_kind == v800)) && ((*(yR104 *)rt_nil_check(F.p2878))).f_ordered);
return rv6459; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2883_FixToFloat(rt_int a_p2884, void * a_p2885) {
struct yf2886 F;
memset((void *)&F, 0, sizeof F);
F.p2884 = a_p2884;
F.p2885 = a_p2885;
yr1010_SB();
yr1021_SA(y_str("y_fix_float(", 12));
yr1028_ST(F.p2884);
yr1021_SA(y_str(", INT64_C(", 10));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2885))).f_fsn);
yr1021_SA(y_str("), INT64_C(", 11));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p2885))).f_fsd);
yr1021_SA(y_str("))", 2));
{ rt_int rv6467 = yr1040_SE();
return rv6467; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2890_BinExpr(void * a_p2891, void * a_p2892, rt_int * a_p2893, void * * a_p2894) {
struct yf2895 F;
memset((void *)&F, 0, sizeof F);
F.p2891 = a_p2891;
F.p2892 = a_p2892;
F.p2893_o = a_p2893;
F.p2894_o = a_p2894;
F.v6474 = ((*(yR99 *)rt_nil_check(F.p2891))).f_name;
if (yr2959_UserOp(F.p2891, F.v6474, ((*(yR99 *)rt_nil_check(F.p2891))).f_a, ((*(yR99 *)rt_nil_check(F.p2891))).f_b, &F.p2893, &F.p2894)) {
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((((F.v6474 == v221)) || ((F.v6474 == v383)))) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2891))).f_a, v1328, &F.v6476, &F.v6482);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2891))).f_line, v1328, F.v6482);
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2891))).f_b, v1328, &F.v6478, &F.v6484);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2891))).f_line, v1328, F.v6484);
F.p2894 = v1328;
if ((F.v6474 == v221)) {
F.p2893 = yr2859_Infix(F.v6476, y_str("&&", 2), F.v6478);
} else {
F.p2893 = yr2859_Infix(F.v6476, y_str("||", 2), F.v6478);
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((F.v6474 == v344)) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2891))).f_b, ((void *)0), &F.v6478, &F.v6484);
if ((!(((*(yR104 *)rt_nil_check(F.v6484))).f_kind == v818))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2891))).f_line, y_str("IN needs a set on its right", 27));
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2891))).f_a, ((*(yR104 *)rt_nil_check(F.v6484))).f_elem, &F.v6476, &F.v6482);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2891))).f_line, ((*(yR104 *)rt_nil_check(F.v6484))).f_elem, F.v6482);
F.p2894 = v1328;
F.p2893 = yr2850_Call2(y_str("y_set_in", 8), F.v6476, F.v6478);
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
F.v6486 = ((void *)0);
if (((((((((!(F.p2892 == ((void *)0)))) && ((!(F.v6474 == v569)))) && ((!(F.v6474 == v554)))) && ((!(F.v6474 == v572)))) && ((!(F.v6474 == v524)))) && ((!(F.v6474 == v575)))) && ((!(F.v6474 == v527))))) {
F.v6486 = F.p2892;
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2891))).f_a, F.v6486, &F.v6476, &F.v6482);
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p2891))).f_b, F.v6482, &F.v6478, &F.v6484);
if ((((F.v6474 == v569)) || ((F.v6474 == v554)))) {
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6482, F.v6484);
if (yr2353_NonAssignable(F.v6482)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2891))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR104 *)rt_nil_check(F.v6482))).f_opaque && (((rt_div(((*(yR104 *)rt_nil_check(F.v6482))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2891))).f_line, ((*(yR104 *)rt_nil_check(F.v6482))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2894 = v1328;
if ((((*(yR104 *)rt_nil_check(F.v6482))).f_kind == v791)) {
yr2699_CommonScale(&F.v6476, F.v6482, &F.v6478, F.v6484, yr2844_Unbounded(F.v6482), ((*(yR99 *)rt_nil_check(F.p2891))).f_line);
}
F.p2893 = yr2868_EqCode(F.v6476, F.v6482, F.v6478, F.v6484);
if ((F.v6474 == v554)) {
yr1010_SB();
yr1021_SA(y_str("(!", 2));
yr1028_ST(F.p2893);
yr1021_SA(y_str(")", 1));
F.p2893 = yr1040_SE();
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((((((F.v6474 == v572)) || ((F.v6474 == v524))) || ((F.v6474 == v575))) || ((F.v6474 == v527)))) {
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6482, F.v6484);
if ((!yr2877_IsOrdered(F.v6482))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2891))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2894 = v1328;
if ((((*(yR104 *)rt_nil_check(F.v6482))).f_kind == v791)) {
yr2699_CommonScale(&F.v6476, F.v6482, &F.v6478, F.v6484, yr2844_Unbounded(F.v6482), ((*(yR99 *)rt_nil_check(F.p2891))).f_line);
}
if ((F.v6474 == v572)) {
F.p2893 = yr2859_Infix(F.v6476, y_str("<", 1), F.v6478);
} else if ((F.v6474 == v524)) {
F.p2893 = yr2859_Infix(F.v6476, y_str("<=", 2), F.v6478);
} else if ((F.v6474 == v575)) {
F.p2893 = yr2859_Infix(F.v6476, y_str(">", 1), F.v6478);
} else {
F.p2893 = yr2859_Infix(F.v6476, y_str(">=", 2), F.v6478);
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6482, F.v6484);
F.v6488 = ((*(yR104 *)rt_nil_check(F.v6482))).f_kind;
if ((((*(yR104 *)rt_nil_check(F.v6482))).f_kind == v830)) {
F.v6488 = ((*(yR104 *)rt_nil_check(F.v6484))).f_kind;
}
if ((F.v6474 == v473)) {
if ((F.v6488 == v797)) {
F.p2894 = v1328;
F.p2893 = yr2859_Infix(F.v6476, y_str("!=", 2), F.v6478);
} else if ((F.v6488 == v818)) {
F.p2894 = F.v6482;
F.p2893 = yr2850_Call2(y_str("y_set_xor", 9), F.v6476, F.v6478);
} else {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2891))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((F.v6488 == v818)) {
F.p2894 = F.v6482;
if ((F.v6474 == v557)) {
F.p2893 = yr2850_Call2(y_str("y_set_union", 11), F.v6476, F.v6478);
} else if ((F.v6474 == v560)) {
F.p2893 = yr2850_Call2(y_str("y_set_diff", 10), F.v6476, F.v6478);
} else if ((F.v6474 == v563)) {
F.p2893 = yr2850_Call2(y_str("y_set_inter", 11), F.v6476, F.v6478);
} else {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2891))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((F.v6488 == v788)) {
F.p2894 = yr2844_Unbounded(F.v6482);
if ((F.v6474 == v557)) {
F.p2893 = yr2850_Call2(y_str("rt_add", 6), F.v6476, F.v6478);
} else if ((F.v6474 == v560)) {
F.p2893 = yr2850_Call2(y_str("rt_sub", 6), F.v6476, F.v6478);
} else if ((F.v6474 == v563)) {
F.p2893 = yr2850_Call2(y_str("rt_mul", 6), F.v6476, F.v6478);
} else if ((F.v6474 == v260)) {
F.p2893 = yr2850_Call2(y_str("rt_div", 6), F.v6476, F.v6478);
} else if ((F.v6474 == v362)) {
F.p2893 = yr2850_Call2(y_str("rt_mod", 6), F.v6476, F.v6478);
} else if ((F.v6474 == v566)) {
F.p2894 = v1338;
yr1010_SB();
yr1021_SA(y_str("rt_fdiv((double)(", 17));
yr1028_ST(F.v6476);
yr1021_SA(y_str("), (double)(", 12));
yr1028_ST(F.v6478);
yr1021_SA(y_str("))", 2));
F.p2893 = yr1040_SE();
} else {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6474, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((F.v6488 == v794)) {
F.p2894 = yr2844_Unbounded(F.v6482);
if ((F.v6474 == v557)) {
F.p2893 = yr2727_FloatChk(yr2859_Infix(F.v6476, y_str("+", 1), F.v6478));
} else if ((F.v6474 == v560)) {
F.p2893 = yr2727_FloatChk(yr2859_Infix(F.v6476, y_str("-", 1), F.v6478));
} else if ((F.v6474 == v563)) {
F.p2893 = yr2727_FloatChk(yr2859_Infix(F.v6476, y_str("*", 1), F.v6478));
} else if ((F.v6474 == v566)) {
F.p2894 = v1338;
F.p2893 = yr2727_FloatChk(yr2850_Call2(y_str("rt_fdiv", 7), F.v6476, F.v6478));
} else {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6474, y_str(" does not apply to these numbers", 32));
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
if ((F.v6488 == v791)) {
F.p2894 = yr2844_Unbounded(F.v6482);
if ((((F.v6474 == v557)) || ((F.v6474 == v560)))) {
yr2699_CommonScale(&F.v6476, F.v6482, &F.v6478, F.v6484, F.p2894, ((*(yR99 *)rt_nil_check(F.p2891))).f_line);
if ((F.v6474 == v557)) {
F.p2893 = yr2850_Call2(y_str("y_fix_add", 9), F.v6476, F.v6478);
} else {
F.p2893 = yr2850_Call2(y_str("y_fix_sub", 9), F.v6476, F.v6478);
}
} else if ((F.v6474 == v563)) {
yr2506_SetScale(F.p2894, yr2473_MulChk(((*(yR104 *)rt_nil_check(F.v6482))).f_fsn, ((*(yR104 *)rt_nil_check(F.v6484))).f_fsn, ((*(yR99 *)rt_nil_check(F.p2891))).f_line), yr2473_MulChk(((*(yR104 *)rt_nil_check(F.v6482))).f_fsd, ((*(yR104 *)rt_nil_check(F.v6484))).f_fsd, ((*(yR99 *)rt_nil_check(F.p2891))).f_line));
F.p2893 = yr2850_Call2(y_str("y_fix_mul", 9), F.v6476, F.v6478);
} else if ((F.v6474 == v566)) {
F.p2894 = v1338;
F.p2893 = yr2727_FloatChk(yr2850_Call2(y_str("rt_fdiv", 7), yr2883_FixToFloat(F.v6476, F.v6482), yr2883_FixToFloat(F.v6478, F.v6484)));
} else {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6474, y_str(" does not apply to these numbers", 32));
}
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
}
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2891))).f_line, F.v6474, y_str(" does not apply to these values", 31));
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2899_Fits(void * a_p2900, void * a_p2901) {
struct yf2902 F;
memset((void *)&F, 0, sizeof F);
F.p2900 = a_p2900;
F.p2901 = a_p2901;
if ((((*(yR104 *)rt_nil_check(F.p2900))).f_kind == v827)) {
if ((!yr2322_IsArrayLike(F.p2901))) {
{ rt_int rv6536 = 0;
return rv6536; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2901))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2900))).f_nidx))) {
{ rt_int rv6538 = 0;
return rv6538; }
}
{ rt_int rv6539 = yr2377_SameType(((*(yR104 *)rt_nil_check(F.p2900))).f_elem, ((*(yR104 *)rt_nil_check(F.p2901))).f_elem);
return rv6539; }
}
if ((((*(yR104 *)rt_nil_check(F.p2900))).f_kind == v839)) {
{ rt_int rv6541 = 1;
return rv6541; }
}
{ rt_int rv6542 = yr2377_SameType(F.p2900, F.p2901);
return rv6542; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2906_Choose(void * a_p2907, rt_int a_p2908, rt_int a_p2909) {
struct yf2910 F;
memset((void *)&F, 0, sizeof F);
F.p2907 = a_p2907;
F.p2908 = a_p2908;
F.p2909 = a_p2909;
F.v6548 = F.p2907;
while ((!(F.v6548 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6548))).f_nparams == F.p2909)) {
F.v6552 = 1;
F.v6550 = ((*(yR119 *)rt_nil_check(F.v6548))).f_params;
F.v6554 = INT64_C(1);
while ((!(F.v6550 == ((void *)0)))) {
if ((!yr2899_Fits(((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, rt_add(F.p2908, F.v6554))]))) {
F.v6552 = 0;
}
F.v6554 = rt_range(rt_add(F.v6554, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6550 = ((*(yR114 *)rt_nil_check(F.v6550))).f_next;
}
if (F.v6552) {
{ void * rv6561 = F.v6548;
return rv6561; }
}
}
F.v6548 = ((*(yR119 *)rt_nil_check(F.v6548))).f_alt;
}
{ void * rv6562 = ((void *)0);
return rv6562; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2914_HidesStandard(void * a_p2915) {
struct yf2916 F;
memset((void *)&F, 0, sizeof F);
F.p2915 = a_p2915;
F.v6566 = F.p2915;
while ((!(F.v6566 == ((void *)0)))) {
if ((((!(((*(yR119 *)rt_nil_check(F.v6566))).f_decl == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6566))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv6569 = 1;
return rv6569; }
}
F.v6566 = ((*(yR119 *)rt_nil_check(F.v6566))).f_alt;
}
{ rt_int rv6571 = 0;
return rv6571; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2920_CompileArgs(void * a_p2921, void * a_p2922, rt_int * a_p2923, rt_int * a_p2924) {
struct yf2925 F;
memset((void *)&F, 0, sizeof F);
F.p2921 = a_p2921;
F.p2922 = a_p2922;
F.p2923_o = a_p2923;
F.p2924_o = a_p2924;
F.v6578 = F.p2921;
F.v6580 = ((void *)0);
F.p2923 = v1496;
F.p2924 = INT64_C(0);
if ((!(F.p2922 == ((void *)0)))) {
F.v6580 = ((*(yR119 *)rt_nil_check(F.p2922))).f_params;
}
while ((!(F.v6578 == ((void *)0)))) {
if ((v1496 >= INT64_C(4000))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.v6578))).f_line, y_str("calls nested too deeply", 23));
}
F.p2924 = rt_range(rt_add(F.p2924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1496 = rt_range(rt_add(F.p2923, F.p2924), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6582 = ((void *)0);
if ((!(F.v6580 == ((void *)0)))) {
F.v6582 = ((*(yR114 *)rt_nil_check(F.v6580))).f_rep;
F.v6580 = ((*(yR114 *)rt_nil_check(F.v6580))).f_next;
}
yr2800_Expr(F.v6578, F.v6582, &((rt_int *)(v1472).p)[y_ix1(v1472, rt_add(F.p2923, F.p2924))], &((void * *)(v1483).p)[y_ix1(v1483, rt_add(F.p2923, F.p2924))]);
((void * *)(v1494).p)[y_ix1(v1494, rt_add(F.p2923, F.p2924))] = F.v6578;
F.v6578 = ((*(yR99 *)rt_nil_check(F.v6578))).f_next;
}
(*F.p2923_o) = F.p2923;
(*F.p2924_o) = F.p2924;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2929_CheckUnresolved(void * a_p2930, void * a_p2931, rt_int a_p2932) {
struct yf2933 F;
memset((void *)&F, 0, sizeof F);
F.p2930 = a_p2930;
F.p2931 = a_p2931;
F.p2932 = a_p2932;
if ((((!(((*(yR104 *)rt_nil_check(F.p2930))).f_kind == v827))) || ((!(((*(yR104 *)rt_nil_check(F.p2931))).f_kind == v806))))) {
return;
}
F.v6597 = ((*(yR104 *)rt_nil_check(F.p2931))).f_idx;
while ((!(F.v6597 == ((void *)0)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6597))).f_kind == v788))) {
yr1162_FailS(F.p2932, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v6597 = ((*(yR104 *)rt_nil_check(F.v6597))).f_link;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2937_SameAsFormal(void * a_p2938, void * a_p2939) {
struct yf2940 F;
memset((void *)&F, 0, sizeof F);
F.p2938 = a_p2938;
F.p2939 = a_p2939;
if ((((*(yR104 *)rt_nil_check(F.p2938))).f_kind == v839)) {
{ rt_int rv6603 = 1;
return rv6603; }
}
if ((((*(yR104 *)rt_nil_check(F.p2938))).f_kind == v827)) {
if ((!((((((*(yR104 *)rt_nil_check(F.p2939))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2939))).f_kind == v827)))))) {
{ rt_int rv6605 = 0;
return rv6605; }
}
{ rt_int rv6606 = yr2419_Identical(((*(yR104 *)rt_nil_check(F.p2938))).f_elem, ((*(yR104 *)rt_nil_check(F.p2939))).f_elem);
return rv6606; }
}
{ rt_int rv6607 = yr2419_Identical(F.p2938, F.p2939);
return rv6607; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2944_CallCode(void * a_p2945, rt_int a_p2946, rt_int a_p2947, rt_int a_p2948) {
struct yf2949 F;
memset((void *)&F, 0, sizeof F);
F.p2945 = a_p2945;
F.p2946 = a_p2946;
F.p2947 = a_p2947;
F.p2948 = a_p2948;
F.v6614 = ((*(yR119 *)rt_nil_check(F.p2945))).f_params;
F.v6616 = rt_range(rt_add(F.p2946, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6620 = 1;
F.v6623 = INT64_C(0);
F.v6626 = INT64_C(0);
F.v6629 = INT64_C(0);
F.v6632 = INT64_C(0);
F.v6635 = INT64_C(0);
if ((!(F.p2947 == ((*(yR119 *)rt_nil_check(F.p2945))).f_nparams))) {
yr1170_FailN(F.p2948, ((*(yR119 *)rt_nil_check(F.p2945))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr1010_SB();
yr1028_ST(((*(yR119 *)rt_nil_check(F.p2945))).f_cname);
yr1021_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.p2945))).f_level > INT64_C(1))) {
yr1028_ST(yr2272_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p2945))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6620 = 0;
}
while ((!(F.v6614 == ((void *)0)))) {
if ((!F.v6620)) {
yr1021_SA(y_str(", ", 2));
}
F.v6620 = 0;
if ((!yr2899_Fits(((*(yR114 *)rt_nil_check(F.v6614))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v6616)]))) {
v911 = 0;
yr2384_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6614))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v6616)]);
}
yr2929_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v6614))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v6616)], ((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v6614))).f_cls == v881)) {
yr1028_ST(yr2733_Convert(((rt_int *)(v1472).p)[y_ix1(v1472, F.v6616)], ((*(yR114 *)rt_nil_check(F.v6614))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v6616)]));
} else {
if ((!yr2761_IsVariable(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]))) {
v911 = 0;
yr1170_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6614))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2767_CheckPure(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]);
if (yr2937_SameAsFormal(((*(yR114 *)rt_nil_check(F.v6614))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v6616)])) {
yr1021_SA(y_str("&", 1));
yr1028_ST(((rt_int *)(v1472).p)[y_ix1(v1472, F.v6616)]);
} else if ((((*(yR114 *)rt_nil_check(F.v6614))).f_cls == v887)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6614))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v6629 = yr1184_Fresh(y_str("yo", 2));
F.v6623 = yr3148_Join(F.v6623, yr3148_Join(yr2359_CType(((*(yR114 *)rt_nil_check(F.v6614))).f_rep), yr1045_T(y_str(" ", 1)), F.v6629), yr1045_T(y_str(";", 1)));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6614))).f_rep))).f_kind == v827)) {
F.v6623 = yr3148_Join(F.v6623, yr3148_Join(yr1045_T(y_str(" ", 1)), F.v6629, yr1045_T(y_str(" = y_like(", 10))), yr3148_Join(((rt_int *)(v1472).p)[y_ix1(v1472, F.v6616)], yr3148_Join(yr1045_T(y_str(", ", 2)), yr2953_Num(((*(yR104 *)rt_nil_check(((void * *)(v1483).p)[y_ix1(v1483, F.v6616)]))).f_nidx), yr1045_T(y_str(", ", 2))), yr3148_Join(yr2365_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6614))).f_rep))).f_elem), yr1045_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2334_Deep(((*(yR114 *)rt_nil_check(F.v6614))).f_rep)) {
F.v6623 = yr3148_Join(F.v6623, yr3148_Join(yr1045_T(y_str(" y_init(", 8)), yr2365_DescOf(((*(yR114 *)rt_nil_check(F.v6614))).f_rep), yr1045_T(y_str(", &", 3))), yr3148_Join(F.v6629, yr1045_T(y_str(");", 2)), INT64_C(0)));
}
F.v6626 = yr3148_Join(F.v6626, yr1045_T(y_str(" ", 1)), yr2741_StoreText(((rt_int *)(v1472).p)[y_ix1(v1472, F.v6616)], ((void * *)(v1483).p)[y_ix1(v1483, F.v6616)], F.v6629, ((*(yR114 *)rt_nil_check(F.v6614))).f_rep, ((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v6616)]))).f_line));
yr1021_SA(y_str("&", 1));
yr1028_ST(F.v6629);
}
}
F.v6616 = rt_range(rt_add(F.v6616, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6614 = ((*(yR114 *)rt_nil_check(F.v6614))).f_next;
}
yr1021_SA(y_str(")", 1));
v1496 = F.p2946;
F.v6632 = yr1040_SE();
if ((F.v6623 == INT64_C(0))) {
{ rt_int rv6669 = F.v6632;
return rv6669; }
}
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(F.v6623);
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2945))).f_ret))).f_kind == v836)) {
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6632);
yr1021_SA(y_str(";", 1));
yr1028_ST(F.v6626);
yr1021_SA(y_str(" })", 3));
} else {
F.v6635 = yr1184_Fresh(y_str("yv", 2));
yr1021_SA(y_str(" ", 1));
yr1028_ST(yr2359_CType(((*(yR119 *)rt_nil_check(F.p2945))).f_ret));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6635);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.v6632);
yr1021_SA(y_str(";", 1));
yr1028_ST(F.v6626);
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6635);
yr1021_SA(y_str("; })", 4));
}
{ rt_int rv6681 = yr1040_SE();
return rv6681; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2953_Num(rt_int a_p2954) {
struct yf2955 F;
memset((void *)&F, 0, sizeof F);
F.p2954 = a_p2954;
yr1010_SB();
yr1034_SI(F.p2954);
{ rt_int rv6684 = yr1040_SE();
return rv6684; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2959_UserOp(void * a_p2960, rt_int a_p2961, void * a_p2962, void * a_p2963, rt_int * a_p2964, void * * a_p2965) {
struct yf2966 F;
memset((void *)&F, 0, sizeof F);
F.p2960 = a_p2960;
F.p2961 = a_p2961;
F.p2962 = a_p2962;
F.p2963 = a_p2963;
F.p2964_o = a_p2964;
F.p2965_o = a_p2965;
F.v6693 = yr2193_Find(F.p2961);
if ((F.v6693 == ((void *)0))) {
{ rt_int rv6701 = 0;
(*F.p2964_o) = F.p2964;
(*F.p2965_o) = F.p2965;
return rv6701; }
}
F.v6693 = yr2291_Real(F.v6693);
if ((!(((*(yR119 *)rt_nil_check(F.v6693))).f_kind == v860))) {
{ rt_int rv6703 = 0;
(*F.p2964_o) = F.p2964;
(*F.p2965_o) = F.p2965;
return rv6703; }
}
((*(yR99 *)rt_nil_check(F.p2962))).f_next = F.p2963;
if ((!(F.p2963 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.p2963))).f_next = ((void *)0);
}
yr2920_CompileArgs(F.p2962, ((void *)0), &F.v6697, &F.v6699);
F.v6695 = yr2906_Choose(F.v6693, F.v6697, F.v6699);
if ((F.v6695 == ((void *)0))) {
v1496 = F.v6697;
if (yr2914_HidesStandard(F.v6693)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2960))).f_line, F.p2961, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv6706 = 0;
(*F.p2964_o) = F.p2964;
(*F.p2965_o) = F.p2965;
return rv6706; }
}
yr2970_NoteCall(F.v6695, ((*(yR99 *)rt_nil_check(F.p2960))).f_line);
F.p2964 = yr2944_CallCode(F.v6695, F.v6697, F.v6699, ((*(yR99 *)rt_nil_check(F.p2960))).f_line);
F.p2965 = ((*(yR119 *)rt_nil_check(F.v6695))).f_ret;
{ rt_int rv6708 = 1;
(*F.p2964_o) = F.p2964;
(*F.p2965_o) = F.p2965;
return rv6708; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2970_NoteCall(void * a_p2971, rt_int a_p2972) {
struct yf2973 F;
memset((void *)&F, 0, sizeof F);
F.p2971 = a_p2971;
F.p2972 = a_p2972;
if ((!((*(yR119 *)rt_nil_check(F.p2971))).f_func)) {
v1617 = rt_range(rt_add(v1617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1585 == ((void *)0))) {
return;
}
F.v6713 = yr1849_NewNode(v653, F.p2972);
((*(yR99 *)rt_nil_check(F.v6713))).f_sym = F.p2971;
((*(yR99 *)rt_nil_check(F.v6713))).f_next = ((*(yR119 *)rt_nil_check(v1585))).f_calls;
((*(yR119 *)rt_nil_check(v1585))).f_calls = F.v6713;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2977_UserAssign(rt_int a_p2978, void * a_p2979, rt_int a_p2980, void * a_p2981, rt_int a_p2982) {
struct yf2983 F;
memset((void *)&F, 0, sizeof F);
F.p2978 = a_p2978;
F.p2979 = a_p2979;
F.p2980 = a_p2980;
F.p2981 = a_p2981;
F.p2982 = a_p2982;
F.v6723 = yr2193_Find(rt_range(v515, INT64_C(0), INT64_C(4000000)));
if ((F.v6723 == ((void *)0))) {
{ rt_int rv6733 = INT64_C(0);
return rv6733; }
}
F.v6723 = yr2291_Real(F.v6723);
if ((!(((*(yR119 *)rt_nil_check(F.v6723))).f_kind == v860))) {
{ rt_int rv6735 = INT64_C(0);
return rv6735; }
}
F.v6725 = F.v6723;
while ((!(F.v6725 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6725))).f_nparams == INT64_C(2))) {
F.v6727 = ((*(yR119 *)rt_nil_check(F.v6725))).f_params;
F.v6729 = ((*(yR114 *)rt_nil_check(F.v6727))).f_next;
if ((((((!(((*(yR114 *)rt_nil_check(F.v6727))).f_cls == v881))) && ((((*(yR114 *)rt_nil_check(F.v6729))).f_cls == v881))) && yr2377_SameType(((*(yR114 *)rt_nil_check(F.v6727))).f_rep, F.p2979)) && yr2377_SameType(((*(yR114 *)rt_nil_check(F.v6729))).f_rep, F.p2981))) {
if ((v1585 == F.v6725)) {
{ rt_int rv6738 = INT64_C(0);
return rv6738; }
}
yr2970_NoteCall(F.v6725, F.p2982);
yr1010_SB();
if (yr2419_Identical(((*(yR114 *)rt_nil_check(F.v6727))).f_rep, F.p2979)) {
yr1028_ST(((*(yR119 *)rt_nil_check(F.v6725))).f_cname);
yr1021_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6725))).f_level > INT64_C(1))) {
yr1028_ST(yr2272_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6725))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1021_SA(y_str(", ", 2));
}
yr1021_SA(y_str("&", 1));
yr1028_ST(F.p2978);
} else {
F.v6731 = yr1184_Fresh(y_str("yo", 2));
yr1021_SA(y_str("{ ", 2));
yr1028_ST(yr2359_CType(((*(yR114 *)rt_nil_check(F.v6727))).f_rep));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6731);
yr1021_SA(y_str(";", 1));
if (yr2334_Deep(((*(yR114 *)rt_nil_check(F.v6727))).f_rep)) {
yr1021_SA(y_str(" y_init(", 8));
yr1028_ST(yr2365_DescOf(((*(yR114 *)rt_nil_check(F.v6727))).f_rep));
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6731);
yr1021_SA(y_str(");", 2));
}
yr1021_SA(y_str(" ", 1));
yr1028_ST(((*(yR119 *)rt_nil_check(F.v6725))).f_cname);
yr1021_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6725))).f_level > INT64_C(1))) {
yr1028_ST(yr2272_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6725))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1021_SA(y_str(", ", 2));
}
yr1021_SA(y_str("&", 1));
yr1028_ST(F.v6731);
}
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2733_Convert(F.p2980, ((*(yR114 *)rt_nil_check(F.v6729))).f_rep, F.p2981));
yr1021_SA(y_str(");", 2));
if ((!yr2419_Identical(((*(yR114 *)rt_nil_check(F.v6727))).f_rep, F.p2979))) {
yr1021_SA(y_str(" ", 1));
yr1028_ST(yr2741_StoreText(F.p2978, F.p2979, F.v6731, ((*(yR114 *)rt_nil_check(F.v6727))).f_rep, F.p2982));
yr1021_SA(y_str(" }", 2));
}
{ rt_int rv6763 = yr1040_SE();
return rv6763; }
}
}
F.v6725 = ((*(yR119 *)rt_nil_check(F.v6725))).f_alt;
}
{ rt_int rv6765 = INT64_C(0);
return rv6765; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2987_Assign(rt_int a_p2988, void * a_p2989, rt_int a_p2990, void * a_p2991, rt_int a_p2992) {
struct yf2993 F;
memset((void *)&F, 0, sizeof F);
F.p2988 = a_p2988;
F.p2989 = a_p2989;
F.p2990 = a_p2990;
F.p2991 = a_p2991;
F.p2992 = a_p2992;
F.v6773 = yr2977_UserAssign(F.p2988, F.p2989, F.p2990, F.p2991, F.p2992);
if ((!(F.v6773 == INT64_C(0)))) {
yr1116_Emit(F.v6773);
} else {
yr2751_Store(F.p2988, F.p2989, F.p2990, F.p2991, F.p2992);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2997_CallExpr(void * a_p2998, void * a_p2999, rt_int a_p3000, rt_int * a_p3001, void * * a_p3002) {
struct yf3003 F;
memset((void *)&F, 0, sizeof F);
F.p2998 = a_p2998;
F.p2999 = a_p2999;
F.p3000 = a_p3000;
F.p3001_o = a_p3001;
F.p3002_o = a_p3002;
F.v6782 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p2998))).f_name, ((*(yR99 *)rt_nil_check(F.p2998))).f_line));
if ((((*(yR119 *)rt_nil_check(F.v6782))).f_kind == v875)) {
yr3518_StdCall(((*(yR119 *)rt_nil_check(F.v6782))).f_mval, F.p2998, F.p3000, &F.p3001, &F.p3002);
(*F.p3001_o) = F.p3001;
(*F.p3002_o) = F.p3002;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6782))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v6782))).f_kind == v854)))) {
if (F.p3000) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p2998))).f_line, y_str("a value is not a statement", 26));
}
yr3007_Denote(((*(yR119 *)rt_nil_check(F.v6782))).f_rep, F.p2998, &F.p3001, &F.p3002);
(*F.p3001_o) = F.p3001;
(*F.p3002_o) = F.p3002;
return;
}
if ((!(((*(yR119 *)rt_nil_check(F.v6782))).f_kind == v860))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2998))).f_line, ((*(yR99 *)rt_nil_check(F.p2998))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR119 *)rt_nil_check(F.v6782))).f_alt == ((void *)0))) {
yr2920_CompileArgs(((*(yR99 *)rt_nil_check(F.p2998))).f_a, F.v6782, &F.v6786, &F.v6788);
F.v6784 = F.v6782;
} else {
yr2920_CompileArgs(((*(yR99 *)rt_nil_check(F.p2998))).f_a, ((void *)0), &F.v6786, &F.v6788);
F.v6784 = yr2906_Choose(F.v6782, F.v6786, F.v6788);
if ((F.v6784 == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2998))).f_line, ((*(yR99 *)rt_nil_check(F.p2998))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr2970_NoteCall(F.v6784, ((*(yR99 *)rt_nil_check(F.p2998))).f_line);
F.p3001 = yr2944_CallCode(F.v6784, F.v6786, F.v6788, ((*(yR99 *)rt_nil_check(F.p2998))).f_line);
F.p3002 = ((*(yR119 *)rt_nil_check(F.v6784))).f_ret;
if ((F.p3000 && ((!(((*(yR104 *)rt_nil_check(F.p3002))).f_kind == v836))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2998))).f_line, ((*(yR99 *)rt_nil_check(F.p2998))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3000) && ((((*(yR104 *)rt_nil_check(F.p3002))).f_kind == v836)))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p2998))).f_line, ((*(yR99 *)rt_nil_check(F.p2998))).f_name, y_str(" returns no value", 17));
}
(*F.p3001_o) = F.p3001;
(*F.p3002_o) = F.p3002;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3007_Denote(void * a_p3008, void * a_p3009, rt_int * a_p3010, void * * a_p3011) {
struct yf3012 F;
memset((void *)&F, 0, sizeof F);
F.p3008 = a_p3008;
F.p3009 = a_p3009;
F.p3010_o = a_p3010;
F.p3011_o = a_p3011;
F.v6800 = ((*(yR99 *)rt_nil_check(F.p3009))).f_a;
F.v6820 = INT64_C(0);
F.v6827 = 1;
F.p3011 = F.p3008;
if (((*(yR104 *)rt_nil_check(F.p3008))).f_abstract) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3009))).f_line, ((*(yR104 *)rt_nil_check(F.p3008))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR104 *)rt_nil_check(F.p3008))).f_kind == v809)) {
if (((*(yR104 *)rt_nil_check(F.p3008))).f_opaque) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3009))).f_line, ((*(yR104 *)rt_nil_check(F.p3008))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1010_SB();
yr1021_SA(y_str("((", 2));
yr1028_ST(((*(yR104 *)rt_nil_check(F.p3008))).f_cname);
yr1021_SA(y_str("){ ", 3));
F.v6806 = yr1040_SE();
F.v6802 = ((*(yR104 *)rt_nil_check(F.p3008))).f_fields;
while ((!(F.v6802 == ((void *)0)))) {
if ((((((*(yR109 *)rt_nil_check(F.v6802))).f_variant == INT64_C(0))) || ((((*(yR109 *)rt_nil_check(F.v6802))).f_variant == F.v6820)))) {
if ((F.v6800 == ((void *)0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3009))).f_line, y_str("too few components in this record value", 39));
}
yr2800_Expr(F.v6800, ((*(yR109 *)rt_nil_check(F.v6802))).f_rep, &F.v6804, &F.v6810);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v6800))).f_line, ((*(yR109 *)rt_nil_check(F.v6802))).f_rep, F.v6810);
if ((F.v6802 == ((*(yR104 *)rt_nil_check(F.p3008))).f_selector)) {
yr2652_Manifest(F.v6800, &F.v6818, &F.v6823);
if ((!F.v6818)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.v6800))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v6820 = yr3016_VariantOf(F.p3008, F.v6823, ((*(yR99 *)rt_nil_check(F.v6800))).f_line);
}
yr1010_SB();
yr1028_ST(F.v6806);
if ((!F.v6827)) {
yr1021_SA(y_str(", ", 2));
}
F.v6827 = 0;
yr1021_SA(y_str(".f_", 3));
yr1028_ST(((*(yR109 *)rt_nil_check(F.v6802))).f_name);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(F.v6804, ((*(yR109 *)rt_nil_check(F.v6802))).f_rep, F.v6810));
F.v6806 = yr1040_SE();
F.v6800 = ((*(yR99 *)rt_nil_check(F.v6800))).f_next;
}
F.v6802 = ((*(yR109 *)rt_nil_check(F.v6802))).f_next;
}
if ((!(F.v6800 == ((void *)0)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3009))).f_line, y_str("too many components in this record value", 40));
}
yr1010_SB();
yr1028_ST(F.v6806);
yr1021_SA(y_str(" })", 3));
F.p3010 = yr1040_SE();
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3008))).f_kind == v806)) {
F.v6812 = yr1864_Count(F.v6800);
F.v6806 = yr1184_Fresh(y_str("da", 2));
if ((F.v6812 == INT64_C(1))) {
yr2800_Expr(F.v6800, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, &F.v6804, &F.v6810);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v6800))).f_line, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, F.v6810);
F.v6808 = yr1184_Fresh(y_str("dv", 2));
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(yr2359_CType(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6808);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(F.v6804, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, F.v6810));
yr1021_SA(y_str("; y_fill(", 9));
yr1028_ST(yr2365_DescOf(F.p3008));
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6808);
yr1021_SA(y_str("); })", 5));
F.p3010 = yr1040_SE();
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return;
}
yr1010_SB();
yr1021_SA(y_str("({ yarr ", 8));
yr1028_ST(F.v6806);
yr1021_SA(y_str("; y_init(", 9));
yr1028_ST(yr2365_DescOf(F.p3008));
yr1021_SA(y_str(", &", 3));
yr1028_ST(F.v6806);
yr1021_SA(y_str("); if (y_count(", 15));
yr1028_ST(F.v6806);
yr1021_SA(y_str(", ", 2));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p3008))).f_nidx);
yr1021_SA(y_str(") != ", 5));
yr1034_SI(F.v6812);
yr1021_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1015_SC(34);
yr1021_SA(y_str("wrong number of components", 26));
yr1015_SC(34);
yr1021_SA(y_str(");", 2));
F.p3010 = yr1040_SE();
F.v6816 = INT64_C(0);
while ((!(F.v6800 == ((void *)0)))) {
yr2800_Expr(F.v6800, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, &F.v6804, &F.v6810);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v6800))).f_line, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, F.v6810);
yr1010_SB();
yr1028_ST(F.p3010);
if (yr2334_Deep(((*(yR104 *)rt_nil_check(F.p3008))).f_elem)) {
yr1021_SA(y_str(" { ", 3));
yr1028_ST(yr2359_CType(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(" dv = ", 6));
yr1028_ST(F.v6804);
yr1021_SA(y_str("; y_copy(", 9));
yr1028_ST(yr2365_DescOf(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(", &((", 5));
yr1028_ST(yr2359_CType(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(" *)", 3));
yr1028_ST(F.v6806);
yr1021_SA(y_str(".p)[", 4));
yr1034_SI(F.v6816);
yr1021_SA(y_str("], &dv); }", 10));
} else {
yr1021_SA(y_str(" ((", 3));
yr1028_ST(yr2359_CType(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(" *)", 3));
yr1028_ST(F.v6806);
yr1021_SA(y_str(".p)[", 4));
yr1034_SI(F.v6816);
yr1021_SA(y_str("] = ", 4));
yr1028_ST(yr2733_Convert(F.v6804, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, F.v6810));
yr1021_SA(y_str(";", 1));
}
F.p3010 = yr1040_SE();
F.v6816 = rt_range(rt_add(F.v6816, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6800 = ((*(yR99 *)rt_nil_check(F.v6800))).f_next;
}
yr1010_SB();
yr1028_ST(F.p3010);
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v6806);
yr1021_SA(y_str("; })", 4));
F.p3010 = yr1040_SE();
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3008))).f_kind == v818)) {
yr1010_SB();
yr1021_SA(y_str("y_set_new(", 10));
yr1028_ST(yr2440_LoText(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(", ", 2));
yr1028_ST(yr2446_HiText(((*(yR104 *)rt_nil_check(F.p3008))).f_elem));
yr1021_SA(y_str(")", 1));
F.p3010 = yr1040_SE();
while ((!(F.v6800 == ((void *)0)))) {
yr2800_Expr(F.v6800, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, &F.v6804, &F.v6810);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v6800))).f_line, ((*(yR104 *)rt_nil_check(F.p3008))).f_elem, F.v6810);
F.p3010 = yr2850_Call2(y_str("y_set_add", 9), F.p3010, F.v6804);
F.v6800 = ((*(yR99 *)rt_nil_check(F.v6800))).f_next;
}
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return;
}
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3009))).f_line, ((*(yR104 *)rt_nil_check(F.p3008))).f_tname, y_str(" has no denotations of values", 29));
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3016_VariantOf(void * a_p3017, rt_int a_p3018, rt_int a_p3019) {
struct yf3020 F;
memset((void *)&F, 0, sizeof F);
F.p3017 = a_p3017;
F.p3018 = a_p3018;
F.p3019 = a_p3019;
F.v6889 = ((*(yR104 *)rt_nil_check(F.p3017))).f_fields;
while ((!(F.v6889 == ((void *)0)))) {
if ((!(((*(yR109 *)rt_nil_check(F.v6889))).f_variant == INT64_C(0)))) {
F.v6891 = ((*(yR109 *)rt_nil_check(F.v6889))).f_labels;
while ((!(F.v6891 == ((void *)0)))) {
yr2652_Manifest(F.v6891, &F.v6893, &F.v6895);
if ((F.v6893 && ((F.v6895 == F.p3018)))) {
{ rt_int rv6897 = ((*(yR109 *)rt_nil_check(F.v6889))).f_variant;
return rv6897; }
}
F.v6891 = ((*(yR99 *)rt_nil_check(F.v6891))).f_next;
}
}
F.v6889 = ((*(yR109 *)rt_nil_check(F.v6889))).f_next;
}
{ rt_int rv6899 = INT64_C(-1);
return rv6899; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3024_Emit2(yarr a_p3026, rt_int a_p3027) {
struct yf3028 F;
memset((void *)&F, 0, sizeof F);
F.p3026 = a_p3026;
F.p3027 = a_p3027;
yr1010_SB();
yr1021_SA(F.p3026);
yr1028_ST(F.p3027);
F.v6904 = yr1040_SE();
yr1116_Emit(F.v6904);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3032_Emit3(yarr a_p3034, rt_int a_p3035, yarr a_p3037) {
struct yf3038 F;
memset((void *)&F, 0, sizeof F);
F.p3034 = a_p3034;
F.p3035 = a_p3035;
F.p3037 = a_p3037;
yr1010_SB();
yr1021_SA(F.p3034);
yr1028_ST(F.p3035);
yr1021_SA(F.p3037);
F.v6910 = yr1040_SE();
yr1116_Emit(F.v6910);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3042_PopTo(rt_int a_p3043) {
struct yf3044 F;
memset((void *)&F, 0, sizeof F);
F.p3043 = a_p3043;
if ((v1510 > F.p3043)) {
yr3032_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1508).p)[y_ix1(v1508, rt_add(F.p3043, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3048_LeaveBlock(void) {
struct yf3049 F;
memset((void *)&F, 0, sizeof F);
if ((v1538 > INT64_C(0))) {
if ((!(((rt_int *)(v1525).p)[y_ix1(v1525, v1538)] == INT64_C(0)))) {
yr3032_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1525).p)[y_ix1(v1525, v1538)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3053_RaiseCode(rt_int a_p3054) {
struct yf3055 F;
memset((void *)&F, 0, sizeof F);
F.p3054 = a_p3054;
yr1010_SB();
yr1021_SA(y_str("rt_raise(rt_exc(", 16));
yr1015_SC(34);
yr1028_ST(F.p3054);
yr1015_SC(34);
yr1021_SA(y_str("));", 3));
{ rt_int rv6928 = yr1040_SE();
return rv6928; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3059_BlockStatements(void * a_p3060) {
struct yf3061 F;
memset((void *)&F, 0, sizeof F);
F.p3060 = a_p3060;
F.v6944 = ((*(yR99 *)rt_nil_check(F.p3060))).f_a;
F.v6946 = INT64_C(0);
while ((!(F.v6944 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v6944))).f_kind == v629)) && ((F.v6946 == INT64_C(0))))) {
F.v6946 = yr1184_Fresh(y_str("xs", 2));
yr3032_Emit3(y_str("rt_frame *", 10), F.v6946, y_str(" = rt_xtop;", 11));
}
F.v6944 = ((*(yR99 *)rt_nil_check(F.v6944))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3060))).f_b == ((void *)0))) {
v1538 = rt_range(rt_add(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1525).p)[y_ix1(v1525, v1538)] = INT64_C(0);
((rt_int *)(v1536).p)[y_ix1(v1536, v1538)] = F.v6946;
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3060))).f_c);
v1538 = rt_range(rt_sub(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3180_CheckLabels(((*(yR99 *)rt_nil_check(F.p3060))).f_a);
return;
}
v1614 = 1;
F.v6932 = yr1184_Fresh(y_str("xf", 2));
yr3032_Emit3(y_str("{ rt_frame ", 11), F.v6932, y_str(";", 1));
yr3032_Emit3(y_str("if (RT_TRY(", 11), F.v6932, y_str(")) {", 4));
v1510 = rt_range(rt_add(v1510, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1508).p)[y_ix1(v1508, v1510)] = F.v6932;
v1538 = rt_range(rt_add(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1525).p)[y_ix1(v1525, v1538)] = F.v6932;
((rt_int *)(v1536).p)[y_ix1(v1536, v1538)] = F.v6946;
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3060))).f_c);
v1538 = rt_range(rt_sub(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1510 = rt_range(rt_sub(v1510, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3180_CheckLabels(((*(yR99 *)rt_nil_check(F.p3060))).f_a);
yr3032_Emit3(y_str("RT_POP(", 7), F.v6932, y_str(");", 2));
yr1122_EmitS(y_str("} else {", 8));
yr3032_Emit3(y_str("RT_POP(", 7), F.v6932, y_str(");", 2));
F.v6934 = yr1184_Fresh(y_str("xc", 2));
yr3032_Emit3(y_str("int ", 4), F.v6934, y_str(" = rt_xcur;", 11));
v1538 = rt_range(rt_add(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1525).p)[y_ix1(v1525, v1538)] = INT64_C(0);
((rt_int *)(v1536).p)[y_ix1(v1536, v1538)] = INT64_C(0);
v1552 = rt_range(rt_add(v1552, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1550).p)[y_ix1(v1550, v1552)] = F.v6934;
F.v6942 = 1;
F.v6938 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3060))).f_b))).f_a;
while ((!(F.v6938 == ((void *)0)))) {
yr1010_SB();
if (F.v6942) {
yr1021_SA(y_str("if (", 4));
} else {
yr1021_SA(y_str("} else if (", 11));
}
F.v6942 = 0;
F.v6940 = ((*(yR99 *)rt_nil_check(F.v6938))).f_a;
while ((!(F.v6940 == ((void *)0)))) {
yr1028_ST(F.v6934);
yr1021_SA(y_str(" == rt_exc(", 11));
yr1015_SC(34);
yr1028_ST(((*(yR99 *)rt_nil_check(F.v6940))).f_name);
yr1015_SC(34);
yr1021_SA(y_str(")", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v6940))).f_next == ((void *)0)))) {
yr1021_SA(y_str(" || ", 4));
}
F.v6940 = ((*(yR99 *)rt_nil_check(F.v6940))).f_next;
}
yr1021_SA(y_str(") {", 3));
F.v6936 = yr1040_SE();
yr1116_Emit(F.v6936);
yr3112_Statements(((*(yR99 *)rt_nil_check(F.v6938))).f_b);
F.v6938 = ((*(yR99 *)rt_nil_check(F.v6938))).f_next;
}
if ((!F.v6942)) {
yr1122_EmitS(y_str("} else {", 8));
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3060))).f_b))).f_flag == INT64_C(1))) {
yr3112_Statements(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3060))).f_b))).f_b);
} else {
yr3032_Emit3(y_str("rt_raise(", 9), F.v6934, y_str(");", 2));
}
if ((!F.v6942)) {
yr1122_EmitS(y_str("}", 1));
}
v1552 = rt_range(rt_sub(v1552, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1538 = rt_range(rt_sub(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1122_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3065_SameDesig(void * a_p3066, void * a_p3067) {
struct yf3068 F;
memset((void *)&F, 0, sizeof F);
F.p3066 = a_p3066;
F.p3067 = a_p3067;
if ((((*(yR99 *)rt_nil_check(F.p3066))).f_kind == v785)) {
{ rt_int rv7020 = yr3065_SameDesig(((*(yR99 *)rt_nil_check(F.p3066))).f_a, F.p3067);
return rv7020; }
}
if ((((*(yR99 *)rt_nil_check(F.p3067))).f_kind == v785)) {
{ rt_int rv7021 = yr3065_SameDesig(F.p3066, ((*(yR99 *)rt_nil_check(F.p3067))).f_a);
return rv7021; }
}
if ((!(((*(yR99 *)rt_nil_check(F.p3066))).f_kind == ((*(yR99 *)rt_nil_check(F.p3067))).f_kind))) {
{ rt_int rv7023 = 0;
return rv7023; }
}
if ((((*(yR99 *)rt_nil_check(F.p3066))).f_kind == v761)) {
{ rt_int rv7024 = ((((((*(yR99 *)rt_nil_check(F.p3066))).f_name == ((*(yR99 *)rt_nil_check(F.p3067))).f_name)) && ((((*(yR99 *)rt_nil_check(F.p3066))).f_d == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(F.p3067))).f_d == ((void *)0))));
return rv7024; }
}
if ((((*(yR99 *)rt_nil_check(F.p3066))).f_kind == v767)) {
{ rt_int rv7025 = (((((*(yR99 *)rt_nil_check(F.p3066))).f_name == ((*(yR99 *)rt_nil_check(F.p3067))).f_name)) && yr3065_SameDesig(((*(yR99 *)rt_nil_check(F.p3066))).f_a, ((*(yR99 *)rt_nil_check(F.p3067))).f_a));
return rv7025; }
}
if ((((*(yR99 *)rt_nil_check(F.p3066))).f_kind == v773)) {
{ rt_int rv7026 = yr3065_SameDesig(((*(yR99 *)rt_nil_check(F.p3066))).f_a, ((*(yR99 *)rt_nil_check(F.p3067))).f_a);
return rv7026; }
}
if ((((*(yR99 *)rt_nil_check(F.p3066))).f_kind == v770)) {
if ((!yr3065_SameDesig(((*(yR99 *)rt_nil_check(F.p3066))).f_a, ((*(yR99 *)rt_nil_check(F.p3067))).f_a))) {
{ rt_int rv7028 = 0;
return rv7028; }
}
F.v7009 = ((*(yR99 *)rt_nil_check(F.p3066))).f_b;
F.v7011 = ((*(yR99 *)rt_nil_check(F.p3067))).f_b;
while ((((!(F.v7009 == ((void *)0)))) && ((!(F.v7011 == ((void *)0)))))) {
yr2652_Manifest(F.v7009, &F.v7013, &F.v7017);
yr2652_Manifest(F.v7011, &F.v7015, &F.v7019);
if ((F.v7013 && F.v7015)) {
if ((!(F.v7017 == F.v7019))) {
{ rt_int rv7030 = 0;
return rv7030; }
}
} else if ((!yr3065_SameDesig(F.v7009, F.v7011))) {
{ rt_int rv7032 = 0;
return rv7032; }
}
F.v7009 = ((*(yR99 *)rt_nil_check(F.v7009))).f_next;
F.v7011 = ((*(yR99 *)rt_nil_check(F.v7011))).f_next;
}
{ rt_int rv7033 = (((F.v7009 == ((void *)0))) && ((F.v7011 == ((void *)0))));
return rv7033; }
}
{ rt_int rv7035 = 0;
return rv7035; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3072_CheckVariantSelected(void * a_p3073, void * a_p3074, void * a_p3075) {
struct yf3076 F;
memset((void *)&F, 0, sizeof F);
F.p3073 = a_p3073;
F.p3074 = a_p3074;
F.p3075 = a_p3075;
F.v7041 = v1600;
while ((F.v7041 > INT64_C(0))) {
F.v7043 = ((void * *)(v1596).p)[y_ix1(v1596, F.v7041)];
while ((((*(yR99 *)rt_nil_check(F.v7043))).f_kind == v785)) {
F.v7043 = ((*(yR99 *)rt_nil_check(F.v7043))).f_a;
}
if (((((((*(yR99 *)rt_nil_check(F.v7043))).f_kind == v767)) && ((((*(yR99 *)rt_nil_check(F.v7043))).f_name == ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3074))).f_selector))).f_name))) && yr3065_SameDesig(((*(yR99 *)rt_nil_check(F.v7043))).f_a, ((*(yR99 *)rt_nil_check(F.p3073))).f_a))) {
F.v7045 = ((void * *)(v1598).p)[y_ix1(v1598, F.v7041)];
if ((F.v7045 == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3073))).f_line, ((*(yR99 *)rt_nil_check(F.p3073))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v7045 == ((void *)0)))) {
F.v7049 = yr3124_Label(F.v7045, ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3074))).f_selector))).f_rep);
F.v7055 = 0;
F.v7047 = ((*(yR109 *)rt_nil_check(F.p3075))).f_labels;
while ((!(F.v7047 == ((void *)0)))) {
yr2652_Manifest(F.v7047, &F.v7053, &F.v7051);
if ((F.v7053 && ((F.v7051 == F.v7049)))) {
F.v7055 = 1;
}
F.v7047 = ((*(yR99 *)rt_nil_check(F.v7047))).f_next;
}
if ((!F.v7055)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3073))).f_line, ((*(yR99 *)rt_nil_check(F.p3073))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7045 = ((*(yR99 *)rt_nil_check(F.v7045))).f_next;
}
return;
}
F.v7041 = rt_range(rt_sub(F.v7041, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3073))).f_line, ((*(yR99 *)rt_nil_check(F.p3073))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3080_CheckCaseLabels(void * a_p3081, void * a_p3082) {
struct yf3083 F;
memset((void *)&F, 0, sizeof F);
F.p3081 = a_p3081;
F.p3082 = a_p3082;
F.v7068 = ((*(yR99 *)rt_nil_check(F.p3081))).f_b;
F.v7070 = ((*(yR99 *)rt_nil_check(F.p3081))).f_b;
F.v7072 = INT64_C(0);
F.v7075 = INT64_C(0);
while ((!(F.v7068 == ((void *)0)))) {
F.v7070 = ((*(yR99 *)rt_nil_check(F.v7068))).f_a;
while ((!(F.v7070 == ((void *)0)))) {
F.v7075 = yr3124_Label(F.v7070, F.p3082);
F.lo7080 = INT64_C(1);
F.hi7081 = F.v7072;
{ rt_int hi7085 = F.hi7081;
for (rt_int i7084 = F.lo7080; i7084 <= hi7085; i7084++) { F.c_7083 = i7084;
if ((((rt_int *)(v1612).p)[y_ix1(v1612, F.c_7083)] == F.v7075)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.v7070))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7084 == hi7085) break;
}}
if ((F.v7072 < INT64_C(4096))) {
F.v7072 = rt_range(rt_add(F.v7072, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1612).p)[y_ix1(v1612, F.v7072)] = F.v7075;
}
F.v7070 = ((*(yR99 *)rt_nil_check(F.v7070))).f_next;
}
F.v7068 = ((*(yR99 *)rt_nil_check(F.v7068))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3087_Falls(void * a_p3088) {
struct yf3089 F;
memset((void *)&F, 0, sizeof F);
F.p3088 = a_p3088;
F.v7093 = F.p3088;
F.v7095 = 1;
while ((!(F.v7093 == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7093))).f_text == INT64_C(0)))) {
F.v7095 = 1;
}
if (F.v7095) {
F.v7095 = yr3099_Completes(F.v7093);
}
F.v7093 = ((*(yR99 *)rt_nil_check(F.v7093))).f_next;
}
{ rt_int rv7099 = F.v7095;
return rv7099; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3093_BlockFalls(void * a_p3094) {
struct yf3095 F;
memset((void *)&F, 0, sizeof F);
F.p3094 = a_p3094;
if (yr3087_Falls(((*(yR99 *)rt_nil_check(F.p3094))).f_c)) {
{ rt_int rv7105 = 1;
return rv7105; }
}
if ((((*(yR99 *)rt_nil_check(F.p3094))).f_b == ((void *)0))) {
{ rt_int rv7107 = 0;
return rv7107; }
}
F.v7103 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3094))).f_b))).f_a;
while ((!(F.v7103 == ((void *)0)))) {
if (yr3087_Falls(((*(yR99 *)rt_nil_check(F.v7103))).f_b)) {
{ rt_int rv7109 = 1;
return rv7109; }
}
F.v7103 = ((*(yR99 *)rt_nil_check(F.v7103))).f_next;
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3094))).f_b))).f_flag == INT64_C(1))) {
{ rt_int rv7111 = yr3087_Falls(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3094))).f_b))).f_b);
return rv7111; }
}
{ rt_int rv7113 = 0;
return rv7113; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3099_Completes(void * a_p3100) {
struct yf3101 F;
memset((void *)&F, 0, sizeof F);
F.p3100 = a_p3100;
F.v7117 = ((*(yR99 *)rt_nil_check(F.p3100))).f_kind;
if (((((((F.v7117 == v713)) || ((F.v7117 == v716))) || ((F.v7117 == v719))) || ((F.v7117 == v707))) || ((F.v7117 == v710)))) {
{ rt_int rv7125 = 0;
return rv7125; }
}
if ((F.v7117 == v722)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3100))).f_flag == INT64_C(1)))) {
{ rt_int rv7128 = 1;
return rv7128; }
}
F.v7119 = ((*(yR99 *)rt_nil_check(F.p3100))).f_a;
while ((!(F.v7119 == ((void *)0)))) {
if (yr3087_Falls(((*(yR99 *)rt_nil_check(F.v7119))).f_b)) {
{ rt_int rv7130 = 1;
return rv7130; }
}
F.v7119 = ((*(yR99 *)rt_nil_check(F.v7119))).f_next;
}
{ rt_int rv7131 = yr3087_Falls(((*(yR99 *)rt_nil_check(F.p3100))).f_b);
return rv7131; }
}
if ((F.v7117 == v725)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3100))).f_flag == INT64_C(1)))) {
{ rt_int rv7134 = 1;
return rv7134; }
}
F.v7119 = ((*(yR99 *)rt_nil_check(F.p3100))).f_b;
while ((!(F.v7119 == ((void *)0)))) {
if (yr3087_Falls(((*(yR99 *)rt_nil_check(F.v7119))).f_b)) {
{ rt_int rv7136 = 1;
return rv7136; }
}
F.v7119 = ((*(yR99 *)rt_nil_check(F.v7119))).f_next;
}
{ rt_int rv7137 = yr3087_Falls(((*(yR99 *)rt_nil_check(F.p3100))).f_c);
return rv7137; }
}
if ((F.v7117 == v728)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p3100))).f_a, &F.v7121, &F.v7123);
{ rt_int rv7139 = (!((F.v7121 && ((F.v7123 == INT64_C(1))))));
return rv7139; }
}
if ((F.v7117 == v734)) {
{ rt_int rv7140 = yr3105_Exits(((*(yR99 *)rt_nil_check(F.p3100))).f_b, ((*(yR99 *)rt_nil_check(F.p3100))).f_name);
return rv7140; }
}
if ((F.v7117 == v737)) {
{ rt_int rv7141 = yr3093_BlockFalls(((*(yR99 *)rt_nil_check(F.p3100))).f_a);
return rv7141; }
}
{ rt_int rv7143 = 1;
return rv7143; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3105_Exits(void * a_p3106, rt_int a_p3107) {
struct yf3108 F;
memset((void *)&F, 0, sizeof F);
F.p3106 = a_p3106;
F.p3107 = a_p3107;
F.v7148 = F.p3106;
while ((!(F.v7148 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v710)) && ((((*(yR99 *)rt_nil_check(F.v7148))).f_name == F.p3107)))) {
{ rt_int rv7152 = 1;
return rv7152; }
}
if ((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v722)) {
F.v7150 = ((*(yR99 *)rt_nil_check(F.v7148))).f_a;
while ((!(F.v7150 == ((void *)0)))) {
if (yr3105_Exits(((*(yR99 *)rt_nil_check(F.v7150))).f_b, F.p3107)) {
{ rt_int rv7154 = 1;
return rv7154; }
}
F.v7150 = ((*(yR99 *)rt_nil_check(F.v7150))).f_next;
}
if (yr3105_Exits(((*(yR99 *)rt_nil_check(F.v7148))).f_b, F.p3107)) {
{ rt_int rv7156 = 1;
return rv7156; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v725)) {
F.v7150 = ((*(yR99 *)rt_nil_check(F.v7148))).f_b;
while ((!(F.v7150 == ((void *)0)))) {
if (yr3105_Exits(((*(yR99 *)rt_nil_check(F.v7150))).f_b, F.p3107)) {
{ rt_int rv7158 = 1;
return rv7158; }
}
F.v7150 = ((*(yR99 *)rt_nil_check(F.v7150))).f_next;
}
if (yr3105_Exits(((*(yR99 *)rt_nil_check(F.v7148))).f_c, F.p3107)) {
{ rt_int rv7160 = 1;
return rv7160; }
}
} else if (((((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v728)) || ((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v731))) || ((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v734)))) {
if (yr3105_Exits(((*(yR99 *)rt_nil_check(F.v7148))).f_b, F.p3107)) {
{ rt_int rv7162 = 1;
return rv7162; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7148))).f_kind == v737)) {
if (yr3105_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7148))).f_a))).f_c, F.p3107)) {
{ rt_int rv7164 = 1;
return rv7164; }
}
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7148))).f_a))).f_b == ((void *)0)))) {
F.v7150 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7148))).f_a))).f_b))).f_a;
while ((!(F.v7150 == ((void *)0)))) {
if (yr3105_Exits(((*(yR99 *)rt_nil_check(F.v7150))).f_b, F.p3107)) {
{ rt_int rv7166 = 1;
return rv7166; }
}
F.v7150 = ((*(yR99 *)rt_nil_check(F.v7150))).f_next;
}
if (yr3105_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7148))).f_a))).f_b))).f_b, F.p3107)) {
{ rt_int rv7168 = 1;
return rv7168; }
}
}
}
F.v7148 = ((*(yR99 *)rt_nil_check(F.v7148))).f_next;
}
{ rt_int rv7170 = 0;
return rv7170; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3112_Statements(void * a_p3113) {
struct yf3114 F;
memset((void *)&F, 0, sizeof F);
F.p3113 = a_p3113;
F.v7174 = F.p3113;
while ((!(F.v7174 == ((void *)0)))) {
yr3136_Statement(F.v7174);
F.v7174 = ((*(yR99 *)rt_nil_check(F.v7174))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3118_Cond(void * a_p3119) {
struct yf3120 F;
memset((void *)&F, 0, sizeof F);
F.p3119 = a_p3119;
yr2800_Expr(F.p3119, v1328, &F.v7178, &F.v7180);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3119))).f_line, v1328, F.v7180);
{ rt_int rv7181 = F.v7178;
return rv7181; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3124_Label(void * a_p3125, void * a_p3126) {
struct yf3127 F;
memset((void *)&F, 0, sizeof F);
F.p3125 = a_p3125;
F.p3126 = a_p3126;
if (((((((*(yR99 *)rt_nil_check(F.p3125))).f_kind == v761)) && ((((*(yR99 *)rt_nil_check(F.p3125))).f_d == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.p3126))).f_kind == v800)))) {
F.v7190 = yr2251_FindLit(((*(yR99 *)rt_nil_check(F.p3125))).f_name, F.p3126);
if ((!(F.v7190 == ((void *)0)))) {
{ rt_int rv7195 = ((*(yR119 *)rt_nil_check(yr2291_Real(F.v7190)))).f_mval;
return rv7195; }
}
}
yr2800_Expr(F.p3125, F.p3126, &F.v7194, &F.v7192);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3125))).f_line, F.p3126, F.v7192);
yr2652_Manifest(F.p3125, &F.v7186, &F.v7188);
if ((!F.v7186)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3125))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7197 = F.v7188;
return rv7197; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3131_CopyOut(void) {
struct yf3132 F;
memset((void *)&F, 0, sizeof F);
if ((v1585 == ((void *)0))) {
return;
}
F.v7200 = ((*(yR119 *)rt_nil_check(v1585))).f_params;
while ((!(F.v7200 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7200))).f_cls == v884)) {
yr1010_SB();
yr1021_SA(y_str("(*F.", 4));
yr1028_ST(((*(yR114 *)rt_nil_check(F.v7200))).f_cname);
yr1021_SA(y_str("_o)", 3));
F.v7202 = yr1040_SE();
yr2987_Assign(F.v7202, ((*(yR114 *)rt_nil_check(F.v7200))).f_rep, yr2265_Path(v1263, ((*(yR114 *)rt_nil_check(F.v7200))).f_cname), ((*(yR114 *)rt_nil_check(F.v7200))).f_rep, INT64_C(0));
}
F.v7200 = ((*(yR114 *)rt_nil_check(F.v7200))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3136_Statement(void * a_p3137) {
struct yf3138 F;
memset((void *)&F, 0, sizeof F);
F.p3137 = a_p3137;
F.v7209 = ((*(yR99 *)rt_nil_check(F.p3137))).f_kind;
v984 = ((*(yR99 *)rt_nil_check(F.p3137))).f_line;
if ((!(((*(yR99 *)rt_nil_check(F.p3137))).f_text == INT64_C(0)))) {
yr3168_PlaceLabel(F.p3137);
}
if ((F.v7209 == v698)) {
yr2773_LValue(((*(yR99 *)rt_nil_check(F.p3137))).f_a, &F.v7211, &F.v7223);
yr2767_CheckPure(((*(yR99 *)rt_nil_check(F.p3137))).f_a);
if ((((((*(yR104 *)rt_nil_check(F.v7223))).f_kind == v821)) || yr2347_HoldsSignal(F.v7223))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3137))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2353_NonAssignable(F.v7223)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3137))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p3137))).f_b, F.v7223, &F.v7213, &F.v7225);
F.v7215 = yr2977_UserAssign(F.v7211, F.v7223, F.v7213, F.v7225, ((*(yR99 *)rt_nil_check(F.p3137))).f_line);
if ((!(F.v7215 == INT64_C(0)))) {
yr1116_Emit(F.v7215);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7223))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7223))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3137))).f_line, ((*(yR104 *)rt_nil_check(F.v7223))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2751_Store(F.v7211, F.v7223, F.v7213, F.v7225, ((*(yR99 *)rt_nil_check(F.p3137))).f_line);
}
} else if ((F.v7209 == v701)) {
F.v7239 = yr2193_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3137))).f_a))).f_name);
if ((!(F.v7239 == ((void *)0)))) {
F.v7239 = yr2291_Real(F.v7239);
}
if ((((!(F.v7239 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7239))).f_kind == v869)))) {
yr3403_Activate(((*(yR99 *)rt_nil_check(F.p3137))).f_a, F.v7239);
} else {
yr2997_CallExpr(((*(yR99 *)rt_nil_check(F.p3137))).f_a, ((void *)0), 1, &F.v7211, &F.v7223);
yr3024_Emit2(y_str("", 0), F.v7211);
yr1010_SB();
yr1028_ST(F.v7211);
yr1021_SA(y_str(";", 1));
F.v7215 = yr1040_SE();
((*(yR129 *)rt_nil_check((v980).f_tail))).f_t = F.v7215;
}
} else if ((F.v7209 == v722)) {
F.v7231 = 1;
F.v7227 = ((*(yR99 *)rt_nil_check(F.p3137))).f_a;
while ((!(F.v7227 == ((void *)0)))) {
F.v7211 = yr3118_Cond(((*(yR99 *)rt_nil_check(F.v7227))).f_a);
if (F.v7231) {
yr3032_Emit3(y_str("if (", 4), F.v7211, y_str(") {", 3));
} else {
yr3032_Emit3(y_str("} else if (", 11), F.v7211, y_str(") {", 3));
}
F.v7231 = 0;
yr3112_Statements(((*(yR99 *)rt_nil_check(F.v7227))).f_b);
F.v7227 = ((*(yR99 *)rt_nil_check(F.v7227))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3137))).f_flag == INT64_C(1))) {
yr1122_EmitS(y_str("} else {", 8));
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3137))).f_b);
}
yr1122_EmitS(y_str("}", 1));
} else if ((F.v7209 == v728)) {
F.v7211 = yr3118_Cond(((*(yR99 *)rt_nil_check(F.p3137))).f_a);
yr3032_Emit3(y_str("while (", 7), F.v7211, y_str(") {", 3));
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3137))).f_b);
yr1122_EmitS(y_str("}", 1));
} else if ((F.v7209 == v734)) {
F.v7217 = yr1184_Fresh(y_str("yl_", 3));
v1579 = rt_range(rt_add(v1579, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1564).p)[y_ix1(v1564, v1579)] = ((*(yR99 *)rt_nil_check(F.p3137))).f_name;
((rt_int *)(v1566).p)[y_ix1(v1566, v1579)] = F.v7217;
((rt_int *)(v1577).p)[y_ix1(v1577, v1579)] = v1510;
yr1122_EmitS(y_str("for (;;) {", 10));
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3137))).f_b);
yr1122_EmitS(y_str("}", 1));
yr3032_Emit3(y_str("", 0), F.v7217, y_str(": ;", 3));
v1579 = rt_range(rt_sub(v1579, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7209 == v710)) {
F.v7233 = 0;
F.v7235 = v1579;
while ((((F.v7235 > v1582)) && (!F.v7233))) {
if ((((rt_int *)(v1564).p)[y_ix1(v1564, F.v7235)] == ((*(yR99 *)rt_nil_check(F.p3137))).f_name)) {
F.v7233 = 1;
yr3042_PopTo(((rt_int *)(v1577).p)[y_ix1(v1577, F.v7235)]);
yr3032_Emit3(y_str("goto ", 5), ((rt_int *)(v1566).p)[y_ix1(v1566, F.v7235)], y_str(";", 1));
}
F.v7235 = rt_range(rt_sub(F.v7235, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7233)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3137))).f_line, ((*(yR99 *)rt_nil_check(F.p3137))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7209 == v731)) {
yr3142_ForStatement(F.p3137);
} else if ((F.v7209 == v725)) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p3137))).f_a, ((void *)0), &F.v7211, &F.v7223);
if ((!yr2310_IsDiscrete(F.v7223))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3137))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3080_CheckCaseLabels(F.p3137, F.v7223);
yr3032_Emit3(y_str("switch (", 8), F.v7211, y_str(") {", 3));
F.v7227 = ((*(yR99 *)rt_nil_check(F.p3137))).f_b;
while ((!(F.v7227 == ((void *)0)))) {
F.v7229 = ((*(yR99 *)rt_nil_check(F.v7227))).f_a;
while ((!(F.v7229 == ((void *)0)))) {
F.v7237 = yr3124_Label(F.v7229, F.v7223);
yr1010_SB();
yr1021_SA(y_str("case ", 5));
yr1034_SI(F.v7237);
yr1021_SA(y_str(":", 1));
F.v7215 = yr1040_SE();
yr1116_Emit(F.v7215);
F.v7229 = ((*(yR99 *)rt_nil_check(F.v7229))).f_next;
}
yr1122_EmitS(y_str("{", 1));
v1600 = rt_range(rt_add(v1600, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1596).p)[y_ix1(v1596, v1600)] = ((*(yR99 *)rt_nil_check(F.p3137))).f_a;
((void * *)(v1598).p)[y_ix1(v1598, v1600)] = ((*(yR99 *)rt_nil_check(F.v7227))).f_a;
yr3112_Statements(((*(yR99 *)rt_nil_check(F.v7227))).f_b);
v1600 = rt_range(rt_sub(v1600, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1122_EmitS(y_str("} break;", 8));
F.v7227 = ((*(yR99 *)rt_nil_check(F.v7227))).f_next;
}
yr1122_EmitS(y_str("default: {", 10));
v1600 = rt_range(rt_add(v1600, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1596).p)[y_ix1(v1596, v1600)] = ((*(yR99 *)rt_nil_check(F.p3137))).f_a;
((void * *)(v1598).p)[y_ix1(v1598, v1600)] = ((void *)0);
if ((((*(yR99 *)rt_nil_check(F.p3137))).f_flag == INT64_C(1))) {
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3137))).f_c);
}
v1600 = rt_range(rt_sub(v1600, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1122_EmitS(y_str("} break;", 8));
yr1122_EmitS(y_str("}", 1));
} else if ((F.v7209 == v713)) {
yr3156_ReturnStatement(F.p3137);
} else if ((F.v7209 == v719)) {
if ((((*(yR99 *)rt_nil_check(F.p3137))).f_name == INT64_C(0))) {
if ((v1552 == INT64_C(0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3137))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3032_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1550).p)[y_ix1(v1550, v1552)], y_str(");", 2));
} else {
yr3048_LeaveBlock();
yr1116_Emit(yr3053_RaiseCode(((*(yR99 *)rt_nil_check(F.p3137))).f_name));
}
} else if ((F.v7209 == v704)) {
F.v7235 = v1617;
F.v7211 = yr3118_Cond(((*(yR99 *)rt_nil_check(F.p3137))).f_a);
if ((!(v1617 == F.v7235))) {
yr1148_Warn(((*(yR99 *)rt_nil_check(F.p3137))).f_line, yr1045_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3032_Emit3(y_str("if (!(", 6), F.v7211, y_str(")) {", 4));
yr3048_LeaveBlock();
yr1122_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7209 == v737)) {
yr3162_BeginStatement(F.p3137);
} else if ((F.v7209 == v716)) {
yr3427_TerminateStatement(F.p3137);
} else if ((F.v7209 == v707)) {
yr3174_GotoStatement(F.p3137);
} else {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3137))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3142_ForStatement(void * a_p3143) {
struct yf3144 F;
memset((void *)&F, 0, sizeof F);
F.p3143 = a_p3143;
F.v7311 = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p3143))).f_a, INT64_C(0), 0);
if ((((!yr2310_IsDiscrete(F.v7311)) || ((((*(yR104 *)rt_nil_check(F.v7311))).f_kind == v797))) || ((((((*(yR104 *)rt_nil_check(F.v7311))).f_kind == v800)) && (!((*(yR104 *)rt_nil_check(F.v7311))).f_ordered))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3143))).f_line, y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2400_CheckRepresented(F.v7311, ((*(yR99 *)rt_nil_check(F.p3143))).f_line);
yr2170_OpenScope(0);
F.v7319 = yr2163_NewSym(v848, ((*(yR99 *)rt_nil_check(F.p3143))).f_name);
((*(yR119 *)rt_nil_check(F.v7319))).f_rep = F.v7311;
((*(yR119 *)rt_nil_check(F.v7319))).f_level = v1263;
((*(yR119 *)rt_nil_check(F.v7319))).f_cname = yr1184_Fresh(y_str("c_", 2));
yr2278_DeclStorage(yr1045_T(y_str("rt_int", 6)), ((*(yR119 *)rt_nil_check(F.v7319))).f_cname);
yr2258_Define(F.v7319, ((*(yR99 *)rt_nil_check(F.p3143))).f_line);
F.v7313 = yr1184_Fresh(y_str("i", 1));
F.v7315 = yr1184_Fresh(y_str("hi", 2));
yr1010_SB();
yr1021_SA(y_str("{ rt_int ", 9));
yr1028_ST(F.v7315);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2446_HiText(F.v7311));
yr1021_SA(y_str(";", 1));
F.v7317 = yr1040_SE();
yr1116_Emit(F.v7317);
yr1010_SB();
yr1021_SA(y_str("for (rt_int ", 12));
yr1028_ST(F.v7313);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2440_LoText(F.v7311));
yr1021_SA(y_str("; ", 2));
yr1028_ST(F.v7313);
yr1021_SA(y_str(" <= ", 4));
yr1028_ST(F.v7315);
yr1021_SA(y_str("; ", 2));
yr1028_ST(F.v7313);
yr1021_SA(y_str("++) { ", 6));
yr1028_ST(yr2285_SymPath(F.v7319));
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.v7313);
yr1021_SA(y_str(";", 1));
F.v7317 = yr1040_SE();
yr1116_Emit(F.v7317);
yr3112_Statements(((*(yR99 *)rt_nil_check(F.p3143))).f_b);
yr3032_Emit3(y_str("if (", 4), F.v7313, y_str(" == ", 4));
((*(yR129 *)rt_nil_check((v980).f_tail))).f_t = yr3148_Join(((*(yR129 *)rt_nil_check((v980).f_tail))).f_t, F.v7315, yr1045_T(y_str(") break;", 8)));
yr1122_EmitS(y_str("}}", 2));
yr2182_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3148_Join(rt_int a_p3149, rt_int a_p3150, rt_int a_p3151) {
struct yf3152 F;
memset((void *)&F, 0, sizeof F);
F.p3149 = a_p3149;
F.p3150 = a_p3150;
F.p3151 = a_p3151;
yr1010_SB();
yr1028_ST(F.p3149);
yr1028_ST(F.p3150);
yr1028_ST(F.p3151);
{ rt_int rv7347 = yr1040_SE();
return rv7347; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3156_ReturnStatement(void * a_p3157) {
struct yf3158 F;
memset((void *)&F, 0, sizeof F);
F.p3157 = a_p3157;
if ((v1585 == ((void *)0))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3157))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR119 *)rt_nil_check(v1585))).f_kind == v869)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3157))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v7359 = ((*(yR119 *)rt_nil_check(v1585))).f_ret;
if ((((*(yR99 *)rt_nil_check(F.p3157))).f_a == ((void *)0))) {
if ((!(((*(yR104 *)rt_nil_check(F.v7359))).f_kind == v836))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3157))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3131_CopyOut();
yr3422_LeaveMonitor();
yr3042_PopTo(v1513);
yr1122_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR104 *)rt_nil_check(F.v7359))).f_kind == v836)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3157))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p3157))).f_a, F.v7359, &F.v7351, &F.v7357);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3157))).f_line, F.v7359, F.v7357);
F.v7355 = yr1184_Fresh(y_str("rv", 2));
yr1010_SB();
yr1021_SA(y_str("{ ", 2));
yr1028_ST(yr2359_CType(F.v7359));
yr1021_SA(y_str(" ", 1));
yr1028_ST(F.v7355);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(F.v7351, F.v7359, F.v7357));
yr1021_SA(y_str(";", 1));
F.v7353 = yr1040_SE();
yr1116_Emit(F.v7353);
yr3131_CopyOut();
yr3422_LeaveMonitor();
yr3042_PopTo(v1513);
yr3032_Emit3(y_str("return ", 7), F.v7355, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3162_BeginStatement(void * a_p3163) {
struct yf3164 F;
memset((void *)&F, 0, sizeof F);
F.p3163 = a_p3163;
yr1122_EmitS(y_str("{", 1));
yr2170_OpenScope(0);
yr3274_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3163))).f_a))).f_a);
yr3059_BlockStatements(((*(yR99 *)rt_nil_check(F.p3163))).f_a);
yr3398_AwaitProcesses();
yr2182_CloseScope();
yr1122_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3168_PlaceLabel(void * a_p3169) {
struct yf3170 F;
memset((void *)&F, 0, sizeof F);
F.p3169 = a_p3169;
F.v7380 = yr2199_FindHere(((*(yR99 *)rt_nil_check(F.p3169))).f_text);
if ((((F.v7380 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v7380))).f_kind == v872))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3169))).f_line, ((*(yR99 *)rt_nil_check(F.p3169))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR119 *)rt_nil_check(F.v7380))).f_hasmv) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3169))).f_line, ((*(yR99 *)rt_nil_check(F.p3169))).f_text, y_str(" labels two statements", 22));
}
((*(yR119 *)rt_nil_check(F.v7380))).f_hasmv = 1;
yr3032_Emit3(y_str("", 0), ((*(yR119 *)rt_nil_check(F.v7380))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1525).p)[y_ix1(v1525, v1538)] == INT64_C(0)))) {
yr3032_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1525).p)[y_ix1(v1525, v1538)], y_str(";", 1));
} else if ((!(((rt_int *)(v1536).p)[y_ix1(v1536, v1538)] == INT64_C(0)))) {
yr3032_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1536).p)[y_ix1(v1536, v1538)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3174_GotoStatement(void * a_p3175) {
struct yf3176 F;
memset((void *)&F, 0, sizeof F);
F.p3175 = a_p3175;
F.v7395 = yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p3175))).f_name, ((*(yR99 *)rt_nil_check(F.p3175))).f_line);
if ((!(((*(yR119 *)rt_nil_check(F.v7395))).f_kind == v872))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3175))).f_line, ((*(yR99 *)rt_nil_check(F.p3175))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR119 *)rt_nil_check(F.v7395))).f_level == v1263))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3175))).f_line, ((*(yR99 *)rt_nil_check(F.p3175))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR119 *)rt_nil_check(F.v7395))).f_readonly = 1;
yr3032_Emit3(y_str("goto ", 5), ((*(yR119 *)rt_nil_check(F.v7395))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3180_CheckLabels(void * a_p3181) {
struct yf3182 F;
memset((void *)&F, 0, sizeof F);
F.p3181 = a_p3181;
F.v7404 = F.p3181;
while ((!(F.v7404 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7404))).f_kind == v629)) {
F.v7406 = ((*(yR99 *)rt_nil_check(F.v7404))).f_a;
while ((!(F.v7406 == ((void *)0)))) {
F.v7408 = yr2199_FindHere(((*(yR99 *)rt_nil_check(F.v7406))).f_name);
if ((((((!(F.v7408 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7408))).f_kind == v872))) && ((*(yR119 *)rt_nil_check(F.v7408))).f_readonly) && (!((*(yR119 *)rt_nil_check(F.v7408))).f_hasmv))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.v7406))).f_line, ((*(yR99 *)rt_nil_check(F.v7406))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v7406 = ((*(yR99 *)rt_nil_check(F.v7406))).f_next;
}
}
F.v7404 = ((*(yR99 *)rt_nil_check(F.v7404))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3186_RoutineCName(rt_int a_p3187) {
struct yf3188 F;
memset((void *)&F, 0, sizeof F);
F.p3187 = a_p3187;
F.v7413 = yr1179_NewSerial();
F.v7415 = 1;
F.lo7420 = INT64_C(1);
F.hi7421 = ((rt_int *)(v904).p)[y_ix1(v904, F.p3187)];
{ rt_int hi7425 = F.hi7421;
for (rt_int i7424 = F.lo7420; i7424 <= hi7425; i7424++) { F.c_7423 = i7424;
if ((!((yr992_IsLetter(yr1087_TChar(F.p3187, rt_range(F.c_7423, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr998_IsDigit(yr1087_TChar(F.p3187, rt_range(F.c_7423, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v7415 = 0;
}
if (i7424 == hi7425) break;
}}
yr1010_SB();
yr1021_SA(y_str("yr", 2));
yr1034_SI(F.v7413);
if (F.v7415) {
yr1021_SA(y_str("_", 1));
yr1028_ST(F.p3187);
}
{ rt_int rv7429 = yr1040_SE();
return rv7429; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3192_FormalRep(void * a_p3193) {
struct yf3194 F;
memset((void *)&F, 0, sizeof F);
F.p3193 = a_p3193;
if ((((*(yR99 *)rt_nil_check(F.p3193))).f_kind == v680)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p3193))).f_a, &F.v7435, &F.v7437);
if ((((!F.v7435) || ((F.v7437 < INT64_C(1)))) || ((F.v7437 > INT64_C(4))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3193))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v7433 = yr2297_NewRep(v827, yr1045_T(y_str("length-unresolved array", 23)));
((*(yR104 *)rt_nil_check(F.v7433))).f_nidx = F.v7437;
((*(yR104 *)rt_nil_check(F.v7433))).f_elem = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p3193))).f_b, INT64_C(0), 0);
yr2400_CheckRepresented(((*(yR104 *)rt_nil_check(F.v7433))).f_elem, ((*(yR99 *)rt_nil_check(F.p3193))).f_line);
((*(yR104 *)rt_nil_check(F.v7433))).f_deep = 1;
{ void * rv7445 = F.v7433;
return rv7445; }
}
if ((((*(yR99 *)rt_nil_check(F.p3193))).f_kind == v683)) {
{ void * rv7447 = yr2297_NewRep(v839, yr1045_T(y_str("SPACE", 5)));
return rv7447; }
}
F.v7433 = yr2541_MakeRep(F.p3193, INT64_C(0), 0);
yr2400_CheckRepresented(F.v7433, ((*(yR99 *)rt_nil_check(F.p3193))).f_line);
{ void * rv7450 = F.v7433;
return rv7450; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3198_ParamCType(void * a_p3199) {
struct yf3200 F;
memset((void *)&F, 0, sizeof F);
F.p3199 = a_p3199;
F.v7454 = yr2359_CType(((*(yR114 *)rt_nil_check(F.p3199))).f_rep);
if ((((*(yR114 *)rt_nil_check(F.p3199))).f_cls == v881)) {
{ rt_int rv7455 = F.v7454;
return rv7455; }
}
yr1010_SB();
yr1028_ST(F.v7454);
yr1021_SA(y_str(" *", 2));
{ rt_int rv7457 = yr1040_SE();
return rv7457; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3204_RoutineHeader(void * a_p3205, rt_int a_p3206) {
struct yf3207 F;
memset((void *)&F, 0, sizeof F);
F.p3205 = a_p3205;
F.p3206 = a_p3206;
F.v7478 = 1;
F.v7462 = yr2163_NewSym(F.p3206, ((*(yR99 *)rt_nil_check(F.p3205))).f_name);
((*(yR119 *)rt_nil_check(F.v7462))).f_decl = F.p3205;
((*(yR119 *)rt_nil_check(F.v7462))).f_func = (((*(yR99 *)rt_nil_check(F.p3205))).f_flag == INT64_C(1));
((*(yR119 *)rt_nil_check(F.v7462))).f_level = rt_range(rt_add(v1263, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v7462))).f_cname = yr3186_RoutineCName(((*(yR99 *)rt_nil_check(F.p3205))).f_name);
if ((!(((*(yR99 *)rt_nil_check(F.p3205))).f_b == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v7462))).f_ret = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p3205))).f_b, INT64_C(0), 0);
yr2400_CheckRepresented(((*(yR119 *)rt_nil_check(F.v7462))).f_ret, ((*(yR99 *)rt_nil_check(F.p3205))).f_line);
} else {
((*(yR119 *)rt_nil_check(F.v7462))).f_ret = v1332;
if (((*(yR119 *)rt_nil_check(F.v7462))).f_func) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3205))).f_line, ((*(yR99 *)rt_nil_check(F.p3205))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v7472 = ((void *)0);
F.v7466 = ((*(yR99 *)rt_nil_check(F.p3205))).f_a;
while ((!(F.v7466 == ((void *)0)))) {
F.v7474 = yr3192_FormalRep(((*(yR99 *)rt_nil_check(F.v7466))).f_b);
if ((((*(yR119 *)rt_nil_check(F.v7462))).f_func && ((!(((*(yR99 *)rt_nil_check(F.v7466))).f_ival == v881))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.v7466))).f_line, ((*(yR99 *)rt_nil_check(F.p3205))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3206 == v869)) && ((((*(yR99 *)rt_nil_check(F.v7466))).f_ival == v884)))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.v7466))).f_line, ((*(yR99 *)rt_nil_check(F.p3205))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v7468 = ((*(yR99 *)rt_nil_check(F.v7466))).f_a;
while ((!(F.v7468 == ((void *)0)))) {
({ F.v7470 = rt_alloc(sizeof(yR114)); });
(*(yR114 *)rt_nil_check(F.v7470)) = ((yR114){ .f_name = ((*(yR99 *)rt_nil_check(F.v7468))).f_name, .f_cls = ((*(yR99 *)rt_nil_check(F.v7466))).f_ival, .f_rep = F.v7474, .f_cname = yr1184_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v7472 == ((void *)0))) {
((*(yR119 *)rt_nil_check(F.v7462))).f_params = F.v7470;
} else {
((*(yR114 *)rt_nil_check(F.v7472))).f_next = F.v7470;
}
F.v7472 = F.v7470;
((*(yR119 *)rt_nil_check(F.v7462))).f_nparams = rt_range(rt_add(((*(yR119 *)rt_nil_check(F.v7462))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7468 = ((*(yR99 *)rt_nil_check(F.v7468))).f_next;
}
F.v7466 = ((*(yR99 *)rt_nil_check(F.v7466))).f_next;
}
F.v7464 = yr2193_Find(((*(yR99 *)rt_nil_check(F.p3205))).f_name);
if ((!(F.v7464 == ((void *)0)))) {
F.v7464 = yr2291_Real(F.v7464);
}
if ((((((*(yR99 *)rt_nil_check(F.p3205))).f_ival == INT64_C(0))) && ((!(F.v7464 == ((void *)0)))))) {
if ((((*(yR119 *)rt_nil_check(F.v7464))).f_kind == v875)) {
yr1148_Warn(((*(yR99 *)rt_nil_check(F.p3205))).f_line, yr3148_Join(((*(yR99 *)rt_nil_check(F.p3205))).f_name, yr1045_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(((*(yR99 *)rt_nil_check(F.p3205))).f_ival == INT64_C(0)))) && ((!(F.v7464 == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.v7464))).f_kind == v860)))) {
((*(yR119 *)rt_nil_check(F.v7462))).f_alt = F.v7464;
if ((((((*(yR99 *)rt_nil_check(F.p3205))).f_ival == v323)) && ((!(yr3211_SameSignature(F.v7462, F.v7464) == ((void *)0)))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3205))).f_line, ((*(yR99 *)rt_nil_check(F.p3205))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR99 *)rt_nil_check(F.p3205))).f_ival == v419)) && ((yr3211_SameSignature(F.v7462, F.v7464) == ((void *)0))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3205))).f_line, ((*(yR99 *)rt_nil_check(F.p3205))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR99 *)rt_nil_check(F.p3205))).f_sym = F.v7462;
yr2258_Define(F.v7462, ((*(yR99 *)rt_nil_check(F.p3205))).f_line);
((rt_int *)(v1275).p)[y_ix1(v1275, ((*(yR119 *)rt_nil_check(F.v7462))).f_level)] = yr1184_Fresh(y_str("yf", 2));
((*(yR119 *)rt_nil_check(F.v7462))).f_members = yr2163_NewSym(v875, ((rt_int *)(v1275).p)[y_ix1(v1275, ((*(yR119 *)rt_nil_check(F.v7462))).f_level)]);
yr1010_SB();
yr1021_SA(y_str("struct ", 7));
yr1028_ST(((rt_int *)(v1275).p)[y_ix1(v1275, ((*(yR119 *)rt_nil_check(F.v7462))).f_level)]);
yr1021_SA(y_str(";", 1));
F.v7476 = yr1040_SE();
yr1094_Put(&v962, F.v7476);
yr1010_SB();
yr1021_SA(y_str("static ", 7));
if ((F.p3206 == v869)) {
yr1021_SA(y_str("void", 4));
} else {
yr1028_ST(yr2359_CType(((*(yR119 *)rt_nil_check(F.v7462))).f_ret));
}
yr1021_SA(y_str(" ", 1));
yr1028_ST(((*(yR119 *)rt_nil_check(F.v7462))).f_cname);
yr1021_SA(y_str("(", 1));
F.v7476 = yr1040_SE();
if ((F.p3206 == v869)) {
F.v7476 = yr3148_Join(F.v7476, yr1045_T(y_str("void *arg", 9)), INT64_C(0));
F.v7478 = 0;
} else if ((v1263 > INT64_C(0))) {
yr1010_SB();
yr1028_ST(F.v7476);
yr1021_SA(y_str("struct ", 7));
yr1028_ST(((rt_int *)(v1275).p)[y_ix1(v1275, v1263)]);
yr1021_SA(y_str(" *up", 4));
F.v7476 = yr1040_SE();
F.v7478 = 0;
}
F.v7470 = ((*(yR119 *)rt_nil_check(F.v7462))).f_params;
while ((((!(F.v7470 == ((void *)0)))) && ((!(F.p3206 == v869))))) {
yr1010_SB();
yr1028_ST(F.v7476);
if ((!F.v7478)) {
yr1021_SA(y_str(", ", 2));
}
F.v7478 = 0;
yr1028_ST(yr3198_ParamCType(F.v7470));
yr1021_SA(y_str(" a_", 3));
yr1028_ST(((*(yR114 *)rt_nil_check(F.v7470))).f_cname);
F.v7476 = yr1040_SE();
F.v7470 = ((*(yR114 *)rt_nil_check(F.v7470))).f_next;
}
if (F.v7478) {
F.v7476 = yr3148_Join(F.v7476, yr1045_T(y_str("void", 4)), INT64_C(0));
}
F.v7476 = yr3148_Join(F.v7476, yr1045_T(y_str(")", 1)), INT64_C(0));
((*(yR119 *)rt_nil_check(F.v7462))).f_mnext = yr2163_NewSym(v875, F.v7476);
yr1094_Put(&v970, yr3148_Join(F.v7476, yr1045_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3211_SameSignature(void * a_p3212, void * a_p3213) {
struct yf3214 F;
memset((void *)&F, 0, sizeof F);
F.p3212 = a_p3212;
F.p3213 = a_p3213;
F.v7524 = F.p3213;
while ((!(F.v7524 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v7524))).f_nparams == ((*(yR119 *)rt_nil_check(F.p3212))).f_nparams)) {
F.v7530 = 1;
F.v7526 = ((*(yR119 *)rt_nil_check(F.p3212))).f_params;
F.v7528 = ((*(yR119 *)rt_nil_check(F.v7524))).f_params;
while ((!(F.v7526 == ((void *)0)))) {
if ((!yr2377_SameType(((*(yR114 *)rt_nil_check(F.v7526))).f_rep, ((*(yR114 *)rt_nil_check(F.v7528))).f_rep))) {
F.v7530 = 0;
}
F.v7526 = ((*(yR114 *)rt_nil_check(F.v7526))).f_next;
F.v7528 = ((*(yR114 *)rt_nil_check(F.v7528))).f_next;
}
if (F.v7530) {
{ void * rv7533 = F.v7524;
return rv7533; }
}
}
F.v7524 = ((*(yR119 *)rt_nil_check(F.v7524))).f_alt;
}
{ void * rv7534 = ((void *)0);
return rv7534; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3218_RoutineBody(void * a_p3219) {
struct yf3220 F;
memset((void *)&F, 0, sizeof F);
F.p3219 = a_p3219;
F.v7538 = ((*(yR99 *)rt_nil_check(F.p3219))).f_sym;
F.v7540 = v980;
F.v7542 = v982;
F.v7544 = v1263;
F.v7546 = v1510;
F.v7548 = v1513;
F.v7550 = v1538;
F.v7552 = v1552;
F.v7554 = v1579;
F.v7556 = v1582;
F.v7558 = v1585;
F.v7560 = v1614;
v980 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v982 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v7570 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1263 = ((*(yR119 *)rt_nil_check(F.v7538))).f_level;
F.v7566 = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7538))).f_members))).f_name;
((rt_int *)(v1275).p)[y_ix1(v1275, v1263)] = F.v7566;
v1513 = v1510;
v1582 = v1579;
v1552 = INT64_C(0);
v1585 = F.v7538;
v1614 = 0;
yr2170_OpenScope(0);
v1312 = rt_range(rt_add(v1312, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1308).p)[y_ix1(v1308, v1312)] = ((*(yR119 *)rt_nil_check(F.v7538))).f_depth;
((rt_int *)(v1310).p)[y_ix1(v1310, v1312)] = ((*(yR119 *)rt_nil_check(F.v7538))).f_serial;
F.v7562 = ((*(yR119 *)rt_nil_check(F.v7538))).f_params;
while ((!(F.v7562 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7562))).f_cls == v881)) {
F.v7564 = yr2163_NewSym(v848, ((*(yR114 *)rt_nil_check(F.v7562))).f_name);
} else {
F.v7564 = yr2163_NewSym(v845, ((*(yR114 *)rt_nil_check(F.v7562))).f_name);
}
((*(yR119 *)rt_nil_check(F.v7564))).f_rep = ((*(yR114 *)rt_nil_check(F.v7562))).f_rep;
((*(yR119 *)rt_nil_check(F.v7564))).f_level = v1263;
((*(yR119 *)rt_nil_check(F.v7564))).f_cname = ((*(yR114 *)rt_nil_check(F.v7562))).f_cname;
if ((((*(yR119 *)rt_nil_check(F.v7538))).f_kind == v869)) {
((*(yR119 *)rt_nil_check(F.v7564))).f_byref = (((*(yR114 *)rt_nil_check(F.v7562))).f_cls == v887);
yr2278_DeclStorage(yr3198_ParamCType(F.v7562), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname);
} else if ((((*(yR114 *)rt_nil_check(F.v7562))).f_cls == v887)) {
((*(yR119 *)rt_nil_check(F.v7564))).f_byref = 1;
yr2278_DeclStorage(yr3198_ParamCType(F.v7562), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname);
yr1116_Emit(yr3148_Join(yr1045_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr3148_Join(yr1045_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr1045_T(y_str(";", 1)))));
} else if ((((*(yR114 *)rt_nil_check(F.v7562))).f_cls == v884)) {
yr2278_DeclStorage(yr2359_CType(((*(yR114 *)rt_nil_check(F.v7562))).f_rep), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname);
yr2278_DeclStorage(yr3198_ParamCType(F.v7562), yr3148_Join(((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr1045_T(y_str("_o", 2)), INT64_C(0)));
yr1116_Emit(yr3148_Join(yr1045_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr3148_Join(yr1045_T(y_str("_o = a_", 7)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr1045_T(y_str(";", 1)))));
if ((yr2334_Deep(((*(yR114 *)rt_nil_check(F.v7562))).f_rep) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7562))).f_rep))).f_kind == v827))))) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_init(", 7)), yr2365_DescOf(((*(yR114 *)rt_nil_check(F.v7562))).f_rep), yr3148_Join(yr1045_T(y_str(", &F.", 5)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr1045_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7562))).f_rep))).f_kind == v827)) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr3148_Join(yr1045_T(y_str(" = *a_", 6)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr1045_T(y_str(";", 1)))));
}
} else {
yr2278_DeclStorage(yr2359_CType(((*(yR114 *)rt_nil_check(F.v7562))).f_rep), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname);
yr1116_Emit(yr3148_Join(yr1045_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr3148_Join(yr1045_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v7562))).f_cname, yr1045_T(y_str(";", 1)))));
}
yr2258_Define(F.v7564, ((*(yR99 *)rt_nil_check(F.p3219))).f_line);
F.v7562 = ((*(yR114 *)rt_nil_check(F.v7562))).f_next;
}
yr3416_EnterMonitor(F.v7538);
yr3274_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3219))).f_c))).f_a);
if (yr3093_BlockFalls(((*(yR99 *)rt_nil_check(F.p3219))).f_c)) {
if ((((*(yR119 *)rt_nil_check(F.v7538))).f_kind == v869)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3219))).f_line, ((*(yR99 *)rt_nil_check(F.p3219))).f_name, y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3219))).f_line, ((*(yR99 *)rt_nil_check(F.p3219))).f_name, y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3059_BlockStatements(((*(yR99 *)rt_nil_check(F.p3219))).f_c);
if ((((*(yR119 *)rt_nil_check(F.v7538))).f_kind == v869)) {
yr1122_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1122_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3398_AwaitProcesses();
yr2182_CloseScope();
v1312 = rt_range(rt_sub(v1312, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1010_SB();
yr1021_SA(y_str("struct ", 7));
yr1028_ST(F.v7566);
yr1021_SA(y_str(" {", 2));
if ((v1263 > INT64_C(1))) {
yr1021_SA(y_str(" struct ", 8));
yr1028_ST(((rt_int *)(v1275).p)[y_ix1(v1275, rt_sub(v1263, INT64_C(1)))]);
yr1021_SA(y_str(" *up;", 5));
} else {
yr1021_SA(y_str(" void *up;", 10));
}
F.v7568 = yr1040_SE();
yr1094_Put(&v966, F.v7568);
yr1109_Append(&v966, &v982);
yr1101_PutS(&v966, y_str("};", 2));
yr1094_Put(&F.v7570, yr3148_Join(((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7538))).f_mnext))).f_name, yr1045_T(y_str(" {", 2)), INT64_C(0)));
if (v1614) {
yr1101_PutS(&F.v7570, y_str("volatile", 8));
}
yr1094_Put(&F.v7570, yr3148_Join(yr1045_T(y_str("struct ", 7)), F.v7566, yr1045_T(y_str(" F;", 3))));
yr1101_PutS(&F.v7570, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR119 *)rt_nil_check(F.v7538))).f_kind == v869)) {
yr1094_Put(&F.v7570, yr3148_Join(yr1045_T(y_str("F = *(struct ", 13)), F.v7566, yr1045_T(y_str(" *)arg;", 7))));
} else if ((v1263 > INT64_C(1))) {
yr1101_PutS(&F.v7570, y_str("F.up = up;", 10));
}
yr1109_Append(&F.v7570, &v980);
yr1101_PutS(&F.v7570, y_str("}", 1));
yr1109_Append(&v972, &F.v7570);
v980 = F.v7540;
v982 = F.v7542;
v1263 = F.v7544;
((rt_int *)(v1275).p)[y_ix1(v1275, v1263)] = yr1184_Fresh(y_str("unused", 6));
if ((!(F.v7558 == ((void *)0)))) {
((rt_int *)(v1275).p)[y_ix1(v1275, v1263)] = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7558))).f_members))).f_name;
}
v1510 = F.v7546;
v1513 = F.v7548;
v1538 = F.v7550;
v1552 = F.v7552;
v1579 = F.v7554;
v1582 = F.v7556;
v1585 = F.v7558;
v1614 = F.v7560;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3224_DeclareStorage(void * a_p3225, void * a_p3226, rt_int a_p3227) {
struct yf3228 F;
memset((void *)&F, 0, sizeof F);
F.p3225 = a_p3225;
F.p3226 = a_p3226;
F.p3227 = a_p3227;
((*(yR119 *)rt_nil_check(F.p3225))).f_rep = F.p3226;
((*(yR119 *)rt_nil_check(F.p3225))).f_level = v1263;
((*(yR119 *)rt_nil_check(F.p3225))).f_cname = yr1184_Fresh(y_str("v", 1));
yr2278_DeclStorage(yr2359_CType(F.p3226), ((*(yR119 *)rt_nil_check(F.p3225))).f_cname);
if (yr2334_Deep(F.p3226)) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_init(", 7)), yr2365_DescOf(F.p3226), yr3148_Join(yr1045_T(y_str(", &", 3)), yr2285_SymPath(F.p3225), yr1045_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3226))).f_kind == v818)) {
yr1116_Emit(yr3148_Join(yr2285_SymPath(F.p3225), yr1045_T(y_str(" = y_set_new(", 13)), yr3148_Join(yr2440_LoText(((*(yR104 *)rt_nil_check(F.p3226))).f_elem), yr1045_T(y_str(", ", 2)), yr3148_Join(yr2446_HiText(((*(yR104 *)rt_nil_check(F.p3226))).f_elem), yr1045_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3226))).f_kind == v821)) {
yr3433_DeclareSignal(F.p3225, F.p3227);
}
if (yr2347_HoldsSignal(F.p3226)) {
yr3440_DeclareSignalArray(F.p3225, F.p3227);
}
if ((((*(yR104 *)rt_nil_check(F.p3226))).f_kind == v824)) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("rt_lock_init(&", 14)), yr2285_SymPath(F.p3225), yr1045_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3232_SimpleDecl(void * a_p3233) {
struct yf3234 F;
memset((void *)&F, 0, sizeof F);
F.p3233 = a_p3233;
F.v7638 = ((*(yR99 *)rt_nil_check(F.p3233))).f_kind;
if ((((F.v7638 == v623)) || ((F.v7638 == v626)))) {
F.v7640 = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p3233))).f_b, INT64_C(0), 0);
yr2400_CheckRepresented(F.v7640, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
if ((((F.v7638 == v623)) && yr2353_NonAssignable(F.v7640))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3233))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v7644 = ((*(yR99 *)rt_nil_check(F.p3233))).f_a;
while ((!(F.v7644 == ((void *)0)))) {
if ((F.v7638 == v623)) {
F.v7646 = yr2163_NewSym(v848, ((*(yR99 *)rt_nil_check(F.v7644))).f_name);
} else {
F.v7646 = yr2163_NewSym(v845, ((*(yR99 *)rt_nil_check(F.v7644))).f_name);
}
yr3224_DeclareStorage(F.v7646, F.v7640, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
if ((!(((*(yR99 *)rt_nil_check(F.p3233))).f_c == ((void *)0)))) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.p3233))).f_c, F.v7640, &F.v7648, &F.v7642);
if ((F.v7638 == v623)) {
yr2751_Store(yr2285_SymPath(F.v7646), F.v7640, F.v7648, F.v7642, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
} else {
F.v7650 = yr2977_UserAssign(yr2285_SymPath(F.v7646), F.v7640, F.v7648, F.v7642, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
if ((!(F.v7650 == INT64_C(0)))) {
yr1116_Emit(F.v7650);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7640))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7640))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3233))).f_line, ((*(yR104 *)rt_nil_check(F.v7640))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2751_Store(yr2285_SymPath(F.v7646), F.v7640, F.v7648, F.v7642, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
}
}
if ((F.v7638 == v623)) {
yr2652_Manifest(((*(yR99 *)rt_nil_check(F.p3233))).f_c, &F.v7652, &F.v7654);
if ((F.v7652 && yr2310_IsDiscrete(F.v7640))) {
((*(yR119 *)rt_nil_check(F.v7646))).f_hasmv = 1;
((*(yR119 *)rt_nil_check(F.v7646))).f_mval = F.v7654;
}
}
}
if ((!(((*(yR99 *)rt_nil_check(F.v7644))).f_a == ((void *)0)))) {
yr3245_AtLocation(F.v7646, ((*(yR99 *)rt_nil_check(F.v7644))).f_a);
}
yr2258_Define(F.v7646, ((*(yR99 *)rt_nil_check(F.v7644))).f_line);
F.v7644 = ((*(yR99 *)rt_nil_check(F.v7644))).f_next;
}
return;
}
if ((F.v7638 == v635)) {
F.v7640 = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p3233))).f_b, ((*(yR99 *)rt_nil_check(F.p3233))).f_name, 0);
yr2400_CheckRepresented(F.v7640, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
F.v7646 = yr2163_NewSym(v851, ((*(yR99 *)rt_nil_check(F.p3233))).f_name);
((*(yR119 *)rt_nil_check(F.v7646))).f_rep = F.v7640;
yr2258_Define(F.v7646, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
yr2564_ResolvePending(((*(yR99 *)rt_nil_check(F.p3233))).f_name, F.v7640);
yr3238_NoteAlphabet(F.p3233, F.v7640);
return;
}
if ((F.v7638 == v632)) {
F.v7640 = yr2541_MakeRep(((*(yR99 *)rt_nil_check(F.p3233))).f_b, ((*(yR99 *)rt_nil_check(F.p3233))).f_name, 1);
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3233))).f_b))).f_kind == v656)) {
F.v7640 = yr2304_CopyRep(F.v7640);
((*(yR104 *)rt_nil_check(F.v7640))).f_tid = yr2535_NewTid(((*(yR99 *)rt_nil_check(F.p3233))).f_name);
((*(yR104 *)rt_nil_check(F.v7640))).f_tname = ((*(yR99 *)rt_nil_check(F.p3233))).f_name;
if (((((((*(yR104 *)rt_nil_check(F.v7640))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.v7640))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.v7640))).f_kind == v794)))) {
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3233))).f_b))).f_a == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v7640))).f_abstract = 1;
}
}
}
F.v7646 = yr2163_NewSym(v854, ((*(yR99 *)rt_nil_check(F.p3233))).f_name);
((*(yR119 *)rt_nil_check(F.v7646))).f_rep = F.v7640;
yr2258_Define(F.v7646, ((*(yR99 *)rt_nil_check(F.p3233))).f_line);
yr2564_ResolvePending(((*(yR99 *)rt_nil_check(F.p3233))).f_name, F.v7640);
yr3238_NoteAlphabet(F.p3233, F.v7640);
return;
}
if ((F.v7638 == v629)) {
F.v7644 = ((*(yR99 *)rt_nil_check(F.p3233))).f_a;
while ((!(F.v7644 == ((void *)0)))) {
F.v7646 = yr2163_NewSym(v872, ((*(yR99 *)rt_nil_check(F.v7644))).f_name);
((*(yR119 *)rt_nil_check(F.v7646))).f_level = v1263;
((*(yR119 *)rt_nil_check(F.v7646))).f_cname = yr1184_Fresh(y_str("lab", 3));
yr2258_Define(F.v7646, ((*(yR99 *)rt_nil_check(F.v7644))).f_line);
F.v7644 = ((*(yR99 *)rt_nil_check(F.v7644))).f_next;
}
return;
}
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3233))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3238_NoteAlphabet(void * a_p3239, void * a_p3240) {
struct yf3241 F;
memset((void *)&F, 0, sizeof F);
F.p3239 = a_p3239;
F.p3240 = a_p3240;
if ((((((*(yR104 *)rt_nil_check(F.p3240))).f_kind == v803)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3239))).f_b))).f_kind == v662)))) {
F.v7673 = yr1849_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p3239))).f_line);
((*(yR99 *)rt_nil_check(F.v7673))).f_name = ((*(yR99 *)rt_nil_check(F.p3239))).f_name;
((*(yR99 *)rt_nil_check(F.v7673))).f_rep = F.p3240;
((*(yR99 *)rt_nil_check(F.v7673))).f_next = v1461;
v1461 = F.v7673;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3245_AtLocation(void * a_p3246, void * a_p3247) {
struct yf3248 F;
memset((void *)&F, 0, sizeof F);
F.p3246 = a_p3246;
F.p3247 = a_p3247;
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3246))).f_rep))).f_kind == v821)) {
yr3447_DeviceSignal(F.p3246, F.p3247);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3252_Defer(void * a_p3253, rt_int a_p3254, void * a_p3255, rt_int a_p3256) {
struct yf3257 F;
memset((void *)&F, 0, sizeof F);
F.p3253 = a_p3253;
F.p3254 = a_p3254;
F.p3255 = a_p3255;
F.p3256 = a_p3256;
F.v7683 = v1257;
if ((v1710 >= INT64_C(20000))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3253))).f_line, y_str("too many routines for this implementation", 41));
}
v1710 = rt_range(rt_add(v1710, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1629).p)[y_ix1(v1629, v1710)] = F.p3253;
((rt_int *)(v1640).p)[y_ix1(v1640, v1710)] = F.p3254;
((rt_int *)(v1651).p)[y_ix1(v1651, v1710)] = v1260;
((void * *)(v1662).p)[y_ix1(v1662, v1710)] = v1716;
((void * *)(v1673).p)[y_ix1(v1673, v1710)] = F.p3255;
((rt_int *)(v1684).p)[y_ix1(v1684, v1710)] = F.p3256;
while (((*(yR124 *)rt_nil_check(((void * *)(v1255).p)[y_ix1(v1255, F.v7683)]))).f_closed) {
F.v7683 = rt_range(rt_sub(F.v7683, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1695).p)[y_ix1(v1695, v1710)] = rt_range(rt_add(v1713, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1697).p)[y_ix1(v1697, v1710)] = rt_range(rt_sub(v1257, F.v7683), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo7696 = rt_add(F.v7683, INT64_C(1));
F.hi7697 = v1257;
{ rt_int hi7701 = F.hi7697;
for (rt_int i7700 = F.lo7696; i7700 <= hi7701; i7700++) { F.c_7699 = i7700;
v1713 = rt_range(rt_add(v1713, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1708).p)[y_ix1(v1708, v1713)] = ((void * *)(v1255).p)[y_ix1(v1255, F.c_7699)];
if (i7700 == hi7701) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3261_RunDeferred(rt_int a_p3262, rt_int a_p3263) {
struct yf3264 F;
memset((void *)&F, 0, sizeof F);
F.p3262 = a_p3262;
F.p3263 = a_p3263;
F.v7708 = rt_range(rt_add(F.p3262, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v7708 <= v1710)) {
F.lo7719 = ((rt_int *)(v1695).p)[y_ix1(v1695, F.v7708)];
F.hi7720 = rt_sub((rt_add(((rt_int *)(v1695).p)[y_ix1(v1695, F.v7708)], ((rt_int *)(v1697).p)[y_ix1(v1697, F.v7708)])), INT64_C(1));
{ rt_int hi7724 = F.hi7720;
for (rt_int i7723 = F.lo7719; i7723 <= hi7724; i7723++) { F.c_7722 = i7723;
yr2176_ReopenScope(((void * *)(v1708).p)[y_ix1(v1708, F.c_7722)]);
if (i7723 == hi7724) break;
}}
F.v7712 = v1260;
F.v7714 = v1716;
v1260 = ((rt_int *)(v1651).p)[y_ix1(v1651, F.v7708)];
v1716 = ((void * *)(v1662).p)[y_ix1(v1662, F.v7708)];
if ((((rt_int *)(v1640).p)[y_ix1(v1640, F.v7708)] == INT64_C(1))) {
yr3218_RoutineBody(((void * *)(v1629).p)[y_ix1(v1629, F.v7708)]);
} else {
yr3268_ModuleInit(F.v7708);
}
v1260 = F.v7712;
v1716 = F.v7714;
F.lo7729 = INT64_C(1);
F.hi7730 = ((rt_int *)(v1697).p)[y_ix1(v1697, F.v7708)];
{ rt_int hi7734 = F.hi7730;
for (rt_int i7733 = F.lo7729; i7733 <= hi7734; i7733++) { F.c_7732 = i7733;
yr2182_CloseScope();
if (i7733 == hi7734) break;
}}
F.v7708 = rt_range(rt_add(F.v7708, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1710 = F.p3262;
v1713 = F.p3263;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3268_ModuleInit(rt_int a_p3269) {
struct yf3270 F;
memset((void *)&F, 0, sizeof F);
F.p3269 = a_p3269;
F.v7740 = ((void * *)(v1629).p)[y_ix1(v1629, F.p3269)];
F.v7742 = v980;
F.v7744 = ((void * *)(v1673).p)[y_ix1(v1673, F.p3269)];
v980 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1684).p)[y_ix1(v1684, F.p3269)]) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_mon_enter(", 12)), yr3410_MonitorPath(v1716), yr1045_T(y_str(");", 2))));
}
v1538 = rt_range(rt_add(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1525).p)[y_ix1(v1525, v1538)] = INT64_C(0);
((rt_int *)(v1536).p)[y_ix1(v1536, v1538)] = INT64_C(0);
yr3059_BlockStatements(((*(yR99 *)rt_nil_check(F.v7740))).f_c);
v1538 = rt_range(rt_sub(v1538, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1684).p)[y_ix1(v1684, F.p3269)]) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_mon_leave(", 12)), yr3410_MonitorPath(v1716), yr1045_T(y_str(");", 2))));
}
if ((!((v980).f_head == ((void *)0)))) {
((*(yR129 *)rt_nil_check((v980).f_tail))).f_next = ((*(yR129 *)rt_nil_check(F.v7744))).f_next;
((*(yR129 *)rt_nil_check(F.v7744))).f_next = (v980).f_head;
if (((F.v7742).f_tail == F.v7744)) {
(F.v7742).f_tail = (v980).f_tail;
}
}
v980 = F.v7742;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3274_Declarations(void * a_p3275) {
struct yf3276 F;
memset((void *)&F, 0, sizeof F);
F.p3275 = a_p3275;
F.v7758 = F.p3275;
F.v7760 = ((void * *)(v1286).p)[y_ix1(v1286, v1257)];
F.v7762 = v1710;
F.v7764 = v1713;
((void * *)(v1286).p)[y_ix1(v1286, v1257)] = F.p3275;
while ((!(F.v7758 == ((void *)0)))) {
v984 = ((*(yR99 *)rt_nil_check(F.v7758))).f_line;
((void * *)(v1297).p)[y_ix1(v1297, v1257)] = F.v7758;
if ((((((*(yR99 *)rt_nil_check(F.v7758))).f_kind == v638)) || ((((*(yR99 *)rt_nil_check(F.v7758))).f_kind == v650)))) {
if ((((*(yR99 *)rt_nil_check(F.v7758))).f_sym == ((void *)0))) {
yr3280_DeclareRoutine(F.v7758);
}
} else if (((((*(yR99 *)rt_nil_check(F.v7758))).f_kind == v608))) {
if ((((*(yR99 *)rt_nil_check(F.v7758))).f_ival == INT64_C(0))) {
yr3374_CompileModule(F.v7758);
}
} else if ((((*(yR99 *)rt_nil_check(F.v7758))).f_kind == v644)) {
yr3380_DeclareTemplate(F.v7758);
} else if ((((*(yR99 *)rt_nil_check(F.v7758))).f_kind == v647)) {
yr3386_Instantiate(F.v7758);
} else {
yr3232_SimpleDecl(F.v7758);
}
F.v7758 = ((*(yR99 *)rt_nil_check(F.v7758))).f_next;
}
((void * *)(v1297).p)[y_ix1(v1297, v1257)] = ((void *)0);
((void * *)(v1286).p)[y_ix1(v1286, v1257)] = F.v7760;
yr2571_CheckPending();
yr3345_ResolveLater(v1257);
if ((!((*(yR124 *)rt_nil_check(((void * *)(v1255).p)[y_ix1(v1255, v1257)]))).f_closed)) {
yr3261_RunDeferred(F.v7762, F.v7764);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3280_DeclareRoutine(void * a_p3281) {
struct yf3282 F;
memset((void *)&F, 0, sizeof F);
F.p3281 = a_p3281;
if ((((*(yR99 *)rt_nil_check(F.p3281))).f_kind == v638)) {
yr3204_RoutineHeader(F.p3281, v860);
} else {
yr3204_RoutineHeader(F.p3281, v869);
}
if ((((*(yR99 *)rt_nil_check(F.p3281))).f_kind == v650)) {
yr3392_DeclareProcess(F.p3281);
}
yr3252_Defer(F.p3281, INT64_C(1), ((void *)0), 0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3286_Alias(rt_int a_p3287, void * a_p3288) {
struct yf3289 F;
memset((void *)&F, 0, sizeof F);
F.p3287 = a_p3287;
F.p3288 = a_p3288;
F.v7774 = yr2163_NewSym(v878, F.p3287);
((*(yR119 *)rt_nil_check(F.v7774))).f_target = F.p3288;
((*(yR119 *)rt_nil_check(F.v7774))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3288))).f_readonly;
{ void * rv7775 = F.v7774;
return rv7775; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3293_AddLits(void * * a_p3294, void * a_p3295, rt_int a_p3296) {
struct yf3297 F;
memset((void *)&F, 0, sizeof F);
F.p3294 = a_p3294;
F.p3295 = a_p3295;
F.p3296 = a_p3296;
if ((((F.p3296 > INT64_C(8))) || ((*(yR104 *)rt_nil_check(F.p3295))).f_opaque)) {
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3295))).f_kind == v800)) {
F.v7781 = ((*(yR104 *)rt_nil_check(F.p3295))).f_lits;
while ((!(F.v7781 == ((void *)0)))) {
F.v7783 = yr2251_FindLit(((*(yR99 *)rt_nil_check(F.v7781))).f_name, F.p3295);
if ((!(F.v7783 == ((void *)0)))) {
F.v7783 = yr3286_Alias(((*(yR99 *)rt_nil_check(F.v7781))).f_name, F.v7783);
((*(yR119 *)rt_nil_check(F.v7783))).f_mnext = (*F.p3294);
(*F.p3294) = F.v7783;
}
F.v7781 = ((*(yR99 *)rt_nil_check(F.v7781))).f_next;
}
} else if ((((*(yR104 *)rt_nil_check(F.p3295))).f_kind == v809)) {
F.v7785 = ((*(yR104 *)rt_nil_check(F.p3295))).f_fields;
while ((!(F.v7785 == ((void *)0)))) {
yr3293_AddLits(&(*F.p3294), ((*(yR109 *)rt_nil_check(F.v7785))).f_rep, rt_range(rt_add(F.p3296, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v7785 = ((*(yR109 *)rt_nil_check(F.v7785))).f_next;
}
} else if (((((((*(yR104 *)rt_nil_check(F.p3295))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p3295))).f_kind == v818))) || ((((*(yR104 *)rt_nil_check(F.p3295))).f_kind == v815)))) {
yr3293_AddLits(&(*F.p3294), ((*(yR104 *)rt_nil_check(F.p3295))).f_elem, rt_range(rt_add(F.p3296, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3301_Provides(void * a_p3302, rt_int a_p3303) {
struct yf3304 F;
memset((void *)&F, 0, sizeof F);
F.p3302 = a_p3302;
F.p3303 = a_p3303;
F.v7795 = ((*(yR99 *)rt_nil_check(F.p3302))).f_b;
if ((((*(yR99 *)rt_nil_check(F.p3302))).f_name == F.p3303)) {
{ rt_int rv7797 = 1;
return rv7797; }
}
while ((!(F.v7795 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v7795))).f_ival == INT64_C(0)))) && ((((*(yR99 *)rt_nil_check(F.v7795))).f_ival == F.p3303)))) {
{ rt_int rv7800 = 1;
return rv7800; }
}
if ((((((*(yR99 *)rt_nil_check(F.v7795))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v7795))).f_name == F.p3303)))) {
{ rt_int rv7803 = 1;
return rv7803; }
}
F.v7795 = ((*(yR99 *)rt_nil_check(F.v7795))).f_next;
}
{ rt_int rv7805 = 0;
return rv7805; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3308_ImportLater(rt_int a_p3309, rt_int a_p3310, void * * a_p3311) {
struct yf3312 F;
memset((void *)&F, 0, sizeof F);
F.p3309 = a_p3309;
F.p3310 = a_p3310;
F.p3311_o = a_p3311;
F.p3311 = ((void *)0);
if ((v1257 < INT64_C(0))) {
{ rt_int rv7814 = INT64_C(0);
(*F.p3311_o) = F.p3311;
return rv7814; }
}
F.v7811 = ((void * *)(v1286).p)[y_ix1(v1286, v1257)];
while ((!(F.v7811 == ((void *)0)))) {
if (((((((*(yR99 *)rt_nil_check(F.v7811))).f_kind == v608)) && ((!(((*(yR99 *)rt_nil_check(F.v7811))).f_ival == INT64_C(2))))) && yr3301_Provides(F.v7811, F.p3309))) {
if ((((*(yR99 *)rt_nil_check(F.v7811))).f_ival == INT64_C(1))) {
F.p3311 = F.v7811;
{ rt_int rv7818 = INT64_C(2);
(*F.p3311_o) = F.p3311;
return rv7818; }
}
yr3374_CompileModule(F.v7811);
{ rt_int rv7820 = INT64_C(1);
(*F.p3311_o) = F.p3311;
return rv7820; }
}
if ((((((((*(yR99 *)rt_nil_check(F.v7811))).f_kind == v638)) || ((((*(yR99 *)rt_nil_check(F.v7811))).f_kind == v650)))) && ((((*(yR99 *)rt_nil_check(F.v7811))).f_name == F.p3309)))) {
{ rt_int rv7822 = INT64_C(3);
(*F.p3311_o) = F.p3311;
return rv7822; }
}
if ((((!(((*(yR99 *)rt_nil_check(F.v7811))).f_kind == v608))) && yr2218_DeclaredFrom(yr3316_OneDecl(F.v7811), F.p3309))) {
yr1170_FailN(F.p3310, F.p3309, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v7811 = ((*(yR99 *)rt_nil_check(F.v7811))).f_next;
}
{ rt_int rv7825 = INT64_C(0);
(*F.p3311_o) = F.p3311;
return rv7825; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3316_OneDecl(void * a_p3317) {
struct yf3318 F;
memset((void *)&F, 0, sizeof F);
F.p3317 = a_p3317;
({ F.v7829 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v7829)) = (*(yR99 *)rt_nil_check(F.p3317));
((*(yR99 *)rt_nil_check(F.v7829))).f_next = ((void *)0);
{ void * rv7830 = F.v7829;
return rv7830; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3322_Lazy(rt_int a_p3323, rt_int a_p3324, void * a_p3325, rt_int a_p3326) {
struct yf3327 F;
memset((void *)&F, 0, sizeof F);
F.p3323 = a_p3323;
F.p3324 = a_p3324;
F.p3325 = a_p3325;
F.p3326 = a_p3326;
F.v7837 = yr2163_NewSym(v878, F.p3323);
if ((v1778 >= INT64_C(10000))) {
yr1162_FailS(F.p3326, y_str("too many imports translated later", 33));
}
v1778 = rt_range(rt_add(v1778, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1741).p)[y_ix1(v1741, v1778)] = F.v7837;
((rt_int *)(v1752).p)[y_ix1(v1752, v1778)] = F.p3324;
((void * *)(v1763).p)[y_ix1(v1763, v1778)] = F.p3325;
((rt_int *)(v1774).p)[y_ix1(v1774, v1778)] = v1257;
((rt_int *)(v1776).p)[y_ix1(v1776, v1778)] = F.p3326;
{ void * rv7842 = F.v7837;
return rv7842; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3331_SetLazy(rt_int a_p3332, void * a_p3333) {
struct yf3334 F;
memset((void *)&F, 0, sizeof F);
F.p3332 = a_p3332;
F.p3333 = a_p3333;
((*(yR119 *)rt_nil_check(((void * *)(v1741).p)[y_ix1(v1741, F.p3332)]))).f_target = F.p3333;
((*(yR119 *)rt_nil_check(((void * *)(v1741).p)[y_ix1(v1741, F.p3332)]))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3333))).f_readonly;
((void * *)(v1741).p)[y_ix1(v1741, F.p3332)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3338_ResolveFrom(void * a_p3339, void * a_p3340) {
struct yf3341 F;
memset((void *)&F, 0, sizeof F);
F.p3339 = a_p3339;
F.p3340 = a_p3340;
F.lo7854 = INT64_C(1);
F.hi7855 = v1778;
{ rt_int hi7859 = F.hi7855;
for (rt_int i7858 = F.lo7854; i7858 <= hi7859; i7858++) { F.c_7857 = i7858;
if ((((!(((void * *)(v1741).p)[y_ix1(v1741, F.c_7857)] == ((void *)0)))) && ((((void * *)(v1763).p)[y_ix1(v1763, F.c_7857)] == F.p3339)))) {
F.v7850 = ((*(yR119 *)rt_nil_check(F.p3340))).f_members;
while ((((!(F.v7850 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v7850))).f_name == ((rt_int *)(v1752).p)[y_ix1(v1752, F.c_7857)]))))) {
F.v7850 = ((*(yR119 *)rt_nil_check(F.v7850))).f_mnext;
}
if ((F.v7850 == ((void *)0))) {
yr1170_FailN(((rt_int *)(v1776).p)[y_ix1(v1776, F.c_7857)], ((rt_int *)(v1752).p)[y_ix1(v1752, F.c_7857)], y_str(" is not exported by that module", 31));
}
yr3331_SetLazy(rt_range(F.c_7857, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v7850);
}
if (i7858 == hi7859) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3345_ResolveLater(rt_int a_p3346) {
struct yf3347 F;
memset((void *)&F, 0, sizeof F);
F.p3346 = a_p3346;
F.lo7868 = INT64_C(1);
F.hi7869 = v1778;
{ rt_int hi7873 = F.hi7869;
for (rt_int i7872 = F.lo7868; i7872 <= hi7873; i7872++) { F.c_7871 = i7872;
if (((((!(((void * *)(v1741).p)[y_ix1(v1741, F.c_7871)] == ((void *)0)))) && ((((void * *)(v1763).p)[y_ix1(v1763, F.c_7871)] == ((void *)0)))) && ((((rt_int *)(v1774).p)[y_ix1(v1774, F.c_7871)] == F.p3346)))) {
F.v7864 = yr2193_Find(((rt_int *)(v1752).p)[y_ix1(v1752, F.c_7871)]);
if ((F.v7864 == ((void *)0))) {
yr1170_FailN(((rt_int *)(v1776).p)[y_ix1(v1776, F.c_7871)], ((rt_int *)(v1752).p)[y_ix1(v1752, F.c_7871)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3331_SetLazy(rt_range(F.c_7871, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v7864);
}
if (i7872 == hi7873) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3351_LazyModule(void * a_p3352, void * * a_p3353, rt_int a_p3354) {
struct yf3355 F;
memset((void *)&F, 0, sizeof F);
F.p3352 = a_p3352;
F.p3353 = a_p3353;
F.p3354 = a_p3354;
F.v7880 = ((*(yR99 *)rt_nil_check(F.p3352))).f_b;
while ((!(F.v7880 == ((void *)0)))) {
F.v7884 = ((*(yR99 *)rt_nil_check(F.v7880))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.v7880))).f_ival == INT64_C(0)))) {
F.v7884 = rt_range(((*(yR99 *)rt_nil_check(F.v7880))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v7884 == v515))) && ((!(F.v7884 == v569)))) && ((!(F.v7884 == v554))))) {
F.v7882 = yr3322_Lazy(F.v7884, F.v7884, F.p3352, F.p3354);
((*(yR119 *)rt_nil_check(F.v7882))).f_mnext = (*F.p3353);
(*F.p3353) = F.v7882;
}
F.v7880 = ((*(yR99 *)rt_nil_check(F.v7880))).f_next;
}
F.v7882 = yr3322_Lazy(((*(yR99 *)rt_nil_check(F.p3352))).f_name, ((*(yR99 *)rt_nil_check(F.p3352))).f_name, ((void *)0), F.p3354);
((*(yR119 *)rt_nil_check(F.v7882))).f_mnext = (*F.p3353);
(*F.p3353) = F.v7882;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3359_ResolveItem(void * a_p3360, void * * a_p3361, rt_int a_p3362) {
struct yf3363 F;
memset((void *)&F, 0, sizeof F);
F.p3360 = a_p3360;
F.p3361 = a_p3361;
F.p3362 = a_p3362;
F.v7901 = ((*(yR99 *)rt_nil_check(F.p3360))).f_flag;
if (((F.p3362 && ((((*(yR99 *)rt_nil_check(F.p3360))).f_text == INT64_C(0)))) && (((((((*(yR99 *)rt_nil_check(F.p3360))).f_name == v515)) || ((((*(yR99 *)rt_nil_check(F.p3360))).f_name == v569))) || ((((*(yR99 *)rt_nil_check(F.p3360))).f_name == v554)))))) {
if ((yr2199_FindHere(((*(yR99 *)rt_nil_check(F.p3360))).f_name) == ((void *)0))) {
return;
}
}
F.v7897 = ((*(yR99 *)rt_nil_check(F.p3360))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.p3360))).f_ival == INT64_C(0)))) {
F.v7897 = rt_range(((*(yR99 *)rt_nil_check(F.p3360))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR99 *)rt_nil_check(F.p3360))).f_text == INT64_C(0)))) {
if ((((!F.p3362)) && ((yr2193_Find(((*(yR99 *)rt_nil_check(F.p3360))).f_text) == ((void *)0))))) {
F.v7903 = yr3308_ImportLater(((*(yR99 *)rt_nil_check(F.p3360))).f_text, ((*(yR99 *)rt_nil_check(F.p3360))).f_line, &F.v7905);
if ((F.v7903 == INT64_C(2))) {
F.v7895 = yr3322_Lazy(F.v7897, ((*(yR99 *)rt_nil_check(F.p3360))).f_name, F.v7905, ((*(yR99 *)rt_nil_check(F.p3360))).f_line);
((*(yR119 *)rt_nil_check(F.v7895))).f_mnext = (*F.p3361);
(*F.p3361) = F.v7895;
return;
}
}
F.v7893 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p3360))).f_text, ((*(yR99 *)rt_nil_check(F.p3360))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v863))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3360))).f_line, ((*(yR99 *)rt_nil_check(F.p3360))).f_text, y_str(" is not a module", 16));
}
F.v7891 = ((*(yR119 *)rt_nil_check(F.v7893))).f_members;
while ((((!(F.v7891 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v7891))).f_name == ((*(yR99 *)rt_nil_check(F.p3360))).f_name))))) {
F.v7891 = ((*(yR119 *)rt_nil_check(F.v7891))).f_mnext;
}
if ((F.v7891 == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3360))).f_line, ((*(yR99 *)rt_nil_check(F.p3360))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3362) {
F.v7891 = yr2199_FindHere(((*(yR99 *)rt_nil_check(F.p3360))).f_name);
} else {
F.v7891 = yr2193_Find(((*(yR99 *)rt_nil_check(F.p3360))).f_name);
}
if ((((F.v7891 == ((void *)0))) && (!F.p3362))) {
F.v7903 = yr3308_ImportLater(((*(yR99 *)rt_nil_check(F.p3360))).f_name, ((*(yR99 *)rt_nil_check(F.p3360))).f_line, &F.v7905);
if ((((F.v7903 == INT64_C(2))) && ((((*(yR99 *)rt_nil_check(F.v7905))).f_name == ((*(yR99 *)rt_nil_check(F.p3360))).f_name)))) {
if ((((!(F.v7901 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3360))).f_ival == INT64_C(0)))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3360))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3351_LazyModule(F.v7905, &(*F.p3361), ((*(yR99 *)rt_nil_check(F.p3360))).f_line);
return;
}
if ((F.v7903 >= INT64_C(2))) {
F.v7895 = yr3322_Lazy(F.v7897, ((*(yR99 *)rt_nil_check(F.p3360))).f_name, F.v7905, ((*(yR99 *)rt_nil_check(F.p3360))).f_line);
((*(yR119 *)rt_nil_check(F.v7895))).f_mnext = (*F.p3361);
(*F.p3361) = F.v7895;
return;
}
F.v7891 = yr2193_Find(((*(yR99 *)rt_nil_check(F.p3360))).f_name);
}
if ((F.v7891 == ((void *)0))) {
if (F.p3362) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3360))).f_line, ((*(yR99 *)rt_nil_check(F.p3360))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3360))).f_line, ((*(yR99 *)rt_nil_check(F.p3360))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v7893 = yr2291_Real(F.v7891);
if ((((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v863)) && ((((*(yR99 *)rt_nil_check(F.p3360))).f_text == INT64_C(0))))) {
if ((((!(F.v7901 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3360))).f_ival == INT64_C(0)))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3360))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v7895 = ((*(yR119 *)rt_nil_check(F.v7893))).f_members;
while ((!(F.v7895 == ((void *)0)))) {
F.v7891 = yr3286_Alias(((*(yR119 *)rt_nil_check(F.v7895))).f_name, F.v7895);
((*(yR119 *)rt_nil_check(F.v7891))).f_mnext = (*F.p3361);
(*F.p3361) = F.v7891;
F.v7895 = ((*(yR119 *)rt_nil_check(F.v7895))).f_mnext;
}
if ((!F.p3362)) {
F.v7891 = yr3286_Alias(((*(yR119 *)rt_nil_check(F.v7893))).f_name, F.v7893);
((*(yR119 *)rt_nil_check(F.v7891))).f_mnext = (*F.p3361);
(*F.p3361) = F.v7891;
}
return;
}
F.v7895 = yr3286_Alias(F.v7897, F.v7891);
if (F.p3362) {
if ((((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v854)))) {
if ((((F.v7901 == v413)) || ((F.v7901 == v467)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3360))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v7901 == v458))) || ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7893))).f_rep))).f_opaque)) {
F.v7899 = yr2304_CopyRep(((*(yR119 *)rt_nil_check(F.v7893))).f_rep);
((*(yR104 *)rt_nil_check(F.v7899))).f_opaque = 1;
((*(yR104 *)rt_nil_check(F.v7899))).f_opaqueops = v1729;
((*(yR119 *)rt_nil_check(F.v7895))).f_target = yr2163_NewSym(((*(yR119 *)rt_nil_check(F.v7893))).f_kind, ((*(yR119 *)rt_nil_check(F.v7893))).f_name);
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7895))).f_target))).f_rep = F.v7899;
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7895))).f_target))).f_decl = ((*(yR119 *)rt_nil_check(F.v7893))).f_decl;
} else {
yr3293_AddLits(&(*F.p3361), ((*(yR119 *)rt_nil_check(F.v7893))).f_rep, INT64_C(0));
}
} else if ((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v845)) {
if ((((F.v7901 == v380)) || ((F.v7901 == v458)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3360))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v7901 == v467))) {
((*(yR119 *)rt_nil_check(F.v7895))).f_readonly = 1;
}
} else if ((!(F.v7901 == INT64_C(0)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3360))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v845)) && ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7893))).f_rep))).f_kind == v821)) || yr2347_HoldsSignal(((*(yR119 *)rt_nil_check(F.v7893))).f_rep))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3360))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v7893))).f_kind == v854)))) {
yr3293_AddLits(&(*F.p3361), ((*(yR119 *)rt_nil_check(F.v7893))).f_rep, INT64_C(0));
}
((*(yR119 *)rt_nil_check(F.v7895))).f_mnext = (*F.p3361);
(*F.p3361) = F.v7895;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3367_DefineAll(void * a_p3368, rt_int a_p3369) {
struct yf3370 F;
memset((void *)&F, 0, sizeof F);
F.p3368 = a_p3368;
F.p3369 = a_p3369;
F.v7936 = F.p3368;
F.v7938 = F.p3368;
F.v7940 = F.p3368;
while ((!(F.v7936 == ((void *)0)))) {
F.v7938 = ((*(yR119 *)rt_nil_check(F.v7936))).f_mnext;
F.v7940 = yr2199_FindHere(((*(yR119 *)rt_nil_check(F.v7936))).f_name);
if (((!yr2239_Resolved(F.v7936)) || ((((!(F.v7940 == ((void *)0)))) && (!yr2239_Resolved(F.v7940)))))) {
if ((!(F.v7940 == ((void *)0)))) {
yr1170_FailN(F.p3369, ((*(yR119 *)rt_nil_check(F.v7936))).f_name, y_str(" comes into this scope twice", 28));
}
yr2258_Define(F.v7936, F.p3369);
} else if ((((F.v7940 == ((void *)0))) || ((!(yr2291_Real(F.v7940) == yr2291_Real(F.v7936)))))) {
if (((((!(F.v7940 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(yr2291_Real(F.v7936)))).f_kind == v857))) && ((((*(yR119 *)rt_nil_check(yr2291_Real(F.v7940)))).f_kind == v857)))) {
yr2258_Define(F.v7936, F.p3369);
} else if ((F.v7940 == ((void *)0))) {
yr2258_Define(F.v7936, F.p3369);
} else {
yr1170_FailN(F.p3369, ((*(yR119 *)rt_nil_check(F.v7936))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v7936 = F.v7938;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3374_CompileModule(void * a_p3375) {
struct yf3376 F;
memset((void *)&F, 0, sizeof F);
F.p3375 = a_p3375;
F.v7970 = 0;
((*(yR99 *)rt_nil_check(F.p3375))).f_ival = INT64_C(1);
F.v7946 = ((void *)0);
F.v7962 = ((*(yR99 *)rt_nil_check(F.p3375))).f_a;
while ((!(F.v7962 == ((void *)0)))) {
yr3359_ResolveItem(F.v7962, &F.v7946, 0);
F.v7962 = ((*(yR99 *)rt_nil_check(F.v7962))).f_next;
}
F.v7956 = v1716;
if ((((((*(yR99 *)rt_nil_check(F.p3375))).f_flag == INT64_C(1))) && ((v1716 == ((void *)0))))) {
F.v7958 = yr2163_NewSym(v845, ((*(yR99 *)rt_nil_check(F.p3375))).f_name);
((*(yR119 *)rt_nil_check(F.v7958))).f_level = v1263;
((*(yR119 *)rt_nil_check(F.v7958))).f_cname = yr1184_Fresh(y_str("mon", 3));
((*(yR119 *)rt_nil_check(F.v7958))).f_rep = v1332;
yr2278_DeclStorage(yr1045_T(y_str("ymon", 4)), ((*(yR119 *)rt_nil_check(F.v7958))).f_cname);
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_mon_init(&", 12)), yr2265_Path(v1263, ((*(yR119 *)rt_nil_check(F.v7958))).f_cname), yr1045_T(y_str(");", 2))));
v1716 = F.v7958;
F.v7970 = 1;
}
yr2170_OpenScope(1);
((void * *)(v1727).p)[y_ix1(v1727, v1257)] = ((void *)0);
F.v7966 = v1260;
v1260 = v1257;
yr3367_DefineAll(F.v7946, ((*(yR99 *)rt_nil_check(F.p3375))).f_line);
yr3274_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3375))).f_c))).f_a);
yr1116_Emit(yr3148_Join(yr1045_T(y_str("/* ", 3)), ((*(yR99 *)rt_nil_check(F.p3375))).f_name, yr1045_T(y_str(" */", 3))));
yr3252_Defer(F.p3375, INT64_C(2), (v980).f_tail, F.v7970);
v1729 = INT64_C(0);
F.v7962 = ((*(yR99 *)rt_nil_check(F.p3375))).f_b;
while ((!(F.v7962 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7962))).f_text == INT64_C(0))) && ((yr2199_FindHere(((*(yR99 *)rt_nil_check(F.v7962))).f_name) == ((void *)0))))) {
if ((((*(yR99 *)rt_nil_check(F.v7962))).f_name == v515)) {
v1729 = rt_range(rt_add(v1729, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR99 *)rt_nil_check(F.v7962))).f_name == v569)) || ((((*(yR99 *)rt_nil_check(F.v7962))).f_name == v554)))) {
if (((rt_div(v1729, INT64_C(2))) == INT64_C(0))) {
v1729 = rt_range(rt_add(v1729, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v7962 = ((*(yR99 *)rt_nil_check(F.v7962))).f_next;
}
F.v7948 = ((void *)0);
F.v7962 = ((*(yR99 *)rt_nil_check(F.p3375))).f_b;
while ((!(F.v7962 == ((void *)0)))) {
yr3359_ResolveItem(F.v7962, &F.v7948, 1);
F.v7962 = ((*(yR99 *)rt_nil_check(F.v7962))).f_next;
}
F.v7964 = ((void * *)(v1727).p)[y_ix1(v1727, v1257)];
v1260 = F.v7966;
yr2182_CloseScope();
while ((!(F.v7964 == ((void *)0)))) {
F.v7962 = ((*(yR99 *)rt_nil_check(F.v7964))).f_next;
((*(yR99 *)rt_nil_check(F.v7964))).f_next = ((void * *)(v1727).p)[y_ix1(v1727, v1257)];
((void * *)(v1727).p)[y_ix1(v1727, v1257)] = F.v7964;
F.v7964 = F.v7962;
}
v1716 = F.v7956;
F.v7952 = yr2163_NewSym(v863, ((*(yR99 *)rt_nil_check(F.p3375))).f_name);
((*(yR119 *)rt_nil_check(F.v7952))).f_members = F.v7948;
yr2258_Define(F.v7952, ((*(yR99 *)rt_nil_check(F.p3375))).f_line);
F.v7954 = F.v7948;
F.v7948 = ((void *)0);
while ((!(F.v7954 == ((void *)0)))) {
F.v7960 = ((*(yR119 *)rt_nil_check(F.v7954))).f_mnext;
F.v7950 = yr3286_Alias(((*(yR119 *)rt_nil_check(F.v7954))).f_name, F.v7954);
((*(yR119 *)rt_nil_check(F.v7950))).f_readonly = ((*(yR119 *)rt_nil_check(F.v7954))).f_readonly;
((*(yR119 *)rt_nil_check(F.v7950))).f_mnext = F.v7948;
F.v7948 = F.v7950;
F.v7954 = F.v7960;
}
((*(yR119 *)rt_nil_check(F.v7952))).f_members = F.v7948;
((*(yR99 *)rt_nil_check(F.p3375))).f_ival = INT64_C(2);
yr3338_ResolveFrom(F.p3375, F.v7952);
F.v7954 = F.v7948;
while ((!(F.v7954 == ((void *)0)))) {
F.v7960 = yr3286_Alias(((*(yR119 *)rt_nil_check(F.v7954))).f_name, F.v7954);
((*(yR119 *)rt_nil_check(F.v7960))).f_readonly = ((*(yR119 *)rt_nil_check(F.v7954))).f_readonly;
if ((yr2199_FindHere(((*(yR119 *)rt_nil_check(F.v7954))).f_name) == ((void *)0))) {
yr2258_Define(F.v7960, ((*(yR99 *)rt_nil_check(F.p3375))).f_line);
} else if ((((((*(yR119 *)rt_nil_check(yr2199_FindHere(((*(yR119 *)rt_nil_check(F.v7954))).f_name)))).f_kind == v878)) && ((!(yr2291_Real(yr2199_FindHere(((*(yR119 *)rt_nil_check(F.v7954))).f_name)) == yr2291_Real(F.v7954)))))) {
yr2258_Define(F.v7960, ((*(yR99 *)rt_nil_check(F.p3375))).f_line);
} else if ((!(((*(yR119 *)rt_nil_check(yr2291_Real(F.v7954)))).f_kind == v857))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3375))).f_line, ((*(yR119 *)rt_nil_check(F.v7954))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v7954 = ((*(yR119 *)rt_nil_check(F.v7954))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3380_DeclareTemplate(void * a_p3381) {
struct yf3382 F;
memset((void *)&F, 0, sizeof F);
F.p3381 = a_p3381;
F.v7999 = yr2163_NewSym(v866, ((*(yR99 *)rt_nil_check(F.p3381))).f_name);
((*(yR119 *)rt_nil_check(F.v7999))).f_decl = F.p3381;
yr2258_Define(F.v7999, ((*(yR99 *)rt_nil_check(F.p3381))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3386_Instantiate(void * a_p3387) {
struct yf3388 F;
memset((void *)&F, 0, sizeof F);
F.p3387 = a_p3387;
F.v8003 = yr2291_Real(yr2205_Lookup(((*(yR99 *)rt_nil_check(F.p3387))).f_name, ((*(yR99 *)rt_nil_check(F.p3387))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8003))).f_kind == v866))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3387))).f_line, ((*(yR99 *)rt_nil_check(F.p3387))).f_name, y_str(" is not a template", 18));
}
F.v8005 = ((*(yR119 *)rt_nil_check(F.v8003))).f_decl;
if ((!(yr1864_Count(((*(yR99 *)rt_nil_check(F.v8005))).f_a) == yr1864_Count(((*(yR99 *)rt_nil_check(F.p3387))).f_a)))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3387))).f_line, ((*(yR99 *)rt_nil_check(F.p3387))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v8011 = rt_range(rt_add(v1197, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8027 = ((*(yR99 *)rt_nil_check(F.v8005))).f_ival;
F.hi8028 = rt_sub(((*(yR99 *)rt_nil_check(F.v8005))).f_flag, INT64_C(1));
{ rt_int hi8032 = F.hi8028;
for (rt_int i8031 = F.lo8027; i8031 <= hi8032; i8031++) { F.c_8030 = i8031;
F.v8015 = ((rt_int *)(v1191).p)[y_ix1(v1191, F.c_8030)];
F.v8017 = ((rt_int *)(v1193).p)[y_ix1(v1193, F.c_8030)];
if ((F.v8015 == v191)) {
F.v8007 = ((*(yR99 *)rt_nil_check(F.v8005))).f_a;
F.v8009 = ((*(yR99 *)rt_nil_check(F.p3387))).f_a;
while ((!(F.v8007 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v8007))).f_name == F.v8017)) && ((F.v8015 == v191)))) {
if ((((*(yR99 *)rt_nil_check(F.v8009))).f_flag == INT64_C(1))) {
F.v8015 = v200;
F.v8017 = ((*(yR99 *)rt_nil_check(F.v8009))).f_ival;
} else {
F.v8017 = ((*(yR99 *)rt_nil_check(F.v8009))).f_name;
if ((F.v8017 <= v476)) {
F.v8015 = v194;
} else if ((F.v8017 <= v605)) {
F.v8015 = v197;
}
}
}
F.v8007 = ((*(yR99 *)rt_nil_check(F.v8007))).f_next;
F.v8009 = ((*(yR99 *)rt_nil_check(F.v8009))).f_next;
}
}
v1197 = rt_range(rt_add(v1197, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1191).p)[y_ix1(v1191, v1197)] = F.v8015;
((rt_int *)(v1193).p)[y_ix1(v1193, v1197)] = F.v8017;
((rt_int *)(v1195).p)[y_ix1(v1195, v1197)] = ((rt_int *)(v1195).p)[y_ix1(v1195, F.c_8030)];
if (i8031 == hi8032) break;
}}
v1197 = rt_range(rt_add(v1197, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1191).p)[y_ix1(v1191, v1197)] = v188;
((rt_int *)(v1193).p)[y_ix1(v1193, v1197)] = INT64_C(0);
((rt_int *)(v1195).p)[y_ix1(v1195, v1197)] = ((*(yR99 *)rt_nil_check(F.p3387))).f_line;
F.v8013 = v1233;
v1233 = F.v8011;
F.v8019 = yr1954_ParseModule();
v1233 = F.v8013;
yr3374_CompileModule(F.v8019);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3392_DeclareProcess(void * a_p3393) {
struct yf3394 F;
memset((void *)&F, 0, sizeof F);
F.p3393 = a_p3393;
F.v8042 = ((*(yR99 *)rt_nil_check(F.p3393))).f_sym;
((*(yR119 *)rt_nil_check(F.v8042))).f_monitor = v1716;
yr2278_DeclStorage(yr1045_T(y_str("rt_taskdecl", 11)), yr3148_Join(((*(yR119 *)rt_nil_check(F.v8042))).f_cname, yr1045_T(y_str("_d", 2)), INT64_C(0)));
F.v8044 = yr1849_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p3393))).f_line);
((*(yR99 *)rt_nil_check(F.v8044))).f_sym = F.v8042;
((*(yR99 *)rt_nil_check(F.v8044))).f_next = ((void * *)(v1727).p)[y_ix1(v1727, v1257)];
((void * *)(v1727).p)[y_ix1(v1727, v1257)] = F.v8044;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3398_AwaitProcesses(void) {
struct yf3399 F;
memset((void *)&F, 0, sizeof F);
F.v8050 = ((void * *)(v1727).p)[y_ix1(v1727, v1257)];
while ((!(F.v8050 == ((void *)0)))) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("rt_await_decl(&", 15)), yr2265_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8050))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3148_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8050))).f_sym))).f_cname, yr1045_T(y_str("_d", 2)), INT64_C(0))), yr1045_T(y_str(");", 2))));
F.v8050 = ((*(yR99 *)rt_nil_check(F.v8050))).f_next;
}
((void * *)(v1727).p)[y_ix1(v1727, v1257)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3403_Activate(void * a_p3404, void * a_p3405) {
struct yf3406 F;
memset((void *)&F, 0, sizeof F);
F.p3404 = a_p3404;
F.p3405 = a_p3405;
F.v8081 = ((*(yR119 *)rt_nil_check(F.p3405))).f_decl;
yr2920_CompileArgs(((*(yR99 *)rt_nil_check(F.p3404))).f_a, F.p3405, &F.v8061, &F.v8063);
if ((!(F.v8063 == ((*(yR119 *)rt_nil_check(F.p3405))).f_nparams))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3404))).f_line, ((*(yR119 *)rt_nil_check(F.p3405))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v8069 = yr1184_Fresh(y_str("pf", 2));
yr1116_Emit(yr3148_Join(yr1045_T(y_str("{ struct ", 9)), ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3405))).f_members))).f_name, yr3148_Join(yr1045_T(y_str(" *", 2)), F.v8069, yr3148_Join(yr1045_T(y_str(" = rt_alloc(sizeof *", 20)), F.v8069, yr1045_T(y_str(");", 2))))));
if ((((*(yR119 *)rt_nil_check(F.p3405))).f_level > INT64_C(1))) {
yr1116_Emit(yr3148_Join(F.v8069, yr1045_T(y_str("->up = ", 7)), yr3148_Join(yr2272_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3405))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1045_T(y_str(";", 1)), INT64_C(0))));
}
F.v8067 = ((*(yR119 *)rt_nil_check(F.p3405))).f_params;
F.v8065 = rt_range(rt_add(F.v8061, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v8067 == ((void *)0)))) {
if ((!yr2899_Fits(((*(yR114 *)rt_nil_check(F.v8067))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v8065)]))) {
yr2384_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v8065)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8067))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v8065)]);
}
F.v8075 = yr3148_Join(F.v8069, yr1045_T(y_str("->", 2)), ((*(yR114 *)rt_nil_check(F.v8067))).f_cname);
yr2929_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v8067))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v8065)], ((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v8065)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v8067))).f_cls == v887)) {
if ((!yr2761_IsVariable(((void * *)(v1494).p)[y_ix1(v1494, F.v8065)]))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v8065)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8067))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2937_SameAsFormal(((*(yR114 *)rt_nil_check(F.v8067))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v8065)]))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1494).p)[y_ix1(v1494, F.v8065)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8067))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr1116_Emit(yr3148_Join(F.v8075, yr1045_T(y_str(" = &", 4)), yr3148_Join(((rt_int *)(v1472).p)[y_ix1(v1472, F.v8065)], yr1045_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2334_Deep(((*(yR114 *)rt_nil_check(F.v8067))).f_rep)) {
F.v8071 = yr1184_Fresh(y_str("t", 1));
yr1116_Emit(yr3148_Join(yr1045_T(y_str("{ ", 2)), yr2359_CType(((*(yR114 *)rt_nil_check(F.v8067))).f_rep), yr3148_Join(yr1045_T(y_str(" ", 1)), F.v8071, yr3148_Join(yr1045_T(y_str(" = ", 3)), yr2733_Convert(((rt_int *)(v1472).p)[y_ix1(v1472, F.v8065)], ((*(yR114 *)rt_nil_check(F.v8067))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v8065)]), yr1045_T(y_str(";", 1))))));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8067))).f_rep))).f_kind == v827)) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_copy(y_desc_vector(", 21)), yr2365_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8067))).f_rep))).f_elem), yr3148_Join(yr1045_T(y_str("), &", 4)), F.v8075, yr3148_Join(yr1045_T(y_str(", &", 3)), F.v8071, yr1045_T(y_str("); }", 4))))));
} else {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_copy(", 7)), yr2365_DescOf(((*(yR114 *)rt_nil_check(F.v8067))).f_rep), yr3148_Join(yr1045_T(y_str(", &", 3)), F.v8075, yr3148_Join(yr1045_T(y_str(", &", 3)), F.v8071, yr1045_T(y_str("); }", 4))))));
}
} else {
yr1116_Emit(yr3148_Join(F.v8075, yr1045_T(y_str(" = ", 3)), yr3148_Join(yr2733_Convert(((rt_int *)(v1472).p)[y_ix1(v1472, F.v8065)], ((*(yR114 *)rt_nil_check(F.v8067))).f_rep, ((void * *)(v1483).p)[y_ix1(v1483, F.v8065)]), yr1045_T(y_str(";", 1)), INT64_C(0))));
}
F.v8065 = rt_range(rt_add(F.v8065, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8067 = ((*(yR114 *)rt_nil_check(F.v8067))).f_next;
}
v1496 = F.v8061;
F.v8077 = yr1045_T(y_str("0", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v8081))).f_e == ((void *)0)))) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.v8081))).f_e, v1326, &F.v8077, &F.v8083);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v8081))).f_line, v1326, F.v8083);
}
F.v8079 = yr1045_T(y_str("0, 0", 4));
if ((!(((*(yR99 *)rt_nil_check(F.v8081))).f_d == ((void *)0)))) {
yr2800_Expr(((*(yR99 *)rt_nil_check(F.v8081))).f_d, v1326, &F.v8073, &F.v8083);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.v8081))).f_line, v1326, F.v8083);
F.v8079 = yr3148_Join(yr1045_T(y_str("1, ", 3)), F.v8073, INT64_C(0));
}
yr1010_SB();
yr1021_SA(y_str("y_create(&", 10));
yr1028_ST(yr2265_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3405))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3148_Join(((*(yR119 *)rt_nil_check(F.p3405))).f_cname, yr1045_T(y_str("_d", 2)), INT64_C(0))));
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8077);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8079);
yr1021_SA(y_str(", ", 2));
yr1028_ST(((*(yR119 *)rt_nil_check(F.p3405))).f_cname);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8069);
yr1021_SA(y_str("); }", 4));
F.v8071 = yr1040_SE();
yr1116_Emit(F.v8071);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3410_MonitorPath(void * a_p3411) {
struct yf3412 F;
memset((void *)&F, 0, sizeof F);
F.p3411 = a_p3411;
{ rt_int rv8140 = yr3148_Join(yr1045_T(y_str("&", 1)), yr2265_Path(((*(yR119 *)rt_nil_check(F.p3411))).f_level, ((*(yR119 *)rt_nil_check(F.p3411))).f_cname), INT64_C(0));
return rv8140; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3416_EnterMonitor(void * a_p3417) {
struct yf3418 F;
memset((void *)&F, 0, sizeof F);
F.p3417 = a_p3417;
if ((((*(yR119 *)rt_nil_check(F.p3417))).f_kind == v860)) {
((*(yR119 *)rt_nil_check(F.p3417))).f_monitor = v1716;
}
if ((((*(yR119 *)rt_nil_check(F.p3417))).f_monitor == ((void *)0))) {
return;
}
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_mon_enter(", 12)), yr3410_MonitorPath(((*(yR119 *)rt_nil_check(F.p3417))).f_monitor), yr1045_T(y_str(");", 2))));
F.v8144 = yr1184_Fresh(y_str("mf", 2));
v1614 = 1;
yr1116_Emit(yr3148_Join(yr1045_T(y_str("rt_frame ", 9)), F.v8144, yr1045_T(y_str(";", 1))));
yr1010_SB();
yr1021_SA(y_str("if (!RT_TRY(", 12));
yr1028_ST(F.v8144);
yr1021_SA(y_str(")) { RT_POP(", 12));
yr1028_ST(F.v8144);
yr1021_SA(y_str("); ", 3));
if ((((*(yR119 *)rt_nil_check(F.p3417))).f_kind == v869)) {
yr1021_SA(y_str("y_mon_drop(", 11));
} else {
yr1021_SA(y_str("y_mon_leave(", 12));
}
yr1028_ST(yr3410_MonitorPath(((*(yR119 *)rt_nil_check(F.p3417))).f_monitor));
yr1021_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1116_Emit(yr1040_SE());
v1510 = rt_range(rt_add(v1510, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1508).p)[y_ix1(v1508, v1510)] = F.v8144;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3422_LeaveMonitor(void) {
struct yf3423 F;
memset((void *)&F, 0, sizeof F);
if ((v1585 == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1585))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1585))).f_kind == v869)) {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_mon_drop(", 11)), yr3410_MonitorPath(((*(yR119 *)rt_nil_check(v1585))).f_monitor), yr1045_T(y_str(");", 2))));
} else {
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_mon_leave(", 12)), yr3410_MonitorPath(((*(yR119 *)rt_nil_check(v1585))).f_monitor), yr1045_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3427_TerminateStatement(void * a_p3428) {
struct yf3429 F;
memset((void *)&F, 0, sizeof F);
F.p3428 = a_p3428;
if ((((v1585 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(v1585))).f_kind == v869))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3428))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3398_AwaitProcesses();
yr3422_LeaveMonitor();
yr3042_PopTo(v1513);
yr1122_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3433_DeclareSignal(void * a_p3434, rt_int a_p3435) {
struct yf3436 F;
memset((void *)&F, 0, sizeof F);
F.p3434 = a_p3434;
F.p3435 = a_p3435;
if ((v1716 == ((void *)0))) {
yr1162_FailS(F.p3435, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR119 *)rt_nil_check(F.p3434))).f_rep = yr2304_CopyRep(((*(yR119 *)rt_nil_check(F.p3434))).f_rep);
((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3434))).f_rep))).f_monitor = v1716;
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_sig_init(&", 12)), yr2285_SymPath(F.p3434), yr3148_Join(yr1045_T(y_str(", ", 2)), yr3410_MonitorPath(v1716), yr1045_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3440_DeclareSignalArray(void * a_p3441, rt_int a_p3442) {
struct yf3443 F;
memset((void *)&F, 0, sizeof F);
F.p3441 = a_p3441;
F.p3442 = a_p3442;
if ((v1716 == ((void *)0))) {
yr1162_FailS(F.p3442, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1116_Emit(yr3148_Join(yr1045_T(y_str("y_sig_init_all(", 15)), yr2365_DescOf(((*(yR119 *)rt_nil_check(F.p3441))).f_rep), yr3148_Join(yr1045_T(y_str(", &", 3)), yr2285_SymPath(F.p3441), yr3148_Join(yr1045_T(y_str(", ", 2)), yr3410_MonitorPath(v1716), yr1045_T(y_str(");", 2))))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3447_DeviceSignal(void * a_p3448, void * a_p3449) {
struct yf3450 F;
memset((void *)&F, 0, sizeof F);
F.p3448 = a_p3448;
F.p3449 = a_p3449;
yr2652_Manifest(F.p3449, &F.v8187, &F.v8189);
if ((!F.v8187)) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3449))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1010_SB();
yr1021_SA(y_str("y_device(&", 10));
yr1028_ST(yr2285_SymPath(F.p3448));
yr1021_SA(y_str(", ", 2));
yr1034_SI(F.v8189);
yr1021_SA(y_str(");", 2));
F.v8191 = yr1040_SE();
yr1116_Emit(F.v8191);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3454_Arg(void * a_p3455, rt_int a_p3456) {
struct yf3457 F;
memset((void *)&F, 0, sizeof F);
F.p3455 = a_p3455;
F.p3456 = a_p3456;
F.v8200 = ((*(yR99 *)rt_nil_check(F.p3455))).f_a;
F.v8202 = INT64_C(1);
while ((((!(F.v8200 == ((void *)0)))) && ((F.v8202 < F.p3456)))) {
F.v8200 = ((*(yR99 *)rt_nil_check(F.v8200))).f_next;
F.v8202 = rt_range(rt_add(F.v8202, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v8200 == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3455))).f_line, ((*(yR99 *)rt_nil_check(F.p3455))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv8207 = F.v8200;
return rv8207; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3461_NArgs(void * a_p3462, rt_int a_p3463) {
struct yf3464 F;
memset((void *)&F, 0, sizeof F);
F.p3462 = a_p3462;
F.p3463 = a_p3463;
if ((!(yr1864_Count(((*(yR99 *)rt_nil_check(F.p3462))).f_a) == F.p3463))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3462))).f_line, ((*(yR99 *)rt_nil_check(F.p3462))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3468_Call1(yarr a_p3470, rt_int a_p3471) {
struct yf3472 F;
memset((void *)&F, 0, sizeof F);
F.p3470 = a_p3470;
F.p3471 = a_p3471;
yr1010_SB();
yr1021_SA(F.p3470);
yr1021_SA(y_str("(", 1));
yr1028_ST(F.p3471);
yr1021_SA(y_str(")", 1));
{ rt_int rv8217 = yr1040_SE();
return rv8217; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3476_Addr(rt_int a_p3477) {
struct yf3478 F;
memset((void *)&F, 0, sizeof F);
F.p3477 = a_p3477;
{ rt_int rv8222 = yr3148_Join(yr1045_T(y_str("&", 1)), F.p3477, INT64_C(0));
return rv8222; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3482_StdVar(void * a_p3483, rt_int a_p3484, rt_int * a_p3485, void * * a_p3486) {
struct yf3487 F;
memset((void *)&F, 0, sizeof F);
F.p3483 = a_p3483;
F.p3484 = a_p3484;
F.p3485_o = a_p3485;
F.p3486_o = a_p3486;
yr2773_LValue(F.p3483, &F.p3485, &F.p3486);
if ((((!(F.p3484 == v842))) && ((!(((*(yR104 *)rt_nil_check(F.p3486))).f_kind == F.p3484))))) {
yr1010_SB();
yr1021_SA(y_str("a ", 2));
if ((F.p3484 == v815)) {
yr1021_SA(y_str("file", 4));
} else if ((F.p3484 == v821)) {
yr1021_SA(y_str("signal", 6));
} else if ((F.p3484 == v824)) {
yr1021_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3484 == v812)) {
yr1021_SA(y_str("pointer", 7));
} else {
yr1021_SA(y_str("variable", 8));
}
yr1021_SA(y_str(" is needed here", 15));
F.v8229 = yr1040_SE();
yr1141_Fail(((*(yR99 *)rt_nil_check(F.p3483))).f_line, F.v8229);
}
(*F.p3485_o) = F.p3485;
(*F.p3486_o) = F.p3486;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3491_NumArg(void * a_p3492, rt_int * a_p3493, void * * a_p3494) {
struct yf3495 F;
memset((void *)&F, 0, sizeof F);
F.p3492 = a_p3492;
F.p3493_o = a_p3493;
F.p3494_o = a_p3494;
yr2800_Expr(F.p3492, ((void *)0), &F.p3493, &F.p3494);
if ((!yr2316_IsNumeric(F.p3494))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3492))).f_line, y_str("a number is needed here", 23));
}
(*F.p3493_o) = F.p3493;
(*F.p3494_o) = F.p3494;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3499_IntArg(void * a_p3500) {
struct yf3501 F;
memset((void *)&F, 0, sizeof F);
F.p3500 = a_p3500;
yr2800_Expr(F.p3500, v1326, &F.v8245, &F.v8247);
if ((!(((*(yR104 *)rt_nil_check(F.v8247))).f_kind == v788))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3500))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv8249 = F.v8245;
return rv8249; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3505_CodeInsert(void * a_p3506) {
struct yf3507 F;
memset((void *)&F, 0, sizeof F);
F.p3506 = a_p3506;
F.v8253 = yr3454_Arg(F.p3506, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_8279, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8279, &F.v8281);
if ((!(((*(yR99 *)rt_nil_check(F.v8253))).f_kind == v755))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3506))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v8256 = ((*(yR99 *)rt_nil_check(F.v8253))).f_text;
F.v8266 = ((rt_int *)(v904).p)[y_ix1(v904, F.v8256)];
yr1010_SB();
F.v8262 = INT64_C(1);
while ((F.v8262 <= F.v8266)) {
F.v8268 = yr1087_TChar(F.v8256, F.v8262);
if ((F.v8268 == 39)) {
F.v8264 = rt_range(rt_add(F.v8262, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1087_TChar(F.v8256, F.v8264) == 39))) {
F.v8264 = rt_range(rt_add(F.v8264, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8258 = yr1052_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v8256)], F.v8262), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8264, F.v8262)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1015_SC(((unsigned char *)(v960).p)[y_ix1(v960, yr2635_CharValue(v1330, F.v8258, ((*(yR99 *)rt_nil_check(F.p3506))).f_line))]);
F.v8262 = rt_range(rt_add(F.v8264, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v8268 == 36)) {
F.v8264 = rt_range(rt_add(F.v8262, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v8264 <= F.v8266)) && ((yr992_IsLetter(yr1087_TChar(F.v8256, F.v8264)) || yr998_IsDigit(yr1087_TChar(F.v8256, F.v8264)))))) {
F.v8264 = rt_range(rt_add(F.v8264, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8258 = yr1052_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v8256)], F.v8262), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8264, F.v8262)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8270 = yr2193_Find(F.v8258);
if ((F.v8270 == ((void *)0))) {
v925 = INT64_C(0);
v939 = INT64_C(0);
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3506))).f_line, F.v8258, y_str(" in a code insert is not declared here", 38));
}
F.v8270 = yr2291_Real(F.v8270);
if ((((!(((*(yR119 *)rt_nil_check(F.v8270))).f_kind == v845))) && ((!(((*(yR119 *)rt_nil_check(F.v8270))).f_kind == v848))))) {
v925 = INT64_C(0);
v939 = INT64_C(0);
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3506))).f_line, F.v8258, y_str(" in a code insert is not a variable or constant", 47));
}
yr1028_ST(yr2781_Paren(yr2285_SymPath(F.v8270)));
F.v8262 = F.v8264;
} else {
yr1015_SC(F.v8268);
F.v8262 = rt_range(rt_add(F.v8262, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v8260 = yr1040_SE();
yr1116_Emit(F.v8260);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3511_ManifestScale(void * a_p3512, void * a_p3513) {
struct yf3514 F;
memset((void *)&F, 0, sizeof F);
F.p3512 = a_p3512;
F.p3513 = a_p3513;
yr2718_ManifestFix(F.p3512, &F.v8317, &F.v8319, &F.v8321);
if (((!F.v8317) || ((F.v8319 <= INT64_C(0))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3513))).f_line, ((*(yR99 *)rt_nil_check(F.p3513))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v8323 = yr2304_CopyRep(v1340);
((*(yR104 *)rt_nil_check(F.v8323))).f_abstract = 0;
yr2506_SetScale(F.v8323, F.v8319, F.v8321);
{ void * rv8327 = F.v8323;
return rv8327; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3518_StdCall(rt_int a_p3519, void * a_p3520, rt_int a_p3521, rt_int * a_p3522, void * * a_p3523) {
struct yf3524 F;
memset((void *)&F, 0, sizeof F);
F.p3519 = a_p3519;
F.p3520 = a_p3520;
F.p3521 = a_p3521;
F.p3522_o = a_p3522;
F.p3523_o = a_p3523;
F.p3523 = v1332;
F.p3522 = yr1045_T(y_str("((void)0)", 9));
F.v8363 = ((((((((((((((((F.p3519 == v1368)) || ((F.p3519 == v1371))) || ((F.p3519 == v1374))) || ((F.p3519 == v1377))) || ((F.p3519 == v1380))) || ((F.p3519 == v1386))) || ((F.p3519 == v1395))) || ((F.p3519 == v1401))) || ((F.p3519 == v1404))) || ((F.p3519 == v1428))) || ((F.p3519 == v1431))) || ((F.p3519 == v1440))) || ((F.p3519 == v1443))) || ((F.p3519 == v1446))) || ((F.p3519 == v1449)));
if ((F.p3521 && (!F.v8363))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR99 *)rt_nil_check(F.p3520))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3521) && F.v8363)) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR99 *)rt_nil_check(F.p3520))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3519 == v1350)) || ((F.p3519 == v1353)))) {
yr3461_NArgs(F.p3520, INT64_C(2));
yr2800_Expr(yr3454_Arg(F.p3520, INT64_C(1)), ((void *)0), &F.v8335, &F.v8345);
if ((!yr2322_IsArrayLike(F.v8345))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR99 *)rt_nil_check(F.p3520))).f_name, y_str(" of something that is not an array", 34));
}
F.v8337 = yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(2)));
yr2652_Manifest(yr3454_Arg(F.p3520, INT64_C(2)), &F.v8359, &F.v8357);
F.p3523 = yr2844_Unbounded(v1326);
if ((F.v8359 && ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v806)))) {
if ((((F.v8357 < INT64_C(1))) || ((F.v8357 > ((*(yR104 *)rt_nil_check(F.v8345))).f_nidx)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("no such dimension", 17));
}
F.v8351 = ((*(yR104 *)rt_nil_check(F.v8345))).f_idx;
F.lo8377 = INT64_C(2);
F.hi8378 = F.v8357;
{ rt_int hi8382 = F.hi8378;
for (rt_int i8381 = F.lo8377; i8381 <= hi8382; i8381++) { F.c_8380 = i8381;
F.v8351 = ((*(yR104 *)rt_nil_check(F.v8351))).f_link;
if (i8381 == hi8382) break;
}}
F.p3523 = F.v8351;
}
if ((F.p3519 == v1350)) {
F.p3522 = yr2850_Call2(y_str("y_low", 5), F.v8335, F.v8337);
} else {
F.p3522 = yr2850_Call2(y_str("y_high", 6), F.v8335, F.v8337);
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((((((F.p3519 == v1356)) || ((F.p3519 == v1359))) || ((F.p3519 == v1362))) || ((F.p3519 == v1365)))) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr2800_Expr(yr3454_Arg(F.p3520, INT64_C(1)), ((void *)0), &F.v8335, &F.v8345);
if ((!yr2310_IsDiscrete(F.v8345))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR99 *)rt_nil_check(F.p3520))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v797)) || ((((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v800)) && (!((*(yR104 *)rt_nil_check(F.v8345))).f_ordered))))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR99 *)rt_nil_check(F.p3520))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR104 *)rt_nil_check(F.v8345))).f_elem == ((void *)0)))) {
F.v8345 = ((*(yR104 *)rt_nil_check(F.v8345))).f_elem;
}
if ((((((F.p3519 == v1362)) || ((F.p3519 == v1365)))) && ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v788)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3519 == v1362)) {
F.p3523 = F.v8345;
F.p3522 = yr2440_LoText(F.v8345);
} else if ((F.p3519 == v1365)) {
F.p3523 = F.v8345;
F.p3522 = yr2446_HiText(F.v8345);
} else {
F.p3523 = yr2844_Unbounded(F.v8345);
yr1010_SB();
if ((!(((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v788))) {
yr1021_SA(y_str("rt_range(", 9));
}
if ((F.p3519 == v1356)) {
yr1021_SA(y_str("rt_add(", 7));
} else {
yr1021_SA(y_str("rt_sub(", 7));
}
yr1028_ST(F.v8335);
yr1021_SA(y_str(", 1)", 4));
if ((!(((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v788))) {
yr1021_SA(y_str(", 0, ", 5));
yr1034_SI(rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v8345))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1021_SA(y_str(")", 1));
}
F.p3522 = yr1040_SE();
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1368)) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v812, &F.v8335, &F.v8345);
if ((((*(yR104 *)rt_nil_check(F.v8345))).f_elem == ((void *)0))) {
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR104 *)rt_nil_check(F.v8345))).f_forward, y_str(" is not declared", 16));
}
F.v8351 = ((*(yR104 *)rt_nil_check(F.v8345))).f_elem;
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(F.v8335);
yr1021_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1028_ST(yr2359_CType(F.v8351));
yr1021_SA(y_str("));", 3));
if (yr2334_Deep(F.v8351)) {
yr1021_SA(y_str(" y_init(", 8));
yr1028_ST(yr2365_DescOf(F.v8351));
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8335);
yr1021_SA(y_str(");", 2));
}
yr1021_SA(y_str(" })", 3));
F.p3522 = yr1040_SE();
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1446)) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v812, &F.v8335, &F.v8345);
F.p3522 = yr3148_Join(yr1045_T(y_str("({ free(", 8)), F.v8335, yr3148_Join(yr1045_T(y_str("); ", 3)), F.v8335, yr1045_T(y_str(" = 0; })", 8))));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1371)) {
yr3461_NArgs(F.p3520, INT64_C(3));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v815, &F.v8335, &F.v8345);
yr2800_Expr(yr3454_Arg(F.p3520, INT64_C(2)), v1330, &F.v8337, &F.v8347);
if ((!yr2328_IsString(F.v8347))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2800_Expr(yr3454_Arg(F.p3520, INT64_C(3)), v1781, &F.v8339, &F.v8349);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3520))).f_line, v1781, F.v8349);
yr1010_SB();
yr1021_SA(y_str("y_open(&", 8));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8337);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8339);
yr1021_SA(y_str(")", 1));
F.p3522 = yr1040_SE();
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((((F.p3519 == v1374)) || ((F.p3519 == v1383)))) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v815, &F.v8335, &F.v8345);
if ((F.p3519 == v1374)) {
F.p3522 = yr3468_Call1(y_str("y_close", 7), yr3476_Addr(F.v8335));
} else {
F.p3523 = v1328;
F.p3522 = yr3468_Call1(y_str("y_check_eof", 11), yr3476_Addr(F.v8335));
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1377)) {
yr3461_NArgs(F.p3520, INT64_C(2));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v815, &F.v8335, &F.v8345);
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(2)), v842, &F.v8337, &F.v8347);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR104 *)rt_nil_check(F.v8345))).f_elem, F.v8347);
if ((yr2334_Deep(F.v8347) || ((((*(yR104 *)rt_nil_check(F.v8347))).f_kind == v812)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(yr2359_CType(F.v8347));
yr1021_SA(y_str(" g; y_get(&", 11));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", &g, sizeof g); ", 17));
yr1028_ST(F.v8337);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(yr2733_Convert(yr1045_T(y_str("g", 1)), F.v8347, ((*(yR104 *)rt_nil_check(F.v8345))).f_elem));
yr1021_SA(y_str("; })", 4));
F.p3522 = yr1040_SE();
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1380)) {
yr3461_NArgs(F.p3520, INT64_C(2));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v815, &F.v8335, &F.v8345);
yr2800_Expr(yr3454_Arg(F.p3520, INT64_C(2)), ((*(yR104 *)rt_nil_check(F.v8345))).f_elem, &F.v8337, &F.v8347);
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR104 *)rt_nil_check(F.v8345))).f_elem, F.v8347);
if ((yr2334_Deep(F.v8347) || ((((*(yR104 *)rt_nil_check(F.v8347))).f_kind == v812)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1010_SB();
yr1021_SA(y_str("({ ", 3));
yr1028_ST(yr2359_CType(((*(yR104 *)rt_nil_check(F.v8345))).f_elem));
yr1021_SA(y_str(" pv = ", 6));
yr1028_ST(yr2733_Convert(F.v8337, ((*(yR104 *)rt_nil_check(F.v8345))).f_elem, F.v8347));
yr1021_SA(y_str("; y_put(&", 9));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", &pv, sizeof pv); })", 21));
F.p3522 = yr1040_SE();
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1386)) {
F.v8353 = yr1864_Count(((*(yR99 *)rt_nil_check(F.p3520))).f_a);
if ((((F.v8353 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v8353, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v842, &F.v8335, &F.v8345);
if (((!((((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v827))))) || ((!(((*(yR104 *)rt_nil_check(F.v8345))).f_nidx == INT64_C(1)))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v8337 = yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(2)));
F.v8343 = yr1184_Fresh(y_str("at", 2));
yr1010_SB();
yr1021_SA(y_str("({ rt_int ", 10));
yr1028_ST(F.v8343);
yr1021_SA(y_str(" = ", 3));
yr1028_ST(F.v8337);
yr1021_SA(y_str(";", 1));
F.p3522 = yr1040_SE();
F.v8355 = INT64_C(3);
while ((F.v8355 < F.v8353)) {
yr2800_Expr(yr3454_Arg(F.p3520, F.v8355), ((*(yR104 *)rt_nil_check(F.v8345))).f_elem, &F.v8339, &F.v8349);
if (((!yr2322_IsArrayLike(F.v8349)) || (!yr2377_SameType(((*(yR104 *)rt_nil_check(F.v8345))).f_elem, ((*(yR104 *)rt_nil_check(F.v8349))).f_elem)))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v8341 = yr3499_IntArg(yr3454_Arg(F.p3520, rt_range(rt_add(F.v8355, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v8337 = yr3499_IntArg(yr3454_Arg(F.p3520, rt_range(rt_add(F.v8355, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1010_SB();
yr1028_ST(F.p3522);
yr1021_SA(y_str(" { rt_int mi = ", 15));
yr1028_ST(F.v8341);
yr1021_SA(y_str(", mj = ", 7));
yr1028_ST(F.v8337);
yr1021_SA(y_str("; y_move(&", 10));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8343);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8339);
yr1021_SA(y_str(", mi, mj, ", 10));
yr1028_ST(yr2365_DescOf(((*(yR104 *)rt_nil_check(F.v8345))).f_elem));
yr1021_SA(y_str("); if (mj >= mi) ", 17));
yr1028_ST(F.v8343);
yr1021_SA(y_str(" += mj - mi + 1; }", 18));
F.p3522 = yr1040_SE();
F.v8355 = rt_range(rt_add(F.v8355, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3522 = yr3148_Join(F.p3522, yr1045_T(y_str(" })", 3)), INT64_C(0));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((((F.p3519 == v1389)) || ((F.p3519 == v1392)))) {
yr3461_NArgs(F.p3520, INT64_C(2));
F.v8335 = yr3118_Cond(yr3454_Arg(F.p3520, INT64_C(1)));
F.v8337 = yr3118_Cond(yr3454_Arg(F.p3520, INT64_C(2)));
F.p3523 = v1328;
if ((F.p3519 == v1389)) {
F.p3522 = yr2859_Infix(yr2781_Paren(yr2859_Infix(F.v8335, y_str("!=", 2), yr1045_T(y_str("0", 1)))), y_str("&", 1), yr2781_Paren(yr2859_Infix(F.v8337, y_str("!=", 2), yr1045_T(y_str("0", 1)))));
} else {
F.p3522 = yr2859_Infix(yr2781_Paren(yr2859_Infix(F.v8335, y_str("!=", 2), yr1045_T(y_str("0", 1)))), y_str("|", 1), yr2781_Paren(yr2859_Infix(F.v8337, y_str("!=", 2), yr1045_T(y_str("0", 1)))));
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1395)) {
yr3461_NArgs(F.p3520, INT64_C(1));
F.p3522 = yr3468_Call1(y_str("rt_delay", 8), yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(1))));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1398)) {
yr3461_NArgs(F.p3520, INT64_C(0));
F.p3523 = yr2844_Unbounded(v1326);
F.p3522 = yr1045_T(y_str("rt_time()", 9));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if (((((F.p3519 == v1401)) || ((F.p3519 == v1404))) || ((F.p3519 == v1407)))) {
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v821, &F.v8335, &F.v8345);
if ((F.p3519 == v1401)) {
if ((yr1864_Count(((*(yR99 *)rt_nil_check(F.p3520))).f_a) == INT64_C(1))) {
F.v8337 = yr1045_T(y_str("1", 1));
} else {
yr3461_NArgs(F.p3520, INT64_C(2));
F.v8337 = yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(2)));
}
F.p3522 = yr2850_Call2(y_str("y_wait", 6), yr3476_Addr(F.v8335), F.v8337);
} else {
yr3461_NArgs(F.p3520, INT64_C(1));
if ((F.p3519 == v1404)) {
F.p3522 = yr3468_Call1(y_str("y_send", 6), yr3476_Addr(F.v8335));
} else {
F.p3523 = v1328;
F.p3522 = yr3468_Call1(y_str("y_awaited", 9), yr3476_Addr(F.v8335));
}
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if (((((F.p3519 == v1410)) || ((F.p3519 == v1413))) || ((F.p3519 == v1416)))) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3491_NumArg(yr3454_Arg(F.p3520, INT64_C(1)), &F.v8335, &F.v8345);
F.p3523 = yr2844_Unbounded(v1326);
if ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v788)) {
F.p3522 = F.v8335;
} else if ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v791)) {
yr1010_SB();
if ((F.p3519 == v1410)) {
yr1021_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3519 == v1413)) {
yr1021_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1021_SA(y_str("y_fix_near_integer(", 19));
}
yr1028_ST(F.v8335);
yr1021_SA(y_str(", INT64_C(", 10));
yr1034_SI(((*(yR104 *)rt_nil_check(F.v8345))).f_fsn);
yr1021_SA(y_str("), INT64_C(", 11));
yr1034_SI(((*(yR104 *)rt_nil_check(F.v8345))).f_fsd);
yr1021_SA(y_str("))", 2));
F.p3522 = yr1040_SE();
} else if ((F.p3519 == v1410)) {
F.p3522 = yr3468_Call1(y_str("y_floor", 7), F.v8335);
} else if ((F.p3519 == v1413)) {
F.p3522 = yr3468_Call1(y_str("y_ceiling", 9), F.v8335);
} else {
F.p3522 = yr3468_Call1(y_str("y_near_integer", 14), F.v8335);
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1422)) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3491_NumArg(yr3454_Arg(F.p3520, INT64_C(1)), &F.v8335, &F.v8345);
F.p3523 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v791)) {
F.p3522 = yr2883_FixToFloat(F.v8335, F.v8345);
} else {
F.p3522 = yr3148_Join(yr1045_T(y_str("((double)(", 10)), F.v8335, yr1045_T(y_str("))", 2)));
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1419)) {
yr3461_NArgs(F.p3520, INT64_C(2));
yr3491_NumArg(yr3454_Arg(F.p3520, INT64_C(1)), &F.v8335, &F.v8345);
F.p3523 = yr3511_ManifestScale(yr3454_Arg(F.p3520, INT64_C(2)), F.p3520);
if ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v794)) {
yr1010_SB();
yr1021_SA(y_str("y_fix_of_float(", 15));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", INT64_C(", 10));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p3523))).f_fsn);
yr1021_SA(y_str("), INT64_C(", 11));
yr1034_SI(((*(yR104 *)rt_nil_check(F.p3523))).f_fsd);
yr1021_SA(y_str("))", 2));
F.p3522 = yr1040_SE();
} else {
if ((((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v788)) {
F.v8349 = yr2304_CopyRep(v1340);
yr2506_SetScale(F.v8349, INT64_C(1), INT64_C(1));
F.v8335 = yr3148_Join(yr1045_T(y_str("((yfix)(", 8)), F.v8335, yr1045_T(y_str("))", 2)));
} else {
F.v8349 = F.v8345;
}
yr2489_ScaleRatio(F.v8349, F.p3523, &F.v8341, &F.v8343, &F.v8359);
yr1010_SB();
yr1021_SA(y_str("y_fix_near(", 11));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8341);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8343);
yr1021_SA(y_str(")", 1));
F.p3522 = yr1040_SE();
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1425)) {
yr3461_NArgs(F.p3520, INT64_C(3));
yr3491_NumArg(yr3454_Arg(F.p3520, INT64_C(1)), &F.v8335, &F.v8345);
yr3491_NumArg(yr3454_Arg(F.p3520, INT64_C(2)), &F.v8337, &F.v8347);
if ((((!(((*(yR104 *)rt_nil_check(F.v8345))).f_kind == v791))) || ((!(((*(yR104 *)rt_nil_check(F.v8347))).f_kind == v791))))) {
yr1162_FailS(((*(yR99 *)rt_nil_check(F.p3520))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2392_CheckType(((*(yR99 *)rt_nil_check(F.p3520))).f_line, F.v8345, F.v8347);
F.p3523 = yr3511_ManifestScale(yr3454_Arg(F.p3520, INT64_C(3)), F.p3520);
((*(yR104 *)rt_nil_check(F.p3523))).f_tid = ((*(yR104 *)rt_nil_check(F.v8345))).f_tid;
((*(yR104 *)rt_nil_check(F.p3523))).f_tname = ((*(yR104 *)rt_nil_check(F.v8345))).f_tname;
F.v8349 = yr2304_CopyRep(v1340);
yr2506_SetScale(F.v8349, yr2473_MulChk(((*(yR104 *)rt_nil_check(F.v8347))).f_fsn, ((*(yR104 *)rt_nil_check(F.p3523))).f_fsn, ((*(yR99 *)rt_nil_check(F.p3520))).f_line), yr2473_MulChk(((*(yR104 *)rt_nil_check(F.v8347))).f_fsd, ((*(yR104 *)rt_nil_check(F.p3523))).f_fsd, ((*(yR99 *)rt_nil_check(F.p3520))).f_line));
yr2489_ScaleRatio(F.v8345, F.v8349, &F.v8341, &F.v8343, &F.v8359);
yr1010_SB();
yr1021_SA(y_str("y_fix_div(", 10));
yr1028_ST(F.v8335);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8337);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8341);
yr1021_SA(y_str(", ", 2));
yr1028_ST(F.v8343);
yr1021_SA(y_str(")", 1));
F.p3522 = yr1040_SE();
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1434)) {
v1617 = rt_range(rt_add(v1617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3519 == v1428)) || ((F.p3519 == v1431))) || ((F.p3519 == v1434)))) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3482_StdVar(yr3454_Arg(F.p3520, INT64_C(1)), v824, &F.v8335, &F.v8345);
if ((F.p3519 == v1428)) {
F.p3522 = yr3468_Call1(y_str("rt_region_enter", 15), yr3476_Addr(F.v8335));
} else if ((F.p3519 == v1431)) {
F.p3522 = yr3468_Call1(y_str("rt_region_leave", 15), yr3476_Addr(F.v8335));
} else {
F.p3523 = v1328;
F.p3522 = yr3468_Call1(y_str("y_cond_claim", 12), yr3476_Addr(F.v8335));
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1437)) {
yr3461_NArgs(F.p3520, INT64_C(0));
F.p3523 = yr2844_Unbounded(v1326);
F.p3522 = yr1045_T(y_str("y_self()", 8));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1440)) {
yr3461_NArgs(F.p3520, INT64_C(2));
F.p3522 = yr2850_Call2(y_str("y_change_priority", 17), yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(1))), yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(2))));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1443)) {
yr3461_NArgs(F.p3520, INT64_C(1));
F.p3522 = yr3468_Call1(y_str("y_raise_termination", 19), yr3499_IntArg(yr3454_Arg(F.p3520, INT64_C(1))));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((F.p3519 == v1449)) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr3505_CodeInsert(F.p3520);
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
if ((((F.p3519 == v1452)) || ((F.p3519 == v1455)))) {
yr3461_NArgs(F.p3520, INT64_C(1));
yr2800_Expr(yr3454_Arg(F.p3520, INT64_C(1)), ((void *)0), &F.v8335, &F.v8345);
F.p3523 = yr2844_Unbounded(v1326);
if ((F.p3519 == v1452)) {
F.p3522 = yr3148_Join(yr1045_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v8335, yr1045_T(y_str("))", 2)));
} else {
F.p3522 = yr3148_Join(yr1045_T(y_str("((rt_int)sizeof(", 16)), F.v8335, yr1045_T(y_str("))", 2)));
}
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
}
yr1170_FailN(((*(yR99 *)rt_nil_check(F.p3520))).f_line, ((*(yR99 *)rt_nil_check(F.p3520))).f_name, y_str(" is not translated", 18));
(*F.p3522_o) = F.p3522;
(*F.p3523_o) = F.p3523;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3528_StdRep(yarr a_p3530, void * a_p3531) {
struct yf3532 F;
memset((void *)&F, 0, sizeof F);
F.p3530 = a_p3530;
F.p3531 = a_p3531;
F.v8572 = yr2163_NewSym(v854, yr1065_N(F.p3530));
((*(yR119 *)rt_nil_check(F.v8572))).f_rep = F.p3531;
yr2258_Define(F.v8572, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3536_StdOp(yarr a_p3538, rt_int a_p3539) {
struct yf3540 F;
memset((void *)&F, 0, sizeof F);
F.p3538 = a_p3538;
F.p3539 = a_p3539;
F.v8578 = yr2163_NewSym(v875, yr1065_N(F.p3538));
((*(yR119 *)rt_nil_check(F.v8578))).f_mval = F.p3539;
yr2258_Define(F.v8578, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3544_LitList(yarr a_p3546, yarr a_p3547, yarr a_p3548, rt_int a_p3549) {
struct yf3550 F;
memset((void *)&F, 0, sizeof F);
F.p3546 = a_p3546;
F.p3547 = a_p3547;
F.p3548 = a_p3548;
F.p3549 = a_p3549;
F.v8586 = ((void *)0);
F.v8588 = ((void *)0);
F.v8590 = ((void *)0);
F.v8590 = yr1849_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v8590))).f_name = yr1065_N(F.p3546);
yr1856_Link(&F.v8586, &F.v8588, F.v8590);
F.v8590 = yr1849_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v8590))).f_name = yr1065_N(F.p3547);
yr1856_Link(&F.v8586, &F.v8588, F.v8590);
if (F.p3549) {
F.v8590 = yr1849_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v8590))).f_name = yr1065_N(F.p3548);
yr1856_Link(&F.v8586, &F.v8588, F.v8590);
}
{ void * rv8594 = F.v8586;
return rv8594; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3554_Abstract(rt_int a_p3555, yarr a_p3557) {
struct yf3558 F;
memset((void *)&F, 0, sizeof F);
F.p3555 = a_p3555;
F.p3557 = a_p3557;
F.v8599 = yr2297_NewRep(F.p3555, yr1065_N(F.p3557));
((*(yR104 *)rt_nil_check(F.v8599))).f_abstract = 1;
{ void * rv8601 = F.v8599;
return rv8601; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3562_Predefine(void) {
struct yf3563 F;
memset((void *)&F, 0, sizeof F);
yr2170_OpenScope(0);
((void * *)(v1727).p)[y_ix1(v1727, v1257)] = ((void *)0);
v1326 = yr3554_Abstract(v788, y_str("INTEGER", 7));
v1340 = yr3554_Abstract(v791, y_str("FIXED", 5));
v1338 = yr3554_Abstract(v794, y_str("FLOATING", 8));
v1342 = yr2297_NewRep(v821, yr1065_N(y_str("SIGNAL", 6)));
v1344 = yr2297_NewRep(v824, yr1065_N(y_str("SEMAPHORE", 9)));
v1332 = yr2297_NewRep(v836, yr1065_N(y_str("no value", 8)));
v1346 = yr2297_NewRep(v842, yr1065_N(y_str("any", 3)));
v1328 = yr2297_NewRep(v797, yr1065_N(y_str("BOOLEAN", 7)));
((*(yR104 *)rt_nil_check(v1328))).f_lits = yr3544_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR104 *)rt_nil_check(v1328))).f_nlits = INT64_C(2);
yr2527_SetRange(v1328, INT64_C(0), INT64_C(1));
yr2521_DefineLits(v1328);
v1330 = yr2297_NewRep(v803, yr1065_N(y_str("ASCII", 5)));
((*(yR104 *)rt_nil_check(v1330))).f_ordered = 1;
((*(yR104 *)rt_nil_check(v1330))).f_nlits = INT64_C(128);
yr2527_SetRange(v1330, INT64_C(0), INT64_C(127));
v1781 = yr2297_NewRep(v800, yr1065_N(y_str("OPEN_MODE", 9)));
((*(yR104 *)rt_nil_check(v1781))).f_lits = yr3544_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR104 *)rt_nil_check(v1781))).f_nlits = INT64_C(3);
yr2527_SetRange(v1781, INT64_C(0), INT64_C(2));
yr2521_DefineLits(v1781);
yr3528_StdRep(y_str("INTEGER", 7), v1326);
yr3528_StdRep(y_str("FIXED", 5), v1340);
yr3528_StdRep(y_str("FLOATING", 8), v1338);
yr3528_StdRep(y_str("BOOLEAN", 7), v1328);
yr3528_StdRep(y_str("SIGNAL", 6), v1342);
yr3528_StdRep(y_str("SEMAPHORE", 9), v1344);
yr3528_StdRep(y_str("ASCII", 5), v1330);
yr3528_StdRep(y_str("STANDARD_ALPHABET", 17), v1330);
yr3528_StdRep(y_str("OPEN_MODE", 9), v1781);
yr3536_StdOp(y_str("LOW", 3), v1350);
yr3536_StdOp(y_str("HIGH", 4), v1353);
yr3536_StdOp(y_str("SUCC", 4), v1356);
yr3536_StdOp(y_str("PRED", 4), v1359);
yr3536_StdOp(y_str("FIRST", 5), v1362);
yr3536_StdOp(y_str("LAST", 4), v1365);
yr3536_StdOp(y_str("NEW", 3), v1368);
yr3536_StdOp(y_str("OPEN", 4), v1371);
yr3536_StdOp(y_str("CLOSE", 5), v1374);
yr3536_StdOp(y_str("GET", 3), v1377);
yr3536_StdOp(y_str("PUT", 3), v1380);
yr3536_StdOp(y_str("CHECK_EOF", 9), v1383);
yr3536_StdOp(y_str("MOVE", 4), v1386);
yr3536_StdOp(y_str("AND_LONG", 8), v1389);
yr3536_StdOp(y_str("OR_LONG", 7), v1392);
yr3536_StdOp(y_str("DELAY", 5), v1395);
yr3536_StdOp(y_str("CLOCK_TIME", 10), v1398);
yr3536_StdOp(y_str("WAIT", 4), v1401);
yr3536_StdOp(y_str("SEND", 4), v1404);
yr3536_StdOp(y_str("AWAITED", 7), v1407);
yr3536_StdOp(y_str("FLOOR", 5), v1410);
yr3536_StdOp(y_str("CEILING", 7), v1413);
yr3536_StdOp(y_str("NEAR_INTEGER", 12), v1416);
yr3536_StdOp(y_str("NEAR_FIXED", 10), v1419);
yr3536_StdOp(y_str("NEAR_FLOATING", 13), v1422);
yr3536_StdOp(y_str("FIXED_DIV", 9), v1425);
yr3536_StdOp(y_str("CLAIM", 5), v1428);
yr3536_StdOp(y_str("RELEASE", 7), v1431);
yr3536_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1434);
yr3536_StdOp(y_str("PROCESS_IDENTITY", 16), v1437);
yr3536_StdOp(y_str("CHANGE_PRIORITY", 15), v1440);
yr3536_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1443);
yr3536_StdOp(y_str("FREE_POINTER", 12), v1446);
yr3536_StdOp(y_str("C_CODE_INSERT", 13), v1449);
yr3536_StdOp(y_str("ADDR", 4), v1452);
yr3536_StdOp(y_str("EXTENT", 6), v1455);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3567_Translate(void) {
struct yf3568 F;
memset((void *)&F, 0, sizeof F);
F.v8679 = v1783;
yr2170_OpenScope(0);
((void * *)(v1727).p)[y_ix1(v1727, v1257)] = ((void *)0);
v1263 = INT64_C(0);
((void * *)(v1286).p)[y_ix1(v1286, v1257)] = v1783;
while ((!(F.v8679 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v8679))).f_ival == INT64_C(0))) {
yr3374_CompileModule(F.v8679);
}
F.v8679 = ((*(yR99 *)rt_nil_check(F.v8679))).f_next;
}
yr3345_ResolveLater(v1257);
yr3261_RunDeferred(INT64_C(0), INT64_C(0));
yr3398_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3572_WriteProgram(void) {
struct yf3573 F;
memset((void *)&F, 0, sizeof F);
yr1101_PutS(&v974, y_str("static void y_elaborate(void) {", 31));
yr1109_Append(&v974, &v980);
yr1101_PutS(&v974, y_str("}", 1));
yr1101_PutS(&v974, y_str("int main(int argc, char **argv) {", 33));
yr1101_PutS(&v974, y_str("y_lang();", 9));
yr1101_PutS(&v974, y_str("rt_init(argc, argv);", 20));
yr1101_PutS(&v974, y_str("y_elaborate();", 14));
yr1101_PutS(&v974, y_str("rt_main_done();", 15));
yr1101_PutS(&v974, y_str("return 0;", 9));
yr1101_PutS(&v974, y_str("}", 1));
yr1135_WriteBuf(v976);
yr1129_WriteTxt(yr1045_T(y_str("#include \"paleo.h\"", 18)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1129_WriteTxt(yr1045_T(y_str("#include <math.h>", 17)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1129_WriteTxt(yr1045_T(y_str("#include <string.h>", 19)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1129_WriteTxt(yr1045_T(y_str("#include <stdlib.h>", 19)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1135_WriteBuf(v962);
yr1135_WriteBuf(v964);
yr1135_WriteBuf(v966);
yr1135_WriteBuf(v968);
yr1135_WriteBuf(v970);
yr1135_WriteBuf(v972);
yr1135_WriteBuf(v974);
return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR99, f_kind), offsetof(yR99, f_line), offsetof(yR99, f_ival), offsetof(yR99, f_flag), offsetof(yR99, f_name), offsetof(yR99, f_text), offsetof(yR99, f_a), offsetof(yR99, f_b), offsetof(yR99, f_c), offsetof(yR99, f_d), offsetof(yR99, f_e), offsetof(yR99, f_next), offsetof(yR99, f_rep), offsetof(yR99, f_sym), 0}; const ydesc **f = rt_alloc(15 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; y_desc_record(&yd_100, sizeof(yR99), 14, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR104, f_kind), offsetof(yR104, f_tid), offsetof(yR104, f_tname), offsetof(yR104, f_lo), offsetof(yR104, f_hi), offsetof(yR104, f_mlo), offsetof(yR104, f_mhi), offsetof(yR104, f_hasm), offsetof(yR104, f_scale), offsetof(yR104, f_prec), offsetof(yR104, f_elem), offsetof(yR104, f_idx), offsetof(yR104, f_nidx), offsetof(yR104, f_link), offsetof(yR104, f_lits), offsetof(yR104, f_nlits), offsetof(yR104, f_fields), offsetof(yR104, f_selector), offsetof(yR104, f_cname), offsetof(yR104, f_dname), offsetof(yR104, f_dlevel), offsetof(yR104, f_deep), offsetof(yR104, f_abstract), offsetof(yR104, f_opaque), offsetof(yR104, f_opaqueops), offsetof(yR104, f_ordered), offsetof(yR104, f_forward), offsetof(yR104, f_fwdscope), offsetof(yR104, f_monitor), offsetof(yR104, f_serial), offsetof(yR104, f_sig), offsetof(yR104, f_fsn), offsetof(yR104, f_fsd), 0}; const ydesc **f = rt_alloc(34 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; f[30] = &y_d_int; f[31] = &y_d_int; f[32] = &y_d_int; y_desc_record(&yd_105, sizeof(yR104), 33, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR109, f_name), offsetof(yR109, f_rep), offsetof(yR109, f_isconst), offsetof(yR109, f_variant), offsetof(yR109, f_labels), offsetof(yR109, f_next), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_110, sizeof(yR109), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR114, f_name), offsetof(yR114, f_cls), offsetof(yR114, f_rep), offsetof(yR114, f_cname), offsetof(yR114, f_next), 0}; const ydesc **f = rt_alloc(6 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; y_desc_record(&yd_115, sizeof(yR114), 5, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR119, f_kind), offsetof(yR119, f_name), offsetof(yR119, f_rep), offsetof(yR119, f_cname), offsetof(yR119, f_level), offsetof(yR119, f_byref), offsetof(yR119, f_readonly), offsetof(yR119, f_mval), offsetof(yR119, f_hasmv), offsetof(yR119, f_params), offsetof(yR119, f_nparams), offsetof(yR119, f_ret), offsetof(yR119, f_func), offsetof(yR119, f_decl), offsetof(yR119, f_depth), offsetof(yR119, f_target), offsetof(yR119, f_members), offsetof(yR119, f_mnext), offsetof(yR119, f_chain), offsetof(yR119, f_stack), offsetof(yR119, f_alt), offsetof(yR119, f_monitor), offsetof(yR119, f_serial), offsetof(yR119, f_calls), 0}; const ydesc **f = rt_alloc(25 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; f[23] = &y_d_ptr; y_desc_record(&yd_120, sizeof(yR119), 24, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR124, f_syms), offsetof(yR124, f_closed), offsetof(yR124, f_module), offsetof(yR124, f_level), offsetof(yR124, f_deferred), offsetof(yR124, f_up), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_125, sizeof(yR124), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR129, f_t), offsetof(yR129, f_next), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; y_desc_record(&yd_130, sizeof(yR129), 2, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR134, f_head), offsetof(yR134, f_tail), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_ptr; y_desc_record(&yd_135, sizeof(yR134), 2, o, (const ydesc *const *)f); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64000000)}; y_desc_array(&yd_145, 1, lo, hi, &y_d_byte); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_155, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(2000000)}; y_desc_array(&yd_165, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(262143)}; y_desc_array(&yd_175, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(8191)}; y_desc_array(&yd_185, 1, lo, hi, &y_d_ptr); }
v188 = INT64_C(0);
v191 = INT64_C(1);
v194 = INT64_C(2);
v197 = INT64_C(3);
v200 = INT64_C(4);
v203 = INT64_C(5);
v206 = INT64_C(6);
v209 = INT64_C(7);
v212 = INT64_C(8);
v215 = INT64_C(1);
v218 = INT64_C(2);
v221 = INT64_C(3);
v224 = INT64_C(4);
v227 = INT64_C(5);
v230 = INT64_C(6);
v233 = INT64_C(7);
v236 = INT64_C(8);
v239 = INT64_C(9);
v242 = INT64_C(10);
v245 = INT64_C(11);
v248 = INT64_C(12);
v251 = INT64_C(13);
v254 = INT64_C(14);
v257 = INT64_C(15);
v260 = INT64_C(16);
v263 = INT64_C(17);
v266 = INT64_C(18);
v269 = INT64_C(19);
v272 = INT64_C(20);
v275 = INT64_C(21);
v278 = INT64_C(22);
v281 = INT64_C(23);
v284 = INT64_C(24);
v287 = INT64_C(25);
v290 = INT64_C(26);
v293 = INT64_C(27);
v296 = INT64_C(28);
v299 = INT64_C(29);
v302 = INT64_C(30);
v305 = INT64_C(31);
v308 = INT64_C(32);
v311 = INT64_C(33);
v314 = INT64_C(34);
v317 = INT64_C(35);
v320 = INT64_C(36);
v323 = INT64_C(37);
v326 = INT64_C(38);
v329 = INT64_C(39);
v332 = INT64_C(40);
v335 = INT64_C(41);
v338 = INT64_C(42);
v341 = INT64_C(43);
v344 = INT64_C(44);
v347 = INT64_C(45);
v350 = INT64_C(46);
v353 = INT64_C(47);
v356 = INT64_C(48);
v359 = INT64_C(49);
v362 = INT64_C(50);
v365 = INT64_C(51);
v368 = INT64_C(52);
v371 = INT64_C(53);
v374 = INT64_C(54);
v377 = INT64_C(55);
v380 = INT64_C(56);
v383 = INT64_C(57);
v386 = INT64_C(58);
v389 = INT64_C(59);
v392 = INT64_C(60);
v395 = INT64_C(61);
v398 = INT64_C(62);
v401 = INT64_C(63);
v404 = INT64_C(64);
v407 = INT64_C(65);
v410 = INT64_C(66);
v413 = INT64_C(67);
v416 = INT64_C(68);
v419 = INT64_C(69);
v422 = INT64_C(70);
v425 = INT64_C(71);
v428 = INT64_C(72);
v431 = INT64_C(73);
v434 = INT64_C(74);
v437 = INT64_C(75);
v440 = INT64_C(76);
v443 = INT64_C(77);
v446 = INT64_C(78);
v449 = INT64_C(79);
v452 = INT64_C(80);
v455 = INT64_C(81);
v458 = INT64_C(82);
v461 = INT64_C(83);
v464 = INT64_C(84);
v467 = INT64_C(85);
v470 = INT64_C(86);
v473 = INT64_C(87);
v476 = INT64_C(87);
v479 = INT64_C(88);
v482 = INT64_C(89);
v485 = INT64_C(90);
v488 = INT64_C(91);
v491 = INT64_C(92);
v494 = INT64_C(93);
v497 = INT64_C(94);
v500 = INT64_C(95);
v503 = INT64_C(96);
v506 = INT64_C(97);
v509 = INT64_C(98);
v512 = INT64_C(99);
v515 = INT64_C(100);
v518 = INT64_C(101);
v521 = INT64_C(102);
v524 = INT64_C(103);
v527 = INT64_C(104);
v530 = INT64_C(105);
v533 = INT64_C(106);
v536 = INT64_C(107);
v539 = INT64_C(108);
v542 = INT64_C(109);
v545 = INT64_C(110);
v548 = INT64_C(111);
v551 = INT64_C(112);
v554 = INT64_C(113);
v557 = INT64_C(114);
v560 = INT64_C(115);
v563 = INT64_C(116);
v566 = INT64_C(117);
v569 = INT64_C(118);
v572 = INT64_C(119);
v575 = INT64_C(120);
v578 = INT64_C(121);
v581 = INT64_C(122);
v584 = INT64_C(123);
v587 = INT64_C(124);
v590 = INT64_C(125);
v593 = INT64_C(126);
v596 = INT64_C(127);
v599 = INT64_C(128);
v602 = INT64_C(129);
v605 = INT64_C(129);
v608 = INT64_C(1);
v611 = INT64_C(2);
v614 = INT64_C(3);
v617 = INT64_C(4);
v620 = INT64_C(5);
v623 = INT64_C(6);
v626 = INT64_C(7);
v629 = INT64_C(8);
v632 = INT64_C(9);
v635 = INT64_C(10);
v638 = INT64_C(11);
v641 = INT64_C(12);
v644 = INT64_C(13);
v647 = INT64_C(14);
v650 = INT64_C(15);
v653 = INT64_C(16);
v656 = INT64_C(20);
v659 = INT64_C(21);
v662 = INT64_C(22);
v665 = INT64_C(23);
v668 = INT64_C(24);
v671 = INT64_C(25);
v674 = INT64_C(26);
v677 = INT64_C(27);
v680 = INT64_C(28);
v683 = INT64_C(29);
v686 = INT64_C(30);
v689 = INT64_C(31);
v692 = INT64_C(32);
v695 = INT64_C(33);
v698 = INT64_C(40);
v701 = INT64_C(41);
v704 = INT64_C(42);
v707 = INT64_C(43);
v710 = INT64_C(44);
v713 = INT64_C(45);
v716 = INT64_C(46);
v719 = INT64_C(47);
v722 = INT64_C(48);
v725 = INT64_C(49);
v728 = INT64_C(50);
v731 = INT64_C(51);
v734 = INT64_C(52);
v737 = INT64_C(53);
v740 = INT64_C(54);
v743 = INT64_C(60);
v746 = INT64_C(61);
v749 = INT64_C(62);
v752 = INT64_C(63);
v755 = INT64_C(64);
v758 = INT64_C(65);
v761 = INT64_C(66);
v764 = INT64_C(67);
v767 = INT64_C(68);
v770 = INT64_C(69);
v773 = INT64_C(70);
v776 = INT64_C(71);
v779 = INT64_C(72);
v782 = INT64_C(73);
v785 = INT64_C(74);
v788 = INT64_C(1);
v791 = INT64_C(2);
v794 = INT64_C(3);
v797 = INT64_C(4);
v800 = INT64_C(5);
v803 = INT64_C(6);
v806 = INT64_C(7);
v809 = INT64_C(8);
v812 = INT64_C(9);
v815 = INT64_C(10);
v818 = INT64_C(11);
v821 = INT64_C(12);
v824 = INT64_C(13);
v827 = INT64_C(14);
v830 = INT64_C(15);
v833 = INT64_C(16);
v836 = INT64_C(17);
v839 = INT64_C(18);
v842 = INT64_C(19);
v845 = INT64_C(1);
v848 = INT64_C(2);
v851 = INT64_C(3);
v854 = INT64_C(4);
v857 = INT64_C(5);
v860 = INT64_C(6);
v863 = INT64_C(7);
v866 = INT64_C(8);
v869 = INT64_C(9);
v872 = INT64_C(10);
v875 = INT64_C(11);
v878 = INT64_C(12);
v881 = INT64_C(1);
v884 = INT64_C(2);
v887 = INT64_C(3);
v890 = INT64_C(9223372036854775807);
y_init(&yd_145, &v897);
v899 = INT64_C(0);
y_init(&yd_155, &v902);
y_init(&yd_155, &v904);
v906 = INT64_C(0);
y_init(&yd_175, &v909);
v911 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_921, 1, lo, hi, &y_d_byte); }
y_init(&yd_921, &v923);
v925 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_935, 1, lo, hi, &y_d_int); }
y_init(&yd_935, &v937);
v939 = INT64_C(0);
v942 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_947, 1, lo, hi, &y_d_int); }
y_init(&yd_947, &v949);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_958, 1, lo, hi, &y_d_byte); }
y_init(&yd_958, &v960);
v984 = INT64_C(0);
y_init(&yd_165, &v1191);
y_init(&yd_165, &v1193);
y_init(&yd_165, &v1195);
v1197 = INT64_C(0);
v1200 = INT64_C(0);
v1203 = INT64_C(0);
v1206 = INT64_C(0);
v1209 = INT64_C(1);
v1212 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1222, 1, lo, hi, &y_d_int); }
y_init(&yd_1222, &v1224);
y_init(&yd_1222, &v1226);
y_init(&yd_1222, &v1228);
v1230 = INT64_C(0);
v1233 = INT64_C(1);
v1236 = ((void *)0);
v1238 = INT64_C(0);
v1241 = INT64_C(0);
y_init(&yd_185, &v1244);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1253, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1253, &v1255);
v1257 = INT64_C(-1);
v1260 = INT64_C(0);
v1263 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1273, 1, lo, hi, &y_d_int); }
y_init(&yd_1273, &v1275);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1284, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1284, &v1286);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1295, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1295, &v1297);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1306, 1, lo, hi, &y_d_int); }
y_init(&yd_1306, &v1308);
y_init(&yd_1306, &v1310);
v1312 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1322, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1322, &v1324);
v1348 = ((void *)0);
v1350 = INT64_C(1);
v1353 = INT64_C(2);
v1356 = INT64_C(3);
v1359 = INT64_C(4);
v1362 = INT64_C(5);
v1365 = INT64_C(6);
v1368 = INT64_C(7);
v1371 = INT64_C(8);
v1374 = INT64_C(9);
v1377 = INT64_C(10);
v1380 = INT64_C(11);
v1383 = INT64_C(12);
v1386 = INT64_C(13);
v1389 = INT64_C(14);
v1392 = INT64_C(15);
v1395 = INT64_C(16);
v1398 = INT64_C(17);
v1401 = INT64_C(18);
v1404 = INT64_C(19);
v1407 = INT64_C(20);
v1410 = INT64_C(21);
v1413 = INT64_C(22);
v1416 = INT64_C(23);
v1419 = INT64_C(24);
v1422 = INT64_C(25);
v1425 = INT64_C(26);
v1428 = INT64_C(27);
v1431 = INT64_C(28);
v1434 = INT64_C(29);
v1437 = INT64_C(30);
v1440 = INT64_C(31);
v1443 = INT64_C(32);
v1446 = INT64_C(33);
v1449 = INT64_C(34);
v1452 = INT64_C(35);
v1455 = INT64_C(36);
v1458 = INT64_C(0);
v1461 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1470, 1, lo, hi, &y_d_int); }
y_init(&yd_1470, &v1472);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1481, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1481, &v1483);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1492, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1492, &v1494);
v1496 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1506, 1, lo, hi, &y_d_int); }
y_init(&yd_1506, &v1508);
v1510 = INT64_C(0);
v1513 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1523, 1, lo, hi, &y_d_int); }
y_init(&yd_1523, &v1525);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1534, 1, lo, hi, &y_d_int); }
y_init(&yd_1534, &v1536);
v1538 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1548, 1, lo, hi, &y_d_int); }
y_init(&yd_1548, &v1550);
v1552 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1562, 1, lo, hi, &y_d_int); }
y_init(&yd_1562, &v1564);
y_init(&yd_1562, &v1566);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1575, 1, lo, hi, &y_d_int); }
y_init(&yd_1575, &v1577);
v1579 = INT64_C(0);
v1582 = INT64_C(0);
v1585 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1594, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1594, &v1596);
y_init(&yd_1594, &v1598);
v1600 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1610, 1, lo, hi, &y_d_int); }
y_init(&yd_1610, &v1612);
v1614 = 0;
v1617 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1627, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1627, &v1629);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1638, 1, lo, hi, &y_d_int); }
y_init(&yd_1638, &v1640);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1649, 1, lo, hi, &y_d_int); }
y_init(&yd_1649, &v1651);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1660, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1660, &v1662);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1671, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1671, &v1673);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1682, 1, lo, hi, &y_d_int); }
y_init(&yd_1682, &v1684);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1693, 1, lo, hi, &y_d_int); }
y_init(&yd_1693, &v1695);
y_init(&yd_1693, &v1697);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1706, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1706, &v1708);
v1710 = INT64_C(0);
v1713 = INT64_C(0);
v1716 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1725, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1725, &v1727);
v1729 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1739, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1739, &v1741);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1750, 1, lo, hi, &y_d_int); }
y_init(&yd_1750, &v1752);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1761, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1761, &v1763);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1772, 1, lo, hi, &y_d_int); }
y_init(&yd_1772, &v1774);
y_init(&yd_1772, &v1776);
v1778 = INT64_C(0);
/* yellowc */
yr987_InitChars();
yr1785_InitWords();
v1238 = yr1065_N(y_str("FROM", 4));
v1241 = yr1065_N(y_str("DIMENSION", 9));
v1458 = yr1045_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v895, y_str("OUTPUT", 6), 1);
y_open(&v978, y_str("ERROR", 5), 1);
yr1790_ReadSource();
yr1844_Lex();
v1783 = yr2158_ParseProgram();
yr3562_Predefine();
yr3567_Translate();
yr3572_WriteProgram();
y_close(&v895);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
