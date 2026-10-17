#include "paleo.h"
#include <string.h>
typedef struct R1 R1;
typedef struct A2 A2;
typedef struct R3 R3;
typedef struct R4 R4;
typedef struct A5 A5;
typedef struct A6 A6;
typedef struct R7 R7;
typedef struct R8 R8;
typedef struct R9 R9;
typedef struct A10 A10;
typedef struct R11 R11;
typedef struct R12 R12;
typedef struct R13 R13;
typedef struct R14 R14;
typedef struct R15 R15;
typedef struct R16 R16;
typedef struct R185 R185;
struct A2 { rt_int lo, hi; rt_int *p; };
struct R4 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R3 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R4 f_TX; };
struct A5 { rt_int lo, hi; R3 *p; };
struct A6 { rt_int lo, hi; R7 * *p; };
struct R8 { int dummy_; R9 * f_HEAD; R9 * f_TAIL; };
struct A10 { rt_int lo, hi; R8 *p; };
struct R1 { int dummy_; rstr f_ARENA; rt_int f_TOP; A2 f_SRC; rt_int f_NSRC; A5 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A6 f_TABLE; R7 * f_SCOPE; rt_int f_DEPTH; A10 f_OUT; R8 f_CODE; R11 * f_CTXS; R12 * f_RESULT; rt_int f_IN_ROUTINE; rt_int f_SERIAL; R13 * f_EXCS; R12 * f_TY_INT; R12 * f_TY_BOOL; R12 * f_TY_STR; R12 * f_TY_VOID; R12 * f_TY_NIL; R12 * f_TY_ASCII; R13 * f_ASCII_LITS; };
struct R14 { int dummy_; R4 f_C; R12 * f_T; };
struct R15 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R9 { int dummy_; R4 f_T; R9 * f_NEXT; };
struct R13 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R4 f_NAME; R13 * f_A; R13 * f_B; R13 * f_C; R13 * f_D; R13 * f_NEXT; };
struct R7 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; R4 f_NAME; R12 * f_T; R4 f_ACCESS; rt_int f_HASMV; rt_int f_MV; R13 * f_TS; rt_int f_BUSY; R4 f_FWD; R185 * f_PARAMS; R12 * f_RESULT; R7 * f_CHAIN; R7 * f_SNEXT; };
struct R12 { int dummy_; rt_int f_KIND; R13 * f_LO; R13 * f_HI; R13 * f_LEN; R4 f_GEN; R12 * f_ELEM; R12 * f_TARGET; R13 * f_TARGET_TS; R16 * f_FIELDS; R13 * f_LITS; R4 f_CNAME; };
struct R16 { int dummy_; R4 f_NAME; R12 * f_T; R16 * f_NEXT; };
struct R185 { int dummy_; R4 f_NAME; rt_int f_MODE; R12 * f_T; R185 * f_NEXT; };
struct R11 { int dummy_; rt_int f_KIND; R4 f_NAME; R11 * f_NEXT; };
static rt_int g_K_EOF;
static rt_int g_K_ID;
static rt_int g_K_RES;
static rt_int g_K_SYM;
static rt_int g_K_NUM;
static rt_int g_K_STR;
static rt_int g_K_ENUM;
static rt_int g_K_GEN;
static rt_int g_N_INT;
static rt_int g_N_BOOL;
static rt_int g_N_NIL;
static rt_int g_N_STR;
static rt_int g_N_PART;
static rt_int g_N_ENUMLIT;
static rt_int g_N_NAME;
static rt_int g_N_APPLY;
static rt_int g_N_FIELD;
static rt_int g_N_DEREF;
static rt_int g_N_INDEX;
static rt_int g_N_SUBSTR;
static rt_int g_N_UNOP;
static rt_int g_N_BINOP;
static rt_int g_N_IN;
static rt_int g_N_RANGE;
static rt_int g_N_PAREN;
static rt_int g_N_RECCONS;
static rt_int g_N_FINIT;
static rt_int g_N_NEW;
static rt_int g_N_NULL;
static rt_int g_N_ASSIGN;
static rt_int g_N_CALL;
static rt_int g_N_IF;
static rt_int g_N_ARM;
static rt_int g_N_CASE;
static rt_int g_N_LOOP;
static rt_int g_N_FOR;
static rt_int g_N_EXIT;
static rt_int g_N_RETURN;
static rt_int g_N_BLOCK;
static rt_int g_N_SIGNAL;
static rt_int g_N_ASSERT;
static rt_int g_N_EXCEPT;
static rt_int g_N_HANDLER;
static rt_int g_N_BODY;
static rt_int g_N_CONST;
static rt_int g_N_VAR;
static rt_int g_N_TYPE;
static rt_int g_N_ROUTINE;
static rt_int g_N_PARAM;
static rt_int g_N_SEGMENT;
static rt_int g_N_IDENT;
static rt_int g_TS_NAME;
static rt_int g_TS_ARRAY;
static rt_int g_TS_RECORD;
static rt_int g_TS_ENUM;
static rt_int g_TS_GEN;
static rt_int g_M_IN;
static rt_int g_M_INOUT;
static rt_int g_M_OUT;
static rt_int g_T_INT;
static rt_int g_T_BOOL;
static rt_int g_T_ENUM;
static rt_int g_T_STR;
static rt_int g_T_REC;
static rt_int g_T_PTR;
static rt_int g_T_ARR;
static rt_int g_T_VOID;
static rt_int g_T_NIL;
static rt_int g_Y_VAR;
static rt_int g_Y_CONST;
static rt_int g_Y_TYPE;
static rt_int g_Y_ROUTINE;
static rt_int g_Y_GEN;
static rt_int g_Y_BUILTIN;
static rt_int g_O_TYPEDEFS;
static rt_int g_O_STRUCTS;
static rt_int g_O_GLOBALS;
static rt_int g_O_PROTOS;
static rt_int g_O_HELPERS;
static rt_int g_O_FUNCS;
static rt_int g_O_MAINHEAD;
static rt_int g_O_MAIN;
static rt_int g_O_LAST;
static rt_int g_ARENA_SIZE;
static rt_int g_MAX_SOURCE;
static rt_int g_MAX_TOKENS;
static rt_int g_HASH_SIZE;
static rstr g_GRAPHIC;
static R1 * g_W;
static void I_A2(A2 *x);
static void S_A2(A2 *d, A2 s);
static void I_R4(R4 *x);
static void S_R4(R4 *d, R4 s);
static void I_R3(R3 *x);
static void S_R3(R3 *d, R3 s);
static void I_A5(A5 *x);
static void S_A5(A5 *d, A5 s);
static void I_A6(A6 *x);
static void S_A6(A6 *d, A6 s);
static void I_R8(R8 *x);
static void S_R8(R8 *d, R8 s);
static void I_A10(A10 *x);
static void S_A10(A10 *d, A10 s);
static void I_R1(R1 *x);
static void S_R1(R1 *d, R1 s);
static rstr r_CHAR_OF(rt_int p_C);
static rt_int r_CODE_OF(rstr p_S);
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3);
static rt_int r_HASH_OF(rstr p_S);
static R4 r_MK(rstr p_S);
static R4 r_MKN(rstr p_S);
static rstr r_STR(R4 p_T, rt_int p_L);
static rt_int r_TEQ(R4 p_A, R4 p_B);
static rt_int r_TEQS(R4 p_A, rstr p_S);
static R4 r_CAT(R4 p_A, R4 p_B);
static R4 r_CATS(R4 p_A, rstr p_S);
static R4 r_FMT4(rstr p_P, R4 p_A, R4 p_B, R4 p_C, R4 p_D);
static R4 r_FMT1(rstr p_P, R4 p_A);
static R4 r_FMT2(rstr p_P, R4 p_A, R4 p_B);
static R4 r_FMT3(rstr p_P, R4 p_A, R4 p_B, R4 p_C);
static R4 r_NUM(rt_int p_V);
static R4 r_NEW_NAME(rstr p_BASE);
static void r_APPEND(R4 p_T, R8 *p_B);
static void r_EMIT(rt_int p_SEC, R4 p_T);
static void r_EMITS(rt_int p_SEC, rstr p_S);
static void r_CODE(R4 p_T);
static void r_CODES(rstr p_S);
static void r_PUT_BUF(R8 p_B);
static void r_WRITE_OUTPUT(void);
static void r_FAIL(rt_int p_LINE, rstr p_MSG);
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R4 p_T);
static void r_READ_SOURCE(void);
static rt_int r_AT_SRC(rt_int p_I);
static rt_int r_IS_LETTER(rt_int p_C);
static rt_int r_IS_DIGIT(rt_int p_C);
static rt_int r_IS_IDCHAR(rt_int p_C);
static R4 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND);
static rt_int r_IS_RESERVED(R4 p_T);
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R4 p_TX);
static rt_int r_SYMBOL_LENGTH(rt_int p_I);
static void r_LEX(void);
static R3 r_CUR(void);
static R3 r_AHEAD(rt_int p_K);
static rt_int r_LINE_NOW(void);
static rt_int r_IS(rstr p_S);
static rt_int r_IS_KIND(rt_int p_K);
static void r_SKIP(void);
static rt_int r_ACCEPT(rstr p_S);
static void r_EXPECT(rstr p_S);
static R4 r_IDENT(void);
static R13 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE);
static void r_ADD_LIST(R13 * p_N, R13 * *p_HEAD, R13 * *p_TAIL);
static rt_int r_LIST_LENGTH(R13 * p_N);
static R13 * r_IDENT_NODE(void);
static R13 * r_IDENT_LIST(void);
static R13 * r_PARSE_COMPILATION(void);
static void r_SKIP_PARENS(void);
static R13 * r_PARSE_SEGMENT(void);
static R13 * r_PARSE_BODY(void);
static R13 * r_PARSE_ROUTINES(void);
static R13 * r_PARSE_DECLARATIONS(void);
static R13 * r_PARSE_OBJECT_DECL(void);
static R13 * r_PARSE_TYPE_DECL(void);
static R13 * r_PARSE_TYPE_SPEC(void);
static R13 * r_PARSE_RANGE(void);
static R13 * r_PARSE_ROUTINE(void);
static rt_int r_AT_BODY_END(void);
static R13 * r_PARSE_STATEMENTS(void);
static R13 * r_PARSE_STATEMENT(void);
static R13 * r_PARSE_UNLABELED(void);
static R13 * r_PARSE_IF(void);
static rt_int r_RANGE_AHEAD(void);
static R13 * r_PARSE_CASE_LABEL(void);
static R13 * r_PARSE_CASE(void);
static R13 * r_PARSE_LOOP(void);
static R13 * r_BIN_NODE(R4 p_OP, rt_int p_LINE, R13 * p_A, R13 * p_B);
static R13 * r_PARSE_EXPR(void);
static R13 * r_PARSE_CONJ(void);
static R13 * r_PARSE_RELATION(void);
static R13 * r_PARSE_SUM(void);
static R13 * r_PARSE_TERM(void);
static R13 * r_PARSE_FACTOR(void);
static R13 * r_PARSE_SECONDARY(void);
static void r_PARSE_ARGS(R13 * p_N);
static R13 * r_PARSE_POSTFIX(void);
static R13 * r_PARSE_ATOM(void);
static R4 r_NO_TEXT(void);
static R7 * r_NEW_SYM(rt_int p_KIND, R4 p_NAME);
static rt_int r_BUCKET(R4 p_NAME);
static R7 * r_LOOKUP(R4 p_NAME);
static R7 * r_LOOKUPS(rstr p_NAME);
static void r_DEFINE(R7 * p_Y, rt_int p_LINE);
static void r_OPEN_SCOPE(void);
static void r_CLOSE_SCOPE(void);
static R12 * r_NEW_TYP(rt_int p_KIND);
static void r_PREDEF_TYPE(rstr p_NAME, R12 * p_T);
static void r_PREDEF_BUILTIN(rstr p_NAME);
static void r_PREDEFINE(void);
static rt_int r_ASCII_CODE(R4 p_T);
static R4 r_RECORD_NAME(R7 * p_Y);
static R12 * r_RESOLVE(R13 * p_TS);
static R12 * r_RESOLVE_NAMED(R13 * p_TS, R4 p_CNAME);
static R12 * r_TARGET(R12 * p_T);
static rt_int r_IS_SCALAR(R12 * p_T);
static R4 r_CTYPE(R12 * p_T);
static rt_int r_NEEDS_INIT(R12 * p_T);
static R4 r_FIELD_C(R4 p_NAME);
static R4 r_INIT_CODE(R12 * p_T, R4 p_LV);
static R4 r_ASSIGN_CODE(R12 * p_T, R4 p_LV, R4 p_RV);
static R4 r_RANGE_CHECK(R12 * p_T, R4 p_V);
static void r_COMPLETE(R12 * p_T);
static void I_R14(R14 *x);
static void S_R14(R14 *d, R14 s);
static R14 r_MKET(R4 p_C, R12 * p_T);
static R4 r_CSTRING(R4 p_T);
static void I_R15(R15 *x);
static void S_R15(R15 *d, R15 s);
static R15 r_MANIFEST(R13 * p_E);
static rt_int r_LIT_INDEX(R12 * p_T, R4 p_NAME);
static R16 * r_FIND_FIELD(R12 * p_T, R4 p_NAME);
static R14 r_EXPR(R13 * p_E, R12 * p_WANT);
static R14 r_NAME_EXPR(R13 * p_E);
static R14 r_BINARY(R13 * p_E);
static R13 * r_ALL_ARGS(R13 * p_E);
static R13 * r_COPY_NODE(R13 * p_N);
static R14 r_CALL(R13 * p_E);
static R14 r_BUILTIN(R13 * p_E);
static void r_PUSH_CTX(rt_int p_KIND, R4 p_NAME);
static void r_POP_CTX(void);
static R11 * r_LEAVE(rt_int p_KIND);
static R4 r_EXC_NAME(R4 p_NAME);
static void r_DECLARE_TYPES(R13 * p_DECLS);
static void r_DECLARE_OBJECTS(R13 * p_D, rt_int p_GLOB);
static void r_BODY(R13 * p_B);
static void r_OPEN_BODY(R13 * p_B);
static void r_STMT(R13 * p_S);
static void r_ASSIGN_STMT(R13 * p_S);
static void r_CASE_STMT(R13 * p_S);
static void r_DECLARE_ROUTINE(R13 * p_R);
static void r_ROUTINE_BODY(R13 * p_R);
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST);
static void r_TRANSLATE(R13 * p_SEGS);
static void I_R9(R9 *x);
static void S_R9(R9 *d, R9 s);
static void I_R13(R13 *x);
static void S_R13(R13 *d, R13 s);
static void I_R7(R7 *x);
static void S_R7(R7 *d, R7 s);
static void I_R12(R12 *x);
static void S_R12(R12 *d, R12 s);
static void I_R16(R16 *x);
static void S_R16(R16 *d, R16 s);
static void I_R185(R185 *x);
static void S_R185(R185 *d, R185 s);
static void I_R11(R11 *x);
static void S_R11(R11 *d, R11 s);
static void I_A2(A2 *x) { x->lo = ((rt_int)0LL); x->hi = g_MAX_SOURCE; rt_int n = x->hi >= x->lo ? x->hi - x->lo + 1 : 0; x->p = rt_alloc(sizeof *x->p * (size_t)(n ? n : 1)); }
static void S_A2(A2 *d, A2 s) { rt_int n = d->hi - d->lo; if (n != s.hi - s.lo) rt_raise(RT_B_SIZE); for (rt_int i = 0; i <= n; i++) d->p[i] = s.p[i]; }
static void I_R4(R4 *x) {  }
static void S_R4(R4 *d, R4 s) {  d->f_AT = s.f_AT; d->f_LEN = s.f_LEN; d->f_H = s.f_H; }
static void I_R3(R3 *x) {  }
static void S_R3(R3 *d, R3 s) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R4(&d->f_TX, s.f_TX); }
static void I_A5(A5 *x) { x->lo = ((rt_int)0LL); x->hi = g_MAX_TOKENS; rt_int n = x->hi >= x->lo ? x->hi - x->lo + 1 : 0; x->p = rt_alloc(sizeof *x->p * (size_t)(n ? n : 1)); }
static void S_A5(A5 *d, A5 s) { rt_int n = d->hi - d->lo; if (n != s.hi - s.lo) rt_raise(RT_B_SIZE); for (rt_int i = 0; i <= n; i++) S_R3(&d->p[i], s.p[i]); }
static void I_A6(A6 *x) { x->lo = ((rt_int)0LL); x->hi = g_HASH_SIZE; rt_int n = x->hi >= x->lo ? x->hi - x->lo + 1 : 0; x->p = rt_alloc(sizeof *x->p * (size_t)(n ? n : 1)); }
static void S_A6(A6 *d, A6 s) { rt_int n = d->hi - d->lo; if (n != s.hi - s.lo) rt_raise(RT_B_SIZE); for (rt_int i = 0; i <= n; i++) d->p[i] = s.p[i]; }
static void I_R8(R8 *x) {  }
static void S_R8(R8 *d, R8 s) {  d->f_HEAD = s.f_HEAD; d->f_TAIL = s.f_TAIL; }
static void I_A10(A10 *x) { x->lo = ((rt_int)0LL); x->hi = g_O_LAST; rt_int n = x->hi >= x->lo ? x->hi - x->lo + 1 : 0; x->p = rt_alloc(sizeof *x->p * (size_t)(n ? n : 1)); }
static void S_A10(A10 *d, A10 s) { rt_int n = d->hi - d->lo; if (n != s.hi - s.lo) rt_raise(RT_B_SIZE); for (rt_int i = 0; i <= n; i++) S_R8(&d->p[i], s.p[i]); }
static void I_R1(R1 *x) {  x->f_ARENA = rt_str_new(g_ARENA_SIZE); I_A2(&x->f_SRC); I_A5(&x->f_TOKS); I_A6(&x->f_TABLE); I_A10(&x->f_OUT); }
static void S_R1(R1 *d, R1 s) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A2(&d->f_SRC, s.f_SRC); d->f_NSRC = s.f_NSRC; S_A5(&d->f_TOKS, s.f_TOKS); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A6(&d->f_TABLE, s.f_TABLE); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A10(&d->f_OUT, s.f_OUT); S_R8(&d->f_CODE, s.f_CODE); d->f_CTXS = s.f_CTXS; d->f_RESULT = s.f_RESULT; d->f_IN_ROUTINE = s.f_IN_ROUTINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_ASCII_LITS = s.f_ASCII_LITS; }
static void I_R14(R14 *x) {  }
static void S_R14(R14 *d, R14 s) {  S_R4(&d->f_C, s.f_C); d->f_T = s.f_T; }
static void I_R15(R15 *x) {  }
static void S_R15(R15 *d, R15 s) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static void I_R9(R9 *x) {  }
static void S_R9(R9 *d, R9 s) {  S_R4(&d->f_T, s.f_T); d->f_NEXT = s.f_NEXT; }
static void I_R13(R13 *x) {  }
static void S_R13(R13 *d, R13 s) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R4(&d->f_NAME, s.f_NAME); d->f_A = s.f_A; d->f_B = s.f_B; d->f_C = s.f_C; d->f_D = s.f_D; d->f_NEXT = s.f_NEXT; }
static void I_R7(R7 *x) {  }
static void S_R7(R7 *d, R7 s) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; S_R4(&d->f_NAME, s.f_NAME); d->f_T = s.f_T; S_R4(&d->f_ACCESS, s.f_ACCESS); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R4(&d->f_FWD, s.f_FWD); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static void I_R12(R12 *x) {  }
static void S_R12(R12 *d, R12 s) {  d->f_KIND = s.f_KIND; d->f_LO = s.f_LO; d->f_HI = s.f_HI; d->f_LEN = s.f_LEN; S_R4(&d->f_GEN, s.f_GEN); d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; S_R4(&d->f_CNAME, s.f_CNAME); }
static void I_R16(R16 *x) {  }
static void S_R16(R16 *d, R16 s) {  S_R4(&d->f_NAME, s.f_NAME); d->f_T = s.f_T; d->f_NEXT = s.f_NEXT; }
static void I_R185(R185 *x) {  }
static void S_R185(R185 *d, R185 s) {  S_R4(&d->f_NAME, s.f_NAME); d->f_MODE = s.f_MODE; d->f_T = s.f_T; d->f_NEXT = s.f_NEXT; }
static void I_R11(R11 *x) {  }
static void S_R11(R11 *d, R11 s) {  d->f_KIND = s.f_KIND; S_R4(&d->f_NAME, s.f_NAME); d->f_NEXT = s.f_NEXT; }
static rstr r_CHAR_OF(rt_int p_C) {
if (({ rt_int iv17 = p_C; (((rt_int)32LL)) <= iv17 && iv17 <= (((rt_int)126LL)); }))
{
return rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
}
else if ((p_C == ((rt_int)9LL)))
{
return rt_str("\011", 1);
}
else if ((p_C == ((rt_int)10LL)))
{
return rt_str("\012", 1);
}
else if ((p_C == ((rt_int)13LL)))
{
return rt_str("\015", 1);
}
return rt_str("\?", 1);
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) {
{ rt_int it19_lo = ((rt_int)0LL), it19_hi = ((rt_int)94LL);
for (rt_int it19 = it19_lo; it19 <= it19_hi; it19++) {
{
if (rt_b_eq(rt_b_slice(g_GRAPHIC, it19, it19), p_S))
{
return rt_add(it19, ((rt_int)32LL));
}
}
} } L_end18: ;
if (rt_b_eq(p_S, rt_str("\011", 1)))
{
return ((rt_int)9LL);
}
else if (rt_b_eq(p_S, rt_str("\012", 1)))
{
return ((rt_int)10LL);
}
return ((rt_int)13LL);
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) {
return rt_rem(rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3), g_HASH_SIZE);
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) {
if (((p_S).len == ((rt_int)0LL)))
{
return ((rt_int)0LL);
}
return r_HASH_CODES((p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((p_S).len, ((rt_int)2LL)), rt_quot((p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((p_S).len, ((rt_int)1LL)), rt_sub((p_S).len, ((rt_int)1LL)))));
rt_raise(RT_X_INIT);
}
static R4 r_MK(rstr p_S) {
rt_int l_AT_20;
memset(&l_AT_20, 0, sizeof l_AT_20);
l_AT_20 = ((*(R1 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_20, (p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R1 *)rt_nil_check(g_W))).f_ARENA, l_AT_20, rt_sub(rt_add(l_AT_20, (p_S).len), ((rt_int)1LL)), p_S);
((*(R1 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_20, (p_S).len);
return ((R4){0, .f_AT = l_AT_20, .f_LEN = (p_S).len, .f_H = rt_neg(((rt_int)1LL))});
rt_raise(RT_X_INIT);
}
static R4 r_MKN(rstr p_S) {
R4 l_T_21;
memset(&l_T_21, 0, sizeof l_T_21);
S_R4(&l_T_21, r_MK(p_S));
(l_T_21).f_H = r_HASH_OF(p_S);
return l_T_21;
rt_raise(RT_X_INIT);
}
static rstr r_STR(R4 p_T, rt_int p_L) {
return rt_b_slice(((*(R1 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R4 p_A, R4 p_B) {
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
return 0;
}
return rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R4 p_A, rstr p_S) {
if ((!((p_A).f_LEN == (p_S).len)))
{
return 0;
}
return rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
rt_raise(RT_X_INIT);
}
static R4 r_CAT(R4 p_A, R4 p_B) {
return r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
rt_raise(RT_X_INIT);
}
static R4 r_CATS(R4 p_A, rstr p_S) {
return r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), p_S));
rt_raise(RT_X_INIT);
}
static R4 r_FMT4(rstr p_P, R4 p_A, R4 p_B, R4 p_C, R4 p_D) {
rt_int l_AT_22;
memset(&l_AT_22, 0, sizeof l_AT_22);
l_AT_22 = ((*(R1 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_23;
memset(&l_N_23, 0, sizeof l_N_23);
l_N_23 = ((rt_int)0LL);
rt_int l_START_24;
memset(&l_START_24, 0, sizeof l_START_24);
l_START_24 = ((rt_int)0LL);
R4 l_R_25;
memset(&l_R_25, 0, sizeof l_R_25);
{ rt_int it27_lo = ((rt_int)0LL), it27_hi = rt_sub((p_P).len, ((rt_int)1LL));
for (rt_int it27 = it27_lo; it27 <= it27_hi; it27++) {
{
if (rt_b_eq(rt_b_slice(p_P, it27, it27), rt_str("@", 1)))
{
S_R4(&l_R_25, r_MK(rt_b_slice(p_P, l_START_24, rt_sub(it27, ((rt_int)1LL)))));
switch (l_N_23) {
case 0:
{
S_R4(&l_R_25, r_MK(r_STR(p_A, (p_A).f_LEN)));
}
break;
case 1:
{
S_R4(&l_R_25, r_MK(r_STR(p_B, (p_B).f_LEN)));
}
break;
case 2:
{
S_R4(&l_R_25, r_MK(r_STR(p_C, (p_C).f_LEN)));
}
break;
default:
{
S_R4(&l_R_25, r_MK(r_STR(p_D, (p_D).f_LEN)));
}
break;
}
l_N_23 = rt_add(l_N_23, ((rt_int)1LL));
l_START_24 = rt_add(it27, ((rt_int)1LL));
}
}
} } L_end26: ;
S_R4(&l_R_25, r_MK(rt_b_slice(p_P, l_START_24, rt_sub((p_P).len, ((rt_int)1LL)))));
return ((R4){0, .f_AT = l_AT_22, .f_LEN = rt_sub(((*(R1 *)rt_nil_check(g_W))).f_TOP, l_AT_22), .f_H = rt_neg(((rt_int)1LL))});
rt_raise(RT_X_INIT);
}
static R4 r_FMT1(rstr p_P, R4 p_A) {
return r_FMT4(p_P, p_A, p_A, p_A, p_A);
rt_raise(RT_X_INIT);
}
static R4 r_FMT2(rstr p_P, R4 p_A, R4 p_B) {
return r_FMT4(p_P, p_A, p_B, p_B, p_B);
rt_raise(RT_X_INIT);
}
static R4 r_FMT3(rstr p_P, R4 p_A, R4 p_B, R4 p_C) {
return r_FMT4(p_P, p_A, p_B, p_C, p_C);
rt_raise(RT_X_INIT);
}
static R4 r_NUM(rt_int p_V) {
return r_MK(rt_b_image(p_V));
rt_raise(RT_X_INIT);
}
static R4 r_NEW_NAME(rstr p_BASE) {
((*(R1 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R1 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
return r_MK(rt_str_cat(p_BASE, rt_b_image(((*(R1 *)rt_nil_check(g_W))).f_SERIAL)));
rt_raise(RT_X_INIT);
}
static void r_APPEND(R4 p_T, R8 *p_B) {
R9 * l_C_28;
memset(&l_C_28, 0, sizeof l_C_28);
l_C_28 = ({ R9 *p = rt_alloc(sizeof *p); I_R9(&(*p)); p; });
S_R4(&((*(R9 *)rt_nil_check(l_C_28))).f_T, p_T);
((*(R9 *)rt_nil_check(l_C_28))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_28;
}
else
{
((*(R9 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_28;
}
((*p_B)).f_TAIL = l_C_28;
}
static void r_EMIT(rt_int p_SEC, R4 p_T) {
r_APPEND(p_T, &(((*(R1 *)rt_nil_check(g_W))).f_OUT).p[rt_index(p_SEC, (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo, (((*(R1 *)rt_nil_check(g_W))).f_OUT).hi) - (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo]);
}
static void r_EMITS(rt_int p_SEC, rstr p_S) {
r_APPEND(r_MK(p_S), &(((*(R1 *)rt_nil_check(g_W))).f_OUT).p[rt_index(p_SEC, (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo, (((*(R1 *)rt_nil_check(g_W))).f_OUT).hi) - (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo]);
}
static void r_CODE(R4 p_T) {
r_APPEND(p_T, &((*(R1 *)rt_nil_check(g_W))).f_CODE);
}
static void r_CODES(rstr p_S) {
r_APPEND(r_MK(p_S), &((*(R1 *)rt_nil_check(g_W))).f_CODE);
}
static void r_PUT_BUF(R8 p_B) {
R9 * l_C_29;
memset(&l_C_29, 0, sizeof l_C_29);
l_C_29 = (p_B).f_HEAD;
for (;;) {
if ((l_C_29 == NULL)) goto L_end30;
{
{
R4 l_T_31;
memset(&l_T_31, 0, sizeof l_T_31);
S_R4(&l_T_31, ((*(R9 *)rt_nil_check(l_C_29))).f_T);
rt_putln(r_STR(l_T_31, (l_T_31).f_LEN));
}
l_C_29 = ((*(R9 *)rt_nil_check(l_C_29))).f_NEXT;
}
} L_end30: ;
}
static void r_WRITE_OUTPUT(void) {
{ rt_int it33_lo = ((rt_int)0LL), it33_hi = g_O_LAST;
for (rt_int it33 = it33_lo; it33 <= it33_hi; it33++) {
{
r_PUT_BUF((((*(R1 *)rt_nil_check(g_W))).f_OUT).p[rt_index(it33, (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo, (((*(R1 *)rt_nil_check(g_W))).f_OUT).hi) - (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo]);
}
} } L_end32: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R4 p_T) {
r_FAIL(p_LINE, rt_str_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) {
rt_int l_C_34;
memset(&l_C_34, 0, sizeof l_C_34);
l_C_34 = rt_b_get_code();
for (;;) {
if ((l_C_34 < ((rt_int)0LL))) goto L_end35;
{
if ((((*(R1 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_NSRC, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo] = l_C_34;
((*(R1 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R1 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_34 = rt_b_get_code();
}
} L_end35: ;
(((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_NSRC, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) {
if ((p_I >= ((*(R1 *)rt_nil_check(g_W))).f_NSRC))
{
return ((rt_int)0LL);
}
return (((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(p_I, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo];
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) {
return ({ rt_int iv36 = p_C; (((rt_int)65LL)) <= iv36 && iv36 <= (((rt_int)90LL)); });
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) {
return ({ rt_int iv37 = p_C; (((rt_int)48LL)) <= iv37 && iv37 <= (((rt_int)57LL)); });
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) {
return ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
rt_raise(RT_X_INIT);
}
static R4 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) {
rt_int l_AT_38;
memset(&l_AT_38, 0, sizeof l_AT_38);
l_AT_38 = ((*(R1 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_39;
memset(&l_L_39, 0, sizeof l_L_39);
l_L_39 = rt_sub(p_BEYOND, p_FIRST);
R4 l_T_40;
memset(&l_T_40, 0, sizeof l_T_40);
if ((rt_add(l_AT_38, l_L_39) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it42_lo = p_FIRST, it42_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it42 = it42_lo; it42 <= it42_hi; it42++) {
{
rt_b_slice_assign(&((*(R1 *)rt_nil_check(g_W))).f_ARENA, ((*(R1 *)rt_nil_check(g_W))).f_TOP, ((*(R1 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(it42, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo]));
((*(R1 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R1 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
} } L_end41: ;
S_R4(&l_T_40, ((R4){0, .f_AT = l_AT_38, .f_LEN = l_L_39, .f_H = ((rt_int)0LL)}));
if ((l_L_39 > ((rt_int)0LL)))
{
(l_T_40).f_H = r_HASH_CODES(l_L_39, (((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(p_FIRST, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo], (((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(rt_add(p_FIRST, rt_quot(l_L_39, ((rt_int)2LL))), (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo], (((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo]);
}
return l_T_40;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R4 p_T) {
rstr l_WORDS_43;
l_WORDS_43 = rt_str_new(((rt_int)290LL));
rt_b_assign(&l_WORDS_43, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_44;
memset(&l_L_44, 0, sizeof l_L_44);
l_L_44 = (p_T).f_LEN;
{ rt_int it46_lo = ((rt_int)0LL), it46_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_44), ((rt_int)2LL));
for (rt_int it46 = it46_lo; it46 <= it46_hi; it46++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_43, it46, it46), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_43, rt_add(rt_add(it46, l_L_44), ((rt_int)1LL)), rt_add(rt_add(it46, l_L_44), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_43, rt_add(it46, ((rt_int)1LL)), rt_add(it46, l_L_44)), r_STR(p_T, l_L_44)))
{
return 1;
}
}
}
}
} } L_end45: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R4 p_TX) {
if ((((*(R1 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R3(&(((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_NTOKS, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo], ((R3){0, .f_KIND = p_KIND, .f_LINE = p_LINE, .f_IV = p_IV, .f_TX = p_TX}));
((*(R1 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R1 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) {
rt_int l_C_47;
memset(&l_C_47, 0, sizeof l_C_47);
l_C_47 = r_AT_SRC(p_I);
rt_int l_D_48;
memset(&l_D_48, 0, sizeof l_D_48);
l_D_48 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_47 == ((rt_int)45LL)) && (l_D_48 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
return ((rt_int)3LL);
}
if (((((((((((l_C_47 == ((rt_int)58LL)) && (l_D_48 == ((rt_int)61LL))) || ((l_C_47 == ((rt_int)45LL)) && (l_D_48 == ((rt_int)62LL)))) || ((l_C_47 == ((rt_int)60LL)) && (l_D_48 == ((rt_int)61LL)))) || ((l_C_47 == ((rt_int)62LL)) && (l_D_48 == ((rt_int)61LL)))) || ((l_C_47 == ((rt_int)60LL)) && (l_D_48 == ((rt_int)62LL)))) || ((l_C_47 == ((rt_int)42LL)) && (l_D_48 == ((rt_int)42LL)))) || ((l_C_47 == ((rt_int)47LL)) && (l_D_48 == ((rt_int)47LL)))) || ((l_C_47 == ((rt_int)36LL)) && (l_D_48 == ((rt_int)36LL)))) || ((l_C_47 == ((rt_int)33LL)) && (l_D_48 == ((rt_int)33LL)))))
{
return ((rt_int)2LL);
}
return ((rt_int)1LL);
rt_raise(RT_X_INIT);
}
static void r_LEX(void) {
rt_int l_I_49;
memset(&l_I_49, 0, sizeof l_I_49);
l_I_49 = ((rt_int)0LL);
rt_int l_LINE_50;
memset(&l_LINE_50, 0, sizeof l_LINE_50);
l_LINE_50 = ((rt_int)1LL);
rt_int l_C_51;
memset(&l_C_51, 0, sizeof l_C_51);
rt_int l_J_52;
memset(&l_J_52, 0, sizeof l_J_52);
rt_int l_V_53;
memset(&l_V_53, 0, sizeof l_V_53);
for (;;) {
if ((l_I_49 >= ((*(R1 *)rt_nil_check(g_W))).f_NSRC)) goto L_end54;
{
l_C_51 = (((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(l_I_49, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo];
if ((l_C_51 == ((rt_int)10LL)))
{
l_LINE_50 = rt_add(l_LINE_50, ((rt_int)1LL));
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
}
else if (((((l_C_51 == ((rt_int)32LL)) || (l_C_51 == ((rt_int)9LL))) || (l_C_51 == ((rt_int)13LL))) || (l_C_51 == ((rt_int)12LL))))
{
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
}
else if ((l_C_51 == ((rt_int)37LL)))
{
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
for (;;) {
if ((((l_I_49 >= ((*(R1 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(l_I_49, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo] == ((rt_int)37LL))) || ((((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(l_I_49, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo] == ((rt_int)10LL)))) goto L_end55;
{
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
}
} L_end55: ;
if ((r_AT_SRC(l_I_49) == ((rt_int)37LL)))
{
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
}
}
else if ((l_C_51 == ((rt_int)39LL)))
{
{
rt_int l_AT_56;
memset(&l_AT_56, 0, sizeof l_AT_56);
l_AT_56 = ((*(R1 *)rt_nil_check(g_W))).f_TOP;
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
for (;;) {
{
if (((l_I_49 >= ((*(R1 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(l_I_49, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_50, rt_str("a string must end on its line", 29));
}
if (((((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(l_I_49, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_49, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
goto L_end57;
}
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R1 *)rt_nil_check(g_W))).f_ARENA, ((*(R1 *)rt_nil_check(g_W))).f_TOP, ((*(R1 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R1 *)rt_nil_check(g_W))).f_SRC).p[rt_index(l_I_49, (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo, (((*(R1 *)rt_nil_check(g_W))).f_SRC).hi) - (((*(R1 *)rt_nil_check(g_W))).f_SRC).lo]));
((*(R1 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R1 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_49 = rt_add(l_I_49, ((rt_int)1LL));
}
} L_end57: ;
r_ADD_TOKEN(g_K_STR, l_LINE_50, ((rt_int)0LL), ((R4){0, .f_AT = l_AT_56, .f_LEN = rt_sub(((*(R1 *)rt_nil_check(g_W))).f_TOP, l_AT_56), .f_H = rt_neg(((rt_int)1LL))}));
}
}
else if ((l_C_51 == ((rt_int)92LL)))
{
l_J_52 = rt_add(l_I_49, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_52) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_52, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_52, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_52, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_52 = rt_add(l_I_49, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_52) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_52, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_52 = rt_add(l_I_49, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_52) == ((rt_int)91LL)) || (r_AT_SRC(l_J_52) == ((rt_int)93LL))))
{
l_J_52 = rt_add(l_I_49, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_52)))) goto L_end58;
{
l_J_52 = rt_add(l_J_52, ((rt_int)1LL));
}
} L_end58: ;
if ((l_J_52 == rt_add(l_I_49, ((rt_int)1LL))))
{
r_FAIL(l_LINE_50, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_50, ((rt_int)0LL), r_SOURCE_TEXT(l_I_49, l_J_52));
l_I_49 = l_J_52;
}
else if ((l_C_51 == ((rt_int)63LL)))
{
l_J_52 = rt_add(l_I_49, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_52)))) goto L_end59;
{
l_J_52 = rt_add(l_J_52, ((rt_int)1LL));
}
} L_end59: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_50, ((rt_int)0LL), r_SOURCE_TEXT(l_I_49, l_J_52));
l_I_49 = l_J_52;
}
else if (r_IS_LETTER(l_C_51))
{
l_J_52 = l_I_49;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_52)))) goto L_end60;
{
l_J_52 = rt_add(l_J_52, ((rt_int)1LL));
}
} L_end60: ;
{
R4 l_T_61;
memset(&l_T_61, 0, sizeof l_T_61);
S_R4(&l_T_61, r_SOURCE_TEXT(l_I_49, l_J_52));
if (r_IS_RESERVED(l_T_61))
{
r_ADD_TOKEN(g_K_RES, l_LINE_50, ((rt_int)0LL), l_T_61);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_50, ((rt_int)0LL), l_T_61);
}
}
l_I_49 = l_J_52;
}
else if (r_IS_DIGIT(l_C_51))
{
l_J_52 = l_I_49;
l_V_53 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_52)))) goto L_end62;
{
l_V_53 = rt_sub(rt_add(rt_mul(l_V_53, ((rt_int)10LL)), r_AT_SRC(l_J_52)), ((rt_int)48LL));
l_J_52 = rt_add(l_J_52, ((rt_int)1LL));
}
} L_end62: ;
r_ADD_TOKEN(g_K_NUM, l_LINE_50, l_V_53, r_SOURCE_TEXT(l_I_49, l_J_52));
l_I_49 = l_J_52;
}
else
{
l_J_52 = rt_add(l_I_49, r_SYMBOL_LENGTH(l_I_49));
r_ADD_TOKEN(g_K_SYM, l_LINE_50, ((rt_int)0LL), r_SOURCE_TEXT(l_I_49, l_J_52));
l_I_49 = l_J_52;
}
}
} L_end54: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_50, ((rt_int)0LL), r_MK(rt_str("", 0)));
}
static R3 r_CUR(void) {
return (((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_POS, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo];
rt_raise(RT_X_INIT);
}
static R3 r_AHEAD(rt_int p_K) {
if ((rt_add(((*(R1 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R1 *)rt_nil_check(g_W))).f_NTOKS))
{
return (((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(rt_sub(((*(R1 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo];
}
return (((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(rt_add(((*(R1 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo];
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) {
return ((((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_POS, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo]).f_LINE;
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) {
R3 l_T_63;
memset(&l_T_63, 0, sizeof l_T_63);
S_R3(&l_T_63, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_POS, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo]);
if (((((l_T_63).f_KIND == g_K_SYM) || ((l_T_63).f_KIND == g_K_RES)) || ((l_T_63).f_KIND == g_K_ID)))
{
return r_TEQS((l_T_63).f_TX, p_S);
}
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) {
return (((((*(R1 *)rt_nil_check(g_W))).f_TOKS).p[rt_index(((*(R1 *)rt_nil_check(g_W))).f_POS, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo, (((*(R1 *)rt_nil_check(g_W))).f_TOKS).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TOKS).lo]).f_KIND == p_K);
rt_raise(RT_X_INIT);
}
static void r_SKIP(void) {
if ((((*(R1 *)rt_nil_check(g_W))).f_POS < rt_sub(((*(R1 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL))))
{
((*(R1 *)rt_nil_check(g_W))).f_POS = rt_add(((*(R1 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL));
}
}
static rt_int r_ACCEPT(rstr p_S) {
if (r_IS(p_S))
{
r_SKIP();
return 1;
}
return 0;
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) {
if ((!r_ACCEPT(p_S)))
{
{
R4 l_T_64;
memset(&l_T_64, 0, sizeof l_T_64);
S_R4(&l_T_64, (r_CUR()).f_TX);
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_64, (l_T_64).f_LEN)));
}
}
}
static R4 r_IDENT(void) {
R3 l_T_65;
memset(&l_T_65, 0, sizeof l_T_65);
S_R3(&l_T_65, r_CUR());
if ((!((l_T_65).f_KIND == g_K_ID)))
{
r_FAILT((l_T_65).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_65).f_TX);
}
r_SKIP();
return (l_T_65).f_TX;
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) {
R13 * l_N_66;
memset(&l_N_66, 0, sizeof l_N_66);
l_N_66 = ({ R13 *p = rt_alloc(sizeof *p); I_R13(&(*p)); p; });
S_R13(&(*(R13 *)rt_nil_check(l_N_66)), ((R13){0, .f_KIND = p_KIND, .f_LINE = p_LINE, .f_IV = ((rt_int)0LL), .f_NAME = ((R4){0, .f_AT = ((rt_int)0LL), .f_LEN = ((rt_int)0LL), .f_H = ((rt_int)0LL)}), .f_A = NULL, .f_B = NULL, .f_C = NULL, .f_D = NULL, .f_NEXT = NULL}));
return l_N_66;
rt_raise(RT_X_INIT);
}
static void r_ADD_LIST(R13 * p_N, R13 * *p_HEAD, R13 * *p_TAIL) {
if (((*p_HEAD) == NULL))
{
(*p_HEAD) = p_N;
}
else
{
((*(R13 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_N;
}
(*p_TAIL) = p_N;
}
static rt_int r_LIST_LENGTH(R13 * p_N) {
rt_int l_K_67;
memset(&l_K_67, 0, sizeof l_K_67);
l_K_67 = ((rt_int)0LL);
R13 * l_P_68;
memset(&l_P_68, 0, sizeof l_P_68);
l_P_68 = p_N;
for (;;) {
if ((l_P_68 == NULL)) goto L_end69;
{
l_K_67 = rt_add(l_K_67, ((rt_int)1LL));
l_P_68 = ((*(R13 *)rt_nil_check(l_P_68))).f_NEXT;
}
} L_end69: ;
return l_K_67;
rt_raise(RT_X_INIT);
}
static R13 * r_IDENT_NODE(void) {
R13 * l_N_70;
memset(&l_N_70, 0, sizeof l_N_70);
l_N_70 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R4(&((*(R13 *)rt_nil_check(l_N_70))).f_NAME, r_IDENT());
return l_N_70;
rt_raise(RT_X_INIT);
}
static R13 * r_IDENT_LIST(void) {
R13 * l_HEAD_71;
memset(&l_HEAD_71, 0, sizeof l_HEAD_71);
l_HEAD_71 = NULL;
R13 * l_TAIL_72;
memset(&l_TAIL_72, 0, sizeof l_TAIL_72);
l_TAIL_72 = NULL;
r_ADD_LIST(r_IDENT_NODE(), &l_HEAD_71, &l_TAIL_72);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end73;
{
r_ADD_LIST(r_IDENT_NODE(), &l_HEAD_71, &l_TAIL_72);
}
} L_end73: ;
return l_HEAD_71;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_COMPILATION(void) {
R13 * l_HEAD_74;
memset(&l_HEAD_74, 0, sizeof l_HEAD_74);
l_HEAD_74 = NULL;
R13 * l_TAIL_75;
memset(&l_TAIL_75, 0, sizeof l_TAIL_75);
l_TAIL_75 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end76;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_74, &l_TAIL_75);
}
} L_end76: ;
return l_HEAD_74;
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) {
rt_int l_DEPTH_77;
memset(&l_DEPTH_77, 0, sizeof l_DEPTH_77);
l_DEPTH_77 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_77 = rt_add(l_DEPTH_77, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_77 = rt_sub(l_DEPTH_77, ((rt_int)1LL));
}
r_SKIP();
}
if ((l_DEPTH_77 == ((rt_int)0LL))) goto L_end78;
} L_end78: ;
}
static R13 * r_PARSE_SEGMENT(void) {
R13 * l_S_79;
memset(&l_S_79, 0, sizeof l_S_79);
l_S_79 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R13 * l_HEAD_80;
memset(&l_HEAD_80, 0, sizeof l_HEAD_80);
l_HEAD_80 = NULL;
R13 * l_TAIL_81;
memset(&l_TAIL_81, 0, sizeof l_TAIL_81);
l_TAIL_81 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R13 *)rt_nil_check(l_S_79))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R4(&((*(R13 *)rt_nil_check(l_S_79))).f_NAME, r_IDENT());
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
r_ADD_LIST(r_IDENT_NODE(), &l_HEAD_80, &l_TAIL_81);
if (r_IS(rt_str("(", 1)))
{
r_SKIP_PARENS();
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end82;
} L_end82: ;
r_EXPECT(rt_str(")", 1));
((*(R13 *)rt_nil_check(l_S_79))).f_A = l_HEAD_80;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_IS(rt_str("(", 1)))
{
r_SKIP_PARENS();
}
else
{
r_SKIP();
}
}
r_EXPECT(rt_str(";", 1));
((*(R13 *)rt_nil_check(l_S_79))).f_B = r_PARSE_BODY();
((*(R13 *)rt_nil_check(l_S_79))).f_C = r_PARSE_ROUTINES();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
if ((!r_TEQ(r_IDENT(), ((*(R13 *)rt_nil_check(l_S_79))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("END SEGMENT expected for ", 25), ((*(R13 *)rt_nil_check(l_S_79))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
return l_S_79;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_BODY(void) {
R13 * l_B_83;
memset(&l_B_83, 0, sizeof l_B_83);
l_B_83 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R13 *)rt_nil_check(l_B_83))).f_A = r_PARSE_DECLARATIONS();
((*(R13 *)rt_nil_check(l_B_83))).f_B = r_PARSE_STATEMENTS();
return l_B_83;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_ROUTINES(void) {
R13 * l_HEAD_84;
memset(&l_HEAD_84, 0, sizeof l_HEAD_84);
l_HEAD_84 = NULL;
R13 * l_TAIL_85;
memset(&l_TAIL_85, 0, sizeof l_TAIL_85);
l_TAIL_85 = NULL;
for (;;) {
if ((!((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))))) goto L_end86;
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_84, &l_TAIL_85);
}
} L_end86: ;
return l_HEAD_84;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_DECLARATIONS(void) {
R13 * l_HEAD_87;
memset(&l_HEAD_87, 0, sizeof l_HEAD_87);
l_HEAD_87 = NULL;
R13 * l_TAIL_88;
memset(&l_TAIL_88, 0, sizeof l_TAIL_88);
l_TAIL_88 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_87, &l_TAIL_88);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_87, &l_TAIL_88);
}
else
{
goto L_end89;
}
}
} L_end89: ;
return l_HEAD_87;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_OBJECT_DECL(void) {
R13 * l_D_90;
memset(&l_D_90, 0, sizeof l_D_90);
l_D_90 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R13 *)rt_nil_check(l_D_90))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R13 *)rt_nil_check(l_D_90))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R13 *)rt_nil_check(l_D_90))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R13 *)rt_nil_check(l_D_90))).f_C = r_PARSE_EXPR();
}
else if ((((*(R13 *)rt_nil_check(l_D_90))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R13 *)rt_nil_check(l_D_90))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
return l_D_90;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_TYPE_DECL(void) {
R13 * l_D_91;
memset(&l_D_91, 0, sizeof l_D_91);
l_D_91 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R4(&((*(R13 *)rt_nil_check(l_D_91))).f_NAME, r_IDENT());
r_EXPECT(rt_str("=", 1));
((*(R13 *)rt_nil_check(l_D_91))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
return l_D_91;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_TYPE_SPEC(void) {
R13 * l_N_92;
memset(&l_N_92, 0, sizeof l_N_92);
R13 * l_HEAD_93;
memset(&l_HEAD_93, 0, sizeof l_HEAD_93);
l_HEAD_93 = NULL;
R13 * l_TAIL_94;
memset(&l_TAIL_94, 0, sizeof l_TAIL_94);
l_TAIL_94 = NULL;
rt_int l_LINE_95;
memset(&l_LINE_95, 0, sizeof l_LINE_95);
l_LINE_95 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_92 = r_NEW_NODE(g_TS_ARRAY, l_LINE_95);
r_EXPECT(rt_str("[", 1));
((*(R13 *)rt_nil_check(l_N_92))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R13 *)rt_nil_check(l_N_92))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("OF", 2));
((*(R13 *)rt_nil_check(l_N_92))).f_C = r_PARSE_TYPE_SPEC();
return l_N_92;
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_92 = r_NEW_NODE(g_TS_RECORD, l_LINE_95);
for (;;) {
if ((!r_IS(rt_str("VAR", 3)))) goto L_end96;
{
{
R13 * l_F_97;
memset(&l_F_97, 0, sizeof l_F_97);
l_F_97 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R13 *)rt_nil_check(l_F_97))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R13 *)rt_nil_check(l_F_97))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_F_97, &l_HEAD_93, &l_TAIL_94);
}
}
} L_end96: ;
((*(R13 *)rt_nil_check(l_N_92))).f_A = l_HEAD_93;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
return l_N_92;
}
l_N_92 = r_NEW_NODE(g_TS_NAME, l_LINE_95);
S_R4(&((*(R13 *)rt_nil_check(l_N_92))).f_NAME, r_IDENT());
if (r_TEQS(((*(R13 *)rt_nil_check(l_N_92))).f_NAME, rt_str("ENUM", 4)))
{
((*(R13 *)rt_nil_check(l_N_92))).f_KIND = g_TS_ENUM;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R13 * l_L_99;
memset(&l_L_99, 0, sizeof l_L_99);
l_L_99 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R4(&((*(R13 *)rt_nil_check(l_L_99))).f_NAME, (r_CUR()).f_TX);
r_SKIP();
r_ADD_LIST(l_L_99, &l_HEAD_93, &l_TAIL_94);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end98;
} L_end98: ;
r_EXPECT(rt_str(")", 1));
((*(R13 *)rt_nil_check(l_N_92))).f_A = l_HEAD_93;
return l_N_92;
}
if (r_IS(rt_str("(", 1)))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R13 *)rt_nil_check(l_N_92))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_93, &l_TAIL_94);
}
else if (r_IS_KIND(g_K_GEN))
{
{
R13 * l_G_101;
memset(&l_G_101, 0, sizeof l_G_101);
l_G_101 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
R4 l_T_102;
memset(&l_T_102, 0, sizeof l_T_102);
S_R4(&l_T_102, (r_CUR()).f_TX);
S_R4(&((*(R13 *)rt_nil_check(l_G_101))).f_NAME, ((R4){0, .f_AT = rt_add((l_T_102).f_AT, ((rt_int)1LL)), .f_LEN = rt_sub((l_T_102).f_LEN, ((rt_int)1LL)), .f_H = rt_neg(((rt_int)1LL))}));
r_SKIP();
r_ADD_LIST(l_G_101, &l_HEAD_93, &l_TAIL_94);
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_93, &l_TAIL_94);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end100;
} L_end100: ;
r_EXPECT(rt_str(")", 1));
((*(R13 *)rt_nil_check(l_N_92))).f_A = l_HEAD_93;
}
if (r_IS(rt_str("[", 1)))
{
((*(R13 *)rt_nil_check(l_N_92))).f_B = r_PARSE_RANGE();
}
return l_N_92;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_RANGE(void) {
R13 * l_R_103;
memset(&l_R_103, 0, sizeof l_R_103);
l_R_103 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R13 *)rt_nil_check(l_R_103))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R13 *)rt_nil_check(l_R_103))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R13 *)rt_nil_check(l_R_103))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R13 *)rt_nil_check(l_R_103))).f_IV = rt_add(((*(R13 *)rt_nil_check(l_R_103))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
return l_R_103;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_ROUTINE(void) {
R13 * l_R_104;
memset(&l_R_104, 0, sizeof l_R_104);
l_R_104 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R13 * l_HEAD_105;
memset(&l_HEAD_105, 0, sizeof l_HEAD_105);
l_HEAD_105 = NULL;
R13 * l_TAIL_106;
memset(&l_TAIL_106, 0, sizeof l_TAIL_106);
l_TAIL_106 = NULL;
rt_int l_MODE_107;
memset(&l_MODE_107, 0, sizeof l_MODE_107);
l_MODE_107 = g_M_IN;
if (r_ACCEPT(rt_str("INLINE", 6)))
{
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R13 *)rt_nil_check(l_R_104))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R4(&((*(R13 *)rt_nil_check(l_R_104))).f_NAME, r_IDENT());
if (r_ACCEPT(rt_str("(", 1)))
{
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end108;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_107 = rt_add(l_MODE_107, ((rt_int)1LL));
}
else
{
{
R13 * l_NAMES_109;
memset(&l_NAMES_109, 0, sizeof l_NAMES_109);
l_NAMES_109 = r_IDENT_LIST();
R13 * l_TS_110;
memset(&l_TS_110, 0, sizeof l_TS_110);
R13 * l_P_111;
memset(&l_P_111, 0, sizeof l_P_111);
l_P_111 = l_NAMES_109;
r_EXPECT(rt_str(":", 1));
l_TS_110 = r_PARSE_TYPE_SPEC();
for (;;) {
if ((l_P_111 == NULL)) goto L_end112;
{
{
R13 * l_PN_113;
memset(&l_PN_113, 0, sizeof l_PN_113);
l_PN_113 = r_NEW_NODE(g_N_PARAM, ((*(R13 *)rt_nil_check(l_P_111))).f_LINE);
S_R4(&((*(R13 *)rt_nil_check(l_PN_113))).f_NAME, ((*(R13 *)rt_nil_check(l_P_111))).f_NAME);
((*(R13 *)rt_nil_check(l_PN_113))).f_IV = l_MODE_107;
((*(R13 *)rt_nil_check(l_PN_113))).f_B = l_TS_110;
r_ADD_LIST(l_PN_113, &l_HEAD_105, &l_TAIL_106);
}
l_P_111 = ((*(R13 *)rt_nil_check(l_P_111))).f_NEXT;
}
} L_end112: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end108: ;
r_EXPECT(rt_str(")", 1));
}
((*(R13 *)rt_nil_check(l_R_104))).f_A = l_HEAD_105;
if ((((*(R13 *)rt_nil_check(l_R_104))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
r_EXPECT(rt_str("(", 1));
((*(R13 *)rt_nil_check(l_R_104))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R13 *)rt_nil_check(l_R_104))).f_D = r_IDENT_LIST();
r_EXPECT(rt_str(")", 1));
}
else if (r_IS(rt_str("IMPORTS", 7)))
{
r_SKIP();
r_SKIP_PARENS();
}
else
{
goto L_end114;
}
}
} L_end114: ;
r_EXPECT(rt_str(";", 1));
((*(R13 *)rt_nil_check(l_R_104))).f_C = r_PARSE_BODY();
if (((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))))
{
r_FAIL(r_LINE_NOW(), rt_str("this translator has no nested routines yet", 42));
}
r_EXPECT(rt_str("END", 3));
if ((((*(R13 *)rt_nil_check(l_R_104))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(r_IDENT(), ((*(R13 *)rt_nil_check(l_R_104))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R13 *)rt_nil_check(l_R_104))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
return l_R_104;
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) {
return (((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6)));
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_STATEMENTS(void) {
R13 * l_HEAD_115;
memset(&l_HEAD_115, 0, sizeof l_HEAD_115);
l_HEAD_115 = NULL;
R13 * l_TAIL_116;
memset(&l_TAIL_116, 0, sizeof l_TAIL_116);
l_TAIL_116 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end117;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_115, &l_TAIL_116);
}
} L_end117: ;
return l_HEAD_115;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_STATEMENT(void) {
R13 * l_S_118;
memset(&l_S_118, 0, sizeof l_S_118);
l_S_118 = r_PARSE_UNLABELED();
R13 * l_HEAD_119;
memset(&l_HEAD_119, 0, sizeof l_HEAD_119);
l_HEAD_119 = NULL;
R13 * l_TAIL_120;
memset(&l_TAIL_120, 0, sizeof l_TAIL_120);
l_TAIL_120 = NULL;
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R13 * l_X_121;
memset(&l_X_121, 0, sizeof l_X_121);
l_X_121 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
r_SKIP();
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end122;
{
{
R13 * l_H_123;
memset(&l_H_123, 0, sizeof l_H_123);
l_H_123 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R13 *)rt_nil_check(l_H_123))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R13 *)rt_nil_check(l_H_123))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_123, &l_HEAD_119, &l_TAIL_120);
}
}
} L_end122: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
((*(R13 *)rt_nil_check(l_X_121))).f_A = l_S_118;
((*(R13 *)rt_nil_check(l_X_121))).f_B = l_HEAD_119;
return l_X_121;
}
}
return l_S_118;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_UNLABELED(void) {
rt_int l_LINE_124;
memset(&l_LINE_124, 0, sizeof l_LINE_124);
l_LINE_124 = r_LINE_NOW();
R13 * l_S_125;
memset(&l_S_125, 0, sizeof l_S_125);
R13 * l_T_126;
memset(&l_T_126, 0, sizeof l_T_126);
if (r_ACCEPT(rt_str(";", 1)))
{
return r_NEW_NODE(g_N_NULL, l_LINE_124);
}
else if (r_IS(rt_str("IF", 2)))
{
return r_PARSE_IF();
}
else if (r_IS(rt_str("SELECT", 6)))
{
return r_PARSE_CASE();
}
else if (r_IS(rt_str("LOOP", 4)))
{
return r_PARSE_LOOP();
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_125 = r_NEW_NODE(g_N_BLOCK, l_LINE_124);
((*(R13 *)rt_nil_check(l_S_125))).f_A = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("BLOCK", 5));
r_EXPECT(rt_str(";", 1));
return l_S_125;
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
return r_NEW_NODE(g_N_EXIT, l_LINE_124);
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_125 = r_NEW_NODE(g_N_RETURN, l_LINE_124);
if ((!r_IS(rt_str(";", 1))))
{
((*(R13 *)rt_nil_check(l_S_125))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
return l_S_125;
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_125 = r_NEW_NODE(g_N_SIGNAL, l_LINE_124);
if (r_IS_KIND(g_K_ID))
{
S_R4(&((*(R13 *)rt_nil_check(l_S_125))).f_NAME, r_IDENT());
}
r_EXPECT(rt_str(";", 1));
return l_S_125;
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_125 = r_NEW_NODE(g_N_ASSERT, l_LINE_124);
((*(R13 *)rt_nil_check(l_S_125))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
return l_S_125;
}
l_T_126 = r_PARSE_POSTFIX();
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_125 = r_NEW_NODE(g_N_ASSIGN, l_LINE_124);
((*(R13 *)rt_nil_check(l_S_125))).f_A = l_T_126;
((*(R13 *)rt_nil_check(l_S_125))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
return l_S_125;
}
r_EXPECT(rt_str(";", 1));
if ((((*(R13 *)rt_nil_check(l_T_126))).f_KIND == g_N_NAME))
{
((*(R13 *)rt_nil_check(l_T_126))).f_KIND = g_N_CALL;
}
else if ((((*(R13 *)rt_nil_check(l_T_126))).f_KIND == g_N_APPLY))
{
((*(R13 *)rt_nil_check(l_T_126))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_124, rt_str("a statement expected", 20));
}
return l_T_126;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_IF(void) {
R13 * l_S_127;
memset(&l_S_127, 0, sizeof l_S_127);
l_S_127 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R13 * l_HEAD_128;
memset(&l_HEAD_128, 0, sizeof l_HEAD_128);
l_HEAD_128 = NULL;
R13 * l_TAIL_129;
memset(&l_TAIL_129, 0, sizeof l_TAIL_129);
l_TAIL_129 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R13 * l_ARM_131;
memset(&l_ARM_131, 0, sizeof l_ARM_131);
l_ARM_131 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R13 *)rt_nil_check(l_ARM_131))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R13 *)rt_nil_check(l_ARM_131))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_131, &l_HEAD_128, &l_TAIL_129);
}
}
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end130;
} L_end130: ;
((*(R13 *)rt_nil_check(l_S_127))).f_A = l_HEAD_128;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R13 *)rt_nil_check(l_S_127))).f_B = r_PARSE_BODY();
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("IF", 2));
r_EXPECT(rt_str(";", 1));
return l_S_127;
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) {
rt_int l_DEPTH_132;
memset(&l_DEPTH_132, 0, sizeof l_DEPTH_132);
l_DEPTH_132 = ((rt_int)0LL);
rt_int l_K_133;
memset(&l_K_133, 0, sizeof l_K_133);
l_K_133 = ((rt_int)0LL);
for (;;) {
{
{
R3 l_T_135;
memset(&l_T_135, 0, sizeof l_T_135);
S_R3(&l_T_135, r_AHEAD(l_K_133));
if (((l_T_135).f_KIND == g_K_EOF))
{
return 0;
}
if (((l_T_135).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_135).f_TX, rt_str("(", 1)) || r_TEQS((l_T_135).f_TX, rt_str("[", 1))))
{
l_DEPTH_132 = rt_add(l_DEPTH_132, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_135).f_TX, rt_str(")", 1)) || r_TEQS((l_T_135).f_TX, rt_str("]", 1))))
{
l_DEPTH_132 = rt_sub(l_DEPTH_132, ((rt_int)1LL));
if ((l_DEPTH_132 == ((rt_int)0LL)))
{
return 0;
}
}
else if (((l_DEPTH_132 == ((rt_int)1LL)) && r_TEQS((l_T_135).f_TX, rt_str(":", 1))))
{
return 1;
}
}
}
l_K_133 = rt_add(l_K_133, ((rt_int)1LL));
}
} L_end134: ;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_CASE_LABEL(void) {
if ((r_IS(rt_str("[", 1)) || (r_IS(rt_str("(", 1)) && r_RANGE_AHEAD())))
{
return r_PARSE_RANGE();
}
return r_PARSE_EXPR();
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_CASE(void) {
R13 * l_S_136;
memset(&l_S_136, 0, sizeof l_S_136);
l_S_136 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R13 * l_HEAD_137;
memset(&l_HEAD_137, 0, sizeof l_HEAD_137);
l_HEAD_137 = NULL;
R13 * l_TAIL_138;
memset(&l_TAIL_138, 0, sizeof l_TAIL_138);
l_TAIL_138 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R13 *)rt_nil_check(l_S_136))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end139;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R13 *)rt_nil_check(l_S_136))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R13 * l_ARM_140;
memset(&l_ARM_140, 0, sizeof l_ARM_140);
l_ARM_140 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R13 * l_LH_141;
memset(&l_LH_141, 0, sizeof l_LH_141);
l_LH_141 = NULL;
R13 * l_LT_142;
memset(&l_LT_142, 0, sizeof l_LT_142);
l_LT_142 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_141, &l_LT_142);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end143;
} L_end143: ;
r_EXPECT(rt_str("-->", 3));
((*(R13 *)rt_nil_check(l_ARM_140))).f_A = l_LH_141;
((*(R13 *)rt_nil_check(l_ARM_140))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_ARM_140, &l_HEAD_137, &l_TAIL_138);
}
}
}
} L_end139: ;
((*(R13 *)rt_nil_check(l_S_136))).f_B = l_HEAD_137;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
return l_S_136;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_LOOP(void) {
R13 * l_S_144;
memset(&l_S_144, 0, sizeof l_S_144);
l_S_144 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R13 *)rt_nil_check(l_S_144))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R4(&((*(R13 *)rt_nil_check(l_S_144))).f_NAME, r_IDENT());
r_EXPECT(rt_str("IN", 2));
}
((*(R13 *)rt_nil_check(l_S_144))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R13 *)rt_nil_check(l_S_144))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R13 *)rt_nil_check(l_S_144))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
r_EXPECT(rt_str(";", 1));
return l_S_144;
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R13 *)rt_nil_check(l_S_144))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R13 *)rt_nil_check(l_S_144))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
((*(R13 *)rt_nil_check(l_S_144))).f_C = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
return l_S_144;
rt_raise(RT_X_INIT);
}
static R13 * r_BIN_NODE(R4 p_OP, rt_int p_LINE, R13 * p_A, R13 * p_B) {
R13 * l_N_145;
memset(&l_N_145, 0, sizeof l_N_145);
l_N_145 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R4(&((*(R13 *)rt_nil_check(l_N_145))).f_NAME, p_OP);
((*(R13 *)rt_nil_check(l_N_145))).f_A = p_A;
((*(R13 *)rt_nil_check(l_N_145))).f_B = p_B;
return l_N_145;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_EXPR(void) {
R13 * l_LEFT_146;
memset(&l_LEFT_146, 0, sizeof l_LEFT_146);
l_LEFT_146 = r_PARSE_CONJ();
for (;;) {
if ((!(((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2))))) goto L_end147;
{
{
R3 l_T_148;
memset(&l_T_148, 0, sizeof l_T_148);
S_R3(&l_T_148, r_CUR());
r_SKIP();
l_LEFT_146 = r_BIN_NODE((l_T_148).f_TX, (l_T_148).f_LINE, l_LEFT_146, r_PARSE_CONJ());
}
}
} L_end147: ;
return l_LEFT_146;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_CONJ(void) {
R13 * l_LEFT_149;
memset(&l_LEFT_149, 0, sizeof l_LEFT_149);
l_LEFT_149 = r_PARSE_RELATION();
for (;;) {
if ((!(r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1))))) goto L_end150;
{
{
R3 l_T_151;
memset(&l_T_151, 0, sizeof l_T_151);
S_R3(&l_T_151, r_CUR());
r_SKIP();
l_LEFT_149 = r_BIN_NODE((l_T_151).f_TX, (l_T_151).f_LINE, l_LEFT_149, r_PARSE_RELATION());
}
}
} L_end150: ;
return l_LEFT_149;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_RELATION(void) {
R13 * l_LEFT_152;
memset(&l_LEFT_152, 0, sizeof l_LEFT_152);
l_LEFT_152 = r_PARSE_SUM();
for (;;) {
{
{
R3 l_T_154;
memset(&l_T_154, 0, sizeof l_T_154);
S_R3(&l_T_154, r_CUR());
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_152 = r_BIN_NODE((l_T_154).f_TX, (l_T_154).f_LINE, l_LEFT_152, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R13 * l_N_155;
memset(&l_N_155, 0, sizeof l_N_155);
l_N_155 = r_NEW_NODE(g_N_IN, (l_T_154).f_LINE);
r_SKIP();
((*(R13 *)rt_nil_check(l_N_155))).f_A = l_LEFT_152;
((*(R13 *)rt_nil_check(l_N_155))).f_B = r_PARSE_RANGE();
l_LEFT_152 = l_N_155;
}
}
else
{
return l_LEFT_152;
}
}
}
} L_end153: ;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_SUM(void) {
R13 * l_LEFT_156;
memset(&l_LEFT_156, 0, sizeof l_LEFT_156);
l_LEFT_156 = r_PARSE_TERM();
for (;;) {
if ((!((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))) goto L_end157;
{
{
R3 l_T_158;
memset(&l_T_158, 0, sizeof l_T_158);
S_R3(&l_T_158, r_CUR());
r_SKIP();
l_LEFT_156 = r_BIN_NODE((l_T_158).f_TX, (l_T_158).f_LINE, l_LEFT_156, r_PARSE_TERM());
}
}
} L_end157: ;
return l_LEFT_156;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_TERM(void) {
R13 * l_LEFT_159;
memset(&l_LEFT_159, 0, sizeof l_LEFT_159);
l_LEFT_159 = r_PARSE_FACTOR();
for (;;) {
if ((!(((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))) goto L_end160;
{
{
R3 l_T_161;
memset(&l_T_161, 0, sizeof l_T_161);
S_R3(&l_T_161, r_CUR());
r_SKIP();
l_LEFT_159 = r_BIN_NODE((l_T_161).f_TX, (l_T_161).f_LINE, l_LEFT_159, r_PARSE_FACTOR());
}
}
} L_end160: ;
return l_LEFT_159;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_FACTOR(void) {
R13 * l_LEFT_162;
memset(&l_LEFT_162, 0, sizeof l_LEFT_162);
l_LEFT_162 = r_PARSE_SECONDARY();
for (;;) {
if ((!r_IS(rt_str("**", 2)))) goto L_end163;
{
{
R3 l_T_164;
memset(&l_T_164, 0, sizeof l_T_164);
S_R3(&l_T_164, r_CUR());
r_SKIP();
l_LEFT_162 = r_BIN_NODE((l_T_164).f_TX, (l_T_164).f_LINE, l_LEFT_162, r_PARSE_SECONDARY());
}
}
} L_end163: ;
return l_LEFT_162;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_SECONDARY(void) {
R3 l_T_165;
memset(&l_T_165, 0, sizeof l_T_165);
S_R3(&l_T_165, r_CUR());
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R13 * l_N_166;
memset(&l_N_166, 0, sizeof l_N_166);
l_N_166 = r_NEW_NODE(g_N_UNOP, (l_T_165).f_LINE);
r_SKIP();
S_R4(&((*(R13 *)rt_nil_check(l_N_166))).f_NAME, (l_T_165).f_TX);
((*(R13 *)rt_nil_check(l_N_166))).f_A = r_PARSE_POSTFIX();
return l_N_166;
}
}
return r_PARSE_POSTFIX();
rt_raise(RT_X_INIT);
}
static void r_PARSE_ARGS(R13 * p_N) {
R13 * l_HEAD_167;
memset(&l_HEAD_167, 0, sizeof l_HEAD_167);
l_HEAD_167 = NULL;
R13 * l_TAIL_168;
memset(&l_TAIL_168, 0, sizeof l_TAIL_168);
l_TAIL_168 = NULL;
rt_int l_GROUP_169;
memset(&l_GROUP_169, 0, sizeof l_GROUP_169);
l_GROUP_169 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end170;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_169) {
case 0:
{
((*(R13 *)rt_nil_check(p_N))).f_A = l_HEAD_167;
}
break;
case 1:
{
((*(R13 *)rt_nil_check(p_N))).f_B = l_HEAD_167;
}
break;
default:
{
r_FAIL(((*(R13 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_169 = rt_add(l_GROUP_169, ((rt_int)1LL));
l_HEAD_167 = NULL;
l_TAIL_168 = NULL;
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_167, &l_TAIL_168);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
} L_end170: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_169) {
case 0:
{
((*(R13 *)rt_nil_check(p_N))).f_A = l_HEAD_167;
}
break;
case 1:
{
((*(R13 *)rt_nil_check(p_N))).f_B = l_HEAD_167;
}
break;
default:
{
((*(R13 *)rt_nil_check(p_N))).f_C = l_HEAD_167;
}
break;
}
}
static R13 * r_PARSE_POSTFIX(void) {
R13 * l_E_171;
memset(&l_E_171, 0, sizeof l_E_171);
l_E_171 = r_PARSE_ATOM();
R13 * l_N_172;
memset(&l_N_172, 0, sizeof l_N_172);
for (;;) {
{
{
rt_int l_LINE_174;
memset(&l_LINE_174, 0, sizeof l_LINE_174);
l_LINE_174 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R13 *)rt_nil_check(l_E_171))).f_KIND == g_N_NAME)))
{
((*(R13 *)rt_nil_check(l_E_171))).f_KIND = g_N_APPLY;
r_PARSE_ARGS(l_E_171);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_172 = r_NEW_NODE(g_N_INDEX, l_LINE_174);
r_PARSE_ARGS(l_N_172);
((*(R13 *)rt_nil_check(l_N_172))).f_B = ((*(R13 *)rt_nil_check(l_N_172))).f_A;
((*(R13 *)rt_nil_check(l_N_172))).f_A = l_E_171;
l_E_171 = l_N_172;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_172 = r_NEW_NODE(g_N_FIELD, l_LINE_174);
((*(R13 *)rt_nil_check(l_N_172))).f_A = l_E_171;
S_R4(&((*(R13 *)rt_nil_check(l_N_172))).f_NAME, r_IDENT());
l_E_171 = l_N_172;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_172 = r_NEW_NODE(g_N_DEREF, l_LINE_174);
((*(R13 *)rt_nil_check(l_N_172))).f_A = l_E_171;
l_E_171 = l_N_172;
}
else if (r_ACCEPT(rt_str("[", 1)))
{
l_N_172 = r_NEW_NODE(g_N_SUBSTR, l_LINE_174);
((*(R13 *)rt_nil_check(l_N_172))).f_A = l_E_171;
((*(R13 *)rt_nil_check(l_N_172))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R13 *)rt_nil_check(l_N_172))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_171 = l_N_172;
}
else
{
return l_E_171;
}
}
}
} L_end173: ;
rt_raise(RT_X_INIT);
}
static R13 * r_PARSE_ATOM(void) {
R3 l_T_175;
memset(&l_T_175, 0, sizeof l_T_175);
S_R3(&l_T_175, r_CUR());
R13 * l_N_176;
memset(&l_N_176, 0, sizeof l_N_176);
if (((l_T_175).f_KIND == g_K_NUM))
{
l_N_176 = r_NEW_NODE(g_N_INT, (l_T_175).f_LINE);
((*(R13 *)rt_nil_check(l_N_176))).f_IV = (l_T_175).f_IV;
S_R4(&((*(R13 *)rt_nil_check(l_N_176))).f_NAME, (l_T_175).f_TX);
r_SKIP();
return l_N_176;
}
if ((((l_T_175).f_KIND == g_K_STR) || ((l_T_175).f_KIND == g_K_ENUM)))
{
{
R13 * l_HEAD_177;
memset(&l_HEAD_177, 0, sizeof l_HEAD_177);
l_HEAD_177 = NULL;
R13 * l_TAIL_178;
memset(&l_TAIL_178, 0, sizeof l_TAIL_178);
l_TAIL_178 = NULL;
rt_int l_STRINGS_179;
memset(&l_STRINGS_179, 0, sizeof l_STRINGS_179);
l_STRINGS_179 = ((rt_int)0LL);
for (;;) {
if ((!(r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM)))) goto L_end180;
{
l_N_176 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R13 *)rt_nil_check(l_N_176))).f_IV = (r_CUR()).f_KIND;
S_R4(&((*(R13 *)rt_nil_check(l_N_176))).f_NAME, (r_CUR()).f_TX);
if ((((*(R13 *)rt_nil_check(l_N_176))).f_IV == g_K_STR))
{
l_STRINGS_179 = rt_add(l_STRINGS_179, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_176, &l_HEAD_177, &l_TAIL_178);
}
} L_end180: ;
if ((l_STRINGS_179 == ((rt_int)0LL)))
{
if ((!(((*(R13 *)rt_nil_check(l_HEAD_177))).f_NEXT == NULL)))
{
r_FAIL((l_T_175).f_LINE, rt_str("two enumerated literals in a row", 32));
}
((*(R13 *)rt_nil_check(l_HEAD_177))).f_KIND = g_N_ENUMLIT;
return l_HEAD_177;
}
l_N_176 = r_NEW_NODE(g_N_STR, (l_T_175).f_LINE);
((*(R13 *)rt_nil_check(l_N_176))).f_A = l_HEAD_177;
return l_N_176;
}
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_176 = r_NEW_NODE(g_N_BOOL, (l_T_175).f_LINE);
((*(R13 *)rt_nil_check(l_N_176))).f_IV = ((rt_int)1LL);
return l_N_176;
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
return r_NEW_NODE(g_N_BOOL, (l_T_175).f_LINE);
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
return r_NEW_NODE(g_N_NIL, (l_T_175).f_LINE);
}
if (r_IS(rt_str("(", 1)))
{
if (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TEQS((r_AHEAD(((rt_int)2LL))).f_TX, rt_str(":", 1))) && ((r_AHEAD(((rt_int)2LL))).f_KIND == g_K_SYM)))
{
{
R13 * l_HEAD_181;
memset(&l_HEAD_181, 0, sizeof l_HEAD_181);
l_HEAD_181 = NULL;
R13 * l_TAIL_182;
memset(&l_TAIL_182, 0, sizeof l_TAIL_182);
l_TAIL_182 = NULL;
r_SKIP();
for (;;) {
{
l_N_176 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R4(&((*(R13 *)rt_nil_check(l_N_176))).f_NAME, r_IDENT());
r_EXPECT(rt_str(":", 1));
((*(R13 *)rt_nil_check(l_N_176))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_176, &l_HEAD_181, &l_TAIL_182);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end183;
} L_end183: ;
r_EXPECT(rt_str(")", 1));
l_N_176 = r_NEW_NODE(g_N_RECCONS, (l_T_175).f_LINE);
((*(R13 *)rt_nil_check(l_N_176))).f_A = l_HEAD_181;
return l_N_176;
}
}
r_SKIP();
l_N_176 = r_NEW_NODE(g_N_PAREN, (l_T_175).f_LINE);
((*(R13 *)rt_nil_check(l_N_176))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
return l_N_176;
}
if (((l_T_175).f_KIND == g_K_ID))
{
l_N_176 = r_NEW_NODE(g_N_NAME, (l_T_175).f_LINE);
S_R4(&((*(R13 *)rt_nil_check(l_N_176))).f_NAME, r_IDENT());
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R4(&((*(R13 *)rt_nil_check(l_N_176))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR((l_T_175).f_TX, ((l_T_175).f_TX).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))));
r_SKIP();
}
if ((r_TEQS(((*(R13 *)rt_nil_check(l_N_176))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R13 *)rt_nil_check(l_N_176))).f_NAME, rt_str("PTR$NEW", 7))))
{
((*(R13 *)rt_nil_check(l_N_176))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R13 *)rt_nil_check(l_N_176))).f_A = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
return l_N_176;
}
r_FAILT((l_T_175).f_LINE, rt_str("an expression expected, not ", 28), (l_T_175).f_TX);
rt_raise(RT_X_INIT);
}
static R4 r_NO_TEXT(void) {
return ((R4){0, .f_AT = ((rt_int)0LL), .f_LEN = ((rt_int)0LL), .f_H = ((rt_int)0LL)});
rt_raise(RT_X_INIT);
}
static R7 * r_NEW_SYM(rt_int p_KIND, R4 p_NAME) {
R7 * l_Y_184;
memset(&l_Y_184, 0, sizeof l_Y_184);
l_Y_184 = ({ R7 *p = rt_alloc(sizeof *p); I_R7(&(*p)); p; });
S_R7(&(*(R7 *)rt_nil_check(l_Y_184)), ((R7){0, .f_KIND = p_KIND, .f_DEPTH = ((*(R1 *)rt_nil_check(g_W))).f_DEPTH, .f_NAME = p_NAME, .f_T = NULL, .f_ACCESS = r_NO_TEXT(), .f_HASMV = 0, .f_MV = ((rt_int)0LL), .f_TS = NULL, .f_BUSY = 0, .f_FWD = r_NO_TEXT(), .f_PARAMS = NULL, .f_RESULT = NULL, .f_CHAIN = NULL, .f_SNEXT = NULL}));
return l_Y_184;
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R4 p_NAME) {
if (((p_NAME).f_H < ((rt_int)0LL)))
{
return r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
}
return (p_NAME).f_H;
rt_raise(RT_X_INIT);
}
static R7 * r_LOOKUP(R4 p_NAME) {
R7 * l_Y_186;
memset(&l_Y_186, 0, sizeof l_Y_186);
l_Y_186 = (((*(R1 *)rt_nil_check(g_W))).f_TABLE).p[rt_index(r_BUCKET(p_NAME), (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo];
for (;;) {
if ((l_Y_186 == NULL)) goto L_end187;
{
if (r_TEQ(((*(R7 *)rt_nil_check(l_Y_186))).f_NAME, p_NAME))
{
return l_Y_186;
}
l_Y_186 = ((*(R7 *)rt_nil_check(l_Y_186))).f_CHAIN;
}
} L_end187: ;
return NULL;
rt_raise(RT_X_INIT);
}
static R7 * r_LOOKUPS(rstr p_NAME) {
return r_LOOKUP(r_MKN(p_NAME));
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R7 * p_Y, rt_int p_LINE) {
rt_int l_B_188;
memset(&l_B_188, 0, sizeof l_B_188);
l_B_188 = r_BUCKET(((*(R7 *)rt_nil_check(p_Y))).f_NAME);
R7 * l_OLD_189;
memset(&l_OLD_189, 0, sizeof l_OLD_189);
l_OLD_189 = r_LOOKUP(((*(R7 *)rt_nil_check(p_Y))).f_NAME);
if ((!(l_OLD_189 == NULL)))
{
if ((((*(R7 *)rt_nil_check(l_OLD_189))).f_DEPTH == ((*(R1 *)rt_nil_check(g_W))).f_DEPTH))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R7 *)rt_nil_check(p_Y))).f_NAME);
}
}
((*(R7 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R1 *)rt_nil_check(g_W))).f_DEPTH;
((*(R7 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R1 *)rt_nil_check(g_W))).f_TABLE).p[rt_index(l_B_188, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo];
(((*(R1 *)rt_nil_check(g_W))).f_TABLE).p[rt_index(l_B_188, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo] = p_Y;
((*(R7 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R1 *)rt_nil_check(g_W))).f_SCOPE;
((*(R1 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) {
((*(R1 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R1 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) {
((*(R1 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R1 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R1 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end190;
{
if ((((*(R7 *)rt_nil_check(((*(R1 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R1 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end190;
}
{
R7 * l_Y_191;
memset(&l_Y_191, 0, sizeof l_Y_191);
l_Y_191 = ((*(R1 *)rt_nil_check(g_W))).f_SCOPE;
rt_int l_B_192;
memset(&l_B_192, 0, sizeof l_B_192);
l_B_192 = r_BUCKET(((*(R7 *)rt_nil_check(l_Y_191))).f_NAME);
(((*(R1 *)rt_nil_check(g_W))).f_TABLE).p[rt_index(l_B_192, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo, (((*(R1 *)rt_nil_check(g_W))).f_TABLE).hi) - (((*(R1 *)rt_nil_check(g_W))).f_TABLE).lo] = ((*(R7 *)rt_nil_check(l_Y_191))).f_CHAIN;
((*(R1 *)rt_nil_check(g_W))).f_SCOPE = ((*(R7 *)rt_nil_check(l_Y_191))).f_SNEXT;
}
}
} L_end190: ;
}
static R12 * r_NEW_TYP(rt_int p_KIND) {
R12 * l_T_193;
memset(&l_T_193, 0, sizeof l_T_193);
l_T_193 = ({ R12 *p = rt_alloc(sizeof *p); I_R12(&(*p)); p; });
S_R12(&(*(R12 *)rt_nil_check(l_T_193)), ((R12){0, .f_KIND = p_KIND, .f_LO = NULL, .f_HI = NULL, .f_LEN = NULL, .f_GEN = r_NO_TEXT(), .f_ELEM = NULL, .f_TARGET = NULL, .f_TARGET_TS = NULL, .f_FIELDS = NULL, .f_LITS = NULL, .f_CNAME = r_NO_TEXT()}));
return l_T_193;
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R12 * p_T) {
R7 * l_Y_194;
memset(&l_Y_194, 0, sizeof l_Y_194);
l_Y_194 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R7 *)rt_nil_check(l_Y_194))).f_T = p_T;
r_DEFINE(l_Y_194, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) {
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEFINE(void) {
((*(R1 *)rt_nil_check(g_W))).f_TY_INT = r_NEW_TYP(g_T_INT);
((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL = r_NEW_TYP(g_T_BOOL);
((*(R1 *)rt_nil_check(g_W))).f_TY_STR = r_NEW_TYP(g_T_STR);
((*(R1 *)rt_nil_check(g_W))).f_TY_VOID = r_NEW_TYP(g_T_VOID);
((*(R1 *)rt_nil_check(g_W))).f_TY_NIL = r_NEW_TYP(g_T_NIL);
((*(R1 *)rt_nil_check(g_W))).f_TY_ASCII = r_NEW_TYP(g_T_ENUM);
r_PREDEF_TYPE(rt_str("INTEGER", 7), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
r_PREDEF_TYPE(rt_str("BOOLEAN", 7), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R1 *)rt_nil_check(g_W))).f_TY_ASCII);
r_PREDEF_BUILTIN(rt_str("PUT", 3));
r_PREDEF_BUILTIN(rt_str("PUT_LINE", 8));
r_PREDEF_BUILTIN(rt_str("NEW_LINE", 8));
r_PREDEF_BUILTIN(rt_str("GET_CODE", 8));
r_PREDEF_BUILTIN(rt_str("STOP", 4));
r_PREDEF_BUILTIN(rt_str("TO_CHAR", 7));
r_PREDEF_BUILTIN(rt_str("BLANKS", 6));
r_PREDEF_BUILTIN(rt_str("DUP", 3));
r_PREDEF_BUILTIN(rt_str("ABS", 3));
r_PREDEF_BUILTIN(rt_str("TO_FIXED", 8));
r_OPEN_SCOPE();
}
static rt_int r_ASCII_CODE(R4 p_T) {
rstr l_CONTROLS_195;
l_CONTROLS_195 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_195, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
rstr l_S_196;
l_S_196 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_196, r_STR(p_T, (p_T).f_LEN));
rt_int l_L_197;
memset(&l_L_197, 0, sizeof l_L_197);
l_L_197 = (p_T).f_LEN;
if ((l_L_197 < ((rt_int)2LL)))
{
return rt_neg(((rt_int)1LL));
}
if (rt_b_eq(rt_b_slice(l_S_196, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1)))
{
if ((l_L_197 == ((rt_int)5LL)))
{
return ((rt_int)39LL);
}
if ((l_L_197 == ((rt_int)4LL)))
{
{
rt_int l_C_198;
memset(&l_C_198, 0, sizeof l_C_198);
l_C_198 = r_CODE_OF(rt_b_slice(l_S_196, ((rt_int)2LL), ((rt_int)2LL)));
if (({ rt_int iv199 = l_C_198; (((rt_int)32LL)) <= iv199 && iv199 <= (((rt_int)95LL)); }))
{
return l_C_198;
}
}
}
return rt_neg(((rt_int)1LL));
}
if ((l_L_197 == ((rt_int)2LL)))
{
if (rt_b_eq(rt_b_slice(l_S_196, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))
{
return ((rt_int)123LL);
}
else if (rt_b_eq(rt_b_slice(l_S_196, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1)))
{
return ((rt_int)125LL);
}
{
rt_int l_C_200;
memset(&l_C_200, 0, sizeof l_C_200);
l_C_200 = r_CODE_OF(rt_b_slice(l_S_196, ((rt_int)1LL), ((rt_int)1LL)));
if (({ rt_int iv201 = l_C_200; (((rt_int)65LL)) <= iv201 && iv201 <= (((rt_int)90LL)); }))
{
return rt_add(l_C_200, ((rt_int)32LL));
}
}
}
if ((l_L_197 <= ((rt_int)4LL)))
{
{ rt_int it203_lo = ((rt_int)0LL), it203_hi = ((rt_int)31LL);
for (rt_int it203 = it203_lo; it203 <= it203_hi; it203++) {
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_195, rt_add(rt_mul(it203, ((rt_int)4LL)), ((rt_int)1LL)), rt_sub(rt_add(rt_mul(it203, ((rt_int)4LL)), l_L_197), ((rt_int)1LL))), rt_b_slice(l_S_196, ((rt_int)1LL), rt_sub(l_L_197, ((rt_int)1LL)))))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_195, rt_add(rt_mul(it203, ((rt_int)4LL)), l_L_197), rt_add(rt_mul(it203, ((rt_int)4LL)), l_L_197)), rt_str(" ", 1)))
{
return it203;
}
}
}
} } L_end202: ;
}
if (r_TEQS(p_T, rt_str("\\ACCENT", 7)))
{
return ((rt_int)96LL);
}
else if (r_TEQS(p_T, rt_str("\\BAR", 4)))
{
return ((rt_int)124LL);
}
else if (r_TEQS(p_T, rt_str("\\TILDE", 6)))
{
return ((rt_int)126LL);
}
else if (r_TEQS(p_T, rt_str("\\DEL", 4)))
{
return ((rt_int)127LL);
}
return rt_neg(((rt_int)1LL));
rt_raise(RT_X_INIT);
}
static R4 r_RECORD_NAME(R7 * p_Y) {
if (((((*(R7 *)rt_nil_check(p_Y))).f_FWD).f_LEN == ((rt_int)0LL)))
{
S_R4(&((*(R7 *)rt_nil_check(p_Y))).f_FWD, r_NEW_NAME(rt_str("R", 1)));
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R7 *)rt_nil_check(p_Y))).f_FWD, ((*(R7 *)rt_nil_check(p_Y))).f_FWD));
}
return ((*(R7 *)rt_nil_check(p_Y))).f_FWD;
rt_raise(RT_X_INIT);
}
static R12 * r_RESOLVE(R13 * p_TS) {
return r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
rt_raise(RT_X_INIT);
}
static R12 * r_RESOLVE_NAMED(R13 * p_TS, R4 p_CNAME) {
R12 * l_T_204;
memset(&l_T_204, 0, sizeof l_T_204);
rt_int l_K_205;
memset(&l_K_205, 0, sizeof l_K_205);
l_K_205 = ((*(R13 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_205 == g_TS_ARRAY))
{
l_T_204 = r_NEW_TYP(g_T_ARR);
((*(R12 *)rt_nil_check(l_T_204))).f_LO = ((*(R13 *)rt_nil_check(p_TS))).f_A;
((*(R12 *)rt_nil_check(l_T_204))).f_HI = ((*(R13 *)rt_nil_check(p_TS))).f_B;
((*(R12 *)rt_nil_check(l_T_204))).f_ELEM = r_RESOLVE(((*(R13 *)rt_nil_check(p_TS))).f_C);
S_R4(&((*(R12 *)rt_nil_check(l_T_204))).f_CNAME, r_NEW_NAME(rt_str("A", 1)));
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R12 *)rt_nil_check(l_T_204))).f_CNAME, ((*(R12 *)rt_nil_check(l_T_204))).f_CNAME));
r_COMPLETE(l_T_204);
return l_T_204;
}
if ((l_K_205 == g_TS_RECORD))
{
l_T_204 = r_NEW_TYP(g_T_REC);
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R4(&((*(R12 *)rt_nil_check(l_T_204))).f_CNAME, p_CNAME);
}
else
{
S_R4(&((*(R12 *)rt_nil_check(l_T_204))).f_CNAME, r_NEW_NAME(rt_str("R", 1)));
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R12 *)rt_nil_check(l_T_204))).f_CNAME, ((*(R12 *)rt_nil_check(l_T_204))).f_CNAME));
}
{
R13 * l_D_206;
memset(&l_D_206, 0, sizeof l_D_206);
l_D_206 = ((*(R13 *)rt_nil_check(p_TS))).f_A;
R16 * l_TAIL_207;
memset(&l_TAIL_207, 0, sizeof l_TAIL_207);
l_TAIL_207 = NULL;
for (;;) {
if ((l_D_206 == NULL)) goto L_end208;
{
{
R12 * l_FT_209;
memset(&l_FT_209, 0, sizeof l_FT_209);
l_FT_209 = r_RESOLVE(((*(R13 *)rt_nil_check(l_D_206))).f_B);
R13 * l_N_210;
memset(&l_N_210, 0, sizeof l_N_210);
l_N_210 = ((*(R13 *)rt_nil_check(l_D_206))).f_A;
for (;;) {
if ((l_N_210 == NULL)) goto L_end211;
{
{
R16 * l_F_212;
memset(&l_F_212, 0, sizeof l_F_212);
l_F_212 = ({ R16 *p = rt_alloc(sizeof *p); I_R16(&(*p)); p; });
S_R16(&(*(R16 *)rt_nil_check(l_F_212)), ((R16){0, .f_NAME = ((*(R13 *)rt_nil_check(l_N_210))).f_NAME, .f_T = l_FT_209, .f_NEXT = NULL}));
if ((l_TAIL_207 == NULL))
{
((*(R12 *)rt_nil_check(l_T_204))).f_FIELDS = l_F_212;
}
else
{
((*(R16 *)rt_nil_check(l_TAIL_207))).f_NEXT = l_F_212;
}
l_TAIL_207 = l_F_212;
}
l_N_210 = ((*(R13 *)rt_nil_check(l_N_210))).f_NEXT;
}
} L_end211: ;
}
l_D_206 = ((*(R13 *)rt_nil_check(l_D_206))).f_NEXT;
}
} L_end208: ;
}
r_COMPLETE(l_T_204);
return l_T_204;
}
if ((l_K_205 == g_TS_ENUM))
{
l_T_204 = r_NEW_TYP(g_T_ENUM);
((*(R12 *)rt_nil_check(l_T_204))).f_LITS = ((*(R13 *)rt_nil_check(p_TS))).f_A;
return l_T_204;
}
if (r_TEQS(((*(R13 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
if ((!(((*(R13 *)rt_nil_check(p_TS))).f_B == NULL)))
{
l_T_204 = r_NEW_TYP(g_T_INT);
((*(R12 *)rt_nil_check(l_T_204))).f_LO = ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_TS))).f_B))).f_A;
((*(R12 *)rt_nil_check(l_T_204))).f_HI = ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_TS))).f_B))).f_B;
return l_T_204;
}
return ((*(R1 *)rt_nil_check(g_W))).f_TY_INT;
}
if ((r_TEQS(((*(R13 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R13 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8))))
{
l_T_204 = r_NEW_TYP(g_T_STR);
if ((((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_TS))).f_A))).f_KIND == g_TS_GEN))
{
S_R4(&((*(R12 *)rt_nil_check(l_T_204))).f_GEN, ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_TS))).f_A))).f_NAME);
}
else
{
((*(R12 *)rt_nil_check(l_T_204))).f_LEN = ((*(R13 *)rt_nil_check(p_TS))).f_A;
}
return l_T_204;
}
if (r_TEQS(((*(R13 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
l_T_204 = r_NEW_TYP(g_T_PTR);
((*(R12 *)rt_nil_check(l_T_204))).f_TARGET_TS = ((*(R13 *)rt_nil_check(p_TS))).f_A;
return l_T_204;
}
{
R7 * l_Y_213;
memset(&l_Y_213, 0, sizeof l_Y_213);
l_Y_213 = r_LOOKUP(((*(R13 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_213 == NULL))
{
r_FAILT(((*(R13 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R13 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!(((*(R7 *)rt_nil_check(l_Y_213))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R13 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R13 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R7 *)rt_nil_check(l_Y_213))).f_T == NULL))
{
if (((*(R7 *)rt_nil_check(l_Y_213))).f_BUSY)
{
r_FAILT(((*(R13 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R13 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R7 *)rt_nil_check(l_Y_213))).f_BUSY = 1;
if ((((*(R13 *)rt_nil_check(((*(R7 *)rt_nil_check(l_Y_213))).f_TS))).f_KIND == g_TS_RECORD))
{
((*(R7 *)rt_nil_check(l_Y_213))).f_T = r_RESOLVE_NAMED(((*(R7 *)rt_nil_check(l_Y_213))).f_TS, r_RECORD_NAME(l_Y_213));
}
else
{
((*(R7 *)rt_nil_check(l_Y_213))).f_T = r_RESOLVE(((*(R7 *)rt_nil_check(l_Y_213))).f_TS);
}
((*(R7 *)rt_nil_check(l_Y_213))).f_BUSY = 0;
}
if (((!(((*(R13 *)rt_nil_check(p_TS))).f_B == NULL)) && (((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(l_Y_213))).f_T))).f_KIND == g_T_INT)))
{
l_T_204 = r_NEW_TYP(g_T_INT);
((*(R12 *)rt_nil_check(l_T_204))).f_LO = ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_TS))).f_B))).f_A;
((*(R12 *)rt_nil_check(l_T_204))).f_HI = ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_TS))).f_B))).f_B;
return l_T_204;
}
return ((*(R7 *)rt_nil_check(l_Y_213))).f_T;
}
rt_raise(RT_X_INIT);
}
static R12 * r_TARGET(R12 * p_T) {
if ((((*(R12 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R12 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R12 *)rt_nil_check(p_T))).f_TARGET_TS);
}
return ((*(R12 *)rt_nil_check(p_T))).f_TARGET;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R12 * p_T) {
return (((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
rt_raise(RT_X_INIT);
}
static R4 r_CTYPE(R12 * p_T) {
rt_int l_K_214;
memset(&l_K_214, 0, sizeof l_K_214);
l_K_214 = ((*(R12 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
return r_MK(rt_str("rt_int", 6));
}
else if ((l_K_214 == g_T_STR))
{
return r_MK(rt_str("rstr", 4));
}
else if (((l_K_214 == g_T_REC) || (l_K_214 == g_T_ARR)))
{
return ((*(R12 *)rt_nil_check(p_T))).f_CNAME;
}
else if ((l_K_214 == g_T_VOID))
{
return r_MK(rt_str("void", 4));
}
else if ((l_K_214 == g_T_PTR))
{
{
R13 * l_TT_215;
memset(&l_TT_215, 0, sizeof l_TT_215);
l_TT_215 = ((*(R12 *)rt_nil_check(p_T))).f_TARGET_TS;
if ((((*(R13 *)rt_nil_check(l_TT_215))).f_KIND == g_TS_NAME))
{
{
R7 * l_Y_216;
memset(&l_Y_216, 0, sizeof l_Y_216);
l_Y_216 = r_LOOKUP(((*(R13 *)rt_nil_check(l_TT_215))).f_NAME);
if ((!(l_Y_216 == NULL)))
{
if (((((*(R7 *)rt_nil_check(l_Y_216))).f_KIND == g_Y_TYPE) && (!(((*(R7 *)rt_nil_check(l_Y_216))).f_TS == NULL))))
{
if ((((*(R13 *)rt_nil_check(((*(R7 *)rt_nil_check(l_Y_216))).f_TS))).f_KIND == g_TS_RECORD))
{
return r_CATS(r_RECORD_NAME(l_Y_216), rt_str(" *", 2));
}
}
}
}
}
return r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
}
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R12 * p_T) {
if ((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_STR))
{
return (!(((*(R12 *)rt_nil_check(p_T))).f_LEN == NULL));
}
else if ((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
return 1;
}
else if ((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R16 * l_F_217;
memset(&l_F_217, 0, sizeof l_F_217);
l_F_217 = ((*(R12 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_217 == NULL)) goto L_end218;
{
if (r_NEEDS_INIT(((*(R16 *)rt_nil_check(l_F_217))).f_T))
{
return 1;
}
l_F_217 = ((*(R16 *)rt_nil_check(l_F_217))).f_NEXT;
}
} L_end218: ;
}
}
return 0;
rt_raise(RT_X_INIT);
}
static R4 r_FIELD_C(R4 p_NAME) {
return r_FMT1(rt_str("f_@", 3), p_NAME);
rt_raise(RT_X_INIT);
}
static R4 r_INIT_CODE(R12 * p_T, R4 p_LV) {
if ((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_STR))
{
return r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, (r_EXPR(((*(R12 *)rt_nil_check(p_T))).f_LEN, NULL)).f_C);
}
else if (((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
return r_FMT2(rt_str("I_@(&@);", 8), ((*(R12 *)rt_nil_check(p_T))).f_CNAME, p_LV);
}
return r_NO_TEXT();
rt_raise(RT_X_INIT);
}
static R4 r_ASSIGN_CODE(R12 * p_T, R4 p_LV, R4 p_RV) {
if ((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_STR))
{
return r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
}
else if (((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
return r_FMT3(rt_str("S_@(&@, @);", 11), ((*(R12 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
}
return r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
rt_raise(RT_X_INIT);
}
static R4 r_RANGE_CHECK(R12 * p_T, R4 p_V) {
if (((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R12 *)rt_nil_check(p_T))).f_LO == NULL))))
{
return r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, (r_EXPR(((*(R12 *)rt_nil_check(p_T))).f_LO, NULL)).f_C, (r_EXPR(((*(R12 *)rt_nil_check(p_T))).f_HI, NULL)).f_C);
}
return p_V;
rt_raise(RT_X_INIT);
}
static void r_COMPLETE(R12 * p_T) {
R4 l_C_219;
memset(&l_C_219, 0, sizeof l_C_219);
S_R4(&l_C_219, ((*(R12 *)rt_nil_check(p_T))).f_CNAME);
R4 l_INIT_220;
memset(&l_INIT_220, 0, sizeof l_INIT_220);
R4 l_ASSIGN_221;
memset(&l_ASSIGN_221, 0, sizeof l_ASSIGN_221);
if ((((*(R12 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { rt_int lo, hi; @ *p; };", 34), l_C_219, r_CTYPE(((*(R12 *)rt_nil_check(p_T))).f_ELEM)));
S_R4(&l_INIT_220, r_FMT2(rt_str("x->lo = @; x->hi = @; rt_int n = x->hi >= x->lo \? x->hi - x->lo + 1 : 0; x->p = rt_alloc(sizeof *x->p * (size_t)(n \? n : 1));", 125), (r_EXPR(((*(R12 *)rt_nil_check(p_T))).f_LO, NULL)).f_C, (r_EXPR(((*(R12 *)rt_nil_check(p_T))).f_HI, NULL)).f_C));
if (r_NEEDS_INIT(((*(R12 *)rt_nil_check(p_T))).f_ELEM))
{
S_R4(&l_INIT_220, r_FMT2(rt_str("@ for (rt_int i = 0; i < n; i++) @", 34), l_INIT_220, r_INIT_CODE(((*(R12 *)rt_nil_check(p_T))).f_ELEM, r_MK(rt_str("x->p[i]", 7)))));
}
S_R4(&l_ASSIGN_221, r_FMT1(rt_str("rt_int n = d->hi - d->lo; if (n != s.hi - s.lo) rt_raise(RT_B_SIZE); for (rt_int i = 0; i <= n; i++) @", 102), r_ASSIGN_CODE(((*(R12 *)rt_nil_check(p_T))).f_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
}
else
{
{
R16 * l_F_222;
memset(&l_F_222, 0, sizeof l_F_222);
l_F_222 = ((*(R12 *)rt_nil_check(p_T))).f_FIELDS;
R4 l_BODY_223;
memset(&l_BODY_223, 0, sizeof l_BODY_223);
S_R4(&l_BODY_223, r_MK(rt_str("", 0)));
S_R4(&l_INIT_220, r_MK(rt_str("", 0)));
S_R4(&l_ASSIGN_221, r_MK(rt_str("", 0)));
for (;;) {
if ((l_F_222 == NULL)) goto L_end224;
{
S_R4(&l_BODY_223, r_FMT3(rt_str("@ @ @;", 6), l_BODY_223, r_CTYPE(((*(R16 *)rt_nil_check(l_F_222))).f_T), r_FIELD_C(((*(R16 *)rt_nil_check(l_F_222))).f_NAME)));
if (r_NEEDS_INIT(((*(R16 *)rt_nil_check(l_F_222))).f_T))
{
S_R4(&l_INIT_220, r_FMT2(rt_str("@ @", 3), l_INIT_220, r_INIT_CODE(((*(R16 *)rt_nil_check(l_F_222))).f_T, r_FMT1(rt_str("x->@", 4), r_FIELD_C(((*(R16 *)rt_nil_check(l_F_222))).f_NAME)))));
}
S_R4(&l_ASSIGN_221, r_FMT2(rt_str("@ @", 3), l_ASSIGN_221, r_ASSIGN_CODE(((*(R16 *)rt_nil_check(l_F_222))).f_T, r_FMT1(rt_str("d->@", 4), r_FIELD_C(((*(R16 *)rt_nil_check(l_F_222))).f_NAME)), r_FMT1(rt_str("s.@", 3), r_FIELD_C(((*(R16 *)rt_nil_check(l_F_222))).f_NAME)))));
l_F_222 = ((*(R16 *)rt_nil_check(l_F_222))).f_NEXT;
}
} L_end224: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_219, l_BODY_223));
}
}
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void I_@(@ *x);", 22), l_C_219, l_C_219, l_C_219));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s);", 27), l_C_219, l_C_219, l_C_219));
r_EMIT(g_O_HELPERS, r_FMT3(rt_str("static void I_@(@ *x) { @ }", 27), l_C_219, l_C_219, l_INIT_220));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s) { @ }", 32), l_C_219, l_C_219, l_C_219, l_ASSIGN_221));
}
static R14 r_MKET(R4 p_C, R12 * p_T) {
return ((R14){0, .f_C = p_C, .f_T = p_T});
rt_raise(RT_X_INIT);
}
static R4 r_CSTRING(R4 p_T) {
rstr l_S_225;
l_S_225 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_225, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_226;
memset(&l_AT_226, 0, sizeof l_AT_226);
l_AT_226 = ((*(R1 *)rt_nil_check(g_W))).f_TOP;
R4 l_R_227;
memset(&l_R_227, 0, sizeof l_R_227);
S_R4(&l_R_227, r_MK(rt_str("\"", 1)));
{ rt_int it229_lo = ((rt_int)0LL), it229_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it229 = it229_lo; it229 <= it229_hi; it229++) {
{
if ((rt_b_eq(rt_b_slice(l_S_225, it229, it229), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_225, it229, it229), rt_str("\\", 1))))
{
S_R4(&l_R_227, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_225, it229, it229))));
}
else if (rt_b_eq(rt_b_slice(l_S_225, it229, it229), rt_str("\?", 1)))
{
S_R4(&l_R_227, r_MK(rt_str("\\\?", 2)));
}
else
{
{
rt_int l_C_230;
memset(&l_C_230, 0, sizeof l_C_230);
l_C_230 = r_CODE_OF(rt_b_slice(l_S_225, it229, it229));
if (({ rt_int iv231 = l_C_230; (((rt_int)32LL)) <= iv231 && iv231 <= (((rt_int)126LL)); }))
{
S_R4(&l_R_227, r_MK(rt_b_slice(l_S_225, it229, it229)));
}
else
{
S_R4(&l_R_227, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_230, ((rt_int)64LL)))), rt_b_image(rt_rem(rt_quot(l_C_230, ((rt_int)8LL)), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_230, ((rt_int)8LL))))));
}
}
}
}
} } L_end228: ;
S_R4(&l_R_227, r_MK(rt_str("\"", 1)));
return ((R4){0, .f_AT = l_AT_226, .f_LEN = rt_sub(((*(R1 *)rt_nil_check(g_W))).f_TOP, l_AT_226), .f_H = rt_neg(((rt_int)1LL))});
rt_raise(RT_X_INIT);
}
static R15 r_MANIFEST(R13 * p_E) {
rt_int l_K_232;
memset(&l_K_232, 0, sizeof l_K_232);
l_K_232 = ((*(R13 *)rt_nil_check(p_E))).f_KIND;
R15 l_NO_233;
memset(&l_NO_233, 0, sizeof l_NO_233);
S_R15(&l_NO_233, ((R15){0, .f_OK = 0, .f_V = ((rt_int)0LL)}));
if ((l_K_232 == g_N_INT))
{
return ((R15){0, .f_OK = 1, .f_V = ((*(R13 *)rt_nil_check(p_E))).f_IV});
}
else if ((l_K_232 == g_N_PAREN))
{
return r_MANIFEST(((*(R13 *)rt_nil_check(p_E))).f_A);
}
else if ((l_K_232 == g_N_UNOP))
{
if (r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{
R15 l_A_234;
memset(&l_A_234, 0, sizeof l_A_234);
S_R15(&l_A_234, r_MANIFEST(((*(R13 *)rt_nil_check(p_E))).f_A));
return ((R15){0, .f_OK = (l_A_234).f_OK, .f_V = rt_neg((l_A_234).f_V)});
}
}
}
else if ((l_K_232 == g_N_BINOP))
{
{
R15 l_A_235;
memset(&l_A_235, 0, sizeof l_A_235);
S_R15(&l_A_235, r_MANIFEST(((*(R13 *)rt_nil_check(p_E))).f_A));
R15 l_B_236;
memset(&l_B_236, 0, sizeof l_B_236);
S_R15(&l_B_236, r_MANIFEST(((*(R13 *)rt_nil_check(p_E))).f_B));
if ((!((l_A_235).f_OK && (l_B_236).f_OK)))
{
return l_NO_233;
}
if (r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
return ((R15){0, .f_OK = 1, .f_V = rt_add((l_A_235).f_V, (l_B_236).f_V)});
}
else if (r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
return ((R15){0, .f_OK = 1, .f_V = rt_sub((l_A_235).f_V, (l_B_236).f_V)});
}
else if (r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("*", 1)))
{
return ((R15){0, .f_OK = 1, .f_V = rt_mul((l_A_235).f_V, (l_B_236).f_V)});
}
else if ((r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("//", 2)) && (!((l_B_236).f_V == ((rt_int)0LL)))))
{
return ((R15){0, .f_OK = 1, .f_V = rt_quot((l_A_235).f_V, (l_B_236).f_V)});
}
}
}
else if ((l_K_232 == g_N_NAME))
{
{
R7 * l_Y_237;
memset(&l_Y_237, 0, sizeof l_Y_237);
l_Y_237 = r_LOOKUP(((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_237 == NULL)))
{
if (((((*(R7 *)rt_nil_check(l_Y_237))).f_KIND == g_Y_CONST) && ((*(R7 *)rt_nil_check(l_Y_237))).f_HASMV))
{
return ((R15){0, .f_OK = 1, .f_V = ((*(R7 *)rt_nil_check(l_Y_237))).f_MV});
}
}
}
}
else if ((l_K_232 == g_N_ENUMLIT))
{
{
rt_int l_C_238;
memset(&l_C_238, 0, sizeof l_C_238);
l_C_238 = r_ASCII_CODE(((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((l_C_238 >= ((rt_int)0LL)))
{
return ((R15){0, .f_OK = 1, .f_V = l_C_238});
}
}
}
return l_NO_233;
rt_raise(RT_X_INIT);
}
static rt_int r_LIT_INDEX(R12 * p_T, R4 p_NAME) {
R13 * l_N_239;
memset(&l_N_239, 0, sizeof l_N_239);
l_N_239 = ((*(R12 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_240;
memset(&l_I_240, 0, sizeof l_I_240);
l_I_240 = ((rt_int)0LL);
for (;;) {
if ((l_N_239 == NULL)) goto L_end241;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_N_239))).f_NAME, p_NAME))
{
return l_I_240;
}
l_I_240 = rt_add(l_I_240, ((rt_int)1LL));
l_N_239 = ((*(R13 *)rt_nil_check(l_N_239))).f_NEXT;
}
} L_end241: ;
return rt_neg(((rt_int)1LL));
rt_raise(RT_X_INIT);
}
static R16 * r_FIND_FIELD(R12 * p_T, R4 p_NAME) {
R16 * l_F_242;
memset(&l_F_242, 0, sizeof l_F_242);
l_F_242 = ((*(R12 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_242 == NULL)) goto L_end243;
{
if (r_TEQ(((*(R16 *)rt_nil_check(l_F_242))).f_NAME, p_NAME))
{
return l_F_242;
}
l_F_242 = ((*(R16 *)rt_nil_check(l_F_242))).f_NEXT;
}
} L_end243: ;
return NULL;
rt_raise(RT_X_INIT);
}
static R14 r_EXPR(R13 * p_E, R12 * p_WANT) {
rt_int l_K_244;
memset(&l_K_244, 0, sizeof l_K_244);
l_K_244 = ((*(R13 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_244 == g_N_INT))
{
return r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R13 *)rt_nil_check(p_E))).f_IV)), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
else if ((l_K_244 == g_N_BOOL))
{
return r_MKET(r_NUM(((*(R13 *)rt_nil_check(p_E))).f_IV), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if ((l_K_244 == g_N_NIL))
{
return r_MKET(r_MK(rt_str("NULL", 4)), ((*(R1 *)rt_nil_check(g_W))).f_TY_NIL);
}
else if ((l_K_244 == g_N_PAREN))
{
return r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, p_WANT);
}
else if ((l_K_244 == g_N_STR))
{
{
rt_int l_AT_245;
memset(&l_AT_245, 0, sizeof l_AT_245);
l_AT_245 = ((*(R1 *)rt_nil_check(g_W))).f_TOP;
R13 * l_P_246;
memset(&l_P_246, 0, sizeof l_P_246);
l_P_246 = ((*(R13 *)rt_nil_check(p_E))).f_A;
R4 l_R_247;
memset(&l_R_247, 0, sizeof l_R_247);
for (;;) {
if ((l_P_246 == NULL)) goto L_end248;
{
if ((((*(R13 *)rt_nil_check(l_P_246))).f_IV == g_K_STR))
{
S_R4(&l_R_247, r_MK(r_STR(((*(R13 *)rt_nil_check(l_P_246))).f_NAME, (((*(R13 *)rt_nil_check(l_P_246))).f_NAME).f_LEN)));
}
else
{
{
rt_int l_C_249;
memset(&l_C_249, 0, sizeof l_C_249);
l_C_249 = r_ASCII_CODE(((*(R13 *)rt_nil_check(l_P_246))).f_NAME);
if ((l_C_249 < ((rt_int)0LL)))
{
r_FAILT(((*(R13 *)rt_nil_check(l_P_246))).f_LINE, rt_str("not a character of ASCII: ", 26), ((*(R13 *)rt_nil_check(l_P_246))).f_NAME);
}
S_R4(&l_R_247, r_MK(r_CHAR_OF(l_C_249)));
}
}
l_P_246 = ((*(R13 *)rt_nil_check(l_P_246))).f_NEXT;
}
} L_end248: ;
{
R4 l_S_250;
memset(&l_S_250, 0, sizeof l_S_250);
S_R4(&l_S_250, ((R4){0, .f_AT = l_AT_245, .f_LEN = rt_sub(((*(R1 *)rt_nil_check(g_W))).f_TOP, l_AT_245), .f_H = rt_neg(((rt_int)1LL))}));
R12 * l_T_251;
memset(&l_T_251, 0, sizeof l_T_251);
l_T_251 = r_NEW_TYP(g_T_STR);
((*(R12 *)rt_nil_check(l_T_251))).f_LEN = r_NEW_NODE(g_N_INT, ((*(R13 *)rt_nil_check(p_E))).f_LINE);
((*(R13 *)rt_nil_check(((*(R12 *)rt_nil_check(l_T_251))).f_LEN))).f_IV = (l_S_250).f_LEN;
return r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_250), r_NUM((l_S_250).f_LEN)), l_T_251);
}
}
}
else if ((l_K_244 == g_N_ENUMLIT))
{
if ((!(p_WANT == NULL)))
{
if (((((*(R12 *)rt_nil_check(p_WANT))).f_KIND == g_T_ENUM) && (!(p_WANT == ((*(R1 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
{
rt_int l_I_252;
memset(&l_I_252, 0, sizeof l_I_252);
l_I_252 = r_LIT_INDEX(p_WANT, ((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((l_I_252 >= ((rt_int)0LL)))
{
return r_MKET(r_NUM(l_I_252), p_WANT);
}
}
}
}
{
rt_int l_C_253;
memset(&l_C_253, 0, sizeof l_C_253);
l_C_253 = r_ASCII_CODE(((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((l_C_253 < ((rt_int)0LL)))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
return r_MKET(r_NUM(l_C_253), ((*(R1 *)rt_nil_check(g_W))).f_TY_ASCII);
}
}
else if ((l_K_244 == g_N_RECCONS))
{
if ((p_WANT == NULL))
{
r_FAIL(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown", 43));
}
if ((!(((*(R12 *)rt_nil_check(p_WANT))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown", 43));
}
{
R13 * l_P_254;
memset(&l_P_254, 0, sizeof l_P_254);
l_P_254 = ((*(R13 *)rt_nil_check(p_E))).f_A;
R4 l_PARTS_255;
memset(&l_PARTS_255, 0, sizeof l_PARTS_255);
S_R4(&l_PARTS_255, r_MK(rt_str("0", 1)));
for (;;) {
if ((l_P_254 == NULL)) goto L_end256;
{
{
R16 * l_F_257;
memset(&l_F_257, 0, sizeof l_F_257);
l_F_257 = r_FIND_FIELD(p_WANT, ((*(R13 *)rt_nil_check(l_P_254))).f_NAME);
if ((l_F_257 == NULL))
{
r_FAILT(((*(R13 *)rt_nil_check(l_P_254))).f_LINE, rt_str("no such field: ", 15), ((*(R13 *)rt_nil_check(l_P_254))).f_NAME);
}
S_R4(&l_PARTS_255, r_FMT3(rt_str("@, .@ = @", 9), l_PARTS_255, r_FIELD_C(((*(R16 *)rt_nil_check(l_F_257))).f_NAME), (r_EXPR(((*(R13 *)rt_nil_check(l_P_254))).f_A, ((*(R16 *)rt_nil_check(l_F_257))).f_T)).f_C));
}
l_P_254 = ((*(R13 *)rt_nil_check(l_P_254))).f_NEXT;
}
} L_end256: ;
return r_MKET(r_FMT2(rt_str("((@){@})", 8), ((*(R12 *)rt_nil_check(p_WANT))).f_CNAME, l_PARTS_255), p_WANT);
}
}
else if ((l_K_244 == g_N_NEW))
{
{
R12 * l_T_258;
memset(&l_T_258, 0, sizeof l_T_258);
l_T_258 = r_RESOLVE(((*(R13 *)rt_nil_check(p_E))).f_A);
R12 * l_P_259;
memset(&l_P_259, 0, sizeof l_P_259);
l_P_259 = r_NEW_TYP(g_T_PTR);
((*(R12 *)rt_nil_check(l_P_259))).f_TARGET = l_T_258;
((*(R12 *)rt_nil_check(l_P_259))).f_TARGET_TS = ((*(R13 *)rt_nil_check(p_E))).f_A;
return r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_258), r_INIT_CODE(l_T_258, r_MK(rt_str("(*p)", 4)))), l_P_259);
}
}
else if ((l_K_244 == g_N_NAME))
{
return r_NAME_EXPR(p_E);
}
else if ((l_K_244 == g_N_APPLY))
{
{
R7 * l_Y_260;
memset(&l_Y_260, 0, sizeof l_Y_260);
l_Y_260 = r_LOOKUP(((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_260 == NULL)))
{
if (((((*(R7 *)rt_nil_check(l_Y_260))).f_KIND == g_Y_VAR) || (((*(R7 *)rt_nil_check(l_Y_260))).f_KIND == g_Y_CONST)))
{
{
R13 * l_N_261;
memset(&l_N_261, 0, sizeof l_N_261);
l_N_261 = r_NEW_NODE(g_N_INDEX, ((*(R13 *)rt_nil_check(p_E))).f_LINE);
R13 * l_A_262;
memset(&l_A_262, 0, sizeof l_A_262);
l_A_262 = r_NEW_NODE(g_N_NAME, ((*(R13 *)rt_nil_check(p_E))).f_LINE);
S_R4(&((*(R13 *)rt_nil_check(l_A_262))).f_NAME, ((*(R13 *)rt_nil_check(p_E))).f_NAME);
((*(R13 *)rt_nil_check(l_N_261))).f_A = l_A_262;
((*(R13 *)rt_nil_check(l_N_261))).f_B = ((*(R13 *)rt_nil_check(p_E))).f_A;
return r_EXPR(l_N_261, p_WANT);
}
}
}
return r_CALL(p_E);
}
}
else if ((l_K_244 == g_N_FIELD))
{
{
R14 l_B_263;
memset(&l_B_263, 0, sizeof l_B_263);
S_R14(&l_B_263, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
if ((r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("LENGTH", 6)) && (((*(R12 *)rt_nil_check((l_B_263).f_T))).f_KIND == g_T_STR)))
{
return r_MKET(r_FMT1(rt_str("(@).len", 7), (l_B_263).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
if ((!(((*(R12 *)rt_nil_check((l_B_263).f_T))).f_KIND == g_T_REC)))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("a field of something not a record: ", 35), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
{
R16 * l_F_264;
memset(&l_F_264, 0, sizeof l_F_264);
l_F_264 = r_FIND_FIELD((l_B_263).f_T, ((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((l_F_264 == NULL))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("no such field: ", 15), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
return r_MKET(r_FMT2(rt_str("(@).@", 5), (l_B_263).f_C, r_FIELD_C(((*(R16 *)rt_nil_check(l_F_264))).f_NAME)), ((*(R16 *)rt_nil_check(l_F_264))).f_T);
}
}
}
else if ((l_K_244 == g_N_DEREF))
{
{
R14 l_B_265;
memset(&l_B_265, 0, sizeof l_B_265);
S_R14(&l_B_265, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
if ((!(((*(R12 *)rt_nil_check((l_B_265).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R12 * l_TT_266;
memset(&l_TT_266, 0, sizeof l_TT_266);
l_TT_266 = r_TARGET((l_B_265).f_T);
return r_MKET(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_266), (l_B_265).f_C), l_TT_266);
}
}
}
else if ((l_K_244 == g_N_INDEX))
{
{
R14 l_B_267;
memset(&l_B_267, 0, sizeof l_B_267);
S_R14(&l_B_267, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
if ((!(((*(R12 *)rt_nil_check((l_B_267).f_T))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
return r_MKET(r_FMT4(rt_str("(@).p[rt_index(@, (@).lo, (@).hi) - (@).lo]", 43), (l_B_267).f_C, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, NULL)).f_C, (l_B_267).f_C, (l_B_267).f_C), ((*(R12 *)rt_nil_check((l_B_267).f_T))).f_ELEM);
}
}
else if ((l_K_244 == g_N_SUBSTR))
{
return r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_C, NULL)).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_STR);
}
else if ((l_K_244 == g_N_UNOP))
{
{
R14 l_A_268;
memset(&l_A_268, 0, sizeof l_A_268);
S_R14(&l_A_268, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
if (r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
return r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_268).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (r_TEQS(((*(R13 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
return r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_268).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
return l_A_268;
}
}
else if ((l_K_244 == g_N_IN))
{
{
R4 l_V_269;
memset(&l_V_269, 0, sizeof l_V_269);
S_R4(&l_V_269, r_NEW_NAME(rt_str("iv", 2)));
R4 l_LO_OP_270;
memset(&l_LO_OP_270, 0, sizeof l_LO_OP_270);
R4 l_HI_OP_271;
memset(&l_HI_OP_271, 0, sizeof l_HI_OP_271);
S_R4(&l_LO_OP_270, r_MK(rt_str("<=", 2)));
S_R4(&l_HI_OP_271, r_MK(rt_str("<=", 2)));
if (((((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
S_R4(&l_LO_OP_270, r_MK(rt_str("<", 1)));
}
if ((((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
S_R4(&l_HI_OP_271, r_MK(rt_str("<", 1)));
}
{
R4 l_P1_272;
memset(&l_P1_272, 0, sizeof l_P1_272);
S_R4(&l_P1_272, r_FMT4(rt_str("({ rt_int @ = @; (@) @ ", 23), l_V_269, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_B))).f_A, NULL)).f_C, l_LO_OP_270));
R4 l_P2_273;
memset(&l_P2_273, 0, sizeof l_P2_273);
S_R4(&l_P2_273, r_FMT4(rt_str("@@ && @ @ ", 10), l_P1_272, l_V_269, l_V_269, l_HI_OP_271));
return r_MKET(r_FMT2(rt_str("@(@); })", 8), l_P2_273, (r_EXPR(((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_B))).f_B, NULL)).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
}
else if ((l_K_244 == g_N_BINOP))
{
return r_BINARY(p_E);
}
r_FAIL(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated yet", 40));
rt_raise(RT_X_INIT);
}
static R14 r_NAME_EXPR(R13 * p_E) {
R7 * l_Y_274;
memset(&l_Y_274, 0, sizeof l_Y_274);
l_Y_274 = r_LOOKUP(((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_274 == NULL))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R7 *)rt_nil_check(l_Y_274))).f_KIND == g_Y_VAR) || (((*(R7 *)rt_nil_check(l_Y_274))).f_KIND == g_Y_CONST)))
{
return r_MKET(((*(R7 *)rt_nil_check(l_Y_274))).f_ACCESS, ((*(R7 *)rt_nil_check(l_Y_274))).f_T);
}
else if ((((*(R7 *)rt_nil_check(l_Y_274))).f_KIND == g_Y_GEN))
{
return r_MKET(((*(R7 *)rt_nil_check(l_Y_274))).f_ACCESS, ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (((((*(R7 *)rt_nil_check(l_Y_274))).f_KIND == g_Y_ROUTINE) || (((*(R7 *)rt_nil_check(l_Y_274))).f_KIND == g_Y_BUILTIN)))
{
{
R13 * l_N_275;
memset(&l_N_275, 0, sizeof l_N_275);
l_N_275 = r_NEW_NODE(g_N_APPLY, ((*(R13 *)rt_nil_check(p_E))).f_LINE);
S_R4(&((*(R13 *)rt_nil_check(l_N_275))).f_NAME, ((*(R13 *)rt_nil_check(p_E))).f_NAME);
return r_CALL(l_N_275);
}
}
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R14 r_BINARY(R13 * p_E) {
R4 l_OP_276;
memset(&l_OP_276, 0, sizeof l_OP_276);
S_R4(&l_OP_276, ((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((r_TEQS(l_OP_276, rt_str("&", 1)) || r_TEQS(l_OP_276, rt_str("!", 1))))
{
{
R4 l_A_277;
memset(&l_A_277, 0, sizeof l_A_277);
S_R4(&l_A_277, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL)).f_C);
R4 l_B_278;
memset(&l_B_278, 0, sizeof l_B_278);
S_R4(&l_B_278, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, NULL)).f_C);
if (r_TEQS(l_OP_276, rt_str("&", 1)))
{
return r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_A_277, l_B_278), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
return r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_A_277, l_B_278), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
if ((r_TEQS(l_OP_276, rt_str("=", 1)) || r_TEQS(l_OP_276, rt_str("<>", 2))))
{
{
R14 l_A_279;
memset(&l_A_279, 0, sizeof l_A_279);
S_R14(&l_A_279, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
R14 l_B_280;
memset(&l_B_280, 0, sizeof l_B_280);
S_R14(&l_B_280, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, (l_A_279).f_T));
R4 l_R_281;
memset(&l_R_281, 0, sizeof l_R_281);
if (((((*(R12 *)rt_nil_check((l_A_279).f_T))).f_KIND == g_T_NIL) && (!(((*(R12 *)rt_nil_check((l_B_280).f_T))).f_KIND == g_T_NIL))))
{
S_R14(&l_A_279, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, (l_B_280).f_T));
}
if ((((*(R12 *)rt_nil_check((l_A_279).f_T))).f_KIND == g_T_STR))
{
S_R4(&l_R_281, r_FMT2(rt_str("rt_b_eq(@, @)", 13), (l_A_279).f_C, (l_B_280).f_C));
}
else
{
S_R4(&l_R_281, r_FMT2(rt_str("(@ == @)", 8), (l_A_279).f_C, (l_B_280).f_C));
}
if (r_TEQS(l_OP_276, rt_str("<>", 2)))
{
S_R4(&l_R_281, r_FMT1(rt_str("(!@)", 4), l_R_281));
}
return r_MKET(l_R_281, ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
if ((((r_TEQS(l_OP_276, rt_str("<", 1)) || r_TEQS(l_OP_276, rt_str(">", 1))) || r_TEQS(l_OP_276, rt_str("<=", 2))) || r_TEQS(l_OP_276, rt_str(">=", 2))))
{
{
R14 l_A_282;
memset(&l_A_282, 0, sizeof l_A_282);
S_R14(&l_A_282, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
R14 l_B_283;
memset(&l_B_283, 0, sizeof l_B_283);
S_R14(&l_B_283, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, (l_A_282).f_T));
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (l_A_282).f_C, l_OP_276, (l_B_283).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
if (r_TEQS(l_OP_276, rt_str("!!", 2)))
{
return r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, NULL)).f_C), ((*(R1 *)rt_nil_check(g_W))).f_TY_STR);
}
{
R4 l_A_284;
memset(&l_A_284, 0, sizeof l_A_284);
S_R4(&l_A_284, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL)).f_C);
R4 l_B_285;
memset(&l_B_285, 0, sizeof l_B_285);
S_R4(&l_B_285, (r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_B, NULL)).f_C);
R4 l_FN_286;
memset(&l_FN_286, 0, sizeof l_FN_286);
if (r_TEQS(l_OP_276, rt_str("+", 1)))
{
S_R4(&l_FN_286, r_MK(rt_str("rt_add", 6)));
}
else if (r_TEQS(l_OP_276, rt_str("-", 1)))
{
S_R4(&l_FN_286, r_MK(rt_str("rt_sub", 6)));
}
else if (r_TEQS(l_OP_276, rt_str("*", 1)))
{
S_R4(&l_FN_286, r_MK(rt_str("rt_mul", 6)));
}
else if (r_TEQS(l_OP_276, rt_str("//", 2)))
{
S_R4(&l_FN_286, r_MK(rt_str("rt_quot", 7)));
}
else if (r_TEQS(l_OP_276, rt_str("MOD", 3)))
{
S_R4(&l_FN_286, r_MK(rt_str("rt_rem", 6)));
}
else
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("this operator cannot be translated yet: ", 40), l_OP_276);
}
return r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_286, l_A_284, l_B_285), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
rt_raise(RT_X_INIT);
}
static R13 * r_ALL_ARGS(R13 * p_E) {
R13 * l_HEAD_287;
memset(&l_HEAD_287, 0, sizeof l_HEAD_287);
l_HEAD_287 = NULL;
R13 * l_TAIL_288;
memset(&l_TAIL_288, 0, sizeof l_TAIL_288);
l_TAIL_288 = NULL;
R13 * l_P_289;
memset(&l_P_289, 0, sizeof l_P_289);
l_P_289 = ((*(R13 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_289 == NULL)) goto L_end290;
{
r_ADD_LIST(r_COPY_NODE(l_P_289), &l_HEAD_287, &l_TAIL_288);
l_P_289 = ((*(R13 *)rt_nil_check(l_P_289))).f_NEXT;
}
} L_end290: ;
l_P_289 = ((*(R13 *)rt_nil_check(p_E))).f_B;
for (;;) {
if ((l_P_289 == NULL)) goto L_end291;
{
r_ADD_LIST(r_COPY_NODE(l_P_289), &l_HEAD_287, &l_TAIL_288);
l_P_289 = ((*(R13 *)rt_nil_check(l_P_289))).f_NEXT;
}
} L_end291: ;
l_P_289 = ((*(R13 *)rt_nil_check(p_E))).f_C;
for (;;) {
if ((l_P_289 == NULL)) goto L_end292;
{
r_ADD_LIST(r_COPY_NODE(l_P_289), &l_HEAD_287, &l_TAIL_288);
l_P_289 = ((*(R13 *)rt_nil_check(l_P_289))).f_NEXT;
}
} L_end292: ;
return l_HEAD_287;
rt_raise(RT_X_INIT);
}
static R13 * r_COPY_NODE(R13 * p_N) {
R13 * l_C_293;
memset(&l_C_293, 0, sizeof l_C_293);
l_C_293 = ({ R13 *p = rt_alloc(sizeof *p); I_R13(&(*p)); p; });
S_R13(&(*(R13 *)rt_nil_check(l_C_293)), (*(R13 *)rt_nil_check(p_N)));
((*(R13 *)rt_nil_check(l_C_293))).f_NEXT = NULL;
return l_C_293;
rt_raise(RT_X_INIT);
}
static R14 r_CALL(R13 * p_E) {
R7 * l_Y_294;
memset(&l_Y_294, 0, sizeof l_Y_294);
l_Y_294 = r_LOOKUP(((*(R13 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_294 == NULL))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R7 *)rt_nil_check(l_Y_294))).f_KIND == g_Y_BUILTIN))
{
return r_BUILTIN(p_E);
}
if ((!(((*(R7 *)rt_nil_check(l_Y_294))).f_KIND == g_Y_ROUTINE)))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
{
R13 * l_A_295;
memset(&l_A_295, 0, sizeof l_A_295);
l_A_295 = r_ALL_ARGS(p_E);
R185 * l_P_296;
memset(&l_P_296, 0, sizeof l_P_296);
l_P_296 = ((*(R7 *)rt_nil_check(l_Y_294))).f_PARAMS;
R4 l_ARGS_297;
memset(&l_ARGS_297, 0, sizeof l_ARGS_297);
S_R4(&l_ARGS_297, r_MK(rt_str("", 0)));
R4 l_SEP_298;
memset(&l_SEP_298, 0, sizeof l_SEP_298);
S_R4(&l_SEP_298, r_MK(rt_str("", 0)));
for (;;) {
if ((l_P_296 == NULL)) goto L_end299;
{
if ((l_A_295 == NULL))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("too few arguments for ", 22), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R185 *)rt_nil_check(l_P_296))).f_MODE == g_M_IN))
{
S_R4(&l_ARGS_297, r_FMT3(rt_str("@@@", 3), l_ARGS_297, l_SEP_298, r_RANGE_CHECK(((*(R185 *)rt_nil_check(l_P_296))).f_T, (r_EXPR(l_A_295, ((*(R185 *)rt_nil_check(l_P_296))).f_T)).f_C)));
}
else
{
S_R4(&l_ARGS_297, r_FMT3(rt_str("@@&@", 4), l_ARGS_297, l_SEP_298, (r_EXPR(l_A_295, NULL)).f_C));
}
S_R4(&l_SEP_298, r_MK(rt_str(", ", 2)));
l_A_295 = ((*(R13 *)rt_nil_check(l_A_295))).f_NEXT;
l_P_296 = ((*(R185 *)rt_nil_check(l_P_296))).f_NEXT;
}
} L_end299: ;
if ((!(l_A_295 == NULL)))
{
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("too many arguments for ", 23), ((*(R13 *)rt_nil_check(p_E))).f_NAME);
}
return r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R7 *)rt_nil_check(l_Y_294))).f_ACCESS, l_ARGS_297), ((*(R7 *)rt_nil_check(l_Y_294))).f_RESULT);
}
rt_raise(RT_X_INIT);
}
static R14 r_BUILTIN(R13 * p_E) {
R4 l_NAME_300;
memset(&l_NAME_300, 0, sizeof l_NAME_300);
S_R4(&l_NAME_300, ((*(R13 *)rt_nil_check(p_E))).f_NAME);
R4 l_A_301;
memset(&l_A_301, 0, sizeof l_A_301);
R4 l_B_302;
memset(&l_B_302, 0, sizeof l_B_302);
R12 * l_AT_303;
memset(&l_AT_303, 0, sizeof l_AT_303);
l_AT_303 = ((*(R1 *)rt_nil_check(g_W))).f_TY_VOID;
S_R4(&l_A_301, r_MK(rt_str("", 0)));
S_R4(&l_B_302, r_MK(rt_str("", 0)));
if ((!(((*(R13 *)rt_nil_check(p_E))).f_A == NULL)))
{
{
R14 l_X_304;
memset(&l_X_304, 0, sizeof l_X_304);
S_R14(&l_X_304, r_EXPR(((*(R13 *)rt_nil_check(p_E))).f_A, NULL));
S_R4(&l_A_301, (l_X_304).f_C);
l_AT_303 = (l_X_304).f_T;
}
if ((!(((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL)))
{
S_R4(&l_B_302, (r_EXPR(((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL)).f_C);
}
}
if (r_TEQS(l_NAME_300, rt_str("PUT", 3)))
{
return r_MKET(r_FMT1(rt_str("rt_put(@)", 9), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_300, rt_str("PUT_LINE", 8)))
{
return r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_300, rt_str("NEW_LINE", 8)))
{
return r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R1 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_300, rt_str("GET_CODE", 8)))
{
return r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(l_NAME_300, rt_str("STOP", 4)))
{
return r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_300, rt_str("TO_CHAR", 7)))
{
return r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_STR);
}
else if (r_TEQS(l_NAME_300, rt_str("BLANKS", 6)))
{
return r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_STR);
}
else if (r_TEQS(l_NAME_300, rt_str("DUP", 3)))
{
return r_MKET(r_FMT2(rt_str("rt_b_dup(@, @)", 14), l_A_301, l_B_302), ((*(R1 *)rt_nil_check(g_W))).f_TY_STR);
}
else if (r_TEQS(l_NAME_300, rt_str("ABS", 3)))
{
return r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(l_NAME_300, rt_str("TO_FIXED", 8)))
{
if ((((*(R12 *)rt_nil_check(l_AT_303))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_int_of_str(@)", 16), l_A_301), ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
return r_MKET(l_A_301, ((*(R1 *)rt_nil_check(g_W))).f_TY_INT);
}
r_FAILT(((*(R13 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), l_NAME_300);
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R4 p_NAME) {
R11 * l_C_305;
memset(&l_C_305, 0, sizeof l_C_305);
l_C_305 = ({ R11 *p = rt_alloc(sizeof *p); I_R11(&(*p)); p; });
S_R11(&(*(R11 *)rt_nil_check(l_C_305)), ((R11){0, .f_KIND = p_KIND, .f_NAME = p_NAME, .f_NEXT = ((*(R1 *)rt_nil_check(g_W))).f_CTXS}));
((*(R1 *)rt_nil_check(g_W))).f_CTXS = l_C_305;
}
static void r_POP_CTX(void) {
((*(R1 *)rt_nil_check(g_W))).f_CTXS = ((*(R11 *)rt_nil_check(((*(R1 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R11 * r_LEAVE(rt_int p_KIND) {
R11 * l_C_306;
memset(&l_C_306, 0, sizeof l_C_306);
l_C_306 = ((*(R1 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_306 == NULL)) goto L_end307;
{
if ((((*(R11 *)rt_nil_check(l_C_306))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R11 *)rt_nil_check(l_C_306))).f_NAME));
}
if ((((*(R11 *)rt_nil_check(l_C_306))).f_KIND == p_KIND))
{
return l_C_306;
}
l_C_306 = ((*(R11 *)rt_nil_check(l_C_306))).f_NEXT;
}
} L_end307: ;
return NULL;
rt_raise(RT_X_INIT);
}
static R4 r_EXC_NAME(R4 p_NAME) {
R13 * l_N_308;
memset(&l_N_308, 0, sizeof l_N_308);
l_N_308 = ((*(R1 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_308 == NULL)) goto L_end309;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_N_308))).f_NAME, p_NAME))
{
return r_FMT1(rt_str("x_@", 3), p_NAME);
}
l_N_308 = ((*(R13 *)rt_nil_check(l_N_308))).f_NEXT;
}
} L_end309: ;
l_N_308 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R4(&((*(R13 *)rt_nil_check(l_N_308))).f_NAME, p_NAME);
((*(R13 *)rt_nil_check(l_N_308))).f_NEXT = ((*(R1 *)rt_nil_check(g_W))).f_EXCS;
((*(R1 *)rt_nil_check(g_W))).f_EXCS = l_N_308;
return r_FMT1(rt_str("x_@", 3), p_NAME);
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R13 * p_DECLS) {
R13 * l_D_310;
memset(&l_D_310, 0, sizeof l_D_310);
l_D_310 = p_DECLS;
for (;;) {
if ((l_D_310 == NULL)) goto L_end311;
{
if ((((*(R13 *)rt_nil_check(l_D_310))).f_KIND == g_N_TYPE))
{
{
R7 * l_Y_312;
memset(&l_Y_312, 0, sizeof l_Y_312);
l_Y_312 = r_NEW_SYM(g_Y_TYPE, ((*(R13 *)rt_nil_check(l_D_310))).f_NAME);
((*(R7 *)rt_nil_check(l_Y_312))).f_TS = ((*(R13 *)rt_nil_check(l_D_310))).f_B;
r_DEFINE(l_Y_312, ((*(R13 *)rt_nil_check(l_D_310))).f_LINE);
}
}
l_D_310 = ((*(R13 *)rt_nil_check(l_D_310))).f_NEXT;
}
} L_end311: ;
}
static void r_DECLARE_OBJECTS(R13 * p_D, rt_int p_GLOB) {
R12 * l_T_313;
memset(&l_T_313, 0, sizeof l_T_313);
l_T_313 = r_RESOLVE(((*(R13 *)rt_nil_check(p_D))).f_B);
R13 * l_N_314;
memset(&l_N_314, 0, sizeof l_N_314);
l_N_314 = ((*(R13 *)rt_nil_check(p_D))).f_A;
for (;;) {
if ((l_N_314 == NULL)) goto L_end315;
{
{
R7 * l_Y_316;
memset(&l_Y_316, 0, sizeof l_Y_316);
l_Y_316 = r_NEW_SYM(g_Y_VAR, ((*(R13 *)rt_nil_check(l_N_314))).f_NAME);
R4 l_CN_317;
memset(&l_CN_317, 0, sizeof l_CN_317);
if ((((*(R13 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R7 *)rt_nil_check(l_Y_316))).f_KIND = g_Y_CONST;
if (r_IS_SCALAR(l_T_313))
{
{
R15 l_M_318;
memset(&l_M_318, 0, sizeof l_M_318);
S_R15(&l_M_318, r_MANIFEST(((*(R13 *)rt_nil_check(p_D))).f_C));
((*(R7 *)rt_nil_check(l_Y_316))).f_HASMV = (l_M_318).f_OK;
((*(R7 *)rt_nil_check(l_Y_316))).f_MV = (l_M_318).f_V;
}
}
}
((*(R7 *)rt_nil_check(l_Y_316))).f_T = l_T_313;
if (p_GLOB)
{
S_R4(&l_CN_317, r_FMT1(rt_str("g_@", 3), ((*(R13 *)rt_nil_check(l_N_314))).f_NAME));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_313), l_CN_317));
}
else
{
S_R4(&l_CN_317, r_FMT2(rt_str("l_@_@", 5), ((*(R13 *)rt_nil_check(l_N_314))).f_NAME, r_NEW_NAME(rt_str("", 0))));
r_CODE(r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_313), l_CN_317));
}
S_R4(&((*(R7 *)rt_nil_check(l_Y_316))).f_ACCESS, l_CN_317);
if (r_NEEDS_INIT(l_T_313))
{
r_CODE(r_INIT_CODE(l_T_313, l_CN_317));
}
else
{
r_CODE(r_FMT2(rt_str("memset(&@, 0, sizeof @);", 24), l_CN_317, l_CN_317));
}
if ((!(((*(R13 *)rt_nil_check(p_D))).f_C == NULL)))
{
r_CODE(r_ASSIGN_CODE(l_T_313, l_CN_317, r_RANGE_CHECK(l_T_313, (r_EXPR(((*(R13 *)rt_nil_check(p_D))).f_C, l_T_313)).f_C)));
}
r_DEFINE(l_Y_316, ((*(R13 *)rt_nil_check(l_N_314))).f_LINE);
}
l_N_314 = ((*(R13 *)rt_nil_check(l_N_314))).f_NEXT;
}
} L_end315: ;
}
static void r_BODY(R13 * p_B) {
R13 * l_D_319;
memset(&l_D_319, 0, sizeof l_D_319);
l_D_319 = ((*(R13 *)rt_nil_check(p_B))).f_A;
R13 * l_S_320;
memset(&l_S_320, 0, sizeof l_S_320);
l_S_320 = ((*(R13 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R13 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_319 == NULL)) goto L_end321;
{
if (((((*(R13 *)rt_nil_check(l_D_319))).f_KIND == g_N_VAR) || (((*(R13 *)rt_nil_check(l_D_319))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_319, 0);
}
l_D_319 = ((*(R13 *)rt_nil_check(l_D_319))).f_NEXT;
}
} L_end321: ;
for (;;) {
if ((l_S_320 == NULL)) goto L_end322;
{
r_STMT(l_S_320);
l_S_320 = ((*(R13 *)rt_nil_check(l_S_320))).f_NEXT;
}
} L_end322: ;
}
static void r_OPEN_BODY(R13 * p_B) {
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_STMT(R13 * p_S) {
rt_int l_K_323;
memset(&l_K_323, 0, sizeof l_K_323);
l_K_323 = ((*(R13 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_323 == g_N_NULL))
{
return;
}
else if ((l_K_323 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_323 == g_N_CALL))
{
((*(R13 *)rt_nil_check(p_S))).f_KIND = g_N_APPLY;
r_CODE(r_CATS((r_CALL(p_S)).f_C, rt_str(";", 1)));
}
else if ((l_K_323 == g_N_IF))
{
{
R13 * l_ARM_324;
memset(&l_ARM_324, 0, sizeof l_ARM_324);
l_ARM_324 = ((*(R13 *)rt_nil_check(p_S))).f_A;
R4 l_WORD_325;
memset(&l_WORD_325, 0, sizeof l_WORD_325);
S_R4(&l_WORD_325, r_MK(rt_str("if", 2)));
for (;;) {
if ((l_ARM_324 == NULL)) goto L_end326;
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_325, (r_EXPR(((*(R13 *)rt_nil_check(l_ARM_324))).f_A, ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL)).f_C));
r_OPEN_BODY(((*(R13 *)rt_nil_check(l_ARM_324))).f_B);
S_R4(&l_WORD_325, r_MK(rt_str("else if", 7)));
l_ARM_324 = ((*(R13 *)rt_nil_check(l_ARM_324))).f_NEXT;
}
} L_end326: ;
if ((!(((*(R13 *)rt_nil_check(p_S))).f_B == NULL)))
{
r_CODES(rt_str("else", 4));
r_OPEN_BODY(((*(R13 *)rt_nil_check(p_S))).f_B);
}
}
}
else if ((l_K_323 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_323 == g_N_LOOP))
{
{
R4 l_END_L_327;
memset(&l_END_L_327, 0, sizeof l_END_L_327);
S_R4(&l_END_L_327, r_NEW_NAME(rt_str("L_end", 5)));
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R13 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), (r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_A, ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL)).f_C, l_END_L_327));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_327);
r_OPEN_BODY(((*(R13 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R13 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), (r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_C, ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL)).f_C, l_END_L_327));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_327));
}
}
else if ((l_K_323 == g_N_FOR))
{
{
R4 l_END_L_328;
memset(&l_END_L_328, 0, sizeof l_END_L_328);
S_R4(&l_END_L_328, r_NEW_NAME(rt_str("L_end", 5)));
R4 l_IT_329;
memset(&l_IT_329, 0, sizeof l_IT_329);
S_R4(&l_IT_329, r_NEW_NAME(rt_str("it", 2)));
R13 * l_R_330;
memset(&l_R_330, 0, sizeof l_R_330);
l_R_330 = ((*(R13 *)rt_nil_check(p_S))).f_A;
R14 l_LO_331;
memset(&l_LO_331, 0, sizeof l_LO_331);
S_R14(&l_LO_331, r_EXPR(((*(R13 *)rt_nil_check(l_R_330))).f_A, NULL));
R4 l_LOC_332;
memset(&l_LOC_332, 0, sizeof l_LOC_332);
R4 l_HIC_333;
memset(&l_HIC_333, 0, sizeof l_HIC_333);
S_R4(&l_LOC_332, (l_LO_331).f_C);
S_R4(&l_HIC_333, (r_EXPR(((*(R13 *)rt_nil_check(l_R_330))).f_B, (l_LO_331).f_T)).f_C);
if (((((*(R13 *)rt_nil_check(l_R_330))).f_IV == ((rt_int)1LL)) || (((*(R13 *)rt_nil_check(l_R_330))).f_IV == ((rt_int)3LL))))
{
S_R4(&l_LOC_332, r_FMT1(rt_str("(@) + 1", 7), l_LOC_332));
}
if ((((*(R13 *)rt_nil_check(l_R_330))).f_IV >= ((rt_int)2LL)))
{
S_R4(&l_HIC_333, r_FMT1(rt_str("(@) - 1", 7), l_HIC_333));
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_329, l_LOC_332, l_IT_329, l_HIC_333));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_329, l_IT_329, l_IT_329, l_IT_329));
r_OPEN_SCOPE();
if (((((*(R13 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R7 * l_Y_334;
memset(&l_Y_334, 0, sizeof l_Y_334);
l_Y_334 = r_NEW_SYM(g_Y_CONST, ((*(R13 *)rt_nil_check(p_S))).f_NAME);
S_R4(&((*(R7 *)rt_nil_check(l_Y_334))).f_ACCESS, l_IT_329);
if ((((*(R12 *)rt_nil_check((l_LO_331).f_T))).f_KIND == g_T_ENUM))
{
((*(R7 *)rt_nil_check(l_Y_334))).f_T = (l_LO_331).f_T;
}
else
{
((*(R7 *)rt_nil_check(l_Y_334))).f_T = ((*(R1 *)rt_nil_check(g_W))).f_TY_INT;
}
r_DEFINE(l_Y_334, ((*(R13 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_328);
r_OPEN_BODY(((*(R13 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_328));
}
}
else if ((l_K_323 == g_N_EXIT))
{
{
R11 * l_C_335;
memset(&l_C_335, 0, sizeof l_C_335);
l_C_335 = r_LEAVE(((rt_int)2LL));
if ((l_C_335 == NULL))
{
r_FAIL(((*(R13 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop", 19));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R11 *)rt_nil_check(l_C_335))).f_NAME));
}
}
else if ((l_K_323 == g_N_RETURN))
{
{
R11 * l_C_336;
memset(&l_C_336, 0, sizeof l_C_336);
l_C_336 = r_LEAVE(((rt_int)1LL));
if ((((*(R13 *)rt_nil_check(p_S))).f_A == NULL))
{
if (((*(R1 *)rt_nil_check(g_W))).f_IN_ROUTINE)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("rt_main_done();", 15));
}
}
else
{
r_CODE(r_FMT1(rt_str("return @;", 9), (r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_A, ((*(R1 *)rt_nil_check(g_W))).f_RESULT)).f_C));
}
}
}
else if ((l_K_323 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R13 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_323 == g_N_SIGNAL))
{
if (((((*(R13 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R11 * l_C_337;
memset(&l_C_337, 0, sizeof l_C_337);
l_C_337 = ((*(R1 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_337 == NULL)) goto L_end338;
{
if ((((*(R11 *)rt_nil_check(l_C_337))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R11 *)rt_nil_check(l_C_337))).f_NAME));
return;
}
l_C_337 = ((*(R11 *)rt_nil_check(l_C_337))).f_NEXT;
}
} L_end338: ;
r_FAIL(((*(R13 *)rt_nil_check(p_S))).f_LINE, rt_str("SIGNAL without a name outside a handler", 39));
}
}
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), r_EXC_NAME(((*(R13 *)rt_nil_check(p_S))).f_NAME)));
}
else if ((l_K_323 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), (r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_A, ((*(R1 *)rt_nil_check(g_W))).f_TY_BOOL)).f_C));
}
else if ((l_K_323 == g_N_EXCEPT))
{
{
R4 l_F_339;
memset(&l_F_339, 0, sizeof l_F_339);
S_R4(&l_F_339, r_NEW_NAME(rt_str("xf", 2)));
R13 * l_H_340;
memset(&l_H_340, 0, sizeof l_H_340);
l_H_340 = ((*(R13 *)rt_nil_check(p_S))).f_B;
R4 l_WORD_341;
memset(&l_WORD_341, 0, sizeof l_WORD_341);
S_R4(&l_WORD_341, r_MK(rt_str("if", 2)));
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_339, l_F_339));
r_PUSH_CTX(((rt_int)3LL), l_F_339);
r_STMT(((*(R13 *)rt_nil_check(p_S))).f_A);
r_POP_CTX();
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_339, l_F_339, l_F_339));
for (;;) {
if ((l_H_340 == NULL)) goto L_end342;
{
{
R13 * l_N_343;
memset(&l_N_343, 0, sizeof l_N_343);
l_N_343 = ((*(R13 *)rt_nil_check(l_H_340))).f_A;
R4 l_COND_344;
memset(&l_COND_344, 0, sizeof l_COND_344);
S_R4(&l_COND_344, r_MK(rt_str("0", 1)));
for (;;) {
if ((l_N_343 == NULL)) goto L_end345;
{
S_R4(&l_COND_344, r_FMT3(rt_str("@ || @x == @", 12), l_COND_344, l_F_339, r_EXC_NAME(((*(R13 *)rt_nil_check(l_N_343))).f_NAME)));
l_N_343 = ((*(R13 *)rt_nil_check(l_N_343))).f_NEXT;
}
} L_end345: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_341, l_COND_344));
S_R4(&l_WORD_341, r_MK(rt_str("else if", 7)));
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_339, rt_str("x", 1)));
r_OPEN_BODY(((*(R13 *)rt_nil_check(l_H_340))).f_B);
r_POP_CTX();
}
l_H_340 = ((*(R13 *)rt_nil_check(l_H_340))).f_NEXT;
}
} L_end342: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_339));
}
}
else
{
r_FAIL(((*(R13 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated yet", 39));
}
}
static void r_ASSIGN_STMT(R13 * p_S) {
R13 * l_TG_346;
memset(&l_TG_346, 0, sizeof l_TG_346);
l_TG_346 = ((*(R13 *)rt_nil_check(p_S))).f_A;
if ((((*(R13 *)rt_nil_check(l_TG_346))).f_KIND == g_N_SUBSTR))
{
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (r_EXPR(((*(R13 *)rt_nil_check(l_TG_346))).f_A, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(l_TG_346))).f_B, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(l_TG_346))).f_C, NULL)).f_C, (r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_B, NULL)).f_C));
return;
}
{
R14 l_LV_347;
memset(&l_LV_347, 0, sizeof l_LV_347);
S_R14(&l_LV_347, r_EXPR(l_TG_346, NULL));
r_CODE(r_ASSIGN_CODE((l_LV_347).f_T, (l_LV_347).f_C, r_RANGE_CHECK((l_LV_347).f_T, (r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_B, (l_LV_347).f_T)).f_C)));
}
}
static void r_CASE_STMT(R13 * p_S) {
R14 l_CH_348;
memset(&l_CH_348, 0, sizeof l_CH_348);
S_R14(&l_CH_348, r_EXPR(((*(R13 *)rt_nil_check(p_S))).f_A, NULL));
R13 * l_ARM_349;
memset(&l_ARM_349, 0, sizeof l_ARM_349);
l_ARM_349 = ((*(R13 *)rt_nil_check(p_S))).f_B;
if ((((*(R12 *)rt_nil_check((l_CH_348).f_T))).f_KIND == g_T_STR))
{
{
R4 l_TMP_350;
memset(&l_TMP_350, 0, sizeof l_TMP_350);
S_R4(&l_TMP_350, r_NEW_NAME(rt_str("cs", 2)));
R4 l_WORD_351;
memset(&l_WORD_351, 0, sizeof l_WORD_351);
S_R4(&l_WORD_351, r_MK(rt_str("if", 2)));
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_350, (l_CH_348).f_C));
for (;;) {
if ((l_ARM_349 == NULL)) goto L_end352;
{
{
R13 * l_L_353;
memset(&l_L_353, 0, sizeof l_L_353);
l_L_353 = ((*(R13 *)rt_nil_check(l_ARM_349))).f_A;
R4 l_COND_354;
memset(&l_COND_354, 0, sizeof l_COND_354);
S_R4(&l_COND_354, r_MK(rt_str("0", 1)));
for (;;) {
if ((l_L_353 == NULL)) goto L_end355;
{
S_R4(&l_COND_354, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_354, l_TMP_350, (r_EXPR(l_L_353, NULL)).f_C));
l_L_353 = ((*(R13 *)rt_nil_check(l_L_353))).f_NEXT;
}
} L_end355: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_351, l_COND_354));
S_R4(&l_WORD_351, r_MK(rt_str("else if", 7)));
r_OPEN_BODY(((*(R13 *)rt_nil_check(l_ARM_349))).f_B);
}
l_ARM_349 = ((*(R13 *)rt_nil_check(l_ARM_349))).f_NEXT;
}
} L_end352: ;
if ((!(((*(R13 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("else", 4));
r_OPEN_BODY(((*(R13 *)rt_nil_check(p_S))).f_C);
}
r_CODES(rt_str("}", 1));
}
return;
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_348).f_C));
for (;;) {
if ((l_ARM_349 == NULL)) goto L_end356;
{
{
R13 * l_L_357;
memset(&l_L_357, 0, sizeof l_L_357);
l_L_357 = ((*(R13 *)rt_nil_check(l_ARM_349))).f_A;
for (;;) {
if ((l_L_357 == NULL)) goto L_end358;
{
if ((((*(R13 *)rt_nil_check(l_L_357))).f_KIND == g_N_RANGE))
{
{
R15 l_LO_359;
memset(&l_LO_359, 0, sizeof l_LO_359);
S_R15(&l_LO_359, r_MANIFEST(((*(R13 *)rt_nil_check(l_L_357))).f_A));
R15 l_HI_360;
memset(&l_HI_360, 0, sizeof l_HI_360);
S_R15(&l_HI_360, r_MANIFEST(((*(R13 *)rt_nil_check(l_L_357))).f_B));
rt_int l_A_361;
memset(&l_A_361, 0, sizeof l_A_361);
l_A_361 = (l_LO_359).f_V;
rt_int l_B_362;
memset(&l_B_362, 0, sizeof l_B_362);
l_B_362 = (l_HI_360).f_V;
if ((!((l_LO_359).f_OK && (l_HI_360).f_OK)))
{
r_FAIL(((*(R13 *)rt_nil_check(l_L_357))).f_LINE, rt_str("a case label must be manifest", 29));
}
if (((((*(R13 *)rt_nil_check(l_L_357))).f_IV == ((rt_int)1LL)) || (((*(R13 *)rt_nil_check(l_L_357))).f_IV == ((rt_int)3LL))))
{
l_A_361 = rt_add(l_A_361, ((rt_int)1LL));
}
if ((((*(R13 *)rt_nil_check(l_L_357))).f_IV >= ((rt_int)2LL)))
{
l_B_362 = rt_sub(l_B_362, ((rt_int)1LL));
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_361), r_NUM(l_B_362)));
}
}
else
{
{
R15 l_M_363;
memset(&l_M_363, 0, sizeof l_M_363);
S_R15(&l_M_363, r_MANIFEST(l_L_357));
if ((((((*(R13 *)rt_nil_check(l_L_357))).f_KIND == g_N_ENUMLIT) && (((*(R12 *)rt_nil_check((l_CH_348).f_T))).f_KIND == g_T_ENUM)) && (!((l_CH_348).f_T == ((*(R1 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
S_R15(&l_M_363, ((R15){0, .f_OK = 1, .f_V = r_LIT_INDEX((l_CH_348).f_T, ((*(R13 *)rt_nil_check(l_L_357))).f_NAME)}));
}
if ((!(l_M_363).f_OK))
{
r_FAIL(((*(R13 *)rt_nil_check(l_L_357))).f_LINE, rt_str("a case label must be manifest", 29));
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_363).f_V)));
}
}
l_L_357 = ((*(R13 *)rt_nil_check(l_L_357))).f_NEXT;
}
} L_end358: ;
}
r_OPEN_BODY(((*(R13 *)rt_nil_check(l_ARM_349))).f_B);
r_CODES(rt_str("break;", 6));
l_ARM_349 = ((*(R13 *)rt_nil_check(l_ARM_349))).f_NEXT;
}
} L_end356: ;
if ((!(((*(R13 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_OPEN_BODY(((*(R13 *)rt_nil_check(p_S))).f_C);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
static void r_DECLARE_ROUTINE(R13 * p_R) {
R7 * l_Y_364;
memset(&l_Y_364, 0, sizeof l_Y_364);
l_Y_364 = r_NEW_SYM(g_Y_ROUTINE, ((*(R13 *)rt_nil_check(p_R))).f_NAME);
R13 * l_P_365;
memset(&l_P_365, 0, sizeof l_P_365);
l_P_365 = ((*(R13 *)rt_nil_check(p_R))).f_A;
R185 * l_TAIL_366;
memset(&l_TAIL_366, 0, sizeof l_TAIL_366);
l_TAIL_366 = NULL;
R4 l_PS_367;
memset(&l_PS_367, 0, sizeof l_PS_367);
S_R4(&l_PS_367, r_MK(rt_str("", 0)));
R4 l_SEP_368;
memset(&l_SEP_368, 0, sizeof l_SEP_368);
S_R4(&l_SEP_368, r_MK(rt_str("", 0)));
for (;;) {
if ((l_P_365 == NULL)) goto L_end369;
{
{
R185 * l_PM_370;
memset(&l_PM_370, 0, sizeof l_PM_370);
l_PM_370 = ({ R185 *p = rt_alloc(sizeof *p); I_R185(&(*p)); p; });
S_R185(&(*(R185 *)rt_nil_check(l_PM_370)), ((R185){0, .f_NAME = ((*(R13 *)rt_nil_check(l_P_365))).f_NAME, .f_MODE = ((*(R13 *)rt_nil_check(l_P_365))).f_IV, .f_T = r_RESOLVE(((*(R13 *)rt_nil_check(l_P_365))).f_B), .f_NEXT = NULL}));
if ((l_TAIL_366 == NULL))
{
((*(R7 *)rt_nil_check(l_Y_364))).f_PARAMS = l_PM_370;
}
else
{
((*(R185 *)rt_nil_check(l_TAIL_366))).f_NEXT = l_PM_370;
}
l_TAIL_366 = l_PM_370;
if ((((*(R185 *)rt_nil_check(l_PM_370))).f_MODE == g_M_IN))
{
S_R4(&l_PS_367, r_FMT4(rt_str("@@@ p_@", 7), l_PS_367, l_SEP_368, r_CTYPE(((*(R185 *)rt_nil_check(l_PM_370))).f_T), ((*(R185 *)rt_nil_check(l_PM_370))).f_NAME));
}
else
{
S_R4(&l_PS_367, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_367, l_SEP_368, r_CTYPE(((*(R185 *)rt_nil_check(l_PM_370))).f_T), ((*(R185 *)rt_nil_check(l_PM_370))).f_NAME));
}
S_R4(&l_SEP_368, r_MK(rt_str(", ", 2)));
}
l_P_365 = ((*(R13 *)rt_nil_check(l_P_365))).f_NEXT;
}
} L_end369: ;
if (((l_PS_367).f_LEN == ((rt_int)0LL)))
{
S_R4(&l_PS_367, r_MK(rt_str("void", 4)));
}
if ((!(((*(R13 *)rt_nil_check(p_R))).f_B == NULL)))
{
((*(R7 *)rt_nil_check(l_Y_364))).f_RESULT = r_RESOLVE(((*(R13 *)rt_nil_check(p_R))).f_B);
}
else
{
((*(R7 *)rt_nil_check(l_Y_364))).f_RESULT = ((*(R1 *)rt_nil_check(g_W))).f_TY_VOID;
}
S_R4(&((*(R7 *)rt_nil_check(l_Y_364))).f_ACCESS, r_FMT1(rt_str("r_@", 3), ((*(R13 *)rt_nil_check(p_R))).f_NAME));
S_R4(&((*(R7 *)rt_nil_check(l_Y_364))).f_FWD, r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R7 *)rt_nil_check(l_Y_364))).f_RESULT), ((*(R7 *)rt_nil_check(l_Y_364))).f_ACCESS, l_PS_367));
r_EMIT(g_O_PROTOS, r_CATS(((*(R7 *)rt_nil_check(l_Y_364))).f_FWD, rt_str(";", 1)));
r_DEFINE(l_Y_364, ((*(R13 *)rt_nil_check(p_R))).f_LINE);
}
static void r_ROUTINE_BODY(R13 * p_R) {
R7 * l_Y_371;
memset(&l_Y_371, 0, sizeof l_Y_371);
l_Y_371 = r_LOOKUP(((*(R13 *)rt_nil_check(p_R))).f_NAME);
R8 l_SAVED_372;
memset(&l_SAVED_372, 0, sizeof l_SAVED_372);
S_R8(&l_SAVED_372, ((*(R1 *)rt_nil_check(g_W))).f_CODE);
R185 * l_P_373;
memset(&l_P_373, 0, sizeof l_P_373);
l_P_373 = ((*(R7 *)rt_nil_check(l_Y_371))).f_PARAMS;
S_R8(&((*(R1 *)rt_nil_check(g_W))).f_CODE, ((R8){0, .f_HEAD = NULL, .f_TAIL = NULL}));
((*(R1 *)rt_nil_check(g_W))).f_RESULT = ((*(R7 *)rt_nil_check(l_Y_371))).f_RESULT;
((*(R1 *)rt_nil_check(g_W))).f_IN_ROUTINE = 1;
((*(R1 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_OPEN_SCOPE();
for (;;) {
if ((l_P_373 == NULL)) goto L_end374;
{
{
R7 * l_V_375;
memset(&l_V_375, 0, sizeof l_V_375);
l_V_375 = r_NEW_SYM(g_Y_VAR, ((*(R185 *)rt_nil_check(l_P_373))).f_NAME);
((*(R7 *)rt_nil_check(l_V_375))).f_T = ((*(R185 *)rt_nil_check(l_P_373))).f_T;
if ((((*(R185 *)rt_nil_check(l_P_373))).f_MODE == g_M_IN))
{
S_R4(&((*(R7 *)rt_nil_check(l_V_375))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R185 *)rt_nil_check(l_P_373))).f_NAME));
}
else
{
S_R4(&((*(R7 *)rt_nil_check(l_V_375))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R185 *)rt_nil_check(l_P_373))).f_NAME));
}
r_DEFINE(l_V_375, ((*(R13 *)rt_nil_check(p_R))).f_LINE);
if (((((*(R12 *)rt_nil_check(((*(R185 *)rt_nil_check(l_P_373))).f_T))).f_GEN).f_LEN > ((rt_int)0LL)))
{
{
R7 * l_G_376;
memset(&l_G_376, 0, sizeof l_G_376);
l_G_376 = r_NEW_SYM(g_Y_GEN, ((*(R12 *)rt_nil_check(((*(R185 *)rt_nil_check(l_P_373))).f_T))).f_GEN);
(((*(R7 *)rt_nil_check(l_G_376))).f_NAME).f_H = rt_neg(((rt_int)1LL));
S_R4(&((*(R7 *)rt_nil_check(l_G_376))).f_ACCESS, r_FMT1(rt_str("(@).len", 7), ((*(R7 *)rt_nil_check(l_V_375))).f_ACCESS));
r_DEFINE(l_G_376, ((*(R13 *)rt_nil_check(p_R))).f_LINE);
}
}
}
l_P_373 = ((*(R185 *)rt_nil_check(l_P_373))).f_NEXT;
}
} L_end374: ;
r_BODY(((*(R13 *)rt_nil_check(p_R))).f_C);
r_CLOSE_SCOPE();
r_EMIT(g_O_FUNCS, r_CATS(((*(R7 *)rt_nil_check(l_Y_371))).f_FWD, rt_str(" {", 2)));
r_APPEND_BUF(((*(R1 *)rt_nil_check(g_W))).f_CODE, &(((*(R1 *)rt_nil_check(g_W))).f_OUT).p[rt_index(g_O_FUNCS, (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo, (((*(R1 *)rt_nil_check(g_W))).f_OUT).hi) - (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo]);
if ((!(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(l_Y_371))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
S_R8(&((*(R1 *)rt_nil_check(g_W))).f_CODE, l_SAVED_372);
((*(R1 *)rt_nil_check(g_W))).f_IN_ROUTINE = 0;
}
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST) {
R9 * l_C_377;
memset(&l_C_377, 0, sizeof l_C_377);
l_C_377 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_377 == NULL)) goto L_end378;
{
r_APPEND(((*(R9 *)rt_nil_check(l_C_377))).f_T, &(*p_DST));
l_C_377 = ((*(R9 *)rt_nil_check(l_C_377))).f_NEXT;
}
} L_end378: ;
}
static void r_TRANSLATE(R13 * p_SEGS) {
R13 * l_D_379;
memset(&l_D_379, 0, sizeof l_D_379);
R13 * l_R_380;
memset(&l_R_380, 0, sizeof l_R_380);
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
if (((!(((*(R13 *)rt_nil_check(p_SEGS))).f_NEXT == NULL)) || (!(((*(R13 *)rt_nil_check(p_SEGS))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R13 *)rt_nil_check(p_SEGS))).f_LINE, rt_str("this translator takes one MAIN SEGMENT", 38));
}
r_EMITS(g_O_TYPEDEFS, rt_str("#include \"paleo.h\"", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <string.h>", 19));
S_R8(&((*(R1 *)rt_nil_check(g_W))).f_CODE, ((R8){0, .f_HEAD = NULL, .f_TAIL = NULL}));
((*(R1 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
l_D_379 = ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_SEGS))).f_B))).f_A;
r_DECLARE_TYPES(l_D_379);
for (;;) {
if ((l_D_379 == NULL)) goto L_end381;
{
if (((((*(R13 *)rt_nil_check(l_D_379))).f_KIND == g_N_VAR) || (((*(R13 *)rt_nil_check(l_D_379))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_379, 1);
}
l_D_379 = ((*(R13 *)rt_nil_check(l_D_379))).f_NEXT;
}
} L_end381: ;
l_R_380 = ((*(R13 *)rt_nil_check(p_SEGS))).f_C;
for (;;) {
if ((l_R_380 == NULL)) goto L_end382;
{
r_DECLARE_ROUTINE(l_R_380);
l_R_380 = ((*(R13 *)rt_nil_check(l_R_380))).f_NEXT;
}
} L_end382: ;
{
R13 * l_S_383;
memset(&l_S_383, 0, sizeof l_S_383);
l_S_383 = ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_SEGS))).f_B))).f_B;
for (;;) {
if ((l_S_383 == NULL)) goto L_end384;
{
r_STMT(l_S_383);
l_S_383 = ((*(R13 *)rt_nil_check(l_S_383))).f_NEXT;
}
} L_end384: ;
}
{
R8 l_MAIN_CODE_385;
memset(&l_MAIN_CODE_385, 0, sizeof l_MAIN_CODE_385);
S_R8(&l_MAIN_CODE_385, ((*(R1 *)rt_nil_check(g_W))).f_CODE);
l_R_380 = ((*(R13 *)rt_nil_check(p_SEGS))).f_C;
for (;;) {
if ((l_R_380 == NULL)) goto L_end386;
{
r_ROUTINE_BODY(l_R_380);
l_R_380 = ((*(R13 *)rt_nil_check(l_R_380))).f_NEXT;
}
} L_end386: ;
r_EMITS(g_O_MAINHEAD, rt_str("int main(int argc, char **argv) {", 33));
r_EMITS(g_O_MAINHEAD, rt_str("rt_b_lang();", 12));
r_EMITS(g_O_MAINHEAD, rt_str("rt_init(argc, argv);", 20));
{
R13 * l_X_387;
memset(&l_X_387, 0, sizeof l_X_387);
l_X_387 = ((*(R1 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_387 == NULL)) goto L_end388;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R13 *)rt_nil_check(l_X_387))).f_NAME));
r_EMIT(g_O_MAINHEAD, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R13 *)rt_nil_check(l_X_387))).f_NAME, r_CSTRING(((*(R13 *)rt_nil_check(l_X_387))).f_NAME)));
l_X_387 = ((*(R13 *)rt_nil_check(l_X_387))).f_NEXT;
}
} L_end388: ;
}
r_APPEND_BUF(l_MAIN_CODE_385, &(((*(R1 *)rt_nil_check(g_W))).f_OUT).p[rt_index(g_O_MAIN, (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo, (((*(R1 *)rt_nil_check(g_W))).f_OUT).hi) - (((*(R1 *)rt_nil_check(g_W))).f_OUT).lo]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
}
int main(int argc, char **argv) {
rt_b_lang();
rt_init(argc, argv);
memset(&g_K_EOF, 0, sizeof g_K_EOF);
g_K_EOF = ((rt_int)0LL);
memset(&g_K_ID, 0, sizeof g_K_ID);
g_K_ID = ((rt_int)1LL);
memset(&g_K_RES, 0, sizeof g_K_RES);
g_K_RES = ((rt_int)2LL);
memset(&g_K_SYM, 0, sizeof g_K_SYM);
g_K_SYM = ((rt_int)3LL);
memset(&g_K_NUM, 0, sizeof g_K_NUM);
g_K_NUM = ((rt_int)4LL);
memset(&g_K_STR, 0, sizeof g_K_STR);
g_K_STR = ((rt_int)5LL);
memset(&g_K_ENUM, 0, sizeof g_K_ENUM);
g_K_ENUM = ((rt_int)6LL);
memset(&g_K_GEN, 0, sizeof g_K_GEN);
g_K_GEN = ((rt_int)7LL);
memset(&g_N_INT, 0, sizeof g_N_INT);
g_N_INT = ((rt_int)1LL);
memset(&g_N_BOOL, 0, sizeof g_N_BOOL);
g_N_BOOL = ((rt_int)2LL);
memset(&g_N_NIL, 0, sizeof g_N_NIL);
g_N_NIL = ((rt_int)3LL);
memset(&g_N_STR, 0, sizeof g_N_STR);
g_N_STR = ((rt_int)4LL);
memset(&g_N_PART, 0, sizeof g_N_PART);
g_N_PART = ((rt_int)5LL);
memset(&g_N_ENUMLIT, 0, sizeof g_N_ENUMLIT);
g_N_ENUMLIT = ((rt_int)6LL);
memset(&g_N_NAME, 0, sizeof g_N_NAME);
g_N_NAME = ((rt_int)7LL);
memset(&g_N_APPLY, 0, sizeof g_N_APPLY);
g_N_APPLY = ((rt_int)8LL);
memset(&g_N_FIELD, 0, sizeof g_N_FIELD);
g_N_FIELD = ((rt_int)9LL);
memset(&g_N_DEREF, 0, sizeof g_N_DEREF);
g_N_DEREF = ((rt_int)10LL);
memset(&g_N_INDEX, 0, sizeof g_N_INDEX);
g_N_INDEX = ((rt_int)11LL);
memset(&g_N_SUBSTR, 0, sizeof g_N_SUBSTR);
g_N_SUBSTR = ((rt_int)12LL);
memset(&g_N_UNOP, 0, sizeof g_N_UNOP);
g_N_UNOP = ((rt_int)13LL);
memset(&g_N_BINOP, 0, sizeof g_N_BINOP);
g_N_BINOP = ((rt_int)14LL);
memset(&g_N_IN, 0, sizeof g_N_IN);
g_N_IN = ((rt_int)15LL);
memset(&g_N_RANGE, 0, sizeof g_N_RANGE);
g_N_RANGE = ((rt_int)16LL);
memset(&g_N_PAREN, 0, sizeof g_N_PAREN);
g_N_PAREN = ((rt_int)17LL);
memset(&g_N_RECCONS, 0, sizeof g_N_RECCONS);
g_N_RECCONS = ((rt_int)18LL);
memset(&g_N_FINIT, 0, sizeof g_N_FINIT);
g_N_FINIT = ((rt_int)19LL);
memset(&g_N_NEW, 0, sizeof g_N_NEW);
g_N_NEW = ((rt_int)20LL);
memset(&g_N_NULL, 0, sizeof g_N_NULL);
g_N_NULL = ((rt_int)30LL);
memset(&g_N_ASSIGN, 0, sizeof g_N_ASSIGN);
g_N_ASSIGN = ((rt_int)31LL);
memset(&g_N_CALL, 0, sizeof g_N_CALL);
g_N_CALL = ((rt_int)32LL);
memset(&g_N_IF, 0, sizeof g_N_IF);
g_N_IF = ((rt_int)33LL);
memset(&g_N_ARM, 0, sizeof g_N_ARM);
g_N_ARM = ((rt_int)34LL);
memset(&g_N_CASE, 0, sizeof g_N_CASE);
g_N_CASE = ((rt_int)35LL);
memset(&g_N_LOOP, 0, sizeof g_N_LOOP);
g_N_LOOP = ((rt_int)36LL);
memset(&g_N_FOR, 0, sizeof g_N_FOR);
g_N_FOR = ((rt_int)37LL);
memset(&g_N_EXIT, 0, sizeof g_N_EXIT);
g_N_EXIT = ((rt_int)38LL);
memset(&g_N_RETURN, 0, sizeof g_N_RETURN);
g_N_RETURN = ((rt_int)39LL);
memset(&g_N_BLOCK, 0, sizeof g_N_BLOCK);
g_N_BLOCK = ((rt_int)40LL);
memset(&g_N_SIGNAL, 0, sizeof g_N_SIGNAL);
g_N_SIGNAL = ((rt_int)41LL);
memset(&g_N_ASSERT, 0, sizeof g_N_ASSERT);
g_N_ASSERT = ((rt_int)42LL);
memset(&g_N_EXCEPT, 0, sizeof g_N_EXCEPT);
g_N_EXCEPT = ((rt_int)43LL);
memset(&g_N_HANDLER, 0, sizeof g_N_HANDLER);
g_N_HANDLER = ((rt_int)44LL);
memset(&g_N_BODY, 0, sizeof g_N_BODY);
g_N_BODY = ((rt_int)45LL);
memset(&g_N_CONST, 0, sizeof g_N_CONST);
g_N_CONST = ((rt_int)50LL);
memset(&g_N_VAR, 0, sizeof g_N_VAR);
g_N_VAR = ((rt_int)51LL);
memset(&g_N_TYPE, 0, sizeof g_N_TYPE);
g_N_TYPE = ((rt_int)52LL);
memset(&g_N_ROUTINE, 0, sizeof g_N_ROUTINE);
g_N_ROUTINE = ((rt_int)53LL);
memset(&g_N_PARAM, 0, sizeof g_N_PARAM);
g_N_PARAM = ((rt_int)54LL);
memset(&g_N_SEGMENT, 0, sizeof g_N_SEGMENT);
g_N_SEGMENT = ((rt_int)55LL);
memset(&g_N_IDENT, 0, sizeof g_N_IDENT);
g_N_IDENT = ((rt_int)56LL);
memset(&g_TS_NAME, 0, sizeof g_TS_NAME);
g_TS_NAME = ((rt_int)60LL);
memset(&g_TS_ARRAY, 0, sizeof g_TS_ARRAY);
g_TS_ARRAY = ((rt_int)61LL);
memset(&g_TS_RECORD, 0, sizeof g_TS_RECORD);
g_TS_RECORD = ((rt_int)62LL);
memset(&g_TS_ENUM, 0, sizeof g_TS_ENUM);
g_TS_ENUM = ((rt_int)63LL);
memset(&g_TS_GEN, 0, sizeof g_TS_GEN);
g_TS_GEN = ((rt_int)64LL);
memset(&g_M_IN, 0, sizeof g_M_IN);
g_M_IN = ((rt_int)0LL);
memset(&g_M_INOUT, 0, sizeof g_M_INOUT);
g_M_INOUT = ((rt_int)1LL);
memset(&g_M_OUT, 0, sizeof g_M_OUT);
g_M_OUT = ((rt_int)2LL);
memset(&g_T_INT, 0, sizeof g_T_INT);
g_T_INT = ((rt_int)1LL);
memset(&g_T_BOOL, 0, sizeof g_T_BOOL);
g_T_BOOL = ((rt_int)2LL);
memset(&g_T_ENUM, 0, sizeof g_T_ENUM);
g_T_ENUM = ((rt_int)3LL);
memset(&g_T_STR, 0, sizeof g_T_STR);
g_T_STR = ((rt_int)4LL);
memset(&g_T_REC, 0, sizeof g_T_REC);
g_T_REC = ((rt_int)5LL);
memset(&g_T_PTR, 0, sizeof g_T_PTR);
g_T_PTR = ((rt_int)6LL);
memset(&g_T_ARR, 0, sizeof g_T_ARR);
g_T_ARR = ((rt_int)7LL);
memset(&g_T_VOID, 0, sizeof g_T_VOID);
g_T_VOID = ((rt_int)8LL);
memset(&g_T_NIL, 0, sizeof g_T_NIL);
g_T_NIL = ((rt_int)9LL);
memset(&g_Y_VAR, 0, sizeof g_Y_VAR);
g_Y_VAR = ((rt_int)1LL);
memset(&g_Y_CONST, 0, sizeof g_Y_CONST);
g_Y_CONST = ((rt_int)2LL);
memset(&g_Y_TYPE, 0, sizeof g_Y_TYPE);
g_Y_TYPE = ((rt_int)3LL);
memset(&g_Y_ROUTINE, 0, sizeof g_Y_ROUTINE);
g_Y_ROUTINE = ((rt_int)4LL);
memset(&g_Y_GEN, 0, sizeof g_Y_GEN);
g_Y_GEN = ((rt_int)5LL);
memset(&g_Y_BUILTIN, 0, sizeof g_Y_BUILTIN);
g_Y_BUILTIN = ((rt_int)6LL);
memset(&g_O_TYPEDEFS, 0, sizeof g_O_TYPEDEFS);
g_O_TYPEDEFS = ((rt_int)0LL);
memset(&g_O_STRUCTS, 0, sizeof g_O_STRUCTS);
g_O_STRUCTS = ((rt_int)1LL);
memset(&g_O_GLOBALS, 0, sizeof g_O_GLOBALS);
g_O_GLOBALS = ((rt_int)2LL);
memset(&g_O_PROTOS, 0, sizeof g_O_PROTOS);
g_O_PROTOS = ((rt_int)3LL);
memset(&g_O_HELPERS, 0, sizeof g_O_HELPERS);
g_O_HELPERS = ((rt_int)4LL);
memset(&g_O_FUNCS, 0, sizeof g_O_FUNCS);
g_O_FUNCS = ((rt_int)5LL);
memset(&g_O_MAINHEAD, 0, sizeof g_O_MAINHEAD);
g_O_MAINHEAD = ((rt_int)6LL);
memset(&g_O_MAIN, 0, sizeof g_O_MAIN);
g_O_MAIN = ((rt_int)7LL);
memset(&g_O_LAST, 0, sizeof g_O_LAST);
g_O_LAST = ((rt_int)7LL);
memset(&g_ARENA_SIZE, 0, sizeof g_ARENA_SIZE);
g_ARENA_SIZE = ((rt_int)64000000LL);
memset(&g_MAX_SOURCE, 0, sizeof g_MAX_SOURCE);
g_MAX_SOURCE = ((rt_int)2000000LL);
memset(&g_MAX_TOKENS, 0, sizeof g_MAX_TOKENS);
g_MAX_TOKENS = ((rt_int)600000LL);
memset(&g_HASH_SIZE, 0, sizeof g_HASH_SIZE);
g_HASH_SIZE = ((rt_int)4096LL);
g_GRAPHIC = rt_str_new(((rt_int)95LL));
rt_b_assign(&g_GRAPHIC, rt_str(" !\"#$%&'()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 95));
memset(&g_W, 0, sizeof g_W);
g_W = ({ R1 *p = rt_alloc(sizeof *p); I_R1(&(*p)); p; });
r_READ_SOURCE();
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
