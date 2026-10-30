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
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1176; };
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
static rt_int r_EXPORTS_ORDER(R12 * p_Y);
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP);
static rt_int r_IS_UNORDERED(R22 * p_T);
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
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT);
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
static void r_DISTINCT_SIGNATURES(R21 * p_RS);
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
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X);
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
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv775 = p_T;
return rv775; }
}
l_A_772 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_772))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_772))).f_DECL = p_Y;
{ R22 * rv776 = l_A_772;
return rv776; }
}
l_A_772 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_772))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_772))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_772))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_772))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_772))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv777 = l_A_772;
return rv777; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv778 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv778; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_779; memset(&l_R_779, 0, sizeof l_R_779);
l_R_779 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_779 == NULL)) goto L_end780;
{
if ((((((*(R12 *)rt_nil_check(l_R_779))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_779))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_779))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_779)), p_OP))
{
{ rt_int rv781 = 1;
return rv781; }
}
}
l_R_779 = ((*(R12 *)rt_nil_check(l_R_779))).f_SNEXT;
}
RT_B_TICK();
} L_end780: ;
{ rt_int rv782 = 0;
return rv782; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv783 = 0;
return rv783; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv784 = 1;
return rv784; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv785 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv785; }
}
{ rt_int rv786 = 0;
return rv786; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_787; memset(&l_P_787, 0, sizeof l_P_787);
l_P_787 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_787 == NULL)) goto L_end788;
{
if ((l_P_787 == p_M))
{
{ rt_int rv789 = 1;
return rv789; }
}
l_P_787 = ((*(R12 *)rt_nil_check(l_P_787))).f_MODL;
}
RT_B_TICK();
} L_end788: ;
{ rt_int rv790 = 0;
return rv790; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_791; memset(&l_D_791, 0, sizeof l_D_791);
l_D_791 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_792; memset(&l_T_792, 0, sizeof l_T_792);
if ((p_TS == NULL))
{
{ R22 * rv793 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_791))).f_B);
return rv793; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_791))).f_A, p_TS);
l_T_792 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_791))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv794 = l_T_792;
return rv794; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_795; memset(&l_F_795, 0, sizeof l_F_795);
l_F_795 = p_FORMALS;
R21 * l_A_796; memset(&l_A_796, 0, sizeof l_A_796);
l_A_796 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_795 == NULL)) goto L_end797;
{
{
R21 * l_N_798; memset(&l_N_798, 0, sizeof l_N_798);
l_N_798 = ((*(R21 *)rt_nil_check(l_F_795))).f_A;
for (;;) {
if ((l_N_798 == NULL)) goto L_end799;
{
if ((l_A_796 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_795))).f_B == NULL))
{
{
R12 * l_Y_800; memset(&l_Y_800, 0, sizeof l_Y_800);
l_Y_800 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_798))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_800))).f_T = r_ARG_TYPE(l_A_796);
r_DEFINE(l_Y_800, ((*(R21 *)rt_nil_check(l_A_796))).f_LINE);
}
}
else
{
{
R12 * l_Y_801; memset(&l_Y_801, 0, sizeof l_Y_801);
l_Y_801 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_798))).f_NAME);
R10 l_C_802; memset(&l_C_802, 0, sizeof l_C_802);
R23 l_M_803; memset(&l_M_803, 0, sizeof l_M_803);
((*(R12 *)rt_nil_check(l_Y_801))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_795))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_796))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_796))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_796))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_796))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_802, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_796))).f_NAME, (((*(R21 *)rt_nil_check(l_A_796))).f_NAME).f_LEN))), 0);
S_R23(&l_M_803, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_796, &l_C_802, &l_M_803);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_801))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_802))))
{
S_R10(&l_C_802, (r_EXPR(l_A_796, ((*(R12 *)rt_nil_check(l_Y_801))).f_T)).f_C, 0);
S_R23(&l_M_803, r_ENUM_MANIFEST(l_A_796, ((*(R12 *)rt_nil_check(l_Y_801))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_801))).f_ACCESS, l_C_802, 0);
((*(R12 *)rt_nil_check(l_Y_801))).f_HASMV = (l_M_803).f_OK;
((*(R12 *)rt_nil_check(l_Y_801))).f_MV = (l_M_803).f_V;
((*(R12 *)rt_nil_check(l_Y_801))).f_INPUT = 1;
r_DEFINE(l_Y_801, ((*(R21 *)rt_nil_check(l_A_796))).f_LINE);
}
}
l_A_796 = ((*(R21 *)rt_nil_check(l_A_796))).f_NEXT;
l_N_798 = ((*(R21 *)rt_nil_check(l_N_798))).f_NEXT;
}
RT_B_TICK();
} L_end799: ;
}
l_F_795 = ((*(R21 *)rt_nil_check(l_F_795))).f_NEXT;
}
RT_B_TICK();
} L_end797: ;
if ((!(l_A_796 == NULL)))
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
{ R10 rv804 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv804; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv805 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv805; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_806; memset(&l_K_806, 0, sizeof l_K_806);
l_K_806 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv807 = r_MK(rt_str("rt_int", 6));
return rv807; }
}
else if ((l_K_806 == g_T_FLOAT))
{
{ R10 rv808 = r_MK(rt_str("double", 6));
return rv808; }
}
else if (((l_K_806 == g_T_STR) || (l_K_806 == g_T_BITS)))
{
{ R10 rv809 = r_MK(rt_str("rstr", 4));
return rv809; }
}
else if (((l_K_806 == g_T_REC) || (l_K_806 == g_T_ARR)))
{
{ R10 rv810 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv810; }
}
else if ((l_K_806 == g_T_ABS))
{
{ R10 rv811 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv811; }
}
else if ((l_K_806 == g_T_SEM))
{
{ R10 rv812 = r_MK(rt_str("rt_b_sem *", 10));
return rv812; }
}
else if ((l_K_806 == g_T_PATHS))
{
{ R10 rv813 = r_MK(rt_str("rt_b_paths", 10));
return rv813; }
}
else if ((l_K_806 == g_T_VOID))
{
{ R10 rv814 = r_MK(rt_str("void", 4));
return rv814; }
}
else if ((l_K_806 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_815; memset(&l_TT_815, 0, sizeof l_TT_815);
l_TT_815 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_815))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_815))).f_A == NULL)))
{
{
R12 * l_Y_816; memset(&l_Y_816, 0, sizeof l_Y_816);
l_Y_816 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_815))).f_NAME);
if ((!(l_Y_816 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_816))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_816))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_816))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_816))).f_DECL))).f_A == NULL)))
{
{ R10 rv817 = r_CATS(r_RECORD_NAME(l_Y_816), rt_str(" *", 2));
return rv817; }
}
}
}
}
}
}
}
{ R10 rv818 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv818; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv819 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv819; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_820; memset(&l_F_820, 0, sizeof l_F_820);
l_F_820 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_820)), ({ R24 rc821; memset(&rc821, 0, sizeof rc821);  S_R10(&rc821.f_NAME, p_NAME, 0); S_R10(&rc821.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc821.f_T = p_T; rc821.f_KIND = p_KIND; S_R10(&rc821.f_TAGF, r_NO_TEXT(), 0); rc821.f_LABELS = NULL; rc821.f_NEXT = NULL; rc821; }), 0);
{ R24 * rv822 = l_F_820;
return rv822; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_823; memset(&l_F_823, 0, sizeof l_F_823);
l_F_823 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_823 == NULL)) goto L_end824;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_823))).f_NAME, p_NAME))
{
{ R24 * rv825 = l_F_823;
return rv825; }
}
l_F_823 = ((*(R24 *)rt_nil_check(l_F_823))).f_NEXT;
}
RT_B_TICK();
} L_end824: ;
{ R24 * rv826 = NULL;
return rv826; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_827; memset(&l_F_827, 0, sizeof l_F_827);
l_F_827 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_828; memset(&l_FIRST_828, 0, sizeof l_FIRST_828);
l_FIRST_828 = NULL;
for (;;) {
if ((l_F_827 == NULL)) goto L_end829;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_827))).f_NAME, p_NAME))
{
if ((l_FIRST_828 == NULL))
{
l_FIRST_828 = l_F_827;
}
if (((((*(R24 *)rt_nil_check(l_F_827))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv830 = l_F_827;
return rv830; }
}
{
R23 l_TAGV_831; memset(&l_TAGV_831, 0, sizeof l_TAGV_831);
S_R23(&l_TAGV_831, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_827))).f_TAGF), 0);
if ((l_TAGV_831).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_827))).f_LABELS, (l_TAGV_831).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_827))).f_TAGF)))).f_T))
{
{ R24 * rv832 = l_F_827;
return rv832; }
}
}
}
}
l_F_827 = ((*(R24 *)rt_nil_check(l_F_827))).f_NEXT;
}
RT_B_TICK();
} L_end829: ;
{ R24 * rv833 = l_FIRST_828;
return rv833; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_834; memset(&l_P_834, 0, sizeof l_P_834);
l_P_834 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_835; memset(&l_N_835, 0, sizeof l_N_835);
l_N_835 = ((rt_int)0LL);
for (;;) {
if ((l_P_834 == NULL)) goto L_end836;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_834))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_834))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_834))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_834))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_835 = rt_add(l_N_835, ((rt_int)1LL));
}
l_P_834 = ((*(R24 *)rt_nil_check(l_P_834))).f_NEXT;
}
RT_B_TICK();
} L_end836: ;
if ((l_N_835 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_835)), 0);
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
R21 * l_D_837; memset(&l_D_837, 0, sizeof l_D_837);
l_D_837 = p_DECLS;
for (;;) {
if ((l_D_837 == NULL)) goto L_end838;
{
if ((((*(R21 *)rt_nil_check(l_D_837))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_839; memset(&l_FT_839, 0, sizeof l_FT_839);
l_FT_839 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_837))).f_B);
R21 * l_N_840; memset(&l_N_840, 0, sizeof l_N_840);
l_N_840 = ((*(R21 *)rt_nil_check(l_D_837))).f_A;
for (;;) {
if ((l_N_840 == NULL)) goto L_end841;
{
{
R24 * l_F_842; memset(&l_F_842, 0, sizeof l_F_842);
l_F_842 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_840))).f_NAME, l_FT_839, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_842))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_842))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_842, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_840))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_840))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_843; memset(&l_Y_843, 0, sizeof l_Y_843);
l_Y_843 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_840))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_843))).f_T = l_FT_839;
S_R10(&((*(R12 *)rt_nil_check(l_Y_843))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_842))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_843))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_843))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_843))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_843, ((*(R21 *)rt_nil_check(l_D_837))).f_LINE);
}
}
}
l_N_840 = ((*(R21 *)rt_nil_check(l_N_840))).f_NEXT;
}
RT_B_TICK();
} L_end841: ;
}
}
else
{
{
R24 * l_TF_844; memset(&l_TF_844, 0, sizeof l_TF_844);
l_TF_844 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_837))).f_NAME);
R21 * l_S_845; memset(&l_S_845, 0, sizeof l_S_845);
l_S_845 = ((*(R21 *)rt_nil_check(l_D_837))).f_A;
if ((l_TF_844 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_837))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_837))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_844))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_837))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_837))).f_NAME);
}
{
R21 * l_O_846; memset(&l_O_846, 0, sizeof l_O_846);
l_O_846 = p_DECLS;
for (;;) {
if ((l_O_846 == l_D_837)) goto L_end847;
{
if ((((*(R21 *)rt_nil_check(l_O_846))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_846))).f_NAME, ((*(R21 *)rt_nil_check(l_D_837))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_837))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_837))).f_NAME);
}
}
l_O_846 = ((*(R21 *)rt_nil_check(l_O_846))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
}
r_CHECK_VARIANT_NAMES(l_D_837, ((*(R24 *)rt_nil_check(l_TF_844))).f_T);
for (;;) {
if ((l_S_845 == NULL)) goto L_end848;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_845))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_837))).f_NAME), ((*(R21 *)rt_nil_check(l_S_845))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_845 = ((*(R21 *)rt_nil_check(l_S_845))).f_NEXT;
}
RT_B_TICK();
} L_end848: ;
}
}
l_D_837 = ((*(R21 *)rt_nil_check(l_D_837))).f_NEXT;
}
RT_B_TICK();
} L_end838: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_849; memset(&l_S_849, 0, sizeof l_S_849);
l_S_849 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_850; memset(&l_LOS_850, 0, sizeof l_LOS_850);
l_LOS_850 = NULL;
R21 * l_HIS_851; memset(&l_HIS_851, 0, sizeof l_HIS_851);
l_HIS_851 = NULL;
rt_int l_LO_LIM_852; memset(&l_LO_LIM_852, 0, sizeof l_LO_LIM_852);
rt_int l_HI_LIM_853; memset(&l_HI_LIM_853, 0, sizeof l_HI_LIM_853);
R22 * l_R_854; memset(&l_R_854, 0, sizeof l_R_854);
l_R_854 = r_REAL_TYPE(p_TT);
l_LO_LIM_852 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_853 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_854))).f_KIND == g_T_ENUM))
{
l_LO_LIM_852 = ((rt_int)0LL);
l_HI_LIM_853 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_854))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_854))).f_KIND == g_T_BOOL))
{
l_LO_LIM_852 = ((rt_int)0LL);
l_HI_LIM_853 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_854))).f_MLO).f_OK)
{
l_LO_LIM_852 = (((*(R22 *)rt_nil_check(l_R_854))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_854))).f_MHI).f_OK)
{
l_HI_LIM_853 = (((*(R22 *)rt_nil_check(l_R_854))).f_MHI).f_V;
}
for (;;) {
if ((l_S_849 == NULL)) goto L_end855;
{
{
R21 * l_L_856; memset(&l_L_856, 0, sizeof l_L_856);
l_L_856 = ((*(R21 *)rt_nil_check(l_S_849))).f_A;
for (;;) {
if ((l_L_856 == NULL)) goto L_end857;
{
{
R23 l_A_858; memset(&l_A_858, 0, sizeof l_A_858);
R23 l_B_859; memset(&l_B_859, 0, sizeof l_B_859);
if ((((*(R21 *)rt_nil_check(l_L_856))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_858, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_856))).f_A, p_TT), 0);
S_R23(&l_B_859, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_856))).f_B, p_TT), 0);
if (((l_A_858).f_OK && (((((*(R21 *)rt_nil_check(l_L_856))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_856))).f_IV == ((rt_int)3LL))))))
{
(l_A_858).f_V = rt_add((l_A_858).f_V, ((rt_int)1LL));
}
if (((l_B_859).f_OK && (((*(R21 *)rt_nil_check(l_L_856))).f_IV >= ((rt_int)2LL))))
{
(l_B_859).f_V = rt_sub((l_B_859).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_858, r_ENUM_MANIFEST(l_L_856, p_TT), 0);
S_R23(&l_B_859, l_A_858, 0);
}
if ((!(((l_A_858).f_OK && (l_B_859).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_856))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_858).f_V < l_LO_LIM_852) || ((l_B_859).f_V > l_HI_LIM_853)) || ((l_A_858).f_V > (l_B_859).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_856))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_860; memset(&l_P_860, 0, sizeof l_P_860);
l_P_860 = l_LOS_850;
R21 * l_Q_861; memset(&l_Q_861, 0, sizeof l_Q_861);
l_Q_861 = l_HIS_851;
for (;;) {
if ((l_P_860 == NULL)) goto L_end862;
{
if ((((l_A_858).f_V <= ((*(R21 *)rt_nil_check(l_Q_861))).f_IV) && ((l_B_859).f_V >= ((*(R21 *)rt_nil_check(l_P_860))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_856))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_860 = ((*(R21 *)rt_nil_check(l_P_860))).f_NEXT;
l_Q_861 = ((*(R21 *)rt_nil_check(l_Q_861))).f_NEXT;
}
RT_B_TICK();
} L_end862: ;
}
{
R21 * l_P_863; memset(&l_P_863, 0, sizeof l_P_863);
l_P_863 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_864; memset(&l_Q_864, 0, sizeof l_Q_864);
l_Q_864 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_863))).f_IV = (l_A_858).f_V;
((*(R21 *)rt_nil_check(l_Q_864))).f_IV = (l_B_859).f_V;
((*(R21 *)rt_nil_check(l_P_863))).f_NEXT = l_LOS_850;
((*(R21 *)rt_nil_check(l_Q_864))).f_NEXT = l_HIS_851;
l_LOS_850 = l_P_863;
l_HIS_851 = l_Q_864;
}
}
l_L_856 = ((*(R21 *)rt_nil_check(l_L_856))).f_NEXT;
}
RT_B_TICK();
} L_end857: ;
}
l_S_849 = ((*(R21 *)rt_nil_check(l_S_849))).f_NEXT;
}
RT_B_TICK();
} L_end855: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_865; memset(&l_T_865, 0, sizeof l_T_865);
l_T_865 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_866; memset(&l_TAIL_866, 0, sizeof l_TAIL_866);
l_TAIL_866 = NULL;
((*(R22 *)rt_nil_check(l_T_865))).f_BASE = l_T_865;
((*(R22 *)rt_nil_check(l_T_865))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_865))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_865))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_865))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_865))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_865))).f_CNAME));
}
{
R21 * l_F_867; memset(&l_F_867, 0, sizeof l_F_867);
l_F_867 = p_FORMALS;
for (;;) {
if ((l_F_867 == NULL)) goto L_end868;
{
if ((!(((*(R21 *)rt_nil_check(l_F_867))).f_B == NULL)))
{
{
R22 * l_FT_869; memset(&l_FT_869, 0, sizeof l_FT_869);
l_FT_869 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_867))).f_B);
R21 * l_N_870; memset(&l_N_870, 0, sizeof l_N_870);
l_N_870 = ((*(R21 *)rt_nil_check(l_F_867))).f_A;
rt_int l_KIND_871; memset(&l_KIND_871, 0, sizeof l_KIND_871);
l_KIND_871 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_867))).f_IV == ((rt_int)1LL)))
{
l_KIND_871 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_869))) || (!(((*(R22 *)rt_nil_check(l_FT_869))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_867))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_870 == NULL)) goto L_end872;
{
r_ADD_FIELD(l_T_865, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_870))).f_NAME, l_FT_869, l_KIND_871), &l_TAIL_866);
l_N_870 = ((*(R21 *)rt_nil_check(l_N_870))).f_NEXT;
}
RT_B_TICK();
} L_end872: ;
}
}
l_F_867 = ((*(R21 *)rt_nil_check(l_F_867))).f_NEXT;
}
RT_B_TICK();
} L_end868: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_865, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_866);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_COMPLETE_RECORD(l_T_865);
{ R22 * rv873 = l_T_865;
return rv873; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_874; memset(&l_D_874, 0, sizeof l_D_874);
l_D_874 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_875; memset(&l_CLASS_875, 0, sizeof l_CLASS_875);
l_CLASS_875 = NULL;
R20 * l_TARGS_876; memset(&l_TARGS_876, 0, sizeof l_TARGS_876);
l_TARGS_876 = NULL;
R25 * l_VARGS_877; memset(&l_VARGS_877, 0, sizeof l_VARGS_877);
l_VARGS_877 = NULL;
R25 * l_VTAIL_878; memset(&l_VTAIL_878, 0, sizeof l_VTAIL_878);
l_VTAIL_878 = NULL;
R21 * l_A_879; memset(&l_A_879, 0, sizeof l_A_879);
l_A_879 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_880; memset(&l_F_880, 0, sizeof l_F_880);
l_F_880 = ((*(R21 *)rt_nil_check(l_D_874))).f_A;
for (;;) {
if ((l_F_880 == NULL)) goto L_end881;
{
{
R21 * l_N_882; memset(&l_N_882, 0, sizeof l_N_882);
l_N_882 = ((*(R21 *)rt_nil_check(l_F_880))).f_A;
for (;;) {
if ((l_N_882 == NULL)) goto L_end883;
{
if ((l_A_879 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_880))).f_B == NULL))
{
{
R20 * l_B_884; memset(&l_B_884, 0, sizeof l_B_884);
l_B_884 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_884)), ({ R20 rc885; memset(&rc885, 0, sizeof rc885);  S_R10(&rc885.f_NAME, ((*(R21 *)rt_nil_check(l_N_882))).f_NAME, 0); rc885.f_T = r_ARG_TYPE(l_A_879); S_R10(&rc885.f_C, r_NO_TEXT(), 0); rc885.f_HASMV = 0; rc885.f_MV = ((rt_int)0LL); rc885.f_R = NULL; rc885.f_NEXT = l_TARGS_876; rc885; }), 0);
l_TARGS_876 = l_B_884;
}
}
else
{
{
R25 * l_V_886; memset(&l_V_886, 0, sizeof l_V_886);
l_V_886 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_886)), ({ R25 rc887; memset(&rc887, 0, sizeof rc887);  S_R10(&rc887.f_LO, r_NO_TEXT(), 0); S_R10(&rc887.f_HI, r_NO_TEXT(), 0); S_R23(&rc887.f_MLO, r_NO_MVAL(), 0); S_R23(&rc887.f_MHI, r_NO_MVAL(), 0); rc887.f_ANYARG = 0; rc887.f_NEXT = NULL; rc887; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_879))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_880))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_879))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_886))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_879))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_886))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_886))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_879))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_886))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_886))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_879))).f_NAME, (((*(R21 *)rt_nil_check(l_A_879))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_888; memset(&l_FT_888, 0, sizeof l_FT_888);
l_FT_888 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_880))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_886))).f_LO, r_CONVERT(r_EXPR(l_A_879, l_FT_888), l_FT_888, ((*(R21 *)rt_nil_check(l_A_879))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_886))).f_MLO, r_ENUM_MANIFEST(l_A_879, l_FT_888), 0);
if ((((((*(R25 *)rt_nil_check(l_V_886))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_888))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_888))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_886))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_888))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_886))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_888))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_879))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_880))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_886))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_879))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_878 == NULL))
{
l_VARGS_877 = l_V_886;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_878))).f_NEXT = l_V_886;
}
l_VTAIL_878 = l_V_886;
}
}
l_A_879 = ((*(R21 *)rt_nil_check(l_A_879))).f_NEXT;
l_N_882 = ((*(R21 *)rt_nil_check(l_N_882))).f_NEXT;
}
RT_B_TICK();
} L_end883: ;
}
l_F_880 = ((*(R21 *)rt_nil_check(l_F_880))).f_NEXT;
}
RT_B_TICK();
} L_end881: ;
if ((!(l_A_879 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_889; memset(&l_R_889, 0, sizeof l_R_889);
l_R_889 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_889 == NULL)) goto L_end890;
{
if (((((*(R12 *)rt_nil_check(l_R_889))).f_DECL == l_D_874) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_889))).f_BINDINGS, l_TARGS_876)))
{
l_CLASS_875 = ((*(R12 *)rt_nil_check(l_R_889))).f_T;
goto L_end890;
}
l_R_889 = ((*(R12 *)rt_nil_check(l_R_889))).f_INSTANCES;
}
RT_B_TICK();
} L_end890: ;
}
if ((l_CLASS_875 == NULL))
{
{
R12 * l_R_891; memset(&l_R_891, 0, sizeof l_R_891);
l_R_891 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_892; memset(&l_B_892, 0, sizeof l_B_892);
l_B_892 = l_TARGS_876;
R20 * l_SAVED_893; memset(&l_SAVED_893, 0, sizeof l_SAVED_893);
l_SAVED_893 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_894; memset(&l_ENTERED_894, 0, sizeof l_ENTERED_894);
((*(R12 *)rt_nil_check(l_R_891))).f_DECL = l_D_874;
((*(R12 *)rt_nil_check(l_R_891))).f_BINDINGS = l_TARGS_876;
((*(R12 *)rt_nil_check(l_R_891))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_891;
l_ENTERED_894 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_892 == NULL)) goto L_end895;
{
{
R12 * l_TY_896; memset(&l_TY_896, 0, sizeof l_TY_896);
l_TY_896 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_892))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_896))).f_T = ((*(R20 *)rt_nil_check(l_B_892))).f_T;
r_DEFINE(l_TY_896, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_892 = ((*(R20 *)rt_nil_check(l_B_892))).f_NEXT;
}
RT_B_TICK();
} L_end895: ;
l_F_880 = ((*(R21 *)rt_nil_check(l_D_874))).f_A;
for (;;) {
if ((l_F_880 == NULL)) goto L_end897;
{
if ((!(((*(R21 *)rt_nil_check(l_F_880))).f_B == NULL)))
{
{
R21 * l_N_898; memset(&l_N_898, 0, sizeof l_N_898);
l_N_898 = ((*(R21 *)rt_nil_check(l_F_880))).f_A;
for (;;) {
if ((l_N_898 == NULL)) goto L_end899;
{
{
R12 * l_P_900; memset(&l_P_900, 0, sizeof l_P_900);
l_P_900 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_898))).f_NAME);
((*(R12 *)rt_nil_check(l_P_900))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_880))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_900))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_898))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_900))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_900))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_900, ((*(R21 *)rt_nil_check(l_F_880))).f_LINE);
}
l_N_898 = ((*(R21 *)rt_nil_check(l_N_898))).f_NEXT;
}
RT_B_TICK();
} L_end899: ;
}
}
l_F_880 = ((*(R21 *)rt_nil_check(l_F_880))).f_NEXT;
}
RT_B_TICK();
} L_end897: ;
if ((l_TARGS_876 == NULL))
{
l_CLASS_875 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_874))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_874))).f_A);
}
else
{
l_CLASS_875 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_874))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_874))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_875))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_891))).f_T = l_CLASS_875;
r_CLOSE_SCOPE();
if (l_ENTERED_894)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_893;
}
}
{
R22 * l_T_901; memset(&l_T_901, 0, sizeof l_T_901);
l_T_901 = r_COPY_TYP(l_CLASS_875);
((*(R22 *)rt_nil_check(l_T_901))).f_ARGS = l_VARGS_877;
{ R22 * rv902 = l_T_901;
return rv902; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_903; memset(&l_P_903, 0, sizeof l_P_903);
l_P_903 = p_A;
R20 * l_Q_904; memset(&l_Q_904, 0, sizeof l_Q_904);
l_Q_904 = p_B;
for (;;) {
if (((l_P_903 == NULL) || (l_Q_904 == NULL))) goto L_end905;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_903))).f_T, ((*(R20 *)rt_nil_check(l_Q_904))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_903))).f_T, ((*(R20 *)rt_nil_check(l_Q_904))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_903))).f_T, ((*(R20 *)rt_nil_check(l_Q_904))).f_T))))
{
{ rt_int rv906 = 0;
return rv906; }
}
l_P_903 = ((*(R20 *)rt_nil_check(l_P_903))).f_NEXT;
l_Q_904 = ((*(R20 *)rt_nil_check(l_Q_904))).f_NEXT;
}
RT_B_TICK();
} L_end905: ;
{ rt_int rv907 = ((l_P_903 == NULL) && (l_Q_904 == NULL));
return rv907; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_908; memset(&l_A_908, 0, sizeof l_A_908);
l_A_908 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_908 == NULL)) goto L_end909;
{
if (((*(R25 *)rt_nil_check(l_A_908))).f_ANYARG)
{
{ rt_int rv910 = 1;
return rv910; }
}
l_A_908 = ((*(R25 *)rt_nil_check(l_A_908))).f_NEXT;
}
RT_B_TICK();
} L_end909: ;
{ rt_int rv911 = 0;
return rv911; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_912; memset(&l_L_912, 0, sizeof l_L_912);
l_L_912 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_913; memset(&l_C_913, 0, sizeof l_C_913);
S_R10(&l_C_913, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_914; memset(&l_TF_914, 0, sizeof l_TF_914);
l_TF_914 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_912 == NULL)) goto L_end915;
{
if ((((*(R21 *)rt_nil_check(l_L_912))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_913, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_913, p_SELF, ((*(R24 *)rt_nil_check(l_TF_914))).f_CNAME), 0);
S_R10(&l_C_913, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_913, (r_EXPR(((*(R21 *)rt_nil_check(l_L_912))).f_A, ((*(R24 *)rt_nil_check(l_TF_914))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_914))).f_CNAME), 0);
S_R10(&l_C_913, r_FMT2(rt_str("@@)", 3), l_C_913, (r_EXPR(((*(R21 *)rt_nil_check(l_L_912))).f_B, ((*(R24 *)rt_nil_check(l_TF_914))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_913, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_913, p_SELF, ((*(R24 *)rt_nil_check(l_TF_914))).f_CNAME, (r_EXPR(l_L_912, ((*(R24 *)rt_nil_check(l_TF_914))).f_T)).f_C), 0);
}
l_L_912 = ((*(R21 *)rt_nil_check(l_L_912))).f_NEXT;
}
RT_B_TICK();
} L_end915: ;
{ R10 rv916 = r_FMT1(rt_str("(@)", 3), l_C_913);
return rv916; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_917; memset(&l_C_917, 0, sizeof l_C_917);
S_R10(&l_C_917, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_918; memset(&l_F_918, 0, sizeof l_F_918);
l_F_918 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_919; memset(&l_BODY_919, 0, sizeof l_BODY_919);
S_R10(&l_BODY_919, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_920; memset(&l_ASSIGN_920, 0, sizeof l_ASSIGN_920);
S_R10(&l_ASSIGN_920, r_MK(rt_str("", 0)), 0);
R10 l_COPY_921; memset(&l_COPY_921, 0, sizeof l_COPY_921);
S_R10(&l_COPY_921, r_MK(rt_str("", 0)), 0);
R10 l_EQ_922; memset(&l_EQ_922, 0, sizeof l_EQ_922);
S_R10(&l_EQ_922, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_918 == NULL)) goto L_end923;
{
S_R10(&l_BODY_919, r_FMT3(rt_str("@ @ @;", 6), l_BODY_919, r_CTYPE(((*(R24 *)rt_nil_check(l_F_918))).f_T), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME), 0);
S_R10(&l_COPY_921, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_921, ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_918))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_918))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_920, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_920, ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_918))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_920, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_920, ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_920, r_FMT2(rt_str("@ @", 3), l_ASSIGN_920, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_918))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_918))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_922, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_922, r_VARIANT_COND(l_F_918, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_918))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_922, r_FMT2(rt_str("@ && @", 6), l_EQ_922, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_918))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_918))).f_CNAME))), 0);
}
l_F_918 = ((*(R24 *)rt_nil_check(l_F_918))).f_NEXT;
}
RT_B_TICK();
} L_end923: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_917, l_BODY_919));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_917, l_C_917, l_C_917));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_917, l_C_917, l_C_917));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_917, l_C_917, l_C_917, l_ASSIGN_920));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_917, l_C_917, l_C_917, l_EQ_922));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_917, l_C_917, l_C_917));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_917, l_C_917, l_C_917, l_C_917));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_921));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_924; memset(&l_ET_C_924, 0, sizeof l_ET_C_924);
S_R10(&l_ET_C_924, r_CTYPE(p_ELEM), 0);
R10 l_KEY_925; memset(&l_KEY_925, 0, sizeof l_KEY_925);
S_R10(&l_KEY_925, r_FMT3(rt_str("@/@/@", 5), l_ET_C_924, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_926; memset(&l_Y_926, 0, sizeof l_Y_926);
l_Y_926 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_926 == NULL)) goto L_end927;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_926))).f_NAME, l_KEY_925) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_926))).f_T, p_ELEM)))
{
{ R10 rv928 = ((*(R12 *)rt_nil_check(l_Y_926))).f_ACCESS;
return rv928; }
}
l_Y_926 = ((*(R12 *)rt_nil_check(l_Y_926))).f_INSTANCES;
}
RT_B_TICK();
} L_end927: ;
l_Y_926 = r_NEW_SYM(g_Y_TYPE, l_KEY_925);
((*(R12 *)rt_nil_check(l_Y_926))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_926))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_926))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_926;
{
R10 l_C_929; memset(&l_C_929, 0, sizeof l_C_929);
S_R10(&l_C_929, ((*(R12 *)rt_nil_check(l_Y_926))).f_ACCESS, 0);
R10 l_D_930; memset(&l_D_930, 0, sizeof l_D_930);
S_R10(&l_D_930, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_929, l_C_929));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_929, l_D_930, l_D_930, l_ET_C_924));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_929, l_C_929, l_C_929));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_929, l_C_929, l_C_929));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_929, l_C_929, l_C_929, l_D_930));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_930, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_929, l_C_929, l_C_929, l_D_930));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_930, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_929, l_C_929, l_C_929));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_929, l_C_929, l_C_929, l_C_929));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_930, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv931 = ((*(R12 *)rt_nil_check(l_Y_926))).f_ACCESS;
return rv931; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_932; memset(&l_K_932, 0, sizeof l_K_932);
l_K_932 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_932 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv933 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv933; }
}
{ R10 rv934 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv934; }
}
else if ((l_K_932 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv935 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv935; }
}
{ R10 rv936 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv936; }
}
else if ((l_K_932 == g_T_SEM))
{
{ R10 rv937 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv937; }
}
else if ((l_K_932 == g_T_ABS))
{
{ R10 rv938 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv938; }
}
else if ((l_K_932 == g_T_ARR))
{
{
R25 * l_B_939; memset(&l_B_939, 0, sizeof l_B_939);
l_B_939 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_940; memset(&l_I_940, 0, sizeof l_I_940);
l_I_940 = ((rt_int)0LL);
R10 l_R_941; memset(&l_R_941, 0, sizeof l_R_941);
S_R10(&l_R_941, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_939 == NULL)) goto L_end942;
{
S_R10(&l_R_941, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_941, p_LV, r_NUM(l_I_940), ((*(R25 *)rt_nil_check(l_B_939))).f_LO), 0);
S_R10(&l_R_941, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_941, p_LV, r_NUM(l_I_940), ((*(R25 *)rt_nil_check(l_B_939))).f_HI), 0);
l_I_940 = rt_add(l_I_940, ((rt_int)1LL));
l_B_939 = ((*(R25 *)rt_nil_check(l_B_939))).f_NEXT;
}
RT_B_TICK();
} L_end942: ;
S_R10(&l_R_941, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_941, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_941, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_941, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_943; memset(&l_IV_943, 0, sizeof l_IV_943);
S_R10(&l_IV_943, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_941, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_941, l_IV_943, l_IV_943, l_IV_943), 0);
S_R10(&l_R_941, r_FMT2(rt_str("@ @ }", 5), l_R_941, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_943))), 0);
}
}
{ R10 rv944 = r_CATS(l_R_941, rt_str(" }", 2));
return rv944; }
}
}
else if ((l_K_932 == g_T_REC))
{
{
R24 * l_F_945; memset(&l_F_945, 0, sizeof l_F_945);
l_F_945 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_946; memset(&l_A_946, 0, sizeof l_A_946);
l_A_946 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_947; memset(&l_R_947, 0, sizeof l_R_947);
S_R10(&l_R_947, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_945 == NULL)) goto L_end948;
{
if ((!(((*(R24 *)rt_nil_check(l_F_945))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_946 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_946))).f_ANYARG))
{
S_R10(&l_R_947, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_947, p_LV, ((*(R24 *)rt_nil_check(l_F_945))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_946))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_945))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_946))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_947, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_947, p_LV, ((*(R24 *)rt_nil_check(l_F_945))).f_CNAME), 0);
}
l_A_946 = ((*(R25 *)rt_nil_check(l_A_946))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_945))).f_T))
{
S_R10(&l_R_947, r_FMT2(rt_str("@ @", 3), l_R_947, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_945))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_945))).f_CNAME)), p_LV)), 0);
}
l_F_945 = ((*(R24 *)rt_nil_check(l_F_945))).f_NEXT;
}
RT_B_TICK();
} L_end948: ;
{ R10 rv949 = l_R_947;
return rv949; }
}
}
{ R10 rv950 = r_NO_TEXT();
return rv950; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_951; memset(&l_K_951, 0, sizeof l_K_951);
l_K_951 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_951 == g_T_STR) || (l_K_951 == g_T_BITS)) || (l_K_951 == g_T_ARR)) || (l_K_951 == g_T_SEM)))
{
{ rt_int rv952 = 1;
return rv952; }
}
else if ((l_K_951 == g_T_ABS))
{
{ rt_int rv953 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv953; }
}
else if ((l_K_951 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv954 = 1;
return rv954; }
}
{
R24 * l_F_955; memset(&l_F_955, 0, sizeof l_F_955);
l_F_955 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_955 == NULL)) goto L_end956;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_955))).f_T))
{
{ rt_int rv957 = 1;
return rv957; }
}
l_F_955 = ((*(R24 *)rt_nil_check(l_F_955))).f_NEXT;
}
RT_B_TICK();
} L_end956: ;
}
}
{ rt_int rv958 = 0;
return rv958; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_959; memset(&l_K_959, 0, sizeof l_K_959);
l_K_959 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_959 == g_T_STR) || (l_K_959 == g_T_BITS)))
{
{ R10 rv960 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv960; }
}
else if ((l_K_959 == g_T_ABS))
{
{ R10 rv961 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv961; }
}
else if (((l_K_959 == g_T_ARR) || (l_K_959 == g_T_REC)))
{
{ R10 rv962 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv962; }
}
{ R10 rv963 = p_V;
return rv963; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_964; memset(&l_K_964, 0, sizeof l_K_964);
l_K_964 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_964 == g_T_STR) || (l_K_964 == g_T_BITS)))
{
{ R10 rv965 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv965; }
}
else if ((l_K_964 == g_T_ABS))
{
{ R10 rv966 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv966; }
}
else if ((l_K_964 == g_T_SEM))
{
{ R10 rv967 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv967; }
}
else if ((l_K_964 == g_T_ARR))
{
{ R10 rv968 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv968; }
}
else if ((l_K_964 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv969 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv969; }
}
{ R10 rv970 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv970; }
}
{ R10 rv971 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv971; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_972; memset(&l_K_972, 0, sizeof l_K_972);
l_K_972 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_972 == g_T_STR) || (l_K_972 == g_T_BITS)))
{
{ R10 rv973 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv973; }
}
else if ((l_K_972 == g_T_ABS))
{
{ R10 rv974 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv974; }
}
else if (((l_K_972 == g_T_ARR) || (l_K_972 == g_T_REC)))
{
{ R10 rv975 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv975; }
}
else if ((l_K_972 == g_T_SEM))
{
{ R10 rv976 = r_MK(rt_str("0", 1));
return rv976; }
}
{ R10 rv977 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv977; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv978 = p_V;
return rv978; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv979 = p_V;
return rv979; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv980 = p_V;
return rv980; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv981 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv981; }
}
{ R10 rv982 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv982; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv983 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv983; }
}
{ R10 rv984 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv984; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv985 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv985; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv986 = 1;
return rv986; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv987 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv987; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv988 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv988; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv989 = 0;
return rv989; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv990 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv990; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv991 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv991; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv992 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv992; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv993 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv993; }
}
{ rt_int rv994 = 1;
return rv994; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv995 = 1;
return rv995; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv996 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv996; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv997 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv997; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv998 = 0;
return rv998; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv999 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv999; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1000 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1000; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1001 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1001; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1002 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1002; }
}
{ rt_int rv1003 = 1;
return rv1003; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1004 = 0;
return rv1004; }
}
{ rt_int rv1005 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1005; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1006; memset(&l_P_1006, 0, sizeof l_P_1006);
l_P_1006 = p_A;
R25 * l_Q_1007; memset(&l_Q_1007, 0, sizeof l_Q_1007);
l_Q_1007 = p_B;
for (;;) {
if (((l_P_1006 == NULL) || (l_Q_1007 == NULL))) goto L_end1008;
{
if ((r_IS_GEN_ARG(l_P_1006) || r_IS_GEN_ARG(l_Q_1007)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1006))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1007))).f_ANYARG)))
{
{ rt_int rv1009 = 0;
return rv1009; }
}
if (((((*(R25 *)rt_nil_check(l_P_1006))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1007))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1006))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1007))).f_MLO).f_V)))
{
{ rt_int rv1010 = 0;
return rv1010; }
}
}
l_P_1006 = ((*(R25 *)rt_nil_check(l_P_1006))).f_NEXT;
l_Q_1007 = ((*(R25 *)rt_nil_check(l_Q_1007))).f_NEXT;
}
RT_B_TICK();
} L_end1008: ;
{ rt_int rv1011 = ((l_P_1006 == NULL) && (l_Q_1007 == NULL));
return rv1011; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_1012; memset(&l_CS_1012, 0, sizeof l_CS_1012);
l_CS_1012 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_1013; memset(&l_T_1013, 0, sizeof l_T_1013);
rt_int l_LEV_1014; memset(&l_LEV_1014, 0, sizeof l_LEV_1014);
if ((((*(R18 *)rt_nil_check(l_CS_1012))).f_LEVEL == p_LEVEL))
{
{ R10 rv1015 = r_MK(rt_str("F", 1));
return rv1015; }
}
if (((*(R18 *)rt_nil_check(l_CS_1012))).f_FRAMED)
{
S_R10(&l_T_1013, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_1013, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1014 = rt_sub(((*(R18 *)rt_nil_check(l_CS_1012))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1014 <= p_LEVEL)) goto L_end1016;
{
S_R10(&l_T_1013, r_CATS(l_T_1013, rt_str("->up", 4)), 0);
l_LEV_1014 = rt_sub(l_LEV_1014, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1016: ;
{ R10 rv1017 = l_T_1013;
return rv1017; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv1018 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1018; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1019 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1019; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv1020 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1020; }
}
{ R10 rv1021 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1021; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1022; memset(&l_CS_1022, 0, sizeof l_CS_1022);
l_CS_1022 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1023; memset(&l_T_1023, 0, sizeof l_T_1023);
l_T_1023 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1024; memset(&l_CN_1024, 0, sizeof l_CN_1024);
if ((((*(R18 *)rt_nil_check(l_CS_1022))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1024, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1024, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1023), l_CN_1024));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1024, 0);
{ R10 rv1025 = l_CN_1024;
return rv1025; }
}
S_R10(&l_CN_1024, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1024, 0);
if (((*(R18 *)rt_nil_check(l_CS_1022))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1023), l_CN_1024), &((*(R18 *)rt_nil_check(l_CS_1022))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1024), 0);
{ R10 rv1026 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1026; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1023), l_CN_1024, l_CN_1024, l_CN_1024));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1024, 0);
{ R10 rv1027 = l_CN_1024;
return rv1027; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1028; memset(&l_T_1028, 0, sizeof l_T_1028);
l_T_1028 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1029; memset(&l_N_1029, 0, sizeof l_N_1029);
l_N_1029 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1030; memset(&l_V_1030, 0, sizeof l_V_1030);
rt_int l_HAVE_V_1031; memset(&l_HAVE_V_1031, 0, sizeof l_HAVE_V_1031);
l_HAVE_V_1031 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1028))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1028))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1029 == NULL)) goto L_end1032;
{
{
R12 * l_Y_1033; memset(&l_Y_1033, 0, sizeof l_Y_1033);
l_Y_1033 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1029))).f_NAME);
R10 l_CN_1034; memset(&l_CN_1034, 0, sizeof l_CN_1034);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1033))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1033))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1028) && (((*(R22 *)rt_nil_check(l_T_1028))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1035; memset(&l_M_1035, 0, sizeof l_M_1035);
S_R23(&l_M_1035, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1033))).f_HASMV = (l_M_1035).f_OK;
((*(R12 *)rt_nil_check(l_Y_1033))).f_MV = (l_M_1035).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1033))).f_T = l_T_1028;
S_R10(&l_CN_1034, r_NEW_OBJECT(l_Y_1033, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1028))
{
r_CODE(r_INIT_CODE(l_T_1028, l_CN_1034));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1031))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1030, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1028), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1031 = 1;
}
r_CODE(r_STORE_CODE(l_T_1028, l_CN_1034, l_V_1030, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1033, ((*(R21 *)rt_nil_check(l_N_1029))).f_LINE);
}
l_N_1029 = ((*(R21 *)rt_nil_check(l_N_1029))).f_NEXT;
}
RT_B_TICK();
} L_end1032: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1036 = ({ R26 rc1037; memset(&rc1037, 0, sizeof rc1037);  S_R10(&rc1037.f_C, p_C, 0); rc1037.f_T = p_T; rc1037.f_LVAL = 0; S_R10(&rc1037.f_SELF, r_NO_TEXT(), 0); rc1037; });
return rv1036; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1038 = ({ R26 rc1039; memset(&rc1039, 0, sizeof rc1039);  S_R10(&rc1039.f_C, p_C, 0); rc1039.f_T = p_T; rc1039.f_LVAL = p_LVAL; S_R10(&rc1039.f_SELF, p_SELF, 0); rc1039; });
return rv1038; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1040; memset(&l_T_1040, 0, sizeof l_T_1040);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1041 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1041; }
}
l_T_1040 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1040))).f_SCALE = p_SCALE;
{ R22 * rv1042 = l_T_1040;
return rv1042; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1043; memset(&l_T_1043, 0, sizeof l_T_1043);
l_T_1043 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1043))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1043))).f_MLEN, p_M, 0);
{ R22 * rv1044 = l_T_1043;
return rv1044; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1045; memset(&l_S_1045, 0, sizeof l_S_1045);
l_S_1045 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1045, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1046; memset(&l_AT_1046, 0, sizeof l_AT_1046);
l_AT_1046 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1047; memset(&l_R_1047, 0, sizeof l_R_1047);
S_R10(&l_R_1047, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1049_lo = ((rt_int)0LL), it1049_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1049 = it1049_lo; it1049 <= it1049_hi; it1049++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1045, it1049, it1049), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1045, it1049, it1049), rt_str("\\", 1))))
{
S_R10(&l_R_1047, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1045, it1049, it1049))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1045, it1049, it1049), rt_str("\?", 1)))
{
S_R10(&l_R_1047, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1050; memset(&l_C_1050, 0, sizeof l_C_1050);
l_C_1050 = r_CODE_OF(rt_b_slice(l_S_1045, it1049, it1049));
if (({ rt_int iv1051 = l_C_1050; (((rt_int)32LL) <= iv1051) && (iv1051 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1047, r_MK(rt_b_slice(l_S_1045, it1049, it1049)), 0);
}
else
{
S_R10(&l_R_1047, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1050, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1050, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1050, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1049 == it1049_hi) break;
} } L_end1048: ;
S_R10(&l_R_1047, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1052 = ({ R10 rc1053; memset(&rc1053, 0, sizeof rc1053);  rc1053.f_AT = l_AT_1046; rc1053.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1046); rc1053.f_H = rt_neg(((rt_int)1LL)); rc1053; });
return rv1052; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1054; memset(&l_K_1054, 0, sizeof l_K_1054);
l_K_1054 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1055; memset(&l_NO_1055, 0, sizeof l_NO_1055);
S_R23(&l_NO_1055, ({ R23 rc1056; memset(&rc1056, 0, sizeof rc1056);  rc1056.f_OK = 0; rc1056.f_V = ((rt_int)0LL); rc1056; }), 0);
if ((l_K_1054 == g_N_INT))
{
{ R23 rv1057 = ({ R23 rc1058; memset(&rc1058, 0, sizeof rc1058);  rc1058.f_OK = 1; rc1058.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1058; });
return rv1057; }
}
else if ((l_K_1054 == g_N_PAREN))
{
{ R23 rv1059 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1059; }
}
else if ((l_K_1054 == g_N_BOOL))
{
{ R23 rv1060 = ({ R23 rc1061; memset(&rc1061, 0, sizeof rc1061);  rc1061.f_OK = 1; rc1061.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1061; });
return rv1060; }
}
else if ((l_K_1054 == g_N_UNOP))
{
{
R23 l_A_1062; memset(&l_A_1062, 0, sizeof l_A_1062);
S_R23(&l_A_1062, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1062).f_OK))
{
{ R23 rv1063 = l_NO_1055;
return rv1063; }
}
{ R23 rv1064 = ({ R23 rc1065; memset(&rc1065, 0, sizeof rc1065);  rc1065.f_OK = 1; rc1065.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1062).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1065; });
return rv1064; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1066 = l_A_1062;
return rv1066; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1067 = ({ R23 rc1068; memset(&rc1068, 0, sizeof rc1068);  rc1068.f_OK = (l_A_1062).f_OK; rc1068.f_V = rt_sub(((rt_int)1LL), (l_A_1062).f_V); rc1068; });
return rv1067; }
}
}
}
else if ((l_K_1054 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1069 = l_NO_1055;
return rv1069; }
}
{
R23 l_A_1070; memset(&l_A_1070, 0, sizeof l_A_1070);
S_R23(&l_A_1070, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1071; memset(&l_B_1071, 0, sizeof l_B_1071);
S_R23(&l_B_1071, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1072; memset(&l_OP_1072, 0, sizeof l_OP_1072);
S_R10(&l_OP_1072, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1072, rt_str("&", 1)))
{
if (((((l_A_1070).f_OK && ((l_A_1070).f_V == ((rt_int)0LL)))) || (((l_B_1071).f_OK && ((l_B_1071).f_V == ((rt_int)0LL))))))
{
{ R23 rv1073 = ({ R23 rc1074; memset(&rc1074, 0, sizeof rc1074);  rc1074.f_OK = 1; rc1074.f_V = ((rt_int)0LL); rc1074; });
return rv1073; }
}
if (((l_A_1070).f_OK && (l_B_1071).f_OK))
{
{ R23 rv1075 = ({ R23 rc1076; memset(&rc1076, 0, sizeof rc1076);  rc1076.f_OK = 1; rc1076.f_V = ((rt_int)1LL); rc1076; });
return rv1075; }
}
{ R23 rv1077 = l_NO_1055;
return rv1077; }
}
else if (r_TEQS(l_OP_1072, rt_str("!", 1)))
{
if (((((l_A_1070).f_OK && ((l_A_1070).f_V == ((rt_int)1LL)))) || (((l_B_1071).f_OK && ((l_B_1071).f_V == ((rt_int)1LL))))))
{
{ R23 rv1078 = ({ R23 rc1079; memset(&rc1079, 0, sizeof rc1079);  rc1079.f_OK = 1; rc1079.f_V = ((rt_int)1LL); rc1079; });
return rv1078; }
}
if (((l_A_1070).f_OK && (l_B_1071).f_OK))
{
{ R23 rv1080 = ({ R23 rc1081; memset(&rc1081, 0, sizeof rc1081);  rc1081.f_OK = 1; rc1081.f_V = ((rt_int)0LL); rc1081; });
return rv1080; }
}
{ R23 rv1082 = l_NO_1055;
return rv1082; }
}
if ((!(((l_A_1070).f_OK && (l_B_1071).f_OK))))
{
{ R23 rv1083 = l_NO_1055;
return rv1083; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1084 = l_NO_1055;
return rv1084; }
}
if (((r_TEQS(l_OP_1072, rt_str("+", 1)) || r_TEQS(l_OP_1072, rt_str("-", 1))) || r_TEQS(l_OP_1072, rt_str("*", 1))))
{
{ R23 rv1085 = ({ R23 rc1086; memset(&rc1086, 0, sizeof rc1086);  rc1086.f_OK = 1; rc1086.f_V = r_MANIFEST_ARITH(l_OP_1072, (l_A_1070).f_V, (l_B_1071).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1086; });
return rv1085; }
}
else if ((r_TEQS(l_OP_1072, rt_str("//", 2)) && (!((l_B_1071).f_V == ((rt_int)0LL)))))
{
{ R23 rv1087 = ({ R23 rc1088; memset(&rc1088, 0, sizeof rc1088);  rc1088.f_OK = 1; rc1088.f_V = rt_quot((l_A_1070).f_V, (l_B_1071).f_V); rc1088; });
return rv1087; }
}
else if ((r_TEQS(l_OP_1072, rt_str("MOD", 3)) && (!((l_B_1071).f_V == ((rt_int)0LL)))))
{
{ R23 rv1089 = ({ R23 rc1090; memset(&rc1090, 0, sizeof rc1090);  rc1090.f_OK = 1; rc1090.f_V = rt_rem((l_A_1070).f_V, (l_B_1071).f_V); rc1090; });
return rv1089; }
}
else if (r_TEQS(l_OP_1072, rt_str("=", 1)))
{
{ R23 rv1091 = ({ R23 rc1092; memset(&rc1092, 0, sizeof rc1092);  rc1092.f_OK = 1; rc1092.f_V = r_BOOL_INT(((l_A_1070).f_V == (l_B_1071).f_V)); rc1092; });
return rv1091; }
}
else if (r_TEQS(l_OP_1072, rt_str("<>", 2)))
{
{ R23 rv1093 = ({ R23 rc1094; memset(&rc1094, 0, sizeof rc1094);  rc1094.f_OK = 1; rc1094.f_V = r_BOOL_INT((!((l_A_1070).f_V == (l_B_1071).f_V))); rc1094; });
return rv1093; }
}
else if (r_TEQS(l_OP_1072, rt_str("<", 1)))
{
{ R23 rv1095 = ({ R23 rc1096; memset(&rc1096, 0, sizeof rc1096);  rc1096.f_OK = 1; rc1096.f_V = r_BOOL_INT(((l_A_1070).f_V < (l_B_1071).f_V)); rc1096; });
return rv1095; }
}
else if (r_TEQS(l_OP_1072, rt_str(">", 1)))
{
{ R23 rv1097 = ({ R23 rc1098; memset(&rc1098, 0, sizeof rc1098);  rc1098.f_OK = 1; rc1098.f_V = r_BOOL_INT(((l_A_1070).f_V > (l_B_1071).f_V)); rc1098; });
return rv1097; }
}
else if (r_TEQS(l_OP_1072, rt_str("<=", 2)))
{
{ R23 rv1099 = ({ R23 rc1100; memset(&rc1100, 0, sizeof rc1100);  rc1100.f_OK = 1; rc1100.f_V = r_BOOL_INT(((l_A_1070).f_V <= (l_B_1071).f_V)); rc1100; });
return rv1099; }
}
else if (r_TEQS(l_OP_1072, rt_str(">=", 2)))
{
{ R23 rv1101 = ({ R23 rc1102; memset(&rc1102, 0, sizeof rc1102);  rc1102.f_OK = 1; rc1102.f_V = r_BOOL_INT(((l_A_1070).f_V >= (l_B_1071).f_V)); rc1102; });
return rv1101; }
}
}
}
else if ((l_K_1054 == g_N_IN))
{
{
R23 l_A_1103; memset(&l_A_1103, 0, sizeof l_A_1103);
S_R23(&l_A_1103, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1104; memset(&l_L_1104, 0, sizeof l_L_1104);
S_R23(&l_L_1104, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1105; memset(&l_U_1105, 0, sizeof l_U_1105);
S_R23(&l_U_1105, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1106; memset(&l_LO_1106, 0, sizeof l_LO_1106);
rt_int l_HI_1107; memset(&l_HI_1107, 0, sizeof l_HI_1107);
if ((!(((((l_A_1103).f_OK && (l_L_1104).f_OK) && (l_U_1105).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1108 = l_NO_1055;
return rv1108; }
}
l_LO_1106 = (l_L_1104).f_V;
l_HI_1107 = (l_U_1105).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1106 = rt_add(l_LO_1106, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1107 = rt_sub(l_HI_1107, ((rt_int)1LL));
}
{ R23 rv1109 = ({ R23 rc1110; memset(&rc1110, 0, sizeof rc1110);  rc1110.f_OK = 1; rc1110.f_V = r_BOOL_INT((((l_A_1103).f_V >= l_LO_1106) && ((l_A_1103).f_V <= l_HI_1107))); rc1110; });
return rv1109; }
}
}
else if (((l_K_1054 == g_N_NAME) || (l_K_1054 == g_TS_GEN)))
{
{
R12 * l_Y_1111; memset(&l_Y_1111, 0, sizeof l_Y_1111);
l_Y_1111 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1112; memset(&l_B_1112, 0, sizeof l_B_1112);
l_B_1112 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1112 == NULL)) goto L_end1113;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1112))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1112))).f_HASMV))
{
{ R23 rv1114 = ({ R23 rc1115; memset(&rc1115, 0, sizeof rc1115);  rc1115.f_OK = 1; rc1115.f_V = ((*(R20 *)rt_nil_check(l_B_1112))).f_MV; rc1115; });
return rv1114; }
}
l_B_1112 = ((*(R20 *)rt_nil_check(l_B_1112))).f_NEXT;
}
RT_B_TICK();
} L_end1113: ;
if ((!(l_Y_1111 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1111))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1111))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1111))).f_HASMV))
{
{ R23 rv1116 = ({ R23 rc1117; memset(&rc1117, 0, sizeof rc1117);  rc1117.f_OK = 1; rc1117.f_V = ((*(R12 *)rt_nil_check(l_Y_1111))).f_MV; rc1117; });
return rv1116; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1111))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1118 = ({ R23 rc1119; memset(&rc1119, 0, sizeof rc1119);  rc1119.f_OK = 1; rc1119.f_V = ((*(R12 *)rt_nil_check(l_Y_1111))).f_MV; rc1119; });
return rv1118; }
}
}
}
}
}
else if ((l_K_1054 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1120 = ({ R23 rc1121; memset(&rc1121, 0, sizeof rc1121);  rc1121.f_OK = 1; rc1121.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1121; });
return rv1120; }
}
}
else if ((l_K_1054 == g_N_FIELD))
{
{ R23 rv1122 = r_ATTR_MANIFEST(p_E);
return rv1122; }
}
else if ((l_K_1054 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1123 = ({ R23 rc1124; memset(&rc1124, 0, sizeof rc1124);  rc1124.f_OK = 1; rc1124.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1124; });
return rv1123; }
}
}
{ R23 rv1125 = l_NO_1055;
return rv1125; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1126; memset(&l_A_1126, 0, sizeof l_A_1126);
l_A_1126 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1127; memset(&l_NAME_1127, 0, sizeof l_NAME_1127);
S_R10(&l_NAME_1127, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1128; memset(&l_T_1128, 0, sizeof l_T_1128);
l_T_1128 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1126))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1129; memset(&l_INNER_1129, 0, sizeof l_INNER_1129);
l_INNER_1129 = ((*(R21 *)rt_nil_check(l_A_1126))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1129))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1127, rt_str("MAX", 3)))
{
{ R23 rv1130 = r_SOME(r_MAX_LENGTH());
return rv1130; }
}
else if (r_TEQS(l_NAME_1127, rt_str("MIN", 3)))
{
{ R23 rv1131 = r_SOME(((rt_int)0LL));
return rv1131; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1129))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1129))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1127, rt_str("MAX", 3)))
{
{ R23 rv1132 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1132; }
}
else if (r_TEQS(l_NAME_1127, rt_str("MIN", 3)))
{
{ R23 rv1133 = r_SOME(((rt_int)1LL));
return rv1133; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1129))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1127, rt_str("MAX", 3)))
{
{ R23 rv1134 = r_SOME(((rt_int)1000LL));
return rv1134; }
}
else if (r_TEQS(l_NAME_1127, rt_str("MIN", 3)))
{
{ R23 rv1135 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1135; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1129))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1127, rt_str("MAX", 3)))
{
{ R23 rv1136 = r_SOME(((rt_int)1000LL));
return rv1136; }
}
else if (r_TEQS(l_NAME_1127, rt_str("MIN", 3)))
{
{ R23 rv1137 = r_SOME(((rt_int)2LL));
return rv1137; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1138; memset(&l_Y_1138, 0, sizeof l_Y_1138);
l_Y_1138 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1126))).f_NAME);
if ((l_Y_1138 == NULL))
{
{ R23 rv1139 = r_NO_MVAL();
return rv1139; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1138))).f_KIND == g_Y_TYPE))
{
l_T_1128 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1126))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1126))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1138))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1138))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1138))).f_KIND == g_Y_GEN)))
{
l_T_1128 = ((*(R12 *)rt_nil_check(l_Y_1138))).f_T;
}
else
{
{ R23 rv1140 = r_NO_MVAL();
return rv1140; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1127, rt_str("MIN", 3)) || r_TEQS(l_NAME_1127, rt_str("MAX", 3))))
{
{ R23 rv1141 = r_SOME(((*(R21 *)rt_nil_check(l_A_1126))).f_IV);
return rv1141; }
}
l_T_1128 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1126))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1126))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1127, rt_str("MIN", 3)) || r_TEQS(l_NAME_1127, rt_str("MAX", 3))))))
{
{ R23 rv1142 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1126))).f_A))).f_IV);
return rv1142; }
}
}
{
R14 l_SAVED_CODE_1143; memset(&l_SAVED_CODE_1143, 0, sizeof l_SAVED_CODE_1143);
S_R14(&l_SAVED_CODE_1143, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1144; memset(&rc1144, 0, sizeof rc1144);  rc1144.f_HEAD = NULL; rc1144.f_TAIL = NULL; rc1144; }), 0);
l_T_1128 = (r_EXPR(l_A_1126, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1143, 0);
}
}
else
{
{ R23 rv1145 = r_NO_MVAL();
return rv1145; }
}
if ((l_T_1128 == NULL))
{
{ R23 rv1146 = r_NO_MVAL();
return rv1146; }
}
{ R23 rv1147 = r_TYPE_ATTR_MANIFEST(l_T_1128, l_NAME_1127);
return rv1147; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1148; memset(&l_T_1148, 0, sizeof l_T_1148);
l_T_1148 = r_REAL_TYPE(p_T0);
rt_int l_K_1149; memset(&l_K_1149, 0, sizeof l_K_1149);
l_K_1149 = ((*(R22 *)rt_nil_check(l_T_1148))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1150 = r_STATIC_SIZE(p_T0);
return rv1150; }
}
if ((l_K_1149 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1151 = r_SOME(((*(R22 *)rt_nil_check(l_T_1148))).f_SCALE);
return rv1151; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1152 = r_SOME(((rt_int)2LL));
return rv1152; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1148))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1153 = ((*(R22 *)rt_nil_check(l_T_1148))).f_MLO;
return rv1153; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1148))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1154 = ((*(R22 *)rt_nil_check(l_T_1148))).f_MHI;
return rv1154; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1148))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1155 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1155; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1148))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1156 = r_SOME(INT64_MAX);
return rv1156; }
}
}
else if ((l_K_1149 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1157 = r_SOME(((*(R22 *)rt_nil_check(l_T_1148))).f_SCALE);
return rv1157; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1158 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1148))).f_SCALE));
return rv1158; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1159 = r_SOME(((rt_int)2LL));
return rv1159; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1160 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1148))).f_SCALE, p_NAME));
return rv1160; }
}
}
else if ((l_K_1149 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1148))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1161 = ((*(R22 *)rt_nil_check(l_T_1148))).f_MLO;
return rv1161; }
}
{ R23 rv1162 = r_SOME(((rt_int)0LL));
return rv1162; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1148))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1163 = ((*(R22 *)rt_nil_check(l_T_1148))).f_MHI;
return rv1163; }
}
{ R23 rv1164 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1148))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1164; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1148))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1165 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1148))).f_BASE))).f_NLITS);
return rv1165; }
}
if (((((*(R22 *)rt_nil_check(l_T_1148))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1148))).f_MHI).f_OK))
{
{ R23 rv1166 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1148))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1148))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1166; }
}
}
}
else if (((l_K_1149 == g_T_STR) || (l_K_1149 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1167 = ((*(R22 *)rt_nil_check(l_T_1148))).f_MLEN;
return rv1167; }
}
}
else if ((l_K_1149 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1168 = r_SOME(((*(R22 *)rt_nil_check(l_T_1148))).f_DIMS);
return rv1168; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1148))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1148))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1148))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1169 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1148))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1148))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1169; }
}
}
}
else if ((l_K_1149 == g_T_REC))
{
{
R24 * l_F_1170; memset(&l_F_1170, 0, sizeof l_F_1170);
l_F_1170 = ((*(R22 *)rt_nil_check(l_T_1148))).f_FIELDS;
R25 * l_B_1171; memset(&l_B_1171, 0, sizeof l_B_1171);
l_B_1171 = ((*(R22 *)rt_nil_check(l_T_1148))).f_ARGS;
for (;;) {
if (((l_F_1170 == NULL) || (l_B_1171 == NULL))) goto L_end1172;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1170))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1170))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1171))).f_ANYARG)
{
{ R23 rv1173 = r_NO_MVAL();
return rv1173; }
}
{ R23 rv1174 = ((*(R25 *)rt_nil_check(l_B_1171))).f_MLO;
return rv1174; }
}
l_B_1171 = ((*(R25 *)rt_nil_check(l_B_1171))).f_NEXT;
}
l_F_1170 = ((*(R24 *)rt_nil_check(l_F_1170))).f_NEXT;
}
RT_B_TICK();
} L_end1172: ;
}
}
{ R23 rv1175 = r_NO_MVAL();
return rv1175; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1176 = ((rt_int)0LL);
{ rt_frame xf1177; if (RT_TRY(xf1177)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1176 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1176 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1176 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1177); } else { RT_POP(xf1177); int xf1177x = rt_xcur;
if (0 || xf1177x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1177x); } }
{ rt_int rv1178 = F->l_R_1176;
return rv1178; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1179 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1179; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1180 = ((rt_int)1LL);
return rv1180; }
}
{ rt_int rv1181 = ((rt_int)0LL);
return rv1181; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1182; memset(&l_K_1182, 0, sizeof l_K_1182);
l_K_1182 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1182 == g_N_INT))
{
{ R26 rv1183 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1183; }
}
else if ((l_K_1182 == g_N_REAL))
{
{ R26 rv1184 = r_REAL_LITERAL(p_E);
return rv1184; }
}
else if ((l_K_1182 == g_N_BOOL))
{
{ R26 rv1185 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1185; }
}
else if ((l_K_1182 == g_N_NIL))
{
{ R26 rv1186 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1186; }
}
else if ((l_K_1182 == g_N_PAREN))
{
{
R26 l_V_1187; memset(&l_V_1187, 0, sizeof l_V_1187);
S_R26(&l_V_1187, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1187).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1187).f_C), 0);
{ R26 rv1188 = l_V_1187;
return rv1188; }
}
}
else if ((l_K_1182 == g_N_STR))
{
{ R26 rv1189 = r_STRING_LITERAL(p_E);
return rv1189; }
}
else if ((l_K_1182 == g_N_BITS))
{
{ R26 rv1190 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1190; }
}
else if ((l_K_1182 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1191 = r_NAME_EXPR(p_E, p_WANT);
return rv1191; }
}
{ R26 rv1192 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1192; }
}
else if ((l_K_1182 == g_N_RECCONS))
{
{ R26 rv1193 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1193; }
}
else if ((l_K_1182 == g_N_ARRCONS))
{
{ R26 rv1194 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1194; }
}
else if ((l_K_1182 == g_N_TYPESPEC))
{
{ R26 rv1195 = r_TYPE_SPECIFIER(p_E);
return rv1195; }
}
else if ((l_K_1182 == g_N_QUAL))
{
{
rt_int l_SAVED_1196; memset(&l_SAVED_1196, 0, sizeof l_SAVED_1196);
l_SAVED_1196 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1197; memset(&l_SAVED_Q_1197, 0, sizeof l_SAVED_Q_1197);
l_SAVED_Q_1197 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1198; memset(&l_V_1198, 0, sizeof l_V_1198);
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
R23 l_P_1199; memset(&l_P_1199, 0, sizeof l_P_1199);
S_R23(&l_P_1199, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1198, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1196;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1197;
{ R26 rv1200 = l_V_1198;
return rv1200; }
}
}
else if ((l_K_1182 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1201; memset(&l_N_1201, 0, sizeof l_N_1201);
l_N_1201 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1201))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1201))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1202 = r_EXPR(l_N_1201, p_WANT);
return rv1202; }
}
}
{ R26 rv1203 = r_NEW_EXPR(p_E, p_WANT);
return rv1203; }
}
else if ((l_K_1182 == g_N_NAME))
{
{ R26 rv1204 = r_NAME_EXPR(p_E, p_WANT);
return rv1204; }
}
else if ((l_K_1182 == g_N_APPLY))
{
{
R12 * l_Y_1205; memset(&l_Y_1205, 0, sizeof l_Y_1205);
l_Y_1205 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1205 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1205))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1205))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1206; memset(&l_N_1206, 0, sizeof l_N_1206);
l_N_1206 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1207; memset(&l_A_1207, 0, sizeof l_A_1207);
l_A_1207 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1207))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1206))).f_A = l_A_1207;
((*(R21 *)rt_nil_check(l_N_1206))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1208 = r_EXPR(l_N_1206, p_WANT);
return rv1208; }
}
}
}
{ R26 rv1209 = r_CALL_EXPR(p_E, p_WANT);
return rv1209; }
}
}
else if ((l_K_1182 == g_N_FIELD))
{
{ R26 rv1210 = r_FIELD_EXPR(p_E);
return rv1210; }
}
else if ((l_K_1182 == g_N_DEREF))
{
{
R26 l_B_1211; memset(&l_B_1211, 0, sizeof l_B_1211);
S_R26(&l_B_1211, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1211).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1212; memset(&l_TT_1212, 0, sizeof l_TT_1212);
l_TT_1212 = r_TARGET((l_B_1211).f_T);
{ R26 rv1213 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1212), (l_B_1211).f_C), l_TT_1212, 1, r_NO_TEXT());
return rv1213; }
}
}
}
else if ((l_K_1182 == g_N_INDEX))
{
{ R26 rv1214 = r_INDEX_EXPR(p_E);
return rv1214; }
}
else if ((l_K_1182 == g_N_SUBSTR))
{
{
R26 l_B_1215; memset(&l_B_1215, 0, sizeof l_B_1215);
S_R26(&l_B_1215, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1216; memset(&l_BT_1216, 0, sizeof l_BT_1216);
l_BT_1216 = r_REAL_TYPE((l_B_1215).f_T);
R10 l_LO_1217; memset(&l_LO_1217, 0, sizeof l_LO_1217);
R10 l_HI_1218; memset(&l_HI_1218, 0, sizeof l_HI_1218);
if (((((*(R22 *)rt_nil_check((l_B_1215).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1219; memset(&l_ARGS_1219, 0, sizeof l_ARGS_1219);
l_ARGS_1219 = r_VAL_ARG(l_B_1215, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1220; memset(&l_Y_1220, 0, sizeof l_Y_1220);
l_Y_1220 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1219, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1220 == NULL)))
{
{ R26 rv1221 = r_CALL_SYM(l_Y_1220, l_ARGS_1219, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1221; }
}
if ((((*(R22 *)rt_nil_check((l_B_1215).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1216))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1216))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1217, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1218, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1216))).f_KIND == g_T_BITS))
{
{ R26 rv1222 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1215).f_C, l_LO_1217, l_HI_1218), r_BITS_TYPE(((rt_int)1LL)));
return rv1222; }
}
{
R22 * l_T_1223; memset(&l_T_1223, 0, sizeof l_T_1223);
l_T_1223 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1223))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1216))).f_BASE;
{ R26 rv1224 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1215).f_C, l_LO_1217, l_HI_1218), l_T_1223);
return rv1224; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1216))).f_KIND == g_T_BITS))
{
{ R26 rv1225 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1215).f_C, l_LO_1217, l_HI_1218), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1225; }
}
{
R22 * l_T_1226; memset(&l_T_1226, 0, sizeof l_T_1226);
l_T_1226 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1226))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1216))).f_BASE;
{ R26 rv1227 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1215).f_C, l_LO_1217, l_HI_1218), l_T_1226);
return rv1227; }
}
}
}
else if ((l_K_1182 == g_N_UNOP))
{
{ R26 rv1228 = r_UNARY(p_E);
return rv1228; }
}
else if ((l_K_1182 == g_N_BINOP))
{
{ R26 rv1229 = r_BINARY(p_E);
return rv1229; }
}
else if ((l_K_1182 == g_N_IN))
{
{ R26 rv1230 = r_IN_EXPR(p_E);
return rv1230; }
}
else if (((l_K_1182 == g_N_ANY) || (l_K_1182 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1182 == g_TS_GEN))
{
{
R21 * l_N_1231; memset(&l_N_1231, 0, sizeof l_N_1231);
l_N_1231 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1231))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1231))).f_NAME))
{
{ R26 rv1232 = r_NAME_EXPR(l_N_1231, p_WANT);
return rv1232; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1182 == g_TS_NAME) || (l_K_1182 == g_TS_ARRAY)) || (l_K_1182 == g_TS_RECORD)) || (l_K_1182 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1233; memset(&l_SAVED_1233, 0, sizeof l_SAVED_1233);
l_SAVED_1233 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1234; memset(&l_SAVED_Q_1234, 0, sizeof l_SAVED_Q_1234);
l_SAVED_Q_1234 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1235; memset(&l_V_1235, 0, sizeof l_V_1235);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1235, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1233;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1234;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1235).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1236 = (l_V_1235).f_C;
return rv1236; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1235).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1235).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1235).f_T));
}
{ R10 rv1237 = (l_V_1235).f_C;
return rv1237; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1238; memset(&l_V_1238, 0, sizeof l_V_1238);
S_R26(&l_V_1238, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1238).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1238).f_T));
}
{ R10 rv1239 = (l_V_1238).f_C;
return rv1239; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1240; memset(&l_T_1240, 0, sizeof l_T_1240);
l_T_1240 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1240))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1240))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1241 = l_T_1240;
return rv1241; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1242; memset(&l_T_1242, 0, sizeof l_T_1242);
S_R10(&l_T_1242, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1243; memset(&l_S_1243, 0, sizeof l_S_1243);
l_S_1243 = rt_b_str_new((l_T_1242).f_LEN, 0);
rt_b_assign(&l_S_1243, r_STR(l_T_1242, (l_T_1242).f_LEN));
rt_int l_POINT_1244; memset(&l_POINT_1244, 0, sizeof l_POINT_1244);
l_POINT_1244 = 0;
rt_int l_DIGITS_1245; memset(&l_DIGITS_1245, 0, sizeof l_DIGITS_1245);
l_DIGITS_1245 = ((rt_int)0LL);
{ rt_int it1247_lo = ((rt_int)0LL), it1247_hi = rt_sub((l_T_1242).f_LEN, ((rt_int)1LL));
for (rt_int it1247 = it1247_lo; it1247 <= it1247_hi; it1247++) {
{
if (rt_b_eq(rt_b_slice(l_S_1243, it1247, it1247), rt_str(".", 1)))
{
l_POINT_1244 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1243, it1247, it1247), rt_str("E", 1)))
{
goto L_end1246;
}
else
{
l_DIGITS_1245 = rt_add(l_DIGITS_1245, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1247 == it1247_hi) break;
} } L_end1246: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1244)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1248 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1242), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1248; }
}
if ((!l_POINT_1244))
{
{ R26 rv1249 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1242)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1249; }
}
{
R22 * l_F_1250; memset(&l_F_1250, 0, sizeof l_F_1250);
l_F_1250 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1251; memset(&l_C_1251, 0, sizeof l_C_1251);
S_R10(&l_C_1251, l_T_1242, 0);
((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE = r_MAX_INT(l_DIGITS_1245, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1243, rt_sub((l_T_1242).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1242).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1251, r_FMT1(rt_str("@0", 2), l_T_1242), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1243, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1251, r_FMT1(rt_str("0@", 2), l_T_1242), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1250))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1252 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1251), l_F_1250);
return rv1252; }
}
{ R26 rv1253 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1251), l_F_1250);
return rv1253; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1254; memset(&l_T_1254, 0, sizeof l_T_1254);
S_R10(&l_T_1254, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1255; memset(&l_S_1255, 0, sizeof l_S_1255);
l_S_1255 = rt_b_str_new((l_T_1254).f_LEN, 0);
rt_b_assign(&l_S_1255, r_STR(l_T_1254, (l_T_1254).f_LEN));
rt_int l_INT_1256; memset(&l_INT_1256, 0, sizeof l_INT_1256);
l_INT_1256 = ((rt_int)0LL);
rt_int l_SIG_1257; memset(&l_SIG_1257, 0, sizeof l_SIG_1257);
l_SIG_1257 = 0;
rt_int l_POINT_1258; memset(&l_POINT_1258, 0, sizeof l_POINT_1258);
l_POINT_1258 = 0;
rt_int l_LEAD_1259; memset(&l_LEAD_1259, 0, sizeof l_LEAD_1259);
l_LEAD_1259 = ((rt_int)0LL);
rt_int l_I_1260; memset(&l_I_1260, 0, sizeof l_I_1260);
l_I_1260 = ((rt_int)0LL);
rt_int l_EXP_1261; memset(&l_EXP_1261, 0, sizeof l_EXP_1261);
l_EXP_1261 = ((rt_int)0LL);
for (;;) {
if ((l_I_1260 >= (l_T_1254).f_LEN)) goto L_end1262;
{
if (rt_b_eq(rt_b_slice(l_S_1255, l_I_1260, l_I_1260), rt_str("E", 1)))
{
goto L_end1262;
}
else if (rt_b_eq(rt_b_slice(l_S_1255, l_I_1260, l_I_1260), rt_str(".", 1)))
{
l_POINT_1258 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1255, l_I_1260, l_I_1260), rt_str("0", 1))))
{
if ((!l_POINT_1258))
{
l_INT_1256 = rt_add(l_INT_1256, ((rt_int)1LL));
}
l_SIG_1257 = 1;
}
else if ((l_SIG_1257 && (!l_POINT_1258)))
{
l_INT_1256 = rt_add(l_INT_1256, ((rt_int)1LL));
}
else if ((l_POINT_1258 && (!l_SIG_1257)))
{
l_LEAD_1259 = rt_add(l_LEAD_1259, ((rt_int)1LL));
}
l_I_1260 = rt_add(l_I_1260, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1262: ;
if ((!l_SIG_1257))
{
{ rt_int rv1263 = 1;
return rv1263; }
}
if ((l_I_1260 < (l_T_1254).f_LEN))
{
{
rt_int l_NEG_1264; memset(&l_NEG_1264, 0, sizeof l_NEG_1264);
l_NEG_1264 = 0;
l_I_1260 = rt_add(l_I_1260, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1255, l_I_1260, l_I_1260), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1255, l_I_1260, l_I_1260), rt_str("+", 1))))
{
l_NEG_1264 = rt_b_eq(rt_b_slice(l_S_1255, l_I_1260, l_I_1260), rt_str("-", 1));
l_I_1260 = rt_add(l_I_1260, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1260 >= (l_T_1254).f_LEN)) goto L_end1265;
{
if ((l_EXP_1261 <= ((rt_int)100000LL)))
{
l_EXP_1261 = rt_add(rt_mul(l_EXP_1261, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1255, l_I_1260, l_I_1260)), ((rt_int)48LL))));
}
l_I_1260 = rt_add(l_I_1260, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1265: ;
if (l_NEG_1264)
{
l_EXP_1261 = rt_neg(l_EXP_1261);
}
}
}
{
rt_int l_D_1266; memset(&l_D_1266, 0, sizeof l_D_1266);
l_D_1266 = rt_add(rt_sub(l_INT_1256, ((rt_int)1LL)), l_EXP_1261);
rt_int l_LIM_1267; memset(&l_LIM_1267, 0, sizeof l_LIM_1267);
l_LIM_1267 = ((rt_int)308LL);
if ((l_INT_1256 == ((rt_int)0LL)))
{
l_D_1266 = rt_add(rt_sub(rt_neg(l_LEAD_1259), ((rt_int)1LL)), l_EXP_1261);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1267 = ((rt_int)38LL);
}
{ rt_int rv1268 = ((l_D_1266 <= l_LIM_1267) && (l_D_1266 >= rt_add(rt_neg(l_LIM_1267), ((rt_int)1LL))));
return rv1268; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1269; memset(&l_T_1269, 0, sizeof l_T_1269);
S_R10(&l_T_1269, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1270; memset(&l_S_1270, 0, sizeof l_S_1270);
l_S_1270 = rt_b_str_new((l_T_1269).f_LEN, 0);
rt_b_assign(&l_S_1270, r_STR(l_T_1269, (l_T_1269).f_LEN));
rt_int l_SIG_1271; memset(&l_SIG_1271, 0, sizeof l_SIG_1271);
l_SIG_1271 = ((rt_int)0LL);
rt_int l_FRAC_1272; memset(&l_FRAC_1272, 0, sizeof l_FRAC_1272);
l_FRAC_1272 = ((rt_int)0LL);
rt_int l_POINT_1273; memset(&l_POINT_1273, 0, sizeof l_POINT_1273);
l_POINT_1273 = 0;
rt_int l_EXP_1274; memset(&l_EXP_1274, 0, sizeof l_EXP_1274);
l_EXP_1274 = ((rt_int)0LL);
rt_int l_I_1275; memset(&l_I_1275, 0, sizeof l_I_1275);
l_I_1275 = ((rt_int)0LL);
for (;;) {
if ((l_I_1275 >= (l_T_1269).f_LEN)) goto L_end1276;
{
if (rt_b_eq(rt_b_slice(l_S_1270, l_I_1275, l_I_1275), rt_str("E", 1)))
{
goto L_end1276;
}
if (rt_b_eq(rt_b_slice(l_S_1270, l_I_1275, l_I_1275), rt_str(".", 1)))
{
l_POINT_1273 = 1;
}
else
{
if (((l_SIG_1271 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1270, l_I_1275, l_I_1275), rt_str("0", 1)))))
{
l_SIG_1271 = rt_add(l_SIG_1271, ((rt_int)1LL));
}
if (l_POINT_1273)
{
l_FRAC_1272 = rt_add(l_FRAC_1272, ((rt_int)1LL));
}
}
l_I_1275 = rt_add(l_I_1275, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1276: ;
if ((rt_sub(l_I_1275, r_BOOL_INT(l_POINT_1273)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1275 < (l_T_1269).f_LEN))
{
{
rt_int l_NEG_1277; memset(&l_NEG_1277, 0, sizeof l_NEG_1277);
l_NEG_1277 = 0;
l_I_1275 = rt_add(l_I_1275, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1270, l_I_1275, l_I_1275), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1270, l_I_1275, l_I_1275), rt_str("+", 1))))
{
l_NEG_1277 = rt_b_eq(rt_b_slice(l_S_1270, l_I_1275, l_I_1275), rt_str("-", 1));
l_I_1275 = rt_add(l_I_1275, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1275 >= (l_T_1269).f_LEN)) goto L_end1278;
{
if ((l_EXP_1274 <= ((rt_int)1000LL)))
{
l_EXP_1274 = rt_sub(rt_add(rt_mul(l_EXP_1274, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1270, l_I_1275, l_I_1275))), ((rt_int)48LL));
}
l_I_1275 = rt_add(l_I_1275, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1278: ;
if ((l_EXP_1274 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1277)
{
l_EXP_1274 = rt_neg(l_EXP_1274);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1271 > ((rt_int)0LL)))
{
{
rt_int l_P10_1279; memset(&l_P10_1279, 0, sizeof l_P10_1279);
l_P10_1279 = rt_sub(rt_add(rt_sub(l_SIG_1271, ((rt_int)1LL)), l_EXP_1274), l_FRAC_1272);
rt_int l_BITS_1280; memset(&l_BITS_1280, 0, sizeof l_BITS_1280);
l_BITS_1280 = rt_add(rt_quot((rt_mul(l_P10_1279, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1279 < ((rt_int)0LL)))
{
l_BITS_1280 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1279), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1280 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1281; memset(&l_CS_1281, 0, sizeof l_CS_1281);
l_CS_1281 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1282; memset(&l_P_1282, 0, sizeof l_P_1282);
l_P_1282 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1283; memset(&l_S_1283, 0, sizeof l_S_1283);
S_R10(&l_S_1283, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1281 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1284; memset(&l_Y_1284, 0, sizeof l_Y_1284);
l_Y_1284 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1284 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1284))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1281 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1281)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1281 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1281)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1281))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1282 == NULL)) goto L_end1285;
{
if ((((*(R21 *)rt_nil_check(l_P_1282))).f_IV == g_K_STR))
{
if ((l_CS_1281 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1283, r_CAT(l_S_1283, ((*(R21 *)rt_nil_check(l_P_1282))).f_NAME), 0);
}
else
{
{
R10 l_Q_1286; memset(&l_Q_1286, 0, sizeof l_Q_1286);
S_R10(&l_Q_1286, ((*(R21 *)rt_nil_check(l_P_1282))).f_NAME, 0);
rstr l_QS_1287; memset(&l_QS_1287, 0, sizeof l_QS_1287);
l_QS_1287 = rt_b_str_new((l_Q_1286).f_LEN, 0);
rt_b_assign(&l_QS_1287, r_STR(l_Q_1286, (l_Q_1286).f_LEN));
{ rt_int it1289_lo = ((rt_int)0LL), it1289_hi = rt_sub((l_Q_1286).f_LEN, ((rt_int)1LL));
for (rt_int it1289 = it1289_lo; it1289 <= it1289_hi; it1289++) {
{
{
R10 l_LIT_1290; memset(&l_LIT_1290, 0, sizeof l_LIT_1290);
R12 * l_Y_1291; memset(&l_Y_1291, 0, sizeof l_Y_1291);
if (rt_b_eq(rt_b_slice(l_QS_1287, it1289, it1289), rt_str("'", 1)))
{
S_R10(&l_LIT_1290, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1290, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1287, it1289, it1289)), rt_str("'", 1))), 0);
}
l_Y_1291 = r_FIND_LITERAL(l_LIT_1290, l_CS_1281);
if ((l_Y_1291 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1282))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1287, it1289, it1289)));
}
S_R10(&l_S_1283, r_CATS(l_S_1283, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1291))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1289 == it1289_hi) break;
} } L_end1288: ;
}
}
}
else
{
{
R12 * l_Y_1292; memset(&l_Y_1292, 0, sizeof l_Y_1292);
l_Y_1292 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1282))).f_NAME, l_CS_1281);
if ((l_Y_1292 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1282))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1282))).f_NAME);
}
S_R10(&l_S_1283, r_CATS(l_S_1283, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1292))).f_MV)), 0);
}
}
l_P_1282 = ((*(R21 *)rt_nil_check(l_P_1282))).f_NEXT;
}
RT_B_TICK();
} L_end1285: ;
{
R22 * l_T_1293; memset(&l_T_1293, 0, sizeof l_T_1293);
l_T_1293 = r_STR_TYPE(r_NUM((l_S_1283).f_LEN), r_SOME((l_S_1283).f_LEN));
((*(R22 *)rt_nil_check(l_T_1293))).f_BASE = l_CS_1281;
{ R26 rv1294 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1283), r_NUM((l_S_1283).f_LEN)), l_T_1293);
return rv1294; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1295; memset(&l_TS_1295, 0, sizeof l_TS_1295);
l_TS_1295 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1295))).f_NAME, p_NAME, 0);
{ R22 * rv1296 = r_RESOLVE(l_TS_1295);
return rv1296; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1297; memset(&l_Y_1297, 0, sizeof l_Y_1297);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1298; memset(&l_WT_1298, 0, sizeof l_WT_1298);
l_WT_1298 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1298))).f_KIND == g_T_ENUM))
{
l_Y_1297 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1298);
if ((!(l_Y_1297 == NULL)))
{
{ R26 rv1299 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1297))).f_MV), r_ENUM_RESULT(l_Y_1297, p_WANT));
return rv1299; }
}
}
}
}
l_Y_1297 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1300; memset(&l_FOUND_1300, 0, sizeof l_FOUND_1300);
l_FOUND_1300 = NULL;
rt_int l_N_1301; memset(&l_N_1301, 0, sizeof l_N_1301);
l_N_1301 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1297 == NULL)) goto L_end1302;
{
if ((((*(R12 *)rt_nil_check(l_Y_1297))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1300 == NULL))
{
l_FOUND_1300 = l_Y_1297;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1300))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1297))).f_T))).f_BASE)))
{
l_N_1301 = rt_add(l_N_1301, ((rt_int)1LL));
}
}
l_Y_1297 = r_LOOKUP_NEXT(l_Y_1297);
}
RT_B_TICK();
} L_end1302: ;
if ((l_FOUND_1300 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1301 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1303 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1300))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1300))).f_T);
return rv1303; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1304 = p_WANT;
return rv1304; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1305; memset(&l_T_1305, 0, sizeof l_T_1305);
l_T_1305 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1305))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1306 = l_T_1305;
return rv1306; }
}
}
{ R22 * rv1307 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1307; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1308; memset(&l_Y_1308, 0, sizeof l_Y_1308);
l_Y_1308 = r_LOOKUP(p_NAME);
if ((l_Y_1308 == NULL))
{
{ rt_int rv1309 = 0;
return rv1309; }
}
{ rt_int rv1310 = (((((*(R12 *)rt_nil_check(l_Y_1308))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1308))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1308))).f_KIND == g_Y_ROUTINE));
return rv1310; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1311; memset(&l_Y_1311, 0, sizeof l_Y_1311);
l_Y_1311 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1311 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1311))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1312; memset(&l_WRITABLE_1312, 0, sizeof l_WRITABLE_1312);
l_WRITABLE_1312 = r_CHECK_IMPORTED(l_Y_1311, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1313 = r_MKLV(r_OBJ_ACCESS(l_Y_1311), ((*(R12 *)rt_nil_check(l_Y_1311))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_VAR) && l_WRITABLE_1312), r_NO_TEXT());
return rv1313; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_GEN))
{
{ R26 rv1314 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1311))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1311))).f_T);
return rv1314; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1315 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1315; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1311))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1316; memset(&l_N_1316, 0, sizeof l_N_1316);
l_N_1316 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1316))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1317 = r_CALL_EXPR(l_N_1316, p_WANT);
return rv1317; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1318; memset(&l_A_1318, 0, sizeof l_A_1318);
l_A_1318 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1318)))
{
{ R26 rv1319 = r_EXPR(l_A_1318, NULL);
return rv1319; }
}
if ((((*(R21 *)rt_nil_check(l_A_1318))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1320; memset(&l_B_1320, 0, sizeof l_B_1320);
S_R26(&l_B_1320, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_A), 0);
R10 l_I_1321; memset(&l_I_1321, 0, sizeof l_I_1321);
S_R10(&l_I_1321, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1318))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1320).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1322 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1320).f_C, l_I_1321, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1320).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1322; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1323 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1320).f_C, l_I_1321, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1320).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1323; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1318))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1318))).f_A))
{
{ R26 rv1324 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1318))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1324; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1318))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_A))).f_NAME))
{
{ R26 rv1325 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1318))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1325; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1318))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1326; memset(&l_Y_1326, 0, sizeof l_Y_1326);
l_Y_1326 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1318))).f_NAME);
if ((!(l_Y_1326 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1326))).f_KIND == g_Y_TYPE))
{
{ R26 rv1327 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1318))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1327; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1318))).f_NAME))
{
{ R26 rv1328 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1318))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1328; }
}
}
}
{
R26 l_B_1329; memset(&l_B_1329, 0, sizeof l_B_1329);
S_R26(&l_B_1329, r_EXPR(l_A_1318, NULL), 0);
R22 * l_BT_1330; memset(&l_BT_1330, 0, sizeof l_BT_1330);
l_BT_1330 = (l_B_1329).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1330))).f_KIND == g_T_REC))
{
{
R24 * l_F_1331; memset(&l_F_1331, 0, sizeof l_F_1331);
l_F_1331 = r_FIND_VFIELD(l_BT_1330, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1331 == NULL)))
{
r_CHECK_VARIANT(l_F_1331, l_BT_1330, l_A_1318, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1331))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1330)))
{
{ R26 rv1332 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1329).f_C, ((*(R24 *)rt_nil_check(l_F_1331))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1331))).f_T);
return rv1332; }
}
{ R26 rv1333 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1329).f_C, ((*(R24 *)rt_nil_check(l_F_1331))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1331))).f_T, ((l_B_1329).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1331))).f_KIND == ((rt_int)0LL))), (l_B_1329).f_C);
return rv1333; }
}
}
}
{ R26 rv1334 = r_ATTRIBUTE(l_B_1329, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1334; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1335 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1335; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1336 = 1;
return rv1336; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1337 = 1;
return rv1337; }
}
{
rstr l_S_1338; memset(&l_S_1338, 0, sizeof l_S_1338);
l_S_1338 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1338, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1340_lo = ((rt_int)0LL), it1340_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1340 = it1340_lo; it1340 <= it1340_hi; it1340++) {
{
if (rt_b_eq(rt_b_slice(l_S_1338, it1340, it1340), rt_str(".", 1)))
{
{ rt_int rv1341 = 0;
return rv1341; }
}
}
RT_B_TICK();
if (it1340 == it1340_hi) break;
} } L_end1339: ;
}
{ rt_int rv1342 = 1;
return rv1342; }
}
{ rt_int rv1343 = 0;
return rv1343; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1344 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1344; }
}
{ rt_int rv1345 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1345; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1346 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1346; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1347; memset(&l_TAGV_1347, 0, sizeof l_TAGV_1347);
S_R23(&l_TAGV_1347, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1347).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1347).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1348; memset(&l_F_1348, 0, sizeof l_F_1348);
l_F_1348 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1349; memset(&l_A_1349, 0, sizeof l_A_1349);
l_A_1349 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1348 == NULL)) goto L_end1350;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1348))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1349 == NULL))
{
{ R23 rv1351 = r_NO_MVAL();
return rv1351; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1348))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1349))).f_ANYARG)
{
{ R23 rv1352 = r_NO_MVAL();
return rv1352; }
}
{ R23 rv1353 = ((*(R25 *)rt_nil_check(l_A_1349))).f_MLO;
return rv1353; }
}
l_A_1349 = ((*(R25 *)rt_nil_check(l_A_1349))).f_NEXT;
}
l_F_1348 = ((*(R24 *)rt_nil_check(l_F_1348))).f_NEXT;
}
RT_B_TICK();
} L_end1350: ;
{ R23 rv1354 = r_NO_MVAL();
return rv1354; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1355; memset(&l_P_1355, 0, sizeof l_P_1355);
l_P_1355 = p_L;
for (;;) {
if ((l_P_1355 == NULL)) goto L_end1356;
{
if ((((*(R21 *)rt_nil_check(l_P_1355))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1355))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1355))).f_B, p_T)).f_V)))
{
{ rt_int rv1357 = 1;
return rv1357; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1355, p_T)).f_V == p_V))
{
{ rt_int rv1358 = 1;
return rv1358; }
}
l_P_1355 = ((*(R21 *)rt_nil_check(l_P_1355))).f_NEXT;
}
RT_B_TICK();
} L_end1356: ;
{ rt_int rv1359 = 0;
return rv1359; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1360 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1360; }
}
{ R26 rv1361 = r_EXPR(p_E, NULL);
return rv1361; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1362; memset(&l_A_1362, 0, sizeof l_A_1362);
S_R26(&l_A_1362, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1363; memset(&l_I_1363, 0, sizeof l_I_1363);
S_R10(&l_I_1363, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1362).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1364 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1362).f_C, (l_A_1362).f_C, l_I_1363, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1362).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1364; }
}
}
}
{ R26 rv1365 = r_INDEX_EXPR2(p_E);
return rv1365; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1366; memset(&l_SAVED_1366, 0, sizeof l_SAVED_1366);
l_SAVED_1366 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1367; memset(&l_SAVED_Q_1367, 0, sizeof l_SAVED_Q_1367);
l_SAVED_Q_1367 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1368; memset(&l_V_1368, 0, sizeof l_V_1368);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1368, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1366;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1367;
{ R10 rv1369 = r_INDEX_OF(l_V_1368, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1369; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1370; memset(&l_T_1370, 0, sizeof l_T_1370);
l_T_1370 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1370))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1370))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1371; memset(&l_ARGS_1371, 0, sizeof l_ARGS_1371);
l_ARGS_1371 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1372; memset(&l_Y_1372, 0, sizeof l_Y_1372);
l_Y_1372 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1371, p_LINE, 0);
if ((l_Y_1372 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1373 = (r_CALL_SYM(l_Y_1372, l_ARGS_1371, p_LINE)).f_C;
return rv1373; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_ENUM))
{
{ R10 rv1374 = (p_V).f_C;
return rv1374; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1370))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1370))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1375 = (p_V).f_C;
return rv1375; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1376; memset(&l_B_1376, 0, sizeof l_B_1376);
S_R26(&l_B_1376, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1377; memset(&l_T_1377, 0, sizeof l_T_1377);
l_T_1377 = r_REAL_TYPE((l_B_1376).f_T);
R21 * l_S_1378; memset(&l_S_1378, 0, sizeof l_S_1378);
l_S_1378 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1379; memset(&l_IX_1379, 0, sizeof l_IX_1379);
S_R10(&l_IX_1379, r_MK(rt_str("", 0)), 0);
rt_int l_N_1380; memset(&l_N_1380, 0, sizeof l_N_1380);
l_N_1380 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1377))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1378 == NULL)) goto L_end1381;
{
if ((l_N_1380 > ((rt_int)0LL)))
{
S_R10(&l_IX_1379, r_CATS(l_IX_1379, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1379, r_CAT(l_IX_1379, r_INDEX_VALUE(l_S_1378)), 0);
l_N_1380 = rt_add(l_N_1380, ((rt_int)1LL));
l_S_1378 = ((*(R21 *)rt_nil_check(l_S_1378))).f_NEXT;
}
RT_B_TICK();
} L_end1381: ;
if ((!(l_N_1380 == ((*(R22 *)rt_nil_check(l_T_1377))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1380 == ((rt_int)1LL)))
{
{ R26 rv1382 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1376).f_C, l_IX_1379, (l_B_1376).f_C, (l_B_1376).f_C), ((*(R22 *)rt_nil_check(l_T_1377))).f_ELEM, (l_B_1376).f_LVAL, r_NO_TEXT());
return rv1382; }
}
{
R10 l_X_1383; memset(&l_X_1383, 0, sizeof l_X_1383);
S_R10(&l_X_1383, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1376).f_C, r_NUM(l_N_1380), (l_B_1376).f_C, (l_B_1376).f_C), 0);
{ R26 rv1384 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1383, l_IX_1379), ((*(R22 *)rt_nil_check(l_T_1377))).f_ELEM, (l_B_1376).f_LVAL, r_NO_TEXT());
return rv1384; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1385 = r_MKN(rt_str("NEGATE_", 7));
return rv1385; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1386 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1386; }
}
{ R10 rv1387 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1387; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1388 = r_MKN(rt_str("ADD_", 4));
return rv1388; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1389 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1389; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1390 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1390; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1391 = r_MKN(rt_str("DIVIDE_", 7));
return rv1391; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1392 = r_MKN(rt_str("MODULUS_", 8));
return rv1392; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1393 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1393; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1394 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1394; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1395 = r_MKN(rt_str("EQUAL_", 6));
return rv1395; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1396 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1396; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1397 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1397; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1398 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1398; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1399 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1399; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1400 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1400; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1401 = r_MKN(rt_str("AND_", 4));
return rv1401; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1402 = r_MKN(rt_str("OR_", 3));
return rv1402; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1403 = r_MKN(rt_str("XOR_", 4));
return rv1403; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1404 = r_MKN(rt_str("IMPLIES_", 8));
return rv1404; }
}
{ R10 rv1405 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1405; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1406; memset(&l_A_1406, 0, sizeof l_A_1406);
l_A_1406 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1406)), ({ R27 rc1407; memset(&rc1407, 0, sizeof rc1407);  rc1407.f_E = NULL; S_R26(&rc1407.f_V, p_V, 0); rc1407.f_HAVE = 1; rc1407.f_MODE = g_M_IN; rc1407.f_NEXT = p_NEXT; rc1407; }), 0);
{ R27 * rv1408 = l_A_1406;
return rv1408; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1409; memset(&l_A_1409, 0, sizeof l_A_1409);
l_A_1409 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1409)), ({ R27 rc1410; memset(&rc1410, 0, sizeof rc1410);  rc1410.f_E = p_E; S_R26(&rc1410.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1410.f_HAVE = 0; rc1410.f_MODE = p_MODE; rc1410.f_NEXT = p_NEXT; rc1410; }), 0);
{ R27 * rv1411 = l_A_1409;
return rv1411; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1412; memset(&l_Y_1412, 0, sizeof l_Y_1412);
l_Y_1412 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1412 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1412 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1413 = l_Y_1412;
return rv1413; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1414; memset(&l_Y_1414, 0, sizeof l_Y_1414);
l_Y_1414 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1414 == NULL)) goto L_end1415;
{
if ((((*(R12 *)rt_nil_check(l_Y_1414))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1416 = 1;
return rv1416; }
}
l_Y_1414 = r_LOOKUP_NEXT(l_Y_1414);
}
RT_B_TICK();
} L_end1415: ;
l_Y_1414 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1414 == NULL)) goto L_end1417;
{
if ((((*(R12 *)rt_nil_check(l_Y_1414))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1418 = 1;
return rv1418; }
}
l_Y_1414 = r_LOOKUP_NEXT(l_Y_1414);
}
RT_B_TICK();
} L_end1417: ;
{ rt_int rv1419 = 0;
return rv1419; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1420; memset(&l_Q_1420, 0, sizeof l_Q_1420);
l_Q_1420 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1421; memset(&l_R_1421, 0, sizeof l_R_1421);
l_R_1421 = NULL;
if ((l_Q_1420 == NULL))
{
{ R27 * rv1422 = NULL;
return rv1422; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1420))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1421 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1420))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1420))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1420))).f_B == NULL)))
{
l_R_1421 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1420))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1421);
}
{ R27 * rv1423 = l_R_1421;
return rv1423; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1424; memset(&l_ARGS_1424, 0, sizeof l_ARGS_1424);
l_ARGS_1424 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1425; memset(&l_Y_1425, 0, sizeof l_Y_1425);
l_Y_1425 = r_USER_OPERATOR(p_NAME, l_ARGS_1424, p_LINE);
if ((l_Y_1425 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1426 = r_CALL_SYM(l_Y_1425, l_ARGS_1424, p_LINE);
return rv1426; }
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
{ R10 rv1427 = p_C;
return rv1427; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1428 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1428; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1429 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1429; }
}
{ R10 rv1430 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1430; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1431 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1431; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1432; memset(&l_RT_1432, 0, sizeof l_RT_1432);
l_RT_1432 = r_REAL_TYPE(p_T);
R22 * l_VT_1433; memset(&l_VT_1433, 0, sizeof l_VT_1433);
l_VT_1433 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1433))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_PTR)))
{
{ R10 rv1434 = (p_V).f_C;
return rv1434; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1433))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1433)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1435 = (p_V).f_C;
return rv1435; }
}
if ((!r_SAME_CLASS(l_RT_1432, l_VT_1433)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1433), (r_TYPE_NAME(l_VT_1433)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1432), (r_TYPE_NAME(l_RT_1432)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1432))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1432))).f_SCALE))
{
{ R10 rv1436 = r_RANGE_CHECK(l_RT_1432, (p_V).f_C, p_SELF);
return rv1436; }
}
{ R10 rv1437 = r_RANGE_CHECK(l_RT_1432, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1432))).f_SCALE)), p_SELF);
return rv1437; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1432))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1433))).f_SCALE)))
{
{ R10 rv1438 = r_RANGE_CHECK(l_RT_1432, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1432))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1438; }
}
{ R10 rv1439 = r_RANGE_CHECK(l_RT_1432, (p_V).f_C, p_SELF);
return rv1439; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1432))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1432) || r_HAS_VALUES(l_VT_1433)))) && (!r_SAME_REPS(l_RT_1432, l_VT_1433))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1440 = r_RANGE_CHECK(l_RT_1432, (p_V).f_C, p_SELF);
return rv1440; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1432, l_VT_1433, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1432))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1433))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1432))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1433))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1432), r_TARGET(l_VT_1433))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R10 rv1441 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1432), r_TARGET(l_VT_1433), (p_V).f_C);
return rv1441; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1432)) && (!r_HAS_ANY(l_VT_1433))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1432))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1433))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1432))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1432))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1433))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1432, l_VT_1433)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1442 = (p_V).f_C;
return rv1442; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1443; memset(&l_ARGS_1443, 0, sizeof l_ARGS_1443);
l_ARGS_1443 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1444; memset(&l_Y_1444, 0, sizeof l_Y_1444);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1445; memset(&l_SAVED_Q_1445, 0, sizeof l_SAVED_Q_1445);
l_SAVED_Q_1445 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1446; memset(&l_X_1446, 0, sizeof l_X_1446);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1446 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1445;
if ((!(l_X_1446 == NULL)))
{
{
R27 * l_P_1447; memset(&l_P_1447, 0, sizeof l_P_1447);
l_P_1447 = l_X_1446;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1447))).f_NEXT == NULL)) goto L_end1448;
{
l_P_1447 = ((*(R27 *)rt_nil_check(l_P_1447))).f_NEXT;
}
RT_B_TICK();
} L_end1448: ;
((*(R27 *)rt_nil_check(l_P_1447))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1443))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1443))).f_NEXT = l_X_1446;
}
}
}
}
{
R27 * l_LAST_1449; memset(&l_LAST_1449, 0, sizeof l_LAST_1449);
l_LAST_1449 = l_ARGS_1443;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1449))).f_NEXT == NULL)) goto L_end1450;
{
l_LAST_1449 = ((*(R27 *)rt_nil_check(l_LAST_1449))).f_NEXT;
}
RT_B_TICK();
} L_end1450: ;
((*(R27 *)rt_nil_check(l_LAST_1449))).f_MODE = g_M_OUT;
l_Y_1444 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1443, p_LINE, 0);
if ((l_Y_1444 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1449))).f_MODE = g_M_INOUT;
l_Y_1444 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1443, p_LINE, 0);
}
}
if ((l_Y_1444 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1451 = r_CATS((r_CALL_SYM(l_Y_1444, l_ARGS_1443, p_LINE)).f_C, rt_str(";", 1));
return rv1451; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1452 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1452; }
}
}
{ R10 rv1453 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1453; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1454 = 1;
return rv1454; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1455 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1455; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1456; memset(&l_F_1456, 0, sizeof l_F_1456);
l_F_1456 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1456 == NULL)) goto L_end1457;
{
if ((((*(R24 *)rt_nil_check(l_F_1456))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1456))).f_T))
{
{ rt_int rv1458 = 1;
return rv1458; }
}
}
l_F_1456 = ((*(R24 *)rt_nil_check(l_F_1456))).f_NEXT;
}
RT_B_TICK();
} L_end1457: ;
}
}
{ rt_int rv1459 = 0;
return rv1459; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1460 = 0;
return rv1460; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1461 = 0;
return rv1461; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1462 = 0;
return rv1462; }
}
{ rt_int rv1463 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1463; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1464 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1464; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1465; memset(&l_D_1465, 0, sizeof l_D_1465);
S_R10(&l_D_1465, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1466; memset(&l_S_1466, 0, sizeof l_S_1466);
S_R10(&l_S_1466, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1467; memset(&l_I_1467, 0, sizeof l_I_1467);
S_R10(&l_I_1467, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1468; memset(&l_N_1468, 0, sizeof l_N_1468);
S_R10(&l_N_1468, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1469; memset(&l_VE_1469, 0, sizeof l_VE_1469);
l_VE_1469 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1470; memset(&l_R_1470, 0, sizeof l_R_1470);
S_R10(&l_R_1470, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1465, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1470, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1470, l_S_1466, p_RV), 0);
S_R10(&l_R_1470, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1470, l_N_1468, l_D_1465, l_D_1465), 0);
S_R10(&l_R_1470, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1470, l_S_1466, l_S_1466), 0);
S_R10(&l_R_1470, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1470, l_I_1467, l_N_1468, l_D_1465), 0);
S_R10(&l_R_1470, r_FMT2(rt_str("@@->hi);", 8), l_R_1470, l_D_1465), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1470, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1470, l_I_1467, l_I_1467, l_I_1467), 0);
S_R10(&l_R_1470, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1470, l_I_1467, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1466, l_I_1467), r_NO_TEXT())), 0);
}
S_R10(&l_R_1470, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1470, l_I_1467, l_I_1467, l_I_1467), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1470, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1470, l_I_1467, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1469, r_FMT2(rt_str("@->p[@]", 7), l_D_1465, l_I_1467), r_FMT2(rt_str("@.p[@]", 6), l_S_1466, l_I_1467), p_LINE)), 0);
}
else
{
S_R10(&l_R_1470, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1470, l_I_1467, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1465, l_I_1467), r_FMT2(rt_str("@.p[@]", 6), l_S_1466, l_I_1467))), 0);
}
{ R10 rv1471 = l_R_1470;
return rv1471; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1472; memset(&l_D_1472, 0, sizeof l_D_1472);
S_R10(&l_D_1472, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1473; memset(&l_S_1473, 0, sizeof l_S_1473);
S_R10(&l_S_1473, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1474; memset(&l_F_1474, 0, sizeof l_F_1474);
l_F_1474 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1475; memset(&l_R_1475, 0, sizeof l_R_1475);
S_R10(&l_R_1475, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1472, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1475, r_FMT3(rt_str("@@ = @;", 7), l_R_1475, l_S_1473, p_RV), 0);
for (;;) {
if ((l_F_1474 == NULL)) goto L_end1476;
{
{
R10 l_DF_1477; memset(&l_DF_1477, 0, sizeof l_DF_1477);
S_R10(&l_DF_1477, r_FMT2(rt_str("@->@", 4), l_D_1472, ((*(R24 *)rt_nil_check(l_F_1474))).f_CNAME), 0);
R10 l_SF_1478; memset(&l_SF_1478, 0, sizeof l_SF_1478);
S_R10(&l_SF_1478, r_FMT2(rt_str("@.@", 3), l_S_1473, ((*(R24 *)rt_nil_check(l_F_1474))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1474))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1474))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1475, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1475, l_DF_1477, l_SF_1478), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1474))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1475, r_FMT3(rt_str("@ @ = @;", 8), l_R_1475, l_DF_1477, l_SF_1478), 0);
}
else
{
S_R10(&l_R_1475, r_FMT2(rt_str("@ @", 3), l_R_1475, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1474))).f_T, ((*(R24 *)rt_nil_check(l_F_1474))).f_T, l_DF_1477, l_SF_1478, p_LINE)), 0);
}
}
l_F_1474 = ((*(R24 *)rt_nil_check(l_F_1474))).f_NEXT;
}
RT_B_TICK();
} L_end1476: ;
{ R10 rv1479 = r_CATS(l_R_1475, rt_str(" }", 2));
return rv1479; }
}
}
{ R10 rv1480 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1480; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1481; memset(&l_ARGS_1481, 0, sizeof l_ARGS_1481);
l_ARGS_1481 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1482; memset(&l_Y_1482, 0, sizeof l_Y_1482);
l_Y_1482 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1481, p_LINE);
if ((l_Y_1482 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1483 = (r_CALL_SYM(l_Y_1482, l_ARGS_1481, p_LINE)).f_C;
return rv1483; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1484; memset(&l_X_1484, 0, sizeof l_X_1484);
S_R10(&l_X_1484, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1485; memset(&l_Z_1485, 0, sizeof l_Z_1485);
S_R10(&l_Z_1485, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1486; memset(&l_I_1486, 0, sizeof l_I_1486);
S_R10(&l_I_1486, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1487; memset(&l_N_1487, 0, sizeof l_N_1487);
S_R10(&l_N_1487, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1488; memset(&l_R_1488, 0, sizeof l_R_1488);
S_R10(&l_R_1488, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1484, p_A, l_Z_1485), 0);
S_R10(&l_R_1488, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1488, p_B, l_I_1486, l_N_1487), 0);
S_R10(&l_R_1488, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1488, l_X_1484, l_X_1484, l_Z_1485), 0);
S_R10(&l_R_1488, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1488, l_Z_1485, l_I_1486, l_N_1487), 0);
S_R10(&l_R_1488, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1488, l_X_1484, l_X_1484), 0);
S_R10(&l_R_1488, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1488, l_I_1486, l_I_1486, l_I_1486), 0);
S_R10(&l_R_1488, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1488, l_I_1486, l_I_1486, l_I_1486), 0);
S_R10(&l_R_1488, r_FMT2(rt_str("@@;", 3), l_R_1488, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1484, l_I_1486), r_FMT2(rt_str("@.p[@]", 6), l_Z_1485, l_I_1486), p_LINE)), 0);
{ R10 rv1489 = r_FMT2(rt_str("@ @r; })", 8), l_R_1488, l_I_1486);
return rv1489; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1490; memset(&l_X_1490, 0, sizeof l_X_1490);
S_R10(&l_X_1490, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1491; memset(&l_Z_1491, 0, sizeof l_Z_1491);
S_R10(&l_Z_1491, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1492; memset(&l_F_1492, 0, sizeof l_F_1492);
l_F_1492 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1493; memset(&l_R_1493, 0, sizeof l_R_1493);
S_R10(&l_R_1493, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1490, p_A, l_Z_1491), 0);
R10 l_EQ_1494; memset(&l_EQ_1494, 0, sizeof l_EQ_1494);
S_R10(&l_EQ_1494, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1493, r_FMT2(rt_str("@@;", 3), l_R_1493, p_B), 0);
for (;;) {
if ((l_F_1492 == NULL)) goto L_end1495;
{
{
R10 l_C_1496; memset(&l_C_1496, 0, sizeof l_C_1496);
S_R10(&l_C_1496, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1492))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1490, ((*(R24 *)rt_nil_check(l_F_1492))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1491, ((*(R24 *)rt_nil_check(l_F_1492))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1492))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1494, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1494, r_VARIANT_COND(l_F_1492, p_T, l_X_1490), l_C_1496), 0);
}
else
{
S_R10(&l_EQ_1494, r_FMT2(rt_str("@ && @", 6), l_EQ_1494, l_C_1496), 0);
}
}
l_F_1492 = ((*(R24 *)rt_nil_check(l_F_1492))).f_NEXT;
}
RT_B_TICK();
} L_end1495: ;
{ R10 rv1497 = r_FMT2(rt_str("@ @; })", 7), l_R_1493, l_EQ_1494);
return rv1497; }
}
}
{ R10 rv1498 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1498; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1499; memset(&l_A_1499, 0, sizeof l_A_1499);
S_R26(&l_A_1499, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1500; memset(&l_T_1500, 0, sizeof l_T_1500);
l_T_1500 = (l_A_1499).f_T;
R10 l_OP_1501; memset(&l_OP_1501, 0, sizeof l_OP_1501);
S_R10(&l_OP_1501, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1500))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1501, 1))))
{
{
R27 * l_ARGS_1502; memset(&l_ARGS_1502, 0, sizeof l_ARGS_1502);
l_ARGS_1502 = r_VAL_ARG(l_A_1499, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1503; memset(&l_Y_1503, 0, sizeof l_Y_1503);
l_Y_1503 = r_USER_OPERATOR(r_OP_NAME(l_OP_1501, 1), l_ARGS_1502, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1503 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1502))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1502))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1501, 1), l_ARGS_1502, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1501, 1));
}
}
if ((!(l_Y_1503 == NULL)))
{
{ R26 rv1504 = r_CALL_SYM(l_Y_1503, l_ARGS_1502, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1504; }
}
if ((((*(R22 *)rt_nil_check(l_T_1500))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1500));
}
}
}
if (r_TEQS(l_OP_1501, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1500))).f_KIND == g_T_BOOL))
{
{ R26 rv1505 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1499).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1505; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1500))).f_KIND == g_T_BITS))
{
{ R26 rv1506 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1499).f_C), l_T_1500);
return rv1506; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1500))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1501, rt_str("-", 1)))
{
{ R26 rv1507 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1499).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1500))).f_SCALE));
return rv1507; }
}
{ R26 rv1508 = r_MKET((l_A_1499).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1500))).f_SCALE));
return rv1508; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1500))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1509; memset(&l_FT_1509, 0, sizeof l_FT_1509);
l_FT_1509 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1500))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1501, rt_str("-", 1)))
{
{ R26 rv1510 = r_MKET(r_FLOAT_OP(l_OP_1501, r_MK(rt_str("0.0", 3)), (l_A_1499).f_C, l_FT_1509), l_FT_1509);
return rv1510; }
}
{ R26 rv1511 = r_MKET((l_A_1499).f_C, l_FT_1509);
return rv1511; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1500));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1512 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1512; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1513; memset(&l_OP_1513, 0, sizeof l_OP_1513);
S_R10(&l_OP_1513, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1514; memset(&l_A_1514, 0, sizeof l_A_1514);
R26 l_B_1515; memset(&l_B_1515, 0, sizeof l_B_1515);
if ((r_TEQS(l_OP_1513, rt_str("&", 1)) || r_TEQS(l_OP_1513, rt_str("!", 1))))
{
{
R23 l_MA_1516; memset(&l_MA_1516, 0, sizeof l_MA_1516);
S_R23(&l_MA_1516, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1517; memset(&l_CA_1517, 0, sizeof l_CA_1517);
S_R10(&l_CA_1517, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1518; memset(&l_CB_1518, 0, sizeof l_CB_1518);
S_R10(&l_CB_1518, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1513, rt_str("&", 1)))
{
{ R26 rv1519 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1517, l_CB_1518), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1519; }
}
{ R26 rv1520 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1517, l_CB_1518), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1520; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1515, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1514, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1515).f_T), 0);
}
else
{
S_R26(&l_A_1514, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1515, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1514).f_T), 0);
}
{ R26 rv1521 = r_APPLY_OPERATOR(p_E, l_OP_1513, l_A_1514, l_B_1515);
return rv1521; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1522; memset(&l_AT_1522, 0, sizeof l_AT_1522);
l_AT_1522 = (p_A).f_T;
R22 * l_BT_1523; memset(&l_BT_1523, 0, sizeof l_BT_1523);
l_BT_1523 = (p_B).f_T;
rt_int l_LINE_1524; memset(&l_LINE_1524, 0, sizeof l_LINE_1524);
l_LINE_1524 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1525; memset(&l_NAME_1525, 0, sizeof l_NAME_1525);
S_R10(&l_NAME_1525, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1525, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1525, (l_NAME_1525).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1525) || (((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1526; memset(&l_ARGS_1526, 0, sizeof l_ARGS_1526);
l_ARGS_1526 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1527; memset(&l_EXTRA_1527, 0, sizeof l_EXTRA_1527);
l_EXTRA_1527 = r_QUAL_ARGS(l_LINE_1524);
R12 * l_Y_1528; memset(&l_Y_1528, 0, sizeof l_Y_1528);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1527 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1527);
}
if ((!(l_EXTRA_1527 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1526))).f_NEXT))).f_NEXT = l_EXTRA_1527;
l_Y_1528 = r_USER_OPERATOR(l_NAME_1525, l_ARGS_1526, l_LINE_1524);
if ((!(l_Y_1528 == NULL)))
{
{ R26 rv1529 = r_CALL_SYM(l_Y_1528, l_ARGS_1526, l_LINE_1524);
return rv1529; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1526))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1525, l_ARGS_1526, l_LINE_1524) == NULL)))
{
r_FAILT(l_LINE_1524, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1525);
}
}
else
{
l_Y_1528 = r_USER_OPERATOR(l_NAME_1525, l_ARGS_1526, l_LINE_1524);
if ((!(l_Y_1528 == NULL)))
{
{ R26 rv1530 = r_CALL_SYM(l_Y_1528, l_ARGS_1526, l_LINE_1524);
return rv1530; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1531; memset(&l_Q_1531, 0, sizeof l_Q_1531);
l_Q_1531 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1526, l_LINE_1524);
if ((!(l_Q_1531 == NULL)))
{
{ R26 rv1532 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1531, l_ARGS_1526, l_LINE_1524)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1532; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1524, rt_str("no such operation for the abstract type: ", 41), l_NAME_1525);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1524, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1533 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1533; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1534 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1534; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_INT)))
{
{ R26 rv1535 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1535; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1536 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1536; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1522, l_BT_1523)))
{
if ((r_IS_UNORDERED(l_AT_1522) || r_IS_UNORDERED(l_BT_1523)))
{
r_FAIL(l_LINE_1524, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1537 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1537; }
}
r_FAILT(l_LINE_1524, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1522, l_BT_1523, l_LINE_1524);
{
R22 * l_T_1538; memset(&l_T_1538, 0, sizeof l_T_1538);
l_T_1538 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1538))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1522))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1523))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1538))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1522))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1523))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1538))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1538))).f_MLEN).f_V), 0);
}
{ R26 rv1539 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1538);
return rv1539; }
}
}
r_FAIL(l_LINE_1524, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_BITS)))
{
{ R26 rv1540 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1522);
return rv1540; }
}
r_FAILT(l_LINE_1524, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_INT)))
{
{ R26 rv1541 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1541; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1542; memset(&l_T_1542, 0, sizeof l_T_1542);
l_T_1542 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1522))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1523))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1543 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1542), l_T_1542);
return rv1543; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1524, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1522))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1523))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1524, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1524, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1522), (r_TYPE_NAME(l_AT_1522)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1544; memset(&l_RA_1544, 0, sizeof l_RA_1544);
l_RA_1544 = r_REAL_TYPE(p_A);
R22 * l_RB_1545; memset(&l_RB_1545, 0, sizeof l_RB_1545);
l_RB_1545 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1546 = 1;
return rv1546; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1547 = 0;
return rv1547; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1544))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1544))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1544))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1545))).f_MLEN).f_OK))
{
{ rt_int rv1548 = ((((*(R22 *)rt_nil_check(l_RA_1544))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1545))).f_MLEN).f_V);
return rv1548; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1544))).f_KIND == g_T_ARR))
{
{ rt_int rv1549 = (r_SAME_EXTENTS(l_RA_1544, l_RB_1545) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1544))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1545))).f_ELEM));
return rv1549; }
}
{ rt_int rv1550 = 1;
return rv1550; }
rt_raise(RT_X_INIT);
}
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C) { RT_B_TICK(); 
R22 * l_A_1551; memset(&l_A_1551, 0, sizeof l_A_1551);
l_A_1551 = r_REAL_TYPE(p_RT);
R22 * l_B_1552; memset(&l_B_1552, 0, sizeof l_B_1552);
l_B_1552 = r_REAL_TYPE(p_VT);
R10 l_R_1553; memset(&l_R_1553, 0, sizeof l_R_1553);
S_R10(&l_R_1553, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1551))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1552))).f_KIND == g_T_REC))))
{
{ R10 rv1554 = p_C;
return rv1554; }
}
{
R24 * l_F_1555; memset(&l_F_1555, 0, sizeof l_F_1555);
l_F_1555 = ((*(R22 *)rt_nil_check(l_A_1551))).f_FIELDS;
R25 * l_P_1556; memset(&l_P_1556, 0, sizeof l_P_1556);
l_P_1556 = ((*(R22 *)rt_nil_check(l_A_1551))).f_ARGS;
R25 * l_Q_1557; memset(&l_Q_1557, 0, sizeof l_Q_1557);
l_Q_1557 = ((*(R22 *)rt_nil_check(l_B_1552))).f_ARGS;
for (;;) {
if ((((l_F_1555 == NULL) || (l_P_1556 == NULL)) || (l_Q_1557 == NULL))) goto L_end1558;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1555))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1556))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1556))) && (!r_IS_GEN_ARG(l_Q_1557))) && (!(((((*(R25 *)rt_nil_check(l_P_1556))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1557))).f_MLO).f_OK)))))
{
S_R10(&l_R_1553, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1553, ((*(R24 *)rt_nil_check(l_F_1555))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1556))).f_LO), 0);
}
l_P_1556 = ((*(R25 *)rt_nil_check(l_P_1556))).f_NEXT;
l_Q_1557 = ((*(R25 *)rt_nil_check(l_Q_1557))).f_NEXT;
}
l_F_1555 = ((*(R24 *)rt_nil_check(l_F_1555))).f_NEXT;
}
RT_B_TICK();
} L_end1558: ;
}
if (((l_R_1553).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1559 = p_C;
return rv1559; }
}
{ R10 rv1560 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1553);
return rv1560; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1561; memset(&l_P_1561, 0, sizeof l_P_1561);
l_P_1561 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1562; memset(&l_Q_1562, 0, sizeof l_Q_1562);
l_Q_1562 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1561 == NULL) || (l_Q_1562 == NULL))) goto L_end1563;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1561))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1561))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1562))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1562))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1561))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1561))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1562))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1562))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1561))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1561))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1562))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1562))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1564 = 0;
return rv1564; }
}
}
l_P_1561 = ((*(R25 *)rt_nil_check(l_P_1561))).f_NEXT;
l_Q_1562 = ((*(R25 *)rt_nil_check(l_Q_1562))).f_NEXT;
}
RT_B_TICK();
} L_end1563: ;
{ rt_int rv1565 = 1;
return rv1565; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1566 = 0;
return rv1566; }
}
{ rt_int rv1567 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1567; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1568; memset(&l_T_1568, 0, sizeof l_T_1568);
l_T_1568 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1568))).f_SCALE = p_P;
{ R22 * rv1569 = l_T_1568;
return rv1569; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1570 = r_MK(rt_str("1", 1));
return rv1570; }
}
{ R10 rv1571 = r_MK(rt_str("0", 1));
return rv1571; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1572 = r_MK(rt_str("1", 1));
return rv1572; }
}
}
{ R10 rv1573 = r_MK(rt_str("0", 1));
return rv1573; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1574 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1574; }
}
}
{ rt_int rv1575 = ((rt_int)0LL);
return rv1575; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1576 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1576; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1577 = r_MK(rt_str("and", 3));
return rv1577; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1578 = r_MK(rt_str("or", 2));
return rv1578; }
}
{ R10 rv1579 = r_MK(rt_str("xor", 3));
return rv1579; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1580 = p_A;
return rv1580; }
}
{ rt_int rv1581 = p_B;
return rv1581; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1582 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1582; }
}
{ R10 rv1583 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1583; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1584; memset(&l_AT_1584, 0, sizeof l_AT_1584);
l_AT_1584 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1585; memset(&l_BT_1585, 0, sizeof l_BT_1585);
l_BT_1585 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1586; memset(&l_R_1586, 0, sizeof l_R_1586);
if (((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1585))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1585))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1585))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1586, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1585))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1586, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1584, l_BT_1585)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1584, l_BT_1585, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1584) || r_HAS_ANY(l_BT_1585)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1584, l_BT_1585)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1584))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1584))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1585))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1584))
{
S_R10(&l_R_1586, r_COMPONENT_EQUAL(l_AT_1584, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1586, r_EQUAL_CODE(l_AT_1584, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1586, r_FMT1(rt_str("(!@)", 4), l_R_1586), 0);
}
{ R26 rv1587 = r_MKET(l_R_1586, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1587; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1588; memset(&l_S1_1588, 0, sizeof l_S1_1588);
l_S1_1588 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1589; memset(&l_S2_1589, 0, sizeof l_S2_1589);
l_S2_1589 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1590; memset(&l_S_1590, 0, sizeof l_S_1590);
l_S_1590 = r_MAX_INT(l_S1_1588, l_S2_1589);
R10 l_FN_1591; memset(&l_FN_1591, 0, sizeof l_FN_1591);
S_R10(&l_FN_1591, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1591, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1592 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1591, r_RESCALE_C((p_A).f_C, l_S1_1588, l_S_1590), r_RESCALE_C((p_B).f_C, l_S2_1589, l_S_1590)), r_INT_TYPE(l_S_1590));
return rv1592; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1593 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1588, l_S2_1589)));
return rv1593; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1594 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1588, l_S2_1589)));
return rv1594; }
}
{ R26 rv1595 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1588, l_S2_1589)));
return rv1595; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1596 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1588));
return rv1596; }
}
{ R26 rv1597 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1588));
return rv1597; }
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
rt_int l_S1_1598; memset(&l_S1_1598, 0, sizeof l_S1_1598);
l_S1_1598 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1599; memset(&l_S2_1599, 0, sizeof l_S2_1599);
l_S2_1599 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1600; memset(&l_RND_1600, 0, sizeof l_RND_1600);
S_R10(&l_RND_1600, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1601 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1601; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1600, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1602 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1602; }
}
{
R23 l_SM_1603; memset(&l_SM_1603, 0, sizeof l_SM_1603);
S_R23(&l_SM_1603, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1604; memset(&l_S_1604, 0, sizeof l_S_1604);
l_S_1604 = (l_SM_1603).f_V;
rt_int l_SR_1605; memset(&l_SR_1605, 0, sizeof l_SR_1605);
l_SR_1605 = r_MAX_INT(l_S1_1598, l_S2_1599);
if ((!(l_SM_1603).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1606 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1604, l_S1_1598), l_S2_1599)), l_RND_1600), r_INT_TYPE(l_S_1604));
return rv1606; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1607 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1604, l_S1_1598), l_S2_1599)), l_RND_1600), r_INT_TYPE(l_S_1604));
return rv1607; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1608 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1598), r_NUM(l_S_1604), l_RND_1600), r_INT_TYPE(l_S_1604));
return rv1608; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1609; memset(&l_SUB_1609, 0, sizeof l_SUB_1609);
S_R10(&l_SUB_1609, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1609, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1610 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1598), (p_B).f_C, r_NUM(l_S2_1599)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1604), l_SUB_1609, l_RND_1600)), r_INT_TYPE(l_S_1604));
return rv1610; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1611; memset(&l_V_1611, 0, sizeof l_V_1611);
S_R26(&l_V_1611, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1612; memset(&l_T_1612, 0, sizeof l_T_1612);
l_T_1612 = r_REAL_TYPE((l_V_1611).f_T);
R21 * l_R_1613; memset(&l_R_1613, 0, sizeof l_R_1613);
l_R_1613 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1614; memset(&l_TMP_1614, 0, sizeof l_TMP_1614);
S_R10(&l_TMP_1614, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1615; memset(&l_LO_1615, 0, sizeof l_LO_1615);
R26 l_HI_1616; memset(&l_HI_1616, 0, sizeof l_HI_1616);
R10 l_LOC_1617; memset(&l_LOC_1617, 0, sizeof l_LOC_1617);
R10 l_HIC_1618; memset(&l_HIC_1618, 0, sizeof l_HIC_1618);
R10 l_LO_OP_1619; memset(&l_LO_OP_1619, 0, sizeof l_LO_OP_1619);
S_R10(&l_LO_OP_1619, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1620; memset(&l_HI_OP_1620, 0, sizeof l_HI_OP_1620);
S_R10(&l_HI_OP_1620, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1615, r_EXPR(((*(R21 *)rt_nil_check(l_R_1613))).f_A, l_T_1612), 0);
S_R26(&l_HI_1616, r_EXPR(((*(R21 *)rt_nil_check(l_R_1613))).f_B, l_T_1612), 0);
if (r_IS_UNORDERED(l_T_1612))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1612))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1612))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1612))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1615).f_T), l_T_1612)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1616).f_T), l_T_1612))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1613))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1613))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1619, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1613))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1620, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1612))).f_KIND == g_T_INT))
{
{
R26 l_X_1621; memset(&l_X_1621, 0, sizeof l_X_1621);
S_R26(&l_X_1621, r_MKET(l_TMP_1614, (l_V_1611).f_T), 0);
S_R10(&l_LOC_1617, r_FIXED_COMPARE(l_LO_1615, l_X_1621, l_LO_OP_1619), 0);
S_R10(&l_HIC_1618, r_FIXED_COMPARE(l_X_1621, l_HI_1616, l_HI_OP_1620), 0);
}
}
else
{
S_R10(&l_LOC_1617, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1615).f_C, l_LO_OP_1619, l_TMP_1614), 0);
S_R10(&l_HIC_1618, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1614, l_HI_OP_1620, (l_HI_1616).f_C), 0);
}
{ R26 rv1622 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1612), l_TMP_1614, (l_V_1611).f_C, l_LOC_1617), r_FMT1(rt_str("@; })", 5), l_HIC_1618)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1622; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1623 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1623; }
}
{ R10 rv1624 = (p_V).f_C;
return rv1624; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1625 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1625; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1626; memset(&l_B_1626, 0, sizeof l_B_1626);
l_B_1626 = ((rt_int)0LL);
rt_int l_P_1627; memset(&l_P_1627, 0, sizeof l_P_1627);
l_P_1627 = ((rt_int)1LL);
for (;;) {
if ((l_P_1627 >= p_N)) goto L_end1628;
{
l_B_1626 = rt_add(l_B_1626, ((rt_int)1LL));
l_P_1627 = rt_mul(l_P_1627, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1628: ;
{ rt_int rv1629 = l_B_1626;
return rv1629; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1630; memset(&l_M_1630, 0, sizeof l_M_1630);
S_R23(&l_M_1630, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1630).f_OK)
{
{ rt_int rv1631 = (l_M_1630).f_V;
return rv1631; }
}
}
}
}
{ rt_int rv1632 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1632; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1633 = ((rt_int)100000000LL);
return rv1633; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1634 = ((rt_int)15LL);
return rv1634; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1635 = ((rt_int)7LL);
return rv1635; }
}
{ rt_int rv1636 = ((rt_int)15LL);
return rv1636; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1637; memset(&l_SINGLE_1637, 0, sizeof l_SINGLE_1637);
l_SINGLE_1637 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1637)
{
{ rt_int rv1638 = rt_neg(((rt_int)125LL));
return rv1638; }
}
{ rt_int rv1639 = rt_neg(((rt_int)1021LL));
return rv1639; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1637)
{
{ rt_int rv1640 = ((rt_int)128LL);
return rv1640; }
}
{ rt_int rv1641 = ((rt_int)1024LL);
return rv1641; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1637)
{
{ rt_int rv1642 = ((rt_int)25LL);
return rv1642; }
}
{ rt_int rv1643 = ((rt_int)54LL);
return rv1643; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1637)
{
{ rt_int rv1644 = ((rt_int)8LL);
return rv1644; }
}
{ rt_int rv1645 = ((rt_int)11LL);
return rv1645; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1637)
{
{ rt_int rv1646 = ((rt_int)32LL);
return rv1646; }
}
{ rt_int rv1647 = ((rt_int)64LL);
return rv1647; }
}
{ rt_int rv1648 = ((rt_int)0LL);
return rv1648; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1649; memset(&l_K_1649, 0, sizeof l_K_1649);
l_K_1649 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1649 == g_T_ABS))
{
{ R23 rv1650 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1650; }
}
else if ((l_K_1649 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1651 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1651; }
}
}
{ R23 rv1652 = r_SOME(((rt_int)64LL));
return rv1652; }
}
else if ((l_K_1649 == g_T_FLOAT))
{
{ R23 rv1653 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1653; }
}
else if ((l_K_1649 == g_T_BOOL))
{
{ R23 rv1654 = r_SOME(((rt_int)1LL));
return rv1654; }
}
else if ((l_K_1649 == g_T_ENUM))
{
{ R23 rv1655 = r_SOME(r_ENUM_SIZE(p_T));
return rv1655; }
}
else if ((l_K_1649 == g_T_BITS))
{
{ R23 rv1656 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1656; }
}
else if ((l_K_1649 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1657 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1657; }
}
}
else if (((l_K_1649 == g_T_PTR) || (l_K_1649 == g_T_SEM)))
{
{ R23 rv1658 = r_SOME(((rt_int)64LL));
return rv1658; }
}
{ R23 rv1659 = r_NO_MVAL();
return rv1659; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1660; memset(&l_T_1660, 0, sizeof l_T_1660);
l_T_1660 = (p_B).f_T;
rt_int l_K_1661; memset(&l_K_1661, 0, sizeof l_K_1661);
l_K_1661 = ((*(R22 *)rt_nil_check(l_T_1660))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1662 = r_SIZE_OF(l_T_1660, (p_B).f_C);
return rv1662; }
}
if ((l_K_1661 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1663 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE);
return rv1663; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1664 = r_INT_ET(((rt_int)2LL));
return rv1664; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1665 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1665; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1666 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1666; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1667 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE));
return rv1667; }
}
{ R26 rv1668 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE));
return rv1668; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1669 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE));
return rv1669; }
}
{ R26 rv1670 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE));
return rv1670; }
}
}
else if ((l_K_1661 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1671 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE);
return rv1671; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1672 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE));
return rv1672; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1673 = r_INT_ET(((rt_int)2LL));
return rv1673; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1674 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE, p_NAME));
return rv1674; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1675; memset(&l_MT_1675, 0, sizeof l_MT_1675);
l_MT_1675 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE));
R10 l_C_1676; memset(&l_C_1676, 0, sizeof l_C_1676);
S_R10(&l_C_1676, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1676, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1677 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C, (p_B).f_SELF), l_MT_1675);
return rv1677; }
}
{ R26 rv1678 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1676), l_MT_1675);
return rv1678; }
}
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1679 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C, (p_B).f_SELF), l_MT_1675);
return rv1679; }
}
{ R26 rv1680 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1676), l_MT_1675);
return rv1680; }
}
}
}
else if ((l_K_1661 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1681 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1660))).f_BASE);
return rv1681; }
}
{ R26 rv1682 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1660))).f_BASE);
return rv1682; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1683 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1660))).f_BASE);
return rv1683; }
}
{ R26 rv1684 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1660))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1660))).f_BASE);
return rv1684; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1685 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1660))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1660))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1685; }
}
{ R26 rv1686 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1660))).f_BASE))).f_NLITS);
return rv1686; }
}
}
else if (((l_K_1661 == g_T_STR) || (l_K_1661 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1687 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1687; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1688 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1688; }
}
}
else if ((l_K_1661 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1689 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1660))).f_DIMS);
return rv1689; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1690 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1690; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1691 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1691; }
}
}
else if ((l_K_1661 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1660))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1692 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1692; }
}
{ R26 rv1693 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1693; }
}
}
else if (((l_K_1661 == g_T_ABS) || (l_K_1661 == g_T_REC)))
{
{
R22 * l_U_1694; memset(&l_U_1694, 0, sizeof l_U_1694);
l_U_1694 = l_T_1660;
if ((l_K_1661 == g_T_ABS))
{
l_U_1694 = ((*(R22 *)rt_nil_check(l_T_1660))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1694))).f_KIND == g_T_REC))
{
{
R24 * l_F_1695; memset(&l_F_1695, 0, sizeof l_F_1695);
l_F_1695 = r_FIND_FIELD(l_U_1694, p_NAME);
if ((!(l_F_1695 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1695))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1696 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1695))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1695))).f_T);
return rv1696; }
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
R22 * l_T_1697; memset(&l_T_1697, 0, sizeof l_T_1697);
l_T_1697 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1698; memset(&l_D_1698, 0, sizeof l_D_1698);
S_R10(&l_D_1698, r_NUM(((*(R22 *)rt_nil_check(l_T_1697))).f_DIMS), 0);
R10 l_X_1699; memset(&l_X_1699, 0, sizeof l_X_1699);
S_R10(&l_X_1699, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1700; memset(&l_R_1700, 0, sizeof l_R_1700);
S_R10(&l_R_1700, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1701; memset(&l_ELEM_1701, 0, sizeof l_ELEM_1701);
l_ELEM_1701 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1702; memset(&l_C_1702, 0, sizeof l_C_1702);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1703; memset(&l_TS_1703, 0, sizeof l_TS_1703);
l_TS_1703 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1703))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1703))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1703))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1701 = r_RESOLVE(l_TS_1703);
}
}
{
R22 * l_A_1704; memset(&l_A_1704, 0, sizeof l_A_1704);
l_A_1704 = r_ARRAY_OF(l_ELEM_1701, ((rt_int)1LL));
S_R10(&l_C_1702, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1697), l_X_1699, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1704))).f_CNAME), 0);
S_R10(&l_C_1702, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1702, l_R_1700, l_R_1700, l_R_1700), 0);
S_R10(&l_C_1702, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1702, l_R_1700, l_R_1700, l_D_1698), 0);
S_R10(&l_C_1702, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1702, l_R_1700, l_D_1698, l_R_1700), 0);
S_R10(&l_C_1702, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1702, l_D_1698), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1702, r_FMT2(rt_str("@ @", 3), l_C_1702, r_INIT_CODE(l_ELEM_1701, r_FMT1(rt_str("@.p[i]", 6), l_R_1700))), 0);
S_R10(&l_C_1702, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1702, l_R_1700, l_X_1699, l_R_1700), 0);
S_R10(&l_C_1702, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1702, l_X_1699), 0);
}
else
{
S_R10(&l_C_1702, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1702, l_R_1700, l_X_1699, l_X_1699), 0);
S_R10(&l_C_1702, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1702, l_X_1699, l_X_1699, l_X_1699), 0);
}
{ R26 rv1705 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1702, l_R_1700), l_A_1704);
return rv1705; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1706; memset(&l_N_1706, 0, sizeof l_N_1706);
l_N_1706 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1706))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1707 = l_N_1706;
return rv1707; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1708; memset(&l_K_1708, 0, sizeof l_K_1708);
l_K_1708 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1708 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1709 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1709; }
}
}
{ R26 rv1710 = r_INT_ET(((rt_int)64LL));
return rv1710; }
}
else if ((l_K_1708 == g_T_FLOAT))
{
{ R26 rv1711 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1711; }
}
else if ((l_K_1708 == g_T_BOOL))
{
{ R26 rv1712 = r_INT_ET(((rt_int)1LL));
return rv1712; }
}
else if ((l_K_1708 == g_T_ENUM))
{
{ R26 rv1713 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1713; }
}
else if ((l_K_1708 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1714 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1714; }
}
{ R26 rv1715 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1715; }
}
else if ((l_K_1708 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1716 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1716; }
}
{ R26 rv1717 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1717; }
}
else if (((l_K_1708 == g_T_PTR) || (l_K_1708 == g_T_SEM)))
{
{ R26 rv1718 = r_INT_ET(((rt_int)64LL));
return rv1718; }
}
else if ((l_K_1708 == g_T_ABS))
{
{ R26 rv1719 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1719; }
}
else if ((l_K_1708 == g_T_ARR))
{
{ R26 rv1720 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1720; }
}
{ R26 rv1721 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1721; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1722 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1722; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1723 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1723; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1724; memset(&l_RT_1724, 0, sizeof l_RT_1724);
l_RT_1724 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1724))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1724))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1725; memset(&l_TMP_1725, 0, sizeof l_TMP_1725);
S_R10(&l_TMP_1725, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1726; memset(&l_C_1726, 0, sizeof l_C_1726);
S_R10(&l_C_1726, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1725, l_TMP_1725, l_TMP_1725), 0);
S_R10(&l_C_1726, r_FMT3(rt_str("@@ @; })", 8), l_C_1726, r_INIT_CODE(l_RT_1724, l_TMP_1725), l_TMP_1725), 0);
{ R26 rv1727 = r_MKET(l_C_1726, p_T);
return rv1727; }
}
}
{ R26 rv1728 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1728; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1729 = 0;
return rv1729; }
}
{
R12 * l_Y_1730; memset(&l_Y_1730, 0, sizeof l_Y_1730);
l_Y_1730 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1730 == NULL))
{
{ rt_int rv1731 = 0;
return rv1731; }
}
{ rt_int rv1732 = (((*(R12 *)rt_nil_check(l_Y_1730))).f_KIND == g_Y_TYPE);
return rv1732; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1733 = r_INT_ET(((rt_int)100000000LL));
return rv1733; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1734 = r_INT_ET(((rt_int)15LL));
return rv1734; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1735 = r_INT_ET(((rt_int)0LL));
return rv1735; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1736; memset(&l_T_1736, 0, sizeof l_T_1736);
l_T_1736 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1736 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1736 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1736 = r_REAL_TYPE(l_T_1736);
if ((!(((*(R22 *)rt_nil_check(l_T_1736))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1736))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1737; memset(&l_TMP_1737, 0, sizeof l_TMP_1737);
S_R10(&l_TMP_1737, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1738; memset(&l_R_1738, 0, sizeof l_R_1738);
S_R10(&l_R_1738, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1736))).f_CNAME, l_TMP_1737, l_TMP_1737, l_TMP_1737), 0);
R24 * l_F_1739; memset(&l_F_1739, 0, sizeof l_F_1739);
l_F_1739 = ((*(R22 *)rt_nil_check(l_T_1736))).f_FIELDS;
S_R10(&l_R_1738, r_FMT2(rt_str("@@", 2), l_R_1738, r_INIT_CODE(l_T_1736, l_TMP_1737)), 0);
for (;;) {
if ((l_F_1739 == NULL)) goto L_end1740;
{
if ((((*(R24 *)rt_nil_check(l_F_1739))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1739))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1739))).f_LABELS, (r_TAG_VALUE(l_T_1736, ((*(R24 *)rt_nil_check(l_F_1739))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1736, ((*(R24 *)rt_nil_check(l_F_1739))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1741; memset(&l_INIT_1741, 0, sizeof l_INIT_1741);
l_INIT_1741 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1739))).f_NAME);
if ((l_INIT_1741 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1739))).f_NAME);
}
S_R10(&l_R_1738, r_FMT2(rt_str("@ @", 3), l_R_1738, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1739))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1737, ((*(R24 *)rt_nil_check(l_F_1739))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1741))).f_A, ((*(R24 *)rt_nil_check(l_F_1739))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1741))).f_LINE, l_TMP_1737)), 0);
}
}
}
l_F_1739 = ((*(R24 *)rt_nil_check(l_F_1739))).f_NEXT;
}
RT_B_TICK();
} L_end1740: ;
{
R21 * l_P_1742; memset(&l_P_1742, 0, sizeof l_P_1742);
l_P_1742 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1742 == NULL)) goto L_end1743;
{
{
R24 * l_G_1744; memset(&l_G_1744, 0, sizeof l_G_1744);
l_G_1744 = r_FIND_VFIELD(l_T_1736, ((*(R21 *)rt_nil_check(l_P_1742))).f_NAME);
if ((l_G_1744 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1742))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1742))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1744))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1742))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1742))).f_NAME);
}
r_CHECK_VARIANT(l_G_1744, l_T_1736, NULL, ((*(R21 *)rt_nil_check(l_P_1742))).f_LINE);
}
l_P_1742 = ((*(R21 *)rt_nil_check(l_P_1742))).f_NEXT;
}
RT_B_TICK();
} L_end1743: ;
}
{ R26 rv1745 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1738, l_TMP_1737), l_T_1736);
return rv1745; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1746; memset(&l_P_1746, 0, sizeof l_P_1746);
l_P_1746 = p_L;
for (;;) {
if ((l_P_1746 == NULL)) goto L_end1747;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1746))).f_NAME, p_NAME))
{
{ R21 * rv1748 = l_P_1746;
return rv1748; }
}
l_P_1746 = ((*(R21 *)rt_nil_check(l_P_1746))).f_NEXT;
}
RT_B_TICK();
} L_end1747: ;
{ R21 * rv1749 = NULL;
return rv1749; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1750; memset(&l_DIMS_1750, 0, sizeof l_DIMS_1750);
l_DIMS_1750 = ((rt_int)0LL);
R21 * l_P_1751; memset(&l_P_1751, 0, sizeof l_P_1751);
l_P_1751 = p_E;
R22 * l_ELEM_1752; memset(&l_ELEM_1752, 0, sizeof l_ELEM_1752);
l_ELEM_1752 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1751))).f_KIND == g_N_ARRCONS))) goto L_end1753;
{
l_DIMS_1750 = rt_add(l_DIMS_1750, ((rt_int)1LL));
l_P_1751 = ((*(R21 *)rt_nil_check(l_P_1751))).f_A;
}
RT_B_TICK();
} L_end1753: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1752 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1752 == NULL))
{
l_ELEM_1752 = (r_EXPR(l_P_1751, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1752))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1752))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1752 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1750);
{
R22 * l_A_1754; memset(&l_A_1754, 0, sizeof l_A_1754);
l_A_1754 = r_ARRAY_OF(l_ELEM_1752, l_DIMS_1750);
R10 l_TMP_1755; memset(&l_TMP_1755, 0, sizeof l_TMP_1755);
S_R10(&l_TMP_1755, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1756; memset(&l_R_1756, 0, sizeof l_R_1756);
S_R10(&l_R_1756, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1754))).f_CNAME, l_TMP_1755, l_TMP_1755), 0);
rt_int l_K_1757; memset(&l_K_1757, 0, sizeof l_K_1757);
l_K_1757 = ((rt_int)0LL);
{
R21 * l_Q_1758; memset(&l_Q_1758, 0, sizeof l_Q_1758);
l_Q_1758 = p_E;
R25 * l_TAIL_1759; memset(&l_TAIL_1759, 0, sizeof l_TAIL_1759);
l_TAIL_1759 = NULL;
{ rt_int it1761_lo = ((rt_int)1LL), it1761_hi = l_DIMS_1750;
for (rt_int it1761 = it1761_lo; it1761 <= it1761_hi; it1761++) {
{
{
R25 * l_B_1762; memset(&l_B_1762, 0, sizeof l_B_1762);
l_B_1762 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1763; memset(&l_N_1763, 0, sizeof l_N_1763);
l_N_1763 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1758))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1762)), ({ R25 rc1764; memset(&rc1764, 0, sizeof rc1764);  S_R10(&rc1764.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1764.f_HI, r_NUM(rt_sub(l_N_1763, ((rt_int)1LL))), 0); S_R23(&rc1764.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1764.f_MHI, r_SOME(rt_sub(l_N_1763, ((rt_int)1LL))), 0); rc1764.f_ANYARG = 0; rc1764.f_NEXT = NULL; rc1764; }), 0);
if ((l_TAIL_1759 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1754))).f_BOUNDS = l_B_1762;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1759))).f_NEXT = l_B_1762;
}
l_TAIL_1759 = l_B_1762;
}
l_Q_1758 = ((*(R21 *)rt_nil_check(l_Q_1758))).f_A;
}
RT_B_TICK();
if (it1761 == it1761_hi) break;
} } L_end1760: ;
}
S_R10(&l_R_1756, r_FMT2(rt_str("@@); ", 5), l_R_1756, l_TMP_1755), 0);
l_P_1751 = p_E;
{ rt_int it1766_lo = ((rt_int)0LL), it1766_hi = rt_sub(l_DIMS_1750, ((rt_int)1LL));
for (rt_int it1766 = it1766_lo; it1766 <= it1766_hi; it1766++) {
{
S_R10(&l_R_1756, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1756, l_TMP_1755, r_NUM(it1766), l_TMP_1755), 0);
S_R10(&l_R_1756, r_FMT3(rt_str("@@] = @;", 8), l_R_1756, r_NUM(it1766), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1751))).f_A), ((rt_int)1LL)))), 0);
l_P_1751 = ((*(R21 *)rt_nil_check(l_P_1751))).f_A;
}
RT_B_TICK();
if (it1766 == it1766_hi) break;
} } L_end1765: ;
S_R10(&l_R_1756, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1756, l_TMP_1755, l_TMP_1755, r_NUM(l_DIMS_1750)), 0);
S_R10(&l_R_1756, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1756, l_TMP_1755, l_TMP_1755), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1750, l_A_1754, l_TMP_1755, &l_R_1756, &l_K_1757);
{ R26 rv1767 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1756, l_TMP_1755), l_A_1754);
return rv1767; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1768; memset(&l_P_1768, 0, sizeof l_P_1768);
l_P_1768 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1768 == NULL)) goto L_end1769;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1768))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1768, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1768, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1768 = ((*(R21 *)rt_nil_check(l_P_1768))).f_NEXT;
}
RT_B_TICK();
} L_end1769: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1770 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1770; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1771 = 0;
return rv1771; }
}
{ rt_int rv1772 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1772; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1773; memset(&l_P_1773, 0, sizeof l_P_1773);
l_P_1773 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1773 == NULL)) goto L_end1774;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1773, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1773))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1773))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1773, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1773))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1773 = ((*(R21 *)rt_nil_check(l_P_1773))).f_NEXT;
}
RT_B_TICK();
} L_end1774: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1775; memset(&l_T_1775, 0, sizeof l_T_1775);
l_T_1775 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1775))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1775))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1775))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1776 = l_T_1775;
return rv1776; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1777; memset(&l_T_1777, 0, sizeof l_T_1777);
l_T_1777 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1778; memset(&l_V_1778, 0, sizeof l_V_1778);
S_R26(&l_V_1778, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1777), 0);
R22 * l_RT_1779; memset(&l_RT_1779, 0, sizeof l_RT_1779);
l_RT_1779 = r_REAL_TYPE(l_T_1777);
if (((((*(R22 *)rt_nil_check((l_V_1778).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_INT))
{
{ R26 rv1780 = r_MKET(r_RANGE_CHECK(l_RT_1779, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1778).f_C), r_NO_TEXT()), l_T_1777);
return rv1780; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_BOOL))
{
{ R26 rv1781 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1778).f_C), l_T_1777);
return rv1781; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_ENUM))
{
{ R26 rv1782 = r_MKET(r_ENUM_OF_BITS(l_RT_1779, (l_V_1778).f_C), l_T_1777);
return rv1782; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_FLOAT))
{
{ R26 rv1783 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1778).f_C), l_T_1777);
return rv1783; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_STR))
{
{ R26 rv1784 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1778).f_C), l_T_1777);
return rv1784; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1785; memset(&l_C_1785, 0, sizeof l_C_1785);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1785, r_CONVERT(l_V_1778, l_T_1777, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1779))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1779))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1779))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1778).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1785, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1785, ((*(R22 *)rt_nil_check(l_RT_1779))).f_LEN_C), 0);
}
{ R26 rv1786 = r_MKET(l_C_1785, l_T_1777);
return rv1786; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1787 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1787; }
}
}
{ R10 rv1788 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1788; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1789; memset(&l_NAME_1789, 0, sizeof l_NAME_1789);
S_R10(&l_NAME_1789, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1790; memset(&l_L_1790, 0, sizeof l_L_1790);
l_L_1790 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1791; memset(&l_R_1791, 0, sizeof l_R_1791);
S_R10(&l_R_1791, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1790 == NULL)) goto L_end1792;
{
{
R21 * l_V_1793; memset(&l_V_1793, 0, sizeof l_V_1793);
l_V_1793 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1794; memset(&l_FOUND_1794, 0, sizeof l_FOUND_1794);
l_FOUND_1794 = 0;
for (;;) {
if ((l_V_1793 == NULL)) goto L_end1795;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1793))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1790))).f_NAME))
{
S_R10(&l_R_1791, r_FMT2(rt_str("@@, ", 4), l_R_1791, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1793))).f_A, NULL)).f_C), 0);
l_FOUND_1794 = 1;
}
l_V_1793 = ((*(R21 *)rt_nil_check(l_V_1793))).f_NEXT;
}
RT_B_TICK();
} L_end1795: ;
if ((!l_FOUND_1794))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1790))).f_NAME);
}
}
l_L_1790 = ((*(R21 *)rt_nil_check(l_L_1790))).f_NEXT;
}
RT_B_TICK();
} L_end1792: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1789, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1791, l_NAME_1789, l_NAME_1789));
{ R10 rv1796 = r_FMT2(rt_str("@, @", 4), l_NAME_1789, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1796; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1797; memset(&l_SEM_1797, 0, sizeof l_SEM_1797);
l_SEM_1797 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1797 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1797)
{
{
R22 * l_T_1798; memset(&l_T_1798, 0, sizeof l_T_1798);
l_T_1798 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1798 = p_WANT;
}
}
{ R26 rv1799 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1798))).f_SCALE)), l_T_1798);
return rv1799; }
}
}
{
R22 * l_T_1800; memset(&l_T_1800, 0, sizeof l_T_1800);
l_T_1800 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1801; memset(&l_P_1801, 0, sizeof l_P_1801);
l_P_1801 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1801))).f_TARGET = l_T_1800;
((*(R22 *)rt_nil_check(l_P_1801))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1800))
{
{ R26 rv1802 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1800), r_INIT_CODE(l_T_1800, r_MK(rt_str("(*p)", 4)))), l_P_1801);
return rv1802; }
}
{ R26 rv1803 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_1800), r_CTYPE(l_T_1800)), l_P_1801);
return rv1803; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1804; memset(&l_P_1804, 0, sizeof l_P_1804);
l_P_1804 = p_L;
{ rt_int it1806_lo = ((rt_int)1LL), it1806_hi = p_K;
for (rt_int it1806 = it1806_lo; it1806 <= it1806_hi; it1806++) {
{
if ((!(l_P_1804 == NULL)))
{
l_P_1804 = ((*(R21 *)rt_nil_check(l_P_1804))).f_NEXT;
}
}
RT_B_TICK();
if (it1806 == it1806_hi) break;
} } L_end1805: ;
{ R21 * rv1807 = l_P_1804;
return rv1807; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1808; memset(&l_N_1808, 0, sizeof l_N_1808);
l_N_1808 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1808 < p_LO) || (l_N_1808 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1809; memset(&l_L_1809, 0, sizeof l_L_1809);
l_L_1809 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1809 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1809))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1809))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1809))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1810 = r_MK(rt_str("1", 1));
return rv1810; }
}
{ R10 rv1811 = r_MK(rt_str("0", 1));
return rv1811; }
}
if (((((*(R21 *)rt_nil_check(l_L_1809))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1809))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1809))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1812 = r_MK(rt_str("1", 1));
return rv1812; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1809))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1813 = r_MK(rt_str("0", 1));
return rv1813; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1814 = r_MK(rt_str("1", 1));
return rv1814; }
}
{ R10 rv1815 = r_MK(rt_str("0", 1));
return rv1815; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1816 = 0;
return rv1816; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1817 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1817; }
}
{ rt_int rv1818 = 0;
return rv1818; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1819 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1819; }
}
{ R21 * rv1820 = p_E;
return rv1820; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1821; memset(&l_NAMES_1821, 0, sizeof l_NAMES_1821);
l_NAMES_1821 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1821, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1822; memset(&l_L_1822, 0, sizeof l_L_1822);
l_L_1822 = (p_NAME).f_LEN;
{ rt_int it1824_lo = ((rt_int)0LL), it1824_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1822), ((rt_int)2LL));
for (rt_int it1824 = it1824_lo; it1824 <= it1824_hi; it1824++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1821, it1824, it1824), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1821, rt_add(rt_add(it1824, l_L_1822), ((rt_int)1LL)), rt_add(rt_add(it1824, l_L_1822), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1821, rt_add(it1824, ((rt_int)1LL)), rt_add(it1824, l_L_1822)), r_STR(p_NAME, l_L_1822)))
{
{
rt_int l_J_1825; memset(&l_J_1825, 0, sizeof l_J_1825);
l_J_1825 = rt_add(rt_add(it1824, l_L_1822), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1821, l_J_1825, l_J_1825), rt_str(" ", 1))) goto L_end1826;
{
l_J_1825 = rt_add(l_J_1825, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1826: ;
{ R10 rv1827 = r_MKN(rt_b_slice(l_NAMES_1821, rt_add(rt_add(it1824, l_L_1822), ((rt_int)2LL)), rt_sub(l_J_1825, ((rt_int)1LL))));
return rv1827; }
}
}
}
}
RT_B_TICK();
if (it1824 == it1824_hi) break;
} } L_end1823: ;
{ R10 rv1828 = r_NO_TEXT();
return rv1828; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1829; memset(&l_NAME_1829, 0, sizeof l_NAME_1829);
S_R10(&l_NAME_1829, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1830; memset(&l_LINE_1830, 0, sizeof l_LINE_1830);
l_LINE_1830 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1831; memset(&l_N_1831, 0, sizeof l_N_1831);
l_N_1831 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1829, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1829, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1832; memset(&l_TGT_1832, 0, sizeof l_TGT_1832);
l_TGT_1832 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1833; memset(&l_S_1833, 0, sizeof l_S_1833);
l_S_1833 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1830);
R21 * l_SRC_1834; memset(&l_SRC_1834, 0, sizeof l_SRC_1834);
l_SRC_1834 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1832 == NULL) || (l_SRC_1834 == NULL)))
{
r_FAILT(l_LINE_1830, rt_str("the wrong arguments for ", 24), l_NAME_1829);
}
if (r_TEQS(l_NAME_1829, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1833))).f_A = l_TGT_1832;
}
else
{
if ((l_N_1831 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1830, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1833))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1830);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1833))).f_A))).f_A = l_TGT_1832;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1833))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1833))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1833))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1834), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1829, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1830);
{
R14 l_SAVED_CODE_1835; memset(&l_SAVED_CODE_1835, 0, sizeof l_SAVED_CODE_1835);
S_R14(&l_SAVED_CODE_1835, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1836; memset(&l_C_1836, 0, sizeof l_C_1836);
S_R10(&l_C_1836, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1837; memset(&l_P_1837, 0, sizeof l_P_1837);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1838; memset(&rc1838, 0, sizeof rc1838);  rc1838.f_HEAD = NULL; rc1838.f_TAIL = NULL; rc1838; }), 0);
r_ASSIGN_STMT(l_S_1833);
l_P_1837 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1837 == NULL)) goto L_end1839;
{
S_R10(&l_C_1836, r_FMT2(rt_str("@ @", 3), l_C_1836, ((*(R15 *)rt_nil_check(l_P_1837))).f_T), 0);
l_P_1837 = ((*(R15 *)rt_nil_check(l_P_1837))).f_NEXT;
}
RT_B_TICK();
} L_end1839: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1835, 0);
{ R26 rv1840 = r_MKET(r_CATS(l_C_1836, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1840; }
}
}
}
if (r_TEQS(l_NAME_1829, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1841; memset(&l_S_1841, 0, sizeof l_S_1841);
l_S_1841 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1830);
((*(R21 *)rt_nil_check(l_S_1841))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1841))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1841))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1841))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1842 = r_EXPR(l_S_1841, p_WANT);
return rv1842; }
}
}
{
R10 l_SYM__1843; memset(&l_SYM__1843, 0, sizeof l_SYM__1843);
S_R10(&l_SYM__1843, r_OPERATOR_SYMBOL(l_NAME_1829), 0);
rt_int l_UNARY_OP_1844; memset(&l_UNARY_OP_1844, 0, sizeof l_UNARY_OP_1844);
l_UNARY_OP_1844 = ((r_TEQS(l_NAME_1829, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1829, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1829, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1845; memset(&l_X_1845, 0, sizeof l_X_1845);
if (l_UNARY_OP_1844)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1845 = r_NEW_NODE(g_N_UNOP, l_LINE_1830);
S_R10(&((*(R21 *)rt_nil_check(l_X_1845))).f_NAME, l_SYM__1843, 0);
((*(R21 *)rt_nil_check(l_X_1845))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1846 = r_EXPR(r_QUALIFIED(l_X_1845, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1830), p_WANT);
return rv1846; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1845 = r_BIN_NODE(l_SYM__1843, l_LINE_1830, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1843, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1845))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1829, (l_NAME_1829).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1845))).f_FL = ((rt_int)2LL);
}
{ R26 rv1847 = r_EXPR(r_QUALIFIED(l_X_1845, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1830), p_WANT);
return rv1847; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1848; memset(&l_R_1848, 0, sizeof l_R_1848);
l_R_1848 = p_X;
R21 * l_P_1849; memset(&l_P_1849, 0, sizeof l_P_1849);
l_P_1849 = p_Q;
for (;;) {
if ((l_P_1849 == NULL)) goto L_end1850;
{
if ((l_R_1848 == p_X))
{
l_R_1848 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1848))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1849))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1849))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1849))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1848))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1849))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1848))).f_B = l_P_1849;
}
l_P_1849 = ((*(R21 *)rt_nil_check(l_P_1849))).f_NEXT;
}
RT_B_TICK();
} L_end1850: ;
{ R21 * rv1851 = l_R_1848;
return rv1851; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1852 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1852; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1853; memset(&l_Y_1853, 0, sizeof l_Y_1853);
l_Y_1853 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1853 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1853))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1854; memset(&l_T_1854, 0, sizeof l_T_1854);
l_T_1854 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1853))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1854))).f_KIND == g_T_ENUM))
{
{ R22 * rv1855 = l_T_1854;
return rv1855; }
}
}
}
}
{ R22 * rv1856 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1856; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1857 = 1;
return rv1857; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1858 = 1;
return rv1858; }
}
{ rt_int rv1859 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1859; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1860 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1860; }
}
{ R21 * rv1861 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1861; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1862; memset(&l_NAME_1862, 0, sizeof l_NAME_1862);
S_R10(&l_NAME_1862, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1863; memset(&l_LINE_1863, 0, sizeof l_LINE_1863);
l_LINE_1863 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1862)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1862, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1862, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1862, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1864 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1864; }
}
if ((r_TEQS(l_NAME_1862, rt_str("PUT", 3)) || r_TEQS(l_NAME_1862, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1865; memset(&l_V_1865, 0, sizeof l_V_1865);
S_R26(&l_V_1865, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1865).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1863, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1865).f_T, rt_str("the terminal", 12), l_LINE_1863);
if (r_TEQS(l_NAME_1862, rt_str("PUT", 3)))
{
{ R26 rv1866 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1865).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1866; }
}
{ R26 rv1867 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1865).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1867; }
}
}
else if (r_TEQS(l_NAME_1862, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1868 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1868; }
}
else if (r_TEQS(l_NAME_1862, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1869 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1869; }
}
else if (r_TEQS(l_NAME_1862, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1870 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1870; }
}
else if (r_TEQS(l_NAME_1862, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1871 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1871; }
}
else if (r_TEQS(l_NAME_1862, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1872 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1872; }
}
else if (r_TEQS(l_NAME_1862, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1873 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1873; }
}
if (r_TEQS(l_NAME_1862, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1874 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1863);
return rv1874; }
}
else if (r_TEQS(l_NAME_1862, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1875 = r_TO_FIXED_CALL(p_E);
return rv1875; }
}
else if (r_TEQS(l_NAME_1862, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1876; memset(&l_V_1876, 0, sizeof l_V_1876);
S_R26(&l_V_1876, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1877; memset(&l_P_1877, 0, sizeof l_P_1877);
S_R23(&l_P_1877, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1878; memset(&l_VT_1878, 0, sizeof l_VT_1878);
l_VT_1878 = r_REAL_TYPE((l_V_1876).f_T);
R22 * l_T_1879; memset(&l_T_1879, 0, sizeof l_T_1879);
l_T_1879 = r_FLOAT_TYPE((l_P_1877).f_V);
R10 l_SINGLE_1880; memset(&l_SINGLE_1880, 0, sizeof l_SINGLE_1880);
S_R10(&l_SINGLE_1880, r_SINGLE_C((l_P_1877).f_V), 0);
R10 l_TR_1881; memset(&l_TR_1881, 0, sizeof l_TR_1881);
S_R10(&l_TR_1881, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1882; memset(&l_R_1882, 0, sizeof l_R_1882);
l_R_1882 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1882 == NULL))
{
l_R_1882 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1882))).f_KIND == g_N_QUAL))
{
l_R_1882 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1882))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1882))).f_NAME).f_LEN), l_LINE_1863);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1882))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1881, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1882))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1863, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1878))).f_KIND == g_T_INT))
{
{ R26 rv1883 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1876).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1878))).f_SCALE), l_SINGLE_1880, l_TR_1881), l_T_1879);
return rv1883; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1878))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1877).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1878))).f_SCALE))))
{
{
R21 * l_Q_1884; memset(&l_Q_1884, 0, sizeof l_Q_1884);
l_Q_1884 = r_NEW_NODE(g_N_QUAL, l_LINE_1863);
R21 * l_SAVED_Q_1885; memset(&l_SAVED_Q_1885, 0, sizeof l_SAVED_Q_1885);
l_SAVED_Q_1885 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1886; memset(&l_L_1886, 0, sizeof l_L_1886);
((*(R21 *)rt_nil_check(l_Q_1884))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1884;
S_R26(&l_L_1886, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1885;
{ R26 rv1887 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1886).f_C, l_SINGLE_1880, l_TR_1881), l_T_1879);
return rv1887; }
}
}
{ R26 rv1888 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1876).f_C, l_SINGLE_1880, l_TR_1881), l_T_1879);
return rv1888; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1878))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1878))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1878))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1863, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1889 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1876).f_C, l_SINGLE_1880, l_TR_1881), l_T_1879);
return rv1889; }
}
r_FAIL(l_LINE_1863, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1862, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1890 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1863);
return rv1890; }
}
else if (r_TEQS(l_NAME_1862, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1891; memset(&l_V_1891, 0, sizeof l_V_1891);
S_R26(&l_V_1891, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1891).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1892 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1891).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1891).f_T))).f_SCALE));
return rv1892; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1891).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1893 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1891).f_C), (l_V_1891).f_T);
return rv1893; }
}
r_FAIL(l_LINE_1863, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1862, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1862, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1894; memset(&l_V_1894, 0, sizeof l_V_1894);
S_R26(&l_V_1894, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1895; memset(&l_T_1895, 0, sizeof l_T_1895);
l_T_1895 = r_REAL_TYPE((l_V_1894).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1895))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1863, rt_str("an enumerated value expected by ", 32), l_NAME_1862);
}
if (r_IS_UNORDERED(l_T_1895))
{
r_FAILT(l_LINE_1863, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1862);
}
if (r_TEQS(l_NAME_1862, rt_str("SUCC", 4)))
{
{ R26 rv1896 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1894).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1895))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1895))).f_BASE);
return rv1896; }
}
{ R26 rv1897 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1894).f_C), ((*(R22 *)rt_nil_check(l_T_1895))).f_BASE);
return rv1897; }
}
}
else if (r_TEQS(l_NAME_1862, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1898; memset(&l_V_1898, 0, sizeof l_V_1898);
S_R26(&l_V_1898, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1899; memset(&l_K_1899, 0, sizeof l_K_1899);
l_K_1899 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1898).f_T)))).f_KIND;
R22 * l_T_1900; memset(&l_T_1900, 0, sizeof l_T_1900);
l_T_1900 = r_NEW_TYP(l_K_1899);
if (((!(l_K_1899 == g_T_STR)) && (!(l_K_1899 == g_T_BITS))))
{
r_FAIL(l_LINE_1863, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1900))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1898).f_T))).f_BASE;
{ R26 rv1901 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1898).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1900);
return rv1901; }
}
}
else if (r_TEQS(l_NAME_1862, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1902 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1902; }
}
else if (r_TEQS(l_NAME_1862, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1903 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1903; }
}
else if (((r_TEQS(l_NAME_1862, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1862, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1862, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1904; memset(&l_BITS_1904, 0, sizeof l_BITS_1904);
S_R10(&l_BITS_1904, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1862, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1904, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1862, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1904, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1905; memset(&l_V_1905, 0, sizeof l_V_1905);
S_R26(&l_V_1905, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1905).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1863, rt_str("a character string expected by ", 31), l_NAME_1862);
}
r_ASCII_ONLY((l_V_1905).f_T, r_STR(l_NAME_1862, (l_NAME_1862).f_LEN), l_LINE_1863);
{ R26 rv1906 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1905).f_C, l_BITS_1904), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1906; }
}
}
}
else if ((r_TEQS(l_NAME_1862, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1862, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1907; memset(&l_S_1907, 0, sizeof l_S_1907);
S_R23(&l_S_1907, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1908; memset(&l_R_1908, 0, sizeof l_R_1908);
S_R23(&l_R_1908, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1908).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1863, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1863);
if (r_TEQS(l_NAME_1862, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1909 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1907).f_V));
return rv1909; }
}
{ R26 rv1910 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1907).f_V));
return rv1910; }
}
}
else if (((r_TEQS(l_NAME_1862, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1862, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1862, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1911; memset(&l_P_1911, 0, sizeof l_P_1911);
S_R23(&l_P_1911, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1912; memset(&l_T_1912, 0, sizeof l_T_1912);
l_T_1912 = r_FLOAT_TYPE((l_P_1911).f_V);
R10 l_C_1913; memset(&l_C_1913, 0, sizeof l_C_1913);
S_R10(&l_C_1913, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1911).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1913, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1862, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1914 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1913), l_T_1912);
return rv1914; }
}
else if (r_TEQS(l_NAME_1862, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1915 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1913), l_T_1912);
return rv1915; }
}
{ R26 rv1916 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1913), l_T_1912);
return rv1916; }
}
}
else if (r_TEQS(l_NAME_1862, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1917 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1917; }
}
else if (r_TEQS(l_NAME_1862, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1918 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1918; }
}
else if (r_TEQS(l_NAME_1862, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1919 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1919; }
}
{ R26 rv1920 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1920; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1921; memset(&l_T_1921, 0, sizeof l_T_1921);
l_T_1921 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1922; memset(&l_K_1922, 0, sizeof l_K_1922);
l_K_1922 = ((*(R22 *)rt_nil_check(l_T_1921))).f_KIND;
R22 * l_S_1923; memset(&l_S_1923, 0, sizeof l_S_1923);
l_S_1923 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1922 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1921))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1924 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1923);
return rv1924; }
}
{ R26 rv1925 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1921))).f_SCALE)), l_S_1923);
return rv1925; }
}
else if ((l_K_1922 == g_T_FLOAT))
{
{ R26 rv1926 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1921))).f_SCALE)), l_S_1923);
return rv1926; }
}
else if ((l_K_1922 == g_T_BOOL))
{
{ R26 rv1927 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1923);
return rv1927; }
}
else if ((l_K_1922 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1921))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1928 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1923);
return rv1928; }
}
{ R26 rv1929 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1921))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1923);
return rv1929; }
}
else if (((l_K_1922 == g_T_STR) || (l_K_1922 == g_T_BITS)))
{
{ R26 rv1930 = r_MKET((p_V).f_C, l_S_1923);
return rv1930; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1921));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1931; memset(&l_V_1931, 0, sizeof l_V_1931);
S_R26(&l_V_1931, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1932; memset(&l_T_1932, 0, sizeof l_T_1932);
l_T_1932 = r_REAL_TYPE((l_V_1931).f_T);
rt_int l_N_1933; memset(&l_N_1933, 0, sizeof l_N_1933);
l_N_1933 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1934; memset(&l_RND_1934, 0, sizeof l_RND_1934);
S_R10(&l_RND_1934, r_ROUNDING_ARG(p_E, l_N_1933), 0);
rt_int l_S_1935; memset(&l_S_1935, 0, sizeof l_S_1935);
l_S_1935 = ((rt_int)0LL);
if (((l_N_1933 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1935 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1936; memset(&l_K_1936, 0, sizeof l_K_1936);
l_K_1936 = ((rt_int)2LL);
for (;;) {
if ((l_K_1936 >= l_N_1933)) goto L_end1937;
{
{
R21 * l_R_1938; memset(&l_R_1938, 0, sizeof l_R_1938);
l_R_1938 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1936));
if ((r_IS_ROUNDING(l_R_1938) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1936)))).f_KIND == g_N_QUAL) && (l_K_1936 == rt_sub(l_N_1933, ((rt_int)1LL)))))))
{
if ((!(l_K_1936 == rt_sub(l_N_1933, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1938))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1938))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1938))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1938, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1938))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1938))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1938, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1936 = rt_add(l_K_1936, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1937: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1939 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1935), l_RND_1934), r_INT_TYPE(l_S_1935));
return rv1939; }
}
if ((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1940; memset(&l_SAVED_1940, 0, sizeof l_SAVED_1940);
l_SAVED_1940 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1941; memset(&l_C_1941, 0, sizeof l_C_1941);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1934, rt_str("1", 1));
S_R10(&l_C_1941, r_RESCALE_C((l_V_1931).f_C, ((*(R22 *)rt_nil_check(l_T_1932))).f_SCALE, l_S_1935), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1940;
{ R26 rv1942 = r_MKET(l_C_1941, r_INT_TYPE(l_S_1935));
return rv1942; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_FLOAT))
{
{ R26 rv1943 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1931).f_C, r_NUM(l_S_1935), l_RND_1934), r_INT_TYPE(l_S_1935));
return rv1943; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_1932))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1932))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1932))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1944 = r_MKET(r_RESCALE_C((l_V_1931).f_C, ((rt_int)0LL), l_S_1935), r_INT_TYPE(l_S_1935));
return rv1944; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_BITS))
{
{ R26 rv1945 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1931).f_C), ((rt_int)0LL), l_S_1935), r_INT_TYPE(l_S_1935));
return rv1945; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1932))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1932, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1946 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1931).f_C, r_NUM(l_S_1935), l_RND_1934), r_INT_TYPE(l_S_1935));
return rv1946; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1931).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1947; memset(&l_T_1947, 0, sizeof l_T_1947);
l_T_1947 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1948; memset(&l_K_1948, 0, sizeof l_K_1948);
l_K_1948 = ((*(R22 *)rt_nil_check(l_T_1947))).f_KIND;
if ((l_K_1948 == g_T_BITS))
{
{ R26 rv1949 = p_V;
return rv1949; }
}
else if ((l_K_1948 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1947))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1947))).f_REPS))).f_B == NULL)))
{
{ R26 rv1950 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1947)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1947)));
return rv1950; }
}
}
{ R26 rv1951 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1947))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1947)));
return rv1951; }
}
else if ((l_K_1948 == g_T_STR))
{
{ R26 rv1952 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1952; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1948 == g_T_INT))
{
{ R26 rv1953 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1953; }
}
else if ((l_K_1948 == g_T_BOOL))
{
{ R26 rv1954 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1954; }
}
else if ((l_K_1948 == g_T_FLOAT))
{
{ R26 rv1955 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1955; }
}
else if ((l_K_1948 == g_T_STR))
{
{ R26 rv1956 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1956; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1947));
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
{ rt_int rv1957 = 0;
return rv1957; }
}
{ rt_int rv1958 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1958; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1959; memset(&l_N_1959, 0, sizeof l_N_1959);
l_N_1959 = ((rt_int)0LL);
R27 * l_P_1960; memset(&l_P_1960, 0, sizeof l_P_1960);
l_P_1960 = p_A;
for (;;) {
if ((l_P_1960 == NULL)) goto L_end1961;
{
l_N_1959 = rt_add(l_N_1959, ((rt_int)1LL));
l_P_1960 = ((*(R27 *)rt_nil_check(l_P_1960))).f_NEXT;
}
RT_B_TICK();
} L_end1961: ;
{ rt_int rv1962 = l_N_1959;
return rv1962; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1963; memset(&l_HEAD_1963, 0, sizeof l_HEAD_1963);
l_HEAD_1963 = NULL;
R27 * l_TAIL_1964; memset(&l_TAIL_1964, 0, sizeof l_TAIL_1964);
l_TAIL_1964 = NULL;
rt_int l_G_1965; memset(&l_G_1965, 0, sizeof l_G_1965);
l_G_1965 = ((rt_int)0LL);
{ rt_int it1967_lo = ((rt_int)0LL), it1967_hi = ((rt_int)2LL);
for (rt_int it1967 = it1967_lo; it1967 <= it1967_hi; it1967++) {
{
{
R21 * l_P_1968; memset(&l_P_1968, 0, sizeof l_P_1968);
l_P_1968 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1967 == ((rt_int)1LL)))
{
l_P_1968 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1967 == ((rt_int)2LL)))
{
l_P_1968 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1968 == NULL)) goto L_end1969;
{
{
R27 * l_A_1970; memset(&l_A_1970, 0, sizeof l_A_1970);
l_A_1970 = r_NODE_ARG(l_P_1968, it1967, NULL);
if ((l_TAIL_1964 == NULL))
{
l_HEAD_1963 = l_A_1970;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1964))).f_NEXT = l_A_1970;
}
l_TAIL_1964 = l_A_1970;
}
l_P_1968 = ((*(R21 *)rt_nil_check(l_P_1968))).f_NEXT;
}
RT_B_TICK();
} L_end1969: ;
}
}
RT_B_TICK();
if (it1967 == it1967_hi) break;
} } L_end1966: ;
{ R27 * rv1971 = l_HEAD_1963;
return rv1971; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1972; memset(&l_SAVED_1972, 0, sizeof l_SAVED_1972);
l_SAVED_1972 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1973; memset(&l_SAVED_Q_1973, 0, sizeof l_SAVED_Q_1973);
l_SAVED_Q_1973 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1974; memset(&l_V_1974, 0, sizeof l_V_1974);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1974, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1972;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1973;
{ R26 rv1975 = l_V_1974;
return rv1975; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1976; memset(&l_ARGS_1976, 0, sizeof l_ARGS_1976);
l_ARGS_1976 = r_CALL_ARGS(p_E);
R12 * l_Y_1977; memset(&l_Y_1977, 0, sizeof l_Y_1977);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1978 = r_START_IO_CALL(p_E);
return rv1978; }
}
l_Y_1977 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1977 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1977))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1979 = r_BUILTIN(p_E, p_WANT);
return rv1979; }
}
{ R26 rv1980 = r_CALL_SYM(l_Y_1977, l_ARGS_1976, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1980; }
}
l_Y_1977 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1976, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1977 == NULL))
{
{
R12 * l_P_1981; memset(&l_P_1981, 0, sizeof l_P_1981);
l_P_1981 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1981 == NULL)) goto L_end1982;
{
if ((((*(R12 *)rt_nil_check(l_P_1981))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1983 = r_BUILTIN(p_E, p_WANT);
return rv1983; }
}
l_P_1981 = r_LOOKUP_NEXT(l_P_1981);
}
RT_B_TICK();
} L_end1982: ;
}
{
R12 * l_B_1984; memset(&l_B_1984, 0, sizeof l_B_1984);
l_B_1984 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1984 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1984))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1985 = r_BUILTIN(p_E, p_WANT);
return rv1985; }
}
if (((((*(R12 *)rt_nil_check(l_B_1984))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1984))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1986; memset(&l_BASE_1986, 0, sizeof l_BASE_1986);
S_R10(&l_BASE_1986, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1986).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1987; memset(&l_N_1987, 0, sizeof l_N_1987);
l_N_1987 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1987))).f_NAME, l_BASE_1986, 0);
{ R26 rv1988 = r_BUILTIN(l_N_1987, p_WANT);
return rv1988; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1989 = r_CALL_SYM(l_Y_1977, l_ARGS_1976, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1989; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1990; memset(&l_S_1990, 0, sizeof l_S_1990);
l_S_1990 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1990, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1992_lo = ((rt_int)1LL), it1992_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1992 = it1992_lo; it1992 <= it1992_hi; it1992++) {
{
if (rt_b_eq(rt_b_slice(l_S_1990, it1992, it1992), rt_str("$", 1)))
{
{
R10 l_P_1993; memset(&l_P_1993, 0, sizeof l_P_1993);
S_R10(&l_P_1993, r_MKN(rt_b_slice(l_S_1990, ((rt_int)0LL), rt_sub(it1992, ((rt_int)1LL)))), 0);
R10 l_B_1994; memset(&l_B_1994, 0, sizeof l_B_1994);
S_R10(&l_B_1994, r_MKN(rt_b_slice(l_S_1990, rt_add(it1992, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1993) || r_TEQS(l_P_1993, rt_str("INTEGER", 7))) || r_TEQS(l_P_1993, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1993, rt_str("ENUM", 4))) || r_TEQS(l_P_1993, rt_str("ARRAY", 5))) || r_TEQS(l_P_1993, rt_str("RECORD", 6))) || r_TEQS(l_P_1993, rt_str("PTR", 3))) || r_TEQS(l_P_1993, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1995; memset(&l_Y_1995, 0, sizeof l_Y_1995);
l_Y_1995 = r_LOOKUP(l_B_1994);
for (;;) {
if ((l_Y_1995 == NULL)) goto L_end1996;
{
if ((((*(R12 *)rt_nil_check(l_Y_1995))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1997 = l_B_1994;
return rv1997; }
}
l_Y_1995 = r_LOOKUP_NEXT(l_Y_1995);
}
RT_B_TICK();
} L_end1996: ;
}
}
}
{ R10 rv1998 = r_NO_TEXT();
return rv1998; }
}
}
RT_B_TICK();
if (it1992 == it1992_hi) break;
} } L_end1991: ;
{ R10 rv1999 = r_NO_TEXT();
return rv1999; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2000; memset(&l_B_2000, 0, sizeof l_B_2000);
l_B_2000 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2001; memset(&l_S_2001, 0, sizeof l_S_2001);
l_S_2001 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2001, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2003_lo = ((rt_int)1LL), it2003_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2003 = it2003_lo; it2003 <= it2003_hi; it2003++) {
{
if (rt_b_eq(rt_b_slice(l_S_2001, it2003, it2003), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2001, ((rt_int)0LL), rt_sub(it2003, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2004 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2001, rt_add(it2003, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2004; }
}
goto L_end2002;
}
}
RT_B_TICK();
if (it2003 == it2003_hi) break;
} } L_end2002: ;
}
for (;;) {
if ((l_B_2000 == NULL)) goto L_end2005;
{
if (((!(((*(R20 *)rt_nil_check(l_B_2000))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_2000))).f_NAME, p_NAME)))
{
{ R12 * rv2006 = ((*(R20 *)rt_nil_check(l_B_2000))).f_R;
return rv2006; }
}
l_B_2000 = ((*(R20 *)rt_nil_check(l_B_2000))).f_NEXT;
}
RT_B_TICK();
} L_end2005: ;
{ R12 * rv2007 = NULL;
return rv2007; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2008 = 0;
return rv2008; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2009 = 0;
return rv2009; }
}
}
}
{ rt_int rv2010 = 1;
return rv2010; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2011; memset(&l_Y_2011, 0, sizeof l_Y_2011);
l_Y_2011 = r_LOOKUP(p_NAME);
R12 * l_BEST_2012; memset(&l_BEST_2012, 0, sizeof l_BEST_2012);
l_BEST_2012 = NULL;
rt_int l_BEST_SCORE_2013; memset(&l_BEST_SCORE_2013, 0, sizeof l_BEST_SCORE_2013);
l_BEST_SCORE_2013 = ((rt_int)0LL);
rt_int l_TIES_2014; memset(&l_TIES_2014, 0, sizeof l_TIES_2014);
l_TIES_2014 = ((rt_int)0LL);
rt_int l_COUNT_2015; memset(&l_COUNT_2015, 0, sizeof l_COUNT_2015);
l_COUNT_2015 = ((rt_int)0LL);
rt_int l_N_2016; memset(&l_N_2016, 0, sizeof l_N_2016);
l_N_2016 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2011 == NULL)) goto L_end2017;
{
if ((!r_IS_ROUTINE(l_Y_2011)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2011))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2017;
}
}
else if (r_CANDIDATE(l_Y_2011, p_NAME))
{
{
R12 * l_R_2018; memset(&l_R_2018, 0, sizeof l_R_2018);
l_R_2018 = r_ORIGINAL(l_Y_2011);
rt_int l_SCORE_2019; memset(&l_SCORE_2019, 0, sizeof l_SCORE_2019);
r_ROUTINE_HEADER(l_R_2018);
if ((((r_PARAM_COUNT(l_R_2018) == l_N_2016) && (!r_SEEN_ROUTINE(l_R_2018, p_NAME, l_Y_2011))) && (!r_HIDDEN_ROUTINE(l_R_2018, p_NAME, l_Y_2011))))
{
l_COUNT_2015 = rt_add(l_COUNT_2015, ((rt_int)1LL));
l_SCORE_2019 = r_MATCH_SCORE(l_R_2018, p_ARGS);
if ((l_SCORE_2019 > l_BEST_SCORE_2013))
{
l_BEST_2012 = l_R_2018;
l_BEST_SCORE_2013 = l_SCORE_2019;
l_TIES_2014 = ((rt_int)0LL);
}
else if (((l_SCORE_2019 == l_BEST_SCORE_2013) && (l_SCORE_2019 > ((rt_int)0LL))))
{
l_TIES_2014 = rt_add(l_TIES_2014, ((rt_int)1LL));
}
}
}
}
l_Y_2011 = r_LOOKUP_NEXT(l_Y_2011);
}
RT_B_TICK();
} L_end2017: ;
if (((l_TIES_2014 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2020 = l_BEST_2012;
return rv2020; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2021; memset(&l_Y_2021, 0, sizeof l_Y_2021);
l_Y_2021 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2021 == p_STOP) || (l_Y_2021 == NULL))) goto L_end2022;
{
if ((((*(R12 *)rt_nil_check(l_Y_2021))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2021) == p_R))
{
{ rt_int rv2023 = 1;
return rv2023; }
}
}
l_Y_2021 = r_LOOKUP_NEXT(l_Y_2021);
}
RT_B_TICK();
} L_end2022: ;
{ rt_int rv2024 = 0;
return rv2024; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2025; memset(&l_Y_2025, 0, sizeof l_Y_2025);
l_Y_2025 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2025 == p_STOP) || (l_Y_2025 == NULL))) goto L_end2026;
{
if (((((*(R12 *)rt_nil_check(l_Y_2025))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2025))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2027; memset(&l_O_2027, 0, sizeof l_O_2027);
l_O_2027 = r_ORIGINAL(l_Y_2025);
if ((!(l_O_2027 == p_R)))
{
r_ROUTINE_HEADER(l_O_2027);
if (r_SAME_SIGNATURE(l_O_2027, p_R))
{
{ rt_int rv2028 = 1;
return rv2028; }
}
}
}
}
l_Y_2025 = r_LOOKUP_NEXT(l_Y_2025);
}
RT_B_TICK();
} L_end2026: ;
{ rt_int rv2029 = 0;
return rv2029; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2030; memset(&l_P_2030, 0, sizeof l_P_2030);
l_P_2030 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2031; memset(&l_Q_2031, 0, sizeof l_Q_2031);
l_Q_2031 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2032 = 0;
return rv2032; }
}
for (;;) {
if (((l_P_2030 == NULL) || (l_Q_2031 == NULL))) goto L_end2033;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2030))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2031))).f_MODE)))
{
{ rt_int rv2034 = 0;
return rv2034; }
}
if (((((*(R28 *)rt_nil_check(l_P_2030))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2031))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2030))).f_T == ((*(R28 *)rt_nil_check(l_Q_2031))).f_T)))
{
{ rt_int rv2035 = 0;
return rv2035; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2030))).f_T, ((*(R28 *)rt_nil_check(l_Q_2031))).f_T)))
{
{ rt_int rv2036 = 0;
return rv2036; }
}
l_P_2030 = ((*(R28 *)rt_nil_check(l_P_2030))).f_NEXT;
l_Q_2031 = ((*(R28 *)rt_nil_check(l_Q_2031))).f_NEXT;
}
RT_B_TICK();
} L_end2033: ;
{ rt_int rv2037 = ((l_P_2030 == NULL) && (l_Q_2031 == NULL));
return rv2037; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2038; memset(&l_N_2038, 0, sizeof l_N_2038);
l_N_2038 = ((rt_int)0LL);
R28 * l_P_2039; memset(&l_P_2039, 0, sizeof l_P_2039);
l_P_2039 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2039 == NULL)) goto L_end2040;
{
l_N_2038 = rt_add(l_N_2038, ((rt_int)1LL));
l_P_2039 = ((*(R28 *)rt_nil_check(l_P_2039))).f_NEXT;
}
RT_B_TICK();
} L_end2040: ;
{ rt_int rv2041 = l_N_2038;
return rv2041; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2042; memset(&l_P_2042, 0, sizeof l_P_2042);
l_P_2042 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2043; memset(&l_A_2043, 0, sizeof l_A_2043);
l_A_2043 = p_ARGS;
rt_int l_EXACT_2044; memset(&l_EXACT_2044, 0, sizeof l_EXACT_2044);
l_EXACT_2044 = 1;
R20 * l_BS_2045; memset(&l_BS_2045, 0, sizeof l_BS_2045);
l_BS_2045 = r_NEW_BINDS();
R22 * l_PT_2046; memset(&l_PT_2046, 0, sizeof l_PT_2046);
for (;;) {
if ((l_P_2042 == NULL)) goto L_end2047;
{
l_PT_2046 = r_FORMAL_VIEW(p_R, l_P_2042);
if ((!(((*(R28 *)rt_nil_check(l_P_2042))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2043))).f_MODE)))
{
{ rt_int rv2048 = ((rt_int)0LL);
return rv2048; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2042))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2042, l_A_2043, l_BS_2045)))
{
{ rt_int rv2049 = ((rt_int)0LL);
return rv2049; }
}
}
else if ((l_PT_2046 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2043))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2043))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2050 = ((rt_int)0LL);
return rv2050; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2043))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2043))).f_E, l_PT_2046)))
{
{ rt_int rv2051 = ((rt_int)0LL);
return rv2051; }
}
}
else
{
r_TYPE_ARG(l_A_2043);
{
R22 * l_AT_2052; memset(&l_AT_2052, 0, sizeof l_AT_2052);
l_AT_2052 = (((*(R27 *)rt_nil_check(l_A_2043))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2046, l_AT_2052) || (((((*(R22 *)rt_nil_check(l_AT_2052))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2046)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2053 = ((rt_int)0LL);
return rv2053; }
}
if ((!r_SAME_TYPE(l_PT_2046, l_AT_2052)))
{
if ((((*(R28 *)rt_nil_check(l_P_2042))).f_MODE == g_M_INOUT))
{
{ rt_int rv2054 = ((rt_int)0LL);
return rv2054; }
}
l_EXACT_2044 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2052)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2046)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2042))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2052))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2046))).f_SCALE)))
{
{ rt_int rv2055 = ((rt_int)0LL);
return rv2055; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2042))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2046))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2052))).f_SCALE)))
{
{ rt_int rv2056 = ((rt_int)0LL);
return rv2056; }
}
}
}
}
l_P_2042 = ((*(R28 *)rt_nil_check(l_P_2042))).f_NEXT;
l_A_2043 = ((*(R27 *)rt_nil_check(l_A_2043))).f_NEXT;
}
RT_B_TICK();
} L_end2047: ;
if (l_EXACT_2044)
{
{ rt_int rv2057 = ((rt_int)2LL);
return rv2057; }
}
{ rt_int rv2058 = ((rt_int)1LL);
return rv2058; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2059; memset(&l_RT_2059, 0, sizeof l_RT_2059);
l_RT_2059 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_ENUM))
{
{ rt_int rv2060 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2059) == NULL));
return rv2060; }
}
{ rt_int rv2061 = 0;
return rv2061; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2062 = (((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_PTR);
return rv2062; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2063 = (((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_REC);
return rv2063; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2064 = (((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_ARR);
return rv2064; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2065 = (((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_INT);
return rv2065; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2066 = ((((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2059))).f_KIND == g_T_SEM));
return rv2066; }
}
{ rt_int rv2067 = 0;
return rv2067; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2068; memset(&l_Y_2068, 0, sizeof l_Y_2068);
l_Y_2068 = r_ORIGINAL(p_Y0);
R28 * l_P_2069; memset(&l_P_2069, 0, sizeof l_P_2069);
R27 * l_A_2070; memset(&l_A_2070, 0, sizeof l_A_2070);
l_A_2070 = p_ARGS;
R10 l_C_2071; memset(&l_C_2071, 0, sizeof l_C_2071);
S_R10(&l_C_2071, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2072; memset(&l_SEP_2072, 0, sizeof l_SEP_2072);
S_R10(&l_SEP_2072, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2073; memset(&l_PRE_2073, 0, sizeof l_PRE_2073);
S_R10(&l_PRE_2073, r_MK(rt_str("", 0)), 0);
R10 l_POST_2074; memset(&l_POST_2074, 0, sizeof l_POST_2074);
S_R10(&l_POST_2074, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2075; memset(&l_SHARED_2075, 0, sizeof l_SHARED_2075);
l_SHARED_2075 = 0;
R22 * l_PT_2076; memset(&l_PT_2076, 0, sizeof l_PT_2076);
if (((*(R12 *)rt_nil_check(l_Y_2068))).f_GENERIC)
{
l_Y_2068 = r_INSTANCE(l_Y_2068, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_2068, p_LINE);
{
R21 * l_U_2077; memset(&l_U_2077, 0, sizeof l_U_2077);
l_U_2077 = ((*(R12 *)rt_nil_check(l_Y_2068))).f_USES;
for (;;) {
if ((l_U_2077 == NULL)) goto L_end2078;
{
{
R12 * l_H_2079; memset(&l_H_2079, 0, sizeof l_H_2079);
l_H_2079 = r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2077))).f_NAME);
if ((!(l_H_2079 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2079))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2079))).f_OWNER == ((*(R21 *)rt_nil_check(l_U_2077))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2068))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2068))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R21 *)rt_nil_check(l_U_2077))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2077))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2077 = ((*(R21 *)rt_nil_check(l_U_2077))).f_NEXT;
}
RT_B_TICK();
} L_end2078: ;
}
if (((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) && (!(((*(R12 *)rt_nil_check(l_Y_2068))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2068))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2068))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2071, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2068))).f_LEVEL), 0);
S_R10(&l_SEP_2072, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2080; memset(&l_Q_2080, 0, sizeof l_Q_2080);
l_Q_2080 = p_ARGS;
for (;;) {
if ((l_Q_2080 == NULL)) goto L_end2081;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2080))).f_MODE == g_M_IN)))
{
l_SHARED_2075 = 1;
}
l_Q_2080 = ((*(R27 *)rt_nil_check(l_Q_2080))).f_NEXT;
}
RT_B_TICK();
} L_end2081: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2068))).f_USES == NULL)))
{
l_SHARED_2075 = 1;
}
}
l_P_2069 = ((*(R12 *)rt_nil_check(l_Y_2068))).f_PARAMS;
for (;;) {
if ((l_P_2069 == NULL)) goto L_end2082;
{
if ((l_A_2070 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2076 = r_FORMAL_VIEW(l_Y_2068, l_P_2069);
if ((l_PT_2076 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2069))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2076)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2083; memset(&l_V_2083, 0, sizeof l_V_2083);
R10 l_CV_2084; memset(&l_CV_2084, 0, sizeof l_CV_2084);
if ((((*(R27 *)rt_nil_check(l_A_2070))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2070))))
{
S_R26(&l_V_2083, ((*(R27 *)rt_nil_check(l_A_2070))).f_V, 0);
}
else
{
S_R26(&l_V_2083, r_EXPR(((*(R27 *)rt_nil_check(l_A_2070))).f_E, l_PT_2076), 0);
}
S_R10(&l_CV_2084, r_CONVERT(l_V_2083, l_PT_2076, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2075 && (l_V_2083).f_LVAL) && r_IS_STRUCTURED(l_PT_2076)))
{
S_R10(&l_CV_2084, r_COPY_OF(l_PT_2076, l_CV_2084), 0);
}
S_R10(&l_C_2071, r_FMT3(rt_str("@@@", 3), l_C_2071, l_SEP_2072, l_CV_2084), 0);
S_R10(&l_SEP_2072, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2085; memset(&l_V_2085, 0, sizeof l_V_2085);
if (((*(R27 *)rt_nil_check(l_A_2070))).f_HAVE)
{
S_R26(&l_V_2085, ((*(R27 *)rt_nil_check(l_A_2070))).f_V, 0);
}
else
{
S_R26(&l_V_2085, r_EXPR(((*(R27 *)rt_nil_check(l_A_2070))).f_E, l_PT_2076), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2070))).f_E == NULL)) && (!(l_V_2085).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2070))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2070))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2085, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2085).f_C), (l_V_2085).f_T), 0);
(l_V_2085).f_LVAL = 1;
}
}
if ((!(l_V_2085).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2076, (l_V_2085).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2076));
}
if (((((*(R28 *)rt_nil_check(l_P_2069))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2076, (l_V_2085).f_T) && r_SAME_RANGE(l_PT_2076, (l_V_2085).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2069))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2076, (l_V_2085).f_T) && r_SAME_RANGE(l_PT_2076, (l_V_2085).f_T))))))
{
{
R10 l_TMP_2086; memset(&l_TMP_2086, 0, sizeof l_TMP_2086);
S_R10(&l_TMP_2086, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2087; memset(&l_AP_2087, 0, sizeof l_AP_2087);
S_R10(&l_AP_2087, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2073, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2073, r_CTYPE((l_V_2085).f_T), l_AP_2087, (l_V_2085).f_C), 0);
S_R10(&l_PRE_2073, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2073, r_CTYPE(l_PT_2076), l_TMP_2086, r_COPY_OF((l_V_2085).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2087))), 0);
S_R10(&l_POST_2074, r_FMT2(rt_str("@ @", 3), l_POST_2074, r_STORE_CODE((l_V_2085).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2087), r_MKET(l_TMP_2086, l_PT_2076), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2071, r_FMT3(rt_str("@@&@", 4), l_C_2071, l_SEP_2072, l_TMP_2086), 0);
}
}
else
{
S_R10(&l_C_2071, r_FMT3(rt_str("@@&@", 4), l_C_2071, l_SEP_2072, (l_V_2085).f_C), 0);
}
S_R10(&l_SEP_2072, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2070 = ((*(R27 *)rt_nil_check(l_A_2070))).f_NEXT;
l_P_2069 = ((*(R28 *)rt_nil_check(l_P_2069))).f_NEXT;
}
RT_B_TICK();
} L_end2082: ;
if ((!(l_A_2070 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2073).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2088 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2073, ((*(R12 *)rt_nil_check(l_Y_2068))).f_ACCESS, l_C_2071, l_POST_2074), r_RESULT_VIEW(l_Y_2068));
return rv2088; }
}
{ R26 rv2089 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2068))).f_ACCESS, l_C_2071), r_RESULT_VIEW(l_Y_2068));
return rv2089; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2090 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2090; }
}
{ R22 * rv2091 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2091; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2092 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2092; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2093 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2093; }
}
{ R22 * rv2094 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2094; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2095 = p_T;
return rv2095; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2096 = p_T;
return rv2096; }
}
{
R12 * l_M_2097; memset(&l_M_2097, 0, sizeof l_M_2097);
l_M_2097 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2097 == NULL)) goto L_end2098;
{
{
R12 * l_Y_2099; memset(&l_Y_2099, 0, sizeof l_Y_2099);
l_Y_2099 = r_MEMBER_TYPE(l_M_2097, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2099 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2099))).f_EXPORTED)
{
{ R22 * rv2100 = r_ABSTRACT_VIEW(l_Y_2099, p_T);
return rv2100; }
}
{ R22 * rv2101 = p_T;
return rv2101; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2097))).f_MODL))
{
goto L_end2098;
}
l_M_2097 = ((*(R12 *)rt_nil_check(l_M_2097))).f_MODL;
}
RT_B_TICK();
} L_end2098: ;
}
{ R22 * rv2102 = p_T;
return rv2102; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2103; memset(&l_Y_2103, 0, sizeof l_Y_2103);
l_Y_2103 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2104; memset(&l_Z_2104, 0, sizeof l_Z_2104);
l_Z_2104 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2104 == NULL)) goto L_end2105;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2104))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2104))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2104))).f_ORIG == NULL)))
{
{ R12 * rv2106 = l_Z_2104;
return rv2106; }
}
l_Z_2104 = r_LOOKUP_NEXT(l_Z_2104);
}
RT_B_TICK();
} L_end2105: ;
}
{ R12 * rv2107 = NULL;
return rv2107; }
}
for (;;) {
if ((l_Y_2103 == NULL)) goto L_end2108;
{
if (((((*(R12 *)rt_nil_check(l_Y_2103))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2103))).f_NAME, p_NAME)))
{
{ R12 * rv2109 = l_Y_2103;
return rv2109; }
}
l_Y_2103 = ((*(R12 *)rt_nil_check(l_Y_2103))).f_SNEXT;
}
RT_B_TICK();
} L_end2108: ;
{ R12 * rv2110 = NULL;
return rv2110; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2111; memset(&l_K_2111, 0, sizeof l_K_2111);
l_K_2111 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2112 = ((((l_K_2111 == g_T_STR) || (l_K_2111 == g_T_BITS)) || (l_K_2111 == g_T_ARR)) || (l_K_2111 == g_T_REC));
return rv2112; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2113; memset(&l_RA_2113, 0, sizeof l_RA_2113);
l_RA_2113 = r_REAL_TYPE(p_A);
R22 * l_RB_2114; memset(&l_RB_2114, 0, sizeof l_RB_2114);
l_RB_2114 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2113)))
{
{ rt_int rv2115 = 1;
return rv2115; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2113))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2113))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2114))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2114))).f_HI_C)))
{
{ rt_int rv2116 = 1;
return rv2116; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2113))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2114))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2117 = ((((*(R22 *)rt_nil_check(l_RA_2113))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2114))).f_LO_C).f_LEN);
return rv2117; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2113))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2114))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2113))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2114))).f_MHI).f_OK))
{
{ rt_int rv2118 = (((((*(R22 *)rt_nil_check(l_RA_2113))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2114))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2113))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2114))).f_MHI).f_V));
return rv2118; }
}
{ rt_int rv2119 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2113))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2114))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2113))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2114))).f_HI_C));
return rv2119; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2120 = 0;
return rv2120; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2121 = 1;
return rv2121; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2122 = 1;
return rv2122; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2123 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2123; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2124 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2124; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2125 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2125; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2126 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2126; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2127 = 0;
return rv2127; }
}
{
R12 * l_Y_2128; memset(&l_Y_2128, 0, sizeof l_Y_2128);
l_Y_2128 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2129; memset(&l_A_2129, 0, sizeof l_A_2129);
l_A_2129 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2130; memset(&l_F_2130, 0, sizeof l_F_2130);
if ((l_Y_2128 == NULL))
{
{ rt_int rv2131 = 0;
return rv2131; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2128))).f_KIND == g_Y_GEN))
{
{ rt_int rv2132 = 1;
return rv2132; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2128))).f_DECL == NULL))
{
{ rt_int rv2133 = 0;
return rv2133; }
}
l_F_2130 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2128))).f_DECL))).f_A;
for (;;) {
if ((l_F_2130 == NULL)) goto L_end2134;
{
{
R21 * l_N_2135; memset(&l_N_2135, 0, sizeof l_N_2135);
l_N_2135 = ((*(R21 *)rt_nil_check(l_F_2130))).f_A;
for (;;) {
if ((l_N_2135 == NULL)) goto L_end2136;
{
if ((l_A_2129 == NULL))
{
{ rt_int rv2137 = 0;
return rv2137; }
}
if (((((*(R21 *)rt_nil_check(l_F_2130))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2129))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2129))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2129)))))
{
{ rt_int rv2138 = 1;
return rv2138; }
}
l_A_2129 = ((*(R21 *)rt_nil_check(l_A_2129))).f_NEXT;
l_N_2135 = ((*(R21 *)rt_nil_check(l_N_2135))).f_NEXT;
}
RT_B_TICK();
} L_end2136: ;
}
l_F_2130 = ((*(R21 *)rt_nil_check(l_F_2130))).f_NEXT;
}
RT_B_TICK();
} L_end2134: ;
}
}
{ rt_int rv2139 = 0;
return rv2139; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2140; memset(&l_P_2140, 0, sizeof l_P_2140);
l_P_2140 = p_A;
for (;;) {
if ((l_P_2140 == NULL)) goto L_end2141;
{
if (((((*(R21 *)rt_nil_check(l_P_2140))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2140))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2142 = 1;
return rv2142; }
}
l_P_2140 = ((*(R21 *)rt_nil_check(l_P_2140))).f_NEXT;
}
RT_B_TICK();
} L_end2141: ;
{ rt_int rv2143 = 0;
return rv2143; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2144; memset(&l_ENTERED_2144, 0, sizeof l_ENTERED_2144);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2144 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2144)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2145; memset(&l_R_2145, 0, sizeof l_R_2145);
l_R_2145 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2146; memset(&l_P_2146, 0, sizeof l_P_2146);
R28 * l_TAIL_2147; memset(&l_TAIL_2147, 0, sizeof l_TAIL_2147);
l_TAIL_2147 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2146 = ((*(R21 *)rt_nil_check(l_R_2145))).f_A;
for (;;) {
if ((l_P_2146 == NULL)) goto L_end2148;
{
if (((((*(R21 *)rt_nil_check(l_P_2146))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2146))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2146 = ((*(R21 *)rt_nil_check(l_P_2146))).f_NEXT;
}
RT_B_TICK();
} L_end2148: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2145))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2146 = ((*(R21 *)rt_nil_check(l_R_2145))).f_A;
for (;;) {
if ((l_P_2146 == NULL)) goto L_end2149;
{
{
R28 * l_PM_2150; memset(&l_PM_2150, 0, sizeof l_PM_2150);
l_PM_2150 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2150)), ({ R28 rc2151; memset(&rc2151, 0, sizeof rc2151);  S_R10(&rc2151.f_NAME, ((*(R21 *)rt_nil_check(l_P_2146))).f_NAME, 0); rc2151.f_MODE = ((*(R21 *)rt_nil_check(l_P_2146))).f_IV; rc2151.f_T = NULL; rc2151.f_TS = ((*(R21 *)rt_nil_check(l_P_2146))).f_B; rc2151.f_NEXT = NULL; rc2151; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2145))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2146))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2146))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2150))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2146))).f_B);
}
if ((l_TAIL_2147 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2150;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2147))).f_NEXT = l_PM_2150;
}
l_TAIL_2147 = l_PM_2150;
}
l_P_2146 = ((*(R21 *)rt_nil_check(l_P_2146))).f_NEXT;
}
RT_B_TICK();
} L_end2149: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2152; memset(&l_R_2152, 0, sizeof l_R_2152);
l_R_2152 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2153; memset(&l_T_2153, 0, sizeof l_T_2153);
if ((((*(R21 *)rt_nil_check(l_R_2152))).f_B == NULL))
{
{ R22 * rv2154 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2154; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2155; memset(&l_P_2155, 0, sizeof l_P_2155);
l_P_2155 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2155 == NULL)) goto L_end2156;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2155))).f_T == NULL)))
{
{
R12 * l_V_2157; memset(&l_V_2157, 0, sizeof l_V_2157);
l_V_2157 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2155))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2157))).f_T = ((*(R28 *)rt_nil_check(l_P_2155))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2157))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2155))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2157))).f_INPUT = 1;
r_DEFINE(l_V_2157, ((*(R21 *)rt_nil_check(l_R_2152))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2155))).f_T, ((*(R12 *)rt_nil_check(l_V_2157))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2152))).f_LINE, 0);
}
}
l_P_2155 = ((*(R28 *)rt_nil_check(l_P_2155))).f_NEXT;
}
RT_B_TICK();
} L_end2156: ;
}
l_T_2153 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2152))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2158 = l_T_2153;
return rv2158; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2159; memset(&l_PS_2159, 0, sizeof l_PS_2159);
S_R10(&l_PS_2159, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2160; memset(&l_SEP_2160, 0, sizeof l_SEP_2160);
S_R10(&l_SEP_2160, r_MK(rt_str("", 0)), 0);
R28 * l_P_2161; memset(&l_P_2161, 0, sizeof l_P_2161);
l_P_2161 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2159, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2160, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2161 == NULL)) goto L_end2162;
{
if ((((*(R28 *)rt_nil_check(l_P_2161))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2161))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2161))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2159, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2159, l_SEP_2160, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2161))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2161))).f_NAME)), 0);
S_R10(&l_SEP_2160, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2159, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2159, l_SEP_2160, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2161))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2161))).f_NAME)), 0);
S_R10(&l_SEP_2160, r_MK(rt_str(", ", 2)), 0);
}
l_P_2161 = ((*(R28 *)rt_nil_check(l_P_2161))).f_NEXT;
}
RT_B_TICK();
} L_end2162: ;
if (((l_PS_2159).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2159, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2163 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2159);
return rv2163; }
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
R25 * l_B_2164; memset(&l_B_2164, 0, sizeof l_B_2164);
l_B_2164 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2165; memset(&l_I_2165, 0, sizeof l_I_2165);
l_I_2165 = ((rt_int)0LL);
for (;;) {
if ((l_B_2164 == NULL)) goto L_end2166;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2164))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2164))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2165)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2164))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2164))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2164))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2164))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2165)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2164))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2165), p_PC, r_NUM(l_I_2165)), ((*(R25 *)rt_nil_check(l_B_2164))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2165 = rt_add(l_I_2165, ((rt_int)1LL));
l_B_2164 = ((*(R25 *)rt_nil_check(l_B_2164))).f_NEXT;
}
RT_B_TICK();
} L_end2166: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2167; memset(&l_U_2167, 0, sizeof l_U_2167);
l_U_2167 = r_REAL_TYPE(p_T);
R24 * l_F_2168; memset(&l_F_2168, 0, sizeof l_F_2168);
l_F_2168 = ((*(R22 *)rt_nil_check(l_U_2167))).f_FIELDS;
R25 * l_A_2169; memset(&l_A_2169, 0, sizeof l_A_2169);
l_A_2169 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2168 == NULL) || (l_A_2169 == NULL))) goto L_end2170;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2168))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2169))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2169))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2168))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2169 = ((*(R25 *)rt_nil_check(l_A_2169))).f_NEXT;
}
l_F_2168 = ((*(R24 *)rt_nil_check(l_F_2168))).f_NEXT;
}
RT_B_TICK();
} L_end2170: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2171 = 0;
return rv2171; }
}
{ rt_int rv2172 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2172; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2173 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2173; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2174; memset(&l_OLD_2174, 0, sizeof l_OLD_2174);
l_OLD_2174 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2174 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2174))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2174))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2174))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2175; memset(&l_G_2175, 0, sizeof l_G_2175);
l_G_2175 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2175))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2175))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2175))).f_INPUT = 1;
r_DEFINE(l_G_2175, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2176; memset(&l_B_2176, 0, sizeof l_B_2176);
l_B_2176 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2176)), ({ R20 rc2177; memset(&rc2177, 0, sizeof rc2177);  S_R10(&rc2177.f_NAME, r_NO_TEXT(), 0); rc2177.f_T = NULL; S_R10(&rc2177.f_C, r_NO_TEXT(), 0); rc2177.f_HASMV = 0; rc2177.f_MV = ((rt_int)0LL); rc2177.f_R = NULL; rc2177.f_NEXT = NULL; rc2177; }), 0);
{ R20 * rv2178 = l_B_2176;
return rv2178; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2179; memset(&l_B_2179, 0, sizeof l_B_2179);
l_B_2179 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2179)), ({ R20 rc2180; memset(&rc2180, 0, sizeof rc2180);  S_R10(&rc2180.f_NAME, p_NAME, 0); rc2180.f_T = p_T; S_R10(&rc2180.f_C, r_NO_TEXT(), 0); rc2180.f_HASMV = (p_M).f_OK; rc2180.f_MV = (p_M).f_V; rc2180.f_R = p_R; rc2180.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2180; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2179))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2179;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2181; memset(&l_B_2181, 0, sizeof l_B_2181);
l_B_2181 = p_BS;
for (;;) {
if ((l_B_2181 == NULL)) goto L_end2182;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2181))).f_NAME, p_NAME))
{
{ R20 * rv2183 = l_B_2181;
return rv2183; }
}
l_B_2181 = ((*(R20 *)rt_nil_check(l_B_2181))).f_NEXT;
}
RT_B_TICK();
} L_end2182: ;
{ R20 * rv2184 = NULL;
return rv2184; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2185; memset(&l_RT_2185, 0, sizeof l_RT_2185);
l_RT_2185 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2186 = 1;
return rv2186; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2187 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2187; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2188 = 1;
return rv2188; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2189 = 1;
return rv2189; }
}
{
R20 * l_B_2190; memset(&l_B_2190, 0, sizeof l_B_2190);
l_B_2190 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2190 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2190))).f_T == NULL))
{
{ rt_int rv2191 = 0;
return rv2191; }
}
{ rt_int rv2192 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2190))).f_T, p_T);
return rv2192; }
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
{ rt_int rv2193 = 1;
return rv2193; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_ARR)))
{
{ rt_int rv2194 = 0;
return rv2194; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2185))).f_DIMS)))
{
{ rt_int rv2195 = 0;
return rv2195; }
}
{ rt_int rv2196 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2185))).f_ELEM, p_BS);
return rv2196; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2197 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2197; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2198 = 0;
return rv2198; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2185))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2185))).f_MHI, p_BS))))
{
{ rt_int rv2199 = 0;
return rv2199; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_INT)))
{
{ rt_int rv2200 = 0;
return rv2200; }
}
{ rt_int rv2201 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2185))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2201; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2202 = ((((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2185))).f_SCALE == ((rt_int)0LL)));
return rv2202; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2203 = 0;
return rv2203; }
}
{ rt_int rv2204 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2185))).f_SCALE), p_BS);
return rv2204; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2205 = (((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_BOOL);
return rv2205; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2206 = (((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_STR);
return rv2206; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_STR)))
{
{ rt_int rv2207 = 0;
return rv2207; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2208 = 1;
return rv2208; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_BASE == NULL)))
{
{ rt_int rv2209 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2185))).f_BASE, p_BS);
return rv2209; }
}
{ rt_int rv2210 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2210; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2211 = (((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_BITS);
return rv2211; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2212 = (((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_SEM);
return rv2212; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_PTR)))
{
{ rt_int rv2213 = 0;
return rv2213; }
}
{ rt_int rv2214 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2185), p_BS);
return rv2214; }
}
{
R12 * l_Y_2215; memset(&l_Y_2215, 0, sizeof l_Y_2215);
l_Y_2215 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2215 == NULL))
{
{ rt_int rv2216 = 0;
return rv2216; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2215))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2215))).f_DECL == NULL)))
{
{ rt_int rv2217 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2215))).f_T, p_T);
return rv2217; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2215))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2218 = 0;
return rv2218; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2215))))
{
{ rt_int rv2219 = 0;
return rv2219; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2215))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2185))).f_KIND == g_T_REC)))
{
{ rt_int rv2220 = 0;
return rv2220; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2185))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2221 = 0;
return rv2221; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2185))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2215))))
{
{ rt_int rv2222 = 0;
return rv2222; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2223 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2223; }
}
{ rt_int rv2224 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2215))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2215))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2185, p_BS);
return rv2224; }
}
{
R21 * l_F_2225; memset(&l_F_2225, 0, sizeof l_F_2225);
l_F_2225 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2215))).f_DECL))).f_A;
R21 * l_A_2226; memset(&l_A_2226, 0, sizeof l_A_2226);
l_A_2226 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2227; memset(&l_V_2227, 0, sizeof l_V_2227);
l_V_2227 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2228; memset(&l_CLASS_2228, 0, sizeof l_CLASS_2228);
l_CLASS_2228 = r_RECORD_CLASS_OF(l_RT_2185);
for (;;) {
if ((l_F_2225 == NULL)) goto L_end2229;
{
{
R21 * l_N_2230; memset(&l_N_2230, 0, sizeof l_N_2230);
l_N_2230 = ((*(R21 *)rt_nil_check(l_F_2225))).f_A;
for (;;) {
if ((l_N_2230 == NULL)) goto L_end2231;
{
if ((l_A_2226 == NULL))
{
{ rt_int rv2232 = 0;
return rv2232; }
}
if ((((*(R21 *)rt_nil_check(l_F_2225))).f_B == NULL))
{
if ((!(l_CLASS_2228 == NULL)))
{
{
R20 * l_B_2233; memset(&l_B_2233, 0, sizeof l_B_2233);
l_B_2233 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2228))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2230))).f_NAME);
if ((!(l_B_2233 == NULL)))
{
if ((!r_UNIFY(l_A_2226, ((*(R20 *)rt_nil_check(l_B_2233))).f_T, p_BS)))
{
{ rt_int rv2234 = 0;
return rv2234; }
}
}
}
}
}
else
{
if ((!(l_V_2227 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2226))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2226))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2226))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2235; memset(&l_M_2235, 0, sizeof l_M_2235);
S_R23(&l_M_2235, r_MANIFEST(l_A_2226), 0);
if (((l_M_2235).f_OK && (((*(R25 *)rt_nil_check(l_V_2227))).f_MLO).f_OK))
{
if ((!((l_M_2235).f_V == (((*(R25 *)rt_nil_check(l_V_2227))).f_MLO).f_V)))
{
{ rt_int rv2236 = 0;
return rv2236; }
}
}
}
}
l_V_2227 = ((*(R25 *)rt_nil_check(l_V_2227))).f_NEXT;
}
}
l_A_2226 = ((*(R21 *)rt_nil_check(l_A_2226))).f_NEXT;
l_N_2230 = ((*(R21 *)rt_nil_check(l_N_2230))).f_NEXT;
}
RT_B_TICK();
} L_end2231: ;
}
l_F_2225 = ((*(R21 *)rt_nil_check(l_F_2225))).f_NEXT;
}
RT_B_TICK();
} L_end2229: ;
}
{ rt_int rv2237 = 1;
return rv2237; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2238; memset(&l_R_2238, 0, sizeof l_R_2238);
l_R_2238 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2239 = NULL;
return rv2239; }
}
for (;;) {
if ((l_R_2238 == NULL)) goto L_end2240;
{
if ((((*(R12 *)rt_nil_check(l_R_2238))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2241 = l_R_2238;
return rv2241; }
}
l_R_2238 = ((*(R12 *)rt_nil_check(l_R_2238))).f_INSTANCES;
}
RT_B_TICK();
} L_end2240: ;
{ R12 * rv2242 = NULL;
return rv2242; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2243 = 1;
return rv2243; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2244 = 1;
return rv2244; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2245 = 1;
return rv2245; }
}
{
R20 * l_B_2246; memset(&l_B_2246, 0, sizeof l_B_2246);
l_B_2246 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2246 == NULL)))
{
{ rt_int rv2247 = ((((*(R20 *)rt_nil_check(l_B_2246))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2246))).f_MV == (p_M).f_V));
return rv2247; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2248 = 0;
return rv2248; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2249 = 1;
return rv2249; }
}
{
R23 l_V_2250; memset(&l_V_2250, 0, sizeof l_V_2250);
S_R23(&l_V_2250, r_MANIFEST(p_A), 0);
if (((l_V_2250).f_OK && (p_M).f_OK))
{
{ rt_int rv2251 = ((l_V_2250).f_V == (p_M).f_V);
return rv2251; }
}
}
{ rt_int rv2252 = 1;
return rv2252; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2253 = 0;
return rv2253; }
}
{ rt_int rv2254 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2254; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2255 = 1;
return rv2255; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2256 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2256; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2257; memset(&l_BS_2257, 0, sizeof l_BS_2257);
l_BS_2257 = r_NEW_BINDS();
R28 * l_P_2258; memset(&l_P_2258, 0, sizeof l_P_2258);
l_P_2258 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2259; memset(&l_A_2259, 0, sizeof l_A_2259);
l_A_2259 = p_ARGS;
for (;;) {
if ((l_P_2258 == NULL)) goto L_end2260;
{
if ((((*(R28 *)rt_nil_check(l_P_2258))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2259))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2258))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2259))).f_E), r_NO_MVAL(), NULL, l_BS_2257);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2258))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2258))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2258))).f_TS, ((*(R27 *)rt_nil_check(l_A_2259))).f_E, p_LINE), l_BS_2257);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2259))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2259))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2258))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2259))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2259))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2259))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2259))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2259))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2258))).f_TS, (((*(R27 *)rt_nil_check(l_A_2259))).f_V).f_T, l_BS_2257)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2258))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2258))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2258))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2258))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2259))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2257);
}
}
l_P_2258 = ((*(R28 *)rt_nil_check(l_P_2258))).f_NEXT;
l_A_2259 = ((*(R27 *)rt_nil_check(l_A_2259))).f_NEXT;
}
RT_B_TICK();
} L_end2260: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2257);
{
R12 * l_I_2261; memset(&l_I_2261, 0, sizeof l_I_2261);
l_I_2261 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2261 == NULL)) goto L_end2262;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2261))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2257))).f_NEXT))
{
{ R12 * rv2263 = l_I_2261;
return rv2263; }
}
l_I_2261 = ((*(R12 *)rt_nil_check(l_I_2261))).f_INSTANCES;
}
RT_B_TICK();
} L_end2262: ;
}
{ R12 * rv2264 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2257))).f_NEXT, p_ARGS);
return rv2264; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2265; memset(&l_P_2265, 0, sizeof l_P_2265);
l_P_2265 = p_A;
for (;;) {
if ((l_P_2265 == NULL)) goto L_end2266;
{
{
R20 * l_Q_2267; memset(&l_Q_2267, 0, sizeof l_Q_2267);
l_Q_2267 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2265))).f_NAME);
if ((l_Q_2267 == NULL))
{
{ rt_int rv2268 = 0;
return rv2268; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2265))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2267))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2265))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2267))).f_T == NULL)))
{
{ rt_int rv2269 = 0;
return rv2269; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2265))).f_T, ((*(R20 *)rt_nil_check(l_Q_2267))).f_T)))
{
{ rt_int rv2270 = 0;
return rv2270; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2265))).f_T, ((*(R20 *)rt_nil_check(l_Q_2267))).f_T)))
{
{ rt_int rv2271 = 0;
return rv2271; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2265))).f_T, ((*(R20 *)rt_nil_check(l_Q_2267))).f_T)))
{
{ rt_int rv2272 = 0;
return rv2272; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2265))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2267))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2265))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2267))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2265))).f_R == ((*(R20 *)rt_nil_check(l_Q_2267))).f_R))))
{
{ rt_int rv2273 = 0;
return rv2273; }
}
}
l_P_2265 = ((*(R20 *)rt_nil_check(l_P_2265))).f_NEXT;
}
RT_B_TICK();
} L_end2266: ;
{ rt_int rv2274 = 1;
return rv2274; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2275; memset(&l_RA_2275, 0, sizeof l_RA_2275);
l_RA_2275 = r_REAL_TYPE(p_A);
R22 * l_RB_2276; memset(&l_RB_2276, 0, sizeof l_RB_2276);
l_RB_2276 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2275))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2275))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2275))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2276))).f_KIND))))
{
{ rt_int rv2277 = 1;
return rv2277; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2275))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2276))).f_MLEN).f_OK))
{
{ rt_int rv2278 = ((((*(R22 *)rt_nil_check(l_RA_2275))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2276))).f_MLEN).f_V);
return rv2278; }
}
{ rt_int rv2279 = ((((*(R22 *)rt_nil_check(l_RA_2275))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2276))).f_MLEN).f_OK);
return rv2279; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2280; memset(&l_RA_2280, 0, sizeof l_RA_2280);
l_RA_2280 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2281; memset(&l_RB_2281, 0, sizeof l_RB_2281);
l_RB_2281 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2280 == NULL) || (l_RB_2281 == NULL)))
{
{ rt_int rv2282 = (l_RA_2280 == l_RB_2281);
return rv2282; }
}
if ((l_RA_2280 == l_RB_2281))
{
{ rt_int rv2283 = 1;
return rv2283; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2280))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2281))).f_NAME)))
{
{ rt_int rv2284 = 0;
return rv2284; }
}
{
R21 * l_X_2285; memset(&l_X_2285, 0, sizeof l_X_2285);
l_X_2285 = ((*(R21 *)rt_nil_check(l_RA_2280))).f_A;
R21 * l_Y_2286; memset(&l_Y_2286, 0, sizeof l_Y_2286);
l_Y_2286 = ((*(R21 *)rt_nil_check(l_RB_2281))).f_A;
for (;;) {
if (((l_X_2285 == NULL) || (l_Y_2286 == NULL))) goto L_end2287;
{
if (((((((*(R21 *)rt_nil_check(l_X_2285))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2285))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2286))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2286))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2285))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2286))).f_NAME)))
{
{ rt_int rv2288 = 0;
return rv2288; }
}
}
else
{
{
R23 l_MX_2289; memset(&l_MX_2289, 0, sizeof l_MX_2289);
S_R23(&l_MX_2289, r_MANIFEST(l_X_2285), 0);
R23 l_MY_2290; memset(&l_MY_2290, 0, sizeof l_MY_2290);
S_R23(&l_MY_2290, r_MANIFEST(l_Y_2286), 0);
if (((!((l_MX_2289).f_OK == (l_MY_2290).f_OK)) || (!((l_MX_2289).f_V == (l_MY_2290).f_V))))
{
{ rt_int rv2291 = 0;
return rv2291; }
}
}
}
l_X_2285 = ((*(R21 *)rt_nil_check(l_X_2285))).f_NEXT;
l_Y_2286 = ((*(R21 *)rt_nil_check(l_Y_2286))).f_NEXT;
}
RT_B_TICK();
} L_end2287: ;
{ rt_int rv2292 = ((((l_X_2285 == NULL) && (l_Y_2286 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2280))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2281))).f_B == NULL));
return rv2292; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2293; memset(&l_Y_2293, 0, sizeof l_Y_2293);
l_Y_2293 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2294; memset(&l_FOUND_2294, 0, sizeof l_FOUND_2294);
l_FOUND_2294 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2293 == NULL)) goto L_end2295;
{
if ((((*(R12 *)rt_nil_check(l_Y_2293))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2296; memset(&l_R_2296, 0, sizeof l_R_2296);
l_R_2296 = r_ORIGINAL(l_Y_2293);
r_ROUTINE_HEADER(l_R_2296);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2296)) && (!((*(R12 *)rt_nil_check(l_R_2296))).f_GENERIC)))
{
if (((!(l_FOUND_2294 == NULL)) && (!(l_FOUND_2294 == l_R_2296))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2294 = l_R_2296;
}
}
}
l_Y_2293 = r_LOOKUP_NEXT(l_Y_2293);
}
RT_B_TICK();
} L_end2295: ;
if ((l_FOUND_2294 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2294))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2297 = l_FOUND_2294;
return rv2297; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2298; memset(&l_NEEDL_2298, 0, sizeof l_NEEDL_2298);
l_NEEDL_2298 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2299; memset(&l_SAVED_2299, 0, sizeof l_SAVED_2299);
l_SAVED_2299 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2298 == NULL)) goto L_end2300;
{
{
R21 * l_T_2301; memset(&l_T_2301, 0, sizeof l_T_2301);
l_T_2301 = ((*(R21 *)rt_nil_check(l_NEEDL_2298))).f_A;
for (;;) {
if ((l_T_2301 == NULL)) goto L_end2302;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2301))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2303; memset(&l_ARGS_2303, 0, sizeof l_ARGS_2303);
l_ARGS_2303 = NULL;
R27 * l_TAIL_2304; memset(&l_TAIL_2304, 0, sizeof l_TAIL_2304);
l_TAIL_2304 = NULL;
R21 * l_P_2305; memset(&l_P_2305, 0, sizeof l_P_2305);
l_P_2305 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2301))).f_B))).f_A;
R12 * l_R_2306; memset(&l_R_2306, 0, sizeof l_R_2306);
rt_int l_ENTERED_2307; memset(&l_ENTERED_2307, 0, sizeof l_ENTERED_2307);
l_ENTERED_2307 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2305 == NULL)) goto L_end2308;
{
{
R27 * l_A_2309; memset(&l_A_2309, 0, sizeof l_A_2309);
if ((((*(R21 *)rt_nil_check(l_P_2305))).f_B == NULL))
{
l_A_2309 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2309 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2305))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2309))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2305))).f_IV;
if ((l_TAIL_2304 == NULL))
{
l_ARGS_2303 = l_A_2309;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2304))).f_NEXT = l_A_2309;
}
l_TAIL_2304 = l_A_2309;
}
l_P_2305 = ((*(R21 *)rt_nil_check(l_P_2305))).f_NEXT;
}
RT_B_TICK();
} L_end2308: ;
if (l_ENTERED_2307)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2306 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2301))).f_NAME, l_ARGS_2303, p_LINE, 0);
if ((l_R_2306 == NULL))
{
l_R_2306 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2301))).f_NAME);
for (;;) {
if ((l_R_2306 == NULL)) goto L_end2310;
{
if ((((*(R12 *)rt_nil_check(l_R_2306))).f_KIND == g_Y_BUILTIN))
{
goto L_end2310;
}
l_R_2306 = r_LOOKUP_NEXT(l_R_2306);
}
RT_B_TICK();
} L_end2310: ;
}
if (((l_R_2306 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2301))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2301))).f_NAME);
}
if ((!(l_R_2306 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2301))).f_NAME, NULL, r_NO_MVAL(), l_R_2306, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2301 = ((*(R21 *)rt_nil_check(l_T_2301))).f_NEXT;
}
RT_B_TICK();
} L_end2302: ;
}
l_NEEDL_2298 = ((*(R21 *)rt_nil_check(l_NEEDL_2298))).f_NEXT;
}
RT_B_TICK();
} L_end2300: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2299;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2311 = 0;
return rv2311; }
}
{
R12 * l_Y_2312; memset(&l_Y_2312, 0, sizeof l_Y_2312);
l_Y_2312 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2313; memset(&l_A_2313, 0, sizeof l_A_2313);
l_A_2313 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2314; memset(&l_F_2314, 0, sizeof l_F_2314);
if ((l_Y_2312 == NULL))
{
{ rt_int rv2315 = 0;
return rv2315; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2312))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2312))).f_DECL == NULL)))
{
{ rt_int rv2316 = 0;
return rv2316; }
}
l_F_2314 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2312))).f_DECL))).f_A;
for (;;) {
if ((l_F_2314 == NULL)) goto L_end2317;
{
{
R21 * l_N_2318; memset(&l_N_2318, 0, sizeof l_N_2318);
l_N_2318 = ((*(R21 *)rt_nil_check(l_F_2314))).f_A;
for (;;) {
if ((l_N_2318 == NULL)) goto L_end2319;
{
if ((l_A_2313 == NULL))
{
{ rt_int rv2320 = 0;
return rv2320; }
}
if (((((*(R21 *)rt_nil_check(l_F_2314))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2313))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2321 = 1;
return rv2321; }
}
l_A_2313 = ((*(R21 *)rt_nil_check(l_A_2313))).f_NEXT;
l_N_2318 = ((*(R21 *)rt_nil_check(l_N_2318))).f_NEXT;
}
RT_B_TICK();
} L_end2319: ;
}
l_F_2314 = ((*(R21 *)rt_nil_check(l_F_2314))).f_NEXT;
}
RT_B_TICK();
} L_end2317: ;
}
{ rt_int rv2322 = 0;
return rv2322; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2323; memset(&l_A_2323, 0, sizeof l_A_2323);
l_A_2323 = p_ARGS;
R12 * l_I_2324; memset(&l_I_2324, 0, sizeof l_I_2324);
l_I_2324 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2325; memset(&l_SAVED_2325, 0, sizeof l_SAVED_2325);
l_SAVED_2325 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2326; memset(&l_P_2326, 0, sizeof l_P_2326);
l_P_2326 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2327; memset(&l_TAIL_2327, 0, sizeof l_TAIL_2327);
l_TAIL_2327 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2324)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2324))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2324))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2324))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2324))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2324))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2324;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2326 == NULL)) goto L_end2328;
{
{
R28 * l_PM_2329; memset(&l_PM_2329, 0, sizeof l_PM_2329);
l_PM_2329 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2329)), (*(R28 *)rt_nil_check(l_P_2326)), 0);
((*(R28 *)rt_nil_check(l_PM_2329))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2326))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2329))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2326))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2329))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2326))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2323))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2329))).f_T = (((*(R27 *)rt_nil_check(l_A_2323))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2329))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2329))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2329))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2329))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2329))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2326))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2329))).f_TS = NULL;
if ((l_TAIL_2327 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2324))).f_PARAMS = l_PM_2329;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2327))).f_NEXT = l_PM_2329;
}
l_TAIL_2327 = l_PM_2329;
}
l_P_2326 = ((*(R28 *)rt_nil_check(l_P_2326))).f_NEXT;
l_A_2323 = ((*(R27 *)rt_nil_check(l_A_2323))).f_NEXT;
}
RT_B_TICK();
} L_end2328: ;
((*(R12 *)rt_nil_check(l_I_2324))).f_RESULT = r_RESULT_TYPE(l_I_2324);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2325;
S_R10(&((*(R12 *)rt_nil_check(l_I_2324))).f_FWD, r_C_HEADER(l_I_2324), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2324))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2324))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2324;
{ R12 * rv2330 = l_I_2324;
return rv2330; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2331 = 0;
return rv2331; }
}
{ rt_int rv2332 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2332; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2333; memset(&l_C_2333, 0, sizeof l_C_2333);
if ((p_TS == NULL))
{
{ R21 * rv2334 = NULL;
return rv2334; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2335; memset(&l_F_2335, 0, sizeof l_F_2335);
l_F_2335 = p_FORMALS;
R21 * l_A_2336; memset(&l_A_2336, 0, sizeof l_A_2336);
l_A_2336 = p_ARGS;
for (;;) {
if ((l_F_2335 == NULL)) goto L_end2337;
{
{
R21 * l_N_2338; memset(&l_N_2338, 0, sizeof l_N_2338);
l_N_2338 = ((*(R21 *)rt_nil_check(l_F_2335))).f_A;
for (;;) {
if ((l_N_2338 == NULL)) goto L_end2339;
{
if ((l_A_2336 == NULL))
{
{ R21 * rv2340 = p_TS;
return rv2340; }
}
if (((((*(R21 *)rt_nil_check(l_F_2335))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2338))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2341 = l_A_2336;
return rv2341; }
}
l_A_2336 = ((*(R21 *)rt_nil_check(l_A_2336))).f_NEXT;
l_N_2338 = ((*(R21 *)rt_nil_check(l_N_2338))).f_NEXT;
}
RT_B_TICK();
} L_end2339: ;
}
l_F_2335 = ((*(R21 *)rt_nil_check(l_F_2335))).f_NEXT;
}
RT_B_TICK();
} L_end2337: ;
}
{ R21 * rv2342 = p_TS;
return rv2342; }
}
l_C_2333 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2333))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2333))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2343 = l_C_2333;
return rv2343; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2344; memset(&l_C_2344, 0, sizeof l_C_2344);
l_C_2344 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2344)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2344))).f_NEXT = NULL;
{ R21 * rv2345 = l_C_2344;
return rv2345; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2346; memset(&l_P_2346, 0, sizeof l_P_2346);
l_P_2346 = p_L;
for (;;) {
if ((l_P_2346 == NULL)) goto L_end2347;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2346))).f_NAME, p_NAME))
{
{ rt_int rv2348 = 1;
return rv2348; }
}
l_P_2346 = ((*(R21 *)rt_nil_check(l_P_2346))).f_NEXT;
}
RT_B_TICK();
} L_end2347: ;
{ rt_int rv2349 = 0;
return rv2349; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2350; memset(&l_IS_2350, 0, sizeof l_IS_2350);
l_IS_2350 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2351 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2351; }
}
if ((l_IS_2350 == NULL))
{
{ rt_int rv2352 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2352; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2350))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2350))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2353 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2353; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2350))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2350))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2354 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2354; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2350))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2355 = 0;
return rv2355; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2356; memset(&l_ITEMS_2356, 0, sizeof l_ITEMS_2356);
l_ITEMS_2356 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2357; memset(&l_HEAD_2357, 0, sizeof l_HEAD_2357);
l_HEAD_2357 = NULL;
R21 * l_TAIL_2358; memset(&l_TAIL_2358, 0, sizeof l_TAIL_2358);
l_TAIL_2358 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2356 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2356))).f_A, &l_HEAD_2357, &l_TAIL_2358);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2356))).f_B, &l_HEAD_2357, &l_TAIL_2358);
{
R21 * l_R_2359; memset(&l_R_2359, 0, sizeof l_R_2359);
l_R_2359 = ((*(R21 *)rt_nil_check(l_ITEMS_2356))).f_C;
for (;;) {
if ((l_R_2359 == NULL)) goto L_end2360;
{
{
R12 * l_Z_2361; memset(&l_Z_2361, 0, sizeof l_Z_2361);
l_Z_2361 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2359))).f_NAME);
if (((l_Z_2361 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2359))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2359))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2359))).f_NAME);
}
for (;;) {
if ((l_Z_2361 == NULL)) goto L_end2362;
{
if ((((*(R12 *)rt_nil_check(l_Z_2361))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2363; memset(&l_O_2363, 0, sizeof l_O_2363);
l_O_2363 = r_ORIGINAL(l_Z_2361);
R21 * l_U_2364; memset(&l_U_2364, 0, sizeof l_U_2364);
r_COMPUTE_USES(l_O_2363);
l_U_2364 = ((*(R12 *)rt_nil_check(l_O_2363))).f_USES;
for (;;) {
if ((l_U_2364 == NULL)) goto L_end2365;
{
if ((!r_IN_IDENTS(l_HEAD_2357, ((*(R21 *)rt_nil_check(l_U_2364))).f_NAME)))
{
{
R21 * l_N_2366; memset(&l_N_2366, 0, sizeof l_N_2366);
l_N_2366 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2364))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2366))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2364))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2366))).f_IV = ((*(R21 *)rt_nil_check(l_U_2364))).f_IV;
r_ADD_LIST(l_N_2366, &l_HEAD_2357, &l_TAIL_2358);
}
}
l_U_2364 = ((*(R21 *)rt_nil_check(l_U_2364))).f_NEXT;
}
RT_B_TICK();
} L_end2365: ;
}
}
l_Z_2361 = r_LOOKUP_NEXT(l_Z_2361);
}
RT_B_TICK();
} L_end2362: ;
}
l_R_2359 = ((*(R21 *)rt_nil_check(l_R_2359))).f_NEXT;
}
RT_B_TICK();
} L_end2360: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2357;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2367; memset(&l_M_2367, 0, sizeof l_M_2367);
if ((p_B == NULL))
{
{ rt_int rv2368 = 0;
return rv2368; }
}
l_M_2367 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2367 == NULL)) goto L_end2369;
{
if ((((*(R21 *)rt_nil_check(l_M_2367))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2367))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2367))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2367))).f_C, p_NAME)))
{
{ rt_int rv2370 = 1;
return rv2370; }
}
}
l_M_2367 = ((*(R21 *)rt_nil_check(l_M_2367))).f_NEXT;
}
RT_B_TICK();
} L_end2369: ;
{ rt_int rv2371 = 0;
return rv2371; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2372; memset(&l_R_2372, 0, sizeof l_R_2372);
l_R_2372 = p_RS;
for (;;) {
if ((l_R_2372 == NULL)) goto L_end2373;
{
if ((((*(R21 *)rt_nil_check(l_R_2372))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2372));
if ((!(((*(R21 *)rt_nil_check(l_R_2372))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2372))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2372))).f_E))).f_B, 1);
}
}
l_R_2372 = ((*(R21 *)rt_nil_check(l_R_2372))).f_NEXT;
}
RT_B_TICK();
} L_end2373: ;
}
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R21 * l_P_2374; memset(&l_P_2374, 0, sizeof l_P_2374);
l_P_2374 = p_L;
for (;;) {
if ((l_P_2374 == NULL)) goto L_end2375;
{
{
R12 * l_V_2376; memset(&l_V_2376, 0, sizeof l_V_2376);
l_V_2376 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2374))).f_NAME);
if ((!(l_V_2376 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2376))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2376, ((*(R21 *)rt_nil_check(l_P_2374))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2376))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2374))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R21 *)rt_nil_check(l_P_2374))).f_NAME);
}
}
}
}
l_P_2374 = ((*(R21 *)rt_nil_check(l_P_2374))).f_NEXT;
}
RT_B_TICK();
} L_end2375: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2377; memset(&l_P_2377, 0, sizeof l_P_2377);
l_P_2377 = p_L;
for (;;) {
if ((l_P_2377 == NULL)) goto L_end2378;
{
{
R12 * l_V_2379; memset(&l_V_2379, 0, sizeof l_V_2379);
l_V_2379 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2377))).f_NAME);
R21 * l_N_2380; memset(&l_N_2380, 0, sizeof l_N_2380);
l_N_2380 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2377))).f_LINE);
if ((l_V_2379 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2377))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2377))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2380))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2377))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2380))).f_IV = ((*(R12 *)rt_nil_check(l_V_2379))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2379))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2380, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2377 = ((*(R21 *)rt_nil_check(l_P_2377))).f_NEXT;
}
RT_B_TICK();
} L_end2378: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2381; memset(&l_IS_2381, 0, sizeof l_IS_2381);
l_IS_2381 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2382; memset(&l_U_2382, 0, sizeof l_U_2382);
l_U_2382 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2381 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2381))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2382 == NULL)) goto L_end2383;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2382))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2381))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2382))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2382))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2382))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2382))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2381))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2382))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2382))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2382))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2382 = ((*(R21 *)rt_nil_check(l_U_2382))).f_NEXT;
}
RT_B_TICK();
} L_end2383: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2384; memset(&l_R_2384, 0, sizeof l_R_2384);
l_R_2384 = p_RS;
for (;;) {
if ((l_R_2384 == NULL)) goto L_end2385;
{
{
R12 * l_Z_2386; memset(&l_Z_2386, 0, sizeof l_Z_2386);
l_Z_2386 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2384))).f_NAME);
for (;;) {
if ((l_Z_2386 == NULL)) goto L_end2387;
{
if ((((*(R12 *)rt_nil_check(l_Z_2386))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2388; memset(&l_O_2388, 0, sizeof l_O_2388);
l_O_2388 = r_ORIGINAL(l_Z_2386);
r_COMPUTE_USES(l_O_2388);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2388))).f_USES, p_NAME))
{
{ rt_int rv2389 = 1;
return rv2389; }
}
}
}
l_Z_2386 = r_LOOKUP_NEXT(l_Z_2386);
}
RT_B_TICK();
} L_end2387: ;
}
l_R_2384 = ((*(R21 *)rt_nil_check(l_R_2384))).f_NEXT;
}
RT_B_TICK();
} L_end2385: ;
{ rt_int rv2390 = 0;
return rv2390; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2391; memset(&l_M_2391, 0, sizeof l_M_2391);
l_M_2391 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2391 == NULL)) goto L_end2392;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2391))).f_NAME))
{
{ rt_int rv2393 = 1;
return rv2393; }
}
l_M_2391 = ((*(R12 *)rt_nil_check(l_M_2391))).f_MODL;
}
RT_B_TICK();
} L_end2392: ;
{ rt_int rv2394 = 0;
return rv2394; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2395 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2395; }
}
{ R10 rv2396 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2396; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2397; memset(&l_C_2397, 0, sizeof l_C_2397);
l_C_2397 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2397 == NULL)) goto L_end2398;
{
if ((((*(R17 *)rt_nil_check(l_C_2397))).f_KIND == ((rt_int)1LL)))
{
goto L_end2398;
}
if ((((*(R17 *)rt_nil_check(l_C_2397))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2399; memset(&l_H_2399, 0, sizeof l_H_2399);
l_H_2399 = ((*(R17 *)rt_nil_check(l_C_2397))).f_HANDLERS;
for (;;) {
if ((l_H_2399 == NULL)) goto L_end2400;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2399))).f_A, p_NAME))
{
{ rt_int rv2401 = 1;
return rv2401; }
}
l_H_2399 = ((*(R21 *)rt_nil_check(l_H_2399))).f_NEXT;
}
RT_B_TICK();
} L_end2400: ;
}
}
l_C_2397 = ((*(R17 *)rt_nil_check(l_C_2397))).f_NEXT;
}
RT_B_TICK();
} L_end2398: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2402 = 1;
return rv2402; }
}
}
{ rt_int rv2403 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2403; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2404; memset(&l_C_2404, 0, sizeof l_C_2404);
l_C_2404 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2404)), ({ R17 rc2405; memset(&rc2405, 0, sizeof rc2405);  rc2405.f_KIND = p_KIND; S_R10(&rc2405.f_NAME, p_NAME, 0); rc2405.f_HANDLERS = NULL; rc2405.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2405; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2404;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2406; memset(&l_C_2406, 0, sizeof l_C_2406);
l_C_2406 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2406 == NULL)) goto L_end2407;
{
if ((((*(R17 *)rt_nil_check(l_C_2406))).f_KIND == p_KIND))
{
{ R17 * rv2408 = l_C_2406;
return rv2408; }
}
if ((((*(R17 *)rt_nil_check(l_C_2406))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2409 = NULL;
return rv2409; }
}
if ((((*(R17 *)rt_nil_check(l_C_2406))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2406))).f_NAME));
}
l_C_2406 = ((*(R17 *)rt_nil_check(l_C_2406))).f_NEXT;
}
RT_B_TICK();
} L_end2407: ;
{ R17 * rv2410 = NULL;
return rv2410; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2411; memset(&l_C_2411, 0, sizeof l_C_2411);
l_C_2411 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2412; memset(&l_N_2412, 0, sizeof l_N_2412);
l_N_2412 = ((rt_int)0LL);
for (;;) {
if ((l_C_2411 == NULL)) goto L_end2413;
{
if ((((*(R17 *)rt_nil_check(l_C_2411))).f_KIND == ((rt_int)1LL)))
{
goto L_end2413;
}
if ((((*(R17 *)rt_nil_check(l_C_2411))).f_KIND == ((rt_int)3LL)))
{
l_N_2412 = rt_add(l_N_2412, ((rt_int)1LL));
}
l_C_2411 = ((*(R17 *)rt_nil_check(l_C_2411))).f_NEXT;
}
RT_B_TICK();
} L_end2413: ;
{ rt_int rv2414 = l_N_2412;
return rv2414; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2415; memset(&l_N_2415, 0, sizeof l_N_2415);
l_N_2415 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2415 == NULL)) goto L_end2416;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2415))).f_NAME, p_NAME))
{
{ R10 rv2417 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2417; }
}
l_N_2415 = ((*(R21 *)rt_nil_check(l_N_2415))).f_NEXT;
}
RT_B_TICK();
} L_end2416: ;
l_N_2415 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2415))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2415))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2415;
{ R10 rv2418 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2418; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2419; memset(&l_D_2419, 0, sizeof l_D_2419);
l_D_2419 = p_DECLS;
for (;;) {
if ((l_D_2419 == NULL)) goto L_end2420;
{
if (((((*(R21 *)rt_nil_check(l_D_2419))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2419))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2421; memset(&l_Y_2421, 0, sizeof l_Y_2421);
l_Y_2421 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2419))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2419))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2421))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2421))).f_DECL = l_D_2419;
r_DEFINE(l_Y_2421, ((*(R21 *)rt_nil_check(l_D_2419))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2419))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2419))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2419))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2419 = ((*(R21 *)rt_nil_check(l_D_2419))).f_NEXT;
}
RT_B_TICK();
} L_end2420: ;
l_D_2419 = p_DECLS;
for (;;) {
if ((l_D_2419 == NULL)) goto L_end2422;
{
if ((((*(R21 *)rt_nil_check(l_D_2419))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2423; memset(&l_F_2423, 0, sizeof l_F_2423);
l_F_2423 = ((*(R21 *)rt_nil_check(l_D_2419))).f_A;
for (;;) {
if ((l_F_2423 == NULL)) goto L_end2424;
{
if (((((*(R21 *)rt_nil_check(l_F_2423))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2423))).f_B == NULL))))
{
{
R22 * l_FT_2425; memset(&l_FT_2425, 0, sizeof l_FT_2425);
l_FT_2425 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2423))).f_B));
if (((!r_IS_SCALAR(l_FT_2425)) || (!(((*(R22 *)rt_nil_check(l_FT_2425))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2423))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2423 = ((*(R21 *)rt_nil_check(l_F_2423))).f_NEXT;
}
RT_B_TICK();
} L_end2424: ;
}
}
l_D_2419 = ((*(R21 *)rt_nil_check(l_D_2419))).f_NEXT;
}
RT_B_TICK();
} L_end2422: ;
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2426; memset(&l_P_2426, 0, sizeof l_P_2426);
l_P_2426 = p_L;
for (;;) {
if ((l_P_2426 == NULL)) goto L_end2427;
{
if (((((*(R21 *)rt_nil_check(l_P_2426))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2426))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2428 = 1;
return rv2428; }
}
}
l_P_2426 = ((*(R21 *)rt_nil_check(l_P_2426))).f_NEXT;
}
RT_B_TICK();
} L_end2427: ;
{ rt_int rv2429 = 0;
return rv2429; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2430; memset(&l_A_2430, 0, sizeof l_A_2430);
l_A_2430 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2431; memset(&l_FOUND_2431, 0, sizeof l_FOUND_2431);
l_FOUND_2431 = NULL;
rt_int l_N_2432; memset(&l_N_2432, 0, sizeof l_N_2432);
l_N_2432 = ((rt_int)0LL);
R12 * l_Y_2433; memset(&l_Y_2433, 0, sizeof l_Y_2433);
l_Y_2433 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2430 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2430))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2430))).f_DECL == NULL)))
{
{ R22 * rv2434 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2434; }
}
}
for (;;) {
if ((l_Y_2433 == NULL)) goto L_end2435;
{
if (((((*(R12 *)rt_nil_check(l_Y_2433))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2433))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2433))).f_NAME) == l_Y_2433))
{
{
R22 * l_T_2436; memset(&l_T_2436, 0, sizeof l_T_2436);
l_T_2436 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2433))).f_DECL == NULL))
{
l_T_2436 = ((*(R12 *)rt_nil_check(l_Y_2433))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2433))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2433))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2433))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2433))).f_DECL))).f_B))).f_A)))
{
l_T_2436 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2433))).f_NAME, p_LINE);
}
}
if ((!(l_T_2436 == NULL)))
{
l_T_2436 = r_REAL_TYPE(l_T_2436);
if ((((*(R22 *)rt_nil_check(l_T_2436))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2436))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2436))).f_BASE == l_FOUND_2431))))
{
if ((!(l_FOUND_2431 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2431 = ((*(R22 *)rt_nil_check(l_T_2436))).f_BASE;
}
}
}
}
}
}
l_Y_2433 = ((*(R12 *)rt_nil_check(l_Y_2433))).f_SNEXT;
}
RT_B_TICK();
} L_end2435: ;
if ((l_FOUND_2431 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2437 = l_FOUND_2431;
return rv2437; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2438; memset(&l_R_2438, 0, sizeof l_R_2438);
l_R_2438 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2438))).f_BASE == NULL))
{
{ R22 * rv2439 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2439; }
}
{ R22 * rv2440 = ((*(R22 *)rt_nil_check(l_R_2438))).f_BASE;
return rv2440; }
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
R21 * l_S_2441; memset(&l_S_2441, 0, sizeof l_S_2441);
l_S_2441 = p_S0;
for (;;) {
if ((l_S_2441 == NULL)) goto L_end2442;
{
{
R21 * l_L_2443; memset(&l_L_2443, 0, sizeof l_L_2443);
l_L_2443 = l_S_2441;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2443))).f_KIND == g_N_LABELED))) goto L_end2444;
{
{
R12 * l_Y_2445; memset(&l_Y_2445, 0, sizeof l_Y_2445);
l_Y_2445 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2443))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2445))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2443))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2443))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2445))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2445, ((*(R21 *)rt_nil_check(l_L_2443))).f_LINE);
}
l_L_2443 = ((*(R21 *)rt_nil_check(l_L_2443))).f_A;
}
RT_B_TICK();
} L_end2444: ;
}
l_S_2441 = ((*(R21 *)rt_nil_check(l_S_2441))).f_NEXT;
}
RT_B_TICK();
} L_end2442: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2446; memset(&l_D_2446, 0, sizeof l_D_2446);
l_D_2446 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2447; memset(&l_S_2447, 0, sizeof l_S_2447);
l_S_2447 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2446 == NULL)) goto L_end2448;
{
if (((((*(R21 *)rt_nil_check(l_D_2446))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2446))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2446);
}
l_D_2446 = ((*(R21 *)rt_nil_check(l_D_2446))).f_NEXT;
}
RT_B_TICK();
} L_end2448: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2447 == NULL)) goto L_end2449;
{
r_STMT(l_S_2447);
l_S_2447 = ((*(R21 *)rt_nil_check(l_S_2447))).f_NEXT;
}
RT_B_TICK();
} L_end2449: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2450; memset(&l_F_2450, 0, sizeof l_F_2450);
S_R10(&l_F_2450, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2451; memset(&l_H_2451, 0, sizeof l_H_2451);
l_H_2451 = p_HANDLERS;
R10 l_WORD_2452; memset(&l_WORD_2452, 0, sizeof l_WORD_2452);
S_R10(&l_WORD_2452, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2450, l_F_2450));
r_PUSH_CTX(((rt_int)3LL), l_F_2450);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2450, l_F_2450, l_F_2450));
for (;;) {
if ((l_H_2451 == NULL)) goto L_end2453;
{
{
R21 * l_N_2454; memset(&l_N_2454, 0, sizeof l_N_2454);
l_N_2454 = ((*(R21 *)rt_nil_check(l_H_2451))).f_A;
R10 l_COND_2455; memset(&l_COND_2455, 0, sizeof l_COND_2455);
S_R10(&l_COND_2455, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2454 == NULL)) goto L_end2456;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2454))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2454))).f_NAME) || r_IN_HANDLERS(((*(R21 *)rt_nil_check(l_H_2451))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2454))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2454))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2454))).f_NAME);
}
S_R10(&l_COND_2455, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2455, l_F_2450, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2454))).f_NAME)), 0);
l_N_2454 = ((*(R21 *)rt_nil_check(l_N_2454))).f_NEXT;
}
RT_B_TICK();
} L_end2456: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2452, l_COND_2455));
S_R10(&l_WORD_2452, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2450, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2451))).f_B);
r_POP_CTX();
}
l_H_2451 = ((*(R21 *)rt_nil_check(l_H_2451))).f_NEXT;
}
RT_B_TICK();
} L_end2453: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2450));
}
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_H_2457; memset(&l_H_2457, 0, sizeof l_H_2457);
l_H_2457 = p_HS;
for (;;) {
if ((l_H_2457 == NULL)) goto L_end2458;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2457))).f_A, p_NAME))
{
{ rt_int rv2459 = 1;
return rv2459; }
}
l_H_2457 = ((*(R21 *)rt_nil_check(l_H_2457))).f_NEXT;
}
RT_B_TICK();
} L_end2458: ;
{ rt_int rv2460 = 0;
return rv2460; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2461; memset(&l_K_2461, 0, sizeof l_K_2461);
l_K_2461 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2461 == g_N_EXCEPT))
{
{ rt_int rv2462 = r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
return rv2462; }
}
{ rt_int rv2463 = (((((((l_K_2461 == g_N_BLOCK) || (l_K_2461 == g_N_IF)) || (l_K_2461 == g_N_CASE)) || (l_K_2461 == g_N_LOOP)) || (l_K_2461 == g_N_FOR)) || (l_K_2461 == g_N_PAR)) || (l_K_2461 == g_N_WITH));
return rv2463; }
rt_raise(RT_X_INIT);
}
static R21 * r_NAMED_ROOT(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_2464; memset(&l_K_2464, 0, sizeof l_K_2464);
l_K_2464 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_2464 == g_N_NAME) || (l_K_2464 == g_N_APPLY)))
{
{ R21 * rv2465 = p_E;
return rv2465; }
}
else if ((((l_K_2464 == g_N_INDEX) || (l_K_2464 == g_N_FIELD)) || (l_K_2464 == g_N_SUBSTR)))
{
{ R21 * rv2466 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2466; }
}
{ R21 * rv2467 = NULL;
return rv2467; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2468; memset(&l_K_2468, 0, sizeof l_K_2468);
l_K_2468 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2468 == g_N_NULL))
{
return;
}
else if ((l_K_2468 == g_N_LABELED))
{
{
R12 * l_Y_2469; memset(&l_Y_2469, 0, sizeof l_Y_2469);
l_Y_2469 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2469))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2468 == g_N_GOTO))
{
{
R12 * l_Y_2470; memset(&l_Y_2470, 0, sizeof l_Y_2470);
l_Y_2470 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2471; memset(&l_N_2471, 0, sizeof l_N_2471);
R17 * l_C_2472; memset(&l_C_2472, 0, sizeof l_C_2472);
l_C_2472 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2470 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2470))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2470))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2471 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2470))).f_MV);
for (;;) {
if ((l_N_2471 <= ((rt_int)0LL))) goto L_end2473;
{
if ((((*(R17 *)rt_nil_check(l_C_2472))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2472))).f_NAME));
l_N_2471 = rt_sub(l_N_2471, ((rt_int)1LL));
}
l_C_2472 = ((*(R17 *)rt_nil_check(l_C_2472))).f_NEXT;
}
RT_B_TICK();
} L_end2473: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2470))).f_ACCESS));
}
}
else if ((l_K_2468 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2468 == g_N_CALL))
{
{
R26 l_V_2474; memset(&l_V_2474, 0, sizeof l_V_2474);
S_R26(&l_V_2474, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2474).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2474).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2474).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2468 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2468 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2468 == g_N_LOOP))
{
{
R10 l_END_L_2475; memset(&l_END_L_2475, 0, sizeof l_END_L_2475);
S_R10(&l_END_L_2475, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2475));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2475);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2475));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2475));
}
}
else if ((l_K_2468 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2468 == g_N_EXIT))
{
{
R17 * l_C_2476; memset(&l_C_2476, 0, sizeof l_C_2476);
l_C_2476 = r_LEAVE(((rt_int)2LL));
if ((l_C_2476 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2476))).f_NAME));
}
}
else if ((l_K_2468 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2468 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2468 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2468 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2468 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2468 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2468 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2468 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2477; memset(&l_Y_2477, 0, sizeof l_Y_2477);
l_Y_2477 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2477 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2477))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2477))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2478 = r_CALL_EXPR(p_S, NULL);
return rv2478; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2479; memset(&l_ARM_2479, 0, sizeof l_ARM_2479);
l_ARM_2479 = p_ARMS;
R10 l_WORD_2480; memset(&l_WORD_2480, 0, sizeof l_WORD_2480);
S_R10(&l_WORD_2480, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2481; memset(&l_OPEN_2481, 0, sizeof l_OPEN_2481);
l_OPEN_2481 = ((rt_int)0LL);
rt_int l_CHOSEN_2482; memset(&l_CHOSEN_2482, 0, sizeof l_CHOSEN_2482);
l_CHOSEN_2482 = 0;
for (;;) {
if ((l_ARM_2479 == NULL)) goto L_end2483;
{
{
R23 l_M_2484; memset(&l_M_2484, 0, sizeof l_M_2484);
S_R23(&l_M_2484, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2479))).f_A), 0);
if (l_CHOSEN_2482)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2479))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2479))).f_B);
}
else if ((l_M_2484).f_OK)
{
if ((!r_TEQS(l_WORD_2480, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2481 = rt_add(l_OPEN_2481, ((rt_int)1LL));
S_R10(&l_WORD_2480, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2479))).f_A)));
if (((l_M_2484).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2479))).f_B);
l_CHOSEN_2482 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2479))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2480, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2479))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2479))).f_B);
S_R10(&l_WORD_2480, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2479 = ((*(R21 *)rt_nil_check(l_ARM_2479))).f_NEXT;
}
RT_B_TICK();
} L_end2483: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2482)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2480, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2486_lo = ((rt_int)1LL), it2486_hi = l_OPEN_2481;
for (rt_int it2486 = it2486_lo; it2486 <= it2486_hi; it2486++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2486 == it2486_hi) break;
} } L_end2485: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2487; memset(&l_SAVED_CODE_2487, 0, sizeof l_SAVED_CODE_2487);
S_R14(&l_SAVED_CODE_2487, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2488; memset(&rc2488, 0, sizeof rc2488);  rc2488.f_HEAD = NULL; rc2488.f_TAIL = NULL; rc2488; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2487, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2489; memset(&l_C_2489, 0, sizeof l_C_2489);
S_R10(&l_C_2489, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2490; memset(&l_END_L_2490, 0, sizeof l_END_L_2490);
S_R10(&l_END_L_2490, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2491; memset(&l_IT_2491, 0, sizeof l_IT_2491);
S_R10(&l_IT_2491, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2492; memset(&l_R_2492, 0, sizeof l_R_2492);
l_R_2492 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2493; memset(&l_LO_2493, 0, sizeof l_LO_2493);
S_R26(&l_LO_2493, r_EXPR(((*(R21 *)rt_nil_check(l_R_2492))).f_A, NULL), 0);
R26 l_HI_2494; memset(&l_HI_2494, 0, sizeof l_HI_2494);
S_R26(&l_HI_2494, r_EXPR(((*(R21 *)rt_nil_check(l_R_2492))).f_B, (l_LO_2493).f_T), 0);
R22 * l_T_2495; memset(&l_T_2495, 0, sizeof l_T_2495);
l_T_2495 = r_REAL_TYPE((l_LO_2493).f_T);
R10 l_LOC_2496; memset(&l_LOC_2496, 0, sizeof l_LOC_2496);
R10 l_HIC_2497; memset(&l_HIC_2497, 0, sizeof l_HIC_2497);
if ((((*(R22 *)rt_nil_check(l_T_2495))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2495))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2495))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2495))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2496, (l_LO_2493).f_C, 0);
S_R10(&l_HIC_2497, (l_HI_2494).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2492))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2492))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2496, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2496), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2492))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2497, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2497), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2491, l_LOC_2496, l_IT_2491, l_HIC_2497));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2491, l_IT_2491, l_IT_2491, l_IT_2491));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2498; memset(&l_Y_2498, 0, sizeof l_Y_2498);
l_Y_2498 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2498))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2495))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2498))).f_T = ((*(R22 *)rt_nil_check(l_T_2495))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2498))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2498, rt_str("", 0)), l_IT_2491));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2498, rt_str("", 0)), l_IT_2491));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2498))).f_ACCESS, l_IT_2491, 0);
}
r_DEFINE(l_Y_2498, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2490);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2491, l_IT_2491));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2490));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2499; memset(&l_CS_2499, 0, sizeof l_CS_2499);
l_CS_2499 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2500; memset(&l_C_2500, 0, sizeof l_C_2500);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2500 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2499))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2499))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2499))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2499))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2501; memset(&l_V_2501, 0, sizeof l_V_2501);
S_R10(&l_V_2501, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT), l_V_2501, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2499))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2500 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2501));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2502; memset(&l_C_2502, 0, sizeof l_C_2502);
l_C_2502 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2502 == NULL)) goto L_end2503;
{
if ((((*(R17 *)rt_nil_check(l_C_2502))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2502))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2502))).f_KIND == ((rt_int)1LL)))
{
goto L_end2503;
}
l_C_2502 = ((*(R17 *)rt_nil_check(l_C_2502))).f_NEXT;
}
RT_B_TICK();
} L_end2503: ;
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
R21 * l_TG_2504; memset(&l_TG_2504, 0, sizeof l_TG_2504);
l_TG_2504 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2504))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2505; memset(&l_B_2505, 0, sizeof l_B_2505);
S_R26(&l_B_2505, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2504))).f_A, NULL), 0);
if ((!(l_B_2505).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2505).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2506; memset(&l_ARGS_2506, 0, sizeof l_ARGS_2506);
l_ARGS_2506 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2504))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2504))).f_C, g_M_IN, r_VAL_ARG(l_B_2505, NULL))));
R12 * l_Y_2507; memset(&l_Y_2507, 0, sizeof l_Y_2507);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2506))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2507 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2506, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2507 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2506))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2507 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2506, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2507 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2507, l_ARGS_2506, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2505).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2505).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2508; memset(&l_V_2508, 0, sizeof l_V_2508);
S_R26(&l_V_2508, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2505).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2508).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2505).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2505).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2504))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2504))).f_C), (l_V_2508).f_C));
}
}
return;
}
{
R26 l_LV_2509; memset(&l_LV_2509, 0, sizeof l_LV_2509);
S_R26(&l_LV_2509, r_EXPR(l_TG_2504, NULL), 0);
R21 * l_SAVED_Q_2510; memset(&l_SAVED_Q_2510, 0, sizeof l_SAVED_Q_2510);
l_SAVED_Q_2510 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2509).f_LVAL))
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
R26 l_V_2511; memset(&l_V_2511, 0, sizeof l_V_2511);
S_R26(&l_V_2511, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2509).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_2509).f_T, (l_LV_2509).f_C, l_V_2511, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2509).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2510;
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
R12 * l_Y_2512; memset(&l_Y_2512, 0, sizeof l_Y_2512);
l_Y_2512 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2513; memset(&l_V_2513, 0, sizeof l_V_2513);
S_R26(&l_V_2513, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2512))).f_T = (l_V_2513).f_T;
((*(R12 *)rt_nil_check(l_Y_2512))).f_WITHV = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2514; memset(&l_CN_2514, 0, sizeof l_CN_2514);
S_R10(&l_CN_2514, r_NEW_OBJECT(l_Y_2512, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2513).f_T))
{
r_CODE(r_INIT_CODE((l_V_2513).f_T, l_CN_2514));
}
r_CODE(r_ASSIGN_CODE((l_V_2513).f_T, l_CN_2514, (l_V_2513).f_C));
}
}
else
{
if ((!(l_V_2513).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2515; memset(&l_P_2515, 0, sizeof l_P_2515);
S_R10(&l_P_2515, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2513).f_T), l_P_2515, (l_V_2513).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2512))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2515), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2512))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2512))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2512))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R21 * l_R_2516; memset(&l_R_2516, 0, sizeof l_R_2516);
l_R_2516 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_2516 == NULL)))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_R_2516))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_2517; memset(&l_OLD_2517, 0, sizeof l_OLD_2517);
l_OLD_2517 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2516))).f_NAME);
if ((!(l_OLD_2517 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_2517))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_2518; memset(&l_H_2518, 0, sizeof l_H_2518);
l_H_2518 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_R_2516))).f_NAME);
((*(R12 *)rt_nil_check(l_H_2518))).f_T = ((*(R12 *)rt_nil_check(l_OLD_2517))).f_T;
((*(R12 *)rt_nil_check(l_H_2518))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_2518))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_2517))).f_OWNER;
r_DEFINE(l_H_2518, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_2512, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2519; memset(&l_ARM_2519, 0, sizeof l_ARM_2519);
l_ARM_2519 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_2520; memset(&l_SEEN_2520, 0, sizeof l_SEEN_2520);
l_SEEN_2520 = NULL;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2521; memset(&l_CH_2521, 0, sizeof l_CH_2521);
S_R26(&l_CH_2521, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2522; memset(&l_T_2522, 0, sizeof l_T_2522);
l_T_2522 = r_REAL_TYPE((l_CH_2521).f_T);
R12 * l_BOUND_2523; memset(&l_BOUND_2523, 0, sizeof l_BOUND_2523);
l_BOUND_2523 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2524; memset(&l_TMP_2524, 0, sizeof l_TMP_2524);
S_R10(&l_TMP_2524, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2525; memset(&l_WORD_2525, 0, sizeof l_WORD_2525);
S_R10(&l_WORD_2525, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2524, (l_CH_2521).f_C));
for (;;) {
if ((l_ARM_2519 == NULL)) goto L_end2526;
{
{
R21 * l_L_2527; memset(&l_L_2527, 0, sizeof l_L_2527);
l_L_2527 = ((*(R21 *)rt_nil_check(l_ARM_2519))).f_A;
R10 l_COND_2528; memset(&l_COND_2528, 0, sizeof l_COND_2528);
S_R10(&l_COND_2528, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2527 == NULL)) goto L_end2529;
{
S_R10(&l_COND_2528, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2528, l_TMP_2524, (r_EXPR(l_L_2527, l_T_2522)).f_C), 0);
l_L_2527 = ((*(R21 *)rt_nil_check(l_L_2527))).f_NEXT;
}
RT_B_TICK();
} L_end2529: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2525, l_COND_2528));
S_R10(&l_WORD_2525, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2519))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2519))).f_C);
}
l_ARM_2519 = ((*(R21 *)rt_nil_check(l_ARM_2519))).f_NEXT;
}
RT_B_TICK();
} L_end2526: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2525, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_2522))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_2521);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2522))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2522))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2522));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2521).f_C));
for (;;) {
if ((l_ARM_2519 == NULL)) goto L_end2530;
{
{
R21 * l_L_2531; memset(&l_L_2531, 0, sizeof l_L_2531);
l_L_2531 = ((*(R21 *)rt_nil_check(l_ARM_2519))).f_A;
R23 l_FIRST_2532; memset(&l_FIRST_2532, 0, sizeof l_FIRST_2532);
S_R23(&l_FIRST_2532, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2531 == NULL)) goto L_end2533;
{
if ((((*(R21 *)rt_nil_check(l_L_2531))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2534; memset(&l_LO_2534, 0, sizeof l_LO_2534);
S_R23(&l_LO_2534, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2531))).f_A, l_T_2522), 0);
R23 l_HI_2535; memset(&l_HI_2535, 0, sizeof l_HI_2535);
S_R23(&l_HI_2535, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2531))).f_B, l_T_2522), 0);
rt_int l_A_2536; memset(&l_A_2536, 0, sizeof l_A_2536);
l_A_2536 = (l_LO_2534).f_V;
rt_int l_B_2537; memset(&l_B_2537, 0, sizeof l_B_2537);
l_B_2537 = (l_HI_2535).f_V;
if ((!(((l_LO_2534).f_OK && (l_HI_2535).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2531))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2531))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2531))).f_IV == ((rt_int)3LL))))
{
l_A_2536 = rt_add(l_A_2536, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2531))).f_IV >= ((rt_int)2LL)))
{
l_B_2537 = rt_sub(l_B_2537, ((rt_int)1LL));
}
if ((!(l_FIRST_2532).f_OK))
{
S_R23(&l_FIRST_2532, r_SOME(l_A_2536), 0);
}
l_SEEN_2520 = r_DISTINCT_LABEL(l_SEEN_2520, l_A_2536, l_B_2537, ((*(R21 *)rt_nil_check(l_L_2531))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2536), r_NUM(l_B_2537)));
}
}
else
{
{
R23 l_M_2538; memset(&l_M_2538, 0, sizeof l_M_2538);
S_R23(&l_M_2538, r_ENUM_MANIFEST(l_L_2531, l_T_2522), 0);
if ((!(l_M_2538).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2531))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2532).f_OK))
{
S_R23(&l_FIRST_2532, l_M_2538, 0);
}
l_SEEN_2520 = r_DISTINCT_LABEL(l_SEEN_2520, (l_M_2538).f_V, (l_M_2538).f_V, ((*(R21 *)rt_nil_check(l_L_2531))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2538).f_V)));
}
}
l_L_2531 = ((*(R21 *)rt_nil_check(l_L_2531))).f_NEXT;
}
RT_B_TICK();
} L_end2533: ;
if ((!(l_BOUND_2523 == NULL)))
{
{
R22 * l_SAVED_2539; memset(&l_SAVED_2539, 0, sizeof l_SAVED_2539);
l_SAVED_2539 = ((*(R12 *)rt_nil_check(l_BOUND_2523))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2523))).f_T = r_NARROW(l_SAVED_2539, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2532).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2519))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2519))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2523))).f_T = l_SAVED_2539;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2519))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2519))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2519 = ((*(R21 *)rt_nil_check(l_ARM_2519))).f_NEXT;
}
RT_B_TICK();
} L_end2530: ;
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
R25 * l_P_2540; memset(&l_P_2540, 0, sizeof l_P_2540);
l_P_2540 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv2541 = p_SEEN;
return rv2541; }
}
for (;;) {
if ((l_P_2540 == NULL)) goto L_end2542;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_2540))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_2540))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_2540 = ((*(R25 *)rt_nil_check(l_P_2540))).f_NEXT;
}
RT_B_TICK();
} L_end2542: ;
l_P_2540 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_2540)), ({ R25 rc2543; memset(&rc2543, 0, sizeof rc2543);  S_R10(&rc2543.f_LO, r_NO_TEXT(), 0); S_R10(&rc2543.f_HI, r_NO_TEXT(), 0); S_R23(&rc2543.f_MLO, r_SOME(p_A), 0); S_R23(&rc2543.f_MHI, r_SOME(p_B), 0); rc2543.f_ANYARG = 0; rc2543.f_NEXT = p_SEEN; rc2543; }), 0);
{ R25 * rv2544 = l_P_2540;
return rv2544; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R21 * p_S, R26 p_CH) { RT_B_TICK(); 
R10 l_TMP_2545; memset(&l_TMP_2545, 0, sizeof l_TMP_2545);
S_R10(&l_TMP_2545, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_2546; memset(&l_X_2546, 0, sizeof l_X_2546);
S_R26(&l_X_2546, r_MKET(l_TMP_2545, (p_CH).f_T), 0);
R21 * l_ARM_2547; memset(&l_ARM_2547, 0, sizeof l_ARM_2547);
l_ARM_2547 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R10 l_WORD_2548; memset(&l_WORD_2548, 0, sizeof l_WORD_2548);
S_R10(&l_WORD_2548, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_2545, (p_CH).f_C));
for (;;) {
if ((l_ARM_2547 == NULL)) goto L_end2549;
{
{
R21 * l_L_2550; memset(&l_L_2550, 0, sizeof l_L_2550);
l_L_2550 = ((*(R21 *)rt_nil_check(l_ARM_2547))).f_A;
R10 l_COND_2551; memset(&l_COND_2551, 0, sizeof l_COND_2551);
S_R10(&l_COND_2551, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2550 == NULL)) goto L_end2552;
{
if ((((*(R21 *)rt_nil_check(l_L_2550))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_2553; memset(&l_LO_2553, 0, sizeof l_LO_2553);
S_R26(&l_LO_2553, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2550))).f_A, (p_CH).f_T), 0);
R26 l_HI_2554; memset(&l_HI_2554, 0, sizeof l_HI_2554);
S_R26(&l_HI_2554, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_2550))).f_B, (p_CH).f_T), 0);
rstr l_GE_2555; memset(&l_GE_2555, 0, sizeof l_GE_2555);
l_GE_2555 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_2555, rt_str(">=", 2));
rstr l_LE_2556; memset(&l_LE_2556, 0, sizeof l_LE_2556);
l_LE_2556 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_2556, rt_str("<=", 2));
if (((((*(R21 *)rt_nil_check(l_L_2550))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2550))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_2555, rt_str("> ", 2));
}
if ((((*(R21 *)rt_nil_check(l_L_2550))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_2556, rt_str("< ", 2));
}
S_R10(&l_COND_2551, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_2551, r_VALUE_COMPARE(l_X_2546, l_LO_2553, r_MK(l_GE_2555)), r_VALUE_COMPARE(l_X_2546, l_HI_2554, r_MK(l_LE_2556))), 0);
}
}
else
{
S_R10(&l_COND_2551, r_FMT2(rt_str("@ || @", 6), l_COND_2551, r_VALUE_COMPARE(l_X_2546, r_CASE_LABEL(l_L_2550, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_2550 = ((*(R21 *)rt_nil_check(l_L_2550))).f_NEXT;
}
RT_B_TICK();
} L_end2552: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2548, l_COND_2551));
S_R10(&l_WORD_2548, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2547))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2547))).f_C);
}
l_ARM_2547 = ((*(R21 *)rt_nil_check(l_ARM_2547))).f_NEXT;
}
RT_B_TICK();
} L_end2549: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2548, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_2557; memset(&l_V_2557, 0, sizeof l_V_2557);
S_R26(&l_V_2557, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_2557).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv2558 = l_V_2557;
return rv2558; }
rt_raise(RT_X_INIT);
}
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R10 rv2559 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv2559; }
}
{ R10 rv2560 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv2560; }
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
{ R12 * rv2561 = NULL;
return rv2561; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2562 = NULL;
return rv2562; }
}
{
R12 * l_Y_2563; memset(&l_Y_2563, 0, sizeof l_Y_2563);
l_Y_2563 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2563 == NULL))
{
{ R12 * rv2564 = NULL;
return rv2564; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2563))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2565 = NULL;
return rv2565; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2563))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv2566 = NULL;
return rv2566; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2563))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2567 = NULL;
return rv2567; }
}
{
R24 * l_F_2568; memset(&l_F_2568, 0, sizeof l_F_2568);
l_F_2568 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2563))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2568 == NULL))
{
{ R12 * rv2569 = NULL;
return rv2569; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2568))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2570 = NULL;
return rv2570; }
}
}
{ R12 * rv2571 = l_Y_2563;
return rv2571; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2572; memset(&l_N_2572, 0, sizeof l_N_2572);
l_N_2572 = r_COPY_TYP(p_T);
R24 * l_F_2573; memset(&l_F_2573, 0, sizeof l_F_2573);
l_F_2573 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2574; memset(&l_A_2574, 0, sizeof l_A_2574);
l_A_2574 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2575; memset(&l_HEAD_2575, 0, sizeof l_HEAD_2575);
l_HEAD_2575 = NULL;
R25 * l_TAIL_2576; memset(&l_TAIL_2576, 0, sizeof l_TAIL_2576);
l_TAIL_2576 = NULL;
for (;;) {
if ((l_F_2573 == NULL)) goto L_end2577;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2573))).f_KIND == ((rt_int)0LL))) && (!(l_A_2574 == NULL))))
{
{
R25 * l_B_2578; memset(&l_B_2578, 0, sizeof l_B_2578);
l_B_2578 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2578)), (*(R25 *)rt_nil_check(l_A_2574)), 0);
((*(R25 *)rt_nil_check(l_B_2578))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2573))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2578))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2578))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2578))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2576 == NULL))
{
l_HEAD_2575 = l_B_2578;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2576))).f_NEXT = l_B_2578;
}
l_TAIL_2576 = l_B_2578;
}
l_A_2574 = ((*(R25 *)rt_nil_check(l_A_2574))).f_NEXT;
}
l_F_2573 = ((*(R24 *)rt_nil_check(l_F_2573))).f_NEXT;
}
RT_B_TICK();
} L_end2577: ;
((*(R22 *)rt_nil_check(l_N_2572))).f_ARGS = l_HEAD_2575;
{ R22 * rv2579 = l_N_2572;
return rv2579; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2580; memset(&l_ARM_2580, 0, sizeof l_ARM_2580);
l_ARM_2580 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2581; memset(&l_SAVED_2581, 0, sizeof l_SAVED_2581);
l_SAVED_2581 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2580 == NULL)) goto L_end2582;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2580))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2580))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2580))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2581;
return;
}
l_ARM_2580 = ((*(R21 *)rt_nil_check(l_ARM_2580))).f_NEXT;
}
RT_B_TICK();
} L_end2582: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2581;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2583; memset(&l_T_2583, 0, sizeof l_T_2583);
l_T_2583 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2583))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2584 = l_T_2583;
return rv2584; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2585; memset(&l_TD_2585, 0, sizeof l_TD_2585);
S_R10(&l_TD_2585, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2586; memset(&l_P_2586, 0, sizeof l_P_2586);
l_P_2586 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2586 == NULL)) goto L_end2587;
{
{
R12 * l_Y_2588; memset(&l_Y_2588, 0, sizeof l_Y_2588);
l_Y_2588 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2586))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2588))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2588))).f_DECL = l_P_2586;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2588, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2588))).f_INPUT = 1;
r_DEFINE(l_Y_2588, ((*(R21 *)rt_nil_check(l_P_2586))).f_LINE);
}
l_P_2586 = ((*(R21 *)rt_nil_check(l_P_2586))).f_NEXT;
}
RT_B_TICK();
} L_end2587: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2585));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2585, l_TD_2585));
l_P_2586 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2586 == NULL)) goto L_end2589;
{
r_ACTIVATE_PATH(l_P_2586, l_TD_2585);
l_P_2586 = ((*(R21 *)rt_nil_check(l_P_2586))).f_NEXT;
}
RT_B_TICK();
} L_end2589: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2585, l_TD_2585, l_TD_2585));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2585));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2590; memset(&l_FN_2590, 0, sizeof l_FN_2590);
S_R10(&l_FN_2590, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2591; memset(&l_FT_2591, 0, sizeof l_FT_2591);
S_R10(&l_FT_2591, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2592; memset(&l_Y_2592, 0, sizeof l_Y_2592);
l_Y_2592 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2593; memset(&l_H_2593, 0, sizeof l_H_2593);
S_R10(&l_H_2593, r_OBJ_ACCESS(l_Y_2592), 0);
R10 l_IT_2594; memset(&l_IT_2594, 0, sizeof l_IT_2594);
S_R10(&l_IT_2594, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2595; memset(&l_PRIO_2595, 0, sizeof l_PRIO_2595);
S_R10(&l_PRIO_2595, r_MK(rt_str("0", 1)), 0);
R10 l_START_2596; memset(&l_START_2596, 0, sizeof l_START_2596);
R22 * l_LT_2597; memset(&l_LT_2597, 0, sizeof l_LT_2597);
l_LT_2597 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2591, l_FT_2591));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2595, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2598; memset(&l_R_2598, 0, sizeof l_R_2598);
l_R_2598 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2599; memset(&l_LV_2599, 0, sizeof l_LV_2599);
S_R26(&l_LV_2599, r_EXPR(((*(R21 *)rt_nil_check(l_R_2598))).f_A, NULL), 0);
R10 l_LO_2600; memset(&l_LO_2600, 0, sizeof l_LO_2600);
S_R10(&l_LO_2600, (l_LV_2599).f_C, 0);
R10 l_HI_2601; memset(&l_HI_2601, 0, sizeof l_HI_2601);
S_R10(&l_HI_2601, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2598))).f_B, (l_LV_2599).f_T)).f_C, 0);
R22 * l_RT_2602; memset(&l_RT_2602, 0, sizeof l_RT_2602);
l_RT_2602 = r_REAL_TYPE((l_LV_2599).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2602))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_2602))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2597 = ((*(R22 *)rt_nil_check(l_RT_2602))).f_BASE;
S_R10(&l_HI_2601, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2598))).f_B, l_LT_2597)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2602))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2602))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2598))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2598))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2600, r_FMT1(rt_str("(@) + 1", 7), l_LO_2600), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2598))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2601, r_FMT1(rt_str("(@) - 1", 7), l_HI_2601), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2593, l_LO_2600, l_HI_2601));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2594, l_H_2593, l_IT_2594, l_H_2593), l_IT_2594));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2594));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2591, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2594));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2603; memset(&l_V_2603, 0, sizeof l_V_2603);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2604; memset(&l_I_2604, 0, sizeof l_I_2604);
l_I_2604 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2604))).f_T = l_LT_2597;
((*(R12 *)rt_nil_check(l_I_2604))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2604))).f_ACCESS, l_IT_2594, 0);
((*(R12 *)rt_nil_check(l_I_2604))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2604, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2603, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2603).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2603).f_C));
}
}
S_R10(&l_START_2596, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2593, l_IT_2594, l_FN_2590, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2596, p_TD, l_PRIO_2595, l_IT_2594));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2593));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2596, p_TD, l_PRIO_2595));
}
r_PATH_BODY(p_P, l_FN_2590, l_FT_2591, l_LT_2597);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2605 = r_MK(rt_str("NULL", 4));
return rv2605; }
}
{ R10 rv2606 = r_MK(rt_str("F", 1));
return rv2606; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2607; memset(&l_SAVED_CODE_2607, 0, sizeof l_SAVED_CODE_2607);
S_R14(&l_SAVED_CODE_2607, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2608; memset(&l_SAVED_CTXS_2608, 0, sizeof l_SAVED_CTXS_2608);
l_SAVED_CTXS_2608 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2609; memset(&l_OUTER_2609, 0, sizeof l_OUTER_2609);
l_OUTER_2609 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2610; memset(&l_H_2610, 0, sizeof l_H_2610);
l_H_2610 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2611; memset(&l_CS_2611, 0, sizeof l_CS_2611);
l_CS_2611 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_UPT_2612; memset(&l_UPT_2612, 0, sizeof l_UPT_2612);
S_R10(&l_UPT_2612, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2609))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2612, ((*(R18 *)rt_nil_check(l_OUTER_2609))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2611)), ({ R18 rc2613; memset(&rc2613, 0, sizeof rc2613);  rc2613.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2609))).f_LEVEL, ((rt_int)1LL)); rc2613.f_R = NULL; rc2613.f_FRAMED = 1; S_R10(&rc2613.f_FTYPE, p_FT, 0); S_R14(&rc2613.f_FIELDS, ({ R14 rc2614; memset(&rc2614, 0, sizeof rc2614);  rc2614.f_HEAD = NULL; rc2614.f_TAIL = NULL; rc2614; }), 0); rc2613.f_UP = l_OUTER_2609; rc2613.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2610))).f_B; rc2613.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2610))).f_A; rc2613.f_RESULT = NULL; rc2613.f_IS_PATH = 1; S_R10(&rc2613.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2613; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2612), &((*(R18 *)rt_nil_check(l_CS_2611))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2611;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2615; memset(&rc2615, 0, sizeof rc2615);  rc2615.f_HEAD = NULL; rc2615.f_TAIL = NULL; rc2615; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2610))).f_B, ((*(R21 *)rt_nil_check(l_H_2610))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2616; memset(&l_I_2616, 0, sizeof l_I_2616);
l_I_2616 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2616))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2616))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2616))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2616))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2611))).f_FIELDS);
r_DEFINE(l_I_2616, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2617; memset(&l_L_2617, 0, sizeof l_L_2617);
l_L_2617 = ((*(R21 *)rt_nil_check(l_H_2610))).f_A;
R10 l_C_2618; memset(&l_C_2618, 0, sizeof l_C_2618);
S_R10(&l_C_2618, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2617 == NULL)) goto L_end2619;
{
S_R10(&l_C_2618, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2618, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2617))).f_NAME)), 0);
l_L_2617 = ((*(R21 *)rt_nil_check(l_L_2617))).f_NEXT;
}
RT_B_TICK();
} L_end2619: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2618));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2611))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2609;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2607, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2608;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2620; memset(&l_C_2620, 0, sizeof l_C_2620);
l_C_2620 = (p_B).f_HEAD;
R10 l_R_2621; memset(&l_R_2621, 0, sizeof l_R_2621);
S_R10(&l_R_2621, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2620 == NULL)) goto L_end2622;
{
S_R10(&l_R_2621, r_CAT(l_R_2621, ((*(R15 *)rt_nil_check(l_C_2620))).f_T), 0);
l_C_2620 = ((*(R15 *)rt_nil_check(l_C_2620))).f_NEXT;
}
RT_B_TICK();
} L_end2622: ;
{ R10 rv2623 = l_R_2621;
return rv2623; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2624; memset(&l_NAME_2624, 0, sizeof l_NAME_2624);
S_R10(&l_NAME_2624, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2625; memset(&l_SUB_2625, 0, sizeof l_SUB_2625);
S_R10(&l_SUB_2625, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2625, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2626; memset(&l_Y_2626, 0, sizeof l_Y_2626);
l_Y_2626 = r_LOOKUP(l_NAME_2624);
if ((l_Y_2626 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2624);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2626))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2624);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2626))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2627 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2626), l_SUB_2625);
return rv2627; }
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
R10 l_NAME_2628; memset(&l_NAME_2628, 0, sizeof l_NAME_2628);
S_R10(&l_NAME_2628, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2629; memset(&l_LINE_2629, 0, sizeof l_LINE_2629);
l_LINE_2629 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2628, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2630; memset(&l_V_2630, 0, sizeof l_V_2630);
S_R26(&l_V_2630, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2630).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2629, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2631 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2630).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2630).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2631; }
}
}
else if (r_TEQS(l_NAME_2628, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2632 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2632; }
}
{ R26 rv2633 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2633; }
}
else if (r_TEQS(l_NAME_2628, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2634 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2634; }
}
{ R26 rv2635 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2635; }
}
else if ((r_TEQS(l_NAME_2628, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2628, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2629, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2628);
}
{
R26 l_V_2636; memset(&l_V_2636, 0, sizeof l_V_2636);
S_R26(&l_V_2636, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2636).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2629, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2636).f_LVAL))
{
r_FAIL(l_LINE_2629, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2628, rt_str("REQUEST", 7)))
{
{ R26 rv2637 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2636).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2637; }
}
{ R26 rv2638 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2636).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2638; }
}
}
else if (r_TEQS(l_NAME_2628, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2629);
{ R26 rv2639 = r_START_IO_CALL(p_E);
return rv2639; }
}
r_FAILT(l_LINE_2629, rt_str("unknown routine ", 16), l_NAME_2628);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2640; memset(&l_ARGS_2640, 0, sizeof l_ARGS_2640);
l_ARGS_2640 = r_CALL_ARGS(p_E);
R12 * l_Y_2641; memset(&l_Y_2641, 0, sizeof l_Y_2641);
l_Y_2641 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2640, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2642; memset(&l_R_2642, 0, sizeof l_R_2642);
if ((l_Y_2641 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2642, r_CALL_SYM(l_Y_2641, l_ARGS_2640, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2643 = l_R_2642;
return rv2643; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2644; memset(&l_I_2644, 0, sizeof l_I_2644);
l_I_2644 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2644)), ({ R19 rc2645; memset(&rc2645, 0, sizeof rc2645);  rc2645.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2645.f_IMPORTS = p_IMPORTS; rc2645.f_SIGNALS = p_SIGNALS; S_R10(&rc2645.f_NAME, p_NAME, 0); rc2645.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2645; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2644;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2646; memset(&l_BASE_2646, 0, sizeof l_BASE_2646);
S_R10(&l_BASE_2646, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2647; memset(&l_S_2647, 0, sizeof l_S_2647);
l_S_2647 = rt_b_str_new((l_BASE_2646).f_LEN, 0);
rt_b_assign(&l_S_2647, r_STR(l_BASE_2646, (l_BASE_2646).f_LEN));
R21 * l_N_2648; memset(&l_N_2648, 0, sizeof l_N_2648);
l_N_2648 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2650_lo = ((rt_int)0LL), it2650_hi = rt_sub((l_BASE_2646).f_LEN, ((rt_int)1LL));
for (rt_int it2650 = it2650_lo; it2650 <= it2650_hi; it2650++) {
{
if (rt_b_eq(rt_b_slice(l_S_2647, it2650, it2650), rt_str("$", 1)))
{
S_R10(&l_BASE_2646, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2647, ((rt_int)0LL), rt_sub(it2650, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2647, rt_add(it2650, ((rt_int)1LL)), rt_sub((l_BASE_2646).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2650 == it2650_hi) break;
} } L_end2649: ;
for (;;) {
if ((l_N_2648 == NULL)) goto L_end2651;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2648))).f_NAME, l_BASE_2646))
{
{ R10 rv2652 = r_FMT2(rt_str("@_@", 3), l_BASE_2646, r_NEW_NAME(rt_str("", 0)));
return rv2652; }
}
l_N_2648 = ((*(R21 *)rt_nil_check(l_N_2648))).f_NEXT;
}
RT_B_TICK();
} L_end2651: ;
l_N_2648 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2648))).f_NAME, l_BASE_2646, 0);
((*(R21 *)rt_nil_check(l_N_2648))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2648;
{ R10 rv2653 = l_BASE_2646;
return rv2653; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2654 = 0;
return rv2654; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2655 = 1;
return rv2655; }
}
{ rt_int rv2656 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2656; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2657; memset(&l_S_2657, 0, sizeof l_S_2657);
l_S_2657 = p_S0;
for (;;) {
if ((l_S_2657 == NULL)) goto L_end2658;
{
if (((((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_PAR)))
{
{ rt_int rv2659 = 1;
return rv2659; }
}
if (((((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2657))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2657))).f_B)))
{
{ rt_int rv2660 = 1;
return rv2660; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2657))).f_A))).f_B))
{
{ rt_int rv2661 = 1;
return rv2661; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2657))).f_B))).f_B))
{
{ rt_int rv2662 = 1;
return rv2662; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2663; memset(&l_A_2663, 0, sizeof l_A_2663);
l_A_2663 = ((*(R21 *)rt_nil_check(l_S_2657))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2657))).f_KIND == g_N_CASE))
{
l_A_2663 = ((*(R21 *)rt_nil_check(l_S_2657))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2657))).f_D == NULL)))
{
{ rt_int rv2664 = 1;
return rv2664; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2657))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2657))).f_C))).f_B))
{
{ rt_int rv2665 = 1;
return rv2665; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2657))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2657))).f_B))).f_B))
{
{ rt_int rv2666 = 1;
return rv2666; }
}
}
for (;;) {
if ((l_A_2663 == NULL)) goto L_end2667;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2663))).f_C == NULL)))
{
{ rt_int rv2668 = 1;
return rv2668; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2663))).f_B))).f_B))
{
{ rt_int rv2669 = 1;
return rv2669; }
}
l_A_2663 = ((*(R21 *)rt_nil_check(l_A_2663))).f_NEXT;
}
RT_B_TICK();
} L_end2667: ;
}
}
l_S_2657 = ((*(R21 *)rt_nil_check(l_S_2657))).f_NEXT;
}
RT_B_TICK();
} L_end2658: ;
{ rt_int rv2670 = 0;
return rv2670; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2671; memset(&l_Y_2671, 0, sizeof l_Y_2671);
l_Y_2671 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2672; memset(&l_S_2672, 0, sizeof l_S_2672);
l_S_2672 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_2672, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2671))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2671))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2671))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2671))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2671, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2674_lo = ((rt_int)1LL), it2674_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2674 = it2674_lo; it2674 <= it2674_hi; it2674++) {
{
if (rt_b_eq(rt_b_slice(l_S_2672, it2674, it2674), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2671))).f_PREFIX, r_MKN(rt_b_slice(l_S_2672, ((rt_int)0LL), rt_sub(it2674, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2675; memset(&l_SHORT_2675, 0, sizeof l_SHORT_2675);
l_SHORT_2675 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2672, rt_add(it2674, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2675))).f_ORIG = l_Y_2671;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2675))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2671))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2675))).f_DECL = p_R;
r_DEFINE(l_SHORT_2675, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2673;
}
}
RT_B_TICK();
if (it2674 == it2674_hi) break;
} } L_end2673: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2676; memset(&l_R_2676, 0, sizeof l_R_2676);
l_R_2676 = p_RS;
for (;;) {
if ((l_R_2676 == NULL)) goto L_end2677;
{
if ((((*(R21 *)rt_nil_check(l_R_2676))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2676);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2676);
}
l_R_2676 = ((*(R21 *)rt_nil_check(l_R_2676))).f_NEXT;
}
RT_B_TICK();
} L_end2677: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2678; memset(&l_R_2678, 0, sizeof l_R_2678);
l_R_2678 = p_RS;
for (;;) {
if ((l_R_2678 == NULL)) goto L_end2679;
{
if ((((*(R21 *)rt_nil_check(l_R_2678))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2680; memset(&l_M_2680, 0, sizeof l_M_2680);
l_M_2680 = r_FIND_DECL(l_R_2678);
r_ENTER_MODULE(l_M_2680);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2678))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2680);
}
}
else
{
{
R12 * l_Y_2681; memset(&l_Y_2681, 0, sizeof l_Y_2681);
l_Y_2681 = r_FIND_DECL(l_R_2678);
r_ROUTINE_HEADER(l_Y_2681);
}
}
l_R_2678 = ((*(R21 *)rt_nil_check(l_R_2678))).f_NEXT;
}
RT_B_TICK();
} L_end2679: ;
}
static void r_DISTINCT_SIGNATURES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2682; memset(&l_R_2682, 0, sizeof l_R_2682);
l_R_2682 = p_RS;
for (;;) {
if ((l_R_2682 == NULL)) goto L_end2683;
{
if ((((*(R21 *)rt_nil_check(l_R_2682))).f_KIND == g_N_ROUTINE))
{
{
R21 * l_Q_2684; memset(&l_Q_2684, 0, sizeof l_Q_2684);
l_Q_2684 = ((*(R21 *)rt_nil_check(l_R_2682))).f_NEXT;
for (;;) {
if ((l_Q_2684 == NULL)) goto L_end2685;
{
if (((((*(R21 *)rt_nil_check(l_Q_2684))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_Q_2684))).f_NAME, ((*(R21 *)rt_nil_check(l_R_2682))).f_NAME)))
{
{
R12 * l_A_2686; memset(&l_A_2686, 0, sizeof l_A_2686);
l_A_2686 = r_FIND_DECL(l_R_2682);
R12 * l_B_2687; memset(&l_B_2687, 0, sizeof l_B_2687);
l_B_2687 = r_FIND_DECL(l_Q_2684);
r_ROUTINE_HEADER(l_A_2686);
r_ROUTINE_HEADER(l_B_2687);
if (r_SAME_SIGNATURE(l_A_2686, l_B_2687))
{
r_FAILT(((*(R21 *)rt_nil_check(l_Q_2684))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R21 *)rt_nil_check(l_Q_2684))).f_NAME);
}
}
}
l_Q_2684 = ((*(R21 *)rt_nil_check(l_Q_2684))).f_NEXT;
}
RT_B_TICK();
} L_end2685: ;
}
}
l_R_2682 = ((*(R21 *)rt_nil_check(l_R_2682))).f_NEXT;
}
RT_B_TICK();
} L_end2683: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2688; memset(&l_Y_2688, 0, sizeof l_Y_2688);
l_Y_2688 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2688 == NULL)) goto L_end2689;
{
if (((((*(R12 *)rt_nil_check(l_Y_2688))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2688))).f_ORIG == NULL)))
{
{ R12 * rv2690 = l_Y_2688;
return rv2690; }
}
l_Y_2688 = r_LOOKUP_NEXT(l_Y_2688);
}
RT_B_TICK();
} L_end2689: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2691; memset(&l_D_2691, 0, sizeof l_D_2691);
l_D_2691 = p_DECLS;
for (;;) {
if ((l_D_2691 == NULL)) goto L_end2692;
{
if (((((*(R21 *)rt_nil_check(l_D_2691))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2691))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2691))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2693; memset(&l_Y_2693, 0, sizeof l_Y_2693);
l_Y_2693 = r_FIND_DECL(l_D_2691);
R22 * l_T_2694; memset(&l_T_2694, 0, sizeof l_T_2694);
l_T_2694 = r_RESOLVE_USER(r_TYPE_REF(l_D_2691));
}
}
}
l_D_2691 = ((*(R21 *)rt_nil_check(l_D_2691))).f_NEXT;
}
RT_B_TICK();
} L_end2692: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2695; memset(&l_TS_2695, 0, sizeof l_TS_2695);
l_TS_2695 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2695))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2696 = l_TS_2695;
return rv2696; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2697; memset(&l_Y_2697, 0, sizeof l_Y_2697);
l_Y_2697 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2698; memset(&l_SAVED_2698, 0, sizeof l_SAVED_2698);
l_SAVED_2698 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2697))).f_DECL = p_M;
r_DEFINE(l_Y_2697, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2699; memset(&l_MARK_2699, 0, sizeof l_MARK_2699);
l_MARK_2699 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2697;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2697))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2699);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2698;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2697);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2700; memset(&l_Y_2700, 0, sizeof l_Y_2700);
l_Y_2700 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2700 == NULL)) goto L_end2701;
{
{
R12 * l_NEXT_2702; memset(&l_NEXT_2702, 0, sizeof l_NEXT_2702);
l_NEXT_2702 = ((*(R12 *)rt_nil_check(l_Y_2700))).f_SNEXT;
r_DEFINE(l_Y_2700, ((rt_int)0LL));
l_Y_2700 = l_NEXT_2702;
}
}
RT_B_TICK();
} L_end2701: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2703; memset(&l_MARK_2703, 0, sizeof l_MARK_2703);
l_MARK_2703 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2703 == NULL)) goto L_end2704;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2703))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2704;
}
l_MARK_2703 = ((*(R12 *)rt_nil_check(l_MARK_2703))).f_SNEXT;
}
RT_B_TICK();
} L_end2704: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2703);
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
{ rt_int rv2705 = 1;
return rv2705; }
}
}
{ rt_int rv2706 = 0;
return rv2706; }
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
R21 * l_D_2707; memset(&l_D_2707, 0, sizeof l_D_2707);
l_D_2707 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2708; memset(&l_Y_2708, 0, sizeof l_Y_2708);
l_Y_2708 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2708 == NULL)) goto L_end2709;
{
if (r_EXPORTED_BY(l_D_2707, l_Y_2708))
{
((*(R12 *)rt_nil_check(l_Y_2708))).f_EXPORTED = 1;
{
R12 * l_A_2710; memset(&l_A_2710, 0, sizeof l_A_2710);
l_A_2710 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2708))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2708))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2710)), (*(R12 *)rt_nil_check(l_Y_2708)), 0);
((*(R12 *)rt_nil_check(l_A_2710))).f_ORIG = r_ORIGINAL(l_Y_2708);
((*(R12 *)rt_nil_check(l_A_2710))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2710, ((*(R21 *)rt_nil_check(l_D_2707))).f_LINE);
}
}
l_Y_2708 = ((*(R12 *)rt_nil_check(l_Y_2708))).f_SNEXT;
}
RT_B_TICK();
} L_end2709: ;
{
R21 * l_X_2711; memset(&l_X_2711, 0, sizeof l_X_2711);
l_X_2711 = ((*(R21 *)rt_nil_check(l_D_2707))).f_B;
for (;;) {
if ((l_X_2711 == NULL)) goto L_end2712;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2711))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2711))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2711))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_2711);
l_X_2711 = ((*(R21 *)rt_nil_check(l_X_2711))).f_NEXT;
}
RT_B_TICK();
} L_end2712: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X) { RT_B_TICK(); 
R12 * l_Y_2713; memset(&l_Y_2713, 0, sizeof l_Y_2713);
l_Y_2713 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_2714; memset(&l_IS_TYPE_2714, 0, sizeof l_IS_TYPE_2714);
l_IS_TYPE_2714 = 0;
rt_int l_IS_ROUTINE_2715; memset(&l_IS_ROUTINE_2715, 0, sizeof l_IS_ROUTINE_2715);
l_IS_ROUTINE_2715 = 0;
for (;;) {
if ((l_Y_2713 == NULL)) goto L_end2716;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_2713))).f_NAME, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_2713))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_2714 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_2713))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_2713))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_2713))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_2715 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_2713))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_2715 = 1;
}
l_Y_2713 = ((*(R12 *)rt_nil_check(l_Y_2713))).f_SNEXT;
}
RT_B_TICK();
} L_end2716: ;
if (((!l_IS_TYPE_2714) && (!l_IS_ROUTINE_2715)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_2714))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
{
R21 * l_OP_2717; memset(&l_OP_2717, 0, sizeof l_OP_2717);
l_OP_2717 = ((*(R21 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_2717 == NULL)) goto L_end2718;
{
{
rt_int l_FOUND_2719; memset(&l_FOUND_2719, 0, sizeof l_FOUND_2719);
l_FOUND_2719 = 0;
l_Y_2713 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2713 == NULL)) goto L_end2720;
{
if (((((*(R12 *)rt_nil_check(l_Y_2713))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2713))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_2713)), ((*(R21 *)rt_nil_check(l_OP_2717))).f_NAME))
{
l_FOUND_2719 = 1;
}
}
l_Y_2713 = ((*(R12 *)rt_nil_check(l_Y_2713))).f_SNEXT;
}
RT_B_TICK();
} L_end2720: ;
if ((!l_FOUND_2719))
{
r_FAILT(((*(R21 *)rt_nil_check(l_OP_2717))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R21 *)rt_nil_check(l_OP_2717))).f_NAME);
}
}
l_OP_2717 = ((*(R21 *)rt_nil_check(l_OP_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2718: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2721; memset(&l_Y_2721, 0, sizeof l_Y_2721);
l_Y_2721 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2721 == NULL)) goto L_end2722;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2721))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2721))).f_PREFIX, p_NAME)))
{
{ rt_int rv2723 = 1;
return rv2723; }
}
l_Y_2721 = ((*(R12 *)rt_nil_check(l_Y_2721))).f_SNEXT;
}
RT_B_TICK();
} L_end2722: ;
{ rt_int rv2724 = 0;
return rv2724; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2725; memset(&l_X_2725, 0, sizeof l_X_2725);
l_X_2725 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2726 = 0;
return rv2726; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2727 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2727; }
}
for (;;) {
if ((l_X_2725 == NULL)) goto L_end2728;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2725))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2729 = 1;
return rv2729; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2725))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2725))).f_A == NULL))
{
{ rt_int rv2730 = 1;
return rv2730; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2725))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2731 = 1;
return rv2731; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2732; memset(&l_T_2732, 0, sizeof l_T_2732);
l_T_2732 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2725))).f_NAME, p_Y);
if ((!(l_T_2732 == NULL)))
{
{ rt_int rv2733 = 1;
return rv2733; }
}
}
}
l_X_2725 = ((*(R21 *)rt_nil_check(l_X_2725))).f_NEXT;
}
RT_B_TICK();
} L_end2728: ;
{ rt_int rv2734 = 0;
return rv2734; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2735; memset(&l_M_2735, 0, sizeof l_M_2735);
l_M_2735 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2736; memset(&l_Z_2736, 0, sizeof l_Z_2736);
if ((l_M_2735 == NULL))
{
{ R12 * rv2737 = NULL;
return rv2737; }
}
l_Z_2736 = ((*(R12 *)rt_nil_check(l_M_2735))).f_MEMBERS;
for (;;) {
if ((l_Z_2736 == NULL)) goto L_end2738;
{
if (((((*(R12 *)rt_nil_check(l_Z_2736))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2736))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2736))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2736))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2736))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2739 = l_Z_2736;
return rv2739; }
}
}
}
}
l_Z_2736 = ((*(R12 *)rt_nil_check(l_Z_2736))).f_SNEXT;
}
RT_B_TICK();
} L_end2738: ;
{ R12 * rv2740 = NULL;
return rv2740; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2741; memset(&l_R_2741, 0, sizeof l_R_2741);
l_R_2741 = p_RS;
for (;;) {
if ((l_R_2741 == NULL)) goto L_end2742;
{
if ((((*(R21 *)rt_nil_check(l_R_2741))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2743; memset(&l_M_2743, 0, sizeof l_M_2743);
l_M_2743 = r_FIND_DECL(l_R_2741);
R21 * l_D_2744; memset(&l_D_2744, 0, sizeof l_D_2744);
l_D_2744 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2741))).f_C))).f_A;
r_ENTER_MODULE(l_M_2743);
for (;;) {
if ((l_D_2744 == NULL)) goto L_end2745;
{
if (((((*(R21 *)rt_nil_check(l_D_2744))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2744))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2744);
}
l_D_2744 = ((*(R21 *)rt_nil_check(l_D_2744))).f_NEXT;
}
RT_B_TICK();
} L_end2745: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2741))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2741))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2741))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2743);
}
}
l_R_2741 = ((*(R21 *)rt_nil_check(l_R_2741))).f_NEXT;
}
RT_B_TICK();
} L_end2742: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2746; memset(&l_R_2746, 0, sizeof l_R_2746);
l_R_2746 = p_RS;
for (;;) {
if ((l_R_2746 == NULL)) goto L_end2747;
{
if ((((*(R21 *)rt_nil_check(l_R_2746))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2748; memset(&l_M_2748, 0, sizeof l_M_2748);
l_M_2748 = r_FIND_DECL(l_R_2746);
r_ENTER_MODULE(l_M_2748);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2746))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2748);
}
}
else
{
{
R12 * l_Y_2749; memset(&l_Y_2749, 0, sizeof l_Y_2749);
l_Y_2749 = r_FIND_DECL(l_R_2746);
if ((!((*(R12 *)rt_nil_check(l_Y_2749))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2749);
}
}
}
l_R_2746 = ((*(R21 *)rt_nil_check(l_R_2746))).f_NEXT;
}
RT_B_TICK();
} L_end2747: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2750; memset(&l_LEVEL_2750, 0, sizeof l_LEVEL_2750);
l_LEVEL_2750 = r_CUR_LEVEL();
rt_int l_MORE_2751; memset(&l_MORE_2751, 0, sizeof l_MORE_2751);
l_MORE_2751 = 1;
for (;;) {
if ((!l_MORE_2751)) goto L_end2752;
{
l_MORE_2751 = 0;
{
R12 * l_P_2753; memset(&l_P_2753, 0, sizeof l_P_2753);
l_P_2753 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2754; memset(&l_PREV_2754, 0, sizeof l_PREV_2754);
l_PREV_2754 = NULL;
for (;;) {
if ((l_P_2753 == NULL)) goto L_end2755;
{
if ((((*(R12 *)rt_nil_check(l_P_2753))).f_LEVEL == l_LEVEL_2750))
{
if ((l_PREV_2754 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2753))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2754))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2753))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2753);
r_ROUTINE_BODY(l_P_2753);
r_LEAVE_MODULE_OF(l_P_2753);
l_MORE_2751 = 1;
goto L_end2755;
}
l_PREV_2754 = l_P_2753;
l_P_2753 = ((*(R12 *)rt_nil_check(l_P_2753))).f_MEMBERS;
}
RT_B_TICK();
} L_end2755: ;
}
}
RT_B_TICK();
} L_end2752: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2756; memset(&l_D_2756, 0, sizeof l_D_2756);
l_D_2756 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2757; memset(&l_S_2757, 0, sizeof l_S_2757);
l_S_2757 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2756 == NULL)) goto L_end2758;
{
if (((((*(R21 *)rt_nil_check(l_D_2756))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2756))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2756);
}
l_D_2756 = ((*(R21 *)rt_nil_check(l_D_2756))).f_NEXT;
}
RT_B_TICK();
} L_end2758: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2757 == NULL)) goto L_end2759;
{
r_STMT(l_S_2757);
l_S_2757 = ((*(R21 *)rt_nil_check(l_S_2757))).f_NEXT;
}
RT_B_TICK();
} L_end2759: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2760; memset(&l_R_2760, 0, sizeof l_R_2760);
l_R_2760 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2761; memset(&l_SAVED_CODE_2761, 0, sizeof l_SAVED_CODE_2761);
S_R14(&l_SAVED_CODE_2761, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2762; memset(&l_SAVED_CTXS_2762, 0, sizeof l_SAVED_CTXS_2762);
l_SAVED_CTXS_2762 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2763; memset(&l_SAVED_BINDS_2763, 0, sizeof l_SAVED_BINDS_2763);
l_SAVED_BINDS_2763 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2764; memset(&l_OUTER_2764, 0, sizeof l_OUTER_2764);
l_OUTER_2764 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2765; memset(&l_CS_2765, 0, sizeof l_CS_2765);
l_CS_2765 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_PROLOGUE_2766; memset(&l_PROLOGUE_2766, 0, sizeof l_PROLOGUE_2766);
S_R10(&l_PROLOGUE_2766, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2765)), ({ R18 rc2767; memset(&rc2767, 0, sizeof rc2767);  rc2767.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2767.f_R = p_Y; rc2767.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2767.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2767.f_FIELDS, ({ R14 rc2768; memset(&rc2768, 0, sizeof rc2768);  rc2768.f_HEAD = NULL; rc2768.f_TAIL = NULL; rc2768; }), 0); rc2767.f_UP = l_OUTER_2764; rc2767.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2760))).f_E; rc2767.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2760))).f_D))).f_A; rc2767.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2767.f_IS_PATH = 0; S_R10(&rc2767.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2767; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2765))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2765))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2765))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2765))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2766, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2765))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2765))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2766, r_CATS(l_PROLOGUE_2766, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2765;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2769; memset(&rc2769, 0, sizeof rc2769);  rc2769.f_HEAD = NULL; rc2769.f_TAIL = NULL; rc2769; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2760))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2760))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2760))).f_LINE);
{
R28 * l_P_2770; memset(&l_P_2770, 0, sizeof l_P_2770);
l_P_2770 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2770 == NULL)) goto L_end2771;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2770))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2770))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2772; memset(&l_V_2772, 0, sizeof l_V_2772);
l_V_2772 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2770))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2772))).f_T = ((*(R28 *)rt_nil_check(l_P_2770))).f_T;
((*(R12 *)rt_nil_check(l_V_2772))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2770))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2772))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2770))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2772))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2770))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2765))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2770))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2765))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2766, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2766, r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2772))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2770))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2773; memset(&l_ARGA_2773, 0, sizeof l_ARGA_2773);
S_R10(&l_ARGA_2773, ((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2770))).f_T, l_ARGA_2773, ((*(R21 *)rt_nil_check(l_R_2760))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2772))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2770))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2765))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2766, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2766, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2770))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2770))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2766, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2766, ((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, l_ARGA_2773), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2770))).f_T))
{
S_R10(&l_PROLOGUE_2766, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2766, ((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2770))).f_T, l_ARGA_2773)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2765))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2765))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2770))).f_T, l_ARGA_2773, ((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS)), 0);
r_DEFINE(l_V_2772, ((*(R21 *)rt_nil_check(l_R_2760))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2772, ((*(R21 *)rt_nil_check(l_R_2760))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2770))).f_T, ((*(R12 *)rt_nil_check(l_V_2772))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2760))).f_LINE, 1);
}
}
}
}
l_P_2770 = ((*(R28 *)rt_nil_check(l_P_2770))).f_NEXT;
}
RT_B_TICK();
} L_end2771: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2760))).f_FL >= ((rt_int)2LL)))
{
{
R21 * l_N_2774; memset(&l_N_2774, 0, sizeof l_N_2774);
l_N_2774 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2760))).f_D))).f_C;
R14 l_SAVED_CODE_2775; memset(&l_SAVED_CODE_2775, 0, sizeof l_SAVED_CODE_2775);
S_R14(&l_SAVED_CODE_2775, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_2776; memset(&l_V_2776, 0, sizeof l_V_2776);
S_R26(&l_V_2776, r_EXPR(l_N_2774, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_2777; memset(&l_M_2777, 0, sizeof l_M_2777);
S_R23(&l_M_2777, r_MANIFEST(l_N_2774), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2775, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2776).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2776).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_2777).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_2774))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_2777).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_2774))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2760))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2760))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2765))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2765))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2766));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2765))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2765))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2764;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2761, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2762;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2763;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2778; memset(&l_B_2778, 0, sizeof l_B_2778);
l_B_2778 = p_BS;
for (;;) {
if ((l_B_2778 == NULL)) goto L_end2779;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2778))).f_T == NULL)))
{
{
R12 * l_Y_2780; memset(&l_Y_2780, 0, sizeof l_Y_2780);
l_Y_2780 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2778))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2780))).f_T = ((*(R20 *)rt_nil_check(l_B_2778))).f_T;
r_DEFINE(l_Y_2780, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2778))).f_HASMV)
{
{
R12 * l_Y_2781; memset(&l_Y_2781, 0, sizeof l_Y_2781);
l_Y_2781 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2778))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2781))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2781))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2781))).f_MV = ((*(R20 *)rt_nil_check(l_B_2778))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2781))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2778))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2781))).f_INPUT = 1;
r_DEFINE(l_Y_2781, p_LINE);
}
}
l_B_2778 = ((*(R20 *)rt_nil_check(l_B_2778))).f_NEXT;
}
RT_B_TICK();
} L_end2779: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2782; memset(&l_C_2782, 0, sizeof l_C_2782);
l_C_2782 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2782 == NULL)) goto L_end2783;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2782))).f_T), &(*p_DST));
l_C_2782 = ((*(R15 *)rt_nil_check(l_C_2782))).f_NEXT;
}
RT_B_TICK();
} L_end2783: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2784; memset(&l_U_2784, 0, sizeof l_U_2784);
l_U_2784 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2784 == NULL)) goto L_end2785;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2784))).f_NAME, p_NAME))
{
{ rt_int rv2786 = 1;
return rv2786; }
}
l_U_2784 = ((*(R21 *)rt_nil_check(l_U_2784))).f_NEXT;
}
RT_B_TICK();
} L_end2785: ;
{ rt_int rv2787 = 0;
return rv2787; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2788; memset(&l_U_2788, 0, sizeof l_U_2788);
l_U_2788 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2788 == NULL)) goto L_end2789;
{
{
R21 * l_T_2790; memset(&l_T_2790, 0, sizeof l_T_2790);
l_T_2790 = p_SEGS;
for (;;) {
if ((l_T_2790 == NULL)) goto L_end2791;
{
if ((((!(l_T_2790 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2790))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2790))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2788))).f_NAME)))
{
{ rt_int rv2792 = 0;
return rv2792; }
}
l_T_2790 = ((*(R21 *)rt_nil_check(l_T_2790))).f_NEXT;
}
RT_B_TICK();
} L_end2791: ;
}
l_U_2788 = ((*(R21 *)rt_nil_check(l_U_2788))).f_NEXT;
}
RT_B_TICK();
} L_end2789: ;
{ rt_int rv2793 = 1;
return rv2793; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2794; memset(&l_S_2794, 0, sizeof l_S_2794);
l_S_2794 = p_SEGS;
rt_int l_MAINS_2795; memset(&l_MAINS_2795, 0, sizeof l_MAINS_2795);
l_MAINS_2795 = ((rt_int)0LL);
R18 * l_ROOT_2796; memset(&l_ROOT_2796, 0, sizeof l_ROOT_2796);
l_ROOT_2796 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2796)), ({ R18 rc2797; memset(&rc2797, 0, sizeof rc2797);  rc2797.f_LEVEL = ((rt_int)0LL); rc2797.f_R = NULL; rc2797.f_FRAMED = 0; S_R10(&rc2797.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2797.f_FIELDS, ({ R14 rc2798; memset(&rc2798, 0, sizeof rc2798);  rc2798.f_HEAD = NULL; rc2798.f_TAIL = NULL; rc2798; }), 0); rc2797.f_UP = NULL; rc2797.f_IMPORTS = NULL; rc2797.f_SIGNALS = NULL; rc2797.f_RESULT = NULL; rc2797.f_IS_PATH = 0; S_R10(&rc2797.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2797; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2796;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2799; memset(&rc2799, 0, sizeof rc2799);  rc2799.f_HEAD = NULL; rc2799.f_TAIL = NULL; rc2799; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2794 = p_SEGS;
for (;;) {
if ((l_S_2794 == NULL)) goto L_end2801;
{
if ((((*(R21 *)rt_nil_check(l_S_2794))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2794, p_SEGS))
{
goto L_end2801;
}
}
l_S_2794 = ((*(R21 *)rt_nil_check(l_S_2794))).f_NEXT;
}
RT_B_TICK();
} L_end2801: ;
if ((l_S_2794 == NULL))
{
goto L_end2800;
}
((*(R21 *)rt_nil_check(l_S_2794))).f_D = l_S_2794;
l_MAINS_2795 = rt_add(l_MAINS_2795, ((*(R21 *)rt_nil_check(l_S_2794))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2794))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2794))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2794))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2794, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2794))).f_B);
r_SEGMENT_EXPORTS(l_S_2794);
}
RT_B_TICK();
} L_end2800: ;
l_S_2794 = p_SEGS;
for (;;) {
if ((l_S_2794 == NULL)) goto L_end2802;
{
if ((((*(R21 *)rt_nil_check(l_S_2794))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2794))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2794))).f_NAME);
}
l_S_2794 = ((*(R21 *)rt_nil_check(l_S_2794))).f_NEXT;
}
RT_B_TICK();
} L_end2802: ;
if ((!(l_MAINS_2795 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2803; memset(&l_X_2803, 0, sizeof l_X_2803);
l_X_2803 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2803 == NULL)) goto L_end2804;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2803))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2803))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2803))).f_NAME)));
l_X_2803 = ((*(R21 *)rt_nil_check(l_X_2803))).f_NEXT;
}
RT_B_TICK();
} L_end2804: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2805; memset(&l_M_2805, 0, sizeof l_M_2805);
l_M_2805 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2806 = 0;
return rv2806; }
}
for (;;) {
if ((l_M_2805 == NULL)) goto L_end2807;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2805))).f_NAME))
{
{ rt_int rv2808 = 1;
return rv2808; }
}
l_M_2805 = ((*(R12 *)rt_nil_check(l_M_2805))).f_MODL;
}
RT_B_TICK();
} L_end2807: ;
{ rt_int rv2809 = 0;
return rv2809; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2810; memset(&l_MARK_2810, 0, sizeof l_MARK_2810);
l_MARK_2810 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2811; memset(&l_TAKEN_2811, 0, sizeof l_TAKEN_2811);
for (;;) {
if ((l_MARK_2810 == NULL)) goto L_end2812;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2810))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2812;
}
l_MARK_2810 = ((*(R12 *)rt_nil_check(l_MARK_2810))).f_SNEXT;
}
RT_B_TICK();
} L_end2812: ;
l_TAKEN_2811 = r_TAKE_SCOPE(l_MARK_2810);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2811 == NULL)) goto L_end2813;
{
{
R12 * l_NEXT_2814; memset(&l_NEXT_2814, 0, sizeof l_NEXT_2814);
l_NEXT_2814 = ((*(R12 *)rt_nil_check(l_TAKEN_2811))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2811))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2811))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2811))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2811)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2811))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2811))))))
{
r_DEFINE(l_TAKEN_2811, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2811 = l_NEXT_2814;
}
}
RT_B_TICK();
} L_end2813: ;
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
