#include "paleo.h"
#include <float.h>
#include <math.h>
#include <string.h>
typedef struct R7 R7;
typedef struct A8 A8;
typedef struct R9 R9;
typedef struct R10 R10;
typedef struct A11 A11;
typedef struct R12 R12;
typedef struct A13 A13;
typedef struct R14 R14;
typedef struct R15 R15;
typedef struct A16 A16;
typedef struct R17 R17;
typedef struct R18 R18;
typedef struct R19 R19;
typedef struct R20 R20;
typedef struct R21 R21;
typedef struct R22 R22;
typedef struct R23 R23;
typedef struct R24 R24;
typedef struct R25 R25;
typedef struct R26 R26;
typedef struct R27 R27;
typedef struct R28 R28;
typedef struct fr_r_MANIFEST_ARITH fr_r_MANIFEST_ARITH;
struct A8 { rt_int lo[1], hi[1]; rt_int *p; };
struct R10 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R9 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_TX; };
struct A11 { rt_int lo[1], hi[1]; R9 *p; };
struct A13 { rt_int lo[1], hi[1]; R12 * *p; };
struct R14 { int dummy_; R15 * f_HEAD; R15 * f_TAIL; };
struct A16 { rt_int lo[1], hi[1]; R14 *p; };
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; R21 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R10 f_C; R22 * f_T; rt_int f_LVAL; R10 f_SELF; };
struct R21 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_NAME; R21 * f_A; R21 * f_B; R21 * f_C; R21 * f_D; R21 * f_E; R21 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R10 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R10 f_NAME; R22 * f_T; R10 f_ACCESS; R10 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R10 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R10 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R10 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R10 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R10 f_LO_C; R10 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R10 f_LEN_C; R23 f_MLEN; R10 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R10 f_NAME; R10 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; };
struct R20 { int dummy_; R10 f_NAME; R22 * f_T; R10 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R10 f_LO; R10 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R10 f_NAME; R10 f_CNAME; R22 * f_T; rt_int f_KIND; R10 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1166; };
struct R27 { int dummy_; R21 * f_E; R26 f_V; rt_int f_HAVE; rt_int f_MODE; R27 * f_NEXT; };
struct R28 { int dummy_; R10 f_NAME; rt_int f_MODE; R22 * f_T; R21 * f_TS; R28 * f_NEXT; };
struct R17 { int dummy_; rt_int f_KIND; R10 f_NAME; R21 * f_HANDLERS; R17 * f_NEXT; };
static const char *E1[] = { "\\NUL", "\\SOH", "\\STX", "\\EXT", "\\EOT", "\\ENQ", "\\ACK", "\\BEL", "\\BS", "\\HT", "\\LF", "\\VT", "\\FF", "\\CR", "\\SO", "\\SI", "\\DLE", "\\DC1", "\\DC2", "\\DC3", "\\DC4", "\\NAK", "\\SYN", "\\ETB", "\\CAN", "\\EM", "\\SUB", "\\ESC", "\\FS", "\\GS", "\\RS", "\\US", "\\' '", "\\'!'", "\\'\"'", "\\'#'", "\\'$'", "\\'%'", "\\'&'", "\\''''", "\\'('", "\\')'", "\\'*'", "\\'+'", "\\','", "\\'-'", "\\'.'", "\\'/'", "\\'0'", "\\'1'", "\\'2'", "\\'3'", "\\'4'", "\\'5'", "\\'6'", "\\'7'", "\\'8'", "\\'9'", "\\':'", "\\';'", "\\'<'", "\\'='", "\\'>'", "\\'\?'", "\\'@'", "\\'A'", "\\'B'", "\\'C'", "\\'D'", "\\'E'", "\\'F'", "\\'G'", "\\'H'", "\\'I'", "\\'J'", "\\'K'", "\\'L'", "\\'M'", "\\'N'", "\\'O'", "\\'P'", "\\'Q'", "\\'R'", "\\'S'", "\\'T'", "\\'U'", "\\'V'", "\\'W'", "\\'X'", "\\'Y'", "\\'Z'", "\\'['", "\\'\\'", "\\']'", "\\'^'", "\\'_'", "\\ACCENT", "\\A", "\\B", "\\C", "\\D", "\\E", "\\F", "\\G", "\\H", "\\I", "\\J", "\\K", "\\L", "\\M", "\\N", "\\O", "\\P", "\\Q", "\\R", "\\S", "\\T", "\\U", "\\V", "\\W", "\\X", "\\Y", "\\Z", "\\[", "\\BAR", "\\]", "\\TILDE", "\\DEL", 0 };
static const char *E2[] = { "ROUNDED", "TRUNCATED", "NATIVE_R", "NATIVE_T", 0 };
static const char *E3[] = { "STD", 0 };
static const char *E4[] = { "SIGNED", "UNSIGNED", 0 };
static const char *E5[] = { "DENSE", "PACKED", "UNPACKED", 0 };
static const char *E6[] = { "SYNCH", "REGION", 0 };
static rt_int g_K_EOF;
static rt_int g_K_ID;
static rt_int g_K_RES;
static rt_int g_K_SYM;
static rt_int g_K_NUM;
static rt_int g_K_STR;
static rt_int g_K_ENUM;
static rt_int g_K_GEN;
static rt_int g_K_REAL;
static rt_int g_K_FIX;
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
static rt_int g_N_REAL;
static rt_int g_N_BITS;
static rt_int g_N_ARRCONS;
static rt_int g_N_TYPESPEC;
static rt_int g_N_QUAL;
static rt_int g_N_ANY;
static rt_int g_N_DONTCARE;
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
static rt_int g_N_LABELED;
static rt_int g_N_GOTO;
static rt_int g_N_WITH;
static rt_int g_N_PAR;
static rt_int g_N_PATH;
static rt_int g_N_TERMINATE;
static rt_int g_N_CONST;
static rt_int g_N_VAR;
static rt_int g_N_TYPE;
static rt_int g_N_ROUTINE;
static rt_int g_N_PARAM;
static rt_int g_N_SEGMENT;
static rt_int g_N_IDENT;
static rt_int g_N_MODULE;
static rt_int g_N_HDR;
static rt_int g_N_ITEMS;
static rt_int g_N_USE;
static rt_int g_N_EXPORT;
static rt_int g_N_FORMAL;
static rt_int g_N_REPTYPE;
static rt_int g_N_REP;
static rt_int g_N_VALREP;
static rt_int g_N_VARIANT;
static rt_int g_N_VARSPEC;
static rt_int g_N_NEEDS;
static rt_int g_N_TEMPLATE;
static rt_int g_TS_NAME;
static rt_int g_TS_ARRAY;
static rt_int g_TS_RECORD;
static rt_int g_TS_ENUM;
static rt_int g_TS_GEN;
static rt_int g_TS_ROUTINE;
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
static rt_int g_T_FLOAT;
static rt_int g_T_BITS;
static rt_int g_T_SEM;
static rt_int g_T_ABS;
static rt_int g_T_TYPE;
static rt_int g_T_PATHS;
static rt_int g_Y_VAR;
static rt_int g_Y_CONST;
static rt_int g_Y_TYPE;
static rt_int g_Y_ROUTINE;
static rt_int g_Y_GEN;
static rt_int g_Y_BUILTIN;
static rt_int g_Y_ENUMLIT;
static rt_int g_Y_MODULE;
static rt_int g_Y_LABEL;
static rt_int g_Y_PATH;
static rt_int g_Y_SEGMENT;
static rt_int g_Y_REPTYPE;
static rt_int g_O_TYPEDEFS;
static rt_int g_O_STRUCTS;
static rt_int g_O_GLOBALS;
static rt_int g_O_PROTOS;
static rt_int g_O_HELPERS;
static rt_int g_O_FUNCS;
static rt_int g_O_MAINHEAD;
static rt_int g_O_STARTUP;
static rt_int g_O_MAIN;
static rt_int g_O_LAST;
static rt_int g_ARENA_SIZE;
static rt_int g_MAX_SOURCE;
static rt_int g_MAX_TOKENS;
static rt_int g_HASH_SIZE;
static rstr g_GRAPHIC;
static R7 * g_W;
static int x_OVERFLOW;
static void S_A8(A8 *d, A8 s, int any);
static int E_A8(A8 a, A8 b);
static A8 C_A8(A8 s);
static void S_R10(R10 *d, R10 s, int any);
static int E_R10(R10 a, R10 b);
static R10 C_R10(R10 s);
static void S_R9(R9 *d, R9 s, int any);
static int E_R9(R9 a, R9 b);
static R9 C_R9(R9 s);
static void S_A11(A11 *d, A11 s, int any);
static int E_A11(A11 a, A11 b);
static A11 C_A11(A11 s);
static void S_A13(A13 *d, A13 s, int any);
static int E_A13(A13 a, A13 b);
static A13 C_A13(A13 s);
static void S_R14(R14 *d, R14 s, int any);
static int E_R14(R14 a, R14 b);
static R14 C_R14(R14 s);
static void S_A16(A16 *d, A16 s, int any);
static int E_A16(A16 a, A16 b);
static A16 C_A16(A16 s);
static void S_R7(R7 *d, R7 s, int any);
static int E_R7(R7 a, R7 b);
static R7 C_R7(R7 s);
static rstr r_CHAR_OF(rt_int p_C);
static rt_int r_CODE_OF(rstr p_S);
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3);
static rt_int r_HASH_OF(rstr p_S);
static R10 r_MK(rstr p_S);
static R10 r_MKN(rstr p_S);
static rstr r_STR(R10 p_T, rt_int p_L);
static rt_int r_TEQ(R10 p_A, R10 p_B);
static rt_int r_TEQS(R10 p_A, rstr p_S);
static R10 r_CAT(R10 p_A, R10 p_B);
static R10 r_CATS(R10 p_A, rstr p_S);
static R10 r_FMT4(rstr p_P, R10 p_A, R10 p_B, R10 p_C, R10 p_D);
static R10 r_FMT1(rstr p_P, R10 p_A);
static R10 r_FMT2(rstr p_P, R10 p_A, R10 p_B);
static R10 r_FMT3(rstr p_P, R10 p_A, R10 p_B, R10 p_C);
static R10 r_NUM(rt_int p_V);
static R10 r_CID(R10 p_T);
static R10 r_NEW_NAME(rstr p_BASE);
static void r_APPEND(R10 p_T, R14 *p_B);
static void r_EMIT(rt_int p_SEC, R10 p_T);
static void r_EMITS(rt_int p_SEC, rstr p_S);
static void r_CODE(R10 p_T);
static void r_CODES(rstr p_S);
static void r_PUT_BUF(R14 p_B);
static void r_WRITE_OUTPUT(void);
static void r_FAIL(rt_int p_LINE, rstr p_MSG);
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R10 p_T);
static void r_READ_SOURCE(void);
static rt_int r_AT_SRC(rt_int p_I);
static rt_int r_IS_LETTER(rt_int p_C);
static rt_int r_IS_DIGIT(rt_int p_C);
static rt_int r_IS_IDCHAR(rt_int p_C);
static R10 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND);
static rt_int r_IS_RESERVED(R10 p_T);
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R10 p_TX);
static rt_int r_SYMBOL_LENGTH(rt_int p_I);
static void r_LEX(void);
static R9 r_CUR(void);
static R9 r_AHEAD(rt_int p_K);
static rt_int r_LINE_NOW(void);
static rt_int r_TOK_IS(R9 p_T, rstr p_S);
static rt_int r_IS(rstr p_S);
static rt_int r_IS_TARGET_DECL(void);
static rt_int r_IS_KIND(rt_int p_K);
static void r_SKIP(void);
static rt_int r_ACCEPT(rstr p_S);
static void r_EXPECT(rstr p_S);
static R10 r_IDENT(void);
static rt_int r_IDENT_TOKEN(R9 p_T);
static void r_EXPECT_NAME(R10 p_NAME);
static R21 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE);
static void r_ADD_LIST(R21 * p_N, R21 * *p_HEAD, R21 * *p_TAIL);
static rt_int r_LIST_LENGTH(R21 * p_N);
static R21 * r_IDENT_NODE(void);
static R21 * r_IDENT_LIST(void);
static R21 * r_ROUTINE_NAME_NODE(void);
static R21 * r_PAREN_IDENTS(void);
static void r_SKIP_PARENS(void);
static R21 * r_PARSE_COMPILATION(void);
static R21 * r_PARSE_ITEMS(void);
static R21 * r_PARSE_SEGMENT(void);
static R21 * r_PARSE_CLOSED_BODY(void);
static R21 * r_PARSE_BODY(void);
static R21 * r_PARSE_MODULE(void);
static R21 * r_PARSE_DECLARATIONS(void);
static R21 * r_PARSE_OBJECT_DECL(void);
static R21 * r_PARSE_FORMALS(void);
static R21 * r_PARSE_TYPE_DECL(void);
static R21 * r_PARSE_REPTYPE_DECL(void);
static R21 * r_PARSE_REP(void);
static R10 r_GEN_NAME(void);
static R21 * r_PARSE_TYPE_ARG(void);
static R21 * r_EXPR_TO_TS(R21 * p_E);
static R21 * r_TYPE_SPEC_TAIL(R21 * p_N);
static R21 * r_PARSE_TYPE_SPEC(void);
static R21 * r_PARSE_LITERALS(void);
static R21 * r_PARSE_FIELDS(void);
static R21 * r_PARSE_RANGE(void);
static rt_int r_RANGE_AHEAD(void);
static R21 * r_PARSE_PARAMS(void);
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC);
static R21 * r_PARSE_ROUTINE_SPEC(void);
static R21 * r_PARSE_WHERE(void);
static R21 * r_PARSE_ROUTINE(void);
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B);
static R21 * r_PARSE_EXPR(void);
static rt_int r_ROUNDING_AHEAD(void);
static R21 * r_PARSE_SIMPLE(void);
static R21 * r_PARSE_CONJ(void);
static R21 * r_PARSE_RELATION(void);
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS);
static R21 * r_PARSE_SUM(void);
static R21 * r_PARSE_TERM(void);
static R21 * r_PARSE_FACTOR(void);
static R21 * r_PARSE_SECONDARY(void);
static R21 * r_PARSE_ARGS(R21 * p_N);
static R21 * r_PARSE_POSTFIX(void);
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE);
static R21 * r_PARSE_ATOM(void);
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET);
static rt_int r_AT_BODY_END(void);
static R21 * r_PARSE_STATEMENTS(void);
static R21 * r_PARSE_HANDLERS(void);
static R21 * r_PARSE_STATEMENT(void);
static void r_EXPECT_END(rstr p_WORD);
static R21 * r_PARSE_UNLABELED(void);
static R21 * r_PARSE_IF(void);
static R21 * r_PARSE_CASE_LABEL(void);
static R21 * r_PARSE_CASE(void);
static R21 * r_PARSE_LOOP(void);
static R21 * r_PARSE_PAR(void);
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H);
static R10 r_NO_TEXT(void);
static void S_R23(R23 *d, R23 s, int any);
static int E_R23(R23 a, R23 b);
static R23 C_R23(R23 s);
static R23 r_NO_MVAL(void);
static R23 r_SOME(rt_int p_V);
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME);
static rt_int r_CUR_OWNER(void);
static R12 * r_ORIGINAL(R12 * p_Y);
static rt_int r_BUCKET(R10 p_NAME);
static R12 * r_LOOKUP(R10 p_NAME);
static R12 * r_ORIG_LOOKUP(R10 p_NAME);
static R12 * r_LOOKUPS(rstr p_NAME);
static R12 * r_LOOKUP_NEXT(R12 * p_Y);
static rt_int r_IS_ROUTINE(R12 * p_Y);
static void r_DEFINE(R12 * p_Y, rt_int p_LINE);
static void r_OPEN_SCOPE(void);
static void r_CLOSE_SCOPE(void);
static void r_UNLINK(R12 * p_Y);
static R12 * r_TAKE_SCOPE(R12 * p_MARK);
static R22 * r_NEW_TYP(rt_int p_KIND);
static R22 * r_COPY_TYP(R22 * p_T);
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T);
static void r_PREDEF_BUILTIN(rstr p_NAME);
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V);
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED);
static void r_PREDEFINE(void);
static void r_PREDEF_BOUNDS_DEF(void);
static void r_PREDEFINE_TERMINAL(void);
static R10 r_ASCII_NAME(rt_int p_C);
static rt_int r_IS_SCALAR(R22 * p_T);
static R22 * r_REAL_TYPE(R22 * p_T);
static R10 r_TYPE_NAME(R22 * p_T);
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF);
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B);
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE);
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE);
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T);
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T);
static rt_int r_LITERAL_CLASSES(R10 p_NAME);
static R22 * r_RESOLVE(R21 * p_TS);
static void r_ATTR_VALUE(R21 * p_E, R10 *p_C, R23 *p_M);
static R22 * r_WITH_RANGE(R22 * p_T, R21 * p_R);
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T);
static rt_int r_CUR_LEVEL(void);
static R22 * r_ARG_TYPE(R21 * p_N);
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K);
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME);
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E);
static rt_int r_IS_TYPE_ATTR(R21 * p_E);
static R22 * r_GEN_TYPE(R21 * p_TS);
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS);
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N);
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI);
static rt_int r_BOUND_NAME(R21 * p_A);
static void r_CHECK_PRECISION_ARG(R21 * p_P, rt_int p_LINE);
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE);
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A);
static R22 * r_RESOLVE_ARRAY(R21 * p_TS);
static R22 * r_RESOLVE_USER(R21 * p_TS);
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T);
static rt_int r_IN_MODULE(R12 * p_M);
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS);
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS);
static R10 r_RECORD_NAME(R12 * p_Y);
static R22 * r_TARGET(R22 * p_T);
static R10 r_CTYPE(R22 * p_T);
static rt_int r_IS_GENERIC_NODE(R21 * p_E);
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND);
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME);
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME);
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL);
static void r_RECORD_FIELDS(R22 * p_T, R21 * p_DECLS, R10 p_TAGN, R21 * p_LABELS, R24 * *p_TAIL);
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT);
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS);
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS);
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B);
static rt_int r_HAS_ANY(R22 * p_T);
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF);
static void r_COMPLETE_RECORD(R22 * p_T);
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS);
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV);
static rt_int r_NEEDS_INIT(R22 * p_T);
static R10 r_COPY_OF(R22 * p_T, R10 p_V);
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV);
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B);
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF);
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T);
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B);
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B);
static rt_int r_IS_GEN_ARG(R25 * p_B);
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B);
static R10 r_FRAME_OF(rt_int p_LEVEL);
static R10 r_OBJ_ACCESS(R12 * p_Y);
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE);
static void r_DECLARE_OBJECTS(R21 * p_D);
static void S_R26(R26 *d, R26 s, int any);
static int E_R26(R26 a, R26 b);
static R26 C_R26(R26 s);
static R26 r_MKET(R10 p_C, R22 * p_T);
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF);
static R22 * r_INT_TYPE(rt_int p_SCALE);
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M);
static R10 r_CSTRING(R10 p_T);
static R23 r_MANIFEST(R21 * p_E);
static R23 r_ATTR_MANIFEST(R21 * p_E);
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME);
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE);
static rt_int r_MANIFEST_INT(R21 * p_E);
static rt_int r_BOOL_INT(rt_int p_B);
static R26 r_EXPR(R21 * p_E, R22 * p_WANT);
static R10 r_INT_EXPR(R21 * p_E);
static R10 r_BOOL_EXPR(R21 * p_E);
static R22 * r_BITS_TYPE(rt_int p_LEN);
static R26 r_REAL_LITERAL(R21 * p_E);
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P);
static void r_CHECK_FIXED_LITERAL(R21 * p_E);
static R26 r_STRING_LITERAL(R21 * p_E);
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE);
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT);
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT);
static rt_int r_NAMES_OBJECT(R10 p_NAME);
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_FIELD_EXPR(R21 * p_E);
static rt_int r_IS_FIXED_LITERAL(R21 * p_A);
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A);
static rt_int r_IS_TYPE_WORD(R10 p_NAME);
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE);
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN);
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T);
static R26 r_VALUE_OR_TYPE(R21 * p_E);
static R26 r_INDEX_EXPR(R21 * p_E);
static R10 r_INDEX_VALUE(R21 * p_E);
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE);
static R26 r_INDEX_EXPR2(R21 * p_E);
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY);
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT);
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT);
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME);
static R27 * r_QUAL_ARGS(rt_int p_LINE);
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE);
static void r_REQUIRE_MACHINE(rt_int p_LINE);
static R10 r_RESCALE_C(R10 p_C, rt_int p_SFROM, rt_int p_STO);
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE);
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF);
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF);
static rt_int r_HAS_ABS_PART(R22 * p_T);
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT);
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE);
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE);
static R26 r_UNARY(R21 * p_E);
static rt_int r_IS_LITERALISH(R21 * p_E);
static R26 r_BINARY(R21 * p_E);
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B);
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B);
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C);
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B);
static rt_int r_HAS_VALUES(R22 * p_T);
static R22 * r_FLOAT_TYPE(rt_int p_P);
static R10 r_SINGLE_C(rt_int p_P);
static R10 r_FLOAT_TRUNC(void);
static rt_int r_QUAL_PREC(void);
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T);
static R10 r_LOWER_OP(R10 p_OP);
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B);
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP);
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B);
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B);
static R26 r_SCALED_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B);
static R26 r_IN_EXPR(R21 * p_E);
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE);
static R26 r_INT_ET(rt_int p_V);
static rt_int r_BITS_FOR(rt_int p_N);
static rt_int r_ENUM_SIZE(R22 * p_T);
static rt_int r_MAX_LENGTH(void);
static rt_int r_MAX_FLOAT_PRECISION(void);
static rt_int r_IMP_PRECISION_OF(rt_int p_P);
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME);
static R23 r_STATIC_SIZE(R22 * p_T);
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE);
static R26 r_ARRAY_SHAPE(R26 p_B, R10 p_NAME);
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R26 r_SIZE_OF(R22 * p_T, R10 p_C);
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE);
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE);
static R26 r_TYPE_VALUE_OF(R22 * p_T);
static rt_int r_IS_TYPE_NAME(R21 * p_E);
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE);
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME);
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS);
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B);
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K);
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS);
static R26 r_TYPE_SPECIFIER(R21 * p_E);
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C);
static R10 r_REP_TABLE(R22 * p_T);
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT);
static R21 * r_NTH(R21 * p_L, rt_int p_K);
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI);
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N);
static rt_int r_IS_ROUNDING(R21 * p_E);
static R21 * r_ARG_EXPR(R21 * p_E);
static R10 r_OPERATOR_SYMBOL(R10 p_NAME);
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT);
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE);
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME);
static R22 * r_ROUNDINGS_TYPE(void);
static rt_int r_PREDEFINED_ROUNDING(void);
static R21 * r_FIRST_OUT_ARG(R21 * p_E);
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT);
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE);
static R26 r_TO_FIXED_CALL(R21 * p_E);
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE);
static void r_TYPE_ARG(R27 * p_A);
static rt_int r_WANT_SENSITIVE(R27 * p_A);
static rt_int r_COUNT_ARGS(R27 * p_A);
static R27 * r_CALL_ARGS(R21 * p_E);
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT);
static R10 r_CLASS_OPERATION(R10 p_NAME);
static R12 * r_BOUND_ROUTINE(R10 p_NAME);
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME);
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP);
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP);
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B);
static rt_int r_PARAM_COUNT(R12 * p_R);
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS);
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T);
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE);
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P);
static R22 * r_RESULT_VIEW(R12 * p_R);
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T);
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME);
static rt_int r_IS_STRUCTURED(R22 * p_T);
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B);
static rt_int r_STATIC_GENERIC(R21 * p_TS);
static rt_int r_HAS_GEN_ARG(R21 * p_A);
static void r_ROUTINE_HEADER(R12 * p_Y);
static void r_ROUTINE_HEADER1(R12 * p_Y);
static R22 * r_RESULT_TYPE(R12 * p_Y);
static R10 r_C_HEADER(R12 * p_Y);
static void r_DEFINE_PARAM_GENS(R22 * p_T, R10 p_PC, rt_int p_LINE, rt_int p_CHECK);
static rt_int r_IS_GEN_TEXT(R10 p_T);
static R10 r_GEN_TEXT_NAME(R10 p_T);
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK);
static R20 * r_NEW_BINDS(void);
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD);
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME);
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS);
static R12 * r_RECORD_CLASS_OF(R22 * p_T);
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS);
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS);
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B);
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B);
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B);
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE);
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS);
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS);
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS);
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME);
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS);
static R21 * r_COPY_NODE(R21 * p_N);
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME);
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE);
static void r_COMPUTE_USES(R12 * p_Y);
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME);
static void r_ROUTINE_USES(R21 * p_RS);
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL);
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE);
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME);
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y);
static R10 r_BASE_NAME(R12 * p_Y);
static rt_int r_HANDLER_EXISTS(R10 p_NAME);
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME);
static void r_POP_CTX(void);
static R17 * r_LEAVE(rt_int p_KIND);
static rt_int r_GUARDS(void);
static R10 r_EXC_NAME(R10 p_NAME);
static void r_DECLARE_TYPES(R21 * p_DECLS);
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L);
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE);
static R22 * r_CHARSET_OF(R22 * p_T);
static void r_SAME_CHARSET(R22 * p_A, R22 * p_B, rt_int p_LINE);
static void r_ASCII_ONLY(R22 * p_T, rstr p_WHAT, rt_int p_LINE);
static void r_DECLARE_LABELS(R21 * p_S0);
static void r_BODY(R21 * p_B);
static void r_OPEN_BODY(R21 * p_B);
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS);
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME);
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S);
static R21 * r_NAMED_ROOT(R21 * p_E);
static void r_STMT(R21 * p_S);
static R26 r_PROCEDURE_CALL(R21 * p_S);
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY);
static void r_CHECK_BODY(R21 * p_B);
static void r_CHECK_COND(R21 * p_E);
static void r_FOR_STMT(R21 * p_S);
static void r_RETURN_STMT(R21 * p_S);
static void r_SIGNAL_STMT(R21 * p_S);
static void r_ASSIGN_STMT(R21 * p_S);
static void r_WITH_STMT(R21 * p_S);
static void r_CASE_STMT(R21 * p_S);
static R25 * r_DISTINCT_LABEL(R25 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE);
static void r_VALUE_CASE(R21 * p_S, R26 p_CH);
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T);
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP);
static void r_CASE_ELEMENT(R21 * p_B, R21 * p_HANDLERS);
static R12 * r_DISCRIMINATED(R21 * p_CH);
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V);
static void r_MACHINE_CASE(R21 * p_S);
static R22 * r_PATHS_TYPE(void);
static void r_PARALLEL_BLOCK(R21 * p_S);
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD);
static R10 r_UP_FRAME(void);
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT);
static R10 r_JOIN_BUF(R14 p_B);
static R10 r_PATH_REF(R21 * p_E);
static void r_TERMINATE_STMT(R21 * p_S);
static R26 r_PARALLEL_BUILTIN(R21 * p_E, R22 * p_WANT);
static R26 r_START_IO_CALL(R21 * p_E);
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME);
static void r_LEAVE_ISCOPE(void);
static R10 r_ROUTINE_CNAME(R10 p_NAME);
static rt_int r_NEEDS_FRAME(R21 * p_B);
static rt_int r_HAS_HANDLERS(R21 * p_S0);
static void r_DECLARE_ROUTINE_SYM(R21 * p_R);
static void r_DECLARE_MEMBERS(R21 * p_RS);
static void r_ROUTINE_HEADERS(R21 * p_RS);
static R12 * r_FIND_DECL(R21 * p_D);
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS);
static R21 * r_TYPE_REF(R21 * p_D);
static void r_PREDECLARE_MODULE(R21 * p_M);
static void r_ENTER_MODULE(R12 * p_M);
static void r_LEAVE_MODULE(R12 * p_M);
static void r_ENTER_MODULE_OF(R12 * p_G);
static rt_int r_ENTER_MODULE_FOR(R12 * p_G);
static void r_LEAVE_MODULE_OF(R12 * p_G);
static void r_EXPORT_MODULE(R12 * p_M);
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME);
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y);
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y);
static void r_MODULE_DATA(R21 * p_RS);
static void r_ROUTINE_BODIES(R21 * p_RS);
static void r_PENDING_BODIES(void);
static void r_CLOSED_BODY(R21 * p_B);
static void r_ROUTINE_BODY(R12 * p_Y);
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE);
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST);
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME);
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS);
static void r_TRANSLATE(R21 * p_SEGS);
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y);
static void r_SEGMENT_EXPORTS(R21 * p_S);
static void S_R21(R21 *d, R21 s, int any);
static int E_R21(R21 a, R21 b);
static R21 C_R21(R21 s);
static void S_R15(R15 *d, R15 s, int any);
static int E_R15(R15 a, R15 b);
static R15 C_R15(R15 s);
static void S_R12(R12 *d, R12 s, int any);
static int E_R12(R12 a, R12 b);
static R12 C_R12(R12 s);
static void S_R18(R18 *d, R18 s, int any);
static int E_R18(R18 a, R18 b);
static R18 C_R18(R18 s);
static void S_R19(R19 *d, R19 s, int any);
static int E_R19(R19 a, R19 b);
static R19 C_R19(R19 s);
static void S_R22(R22 *d, R22 s, int any);
static int E_R22(R22 a, R22 b);
static R22 C_R22(R22 s);
static void S_R20(R20 *d, R20 s, int any);
static int E_R20(R20 a, R20 b);
static R20 C_R20(R20 s);
static void S_R25(R25 *d, R25 s, int any);
static int E_R25(R25 a, R25 b);
static R25 C_R25(R25 s);
static void S_R24(R24 *d, R24 s, int any);
static int E_R24(R24 a, R24 b);
static R24 C_R24(R24 s);
static void S_R27(R27 *d, R27 s, int any);
static int E_R27(R27 a, R27 b);
static R27 C_R27(R27 s);
static void S_R28(R28 *d, R28 s, int any);
static int E_R28(R28 a, R28 b);
static R28 C_R28(R28 s);
static void S_R17(R17 *d, R17 s, int any);
static int E_R17(R17 a, R17 b);
static R17 C_R17(R17 s);
static void S_A8(A8 *d, A8 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A8(A8 a, A8 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static A8 C_A8(A8 s) { A8 d = s; 
rt_int n = rt_b_extent(1, s.lo, s.hi); d.p = rt_alloc((n > 0 ? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = s.p[i]; return d; }
static void S_R10(R10 *d, R10 s, int any) {  d->f_AT = s.f_AT; d->f_LEN = s.f_LEN; d->f_H = s.f_H; }
static int E_R10(R10 a, R10 b) { return 1 && (a.f_AT == b.f_AT) && (a.f_LEN == b.f_LEN) && (a.f_H == b.f_H); }
static R10 C_R10(R10 s) { R10 d = s;
 d.f_AT = s.f_AT; d.f_LEN = s.f_LEN; d.f_H = s.f_H; return d; }
static void S_R9(R9 *d, R9 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R10(&d->f_TX, s.f_TX, 0); }
static int E_R9(R9 a, R9 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R10(a.f_TX, b.f_TX); }
static R9 C_R9(R9 s) { R9 d = s;
 d.f_KIND = s.f_KIND; d.f_LINE = s.f_LINE; d.f_IV = s.f_IV; d.f_TX = C_R10(s.f_TX); return d; }
static void S_A11(A11 *d, A11 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R9(&d->p[i], s.p[i], 0); }
static int E_A11(A11 a, A11 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R9(a.p[i], b.p[i])) return 0; return 1; }
static A11 C_A11(A11 s) { A11 d = s; 
rt_int n = rt_b_extent(1, s.lo, s.hi); d.p = rt_alloc((n > 0 ? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = C_R9(s.p[i]); return d; }
static void S_A13(A13 *d, A13 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A13(A13 a, A13 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static A13 C_A13(A13 s) { A13 d = s; 
rt_int n = rt_b_extent(1, s.lo, s.hi); d.p = rt_alloc((n > 0 ? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = s.p[i]; return d; }
static void S_R14(R14 *d, R14 s, int any) {  d->f_HEAD = s.f_HEAD; d->f_TAIL = s.f_TAIL; }
static int E_R14(R14 a, R14 b) { return 1 && (a.f_HEAD == b.f_HEAD) && (a.f_TAIL == b.f_TAIL); }
static R14 C_R14(R14 s) { R14 d = s;
 d.f_HEAD = s.f_HEAD; d.f_TAIL = s.f_TAIL; return d; }
static void S_A16(A16 *d, A16 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R14(&d->p[i], s.p[i], 0); }
static int E_A16(A16 a, A16 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R14(a.p[i], b.p[i])) return 0; return 1; }
static A16 C_A16(A16 s) { A16 d = s; 
rt_int n = rt_b_extent(1, s.lo, s.hi); d.p = rt_alloc((n > 0 ? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = C_R14(s.p[i]); return d; }
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
static void S_R23(R23 *d, R23 s, int any) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static int E_R23(R23 a, R23 b) { return 1 && (a.f_OK == b.f_OK) && (a.f_V == b.f_V); }
static R23 C_R23(R23 s) { R23 d = s;
 d.f_OK = s.f_OK; d.f_V = s.f_V; return d; }
static void S_R26(R26 *d, R26 s, int any) {  S_R10(&d->f_C, s.f_C, 0); d->f_T = s.f_T; d->f_LVAL = s.f_LVAL; S_R10(&d->f_SELF, s.f_SELF, 0); }
static int E_R26(R26 a, R26 b) { return 1 && E_R10(a.f_C, b.f_C) && (a.f_T == b.f_T) && (a.f_LVAL == b.f_LVAL) && E_R10(a.f_SELF, b.f_SELF); }
static R26 C_R26(R26 s) { R26 d = s;
 d.f_C = C_R10(s.f_C); d.f_T = s.f_T; d.f_LVAL = s.f_LVAL; d.f_SELF = C_R10(s.f_SELF); return d; }
static void S_R21(R21 *d, R21 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_A = s.f_A; d->f_B = s.f_B; d->f_C = s.f_C; d->f_D = s.f_D; d->f_E = s.f_E; d->f_NEXT = s.f_NEXT; d->f_FL = s.f_FL; }
static int E_R21(R21 a, R21 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R10(a.f_NAME, b.f_NAME) && (a.f_A == b.f_A) && (a.f_B == b.f_B) && (a.f_C == b.f_C) && (a.f_D == b.f_D) && (a.f_E == b.f_E) && (a.f_NEXT == b.f_NEXT) && (a.f_FL == b.f_FL); }
static R21 C_R21(R21 s) { R21 d = s;
 d.f_KIND = s.f_KIND; d.f_LINE = s.f_LINE; d.f_IV = s.f_IV; d.f_NAME = C_R10(s.f_NAME); d.f_A = s.f_A; d.f_B = s.f_B; d.f_C = s.f_C; d.f_D = s.f_D; d.f_E = s.f_E; d.f_NEXT = s.f_NEXT; d.f_FL = s.f_FL; return d; }
static void S_R15(R15 *d, R15 s, int any) {  S_R10(&d->f_T, s.f_T, 0); d->f_NEXT = s.f_NEXT; }
static int E_R15(R15 a, R15 b) { return 1 && E_R10(a.f_T, b.f_T) && (a.f_NEXT == b.f_NEXT); }
static R15 C_R15(R15 s) { R15 d = s;
 d.f_T = C_R10(s.f_T); d.f_NEXT = s.f_NEXT; return d; }
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_ACCESS, s.f_ACCESS, 0); S_R10(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R10(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R10(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_WITHV = s.f_WITHV; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_ACCESS, b.f_ACCESS) && E_R10(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R10(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R10(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_WITHV == b.f_WITHV) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R10(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R10(s.f_ACCESS); d.f_FIELD = C_R10(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R10(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R10(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_WITHV = s.f_WITHV; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
static void S_R18(R18 *d, R18 s, int any) {  d->f_LEVEL = s.f_LEVEL; d->f_R = s.f_R; d->f_FRAMED = s.f_FRAMED; S_R10(&d->f_FTYPE, s.f_FTYPE, 0); S_R14(&d->f_FIELDS, s.f_FIELDS, 0); d->f_UP = s.f_UP; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; d->f_RESULT = s.f_RESULT; d->f_IS_PATH = s.f_IS_PATH; S_R10(&d->f_COPYOUT, s.f_COPYOUT, 0); }
static int E_R18(R18 a, R18 b) { return 1 && (a.f_LEVEL == b.f_LEVEL) && (a.f_R == b.f_R) && (a.f_FRAMED == b.f_FRAMED) && E_R10(a.f_FTYPE, b.f_FTYPE) && E_R14(a.f_FIELDS, b.f_FIELDS) && (a.f_UP == b.f_UP) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && (a.f_RESULT == b.f_RESULT) && (a.f_IS_PATH == b.f_IS_PATH) && E_R10(a.f_COPYOUT, b.f_COPYOUT); }
static R18 C_R18(R18 s) { R18 d = s;
 d.f_LEVEL = s.f_LEVEL; d.f_R = s.f_R; d.f_FRAMED = s.f_FRAMED; d.f_FTYPE = C_R10(s.f_FTYPE); d.f_FIELDS = C_R14(s.f_FIELDS); d.f_UP = s.f_UP; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_RESULT = s.f_RESULT; d.f_IS_PATH = s.f_IS_PATH; d.f_COPYOUT = C_R10(s.f_COPYOUT); return d; }
static void S_R19(R19 *d, R19 s, int any) {  d->f_ID = s.f_ID; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_UP = s.f_UP; }
static int E_R19(R19 a, R19 b) { return 1 && (a.f_ID == b.f_ID) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && E_R10(a.f_NAME, b.f_NAME) && (a.f_UP == b.f_UP); }
static R19 C_R19(R19 s) { R19 d = s;
 d.f_ID = s.f_ID; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_NAME = C_R10(s.f_NAME); d.f_UP = s.f_UP; return d; }
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R10(&d->f_LO_C, s.f_LO_C, 0); S_R10(&d->f_HI_C, s.f_HI_C, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R10(&d->f_LEN_C, s.f_LEN_C, 0); S_R23(&d->f_MLEN, s.f_MLEN, 0); S_R10(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R10(&d->f_NAME, s.f_NAME, 0); S_R10(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R10(a.f_LO_C, b.f_LO_C) && E_R10(a.f_HI_C, b.f_HI_C) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R10(a.f_LEN_C, b.f_LEN_C) && E_R23(a.f_MLEN, b.f_MLEN) && E_R10(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R10(a.f_NAME, b.f_NAME) && E_R10(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R10(s.f_LO_C); d.f_HI_C = C_R10(s.f_HI_C); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R10(s.f_LEN_C); d.f_MLEN = C_R23(s.f_MLEN); d.f_GEN = C_R10(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R10(s.f_NAME); d.f_CNAME = C_R10(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; return d; }
static void S_R20(R20 *d, R20 s, int any) {  S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R20(R20 a, R20 b) { return 1 && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static R20 C_R20(R20 s) { R20 d = s;
 d.f_NAME = C_R10(s.f_NAME); d.f_T = s.f_T; d.f_C = C_R10(s.f_C); d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_R = s.f_R; d.f_NEXT = s.f_NEXT; return d; }
static void S_R25(R25 *d, R25 s, int any) {  S_R10(&d->f_LO, s.f_LO, 0); S_R10(&d->f_HI, s.f_HI, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_ANYARG = s.f_ANYARG; d->f_NEXT = s.f_NEXT; }
static int E_R25(R25 a, R25 b) { return 1 && E_R10(a.f_LO, b.f_LO) && E_R10(a.f_HI, b.f_HI) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_ANYARG == b.f_ANYARG) && (a.f_NEXT == b.f_NEXT); }
static R25 C_R25(R25 s) { R25 d = s;
 d.f_LO = C_R10(s.f_LO); d.f_HI = C_R10(s.f_HI); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_ANYARG = s.f_ANYARG; d.f_NEXT = s.f_NEXT; return d; }
static void S_R24(R24 *d, R24 s, int any) {  S_R10(&d->f_NAME, s.f_NAME, 0); S_R10(&d->f_CNAME, s.f_CNAME, 0); d->f_T = s.f_T; d->f_KIND = s.f_KIND; S_R10(&d->f_TAGF, s.f_TAGF, 0); d->f_LABELS = s.f_LABELS; d->f_NEXT = s.f_NEXT; }
static int E_R24(R24 a, R24 b) { return 1 && E_R10(a.f_NAME, b.f_NAME) && E_R10(a.f_CNAME, b.f_CNAME) && (a.f_T == b.f_T) && (a.f_KIND == b.f_KIND) && E_R10(a.f_TAGF, b.f_TAGF) && (a.f_LABELS == b.f_LABELS) && (a.f_NEXT == b.f_NEXT); }
static R24 C_R24(R24 s) { R24 d = s;
 d.f_NAME = C_R10(s.f_NAME); d.f_CNAME = C_R10(s.f_CNAME); d.f_T = s.f_T; d.f_KIND = s.f_KIND; d.f_TAGF = C_R10(s.f_TAGF); d.f_LABELS = s.f_LABELS; d.f_NEXT = s.f_NEXT; return d; }
static void S_R27(R27 *d, R27 s, int any) {  d->f_E = s.f_E; S_R26(&d->f_V, s.f_V, 0); d->f_HAVE = s.f_HAVE; d->f_MODE = s.f_MODE; d->f_NEXT = s.f_NEXT; }
static int E_R27(R27 a, R27 b) { return 1 && (a.f_E == b.f_E) && E_R26(a.f_V, b.f_V) && (a.f_HAVE == b.f_HAVE) && (a.f_MODE == b.f_MODE) && (a.f_NEXT == b.f_NEXT); }
static R27 C_R27(R27 s) { R27 d = s;
 d.f_E = s.f_E; d.f_V = C_R26(s.f_V); d.f_HAVE = s.f_HAVE; d.f_MODE = s.f_MODE; d.f_NEXT = s.f_NEXT; return d; }
static void S_R28(R28 *d, R28 s, int any) {  S_R10(&d->f_NAME, s.f_NAME, 0); d->f_MODE = s.f_MODE; d->f_T = s.f_T; d->f_TS = s.f_TS; d->f_NEXT = s.f_NEXT; }
static int E_R28(R28 a, R28 b) { return 1 && E_R10(a.f_NAME, b.f_NAME) && (a.f_MODE == b.f_MODE) && (a.f_T == b.f_T) && (a.f_TS == b.f_TS) && (a.f_NEXT == b.f_NEXT); }
static R28 C_R28(R28 s) { R28 d = s;
 d.f_NAME = C_R10(s.f_NAME); d.f_MODE = s.f_MODE; d.f_T = s.f_T; d.f_TS = s.f_TS; d.f_NEXT = s.f_NEXT; return d; }
static void S_R17(R17 *d, R17 s, int any) {  d->f_KIND = s.f_KIND; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_HANDLERS = s.f_HANDLERS; d->f_NEXT = s.f_NEXT; }
static int E_R17(R17 a, R17 b) { return 1 && (a.f_KIND == b.f_KIND) && E_R10(a.f_NAME, b.f_NAME) && (a.f_HANDLERS == b.f_HANDLERS) && (a.f_NEXT == b.f_NEXT); }
static R17 C_R17(R17 s) { R17 d = s;
 d.f_KIND = s.f_KIND; d.f_NAME = C_R10(s.f_NAME); d.f_HANDLERS = s.f_HANDLERS; d.f_NEXT = s.f_NEXT; return d; }
static rstr r_CHAR_OF(rt_int p_C) { RT_B_TICK(); 
if (({ rt_int iv29 = p_C; (((rt_int)32LL) <= iv29) && (iv29 <= ((rt_int)126LL)); }))
{
{ rstr rv30 = rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
return rv30; }
}
{
rstr l_B_31; memset(&l_B_31, 0, sizeof l_B_31);
l_B_31 = rt_b_str_new(((rt_int)8LL), 1);
rt_b_assign(&l_B_31, rt_str("00000000", 8));
rt_int l_V_32; memset(&l_V_32, 0, sizeof l_V_32);
l_V_32 = rt_rem(p_C, ((rt_int)256LL));
{ rt_int it34_lo = ((rt_int)0LL), it34_hi = ((rt_int)7LL);
for (rt_int it34 = it34_lo; it34 <= it34_hi; it34++) {
{
if ((rt_rem(l_V_32, ((rt_int)2LL)) == ((rt_int)1LL)))
{
rt_b_slice_assign(&l_B_31, rt_sub(((rt_int)7LL), it34), rt_sub(((rt_int)7LL), it34), rt_str("1", 1));
}
l_V_32 = rt_quot(l_V_32, ((rt_int)2LL));
}
RT_B_TICK();
if (it34 == it34_hi) break;
} } L_end33: ;
{
{ rstr rv35 = rt_b_str_of_bits(l_B_31);
return rv35; }
}
}
{ rstr rv36 = rt_str("\?", 1);
return rv36; }
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { RT_B_TICK(); 
{ rt_int rv37 = rt_b_int_of_bits(rt_b_bits_of_str(p_S));
return rv37; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { RT_B_TICK(); 
{ rt_int rv38 = rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
return rv38; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { RT_B_TICK(); 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
{ rt_int rv39 = ((rt_int)0LL);
return rv39; }
}
{ rt_int rv40 = r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
return rv40; }
rt_raise(RT_X_INIT);
}
static R10 r_MK(rstr p_S) { RT_B_TICK(); 
rt_int l_AT_41; memset(&l_AT_41, 0, sizeof l_AT_41);
l_AT_41 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_41, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, l_AT_41, rt_sub(rt_add(l_AT_41, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_41, (rt_int)(p_S).len);
{ R10 rv42 = ({ R10 rc43; memset(&rc43, 0, sizeof rc43);  rc43.f_AT = l_AT_41; rc43.f_LEN = (rt_int)(p_S).len; rc43.f_H = rt_neg(((rt_int)1LL)); rc43; });
return rv42; }
rt_raise(RT_X_INIT);
}
static R10 r_MKN(rstr p_S) { RT_B_TICK(); 
R10 l_T_44; memset(&l_T_44, 0, sizeof l_T_44);
S_R10(&l_T_44, r_MK(p_S), 0);
(l_T_44).f_H = r_HASH_OF(p_S);
{ R10 rv45 = l_T_44;
return rv45; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R10 p_T, rt_int p_L) { RT_B_TICK(); 
{ rstr rv46 = rt_b_slice(((*(R7 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv46; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R10 p_A, R10 p_B) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv47 = 0;
return rv47; }
}
{ rt_int rv48 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv48; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R10 p_A, rstr p_S) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv49 = 0;
return rv49; }
}
{ rt_int rv50 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv50; }
rt_raise(RT_X_INIT);
}
static R10 r_CAT(R10 p_A, R10 p_B) { RT_B_TICK(); 
{ R10 rv51 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv51; }
rt_raise(RT_X_INIT);
}
static R10 r_CATS(R10 p_A, rstr p_S) { RT_B_TICK(); 
{ R10 rv52 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv52; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT4(rstr p_P, R10 p_A, R10 p_B, R10 p_C, R10 p_D) { RT_B_TICK(); 
rt_int l_AT_53; memset(&l_AT_53, 0, sizeof l_AT_53);
l_AT_53 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_54; memset(&l_N_54, 0, sizeof l_N_54);
l_N_54 = ((rt_int)0LL);
rt_int l_START_55; memset(&l_START_55, 0, sizeof l_START_55);
l_START_55 = ((rt_int)0LL);
R10 l_R_56; memset(&l_R_56, 0, sizeof l_R_56);
{ rt_int it58_lo = ((rt_int)0LL), it58_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it58 = it58_lo; it58 <= it58_hi; it58++) {
{
if (rt_b_eq(rt_b_slice(p_P, it58, it58), rt_str("@", 1)))
{
S_R10(&l_R_56, r_MK(rt_b_slice(p_P, l_START_55, rt_sub(it58, ((rt_int)1LL)))), 0);
switch (l_N_54) {
case 0:
{
S_R10(&l_R_56, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R10(&l_R_56, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R10(&l_R_56, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R10(&l_R_56, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_54 = rt_add(l_N_54, ((rt_int)1LL));
l_START_55 = rt_add(it58, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it58 == it58_hi) break;
} } L_end57: ;
S_R10(&l_R_56, r_MK(rt_b_slice(p_P, l_START_55, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R10 rv59 = ({ R10 rc60; memset(&rc60, 0, sizeof rc60);  rc60.f_AT = l_AT_53; rc60.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_53); rc60.f_H = rt_neg(((rt_int)1LL)); rc60; });
return rv59; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT1(rstr p_P, R10 p_A) { RT_B_TICK(); 
{ R10 rv61 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv61; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT2(rstr p_P, R10 p_A, R10 p_B) { RT_B_TICK(); 
{ R10 rv62 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv62; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT3(rstr p_P, R10 p_A, R10 p_B, R10 p_C) { RT_B_TICK(); 
{ R10 rv63 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv63; }
rt_raise(RT_X_INIT);
}
static R10 r_NUM(rt_int p_V) { RT_B_TICK(); 
{ R10 rv64 = r_MK(rt_b_image(p_V));
return rv64; }
rt_raise(RT_X_INIT);
}
static R10 r_CID(R10 p_T) { RT_B_TICK(); 
rstr l_S_65; memset(&l_S_65, 0, sizeof l_S_65);
l_S_65 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_65, r_STR(p_T, (p_T).f_LEN));
R10 l_R_66; memset(&l_R_66, 0, sizeof l_R_66);
if (((p_T).f_LEN == ((rt_int)0LL)))
{
{ R10 rv67 = p_T;
return rv67; }
}
if (((!rt_b_eq(rt_b_slice(l_S_65, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1))) && (!rt_b_eq(rt_b_slice(l_S_65, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1)))))
{
{ R10 rv68 = p_T;
return rv68; }
}
if (rt_b_eq(rt_b_slice(l_S_65, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1)))
{
S_R10(&l_R_66, r_MK(rt_str("bs_", 3)), 0);
}
else
{
S_R10(&l_R_66, r_MK(rt_str("qm_", 3)), 0);
}
if (((p_T).f_LEN == ((rt_int)1LL)))
{
{ R10 rv69 = l_R_66;
return rv69; }
}
{ R10 rv70 = r_CATS(l_R_66, rt_b_slice(l_S_65, ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv70; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R10 rv71 = r_MK(rt_b_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv71; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R10 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_72; memset(&l_C_72, 0, sizeof l_C_72);
l_C_72 = ((R15 *)rt_b_new(sizeof (R15)));
S_R10(&((*(R15 *)rt_nil_check(l_C_72))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_72))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_72;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_72;
}
((*p_B)).f_TAIL = l_C_72;
}
static void r_EMIT(rt_int p_SEC, R10 p_T) { RT_B_TICK(); 
r_APPEND(p_T, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_EMITS(rt_int p_SEC, rstr p_S) { RT_B_TICK(); 
r_APPEND(r_MK(p_S), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_CODE(R10 p_T) { RT_B_TICK(); 
r_APPEND(p_T, &((*(R7 *)rt_nil_check(g_W))).f_CODE);
}
static void r_CODES(rstr p_S) { RT_B_TICK(); 
r_APPEND(r_MK(p_S), &((*(R7 *)rt_nil_check(g_W))).f_CODE);
}
static void r_PUT_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_73; memset(&l_C_73, 0, sizeof l_C_73);
l_C_73 = (p_B).f_HEAD;
for (;;) {
if ((l_C_73 == NULL)) goto L_end74;
{
{
R10 l_T_75; memset(&l_T_75, 0, sizeof l_T_75);
S_R10(&l_T_75, ((*(R15 *)rt_nil_check(l_C_73))).f_T, 0);
rt_putln(r_STR(l_T_75, (l_T_75).f_LEN));
}
l_C_73 = ((*(R15 *)rt_nil_check(l_C_73))).f_NEXT;
}
RT_B_TICK();
} L_end74: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it77_lo = ((rt_int)0LL), it77_hi = g_O_LAST;
for (rt_int it77 = it77_lo; it77 <= it77_hi; it77++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it77, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it77 == it77_hi) break;
} } L_end76: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R10 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_78; memset(&l_C_78, 0, sizeof l_C_78);
l_C_78 = rt_b_get_code();
for (;;) {
if ((l_C_78 < ((rt_int)0LL))) goto L_end79;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_78;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_78 = rt_b_get_code();
}
RT_B_TICK();
} L_end79: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv80 = ((rt_int)0LL);
return rv80; }
}
{ rt_int rv81 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv81; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv82 = ({ rt_int iv83 = p_C; (((rt_int)65LL) <= iv83) && (iv83 <= ((rt_int)90LL)); });
return rv82; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv84 = ({ rt_int iv85 = p_C; (((rt_int)48LL) <= iv85) && (iv85 <= ((rt_int)57LL)); });
return rv84; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv86 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv86; }
rt_raise(RT_X_INIT);
}
static R10 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_87; memset(&l_AT_87, 0, sizeof l_AT_87);
l_AT_87 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_88; memset(&l_L_88, 0, sizeof l_L_88);
l_L_88 = rt_sub(p_BEYOND, p_FIRST);
R10 l_T_89; memset(&l_T_89, 0, sizeof l_T_89);
if ((rt_add(l_AT_87, l_L_88) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it91_lo = p_FIRST, it91_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it91 = it91_lo; it91 <= it91_hi; it91++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it91, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it91 == it91_hi) break;
} } L_end90: ;
S_R10(&l_T_89, ({ R10 rc92; memset(&rc92, 0, sizeof rc92);  rc92.f_AT = l_AT_87; rc92.f_LEN = l_L_88; rc92.f_H = ((rt_int)0LL); rc92; }), 0);
if ((l_L_88 > ((rt_int)0LL)))
{
(l_T_89).f_H = r_HASH_CODES(l_L_88, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_88, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R10 rv93 = l_T_89;
return rv93; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R10 p_T) { RT_B_TICK(); 
rstr l_WORDS_94; memset(&l_WORDS_94, 0, sizeof l_WORDS_94);
l_WORDS_94 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_94, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_95; memset(&l_L_95, 0, sizeof l_L_95);
l_L_95 = (p_T).f_LEN;
{ rt_int it97_lo = ((rt_int)0LL), it97_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_95), ((rt_int)2LL));
for (rt_int it97 = it97_lo; it97 <= it97_hi; it97++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_94, it97, it97), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_94, rt_add(rt_add(it97, l_L_95), ((rt_int)1LL)), rt_add(rt_add(it97, l_L_95), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_94, rt_add(it97, ((rt_int)1LL)), rt_add(it97, l_L_95)), r_STR(p_T, l_L_95)))
{
{ rt_int rv98 = 1;
return rv98; }
}
}
}
}
RT_B_TICK();
if (it97 == it97_hi) break;
} } L_end96: ;
{ rt_int rv99 = 0;
return rv99; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R10 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R9(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R9 rc100; memset(&rc100, 0, sizeof rc100);  rc100.f_KIND = p_KIND; rc100.f_LINE = p_LINE; rc100.f_IV = p_IV; S_R10(&rc100.f_TX, p_TX, 0); rc100; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_101; memset(&l_C_101, 0, sizeof l_C_101);
l_C_101 = r_AT_SRC(p_I);
rt_int l_D_102; memset(&l_D_102, 0, sizeof l_D_102);
l_D_102 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_101 == ((rt_int)45LL)) && (l_D_102 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv103 = ((rt_int)3LL);
return rv103; }
}
if ((((((((((((l_C_101 == ((rt_int)58LL)) && (l_D_102 == ((rt_int)61LL)))) || (((l_C_101 == ((rt_int)45LL)) && (l_D_102 == ((rt_int)62LL))))) || (((l_C_101 == ((rt_int)60LL)) && (l_D_102 == ((rt_int)61LL))))) || (((l_C_101 == ((rt_int)62LL)) && (l_D_102 == ((rt_int)61LL))))) || (((l_C_101 == ((rt_int)60LL)) && (l_D_102 == ((rt_int)62LL))))) || (((l_C_101 == ((rt_int)42LL)) && (l_D_102 == ((rt_int)42LL))))) || (((l_C_101 == ((rt_int)47LL)) && (l_D_102 == ((rt_int)47LL))))) || (((l_C_101 == ((rt_int)36LL)) && (l_D_102 == ((rt_int)36LL))))) || (((l_C_101 == ((rt_int)33LL)) && (l_D_102 == ((rt_int)33LL))))))
{
{ rt_int rv104 = ((rt_int)2LL);
return rv104; }
}
{ rt_int rv105 = ((rt_int)1LL);
return rv105; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_106; memset(&l_I_106, 0, sizeof l_I_106);
l_I_106 = ((rt_int)0LL);
rt_int l_LINE_107; memset(&l_LINE_107, 0, sizeof l_LINE_107);
l_LINE_107 = ((rt_int)1LL);
rt_int l_C_108; memset(&l_C_108, 0, sizeof l_C_108);
rt_int l_J_109; memset(&l_J_109, 0, sizeof l_J_109);
rt_int l_V_110; memset(&l_V_110, 0, sizeof l_V_110);
for (;;) {
if ((l_I_106 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end111;
{
l_C_108 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_106, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_108 == ((rt_int)10LL)))
{
l_LINE_107 = rt_add(l_LINE_107, ((rt_int)1LL));
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
}
else if (((((l_C_108 == ((rt_int)32LL)) || (l_C_108 == ((rt_int)9LL))) || (l_C_108 == ((rt_int)13LL))) || (l_C_108 == ((rt_int)12LL))))
{
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
}
else if ((l_C_108 == ((rt_int)37LL)))
{
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
for (;;) {
if ((((l_I_106 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_106, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_106, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end112;
{
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
}
RT_B_TICK();
} L_end112: ;
if ((r_AT_SRC(l_I_106) == ((rt_int)37LL)))
{
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
}
}
else if ((l_C_108 == ((rt_int)39LL)))
{
{
rt_int l_AT_113; memset(&l_AT_113, 0, sizeof l_AT_113);
l_AT_113 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
for (;;) {
{
if (((l_I_106 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_106, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_107, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_106, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_106, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
goto L_end114;
}
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_106, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_106 = rt_add(l_I_106, ((rt_int)1LL));
}
RT_B_TICK();
} L_end114: ;
r_ADD_TOKEN(g_K_STR, l_LINE_107, ((rt_int)0LL), ({ R10 rc115; memset(&rc115, 0, sizeof rc115);  rc115.f_AT = l_AT_113; rc115.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_113); rc115.f_H = rt_neg(((rt_int)1LL)); rc115; }));
}
}
else if ((l_C_108 == ((rt_int)92LL)))
{
l_J_109 = rt_add(l_I_106, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_109) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_109, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_109, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_109, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_109 = rt_add(l_I_106, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_109) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_109, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_109 = rt_add(l_I_106, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_109) == ((rt_int)91LL)) || (r_AT_SRC(l_J_109) == ((rt_int)93LL))))
{
l_J_109 = rt_add(l_I_106, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_109)))) goto L_end116;
{
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end116: ;
if ((l_J_109 == rt_add(l_I_106, ((rt_int)1LL))))
{
r_FAIL(l_LINE_107, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_107, ((rt_int)0LL), r_SOURCE_TEXT(l_I_106, l_J_109));
l_I_106 = l_J_109;
}
else if ((l_C_108 == ((rt_int)63LL)))
{
l_J_109 = rt_add(l_I_106, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_109)))) goto L_end117;
{
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end117: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_107, ((rt_int)0LL), r_SOURCE_TEXT(l_I_106, l_J_109));
l_I_106 = l_J_109;
}
else if (r_IS_LETTER(l_C_108))
{
l_J_109 = l_I_106;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_109)))) goto L_end118;
{
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end118: ;
{
R10 l_T_119; memset(&l_T_119, 0, sizeof l_T_119);
S_R10(&l_T_119, r_SOURCE_TEXT(l_I_106, l_J_109), 0);
if (r_IS_RESERVED(l_T_119))
{
r_ADD_TOKEN(g_K_RES, l_LINE_107, ((rt_int)0LL), l_T_119);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_107, ((rt_int)0LL), l_T_119);
}
}
l_I_106 = l_J_109;
}
else if ((r_IS_DIGIT(l_C_108) || (((l_C_108 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_106, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_120; memset(&l_KIND_120, 0, sizeof l_KIND_120);
l_KIND_120 = g_K_NUM;
rt_int l_SCALE_121; memset(&l_SCALE_121, 0, sizeof l_SCALE_121);
l_SCALE_121 = ((rt_int)0LL);
rt_int l_NEG_122; memset(&l_NEG_122, 0, sizeof l_NEG_122);
l_NEG_122 = 0;
rt_int l_BIG_123; memset(&l_BIG_123, 0, sizeof l_BIG_123);
l_BIG_123 = 0;
l_J_109 = l_I_106;
l_V_110 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_109)))) goto L_end124;
{
if ((l_V_110 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_109), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_123 = 1;
}
else
{
l_V_110 = rt_add(rt_mul(l_V_110, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_109), ((rt_int)48LL))));
}
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end124: ;
if ((r_AT_SRC(l_J_109) == ((rt_int)46LL)))
{
l_KIND_120 = g_K_REAL;
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_109)))) goto L_end125;
{
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end125: ;
}
if (((r_AT_SRC(l_J_109) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_109, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_109, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_109, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_109, ((rt_int)2LL))))))))))
{
l_KIND_120 = g_K_REAL;
l_J_109 = rt_add(l_J_109, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_109)))) goto L_end126;
{
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end126: ;
}
{
R10 l_T_127; memset(&l_T_127, 0, sizeof l_T_127);
S_R10(&l_T_127, r_SOURCE_TEXT(l_I_106, l_J_109), 0);
if (((r_AT_SRC(l_J_109) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_109, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_120 = g_K_FIX;
l_J_109 = rt_add(l_J_109, ((rt_int)2LL));
if ((r_AT_SRC(l_J_109) == ((rt_int)45LL)))
{
l_NEG_122 = 1;
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_109) == ((rt_int)43LL)))
{
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_109)))) goto L_end128;
{
if ((l_SCALE_121 <= ((rt_int)100000LL)))
{
l_SCALE_121 = rt_add(rt_mul(l_SCALE_121, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_109), ((rt_int)48LL))));
}
l_J_109 = rt_add(l_J_109, ((rt_int)1LL));
}
RT_B_TICK();
} L_end128: ;
if (l_NEG_122)
{
l_SCALE_121 = rt_neg(l_SCALE_121);
}
l_V_110 = l_SCALE_121;
}
if (((l_KIND_120 == g_K_NUM) && l_BIG_123))
{
r_FAIL(l_LINE_107, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_120, l_LINE_107, l_V_110, l_T_127);
}
}
l_I_106 = l_J_109;
}
else
{
l_J_109 = rt_add(l_I_106, r_SYMBOL_LENGTH(l_I_106));
r_ADD_TOKEN(g_K_SYM, l_LINE_107, ((rt_int)0LL), r_SOURCE_TEXT(l_I_106, l_J_109));
l_I_106 = l_J_109;
}
}
RT_B_TICK();
} L_end111: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_107, ((rt_int)0LL), r_MK(rt_str("", 0)));
}
static R9 r_CUR(void) { RT_B_TICK(); 
{ R9 rv129 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv129; }
rt_raise(RT_X_INIT);
}
static R9 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R9 rv130 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv130; }
}
{ R9 rv131 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv131; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv132 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv132; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R9 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv133 = r_TEQS((p_T).f_TX, p_S);
return rv133; }
}
{ rt_int rv134 = 0;
return rv134; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv135 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv135; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv136 = 0;
return rv136; }
}
{ rt_int rv137 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv137; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv138 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv138; }
rt_raise(RT_X_INIT);
}
static void r_SKIP(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_POS < rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL))))
{
((*(R7 *)rt_nil_check(g_W))).f_POS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL));
}
}
static rt_int r_ACCEPT(rstr p_S) { RT_B_TICK(); 
if (r_IS(p_S))
{
r_SKIP();
{ rt_int rv139 = 1;
return rv139; }
}
{ rt_int rv140 = 0;
return rv140; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R10 l_T_141; memset(&l_T_141, 0, sizeof l_T_141);
S_R10(&l_T_141, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_141, (l_T_141).f_LEN)));
}
}
}
static R10 r_IDENT(void) { RT_B_TICK(); 
R9 l_T_142; memset(&l_T_142, 0, sizeof l_T_142);
S_R9(&l_T_142, r_CUR(), 0);
if (((!((l_T_142).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_142))))
{
r_FAILT((l_T_142).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_142).f_TX);
}
r_SKIP();
{ R10 rv143 = (l_T_142).f_TX;
return rv143; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R9 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_144; memset(&l_S_144, 0, sizeof l_S_144);
l_S_144 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_144, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv145 = (((!rt_b_eq(rt_b_slice(l_S_144, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_144, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_144, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv145; }
}
}
{ rt_int rv146 = 0;
return rv146; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R10 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R21 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_147; memset(&l_N_147, 0, sizeof l_N_147);
l_N_147 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_N_147)), ({ R21 rc148; memset(&rc148, 0, sizeof rc148);  rc148.f_KIND = p_KIND; rc148.f_LINE = p_LINE; rc148.f_IV = ((rt_int)0LL); S_R10(&rc148.f_NAME, ({ R10 rc149; memset(&rc149, 0, sizeof rc149);  rc149.f_AT = ((rt_int)0LL); rc149.f_LEN = ((rt_int)0LL); rc149.f_H = ((rt_int)0LL); rc149; }), 0); rc148.f_A = NULL; rc148.f_B = NULL; rc148.f_C = NULL; rc148.f_D = NULL; rc148.f_E = NULL; rc148.f_NEXT = NULL; rc148.f_FL = ((rt_int)0LL); rc148; }), 0);
{ R21 * rv150 = l_N_147;
return rv150; }
rt_raise(RT_X_INIT);
}
static void r_ADD_LIST(R21 * p_N, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
if (((*p_HEAD) == NULL))
{
(*p_HEAD) = p_N;
}
else
{
((*(R21 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_N;
}
(*p_TAIL) = p_N;
}
static rt_int r_LIST_LENGTH(R21 * p_N) { RT_B_TICK(); 
rt_int l_K_151; memset(&l_K_151, 0, sizeof l_K_151);
l_K_151 = ((rt_int)0LL);
R21 * l_P_152; memset(&l_P_152, 0, sizeof l_P_152);
l_P_152 = p_N;
for (;;) {
if ((l_P_152 == NULL)) goto L_end153;
{
l_K_151 = rt_add(l_K_151, ((rt_int)1LL));
l_P_152 = ((*(R21 *)rt_nil_check(l_P_152))).f_NEXT;
}
RT_B_TICK();
} L_end153: ;
{ rt_int rv154 = l_K_151;
return rv154; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_NODE(void) { RT_B_TICK(); 
R21 * l_N_155; memset(&l_N_155, 0, sizeof l_N_155);
l_N_155 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_155))).f_NAME, r_IDENT(), 0);
{ R21 * rv156 = l_N_155;
return rv156; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_LIST(void) { RT_B_TICK(); 
R21 * l_HEAD_157; memset(&l_HEAD_157, 0, sizeof l_HEAD_157);
l_HEAD_157 = NULL;
R21 * l_TAIL_158; memset(&l_TAIL_158, 0, sizeof l_TAIL_158);
l_TAIL_158 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_157, &l_TAIL_158);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end159;
} L_end159: ;
{ R21 * rv160 = l_HEAD_157;
return rv160; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R21 * l_N_161; memset(&l_N_161, 0, sizeof l_N_161);
l_N_161 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_161))).f_NAME, r_MKN(rt_b_cat(rt_b_cat(r_STR(((*(R21 *)rt_nil_check(l_N_161))).f_NAME, (((*(R21 *)rt_nil_check(l_N_161))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R21 * rv162 = l_N_161;
return rv162; }
rt_raise(RT_X_INIT);
}
static R21 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R21 * l_L_163; memset(&l_L_163, 0, sizeof l_L_163);
l_L_163 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_163 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R21 * rv164 = l_L_163;
return rv164; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_165; memset(&l_DEPTH_165, 0, sizeof l_DEPTH_165);
l_DEPTH_165 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_165 = rt_add(l_DEPTH_165, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_165 = rt_sub(l_DEPTH_165, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_165 == ((rt_int)0LL))) goto L_end166;
} L_end166: ;
}
static R21 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R21 * l_HEAD_167; memset(&l_HEAD_167, 0, sizeof l_HEAD_167);
l_HEAD_167 = NULL;
R21 * l_TAIL_168; memset(&l_TAIL_168, 0, sizeof l_TAIL_168);
l_TAIL_168 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end169;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_167, &l_TAIL_168);
}
RT_B_TICK();
} L_end169: ;
{ R21 * rv170 = l_HEAD_167;
return rv170; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R21 * l_N_171; memset(&l_N_171, 0, sizeof l_N_171);
l_N_171 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end172;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R21 *)rt_nil_check(l_N_171))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R21 *)rt_nil_check(l_N_171))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_171))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_171))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_171))).f_E = r_PAREN_IDENTS();
}
else
{
{
R10 l_T_173; memset(&l_T_173, 0, sizeof l_T_173);
S_R10(&l_T_173, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_173);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end172: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv174 = l_N_171;
return rv174; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R21 * l_S_175; memset(&l_S_175, 0, sizeof l_S_175);
l_S_175 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R21 * l_HEAD_176; memset(&l_HEAD_176, 0, sizeof l_HEAD_176);
l_HEAD_176 = NULL;
R21 * l_TAIL_177; memset(&l_TAIL_177, 0, sizeof l_TAIL_177);
l_TAIL_177 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R21 *)rt_nil_check(l_S_175))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R10(&((*(R21 *)rt_nil_check(l_S_175))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_U_179; memset(&l_U_179, 0, sizeof l_U_179);
l_U_179 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_U_179))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_U_179))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_179, &l_HEAD_176, &l_TAIL_177);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end178;
} L_end178: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_S_175))).f_A = l_HEAD_176;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_S_175))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_S_175))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_175))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_S_175))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv180 = l_S_175;
return rv180; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R21 * l_B_181; memset(&l_B_181, 0, sizeof l_B_181);
l_B_181 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R21 * l_HEAD_182; memset(&l_HEAD_182, 0, sizeof l_HEAD_182);
l_HEAD_182 = NULL;
R21 * l_TAIL_183; memset(&l_TAIL_183, 0, sizeof l_TAIL_183);
l_TAIL_183 = NULL;
((*(R21 *)rt_nil_check(l_B_181))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_181))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_182, &l_TAIL_183);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_182, &l_TAIL_183);
}
else
{
goto L_end184;
}
}
RT_B_TICK();
} L_end184: ;
((*(R21 *)rt_nil_check(l_B_181))).f_C = l_HEAD_182;
{ R21 * rv185 = l_B_181;
return rv185; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BODY(void) { RT_B_TICK(); 
R21 * l_B_186; memset(&l_B_186, 0, sizeof l_B_186);
l_B_186 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_B_186))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_186))).f_B = r_PARSE_STATEMENTS();
{ R21 * rv187 = l_B_186;
return rv187; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R21 * l_M_188; memset(&l_M_188, 0, sizeof l_M_188);
l_M_188 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R21 * l_HEAD_189; memset(&l_HEAD_189, 0, sizeof l_HEAD_189);
l_HEAD_189 = NULL;
R21 * l_TAIL_190; memset(&l_TAIL_190, 0, sizeof l_TAIL_190);
l_TAIL_190 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R10(&((*(R21 *)rt_nil_check(l_M_188))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_M_188))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_M_188))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_192; memset(&l_PAREN_192, 0, sizeof l_PAREN_192);
l_PAREN_192 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_X_194; memset(&l_X_194, 0, sizeof l_X_194);
l_X_194 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_X_194))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R21 *)rt_nil_check(l_X_194))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_194, &l_HEAD_189, &l_TAIL_190);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end193;
} L_end193: ;
if (l_PAREN_192)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R21 *)rt_nil_check(l_M_188))).f_B = l_HEAD_189;
}
}
else
{
goto L_end191;
}
}
RT_B_TICK();
} L_end191: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_M_188))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_M_188))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv195 = l_M_188;
return rv195; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R21 * l_HEAD_196; memset(&l_HEAD_196, 0, sizeof l_HEAD_196);
l_HEAD_196 = NULL;
R21 * l_TAIL_197; memset(&l_TAIL_197, 0, sizeof l_TAIL_197);
l_TAIL_197 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_196, &l_TAIL_197);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_196, &l_TAIL_197);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_196, &l_TAIL_197);
}
else
{
goto L_end198;
}
}
RT_B_TICK();
} L_end198: ;
{ R21 * rv199 = l_HEAD_196;
return rv199; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R21 * l_D_200; memset(&l_D_200, 0, sizeof l_D_200);
l_D_200 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R21 *)rt_nil_check(l_D_200))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R21 *)rt_nil_check(l_D_200))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_D_200))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R21 *)rt_nil_check(l_D_200))).f_C = r_PARSE_EXPR();
}
else if ((((*(R21 *)rt_nil_check(l_D_200))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R21 *)rt_nil_check(l_D_200))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv201 = l_D_200;
return rv201; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R21 * l_HEAD_202; memset(&l_HEAD_202, 0, sizeof l_HEAD_202);
l_HEAD_202 = NULL;
R21 * l_TAIL_203; memset(&l_TAIL_203, 0, sizeof l_TAIL_203);
l_TAIL_203 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_F_205; memset(&l_F_205, 0, sizeof l_F_205);
l_F_205 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R21 *)rt_nil_check(l_F_205))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_F_205))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R21 *)rt_nil_check(l_F_205))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_205, &l_HEAD_202, &l_TAIL_203);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end204;
} L_end204: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv206 = l_HEAD_202;
return rv206; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_207; memset(&l_D_207, 0, sizeof l_D_207);
l_D_207 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R10(&((*(R21 *)rt_nil_check(l_D_207))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_207))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_207))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R21 * rv208 = l_D_207;
return rv208; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_209; memset(&l_D_209, 0, sizeof l_D_209);
l_D_209 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R10(&((*(R21 *)rt_nil_check(l_D_209))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_209))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R21 *)rt_nil_check(l_D_209))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_209))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R21 * rv210 = l_D_209;
return rv210; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REP(void) { RT_B_TICK(); 
R21 * l_R_211; memset(&l_R_211, 0, sizeof l_R_211);
l_R_211 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R21 * l_HEAD_212; memset(&l_HEAD_212, 0, sizeof l_HEAD_212);
l_HEAD_212 = NULL;
R21 * l_TAIL_213; memset(&l_TAIL_213, 0, sizeof l_TAIL_213);
l_TAIL_213 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R21 *)rt_nil_check(l_R_211))).f_KIND = g_TS_GEN;
S_R10(&((*(R21 *)rt_nil_check(l_R_211))).f_NAME, r_GEN_NAME(), 0);
{ R21 * rv214 = l_R_211;
return rv214; }
}
S_R10(&((*(R21 *)rt_nil_check(l_R_211))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R21 * rv215 = l_R_211;
return rv215; }
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_211))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
{ R21 * rv216 = l_R_211;
return rv216; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end217;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R21 * l_VH_218; memset(&l_VH_218, 0, sizeof l_VH_218);
l_VH_218 = NULL;
R21 * l_VT_219; memset(&l_VT_219, 0, sizeof l_VT_219);
l_VT_219 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_V_221; memset(&l_V_221, 0, sizeof l_V_221);
l_V_221 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_V_221))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R21 *)rt_nil_check(l_V_221))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_221, &l_VH_218, &l_VT_219);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end220;
} L_end220: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_211))).f_B = l_VH_218;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_212, &l_TAIL_213);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end217: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_211))).f_A = l_HEAD_212;
{ R21 * rv222 = l_R_211;
return rv222; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_NAME(void) { RT_B_TICK(); 
R10 l_T_223; memset(&l_T_223, 0, sizeof l_T_223);
S_R10(&l_T_223, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_223).f_LEN == ((rt_int)1LL)))
{
{ R10 rv224 = r_NO_TEXT();
return rv224; }
}
{ R10 rv225 = r_MKN(rt_b_slice(r_STR(l_T_223, (l_T_223).f_LEN), ((rt_int)1LL), rt_sub((l_T_223).f_LEN, ((rt_int)1LL))));
return rv225; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R21 * l_N_226; memset(&l_N_226, 0, sizeof l_N_226);
if (r_IS_KIND(g_K_GEN))
{
{
R10 l_T_227; memset(&l_T_227, 0, sizeof l_T_227);
S_R10(&l_T_227, (r_CUR()).f_TX, 0);
if (((l_T_227).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R21 * rv228 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv228; }
}
}
l_N_226 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_226))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_226))).f_C = r_PARSE_REP();
}
{ R21 * rv229 = l_N_226;
return rv229; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv230 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv230; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R21 * rv231 = r_PARSE_TYPE_SPEC();
return rv231; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R21 * rv232 = r_PARSE_TYPE_SPEC();
return rv232; }
}
l_N_226 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R21 * rv233 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_226));
return rv233; }
}
{ R21 * rv234 = l_N_226;
return rv234; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPR_TO_TS(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_235; memset(&l_N_235, 0, sizeof l_N_235);
if ((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R21 * rv236 = p_E;
return rv236; }
}
l_N_235 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_235))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R21 * rv237 = l_N_235;
return rv237; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_235))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_235))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R21 * rv238 = l_N_235;
return rv238; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R21 *)rt_nil_check(l_N_235))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_235))).f_E = p_E;
{ R21 * rv239 = l_N_235;
return rv239; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_235 = r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R21 *)rt_nil_check(l_N_235))).f_KIND == g_TS_NAME)) || (!(((*(R21 *)rt_nil_check(l_N_235))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R21 *)rt_nil_check(l_N_235))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_235))).f_B))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_235))).f_B))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_C;
{ R21 * rv240 = l_N_235;
return rv240; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
rt_raise(RT_X_INIT);
}
static R21 * r_TYPE_SPEC_TAIL(R21 * p_N) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
((*(R21 *)rt_nil_check(p_N))).f_B = r_PARSE_RANGE();
}
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(p_N))).f_C = r_PARSE_REP();
}
{ R21 * rv241 = p_N;
return rv241; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_242; memset(&l_N_242, 0, sizeof l_N_242);
R21 * l_HEAD_243; memset(&l_HEAD_243, 0, sizeof l_HEAD_243);
l_HEAD_243 = NULL;
R21 * l_TAIL_244; memset(&l_TAIL_244, 0, sizeof l_TAIL_244);
l_TAIL_244 = NULL;
rt_int l_LINE_245; memset(&l_LINE_245, 0, sizeof l_LINE_245);
l_LINE_245 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_242 = r_NEW_NODE(g_TS_ARRAY, l_LINE_245);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_247; memset(&l_R_247, 0, sizeof l_R_247);
l_R_247 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_247))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_247))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_247, &l_HEAD_243, &l_TAIL_244);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end246;
} L_end246: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_242))).f_A = l_HEAD_243;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_242))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_242))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv248 = l_N_242;
return rv248; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_242 = r_NEW_NODE(g_TS_RECORD, l_LINE_245);
((*(R21 *)rt_nil_check(l_N_242))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_242))).f_D = r_PARSE_REP();
}
{ R21 * rv249 = l_N_242;
return rv249; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv250 = r_PARSE_TYPE_ARG();
return rv250; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_242 = r_NEW_NODE(g_TS_ENUM, l_LINE_245);
((*(R21 *)rt_nil_check(l_N_242))).f_A = r_PARSE_LITERALS();
{ R21 * rv251 = r_TYPE_SPEC_TAIL(l_N_242);
return rv251; }
}
l_N_242 = r_NEW_NODE(g_TS_NAME, l_LINE_245);
S_R10(&((*(R21 *)rt_nil_check(l_N_242))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R21 * l_X_252; memset(&l_X_252, 0, sizeof l_X_252);
l_X_252 = r_NEW_NODE(g_N_NAME, l_LINE_245);
S_R10(&((*(R21 *)rt_nil_check(l_X_252))).f_NAME, ((*(R21 *)rt_nil_check(l_N_242))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end253;
{
r_SKIP();
{
R21 * l_F_254; memset(&l_F_254, 0, sizeof l_F_254);
l_F_254 = r_NEW_NODE(g_N_FIELD, l_LINE_245);
((*(R21 *)rt_nil_check(l_F_254))).f_A = l_X_252;
S_R10(&((*(R21 *)rt_nil_check(l_F_254))).f_NAME, r_IDENT(), 0);
l_X_252 = l_F_254;
}
}
RT_B_TICK();
} L_end253: ;
((*(R21 *)rt_nil_check(l_N_242))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_242))).f_E = l_X_252;
{ R21 * rv255 = r_TYPE_SPEC_TAIL(l_N_242);
return rv255; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_242))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_242))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_242))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_242))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_242))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_242))).f_A = r_PARSE_LITERALS();
{ R21 * rv256 = r_TYPE_SPEC_TAIL(l_N_242);
return rv256; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_242))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_243, &l_TAIL_244);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_243, &l_TAIL_244);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end257;
} L_end257: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_242))).f_A = l_HEAD_243;
}
{ R21 * rv258 = r_TYPE_SPEC_TAIL(l_N_242);
return rv258; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_259; memset(&l_HEAD_259, 0, sizeof l_HEAD_259);
l_HEAD_259 = NULL;
R21 * l_TAIL_260; memset(&l_TAIL_260, 0, sizeof l_TAIL_260);
l_TAIL_260 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_262; memset(&l_L_262, 0, sizeof l_L_262);
l_L_262 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_262))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_262, &l_HEAD_259, &l_TAIL_260);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end261;
} L_end261: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv263 = l_HEAD_259;
return rv263; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_264; memset(&l_HEAD_264, 0, sizeof l_HEAD_264);
l_HEAD_264 = NULL;
R21 * l_TAIL_265; memset(&l_TAIL_265, 0, sizeof l_TAIL_265);
l_TAIL_265 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_267; memset(&l_F_267, 0, sizeof l_F_267);
l_F_267 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_267))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_267))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_267, &l_HEAD_264, &l_TAIL_265);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_268; memset(&l_V_268, 0, sizeof l_V_268);
l_V_268 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_269; memset(&l_VH_269, 0, sizeof l_VH_269);
l_VH_269 = NULL;
R21 * l_VT_270; memset(&l_VT_270, 0, sizeof l_VT_270);
l_VT_270 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_268))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end271;
{
{
R21 * l_S_272; memset(&l_S_272, 0, sizeof l_S_272);
l_S_272 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_273; memset(&l_LH_273, 0, sizeof l_LH_273);
l_LH_273 = NULL;
R21 * l_LT_274; memset(&l_LT_274, 0, sizeof l_LT_274);
l_LT_274 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_273, &l_LT_274);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end275;
} L_end275: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_272))).f_A = l_LH_273;
((*(R21 *)rt_nil_check(l_S_272))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_272, &l_VH_269, &l_VT_270);
}
}
RT_B_TICK();
} L_end271: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_268))).f_A = l_VH_269;
r_ADD_LIST(l_V_268, &l_HEAD_264, &l_TAIL_265);
}
}
else
{
goto L_end266;
}
}
RT_B_TICK();
} L_end266: ;
{ R21 * rv276 = l_HEAD_264;
return rv276; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_277; memset(&l_R_277, 0, sizeof l_R_277);
l_R_277 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_277))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_277))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_277))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_277))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_277))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv278 = l_R_277;
return rv278; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_279; memset(&l_DEPTH_279, 0, sizeof l_DEPTH_279);
l_DEPTH_279 = ((rt_int)0LL);
rt_int l_K_280; memset(&l_K_280, 0, sizeof l_K_280);
l_K_280 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_282; memset(&l_T_282, 0, sizeof l_T_282);
S_R9(&l_T_282, r_AHEAD(l_K_280), 0);
if (((l_T_282).f_KIND == g_K_EOF))
{
{ rt_int rv283 = 0;
return rv283; }
}
if (((l_T_282).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_282).f_TX, rt_str("(", 1)) || r_TEQS((l_T_282).f_TX, rt_str("[", 1))))
{
l_DEPTH_279 = rt_add(l_DEPTH_279, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_282).f_TX, rt_str(")", 1)) || r_TEQS((l_T_282).f_TX, rt_str("]", 1))))
{
l_DEPTH_279 = rt_sub(l_DEPTH_279, ((rt_int)1LL));
if ((l_DEPTH_279 == ((rt_int)0LL)))
{
{ rt_int rv284 = 0;
return rv284; }
}
}
else if (((l_DEPTH_279 == ((rt_int)1LL)) && ((r_TEQS((l_T_282).f_TX, rt_str(":", 1)) || r_TEQS((l_T_282).f_TX, rt_str(",", 1))))))
{
{ rt_int rv285 = r_TEQS((l_T_282).f_TX, rt_str(":", 1));
return rv285; }
}
}
}
l_K_280 = rt_add(l_K_280, ((rt_int)1LL));
}
RT_B_TICK();
} L_end281: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_286; memset(&l_HEAD_286, 0, sizeof l_HEAD_286);
l_HEAD_286 = NULL;
R21 * l_TAIL_287; memset(&l_TAIL_287, 0, sizeof l_TAIL_287);
l_TAIL_287 = NULL;
rt_int l_MODE_288; memset(&l_MODE_288, 0, sizeof l_MODE_288);
l_MODE_288 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end289;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_288 = rt_add(l_MODE_288, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_290; memset(&l_NAMES_290, 0, sizeof l_NAMES_290);
l_NAMES_290 = r_IDENT_LIST();
R21 * l_TS_291; memset(&l_TS_291, 0, sizeof l_TS_291);
l_TS_291 = NULL;
R21 * l_P_292; memset(&l_P_292, 0, sizeof l_P_292);
l_P_292 = l_NAMES_290;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_291 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_291 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_292 == NULL)) goto L_end293;
{
{
R21 * l_PN_294; memset(&l_PN_294, 0, sizeof l_PN_294);
l_PN_294 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_292))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_294))).f_NAME, ((*(R21 *)rt_nil_check(l_P_292))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_294))).f_IV = l_MODE_288;
((*(R21 *)rt_nil_check(l_PN_294))).f_B = l_TS_291;
r_ADD_LIST(l_PN_294, &l_HEAD_286, &l_TAIL_287);
}
l_P_292 = ((*(R21 *)rt_nil_check(l_P_292))).f_NEXT;
}
RT_B_TICK();
} L_end293: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end289: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv295 = l_HEAD_286;
return rv295; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_296; memset(&l_R_296, 0, sizeof l_R_296);
l_R_296 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_297; memset(&l_HEAD_297, 0, sizeof l_HEAD_297);
l_HEAD_297 = NULL;
R21 * l_TAIL_298; memset(&l_TAIL_298, 0, sizeof l_TAIL_298);
l_TAIL_298 = NULL;
rt_int l_MODE_299; memset(&l_MODE_299, 0, sizeof l_MODE_299);
l_MODE_299 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_296))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end300;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_299 = rt_add(l_MODE_299, ((rt_int)1LL));
}
else
{
{
R21 * l_P_301; memset(&l_P_301, 0, sizeof l_P_301);
l_P_301 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_301))).f_IV = l_MODE_299;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_301))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_301, &l_HEAD_297, &l_TAIL_298);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end300: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_296))).f_A = l_HEAD_297;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_296))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_296))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_296))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_296))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv302 = l_R_296;
return rv302; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv303 = r_PARSE_TEMPLATE(1);
return rv303; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv304 = r_PARSE_TEMPLATE(0);
return rv304; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_305; memset(&l_HEAD_305, 0, sizeof l_HEAD_305);
l_HEAD_305 = NULL;
R21 * l_TAIL_306; memset(&l_TAIL_306, 0, sizeof l_TAIL_306);
l_TAIL_306 = NULL;
for (;;) {
{
{
R21 * l_N_308; memset(&l_N_308, 0, sizeof l_N_308);
l_N_308 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_309; memset(&l_TH_309, 0, sizeof l_TH_309);
l_TH_309 = NULL;
R21 * l_TT_310; memset(&l_TT_310, 0, sizeof l_TT_310);
l_TT_310 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_308))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_312; memset(&l_T_312, 0, sizeof l_T_312);
l_T_312 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_312))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_312))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_312, &l_TH_309, &l_TT_310);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end311;
} L_end311: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_308))).f_A = l_TH_309;
r_ADD_LIST(l_N_308, &l_HEAD_305, &l_TAIL_306);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end307;
} L_end307: ;
{ R21 * rv313 = l_HEAD_305;
return rv313; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_314; memset(&l_R_314, 0, sizeof l_R_314);
l_R_314 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_315; memset(&l_H_315, 0, sizeof l_H_315);
l_H_315 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_314))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R21 *)rt_nil_check(l_R_314))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_314))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R21 *)rt_nil_check(l_R_314))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_314))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_314))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_314))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_314))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_314))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_314))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_314))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_315))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_314))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_315))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end316;
}
}
RT_B_TICK();
} L_end316: ;
((*(R21 *)rt_nil_check(l_R_314))).f_D = l_H_315;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_314))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_H_315))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end317;
{
r_SKIP();
}
RT_B_TICK();
} L_end317: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_314))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_314))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_314))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_314))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv318 = l_R_314;
return rv318; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_319; memset(&l_N_319, 0, sizeof l_N_319);
l_N_319 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_319))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_319))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_319))).f_B = p_B;
{ R21 * rv320 = l_N_319;
return rv320; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_321; memset(&l_E_321, 0, sizeof l_E_321);
l_E_321 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R21 * l_Q_322; memset(&l_Q_322, 0, sizeof l_Q_322);
l_Q_322 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_322))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_322))).f_A = l_E_321;
l_E_321 = l_Q_322;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_323; memset(&l_Q_323, 0, sizeof l_Q_323);
l_Q_323 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_321))).f_KIND == g_N_QUAL))
{
l_Q_323 = l_E_321;
}
else
{
((*(R21 *)rt_nil_check(l_Q_323))).f_A = l_E_321;
}
((*(R21 *)rt_nil_check(l_Q_323))).f_B = r_PARSE_SIMPLE();
l_E_321 = l_Q_323;
}
}
{ R21 * rv324 = l_E_321;
return rv324; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R9 l_N_325; memset(&l_N_325, 0, sizeof l_N_325);
S_R9(&l_N_325, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv326 = 0;
return rv326; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv327 = 0;
return rv327; }
}
{ rt_int rv328 = (!(((((((r_TOK_IS(l_N_325, rt_str("(", 1)) || r_TOK_IS(l_N_325, rt_str(".", 1))) || r_TOK_IS(l_N_325, rt_str(":=", 2))) || r_TOK_IS(l_N_325, rt_str(":", 1))) || r_TOK_IS(l_N_325, rt_str("$", 1))) || r_TOK_IS(l_N_325, rt_str("@", 1))) || r_TOK_IS(l_N_325, rt_str("[", 1)))));
return rv328; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_329; memset(&l_LEFT_329, 0, sizeof l_LEFT_329);
l_LEFT_329 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end330;
{
{
R9 l_T_331; memset(&l_T_331, 0, sizeof l_T_331);
S_R9(&l_T_331, r_CUR(), 0);
r_SKIP();
l_LEFT_329 = r_BIN_NODE((l_T_331).f_TX, (l_T_331).f_LINE, l_LEFT_329, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end330: ;
{ R21 * rv332 = l_LEFT_329;
return rv332; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_333; memset(&l_LEFT_333, 0, sizeof l_LEFT_333);
l_LEFT_333 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end334;
{
{
R9 l_T_335; memset(&l_T_335, 0, sizeof l_T_335);
S_R9(&l_T_335, r_CUR(), 0);
r_SKIP();
l_LEFT_333 = r_BIN_NODE((l_T_335).f_TX, (l_T_335).f_LINE, l_LEFT_333, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end334: ;
{ R21 * rv336 = l_LEFT_333;
return rv336; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_337; memset(&l_LEFT_337, 0, sizeof l_LEFT_337);
l_LEFT_337 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_339; memset(&l_T_339, 0, sizeof l_T_339);
S_R9(&l_T_339, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_337 = r_BIN_NODE((l_T_339).f_TX, (l_T_339).f_LINE, l_LEFT_337, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_340; memset(&l_N_340, 0, sizeof l_N_340);
l_N_340 = r_NEW_NODE(g_N_IN, (l_T_339).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_340))).f_A = l_LEFT_337;
((*(R21 *)rt_nil_check(l_N_340))).f_B = r_PARSE_RANGE();
l_LEFT_337 = l_N_340;
}
}
else
{
{ R21 * rv341 = l_LEFT_337;
return rv341; }
}
}
}
RT_B_TICK();
} L_end338: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_342; memset(&l_SAVED_342, 0, sizeof l_SAVED_342);
l_SAVED_342 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_343; memset(&l_LINE_343, 0, sizeof l_LINE_343);
l_LINE_343 = r_LINE_NOW();
R21 * l_N_344; memset(&l_N_344, 0, sizeof l_N_344);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv345 = NULL;
return rv345; }
}
{
R9 l_OP_346; memset(&l_OP_346, 0, sizeof l_OP_346);
S_R9(&l_OP_346, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_347; memset(&l_T_347, 0, sizeof l_T_347);
S_R10(&l_T_347, (l_OP_346).f_TX, 0);
rt_int l_FOUND_348; memset(&l_FOUND_348, 0, sizeof l_FOUND_348);
l_FOUND_348 = 0;
if (((!((l_OP_346).f_KIND == g_K_SYM)) && (!((l_OP_346).f_KIND == g_K_RES))))
{
{ R21 * rv349 = NULL;
return rv349; }
}
{ rt_int it351_lo = ((rt_int)0LL), it351_hi = rt_sub((rt_int)(p_OPS).len, (l_T_347).f_LEN);
for (rt_int it351 = it351_lo; it351 <= it351_hi; it351++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it351, rt_sub(rt_add(it351, (l_T_347).f_LEN), ((rt_int)1LL))), r_STR(l_T_347, (l_T_347).f_LEN)))
{
if (((((it351 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it351, ((rt_int)1LL)), rt_sub(it351, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it351, (l_T_347).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it351, (l_T_347).f_LEN), rt_add(it351, (l_T_347).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_348 = 1;
}
}
}
RT_B_TICK();
if (it351 == it351_hi) break;
} } L_end350: ;
if ((!l_FOUND_348))
{
{ R21 * rv352 = NULL;
return rv352; }
}
r_SKIP();
r_SKIP();
l_N_344 = r_BIN_NODE(l_T_347, l_LINE_343, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_344))).f_FL = ((rt_int)2LL);
{ R21 * rv353 = l_N_344;
return rv353; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_344))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_344))).f_FL = ((rt_int)1LL);
{ R21 * rv354 = l_N_344;
return rv354; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_342;
{ R21 * rv355 = NULL;
return rv355; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_356; memset(&l_LEFT_356, 0, sizeof l_LEFT_356);
l_LEFT_356 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_358; memset(&l_T_358, 0, sizeof l_T_358);
S_R9(&l_T_358, r_CUR(), 0);
r_SKIP();
l_LEFT_356 = r_BIN_NODE((l_T_358).f_TX, (l_T_358).f_LINE, l_LEFT_356, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_359; memset(&l_N_359, 0, sizeof l_N_359);
l_N_359 = r_TRY_SCALED(l_LEFT_356, rt_str("+ -", 3));
if ((l_N_359 == NULL))
{
{ R21 * rv360 = l_LEFT_356;
return rv360; }
}
((*(R21 *)rt_nil_check(l_N_359))).f_B = r_PARSE_TERM();
l_LEFT_356 = l_N_359;
}
}
}
RT_B_TICK();
} L_end357: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_361; memset(&l_LEFT_361, 0, sizeof l_LEFT_361);
l_LEFT_361 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_363; memset(&l_T_363, 0, sizeof l_T_363);
S_R9(&l_T_363, r_CUR(), 0);
r_SKIP();
l_LEFT_361 = r_BIN_NODE((l_T_363).f_TX, (l_T_363).f_LINE, l_LEFT_361, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_364; memset(&l_N_364, 0, sizeof l_N_364);
l_N_364 = r_TRY_SCALED(l_LEFT_361, rt_str("* / // MOD", 10));
if ((l_N_364 == NULL))
{
{ R21 * rv365 = l_LEFT_361;
return rv365; }
}
((*(R21 *)rt_nil_check(l_N_364))).f_B = r_PARSE_FACTOR();
l_LEFT_361 = l_N_364;
}
}
}
RT_B_TICK();
} L_end362: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_366; memset(&l_LEFT_366, 0, sizeof l_LEFT_366);
l_LEFT_366 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_368; memset(&l_T_368, 0, sizeof l_T_368);
S_R9(&l_T_368, r_CUR(), 0);
r_SKIP();
l_LEFT_366 = r_BIN_NODE((l_T_368).f_TX, (l_T_368).f_LINE, l_LEFT_366, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_369; memset(&l_N_369, 0, sizeof l_N_369);
l_N_369 = r_TRY_SCALED(l_LEFT_366, rt_str("**", 2));
if ((l_N_369 == NULL))
{
{ R21 * rv370 = l_LEFT_366;
return rv370; }
}
((*(R21 *)rt_nil_check(l_N_369))).f_B = r_PARSE_SECONDARY();
l_LEFT_366 = l_N_369;
}
}
}
RT_B_TICK();
} L_end367: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_371; memset(&l_T_371, 0, sizeof l_T_371);
S_R9(&l_T_371, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_372; memset(&l_N_372, 0, sizeof l_N_372);
l_N_372 = r_NEW_NODE(g_N_UNOP, (l_T_371).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_372))).f_NAME, (l_T_371).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_372))).f_A = r_PARSE_POSTFIX();
{ R21 * rv373 = l_N_372;
return rv373; }
}
}
{ R21 * rv374 = r_PARSE_POSTFIX();
return rv374; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_375; memset(&l_HEAD_375, 0, sizeof l_HEAD_375);
l_HEAD_375 = NULL;
R21 * l_TAIL_376; memset(&l_TAIL_376, 0, sizeof l_TAIL_376);
l_TAIL_376 = NULL;
rt_int l_GROUP_377; memset(&l_GROUP_377, 0, sizeof l_GROUP_377);
l_GROUP_377 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end378;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_377) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_375;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_375;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_377 = rt_add(l_GROUP_377, ((rt_int)1LL));
l_HEAD_375 = NULL;
l_TAIL_376 = NULL;
}
else
{
if ((l_GROUP_377 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_375, &l_TAIL_376);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_375, &l_TAIL_376);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end378: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_377) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_375;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_375;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_375;
}
break;
}
{ R21 * rv379 = p_N;
return rv379; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_380; memset(&l_E_380, 0, sizeof l_E_380);
l_E_380 = r_PARSE_ATOM();
R21 * l_N_381; memset(&l_N_381, 0, sizeof l_N_381);
for (;;) {
{
{
rt_int l_LINE_383; memset(&l_LINE_383, 0, sizeof l_LINE_383);
l_LINE_383 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_380))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_380))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_380))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_380))).f_KIND = g_N_APPLY;
l_E_380 = r_PARSE_ARGS(l_E_380);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_381 = r_NEW_NODE(g_N_INDEX, l_LINE_383);
l_N_381 = r_PARSE_ARGS(l_N_381);
((*(R21 *)rt_nil_check(l_N_381))).f_B = ((*(R21 *)rt_nil_check(l_N_381))).f_A;
((*(R21 *)rt_nil_check(l_N_381))).f_A = l_E_380;
l_E_380 = l_N_381;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_381 = r_NEW_NODE(g_N_FIELD, l_LINE_383);
((*(R21 *)rt_nil_check(l_N_381))).f_A = l_E_380;
S_R10(&((*(R21 *)rt_nil_check(l_N_381))).f_NAME, r_IDENT(), 0);
l_E_380 = l_N_381;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_381 = r_NEW_NODE(g_N_DEREF, l_LINE_383);
((*(R21 *)rt_nil_check(l_N_381))).f_A = l_E_380;
l_E_380 = l_N_381;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_381 = r_NEW_NODE(g_N_SUBSTR, l_LINE_383);
((*(R21 *)rt_nil_check(l_N_381))).f_A = l_E_380;
((*(R21 *)rt_nil_check(l_N_381))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_381))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_380 = l_N_381;
}
else
{
{ R21 * rv384 = l_E_380;
return rv384; }
}
}
}
RT_B_TICK();
} L_end382: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_385; memset(&l_AT_385, 0, sizeof l_AT_385);
l_AT_385 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_386; memset(&l_N_386, 0, sizeof l_N_386);
l_N_386 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_387; memset(&l_R_387, 0, sizeof l_R_387);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end388;
{
{
R10 l_T_389; memset(&l_T_389, 0, sizeof l_T_389);
S_R10(&l_T_389, (r_CUR()).f_TX, 0);
rstr l_S_390; memset(&l_S_390, 0, sizeof l_S_390);
l_S_390 = rt_b_str_new((l_T_389).f_LEN, 0);
rt_b_assign(&l_S_390, r_STR(l_T_389, (l_T_389).f_LEN));
{ rt_int it392_lo = ((rt_int)0LL), it392_hi = rt_sub((l_T_389).f_LEN, ((rt_int)1LL));
for (rt_int it392 = it392_lo; it392 <= it392_hi; it392++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_390, it392, it392), rt_str(" ", 1))))
{
{
rt_int l_C_393; memset(&l_C_393, 0, sizeof l_C_393);
l_C_393 = r_CODE_OF(rt_b_slice(l_S_390, it392, it392));
rt_int l_V_394; memset(&l_V_394, 0, sizeof l_V_394);
l_V_394 = rt_sub(l_C_393, ((rt_int)48LL));
rt_int l_P_395; memset(&l_P_395, 0, sizeof l_P_395);
l_P_395 = ((rt_int)1LL);
if ((l_C_393 >= ((rt_int)65LL)))
{
l_V_394 = rt_sub(l_C_393, ((rt_int)55LL));
}
{ rt_int it397_lo = ((rt_int)1LL), it397_hi = p_BITS_PER;
for (rt_int it397 = it397_lo; it397 <= it397_hi; it397++) {
{
l_P_395 = rt_mul(l_P_395, ((rt_int)2LL));
}
RT_B_TICK();
if (it397 == it397_hi) break;
} } L_end396: ;
if (((l_V_394 < ((rt_int)0LL)) || (l_V_394 >= l_P_395)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it399_lo = ((rt_int)1LL), it399_hi = p_BITS_PER;
for (rt_int it399 = it399_lo; it399 <= it399_hi; it399++) {
{
l_P_395 = rt_quot(l_P_395, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_394, l_P_395)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_387, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_387, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it399 == it399_hi) break;
} } L_end398: ;
}
}
}
RT_B_TICK();
if (it392 == it392_hi) break;
} } L_end391: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end388: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_386))).f_NAME, ({ R10 rc400; memset(&rc400, 0, sizeof rc400);  rc400.f_AT = l_AT_385; rc400.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_385); rc400.f_H = rt_neg(((rt_int)1LL)); rc400; }), 0);
{ R21 * rv401 = l_N_386;
return rv401; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_402; memset(&l_T_402, 0, sizeof l_T_402);
S_R9(&l_T_402, r_CUR(), 0);
R21 * l_N_403; memset(&l_N_403, 0, sizeof l_N_403);
if (((l_T_402).f_KIND == g_K_NUM))
{
l_N_403 = r_NEW_NODE(g_N_INT, (l_T_402).f_LINE);
((*(R21 *)rt_nil_check(l_N_403))).f_IV = (l_T_402).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_403))).f_NAME, (l_T_402).f_TX, 0);
r_SKIP();
{ R21 * rv404 = l_N_403;
return rv404; }
}
if ((((l_T_402).f_KIND == g_K_REAL) || ((l_T_402).f_KIND == g_K_FIX)))
{
l_N_403 = r_NEW_NODE(g_N_REAL, (l_T_402).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_403))).f_NAME, (l_T_402).f_TX, 0);
if (((l_T_402).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_403))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_403))).f_IV = (l_T_402).f_IV;
}
r_SKIP();
{ R21 * rv405 = l_N_403;
return rv405; }
}
if (((l_T_402).f_KIND == g_K_GEN))
{
{ R21 * rv406 = r_PARSE_TYPE_ARG();
return rv406; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_402, rt_str("BIN", 3)))
{
{ R21 * rv407 = r_PARSE_BITS(((rt_int)1LL), (l_T_402).f_LINE);
return rv407; }
}
else if (r_TOK_IS(l_T_402, rt_str("OCT", 3)))
{
{ R21 * rv408 = r_PARSE_BITS(((rt_int)3LL), (l_T_402).f_LINE);
return rv408; }
}
{ R21 * rv409 = r_PARSE_BITS(((rt_int)4LL), (l_T_402).f_LINE);
return rv409; }
}
if ((((l_T_402).f_KIND == g_K_STR) || ((l_T_402).f_KIND == g_K_ENUM)))
{
{ R21 * rv410 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv410; }
}
if ((((l_T_402).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R21 * rv411 = r_PARSE_CHARSTRING((l_T_402).f_TX);
return rv411; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_403 = r_NEW_NODE(g_N_BOOL, (l_T_402).f_LINE);
((*(R21 *)rt_nil_check(l_N_403))).f_IV = ((rt_int)1LL);
{ R21 * rv412 = l_N_403;
return rv412; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv413 = r_NEW_NODE(g_N_BOOL, (l_T_402).f_LINE);
return rv413; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv414 = r_NEW_NODE(g_N_NIL, (l_T_402).f_LINE);
return rv414; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv415 = r_NEW_NODE(g_N_ANY, (l_T_402).f_LINE);
return rv415; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_416; memset(&l_TS_416, 0, sizeof l_TS_416);
l_TS_416 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_403 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_403))).f_B = l_TS_416;
{ R21 * rv417 = l_N_403;
return rv417; }
}
l_N_403 = r_NEW_NODE(g_N_TYPESPEC, (l_T_402).f_LINE);
((*(R21 *)rt_nil_check(l_N_403))).f_A = l_TS_416;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_403))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv418 = l_N_403;
return rv418; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_419; memset(&l_HEAD_419, 0, sizeof l_HEAD_419);
l_HEAD_419 = NULL;
R21 * l_TAIL_420; memset(&l_TAIL_420, 0, sizeof l_TAIL_420);
l_TAIL_420 = NULL;
r_SKIP();
for (;;) {
{
l_N_403 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_403))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_403))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_403, &l_HEAD_419, &l_TAIL_420);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end421;
} L_end421: ;
r_EXPECT(rt_str(")", 1));
l_N_403 = r_NEW_NODE(g_N_RECCONS, (l_T_402).f_LINE);
((*(R21 *)rt_nil_check(l_N_403))).f_A = l_HEAD_419;
{ R21 * rv422 = l_N_403;
return rv422; }
}
}
r_SKIP();
{
R21 * l_E_423; memset(&l_E_423, 0, sizeof l_E_423);
l_E_423 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_424; memset(&l_HEAD_424, 0, sizeof l_HEAD_424);
l_HEAD_424 = NULL;
R21 * l_TAIL_425; memset(&l_TAIL_425, 0, sizeof l_TAIL_425);
l_TAIL_425 = NULL;
r_ADD_LIST(l_E_423, &l_HEAD_424, &l_TAIL_425);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end426;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_424, &l_TAIL_425);
}
RT_B_TICK();
} L_end426: ;
r_EXPECT(rt_str(")", 1));
l_N_403 = r_NEW_NODE(g_N_ARRCONS, (l_T_402).f_LINE);
((*(R21 *)rt_nil_check(l_N_403))).f_A = l_HEAD_424;
{ R21 * rv427 = l_N_403;
return rv427; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_403 = r_NEW_NODE(g_N_PAREN, (l_T_402).f_LINE);
((*(R21 *)rt_nil_check(l_N_403))).f_A = l_E_423;
{ R21 * rv428 = l_N_403;
return rv428; }
}
}
if (((l_T_402).f_KIND == g_K_ID))
{
l_N_403 = r_NEW_NODE(g_N_NAME, (l_T_402).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_403))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_403))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_403))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_403))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_403))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_403))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv429 = l_N_403;
return rv429; }
}
r_FAILT((l_T_402).f_LINE, rt_str("an expression expected, not ", 28), (l_T_402).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_430; memset(&l_LINE_430, 0, sizeof l_LINE_430);
l_LINE_430 = r_LINE_NOW();
R21 * l_HEAD_431; memset(&l_HEAD_431, 0, sizeof l_HEAD_431);
l_HEAD_431 = NULL;
R21 * l_TAIL_432; memset(&l_TAIL_432, 0, sizeof l_TAIL_432);
l_TAIL_432 = NULL;
rt_int l_STRINGS_433; memset(&l_STRINGS_433, 0, sizeof l_STRINGS_433);
l_STRINGS_433 = ((rt_int)0LL);
R21 * l_N_434; memset(&l_N_434, 0, sizeof l_N_434);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end435;
{
l_N_434 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_434))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_434))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_434))).f_IV == g_K_STR))
{
l_STRINGS_433 = rt_add(l_STRINGS_433, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_434, &l_HEAD_431, &l_TAIL_432);
}
RT_B_TICK();
} L_end435: ;
if ((((l_STRINGS_433 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R21 *)rt_nil_check(l_HEAD_431))).f_NEXT == NULL)))
{
((*(R21 *)rt_nil_check(l_HEAD_431))).f_KIND = g_N_ENUMLIT;
{ R21 * rv436 = l_HEAD_431;
return rv436; }
}
l_N_434 = r_NEW_NODE(g_N_STR, l_LINE_430);
((*(R21 *)rt_nil_check(l_N_434))).f_A = l_HEAD_431;
S_R10(&((*(R21 *)rt_nil_check(l_N_434))).f_NAME, p_CHARSET, 0);
{ R21 * rv437 = l_N_434;
return rv437; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv438 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv438; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_439; memset(&l_HEAD_439, 0, sizeof l_HEAD_439);
l_HEAD_439 = NULL;
R21 * l_TAIL_440; memset(&l_TAIL_440, 0, sizeof l_TAIL_440);
l_TAIL_440 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end441;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_439, &l_TAIL_440);
}
RT_B_TICK();
} L_end441: ;
{ R21 * rv442 = l_HEAD_439;
return rv442; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_443; memset(&l_HEAD_443, 0, sizeof l_HEAD_443);
l_HEAD_443 = NULL;
R21 * l_TAIL_444; memset(&l_TAIL_444, 0, sizeof l_TAIL_444);
l_TAIL_444 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end445;
{
{
R21 * l_H_446; memset(&l_H_446, 0, sizeof l_H_446);
l_H_446 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_446))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_446))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_446, &l_HEAD_443, &l_TAIL_444);
}
}
RT_B_TICK();
} L_end445: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv447 = l_HEAD_443;
return rv447; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_448; memset(&l_S_448, 0, sizeof l_S_448);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_448 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_448))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_STATEMENT();
{ R21 * rv449 = l_S_448;
return rv449; }
}
l_S_448 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_450; memset(&l_X_450, 0, sizeof l_X_450);
l_X_450 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_450))).f_A = l_S_448;
((*(R21 *)rt_nil_check(l_X_450))).f_B = r_PARSE_HANDLERS();
{ R21 * rv451 = l_X_450;
return rv451; }
}
}
{ R21 * rv452 = l_S_448;
return rv452; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_END(rstr p_WORD) { RT_B_TICK(); 
r_EXPECT(rt_str("END", 3));
r_EXPECT(p_WORD);
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
}
static R21 * r_PARSE_UNLABELED(void) { RT_B_TICK(); 
rt_int l_LINE_453; memset(&l_LINE_453, 0, sizeof l_LINE_453);
l_LINE_453 = r_LINE_NOW();
R21 * l_S_454; memset(&l_S_454, 0, sizeof l_S_454);
R21 * l_T_455; memset(&l_T_455, 0, sizeof l_T_455);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv456 = r_NEW_NODE(g_N_NULL, l_LINE_453);
return rv456; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv457 = r_PARSE_IF();
return rv457; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv458 = r_PARSE_CASE();
return rv458; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv459 = r_PARSE_LOOP();
return rv459; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv460 = r_PARSE_PAR();
return rv460; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_454 = r_NEW_NODE(g_N_BLOCK, l_LINE_453);
((*(R21 *)rt_nil_check(l_S_454))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv461 = l_S_454;
return rv461; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_454 = r_NEW_NODE(g_N_WITH, l_LINE_453);
S_R10(&((*(R21 *)rt_nil_check(l_S_454))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_454))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_454))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_454))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_454))).f_B = r_PARSE_UNLABELED();
{ R21 * rv462 = l_S_454;
return rv462; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv463 = r_NEW_NODE(g_N_EXIT, l_LINE_453);
return rv463; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_454 = r_NEW_NODE(g_N_GOTO, l_LINE_453);
S_R10(&((*(R21 *)rt_nil_check(l_S_454))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv464 = l_S_454;
return rv464; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_454 = r_NEW_NODE(g_N_RETURN, l_LINE_453);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_454))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv465 = l_S_454;
return rv465; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_454 = r_NEW_NODE(g_N_SIGNAL, l_LINE_453);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_454))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv466 = l_S_454;
return rv466; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_454 = r_NEW_NODE(g_N_ASSERT, l_LINE_453);
((*(R21 *)rt_nil_check(l_S_454))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv467 = l_S_454;
return rv467; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_454 = r_NEW_NODE(g_N_TERMINATE, l_LINE_453);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_454))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv468 = l_S_454;
return rv468; }
}
l_T_455 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_453, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_454 = r_NEW_NODE(g_N_ASSIGN, l_LINE_453);
((*(R21 *)rt_nil_check(l_S_454))).f_A = l_T_455;
((*(R21 *)rt_nil_check(l_S_454))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv469 = l_S_454;
return rv469; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_455))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_455))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_455))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_455))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_453, rt_str("a statement expected", 20));
}
{ R21 * rv470 = l_T_455;
return rv470; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_471; memset(&l_S_471, 0, sizeof l_S_471);
l_S_471 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_472; memset(&l_HEAD_472, 0, sizeof l_HEAD_472);
l_HEAD_472 = NULL;
R21 * l_TAIL_473; memset(&l_TAIL_473, 0, sizeof l_TAIL_473);
l_TAIL_473 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_475; memset(&l_ARM_475, 0, sizeof l_ARM_475);
l_ARM_475 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_475))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_475))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_475, &l_HEAD_472, &l_TAIL_473);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end474;
} L_end474: ;
((*(R21 *)rt_nil_check(l_S_471))).f_A = l_HEAD_472;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_471))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv476 = l_S_471;
return rv476; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv477 = r_PARSE_RANGE();
return rv477; }
}
{ R21 * rv478 = r_PARSE_EXPR();
return rv478; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_479; memset(&l_S_479, 0, sizeof l_S_479);
l_S_479 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_480; memset(&l_HEAD_480, 0, sizeof l_HEAD_480);
l_HEAD_480 = NULL;
R21 * l_TAIL_481; memset(&l_TAIL_481, 0, sizeof l_TAIL_481);
l_TAIL_481 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_479))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end482;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_479))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_479))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_483; memset(&l_ARM_483, 0, sizeof l_ARM_483);
l_ARM_483 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_484; memset(&l_LH_484, 0, sizeof l_LH_484);
l_LH_484 = NULL;
R21 * l_LT_485; memset(&l_LT_485, 0, sizeof l_LT_485);
l_LT_485 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_484, &l_LT_485);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end486;
} L_end486: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_483))).f_A = l_LH_484;
((*(R21 *)rt_nil_check(l_ARM_483))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_483))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_483, &l_HEAD_480, &l_TAIL_481);
}
}
}
RT_B_TICK();
} L_end482: ;
((*(R21 *)rt_nil_check(l_S_479))).f_B = l_HEAD_480;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv487 = l_S_479;
return rv487; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_488; memset(&l_S_488, 0, sizeof l_S_488);
l_S_488 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_488))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_488))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_488))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_488))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_488))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_488))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv489 = l_S_488;
return rv489; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_488))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_488))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_488))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_488))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv490 = l_S_488;
return rv490; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_491; memset(&l_S_491, 0, sizeof l_S_491);
l_S_491 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_492; memset(&l_HEAD_492, 0, sizeof l_HEAD_492);
l_HEAD_492 = NULL;
R21 * l_TAIL_493; memset(&l_TAIL_493, 0, sizeof l_TAIL_493);
l_TAIL_493 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end494;
{
{
R21 * l_P_495; memset(&l_P_495, 0, sizeof l_P_495);
l_P_495 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_496; memset(&l_H_496, 0, sizeof l_H_496);
l_H_496 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_495))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_495))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_495))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_495))).f_E))).f_A = l_H_496;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_495))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_495))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_495))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_495))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_495))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_496))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_496))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end497;
}
}
RT_B_TICK();
} L_end497: ;
if ((!(((*(R21 *)rt_nil_check(l_P_495))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R21 *)rt_nil_check(l_P_495))).f_D, l_H_496);
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_495))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_495))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_495, &l_HEAD_492, &l_TAIL_493);
}
}
RT_B_TICK();
} L_end494: ;
((*(R21 *)rt_nil_check(l_S_491))).f_A = l_HEAD_492;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv498 = l_S_491;
return rv498; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H) { RT_B_TICK(); 
R21 * l_R_499; memset(&l_R_499, 0, sizeof l_R_499);
l_R_499 = p_E;
for (;;) {
if (((((*(R21 *)rt_nil_check(l_R_499))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_499))).f_KIND == g_N_APPLY))) goto L_end500;
{
if (((!(((*(R21 *)rt_nil_check(l_R_499))).f_KIND == g_N_INDEX)) && (!(((*(R21 *)rt_nil_check(l_R_499))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_499 = ((*(R21 *)rt_nil_check(l_R_499))).f_A;
}
RT_B_TICK();
} L_end500: ;
if ((((*(R21 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R21 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
{
R21 * l_P_501; memset(&l_P_501, 0, sizeof l_P_501);
l_P_501 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_501 == NULL)) goto L_end502;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_501))).f_NAME, ((*(R21 *)rt_nil_check(l_R_499))).f_NAME))
{
return;
}
l_P_501 = ((*(R21 *)rt_nil_check(l_P_501))).f_NEXT;
}
RT_B_TICK();
} L_end502: ;
l_P_501 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_501 == NULL)) goto L_end503;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_501))).f_NAME, ((*(R21 *)rt_nil_check(l_R_499))).f_NAME))
{
return;
}
l_P_501 = ((*(R21 *)rt_nil_check(l_P_501))).f_NEXT;
}
RT_B_TICK();
} L_end503: ;
}
{
R21 * l_N_504; memset(&l_N_504, 0, sizeof l_N_504);
l_N_504 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_504))).f_NAME, ((*(R21 *)rt_nil_check(l_R_499))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_504))).f_NEXT = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B = l_N_504;
}
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv505 = ({ R10 rc506; memset(&rc506, 0, sizeof rc506);  rc506.f_AT = ((rt_int)0LL); rc506.f_LEN = ((rt_int)0LL); rc506.f_H = ((rt_int)0LL); rc506; });
return rv505; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv507 = ({ R23 rc508; memset(&rc508, 0, sizeof rc508);  rc508.f_OK = 0; rc508.f_V = ((rt_int)0LL); rc508; });
return rv507; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv509 = ({ R23 rc510; memset(&rc510, 0, sizeof rc510);  rc510.f_OK = 1; rc510.f_V = p_V; rc510; });
return rv509; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_511; memset(&l_Y_511, 0, sizeof l_Y_511);
l_Y_511 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_512; memset(&l_LEVEL_512, 0, sizeof l_LEVEL_512);
l_LEVEL_512 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_512 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_511)), ({ R12 rc513; memset(&rc513, 0, sizeof rc513);  rc513.f_KIND = p_KIND; rc513.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc513.f_LEVEL = l_LEVEL_512; S_R10(&rc513.f_NAME, p_NAME, 0); rc513.f_T = NULL; S_R10(&rc513.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc513.f_FIELD, r_NO_TEXT(), 0); rc513.f_INPUT = 0; rc513.f_BYREF = 0; rc513.f_HASMV = 0; rc513.f_MV = ((rt_int)0LL); rc513.f_TS = NULL; rc513.f_BUSY = 0; S_R10(&rc513.f_FWD, r_NO_TEXT(), 0); rc513.f_PARAMS = NULL; rc513.f_RESULT = NULL; rc513.f_DECL = NULL; S_R10(&rc513.f_PREFIX, r_NO_TEXT(), 0); rc513.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc513.f_EXPORTED = 0; rc513.f_GENERIC = 0; rc513.f_FRAMED = 0; rc513.f_USES = NULL; rc513.f_INSTANCES = NULL; rc513.f_BINDINGS = NULL; rc513.f_ORIG = NULL; rc513.f_MEMBERS = NULL; rc513.f_SAVED = NULL; rc513.f_OWNER = r_CUR_OWNER(); rc513.f_WITHV = ((rt_int)0LL); rc513.f_CHAIN = NULL; rc513.f_SNEXT = NULL; rc513; }), 0);
{ R12 * rv514 = l_Y_511;
return rv514; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv515 = ((rt_int)0LL);
return rv515; }
}
{ rt_int rv516 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv516; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv517 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv517; }
}
{ R12 * rv518 = p_Y;
return rv518; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv519 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv519; }
}
{ rt_int rv520 = (p_NAME).f_H;
return rv520; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_521; memset(&l_Y_521, 0, sizeof l_Y_521);
l_Y_521 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_521 == NULL)) goto L_end522;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_521))).f_NAME, p_NAME))
{
{ R12 * rv523 = l_Y_521;
return rv523; }
}
l_Y_521 = ((*(R12 *)rt_nil_check(l_Y_521))).f_CHAIN;
}
RT_B_TICK();
} L_end522: ;
{ R12 * rv524 = NULL;
return rv524; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_525; memset(&l_Y_525, 0, sizeof l_Y_525);
l_Y_525 = r_LOOKUP(p_NAME);
if ((l_Y_525 == NULL))
{
{ R12 * rv526 = NULL;
return rv526; }
}
{ R12 * rv527 = r_ORIGINAL(l_Y_525);
return rv527; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv528 = r_LOOKUP(r_MKN(p_NAME));
return rv528; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_529; memset(&l_Z_529, 0, sizeof l_Z_529);
l_Z_529 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_529 == NULL)) goto L_end530;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_529))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv531 = l_Z_529;
return rv531; }
}
l_Z_529 = ((*(R12 *)rt_nil_check(l_Z_529))).f_CHAIN;
}
RT_B_TICK();
} L_end530: ;
{ R12 * rv532 = NULL;
return rv532; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv533 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv533; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_534; memset(&l_B_534, 0, sizeof l_B_534);
l_B_534 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_535; memset(&l_OLD_535, 0, sizeof l_OLD_535);
l_OLD_535 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_535 == NULL)) goto L_end536;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_535))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end536;
}
if ((!((((r_IS_ROUTINE(l_OLD_535) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_535))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_535 = r_LOOKUP_NEXT(l_OLD_535);
}
RT_B_TICK();
} L_end536: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_534, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_534, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end537;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end537;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end537: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_538; memset(&l_B_538, 0, sizeof l_B_538);
l_B_538 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_539; memset(&l_P_539, 0, sizeof l_P_539);
l_P_539 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_538, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_539 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_538, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_539 == NULL)) goto L_end540;
{
if ((((*(R12 *)rt_nil_check(l_P_539))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_539))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_539 = ((*(R12 *)rt_nil_check(l_P_539))).f_CHAIN;
}
RT_B_TICK();
} L_end540: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_541; memset(&l_HEAD_541, 0, sizeof l_HEAD_541);
l_HEAD_541 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end542;
{
{
R12 * l_Y_543; memset(&l_Y_543, 0, sizeof l_Y_543);
l_Y_543 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_543);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_543))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_543))).f_SNEXT = l_HEAD_541;
l_HEAD_541 = l_Y_543;
}
}
RT_B_TICK();
} L_end542: ;
{ R12 * rv544 = l_HEAD_541;
return rv544; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_545; memset(&l_T_545, 0, sizeof l_T_545);
l_T_545 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_545)), ({ R22 rc546; memset(&rc546, 0, sizeof rc546);  rc546.f_KIND = p_KIND; rc546.f_SCALE = ((rt_int)0LL); S_R10(&rc546.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc546.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc546.f_MLO, r_NO_MVAL(), 0); S_R23(&rc546.f_MHI, r_NO_MVAL(), 0); rc546.f_RLEVEL = ((rt_int)0LL); S_R10(&rc546.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc546.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc546.f_GEN, r_NO_TEXT(), 0); rc546.f_BASE = NULL; rc546.f_ELEM = NULL; rc546.f_TARGET = NULL; rc546.f_TARGET_TS = NULL; rc546.f_FIELDS = NULL; rc546.f_LITS = NULL; rc546.f_NLITS = ((rt_int)0LL); rc546.f_UNORDERED = 0; rc546.f_BOUNDS = NULL; rc546.f_DIMS = ((rt_int)0LL); rc546.f_ARGS = NULL; S_R10(&rc546.f_NAME, r_NO_TEXT(), 0); S_R10(&rc546.f_CNAME, r_NO_TEXT(), 0); rc546.f_MODL = NULL; rc546.f_REPS = NULL; rc546.f_DECL = NULL; rc546; }), 0);
{ R22 * rv547 = l_T_545;
return rv547; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_548; memset(&l_C_548, 0, sizeof l_C_548);
l_C_548 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_548)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv549 = l_C_548;
return rv549; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_550; memset(&l_Y_550, 0, sizeof l_Y_550);
l_Y_550 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_550))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_550))).f_NAME, 0);
}
r_DEFINE(l_Y_550, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_551; memset(&l_Y_551, 0, sizeof l_Y_551);
l_Y_551 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_551))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_551))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_551))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_551))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_551))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_551, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_552; memset(&l_HEAD_552, 0, sizeof l_HEAD_552);
l_HEAD_552 = NULL;
R21 * l_TAIL_553; memset(&l_TAIL_553, 0, sizeof l_TAIL_553);
l_TAIL_553 = NULL;
rt_int l_START_554; memset(&l_START_554, 0, sizeof l_START_554);
l_START_554 = ((rt_int)0LL);
{ rt_int it556_lo = ((rt_int)0LL), it556_hi = (rt_int)(p_NAMES).len;
for (rt_int it556 = it556_lo; it556 <= it556_hi; it556++) {
{
if (((it556 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it556, it556), rt_str(" ", 1))))
{
if ((it556 > l_START_554))
{
{
R21 * l_N_557; memset(&l_N_557, 0, sizeof l_N_557);
l_N_557 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_557))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_554, rt_sub(it556, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_557, &l_HEAD_552, &l_TAIL_553);
}
}
l_START_554 = rt_add(it556, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it556 == it556_hi) break;
} } L_end555: ;
{
R22 * l_T_558; memset(&l_T_558, 0, sizeof l_T_558);
l_T_558 = r_ENUM_CLASS(l_HEAD_552, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_558);
{ R22 * rv559 = l_T_558;
return rv559; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_560; memset(&l_T_560, 0, sizeof l_T_560);
R21 * l_ASCII_LITS_561; memset(&l_ASCII_LITS_561, 0, sizeof l_ASCII_LITS_561);
l_ASCII_LITS_561 = NULL;
R21 * l_TAIL_562; memset(&l_TAIL_562, 0, sizeof l_TAIL_562);
l_TAIL_562 = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TY_INT = r_NEW_TYP(g_T_INT);
((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL = r_NEW_TYP(g_T_BOOL);
((*(R7 *)rt_nil_check(g_W))).f_TY_STR = r_NEW_TYP(g_T_STR);
((*(R7 *)rt_nil_check(g_W))).f_TY_VOID = r_NEW_TYP(g_T_VOID);
((*(R7 *)rt_nil_check(g_W))).f_TY_NIL = r_NEW_TYP(g_T_NIL);
((*(R7 *)rt_nil_check(g_W))).f_TY_FLOAT = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_TY_FLOAT))).f_SCALE = ((rt_int)15LL);
((*(R7 *)rt_nil_check(g_W))).f_TY_BITS = r_NEW_TYP(g_T_BITS);
((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE = r_NEW_TYP(g_T_TYPE);
r_PREDEF_TYPE(rt_str("INTEGER", 7), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
r_PREDEF_TYPE(rt_str("BOOLEAN", 7), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
{ rt_int it564_lo = ((rt_int)0LL), it564_hi = ((rt_int)127LL);
for (rt_int it564 = it564_lo; it564 <= it564_hi; it564++) {
{
{
R21 * l_N_565; memset(&l_N_565, 0, sizeof l_N_565);
l_N_565 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_565))).f_NAME, r_ASCII_NAME(it564), 0);
r_ADD_LIST(l_N_565, &l_ASCII_LITS_561, &l_TAIL_562);
}
}
RT_B_TICK();
if (it564 == it564_hi) break;
} } L_end563: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_561, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_560 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_560 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_560 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_560 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
r_PREDEF_CONST(rt_str("MIN_PRIORITY", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)0LL));
r_PREDEF_CONST(rt_str("MAX_PRIORITY", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)255LL));
r_PREDEF_BUILTIN(rt_str("TO_CHAR", 7));
r_PREDEF_BUILTIN(rt_str("TO_FIXED", 8));
r_PREDEF_BUILTIN(rt_str("TO_FLOAT", 8));
r_PREDEF_BUILTIN(rt_str("TO_BIT", 6));
r_PREDEF_BUILTIN(rt_str("ABS", 3));
r_PREDEF_BUILTIN(rt_str("SUCC", 4));
r_PREDEF_BUILTIN(rt_str("PRED", 4));
r_PREDEF_BUILTIN(rt_str("DUP", 3));
r_PREDEF_BUILTIN(rt_str("BLANKS", 6));
r_PREDEF_BUILTIN(rt_str("ZEROS", 5));
r_PREDEF_BUILTIN(rt_str("BIN_OF", 6));
r_PREDEF_BUILTIN(rt_str("OCT_OF", 6));
r_PREDEF_BUILTIN(rt_str("HEX_OF", 6));
r_PREDEF_BUILTIN(rt_str("FIXED_MIN", 9));
r_PREDEF_BUILTIN(rt_str("FIXED_MAX", 9));
r_PREDEF_BUILTIN(rt_str("FLOAT_MIN", 9));
r_PREDEF_BUILTIN(rt_str("FLOAT_MAX", 9));
r_PREDEF_BUILTIN(rt_str("EPSILON", 7));
r_PREDEF_BUILTIN(rt_str("IMP_PRECISION", 13));
r_PREDEF_BUILTIN(rt_str("HANDLER_EXISTS", 14));
r_PREDEF_BUILTIN(rt_str("IS_MANIFEST", 11));
r_PREDEF_BUILTIN(rt_str("CLOCK", 5));
r_PREDEF_BUILTIN(rt_str("WAIT", 4));
r_PREDEF_BUILTIN(rt_str("PRIORITY", 8));
r_PREDEF_BUILTIN(rt_str("REQUEST", 7));
r_PREDEF_BUILTIN(rt_str("RELEASE", 7));
r_PREDEF_BUILTIN(rt_str("START_IO", 8));
{
rstr l_OPS_566; memset(&l_OPS_566, 0, sizeof l_OPS_566);
l_OPS_566 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_566, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_567; memset(&l_START_567, 0, sizeof l_START_567);
l_START_567 = ((rt_int)1LL);
{ rt_int it569_lo = ((rt_int)1LL), it569_hi = ((rt_int)270LL);
for (rt_int it569 = it569_lo; it569 <= it569_hi; it569++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_566, it569, it569), rt_str(" ", 1)))
{
if ((it569 > l_START_567))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_566, l_START_567, rt_sub(it569, ((rt_int)1LL))));
}
l_START_567 = rt_add(it569, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it569 == it569_hi) break;
} } L_end568: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R21 * l_F_570; memset(&l_F_570, 0, sizeof l_F_570);
l_F_570 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R21 * l_V_571; memset(&l_V_571, 0, sizeof l_V_571);
l_V_571 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R21 * l_R_572; memset(&l_R_572, 0, sizeof l_R_572);
l_R_572 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R21 * l_D_573; memset(&l_D_573, 0, sizeof l_D_573);
l_D_573 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R21 * l_FX_574; memset(&l_FX_574, 0, sizeof l_FX_574);
l_FX_574 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_575; memset(&l_Y_575, 0, sizeof l_Y_575);
l_Y_575 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R21 *)rt_nil_check(l_F_570))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_570))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_F_570))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_570))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R10(&((*(R21 *)rt_nil_check(l_FX_574))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R21 *)rt_nil_check(l_FX_574))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_574))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_574))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_574))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_574))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_V_571))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_571))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_571))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_571))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R21 *)rt_nil_check(l_V_571))).f_B = l_FX_574;
((*(R21 *)rt_nil_check(l_R_572))).f_A = l_V_571;
S_R10(&((*(R21 *)rt_nil_check(l_D_573))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_575))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_D_573))).f_A = l_F_570;
((*(R21 *)rt_nil_check(l_D_573))).f_B = l_R_572;
((*(R12 *)rt_nil_check(l_Y_575))).f_DECL = l_D_573;
r_DEFINE(l_Y_575, ((rt_int)0LL));
}
static void r_PREDEFINE_TERMINAL(void) { RT_B_TICK(); 
r_PREDEF_BUILTIN(rt_str("PUT", 3));
r_PREDEF_BUILTIN(rt_str("PUT_LINE", 8));
r_PREDEF_BUILTIN(rt_str("NEW_LINE", 8));
r_PREDEF_BUILTIN(rt_str("GET_CODE", 8));
r_PREDEF_BUILTIN(rt_str("GET_LINE", 8));
r_PREDEF_BUILTIN(rt_str("END_OF_INPUT", 12));
r_PREDEF_BUILTIN(rt_str("STOP", 4));
r_PREDEF_BUILTIN(rt_str("REAL_TIME", 9));
}
static R10 r_ASCII_NAME(rt_int p_C) { RT_B_TICK(); 
rstr l_CONTROLS_576; memset(&l_CONTROLS_576, 0, sizeof l_CONTROLS_576);
l_CONTROLS_576 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_576, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_576, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv577 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_576, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv577; }
}
{ R10 rv578 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_576, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv578; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv579 = r_MKN(rt_str("\\''''", 5));
return rv579; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv580 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv580; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv581 = r_MKN(rt_str("\\ACCENT", 7));
return rv581; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv582 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv582; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv583 = r_MKN(rt_str("\\[", 2));
return rv583; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv584 = r_MKN(rt_str("\\BAR", 4));
return rv584; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv585 = r_MKN(rt_str("\\]", 2));
return rv585; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv586 = r_MKN(rt_str("\\TILDE", 6));
return rv586; }
}
{ R10 rv587 = r_MKN(rt_str("\\DEL", 4));
return rv587; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv588 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv588; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv589 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv589; }
}
{ R22 * rv590 = p_T;
return rv590; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_591; memset(&l_K_591, 0, sizeof l_K_591);
l_K_591 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv592 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv592; }
}
else if ((l_K_591 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv593 = r_MK(rt_str("INTEGER", 7));
return rv593; }
}
{ R10 rv594 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv594; }
}
else if ((l_K_591 == g_T_BOOL))
{
{ R10 rv595 = r_MK(rt_str("BOOLEAN", 7));
return rv595; }
}
else if ((l_K_591 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv596 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv596; }
}
{ R10 rv597 = r_MK(rt_str("an enumerated type", 18));
return rv597; }
}
else if ((l_K_591 == g_T_STR))
{
{ R10 rv598 = r_MK(rt_str("CHAR_STR", 8));
return rv598; }
}
else if ((l_K_591 == g_T_BITS))
{
{ R10 rv599 = r_MK(rt_str("BIT", 3));
return rv599; }
}
else if ((l_K_591 == g_T_FLOAT))
{
{ R10 rv600 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv600; }
}
else if ((l_K_591 == g_T_ARR))
{
{ R10 rv601 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv601; }
}
else if ((l_K_591 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv602 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv602; }
}
{ R10 rv603 = r_MK(rt_str("RECORD", 6));
return rv603; }
}
else if ((l_K_591 == g_T_PTR))
{
{ R10 rv604 = r_MK(rt_str("PTR", 3));
return rv604; }
}
else if ((l_K_591 == g_T_SEM))
{
{ R10 rv605 = r_MK(rt_str("SEMAPHORE", 9));
return rv605; }
}
else if ((l_K_591 == g_T_NIL))
{
{ R10 rv606 = r_MK(rt_str("NIL", 3));
return rv606; }
}
else if ((l_K_591 == g_T_VOID))
{
{ R10 rv607 = r_MK(rt_str("no value", 8));
return rv607; }
}
{ R10 rv608 = r_MK(rt_str("a type", 6));
return rv608; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_609; memset(&l_S_609, 0, sizeof l_S_609);
l_S_609 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_609, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_610; memset(&l_AT_610, 0, sizeof l_AT_610);
l_AT_610 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_611; memset(&l_START_611, 0, sizeof l_START_611);
l_START_611 = ((rt_int)0LL);
R10 l_R_612; memset(&l_R_612, 0, sizeof l_R_612);
rt_int l_I_613; memset(&l_I_613, 0, sizeof l_I_613);
l_I_613 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv614 = p_T;
return rv614; }
}
for (;;) {
if ((l_I_613 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end615;
{
if (rt_b_eq(rt_b_slice(l_S_609, l_I_613, rt_add(l_I_613, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_612, r_MK(rt_b_slice(l_S_609, l_START_611, rt_sub(l_I_613, ((rt_int)1LL)))), 0);
S_R10(&l_R_612, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_613 = rt_add(l_I_613, ((rt_int)2LL));
l_START_611 = l_I_613;
}
else
{
l_I_613 = rt_add(l_I_613, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end615: ;
if ((l_START_611 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_610;
{ R10 rv616 = p_T;
return rv616; }
}
S_R10(&l_R_612, r_MK(rt_b_slice(l_S_609, l_START_611, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv617 = ({ R10 rc618; memset(&rc618, 0, sizeof rc618);  rc618.f_AT = l_AT_610; rc618.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_610); rc618.f_H = rt_neg(((rt_int)1LL)); rc618; });
return rv617; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_619; memset(&l_P_619, 0, sizeof l_P_619);
l_P_619 = p_A;
R21 * l_Q_620; memset(&l_Q_620, 0, sizeof l_Q_620);
l_Q_620 = p_B;
for (;;) {
if (((l_P_619 == NULL) || (l_Q_620 == NULL))) goto L_end621;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_619))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_620))).f_NAME)))
{
{ rt_int rv622 = 0;
return rv622; }
}
l_P_619 = ((*(R21 *)rt_nil_check(l_P_619))).f_NEXT;
l_Q_620 = ((*(R21 *)rt_nil_check(l_Q_620))).f_NEXT;
}
RT_B_TICK();
} L_end621: ;
{ rt_int rv623 = ((l_P_619 == NULL) && (l_Q_620 == NULL));
return rv623; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_624; memset(&l_Y_624, 0, sizeof l_Y_624);
l_Y_624 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_625; memset(&l_T_625, 0, sizeof l_T_625);
{
R21 * l_P_626; memset(&l_P_626, 0, sizeof l_P_626);
l_P_626 = p_LITS;
for (;;) {
if ((l_P_626 == NULL)) goto L_end627;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_626))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_626))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_626))).f_NAME);
}
l_P_626 = ((*(R21 *)rt_nil_check(l_P_626))).f_NEXT;
}
RT_B_TICK();
} L_end627: ;
}
for (;;) {
if ((l_Y_624 == NULL)) goto L_end628;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_624))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_624))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_624))).f_T, p_LINE);
{ R22 * rv629 = ((*(R12 *)rt_nil_check(l_Y_624))).f_T;
return rv629; }
}
l_Y_624 = ((*(R12 *)rt_nil_check(l_Y_624))).f_INSTANCES;
}
RT_B_TICK();
} L_end628: ;
l_T_625 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_625))).f_BASE = l_T_625;
((*(R22 *)rt_nil_check(l_T_625))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_625))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_625))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_625))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_624 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_624))).f_T = l_T_625;
((*(R12 *)rt_nil_check(l_Y_624))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_624;
{
R21 * l_P_630; memset(&l_P_630, 0, sizeof l_P_630);
l_P_630 = p_LITS;
R10 l_NAMES_631; memset(&l_NAMES_631, 0, sizeof l_NAMES_631);
S_R10(&l_NAMES_631, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_630 == NULL)) goto L_end632;
{
S_R10(&l_NAMES_631, r_FMT2(rt_str("@@, ", 4), l_NAMES_631, r_CSTRING(((*(R21 *)rt_nil_check(l_P_630))).f_NAME)), 0);
l_P_630 = ((*(R21 *)rt_nil_check(l_P_630))).f_NEXT;
}
RT_B_TICK();
} L_end632: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_625))).f_CNAME, l_NAMES_631));
}
r_DECLARE_LITERALS(l_T_625, p_LINE);
{ R22 * rv633 = l_T_625;
return rv633; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_634; memset(&l_P_634, 0, sizeof l_P_634);
l_P_634 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_635; memset(&l_I_635, 0, sizeof l_I_635);
l_I_635 = ((rt_int)0LL);
for (;;) {
if ((l_P_634 == NULL)) goto L_end636;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_634))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_637; memset(&l_Y_637, 0, sizeof l_Y_637);
l_Y_637 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_634))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_637))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_637))).f_MV = l_I_635;
((*(R12 *)rt_nil_check(l_Y_637))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_637))).f_INPUT = 1;
r_DEFINE(l_Y_637, p_LINE);
}
}
l_I_635 = rt_add(l_I_635, ((rt_int)1LL));
l_P_634 = ((*(R21 *)rt_nil_check(l_P_634))).f_NEXT;
}
RT_B_TICK();
} L_end636: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_638; memset(&l_V_638, 0, sizeof l_V_638);
l_V_638 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_638 == NULL)) || (p_T == NULL)))
{
{ R12 * rv639 = l_V_638;
return rv639; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv640 = NULL;
return rv640; }
}
{
R21 * l_P_641; memset(&l_P_641, 0, sizeof l_P_641);
l_P_641 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_642; memset(&l_I_642, 0, sizeof l_I_642);
l_I_642 = ((rt_int)0LL);
for (;;) {
if ((l_P_641 == NULL)) goto L_end643;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_641))).f_NAME, p_NAME))
{
{
R12 * l_Y_644; memset(&l_Y_644, 0, sizeof l_Y_644);
l_Y_644 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_644))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_644))).f_MV = l_I_642;
((*(R12 *)rt_nil_check(l_Y_644))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_644))).f_INPUT = 1;
{ R12 * rv645 = l_Y_644;
return rv645; }
}
}
l_I_642 = rt_add(l_I_642, ((rt_int)1LL));
l_P_641 = ((*(R21 *)rt_nil_check(l_P_641))).f_NEXT;
}
RT_B_TICK();
} L_end643: ;
}
{ R12 * rv646 = NULL;
return rv646; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_647; memset(&l_Y_647, 0, sizeof l_Y_647);
l_Y_647 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_647 == NULL)) goto L_end648;
{
if ((((*(R12 *)rt_nil_check(l_Y_647))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv649 = l_Y_647;
return rv649; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_647))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv650 = l_Y_647;
return rv650; }
}
}
l_Y_647 = r_LOOKUP_NEXT(l_Y_647);
}
RT_B_TICK();
} L_end648: ;
{ R12 * rv651 = NULL;
return rv651; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_652; memset(&l_Y_652, 0, sizeof l_Y_652);
l_Y_652 = r_LOOKUP(p_NAME);
rt_int l_N_653; memset(&l_N_653, 0, sizeof l_N_653);
l_N_653 = ((rt_int)0LL);
for (;;) {
if ((l_Y_652 == NULL)) goto L_end654;
{
if ((((*(R12 *)rt_nil_check(l_Y_652))).f_KIND == g_Y_ENUMLIT))
{
l_N_653 = rt_add(l_N_653, ((rt_int)1LL));
}
l_Y_652 = r_LOOKUP_NEXT(l_Y_652);
}
RT_B_TICK();
} L_end654: ;
{ rt_int rv655 = l_N_653;
return rv655; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv656 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv656; }
rt_raise(RT_X_INIT);
}
static void r_ATTR_VALUE(R21 * p_E, R10 *p_C, R23 *p_M) { RT_B_TICK(); 
S_R10(&(*p_C), (r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, 0);
S_R23(&(*p_M), r_MANIFEST(p_E), 0);
if (((*p_M)).f_OK)
{
S_R10(&(*p_C), r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*p_M)).f_V)), 0);
}
}
static R22 * r_WITH_RANGE(R22 * p_T, R21 * p_R) { RT_B_TICK(); 
R22 * l_N_657; memset(&l_N_657, 0, sizeof l_N_657);
if ((p_R == NULL))
{
{ R22 * rv658 = p_T;
return rv658; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_657 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv659 = l_N_657;
return rv659; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_657 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_657))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_660; memset(&l_LO_660, 0, sizeof l_LO_660);
R26 l_HI_661; memset(&l_HI_661, 0, sizeof l_HI_661);
S_R26(&l_LO_660, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_661, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_LO_C, (l_LO_660).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_HI_C, (l_HI_661).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_657))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_657))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_657))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_657))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_660).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_661).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_LO_C, r_RESCALE(l_LO_660, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_HI_C, r_RESCALE(l_HI_661, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_660).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_661).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_657))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_657))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_657))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_657))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_657))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_657))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_657))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_657))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_657))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_657))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_657))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv662 = l_N_657;
return rv662; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_663; memset(&l_Y_663, 0, sizeof l_Y_663);
l_Y_663 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_663 == NULL)))
{
{ R23 rv664 = r_SOME(((*(R12 *)rt_nil_check(l_Y_663))).f_MV);
return rv664; }
}
}
}
{ R23 rv665 = r_MANIFEST(p_E);
return rv665; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv666 = ((rt_int)0LL);
return rv666; }
}
{ rt_int rv667 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv667; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv668 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv668; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_669; memset(&l_A_669, 0, sizeof l_A_669);
l_A_669 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it671_lo = ((rt_int)1LL), it671_hi = p_K;
for (rt_int it671 = it671_lo; it671 <= it671_hi; it671++) {
{
if ((l_A_669 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_669 = ((*(R21 *)rt_nil_check(l_A_669))).f_NEXT;
}
RT_B_TICK();
if (it671 == it671_hi) break;
} } L_end670: ;
if ((l_A_669 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv672 = l_A_669;
return rv672; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_673; memset(&l_T_673, 0, sizeof l_T_673);
rt_int l_K_674; memset(&l_K_674, 0, sizeof l_K_674);
l_K_674 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_674 == g_TS_ARRAY))
{
{ R22 * rv675 = r_RESOLVE_ARRAY(p_TS);
return rv675; }
}
else if ((l_K_674 == g_TS_RECORD))
{
{ R22 * rv676 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv676; }
}
else if ((l_K_674 == g_TS_ENUM))
{
l_T_673 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_673 = r_WITH_RANGE(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_673 = r_COPY_TYP(l_T_673);
((*(R22 *)rt_nil_check(l_T_673))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
r_CHECK_ENUM_REP(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv677 = l_T_673;
return rv677; }
}
else if ((l_K_674 == g_TS_GEN))
{
{ R22 * rv678 = r_GEN_TYPE(p_TS);
return rv678; }
}
else if ((!(l_K_674 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_673 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_TS))).f_E), ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_673 = r_COPY_TYP(l_T_673);
((*(R22 *)rt_nil_check(l_T_673))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv679 = l_T_673;
return rv679; }
}
l_T_673 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_673 == NULL))
{
l_T_673 = r_RESOLVE_USER(p_TS);
}
l_T_673 = r_WITH_RANGE(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_673 = r_COPY_TYP(l_T_673);
((*(R22 *)rt_nil_check(l_T_673))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((((*(R22 *)rt_nil_check(l_T_673))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_673, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
{ R22 * rv680 = l_T_673;
return rv680; }
rt_raise(RT_X_INIT);
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_681; memset(&l_T_681, 0, sizeof l_T_681);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_681 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_682; memset(&l_SAVED_CODE_682, 0, sizeof l_SAVED_CODE_682);
S_R14(&l_SAVED_CODE_682, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_681 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_682, 0);
}
}
{
R22 * l_R_683; memset(&l_R_683, 0, sizeof l_R_683);
l_R_683 = r_REAL_TYPE(l_T_681);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_683))).f_KIND == g_T_ARR))
{
{ R22 * rv684 = ((*(R22 *)rt_nil_check(l_R_683))).f_ELEM;
return rv684; }
}
else if ((((*(R22 *)rt_nil_check(l_R_683))).f_KIND == g_T_PTR))
{
{ R22 * rv685 = r_TARGET(l_R_683);
return rv685; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_683))).f_KIND == g_T_STR)))
{
{ R22 * rv686 = r_CHARSET_OF(l_R_683);
return rv686; }
}
if ((((*(R22 *)rt_nil_check(l_R_683))).f_KIND == g_T_REC))
{
{
R12 * l_C_687; memset(&l_C_687, 0, sizeof l_C_687);
l_C_687 = r_RECORD_CLASS_OF(l_R_683);
if ((!(l_C_687 == NULL)))
{
{
R20 * l_B_688; memset(&l_B_688, 0, sizeof l_B_688);
l_B_688 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_687))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_688 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_688))).f_T == NULL)))
{
{ R22 * rv689 = ((*(R20 *)rt_nil_check(l_B_688))).f_T;
return rv689; }
}
}
}
}
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a type-valued attribute: ", 29), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_ATTR(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
{ rt_int rv690 = 0;
return rv690; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv691 = 1;
return rv691; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_692; memset(&l_Y_692, 0, sizeof l_Y_692);
l_Y_692 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_692 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_692))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_692))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_692))).f_T == NULL))))
{
{
R22 * l_R_693; memset(&l_R_693, 0, sizeof l_R_693);
l_R_693 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_692))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_693))).f_KIND == g_T_REC))
{
{
R12 * l_C_694; memset(&l_C_694, 0, sizeof l_C_694);
l_C_694 = r_RECORD_CLASS_OF(l_R_693);
if ((!(l_C_694 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_694))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv695 = 1;
return rv695; }
}
}
}
}
}
}
}
}
}
{ rt_int rv696 = 0;
return rv696; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_697; memset(&l_B_697, 0, sizeof l_B_697);
l_B_697 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_697 == NULL)) goto L_end698;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_697))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_697))).f_T == NULL))))
{
{ R22 * rv699 = ((*(R20 *)rt_nil_check(l_B_697))).f_T;
return rv699; }
}
l_B_697 = ((*(R20 *)rt_nil_check(l_B_697))).f_NEXT;
}
RT_B_TICK();
} L_end698: ;
{
R12 * l_Y_700; memset(&l_Y_700, 0, sizeof l_Y_700);
l_Y_700 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_700 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_700))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_700))).f_T == NULL))))
{
{ R22 * rv701 = ((*(R12 *)rt_nil_check(l_Y_700))).f_T;
return rv701; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_702; memset(&l_NAME_702, 0, sizeof l_NAME_702);
S_R10(&l_NAME_702, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_703; memset(&l_T_703, 0, sizeof l_T_703);
if (r_TEQS(l_NAME_702, rt_str("FIXED", 5)))
{
{
R23 l_S_704; memset(&l_S_704, 0, sizeof l_S_704);
S_R23(&l_S_704, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_705; memset(&l_R_705, 0, sizeof l_R_705);
S_R23(&l_R_705, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_706; memset(&l_P_706, 0, sizeof l_P_706);
l_P_706 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_705).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_706, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_704).f_V == ((rt_int)0LL)))
{
{ R22 * rv707 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv707; }
}
l_T_703 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_703))).f_SCALE = (l_S_704).f_V;
{ R22 * rv708 = l_T_703;
return rv708; }
}
}
else if (r_TEQS(l_NAME_702, rt_str("FLOAT", 5)))
{
{
R23 l_P_709; memset(&l_P_709, 0, sizeof l_P_709);
S_R23(&l_P_709, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_703 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_703))).f_SCALE = (l_P_709).f_V;
{ R22 * rv710 = l_T_703;
return rv710; }
}
}
else if (r_TEQS(l_NAME_702, rt_str("BIT", 3)))
{
l_T_703 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_703, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv711 = l_T_703;
return rv711; }
}
else if ((r_TEQS(l_NAME_702, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_702, rt_str("ASCII_STR", 9))))
{
l_T_703 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_703, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_703))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_702, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_712; memset(&l_CS_712, 0, sizeof l_CS_712);
l_CS_712 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_713; memset(&l_C_713, 0, sizeof l_C_713);
if (((((*(R21 *)rt_nil_check(l_CS_712))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_712))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_703))).f_BASE = NULL;
{ R22 * rv714 = l_T_703;
return rv714; }
}
if (((((*(R21 *)rt_nil_check(l_CS_712))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_712))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_715; memset(&l_SAVED_CODE_715, 0, sizeof l_SAVED_CODE_715);
S_R14(&l_SAVED_CODE_715, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_716; memset(&l_V_716, 0, sizeof l_V_716);
S_R26(&l_V_716, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_712))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_715, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_716).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_703))).f_BASE = r_CHARSET_OF((l_V_716).f_T);
}
{ R22 * rv717 = l_T_703;
return rv717; }
}
l_C_713 = r_REAL_TYPE(r_ARG_TYPE(l_CS_712));
if ((!(((*(R22 *)rt_nil_check(l_C_713))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_713))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_713))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_703))).f_BASE = ((*(R22 *)rt_nil_check(l_C_713))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv718 = l_T_703;
return rv718; }
}
else if (r_TEQS(l_NAME_702, rt_str("PTR", 3)))
{
l_T_703 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_703))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv719 = l_T_703;
return rv719; }
}
else if (r_TEQS(l_NAME_702, rt_str("SEMAPHORE", 9)))
{
l_T_703 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R21 * l_U_720; memset(&l_U_720, 0, sizeof l_U_720);
l_U_720 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_721; memset(&l_UT_721, 0, sizeof l_UT_721);
l_UT_721 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_722; memset(&l_M_722, 0, sizeof l_M_722);
S_R23(&l_M_722, r_NO_MVAL(), 0);
if (((((((*(R21 *)rt_nil_check(l_U_720))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_U_720))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_U_720))).f_NAME, l_UT_721) == NULL))))
{
S_R23(&l_M_722, r_ENUM_MANIFEST(l_U_720, l_UT_721), 0);
}
else
{
{
R14 l_SAVED_CODE_723; memset(&l_SAVED_CODE_723, 0, sizeof l_SAVED_CODE_723);
S_R14(&l_SAVED_CODE_723, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_724; memset(&l_V_724, 0, sizeof l_V_724);
S_R26(&l_V_724, r_EXPR(l_U_720, l_UT_721), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_723, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_724).f_T), r_REAL_TYPE(l_UT_721)))
{
S_R23(&l_M_722, r_MANIFEST(l_U_720), 0);
}
}
}
if ((!(l_M_722).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_703))).f_SCALE = (l_M_722).f_V;
}
{ R22 * rv725 = l_T_703;
return rv725; }
}
{ R22 * rv726 = NULL;
return rv726; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_727; memset(&l_M_727, 0, sizeof l_M_727);
S_R23(&l_M_727, r_MANIFEST(p_A), 0);
if ((!(l_M_727).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_728; memset(&l_SAVED_CODE_728, 0, sizeof l_SAVED_CODE_728);
S_R14(&l_SAVED_CODE_728, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_729; memset(&l_T_729, 0, sizeof l_T_729);
l_T_729 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_728, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_729)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_729))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_727).f_V < p_LO) || ((l_M_727).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv730 = l_M_727;
return rv730; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv731 = 0;
return rv731; }
}
{ rt_int rv732 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv732; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_PRECISION_ARG(R21 * p_P, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_P))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_P))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((((((*(R21 *)rt_nil_check(p_P))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_P))).f_KIND == g_N_ENUMLIT))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_P))).f_NAME, rt_str("STD", 3)))
{
return;
}
{
R12 * l_Y_733; memset(&l_Y_733, 0, sizeof l_Y_733);
l_Y_733 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_733 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_733))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_733))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_733))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
{
return;
}
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL)))
{
return;
}
}
if ((!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_P))).f_NAME, NULL) == NULL)))
{
r_FAIL(p_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
r_FAIL(p_LINE, rt_str("the precision of a fixed point type is a value of FIXED_PRECISIONS (3.2.1)", 74));
}
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_734; memset(&l_R_734, 0, sizeof l_R_734);
l_R_734 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_735; memset(&l_NAME_735, 0, sizeof l_NAME_735);
S_R10(&l_NAME_735, ((*(R21 *)rt_nil_check(l_R_734))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_734))).f_KIND == g_TS_GEN))
{
return;
}
if (r_TEQS(l_NAME_735, rt_str("ENUM_STD", 8)))
{
return;
}
if ((!((r_TEQS(l_NAME_735, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_735, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_735) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_735)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_735);
}
if ((((*(R21 *)rt_nil_check(l_R_734))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_735);
}
{
R23 l_N_736; memset(&l_N_736, 0, sizeof l_N_736);
S_R23(&l_N_736, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_734))).f_A), 0);
rt_int l_NL_737; memset(&l_NL_737, 0, sizeof l_NL_737);
l_NL_737 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_736).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_736).f_V > ((rt_int)64LL)) || ((l_N_736).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_735, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_734))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_736).f_V < r_BITS_FOR(l_NL_737)))
{
r_FAIL(p_LINE, rt_str("the size cannot represent every literal (3.4.3)", 47));
}
return;
}
if ((!((*(R22 *)rt_nil_check(p_T))).f_UNORDERED))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{
R21 * l_L_738; memset(&l_L_738, 0, sizeof l_L_738);
l_L_738 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_738 == NULL)) goto L_end739;
{
{
R21 * l_V_740; memset(&l_V_740, 0, sizeof l_V_740);
l_V_740 = ((*(R21 *)rt_nil_check(l_R_734))).f_B;
rt_int l_FOUND_741; memset(&l_FOUND_741, 0, sizeof l_FOUND_741);
l_FOUND_741 = ((rt_int)0LL);
for (;;) {
if ((l_V_740 == NULL)) goto L_end742;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_740))).f_NAME, ((*(R21 *)rt_nil_check(l_L_738))).f_NAME))
{
l_FOUND_741 = rt_add(l_FOUND_741, ((rt_int)1LL));
}
l_V_740 = ((*(R21 *)rt_nil_check(l_V_740))).f_NEXT;
}
RT_B_TICK();
} L_end742: ;
if ((!(l_FOUND_741 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_738))).f_NAME);
}
}
l_L_738 = ((*(R21 *)rt_nil_check(l_L_738))).f_NEXT;
}
RT_B_TICK();
} L_end739: ;
}
{
R21 * l_V_743; memset(&l_V_743, 0, sizeof l_V_743);
l_V_743 = ((*(R21 *)rt_nil_check(l_R_734))).f_B;
for (;;) {
if ((l_V_743 == NULL)) goto L_end744;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_743))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_743))).f_NAME);
}
{
R14 l_SAVED_CODE_745; memset(&l_SAVED_CODE_745, 0, sizeof l_SAVED_CODE_745);
S_R14(&l_SAVED_CODE_745, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_746; memset(&l_B_746, 0, sizeof l_B_746);
S_R26(&l_B_746, r_EXPR(((*(R21 *)rt_nil_check(l_V_743))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_745, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_746).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_746).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_746).f_T))).f_MLEN).f_V == (l_N_736).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_743))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_743))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_747; memset(&l_U_747, 0, sizeof l_U_747);
l_U_747 = ((*(R21 *)rt_nil_check(l_V_743))).f_NEXT;
for (;;) {
if ((l_U_747 == NULL)) goto L_end748;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_747))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_747))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_743))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_747))).f_NAME);
}
}
l_U_747 = ((*(R21 *)rt_nil_check(l_U_747))).f_NEXT;
}
RT_B_TICK();
} L_end748: ;
}
}
}
l_V_743 = ((*(R21 *)rt_nil_check(l_V_743))).f_NEXT;
}
RT_B_TICK();
} L_end744: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_749; memset(&l_B_749, 0, sizeof l_B_749);
l_B_749 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_749 == NULL)) goto L_end750;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_749))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_749))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_749))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc751; memset(&rc751, 0, sizeof rc751);  rc751.f_OK = ((*(R20 *)rt_nil_check(l_B_749))).f_HASMV; rc751.f_V = ((*(R20 *)rt_nil_check(l_B_749))).f_MV; rc751; }), 0);
return;
}
l_B_749 = ((*(R20 *)rt_nil_check(l_B_749))).f_NEXT;
}
RT_B_TICK();
} L_end750: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_752; memset(&l_C_752, 0, sizeof l_C_752);
R23 l_M_753; memset(&l_M_753, 0, sizeof l_M_753);
r_ATTR_VALUE(p_A, &l_C_752, &l_M_753);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_752, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_753, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_754; memset(&l_T_754, 0, sizeof l_T_754);
l_T_754 = r_NEW_TYP(g_T_ARR);
R21 * l_R_755; memset(&l_R_755, 0, sizeof l_R_755);
l_R_755 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_756; memset(&l_TAIL_756, 0, sizeof l_TAIL_756);
l_TAIL_756 = NULL;
for (;;) {
if ((l_R_755 == NULL)) goto L_end757;
{
{
R25 * l_B_758; memset(&l_B_758, 0, sizeof l_B_758);
l_B_758 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_759; memset(&l_LO_759, 0, sizeof l_LO_759);
R26 l_HI_760; memset(&l_HI_760, 0, sizeof l_HI_760);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_755))).f_A))
{
S_R26(&l_LO_759, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_755))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_755))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_759, r_EXPR(((*(R21 *)rt_nil_check(l_R_755))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_755))).f_B))
{
S_R26(&l_HI_760, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_755))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_755))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_760, r_EXPR(((*(R21 *)rt_nil_check(l_R_755))).f_B, (l_LO_759).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_758)), ({ R25 rc761; memset(&rc761, 0, sizeof rc761);  S_R10(&rc761.f_LO, (l_LO_759).f_C, 0); S_R10(&rc761.f_HI, (l_HI_760).f_C, 0); S_R23(&rc761.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_755))).f_A), 0); S_R23(&rc761.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_755))).f_B), 0); rc761.f_ANYARG = 0; rc761.f_NEXT = NULL; rc761; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_755))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_755))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_759).f_T), r_REAL_TYPE((l_HI_760).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_755))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R10(&((*(R25 *)rt_nil_check(l_B_758))).f_LO, r_INDEX_OF(l_LO_759, ((*(R21 *)rt_nil_check(l_R_755))).f_LINE), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_758))).f_HI, r_INDEX_OF(l_HI_760, ((*(R21 *)rt_nil_check(l_R_755))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_759).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_759).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_758))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_755))).f_A, (l_LO_759).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_758))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_755))).f_B, (l_LO_759).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_758))).f_LO, (l_LO_759).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_758))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_758))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_759).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_755))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_756 == NULL))
{
((*(R22 *)rt_nil_check(l_T_754))).f_BOUNDS = l_B_758;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_756))).f_NEXT = l_B_758;
}
l_TAIL_756 = l_B_758;
((*(R22 *)rt_nil_check(l_T_754))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_754))).f_DIMS, ((rt_int)1LL));
}
l_R_755 = ((*(R21 *)rt_nil_check(l_R_755))).f_NEXT;
}
RT_B_TICK();
} L_end757: ;
((*(R22 *)rt_nil_check(l_T_754))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_754))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_754))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_754))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_754))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_754))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_754))).f_DIMS), 0);
{ R22 * rv762 = l_T_754;
return rv762; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_763; memset(&l_Y_763, 0, sizeof l_Y_763);
l_Y_763 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_764; memset(&l_B_764, 0, sizeof l_B_764);
l_B_764 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_764 == NULL)) goto L_end765;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_764))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_764))).f_T == NULL))))
{
{ R22 * rv766 = ((*(R20 *)rt_nil_check(l_B_764))).f_T;
return rv766; }
}
l_B_764 = ((*(R20 *)rt_nil_check(l_B_764))).f_NEXT;
}
RT_B_TICK();
} L_end765: ;
}
}
if ((l_Y_763 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_763))).f_KIND == g_Y_GEN))
{
{ R22 * rv767 = r_GEN_TYPE(p_TS);
return rv767; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_763))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_763))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv768 = ((*(R12 *)rt_nil_check(l_Y_763))).f_T;
return rv768; }
}
{
R21 * l_D_769; memset(&l_D_769, 0, sizeof l_D_769);
l_D_769 = ((*(R12 *)rt_nil_check(l_Y_763))).f_DECL;
R22 * l_T_770; memset(&l_T_770, 0, sizeof l_T_770);
if ((((*(R21 *)rt_nil_check(l_D_769))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_763))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_763))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_763))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_769))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_763))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_769))).f_B, r_RECORD_NAME(l_Y_763), l_Y_763, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_763))).f_T = r_RESOLVE_IN_DECL(l_Y_763, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_763))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_763))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_763))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_763))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_763))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_763))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_763))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_763))).f_BUSY = 0;
}
l_T_770 = ((*(R12 *)rt_nil_check(l_Y_763))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_769))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_770 = r_RECORD_INSTANCE(l_Y_763, p_TS);
}
else
{
l_T_770 = r_RESOLVE_IN_DECL(l_Y_763, p_TS);
}
}
{ R22 * rv771 = r_ABSTRACT_VIEW(l_Y_763, l_T_770);
return rv771; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_772; memset(&l_A_772, 0, sizeof l_A_772);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv773 = p_T;
return rv773; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv774 = p_T;
return rv774; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv775 = p_T;
return rv775; }
}
l_A_772 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_772))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_772))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_772))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_772))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_772))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv776 = l_A_772;
return rv776; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_777; memset(&l_P_777, 0, sizeof l_P_777);
l_P_777 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_777 == NULL)) goto L_end778;
{
if ((l_P_777 == p_M))
{
{ rt_int rv779 = 1;
return rv779; }
}
l_P_777 = ((*(R12 *)rt_nil_check(l_P_777))).f_MODL;
}
RT_B_TICK();
} L_end778: ;
{ rt_int rv780 = 0;
return rv780; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_781; memset(&l_D_781, 0, sizeof l_D_781);
l_D_781 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_782; memset(&l_T_782, 0, sizeof l_T_782);
if ((p_TS == NULL))
{
{ R22 * rv783 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_781))).f_B);
return rv783; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_781))).f_A, p_TS);
l_T_782 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_781))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv784 = l_T_782;
return rv784; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_785; memset(&l_F_785, 0, sizeof l_F_785);
l_F_785 = p_FORMALS;
R21 * l_A_786; memset(&l_A_786, 0, sizeof l_A_786);
l_A_786 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_785 == NULL)) goto L_end787;
{
{
R21 * l_N_788; memset(&l_N_788, 0, sizeof l_N_788);
l_N_788 = ((*(R21 *)rt_nil_check(l_F_785))).f_A;
for (;;) {
if ((l_N_788 == NULL)) goto L_end789;
{
if ((l_A_786 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_785))).f_B == NULL))
{
{
R12 * l_Y_790; memset(&l_Y_790, 0, sizeof l_Y_790);
l_Y_790 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_788))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_790))).f_T = r_ARG_TYPE(l_A_786);
r_DEFINE(l_Y_790, ((*(R21 *)rt_nil_check(l_A_786))).f_LINE);
}
}
else
{
{
R12 * l_Y_791; memset(&l_Y_791, 0, sizeof l_Y_791);
l_Y_791 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_788))).f_NAME);
R10 l_C_792; memset(&l_C_792, 0, sizeof l_C_792);
R23 l_M_793; memset(&l_M_793, 0, sizeof l_M_793);
((*(R12 *)rt_nil_check(l_Y_791))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_785))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_786))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_786))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_786))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_786))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_792, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_786))).f_NAME, (((*(R21 *)rt_nil_check(l_A_786))).f_NAME).f_LEN))), 0);
S_R23(&l_M_793, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_786, &l_C_792, &l_M_793);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_791))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_792))))
{
S_R10(&l_C_792, (r_EXPR(l_A_786, ((*(R12 *)rt_nil_check(l_Y_791))).f_T)).f_C, 0);
S_R23(&l_M_793, r_ENUM_MANIFEST(l_A_786, ((*(R12 *)rt_nil_check(l_Y_791))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_791))).f_ACCESS, l_C_792, 0);
((*(R12 *)rt_nil_check(l_Y_791))).f_HASMV = (l_M_793).f_OK;
((*(R12 *)rt_nil_check(l_Y_791))).f_MV = (l_M_793).f_V;
((*(R12 *)rt_nil_check(l_Y_791))).f_INPUT = 1;
r_DEFINE(l_Y_791, ((*(R21 *)rt_nil_check(l_A_786))).f_LINE);
}
}
l_A_786 = ((*(R21 *)rt_nil_check(l_A_786))).f_NEXT;
l_N_788 = ((*(R21 *)rt_nil_check(l_N_788))).f_NEXT;
}
RT_B_TICK();
} L_end789: ;
}
l_F_785 = ((*(R21 *)rt_nil_check(l_F_785))).f_NEXT;
}
RT_B_TICK();
} L_end787: ;
if ((!(l_A_786 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R10 r_RECORD_NAME(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_FWD).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, ((*(R12 *)rt_nil_check(p_Y))).f_FWD));
}
{ R10 rv794 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv794; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv795 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv795; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_796; memset(&l_K_796, 0, sizeof l_K_796);
l_K_796 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv797 = r_MK(rt_str("rt_int", 6));
return rv797; }
}
else if ((l_K_796 == g_T_FLOAT))
{
{ R10 rv798 = r_MK(rt_str("double", 6));
return rv798; }
}
else if (((l_K_796 == g_T_STR) || (l_K_796 == g_T_BITS)))
{
{ R10 rv799 = r_MK(rt_str("rstr", 4));
return rv799; }
}
else if (((l_K_796 == g_T_REC) || (l_K_796 == g_T_ARR)))
{
{ R10 rv800 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv800; }
}
else if ((l_K_796 == g_T_ABS))
{
{ R10 rv801 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv801; }
}
else if ((l_K_796 == g_T_SEM))
{
{ R10 rv802 = r_MK(rt_str("rt_b_sem *", 10));
return rv802; }
}
else if ((l_K_796 == g_T_PATHS))
{
{ R10 rv803 = r_MK(rt_str("rt_b_paths", 10));
return rv803; }
}
else if ((l_K_796 == g_T_VOID))
{
{ R10 rv804 = r_MK(rt_str("void", 4));
return rv804; }
}
else if ((l_K_796 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_805; memset(&l_TT_805, 0, sizeof l_TT_805);
l_TT_805 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_805))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_805))).f_A == NULL)))
{
{
R12 * l_Y_806; memset(&l_Y_806, 0, sizeof l_Y_806);
l_Y_806 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_805))).f_NAME);
if ((!(l_Y_806 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_806))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_806))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_806))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_806))).f_DECL))).f_A == NULL)))
{
{ R10 rv807 = r_CATS(r_RECORD_NAME(l_Y_806), rt_str(" *", 2));
return rv807; }
}
}
}
}
}
}
}
{ R10 rv808 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv808; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv809 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv809; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_810; memset(&l_F_810, 0, sizeof l_F_810);
l_F_810 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_810)), ({ R24 rc811; memset(&rc811, 0, sizeof rc811);  S_R10(&rc811.f_NAME, p_NAME, 0); S_R10(&rc811.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc811.f_T = p_T; rc811.f_KIND = p_KIND; S_R10(&rc811.f_TAGF, r_NO_TEXT(), 0); rc811.f_LABELS = NULL; rc811.f_NEXT = NULL; rc811; }), 0);
{ R24 * rv812 = l_F_810;
return rv812; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_813; memset(&l_F_813, 0, sizeof l_F_813);
l_F_813 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_813 == NULL)) goto L_end814;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_813))).f_NAME, p_NAME))
{
{ R24 * rv815 = l_F_813;
return rv815; }
}
l_F_813 = ((*(R24 *)rt_nil_check(l_F_813))).f_NEXT;
}
RT_B_TICK();
} L_end814: ;
{ R24 * rv816 = NULL;
return rv816; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_817; memset(&l_F_817, 0, sizeof l_F_817);
l_F_817 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_818; memset(&l_FIRST_818, 0, sizeof l_FIRST_818);
l_FIRST_818 = NULL;
for (;;) {
if ((l_F_817 == NULL)) goto L_end819;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_817))).f_NAME, p_NAME))
{
if ((l_FIRST_818 == NULL))
{
l_FIRST_818 = l_F_817;
}
if (((((*(R24 *)rt_nil_check(l_F_817))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv820 = l_F_817;
return rv820; }
}
{
R23 l_TAGV_821; memset(&l_TAGV_821, 0, sizeof l_TAGV_821);
S_R23(&l_TAGV_821, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_817))).f_TAGF), 0);
if ((l_TAGV_821).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_817))).f_LABELS, (l_TAGV_821).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_817))).f_TAGF)))).f_T))
{
{ R24 * rv822 = l_F_817;
return rv822; }
}
}
}
}
l_F_817 = ((*(R24 *)rt_nil_check(l_F_817))).f_NEXT;
}
RT_B_TICK();
} L_end819: ;
{ R24 * rv823 = l_FIRST_818;
return rv823; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_824; memset(&l_P_824, 0, sizeof l_P_824);
l_P_824 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_825; memset(&l_N_825, 0, sizeof l_N_825);
l_N_825 = ((rt_int)0LL);
for (;;) {
if ((l_P_824 == NULL)) goto L_end826;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_824))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_824))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_824))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_824))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_825 = rt_add(l_N_825, ((rt_int)1LL));
}
l_P_824 = ((*(R24 *)rt_nil_check(l_P_824))).f_NEXT;
}
RT_B_TICK();
} L_end826: ;
if ((l_N_825 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_825)), 0);
}
if (((*p_TAIL) == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_FIELDS = p_F;
}
else
{
((*(R24 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_F;
}
(*p_TAIL) = p_F;
}
static void r_RECORD_FIELDS(R22 * p_T, R21 * p_DECLS, R10 p_TAGN, R21 * p_LABELS, R24 * *p_TAIL) { RT_B_TICK(); 
R21 * l_D_827; memset(&l_D_827, 0, sizeof l_D_827);
l_D_827 = p_DECLS;
for (;;) {
if ((l_D_827 == NULL)) goto L_end828;
{
if ((((*(R21 *)rt_nil_check(l_D_827))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_829; memset(&l_FT_829, 0, sizeof l_FT_829);
l_FT_829 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_827))).f_B);
R21 * l_N_830; memset(&l_N_830, 0, sizeof l_N_830);
l_N_830 = ((*(R21 *)rt_nil_check(l_D_827))).f_A;
for (;;) {
if ((l_N_830 == NULL)) goto L_end831;
{
{
R24 * l_F_832; memset(&l_F_832, 0, sizeof l_F_832);
l_F_832 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_830))).f_NAME, l_FT_829, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_832))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_832))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_832, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_830))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_830))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_833; memset(&l_Y_833, 0, sizeof l_Y_833);
l_Y_833 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_830))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_833))).f_T = l_FT_829;
S_R10(&((*(R12 *)rt_nil_check(l_Y_833))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_832))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_833))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_833))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_833))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_833, ((*(R21 *)rt_nil_check(l_D_827))).f_LINE);
}
}
}
l_N_830 = ((*(R21 *)rt_nil_check(l_N_830))).f_NEXT;
}
RT_B_TICK();
} L_end831: ;
}
}
else
{
{
R24 * l_TF_834; memset(&l_TF_834, 0, sizeof l_TF_834);
l_TF_834 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_827))).f_NAME);
R21 * l_S_835; memset(&l_S_835, 0, sizeof l_S_835);
l_S_835 = ((*(R21 *)rt_nil_check(l_D_827))).f_A;
if ((l_TF_834 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_827))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_827))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_834))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_827))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_827))).f_NAME);
}
{
R21 * l_O_836; memset(&l_O_836, 0, sizeof l_O_836);
l_O_836 = p_DECLS;
for (;;) {
if ((l_O_836 == l_D_827)) goto L_end837;
{
if ((((*(R21 *)rt_nil_check(l_O_836))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_836))).f_NAME, ((*(R21 *)rt_nil_check(l_D_827))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_827))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_827))).f_NAME);
}
}
l_O_836 = ((*(R21 *)rt_nil_check(l_O_836))).f_NEXT;
}
RT_B_TICK();
} L_end837: ;
}
r_CHECK_VARIANT_NAMES(l_D_827, ((*(R24 *)rt_nil_check(l_TF_834))).f_T);
for (;;) {
if ((l_S_835 == NULL)) goto L_end838;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_835))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_827))).f_NAME), ((*(R21 *)rt_nil_check(l_S_835))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_835 = ((*(R21 *)rt_nil_check(l_S_835))).f_NEXT;
}
RT_B_TICK();
} L_end838: ;
}
}
l_D_827 = ((*(R21 *)rt_nil_check(l_D_827))).f_NEXT;
}
RT_B_TICK();
} L_end828: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_839; memset(&l_S_839, 0, sizeof l_S_839);
l_S_839 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_840; memset(&l_LOS_840, 0, sizeof l_LOS_840);
l_LOS_840 = NULL;
R21 * l_HIS_841; memset(&l_HIS_841, 0, sizeof l_HIS_841);
l_HIS_841 = NULL;
rt_int l_LO_LIM_842; memset(&l_LO_LIM_842, 0, sizeof l_LO_LIM_842);
rt_int l_HI_LIM_843; memset(&l_HI_LIM_843, 0, sizeof l_HI_LIM_843);
R22 * l_R_844; memset(&l_R_844, 0, sizeof l_R_844);
l_R_844 = r_REAL_TYPE(p_TT);
l_LO_LIM_842 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_843 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_844))).f_KIND == g_T_ENUM))
{
l_LO_LIM_842 = ((rt_int)0LL);
l_HI_LIM_843 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_844))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_844))).f_KIND == g_T_BOOL))
{
l_LO_LIM_842 = ((rt_int)0LL);
l_HI_LIM_843 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_844))).f_MLO).f_OK)
{
l_LO_LIM_842 = (((*(R22 *)rt_nil_check(l_R_844))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_844))).f_MHI).f_OK)
{
l_HI_LIM_843 = (((*(R22 *)rt_nil_check(l_R_844))).f_MHI).f_V;
}
for (;;) {
if ((l_S_839 == NULL)) goto L_end845;
{
{
R21 * l_L_846; memset(&l_L_846, 0, sizeof l_L_846);
l_L_846 = ((*(R21 *)rt_nil_check(l_S_839))).f_A;
for (;;) {
if ((l_L_846 == NULL)) goto L_end847;
{
{
R23 l_A_848; memset(&l_A_848, 0, sizeof l_A_848);
R23 l_B_849; memset(&l_B_849, 0, sizeof l_B_849);
if ((((*(R21 *)rt_nil_check(l_L_846))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_848, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_846))).f_A, p_TT), 0);
S_R23(&l_B_849, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_846))).f_B, p_TT), 0);
if (((l_A_848).f_OK && (((((*(R21 *)rt_nil_check(l_L_846))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_846))).f_IV == ((rt_int)3LL))))))
{
(l_A_848).f_V = rt_add((l_A_848).f_V, ((rt_int)1LL));
}
if (((l_B_849).f_OK && (((*(R21 *)rt_nil_check(l_L_846))).f_IV >= ((rt_int)2LL))))
{
(l_B_849).f_V = rt_sub((l_B_849).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_848, r_ENUM_MANIFEST(l_L_846, p_TT), 0);
S_R23(&l_B_849, l_A_848, 0);
}
if ((!(((l_A_848).f_OK && (l_B_849).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_846))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_848).f_V < l_LO_LIM_842) || ((l_B_849).f_V > l_HI_LIM_843)) || ((l_A_848).f_V > (l_B_849).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_846))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_850; memset(&l_P_850, 0, sizeof l_P_850);
l_P_850 = l_LOS_840;
R21 * l_Q_851; memset(&l_Q_851, 0, sizeof l_Q_851);
l_Q_851 = l_HIS_841;
for (;;) {
if ((l_P_850 == NULL)) goto L_end852;
{
if ((((l_A_848).f_V <= ((*(R21 *)rt_nil_check(l_Q_851))).f_IV) && ((l_B_849).f_V >= ((*(R21 *)rt_nil_check(l_P_850))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_846))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_850 = ((*(R21 *)rt_nil_check(l_P_850))).f_NEXT;
l_Q_851 = ((*(R21 *)rt_nil_check(l_Q_851))).f_NEXT;
}
RT_B_TICK();
} L_end852: ;
}
{
R21 * l_P_853; memset(&l_P_853, 0, sizeof l_P_853);
l_P_853 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_854; memset(&l_Q_854, 0, sizeof l_Q_854);
l_Q_854 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_853))).f_IV = (l_A_848).f_V;
((*(R21 *)rt_nil_check(l_Q_854))).f_IV = (l_B_849).f_V;
((*(R21 *)rt_nil_check(l_P_853))).f_NEXT = l_LOS_840;
((*(R21 *)rt_nil_check(l_Q_854))).f_NEXT = l_HIS_841;
l_LOS_840 = l_P_853;
l_HIS_841 = l_Q_854;
}
}
l_L_846 = ((*(R21 *)rt_nil_check(l_L_846))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
}
l_S_839 = ((*(R21 *)rt_nil_check(l_S_839))).f_NEXT;
}
RT_B_TICK();
} L_end845: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_855; memset(&l_T_855, 0, sizeof l_T_855);
l_T_855 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_856; memset(&l_TAIL_856, 0, sizeof l_TAIL_856);
l_TAIL_856 = NULL;
((*(R22 *)rt_nil_check(l_T_855))).f_BASE = l_T_855;
((*(R22 *)rt_nil_check(l_T_855))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_855))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_855))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_855))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_855))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_855))).f_CNAME));
}
{
R21 * l_F_857; memset(&l_F_857, 0, sizeof l_F_857);
l_F_857 = p_FORMALS;
for (;;) {
if ((l_F_857 == NULL)) goto L_end858;
{
if ((!(((*(R21 *)rt_nil_check(l_F_857))).f_B == NULL)))
{
{
R22 * l_FT_859; memset(&l_FT_859, 0, sizeof l_FT_859);
l_FT_859 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_857))).f_B);
R21 * l_N_860; memset(&l_N_860, 0, sizeof l_N_860);
l_N_860 = ((*(R21 *)rt_nil_check(l_F_857))).f_A;
rt_int l_KIND_861; memset(&l_KIND_861, 0, sizeof l_KIND_861);
l_KIND_861 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_857))).f_IV == ((rt_int)1LL)))
{
l_KIND_861 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_859))) || (!(((*(R22 *)rt_nil_check(l_FT_859))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_857))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_860 == NULL)) goto L_end862;
{
r_ADD_FIELD(l_T_855, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_860))).f_NAME, l_FT_859, l_KIND_861), &l_TAIL_856);
l_N_860 = ((*(R21 *)rt_nil_check(l_N_860))).f_NEXT;
}
RT_B_TICK();
} L_end862: ;
}
}
l_F_857 = ((*(R21 *)rt_nil_check(l_F_857))).f_NEXT;
}
RT_B_TICK();
} L_end858: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_855, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_856);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_COMPLETE_RECORD(l_T_855);
{ R22 * rv863 = l_T_855;
return rv863; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_864; memset(&l_D_864, 0, sizeof l_D_864);
l_D_864 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_865; memset(&l_CLASS_865, 0, sizeof l_CLASS_865);
l_CLASS_865 = NULL;
R20 * l_TARGS_866; memset(&l_TARGS_866, 0, sizeof l_TARGS_866);
l_TARGS_866 = NULL;
R25 * l_VARGS_867; memset(&l_VARGS_867, 0, sizeof l_VARGS_867);
l_VARGS_867 = NULL;
R25 * l_VTAIL_868; memset(&l_VTAIL_868, 0, sizeof l_VTAIL_868);
l_VTAIL_868 = NULL;
R21 * l_A_869; memset(&l_A_869, 0, sizeof l_A_869);
l_A_869 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_870; memset(&l_F_870, 0, sizeof l_F_870);
l_F_870 = ((*(R21 *)rt_nil_check(l_D_864))).f_A;
for (;;) {
if ((l_F_870 == NULL)) goto L_end871;
{
{
R21 * l_N_872; memset(&l_N_872, 0, sizeof l_N_872);
l_N_872 = ((*(R21 *)rt_nil_check(l_F_870))).f_A;
for (;;) {
if ((l_N_872 == NULL)) goto L_end873;
{
if ((l_A_869 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_870))).f_B == NULL))
{
{
R20 * l_B_874; memset(&l_B_874, 0, sizeof l_B_874);
l_B_874 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_874)), ({ R20 rc875; memset(&rc875, 0, sizeof rc875);  S_R10(&rc875.f_NAME, ((*(R21 *)rt_nil_check(l_N_872))).f_NAME, 0); rc875.f_T = r_ARG_TYPE(l_A_869); S_R10(&rc875.f_C, r_NO_TEXT(), 0); rc875.f_HASMV = 0; rc875.f_MV = ((rt_int)0LL); rc875.f_R = NULL; rc875.f_NEXT = l_TARGS_866; rc875; }), 0);
l_TARGS_866 = l_B_874;
}
}
else
{
{
R25 * l_V_876; memset(&l_V_876, 0, sizeof l_V_876);
l_V_876 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_876)), ({ R25 rc877; memset(&rc877, 0, sizeof rc877);  S_R10(&rc877.f_LO, r_NO_TEXT(), 0); S_R10(&rc877.f_HI, r_NO_TEXT(), 0); S_R23(&rc877.f_MLO, r_NO_MVAL(), 0); S_R23(&rc877.f_MHI, r_NO_MVAL(), 0); rc877.f_ANYARG = 0; rc877.f_NEXT = NULL; rc877; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_870))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_869))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_876))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_876))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_876))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_876))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_876))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_869))).f_NAME, (((*(R21 *)rt_nil_check(l_A_869))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_878; memset(&l_FT_878, 0, sizeof l_FT_878);
l_FT_878 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_870))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_876))).f_LO, r_CONVERT(r_EXPR(l_A_869, l_FT_878), l_FT_878, ((*(R21 *)rt_nil_check(l_A_869))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_876))).f_MLO, r_ENUM_MANIFEST(l_A_869, l_FT_878), 0);
if ((((((*(R25 *)rt_nil_check(l_V_876))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_878))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_878))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_876))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_878))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_876))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_878))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_869))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_870))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_876))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_869))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_868 == NULL))
{
l_VARGS_867 = l_V_876;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_868))).f_NEXT = l_V_876;
}
l_VTAIL_868 = l_V_876;
}
}
l_A_869 = ((*(R21 *)rt_nil_check(l_A_869))).f_NEXT;
l_N_872 = ((*(R21 *)rt_nil_check(l_N_872))).f_NEXT;
}
RT_B_TICK();
} L_end873: ;
}
l_F_870 = ((*(R21 *)rt_nil_check(l_F_870))).f_NEXT;
}
RT_B_TICK();
} L_end871: ;
if ((!(l_A_869 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_879; memset(&l_R_879, 0, sizeof l_R_879);
l_R_879 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_879 == NULL)) goto L_end880;
{
if (((((*(R12 *)rt_nil_check(l_R_879))).f_DECL == l_D_864) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_879))).f_BINDINGS, l_TARGS_866)))
{
l_CLASS_865 = ((*(R12 *)rt_nil_check(l_R_879))).f_T;
goto L_end880;
}
l_R_879 = ((*(R12 *)rt_nil_check(l_R_879))).f_INSTANCES;
}
RT_B_TICK();
} L_end880: ;
}
if ((l_CLASS_865 == NULL))
{
{
R12 * l_R_881; memset(&l_R_881, 0, sizeof l_R_881);
l_R_881 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_882; memset(&l_B_882, 0, sizeof l_B_882);
l_B_882 = l_TARGS_866;
R20 * l_SAVED_883; memset(&l_SAVED_883, 0, sizeof l_SAVED_883);
l_SAVED_883 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_884; memset(&l_ENTERED_884, 0, sizeof l_ENTERED_884);
((*(R12 *)rt_nil_check(l_R_881))).f_DECL = l_D_864;
((*(R12 *)rt_nil_check(l_R_881))).f_BINDINGS = l_TARGS_866;
((*(R12 *)rt_nil_check(l_R_881))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_881;
l_ENTERED_884 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_882 == NULL)) goto L_end885;
{
{
R12 * l_TY_886; memset(&l_TY_886, 0, sizeof l_TY_886);
l_TY_886 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_882))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_886))).f_T = ((*(R20 *)rt_nil_check(l_B_882))).f_T;
r_DEFINE(l_TY_886, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_882 = ((*(R20 *)rt_nil_check(l_B_882))).f_NEXT;
}
RT_B_TICK();
} L_end885: ;
l_F_870 = ((*(R21 *)rt_nil_check(l_D_864))).f_A;
for (;;) {
if ((l_F_870 == NULL)) goto L_end887;
{
if ((!(((*(R21 *)rt_nil_check(l_F_870))).f_B == NULL)))
{
{
R21 * l_N_888; memset(&l_N_888, 0, sizeof l_N_888);
l_N_888 = ((*(R21 *)rt_nil_check(l_F_870))).f_A;
for (;;) {
if ((l_N_888 == NULL)) goto L_end889;
{
{
R12 * l_P_890; memset(&l_P_890, 0, sizeof l_P_890);
l_P_890 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_888))).f_NAME);
((*(R12 *)rt_nil_check(l_P_890))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_870))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_890))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_888))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_890))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_890))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_890, ((*(R21 *)rt_nil_check(l_F_870))).f_LINE);
}
l_N_888 = ((*(R21 *)rt_nil_check(l_N_888))).f_NEXT;
}
RT_B_TICK();
} L_end889: ;
}
}
l_F_870 = ((*(R21 *)rt_nil_check(l_F_870))).f_NEXT;
}
RT_B_TICK();
} L_end887: ;
if ((l_TARGS_866 == NULL))
{
l_CLASS_865 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_864))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_864))).f_A);
}
else
{
l_CLASS_865 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_864))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_864))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_865))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_881))).f_T = l_CLASS_865;
r_CLOSE_SCOPE();
if (l_ENTERED_884)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_883;
}
}
{
R22 * l_T_891; memset(&l_T_891, 0, sizeof l_T_891);
l_T_891 = r_COPY_TYP(l_CLASS_865);
((*(R22 *)rt_nil_check(l_T_891))).f_ARGS = l_VARGS_867;
{ R22 * rv892 = l_T_891;
return rv892; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_893; memset(&l_P_893, 0, sizeof l_P_893);
l_P_893 = p_A;
R20 * l_Q_894; memset(&l_Q_894, 0, sizeof l_Q_894);
l_Q_894 = p_B;
for (;;) {
if (((l_P_893 == NULL) || (l_Q_894 == NULL))) goto L_end895;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_893))).f_T, ((*(R20 *)rt_nil_check(l_Q_894))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_893))).f_T, ((*(R20 *)rt_nil_check(l_Q_894))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_893))).f_T, ((*(R20 *)rt_nil_check(l_Q_894))).f_T))))
{
{ rt_int rv896 = 0;
return rv896; }
}
l_P_893 = ((*(R20 *)rt_nil_check(l_P_893))).f_NEXT;
l_Q_894 = ((*(R20 *)rt_nil_check(l_Q_894))).f_NEXT;
}
RT_B_TICK();
} L_end895: ;
{ rt_int rv897 = ((l_P_893 == NULL) && (l_Q_894 == NULL));
return rv897; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_898; memset(&l_A_898, 0, sizeof l_A_898);
l_A_898 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_898 == NULL)) goto L_end899;
{
if (((*(R25 *)rt_nil_check(l_A_898))).f_ANYARG)
{
{ rt_int rv900 = 1;
return rv900; }
}
l_A_898 = ((*(R25 *)rt_nil_check(l_A_898))).f_NEXT;
}
RT_B_TICK();
} L_end899: ;
{ rt_int rv901 = 0;
return rv901; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_902; memset(&l_L_902, 0, sizeof l_L_902);
l_L_902 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_903; memset(&l_C_903, 0, sizeof l_C_903);
S_R10(&l_C_903, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_904; memset(&l_TF_904, 0, sizeof l_TF_904);
l_TF_904 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_902 == NULL)) goto L_end905;
{
if ((((*(R21 *)rt_nil_check(l_L_902))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_903, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_903, p_SELF, ((*(R24 *)rt_nil_check(l_TF_904))).f_CNAME), 0);
S_R10(&l_C_903, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_903, (r_EXPR(((*(R21 *)rt_nil_check(l_L_902))).f_A, ((*(R24 *)rt_nil_check(l_TF_904))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_904))).f_CNAME), 0);
S_R10(&l_C_903, r_FMT2(rt_str("@@)", 3), l_C_903, (r_EXPR(((*(R21 *)rt_nil_check(l_L_902))).f_B, ((*(R24 *)rt_nil_check(l_TF_904))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_903, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_903, p_SELF, ((*(R24 *)rt_nil_check(l_TF_904))).f_CNAME, (r_EXPR(l_L_902, ((*(R24 *)rt_nil_check(l_TF_904))).f_T)).f_C), 0);
}
l_L_902 = ((*(R21 *)rt_nil_check(l_L_902))).f_NEXT;
}
RT_B_TICK();
} L_end905: ;
{ R10 rv906 = r_FMT1(rt_str("(@)", 3), l_C_903);
return rv906; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_907; memset(&l_C_907, 0, sizeof l_C_907);
S_R10(&l_C_907, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_908; memset(&l_F_908, 0, sizeof l_F_908);
l_F_908 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_909; memset(&l_BODY_909, 0, sizeof l_BODY_909);
S_R10(&l_BODY_909, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_910; memset(&l_ASSIGN_910, 0, sizeof l_ASSIGN_910);
S_R10(&l_ASSIGN_910, r_MK(rt_str("", 0)), 0);
R10 l_COPY_911; memset(&l_COPY_911, 0, sizeof l_COPY_911);
S_R10(&l_COPY_911, r_MK(rt_str("", 0)), 0);
R10 l_EQ_912; memset(&l_EQ_912, 0, sizeof l_EQ_912);
S_R10(&l_EQ_912, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_908 == NULL)) goto L_end913;
{
S_R10(&l_BODY_909, r_FMT3(rt_str("@ @ @;", 6), l_BODY_909, r_CTYPE(((*(R24 *)rt_nil_check(l_F_908))).f_T), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME), 0);
S_R10(&l_COPY_911, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_911, ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_908))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_908))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_910, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_910, ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_908))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_910, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_910, ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_910, r_FMT2(rt_str("@ @", 3), l_ASSIGN_910, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_908))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_908))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_912, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_912, r_VARIANT_COND(l_F_908, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_908))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_912, r_FMT2(rt_str("@ && @", 6), l_EQ_912, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_908))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_908))).f_CNAME))), 0);
}
l_F_908 = ((*(R24 *)rt_nil_check(l_F_908))).f_NEXT;
}
RT_B_TICK();
} L_end913: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_907, l_BODY_909));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_907, l_C_907, l_C_907));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_907, l_C_907, l_C_907));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_907, l_C_907, l_C_907, l_ASSIGN_910));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_907, l_C_907, l_C_907, l_EQ_912));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_907, l_C_907, l_C_907));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_907, l_C_907, l_C_907, l_C_907));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_911));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_914; memset(&l_ET_C_914, 0, sizeof l_ET_C_914);
S_R10(&l_ET_C_914, r_CTYPE(p_ELEM), 0);
R10 l_KEY_915; memset(&l_KEY_915, 0, sizeof l_KEY_915);
S_R10(&l_KEY_915, r_FMT3(rt_str("@/@/@", 5), l_ET_C_914, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_916; memset(&l_Y_916, 0, sizeof l_Y_916);
l_Y_916 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_916 == NULL)) goto L_end917;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_916))).f_NAME, l_KEY_915) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_916))).f_T, p_ELEM)))
{
{ R10 rv918 = ((*(R12 *)rt_nil_check(l_Y_916))).f_ACCESS;
return rv918; }
}
l_Y_916 = ((*(R12 *)rt_nil_check(l_Y_916))).f_INSTANCES;
}
RT_B_TICK();
} L_end917: ;
l_Y_916 = r_NEW_SYM(g_Y_TYPE, l_KEY_915);
((*(R12 *)rt_nil_check(l_Y_916))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_916))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_916))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_916;
{
R10 l_C_919; memset(&l_C_919, 0, sizeof l_C_919);
S_R10(&l_C_919, ((*(R12 *)rt_nil_check(l_Y_916))).f_ACCESS, 0);
R10 l_D_920; memset(&l_D_920, 0, sizeof l_D_920);
S_R10(&l_D_920, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_919, l_C_919));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_919, l_D_920, l_D_920, l_ET_C_914));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_919, l_C_919, l_C_919));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_919, l_C_919, l_C_919));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_919, l_C_919, l_C_919, l_D_920));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_920, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_919, l_C_919, l_C_919, l_D_920));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_920, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_919, l_C_919, l_C_919));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_919, l_C_919, l_C_919, l_C_919));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_920, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv921 = ((*(R12 *)rt_nil_check(l_Y_916))).f_ACCESS;
return rv921; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_922; memset(&l_K_922, 0, sizeof l_K_922);
l_K_922 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_922 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv923 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv923; }
}
{ R10 rv924 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv924; }
}
else if ((l_K_922 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv925 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv925; }
}
{ R10 rv926 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv926; }
}
else if ((l_K_922 == g_T_SEM))
{
{ R10 rv927 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv927; }
}
else if ((l_K_922 == g_T_ABS))
{
{ R10 rv928 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv928; }
}
else if ((l_K_922 == g_T_ARR))
{
{
R25 * l_B_929; memset(&l_B_929, 0, sizeof l_B_929);
l_B_929 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_930; memset(&l_I_930, 0, sizeof l_I_930);
l_I_930 = ((rt_int)0LL);
R10 l_R_931; memset(&l_R_931, 0, sizeof l_R_931);
S_R10(&l_R_931, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_929 == NULL)) goto L_end932;
{
S_R10(&l_R_931, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_931, p_LV, r_NUM(l_I_930), ((*(R25 *)rt_nil_check(l_B_929))).f_LO), 0);
S_R10(&l_R_931, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_931, p_LV, r_NUM(l_I_930), ((*(R25 *)rt_nil_check(l_B_929))).f_HI), 0);
l_I_930 = rt_add(l_I_930, ((rt_int)1LL));
l_B_929 = ((*(R25 *)rt_nil_check(l_B_929))).f_NEXT;
}
RT_B_TICK();
} L_end932: ;
S_R10(&l_R_931, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_931, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_931, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_931, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_933; memset(&l_IV_933, 0, sizeof l_IV_933);
S_R10(&l_IV_933, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_931, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_931, l_IV_933, l_IV_933, l_IV_933), 0);
S_R10(&l_R_931, r_FMT2(rt_str("@ @ }", 5), l_R_931, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_933))), 0);
}
}
{ R10 rv934 = r_CATS(l_R_931, rt_str(" }", 2));
return rv934; }
}
}
else if ((l_K_922 == g_T_REC))
{
{
R24 * l_F_935; memset(&l_F_935, 0, sizeof l_F_935);
l_F_935 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_936; memset(&l_A_936, 0, sizeof l_A_936);
l_A_936 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_937; memset(&l_R_937, 0, sizeof l_R_937);
S_R10(&l_R_937, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_935 == NULL)) goto L_end938;
{
if ((!(((*(R24 *)rt_nil_check(l_F_935))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_936 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_936))).f_ANYARG))
{
S_R10(&l_R_937, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_937, p_LV, ((*(R24 *)rt_nil_check(l_F_935))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_936))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_935))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_936))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_937, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_937, p_LV, ((*(R24 *)rt_nil_check(l_F_935))).f_CNAME), 0);
}
l_A_936 = ((*(R25 *)rt_nil_check(l_A_936))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_935))).f_T))
{
S_R10(&l_R_937, r_FMT2(rt_str("@ @", 3), l_R_937, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_935))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_935))).f_CNAME)), p_LV)), 0);
}
l_F_935 = ((*(R24 *)rt_nil_check(l_F_935))).f_NEXT;
}
RT_B_TICK();
} L_end938: ;
{ R10 rv939 = l_R_937;
return rv939; }
}
}
{ R10 rv940 = r_NO_TEXT();
return rv940; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_941; memset(&l_K_941, 0, sizeof l_K_941);
l_K_941 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_941 == g_T_STR) || (l_K_941 == g_T_BITS)) || (l_K_941 == g_T_ARR)) || (l_K_941 == g_T_SEM)))
{
{ rt_int rv942 = 1;
return rv942; }
}
else if ((l_K_941 == g_T_ABS))
{
{ rt_int rv943 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv943; }
}
else if ((l_K_941 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv944 = 1;
return rv944; }
}
{
R24 * l_F_945; memset(&l_F_945, 0, sizeof l_F_945);
l_F_945 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_945 == NULL)) goto L_end946;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_945))).f_T))
{
{ rt_int rv947 = 1;
return rv947; }
}
l_F_945 = ((*(R24 *)rt_nil_check(l_F_945))).f_NEXT;
}
RT_B_TICK();
} L_end946: ;
}
}
{ rt_int rv948 = 0;
return rv948; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_949; memset(&l_K_949, 0, sizeof l_K_949);
l_K_949 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_949 == g_T_STR) || (l_K_949 == g_T_BITS)))
{
{ R10 rv950 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv950; }
}
else if ((l_K_949 == g_T_ABS))
{
{ R10 rv951 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv951; }
}
else if (((l_K_949 == g_T_ARR) || (l_K_949 == g_T_REC)))
{
{ R10 rv952 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv952; }
}
{ R10 rv953 = p_V;
return rv953; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_954; memset(&l_K_954, 0, sizeof l_K_954);
l_K_954 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_954 == g_T_STR) || (l_K_954 == g_T_BITS)))
{
{ R10 rv955 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv955; }
}
else if ((l_K_954 == g_T_ABS))
{
{ R10 rv956 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv956; }
}
else if ((l_K_954 == g_T_SEM))
{
{ R10 rv957 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv957; }
}
else if ((l_K_954 == g_T_ARR))
{
{ R10 rv958 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv958; }
}
else if ((l_K_954 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv959 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv959; }
}
{ R10 rv960 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv960; }
}
{ R10 rv961 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv961; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_962; memset(&l_K_962, 0, sizeof l_K_962);
l_K_962 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_962 == g_T_STR) || (l_K_962 == g_T_BITS)))
{
{ R10 rv963 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv963; }
}
else if ((l_K_962 == g_T_ABS))
{
{ R10 rv964 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv964; }
}
else if (((l_K_962 == g_T_ARR) || (l_K_962 == g_T_REC)))
{
{ R10 rv965 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv965; }
}
else if ((l_K_962 == g_T_SEM))
{
{ R10 rv966 = r_MK(rt_str("0", 1));
return rv966; }
}
{ R10 rv967 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv967; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv968 = p_V;
return rv968; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv969 = p_V;
return rv969; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv970 = p_V;
return rv970; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv971 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv971; }
}
{ R10 rv972 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv972; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv973 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv973; }
}
{ R10 rv974 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv974; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv975 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv975; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv976 = 1;
return rv976; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv977 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv977; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv978 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv978; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv979 = 0;
return rv979; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv980 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv980; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv981 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv981; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv982 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv982; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv983 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv983; }
}
{ rt_int rv984 = 1;
return rv984; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv985 = 1;
return rv985; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv986 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv986; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv987 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv987; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv988 = 0;
return rv988; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv989 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv989; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv990 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv990; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv991 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv991; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv992 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv992; }
}
{ rt_int rv993 = 1;
return rv993; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv994 = 0;
return rv994; }
}
{ rt_int rv995 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv995; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_996; memset(&l_P_996, 0, sizeof l_P_996);
l_P_996 = p_A;
R25 * l_Q_997; memset(&l_Q_997, 0, sizeof l_Q_997);
l_Q_997 = p_B;
for (;;) {
if (((l_P_996 == NULL) || (l_Q_997 == NULL))) goto L_end998;
{
if ((r_IS_GEN_ARG(l_P_996) || r_IS_GEN_ARG(l_Q_997)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_996))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_997))).f_ANYARG)))
{
{ rt_int rv999 = 0;
return rv999; }
}
if (((((*(R25 *)rt_nil_check(l_P_996))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_997))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_996))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_997))).f_MLO).f_V)))
{
{ rt_int rv1000 = 0;
return rv1000; }
}
}
l_P_996 = ((*(R25 *)rt_nil_check(l_P_996))).f_NEXT;
l_Q_997 = ((*(R25 *)rt_nil_check(l_Q_997))).f_NEXT;
}
RT_B_TICK();
} L_end998: ;
{ rt_int rv1001 = ((l_P_996 == NULL) && (l_Q_997 == NULL));
return rv1001; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_1002; memset(&l_CS_1002, 0, sizeof l_CS_1002);
l_CS_1002 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_1003; memset(&l_T_1003, 0, sizeof l_T_1003);
rt_int l_LEV_1004; memset(&l_LEV_1004, 0, sizeof l_LEV_1004);
if ((((*(R18 *)rt_nil_check(l_CS_1002))).f_LEVEL == p_LEVEL))
{
{ R10 rv1005 = r_MK(rt_str("F", 1));
return rv1005; }
}
if (((*(R18 *)rt_nil_check(l_CS_1002))).f_FRAMED)
{
S_R10(&l_T_1003, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_1003, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1004 = rt_sub(((*(R18 *)rt_nil_check(l_CS_1002))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1004 <= p_LEVEL)) goto L_end1006;
{
S_R10(&l_T_1003, r_CATS(l_T_1003, rt_str("->up", 4)), 0);
l_LEV_1004 = rt_sub(l_LEV_1004, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1006: ;
{ R10 rv1007 = l_T_1003;
return rv1007; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv1008 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1008; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1009 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1009; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv1010 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1010; }
}
{ R10 rv1011 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1011; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1012; memset(&l_CS_1012, 0, sizeof l_CS_1012);
l_CS_1012 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1013; memset(&l_T_1013, 0, sizeof l_T_1013);
l_T_1013 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1014; memset(&l_CN_1014, 0, sizeof l_CN_1014);
if ((((*(R18 *)rt_nil_check(l_CS_1012))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1014, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1014, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1013), l_CN_1014));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1014, 0);
{ R10 rv1015 = l_CN_1014;
return rv1015; }
}
S_R10(&l_CN_1014, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1014, 0);
if (((*(R18 *)rt_nil_check(l_CS_1012))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1013), l_CN_1014), &((*(R18 *)rt_nil_check(l_CS_1012))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1014), 0);
{ R10 rv1016 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1016; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1013), l_CN_1014, l_CN_1014, l_CN_1014));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1014, 0);
{ R10 rv1017 = l_CN_1014;
return rv1017; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1018; memset(&l_T_1018, 0, sizeof l_T_1018);
l_T_1018 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1019; memset(&l_N_1019, 0, sizeof l_N_1019);
l_N_1019 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1020; memset(&l_V_1020, 0, sizeof l_V_1020);
rt_int l_HAVE_V_1021; memset(&l_HAVE_V_1021, 0, sizeof l_HAVE_V_1021);
l_HAVE_V_1021 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1018))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1018))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1019 == NULL)) goto L_end1022;
{
{
R12 * l_Y_1023; memset(&l_Y_1023, 0, sizeof l_Y_1023);
l_Y_1023 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1019))).f_NAME);
R10 l_CN_1024; memset(&l_CN_1024, 0, sizeof l_CN_1024);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1023))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1023))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1018) && (((*(R22 *)rt_nil_check(l_T_1018))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1025; memset(&l_M_1025, 0, sizeof l_M_1025);
S_R23(&l_M_1025, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1023))).f_HASMV = (l_M_1025).f_OK;
((*(R12 *)rt_nil_check(l_Y_1023))).f_MV = (l_M_1025).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1023))).f_T = l_T_1018;
S_R10(&l_CN_1024, r_NEW_OBJECT(l_Y_1023, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1018))
{
r_CODE(r_INIT_CODE(l_T_1018, l_CN_1024));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1021))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1020, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1018), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1021 = 1;
}
r_CODE(r_STORE_CODE(l_T_1018, l_CN_1024, l_V_1020, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1023, ((*(R21 *)rt_nil_check(l_N_1019))).f_LINE);
}
l_N_1019 = ((*(R21 *)rt_nil_check(l_N_1019))).f_NEXT;
}
RT_B_TICK();
} L_end1022: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1026 = ({ R26 rc1027; memset(&rc1027, 0, sizeof rc1027);  S_R10(&rc1027.f_C, p_C, 0); rc1027.f_T = p_T; rc1027.f_LVAL = 0; S_R10(&rc1027.f_SELF, r_NO_TEXT(), 0); rc1027; });
return rv1026; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1028 = ({ R26 rc1029; memset(&rc1029, 0, sizeof rc1029);  S_R10(&rc1029.f_C, p_C, 0); rc1029.f_T = p_T; rc1029.f_LVAL = p_LVAL; S_R10(&rc1029.f_SELF, p_SELF, 0); rc1029; });
return rv1028; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1030; memset(&l_T_1030, 0, sizeof l_T_1030);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1031 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1031; }
}
l_T_1030 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1030))).f_SCALE = p_SCALE;
{ R22 * rv1032 = l_T_1030;
return rv1032; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1033; memset(&l_T_1033, 0, sizeof l_T_1033);
l_T_1033 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1033))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1033))).f_MLEN, p_M, 0);
{ R22 * rv1034 = l_T_1033;
return rv1034; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1035; memset(&l_S_1035, 0, sizeof l_S_1035);
l_S_1035 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1035, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1036; memset(&l_AT_1036, 0, sizeof l_AT_1036);
l_AT_1036 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1037; memset(&l_R_1037, 0, sizeof l_R_1037);
S_R10(&l_R_1037, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1039_lo = ((rt_int)0LL), it1039_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1039 = it1039_lo; it1039 <= it1039_hi; it1039++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1035, it1039, it1039), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1035, it1039, it1039), rt_str("\\", 1))))
{
S_R10(&l_R_1037, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1035, it1039, it1039))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1035, it1039, it1039), rt_str("\?", 1)))
{
S_R10(&l_R_1037, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1040; memset(&l_C_1040, 0, sizeof l_C_1040);
l_C_1040 = r_CODE_OF(rt_b_slice(l_S_1035, it1039, it1039));
if (({ rt_int iv1041 = l_C_1040; (((rt_int)32LL) <= iv1041) && (iv1041 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1037, r_MK(rt_b_slice(l_S_1035, it1039, it1039)), 0);
}
else
{
S_R10(&l_R_1037, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1040, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1040, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1040, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1039 == it1039_hi) break;
} } L_end1038: ;
S_R10(&l_R_1037, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1042 = ({ R10 rc1043; memset(&rc1043, 0, sizeof rc1043);  rc1043.f_AT = l_AT_1036; rc1043.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1036); rc1043.f_H = rt_neg(((rt_int)1LL)); rc1043; });
return rv1042; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1044; memset(&l_K_1044, 0, sizeof l_K_1044);
l_K_1044 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1045; memset(&l_NO_1045, 0, sizeof l_NO_1045);
S_R23(&l_NO_1045, ({ R23 rc1046; memset(&rc1046, 0, sizeof rc1046);  rc1046.f_OK = 0; rc1046.f_V = ((rt_int)0LL); rc1046; }), 0);
if ((l_K_1044 == g_N_INT))
{
{ R23 rv1047 = ({ R23 rc1048; memset(&rc1048, 0, sizeof rc1048);  rc1048.f_OK = 1; rc1048.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1048; });
return rv1047; }
}
else if ((l_K_1044 == g_N_PAREN))
{
{ R23 rv1049 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1049; }
}
else if ((l_K_1044 == g_N_BOOL))
{
{ R23 rv1050 = ({ R23 rc1051; memset(&rc1051, 0, sizeof rc1051);  rc1051.f_OK = 1; rc1051.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1051; });
return rv1050; }
}
else if ((l_K_1044 == g_N_UNOP))
{
{
R23 l_A_1052; memset(&l_A_1052, 0, sizeof l_A_1052);
S_R23(&l_A_1052, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1052).f_OK))
{
{ R23 rv1053 = l_NO_1045;
return rv1053; }
}
{ R23 rv1054 = ({ R23 rc1055; memset(&rc1055, 0, sizeof rc1055);  rc1055.f_OK = 1; rc1055.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1052).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1055; });
return rv1054; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1056 = l_A_1052;
return rv1056; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1057 = ({ R23 rc1058; memset(&rc1058, 0, sizeof rc1058);  rc1058.f_OK = (l_A_1052).f_OK; rc1058.f_V = rt_sub(((rt_int)1LL), (l_A_1052).f_V); rc1058; });
return rv1057; }
}
}
}
else if ((l_K_1044 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1059 = l_NO_1045;
return rv1059; }
}
{
R23 l_A_1060; memset(&l_A_1060, 0, sizeof l_A_1060);
S_R23(&l_A_1060, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1061; memset(&l_B_1061, 0, sizeof l_B_1061);
S_R23(&l_B_1061, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1062; memset(&l_OP_1062, 0, sizeof l_OP_1062);
S_R10(&l_OP_1062, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1062, rt_str("&", 1)))
{
if (((((l_A_1060).f_OK && ((l_A_1060).f_V == ((rt_int)0LL)))) || (((l_B_1061).f_OK && ((l_B_1061).f_V == ((rt_int)0LL))))))
{
{ R23 rv1063 = ({ R23 rc1064; memset(&rc1064, 0, sizeof rc1064);  rc1064.f_OK = 1; rc1064.f_V = ((rt_int)0LL); rc1064; });
return rv1063; }
}
if (((l_A_1060).f_OK && (l_B_1061).f_OK))
{
{ R23 rv1065 = ({ R23 rc1066; memset(&rc1066, 0, sizeof rc1066);  rc1066.f_OK = 1; rc1066.f_V = ((rt_int)1LL); rc1066; });
return rv1065; }
}
{ R23 rv1067 = l_NO_1045;
return rv1067; }
}
else if (r_TEQS(l_OP_1062, rt_str("!", 1)))
{
if (((((l_A_1060).f_OK && ((l_A_1060).f_V == ((rt_int)1LL)))) || (((l_B_1061).f_OK && ((l_B_1061).f_V == ((rt_int)1LL))))))
{
{ R23 rv1068 = ({ R23 rc1069; memset(&rc1069, 0, sizeof rc1069);  rc1069.f_OK = 1; rc1069.f_V = ((rt_int)1LL); rc1069; });
return rv1068; }
}
if (((l_A_1060).f_OK && (l_B_1061).f_OK))
{
{ R23 rv1070 = ({ R23 rc1071; memset(&rc1071, 0, sizeof rc1071);  rc1071.f_OK = 1; rc1071.f_V = ((rt_int)0LL); rc1071; });
return rv1070; }
}
{ R23 rv1072 = l_NO_1045;
return rv1072; }
}
if ((!(((l_A_1060).f_OK && (l_B_1061).f_OK))))
{
{ R23 rv1073 = l_NO_1045;
return rv1073; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1074 = l_NO_1045;
return rv1074; }
}
if (((r_TEQS(l_OP_1062, rt_str("+", 1)) || r_TEQS(l_OP_1062, rt_str("-", 1))) || r_TEQS(l_OP_1062, rt_str("*", 1))))
{
{ R23 rv1075 = ({ R23 rc1076; memset(&rc1076, 0, sizeof rc1076);  rc1076.f_OK = 1; rc1076.f_V = r_MANIFEST_ARITH(l_OP_1062, (l_A_1060).f_V, (l_B_1061).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1076; });
return rv1075; }
}
else if ((r_TEQS(l_OP_1062, rt_str("//", 2)) && (!((l_B_1061).f_V == ((rt_int)0LL)))))
{
{ R23 rv1077 = ({ R23 rc1078; memset(&rc1078, 0, sizeof rc1078);  rc1078.f_OK = 1; rc1078.f_V = rt_quot((l_A_1060).f_V, (l_B_1061).f_V); rc1078; });
return rv1077; }
}
else if ((r_TEQS(l_OP_1062, rt_str("MOD", 3)) && (!((l_B_1061).f_V == ((rt_int)0LL)))))
{
{ R23 rv1079 = ({ R23 rc1080; memset(&rc1080, 0, sizeof rc1080);  rc1080.f_OK = 1; rc1080.f_V = rt_rem((l_A_1060).f_V, (l_B_1061).f_V); rc1080; });
return rv1079; }
}
else if (r_TEQS(l_OP_1062, rt_str("=", 1)))
{
{ R23 rv1081 = ({ R23 rc1082; memset(&rc1082, 0, sizeof rc1082);  rc1082.f_OK = 1; rc1082.f_V = r_BOOL_INT(((l_A_1060).f_V == (l_B_1061).f_V)); rc1082; });
return rv1081; }
}
else if (r_TEQS(l_OP_1062, rt_str("<>", 2)))
{
{ R23 rv1083 = ({ R23 rc1084; memset(&rc1084, 0, sizeof rc1084);  rc1084.f_OK = 1; rc1084.f_V = r_BOOL_INT((!((l_A_1060).f_V == (l_B_1061).f_V))); rc1084; });
return rv1083; }
}
else if (r_TEQS(l_OP_1062, rt_str("<", 1)))
{
{ R23 rv1085 = ({ R23 rc1086; memset(&rc1086, 0, sizeof rc1086);  rc1086.f_OK = 1; rc1086.f_V = r_BOOL_INT(((l_A_1060).f_V < (l_B_1061).f_V)); rc1086; });
return rv1085; }
}
else if (r_TEQS(l_OP_1062, rt_str(">", 1)))
{
{ R23 rv1087 = ({ R23 rc1088; memset(&rc1088, 0, sizeof rc1088);  rc1088.f_OK = 1; rc1088.f_V = r_BOOL_INT(((l_A_1060).f_V > (l_B_1061).f_V)); rc1088; });
return rv1087; }
}
else if (r_TEQS(l_OP_1062, rt_str("<=", 2)))
{
{ R23 rv1089 = ({ R23 rc1090; memset(&rc1090, 0, sizeof rc1090);  rc1090.f_OK = 1; rc1090.f_V = r_BOOL_INT(((l_A_1060).f_V <= (l_B_1061).f_V)); rc1090; });
return rv1089; }
}
else if (r_TEQS(l_OP_1062, rt_str(">=", 2)))
{
{ R23 rv1091 = ({ R23 rc1092; memset(&rc1092, 0, sizeof rc1092);  rc1092.f_OK = 1; rc1092.f_V = r_BOOL_INT(((l_A_1060).f_V >= (l_B_1061).f_V)); rc1092; });
return rv1091; }
}
}
}
else if ((l_K_1044 == g_N_IN))
{
{
R23 l_A_1093; memset(&l_A_1093, 0, sizeof l_A_1093);
S_R23(&l_A_1093, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1094; memset(&l_L_1094, 0, sizeof l_L_1094);
S_R23(&l_L_1094, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1095; memset(&l_U_1095, 0, sizeof l_U_1095);
S_R23(&l_U_1095, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1096; memset(&l_LO_1096, 0, sizeof l_LO_1096);
rt_int l_HI_1097; memset(&l_HI_1097, 0, sizeof l_HI_1097);
if ((!(((((l_A_1093).f_OK && (l_L_1094).f_OK) && (l_U_1095).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1098 = l_NO_1045;
return rv1098; }
}
l_LO_1096 = (l_L_1094).f_V;
l_HI_1097 = (l_U_1095).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1096 = rt_add(l_LO_1096, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1097 = rt_sub(l_HI_1097, ((rt_int)1LL));
}
{ R23 rv1099 = ({ R23 rc1100; memset(&rc1100, 0, sizeof rc1100);  rc1100.f_OK = 1; rc1100.f_V = r_BOOL_INT((((l_A_1093).f_V >= l_LO_1096) && ((l_A_1093).f_V <= l_HI_1097))); rc1100; });
return rv1099; }
}
}
else if (((l_K_1044 == g_N_NAME) || (l_K_1044 == g_TS_GEN)))
{
{
R12 * l_Y_1101; memset(&l_Y_1101, 0, sizeof l_Y_1101);
l_Y_1101 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1102; memset(&l_B_1102, 0, sizeof l_B_1102);
l_B_1102 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1102 == NULL)) goto L_end1103;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1102))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1102))).f_HASMV))
{
{ R23 rv1104 = ({ R23 rc1105; memset(&rc1105, 0, sizeof rc1105);  rc1105.f_OK = 1; rc1105.f_V = ((*(R20 *)rt_nil_check(l_B_1102))).f_MV; rc1105; });
return rv1104; }
}
l_B_1102 = ((*(R20 *)rt_nil_check(l_B_1102))).f_NEXT;
}
RT_B_TICK();
} L_end1103: ;
if ((!(l_Y_1101 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1101))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1101))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1101))).f_HASMV))
{
{ R23 rv1106 = ({ R23 rc1107; memset(&rc1107, 0, sizeof rc1107);  rc1107.f_OK = 1; rc1107.f_V = ((*(R12 *)rt_nil_check(l_Y_1101))).f_MV; rc1107; });
return rv1106; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1101))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1108 = ({ R23 rc1109; memset(&rc1109, 0, sizeof rc1109);  rc1109.f_OK = 1; rc1109.f_V = ((*(R12 *)rt_nil_check(l_Y_1101))).f_MV; rc1109; });
return rv1108; }
}
}
}
}
}
else if ((l_K_1044 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1110 = ({ R23 rc1111; memset(&rc1111, 0, sizeof rc1111);  rc1111.f_OK = 1; rc1111.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1111; });
return rv1110; }
}
}
else if ((l_K_1044 == g_N_FIELD))
{
{ R23 rv1112 = r_ATTR_MANIFEST(p_E);
return rv1112; }
}
else if ((l_K_1044 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1113 = ({ R23 rc1114; memset(&rc1114, 0, sizeof rc1114);  rc1114.f_OK = 1; rc1114.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1114; });
return rv1113; }
}
}
{ R23 rv1115 = l_NO_1045;
return rv1115; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1116; memset(&l_A_1116, 0, sizeof l_A_1116);
l_A_1116 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1117; memset(&l_NAME_1117, 0, sizeof l_NAME_1117);
S_R10(&l_NAME_1117, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1118; memset(&l_T_1118, 0, sizeof l_T_1118);
l_T_1118 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1116))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1119; memset(&l_INNER_1119, 0, sizeof l_INNER_1119);
l_INNER_1119 = ((*(R21 *)rt_nil_check(l_A_1116))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1119))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1117, rt_str("MAX", 3)))
{
{ R23 rv1120 = r_SOME(r_MAX_LENGTH());
return rv1120; }
}
else if (r_TEQS(l_NAME_1117, rt_str("MIN", 3)))
{
{ R23 rv1121 = r_SOME(((rt_int)0LL));
return rv1121; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1119))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1119))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1117, rt_str("MAX", 3)))
{
{ R23 rv1122 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1122; }
}
else if (r_TEQS(l_NAME_1117, rt_str("MIN", 3)))
{
{ R23 rv1123 = r_SOME(((rt_int)1LL));
return rv1123; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1119))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1117, rt_str("MAX", 3)))
{
{ R23 rv1124 = r_SOME(((rt_int)1000LL));
return rv1124; }
}
else if (r_TEQS(l_NAME_1117, rt_str("MIN", 3)))
{
{ R23 rv1125 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1125; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1119))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1117, rt_str("MAX", 3)))
{
{ R23 rv1126 = r_SOME(((rt_int)1000LL));
return rv1126; }
}
else if (r_TEQS(l_NAME_1117, rt_str("MIN", 3)))
{
{ R23 rv1127 = r_SOME(((rt_int)2LL));
return rv1127; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1128; memset(&l_Y_1128, 0, sizeof l_Y_1128);
l_Y_1128 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1116))).f_NAME);
if ((l_Y_1128 == NULL))
{
{ R23 rv1129 = r_NO_MVAL();
return rv1129; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_TYPE))
{
l_T_1118 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1116))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1116))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1128))).f_KIND == g_Y_GEN)))
{
l_T_1118 = ((*(R12 *)rt_nil_check(l_Y_1128))).f_T;
}
else
{
{ R23 rv1130 = r_NO_MVAL();
return rv1130; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1117, rt_str("MIN", 3)) || r_TEQS(l_NAME_1117, rt_str("MAX", 3))))
{
{ R23 rv1131 = r_SOME(((*(R21 *)rt_nil_check(l_A_1116))).f_IV);
return rv1131; }
}
l_T_1118 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1116))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1116))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1117, rt_str("MIN", 3)) || r_TEQS(l_NAME_1117, rt_str("MAX", 3))))))
{
{ R23 rv1132 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1116))).f_A))).f_IV);
return rv1132; }
}
}
{
R14 l_SAVED_CODE_1133; memset(&l_SAVED_CODE_1133, 0, sizeof l_SAVED_CODE_1133);
S_R14(&l_SAVED_CODE_1133, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1134; memset(&rc1134, 0, sizeof rc1134);  rc1134.f_HEAD = NULL; rc1134.f_TAIL = NULL; rc1134; }), 0);
l_T_1118 = (r_EXPR(l_A_1116, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1133, 0);
}
}
else
{
{ R23 rv1135 = r_NO_MVAL();
return rv1135; }
}
if ((l_T_1118 == NULL))
{
{ R23 rv1136 = r_NO_MVAL();
return rv1136; }
}
{ R23 rv1137 = r_TYPE_ATTR_MANIFEST(l_T_1118, l_NAME_1117);
return rv1137; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1138; memset(&l_T_1138, 0, sizeof l_T_1138);
l_T_1138 = r_REAL_TYPE(p_T0);
rt_int l_K_1139; memset(&l_K_1139, 0, sizeof l_K_1139);
l_K_1139 = ((*(R22 *)rt_nil_check(l_T_1138))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1140 = r_STATIC_SIZE(p_T0);
return rv1140; }
}
if ((l_K_1139 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1141 = r_SOME(((*(R22 *)rt_nil_check(l_T_1138))).f_SCALE);
return rv1141; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1142 = r_SOME(((rt_int)2LL));
return rv1142; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1138))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1143 = ((*(R22 *)rt_nil_check(l_T_1138))).f_MLO;
return rv1143; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1138))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1144 = ((*(R22 *)rt_nil_check(l_T_1138))).f_MHI;
return rv1144; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1138))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1145 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1145; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1138))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1146 = r_SOME(INT64_MAX);
return rv1146; }
}
}
else if ((l_K_1139 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1147 = r_SOME(((*(R22 *)rt_nil_check(l_T_1138))).f_SCALE);
return rv1147; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1148 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1138))).f_SCALE));
return rv1148; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1149 = r_SOME(((rt_int)2LL));
return rv1149; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1150 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1138))).f_SCALE, p_NAME));
return rv1150; }
}
}
else if ((l_K_1139 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1138))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1151 = ((*(R22 *)rt_nil_check(l_T_1138))).f_MLO;
return rv1151; }
}
{ R23 rv1152 = r_SOME(((rt_int)0LL));
return rv1152; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1138))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1153 = ((*(R22 *)rt_nil_check(l_T_1138))).f_MHI;
return rv1153; }
}
{ R23 rv1154 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1138))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1154; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1138))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1155 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1138))).f_BASE))).f_NLITS);
return rv1155; }
}
if (((((*(R22 *)rt_nil_check(l_T_1138))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1138))).f_MHI).f_OK))
{
{ R23 rv1156 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1138))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1138))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1156; }
}
}
}
else if (((l_K_1139 == g_T_STR) || (l_K_1139 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1157 = ((*(R22 *)rt_nil_check(l_T_1138))).f_MLEN;
return rv1157; }
}
}
else if ((l_K_1139 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1158 = r_SOME(((*(R22 *)rt_nil_check(l_T_1138))).f_DIMS);
return rv1158; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1138))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1138))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1138))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1159 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1138))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1138))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1159; }
}
}
}
else if ((l_K_1139 == g_T_REC))
{
{
R24 * l_F_1160; memset(&l_F_1160, 0, sizeof l_F_1160);
l_F_1160 = ((*(R22 *)rt_nil_check(l_T_1138))).f_FIELDS;
R25 * l_B_1161; memset(&l_B_1161, 0, sizeof l_B_1161);
l_B_1161 = ((*(R22 *)rt_nil_check(l_T_1138))).f_ARGS;
for (;;) {
if (((l_F_1160 == NULL) || (l_B_1161 == NULL))) goto L_end1162;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1160))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1160))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1161))).f_ANYARG)
{
{ R23 rv1163 = r_NO_MVAL();
return rv1163; }
}
{ R23 rv1164 = ((*(R25 *)rt_nil_check(l_B_1161))).f_MLO;
return rv1164; }
}
l_B_1161 = ((*(R25 *)rt_nil_check(l_B_1161))).f_NEXT;
}
l_F_1160 = ((*(R24 *)rt_nil_check(l_F_1160))).f_NEXT;
}
RT_B_TICK();
} L_end1162: ;
}
}
{ R23 rv1165 = r_NO_MVAL();
return rv1165; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1166 = ((rt_int)0LL);
{ rt_frame xf1167; if (RT_TRY(xf1167)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1166 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1166 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1166 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1167); } else { RT_POP(xf1167); int xf1167x = rt_xcur;
if (0 || xf1167x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1167x); } }
{ rt_int rv1168 = F->l_R_1166;
return rv1168; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1169 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1169; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1170 = ((rt_int)1LL);
return rv1170; }
}
{ rt_int rv1171 = ((rt_int)0LL);
return rv1171; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1172; memset(&l_K_1172, 0, sizeof l_K_1172);
l_K_1172 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1172 == g_N_INT))
{
{ R26 rv1173 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1173; }
}
else if ((l_K_1172 == g_N_REAL))
{
{ R26 rv1174 = r_REAL_LITERAL(p_E);
return rv1174; }
}
else if ((l_K_1172 == g_N_BOOL))
{
{ R26 rv1175 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1175; }
}
else if ((l_K_1172 == g_N_NIL))
{
{ R26 rv1176 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1176; }
}
else if ((l_K_1172 == g_N_PAREN))
{
{
R26 l_V_1177; memset(&l_V_1177, 0, sizeof l_V_1177);
S_R26(&l_V_1177, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1177).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1177).f_C), 0);
{ R26 rv1178 = l_V_1177;
return rv1178; }
}
}
else if ((l_K_1172 == g_N_STR))
{
{ R26 rv1179 = r_STRING_LITERAL(p_E);
return rv1179; }
}
else if ((l_K_1172 == g_N_BITS))
{
{ R26 rv1180 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1180; }
}
else if ((l_K_1172 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1181 = r_NAME_EXPR(p_E, p_WANT);
return rv1181; }
}
{ R26 rv1182 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1182; }
}
else if ((l_K_1172 == g_N_RECCONS))
{
{ R26 rv1183 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1183; }
}
else if ((l_K_1172 == g_N_ARRCONS))
{
{ R26 rv1184 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1184; }
}
else if ((l_K_1172 == g_N_TYPESPEC))
{
{ R26 rv1185 = r_TYPE_SPECIFIER(p_E);
return rv1185; }
}
else if ((l_K_1172 == g_N_QUAL))
{
{
rt_int l_SAVED_1186; memset(&l_SAVED_1186, 0, sizeof l_SAVED_1186);
l_SAVED_1186 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1187; memset(&l_SAVED_Q_1187, 0, sizeof l_SAVED_Q_1187);
l_SAVED_Q_1187 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1188; memset(&l_V_1188, 0, sizeof l_V_1188);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = p_E;
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
if ((!r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a rounding mode is a value of ROUNDINGS (3.1.4.1): ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_T", 8))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
{
R23 l_P_1189; memset(&l_P_1189, 0, sizeof l_P_1189);
S_R23(&l_P_1189, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1188, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1186;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1187;
{ R26 rv1190 = l_V_1188;
return rv1190; }
}
}
else if ((l_K_1172 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1191; memset(&l_N_1191, 0, sizeof l_N_1191);
l_N_1191 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1191))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1191))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1192 = r_EXPR(l_N_1191, p_WANT);
return rv1192; }
}
}
{ R26 rv1193 = r_NEW_EXPR(p_E, p_WANT);
return rv1193; }
}
else if ((l_K_1172 == g_N_NAME))
{
{ R26 rv1194 = r_NAME_EXPR(p_E, p_WANT);
return rv1194; }
}
else if ((l_K_1172 == g_N_APPLY))
{
{
R12 * l_Y_1195; memset(&l_Y_1195, 0, sizeof l_Y_1195);
l_Y_1195 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1195 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1195))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1195))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1196; memset(&l_N_1196, 0, sizeof l_N_1196);
l_N_1196 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1197; memset(&l_A_1197, 0, sizeof l_A_1197);
l_A_1197 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1197))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1196))).f_A = l_A_1197;
((*(R21 *)rt_nil_check(l_N_1196))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1198 = r_EXPR(l_N_1196, p_WANT);
return rv1198; }
}
}
}
{ R26 rv1199 = r_CALL_EXPR(p_E, p_WANT);
return rv1199; }
}
}
else if ((l_K_1172 == g_N_FIELD))
{
{ R26 rv1200 = r_FIELD_EXPR(p_E);
return rv1200; }
}
else if ((l_K_1172 == g_N_DEREF))
{
{
R26 l_B_1201; memset(&l_B_1201, 0, sizeof l_B_1201);
S_R26(&l_B_1201, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1201).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1202; memset(&l_TT_1202, 0, sizeof l_TT_1202);
l_TT_1202 = r_TARGET((l_B_1201).f_T);
{ R26 rv1203 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1202), (l_B_1201).f_C), l_TT_1202, 1, r_NO_TEXT());
return rv1203; }
}
}
}
else if ((l_K_1172 == g_N_INDEX))
{
{ R26 rv1204 = r_INDEX_EXPR(p_E);
return rv1204; }
}
else if ((l_K_1172 == g_N_SUBSTR))
{
{
R26 l_B_1205; memset(&l_B_1205, 0, sizeof l_B_1205);
S_R26(&l_B_1205, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1206; memset(&l_BT_1206, 0, sizeof l_BT_1206);
l_BT_1206 = r_REAL_TYPE((l_B_1205).f_T);
R10 l_LO_1207; memset(&l_LO_1207, 0, sizeof l_LO_1207);
R10 l_HI_1208; memset(&l_HI_1208, 0, sizeof l_HI_1208);
if (((((*(R22 *)rt_nil_check((l_B_1205).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1209; memset(&l_ARGS_1209, 0, sizeof l_ARGS_1209);
l_ARGS_1209 = r_VAL_ARG(l_B_1205, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1210; memset(&l_Y_1210, 0, sizeof l_Y_1210);
l_Y_1210 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1209, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1210 == NULL)))
{
{ R26 rv1211 = r_CALL_SYM(l_Y_1210, l_ARGS_1209, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1211; }
}
if ((((*(R22 *)rt_nil_check((l_B_1205).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1206))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1206))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1207, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1208, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1206))).f_KIND == g_T_BITS))
{
{ R26 rv1212 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1205).f_C, l_LO_1207, l_HI_1208), r_BITS_TYPE(((rt_int)1LL)));
return rv1212; }
}
{
R22 * l_T_1213; memset(&l_T_1213, 0, sizeof l_T_1213);
l_T_1213 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1213))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1206))).f_BASE;
{ R26 rv1214 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1205).f_C, l_LO_1207, l_HI_1208), l_T_1213);
return rv1214; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1206))).f_KIND == g_T_BITS))
{
{ R26 rv1215 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1205).f_C, l_LO_1207, l_HI_1208), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1215; }
}
{
R22 * l_T_1216; memset(&l_T_1216, 0, sizeof l_T_1216);
l_T_1216 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1216))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1206))).f_BASE;
{ R26 rv1217 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1205).f_C, l_LO_1207, l_HI_1208), l_T_1216);
return rv1217; }
}
}
}
else if ((l_K_1172 == g_N_UNOP))
{
{ R26 rv1218 = r_UNARY(p_E);
return rv1218; }
}
else if ((l_K_1172 == g_N_BINOP))
{
{ R26 rv1219 = r_BINARY(p_E);
return rv1219; }
}
else if ((l_K_1172 == g_N_IN))
{
{ R26 rv1220 = r_IN_EXPR(p_E);
return rv1220; }
}
else if (((l_K_1172 == g_N_ANY) || (l_K_1172 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1172 == g_TS_GEN))
{
{
R21 * l_N_1221; memset(&l_N_1221, 0, sizeof l_N_1221);
l_N_1221 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1221))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1221))).f_NAME))
{
{ R26 rv1222 = r_NAME_EXPR(l_N_1221, p_WANT);
return rv1222; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1172 == g_TS_NAME) || (l_K_1172 == g_TS_ARRAY)) || (l_K_1172 == g_TS_RECORD)) || (l_K_1172 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1223; memset(&l_SAVED_1223, 0, sizeof l_SAVED_1223);
l_SAVED_1223 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1224; memset(&l_SAVED_Q_1224, 0, sizeof l_SAVED_Q_1224);
l_SAVED_Q_1224 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1225; memset(&l_V_1225, 0, sizeof l_V_1225);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1225, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1223;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1224;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1225).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1226 = (l_V_1225).f_C;
return rv1226; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1225).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1225).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1225).f_T));
}
{ R10 rv1227 = (l_V_1225).f_C;
return rv1227; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1228; memset(&l_V_1228, 0, sizeof l_V_1228);
S_R26(&l_V_1228, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1228).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1228).f_T));
}
{ R10 rv1229 = (l_V_1228).f_C;
return rv1229; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1230; memset(&l_T_1230, 0, sizeof l_T_1230);
l_T_1230 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1230))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1230))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1231 = l_T_1230;
return rv1231; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1232; memset(&l_T_1232, 0, sizeof l_T_1232);
S_R10(&l_T_1232, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1233; memset(&l_S_1233, 0, sizeof l_S_1233);
l_S_1233 = rt_b_str_new((l_T_1232).f_LEN, 0);
rt_b_assign(&l_S_1233, r_STR(l_T_1232, (l_T_1232).f_LEN));
rt_int l_POINT_1234; memset(&l_POINT_1234, 0, sizeof l_POINT_1234);
l_POINT_1234 = 0;
rt_int l_DIGITS_1235; memset(&l_DIGITS_1235, 0, sizeof l_DIGITS_1235);
l_DIGITS_1235 = ((rt_int)0LL);
{ rt_int it1237_lo = ((rt_int)0LL), it1237_hi = rt_sub((l_T_1232).f_LEN, ((rt_int)1LL));
for (rt_int it1237 = it1237_lo; it1237 <= it1237_hi; it1237++) {
{
if (rt_b_eq(rt_b_slice(l_S_1233, it1237, it1237), rt_str(".", 1)))
{
l_POINT_1234 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1233, it1237, it1237), rt_str("E", 1)))
{
goto L_end1236;
}
else
{
l_DIGITS_1235 = rt_add(l_DIGITS_1235, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1237 == it1237_hi) break;
} } L_end1236: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1234)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1238 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1232), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1238; }
}
if ((!l_POINT_1234))
{
{ R26 rv1239 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1232)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1239; }
}
{
R22 * l_F_1240; memset(&l_F_1240, 0, sizeof l_F_1240);
l_F_1240 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1241; memset(&l_C_1241, 0, sizeof l_C_1241);
S_R10(&l_C_1241, l_T_1232, 0);
((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE = r_MAX_INT(l_DIGITS_1235, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1233, rt_sub((l_T_1232).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1232).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1241, r_FMT1(rt_str("@0", 2), l_T_1232), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1233, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1241, r_FMT1(rt_str("0@", 2), l_T_1232), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1240))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1242 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1241), l_F_1240);
return rv1242; }
}
{ R26 rv1243 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1241), l_F_1240);
return rv1243; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1244; memset(&l_T_1244, 0, sizeof l_T_1244);
S_R10(&l_T_1244, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1245; memset(&l_S_1245, 0, sizeof l_S_1245);
l_S_1245 = rt_b_str_new((l_T_1244).f_LEN, 0);
rt_b_assign(&l_S_1245, r_STR(l_T_1244, (l_T_1244).f_LEN));
rt_int l_INT_1246; memset(&l_INT_1246, 0, sizeof l_INT_1246);
l_INT_1246 = ((rt_int)0LL);
rt_int l_SIG_1247; memset(&l_SIG_1247, 0, sizeof l_SIG_1247);
l_SIG_1247 = 0;
rt_int l_POINT_1248; memset(&l_POINT_1248, 0, sizeof l_POINT_1248);
l_POINT_1248 = 0;
rt_int l_LEAD_1249; memset(&l_LEAD_1249, 0, sizeof l_LEAD_1249);
l_LEAD_1249 = ((rt_int)0LL);
rt_int l_I_1250; memset(&l_I_1250, 0, sizeof l_I_1250);
l_I_1250 = ((rt_int)0LL);
rt_int l_EXP_1251; memset(&l_EXP_1251, 0, sizeof l_EXP_1251);
l_EXP_1251 = ((rt_int)0LL);
for (;;) {
if ((l_I_1250 >= (l_T_1244).f_LEN)) goto L_end1252;
{
if (rt_b_eq(rt_b_slice(l_S_1245, l_I_1250, l_I_1250), rt_str("E", 1)))
{
goto L_end1252;
}
else if (rt_b_eq(rt_b_slice(l_S_1245, l_I_1250, l_I_1250), rt_str(".", 1)))
{
l_POINT_1248 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1245, l_I_1250, l_I_1250), rt_str("0", 1))))
{
if ((!l_POINT_1248))
{
l_INT_1246 = rt_add(l_INT_1246, ((rt_int)1LL));
}
l_SIG_1247 = 1;
}
else if ((l_SIG_1247 && (!l_POINT_1248)))
{
l_INT_1246 = rt_add(l_INT_1246, ((rt_int)1LL));
}
else if ((l_POINT_1248 && (!l_SIG_1247)))
{
l_LEAD_1249 = rt_add(l_LEAD_1249, ((rt_int)1LL));
}
l_I_1250 = rt_add(l_I_1250, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1252: ;
if ((!l_SIG_1247))
{
{ rt_int rv1253 = 1;
return rv1253; }
}
if ((l_I_1250 < (l_T_1244).f_LEN))
{
{
rt_int l_NEG_1254; memset(&l_NEG_1254, 0, sizeof l_NEG_1254);
l_NEG_1254 = 0;
l_I_1250 = rt_add(l_I_1250, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1245, l_I_1250, l_I_1250), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1245, l_I_1250, l_I_1250), rt_str("+", 1))))
{
l_NEG_1254 = rt_b_eq(rt_b_slice(l_S_1245, l_I_1250, l_I_1250), rt_str("-", 1));
l_I_1250 = rt_add(l_I_1250, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1250 >= (l_T_1244).f_LEN)) goto L_end1255;
{
if ((l_EXP_1251 <= ((rt_int)100000LL)))
{
l_EXP_1251 = rt_add(rt_mul(l_EXP_1251, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1245, l_I_1250, l_I_1250)), ((rt_int)48LL))));
}
l_I_1250 = rt_add(l_I_1250, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1255: ;
if (l_NEG_1254)
{
l_EXP_1251 = rt_neg(l_EXP_1251);
}
}
}
{
rt_int l_D_1256; memset(&l_D_1256, 0, sizeof l_D_1256);
l_D_1256 = rt_add(rt_sub(l_INT_1246, ((rt_int)1LL)), l_EXP_1251);
rt_int l_LIM_1257; memset(&l_LIM_1257, 0, sizeof l_LIM_1257);
l_LIM_1257 = ((rt_int)308LL);
if ((l_INT_1246 == ((rt_int)0LL)))
{
l_D_1256 = rt_add(rt_sub(rt_neg(l_LEAD_1249), ((rt_int)1LL)), l_EXP_1251);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1257 = ((rt_int)38LL);
}
{ rt_int rv1258 = ((l_D_1256 <= l_LIM_1257) && (l_D_1256 >= rt_add(rt_neg(l_LIM_1257), ((rt_int)1LL))));
return rv1258; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1259; memset(&l_T_1259, 0, sizeof l_T_1259);
S_R10(&l_T_1259, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1260; memset(&l_S_1260, 0, sizeof l_S_1260);
l_S_1260 = rt_b_str_new((l_T_1259).f_LEN, 0);
rt_b_assign(&l_S_1260, r_STR(l_T_1259, (l_T_1259).f_LEN));
rt_int l_SIG_1261; memset(&l_SIG_1261, 0, sizeof l_SIG_1261);
l_SIG_1261 = ((rt_int)0LL);
rt_int l_FRAC_1262; memset(&l_FRAC_1262, 0, sizeof l_FRAC_1262);
l_FRAC_1262 = ((rt_int)0LL);
rt_int l_POINT_1263; memset(&l_POINT_1263, 0, sizeof l_POINT_1263);
l_POINT_1263 = 0;
rt_int l_EXP_1264; memset(&l_EXP_1264, 0, sizeof l_EXP_1264);
l_EXP_1264 = ((rt_int)0LL);
rt_int l_I_1265; memset(&l_I_1265, 0, sizeof l_I_1265);
l_I_1265 = ((rt_int)0LL);
for (;;) {
if ((l_I_1265 >= (l_T_1259).f_LEN)) goto L_end1266;
{
if (rt_b_eq(rt_b_slice(l_S_1260, l_I_1265, l_I_1265), rt_str("E", 1)))
{
goto L_end1266;
}
if (rt_b_eq(rt_b_slice(l_S_1260, l_I_1265, l_I_1265), rt_str(".", 1)))
{
l_POINT_1263 = 1;
}
else
{
if (((l_SIG_1261 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1260, l_I_1265, l_I_1265), rt_str("0", 1)))))
{
l_SIG_1261 = rt_add(l_SIG_1261, ((rt_int)1LL));
}
if (l_POINT_1263)
{
l_FRAC_1262 = rt_add(l_FRAC_1262, ((rt_int)1LL));
}
}
l_I_1265 = rt_add(l_I_1265, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1266: ;
if ((rt_sub(l_I_1265, r_BOOL_INT(l_POINT_1263)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1265 < (l_T_1259).f_LEN))
{
{
rt_int l_NEG_1267; memset(&l_NEG_1267, 0, sizeof l_NEG_1267);
l_NEG_1267 = 0;
l_I_1265 = rt_add(l_I_1265, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1260, l_I_1265, l_I_1265), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1260, l_I_1265, l_I_1265), rt_str("+", 1))))
{
l_NEG_1267 = rt_b_eq(rt_b_slice(l_S_1260, l_I_1265, l_I_1265), rt_str("-", 1));
l_I_1265 = rt_add(l_I_1265, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1265 >= (l_T_1259).f_LEN)) goto L_end1268;
{
if ((l_EXP_1264 <= ((rt_int)1000LL)))
{
l_EXP_1264 = rt_sub(rt_add(rt_mul(l_EXP_1264, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1260, l_I_1265, l_I_1265))), ((rt_int)48LL));
}
l_I_1265 = rt_add(l_I_1265, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1268: ;
if ((l_EXP_1264 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1267)
{
l_EXP_1264 = rt_neg(l_EXP_1264);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1261 > ((rt_int)0LL)))
{
{
rt_int l_P10_1269; memset(&l_P10_1269, 0, sizeof l_P10_1269);
l_P10_1269 = rt_sub(rt_add(rt_sub(l_SIG_1261, ((rt_int)1LL)), l_EXP_1264), l_FRAC_1262);
rt_int l_BITS_1270; memset(&l_BITS_1270, 0, sizeof l_BITS_1270);
l_BITS_1270 = rt_add(rt_quot((rt_mul(l_P10_1269, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1269 < ((rt_int)0LL)))
{
l_BITS_1270 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1269), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1270 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1271; memset(&l_CS_1271, 0, sizeof l_CS_1271);
l_CS_1271 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1272; memset(&l_P_1272, 0, sizeof l_P_1272);
l_P_1272 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1273; memset(&l_S_1273, 0, sizeof l_S_1273);
S_R10(&l_S_1273, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1271 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1274; memset(&l_Y_1274, 0, sizeof l_Y_1274);
l_Y_1274 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1274 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1274))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1271 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1271)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1271 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1271)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1271))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1272 == NULL)) goto L_end1275;
{
if ((((*(R21 *)rt_nil_check(l_P_1272))).f_IV == g_K_STR))
{
if ((l_CS_1271 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1273, r_CAT(l_S_1273, ((*(R21 *)rt_nil_check(l_P_1272))).f_NAME), 0);
}
else
{
{
R10 l_Q_1276; memset(&l_Q_1276, 0, sizeof l_Q_1276);
S_R10(&l_Q_1276, ((*(R21 *)rt_nil_check(l_P_1272))).f_NAME, 0);
rstr l_QS_1277; memset(&l_QS_1277, 0, sizeof l_QS_1277);
l_QS_1277 = rt_b_str_new((l_Q_1276).f_LEN, 0);
rt_b_assign(&l_QS_1277, r_STR(l_Q_1276, (l_Q_1276).f_LEN));
{ rt_int it1279_lo = ((rt_int)0LL), it1279_hi = rt_sub((l_Q_1276).f_LEN, ((rt_int)1LL));
for (rt_int it1279 = it1279_lo; it1279 <= it1279_hi; it1279++) {
{
{
R10 l_LIT_1280; memset(&l_LIT_1280, 0, sizeof l_LIT_1280);
R12 * l_Y_1281; memset(&l_Y_1281, 0, sizeof l_Y_1281);
if (rt_b_eq(rt_b_slice(l_QS_1277, it1279, it1279), rt_str("'", 1)))
{
S_R10(&l_LIT_1280, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1280, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1277, it1279, it1279)), rt_str("'", 1))), 0);
}
l_Y_1281 = r_FIND_LITERAL(l_LIT_1280, l_CS_1271);
if ((l_Y_1281 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1272))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1277, it1279, it1279)));
}
S_R10(&l_S_1273, r_CATS(l_S_1273, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1281))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1279 == it1279_hi) break;
} } L_end1278: ;
}
}
}
else
{
{
R12 * l_Y_1282; memset(&l_Y_1282, 0, sizeof l_Y_1282);
l_Y_1282 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1272))).f_NAME, l_CS_1271);
if ((l_Y_1282 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1272))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1272))).f_NAME);
}
S_R10(&l_S_1273, r_CATS(l_S_1273, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1282))).f_MV)), 0);
}
}
l_P_1272 = ((*(R21 *)rt_nil_check(l_P_1272))).f_NEXT;
}
RT_B_TICK();
} L_end1275: ;
{
R22 * l_T_1283; memset(&l_T_1283, 0, sizeof l_T_1283);
l_T_1283 = r_STR_TYPE(r_NUM((l_S_1273).f_LEN), r_SOME((l_S_1273).f_LEN));
((*(R22 *)rt_nil_check(l_T_1283))).f_BASE = l_CS_1271;
{ R26 rv1284 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1273), r_NUM((l_S_1273).f_LEN)), l_T_1283);
return rv1284; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1285; memset(&l_TS_1285, 0, sizeof l_TS_1285);
l_TS_1285 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1285))).f_NAME, p_NAME, 0);
{ R22 * rv1286 = r_RESOLVE(l_TS_1285);
return rv1286; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1287; memset(&l_Y_1287, 0, sizeof l_Y_1287);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1288; memset(&l_WT_1288, 0, sizeof l_WT_1288);
l_WT_1288 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1288))).f_KIND == g_T_ENUM))
{
l_Y_1287 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1288);
if ((!(l_Y_1287 == NULL)))
{
{ R26 rv1289 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1287))).f_MV), r_ENUM_RESULT(l_Y_1287, p_WANT));
return rv1289; }
}
}
}
}
l_Y_1287 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1290; memset(&l_FOUND_1290, 0, sizeof l_FOUND_1290);
l_FOUND_1290 = NULL;
rt_int l_N_1291; memset(&l_N_1291, 0, sizeof l_N_1291);
l_N_1291 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1287 == NULL)) goto L_end1292;
{
if ((((*(R12 *)rt_nil_check(l_Y_1287))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1290 == NULL))
{
l_FOUND_1290 = l_Y_1287;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1290))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1287))).f_T))).f_BASE)))
{
l_N_1291 = rt_add(l_N_1291, ((rt_int)1LL));
}
}
l_Y_1287 = r_LOOKUP_NEXT(l_Y_1287);
}
RT_B_TICK();
} L_end1292: ;
if ((l_FOUND_1290 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1291 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1293 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1290))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1290))).f_T);
return rv1293; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1294 = p_WANT;
return rv1294; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1295; memset(&l_T_1295, 0, sizeof l_T_1295);
l_T_1295 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1295))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1296 = l_T_1295;
return rv1296; }
}
}
{ R22 * rv1297 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1297; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1298; memset(&l_Y_1298, 0, sizeof l_Y_1298);
l_Y_1298 = r_LOOKUP(p_NAME);
if ((l_Y_1298 == NULL))
{
{ rt_int rv1299 = 0;
return rv1299; }
}
{ rt_int rv1300 = (((((*(R12 *)rt_nil_check(l_Y_1298))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1298))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1298))).f_KIND == g_Y_ROUTINE));
return rv1300; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1301; memset(&l_Y_1301, 0, sizeof l_Y_1301);
l_Y_1301 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1301 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1301))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1302; memset(&l_WRITABLE_1302, 0, sizeof l_WRITABLE_1302);
l_WRITABLE_1302 = r_CHECK_IMPORTED(l_Y_1301, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1303 = r_MKLV(r_OBJ_ACCESS(l_Y_1301), ((*(R12 *)rt_nil_check(l_Y_1301))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_VAR) && l_WRITABLE_1302), r_NO_TEXT());
return rv1303; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_GEN))
{
{ R26 rv1304 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1301))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1301))).f_T);
return rv1304; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1305 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1305; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1301))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1306; memset(&l_N_1306, 0, sizeof l_N_1306);
l_N_1306 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1306))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1307 = r_CALL_EXPR(l_N_1306, p_WANT);
return rv1307; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1308; memset(&l_A_1308, 0, sizeof l_A_1308);
l_A_1308 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1308)))
{
{ R26 rv1309 = r_EXPR(l_A_1308, NULL);
return rv1309; }
}
if ((((*(R21 *)rt_nil_check(l_A_1308))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1310; memset(&l_B_1310, 0, sizeof l_B_1310);
S_R26(&l_B_1310, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_A), 0);
R10 l_I_1311; memset(&l_I_1311, 0, sizeof l_I_1311);
S_R10(&l_I_1311, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1308))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1310).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1312 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1310).f_C, l_I_1311, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1310).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1312; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1313 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1310).f_C, l_I_1311, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1310).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1313; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1308))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1308))).f_A))
{
{ R26 rv1314 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1308))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1314; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1308))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_A))).f_NAME))
{
{ R26 rv1315 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1308))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1315; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1308))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1316; memset(&l_Y_1316, 0, sizeof l_Y_1316);
l_Y_1316 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1308))).f_NAME);
if ((!(l_Y_1316 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1316))).f_KIND == g_Y_TYPE))
{
{ R26 rv1317 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1308))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1317; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1308))).f_NAME))
{
{ R26 rv1318 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1308))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1318; }
}
}
}
{
R26 l_B_1319; memset(&l_B_1319, 0, sizeof l_B_1319);
S_R26(&l_B_1319, r_EXPR(l_A_1308, NULL), 0);
R22 * l_BT_1320; memset(&l_BT_1320, 0, sizeof l_BT_1320);
l_BT_1320 = (l_B_1319).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1320))).f_KIND == g_T_REC))
{
{
R24 * l_F_1321; memset(&l_F_1321, 0, sizeof l_F_1321);
l_F_1321 = r_FIND_VFIELD(l_BT_1320, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1321 == NULL)))
{
r_CHECK_VARIANT(l_F_1321, l_BT_1320, l_A_1308, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1321))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1320)))
{
{ R26 rv1322 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1319).f_C, ((*(R24 *)rt_nil_check(l_F_1321))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1321))).f_T);
return rv1322; }
}
{ R26 rv1323 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1319).f_C, ((*(R24 *)rt_nil_check(l_F_1321))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1321))).f_T, ((l_B_1319).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1321))).f_KIND == ((rt_int)0LL))), (l_B_1319).f_C);
return rv1323; }
}
}
}
{ R26 rv1324 = r_ATTRIBUTE(l_B_1319, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1324; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1325 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1325; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1326 = 1;
return rv1326; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1327 = 1;
return rv1327; }
}
{
rstr l_S_1328; memset(&l_S_1328, 0, sizeof l_S_1328);
l_S_1328 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1328, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1330_lo = ((rt_int)0LL), it1330_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1330 = it1330_lo; it1330 <= it1330_hi; it1330++) {
{
if (rt_b_eq(rt_b_slice(l_S_1328, it1330, it1330), rt_str(".", 1)))
{
{ rt_int rv1331 = 0;
return rv1331; }
}
}
RT_B_TICK();
if (it1330 == it1330_hi) break;
} } L_end1329: ;
}
{ rt_int rv1332 = 1;
return rv1332; }
}
{ rt_int rv1333 = 0;
return rv1333; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1334 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1334; }
}
{ rt_int rv1335 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1335; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1336 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1336; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1337; memset(&l_TAGV_1337, 0, sizeof l_TAGV_1337);
S_R23(&l_TAGV_1337, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1337).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1337).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1338; memset(&l_F_1338, 0, sizeof l_F_1338);
l_F_1338 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1339; memset(&l_A_1339, 0, sizeof l_A_1339);
l_A_1339 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1338 == NULL)) goto L_end1340;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1338))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1339 == NULL))
{
{ R23 rv1341 = r_NO_MVAL();
return rv1341; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1338))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1339))).f_ANYARG)
{
{ R23 rv1342 = r_NO_MVAL();
return rv1342; }
}
{ R23 rv1343 = ((*(R25 *)rt_nil_check(l_A_1339))).f_MLO;
return rv1343; }
}
l_A_1339 = ((*(R25 *)rt_nil_check(l_A_1339))).f_NEXT;
}
l_F_1338 = ((*(R24 *)rt_nil_check(l_F_1338))).f_NEXT;
}
RT_B_TICK();
} L_end1340: ;
{ R23 rv1344 = r_NO_MVAL();
return rv1344; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1345; memset(&l_P_1345, 0, sizeof l_P_1345);
l_P_1345 = p_L;
for (;;) {
if ((l_P_1345 == NULL)) goto L_end1346;
{
if ((((*(R21 *)rt_nil_check(l_P_1345))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1345))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1345))).f_B, p_T)).f_V)))
{
{ rt_int rv1347 = 1;
return rv1347; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1345, p_T)).f_V == p_V))
{
{ rt_int rv1348 = 1;
return rv1348; }
}
l_P_1345 = ((*(R21 *)rt_nil_check(l_P_1345))).f_NEXT;
}
RT_B_TICK();
} L_end1346: ;
{ rt_int rv1349 = 0;
return rv1349; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1350 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1350; }
}
{ R26 rv1351 = r_EXPR(p_E, NULL);
return rv1351; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1352; memset(&l_A_1352, 0, sizeof l_A_1352);
S_R26(&l_A_1352, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1353; memset(&l_I_1353, 0, sizeof l_I_1353);
S_R10(&l_I_1353, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1352).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1354 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1352).f_C, (l_A_1352).f_C, l_I_1353, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1352).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1354; }
}
}
}
{ R26 rv1355 = r_INDEX_EXPR2(p_E);
return rv1355; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1356; memset(&l_SAVED_1356, 0, sizeof l_SAVED_1356);
l_SAVED_1356 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1357; memset(&l_SAVED_Q_1357, 0, sizeof l_SAVED_Q_1357);
l_SAVED_Q_1357 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1358; memset(&l_V_1358, 0, sizeof l_V_1358);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1358, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1356;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1357;
{ R10 rv1359 = r_INDEX_OF(l_V_1358, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1359; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1360; memset(&l_T_1360, 0, sizeof l_T_1360);
l_T_1360 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1360))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1360))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1360))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1361; memset(&l_ARGS_1361, 0, sizeof l_ARGS_1361);
l_ARGS_1361 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1362; memset(&l_Y_1362, 0, sizeof l_Y_1362);
l_Y_1362 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1361, p_LINE, 0);
if ((l_Y_1362 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1363 = (r_CALL_SYM(l_Y_1362, l_ARGS_1361, p_LINE)).f_C;
return rv1363; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1360))).f_KIND == g_T_ENUM))
{
{ R10 rv1364 = (p_V).f_C;
return rv1364; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1360))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1360))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1365 = (p_V).f_C;
return rv1365; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1366; memset(&l_B_1366, 0, sizeof l_B_1366);
S_R26(&l_B_1366, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1367; memset(&l_T_1367, 0, sizeof l_T_1367);
l_T_1367 = r_REAL_TYPE((l_B_1366).f_T);
R21 * l_S_1368; memset(&l_S_1368, 0, sizeof l_S_1368);
l_S_1368 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1369; memset(&l_IX_1369, 0, sizeof l_IX_1369);
S_R10(&l_IX_1369, r_MK(rt_str("", 0)), 0);
rt_int l_N_1370; memset(&l_N_1370, 0, sizeof l_N_1370);
l_N_1370 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1367))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1368 == NULL)) goto L_end1371;
{
if ((l_N_1370 > ((rt_int)0LL)))
{
S_R10(&l_IX_1369, r_CATS(l_IX_1369, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1369, r_CAT(l_IX_1369, r_INDEX_VALUE(l_S_1368)), 0);
l_N_1370 = rt_add(l_N_1370, ((rt_int)1LL));
l_S_1368 = ((*(R21 *)rt_nil_check(l_S_1368))).f_NEXT;
}
RT_B_TICK();
} L_end1371: ;
if ((!(l_N_1370 == ((*(R22 *)rt_nil_check(l_T_1367))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1370 == ((rt_int)1LL)))
{
{ R26 rv1372 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1366).f_C, l_IX_1369, (l_B_1366).f_C, (l_B_1366).f_C), ((*(R22 *)rt_nil_check(l_T_1367))).f_ELEM, (l_B_1366).f_LVAL, r_NO_TEXT());
return rv1372; }
}
{
R10 l_X_1373; memset(&l_X_1373, 0, sizeof l_X_1373);
S_R10(&l_X_1373, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1366).f_C, r_NUM(l_N_1370), (l_B_1366).f_C, (l_B_1366).f_C), 0);
{ R26 rv1374 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1373, l_IX_1369), ((*(R22 *)rt_nil_check(l_T_1367))).f_ELEM, (l_B_1366).f_LVAL, r_NO_TEXT());
return rv1374; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1375 = r_MKN(rt_str("NEGATE_", 7));
return rv1375; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1376 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1376; }
}
{ R10 rv1377 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1377; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1378 = r_MKN(rt_str("ADD_", 4));
return rv1378; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1379 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1379; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1380 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1380; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1381 = r_MKN(rt_str("DIVIDE_", 7));
return rv1381; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1382 = r_MKN(rt_str("MODULUS_", 8));
return rv1382; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1383 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1383; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1384 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1384; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1385 = r_MKN(rt_str("EQUAL_", 6));
return rv1385; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1386 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1386; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1387 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1387; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1388 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1388; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1389 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1389; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1390 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1390; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1391 = r_MKN(rt_str("AND_", 4));
return rv1391; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1392 = r_MKN(rt_str("OR_", 3));
return rv1392; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1393 = r_MKN(rt_str("XOR_", 4));
return rv1393; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1394 = r_MKN(rt_str("IMPLIES_", 8));
return rv1394; }
}
{ R10 rv1395 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1395; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1396; memset(&l_A_1396, 0, sizeof l_A_1396);
l_A_1396 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1396)), ({ R27 rc1397; memset(&rc1397, 0, sizeof rc1397);  rc1397.f_E = NULL; S_R26(&rc1397.f_V, p_V, 0); rc1397.f_HAVE = 1; rc1397.f_MODE = g_M_IN; rc1397.f_NEXT = p_NEXT; rc1397; }), 0);
{ R27 * rv1398 = l_A_1396;
return rv1398; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1399; memset(&l_A_1399, 0, sizeof l_A_1399);
l_A_1399 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1399)), ({ R27 rc1400; memset(&rc1400, 0, sizeof rc1400);  rc1400.f_E = p_E; S_R26(&rc1400.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1400.f_HAVE = 0; rc1400.f_MODE = p_MODE; rc1400.f_NEXT = p_NEXT; rc1400; }), 0);
{ R27 * rv1401 = l_A_1399;
return rv1401; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1402; memset(&l_Y_1402, 0, sizeof l_Y_1402);
l_Y_1402 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1402 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1402 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1403 = l_Y_1402;
return rv1403; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1404; memset(&l_Y_1404, 0, sizeof l_Y_1404);
l_Y_1404 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1404 == NULL)) goto L_end1405;
{
if ((((*(R12 *)rt_nil_check(l_Y_1404))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1406 = 1;
return rv1406; }
}
l_Y_1404 = r_LOOKUP_NEXT(l_Y_1404);
}
RT_B_TICK();
} L_end1405: ;
l_Y_1404 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1404 == NULL)) goto L_end1407;
{
if ((((*(R12 *)rt_nil_check(l_Y_1404))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1408 = 1;
return rv1408; }
}
l_Y_1404 = r_LOOKUP_NEXT(l_Y_1404);
}
RT_B_TICK();
} L_end1407: ;
{ rt_int rv1409 = 0;
return rv1409; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1410; memset(&l_Q_1410, 0, sizeof l_Q_1410);
l_Q_1410 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1411; memset(&l_R_1411, 0, sizeof l_R_1411);
l_R_1411 = NULL;
if ((l_Q_1410 == NULL))
{
{ R27 * rv1412 = NULL;
return rv1412; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1410))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1411 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1410))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1410))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1410))).f_B == NULL)))
{
l_R_1411 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1410))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1411);
}
{ R27 * rv1413 = l_R_1411;
return rv1413; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1414; memset(&l_ARGS_1414, 0, sizeof l_ARGS_1414);
l_ARGS_1414 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1415; memset(&l_Y_1415, 0, sizeof l_Y_1415);
l_Y_1415 = r_USER_OPERATOR(p_NAME, l_ARGS_1414, p_LINE);
if ((l_Y_1415 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1416 = r_CALL_SYM(l_Y_1415, l_ARGS_1414, p_LINE);
return rv1416; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_MACHINE(rt_int p_LINE) { RT_B_TICK(); 
if ((!((*(R7 *)rt_nil_check(g_W))).f_MACHINE))
{
r_FAIL(p_LINE, rt_str("this is only permitted in a machine-dependent part (4.5.5.2)", 60));
}
}
static R10 r_RESCALE_C(R10 p_C, rt_int p_SFROM, rt_int p_STO) { RT_B_TICK(); 
if ((p_SFROM == p_STO))
{
{ R10 rv1417 = p_C;
return rv1417; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1418 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1418; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1419 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1419; }
}
{ R10 rv1420 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1420; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1421 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1421; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1422; memset(&l_RT_1422, 0, sizeof l_RT_1422);
l_RT_1422 = r_REAL_TYPE(p_T);
R22 * l_VT_1423; memset(&l_VT_1423, 0, sizeof l_VT_1423);
l_VT_1423 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1423))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_PTR)))
{
{ R10 rv1424 = (p_V).f_C;
return rv1424; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1423))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1423)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1425 = (p_V).f_C;
return rv1425; }
}
if ((!r_SAME_CLASS(l_RT_1422, l_VT_1423)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1423), (r_TYPE_NAME(l_VT_1423)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1422), (r_TYPE_NAME(l_RT_1422)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1422))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1422))).f_SCALE))
{
{ R10 rv1426 = r_RANGE_CHECK(l_RT_1422, (p_V).f_C, p_SELF);
return rv1426; }
}
{ R10 rv1427 = r_RANGE_CHECK(l_RT_1422, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1422))).f_SCALE)), p_SELF);
return rv1427; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1422))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1423))).f_SCALE)))
{
{ R10 rv1428 = r_RANGE_CHECK(l_RT_1422, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1422))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1428; }
}
{ R10 rv1429 = r_RANGE_CHECK(l_RT_1422, (p_V).f_C, p_SELF);
return rv1429; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1422))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1422) || r_HAS_VALUES(l_VT_1423)))) && (!r_SAME_REPS(l_RT_1422, l_VT_1423))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1430 = r_RANGE_CHECK(l_RT_1422, (p_V).f_C, p_SELF);
return rv1430; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1422, l_VT_1423, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1422))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1423))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1422))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1423))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1422), r_TARGET(l_VT_1423))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R10 rv1431 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1422), r_TARGET(l_VT_1423), (p_V).f_C);
return rv1431; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1422)) && (!r_HAS_ANY(l_VT_1423))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1422))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1423))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1422))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1422))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1423))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1422, l_VT_1423)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1432 = (p_V).f_C;
return rv1432; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1433; memset(&l_ARGS_1433, 0, sizeof l_ARGS_1433);
l_ARGS_1433 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1434; memset(&l_Y_1434, 0, sizeof l_Y_1434);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1435; memset(&l_SAVED_Q_1435, 0, sizeof l_SAVED_Q_1435);
l_SAVED_Q_1435 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1436; memset(&l_X_1436, 0, sizeof l_X_1436);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1436 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1435;
if ((!(l_X_1436 == NULL)))
{
{
R27 * l_P_1437; memset(&l_P_1437, 0, sizeof l_P_1437);
l_P_1437 = l_X_1436;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1437))).f_NEXT == NULL)) goto L_end1438;
{
l_P_1437 = ((*(R27 *)rt_nil_check(l_P_1437))).f_NEXT;
}
RT_B_TICK();
} L_end1438: ;
((*(R27 *)rt_nil_check(l_P_1437))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1433))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1433))).f_NEXT = l_X_1436;
}
}
}
}
{
R27 * l_LAST_1439; memset(&l_LAST_1439, 0, sizeof l_LAST_1439);
l_LAST_1439 = l_ARGS_1433;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1439))).f_NEXT == NULL)) goto L_end1440;
{
l_LAST_1439 = ((*(R27 *)rt_nil_check(l_LAST_1439))).f_NEXT;
}
RT_B_TICK();
} L_end1440: ;
((*(R27 *)rt_nil_check(l_LAST_1439))).f_MODE = g_M_OUT;
l_Y_1434 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1433, p_LINE, 0);
if ((l_Y_1434 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1439))).f_MODE = g_M_INOUT;
l_Y_1434 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1433, p_LINE, 0);
}
}
if ((l_Y_1434 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1441 = r_CATS((r_CALL_SYM(l_Y_1434, l_ARGS_1433, p_LINE)).f_C, rt_str(";", 1));
return rv1441; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1442 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1442; }
}
}
{ R10 rv1443 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1443; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1444 = 1;
return rv1444; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1445 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1445; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1446; memset(&l_F_1446, 0, sizeof l_F_1446);
l_F_1446 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1446 == NULL)) goto L_end1447;
{
if ((((*(R24 *)rt_nil_check(l_F_1446))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1446))).f_T))
{
{ rt_int rv1448 = 1;
return rv1448; }
}
}
l_F_1446 = ((*(R24 *)rt_nil_check(l_F_1446))).f_NEXT;
}
RT_B_TICK();
} L_end1447: ;
}
}
{ rt_int rv1449 = 0;
return rv1449; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1450 = 0;
return rv1450; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1451 = 0;
return rv1451; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1452 = 0;
return rv1452; }
}
{ rt_int rv1453 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1453; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1454 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1454; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1455; memset(&l_D_1455, 0, sizeof l_D_1455);
S_R10(&l_D_1455, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1456; memset(&l_S_1456, 0, sizeof l_S_1456);
S_R10(&l_S_1456, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1457; memset(&l_I_1457, 0, sizeof l_I_1457);
S_R10(&l_I_1457, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1458; memset(&l_N_1458, 0, sizeof l_N_1458);
S_R10(&l_N_1458, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1459; memset(&l_VE_1459, 0, sizeof l_VE_1459);
l_VE_1459 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1460; memset(&l_R_1460, 0, sizeof l_R_1460);
S_R10(&l_R_1460, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1455, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1460, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1460, l_S_1456, p_RV), 0);
S_R10(&l_R_1460, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1460, l_N_1458, l_D_1455, l_D_1455), 0);
S_R10(&l_R_1460, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1460, l_S_1456, l_S_1456), 0);
S_R10(&l_R_1460, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1460, l_I_1457, l_N_1458, l_D_1455), 0);
S_R10(&l_R_1460, r_FMT2(rt_str("@@->hi);", 8), l_R_1460, l_D_1455), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1460, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1460, l_I_1457, l_I_1457, l_I_1457), 0);
S_R10(&l_R_1460, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1460, l_I_1457, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1456, l_I_1457), r_NO_TEXT())), 0);
}
S_R10(&l_R_1460, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1460, l_I_1457, l_I_1457, l_I_1457), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1460, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1460, l_I_1457, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1459, r_FMT2(rt_str("@->p[@]", 7), l_D_1455, l_I_1457), r_FMT2(rt_str("@.p[@]", 6), l_S_1456, l_I_1457), p_LINE)), 0);
}
else
{
S_R10(&l_R_1460, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1460, l_I_1457, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1455, l_I_1457), r_FMT2(rt_str("@.p[@]", 6), l_S_1456, l_I_1457))), 0);
}
{ R10 rv1461 = l_R_1460;
return rv1461; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1462; memset(&l_D_1462, 0, sizeof l_D_1462);
S_R10(&l_D_1462, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1463; memset(&l_S_1463, 0, sizeof l_S_1463);
S_R10(&l_S_1463, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1464; memset(&l_F_1464, 0, sizeof l_F_1464);
l_F_1464 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1465; memset(&l_R_1465, 0, sizeof l_R_1465);
S_R10(&l_R_1465, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1462, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1465, r_FMT3(rt_str("@@ = @;", 7), l_R_1465, l_S_1463, p_RV), 0);
for (;;) {
if ((l_F_1464 == NULL)) goto L_end1466;
{
{
R10 l_DF_1467; memset(&l_DF_1467, 0, sizeof l_DF_1467);
S_R10(&l_DF_1467, r_FMT2(rt_str("@->@", 4), l_D_1462, ((*(R24 *)rt_nil_check(l_F_1464))).f_CNAME), 0);
R10 l_SF_1468; memset(&l_SF_1468, 0, sizeof l_SF_1468);
S_R10(&l_SF_1468, r_FMT2(rt_str("@.@", 3), l_S_1463, ((*(R24 *)rt_nil_check(l_F_1464))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1464))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1464))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1465, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1465, l_DF_1467, l_SF_1468), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1464))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1465, r_FMT3(rt_str("@ @ = @;", 8), l_R_1465, l_DF_1467, l_SF_1468), 0);
}
else
{
S_R10(&l_R_1465, r_FMT2(rt_str("@ @", 3), l_R_1465, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1464))).f_T, ((*(R24 *)rt_nil_check(l_F_1464))).f_T, l_DF_1467, l_SF_1468, p_LINE)), 0);
}
}
l_F_1464 = ((*(R24 *)rt_nil_check(l_F_1464))).f_NEXT;
}
RT_B_TICK();
} L_end1466: ;
{ R10 rv1469 = r_CATS(l_R_1465, rt_str(" }", 2));
return rv1469; }
}
}
{ R10 rv1470 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1470; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1471; memset(&l_ARGS_1471, 0, sizeof l_ARGS_1471);
l_ARGS_1471 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1472; memset(&l_Y_1472, 0, sizeof l_Y_1472);
l_Y_1472 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1471, p_LINE);
if ((l_Y_1472 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1473 = (r_CALL_SYM(l_Y_1472, l_ARGS_1471, p_LINE)).f_C;
return rv1473; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1474; memset(&l_X_1474, 0, sizeof l_X_1474);
S_R10(&l_X_1474, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1475; memset(&l_Z_1475, 0, sizeof l_Z_1475);
S_R10(&l_Z_1475, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1476; memset(&l_I_1476, 0, sizeof l_I_1476);
S_R10(&l_I_1476, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1477; memset(&l_N_1477, 0, sizeof l_N_1477);
S_R10(&l_N_1477, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1478; memset(&l_R_1478, 0, sizeof l_R_1478);
S_R10(&l_R_1478, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1474, p_A, l_Z_1475), 0);
S_R10(&l_R_1478, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1478, p_B, l_I_1476, l_N_1477), 0);
S_R10(&l_R_1478, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1478, l_X_1474, l_X_1474, l_Z_1475), 0);
S_R10(&l_R_1478, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1478, l_Z_1475, l_I_1476, l_N_1477), 0);
S_R10(&l_R_1478, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1478, l_X_1474, l_X_1474), 0);
S_R10(&l_R_1478, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1478, l_I_1476, l_I_1476, l_I_1476), 0);
S_R10(&l_R_1478, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1478, l_I_1476, l_I_1476, l_I_1476), 0);
S_R10(&l_R_1478, r_FMT2(rt_str("@@;", 3), l_R_1478, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1474, l_I_1476), r_FMT2(rt_str("@.p[@]", 6), l_Z_1475, l_I_1476), p_LINE)), 0);
{ R10 rv1479 = r_FMT2(rt_str("@ @r; })", 8), l_R_1478, l_I_1476);
return rv1479; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1480; memset(&l_X_1480, 0, sizeof l_X_1480);
S_R10(&l_X_1480, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1481; memset(&l_Z_1481, 0, sizeof l_Z_1481);
S_R10(&l_Z_1481, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1482; memset(&l_F_1482, 0, sizeof l_F_1482);
l_F_1482 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1483; memset(&l_R_1483, 0, sizeof l_R_1483);
S_R10(&l_R_1483, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1480, p_A, l_Z_1481), 0);
R10 l_EQ_1484; memset(&l_EQ_1484, 0, sizeof l_EQ_1484);
S_R10(&l_EQ_1484, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1483, r_FMT2(rt_str("@@;", 3), l_R_1483, p_B), 0);
for (;;) {
if ((l_F_1482 == NULL)) goto L_end1485;
{
{
R10 l_C_1486; memset(&l_C_1486, 0, sizeof l_C_1486);
S_R10(&l_C_1486, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1482))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1480, ((*(R24 *)rt_nil_check(l_F_1482))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1481, ((*(R24 *)rt_nil_check(l_F_1482))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1482))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1484, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1484, r_VARIANT_COND(l_F_1482, p_T, l_X_1480), l_C_1486), 0);
}
else
{
S_R10(&l_EQ_1484, r_FMT2(rt_str("@ && @", 6), l_EQ_1484, l_C_1486), 0);
}
}
l_F_1482 = ((*(R24 *)rt_nil_check(l_F_1482))).f_NEXT;
}
RT_B_TICK();
} L_end1485: ;
{ R10 rv1487 = r_FMT2(rt_str("@ @; })", 7), l_R_1483, l_EQ_1484);
return rv1487; }
}
}
{ R10 rv1488 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1488; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1489; memset(&l_A_1489, 0, sizeof l_A_1489);
S_R26(&l_A_1489, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1490; memset(&l_T_1490, 0, sizeof l_T_1490);
l_T_1490 = (l_A_1489).f_T;
R10 l_OP_1491; memset(&l_OP_1491, 0, sizeof l_OP_1491);
S_R10(&l_OP_1491, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1490))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1491, 1))))
{
{
R27 * l_ARGS_1492; memset(&l_ARGS_1492, 0, sizeof l_ARGS_1492);
l_ARGS_1492 = r_VAL_ARG(l_A_1489, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1493; memset(&l_Y_1493, 0, sizeof l_Y_1493);
l_Y_1493 = r_USER_OPERATOR(r_OP_NAME(l_OP_1491, 1), l_ARGS_1492, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1493 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1492))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1492))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1491, 1), l_ARGS_1492, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1491, 1));
}
}
if ((!(l_Y_1493 == NULL)))
{
{ R26 rv1494 = r_CALL_SYM(l_Y_1493, l_ARGS_1492, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1494; }
}
if ((((*(R22 *)rt_nil_check(l_T_1490))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1490));
}
}
}
if (r_TEQS(l_OP_1491, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1490))).f_KIND == g_T_BOOL))
{
{ R26 rv1495 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1489).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1495; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1490))).f_KIND == g_T_BITS))
{
{ R26 rv1496 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1489).f_C), l_T_1490);
return rv1496; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1490))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1491, rt_str("-", 1)))
{
{ R26 rv1497 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1489).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1490))).f_SCALE));
return rv1497; }
}
{ R26 rv1498 = r_MKET((l_A_1489).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1490))).f_SCALE));
return rv1498; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1490))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1499; memset(&l_FT_1499, 0, sizeof l_FT_1499);
l_FT_1499 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1490))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1491, rt_str("-", 1)))
{
{ R26 rv1500 = r_MKET(r_FLOAT_OP(l_OP_1491, r_MK(rt_str("0.0", 3)), (l_A_1489).f_C, l_FT_1499), l_FT_1499);
return rv1500; }
}
{ R26 rv1501 = r_MKET((l_A_1489).f_C, l_FT_1499);
return rv1501; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1490));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1502 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1502; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1503; memset(&l_OP_1503, 0, sizeof l_OP_1503);
S_R10(&l_OP_1503, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1504; memset(&l_A_1504, 0, sizeof l_A_1504);
R26 l_B_1505; memset(&l_B_1505, 0, sizeof l_B_1505);
if ((r_TEQS(l_OP_1503, rt_str("&", 1)) || r_TEQS(l_OP_1503, rt_str("!", 1))))
{
{
R23 l_MA_1506; memset(&l_MA_1506, 0, sizeof l_MA_1506);
S_R23(&l_MA_1506, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1507; memset(&l_CA_1507, 0, sizeof l_CA_1507);
S_R10(&l_CA_1507, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1508; memset(&l_CB_1508, 0, sizeof l_CB_1508);
S_R10(&l_CB_1508, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1503, rt_str("&", 1)))
{
{ R26 rv1509 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1507, l_CB_1508), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1509; }
}
{ R26 rv1510 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1507, l_CB_1508), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1510; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1505, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1504, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1505).f_T), 0);
}
else
{
S_R26(&l_A_1504, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1505, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1504).f_T), 0);
}
{ R26 rv1511 = r_APPLY_OPERATOR(p_E, l_OP_1503, l_A_1504, l_B_1505);
return rv1511; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1512; memset(&l_AT_1512, 0, sizeof l_AT_1512);
l_AT_1512 = (p_A).f_T;
R22 * l_BT_1513; memset(&l_BT_1513, 0, sizeof l_BT_1513);
l_BT_1513 = (p_B).f_T;
rt_int l_LINE_1514; memset(&l_LINE_1514, 0, sizeof l_LINE_1514);
l_LINE_1514 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1515; memset(&l_NAME_1515, 0, sizeof l_NAME_1515);
S_R10(&l_NAME_1515, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1515, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1515, (l_NAME_1515).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1515) || (((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1516; memset(&l_ARGS_1516, 0, sizeof l_ARGS_1516);
l_ARGS_1516 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1517; memset(&l_EXTRA_1517, 0, sizeof l_EXTRA_1517);
l_EXTRA_1517 = r_QUAL_ARGS(l_LINE_1514);
R12 * l_Y_1518; memset(&l_Y_1518, 0, sizeof l_Y_1518);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1517 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1517);
}
if ((!(l_EXTRA_1517 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1516))).f_NEXT))).f_NEXT = l_EXTRA_1517;
l_Y_1518 = r_USER_OPERATOR(l_NAME_1515, l_ARGS_1516, l_LINE_1514);
if ((!(l_Y_1518 == NULL)))
{
{ R26 rv1519 = r_CALL_SYM(l_Y_1518, l_ARGS_1516, l_LINE_1514);
return rv1519; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1516))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1515, l_ARGS_1516, l_LINE_1514) == NULL)))
{
r_FAILT(l_LINE_1514, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1515);
}
}
else
{
l_Y_1518 = r_USER_OPERATOR(l_NAME_1515, l_ARGS_1516, l_LINE_1514);
if ((!(l_Y_1518 == NULL)))
{
{ R26 rv1520 = r_CALL_SYM(l_Y_1518, l_ARGS_1516, l_LINE_1514);
return rv1520; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1521; memset(&l_Q_1521, 0, sizeof l_Q_1521);
l_Q_1521 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1516, l_LINE_1514);
if ((!(l_Q_1521 == NULL)))
{
{ R26 rv1522 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1521, l_ARGS_1516, l_LINE_1514)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1522; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1514, rt_str("no such operation for the abstract type: ", 41), l_NAME_1515);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1514, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1523 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1523; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1524 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1524; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_INT)))
{
{ R26 rv1525 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1525; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1526 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1526; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1512, l_BT_1513)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1512))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1514, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1527 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1527; }
}
r_FAILT(l_LINE_1514, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1512, l_BT_1513, l_LINE_1514);
{
R22 * l_T_1528; memset(&l_T_1528, 0, sizeof l_T_1528);
l_T_1528 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1528))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1512))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1513))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1528))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1512))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1513))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1528))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1528))).f_MLEN).f_V), 0);
}
{ R26 rv1529 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1528);
return rv1529; }
}
}
r_FAIL(l_LINE_1514, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_BITS)))
{
{ R26 rv1530 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1512);
return rv1530; }
}
r_FAILT(l_LINE_1514, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_INT)))
{
{ R26 rv1531 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1531; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1532; memset(&l_T_1532, 0, sizeof l_T_1532);
l_T_1532 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1512))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1513))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1533 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1532), l_T_1532);
return rv1533; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1514, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1512))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1514, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1514, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1512), (r_TYPE_NAME(l_AT_1512)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1534; memset(&l_RA_1534, 0, sizeof l_RA_1534);
l_RA_1534 = r_REAL_TYPE(p_A);
R22 * l_RB_1535; memset(&l_RB_1535, 0, sizeof l_RB_1535);
l_RB_1535 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1536 = 1;
return rv1536; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1537 = 0;
return rv1537; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1534))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1534))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1534))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1535))).f_MLEN).f_OK))
{
{ rt_int rv1538 = ((((*(R22 *)rt_nil_check(l_RA_1534))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1535))).f_MLEN).f_V);
return rv1538; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1534))).f_KIND == g_T_ARR))
{
{ rt_int rv1539 = (r_SAME_EXTENTS(l_RA_1534, l_RB_1535) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1534))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1535))).f_ELEM));
return rv1539; }
}
{ rt_int rv1540 = 1;
return rv1540; }
rt_raise(RT_X_INIT);
}
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C) { RT_B_TICK(); 
R22 * l_A_1541; memset(&l_A_1541, 0, sizeof l_A_1541);
l_A_1541 = r_REAL_TYPE(p_RT);
R22 * l_B_1542; memset(&l_B_1542, 0, sizeof l_B_1542);
l_B_1542 = r_REAL_TYPE(p_VT);
R10 l_R_1543; memset(&l_R_1543, 0, sizeof l_R_1543);
S_R10(&l_R_1543, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1541))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1542))).f_KIND == g_T_REC))))
{
{ R10 rv1544 = p_C;
return rv1544; }
}
{
R24 * l_F_1545; memset(&l_F_1545, 0, sizeof l_F_1545);
l_F_1545 = ((*(R22 *)rt_nil_check(l_A_1541))).f_FIELDS;
R25 * l_P_1546; memset(&l_P_1546, 0, sizeof l_P_1546);
l_P_1546 = ((*(R22 *)rt_nil_check(l_A_1541))).f_ARGS;
R25 * l_Q_1547; memset(&l_Q_1547, 0, sizeof l_Q_1547);
l_Q_1547 = ((*(R22 *)rt_nil_check(l_B_1542))).f_ARGS;
for (;;) {
if ((((l_F_1545 == NULL) || (l_P_1546 == NULL)) || (l_Q_1547 == NULL))) goto L_end1548;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1545))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1546))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1546))) && (!r_IS_GEN_ARG(l_Q_1547))) && (!(((((*(R25 *)rt_nil_check(l_P_1546))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1547))).f_MLO).f_OK)))))
{
S_R10(&l_R_1543, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1543, ((*(R24 *)rt_nil_check(l_F_1545))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1546))).f_LO), 0);
}
l_P_1546 = ((*(R25 *)rt_nil_check(l_P_1546))).f_NEXT;
l_Q_1547 = ((*(R25 *)rt_nil_check(l_Q_1547))).f_NEXT;
}
l_F_1545 = ((*(R24 *)rt_nil_check(l_F_1545))).f_NEXT;
}
RT_B_TICK();
} L_end1548: ;
}
if (((l_R_1543).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1549 = p_C;
return rv1549; }
}
{ R10 rv1550 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1543);
return rv1550; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1551; memset(&l_P_1551, 0, sizeof l_P_1551);
l_P_1551 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1552; memset(&l_Q_1552, 0, sizeof l_Q_1552);
l_Q_1552 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1551 == NULL) || (l_Q_1552 == NULL))) goto L_end1553;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1551))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1551))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1552))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1552))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1551))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1551))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1552))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1552))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1551))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1551))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1552))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1552))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1554 = 0;
return rv1554; }
}
}
l_P_1551 = ((*(R25 *)rt_nil_check(l_P_1551))).f_NEXT;
l_Q_1552 = ((*(R25 *)rt_nil_check(l_Q_1552))).f_NEXT;
}
RT_B_TICK();
} L_end1553: ;
{ rt_int rv1555 = 1;
return rv1555; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1556 = 0;
return rv1556; }
}
{ rt_int rv1557 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1557; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1558; memset(&l_T_1558, 0, sizeof l_T_1558);
l_T_1558 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1558))).f_SCALE = p_P;
{ R22 * rv1559 = l_T_1558;
return rv1559; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1560 = r_MK(rt_str("1", 1));
return rv1560; }
}
{ R10 rv1561 = r_MK(rt_str("0", 1));
return rv1561; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1562 = r_MK(rt_str("1", 1));
return rv1562; }
}
}
{ R10 rv1563 = r_MK(rt_str("0", 1));
return rv1563; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1564 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1564; }
}
}
{ rt_int rv1565 = ((rt_int)0LL);
return rv1565; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1566 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1566; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1567 = r_MK(rt_str("and", 3));
return rv1567; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1568 = r_MK(rt_str("or", 2));
return rv1568; }
}
{ R10 rv1569 = r_MK(rt_str("xor", 3));
return rv1569; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1570 = p_A;
return rv1570; }
}
{ rt_int rv1571 = p_B;
return rv1571; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1572 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1572; }
}
{ R10 rv1573 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1573; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1574; memset(&l_AT_1574, 0, sizeof l_AT_1574);
l_AT_1574 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1575; memset(&l_BT_1575, 0, sizeof l_BT_1575);
l_BT_1575 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1576; memset(&l_R_1576, 0, sizeof l_R_1576);
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1576, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1575))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1576, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1574, l_BT_1575)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1574, l_BT_1575, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1574) || r_HAS_ANY(l_BT_1575)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1574, l_BT_1575)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1574))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1574))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1575))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1574))
{
S_R10(&l_R_1576, r_COMPONENT_EQUAL(l_AT_1574, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1576, r_EQUAL_CODE(l_AT_1574, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1576, r_FMT1(rt_str("(!@)", 4), l_R_1576), 0);
}
{ R26 rv1577 = r_MKET(l_R_1576, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1577; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1578; memset(&l_S1_1578, 0, sizeof l_S1_1578);
l_S1_1578 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1579; memset(&l_S2_1579, 0, sizeof l_S2_1579);
l_S2_1579 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1580; memset(&l_S_1580, 0, sizeof l_S_1580);
l_S_1580 = r_MAX_INT(l_S1_1578, l_S2_1579);
R10 l_FN_1581; memset(&l_FN_1581, 0, sizeof l_FN_1581);
S_R10(&l_FN_1581, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1581, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1582 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1581, r_RESCALE_C((p_A).f_C, l_S1_1578, l_S_1580), r_RESCALE_C((p_B).f_C, l_S2_1579, l_S_1580)), r_INT_TYPE(l_S_1580));
return rv1582; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1583 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1578, l_S2_1579)));
return rv1583; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1584 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1578, l_S2_1579)));
return rv1584; }
}
{ R26 rv1585 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1578, l_S2_1579)));
return rv1585; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1586 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1578));
return rv1586; }
}
{ R26 rv1587 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1578));
return rv1587; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("/ is for floating point; fixed point division is // (3.2.4.2)", 61));
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("** has no predefined meaning (3.2.4.2)", 38));
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no such operator for fixed point values: ", 41), p_OP);
rt_raise(RT_X_INIT);
}
static R26 r_SCALED_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1588; memset(&l_S1_1588, 0, sizeof l_S1_1588);
l_S1_1588 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1589; memset(&l_S2_1589, 0, sizeof l_S2_1589);
l_S2_1589 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1590; memset(&l_RND_1590, 0, sizeof l_RND_1590);
S_R10(&l_RND_1590, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1591 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1591; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1590, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1592 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1592; }
}
{
R23 l_SM_1593; memset(&l_SM_1593, 0, sizeof l_SM_1593);
S_R23(&l_SM_1593, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1594; memset(&l_S_1594, 0, sizeof l_S_1594);
l_S_1594 = (l_SM_1593).f_V;
rt_int l_SR_1595; memset(&l_SR_1595, 0, sizeof l_SR_1595);
l_SR_1595 = r_MAX_INT(l_S1_1588, l_S2_1589);
if ((!(l_SM_1593).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1596 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1594, l_S1_1588), l_S2_1589)), l_RND_1590), r_INT_TYPE(l_S_1594));
return rv1596; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1597 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1594, l_S1_1588), l_S2_1589)), l_RND_1590), r_INT_TYPE(l_S_1594));
return rv1597; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1598 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1588), r_NUM(l_S_1594), l_RND_1590), r_INT_TYPE(l_S_1594));
return rv1598; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1599; memset(&l_SUB_1599, 0, sizeof l_SUB_1599);
S_R10(&l_SUB_1599, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1599, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1600 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1588), (p_B).f_C, r_NUM(l_S2_1589)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1594), l_SUB_1599, l_RND_1590)), r_INT_TYPE(l_S_1594));
return rv1600; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1601; memset(&l_V_1601, 0, sizeof l_V_1601);
S_R26(&l_V_1601, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1602; memset(&l_T_1602, 0, sizeof l_T_1602);
l_T_1602 = r_REAL_TYPE((l_V_1601).f_T);
R21 * l_R_1603; memset(&l_R_1603, 0, sizeof l_R_1603);
l_R_1603 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1604; memset(&l_TMP_1604, 0, sizeof l_TMP_1604);
S_R10(&l_TMP_1604, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1605; memset(&l_LO_1605, 0, sizeof l_LO_1605);
R26 l_HI_1606; memset(&l_HI_1606, 0, sizeof l_HI_1606);
R10 l_LOC_1607; memset(&l_LOC_1607, 0, sizeof l_LOC_1607);
R10 l_HIC_1608; memset(&l_HIC_1608, 0, sizeof l_HIC_1608);
R10 l_LO_OP_1609; memset(&l_LO_OP_1609, 0, sizeof l_LO_OP_1609);
S_R10(&l_LO_OP_1609, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1610; memset(&l_HI_OP_1610, 0, sizeof l_HI_OP_1610);
S_R10(&l_HI_OP_1610, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1605, r_EXPR(((*(R21 *)rt_nil_check(l_R_1603))).f_A, l_T_1602), 0);
S_R26(&l_HI_1606, r_EXPR(((*(R21 *)rt_nil_check(l_R_1603))).f_B, l_T_1602), 0);
if (((((*(R22 *)rt_nil_check(l_T_1602))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1602))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1602))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1602))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1602))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1605).f_T), l_T_1602)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1606).f_T), l_T_1602))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1603))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1603))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1609, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1603))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1610, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1602))).f_KIND == g_T_INT))
{
{
R26 l_X_1611; memset(&l_X_1611, 0, sizeof l_X_1611);
S_R26(&l_X_1611, r_MKET(l_TMP_1604, (l_V_1601).f_T), 0);
S_R10(&l_LOC_1607, r_FIXED_COMPARE(l_LO_1605, l_X_1611, l_LO_OP_1609), 0);
S_R10(&l_HIC_1608, r_FIXED_COMPARE(l_X_1611, l_HI_1606, l_HI_OP_1610), 0);
}
}
else
{
S_R10(&l_LOC_1607, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1605).f_C, l_LO_OP_1609, l_TMP_1604), 0);
S_R10(&l_HIC_1608, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1604, l_HI_OP_1610, (l_HI_1606).f_C), 0);
}
{ R26 rv1612 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1602), l_TMP_1604, (l_V_1601).f_C, l_LOC_1607), r_FMT1(rt_str("@; })", 5), l_HIC_1608)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1612; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1613 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1613; }
}
{ R10 rv1614 = (p_V).f_C;
return rv1614; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1615 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1615; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1616; memset(&l_B_1616, 0, sizeof l_B_1616);
l_B_1616 = ((rt_int)0LL);
rt_int l_P_1617; memset(&l_P_1617, 0, sizeof l_P_1617);
l_P_1617 = ((rt_int)1LL);
for (;;) {
if ((l_P_1617 >= p_N)) goto L_end1618;
{
l_B_1616 = rt_add(l_B_1616, ((rt_int)1LL));
l_P_1617 = rt_mul(l_P_1617, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1618: ;
{ rt_int rv1619 = l_B_1616;
return rv1619; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1620; memset(&l_M_1620, 0, sizeof l_M_1620);
S_R23(&l_M_1620, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1620).f_OK)
{
{ rt_int rv1621 = (l_M_1620).f_V;
return rv1621; }
}
}
}
}
{ rt_int rv1622 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1622; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1623 = ((rt_int)100000000LL);
return rv1623; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1624 = ((rt_int)15LL);
return rv1624; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1625 = ((rt_int)7LL);
return rv1625; }
}
{ rt_int rv1626 = ((rt_int)15LL);
return rv1626; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1627; memset(&l_SINGLE_1627, 0, sizeof l_SINGLE_1627);
l_SINGLE_1627 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1627)
{
{ rt_int rv1628 = rt_neg(((rt_int)125LL));
return rv1628; }
}
{ rt_int rv1629 = rt_neg(((rt_int)1021LL));
return rv1629; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1627)
{
{ rt_int rv1630 = ((rt_int)128LL);
return rv1630; }
}
{ rt_int rv1631 = ((rt_int)1024LL);
return rv1631; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1627)
{
{ rt_int rv1632 = ((rt_int)25LL);
return rv1632; }
}
{ rt_int rv1633 = ((rt_int)54LL);
return rv1633; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1627)
{
{ rt_int rv1634 = ((rt_int)8LL);
return rv1634; }
}
{ rt_int rv1635 = ((rt_int)11LL);
return rv1635; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1627)
{
{ rt_int rv1636 = ((rt_int)32LL);
return rv1636; }
}
{ rt_int rv1637 = ((rt_int)64LL);
return rv1637; }
}
{ rt_int rv1638 = ((rt_int)0LL);
return rv1638; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1639; memset(&l_K_1639, 0, sizeof l_K_1639);
l_K_1639 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1639 == g_T_ABS))
{
{ R23 rv1640 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1640; }
}
else if ((l_K_1639 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1641 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1641; }
}
}
{ R23 rv1642 = r_SOME(((rt_int)64LL));
return rv1642; }
}
else if ((l_K_1639 == g_T_FLOAT))
{
{ R23 rv1643 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1643; }
}
else if ((l_K_1639 == g_T_BOOL))
{
{ R23 rv1644 = r_SOME(((rt_int)1LL));
return rv1644; }
}
else if ((l_K_1639 == g_T_ENUM))
{
{ R23 rv1645 = r_SOME(r_ENUM_SIZE(p_T));
return rv1645; }
}
else if ((l_K_1639 == g_T_BITS))
{
{ R23 rv1646 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1646; }
}
else if ((l_K_1639 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1647 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1647; }
}
}
else if (((l_K_1639 == g_T_PTR) || (l_K_1639 == g_T_SEM)))
{
{ R23 rv1648 = r_SOME(((rt_int)64LL));
return rv1648; }
}
{ R23 rv1649 = r_NO_MVAL();
return rv1649; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1650; memset(&l_T_1650, 0, sizeof l_T_1650);
l_T_1650 = (p_B).f_T;
rt_int l_K_1651; memset(&l_K_1651, 0, sizeof l_K_1651);
l_K_1651 = ((*(R22 *)rt_nil_check(l_T_1650))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1652 = r_SIZE_OF(l_T_1650, (p_B).f_C);
return rv1652; }
}
if ((l_K_1651 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1653 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE);
return rv1653; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1654 = r_INT_ET(((rt_int)2LL));
return rv1654; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1655 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1655; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1656 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1656; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1657 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE));
return rv1657; }
}
{ R26 rv1658 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE));
return rv1658; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1659 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE));
return rv1659; }
}
{ R26 rv1660 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE));
return rv1660; }
}
}
else if ((l_K_1651 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1661 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE);
return rv1661; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1662 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE));
return rv1662; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1663 = r_INT_ET(((rt_int)2LL));
return rv1663; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1664 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE, p_NAME));
return rv1664; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1665; memset(&l_MT_1665, 0, sizeof l_MT_1665);
l_MT_1665 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE));
R10 l_C_1666; memset(&l_C_1666, 0, sizeof l_C_1666);
S_R10(&l_C_1666, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1666, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1667 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C, (p_B).f_SELF), l_MT_1665);
return rv1667; }
}
{ R26 rv1668 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1666), l_MT_1665);
return rv1668; }
}
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1669 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C, (p_B).f_SELF), l_MT_1665);
return rv1669; }
}
{ R26 rv1670 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1666), l_MT_1665);
return rv1670; }
}
}
}
else if ((l_K_1651 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1671 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1650))).f_BASE);
return rv1671; }
}
{ R26 rv1672 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1650))).f_BASE);
return rv1672; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1673 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1650))).f_BASE);
return rv1673; }
}
{ R26 rv1674 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1650))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1650))).f_BASE);
return rv1674; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1675 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1650))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1650))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1675; }
}
{ R26 rv1676 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1650))).f_BASE))).f_NLITS);
return rv1676; }
}
}
else if (((l_K_1651 == g_T_STR) || (l_K_1651 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1677 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1677; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1678 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1678; }
}
}
else if ((l_K_1651 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1679 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1650))).f_DIMS);
return rv1679; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1680 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1680; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1681 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1681; }
}
}
else if ((l_K_1651 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1650))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1682 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1682; }
}
{ R26 rv1683 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1683; }
}
}
else if (((l_K_1651 == g_T_ABS) || (l_K_1651 == g_T_REC)))
{
{
R22 * l_U_1684; memset(&l_U_1684, 0, sizeof l_U_1684);
l_U_1684 = l_T_1650;
if ((l_K_1651 == g_T_ABS))
{
l_U_1684 = ((*(R22 *)rt_nil_check(l_T_1650))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1684))).f_KIND == g_T_REC))
{
{
R24 * l_F_1685; memset(&l_F_1685, 0, sizeof l_F_1685);
l_F_1685 = r_FIND_FIELD(l_U_1684, p_NAME);
if ((!(l_F_1685 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1685))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1686 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1685))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1685))).f_T);
return rv1686; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_SHAPE(R26 p_B, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1687; memset(&l_T_1687, 0, sizeof l_T_1687);
l_T_1687 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1688; memset(&l_D_1688, 0, sizeof l_D_1688);
S_R10(&l_D_1688, r_NUM(((*(R22 *)rt_nil_check(l_T_1687))).f_DIMS), 0);
R10 l_X_1689; memset(&l_X_1689, 0, sizeof l_X_1689);
S_R10(&l_X_1689, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1690; memset(&l_R_1690, 0, sizeof l_R_1690);
S_R10(&l_R_1690, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1691; memset(&l_ELEM_1691, 0, sizeof l_ELEM_1691);
l_ELEM_1691 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1692; memset(&l_C_1692, 0, sizeof l_C_1692);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1693; memset(&l_TS_1693, 0, sizeof l_TS_1693);
l_TS_1693 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1693))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1693))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1693))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1691 = r_RESOLVE(l_TS_1693);
}
}
{
R22 * l_A_1694; memset(&l_A_1694, 0, sizeof l_A_1694);
l_A_1694 = r_ARRAY_OF(l_ELEM_1691, ((rt_int)1LL));
S_R10(&l_C_1692, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1687), l_X_1689, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1694))).f_CNAME), 0);
S_R10(&l_C_1692, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1692, l_R_1690, l_R_1690, l_R_1690), 0);
S_R10(&l_C_1692, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1692, l_R_1690, l_R_1690, l_D_1688), 0);
S_R10(&l_C_1692, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1692, l_R_1690, l_D_1688, l_R_1690), 0);
S_R10(&l_C_1692, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1692, l_D_1688), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1692, r_FMT2(rt_str("@ @", 3), l_C_1692, r_INIT_CODE(l_ELEM_1691, r_FMT1(rt_str("@.p[i]", 6), l_R_1690))), 0);
S_R10(&l_C_1692, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1692, l_R_1690, l_X_1689, l_R_1690), 0);
S_R10(&l_C_1692, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1692, l_X_1689), 0);
}
else
{
S_R10(&l_C_1692, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1692, l_R_1690, l_X_1689, l_X_1689), 0);
S_R10(&l_C_1692, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1692, l_X_1689, l_X_1689, l_X_1689), 0);
}
{ R26 rv1695 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1692, l_R_1690), l_A_1694);
return rv1695; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1696; memset(&l_N_1696, 0, sizeof l_N_1696);
l_N_1696 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1696))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1697 = l_N_1696;
return rv1697; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1698; memset(&l_K_1698, 0, sizeof l_K_1698);
l_K_1698 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1698 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1699 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1699; }
}
}
{ R26 rv1700 = r_INT_ET(((rt_int)64LL));
return rv1700; }
}
else if ((l_K_1698 == g_T_FLOAT))
{
{ R26 rv1701 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1701; }
}
else if ((l_K_1698 == g_T_BOOL))
{
{ R26 rv1702 = r_INT_ET(((rt_int)1LL));
return rv1702; }
}
else if ((l_K_1698 == g_T_ENUM))
{
{ R26 rv1703 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1703; }
}
else if ((l_K_1698 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1704 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1704; }
}
{ R26 rv1705 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1705; }
}
else if ((l_K_1698 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1706 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1706; }
}
{ R26 rv1707 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1707; }
}
else if (((l_K_1698 == g_T_PTR) || (l_K_1698 == g_T_SEM)))
{
{ R26 rv1708 = r_INT_ET(((rt_int)64LL));
return rv1708; }
}
else if ((l_K_1698 == g_T_ABS))
{
{ R26 rv1709 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1709; }
}
else if ((l_K_1698 == g_T_ARR))
{
{ R26 rv1710 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1710; }
}
{ R26 rv1711 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1711; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1712 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1712; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1713 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1713; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1714; memset(&l_RT_1714, 0, sizeof l_RT_1714);
l_RT_1714 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1714))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1714))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1715; memset(&l_TMP_1715, 0, sizeof l_TMP_1715);
S_R10(&l_TMP_1715, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1716; memset(&l_C_1716, 0, sizeof l_C_1716);
S_R10(&l_C_1716, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1715, l_TMP_1715, l_TMP_1715), 0);
S_R10(&l_C_1716, r_FMT3(rt_str("@@ @; })", 8), l_C_1716, r_INIT_CODE(l_RT_1714, l_TMP_1715), l_TMP_1715), 0);
{ R26 rv1717 = r_MKET(l_C_1716, p_T);
return rv1717; }
}
}
{ R26 rv1718 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1718; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1719 = 0;
return rv1719; }
}
{
R12 * l_Y_1720; memset(&l_Y_1720, 0, sizeof l_Y_1720);
l_Y_1720 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1720 == NULL))
{
{ rt_int rv1721 = 0;
return rv1721; }
}
{ rt_int rv1722 = (((*(R12 *)rt_nil_check(l_Y_1720))).f_KIND == g_Y_TYPE);
return rv1722; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1723 = r_INT_ET(((rt_int)100000000LL));
return rv1723; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1724 = r_INT_ET(((rt_int)15LL));
return rv1724; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1725 = r_INT_ET(((rt_int)0LL));
return rv1725; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1726; memset(&l_T_1726, 0, sizeof l_T_1726);
l_T_1726 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1726 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1726 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1726 = r_REAL_TYPE(l_T_1726);
if ((!(((*(R22 *)rt_nil_check(l_T_1726))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1726))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1727; memset(&l_TMP_1727, 0, sizeof l_TMP_1727);
S_R10(&l_TMP_1727, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1728; memset(&l_R_1728, 0, sizeof l_R_1728);
S_R10(&l_R_1728, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1726))).f_CNAME, l_TMP_1727, l_TMP_1727, l_TMP_1727), 0);
R24 * l_F_1729; memset(&l_F_1729, 0, sizeof l_F_1729);
l_F_1729 = ((*(R22 *)rt_nil_check(l_T_1726))).f_FIELDS;
S_R10(&l_R_1728, r_FMT2(rt_str("@@", 2), l_R_1728, r_INIT_CODE(l_T_1726, l_TMP_1727)), 0);
for (;;) {
if ((l_F_1729 == NULL)) goto L_end1730;
{
if ((((*(R24 *)rt_nil_check(l_F_1729))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1729))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1729))).f_LABELS, (r_TAG_VALUE(l_T_1726, ((*(R24 *)rt_nil_check(l_F_1729))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1726, ((*(R24 *)rt_nil_check(l_F_1729))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1731; memset(&l_INIT_1731, 0, sizeof l_INIT_1731);
l_INIT_1731 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1729))).f_NAME);
if ((l_INIT_1731 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1729))).f_NAME);
}
S_R10(&l_R_1728, r_FMT2(rt_str("@ @", 3), l_R_1728, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1729))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1727, ((*(R24 *)rt_nil_check(l_F_1729))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1731))).f_A, ((*(R24 *)rt_nil_check(l_F_1729))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1731))).f_LINE, l_TMP_1727)), 0);
}
}
}
l_F_1729 = ((*(R24 *)rt_nil_check(l_F_1729))).f_NEXT;
}
RT_B_TICK();
} L_end1730: ;
{
R21 * l_P_1732; memset(&l_P_1732, 0, sizeof l_P_1732);
l_P_1732 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1732 == NULL)) goto L_end1733;
{
{
R24 * l_G_1734; memset(&l_G_1734, 0, sizeof l_G_1734);
l_G_1734 = r_FIND_VFIELD(l_T_1726, ((*(R21 *)rt_nil_check(l_P_1732))).f_NAME);
if ((l_G_1734 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1732))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1732))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1734))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1732))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1732))).f_NAME);
}
r_CHECK_VARIANT(l_G_1734, l_T_1726, NULL, ((*(R21 *)rt_nil_check(l_P_1732))).f_LINE);
}
l_P_1732 = ((*(R21 *)rt_nil_check(l_P_1732))).f_NEXT;
}
RT_B_TICK();
} L_end1733: ;
}
{ R26 rv1735 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1728, l_TMP_1727), l_T_1726);
return rv1735; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1736; memset(&l_P_1736, 0, sizeof l_P_1736);
l_P_1736 = p_L;
for (;;) {
if ((l_P_1736 == NULL)) goto L_end1737;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1736))).f_NAME, p_NAME))
{
{ R21 * rv1738 = l_P_1736;
return rv1738; }
}
l_P_1736 = ((*(R21 *)rt_nil_check(l_P_1736))).f_NEXT;
}
RT_B_TICK();
} L_end1737: ;
{ R21 * rv1739 = NULL;
return rv1739; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1740; memset(&l_DIMS_1740, 0, sizeof l_DIMS_1740);
l_DIMS_1740 = ((rt_int)0LL);
R21 * l_P_1741; memset(&l_P_1741, 0, sizeof l_P_1741);
l_P_1741 = p_E;
R22 * l_ELEM_1742; memset(&l_ELEM_1742, 0, sizeof l_ELEM_1742);
l_ELEM_1742 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1741))).f_KIND == g_N_ARRCONS))) goto L_end1743;
{
l_DIMS_1740 = rt_add(l_DIMS_1740, ((rt_int)1LL));
l_P_1741 = ((*(R21 *)rt_nil_check(l_P_1741))).f_A;
}
RT_B_TICK();
} L_end1743: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1742 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1742 == NULL))
{
l_ELEM_1742 = (r_EXPR(l_P_1741, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1742))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1742))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1742 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1740);
{
R22 * l_A_1744; memset(&l_A_1744, 0, sizeof l_A_1744);
l_A_1744 = r_ARRAY_OF(l_ELEM_1742, l_DIMS_1740);
R10 l_TMP_1745; memset(&l_TMP_1745, 0, sizeof l_TMP_1745);
S_R10(&l_TMP_1745, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1746; memset(&l_R_1746, 0, sizeof l_R_1746);
S_R10(&l_R_1746, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1744))).f_CNAME, l_TMP_1745, l_TMP_1745), 0);
rt_int l_K_1747; memset(&l_K_1747, 0, sizeof l_K_1747);
l_K_1747 = ((rt_int)0LL);
{
R21 * l_Q_1748; memset(&l_Q_1748, 0, sizeof l_Q_1748);
l_Q_1748 = p_E;
R25 * l_TAIL_1749; memset(&l_TAIL_1749, 0, sizeof l_TAIL_1749);
l_TAIL_1749 = NULL;
{ rt_int it1751_lo = ((rt_int)1LL), it1751_hi = l_DIMS_1740;
for (rt_int it1751 = it1751_lo; it1751 <= it1751_hi; it1751++) {
{
{
R25 * l_B_1752; memset(&l_B_1752, 0, sizeof l_B_1752);
l_B_1752 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1753; memset(&l_N_1753, 0, sizeof l_N_1753);
l_N_1753 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1748))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1752)), ({ R25 rc1754; memset(&rc1754, 0, sizeof rc1754);  S_R10(&rc1754.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1754.f_HI, r_NUM(rt_sub(l_N_1753, ((rt_int)1LL))), 0); S_R23(&rc1754.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1754.f_MHI, r_SOME(rt_sub(l_N_1753, ((rt_int)1LL))), 0); rc1754.f_ANYARG = 0; rc1754.f_NEXT = NULL; rc1754; }), 0);
if ((l_TAIL_1749 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1744))).f_BOUNDS = l_B_1752;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1749))).f_NEXT = l_B_1752;
}
l_TAIL_1749 = l_B_1752;
}
l_Q_1748 = ((*(R21 *)rt_nil_check(l_Q_1748))).f_A;
}
RT_B_TICK();
if (it1751 == it1751_hi) break;
} } L_end1750: ;
}
S_R10(&l_R_1746, r_FMT2(rt_str("@@); ", 5), l_R_1746, l_TMP_1745), 0);
l_P_1741 = p_E;
{ rt_int it1756_lo = ((rt_int)0LL), it1756_hi = rt_sub(l_DIMS_1740, ((rt_int)1LL));
for (rt_int it1756 = it1756_lo; it1756 <= it1756_hi; it1756++) {
{
S_R10(&l_R_1746, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1746, l_TMP_1745, r_NUM(it1756), l_TMP_1745), 0);
S_R10(&l_R_1746, r_FMT3(rt_str("@@] = @;", 8), l_R_1746, r_NUM(it1756), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1741))).f_A), ((rt_int)1LL)))), 0);
l_P_1741 = ((*(R21 *)rt_nil_check(l_P_1741))).f_A;
}
RT_B_TICK();
if (it1756 == it1756_hi) break;
} } L_end1755: ;
S_R10(&l_R_1746, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1746, l_TMP_1745, l_TMP_1745, r_NUM(l_DIMS_1740)), 0);
S_R10(&l_R_1746, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1746, l_TMP_1745, l_TMP_1745), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1740, l_A_1744, l_TMP_1745, &l_R_1746, &l_K_1747);
{ R26 rv1757 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1746, l_TMP_1745), l_A_1744);
return rv1757; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1758; memset(&l_P_1758, 0, sizeof l_P_1758);
l_P_1758 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1758 == NULL)) goto L_end1759;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1758))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1758, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1758, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1758 = ((*(R21 *)rt_nil_check(l_P_1758))).f_NEXT;
}
RT_B_TICK();
} L_end1759: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1760 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1760; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1761 = 0;
return rv1761; }
}
{ rt_int rv1762 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1762; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1763; memset(&l_P_1763, 0, sizeof l_P_1763);
l_P_1763 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1763 == NULL)) goto L_end1764;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1763, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1763))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1763))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1763, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1763))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1763 = ((*(R21 *)rt_nil_check(l_P_1763))).f_NEXT;
}
RT_B_TICK();
} L_end1764: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1765; memset(&l_T_1765, 0, sizeof l_T_1765);
l_T_1765 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1765))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1765))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1765))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1766 = l_T_1765;
return rv1766; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1767; memset(&l_T_1767, 0, sizeof l_T_1767);
l_T_1767 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1768; memset(&l_V_1768, 0, sizeof l_V_1768);
S_R26(&l_V_1768, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1767), 0);
R22 * l_RT_1769; memset(&l_RT_1769, 0, sizeof l_RT_1769);
l_RT_1769 = r_REAL_TYPE(l_T_1767);
if (((((*(R22 *)rt_nil_check((l_V_1768).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_INT))
{
{ R26 rv1770 = r_MKET(r_RANGE_CHECK(l_RT_1769, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1768).f_C), r_NO_TEXT()), l_T_1767);
return rv1770; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_BOOL))
{
{ R26 rv1771 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1768).f_C), l_T_1767);
return rv1771; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_ENUM))
{
{ R26 rv1772 = r_MKET(r_ENUM_OF_BITS(l_RT_1769, (l_V_1768).f_C), l_T_1767);
return rv1772; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_FLOAT))
{
{ R26 rv1773 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1768).f_C), l_T_1767);
return rv1773; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_STR))
{
{ R26 rv1774 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1768).f_C), l_T_1767);
return rv1774; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1775; memset(&l_C_1775, 0, sizeof l_C_1775);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1775, r_CONVERT(l_V_1768, l_T_1767, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1769))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1769))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1769))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1768).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1775, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1775, ((*(R22 *)rt_nil_check(l_RT_1769))).f_LEN_C), 0);
}
{ R26 rv1776 = r_MKET(l_C_1775, l_T_1767);
return rv1776; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1777 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1777; }
}
}
{ R10 rv1778 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1778; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1779; memset(&l_NAME_1779, 0, sizeof l_NAME_1779);
S_R10(&l_NAME_1779, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1780; memset(&l_L_1780, 0, sizeof l_L_1780);
l_L_1780 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1781; memset(&l_R_1781, 0, sizeof l_R_1781);
S_R10(&l_R_1781, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1780 == NULL)) goto L_end1782;
{
{
R21 * l_V_1783; memset(&l_V_1783, 0, sizeof l_V_1783);
l_V_1783 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1784; memset(&l_FOUND_1784, 0, sizeof l_FOUND_1784);
l_FOUND_1784 = 0;
for (;;) {
if ((l_V_1783 == NULL)) goto L_end1785;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1783))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1780))).f_NAME))
{
S_R10(&l_R_1781, r_FMT2(rt_str("@@, ", 4), l_R_1781, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1783))).f_A, NULL)).f_C), 0);
l_FOUND_1784 = 1;
}
l_V_1783 = ((*(R21 *)rt_nil_check(l_V_1783))).f_NEXT;
}
RT_B_TICK();
} L_end1785: ;
if ((!l_FOUND_1784))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1780))).f_NAME);
}
}
l_L_1780 = ((*(R21 *)rt_nil_check(l_L_1780))).f_NEXT;
}
RT_B_TICK();
} L_end1782: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1779, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1781, l_NAME_1779, l_NAME_1779));
{ R10 rv1786 = r_FMT2(rt_str("@, @", 4), l_NAME_1779, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1786; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1787; memset(&l_SEM_1787, 0, sizeof l_SEM_1787);
l_SEM_1787 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1787 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1787)
{
{
R22 * l_T_1788; memset(&l_T_1788, 0, sizeof l_T_1788);
l_T_1788 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1788 = p_WANT;
}
}
{ R26 rv1789 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1788))).f_SCALE)), l_T_1788);
return rv1789; }
}
}
{
R22 * l_T_1790; memset(&l_T_1790, 0, sizeof l_T_1790);
l_T_1790 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1791; memset(&l_P_1791, 0, sizeof l_P_1791);
l_P_1791 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1791))).f_TARGET = l_T_1790;
((*(R22 *)rt_nil_check(l_P_1791))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1790))
{
{ R26 rv1792 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1790), r_INIT_CODE(l_T_1790, r_MK(rt_str("(*p)", 4)))), l_P_1791);
return rv1792; }
}
{ R26 rv1793 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_1790), r_CTYPE(l_T_1790)), l_P_1791);
return rv1793; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1794; memset(&l_P_1794, 0, sizeof l_P_1794);
l_P_1794 = p_L;
{ rt_int it1796_lo = ((rt_int)1LL), it1796_hi = p_K;
for (rt_int it1796 = it1796_lo; it1796 <= it1796_hi; it1796++) {
{
if ((!(l_P_1794 == NULL)))
{
l_P_1794 = ((*(R21 *)rt_nil_check(l_P_1794))).f_NEXT;
}
}
RT_B_TICK();
if (it1796 == it1796_hi) break;
} } L_end1795: ;
{ R21 * rv1797 = l_P_1794;
return rv1797; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1798; memset(&l_N_1798, 0, sizeof l_N_1798);
l_N_1798 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1798 < p_LO) || (l_N_1798 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1799; memset(&l_L_1799, 0, sizeof l_L_1799);
l_L_1799 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1799 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1799))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1799))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1799))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1800 = r_MK(rt_str("1", 1));
return rv1800; }
}
{ R10 rv1801 = r_MK(rt_str("0", 1));
return rv1801; }
}
if (((((*(R21 *)rt_nil_check(l_L_1799))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1799))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1799))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1802 = r_MK(rt_str("1", 1));
return rv1802; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1799))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1803 = r_MK(rt_str("0", 1));
return rv1803; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1804 = r_MK(rt_str("1", 1));
return rv1804; }
}
{ R10 rv1805 = r_MK(rt_str("0", 1));
return rv1805; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1806 = 0;
return rv1806; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1807 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1807; }
}
{ rt_int rv1808 = 0;
return rv1808; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1809 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1809; }
}
{ R21 * rv1810 = p_E;
return rv1810; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1811; memset(&l_NAMES_1811, 0, sizeof l_NAMES_1811);
l_NAMES_1811 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1811, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1812; memset(&l_L_1812, 0, sizeof l_L_1812);
l_L_1812 = (p_NAME).f_LEN;
{ rt_int it1814_lo = ((rt_int)0LL), it1814_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1812), ((rt_int)2LL));
for (rt_int it1814 = it1814_lo; it1814 <= it1814_hi; it1814++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1811, it1814, it1814), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1811, rt_add(rt_add(it1814, l_L_1812), ((rt_int)1LL)), rt_add(rt_add(it1814, l_L_1812), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1811, rt_add(it1814, ((rt_int)1LL)), rt_add(it1814, l_L_1812)), r_STR(p_NAME, l_L_1812)))
{
{
rt_int l_J_1815; memset(&l_J_1815, 0, sizeof l_J_1815);
l_J_1815 = rt_add(rt_add(it1814, l_L_1812), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1811, l_J_1815, l_J_1815), rt_str(" ", 1))) goto L_end1816;
{
l_J_1815 = rt_add(l_J_1815, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1816: ;
{ R10 rv1817 = r_MKN(rt_b_slice(l_NAMES_1811, rt_add(rt_add(it1814, l_L_1812), ((rt_int)2LL)), rt_sub(l_J_1815, ((rt_int)1LL))));
return rv1817; }
}
}
}
}
RT_B_TICK();
if (it1814 == it1814_hi) break;
} } L_end1813: ;
{ R10 rv1818 = r_NO_TEXT();
return rv1818; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1819; memset(&l_NAME_1819, 0, sizeof l_NAME_1819);
S_R10(&l_NAME_1819, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1820; memset(&l_LINE_1820, 0, sizeof l_LINE_1820);
l_LINE_1820 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1821; memset(&l_N_1821, 0, sizeof l_N_1821);
l_N_1821 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1819, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1819, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1822; memset(&l_TGT_1822, 0, sizeof l_TGT_1822);
l_TGT_1822 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1823; memset(&l_S_1823, 0, sizeof l_S_1823);
l_S_1823 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1820);
R21 * l_SRC_1824; memset(&l_SRC_1824, 0, sizeof l_SRC_1824);
l_SRC_1824 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1822 == NULL) || (l_SRC_1824 == NULL)))
{
r_FAILT(l_LINE_1820, rt_str("the wrong arguments for ", 24), l_NAME_1819);
}
if (r_TEQS(l_NAME_1819, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1823))).f_A = l_TGT_1822;
}
else
{
if ((l_N_1821 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1820, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1823))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1820);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1823))).f_A))).f_A = l_TGT_1822;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1823))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1823))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1823))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1824), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1819, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1820);
{
R14 l_SAVED_CODE_1825; memset(&l_SAVED_CODE_1825, 0, sizeof l_SAVED_CODE_1825);
S_R14(&l_SAVED_CODE_1825, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1826; memset(&l_C_1826, 0, sizeof l_C_1826);
S_R10(&l_C_1826, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1827; memset(&l_P_1827, 0, sizeof l_P_1827);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1828; memset(&rc1828, 0, sizeof rc1828);  rc1828.f_HEAD = NULL; rc1828.f_TAIL = NULL; rc1828; }), 0);
r_ASSIGN_STMT(l_S_1823);
l_P_1827 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1827 == NULL)) goto L_end1829;
{
S_R10(&l_C_1826, r_FMT2(rt_str("@ @", 3), l_C_1826, ((*(R15 *)rt_nil_check(l_P_1827))).f_T), 0);
l_P_1827 = ((*(R15 *)rt_nil_check(l_P_1827))).f_NEXT;
}
RT_B_TICK();
} L_end1829: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1825, 0);
{ R26 rv1830 = r_MKET(r_CATS(l_C_1826, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1830; }
}
}
}
if (r_TEQS(l_NAME_1819, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1831; memset(&l_S_1831, 0, sizeof l_S_1831);
l_S_1831 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1820);
((*(R21 *)rt_nil_check(l_S_1831))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1831))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1831))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1831))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1832 = r_EXPR(l_S_1831, p_WANT);
return rv1832; }
}
}
{
R10 l_SYM__1833; memset(&l_SYM__1833, 0, sizeof l_SYM__1833);
S_R10(&l_SYM__1833, r_OPERATOR_SYMBOL(l_NAME_1819), 0);
rt_int l_UNARY_OP_1834; memset(&l_UNARY_OP_1834, 0, sizeof l_UNARY_OP_1834);
l_UNARY_OP_1834 = ((r_TEQS(l_NAME_1819, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1819, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1819, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1835; memset(&l_X_1835, 0, sizeof l_X_1835);
if (l_UNARY_OP_1834)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1835 = r_NEW_NODE(g_N_UNOP, l_LINE_1820);
S_R10(&((*(R21 *)rt_nil_check(l_X_1835))).f_NAME, l_SYM__1833, 0);
((*(R21 *)rt_nil_check(l_X_1835))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1836 = r_EXPR(r_QUALIFIED(l_X_1835, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1820), p_WANT);
return rv1836; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1835 = r_BIN_NODE(l_SYM__1833, l_LINE_1820, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1833, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1835))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1819, (l_NAME_1819).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1835))).f_FL = ((rt_int)2LL);
}
{ R26 rv1837 = r_EXPR(r_QUALIFIED(l_X_1835, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1820), p_WANT);
return rv1837; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1838; memset(&l_R_1838, 0, sizeof l_R_1838);
l_R_1838 = p_X;
R21 * l_P_1839; memset(&l_P_1839, 0, sizeof l_P_1839);
l_P_1839 = p_Q;
for (;;) {
if ((l_P_1839 == NULL)) goto L_end1840;
{
if ((l_R_1838 == p_X))
{
l_R_1838 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1838))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1839))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1839))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1839))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1838))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1839))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1838))).f_B = l_P_1839;
}
l_P_1839 = ((*(R21 *)rt_nil_check(l_P_1839))).f_NEXT;
}
RT_B_TICK();
} L_end1840: ;
{ R21 * rv1841 = l_R_1838;
return rv1841; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1842 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1842; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1843; memset(&l_Y_1843, 0, sizeof l_Y_1843);
l_Y_1843 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1843 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1843))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1844; memset(&l_T_1844, 0, sizeof l_T_1844);
l_T_1844 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1843))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1844))).f_KIND == g_T_ENUM))
{
{ R22 * rv1845 = l_T_1844;
return rv1845; }
}
}
}
}
{ R22 * rv1846 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1846; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1847 = 1;
return rv1847; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1848 = 1;
return rv1848; }
}
{ rt_int rv1849 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1849; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1850 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1850; }
}
{ R21 * rv1851 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1851; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1852; memset(&l_NAME_1852, 0, sizeof l_NAME_1852);
S_R10(&l_NAME_1852, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1853; memset(&l_LINE_1853, 0, sizeof l_LINE_1853);
l_LINE_1853 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1852)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1852, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1852, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1852, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1854 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1854; }
}
if ((r_TEQS(l_NAME_1852, rt_str("PUT", 3)) || r_TEQS(l_NAME_1852, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1855; memset(&l_V_1855, 0, sizeof l_V_1855);
S_R26(&l_V_1855, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1855).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1853, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1855).f_T, rt_str("the terminal", 12), l_LINE_1853);
if (r_TEQS(l_NAME_1852, rt_str("PUT", 3)))
{
{ R26 rv1856 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1855).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1856; }
}
{ R26 rv1857 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1855).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1857; }
}
}
else if (r_TEQS(l_NAME_1852, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1858 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1858; }
}
else if (r_TEQS(l_NAME_1852, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1859 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1859; }
}
else if (r_TEQS(l_NAME_1852, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1860 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1860; }
}
else if (r_TEQS(l_NAME_1852, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1861 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1861; }
}
else if (r_TEQS(l_NAME_1852, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1862 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1862; }
}
else if (r_TEQS(l_NAME_1852, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1863 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1863; }
}
if (r_TEQS(l_NAME_1852, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1864 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1853);
return rv1864; }
}
else if (r_TEQS(l_NAME_1852, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1865 = r_TO_FIXED_CALL(p_E);
return rv1865; }
}
else if (r_TEQS(l_NAME_1852, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1866; memset(&l_V_1866, 0, sizeof l_V_1866);
S_R26(&l_V_1866, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1867; memset(&l_P_1867, 0, sizeof l_P_1867);
S_R23(&l_P_1867, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1868; memset(&l_VT_1868, 0, sizeof l_VT_1868);
l_VT_1868 = r_REAL_TYPE((l_V_1866).f_T);
R22 * l_T_1869; memset(&l_T_1869, 0, sizeof l_T_1869);
l_T_1869 = r_FLOAT_TYPE((l_P_1867).f_V);
R10 l_SINGLE_1870; memset(&l_SINGLE_1870, 0, sizeof l_SINGLE_1870);
S_R10(&l_SINGLE_1870, r_SINGLE_C((l_P_1867).f_V), 0);
R10 l_TR_1871; memset(&l_TR_1871, 0, sizeof l_TR_1871);
S_R10(&l_TR_1871, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1872; memset(&l_R_1872, 0, sizeof l_R_1872);
l_R_1872 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1872 == NULL))
{
l_R_1872 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1872))).f_KIND == g_N_QUAL))
{
l_R_1872 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1872))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1872))).f_NAME).f_LEN), l_LINE_1853);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1872))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1871, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1872))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1853, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1868))).f_KIND == g_T_INT))
{
{ R26 rv1873 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1866).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1868))).f_SCALE), l_SINGLE_1870, l_TR_1871), l_T_1869);
return rv1873; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1868))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1867).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1868))).f_SCALE))))
{
{
R21 * l_Q_1874; memset(&l_Q_1874, 0, sizeof l_Q_1874);
l_Q_1874 = r_NEW_NODE(g_N_QUAL, l_LINE_1853);
R21 * l_SAVED_Q_1875; memset(&l_SAVED_Q_1875, 0, sizeof l_SAVED_Q_1875);
l_SAVED_Q_1875 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1876; memset(&l_L_1876, 0, sizeof l_L_1876);
((*(R21 *)rt_nil_check(l_Q_1874))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1874;
S_R26(&l_L_1876, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1875;
{ R26 rv1877 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1876).f_C, l_SINGLE_1870, l_TR_1871), l_T_1869);
return rv1877; }
}
}
{ R26 rv1878 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1866).f_C, l_SINGLE_1870, l_TR_1871), l_T_1869);
return rv1878; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1868))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1868))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1868))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1853, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1879 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1866).f_C, l_SINGLE_1870, l_TR_1871), l_T_1869);
return rv1879; }
}
r_FAIL(l_LINE_1853, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1852, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1880 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1853);
return rv1880; }
}
else if (r_TEQS(l_NAME_1852, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1881; memset(&l_V_1881, 0, sizeof l_V_1881);
S_R26(&l_V_1881, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1881).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1882 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1881).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1881).f_T))).f_SCALE));
return rv1882; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1881).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1883 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1881).f_C), (l_V_1881).f_T);
return rv1883; }
}
r_FAIL(l_LINE_1853, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1852, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1852, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1884; memset(&l_V_1884, 0, sizeof l_V_1884);
S_R26(&l_V_1884, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1885; memset(&l_T_1885, 0, sizeof l_T_1885);
l_T_1885 = r_REAL_TYPE((l_V_1884).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1885))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1853, rt_str("an enumerated value expected by ", 32), l_NAME_1852);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1885))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1853, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1852);
}
if (r_TEQS(l_NAME_1852, rt_str("SUCC", 4)))
{
{ R26 rv1886 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1884).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1885))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1885))).f_BASE);
return rv1886; }
}
{ R26 rv1887 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1884).f_C), ((*(R22 *)rt_nil_check(l_T_1885))).f_BASE);
return rv1887; }
}
}
else if (r_TEQS(l_NAME_1852, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1888; memset(&l_V_1888, 0, sizeof l_V_1888);
S_R26(&l_V_1888, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1889; memset(&l_K_1889, 0, sizeof l_K_1889);
l_K_1889 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1888).f_T)))).f_KIND;
R22 * l_T_1890; memset(&l_T_1890, 0, sizeof l_T_1890);
l_T_1890 = r_NEW_TYP(l_K_1889);
if (((!(l_K_1889 == g_T_STR)) && (!(l_K_1889 == g_T_BITS))))
{
r_FAIL(l_LINE_1853, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1890))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1888).f_T))).f_BASE;
{ R26 rv1891 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1888).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1890);
return rv1891; }
}
}
else if (r_TEQS(l_NAME_1852, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1892 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1892; }
}
else if (r_TEQS(l_NAME_1852, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1893 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1893; }
}
else if (((r_TEQS(l_NAME_1852, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1852, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1852, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1894; memset(&l_BITS_1894, 0, sizeof l_BITS_1894);
S_R10(&l_BITS_1894, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1852, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1894, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1852, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1894, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1895; memset(&l_V_1895, 0, sizeof l_V_1895);
S_R26(&l_V_1895, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1895).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1853, rt_str("a character string expected by ", 31), l_NAME_1852);
}
r_ASCII_ONLY((l_V_1895).f_T, r_STR(l_NAME_1852, (l_NAME_1852).f_LEN), l_LINE_1853);
{ R26 rv1896 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1895).f_C, l_BITS_1894), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1896; }
}
}
}
else if ((r_TEQS(l_NAME_1852, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1852, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1897; memset(&l_S_1897, 0, sizeof l_S_1897);
S_R23(&l_S_1897, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1898; memset(&l_R_1898, 0, sizeof l_R_1898);
S_R23(&l_R_1898, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1898).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1853, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1853);
if (r_TEQS(l_NAME_1852, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1899 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1897).f_V));
return rv1899; }
}
{ R26 rv1900 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1897).f_V));
return rv1900; }
}
}
else if (((r_TEQS(l_NAME_1852, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1852, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1852, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1901; memset(&l_P_1901, 0, sizeof l_P_1901);
S_R23(&l_P_1901, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1902; memset(&l_T_1902, 0, sizeof l_T_1902);
l_T_1902 = r_FLOAT_TYPE((l_P_1901).f_V);
R10 l_C_1903; memset(&l_C_1903, 0, sizeof l_C_1903);
S_R10(&l_C_1903, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1901).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1903, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1852, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1904 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1903), l_T_1902);
return rv1904; }
}
else if (r_TEQS(l_NAME_1852, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1905 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1903), l_T_1902);
return rv1905; }
}
{ R26 rv1906 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1903), l_T_1902);
return rv1906; }
}
}
else if (r_TEQS(l_NAME_1852, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1907 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1907; }
}
else if (r_TEQS(l_NAME_1852, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1908 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1908; }
}
else if (r_TEQS(l_NAME_1852, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1909 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1909; }
}
{ R26 rv1910 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1910; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1911; memset(&l_T_1911, 0, sizeof l_T_1911);
l_T_1911 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1912; memset(&l_K_1912, 0, sizeof l_K_1912);
l_K_1912 = ((*(R22 *)rt_nil_check(l_T_1911))).f_KIND;
R22 * l_S_1913; memset(&l_S_1913, 0, sizeof l_S_1913);
l_S_1913 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1912 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1914 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1913);
return rv1914; }
}
{ R26 rv1915 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE)), l_S_1913);
return rv1915; }
}
else if ((l_K_1912 == g_T_FLOAT))
{
{ R26 rv1916 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE)), l_S_1913);
return rv1916; }
}
else if ((l_K_1912 == g_T_BOOL))
{
{ R26 rv1917 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1913);
return rv1917; }
}
else if ((l_K_1912 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1911))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1918 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1913);
return rv1918; }
}
{ R26 rv1919 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1913);
return rv1919; }
}
else if (((l_K_1912 == g_T_STR) || (l_K_1912 == g_T_BITS)))
{
{ R26 rv1920 = r_MKET((p_V).f_C, l_S_1913);
return rv1920; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1911));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1921; memset(&l_V_1921, 0, sizeof l_V_1921);
S_R26(&l_V_1921, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1922; memset(&l_T_1922, 0, sizeof l_T_1922);
l_T_1922 = r_REAL_TYPE((l_V_1921).f_T);
rt_int l_N_1923; memset(&l_N_1923, 0, sizeof l_N_1923);
l_N_1923 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1924; memset(&l_RND_1924, 0, sizeof l_RND_1924);
S_R10(&l_RND_1924, r_ROUNDING_ARG(p_E, l_N_1923), 0);
rt_int l_S_1925; memset(&l_S_1925, 0, sizeof l_S_1925);
l_S_1925 = ((rt_int)0LL);
if (((l_N_1923 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1925 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1926; memset(&l_K_1926, 0, sizeof l_K_1926);
l_K_1926 = ((rt_int)2LL);
for (;;) {
if ((l_K_1926 >= l_N_1923)) goto L_end1927;
{
{
R21 * l_R_1928; memset(&l_R_1928, 0, sizeof l_R_1928);
l_R_1928 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1926));
if ((r_IS_ROUNDING(l_R_1928) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1926)))).f_KIND == g_N_QUAL) && (l_K_1926 == rt_sub(l_N_1923, ((rt_int)1LL)))))))
{
if ((!(l_K_1926 == rt_sub(l_N_1923, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1928))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1928))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1928))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1928, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1928))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1928))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1928, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1926 = rt_add(l_K_1926, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1927: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1929 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1925), l_RND_1924), r_INT_TYPE(l_S_1925));
return rv1929; }
}
if ((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1930; memset(&l_SAVED_1930, 0, sizeof l_SAVED_1930);
l_SAVED_1930 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1931; memset(&l_C_1931, 0, sizeof l_C_1931);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1924, rt_str("1", 1));
S_R10(&l_C_1931, r_RESCALE_C((l_V_1921).f_C, ((*(R22 *)rt_nil_check(l_T_1922))).f_SCALE, l_S_1925), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1930;
{ R26 rv1932 = r_MKET(l_C_1931, r_INT_TYPE(l_S_1925));
return rv1932; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_FLOAT))
{
{ R26 rv1933 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1921).f_C, r_NUM(l_S_1925), l_RND_1924), r_INT_TYPE(l_S_1925));
return rv1933; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1922))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1922))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1922))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1934 = r_MKET(r_RESCALE_C((l_V_1921).f_C, ((rt_int)0LL), l_S_1925), r_INT_TYPE(l_S_1925));
return rv1934; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_BITS))
{
{ R26 rv1935 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1921).f_C), ((rt_int)0LL), l_S_1925), r_INT_TYPE(l_S_1925));
return rv1935; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1922))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1922, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1936 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1921).f_C, r_NUM(l_S_1925), l_RND_1924), r_INT_TYPE(l_S_1925));
return rv1936; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1921).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1937; memset(&l_T_1937, 0, sizeof l_T_1937);
l_T_1937 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1938; memset(&l_K_1938, 0, sizeof l_K_1938);
l_K_1938 = ((*(R22 *)rt_nil_check(l_T_1937))).f_KIND;
if ((l_K_1938 == g_T_BITS))
{
{ R26 rv1939 = p_V;
return rv1939; }
}
else if ((l_K_1938 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1937))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1937))).f_REPS))).f_B == NULL)))
{
{ R26 rv1940 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1937)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1937)));
return rv1940; }
}
}
{ R26 rv1941 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1937))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1937)));
return rv1941; }
}
else if ((l_K_1938 == g_T_STR))
{
{ R26 rv1942 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1942; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1938 == g_T_INT))
{
{ R26 rv1943 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1943; }
}
else if ((l_K_1938 == g_T_BOOL))
{
{ R26 rv1944 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1944; }
}
else if ((l_K_1938 == g_T_FLOAT))
{
{ R26 rv1945 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1945; }
}
else if ((l_K_1938 == g_T_STR))
{
{ R26 rv1946 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1946; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1937));
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG(R27 * p_A) { RT_B_TICK(); 
if ((!((*(R27 *)rt_nil_check(p_A))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(p_A))).f_V, r_EXPR(((*(R27 *)rt_nil_check(p_A))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(p_A))).f_HAVE = 1;
}
}
static rt_int r_WANT_SENSITIVE(R27 * p_A) { RT_B_TICK(); 
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1947 = 0;
return rv1947; }
}
{ rt_int rv1948 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1948; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1949; memset(&l_N_1949, 0, sizeof l_N_1949);
l_N_1949 = ((rt_int)0LL);
R27 * l_P_1950; memset(&l_P_1950, 0, sizeof l_P_1950);
l_P_1950 = p_A;
for (;;) {
if ((l_P_1950 == NULL)) goto L_end1951;
{
l_N_1949 = rt_add(l_N_1949, ((rt_int)1LL));
l_P_1950 = ((*(R27 *)rt_nil_check(l_P_1950))).f_NEXT;
}
RT_B_TICK();
} L_end1951: ;
{ rt_int rv1952 = l_N_1949;
return rv1952; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1953; memset(&l_HEAD_1953, 0, sizeof l_HEAD_1953);
l_HEAD_1953 = NULL;
R27 * l_TAIL_1954; memset(&l_TAIL_1954, 0, sizeof l_TAIL_1954);
l_TAIL_1954 = NULL;
rt_int l_G_1955; memset(&l_G_1955, 0, sizeof l_G_1955);
l_G_1955 = ((rt_int)0LL);
{ rt_int it1957_lo = ((rt_int)0LL), it1957_hi = ((rt_int)2LL);
for (rt_int it1957 = it1957_lo; it1957 <= it1957_hi; it1957++) {
{
{
R21 * l_P_1958; memset(&l_P_1958, 0, sizeof l_P_1958);
l_P_1958 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1957 == ((rt_int)1LL)))
{
l_P_1958 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1957 == ((rt_int)2LL)))
{
l_P_1958 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1958 == NULL)) goto L_end1959;
{
{
R27 * l_A_1960; memset(&l_A_1960, 0, sizeof l_A_1960);
l_A_1960 = r_NODE_ARG(l_P_1958, it1957, NULL);
if ((l_TAIL_1954 == NULL))
{
l_HEAD_1953 = l_A_1960;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1954))).f_NEXT = l_A_1960;
}
l_TAIL_1954 = l_A_1960;
}
l_P_1958 = ((*(R21 *)rt_nil_check(l_P_1958))).f_NEXT;
}
RT_B_TICK();
} L_end1959: ;
}
}
RT_B_TICK();
if (it1957 == it1957_hi) break;
} } L_end1956: ;
{ R27 * rv1961 = l_HEAD_1953;
return rv1961; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1962; memset(&l_SAVED_1962, 0, sizeof l_SAVED_1962);
l_SAVED_1962 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1963; memset(&l_SAVED_Q_1963, 0, sizeof l_SAVED_Q_1963);
l_SAVED_Q_1963 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1964; memset(&l_V_1964, 0, sizeof l_V_1964);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1964, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1962;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1963;
{ R26 rv1965 = l_V_1964;
return rv1965; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1966; memset(&l_ARGS_1966, 0, sizeof l_ARGS_1966);
l_ARGS_1966 = r_CALL_ARGS(p_E);
R12 * l_Y_1967; memset(&l_Y_1967, 0, sizeof l_Y_1967);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1968 = r_START_IO_CALL(p_E);
return rv1968; }
}
l_Y_1967 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1967 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1967))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1969 = r_BUILTIN(p_E, p_WANT);
return rv1969; }
}
{ R26 rv1970 = r_CALL_SYM(l_Y_1967, l_ARGS_1966, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1970; }
}
l_Y_1967 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1966, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1967 == NULL))
{
{
R12 * l_P_1971; memset(&l_P_1971, 0, sizeof l_P_1971);
l_P_1971 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1971 == NULL)) goto L_end1972;
{
if ((((*(R12 *)rt_nil_check(l_P_1971))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1973 = r_BUILTIN(p_E, p_WANT);
return rv1973; }
}
l_P_1971 = r_LOOKUP_NEXT(l_P_1971);
}
RT_B_TICK();
} L_end1972: ;
}
{
R12 * l_B_1974; memset(&l_B_1974, 0, sizeof l_B_1974);
l_B_1974 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1974 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1974))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1975 = r_BUILTIN(p_E, p_WANT);
return rv1975; }
}
if (((((*(R12 *)rt_nil_check(l_B_1974))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1974))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1976; memset(&l_BASE_1976, 0, sizeof l_BASE_1976);
S_R10(&l_BASE_1976, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1976).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1977; memset(&l_N_1977, 0, sizeof l_N_1977);
l_N_1977 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1977))).f_NAME, l_BASE_1976, 0);
{ R26 rv1978 = r_BUILTIN(l_N_1977, p_WANT);
return rv1978; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1979 = r_CALL_SYM(l_Y_1967, l_ARGS_1966, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1979; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1980; memset(&l_S_1980, 0, sizeof l_S_1980);
l_S_1980 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1980, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1982_lo = ((rt_int)1LL), it1982_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1982 = it1982_lo; it1982 <= it1982_hi; it1982++) {
{
if (rt_b_eq(rt_b_slice(l_S_1980, it1982, it1982), rt_str("$", 1)))
{
{
R10 l_P_1983; memset(&l_P_1983, 0, sizeof l_P_1983);
S_R10(&l_P_1983, r_MKN(rt_b_slice(l_S_1980, ((rt_int)0LL), rt_sub(it1982, ((rt_int)1LL)))), 0);
R10 l_B_1984; memset(&l_B_1984, 0, sizeof l_B_1984);
S_R10(&l_B_1984, r_MKN(rt_b_slice(l_S_1980, rt_add(it1982, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1983) || r_TEQS(l_P_1983, rt_str("INTEGER", 7))) || r_TEQS(l_P_1983, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1983, rt_str("ENUM", 4))) || r_TEQS(l_P_1983, rt_str("ARRAY", 5))) || r_TEQS(l_P_1983, rt_str("RECORD", 6))) || r_TEQS(l_P_1983, rt_str("PTR", 3))) || r_TEQS(l_P_1983, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1985; memset(&l_Y_1985, 0, sizeof l_Y_1985);
l_Y_1985 = r_LOOKUP(l_B_1984);
for (;;) {
if ((l_Y_1985 == NULL)) goto L_end1986;
{
if ((((*(R12 *)rt_nil_check(l_Y_1985))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1987 = l_B_1984;
return rv1987; }
}
l_Y_1985 = r_LOOKUP_NEXT(l_Y_1985);
}
RT_B_TICK();
} L_end1986: ;
}
}
}
{ R10 rv1988 = r_NO_TEXT();
return rv1988; }
}
}
RT_B_TICK();
if (it1982 == it1982_hi) break;
} } L_end1981: ;
{ R10 rv1989 = r_NO_TEXT();
return rv1989; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1990; memset(&l_B_1990, 0, sizeof l_B_1990);
l_B_1990 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1991; memset(&l_S_1991, 0, sizeof l_S_1991);
l_S_1991 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1991, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1993_lo = ((rt_int)1LL), it1993_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1993 = it1993_lo; it1993 <= it1993_hi; it1993++) {
{
if (rt_b_eq(rt_b_slice(l_S_1991, it1993, it1993), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1991, ((rt_int)0LL), rt_sub(it1993, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1994 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1991, rt_add(it1993, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1994; }
}
goto L_end1992;
}
}
RT_B_TICK();
if (it1993 == it1993_hi) break;
} } L_end1992: ;
}
for (;;) {
if ((l_B_1990 == NULL)) goto L_end1995;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1990))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1990))).f_NAME, p_NAME)))
{
{ R12 * rv1996 = ((*(R20 *)rt_nil_check(l_B_1990))).f_R;
return rv1996; }
}
l_B_1990 = ((*(R20 *)rt_nil_check(l_B_1990))).f_NEXT;
}
RT_B_TICK();
} L_end1995: ;
{ R12 * rv1997 = NULL;
return rv1997; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1998 = 0;
return rv1998; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1999 = 0;
return rv1999; }
}
}
}
{ rt_int rv2000 = 1;
return rv2000; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2001; memset(&l_Y_2001, 0, sizeof l_Y_2001);
l_Y_2001 = r_LOOKUP(p_NAME);
R12 * l_BEST_2002; memset(&l_BEST_2002, 0, sizeof l_BEST_2002);
l_BEST_2002 = NULL;
rt_int l_BEST_SCORE_2003; memset(&l_BEST_SCORE_2003, 0, sizeof l_BEST_SCORE_2003);
l_BEST_SCORE_2003 = ((rt_int)0LL);
rt_int l_TIES_2004; memset(&l_TIES_2004, 0, sizeof l_TIES_2004);
l_TIES_2004 = ((rt_int)0LL);
rt_int l_COUNT_2005; memset(&l_COUNT_2005, 0, sizeof l_COUNT_2005);
l_COUNT_2005 = ((rt_int)0LL);
rt_int l_N_2006; memset(&l_N_2006, 0, sizeof l_N_2006);
l_N_2006 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2001 == NULL)) goto L_end2007;
{
if ((!r_IS_ROUTINE(l_Y_2001)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2001))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2007;
}
}
else if (r_CANDIDATE(l_Y_2001, p_NAME))
{
{
R12 * l_R_2008; memset(&l_R_2008, 0, sizeof l_R_2008);
l_R_2008 = r_ORIGINAL(l_Y_2001);
rt_int l_SCORE_2009; memset(&l_SCORE_2009, 0, sizeof l_SCORE_2009);
r_ROUTINE_HEADER(l_R_2008);
if ((((r_PARAM_COUNT(l_R_2008) == l_N_2006) && (!r_SEEN_ROUTINE(l_R_2008, p_NAME, l_Y_2001))) && (!r_HIDDEN_ROUTINE(l_R_2008, p_NAME, l_Y_2001))))
{
l_COUNT_2005 = rt_add(l_COUNT_2005, ((rt_int)1LL));
l_SCORE_2009 = r_MATCH_SCORE(l_R_2008, p_ARGS);
if ((l_SCORE_2009 > l_BEST_SCORE_2003))
{
l_BEST_2002 = l_R_2008;
l_BEST_SCORE_2003 = l_SCORE_2009;
l_TIES_2004 = ((rt_int)0LL);
}
else if (((l_SCORE_2009 == l_BEST_SCORE_2003) && (l_SCORE_2009 > ((rt_int)0LL))))
{
l_TIES_2004 = rt_add(l_TIES_2004, ((rt_int)1LL));
}
}
}
}
l_Y_2001 = r_LOOKUP_NEXT(l_Y_2001);
}
RT_B_TICK();
} L_end2007: ;
if (((l_TIES_2004 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2010 = l_BEST_2002;
return rv2010; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2011; memset(&l_Y_2011, 0, sizeof l_Y_2011);
l_Y_2011 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2011 == p_STOP) || (l_Y_2011 == NULL))) goto L_end2012;
{
if ((((*(R12 *)rt_nil_check(l_Y_2011))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2011) == p_R))
{
{ rt_int rv2013 = 1;
return rv2013; }
}
}
l_Y_2011 = r_LOOKUP_NEXT(l_Y_2011);
}
RT_B_TICK();
} L_end2012: ;
{ rt_int rv2014 = 0;
return rv2014; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2015; memset(&l_Y_2015, 0, sizeof l_Y_2015);
l_Y_2015 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2015 == p_STOP) || (l_Y_2015 == NULL))) goto L_end2016;
{
if (((((*(R12 *)rt_nil_check(l_Y_2015))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2015))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2017; memset(&l_O_2017, 0, sizeof l_O_2017);
l_O_2017 = r_ORIGINAL(l_Y_2015);
if ((!(l_O_2017 == p_R)))
{
r_ROUTINE_HEADER(l_O_2017);
if (r_SAME_SIGNATURE(l_O_2017, p_R))
{
{ rt_int rv2018 = 1;
return rv2018; }
}
}
}
}
l_Y_2015 = r_LOOKUP_NEXT(l_Y_2015);
}
RT_B_TICK();
} L_end2016: ;
{ rt_int rv2019 = 0;
return rv2019; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2020; memset(&l_P_2020, 0, sizeof l_P_2020);
l_P_2020 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2021; memset(&l_Q_2021, 0, sizeof l_Q_2021);
l_Q_2021 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2022 = 0;
return rv2022; }
}
for (;;) {
if (((l_P_2020 == NULL) || (l_Q_2021 == NULL))) goto L_end2023;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2020))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2021))).f_MODE)))
{
{ rt_int rv2024 = 0;
return rv2024; }
}
if (((((*(R28 *)rt_nil_check(l_P_2020))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2021))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2020))).f_T == ((*(R28 *)rt_nil_check(l_Q_2021))).f_T)))
{
{ rt_int rv2025 = 0;
return rv2025; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2020))).f_T, ((*(R28 *)rt_nil_check(l_Q_2021))).f_T)))
{
{ rt_int rv2026 = 0;
return rv2026; }
}
l_P_2020 = ((*(R28 *)rt_nil_check(l_P_2020))).f_NEXT;
l_Q_2021 = ((*(R28 *)rt_nil_check(l_Q_2021))).f_NEXT;
}
RT_B_TICK();
} L_end2023: ;
{ rt_int rv2027 = ((l_P_2020 == NULL) && (l_Q_2021 == NULL));
return rv2027; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2028; memset(&l_N_2028, 0, sizeof l_N_2028);
l_N_2028 = ((rt_int)0LL);
R28 * l_P_2029; memset(&l_P_2029, 0, sizeof l_P_2029);
l_P_2029 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2029 == NULL)) goto L_end2030;
{
l_N_2028 = rt_add(l_N_2028, ((rt_int)1LL));
l_P_2029 = ((*(R28 *)rt_nil_check(l_P_2029))).f_NEXT;
}
RT_B_TICK();
} L_end2030: ;
{ rt_int rv2031 = l_N_2028;
return rv2031; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2032; memset(&l_P_2032, 0, sizeof l_P_2032);
l_P_2032 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2033; memset(&l_A_2033, 0, sizeof l_A_2033);
l_A_2033 = p_ARGS;
rt_int l_EXACT_2034; memset(&l_EXACT_2034, 0, sizeof l_EXACT_2034);
l_EXACT_2034 = 1;
R20 * l_BS_2035; memset(&l_BS_2035, 0, sizeof l_BS_2035);
l_BS_2035 = r_NEW_BINDS();
R22 * l_PT_2036; memset(&l_PT_2036, 0, sizeof l_PT_2036);
for (;;) {
if ((l_P_2032 == NULL)) goto L_end2037;
{
l_PT_2036 = r_FORMAL_VIEW(p_R, l_P_2032);
if ((!(((*(R28 *)rt_nil_check(l_P_2032))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2033))).f_MODE)))
{
{ rt_int rv2038 = ((rt_int)0LL);
return rv2038; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2032))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2032, l_A_2033, l_BS_2035)))
{
{ rt_int rv2039 = ((rt_int)0LL);
return rv2039; }
}
}
else if ((l_PT_2036 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2033))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2033))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2040 = ((rt_int)0LL);
return rv2040; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2033))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2033))).f_E, l_PT_2036)))
{
{ rt_int rv2041 = ((rt_int)0LL);
return rv2041; }
}
}
else
{
r_TYPE_ARG(l_A_2033);
{
R22 * l_AT_2042; memset(&l_AT_2042, 0, sizeof l_AT_2042);
l_AT_2042 = (((*(R27 *)rt_nil_check(l_A_2033))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2036, l_AT_2042) || (((((*(R22 *)rt_nil_check(l_AT_2042))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2036)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2043 = ((rt_int)0LL);
return rv2043; }
}
if ((!r_SAME_TYPE(l_PT_2036, l_AT_2042)))
{
if ((((*(R28 *)rt_nil_check(l_P_2032))).f_MODE == g_M_INOUT))
{
{ rt_int rv2044 = ((rt_int)0LL);
return rv2044; }
}
l_EXACT_2034 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2042)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2036)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2032))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2042))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2036))).f_SCALE)))
{
{ rt_int rv2045 = ((rt_int)0LL);
return rv2045; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2032))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2036))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2042))).f_SCALE)))
{
{ rt_int rv2046 = ((rt_int)0LL);
return rv2046; }
}
}
}
}
l_P_2032 = ((*(R28 *)rt_nil_check(l_P_2032))).f_NEXT;
l_A_2033 = ((*(R27 *)rt_nil_check(l_A_2033))).f_NEXT;
}
RT_B_TICK();
} L_end2037: ;
if (l_EXACT_2034)
{
{ rt_int rv2047 = ((rt_int)2LL);
return rv2047; }
}
{ rt_int rv2048 = ((rt_int)1LL);
return rv2048; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2049; memset(&l_RT_2049, 0, sizeof l_RT_2049);
l_RT_2049 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_ENUM))
{
{ rt_int rv2050 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2049) == NULL));
return rv2050; }
}
{ rt_int rv2051 = 0;
return rv2051; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2052 = (((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_PTR);
return rv2052; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2053 = (((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_REC);
return rv2053; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2054 = (((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_ARR);
return rv2054; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2055 = (((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_INT);
return rv2055; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2056 = ((((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2049))).f_KIND == g_T_SEM));
return rv2056; }
}
{ rt_int rv2057 = 0;
return rv2057; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2058; memset(&l_Y_2058, 0, sizeof l_Y_2058);
l_Y_2058 = r_ORIGINAL(p_Y0);
R28 * l_P_2059; memset(&l_P_2059, 0, sizeof l_P_2059);
R27 * l_A_2060; memset(&l_A_2060, 0, sizeof l_A_2060);
l_A_2060 = p_ARGS;
R10 l_C_2061; memset(&l_C_2061, 0, sizeof l_C_2061);
S_R10(&l_C_2061, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2062; memset(&l_SEP_2062, 0, sizeof l_SEP_2062);
S_R10(&l_SEP_2062, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2063; memset(&l_PRE_2063, 0, sizeof l_PRE_2063);
S_R10(&l_PRE_2063, r_MK(rt_str("", 0)), 0);
R10 l_POST_2064; memset(&l_POST_2064, 0, sizeof l_POST_2064);
S_R10(&l_POST_2064, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2065; memset(&l_SHARED_2065, 0, sizeof l_SHARED_2065);
l_SHARED_2065 = 0;
R22 * l_PT_2066; memset(&l_PT_2066, 0, sizeof l_PT_2066);
if (((*(R12 *)rt_nil_check(l_Y_2058))).f_GENERIC)
{
l_Y_2058 = r_INSTANCE(l_Y_2058, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_2058, p_LINE);
{
R21 * l_U_2067; memset(&l_U_2067, 0, sizeof l_U_2067);
l_U_2067 = ((*(R12 *)rt_nil_check(l_Y_2058))).f_USES;
for (;;) {
if ((l_U_2067 == NULL)) goto L_end2068;
{
{
R12 * l_H_2069; memset(&l_H_2069, 0, sizeof l_H_2069);
l_H_2069 = r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2067))).f_NAME);
if ((!(l_H_2069 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2069))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2069))).f_OWNER == ((*(R21 *)rt_nil_check(l_U_2067))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2058))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2058))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R21 *)rt_nil_check(l_U_2067))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2067))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2067 = ((*(R21 *)rt_nil_check(l_U_2067))).f_NEXT;
}
RT_B_TICK();
} L_end2068: ;
}
if (((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) && (!(((*(R12 *)rt_nil_check(l_Y_2058))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2058))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2058))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2061, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2058))).f_LEVEL), 0);
S_R10(&l_SEP_2062, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2070; memset(&l_Q_2070, 0, sizeof l_Q_2070);
l_Q_2070 = p_ARGS;
for (;;) {
if ((l_Q_2070 == NULL)) goto L_end2071;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2070))).f_MODE == g_M_IN)))
{
l_SHARED_2065 = 1;
}
l_Q_2070 = ((*(R27 *)rt_nil_check(l_Q_2070))).f_NEXT;
}
RT_B_TICK();
} L_end2071: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2058))).f_USES == NULL)))
{
l_SHARED_2065 = 1;
}
}
l_P_2059 = ((*(R12 *)rt_nil_check(l_Y_2058))).f_PARAMS;
for (;;) {
if ((l_P_2059 == NULL)) goto L_end2072;
{
if ((l_A_2060 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2066 = r_FORMAL_VIEW(l_Y_2058, l_P_2059);
if ((l_PT_2066 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2059))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2066)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2073; memset(&l_V_2073, 0, sizeof l_V_2073);
R10 l_CV_2074; memset(&l_CV_2074, 0, sizeof l_CV_2074);
if ((((*(R27 *)rt_nil_check(l_A_2060))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2060))))
{
S_R26(&l_V_2073, ((*(R27 *)rt_nil_check(l_A_2060))).f_V, 0);
}
else
{
S_R26(&l_V_2073, r_EXPR(((*(R27 *)rt_nil_check(l_A_2060))).f_E, l_PT_2066), 0);
}
S_R10(&l_CV_2074, r_CONVERT(l_V_2073, l_PT_2066, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2065 && (l_V_2073).f_LVAL) && r_IS_STRUCTURED(l_PT_2066)))
{
S_R10(&l_CV_2074, r_COPY_OF(l_PT_2066, l_CV_2074), 0);
}
S_R10(&l_C_2061, r_FMT3(rt_str("@@@", 3), l_C_2061, l_SEP_2062, l_CV_2074), 0);
S_R10(&l_SEP_2062, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2075; memset(&l_V_2075, 0, sizeof l_V_2075);
if (((*(R27 *)rt_nil_check(l_A_2060))).f_HAVE)
{
S_R26(&l_V_2075, ((*(R27 *)rt_nil_check(l_A_2060))).f_V, 0);
}
else
{
S_R26(&l_V_2075, r_EXPR(((*(R27 *)rt_nil_check(l_A_2060))).f_E, l_PT_2066), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2060))).f_E == NULL)) && (!(l_V_2075).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2060))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2060))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2075, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2075).f_C), (l_V_2075).f_T), 0);
(l_V_2075).f_LVAL = 1;
}
}
if ((!(l_V_2075).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2066, (l_V_2075).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2066));
}
if (((((*(R28 *)rt_nil_check(l_P_2059))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2066, (l_V_2075).f_T) && r_SAME_RANGE(l_PT_2066, (l_V_2075).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2059))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2066, (l_V_2075).f_T) && r_SAME_RANGE(l_PT_2066, (l_V_2075).f_T))))))
{
{
R10 l_TMP_2076; memset(&l_TMP_2076, 0, sizeof l_TMP_2076);
S_R10(&l_TMP_2076, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2077; memset(&l_AP_2077, 0, sizeof l_AP_2077);
S_R10(&l_AP_2077, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2063, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2063, r_CTYPE((l_V_2075).f_T), l_AP_2077, (l_V_2075).f_C), 0);
S_R10(&l_PRE_2063, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2063, r_CTYPE(l_PT_2066), l_TMP_2076, r_COPY_OF((l_V_2075).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2077))), 0);
S_R10(&l_POST_2064, r_FMT2(rt_str("@ @", 3), l_POST_2064, r_STORE_CODE((l_V_2075).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2077), r_MKET(l_TMP_2076, l_PT_2066), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2061, r_FMT3(rt_str("@@&@", 4), l_C_2061, l_SEP_2062, l_TMP_2076), 0);
}
}
else
{
S_R10(&l_C_2061, r_FMT3(rt_str("@@&@", 4), l_C_2061, l_SEP_2062, (l_V_2075).f_C), 0);
}
S_R10(&l_SEP_2062, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2060 = ((*(R27 *)rt_nil_check(l_A_2060))).f_NEXT;
l_P_2059 = ((*(R28 *)rt_nil_check(l_P_2059))).f_NEXT;
}
RT_B_TICK();
} L_end2072: ;
if ((!(l_A_2060 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2063).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2078 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2063, ((*(R12 *)rt_nil_check(l_Y_2058))).f_ACCESS, l_C_2061, l_POST_2064), r_RESULT_VIEW(l_Y_2058));
return rv2078; }
}
{ R26 rv2079 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2058))).f_ACCESS, l_C_2061), r_RESULT_VIEW(l_Y_2058));
return rv2079; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2080 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2080; }
}
{ R22 * rv2081 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2081; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2082 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2082; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2083 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2083; }
}
{ R22 * rv2084 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2084; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2085 = p_T;
return rv2085; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2086 = p_T;
return rv2086; }
}
{
R12 * l_M_2087; memset(&l_M_2087, 0, sizeof l_M_2087);
l_M_2087 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2087 == NULL)) goto L_end2088;
{
{
R12 * l_Y_2089; memset(&l_Y_2089, 0, sizeof l_Y_2089);
l_Y_2089 = r_MEMBER_TYPE(l_M_2087, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2089 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2089))).f_EXPORTED)
{
{ R22 * rv2090 = r_ABSTRACT_VIEW(l_Y_2089, p_T);
return rv2090; }
}
{ R22 * rv2091 = p_T;
return rv2091; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2087))).f_MODL))
{
goto L_end2088;
}
l_M_2087 = ((*(R12 *)rt_nil_check(l_M_2087))).f_MODL;
}
RT_B_TICK();
} L_end2088: ;
}
{ R22 * rv2092 = p_T;
return rv2092; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2093; memset(&l_Y_2093, 0, sizeof l_Y_2093);
l_Y_2093 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2094; memset(&l_Z_2094, 0, sizeof l_Z_2094);
l_Z_2094 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2094 == NULL)) goto L_end2095;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2094))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2094))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2094))).f_ORIG == NULL)))
{
{ R12 * rv2096 = l_Z_2094;
return rv2096; }
}
l_Z_2094 = r_LOOKUP_NEXT(l_Z_2094);
}
RT_B_TICK();
} L_end2095: ;
}
{ R12 * rv2097 = NULL;
return rv2097; }
}
for (;;) {
if ((l_Y_2093 == NULL)) goto L_end2098;
{
if (((((*(R12 *)rt_nil_check(l_Y_2093))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2093))).f_NAME, p_NAME)))
{
{ R12 * rv2099 = l_Y_2093;
return rv2099; }
}
l_Y_2093 = ((*(R12 *)rt_nil_check(l_Y_2093))).f_SNEXT;
}
RT_B_TICK();
} L_end2098: ;
{ R12 * rv2100 = NULL;
return rv2100; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2101; memset(&l_K_2101, 0, sizeof l_K_2101);
l_K_2101 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2102 = ((((l_K_2101 == g_T_STR) || (l_K_2101 == g_T_BITS)) || (l_K_2101 == g_T_ARR)) || (l_K_2101 == g_T_REC));
return rv2102; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2103; memset(&l_RA_2103, 0, sizeof l_RA_2103);
l_RA_2103 = r_REAL_TYPE(p_A);
R22 * l_RB_2104; memset(&l_RB_2104, 0, sizeof l_RB_2104);
l_RB_2104 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2103)))
{
{ rt_int rv2105 = 1;
return rv2105; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2103))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2103))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2104))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2104))).f_HI_C)))
{
{ rt_int rv2106 = 1;
return rv2106; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2103))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2104))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2107 = ((((*(R22 *)rt_nil_check(l_RA_2103))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2104))).f_LO_C).f_LEN);
return rv2107; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2103))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2104))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2103))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2104))).f_MHI).f_OK))
{
{ rt_int rv2108 = (((((*(R22 *)rt_nil_check(l_RA_2103))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2104))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2103))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2104))).f_MHI).f_V));
return rv2108; }
}
{ rt_int rv2109 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2103))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2104))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2103))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2104))).f_HI_C));
return rv2109; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2110 = 0;
return rv2110; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2111 = 1;
return rv2111; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2112 = 1;
return rv2112; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2113 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2113; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2114 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2114; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2115 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2115; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2116 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2116; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2117 = 0;
return rv2117; }
}
{
R12 * l_Y_2118; memset(&l_Y_2118, 0, sizeof l_Y_2118);
l_Y_2118 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2119; memset(&l_A_2119, 0, sizeof l_A_2119);
l_A_2119 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2120; memset(&l_F_2120, 0, sizeof l_F_2120);
if ((l_Y_2118 == NULL))
{
{ rt_int rv2121 = 0;
return rv2121; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2118))).f_KIND == g_Y_GEN))
{
{ rt_int rv2122 = 1;
return rv2122; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2118))).f_DECL == NULL))
{
{ rt_int rv2123 = 0;
return rv2123; }
}
l_F_2120 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2118))).f_DECL))).f_A;
for (;;) {
if ((l_F_2120 == NULL)) goto L_end2124;
{
{
R21 * l_N_2125; memset(&l_N_2125, 0, sizeof l_N_2125);
l_N_2125 = ((*(R21 *)rt_nil_check(l_F_2120))).f_A;
for (;;) {
if ((l_N_2125 == NULL)) goto L_end2126;
{
if ((l_A_2119 == NULL))
{
{ rt_int rv2127 = 0;
return rv2127; }
}
if (((((*(R21 *)rt_nil_check(l_F_2120))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2119))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2119))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2119)))))
{
{ rt_int rv2128 = 1;
return rv2128; }
}
l_A_2119 = ((*(R21 *)rt_nil_check(l_A_2119))).f_NEXT;
l_N_2125 = ((*(R21 *)rt_nil_check(l_N_2125))).f_NEXT;
}
RT_B_TICK();
} L_end2126: ;
}
l_F_2120 = ((*(R21 *)rt_nil_check(l_F_2120))).f_NEXT;
}
RT_B_TICK();
} L_end2124: ;
}
}
{ rt_int rv2129 = 0;
return rv2129; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2130; memset(&l_P_2130, 0, sizeof l_P_2130);
l_P_2130 = p_A;
for (;;) {
if ((l_P_2130 == NULL)) goto L_end2131;
{
if (((((*(R21 *)rt_nil_check(l_P_2130))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2130))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2132 = 1;
return rv2132; }
}
l_P_2130 = ((*(R21 *)rt_nil_check(l_P_2130))).f_NEXT;
}
RT_B_TICK();
} L_end2131: ;
{ rt_int rv2133 = 0;
return rv2133; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2134; memset(&l_ENTERED_2134, 0, sizeof l_ENTERED_2134);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2134 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2134)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2135; memset(&l_R_2135, 0, sizeof l_R_2135);
l_R_2135 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2136; memset(&l_P_2136, 0, sizeof l_P_2136);
R28 * l_TAIL_2137; memset(&l_TAIL_2137, 0, sizeof l_TAIL_2137);
l_TAIL_2137 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2136 = ((*(R21 *)rt_nil_check(l_R_2135))).f_A;
for (;;) {
if ((l_P_2136 == NULL)) goto L_end2138;
{
if (((((*(R21 *)rt_nil_check(l_P_2136))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2136))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2136 = ((*(R21 *)rt_nil_check(l_P_2136))).f_NEXT;
}
RT_B_TICK();
} L_end2138: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2135))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2136 = ((*(R21 *)rt_nil_check(l_R_2135))).f_A;
for (;;) {
if ((l_P_2136 == NULL)) goto L_end2139;
{
{
R28 * l_PM_2140; memset(&l_PM_2140, 0, sizeof l_PM_2140);
l_PM_2140 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2140)), ({ R28 rc2141; memset(&rc2141, 0, sizeof rc2141);  S_R10(&rc2141.f_NAME, ((*(R21 *)rt_nil_check(l_P_2136))).f_NAME, 0); rc2141.f_MODE = ((*(R21 *)rt_nil_check(l_P_2136))).f_IV; rc2141.f_T = NULL; rc2141.f_TS = ((*(R21 *)rt_nil_check(l_P_2136))).f_B; rc2141.f_NEXT = NULL; rc2141; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2135))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2136))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2136))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2140))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2136))).f_B);
}
if ((l_TAIL_2137 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2140;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2137))).f_NEXT = l_PM_2140;
}
l_TAIL_2137 = l_PM_2140;
}
l_P_2136 = ((*(R21 *)rt_nil_check(l_P_2136))).f_NEXT;
}
RT_B_TICK();
} L_end2139: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2142; memset(&l_R_2142, 0, sizeof l_R_2142);
l_R_2142 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2143; memset(&l_T_2143, 0, sizeof l_T_2143);
if ((((*(R21 *)rt_nil_check(l_R_2142))).f_B == NULL))
{
{ R22 * rv2144 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2144; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2145; memset(&l_P_2145, 0, sizeof l_P_2145);
l_P_2145 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2145 == NULL)) goto L_end2146;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2145))).f_T == NULL)))
{
{
R12 * l_V_2147; memset(&l_V_2147, 0, sizeof l_V_2147);
l_V_2147 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2145))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2147))).f_T = ((*(R28 *)rt_nil_check(l_P_2145))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2147))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2145))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2147))).f_INPUT = 1;
r_DEFINE(l_V_2147, ((*(R21 *)rt_nil_check(l_R_2142))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2145))).f_T, ((*(R12 *)rt_nil_check(l_V_2147))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2142))).f_LINE, 0);
}
}
l_P_2145 = ((*(R28 *)rt_nil_check(l_P_2145))).f_NEXT;
}
RT_B_TICK();
} L_end2146: ;
}
l_T_2143 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2142))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2148 = l_T_2143;
return rv2148; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2149; memset(&l_PS_2149, 0, sizeof l_PS_2149);
S_R10(&l_PS_2149, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2150; memset(&l_SEP_2150, 0, sizeof l_SEP_2150);
S_R10(&l_SEP_2150, r_MK(rt_str("", 0)), 0);
R28 * l_P_2151; memset(&l_P_2151, 0, sizeof l_P_2151);
l_P_2151 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2149, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2150, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2151 == NULL)) goto L_end2152;
{
if ((((*(R28 *)rt_nil_check(l_P_2151))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2151))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2151))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2149, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2149, l_SEP_2150, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2151))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2151))).f_NAME)), 0);
S_R10(&l_SEP_2150, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2149, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2149, l_SEP_2150, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2151))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2151))).f_NAME)), 0);
S_R10(&l_SEP_2150, r_MK(rt_str(", ", 2)), 0);
}
l_P_2151 = ((*(R28 *)rt_nil_check(l_P_2151))).f_NEXT;
}
RT_B_TICK();
} L_end2152: ;
if (((l_PS_2149).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2149, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2153 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2149);
return rv2153; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_PARAM_GENS(R22 * p_T, R10 p_PC, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
if (r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R22 *)rt_nil_check(p_T))).f_LO_C), r_MK(rt_str("INT64_MIN", 9)), p_LINE, 0);
}
if (r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R22 *)rt_nil_check(p_T))).f_HI_C), r_MK(rt_str("INT64_MAX", 9)), p_LINE, 0);
}
if (((((*(R22 *)rt_nil_check(p_T))).f_GEN).f_LEN > ((rt_int)0LL)))
{
r_DEFINE_GEN(((*(R22 *)rt_nil_check(p_T))).f_GEN, r_FMT1(rt_str("(rt_int)(@).len", 15), p_PC), p_LINE, p_CHECK);
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{
R25 * l_B_2154; memset(&l_B_2154, 0, sizeof l_B_2154);
l_B_2154 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2155; memset(&l_I_2155, 0, sizeof l_I_2155);
l_I_2155 = ((rt_int)0LL);
for (;;) {
if ((l_B_2154 == NULL)) goto L_end2156;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2154))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2154))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2155)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2154))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2154))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2154))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2154))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2155)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2154))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2155), p_PC, r_NUM(l_I_2155)), ((*(R25 *)rt_nil_check(l_B_2154))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2155 = rt_add(l_I_2155, ((rt_int)1LL));
l_B_2154 = ((*(R25 *)rt_nil_check(l_B_2154))).f_NEXT;
}
RT_B_TICK();
} L_end2156: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2157; memset(&l_U_2157, 0, sizeof l_U_2157);
l_U_2157 = r_REAL_TYPE(p_T);
R24 * l_F_2158; memset(&l_F_2158, 0, sizeof l_F_2158);
l_F_2158 = ((*(R22 *)rt_nil_check(l_U_2157))).f_FIELDS;
R25 * l_A_2159; memset(&l_A_2159, 0, sizeof l_A_2159);
l_A_2159 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2158 == NULL) || (l_A_2159 == NULL))) goto L_end2160;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2158))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2159))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2159))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2158))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2159 = ((*(R25 *)rt_nil_check(l_A_2159))).f_NEXT;
}
l_F_2158 = ((*(R24 *)rt_nil_check(l_F_2158))).f_NEXT;
}
RT_B_TICK();
} L_end2160: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2161 = 0;
return rv2161; }
}
{ rt_int rv2162 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2162; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2163 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2163; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2164; memset(&l_OLD_2164, 0, sizeof l_OLD_2164);
l_OLD_2164 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2164 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2164))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2164))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2164))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2165; memset(&l_G_2165, 0, sizeof l_G_2165);
l_G_2165 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2165))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2165))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2165))).f_INPUT = 1;
r_DEFINE(l_G_2165, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2166; memset(&l_B_2166, 0, sizeof l_B_2166);
l_B_2166 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2166)), ({ R20 rc2167; memset(&rc2167, 0, sizeof rc2167);  S_R10(&rc2167.f_NAME, r_NO_TEXT(), 0); rc2167.f_T = NULL; S_R10(&rc2167.f_C, r_NO_TEXT(), 0); rc2167.f_HASMV = 0; rc2167.f_MV = ((rt_int)0LL); rc2167.f_R = NULL; rc2167.f_NEXT = NULL; rc2167; }), 0);
{ R20 * rv2168 = l_B_2166;
return rv2168; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2169; memset(&l_B_2169, 0, sizeof l_B_2169);
l_B_2169 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2169)), ({ R20 rc2170; memset(&rc2170, 0, sizeof rc2170);  S_R10(&rc2170.f_NAME, p_NAME, 0); rc2170.f_T = p_T; S_R10(&rc2170.f_C, r_NO_TEXT(), 0); rc2170.f_HASMV = (p_M).f_OK; rc2170.f_MV = (p_M).f_V; rc2170.f_R = p_R; rc2170.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2170; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2169))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2169;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2171; memset(&l_B_2171, 0, sizeof l_B_2171);
l_B_2171 = p_BS;
for (;;) {
if ((l_B_2171 == NULL)) goto L_end2172;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2171))).f_NAME, p_NAME))
{
{ R20 * rv2173 = l_B_2171;
return rv2173; }
}
l_B_2171 = ((*(R20 *)rt_nil_check(l_B_2171))).f_NEXT;
}
RT_B_TICK();
} L_end2172: ;
{ R20 * rv2174 = NULL;
return rv2174; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2175; memset(&l_RT_2175, 0, sizeof l_RT_2175);
l_RT_2175 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2176 = 1;
return rv2176; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2177 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2177; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2178 = 1;
return rv2178; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2179 = 1;
return rv2179; }
}
{
R20 * l_B_2180; memset(&l_B_2180, 0, sizeof l_B_2180);
l_B_2180 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2180 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2180))).f_T == NULL))
{
{ rt_int rv2181 = 0;
return rv2181; }
}
{ rt_int rv2182 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2180))).f_T, p_T);
return rv2182; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_TS))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_NAME) == NULL))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
}
}
}
{ rt_int rv2183 = 1;
return rv2183; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_ARR)))
{
{ rt_int rv2184 = 0;
return rv2184; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2175))).f_DIMS)))
{
{ rt_int rv2185 = 0;
return rv2185; }
}
{ rt_int rv2186 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2175))).f_ELEM, p_BS);
return rv2186; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2187 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2187; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2188 = 0;
return rv2188; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2175))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2175))).f_MHI, p_BS))))
{
{ rt_int rv2189 = 0;
return rv2189; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_INT)))
{
{ rt_int rv2190 = 0;
return rv2190; }
}
{ rt_int rv2191 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2175))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2191; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2192 = ((((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2175))).f_SCALE == ((rt_int)0LL)));
return rv2192; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2193 = 0;
return rv2193; }
}
{ rt_int rv2194 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2175))).f_SCALE), p_BS);
return rv2194; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2195 = (((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_BOOL);
return rv2195; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2196 = (((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_STR);
return rv2196; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_STR)))
{
{ rt_int rv2197 = 0;
return rv2197; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2198 = 1;
return rv2198; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_BASE == NULL)))
{
{ rt_int rv2199 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2175))).f_BASE, p_BS);
return rv2199; }
}
{ rt_int rv2200 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2200; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2201 = (((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_BITS);
return rv2201; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2202 = (((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_SEM);
return rv2202; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_PTR)))
{
{ rt_int rv2203 = 0;
return rv2203; }
}
{ rt_int rv2204 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2175), p_BS);
return rv2204; }
}
{
R12 * l_Y_2205; memset(&l_Y_2205, 0, sizeof l_Y_2205);
l_Y_2205 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2205 == NULL))
{
{ rt_int rv2206 = 0;
return rv2206; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2205))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2205))).f_DECL == NULL)))
{
{ rt_int rv2207 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2205))).f_T, p_T);
return rv2207; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2205))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2208 = 0;
return rv2208; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2205))))
{
{ rt_int rv2209 = 0;
return rv2209; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2205))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2175))).f_KIND == g_T_REC)))
{
{ rt_int rv2210 = 0;
return rv2210; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2175))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2211 = 0;
return rv2211; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2175))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2205))))
{
{ rt_int rv2212 = 0;
return rv2212; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2213 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2213; }
}
{ rt_int rv2214 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2205))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2205))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2175, p_BS);
return rv2214; }
}
{
R21 * l_F_2215; memset(&l_F_2215, 0, sizeof l_F_2215);
l_F_2215 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2205))).f_DECL))).f_A;
R21 * l_A_2216; memset(&l_A_2216, 0, sizeof l_A_2216);
l_A_2216 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2217; memset(&l_V_2217, 0, sizeof l_V_2217);
l_V_2217 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2218; memset(&l_CLASS_2218, 0, sizeof l_CLASS_2218);
l_CLASS_2218 = r_RECORD_CLASS_OF(l_RT_2175);
for (;;) {
if ((l_F_2215 == NULL)) goto L_end2219;
{
{
R21 * l_N_2220; memset(&l_N_2220, 0, sizeof l_N_2220);
l_N_2220 = ((*(R21 *)rt_nil_check(l_F_2215))).f_A;
for (;;) {
if ((l_N_2220 == NULL)) goto L_end2221;
{
if ((l_A_2216 == NULL))
{
{ rt_int rv2222 = 0;
return rv2222; }
}
if ((((*(R21 *)rt_nil_check(l_F_2215))).f_B == NULL))
{
if ((!(l_CLASS_2218 == NULL)))
{
{
R20 * l_B_2223; memset(&l_B_2223, 0, sizeof l_B_2223);
l_B_2223 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2218))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2220))).f_NAME);
if ((!(l_B_2223 == NULL)))
{
if ((!r_UNIFY(l_A_2216, ((*(R20 *)rt_nil_check(l_B_2223))).f_T, p_BS)))
{
{ rt_int rv2224 = 0;
return rv2224; }
}
}
}
}
}
else
{
if ((!(l_V_2217 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2216))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2216))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2216))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2225; memset(&l_M_2225, 0, sizeof l_M_2225);
S_R23(&l_M_2225, r_MANIFEST(l_A_2216), 0);
if (((l_M_2225).f_OK && (((*(R25 *)rt_nil_check(l_V_2217))).f_MLO).f_OK))
{
if ((!((l_M_2225).f_V == (((*(R25 *)rt_nil_check(l_V_2217))).f_MLO).f_V)))
{
{ rt_int rv2226 = 0;
return rv2226; }
}
}
}
}
l_V_2217 = ((*(R25 *)rt_nil_check(l_V_2217))).f_NEXT;
}
}
l_A_2216 = ((*(R21 *)rt_nil_check(l_A_2216))).f_NEXT;
l_N_2220 = ((*(R21 *)rt_nil_check(l_N_2220))).f_NEXT;
}
RT_B_TICK();
} L_end2221: ;
}
l_F_2215 = ((*(R21 *)rt_nil_check(l_F_2215))).f_NEXT;
}
RT_B_TICK();
} L_end2219: ;
}
{ rt_int rv2227 = 1;
return rv2227; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2228; memset(&l_R_2228, 0, sizeof l_R_2228);
l_R_2228 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2229 = NULL;
return rv2229; }
}
for (;;) {
if ((l_R_2228 == NULL)) goto L_end2230;
{
if ((((*(R12 *)rt_nil_check(l_R_2228))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2231 = l_R_2228;
return rv2231; }
}
l_R_2228 = ((*(R12 *)rt_nil_check(l_R_2228))).f_INSTANCES;
}
RT_B_TICK();
} L_end2230: ;
{ R12 * rv2232 = NULL;
return rv2232; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2233 = 1;
return rv2233; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2234 = 1;
return rv2234; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2235 = 1;
return rv2235; }
}
{
R20 * l_B_2236; memset(&l_B_2236, 0, sizeof l_B_2236);
l_B_2236 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2236 == NULL)))
{
{ rt_int rv2237 = ((((*(R20 *)rt_nil_check(l_B_2236))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2236))).f_MV == (p_M).f_V));
return rv2237; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2238 = 0;
return rv2238; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2239 = 1;
return rv2239; }
}
{
R23 l_V_2240; memset(&l_V_2240, 0, sizeof l_V_2240);
S_R23(&l_V_2240, r_MANIFEST(p_A), 0);
if (((l_V_2240).f_OK && (p_M).f_OK))
{
{ rt_int rv2241 = ((l_V_2240).f_V == (p_M).f_V);
return rv2241; }
}
}
{ rt_int rv2242 = 1;
return rv2242; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2243 = 0;
return rv2243; }
}
{ rt_int rv2244 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2244; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2245 = 1;
return rv2245; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2246 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2246; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2247; memset(&l_BS_2247, 0, sizeof l_BS_2247);
l_BS_2247 = r_NEW_BINDS();
R28 * l_P_2248; memset(&l_P_2248, 0, sizeof l_P_2248);
l_P_2248 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2249; memset(&l_A_2249, 0, sizeof l_A_2249);
l_A_2249 = p_ARGS;
for (;;) {
if ((l_P_2248 == NULL)) goto L_end2250;
{
if ((((*(R28 *)rt_nil_check(l_P_2248))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2249))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2248))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2249))).f_E), r_NO_MVAL(), NULL, l_BS_2247);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2248))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2248))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2248))).f_TS, ((*(R27 *)rt_nil_check(l_A_2249))).f_E, p_LINE), l_BS_2247);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2249))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2249))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2248))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2249))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2249))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2249))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2249))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2249))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2248))).f_TS, (((*(R27 *)rt_nil_check(l_A_2249))).f_V).f_T, l_BS_2247)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2248))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2248))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2248))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2248))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2249))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2247);
}
}
l_P_2248 = ((*(R28 *)rt_nil_check(l_P_2248))).f_NEXT;
l_A_2249 = ((*(R27 *)rt_nil_check(l_A_2249))).f_NEXT;
}
RT_B_TICK();
} L_end2250: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2247);
{
R12 * l_I_2251; memset(&l_I_2251, 0, sizeof l_I_2251);
l_I_2251 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2251 == NULL)) goto L_end2252;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2251))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2247))).f_NEXT))
{
{ R12 * rv2253 = l_I_2251;
return rv2253; }
}
l_I_2251 = ((*(R12 *)rt_nil_check(l_I_2251))).f_INSTANCES;
}
RT_B_TICK();
} L_end2252: ;
}
{ R12 * rv2254 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2247))).f_NEXT, p_ARGS);
return rv2254; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2255; memset(&l_P_2255, 0, sizeof l_P_2255);
l_P_2255 = p_A;
for (;;) {
if ((l_P_2255 == NULL)) goto L_end2256;
{
{
R20 * l_Q_2257; memset(&l_Q_2257, 0, sizeof l_Q_2257);
l_Q_2257 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2255))).f_NAME);
if ((l_Q_2257 == NULL))
{
{ rt_int rv2258 = 0;
return rv2258; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2255))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2257))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2255))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2257))).f_T == NULL)))
{
{ rt_int rv2259 = 0;
return rv2259; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2255))).f_T, ((*(R20 *)rt_nil_check(l_Q_2257))).f_T)))
{
{ rt_int rv2260 = 0;
return rv2260; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2255))).f_T, ((*(R20 *)rt_nil_check(l_Q_2257))).f_T)))
{
{ rt_int rv2261 = 0;
return rv2261; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2255))).f_T, ((*(R20 *)rt_nil_check(l_Q_2257))).f_T)))
{
{ rt_int rv2262 = 0;
return rv2262; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2255))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2257))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2255))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2257))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2255))).f_R == ((*(R20 *)rt_nil_check(l_Q_2257))).f_R))))
{
{ rt_int rv2263 = 0;
return rv2263; }
}
}
l_P_2255 = ((*(R20 *)rt_nil_check(l_P_2255))).f_NEXT;
}
RT_B_TICK();
} L_end2256: ;
{ rt_int rv2264 = 1;
return rv2264; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2265; memset(&l_RA_2265, 0, sizeof l_RA_2265);
l_RA_2265 = r_REAL_TYPE(p_A);
R22 * l_RB_2266; memset(&l_RB_2266, 0, sizeof l_RB_2266);
l_RB_2266 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2265))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2265))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2265))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2266))).f_KIND))))
{
{ rt_int rv2267 = 1;
return rv2267; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2265))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2266))).f_MLEN).f_OK))
{
{ rt_int rv2268 = ((((*(R22 *)rt_nil_check(l_RA_2265))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2266))).f_MLEN).f_V);
return rv2268; }
}
{ rt_int rv2269 = ((((*(R22 *)rt_nil_check(l_RA_2265))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2266))).f_MLEN).f_OK);
return rv2269; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2270; memset(&l_RA_2270, 0, sizeof l_RA_2270);
l_RA_2270 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2271; memset(&l_RB_2271, 0, sizeof l_RB_2271);
l_RB_2271 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2270 == NULL) || (l_RB_2271 == NULL)))
{
{ rt_int rv2272 = (l_RA_2270 == l_RB_2271);
return rv2272; }
}
if ((l_RA_2270 == l_RB_2271))
{
{ rt_int rv2273 = 1;
return rv2273; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2270))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2271))).f_NAME)))
{
{ rt_int rv2274 = 0;
return rv2274; }
}
{
R21 * l_X_2275; memset(&l_X_2275, 0, sizeof l_X_2275);
l_X_2275 = ((*(R21 *)rt_nil_check(l_RA_2270))).f_A;
R21 * l_Y_2276; memset(&l_Y_2276, 0, sizeof l_Y_2276);
l_Y_2276 = ((*(R21 *)rt_nil_check(l_RB_2271))).f_A;
for (;;) {
if (((l_X_2275 == NULL) || (l_Y_2276 == NULL))) goto L_end2277;
{
if (((((((*(R21 *)rt_nil_check(l_X_2275))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2275))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2276))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2276))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2275))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2276))).f_NAME)))
{
{ rt_int rv2278 = 0;
return rv2278; }
}
}
else
{
{
R23 l_MX_2279; memset(&l_MX_2279, 0, sizeof l_MX_2279);
S_R23(&l_MX_2279, r_MANIFEST(l_X_2275), 0);
R23 l_MY_2280; memset(&l_MY_2280, 0, sizeof l_MY_2280);
S_R23(&l_MY_2280, r_MANIFEST(l_Y_2276), 0);
if (((!((l_MX_2279).f_OK == (l_MY_2280).f_OK)) || (!((l_MX_2279).f_V == (l_MY_2280).f_V))))
{
{ rt_int rv2281 = 0;
return rv2281; }
}
}
}
l_X_2275 = ((*(R21 *)rt_nil_check(l_X_2275))).f_NEXT;
l_Y_2276 = ((*(R21 *)rt_nil_check(l_Y_2276))).f_NEXT;
}
RT_B_TICK();
} L_end2277: ;
{ rt_int rv2282 = ((((l_X_2275 == NULL) && (l_Y_2276 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2270))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2271))).f_B == NULL));
return rv2282; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2283; memset(&l_Y_2283, 0, sizeof l_Y_2283);
l_Y_2283 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2284; memset(&l_FOUND_2284, 0, sizeof l_FOUND_2284);
l_FOUND_2284 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2283 == NULL)) goto L_end2285;
{
if ((((*(R12 *)rt_nil_check(l_Y_2283))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2286; memset(&l_R_2286, 0, sizeof l_R_2286);
l_R_2286 = r_ORIGINAL(l_Y_2283);
r_ROUTINE_HEADER(l_R_2286);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2286)) && (!((*(R12 *)rt_nil_check(l_R_2286))).f_GENERIC)))
{
if (((!(l_FOUND_2284 == NULL)) && (!(l_FOUND_2284 == l_R_2286))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2284 = l_R_2286;
}
}
}
l_Y_2283 = r_LOOKUP_NEXT(l_Y_2283);
}
RT_B_TICK();
} L_end2285: ;
if ((l_FOUND_2284 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2284))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2287 = l_FOUND_2284;
return rv2287; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2288; memset(&l_NEEDL_2288, 0, sizeof l_NEEDL_2288);
l_NEEDL_2288 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2289; memset(&l_SAVED_2289, 0, sizeof l_SAVED_2289);
l_SAVED_2289 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2288 == NULL)) goto L_end2290;
{
{
R21 * l_T_2291; memset(&l_T_2291, 0, sizeof l_T_2291);
l_T_2291 = ((*(R21 *)rt_nil_check(l_NEEDL_2288))).f_A;
for (;;) {
if ((l_T_2291 == NULL)) goto L_end2292;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2291))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2293; memset(&l_ARGS_2293, 0, sizeof l_ARGS_2293);
l_ARGS_2293 = NULL;
R27 * l_TAIL_2294; memset(&l_TAIL_2294, 0, sizeof l_TAIL_2294);
l_TAIL_2294 = NULL;
R21 * l_P_2295; memset(&l_P_2295, 0, sizeof l_P_2295);
l_P_2295 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2291))).f_B))).f_A;
R12 * l_R_2296; memset(&l_R_2296, 0, sizeof l_R_2296);
rt_int l_ENTERED_2297; memset(&l_ENTERED_2297, 0, sizeof l_ENTERED_2297);
l_ENTERED_2297 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2295 == NULL)) goto L_end2298;
{
{
R27 * l_A_2299; memset(&l_A_2299, 0, sizeof l_A_2299);
if ((((*(R21 *)rt_nil_check(l_P_2295))).f_B == NULL))
{
l_A_2299 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2299 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2295))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2299))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2295))).f_IV;
if ((l_TAIL_2294 == NULL))
{
l_ARGS_2293 = l_A_2299;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2294))).f_NEXT = l_A_2299;
}
l_TAIL_2294 = l_A_2299;
}
l_P_2295 = ((*(R21 *)rt_nil_check(l_P_2295))).f_NEXT;
}
RT_B_TICK();
} L_end2298: ;
if (l_ENTERED_2297)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2296 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2291))).f_NAME, l_ARGS_2293, p_LINE, 0);
if ((l_R_2296 == NULL))
{
l_R_2296 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2291))).f_NAME);
for (;;) {
if ((l_R_2296 == NULL)) goto L_end2300;
{
if ((((*(R12 *)rt_nil_check(l_R_2296))).f_KIND == g_Y_BUILTIN))
{
goto L_end2300;
}
l_R_2296 = r_LOOKUP_NEXT(l_R_2296);
}
RT_B_TICK();
} L_end2300: ;
}
if (((l_R_2296 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2291))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2291))).f_NAME);
}
if ((!(l_R_2296 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2291))).f_NAME, NULL, r_NO_MVAL(), l_R_2296, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2291 = ((*(R21 *)rt_nil_check(l_T_2291))).f_NEXT;
}
RT_B_TICK();
} L_end2292: ;
}
l_NEEDL_2288 = ((*(R21 *)rt_nil_check(l_NEEDL_2288))).f_NEXT;
}
RT_B_TICK();
} L_end2290: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2289;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2301 = 0;
return rv2301; }
}
{
R12 * l_Y_2302; memset(&l_Y_2302, 0, sizeof l_Y_2302);
l_Y_2302 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2303; memset(&l_A_2303, 0, sizeof l_A_2303);
l_A_2303 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2304; memset(&l_F_2304, 0, sizeof l_F_2304);
if ((l_Y_2302 == NULL))
{
{ rt_int rv2305 = 0;
return rv2305; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2302))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2302))).f_DECL == NULL)))
{
{ rt_int rv2306 = 0;
return rv2306; }
}
l_F_2304 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2302))).f_DECL))).f_A;
for (;;) {
if ((l_F_2304 == NULL)) goto L_end2307;
{
{
R21 * l_N_2308; memset(&l_N_2308, 0, sizeof l_N_2308);
l_N_2308 = ((*(R21 *)rt_nil_check(l_F_2304))).f_A;
for (;;) {
if ((l_N_2308 == NULL)) goto L_end2309;
{
if ((l_A_2303 == NULL))
{
{ rt_int rv2310 = 0;
return rv2310; }
}
if (((((*(R21 *)rt_nil_check(l_F_2304))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2303))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2311 = 1;
return rv2311; }
}
l_A_2303 = ((*(R21 *)rt_nil_check(l_A_2303))).f_NEXT;
l_N_2308 = ((*(R21 *)rt_nil_check(l_N_2308))).f_NEXT;
}
RT_B_TICK();
} L_end2309: ;
}
l_F_2304 = ((*(R21 *)rt_nil_check(l_F_2304))).f_NEXT;
}
RT_B_TICK();
} L_end2307: ;
}
{ rt_int rv2312 = 0;
return rv2312; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2313; memset(&l_A_2313, 0, sizeof l_A_2313);
l_A_2313 = p_ARGS;
R12 * l_I_2314; memset(&l_I_2314, 0, sizeof l_I_2314);
l_I_2314 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2315; memset(&l_SAVED_2315, 0, sizeof l_SAVED_2315);
l_SAVED_2315 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2316; memset(&l_P_2316, 0, sizeof l_P_2316);
l_P_2316 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2317; memset(&l_TAIL_2317, 0, sizeof l_TAIL_2317);
l_TAIL_2317 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2314)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2314))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2314))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2314))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2314))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2314))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2314;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2316 == NULL)) goto L_end2318;
{
{
R28 * l_PM_2319; memset(&l_PM_2319, 0, sizeof l_PM_2319);
l_PM_2319 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2319)), (*(R28 *)rt_nil_check(l_P_2316)), 0);
((*(R28 *)rt_nil_check(l_PM_2319))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2316))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2319))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2316))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2319))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2316))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2313))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2319))).f_T = (((*(R27 *)rt_nil_check(l_A_2313))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2319))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2319))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2319))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2319))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2319))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2316))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2319))).f_TS = NULL;
if ((l_TAIL_2317 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2314))).f_PARAMS = l_PM_2319;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2317))).f_NEXT = l_PM_2319;
}
l_TAIL_2317 = l_PM_2319;
}
l_P_2316 = ((*(R28 *)rt_nil_check(l_P_2316))).f_NEXT;
l_A_2313 = ((*(R27 *)rt_nil_check(l_A_2313))).f_NEXT;
}
RT_B_TICK();
} L_end2318: ;
((*(R12 *)rt_nil_check(l_I_2314))).f_RESULT = r_RESULT_TYPE(l_I_2314);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2315;
S_R10(&((*(R12 *)rt_nil_check(l_I_2314))).f_FWD, r_C_HEADER(l_I_2314), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2314))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2314))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2314;
{ R12 * rv2320 = l_I_2314;
return rv2320; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2321 = 0;
return rv2321; }
}
{ rt_int rv2322 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2322; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2323; memset(&l_C_2323, 0, sizeof l_C_2323);
if ((p_TS == NULL))
{
{ R21 * rv2324 = NULL;
return rv2324; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2325; memset(&l_F_2325, 0, sizeof l_F_2325);
l_F_2325 = p_FORMALS;
R21 * l_A_2326; memset(&l_A_2326, 0, sizeof l_A_2326);
l_A_2326 = p_ARGS;
for (;;) {
if ((l_F_2325 == NULL)) goto L_end2327;
{
{
R21 * l_N_2328; memset(&l_N_2328, 0, sizeof l_N_2328);
l_N_2328 = ((*(R21 *)rt_nil_check(l_F_2325))).f_A;
for (;;) {
if ((l_N_2328 == NULL)) goto L_end2329;
{
if ((l_A_2326 == NULL))
{
{ R21 * rv2330 = p_TS;
return rv2330; }
}
if (((((*(R21 *)rt_nil_check(l_F_2325))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2328))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2331 = l_A_2326;
return rv2331; }
}
l_A_2326 = ((*(R21 *)rt_nil_check(l_A_2326))).f_NEXT;
l_N_2328 = ((*(R21 *)rt_nil_check(l_N_2328))).f_NEXT;
}
RT_B_TICK();
} L_end2329: ;
}
l_F_2325 = ((*(R21 *)rt_nil_check(l_F_2325))).f_NEXT;
}
RT_B_TICK();
} L_end2327: ;
}
{ R21 * rv2332 = p_TS;
return rv2332; }
}
l_C_2323 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2323))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2323))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2333 = l_C_2323;
return rv2333; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2334; memset(&l_C_2334, 0, sizeof l_C_2334);
l_C_2334 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2334)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2334))).f_NEXT = NULL;
{ R21 * rv2335 = l_C_2334;
return rv2335; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2336; memset(&l_P_2336, 0, sizeof l_P_2336);
l_P_2336 = p_L;
for (;;) {
if ((l_P_2336 == NULL)) goto L_end2337;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2336))).f_NAME, p_NAME))
{
{ rt_int rv2338 = 1;
return rv2338; }
}
l_P_2336 = ((*(R21 *)rt_nil_check(l_P_2336))).f_NEXT;
}
RT_B_TICK();
} L_end2337: ;
{ rt_int rv2339 = 0;
return rv2339; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2340; memset(&l_IS_2340, 0, sizeof l_IS_2340);
l_IS_2340 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2341 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2341; }
}
if ((l_IS_2340 == NULL))
{
{ rt_int rv2342 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2342; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2340))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2340))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2343 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2343; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2340))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2340))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2344 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2344; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2340))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2345 = 0;
return rv2345; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2346; memset(&l_ITEMS_2346, 0, sizeof l_ITEMS_2346);
l_ITEMS_2346 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2347; memset(&l_HEAD_2347, 0, sizeof l_HEAD_2347);
l_HEAD_2347 = NULL;
R21 * l_TAIL_2348; memset(&l_TAIL_2348, 0, sizeof l_TAIL_2348);
l_TAIL_2348 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2346 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2346))).f_A, &l_HEAD_2347, &l_TAIL_2348);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2346))).f_B, &l_HEAD_2347, &l_TAIL_2348);
{
R21 * l_R_2349; memset(&l_R_2349, 0, sizeof l_R_2349);
l_R_2349 = ((*(R21 *)rt_nil_check(l_ITEMS_2346))).f_C;
for (;;) {
if ((l_R_2349 == NULL)) goto L_end2350;
{
{
R12 * l_Z_2351; memset(&l_Z_2351, 0, sizeof l_Z_2351);
l_Z_2351 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2349))).f_NAME);
if (((l_Z_2351 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2349))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2349))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2349))).f_NAME);
}
for (;;) {
if ((l_Z_2351 == NULL)) goto L_end2352;
{
if ((((*(R12 *)rt_nil_check(l_Z_2351))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2353; memset(&l_O_2353, 0, sizeof l_O_2353);
l_O_2353 = r_ORIGINAL(l_Z_2351);
R21 * l_U_2354; memset(&l_U_2354, 0, sizeof l_U_2354);
r_COMPUTE_USES(l_O_2353);
l_U_2354 = ((*(R12 *)rt_nil_check(l_O_2353))).f_USES;
for (;;) {
if ((l_U_2354 == NULL)) goto L_end2355;
{
if ((!r_IN_IDENTS(l_HEAD_2347, ((*(R21 *)rt_nil_check(l_U_2354))).f_NAME)))
{
{
R21 * l_N_2356; memset(&l_N_2356, 0, sizeof l_N_2356);
l_N_2356 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2354))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2356))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2354))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2356))).f_IV = ((*(R21 *)rt_nil_check(l_U_2354))).f_IV;
r_ADD_LIST(l_N_2356, &l_HEAD_2347, &l_TAIL_2348);
}
}
l_U_2354 = ((*(R21 *)rt_nil_check(l_U_2354))).f_NEXT;
}
RT_B_TICK();
} L_end2355: ;
}
}
l_Z_2351 = r_LOOKUP_NEXT(l_Z_2351);
}
RT_B_TICK();
} L_end2352: ;
}
l_R_2349 = ((*(R21 *)rt_nil_check(l_R_2349))).f_NEXT;
}
RT_B_TICK();
} L_end2350: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2347;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2357; memset(&l_M_2357, 0, sizeof l_M_2357);
if ((p_B == NULL))
{
{ rt_int rv2358 = 0;
return rv2358; }
}
l_M_2357 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2357 == NULL)) goto L_end2359;
{
if ((((*(R21 *)rt_nil_check(l_M_2357))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2357))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2357))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2357))).f_C, p_NAME)))
{
{ rt_int rv2360 = 1;
return rv2360; }
}
}
l_M_2357 = ((*(R21 *)rt_nil_check(l_M_2357))).f_NEXT;
}
RT_B_TICK();
} L_end2359: ;
{ rt_int rv2361 = 0;
return rv2361; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2362; memset(&l_R_2362, 0, sizeof l_R_2362);
l_R_2362 = p_RS;
for (;;) {
if ((l_R_2362 == NULL)) goto L_end2363;
{
if ((((*(R21 *)rt_nil_check(l_R_2362))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2362));
}
l_R_2362 = ((*(R21 *)rt_nil_check(l_R_2362))).f_NEXT;
}
RT_B_TICK();
} L_end2363: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2364; memset(&l_P_2364, 0, sizeof l_P_2364);
l_P_2364 = p_L;
for (;;) {
if ((l_P_2364 == NULL)) goto L_end2365;
{
{
R12 * l_V_2366; memset(&l_V_2366, 0, sizeof l_V_2366);
l_V_2366 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2364))).f_NAME);
R21 * l_N_2367; memset(&l_N_2367, 0, sizeof l_N_2367);
l_N_2367 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2364))).f_LINE);
if ((l_V_2366 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2364))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2364))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2367))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2364))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2367))).f_IV = ((*(R12 *)rt_nil_check(l_V_2366))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2366))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2367, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2364 = ((*(R21 *)rt_nil_check(l_P_2364))).f_NEXT;
}
RT_B_TICK();
} L_end2365: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2368; memset(&l_IS_2368, 0, sizeof l_IS_2368);
l_IS_2368 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2369; memset(&l_U_2369, 0, sizeof l_U_2369);
l_U_2369 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2368 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2368))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2369 == NULL)) goto L_end2370;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2369))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2368))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2369))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2369))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2369))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2369))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2368))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2369))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2369))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2369))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2369 = ((*(R21 *)rt_nil_check(l_U_2369))).f_NEXT;
}
RT_B_TICK();
} L_end2370: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2371; memset(&l_R_2371, 0, sizeof l_R_2371);
l_R_2371 = p_RS;
for (;;) {
if ((l_R_2371 == NULL)) goto L_end2372;
{
{
R12 * l_Z_2373; memset(&l_Z_2373, 0, sizeof l_Z_2373);
l_Z_2373 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2371))).f_NAME);
for (;;) {
if ((l_Z_2373 == NULL)) goto L_end2374;
{
if ((((*(R12 *)rt_nil_check(l_Z_2373))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2375; memset(&l_O_2375, 0, sizeof l_O_2375);
l_O_2375 = r_ORIGINAL(l_Z_2373);
r_COMPUTE_USES(l_O_2375);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2375))).f_USES, p_NAME))
{
{ rt_int rv2376 = 1;
return rv2376; }
}
}
}
l_Z_2373 = r_LOOKUP_NEXT(l_Z_2373);
}
RT_B_TICK();
} L_end2374: ;
}
l_R_2371 = ((*(R21 *)rt_nil_check(l_R_2371))).f_NEXT;
}
RT_B_TICK();
} L_end2372: ;
{ rt_int rv2377 = 0;
return rv2377; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2378; memset(&l_M_2378, 0, sizeof l_M_2378);
l_M_2378 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2378 == NULL)) goto L_end2379;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2378))).f_NAME))
{
{ rt_int rv2380 = 1;
return rv2380; }
}
l_M_2378 = ((*(R12 *)rt_nil_check(l_M_2378))).f_MODL;
}
RT_B_TICK();
} L_end2379: ;
{ rt_int rv2381 = 0;
return rv2381; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2382 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2382; }
}
{ R10 rv2383 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2383; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2384; memset(&l_C_2384, 0, sizeof l_C_2384);
l_C_2384 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2384 == NULL)) goto L_end2385;
{
if ((((*(R17 *)rt_nil_check(l_C_2384))).f_KIND == ((rt_int)1LL)))
{
goto L_end2385;
}
if ((((*(R17 *)rt_nil_check(l_C_2384))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2386; memset(&l_H_2386, 0, sizeof l_H_2386);
l_H_2386 = ((*(R17 *)rt_nil_check(l_C_2384))).f_HANDLERS;
for (;;) {
if ((l_H_2386 == NULL)) goto L_end2387;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2386))).f_A, p_NAME))
{
{ rt_int rv2388 = 1;
return rv2388; }
}
l_H_2386 = ((*(R21 *)rt_nil_check(l_H_2386))).f_NEXT;
}
RT_B_TICK();
} L_end2387: ;
}
}
l_C_2384 = ((*(R17 *)rt_nil_check(l_C_2384))).f_NEXT;
}
RT_B_TICK();
} L_end2385: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2389 = 1;
return rv2389; }
}
}
{ rt_int rv2390 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2390; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2391; memset(&l_C_2391, 0, sizeof l_C_2391);
l_C_2391 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2391)), ({ R17 rc2392; memset(&rc2392, 0, sizeof rc2392);  rc2392.f_KIND = p_KIND; S_R10(&rc2392.f_NAME, p_NAME, 0); rc2392.f_HANDLERS = NULL; rc2392.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2392; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2391;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2393; memset(&l_C_2393, 0, sizeof l_C_2393);
l_C_2393 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2393 == NULL)) goto L_end2394;
{
if ((((*(R17 *)rt_nil_check(l_C_2393))).f_KIND == p_KIND))
{
{ R17 * rv2395 = l_C_2393;
return rv2395; }
}
if ((((*(R17 *)rt_nil_check(l_C_2393))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2396 = NULL;
return rv2396; }
}
if ((((*(R17 *)rt_nil_check(l_C_2393))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2393))).f_NAME));
}
l_C_2393 = ((*(R17 *)rt_nil_check(l_C_2393))).f_NEXT;
}
RT_B_TICK();
} L_end2394: ;
{ R17 * rv2397 = NULL;
return rv2397; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2398; memset(&l_C_2398, 0, sizeof l_C_2398);
l_C_2398 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2399; memset(&l_N_2399, 0, sizeof l_N_2399);
l_N_2399 = ((rt_int)0LL);
for (;;) {
if ((l_C_2398 == NULL)) goto L_end2400;
{
if ((((*(R17 *)rt_nil_check(l_C_2398))).f_KIND == ((rt_int)1LL)))
{
goto L_end2400;
}
if ((((*(R17 *)rt_nil_check(l_C_2398))).f_KIND == ((rt_int)3LL)))
{
l_N_2399 = rt_add(l_N_2399, ((rt_int)1LL));
}
l_C_2398 = ((*(R17 *)rt_nil_check(l_C_2398))).f_NEXT;
}
RT_B_TICK();
} L_end2400: ;
{ rt_int rv2401 = l_N_2399;
return rv2401; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2402; memset(&l_N_2402, 0, sizeof l_N_2402);
l_N_2402 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2402 == NULL)) goto L_end2403;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2402))).f_NAME, p_NAME))
{
{ R10 rv2404 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2404; }
}
l_N_2402 = ((*(R21 *)rt_nil_check(l_N_2402))).f_NEXT;
}
RT_B_TICK();
} L_end2403: ;
l_N_2402 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2402))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2402))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2402;
{ R10 rv2405 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2405; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2406; memset(&l_D_2406, 0, sizeof l_D_2406);
l_D_2406 = p_DECLS;
for (;;) {
if ((l_D_2406 == NULL)) goto L_end2407;
{
if (((((*(R21 *)rt_nil_check(l_D_2406))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2406))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2408; memset(&l_Y_2408, 0, sizeof l_Y_2408);
l_Y_2408 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2406))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2406))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2408))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2408))).f_DECL = l_D_2406;
r_DEFINE(l_Y_2408, ((*(R21 *)rt_nil_check(l_D_2406))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2406))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2406))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2406))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2406 = ((*(R21 *)rt_nil_check(l_D_2406))).f_NEXT;
}
RT_B_TICK();
} L_end2407: ;
l_D_2406 = p_DECLS;
for (;;) {
if ((l_D_2406 == NULL)) goto L_end2409;
{
if ((((*(R21 *)rt_nil_check(l_D_2406))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2410; memset(&l_F_2410, 0, sizeof l_F_2410);
l_F_2410 = ((*(R21 *)rt_nil_check(l_D_2406))).f_A;
for (;;) {
if ((l_F_2410 == NULL)) goto L_end2411;
{
if (((((*(R21 *)rt_nil_check(l_F_2410))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2410))).f_B == NULL))))
{
{
R22 * l_FT_2412; memset(&l_FT_2412, 0, sizeof l_FT_2412);
l_FT_2412 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2410))).f_B));
if (((!r_IS_SCALAR(l_FT_2412)) || (!(((*(R22 *)rt_nil_check(l_FT_2412))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2410))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2410 = ((*(R21 *)rt_nil_check(l_F_2410))).f_NEXT;
}
RT_B_TICK();
} L_end2411: ;
}
}
l_D_2406 = ((*(R21 *)rt_nil_check(l_D_2406))).f_NEXT;
}
RT_B_TICK();
} L_end2409: ;
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2413; memset(&l_P_2413, 0, sizeof l_P_2413);
l_P_2413 = p_L;
for (;;) {
if ((l_P_2413 == NULL)) goto L_end2414;
{
if (((((*(R21 *)rt_nil_check(l_P_2413))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2413))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2415 = 1;
return rv2415; }
}
}
l_P_2413 = ((*(R21 *)rt_nil_check(l_P_2413))).f_NEXT;
}
RT_B_TICK();
} L_end2414: ;
{ rt_int rv2416 = 0;
return rv2416; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2417; memset(&l_A_2417, 0, sizeof l_A_2417);
l_A_2417 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2418; memset(&l_FOUND_2418, 0, sizeof l_FOUND_2418);
l_FOUND_2418 = NULL;
rt_int l_N_2419; memset(&l_N_2419, 0, sizeof l_N_2419);
l_N_2419 = ((rt_int)0LL);
R12 * l_Y_2420; memset(&l_Y_2420, 0, sizeof l_Y_2420);
l_Y_2420 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2417 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2417))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2417))).f_DECL == NULL)))
{
{ R22 * rv2421 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2421; }
}
}
for (;;) {
if ((l_Y_2420 == NULL)) goto L_end2422;
{
if (((((*(R12 *)rt_nil_check(l_Y_2420))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2420))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2420))).f_NAME) == l_Y_2420))
{
{
R22 * l_T_2423; memset(&l_T_2423, 0, sizeof l_T_2423);
l_T_2423 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2420))).f_DECL == NULL))
{
l_T_2423 = ((*(R12 *)rt_nil_check(l_Y_2420))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2420))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2420))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2420))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2420))).f_DECL))).f_B))).f_A)))
{
l_T_2423 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2420))).f_NAME, p_LINE);
}
}
if ((!(l_T_2423 == NULL)))
{
l_T_2423 = r_REAL_TYPE(l_T_2423);
if ((((*(R22 *)rt_nil_check(l_T_2423))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2423))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2423))).f_BASE == l_FOUND_2418))))
{
if ((!(l_FOUND_2418 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2418 = ((*(R22 *)rt_nil_check(l_T_2423))).f_BASE;
}
}
}
}
}
}
l_Y_2420 = ((*(R12 *)rt_nil_check(l_Y_2420))).f_SNEXT;
}
RT_B_TICK();
} L_end2422: ;
if ((l_FOUND_2418 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2424 = l_FOUND_2418;
return rv2424; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2425; memset(&l_R_2425, 0, sizeof l_R_2425);
l_R_2425 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2425))).f_BASE == NULL))
{
{ R22 * rv2426 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2426; }
}
{ R22 * rv2427 = ((*(R22 *)rt_nil_check(l_R_2425))).f_BASE;
return rv2427; }
rt_raise(RT_X_INIT);
}
static void r_SAME_CHARSET(R22 * p_A, R22 * p_B, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_KIND == g_T_STR)))
{
if ((!(r_CHARSET_OF(p_A) == r_CHARSET_OF(p_B))))
{
r_FAIL(p_LINE, rt_str("the strings are of different character sets (3.7.4.1, 3.7.5)", 60));
}
}
}
static void r_ASCII_ONLY(R22 * p_T, rstr p_WHAT, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_STR))
{
if ((!(r_CHARSET_OF(p_T) == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
r_FAIL(p_LINE, rt_b_cat(p_WHAT, rt_str(" is predefined for ASCII strings only", 37)));
}
}
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2428; memset(&l_S_2428, 0, sizeof l_S_2428);
l_S_2428 = p_S0;
for (;;) {
if ((l_S_2428 == NULL)) goto L_end2429;
{
{
R21 * l_L_2430; memset(&l_L_2430, 0, sizeof l_L_2430);
l_L_2430 = l_S_2428;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2430))).f_KIND == g_N_LABELED))) goto L_end2431;
{
{
R12 * l_Y_2432; memset(&l_Y_2432, 0, sizeof l_Y_2432);
l_Y_2432 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2430))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2432))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2430))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2430))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2432))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2432, ((*(R21 *)rt_nil_check(l_L_2430))).f_LINE);
}
l_L_2430 = ((*(R21 *)rt_nil_check(l_L_2430))).f_A;
}
RT_B_TICK();
} L_end2431: ;
}
l_S_2428 = ((*(R21 *)rt_nil_check(l_S_2428))).f_NEXT;
}
RT_B_TICK();
} L_end2429: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2433; memset(&l_D_2433, 0, sizeof l_D_2433);
l_D_2433 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2434; memset(&l_S_2434, 0, sizeof l_S_2434);
l_S_2434 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2433 == NULL)) goto L_end2435;
{
if (((((*(R21 *)rt_nil_check(l_D_2433))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2433))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2433);
}
l_D_2433 = ((*(R21 *)rt_nil_check(l_D_2433))).f_NEXT;
}
RT_B_TICK();
} L_end2435: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2434 == NULL)) goto L_end2436;
{
r_STMT(l_S_2434);
l_S_2434 = ((*(R21 *)rt_nil_check(l_S_2434))).f_NEXT;
}
RT_B_TICK();
} L_end2436: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2437; memset(&l_F_2437, 0, sizeof l_F_2437);
S_R10(&l_F_2437, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2438; memset(&l_H_2438, 0, sizeof l_H_2438);
l_H_2438 = p_HANDLERS;
R10 l_WORD_2439; memset(&l_WORD_2439, 0, sizeof l_WORD_2439);
S_R10(&l_WORD_2439, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2437, l_F_2437));
r_PUSH_CTX(((rt_int)3LL), l_F_2437);
((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_HANDLERS = p_HANDLERS;
if ((!(p_S == NULL)))
{
r_STMT(p_S);
}
else
{
r_OPEN_BODY(p_BODY_NODE);
}
r_POP_CTX();
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2437, l_F_2437, l_F_2437));
for (;;) {
if ((l_H_2438 == NULL)) goto L_end2440;
{
{
R21 * l_N_2441; memset(&l_N_2441, 0, sizeof l_N_2441);
l_N_2441 = ((*(R21 *)rt_nil_check(l_H_2438))).f_A;
R10 l_COND_2442; memset(&l_COND_2442, 0, sizeof l_COND_2442);
S_R10(&l_COND_2442, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2441 == NULL)) goto L_end2443;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2441))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2441))).f_NAME) || r_IN_HANDLERS(((*(R21 *)rt_nil_check(l_H_2438))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2441))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2441))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2441))).f_NAME);
}
S_R10(&l_COND_2442, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2442, l_F_2437, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2441))).f_NAME)), 0);
l_N_2441 = ((*(R21 *)rt_nil_check(l_N_2441))).f_NEXT;
}
RT_B_TICK();
} L_end2443: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2439, l_COND_2442));
S_R10(&l_WORD_2439, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2437, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2438))).f_B);
r_POP_CTX();
}
l_H_2438 = ((*(R21 *)rt_nil_check(l_H_2438))).f_NEXT;
}
RT_B_TICK();
} L_end2440: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2437));
}
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_H_2444; memset(&l_H_2444, 0, sizeof l_H_2444);
l_H_2444 = p_HS;
for (;;) {
if ((l_H_2444 == NULL)) goto L_end2445;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2444))).f_A, p_NAME))
{
{ rt_int rv2446 = 1;
return rv2446; }
}
l_H_2444 = ((*(R21 *)rt_nil_check(l_H_2444))).f_NEXT;
}
RT_B_TICK();
} L_end2445: ;
{ rt_int rv2447 = 0;
return rv2447; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2448; memset(&l_K_2448, 0, sizeof l_K_2448);
l_K_2448 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2448 == g_N_EXCEPT))
{
{ rt_int rv2449 = r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
return rv2449; }
}
{ rt_int rv2450 = (((((((l_K_2448 == g_N_BLOCK) || (l_K_2448 == g_N_IF)) || (l_K_2448 == g_N_CASE)) || (l_K_2448 == g_N_LOOP)) || (l_K_2448 == g_N_FOR)) || (l_K_2448 == g_N_PAR)) || (l_K_2448 == g_N_WITH));
return rv2450; }
rt_raise(RT_X_INIT);
}
static R21 * r_NAMED_ROOT(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_2451; memset(&l_K_2451, 0, sizeof l_K_2451);
l_K_2451 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_2451 == g_N_NAME) || (l_K_2451 == g_N_APPLY)))
{
{ R21 * rv2452 = p_E;
return rv2452; }
}
else if ((((l_K_2451 == g_N_INDEX) || (l_K_2451 == g_N_FIELD)) || (l_K_2451 == g_N_SUBSTR)))
{
{ R21 * rv2453 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2453; }
}
{ R21 * rv2454 = NULL;
return rv2454; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2455; memset(&l_K_2455, 0, sizeof l_K_2455);
l_K_2455 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2455 == g_N_NULL))
{
return;
}
else if ((l_K_2455 == g_N_LABELED))
{
{
R12 * l_Y_2456; memset(&l_Y_2456, 0, sizeof l_Y_2456);
l_Y_2456 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2456))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2455 == g_N_GOTO))
{
{
R12 * l_Y_2457; memset(&l_Y_2457, 0, sizeof l_Y_2457);
l_Y_2457 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2458; memset(&l_N_2458, 0, sizeof l_N_2458);
R17 * l_C_2459; memset(&l_C_2459, 0, sizeof l_C_2459);
l_C_2459 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2457 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2457))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2457))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2458 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2457))).f_MV);
for (;;) {
if ((l_N_2458 <= ((rt_int)0LL))) goto L_end2460;
{
if ((((*(R17 *)rt_nil_check(l_C_2459))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2459))).f_NAME));
l_N_2458 = rt_sub(l_N_2458, ((rt_int)1LL));
}
l_C_2459 = ((*(R17 *)rt_nil_check(l_C_2459))).f_NEXT;
}
RT_B_TICK();
} L_end2460: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2457))).f_ACCESS));
}
}
else if ((l_K_2455 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2455 == g_N_CALL))
{
{
R26 l_V_2461; memset(&l_V_2461, 0, sizeof l_V_2461);
S_R26(&l_V_2461, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2461).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2461).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2461).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2455 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2455 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2455 == g_N_LOOP))
{
{
R10 l_END_L_2462; memset(&l_END_L_2462, 0, sizeof l_END_L_2462);
S_R10(&l_END_L_2462, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2462));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2462);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2462));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2462));
}
}
else if ((l_K_2455 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2455 == g_N_EXIT))
{
{
R17 * l_C_2463; memset(&l_C_2463, 0, sizeof l_C_2463);
l_C_2463 = r_LEAVE(((rt_int)2LL));
if ((l_C_2463 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2463))).f_NAME));
}
}
else if ((l_K_2455 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2455 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2455 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2455 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2455 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2455 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2455 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2455 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2464; memset(&l_Y_2464, 0, sizeof l_Y_2464);
l_Y_2464 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2464 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2464))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2464))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2465 = r_CALL_EXPR(p_S, NULL);
return rv2465; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2466; memset(&l_ARM_2466, 0, sizeof l_ARM_2466);
l_ARM_2466 = p_ARMS;
R10 l_WORD_2467; memset(&l_WORD_2467, 0, sizeof l_WORD_2467);
S_R10(&l_WORD_2467, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2468; memset(&l_OPEN_2468, 0, sizeof l_OPEN_2468);
l_OPEN_2468 = ((rt_int)0LL);
rt_int l_CHOSEN_2469; memset(&l_CHOSEN_2469, 0, sizeof l_CHOSEN_2469);
l_CHOSEN_2469 = 0;
for (;;) {
if ((l_ARM_2466 == NULL)) goto L_end2470;
{
{
R23 l_M_2471; memset(&l_M_2471, 0, sizeof l_M_2471);
S_R23(&l_M_2471, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2466))).f_A), 0);
if (l_CHOSEN_2469)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2466))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2466))).f_B);
}
else if ((l_M_2471).f_OK)
{
if ((!r_TEQS(l_WORD_2467, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2468 = rt_add(l_OPEN_2468, ((rt_int)1LL));
S_R10(&l_WORD_2467, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2466))).f_A)));
if (((l_M_2471).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2466))).f_B);
l_CHOSEN_2469 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2466))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2467, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2466))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2466))).f_B);
S_R10(&l_WORD_2467, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2466 = ((*(R21 *)rt_nil_check(l_ARM_2466))).f_NEXT;
}
RT_B_TICK();
} L_end2470: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2469)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2467, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2473_lo = ((rt_int)1LL), it2473_hi = l_OPEN_2468;
for (rt_int it2473 = it2473_lo; it2473 <= it2473_hi; it2473++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2473 == it2473_hi) break;
} } L_end2472: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2474; memset(&l_SAVED_CODE_2474, 0, sizeof l_SAVED_CODE_2474);
S_R14(&l_SAVED_CODE_2474, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2475; memset(&rc2475, 0, sizeof rc2475);  rc2475.f_HEAD = NULL; rc2475.f_TAIL = NULL; rc2475; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2474, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2476; memset(&l_C_2476, 0, sizeof l_C_2476);
S_R10(&l_C_2476, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2477; memset(&l_END_L_2477, 0, sizeof l_END_L_2477);
S_R10(&l_END_L_2477, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2478; memset(&l_IT_2478, 0, sizeof l_IT_2478);
S_R10(&l_IT_2478, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2479; memset(&l_R_2479, 0, sizeof l_R_2479);
l_R_2479 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2480; memset(&l_LO_2480, 0, sizeof l_LO_2480);
S_R26(&l_LO_2480, r_EXPR(((*(R21 *)rt_nil_check(l_R_2479))).f_A, NULL), 0);
R26 l_HI_2481; memset(&l_HI_2481, 0, sizeof l_HI_2481);
S_R26(&l_HI_2481, r_EXPR(((*(R21 *)rt_nil_check(l_R_2479))).f_B, (l_LO_2480).f_T), 0);
R22 * l_T_2482; memset(&l_T_2482, 0, sizeof l_T_2482);
l_T_2482 = r_REAL_TYPE((l_LO_2480).f_T);
R10 l_LOC_2483; memset(&l_LOC_2483, 0, sizeof l_LOC_2483);
R10 l_HIC_2484; memset(&l_HIC_2484, 0, sizeof l_HIC_2484);
if ((((*(R22 *)rt_nil_check(l_T_2482))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2482))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2482))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2482))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2483, (l_LO_2480).f_C, 0);
S_R10(&l_HIC_2484, (l_HI_2481).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2479))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2479))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2483, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2483), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2479))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2484, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2484), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2478, l_LOC_2483, l_IT_2478, l_HIC_2484));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2478, l_IT_2478, l_IT_2478, l_IT_2478));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2485; memset(&l_Y_2485, 0, sizeof l_Y_2485);
l_Y_2485 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2485))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2482))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2485))).f_T = ((*(R22 *)rt_nil_check(l_T_2482))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2485))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2485, rt_str("", 0)), l_IT_2478));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2485, rt_str("", 0)), l_IT_2478));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2485))).f_ACCESS, l_IT_2478, 0);
}
r_DEFINE(l_Y_2485, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2477);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2478, l_IT_2478));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2477));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2486; memset(&l_CS_2486, 0, sizeof l_CS_2486);
l_CS_2486 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2487; memset(&l_C_2487, 0, sizeof l_C_2487);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2487 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2486))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2486))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2486))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2486))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2488; memset(&l_V_2488, 0, sizeof l_V_2488);
S_R10(&l_V_2488, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT), l_V_2488, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2486))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2487 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2488));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2489; memset(&l_C_2489, 0, sizeof l_C_2489);
l_C_2489 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2489 == NULL)) goto L_end2490;
{
if ((((*(R17 *)rt_nil_check(l_C_2489))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2489))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2489))).f_KIND == ((rt_int)1LL)))
{
goto L_end2490;
}
l_C_2489 = ((*(R17 *)rt_nil_check(l_C_2489))).f_NEXT;
}
RT_B_TICK();
} L_end2490: ;
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("SIGNAL without a name outside a handler (4.5.7)", 47));
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_S))).f_NAME, rt_str("TERMINATED", 10)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("TERMINATED is raised by TERMINATE only (4.5.7)", 46));
}
if ((!r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no handler for the exception here, and it is not in the SIGNALS clause (4.5.7): ", 80), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), r_EXC_NAME(((*(R21 *)rt_nil_check(p_S))).f_NAME)));
}
static void r_ASSIGN_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_TG_2491; memset(&l_TG_2491, 0, sizeof l_TG_2491);
l_TG_2491 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2491))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2492; memset(&l_B_2492, 0, sizeof l_B_2492);
S_R26(&l_B_2492, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2491))).f_A, NULL), 0);
if ((!(l_B_2492).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2492).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2493; memset(&l_ARGS_2493, 0, sizeof l_ARGS_2493);
l_ARGS_2493 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2491))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2491))).f_C, g_M_IN, r_VAL_ARG(l_B_2492, NULL))));
R12 * l_Y_2494; memset(&l_Y_2494, 0, sizeof l_Y_2494);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2493))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2494 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2493, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2494 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2493))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2494 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2493, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2494 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2494, l_ARGS_2493, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2492).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2492).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2495; memset(&l_V_2495, 0, sizeof l_V_2495);
S_R26(&l_V_2495, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2492).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2495).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2492).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2492).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2491))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2491))).f_C), (l_V_2495).f_C));
}
}
return;
}
{
R26 l_LV_2496; memset(&l_LV_2496, 0, sizeof l_LV_2496);
S_R26(&l_LV_2496, r_EXPR(l_TG_2491, NULL), 0);
R21 * l_SAVED_Q_2497; memset(&l_SAVED_Q_2497, 0, sizeof l_SAVED_Q_2497);
l_SAVED_Q_2497 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2496).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_S))).f_B;
{
R26 l_V_2498; memset(&l_V_2498, 0, sizeof l_V_2498);
S_R26(&l_V_2498, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2496).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_2496).f_T, (l_LV_2496).f_C, l_V_2498, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2496).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2497;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
if ((!r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_B)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a with-clause prefixes a structured statement (4.5.3 [4-58])", 60));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2499; memset(&l_Y_2499, 0, sizeof l_Y_2499);
l_Y_2499 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2500; memset(&l_V_2500, 0, sizeof l_V_2500);
S_R26(&l_V_2500, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2499))).f_T = (l_V_2500).f_T;
((*(R12 *)rt_nil_check(l_Y_2499))).f_WITHV = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2501; memset(&l_CN_2501, 0, sizeof l_CN_2501);
S_R10(&l_CN_2501, r_NEW_OBJECT(l_Y_2499, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2500).f_T))
{
r_CODE(r_INIT_CODE((l_V_2500).f_T, l_CN_2501));
}
r_CODE(r_ASSIGN_CODE((l_V_2500).f_T, l_CN_2501, (l_V_2500).f_C));
}
}
else
{
if ((!(l_V_2500).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2502; memset(&l_P_2502, 0, sizeof l_P_2502);
S_R10(&l_P_2502, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2500).f_T), l_P_2502, (l_V_2500).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2499))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2502), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2499))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2499))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2499))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R21 * l_R_2503; memset(&l_R_2503, 0, sizeof l_R_2503);
l_R_2503 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_2503 == NULL)))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_R_2503))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_2504; memset(&l_OLD_2504, 0, sizeof l_OLD_2504);
l_OLD_2504 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2503))).f_NAME);
if ((!(l_OLD_2504 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_2504))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_2505; memset(&l_H_2505, 0, sizeof l_H_2505);
l_H_2505 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_R_2503))).f_NAME);
((*(R12 *)rt_nil_check(l_H_2505))).f_T = ((*(R12 *)rt_nil_check(l_OLD_2504))).f_T;
((*(R12 *)rt_nil_check(l_H_2505))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_2505))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_2504))).f_OWNER;
r_DEFINE(l_H_2505, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_2499, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2506; memset(&l_ARM_2506, 0, sizeof l_ARM_2506);
l_ARM_2506 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_2507; memset(&l_SEEN_2507, 0, sizeof l_SEEN_2507);
l_SEEN_2507 = NULL;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2508; memset(&l_CH_2508, 0, sizeof l_CH_2508);
S_R26(&l_CH_2508, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2509; memset(&l_T_2509, 0, sizeof l_T_2509);
l_T_2509 = r_REAL_TYPE((l_CH_2508).f_T);
R12 * l_BOUND_2510; memset(&l_BOUND_2510, 0, sizeof l_BOUND_2510);
l_BOUND_2510 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2511; memset(&l_TMP_2511, 0, sizeof l_TMP_2511);
S_R10(&l_TMP_2511, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2512; memset(&l_WORD_2512, 0, sizeof l_WORD_2512);
S_R10(&l_WORD_2512, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2511, (l_CH_2508).f_C));
for (;;) {
if ((l_ARM_2506 == NULL)) goto L_end2513;
{
{
R21 * l_L_2514; memset(&l_L_2514, 0, sizeof l_L_2514);
l_L_2514 = ((*(R21 *)rt_nil_check(l_ARM_2506))).f_A;
R10 l_COND_2515; memset(&l_COND_2515, 0, sizeof l_COND_2515);
S_R10(&l_COND_2515, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2514 == NULL)) goto L_end2516;
{
S_R10(&l_COND_2515, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2515, l_TMP_2511, (r_EXPR(l_L_2514, l_T_2509)).f_C), 0);
l_L_2514 = ((*(R21 *)rt_nil_check(l_L_2514))).f_NEXT;
}
RT_B_TICK();
} L_end2516: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2512, l_COND_2515));
S_R10(&l_WORD_2512, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2506))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2506))).f_C);
}
l_ARM_2506 = ((*(R21 *)rt_nil_check(l_ARM_2506))).f_NEXT;
}
RT_B_TICK();
} L_end2513: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2512, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_2509))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_2508);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2509))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2509))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2509));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2508).f_C));
for (;;) {
if ((l_ARM_2506 == NULL)) goto L_end2517;
{
{
R21 * l_L_2518; memset(&l_L_2518, 0, sizeof l_L_2518);
l_L_2518 = ((*(R21 *)rt_nil_check(l_ARM_2506))).f_A;
R23 l_FIRST_2519; memset(&l_FIRST_2519, 0, sizeof l_FIRST_2519);
S_R23(&l_FIRST_2519, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2518 == NULL)) goto L_end2520;
{
if ((((*(R21 *)rt_nil_check(l_L_2518))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2521; memset(&l_LO_2521, 0, sizeof l_LO_2521);
S_R23(&l_LO_2521, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2518))).f_A, l_T_2509), 0);
R23 l_HI_2522; memset(&l_HI_2522, 0, sizeof l_HI_2522);
S_R23(&l_HI_2522, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2518))).f_B, l_T_2509), 0);
rt_int l_A_2523; memset(&l_A_2523, 0, sizeof l_A_2523);
l_A_2523 = (l_LO_2521).f_V;
rt_int l_B_2524; memset(&l_B_2524, 0, sizeof l_B_2524);
l_B_2524 = (l_HI_2522).f_V;
if ((!(((l_LO_2521).f_OK && (l_HI_2522).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2518))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2518))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2518))).f_IV == ((rt_int)3LL))))
{
l_A_2523 = rt_add(l_A_2523, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2518))).f_IV >= ((rt_int)2LL)))
{
l_B_2524 = rt_sub(l_B_2524, ((rt_int)1LL));
}
if ((!(l_FIRST_2519).f_OK))
{
S_R23(&l_FIRST_2519, r_SOME(l_A_2523), 0);
}
l_SEEN_2507 = r_DISTINCT_LABEL(l_SEEN_2507, l_A_2523, l_B_2524, ((*(R21 *)rt_nil_check(l_L_2518))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2523), r_NUM(l_B_2524)));
}
}
else
{
{
R23 l_M_2525; memset(&l_M_2525, 0, sizeof l_M_2525);
S_R23(&l_M_2525, r_ENUM_MANIFEST(l_L_2518, l_T_2509), 0);
if ((!(l_M_2525).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2518))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2519).f_OK))
{
S_R23(&l_FIRST_2519, l_M_2525, 0);
}
l_SEEN_2507 = r_DISTINCT_LABEL(l_SEEN_2507, (l_M_2525).f_V, (l_M_2525).f_V, ((*(R21 *)rt_nil_check(l_L_2518))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2525).f_V)));
}
}
l_L_2518 = ((*(R21 *)rt_nil_check(l_L_2518))).f_NEXT;
}
RT_B_TICK();
} L_end2520: ;
if ((!(l_BOUND_2510 == NULL)))
{
{
R22 * l_SAVED_2526; memset(&l_SAVED_2526, 0, sizeof l_SAVED_2526);
l_SAVED_2526 = ((*(R12 *)rt_nil_check(l_BOUND_2510))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2510))).f_T = r_NARROW(l_SAVED_2526, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2519).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2506))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2506))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2510))).f_T = l_SAVED_2526;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2506))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2506))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2506 = ((*(R21 *)rt_nil_check(l_ARM_2506))).f_NEXT;
}
RT_B_TICK();
} L_end2517: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static R25 * r_DISTINCT_LABEL(R25 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); 
R25 * l_P_2527; memset(&l_P_2527, 0, sizeof l_P_2527);
l_P_2527 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv2528 = p_SEEN;
return rv2528; }
}
for (;;) {
if ((l_P_2527 == NULL)) goto L_end2529;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_2527))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_2527))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_2527 = ((*(R25 *)rt_nil_check(l_P_2527))).f_NEXT;
}
RT_B_TICK();
} L_end2529: ;
l_P_2527 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_2527)), ({ R25 rc2530; memset(&rc2530, 0, sizeof rc2530);  S_R10(&rc2530.f_LO, r_NO_TEXT(), 0); S_R10(&rc2530.f_HI, r_NO_TEXT(), 0); S_R23(&rc2530.f_MLO, r_SOME(p_A), 0); S_R23(&rc2530.f_MHI, r_SOME(p_B), 0); rc2530.f_ANYARG = 0; rc2530.f_NEXT = p_SEEN; rc2530; }), 0);
{ R25 * rv2531 = l_P_2527;
return rv2531; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R21 * p_S, R26 p_CH) { RT_B_TICK(); 
R10 l_TMP_2532; memset(&l_TMP_2532, 0, sizeof l_TMP_2532);
S_R10(&l_TMP_2532, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_2533; memset(&l_X_2533, 0, sizeof l_X_2533);
S_R26(&l_X_2533, r_MKET(l_TMP_2532, (p_CH).f_T), 0);
R21 * l_ARM_2534; memset(&l_ARM_2534, 0, sizeof l_ARM_2534);
l_ARM_2534 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R10 l_WORD_2535; memset(&l_WORD_2535, 0, sizeof l_WORD_2535);
S_R10(&l_WORD_2535, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_2532, (p_CH).f_C));
for (;;) {
if ((l_ARM_2534 == NULL)) goto L_end2536;
{
{
R21 * l_L_2537; memset(&l_L_2537, 0, sizeof l_L_2537);
l_L_2537 = ((*(R21 *)rt_nil_check(l_ARM_2534))).f_A;
R10 l_COND_2538; memset(&l_COND_2538, 0, sizeof l_COND_2538);
S_R10(&l_COND_2538, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2537 == NULL)) goto L_end2539;
{
if ((((*(R21 *)rt_nil_check(l_L_2537))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_2540; memset(&l_LO_2540, 0, sizeof l_LO_2540);
S_R26(&l_LO_2540, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2537))).f_A, (p_CH).f_T), 0);
R26 l_HI_2541; memset(&l_HI_2541, 0, sizeof l_HI_2541);
S_R26(&l_HI_2541, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2537))).f_B, (p_CH).f_T), 0);
rstr l_GE_2542; memset(&l_GE_2542, 0, sizeof l_GE_2542);
l_GE_2542 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_2542, rt_str(">=", 2));
rstr l_LE_2543; memset(&l_LE_2543, 0, sizeof l_LE_2543);
l_LE_2543 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_2543, rt_str("<=", 2));
if (((((*(R21 *)rt_nil_check(l_L_2537))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2537))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_2542, rt_str("> ", 2));
}
if ((((*(R21 *)rt_nil_check(l_L_2537))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_2543, rt_str("< ", 2));
}
S_R10(&l_COND_2538, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_2538, r_VALUE_COMPARE(l_X_2533, l_LO_2540, r_MK(l_GE_2542)), r_VALUE_COMPARE(l_X_2533, l_HI_2541, r_MK(l_LE_2543))), 0);
}
}
else
{
S_R10(&l_COND_2538, r_FMT2(rt_str("@ || @", 6), l_COND_2538, r_VALUE_COMPARE(l_X_2533, r_CASE_LABEL(l_L_2537, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_2537 = ((*(R21 *)rt_nil_check(l_L_2537))).f_NEXT;
}
RT_B_TICK();
} L_end2539: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2535, l_COND_2538));
S_R10(&l_WORD_2535, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2534))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2534))).f_C);
}
l_ARM_2534 = ((*(R21 *)rt_nil_check(l_ARM_2534))).f_NEXT;
}
RT_B_TICK();
} L_end2536: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2535, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_2544; memset(&l_V_2544, 0, sizeof l_V_2544);
S_R26(&l_V_2544, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_2544).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv2545 = l_V_2544;
return rv2545; }
rt_raise(RT_X_INIT);
}
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R10 rv2546 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv2546; }
}
{ R10 rv2547 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv2547; }
rt_raise(RT_X_INIT);
}
static void r_CASE_ELEMENT(R21 * p_B, R21 * p_HANDLERS) { RT_B_TICK(); 
if ((p_HANDLERS == NULL))
{
r_OPEN_BODY(p_B);
}
else
{
r_GUARDED(NULL, p_B, p_HANDLERS);
}
}
static R12 * r_DISCRIMINATED(R21 * p_CH) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_CH))).f_KIND == g_N_FIELD)))
{
{ R12 * rv2548 = NULL;
return rv2548; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2549 = NULL;
return rv2549; }
}
{
R12 * l_Y_2550; memset(&l_Y_2550, 0, sizeof l_Y_2550);
l_Y_2550 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2550 == NULL))
{
{ R12 * rv2551 = NULL;
return rv2551; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2550))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2552 = NULL;
return rv2552; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2550))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv2553 = NULL;
return rv2553; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2550))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2554 = NULL;
return rv2554; }
}
{
R24 * l_F_2555; memset(&l_F_2555, 0, sizeof l_F_2555);
l_F_2555 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2550))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2555 == NULL))
{
{ R12 * rv2556 = NULL;
return rv2556; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2555))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2557 = NULL;
return rv2557; }
}
}
{ R12 * rv2558 = l_Y_2550;
return rv2558; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2559; memset(&l_N_2559, 0, sizeof l_N_2559);
l_N_2559 = r_COPY_TYP(p_T);
R24 * l_F_2560; memset(&l_F_2560, 0, sizeof l_F_2560);
l_F_2560 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2561; memset(&l_A_2561, 0, sizeof l_A_2561);
l_A_2561 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2562; memset(&l_HEAD_2562, 0, sizeof l_HEAD_2562);
l_HEAD_2562 = NULL;
R25 * l_TAIL_2563; memset(&l_TAIL_2563, 0, sizeof l_TAIL_2563);
l_TAIL_2563 = NULL;
for (;;) {
if ((l_F_2560 == NULL)) goto L_end2564;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2560))).f_KIND == ((rt_int)0LL))) && (!(l_A_2561 == NULL))))
{
{
R25 * l_B_2565; memset(&l_B_2565, 0, sizeof l_B_2565);
l_B_2565 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2565)), (*(R25 *)rt_nil_check(l_A_2561)), 0);
((*(R25 *)rt_nil_check(l_B_2565))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2560))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2565))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2565))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2565))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2563 == NULL))
{
l_HEAD_2562 = l_B_2565;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2563))).f_NEXT = l_B_2565;
}
l_TAIL_2563 = l_B_2565;
}
l_A_2561 = ((*(R25 *)rt_nil_check(l_A_2561))).f_NEXT;
}
l_F_2560 = ((*(R24 *)rt_nil_check(l_F_2560))).f_NEXT;
}
RT_B_TICK();
} L_end2564: ;
((*(R22 *)rt_nil_check(l_N_2559))).f_ARGS = l_HEAD_2562;
{ R22 * rv2566 = l_N_2559;
return rv2566; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2567; memset(&l_ARM_2567, 0, sizeof l_ARM_2567);
l_ARM_2567 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2568; memset(&l_SAVED_2568, 0, sizeof l_SAVED_2568);
l_SAVED_2568 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2567 == NULL)) goto L_end2569;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2567))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2567))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2567))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2568;
return;
}
l_ARM_2567 = ((*(R21 *)rt_nil_check(l_ARM_2567))).f_NEXT;
}
RT_B_TICK();
} L_end2569: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2568;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2570; memset(&l_T_2570, 0, sizeof l_T_2570);
l_T_2570 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2570))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2571 = l_T_2570;
return rv2571; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2572; memset(&l_TD_2572, 0, sizeof l_TD_2572);
S_R10(&l_TD_2572, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2573; memset(&l_P_2573, 0, sizeof l_P_2573);
l_P_2573 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2573 == NULL)) goto L_end2574;
{
{
R12 * l_Y_2575; memset(&l_Y_2575, 0, sizeof l_Y_2575);
l_Y_2575 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2573))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2575))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2575))).f_DECL = l_P_2573;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2575, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2575))).f_INPUT = 1;
r_DEFINE(l_Y_2575, ((*(R21 *)rt_nil_check(l_P_2573))).f_LINE);
}
l_P_2573 = ((*(R21 *)rt_nil_check(l_P_2573))).f_NEXT;
}
RT_B_TICK();
} L_end2574: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2572));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2572, l_TD_2572));
l_P_2573 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2573 == NULL)) goto L_end2576;
{
r_ACTIVATE_PATH(l_P_2573, l_TD_2572);
l_P_2573 = ((*(R21 *)rt_nil_check(l_P_2573))).f_NEXT;
}
RT_B_TICK();
} L_end2576: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2572, l_TD_2572, l_TD_2572));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2572));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2577; memset(&l_FN_2577, 0, sizeof l_FN_2577);
S_R10(&l_FN_2577, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2578; memset(&l_FT_2578, 0, sizeof l_FT_2578);
S_R10(&l_FT_2578, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2579; memset(&l_Y_2579, 0, sizeof l_Y_2579);
l_Y_2579 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2580; memset(&l_H_2580, 0, sizeof l_H_2580);
S_R10(&l_H_2580, r_OBJ_ACCESS(l_Y_2579), 0);
R10 l_IT_2581; memset(&l_IT_2581, 0, sizeof l_IT_2581);
S_R10(&l_IT_2581, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2582; memset(&l_PRIO_2582, 0, sizeof l_PRIO_2582);
S_R10(&l_PRIO_2582, r_MK(rt_str("0", 1)), 0);
R10 l_START_2583; memset(&l_START_2583, 0, sizeof l_START_2583);
R22 * l_LT_2584; memset(&l_LT_2584, 0, sizeof l_LT_2584);
l_LT_2584 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2578, l_FT_2578));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2582, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2585; memset(&l_R_2585, 0, sizeof l_R_2585);
l_R_2585 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2586; memset(&l_LV_2586, 0, sizeof l_LV_2586);
S_R26(&l_LV_2586, r_EXPR(((*(R21 *)rt_nil_check(l_R_2585))).f_A, NULL), 0);
R10 l_LO_2587; memset(&l_LO_2587, 0, sizeof l_LO_2587);
S_R10(&l_LO_2587, (l_LV_2586).f_C, 0);
R10 l_HI_2588; memset(&l_HI_2588, 0, sizeof l_HI_2588);
S_R10(&l_HI_2588, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2585))).f_B, (l_LV_2586).f_T)).f_C, 0);
R22 * l_RT_2589; memset(&l_RT_2589, 0, sizeof l_RT_2589);
l_RT_2589 = r_REAL_TYPE((l_LV_2586).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2589))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2589))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2584 = ((*(R22 *)rt_nil_check(l_RT_2589))).f_BASE;
S_R10(&l_HI_2588, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2585))).f_B, l_LT_2584)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2589))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2589))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2585))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2585))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2587, r_FMT1(rt_str("(@) + 1", 7), l_LO_2587), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2585))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2588, r_FMT1(rt_str("(@) - 1", 7), l_HI_2588), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2580, l_LO_2587, l_HI_2588));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2581, l_H_2580, l_IT_2581, l_H_2580), l_IT_2581));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2581));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2578, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2581));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2590; memset(&l_V_2590, 0, sizeof l_V_2590);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2591; memset(&l_I_2591, 0, sizeof l_I_2591);
l_I_2591 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2591))).f_T = l_LT_2584;
((*(R12 *)rt_nil_check(l_I_2591))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2591))).f_ACCESS, l_IT_2581, 0);
((*(R12 *)rt_nil_check(l_I_2591))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2591, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2590, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2590).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2590).f_C));
}
}
S_R10(&l_START_2583, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2580, l_IT_2581, l_FN_2577, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2583, p_TD, l_PRIO_2582, l_IT_2581));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2580));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2583, p_TD, l_PRIO_2582));
}
r_PATH_BODY(p_P, l_FN_2577, l_FT_2578, l_LT_2584);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2592 = r_MK(rt_str("NULL", 4));
return rv2592; }
}
{ R10 rv2593 = r_MK(rt_str("F", 1));
return rv2593; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2594; memset(&l_SAVED_CODE_2594, 0, sizeof l_SAVED_CODE_2594);
S_R14(&l_SAVED_CODE_2594, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2595; memset(&l_SAVED_CTXS_2595, 0, sizeof l_SAVED_CTXS_2595);
l_SAVED_CTXS_2595 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2596; memset(&l_OUTER_2596, 0, sizeof l_OUTER_2596);
l_OUTER_2596 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2597; memset(&l_H_2597, 0, sizeof l_H_2597);
l_H_2597 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2598; memset(&l_CS_2598, 0, sizeof l_CS_2598);
l_CS_2598 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_UPT_2599; memset(&l_UPT_2599, 0, sizeof l_UPT_2599);
S_R10(&l_UPT_2599, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2596))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2599, ((*(R18 *)rt_nil_check(l_OUTER_2596))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2598)), ({ R18 rc2600; memset(&rc2600, 0, sizeof rc2600);  rc2600.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2596))).f_LEVEL, ((rt_int)1LL)); rc2600.f_R = NULL; rc2600.f_FRAMED = 1; S_R10(&rc2600.f_FTYPE, p_FT, 0); S_R14(&rc2600.f_FIELDS, ({ R14 rc2601; memset(&rc2601, 0, sizeof rc2601);  rc2601.f_HEAD = NULL; rc2601.f_TAIL = NULL; rc2601; }), 0); rc2600.f_UP = l_OUTER_2596; rc2600.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2597))).f_B; rc2600.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2597))).f_A; rc2600.f_RESULT = NULL; rc2600.f_IS_PATH = 1; S_R10(&rc2600.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2600; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2599), &((*(R18 *)rt_nil_check(l_CS_2598))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2598;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2602; memset(&rc2602, 0, sizeof rc2602);  rc2602.f_HEAD = NULL; rc2602.f_TAIL = NULL; rc2602; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2597))).f_B, ((*(R21 *)rt_nil_check(l_H_2597))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2603; memset(&l_I_2603, 0, sizeof l_I_2603);
l_I_2603 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2603))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2603))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2603))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2603))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2598))).f_FIELDS);
r_DEFINE(l_I_2603, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(p_P))).f_B);
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("static void @(void *arg);", 25), p_FN));
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("static void @(void *arg) { @ *F = arg; (void)F;", 47), p_FN, p_FT));
r_EMIT(g_O_FUNCS, r_MK(rt_str("rt_frame pf; if (RT_TRY(pf)) { rt_b_path_begin();", 49)));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMIT(g_O_FUNCS, r_MK(rt_str("RT_POP(pf); } else { RT_POP(pf); rt_b_path_failed(rt_xcur, ", 59)));
{
R21 * l_L_2604; memset(&l_L_2604, 0, sizeof l_L_2604);
l_L_2604 = ((*(R21 *)rt_nil_check(l_H_2597))).f_A;
R10 l_C_2605; memset(&l_C_2605, 0, sizeof l_C_2605);
S_R10(&l_C_2605, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2604 == NULL)) goto L_end2606;
{
S_R10(&l_C_2605, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2605, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2604))).f_NAME)), 0);
l_L_2604 = ((*(R21 *)rt_nil_check(l_L_2604))).f_NEXT;
}
RT_B_TICK();
} L_end2606: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2605));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2598))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2596;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2594, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2595;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2607; memset(&l_C_2607, 0, sizeof l_C_2607);
l_C_2607 = (p_B).f_HEAD;
R10 l_R_2608; memset(&l_R_2608, 0, sizeof l_R_2608);
S_R10(&l_R_2608, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2607 == NULL)) goto L_end2609;
{
S_R10(&l_R_2608, r_CAT(l_R_2608, ((*(R15 *)rt_nil_check(l_C_2607))).f_T), 0);
l_C_2607 = ((*(R15 *)rt_nil_check(l_C_2607))).f_NEXT;
}
RT_B_TICK();
} L_end2609: ;
{ R10 rv2610 = l_R_2608;
return rv2610; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2611; memset(&l_NAME_2611, 0, sizeof l_NAME_2611);
S_R10(&l_NAME_2611, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2612; memset(&l_SUB_2612, 0, sizeof l_SUB_2612);
S_R10(&l_SUB_2612, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2612, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2613; memset(&l_Y_2613, 0, sizeof l_Y_2613);
l_Y_2613 = r_LOOKUP(l_NAME_2611);
if ((l_Y_2613 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2611);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2613))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2611);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2613))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2614 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2613), l_SUB_2612);
return rv2614; }
}
rt_raise(RT_X_INIT);
}
static void r_TERMINATE_STMT(R21 * p_S) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
r_CODES(rt_str("rt_b_terminate(NULL);", 21));
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_terminate(@);", 18), r_PATH_REF(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
}
static R26 r_PARALLEL_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_2615; memset(&l_NAME_2615, 0, sizeof l_NAME_2615);
S_R10(&l_NAME_2615, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2616; memset(&l_LINE_2616, 0, sizeof l_LINE_2616);
l_LINE_2616 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2615, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2617; memset(&l_V_2617, 0, sizeof l_V_2617);
S_R26(&l_V_2617, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2617).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2616, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2618 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2617).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2617).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2618; }
}
}
else if (r_TEQS(l_NAME_2615, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2619 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2619; }
}
{ R26 rv2620 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2620; }
}
else if (r_TEQS(l_NAME_2615, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2621 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2621; }
}
{ R26 rv2622 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2622; }
}
else if ((r_TEQS(l_NAME_2615, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2615, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2616, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2615);
}
{
R26 l_V_2623; memset(&l_V_2623, 0, sizeof l_V_2623);
S_R26(&l_V_2623, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2623).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2616, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2623).f_LVAL))
{
r_FAIL(l_LINE_2616, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2615, rt_str("REQUEST", 7)))
{
{ R26 rv2624 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2623).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2624; }
}
{ R26 rv2625 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2623).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2625; }
}
}
else if (r_TEQS(l_NAME_2615, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2616);
{ R26 rv2626 = r_START_IO_CALL(p_E);
return rv2626; }
}
r_FAILT(l_LINE_2616, rt_str("unknown routine ", 16), l_NAME_2615);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2627; memset(&l_ARGS_2627, 0, sizeof l_ARGS_2627);
l_ARGS_2627 = r_CALL_ARGS(p_E);
R12 * l_Y_2628; memset(&l_Y_2628, 0, sizeof l_Y_2628);
l_Y_2628 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2627, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2629; memset(&l_R_2629, 0, sizeof l_R_2629);
if ((l_Y_2628 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2629, r_CALL_SYM(l_Y_2628, l_ARGS_2627, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2630 = l_R_2629;
return rv2630; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2631; memset(&l_I_2631, 0, sizeof l_I_2631);
l_I_2631 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2631)), ({ R19 rc2632; memset(&rc2632, 0, sizeof rc2632);  rc2632.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2632.f_IMPORTS = p_IMPORTS; rc2632.f_SIGNALS = p_SIGNALS; S_R10(&rc2632.f_NAME, p_NAME, 0); rc2632.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2632; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2631;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2633; memset(&l_BASE_2633, 0, sizeof l_BASE_2633);
S_R10(&l_BASE_2633, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2634; memset(&l_S_2634, 0, sizeof l_S_2634);
l_S_2634 = rt_b_str_new((l_BASE_2633).f_LEN, 0);
rt_b_assign(&l_S_2634, r_STR(l_BASE_2633, (l_BASE_2633).f_LEN));
R21 * l_N_2635; memset(&l_N_2635, 0, sizeof l_N_2635);
l_N_2635 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2637_lo = ((rt_int)0LL), it2637_hi = rt_sub((l_BASE_2633).f_LEN, ((rt_int)1LL));
for (rt_int it2637 = it2637_lo; it2637 <= it2637_hi; it2637++) {
{
if (rt_b_eq(rt_b_slice(l_S_2634, it2637, it2637), rt_str("$", 1)))
{
S_R10(&l_BASE_2633, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2634, ((rt_int)0LL), rt_sub(it2637, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2634, rt_add(it2637, ((rt_int)1LL)), rt_sub((l_BASE_2633).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2637 == it2637_hi) break;
} } L_end2636: ;
for (;;) {
if ((l_N_2635 == NULL)) goto L_end2638;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2635))).f_NAME, l_BASE_2633))
{
{ R10 rv2639 = r_FMT2(rt_str("@_@", 3), l_BASE_2633, r_NEW_NAME(rt_str("", 0)));
return rv2639; }
}
l_N_2635 = ((*(R21 *)rt_nil_check(l_N_2635))).f_NEXT;
}
RT_B_TICK();
} L_end2638: ;
l_N_2635 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2635))).f_NAME, l_BASE_2633, 0);
((*(R21 *)rt_nil_check(l_N_2635))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2635;
{ R10 rv2640 = l_BASE_2633;
return rv2640; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2641 = 0;
return rv2641; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2642 = 1;
return rv2642; }
}
{ rt_int rv2643 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2643; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2644; memset(&l_S_2644, 0, sizeof l_S_2644);
l_S_2644 = p_S0;
for (;;) {
if ((l_S_2644 == NULL)) goto L_end2645;
{
if (((((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_PAR)))
{
{ rt_int rv2646 = 1;
return rv2646; }
}
if (((((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2644))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2644))).f_B)))
{
{ rt_int rv2647 = 1;
return rv2647; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2644))).f_A))).f_B))
{
{ rt_int rv2648 = 1;
return rv2648; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2644))).f_B))).f_B))
{
{ rt_int rv2649 = 1;
return rv2649; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2650; memset(&l_A_2650, 0, sizeof l_A_2650);
l_A_2650 = ((*(R21 *)rt_nil_check(l_S_2644))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2644))).f_KIND == g_N_CASE))
{
l_A_2650 = ((*(R21 *)rt_nil_check(l_S_2644))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2644))).f_D == NULL)))
{
{ rt_int rv2651 = 1;
return rv2651; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2644))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2644))).f_C))).f_B))
{
{ rt_int rv2652 = 1;
return rv2652; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2644))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2644))).f_B))).f_B))
{
{ rt_int rv2653 = 1;
return rv2653; }
}
}
for (;;) {
if ((l_A_2650 == NULL)) goto L_end2654;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2650))).f_C == NULL)))
{
{ rt_int rv2655 = 1;
return rv2655; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2650))).f_B))).f_B))
{
{ rt_int rv2656 = 1;
return rv2656; }
}
l_A_2650 = ((*(R21 *)rt_nil_check(l_A_2650))).f_NEXT;
}
RT_B_TICK();
} L_end2654: ;
}
}
l_S_2644 = ((*(R21 *)rt_nil_check(l_S_2644))).f_NEXT;
}
RT_B_TICK();
} L_end2645: ;
{ rt_int rv2657 = 0;
return rv2657; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2658; memset(&l_Y_2658, 0, sizeof l_Y_2658);
l_Y_2658 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2659; memset(&l_S_2659, 0, sizeof l_S_2659);
l_S_2659 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_2659, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2658))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2658))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2658))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2658))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2658, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2661_lo = ((rt_int)1LL), it2661_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2661 = it2661_lo; it2661 <= it2661_hi; it2661++) {
{
if (rt_b_eq(rt_b_slice(l_S_2659, it2661, it2661), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2658))).f_PREFIX, r_MKN(rt_b_slice(l_S_2659, ((rt_int)0LL), rt_sub(it2661, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2662; memset(&l_SHORT_2662, 0, sizeof l_SHORT_2662);
l_SHORT_2662 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2659, rt_add(it2661, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2662))).f_ORIG = l_Y_2658;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2662))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2658))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2662))).f_DECL = p_R;
r_DEFINE(l_SHORT_2662, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2660;
}
}
RT_B_TICK();
if (it2661 == it2661_hi) break;
} } L_end2660: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2663; memset(&l_R_2663, 0, sizeof l_R_2663);
l_R_2663 = p_RS;
for (;;) {
if ((l_R_2663 == NULL)) goto L_end2664;
{
if ((((*(R21 *)rt_nil_check(l_R_2663))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2663);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2663);
}
l_R_2663 = ((*(R21 *)rt_nil_check(l_R_2663))).f_NEXT;
}
RT_B_TICK();
} L_end2664: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2665; memset(&l_R_2665, 0, sizeof l_R_2665);
l_R_2665 = p_RS;
for (;;) {
if ((l_R_2665 == NULL)) goto L_end2666;
{
if ((((*(R21 *)rt_nil_check(l_R_2665))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2667; memset(&l_M_2667, 0, sizeof l_M_2667);
l_M_2667 = r_FIND_DECL(l_R_2665);
r_ENTER_MODULE(l_M_2667);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2665))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2667);
}
}
else
{
{
R12 * l_Y_2668; memset(&l_Y_2668, 0, sizeof l_Y_2668);
l_Y_2668 = r_FIND_DECL(l_R_2665);
r_ROUTINE_HEADER(l_Y_2668);
}
}
l_R_2665 = ((*(R21 *)rt_nil_check(l_R_2665))).f_NEXT;
}
RT_B_TICK();
} L_end2666: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2669; memset(&l_Y_2669, 0, sizeof l_Y_2669);
l_Y_2669 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2669 == NULL)) goto L_end2670;
{
if (((((*(R12 *)rt_nil_check(l_Y_2669))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2669))).f_ORIG == NULL)))
{
{ R12 * rv2671 = l_Y_2669;
return rv2671; }
}
l_Y_2669 = r_LOOKUP_NEXT(l_Y_2669);
}
RT_B_TICK();
} L_end2670: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2672; memset(&l_D_2672, 0, sizeof l_D_2672);
l_D_2672 = p_DECLS;
for (;;) {
if ((l_D_2672 == NULL)) goto L_end2673;
{
if (((((*(R21 *)rt_nil_check(l_D_2672))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2672))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2672))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2674; memset(&l_Y_2674, 0, sizeof l_Y_2674);
l_Y_2674 = r_FIND_DECL(l_D_2672);
R22 * l_T_2675; memset(&l_T_2675, 0, sizeof l_T_2675);
l_T_2675 = r_RESOLVE_USER(r_TYPE_REF(l_D_2672));
}
}
}
l_D_2672 = ((*(R21 *)rt_nil_check(l_D_2672))).f_NEXT;
}
RT_B_TICK();
} L_end2673: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2676; memset(&l_TS_2676, 0, sizeof l_TS_2676);
l_TS_2676 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2676))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2677 = l_TS_2676;
return rv2677; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2678; memset(&l_Y_2678, 0, sizeof l_Y_2678);
l_Y_2678 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2679; memset(&l_SAVED_2679, 0, sizeof l_SAVED_2679);
l_SAVED_2679 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2678))).f_DECL = p_M;
r_DEFINE(l_Y_2678, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2680; memset(&l_MARK_2680, 0, sizeof l_MARK_2680);
l_MARK_2680 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2678;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2678))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2680);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2679;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2678);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2681; memset(&l_Y_2681, 0, sizeof l_Y_2681);
l_Y_2681 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2681 == NULL)) goto L_end2682;
{
{
R12 * l_NEXT_2683; memset(&l_NEXT_2683, 0, sizeof l_NEXT_2683);
l_NEXT_2683 = ((*(R12 *)rt_nil_check(l_Y_2681))).f_SNEXT;
r_DEFINE(l_Y_2681, ((rt_int)0LL));
l_Y_2681 = l_NEXT_2683;
}
}
RT_B_TICK();
} L_end2682: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2684; memset(&l_MARK_2684, 0, sizeof l_MARK_2684);
l_MARK_2684 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2684 == NULL)) goto L_end2685;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2684))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2685;
}
l_MARK_2684 = ((*(R12 *)rt_nil_check(l_MARK_2684))).f_SNEXT;
}
RT_B_TICK();
} L_end2685: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2684);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 0;
}
static void r_ENTER_MODULE_OF(R12 * p_G) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if (((!r_IN_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL)) && (!((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_BUSY)))
{
r_ENTER_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
}
}
static rt_int r_ENTER_MODULE_FOR(R12 * p_G) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if (((!r_IN_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL)) && (!((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_BUSY)))
{
r_ENTER_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
{ rt_int rv2686 = 1;
return rv2686; }
}
}
{ rt_int rv2687 = 0;
return rv2687; }
rt_raise(RT_X_INIT);
}
static void r_LEAVE_MODULE_OF(R12 * p_G) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if ((((((*(R7 *)rt_nil_check(g_W))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL) && ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_BUSY) && (((*(R7 *)rt_nil_check(g_W))).f_DEPTH == (((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_MODL))).f_FWD).f_H)))
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
}
}
static void r_EXPORT_MODULE(R12 * p_M) { RT_B_TICK(); 
R21 * l_D_2688; memset(&l_D_2688, 0, sizeof l_D_2688);
l_D_2688 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2689; memset(&l_Y_2689, 0, sizeof l_Y_2689);
l_Y_2689 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2689 == NULL)) goto L_end2690;
{
if (r_EXPORTED_BY(l_D_2688, l_Y_2689))
{
((*(R12 *)rt_nil_check(l_Y_2689))).f_EXPORTED = 1;
{
R12 * l_A_2691; memset(&l_A_2691, 0, sizeof l_A_2691);
l_A_2691 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2689))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2689))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2691)), (*(R12 *)rt_nil_check(l_Y_2689)), 0);
((*(R12 *)rt_nil_check(l_A_2691))).f_ORIG = r_ORIGINAL(l_Y_2689);
((*(R12 *)rt_nil_check(l_A_2691))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2691, ((*(R21 *)rt_nil_check(l_D_2688))).f_LINE);
}
}
l_Y_2689 = ((*(R12 *)rt_nil_check(l_Y_2689))).f_SNEXT;
}
RT_B_TICK();
} L_end2690: ;
{
R21 * l_X_2692; memset(&l_X_2692, 0, sizeof l_X_2692);
l_X_2692 = ((*(R21 *)rt_nil_check(l_D_2688))).f_B;
for (;;) {
if ((l_X_2692 == NULL)) goto L_end2693;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2692))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2692))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2692))).f_NAME);
}
l_X_2692 = ((*(R21 *)rt_nil_check(l_X_2692))).f_NEXT;
}
RT_B_TICK();
} L_end2693: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2694; memset(&l_Y_2694, 0, sizeof l_Y_2694);
l_Y_2694 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2694 == NULL)) goto L_end2695;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2694))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2694))).f_PREFIX, p_NAME)))
{
{ rt_int rv2696 = 1;
return rv2696; }
}
l_Y_2694 = ((*(R12 *)rt_nil_check(l_Y_2694))).f_SNEXT;
}
RT_B_TICK();
} L_end2695: ;
{ rt_int rv2697 = 0;
return rv2697; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2698; memset(&l_X_2698, 0, sizeof l_X_2698);
l_X_2698 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2699 = 0;
return rv2699; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2700 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2700; }
}
for (;;) {
if ((l_X_2698 == NULL)) goto L_end2701;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2698))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2702 = 1;
return rv2702; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2698))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2698))).f_A == NULL))
{
{ rt_int rv2703 = 1;
return rv2703; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2698))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2704 = 1;
return rv2704; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2705; memset(&l_T_2705, 0, sizeof l_T_2705);
l_T_2705 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2698))).f_NAME, p_Y);
if ((!(l_T_2705 == NULL)))
{
{ rt_int rv2706 = 1;
return rv2706; }
}
}
}
l_X_2698 = ((*(R21 *)rt_nil_check(l_X_2698))).f_NEXT;
}
RT_B_TICK();
} L_end2701: ;
{ rt_int rv2707 = 0;
return rv2707; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2708; memset(&l_M_2708, 0, sizeof l_M_2708);
l_M_2708 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2709; memset(&l_Z_2709, 0, sizeof l_Z_2709);
if ((l_M_2708 == NULL))
{
{ R12 * rv2710 = NULL;
return rv2710; }
}
l_Z_2709 = ((*(R12 *)rt_nil_check(l_M_2708))).f_MEMBERS;
for (;;) {
if ((l_Z_2709 == NULL)) goto L_end2711;
{
if (((((*(R12 *)rt_nil_check(l_Z_2709))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2709))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2709))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2709))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2709))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2712 = l_Z_2709;
return rv2712; }
}
}
}
}
l_Z_2709 = ((*(R12 *)rt_nil_check(l_Z_2709))).f_SNEXT;
}
RT_B_TICK();
} L_end2711: ;
{ R12 * rv2713 = NULL;
return rv2713; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2714; memset(&l_R_2714, 0, sizeof l_R_2714);
l_R_2714 = p_RS;
for (;;) {
if ((l_R_2714 == NULL)) goto L_end2715;
{
if ((((*(R21 *)rt_nil_check(l_R_2714))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2716; memset(&l_M_2716, 0, sizeof l_M_2716);
l_M_2716 = r_FIND_DECL(l_R_2714);
R21 * l_D_2717; memset(&l_D_2717, 0, sizeof l_D_2717);
l_D_2717 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2714))).f_C))).f_A;
r_ENTER_MODULE(l_M_2716);
for (;;) {
if ((l_D_2717 == NULL)) goto L_end2718;
{
if (((((*(R21 *)rt_nil_check(l_D_2717))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2717))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2717);
}
l_D_2717 = ((*(R21 *)rt_nil_check(l_D_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2718: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2714))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2714))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2716);
}
}
l_R_2714 = ((*(R21 *)rt_nil_check(l_R_2714))).f_NEXT;
}
RT_B_TICK();
} L_end2715: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2719; memset(&l_R_2719, 0, sizeof l_R_2719);
l_R_2719 = p_RS;
for (;;) {
if ((l_R_2719 == NULL)) goto L_end2720;
{
if ((((*(R21 *)rt_nil_check(l_R_2719))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2721; memset(&l_M_2721, 0, sizeof l_M_2721);
l_M_2721 = r_FIND_DECL(l_R_2719);
r_ENTER_MODULE(l_M_2721);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2719))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2721);
}
}
else
{
{
R12 * l_Y_2722; memset(&l_Y_2722, 0, sizeof l_Y_2722);
l_Y_2722 = r_FIND_DECL(l_R_2719);
if ((!((*(R12 *)rt_nil_check(l_Y_2722))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2722);
}
}
}
l_R_2719 = ((*(R21 *)rt_nil_check(l_R_2719))).f_NEXT;
}
RT_B_TICK();
} L_end2720: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2723; memset(&l_LEVEL_2723, 0, sizeof l_LEVEL_2723);
l_LEVEL_2723 = r_CUR_LEVEL();
rt_int l_MORE_2724; memset(&l_MORE_2724, 0, sizeof l_MORE_2724);
l_MORE_2724 = 1;
for (;;) {
if ((!l_MORE_2724)) goto L_end2725;
{
l_MORE_2724 = 0;
{
R12 * l_P_2726; memset(&l_P_2726, 0, sizeof l_P_2726);
l_P_2726 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2727; memset(&l_PREV_2727, 0, sizeof l_PREV_2727);
l_PREV_2727 = NULL;
for (;;) {
if ((l_P_2726 == NULL)) goto L_end2728;
{
if ((((*(R12 *)rt_nil_check(l_P_2726))).f_LEVEL == l_LEVEL_2723))
{
if ((l_PREV_2727 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2726))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2727))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2726))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2726);
r_ROUTINE_BODY(l_P_2726);
r_LEAVE_MODULE_OF(l_P_2726);
l_MORE_2724 = 1;
goto L_end2728;
}
l_PREV_2727 = l_P_2726;
l_P_2726 = ((*(R12 *)rt_nil_check(l_P_2726))).f_MEMBERS;
}
RT_B_TICK();
} L_end2728: ;
}
}
RT_B_TICK();
} L_end2725: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2729; memset(&l_D_2729, 0, sizeof l_D_2729);
l_D_2729 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2730; memset(&l_S_2730, 0, sizeof l_S_2730);
l_S_2730 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2729 == NULL)) goto L_end2731;
{
if (((((*(R21 *)rt_nil_check(l_D_2729))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2729))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2729);
}
l_D_2729 = ((*(R21 *)rt_nil_check(l_D_2729))).f_NEXT;
}
RT_B_TICK();
} L_end2731: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2730 == NULL)) goto L_end2732;
{
r_STMT(l_S_2730);
l_S_2730 = ((*(R21 *)rt_nil_check(l_S_2730))).f_NEXT;
}
RT_B_TICK();
} L_end2732: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2733; memset(&l_R_2733, 0, sizeof l_R_2733);
l_R_2733 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2734; memset(&l_SAVED_CODE_2734, 0, sizeof l_SAVED_CODE_2734);
S_R14(&l_SAVED_CODE_2734, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2735; memset(&l_SAVED_CTXS_2735, 0, sizeof l_SAVED_CTXS_2735);
l_SAVED_CTXS_2735 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2736; memset(&l_SAVED_BINDS_2736, 0, sizeof l_SAVED_BINDS_2736);
l_SAVED_BINDS_2736 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2737; memset(&l_OUTER_2737, 0, sizeof l_OUTER_2737);
l_OUTER_2737 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2738; memset(&l_CS_2738, 0, sizeof l_CS_2738);
l_CS_2738 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_PROLOGUE_2739; memset(&l_PROLOGUE_2739, 0, sizeof l_PROLOGUE_2739);
S_R10(&l_PROLOGUE_2739, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2738)), ({ R18 rc2740; memset(&rc2740, 0, sizeof rc2740);  rc2740.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2740.f_R = p_Y; rc2740.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2740.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2740.f_FIELDS, ({ R14 rc2741; memset(&rc2741, 0, sizeof rc2741);  rc2741.f_HEAD = NULL; rc2741.f_TAIL = NULL; rc2741; }), 0); rc2740.f_UP = l_OUTER_2737; rc2740.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2733))).f_E; rc2740.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2733))).f_D))).f_A; rc2740.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2740.f_IS_PATH = 0; S_R10(&rc2740.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2740; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2738))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2738))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2738))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2738))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2739, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2738))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2738))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2739, r_CATS(l_PROLOGUE_2739, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2738;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2742; memset(&rc2742, 0, sizeof rc2742);  rc2742.f_HEAD = NULL; rc2742.f_TAIL = NULL; rc2742; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2733))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2733))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2733))).f_LINE);
{
R28 * l_P_2743; memset(&l_P_2743, 0, sizeof l_P_2743);
l_P_2743 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2743 == NULL)) goto L_end2744;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2743))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2743))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2745; memset(&l_V_2745, 0, sizeof l_V_2745);
l_V_2745 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2743))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2745))).f_T = ((*(R28 *)rt_nil_check(l_P_2743))).f_T;
((*(R12 *)rt_nil_check(l_V_2745))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2743))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2745))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2743))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2745))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2743))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2738))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2743))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2738))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2739, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2739, r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2745))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2743))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2746; memset(&l_ARGA_2746, 0, sizeof l_ARGA_2746);
S_R10(&l_ARGA_2746, ((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2743))).f_T, l_ARGA_2746, ((*(R21 *)rt_nil_check(l_R_2733))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2745))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2743))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2738))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2739, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2739, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2743))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2743))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2739, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2739, ((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, l_ARGA_2746), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2743))).f_T))
{
S_R10(&l_PROLOGUE_2739, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2739, ((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2743))).f_T, l_ARGA_2746)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2738))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2738))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2743))).f_T, l_ARGA_2746, ((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS)), 0);
r_DEFINE(l_V_2745, ((*(R21 *)rt_nil_check(l_R_2733))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2745, ((*(R21 *)rt_nil_check(l_R_2733))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2743))).f_T, ((*(R12 *)rt_nil_check(l_V_2745))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2733))).f_LINE, 1);
}
}
}
}
l_P_2743 = ((*(R28 *)rt_nil_check(l_P_2743))).f_NEXT;
}
RT_B_TICK();
} L_end2744: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2733))).f_FL >= ((rt_int)2LL)))
{
{
R21 * l_N_2747; memset(&l_N_2747, 0, sizeof l_N_2747);
l_N_2747 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2733))).f_D))).f_C;
R14 l_SAVED_CODE_2748; memset(&l_SAVED_CODE_2748, 0, sizeof l_SAVED_CODE_2748);
S_R14(&l_SAVED_CODE_2748, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_2749; memset(&l_V_2749, 0, sizeof l_V_2749);
S_R26(&l_V_2749, r_EXPR(l_N_2747, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_2750; memset(&l_M_2750, 0, sizeof l_M_2750);
S_R23(&l_M_2750, r_MANIFEST(l_N_2747), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2748, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2749).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2749).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_2750).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_2747))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_2750).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_2747))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2733))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2733))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2738))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2738))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2739));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2738))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2738))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2737;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2734, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2735;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2736;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2751; memset(&l_B_2751, 0, sizeof l_B_2751);
l_B_2751 = p_BS;
for (;;) {
if ((l_B_2751 == NULL)) goto L_end2752;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2751))).f_T == NULL)))
{
{
R12 * l_Y_2753; memset(&l_Y_2753, 0, sizeof l_Y_2753);
l_Y_2753 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2751))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2753))).f_T = ((*(R20 *)rt_nil_check(l_B_2751))).f_T;
r_DEFINE(l_Y_2753, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2751))).f_HASMV)
{
{
R12 * l_Y_2754; memset(&l_Y_2754, 0, sizeof l_Y_2754);
l_Y_2754 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2751))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2754))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2754))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2754))).f_MV = ((*(R20 *)rt_nil_check(l_B_2751))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2754))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2751))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2754))).f_INPUT = 1;
r_DEFINE(l_Y_2754, p_LINE);
}
}
l_B_2751 = ((*(R20 *)rt_nil_check(l_B_2751))).f_NEXT;
}
RT_B_TICK();
} L_end2752: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2755; memset(&l_C_2755, 0, sizeof l_C_2755);
l_C_2755 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2755 == NULL)) goto L_end2756;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2755))).f_T), &(*p_DST));
l_C_2755 = ((*(R15 *)rt_nil_check(l_C_2755))).f_NEXT;
}
RT_B_TICK();
} L_end2756: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2757; memset(&l_U_2757, 0, sizeof l_U_2757);
l_U_2757 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2757 == NULL)) goto L_end2758;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2757))).f_NAME, p_NAME))
{
{ rt_int rv2759 = 1;
return rv2759; }
}
l_U_2757 = ((*(R21 *)rt_nil_check(l_U_2757))).f_NEXT;
}
RT_B_TICK();
} L_end2758: ;
{ rt_int rv2760 = 0;
return rv2760; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2761; memset(&l_U_2761, 0, sizeof l_U_2761);
l_U_2761 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2761 == NULL)) goto L_end2762;
{
{
R21 * l_T_2763; memset(&l_T_2763, 0, sizeof l_T_2763);
l_T_2763 = p_SEGS;
for (;;) {
if ((l_T_2763 == NULL)) goto L_end2764;
{
if ((((!(l_T_2763 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2763))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2763))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2761))).f_NAME)))
{
{ rt_int rv2765 = 0;
return rv2765; }
}
l_T_2763 = ((*(R21 *)rt_nil_check(l_T_2763))).f_NEXT;
}
RT_B_TICK();
} L_end2764: ;
}
l_U_2761 = ((*(R21 *)rt_nil_check(l_U_2761))).f_NEXT;
}
RT_B_TICK();
} L_end2762: ;
{ rt_int rv2766 = 1;
return rv2766; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2767; memset(&l_S_2767, 0, sizeof l_S_2767);
l_S_2767 = p_SEGS;
rt_int l_MAINS_2768; memset(&l_MAINS_2768, 0, sizeof l_MAINS_2768);
l_MAINS_2768 = ((rt_int)0LL);
R18 * l_ROOT_2769; memset(&l_ROOT_2769, 0, sizeof l_ROOT_2769);
l_ROOT_2769 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2769)), ({ R18 rc2770; memset(&rc2770, 0, sizeof rc2770);  rc2770.f_LEVEL = ((rt_int)0LL); rc2770.f_R = NULL; rc2770.f_FRAMED = 0; S_R10(&rc2770.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2770.f_FIELDS, ({ R14 rc2771; memset(&rc2771, 0, sizeof rc2771);  rc2771.f_HEAD = NULL; rc2771.f_TAIL = NULL; rc2771; }), 0); rc2770.f_UP = NULL; rc2770.f_IMPORTS = NULL; rc2770.f_SIGNALS = NULL; rc2770.f_RESULT = NULL; rc2770.f_IS_PATH = 0; S_R10(&rc2770.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2770; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2769;
((*(R7 *)rt_nil_check(g_W))).f_IS = NULL;
r_ENTER_ISCOPE(NULL, NULL, r_MK(rt_str("segment", 7)));
((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = ((rt_int)0LL);
r_EMITS(g_O_TYPEDEFS, rt_str("#include \"paleo.h\"", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <float.h>", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <math.h>", 17));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <string.h>", 19));
r_EMITS(g_O_MAINHEAD, rt_str("int main(int argc, char **argv) {", 33));
r_EMITS(g_O_MAINHEAD, rt_str("rt_b_lang();", 12));
r_EMITS(g_O_MAINHEAD, rt_str("rt_init(argc, argv);", 20));
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2772; memset(&rc2772, 0, sizeof rc2772);  rc2772.f_HEAD = NULL; rc2772.f_TAIL = NULL; rc2772; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2767 = p_SEGS;
for (;;) {
if ((l_S_2767 == NULL)) goto L_end2774;
{
if ((((*(R21 *)rt_nil_check(l_S_2767))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2767, p_SEGS))
{
goto L_end2774;
}
}
l_S_2767 = ((*(R21 *)rt_nil_check(l_S_2767))).f_NEXT;
}
RT_B_TICK();
} L_end2774: ;
if ((l_S_2767 == NULL))
{
goto L_end2773;
}
((*(R21 *)rt_nil_check(l_S_2767))).f_D = l_S_2767;
l_MAINS_2768 = rt_add(l_MAINS_2768, ((*(R21 *)rt_nil_check(l_S_2767))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2767))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2767))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2767))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2767, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2767))).f_B);
r_SEGMENT_EXPORTS(l_S_2767);
}
RT_B_TICK();
} L_end2773: ;
l_S_2767 = p_SEGS;
for (;;) {
if ((l_S_2767 == NULL)) goto L_end2775;
{
if ((((*(R21 *)rt_nil_check(l_S_2767))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2767))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2767))).f_NAME);
}
l_S_2767 = ((*(R21 *)rt_nil_check(l_S_2767))).f_NEXT;
}
RT_B_TICK();
} L_end2775: ;
if ((!(l_MAINS_2768 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2776; memset(&l_X_2776, 0, sizeof l_X_2776);
l_X_2776 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2776 == NULL)) goto L_end2777;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2776))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2776))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2776))).f_NAME)));
l_X_2776 = ((*(R21 *)rt_nil_check(l_X_2776))).f_NEXT;
}
RT_B_TICK();
} L_end2777: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2778; memset(&l_M_2778, 0, sizeof l_M_2778);
l_M_2778 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2779 = 0;
return rv2779; }
}
for (;;) {
if ((l_M_2778 == NULL)) goto L_end2780;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2778))).f_NAME))
{
{ rt_int rv2781 = 1;
return rv2781; }
}
l_M_2778 = ((*(R12 *)rt_nil_check(l_M_2778))).f_MODL;
}
RT_B_TICK();
} L_end2780: ;
{ rt_int rv2782 = 0;
return rv2782; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2783; memset(&l_MARK_2783, 0, sizeof l_MARK_2783);
l_MARK_2783 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2784; memset(&l_TAKEN_2784, 0, sizeof l_TAKEN_2784);
for (;;) {
if ((l_MARK_2783 == NULL)) goto L_end2785;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2783))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2785;
}
l_MARK_2783 = ((*(R12 *)rt_nil_check(l_MARK_2783))).f_SNEXT;
}
RT_B_TICK();
} L_end2785: ;
l_TAKEN_2784 = r_TAKE_SCOPE(l_MARK_2783);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2784 == NULL)) goto L_end2786;
{
{
R12 * l_NEXT_2787; memset(&l_NEXT_2787, 0, sizeof l_NEXT_2787);
l_NEXT_2787 = ((*(R12 *)rt_nil_check(l_TAKEN_2784))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2784))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2784))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2784))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2784)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2784))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2784))))))
{
r_DEFINE(l_TAKEN_2784, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2784 = l_NEXT_2787;
}
}
RT_B_TICK();
} L_end2786: ;
}
int main(int argc, char **argv) {
rt_b_lang();
rt_init(argc, argv);
x_OVERFLOW = rt_exc("OVERFLOW");
g_K_EOF = ((rt_int)0LL);
g_K_ID = ((rt_int)1LL);
g_K_RES = ((rt_int)2LL);
g_K_SYM = ((rt_int)3LL);
g_K_NUM = ((rt_int)4LL);
g_K_STR = ((rt_int)5LL);
g_K_ENUM = ((rt_int)6LL);
g_K_GEN = ((rt_int)7LL);
g_K_REAL = ((rt_int)8LL);
g_K_FIX = ((rt_int)9LL);
g_N_INT = ((rt_int)1LL);
g_N_BOOL = ((rt_int)2LL);
g_N_NIL = ((rt_int)3LL);
g_N_STR = ((rt_int)4LL);
g_N_PART = ((rt_int)5LL);
g_N_ENUMLIT = ((rt_int)6LL);
g_N_NAME = ((rt_int)7LL);
g_N_APPLY = ((rt_int)8LL);
g_N_FIELD = ((rt_int)9LL);
g_N_DEREF = ((rt_int)10LL);
g_N_INDEX = ((rt_int)11LL);
g_N_SUBSTR = ((rt_int)12LL);
g_N_UNOP = ((rt_int)13LL);
g_N_BINOP = ((rt_int)14LL);
g_N_IN = ((rt_int)15LL);
g_N_RANGE = ((rt_int)16LL);
g_N_PAREN = ((rt_int)17LL);
g_N_RECCONS = ((rt_int)18LL);
g_N_FINIT = ((rt_int)19LL);
g_N_NEW = ((rt_int)20LL);
g_N_REAL = ((rt_int)21LL);
g_N_BITS = ((rt_int)22LL);
g_N_ARRCONS = ((rt_int)23LL);
g_N_TYPESPEC = ((rt_int)24LL);
g_N_QUAL = ((rt_int)25LL);
g_N_ANY = ((rt_int)26LL);
g_N_DONTCARE = ((rt_int)27LL);
g_N_NULL = ((rt_int)30LL);
g_N_ASSIGN = ((rt_int)31LL);
g_N_CALL = ((rt_int)32LL);
g_N_IF = ((rt_int)33LL);
g_N_ARM = ((rt_int)34LL);
g_N_CASE = ((rt_int)35LL);
g_N_LOOP = ((rt_int)36LL);
g_N_FOR = ((rt_int)37LL);
g_N_EXIT = ((rt_int)38LL);
g_N_RETURN = ((rt_int)39LL);
g_N_BLOCK = ((rt_int)40LL);
g_N_SIGNAL = ((rt_int)41LL);
g_N_ASSERT = ((rt_int)42LL);
g_N_EXCEPT = ((rt_int)43LL);
g_N_HANDLER = ((rt_int)44LL);
g_N_BODY = ((rt_int)45LL);
g_N_LABELED = ((rt_int)46LL);
g_N_GOTO = ((rt_int)47LL);
g_N_WITH = ((rt_int)48LL);
g_N_PAR = ((rt_int)49LL);
g_N_PATH = ((rt_int)57LL);
g_N_TERMINATE = ((rt_int)58LL);
g_N_CONST = ((rt_int)50LL);
g_N_VAR = ((rt_int)51LL);
g_N_TYPE = ((rt_int)52LL);
g_N_ROUTINE = ((rt_int)53LL);
g_N_PARAM = ((rt_int)54LL);
g_N_SEGMENT = ((rt_int)55LL);
g_N_IDENT = ((rt_int)56LL);
g_N_MODULE = ((rt_int)59LL);
g_N_HDR = ((rt_int)65LL);
g_N_ITEMS = ((rt_int)66LL);
g_N_USE = ((rt_int)67LL);
g_N_EXPORT = ((rt_int)68LL);
g_N_FORMAL = ((rt_int)69LL);
g_N_REPTYPE = ((rt_int)70LL);
g_N_REP = ((rt_int)71LL);
g_N_VALREP = ((rt_int)72LL);
g_N_VARIANT = ((rt_int)73LL);
g_N_VARSPEC = ((rt_int)74LL);
g_N_NEEDS = ((rt_int)75LL);
g_N_TEMPLATE = ((rt_int)76LL);
g_TS_NAME = ((rt_int)60LL);
g_TS_ARRAY = ((rt_int)61LL);
g_TS_RECORD = ((rt_int)62LL);
g_TS_ENUM = ((rt_int)63LL);
g_TS_GEN = ((rt_int)64LL);
g_TS_ROUTINE = ((rt_int)77LL);
g_M_IN = ((rt_int)0LL);
g_M_INOUT = ((rt_int)1LL);
g_M_OUT = ((rt_int)2LL);
g_T_INT = ((rt_int)1LL);
g_T_BOOL = ((rt_int)2LL);
g_T_ENUM = ((rt_int)3LL);
g_T_STR = ((rt_int)4LL);
g_T_REC = ((rt_int)5LL);
g_T_PTR = ((rt_int)6LL);
g_T_ARR = ((rt_int)7LL);
g_T_VOID = ((rt_int)8LL);
g_T_NIL = ((rt_int)9LL);
g_T_FLOAT = ((rt_int)10LL);
g_T_BITS = ((rt_int)11LL);
g_T_SEM = ((rt_int)12LL);
g_T_ABS = ((rt_int)13LL);
g_T_TYPE = ((rt_int)14LL);
g_T_PATHS = ((rt_int)15LL);
g_Y_VAR = ((rt_int)1LL);
g_Y_CONST = ((rt_int)2LL);
g_Y_TYPE = ((rt_int)3LL);
g_Y_ROUTINE = ((rt_int)4LL);
g_Y_GEN = ((rt_int)5LL);
g_Y_BUILTIN = ((rt_int)6LL);
g_Y_ENUMLIT = ((rt_int)7LL);
g_Y_MODULE = ((rt_int)8LL);
g_Y_LABEL = ((rt_int)9LL);
g_Y_PATH = ((rt_int)10LL);
g_Y_SEGMENT = ((rt_int)11LL);
g_Y_REPTYPE = ((rt_int)12LL);
g_O_TYPEDEFS = ((rt_int)0LL);
g_O_STRUCTS = ((rt_int)1LL);
g_O_GLOBALS = ((rt_int)2LL);
g_O_PROTOS = ((rt_int)3LL);
g_O_HELPERS = ((rt_int)4LL);
g_O_FUNCS = ((rt_int)5LL);
g_O_MAINHEAD = ((rt_int)6LL);
g_O_STARTUP = ((rt_int)7LL);
g_O_MAIN = ((rt_int)8LL);
g_O_LAST = ((rt_int)8LL);
g_ARENA_SIZE = ((rt_int)64000000LL);
g_MAX_SOURCE = ((rt_int)2000000LL);
g_MAX_TOKENS = ((rt_int)600000LL);
g_HASH_SIZE = ((rt_int)4096LL);
g_GRAPHIC = rt_b_str_new(((rt_int)95LL), 0);
rt_b_assign(&g_GRAPHIC, rt_str(" !\"#$%&'()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 95));
g_W = ({ R7 *p = rt_b_new(sizeof *p);  (*p).f_ARENA = rt_b_str_new(((rt_int)64000000LL), 0); { (*p).f_SRC.lo[0] = ((rt_int)0LL); (*p).f_SRC.hi[0] = g_MAX_SOURCE; rt_int n = rt_b_extent(1, (*p).f_SRC.lo, (*p).f_SRC.hi); (*p).f_SRC.p = rt_b_array_alloc(n, sizeof *(*p).f_SRC.p); } { (*p).f_TOKS.lo[0] = ((rt_int)0LL); (*p).f_TOKS.hi[0] = g_MAX_TOKENS; rt_int n = rt_b_extent(1, (*p).f_TOKS.lo, (*p).f_TOKS.hi); (*p).f_TOKS.p = rt_b_array_alloc(n, sizeof *(*p).f_TOKS.p); } { (*p).f_TABLE.lo[0] = ((rt_int)0LL); (*p).f_TABLE.hi[0] = g_HASH_SIZE; rt_int n = rt_b_extent(1, (*p).f_TABLE.lo, (*p).f_TABLE.hi); (*p).f_TABLE.p = rt_b_array_alloc(n, sizeof *(*p).f_TABLE.p); } { (*p).f_OUT.lo[0] = ((rt_int)0LL); (*p).f_OUT.hi[0] = g_O_LAST; rt_int n = rt_b_extent(1, (*p).f_OUT.lo, (*p).f_OUT.hi); (*p).f_OUT.p = rt_b_array_alloc(n, sizeof *(*p).f_OUT.p); } p; });
r_READ_SOURCE();
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
