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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R10 f_C; R22 * f_T; rt_int f_LVAL; R10 f_SELF; };
struct R21 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_NAME; R21 * f_A; R21 * f_B; R21 * f_C; R21 * f_D; R21 * f_E; R21 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R10 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R10 f_NAME; R22 * f_T; R10 f_ACCESS; R10 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R10 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R10 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R10 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R10 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R10 f_LO_C; R10 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R10 f_LEN_C; R23 f_MLEN; R10 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R10 f_NAME; R10 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; };
struct R20 { int dummy_; R10 f_NAME; R22 * f_T; R10 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R10 f_LO; R10 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R10 f_NAME; R10 f_CNAME; R22 * f_T; rt_int f_KIND; R10 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1108; };
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
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R26 r_SIZE_OF(R22 * p_T, R10 p_C);
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE);
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE);
static rt_int r_IS_TYPE_NAME(R21 * p_E);
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE);
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME);
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_ACCESS, s.f_ACCESS, 0); S_R10(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R10(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R10(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_ACCESS, b.f_ACCESS) && E_R10(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R10(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R10(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R10(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R10(s.f_ACCESS); d.f_FIELD = C_R10(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R10(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R10(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
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
l_C_72 = ((R15 *)rt_alloc(sizeof (R15)));
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
l_N_147 = ((R21 *)rt_alloc(sizeof (R21)));
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
{ R21 * rv239 = p_N;
return rv239; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_240; memset(&l_N_240, 0, sizeof l_N_240);
R21 * l_HEAD_241; memset(&l_HEAD_241, 0, sizeof l_HEAD_241);
l_HEAD_241 = NULL;
R21 * l_TAIL_242; memset(&l_TAIL_242, 0, sizeof l_TAIL_242);
l_TAIL_242 = NULL;
rt_int l_LINE_243; memset(&l_LINE_243, 0, sizeof l_LINE_243);
l_LINE_243 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_240 = r_NEW_NODE(g_TS_ARRAY, l_LINE_243);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_245; memset(&l_R_245, 0, sizeof l_R_245);
l_R_245 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_245))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_245))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_245, &l_HEAD_241, &l_TAIL_242);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end244;
} L_end244: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_240))).f_A = l_HEAD_241;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_240))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_240))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv246 = l_N_240;
return rv246; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_240 = r_NEW_NODE(g_TS_RECORD, l_LINE_243);
((*(R21 *)rt_nil_check(l_N_240))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_240))).f_D = r_PARSE_REP();
}
{ R21 * rv247 = l_N_240;
return rv247; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv248 = r_PARSE_TYPE_ARG();
return rv248; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_240 = r_NEW_NODE(g_TS_ENUM, l_LINE_243);
((*(R21 *)rt_nil_check(l_N_240))).f_A = r_PARSE_LITERALS();
{ R21 * rv249 = r_TYPE_SPEC_TAIL(l_N_240);
return rv249; }
}
l_N_240 = r_NEW_NODE(g_TS_NAME, l_LINE_243);
S_R10(&((*(R21 *)rt_nil_check(l_N_240))).f_NAME, r_IDENT(), 0);
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_240))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_240))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_240))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_240))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_240))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_240))).f_A = r_PARSE_LITERALS();
{ R21 * rv250 = r_TYPE_SPEC_TAIL(l_N_240);
return rv250; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_240))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_241, &l_TAIL_242);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_241, &l_TAIL_242);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end251;
} L_end251: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_240))).f_A = l_HEAD_241;
}
{ R21 * rv252 = r_TYPE_SPEC_TAIL(l_N_240);
return rv252; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_253; memset(&l_HEAD_253, 0, sizeof l_HEAD_253);
l_HEAD_253 = NULL;
R21 * l_TAIL_254; memset(&l_TAIL_254, 0, sizeof l_TAIL_254);
l_TAIL_254 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_256; memset(&l_L_256, 0, sizeof l_L_256);
l_L_256 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_256))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_256, &l_HEAD_253, &l_TAIL_254);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end255;
} L_end255: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv257 = l_HEAD_253;
return rv257; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_258; memset(&l_HEAD_258, 0, sizeof l_HEAD_258);
l_HEAD_258 = NULL;
R21 * l_TAIL_259; memset(&l_TAIL_259, 0, sizeof l_TAIL_259);
l_TAIL_259 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_261; memset(&l_F_261, 0, sizeof l_F_261);
l_F_261 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_261))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_261))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_261, &l_HEAD_258, &l_TAIL_259);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_262; memset(&l_V_262, 0, sizeof l_V_262);
l_V_262 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_263; memset(&l_VH_263, 0, sizeof l_VH_263);
l_VH_263 = NULL;
R21 * l_VT_264; memset(&l_VT_264, 0, sizeof l_VT_264);
l_VT_264 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_262))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end265;
{
{
R21 * l_S_266; memset(&l_S_266, 0, sizeof l_S_266);
l_S_266 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_267; memset(&l_LH_267, 0, sizeof l_LH_267);
l_LH_267 = NULL;
R21 * l_LT_268; memset(&l_LT_268, 0, sizeof l_LT_268);
l_LT_268 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_267, &l_LT_268);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end269;
} L_end269: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_266))).f_A = l_LH_267;
((*(R21 *)rt_nil_check(l_S_266))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_266, &l_VH_263, &l_VT_264);
}
}
RT_B_TICK();
} L_end265: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_262))).f_A = l_VH_263;
r_ADD_LIST(l_V_262, &l_HEAD_258, &l_TAIL_259);
}
}
else
{
goto L_end260;
}
}
RT_B_TICK();
} L_end260: ;
{ R21 * rv270 = l_HEAD_258;
return rv270; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_271; memset(&l_R_271, 0, sizeof l_R_271);
l_R_271 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_271))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_271))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_271))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_271))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_271))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv272 = l_R_271;
return rv272; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_273; memset(&l_DEPTH_273, 0, sizeof l_DEPTH_273);
l_DEPTH_273 = ((rt_int)0LL);
rt_int l_K_274; memset(&l_K_274, 0, sizeof l_K_274);
l_K_274 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_276; memset(&l_T_276, 0, sizeof l_T_276);
S_R9(&l_T_276, r_AHEAD(l_K_274), 0);
if (((l_T_276).f_KIND == g_K_EOF))
{
{ rt_int rv277 = 0;
return rv277; }
}
if (((l_T_276).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_276).f_TX, rt_str("(", 1)) || r_TEQS((l_T_276).f_TX, rt_str("[", 1))))
{
l_DEPTH_273 = rt_add(l_DEPTH_273, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_276).f_TX, rt_str(")", 1)) || r_TEQS((l_T_276).f_TX, rt_str("]", 1))))
{
l_DEPTH_273 = rt_sub(l_DEPTH_273, ((rt_int)1LL));
if ((l_DEPTH_273 == ((rt_int)0LL)))
{
{ rt_int rv278 = 0;
return rv278; }
}
}
else if (((l_DEPTH_273 == ((rt_int)1LL)) && ((r_TEQS((l_T_276).f_TX, rt_str(":", 1)) || r_TEQS((l_T_276).f_TX, rt_str(",", 1))))))
{
{ rt_int rv279 = r_TEQS((l_T_276).f_TX, rt_str(":", 1));
return rv279; }
}
}
}
l_K_274 = rt_add(l_K_274, ((rt_int)1LL));
}
RT_B_TICK();
} L_end275: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_280; memset(&l_HEAD_280, 0, sizeof l_HEAD_280);
l_HEAD_280 = NULL;
R21 * l_TAIL_281; memset(&l_TAIL_281, 0, sizeof l_TAIL_281);
l_TAIL_281 = NULL;
rt_int l_MODE_282; memset(&l_MODE_282, 0, sizeof l_MODE_282);
l_MODE_282 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end283;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_282 = rt_add(l_MODE_282, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_284; memset(&l_NAMES_284, 0, sizeof l_NAMES_284);
l_NAMES_284 = r_IDENT_LIST();
R21 * l_TS_285; memset(&l_TS_285, 0, sizeof l_TS_285);
l_TS_285 = NULL;
R21 * l_P_286; memset(&l_P_286, 0, sizeof l_P_286);
l_P_286 = l_NAMES_284;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_285 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_285 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_286 == NULL)) goto L_end287;
{
{
R21 * l_PN_288; memset(&l_PN_288, 0, sizeof l_PN_288);
l_PN_288 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_286))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_288))).f_NAME, ((*(R21 *)rt_nil_check(l_P_286))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_288))).f_IV = l_MODE_282;
((*(R21 *)rt_nil_check(l_PN_288))).f_B = l_TS_285;
r_ADD_LIST(l_PN_288, &l_HEAD_280, &l_TAIL_281);
}
l_P_286 = ((*(R21 *)rt_nil_check(l_P_286))).f_NEXT;
}
RT_B_TICK();
} L_end287: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end283: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv289 = l_HEAD_280;
return rv289; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_290; memset(&l_R_290, 0, sizeof l_R_290);
l_R_290 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_291; memset(&l_HEAD_291, 0, sizeof l_HEAD_291);
l_HEAD_291 = NULL;
R21 * l_TAIL_292; memset(&l_TAIL_292, 0, sizeof l_TAIL_292);
l_TAIL_292 = NULL;
rt_int l_MODE_293; memset(&l_MODE_293, 0, sizeof l_MODE_293);
l_MODE_293 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_290))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end294;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_293 = rt_add(l_MODE_293, ((rt_int)1LL));
}
else
{
{
R21 * l_P_295; memset(&l_P_295, 0, sizeof l_P_295);
l_P_295 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_295))).f_IV = l_MODE_293;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_295))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_295, &l_HEAD_291, &l_TAIL_292);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end294: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_290))).f_A = l_HEAD_291;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_290))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_290))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_290))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_290))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv296 = l_R_290;
return rv296; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv297 = r_PARSE_TEMPLATE(1);
return rv297; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv298 = r_PARSE_TEMPLATE(0);
return rv298; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_299; memset(&l_HEAD_299, 0, sizeof l_HEAD_299);
l_HEAD_299 = NULL;
R21 * l_TAIL_300; memset(&l_TAIL_300, 0, sizeof l_TAIL_300);
l_TAIL_300 = NULL;
for (;;) {
{
{
R21 * l_N_302; memset(&l_N_302, 0, sizeof l_N_302);
l_N_302 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_303; memset(&l_TH_303, 0, sizeof l_TH_303);
l_TH_303 = NULL;
R21 * l_TT_304; memset(&l_TT_304, 0, sizeof l_TT_304);
l_TT_304 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_302))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_306; memset(&l_T_306, 0, sizeof l_T_306);
l_T_306 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_306))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_306))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_306, &l_TH_303, &l_TT_304);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end305;
} L_end305: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_302))).f_A = l_TH_303;
r_ADD_LIST(l_N_302, &l_HEAD_299, &l_TAIL_300);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end301;
} L_end301: ;
{ R21 * rv307 = l_HEAD_299;
return rv307; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_308; memset(&l_R_308, 0, sizeof l_R_308);
l_R_308 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_309; memset(&l_H_309, 0, sizeof l_H_309);
l_H_309 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_308))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R21 *)rt_nil_check(l_R_308))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_308))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_308))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_308))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_308))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_308))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_308))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_308))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_309))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_308))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_309))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end310;
}
}
RT_B_TICK();
} L_end310: ;
((*(R21 *)rt_nil_check(l_R_308))).f_D = l_H_309;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_308))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_SKIP_PARENS();
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end311;
{
r_SKIP();
}
RT_B_TICK();
} L_end311: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_308))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_308))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_308))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_308))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv312 = l_R_308;
return rv312; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_313; memset(&l_N_313, 0, sizeof l_N_313);
l_N_313 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_313))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_313))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_313))).f_B = p_B;
{ R21 * rv314 = l_N_313;
return rv314; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_315; memset(&l_E_315, 0, sizeof l_E_315);
l_E_315 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R21 * l_Q_316; memset(&l_Q_316, 0, sizeof l_Q_316);
l_Q_316 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_316))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_316))).f_A = l_E_315;
l_E_315 = l_Q_316;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_317; memset(&l_Q_317, 0, sizeof l_Q_317);
l_Q_317 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_315))).f_KIND == g_N_QUAL))
{
l_Q_317 = l_E_315;
}
else
{
((*(R21 *)rt_nil_check(l_Q_317))).f_A = l_E_315;
}
((*(R21 *)rt_nil_check(l_Q_317))).f_B = r_PARSE_SIMPLE();
l_E_315 = l_Q_317;
}
}
{ R21 * rv318 = l_E_315;
return rv318; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R9 l_N_319; memset(&l_N_319, 0, sizeof l_N_319);
S_R9(&l_N_319, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv320 = 0;
return rv320; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv321 = 0;
return rv321; }
}
{ rt_int rv322 = (!(((((((r_TOK_IS(l_N_319, rt_str("(", 1)) || r_TOK_IS(l_N_319, rt_str(".", 1))) || r_TOK_IS(l_N_319, rt_str(":=", 2))) || r_TOK_IS(l_N_319, rt_str(":", 1))) || r_TOK_IS(l_N_319, rt_str("$", 1))) || r_TOK_IS(l_N_319, rt_str("@", 1))) || r_TOK_IS(l_N_319, rt_str("[", 1)))));
return rv322; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_323; memset(&l_LEFT_323, 0, sizeof l_LEFT_323);
l_LEFT_323 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end324;
{
{
R9 l_T_325; memset(&l_T_325, 0, sizeof l_T_325);
S_R9(&l_T_325, r_CUR(), 0);
r_SKIP();
l_LEFT_323 = r_BIN_NODE((l_T_325).f_TX, (l_T_325).f_LINE, l_LEFT_323, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end324: ;
{ R21 * rv326 = l_LEFT_323;
return rv326; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_327; memset(&l_LEFT_327, 0, sizeof l_LEFT_327);
l_LEFT_327 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end328;
{
{
R9 l_T_329; memset(&l_T_329, 0, sizeof l_T_329);
S_R9(&l_T_329, r_CUR(), 0);
r_SKIP();
l_LEFT_327 = r_BIN_NODE((l_T_329).f_TX, (l_T_329).f_LINE, l_LEFT_327, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end328: ;
{ R21 * rv330 = l_LEFT_327;
return rv330; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_331; memset(&l_LEFT_331, 0, sizeof l_LEFT_331);
l_LEFT_331 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_333; memset(&l_T_333, 0, sizeof l_T_333);
S_R9(&l_T_333, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_331 = r_BIN_NODE((l_T_333).f_TX, (l_T_333).f_LINE, l_LEFT_331, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_334; memset(&l_N_334, 0, sizeof l_N_334);
l_N_334 = r_NEW_NODE(g_N_IN, (l_T_333).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_334))).f_A = l_LEFT_331;
((*(R21 *)rt_nil_check(l_N_334))).f_B = r_PARSE_RANGE();
l_LEFT_331 = l_N_334;
}
}
else
{
{ R21 * rv335 = l_LEFT_331;
return rv335; }
}
}
}
RT_B_TICK();
} L_end332: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_336; memset(&l_SAVED_336, 0, sizeof l_SAVED_336);
l_SAVED_336 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_337; memset(&l_LINE_337, 0, sizeof l_LINE_337);
l_LINE_337 = r_LINE_NOW();
R21 * l_N_338; memset(&l_N_338, 0, sizeof l_N_338);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv339 = NULL;
return rv339; }
}
{
R9 l_OP_340; memset(&l_OP_340, 0, sizeof l_OP_340);
S_R9(&l_OP_340, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_341; memset(&l_T_341, 0, sizeof l_T_341);
S_R10(&l_T_341, (l_OP_340).f_TX, 0);
rt_int l_FOUND_342; memset(&l_FOUND_342, 0, sizeof l_FOUND_342);
l_FOUND_342 = 0;
if (((!((l_OP_340).f_KIND == g_K_SYM)) && (!((l_OP_340).f_KIND == g_K_RES))))
{
{ R21 * rv343 = NULL;
return rv343; }
}
{ rt_int it345_lo = ((rt_int)0LL), it345_hi = rt_sub((rt_int)(p_OPS).len, (l_T_341).f_LEN);
for (rt_int it345 = it345_lo; it345 <= it345_hi; it345++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it345, rt_sub(rt_add(it345, (l_T_341).f_LEN), ((rt_int)1LL))), r_STR(l_T_341, (l_T_341).f_LEN)))
{
if (((((it345 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it345, ((rt_int)1LL)), rt_sub(it345, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it345, (l_T_341).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it345, (l_T_341).f_LEN), rt_add(it345, (l_T_341).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_342 = 1;
}
}
}
RT_B_TICK();
if (it345 == it345_hi) break;
} } L_end344: ;
if ((!l_FOUND_342))
{
{ R21 * rv346 = NULL;
return rv346; }
}
r_SKIP();
r_SKIP();
l_N_338 = r_BIN_NODE(l_T_341, l_LINE_337, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_338))).f_FL = ((rt_int)2LL);
{ R21 * rv347 = l_N_338;
return rv347; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_338))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_338))).f_FL = ((rt_int)1LL);
{ R21 * rv348 = l_N_338;
return rv348; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_336;
{ R21 * rv349 = NULL;
return rv349; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_350; memset(&l_LEFT_350, 0, sizeof l_LEFT_350);
l_LEFT_350 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_352; memset(&l_T_352, 0, sizeof l_T_352);
S_R9(&l_T_352, r_CUR(), 0);
r_SKIP();
l_LEFT_350 = r_BIN_NODE((l_T_352).f_TX, (l_T_352).f_LINE, l_LEFT_350, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_353; memset(&l_N_353, 0, sizeof l_N_353);
l_N_353 = r_TRY_SCALED(l_LEFT_350, rt_str("+ -", 3));
if ((l_N_353 == NULL))
{
{ R21 * rv354 = l_LEFT_350;
return rv354; }
}
((*(R21 *)rt_nil_check(l_N_353))).f_B = r_PARSE_TERM();
l_LEFT_350 = l_N_353;
}
}
}
RT_B_TICK();
} L_end351: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_355; memset(&l_LEFT_355, 0, sizeof l_LEFT_355);
l_LEFT_355 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_357; memset(&l_T_357, 0, sizeof l_T_357);
S_R9(&l_T_357, r_CUR(), 0);
r_SKIP();
l_LEFT_355 = r_BIN_NODE((l_T_357).f_TX, (l_T_357).f_LINE, l_LEFT_355, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_358; memset(&l_N_358, 0, sizeof l_N_358);
l_N_358 = r_TRY_SCALED(l_LEFT_355, rt_str("* / // MOD", 10));
if ((l_N_358 == NULL))
{
{ R21 * rv359 = l_LEFT_355;
return rv359; }
}
((*(R21 *)rt_nil_check(l_N_358))).f_B = r_PARSE_FACTOR();
l_LEFT_355 = l_N_358;
}
}
}
RT_B_TICK();
} L_end356: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_360; memset(&l_LEFT_360, 0, sizeof l_LEFT_360);
l_LEFT_360 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_362; memset(&l_T_362, 0, sizeof l_T_362);
S_R9(&l_T_362, r_CUR(), 0);
r_SKIP();
l_LEFT_360 = r_BIN_NODE((l_T_362).f_TX, (l_T_362).f_LINE, l_LEFT_360, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_363; memset(&l_N_363, 0, sizeof l_N_363);
l_N_363 = r_TRY_SCALED(l_LEFT_360, rt_str("**", 2));
if ((l_N_363 == NULL))
{
{ R21 * rv364 = l_LEFT_360;
return rv364; }
}
((*(R21 *)rt_nil_check(l_N_363))).f_B = r_PARSE_SECONDARY();
l_LEFT_360 = l_N_363;
}
}
}
RT_B_TICK();
} L_end361: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_365; memset(&l_T_365, 0, sizeof l_T_365);
S_R9(&l_T_365, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_366; memset(&l_N_366, 0, sizeof l_N_366);
l_N_366 = r_NEW_NODE(g_N_UNOP, (l_T_365).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_366))).f_NAME, (l_T_365).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_366))).f_A = r_PARSE_POSTFIX();
{ R21 * rv367 = l_N_366;
return rv367; }
}
}
{ R21 * rv368 = r_PARSE_POSTFIX();
return rv368; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_369; memset(&l_HEAD_369, 0, sizeof l_HEAD_369);
l_HEAD_369 = NULL;
R21 * l_TAIL_370; memset(&l_TAIL_370, 0, sizeof l_TAIL_370);
l_TAIL_370 = NULL;
rt_int l_GROUP_371; memset(&l_GROUP_371, 0, sizeof l_GROUP_371);
l_GROUP_371 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end372;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_371) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_369;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_369;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_371 = rt_add(l_GROUP_371, ((rt_int)1LL));
l_HEAD_369 = NULL;
l_TAIL_370 = NULL;
}
else
{
if ((l_GROUP_371 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_369, &l_TAIL_370);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_369, &l_TAIL_370);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end372: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_371) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_369;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_369;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_369;
}
break;
}
{ R21 * rv373 = p_N;
return rv373; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_374; memset(&l_E_374, 0, sizeof l_E_374);
l_E_374 = r_PARSE_ATOM();
R21 * l_N_375; memset(&l_N_375, 0, sizeof l_N_375);
for (;;) {
{
{
rt_int l_LINE_377; memset(&l_LINE_377, 0, sizeof l_LINE_377);
l_LINE_377 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_374))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_374))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_374))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_374))).f_KIND = g_N_APPLY;
l_E_374 = r_PARSE_ARGS(l_E_374);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_375 = r_NEW_NODE(g_N_INDEX, l_LINE_377);
l_N_375 = r_PARSE_ARGS(l_N_375);
((*(R21 *)rt_nil_check(l_N_375))).f_B = ((*(R21 *)rt_nil_check(l_N_375))).f_A;
((*(R21 *)rt_nil_check(l_N_375))).f_A = l_E_374;
l_E_374 = l_N_375;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_375 = r_NEW_NODE(g_N_FIELD, l_LINE_377);
((*(R21 *)rt_nil_check(l_N_375))).f_A = l_E_374;
S_R10(&((*(R21 *)rt_nil_check(l_N_375))).f_NAME, r_IDENT(), 0);
l_E_374 = l_N_375;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_375 = r_NEW_NODE(g_N_DEREF, l_LINE_377);
((*(R21 *)rt_nil_check(l_N_375))).f_A = l_E_374;
l_E_374 = l_N_375;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_375 = r_NEW_NODE(g_N_SUBSTR, l_LINE_377);
((*(R21 *)rt_nil_check(l_N_375))).f_A = l_E_374;
((*(R21 *)rt_nil_check(l_N_375))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_375))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_374 = l_N_375;
}
else
{
{ R21 * rv378 = l_E_374;
return rv378; }
}
}
}
RT_B_TICK();
} L_end376: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_379; memset(&l_AT_379, 0, sizeof l_AT_379);
l_AT_379 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_380; memset(&l_N_380, 0, sizeof l_N_380);
l_N_380 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_381; memset(&l_R_381, 0, sizeof l_R_381);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end382;
{
{
R10 l_T_383; memset(&l_T_383, 0, sizeof l_T_383);
S_R10(&l_T_383, (r_CUR()).f_TX, 0);
rstr l_S_384; memset(&l_S_384, 0, sizeof l_S_384);
l_S_384 = rt_b_str_new((l_T_383).f_LEN, 0);
rt_b_assign(&l_S_384, r_STR(l_T_383, (l_T_383).f_LEN));
{ rt_int it386_lo = ((rt_int)0LL), it386_hi = rt_sub((l_T_383).f_LEN, ((rt_int)1LL));
for (rt_int it386 = it386_lo; it386 <= it386_hi; it386++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_384, it386, it386), rt_str(" ", 1))))
{
{
rt_int l_C_387; memset(&l_C_387, 0, sizeof l_C_387);
l_C_387 = r_CODE_OF(rt_b_slice(l_S_384, it386, it386));
rt_int l_V_388; memset(&l_V_388, 0, sizeof l_V_388);
l_V_388 = rt_sub(l_C_387, ((rt_int)48LL));
rt_int l_P_389; memset(&l_P_389, 0, sizeof l_P_389);
l_P_389 = ((rt_int)1LL);
if ((l_C_387 >= ((rt_int)65LL)))
{
l_V_388 = rt_sub(l_C_387, ((rt_int)55LL));
}
{ rt_int it391_lo = ((rt_int)1LL), it391_hi = p_BITS_PER;
for (rt_int it391 = it391_lo; it391 <= it391_hi; it391++) {
{
l_P_389 = rt_mul(l_P_389, ((rt_int)2LL));
}
RT_B_TICK();
if (it391 == it391_hi) break;
} } L_end390: ;
if (((l_V_388 < ((rt_int)0LL)) || (l_V_388 >= l_P_389)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it393_lo = ((rt_int)1LL), it393_hi = p_BITS_PER;
for (rt_int it393 = it393_lo; it393 <= it393_hi; it393++) {
{
l_P_389 = rt_quot(l_P_389, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_388, l_P_389)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_381, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_381, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it393 == it393_hi) break;
} } L_end392: ;
}
}
}
RT_B_TICK();
if (it386 == it386_hi) break;
} } L_end385: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end382: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_380))).f_NAME, ({ R10 rc394; memset(&rc394, 0, sizeof rc394);  rc394.f_AT = l_AT_379; rc394.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_379); rc394.f_H = rt_neg(((rt_int)1LL)); rc394; }), 0);
{ R21 * rv395 = l_N_380;
return rv395; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_396; memset(&l_T_396, 0, sizeof l_T_396);
S_R9(&l_T_396, r_CUR(), 0);
R21 * l_N_397; memset(&l_N_397, 0, sizeof l_N_397);
if (((l_T_396).f_KIND == g_K_NUM))
{
l_N_397 = r_NEW_NODE(g_N_INT, (l_T_396).f_LINE);
((*(R21 *)rt_nil_check(l_N_397))).f_IV = (l_T_396).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_397))).f_NAME, (l_T_396).f_TX, 0);
r_SKIP();
{ R21 * rv398 = l_N_397;
return rv398; }
}
if ((((l_T_396).f_KIND == g_K_REAL) || ((l_T_396).f_KIND == g_K_FIX)))
{
l_N_397 = r_NEW_NODE(g_N_REAL, (l_T_396).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_397))).f_NAME, (l_T_396).f_TX, 0);
if (((l_T_396).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_397))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_397))).f_IV = (l_T_396).f_IV;
}
r_SKIP();
{ R21 * rv399 = l_N_397;
return rv399; }
}
if (((l_T_396).f_KIND == g_K_GEN))
{
{ R21 * rv400 = r_PARSE_TYPE_ARG();
return rv400; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_396, rt_str("BIN", 3)))
{
{ R21 * rv401 = r_PARSE_BITS(((rt_int)1LL), (l_T_396).f_LINE);
return rv401; }
}
else if (r_TOK_IS(l_T_396, rt_str("OCT", 3)))
{
{ R21 * rv402 = r_PARSE_BITS(((rt_int)3LL), (l_T_396).f_LINE);
return rv402; }
}
{ R21 * rv403 = r_PARSE_BITS(((rt_int)4LL), (l_T_396).f_LINE);
return rv403; }
}
if ((((l_T_396).f_KIND == g_K_STR) || ((l_T_396).f_KIND == g_K_ENUM)))
{
{ R21 * rv404 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv404; }
}
if ((((l_T_396).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R21 * rv405 = r_PARSE_CHARSTRING((l_T_396).f_TX);
return rv405; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_397 = r_NEW_NODE(g_N_BOOL, (l_T_396).f_LINE);
((*(R21 *)rt_nil_check(l_N_397))).f_IV = ((rt_int)1LL);
{ R21 * rv406 = l_N_397;
return rv406; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv407 = r_NEW_NODE(g_N_BOOL, (l_T_396).f_LINE);
return rv407; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv408 = r_NEW_NODE(g_N_NIL, (l_T_396).f_LINE);
return rv408; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv409 = r_NEW_NODE(g_N_ANY, (l_T_396).f_LINE);
return rv409; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_410; memset(&l_TS_410, 0, sizeof l_TS_410);
l_TS_410 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_397 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_397))).f_B = l_TS_410;
{ R21 * rv411 = l_N_397;
return rv411; }
}
l_N_397 = r_NEW_NODE(g_N_TYPESPEC, (l_T_396).f_LINE);
((*(R21 *)rt_nil_check(l_N_397))).f_A = l_TS_410;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_397))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv412 = l_N_397;
return rv412; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_413; memset(&l_HEAD_413, 0, sizeof l_HEAD_413);
l_HEAD_413 = NULL;
R21 * l_TAIL_414; memset(&l_TAIL_414, 0, sizeof l_TAIL_414);
l_TAIL_414 = NULL;
r_SKIP();
for (;;) {
{
l_N_397 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_397))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_397))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_397, &l_HEAD_413, &l_TAIL_414);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end415;
} L_end415: ;
r_EXPECT(rt_str(")", 1));
l_N_397 = r_NEW_NODE(g_N_RECCONS, (l_T_396).f_LINE);
((*(R21 *)rt_nil_check(l_N_397))).f_A = l_HEAD_413;
{ R21 * rv416 = l_N_397;
return rv416; }
}
}
r_SKIP();
{
R21 * l_E_417; memset(&l_E_417, 0, sizeof l_E_417);
l_E_417 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_418; memset(&l_HEAD_418, 0, sizeof l_HEAD_418);
l_HEAD_418 = NULL;
R21 * l_TAIL_419; memset(&l_TAIL_419, 0, sizeof l_TAIL_419);
l_TAIL_419 = NULL;
r_ADD_LIST(l_E_417, &l_HEAD_418, &l_TAIL_419);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end420;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_418, &l_TAIL_419);
}
RT_B_TICK();
} L_end420: ;
r_EXPECT(rt_str(")", 1));
l_N_397 = r_NEW_NODE(g_N_ARRCONS, (l_T_396).f_LINE);
((*(R21 *)rt_nil_check(l_N_397))).f_A = l_HEAD_418;
{ R21 * rv421 = l_N_397;
return rv421; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_397 = r_NEW_NODE(g_N_PAREN, (l_T_396).f_LINE);
((*(R21 *)rt_nil_check(l_N_397))).f_A = l_E_417;
{ R21 * rv422 = l_N_397;
return rv422; }
}
}
if (((l_T_396).f_KIND == g_K_ID))
{
l_N_397 = r_NEW_NODE(g_N_NAME, (l_T_396).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_397))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_397))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_397))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_397))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_397))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_397))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv423 = l_N_397;
return rv423; }
}
r_FAILT((l_T_396).f_LINE, rt_str("an expression expected, not ", 28), (l_T_396).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_424; memset(&l_LINE_424, 0, sizeof l_LINE_424);
l_LINE_424 = r_LINE_NOW();
R21 * l_HEAD_425; memset(&l_HEAD_425, 0, sizeof l_HEAD_425);
l_HEAD_425 = NULL;
R21 * l_TAIL_426; memset(&l_TAIL_426, 0, sizeof l_TAIL_426);
l_TAIL_426 = NULL;
rt_int l_STRINGS_427; memset(&l_STRINGS_427, 0, sizeof l_STRINGS_427);
l_STRINGS_427 = ((rt_int)0LL);
R21 * l_N_428; memset(&l_N_428, 0, sizeof l_N_428);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end429;
{
l_N_428 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_428))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_428))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_428))).f_IV == g_K_STR))
{
l_STRINGS_427 = rt_add(l_STRINGS_427, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_428, &l_HEAD_425, &l_TAIL_426);
}
RT_B_TICK();
} L_end429: ;
if ((((l_STRINGS_427 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R21 *)rt_nil_check(l_HEAD_425))).f_NEXT == NULL)))
{
((*(R21 *)rt_nil_check(l_HEAD_425))).f_KIND = g_N_ENUMLIT;
{ R21 * rv430 = l_HEAD_425;
return rv430; }
}
l_N_428 = r_NEW_NODE(g_N_STR, l_LINE_424);
((*(R21 *)rt_nil_check(l_N_428))).f_A = l_HEAD_425;
S_R10(&((*(R21 *)rt_nil_check(l_N_428))).f_NAME, p_CHARSET, 0);
{ R21 * rv431 = l_N_428;
return rv431; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv432 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv432; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_433; memset(&l_HEAD_433, 0, sizeof l_HEAD_433);
l_HEAD_433 = NULL;
R21 * l_TAIL_434; memset(&l_TAIL_434, 0, sizeof l_TAIL_434);
l_TAIL_434 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end435;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_433, &l_TAIL_434);
}
RT_B_TICK();
} L_end435: ;
{ R21 * rv436 = l_HEAD_433;
return rv436; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_437; memset(&l_HEAD_437, 0, sizeof l_HEAD_437);
l_HEAD_437 = NULL;
R21 * l_TAIL_438; memset(&l_TAIL_438, 0, sizeof l_TAIL_438);
l_TAIL_438 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end439;
{
{
R21 * l_H_440; memset(&l_H_440, 0, sizeof l_H_440);
l_H_440 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_440))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_440))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_440, &l_HEAD_437, &l_TAIL_438);
}
}
RT_B_TICK();
} L_end439: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv441 = l_HEAD_437;
return rv441; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_442; memset(&l_S_442, 0, sizeof l_S_442);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_442 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_442))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_442))).f_A = r_PARSE_STATEMENT();
{ R21 * rv443 = l_S_442;
return rv443; }
}
l_S_442 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_444; memset(&l_X_444, 0, sizeof l_X_444);
l_X_444 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_444))).f_A = l_S_442;
((*(R21 *)rt_nil_check(l_X_444))).f_B = r_PARSE_HANDLERS();
{ R21 * rv445 = l_X_444;
return rv445; }
}
}
{ R21 * rv446 = l_S_442;
return rv446; }
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
rt_int l_LINE_447; memset(&l_LINE_447, 0, sizeof l_LINE_447);
l_LINE_447 = r_LINE_NOW();
R21 * l_S_448; memset(&l_S_448, 0, sizeof l_S_448);
R21 * l_T_449; memset(&l_T_449, 0, sizeof l_T_449);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv450 = r_NEW_NODE(g_N_NULL, l_LINE_447);
return rv450; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv451 = r_PARSE_IF();
return rv451; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv452 = r_PARSE_CASE();
return rv452; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv453 = r_PARSE_LOOP();
return rv453; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv454 = r_PARSE_PAR();
return rv454; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_448 = r_NEW_NODE(g_N_BLOCK, l_LINE_447);
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv455 = l_S_448;
return rv455; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_448 = r_NEW_NODE(g_N_WITH, l_LINE_447);
S_R10(&((*(R21 *)rt_nil_check(l_S_448))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_448))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_448))).f_B = r_PARSE_UNLABELED();
{ R21 * rv456 = l_S_448;
return rv456; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv457 = r_NEW_NODE(g_N_EXIT, l_LINE_447);
return rv457; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_448 = r_NEW_NODE(g_N_GOTO, l_LINE_447);
S_R10(&((*(R21 *)rt_nil_check(l_S_448))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv458 = l_S_448;
return rv458; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_448 = r_NEW_NODE(g_N_RETURN, l_LINE_447);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv459 = l_S_448;
return rv459; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_448 = r_NEW_NODE(g_N_SIGNAL, l_LINE_447);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_448))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv460 = l_S_448;
return rv460; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_448 = r_NEW_NODE(g_N_ASSERT, l_LINE_447);
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv461 = l_S_448;
return rv461; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_448 = r_NEW_NODE(g_N_TERMINATE, l_LINE_447);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_448))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv462 = l_S_448;
return rv462; }
}
l_T_449 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_447, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_448 = r_NEW_NODE(g_N_ASSIGN, l_LINE_447);
((*(R21 *)rt_nil_check(l_S_448))).f_A = l_T_449;
((*(R21 *)rt_nil_check(l_S_448))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv463 = l_S_448;
return rv463; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_449))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_449))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_449))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_449))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_447, rt_str("a statement expected", 20));
}
{ R21 * rv464 = l_T_449;
return rv464; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_465; memset(&l_S_465, 0, sizeof l_S_465);
l_S_465 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_466; memset(&l_HEAD_466, 0, sizeof l_HEAD_466);
l_HEAD_466 = NULL;
R21 * l_TAIL_467; memset(&l_TAIL_467, 0, sizeof l_TAIL_467);
l_TAIL_467 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_469; memset(&l_ARM_469, 0, sizeof l_ARM_469);
l_ARM_469 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_469))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_469))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_469, &l_HEAD_466, &l_TAIL_467);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end468;
} L_end468: ;
((*(R21 *)rt_nil_check(l_S_465))).f_A = l_HEAD_466;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_465))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv470 = l_S_465;
return rv470; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv471 = r_PARSE_RANGE();
return rv471; }
}
{ R21 * rv472 = r_PARSE_EXPR();
return rv472; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_473; memset(&l_S_473, 0, sizeof l_S_473);
l_S_473 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_474; memset(&l_HEAD_474, 0, sizeof l_HEAD_474);
l_HEAD_474 = NULL;
R21 * l_TAIL_475; memset(&l_TAIL_475, 0, sizeof l_TAIL_475);
l_TAIL_475 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_473))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end476;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_473))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_473))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_477; memset(&l_ARM_477, 0, sizeof l_ARM_477);
l_ARM_477 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_478; memset(&l_LH_478, 0, sizeof l_LH_478);
l_LH_478 = NULL;
R21 * l_LT_479; memset(&l_LT_479, 0, sizeof l_LT_479);
l_LT_479 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_478, &l_LT_479);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end480;
} L_end480: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_477))).f_A = l_LH_478;
((*(R21 *)rt_nil_check(l_ARM_477))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_477))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_477, &l_HEAD_474, &l_TAIL_475);
}
}
}
RT_B_TICK();
} L_end476: ;
((*(R21 *)rt_nil_check(l_S_473))).f_B = l_HEAD_474;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv481 = l_S_473;
return rv481; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_482; memset(&l_S_482, 0, sizeof l_S_482);
l_S_482 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_482))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_482))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_482))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_482))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_482))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_482))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv483 = l_S_482;
return rv483; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_482))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_482))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_482))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_482))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv484 = l_S_482;
return rv484; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_485; memset(&l_S_485, 0, sizeof l_S_485);
l_S_485 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_486; memset(&l_HEAD_486, 0, sizeof l_HEAD_486);
l_HEAD_486 = NULL;
R21 * l_TAIL_487; memset(&l_TAIL_487, 0, sizeof l_TAIL_487);
l_TAIL_487 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end488;
{
{
R21 * l_P_489; memset(&l_P_489, 0, sizeof l_P_489);
l_P_489 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_490; memset(&l_H_490, 0, sizeof l_H_490);
l_H_490 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_489))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_489))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_489))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_489))).f_E))).f_A = l_H_490;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_489))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_489))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_489))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_489))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_489))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_490))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_490))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end491;
}
}
RT_B_TICK();
} L_end491: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_489))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_489))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_489, &l_HEAD_486, &l_TAIL_487);
}
}
RT_B_TICK();
} L_end488: ;
((*(R21 *)rt_nil_check(l_S_485))).f_A = l_HEAD_486;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv492 = l_S_485;
return rv492; }
rt_raise(RT_X_INIT);
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv493 = ({ R10 rc494; memset(&rc494, 0, sizeof rc494);  rc494.f_AT = ((rt_int)0LL); rc494.f_LEN = ((rt_int)0LL); rc494.f_H = ((rt_int)0LL); rc494; });
return rv493; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv495 = ({ R23 rc496; memset(&rc496, 0, sizeof rc496);  rc496.f_OK = 0; rc496.f_V = ((rt_int)0LL); rc496; });
return rv495; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv497 = ({ R23 rc498; memset(&rc498, 0, sizeof rc498);  rc498.f_OK = 1; rc498.f_V = p_V; rc498; });
return rv497; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_499; memset(&l_Y_499, 0, sizeof l_Y_499);
l_Y_499 = ((R12 *)rt_alloc(sizeof (R12)));
rt_int l_LEVEL_500; memset(&l_LEVEL_500, 0, sizeof l_LEVEL_500);
l_LEVEL_500 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_500 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_499)), ({ R12 rc501; memset(&rc501, 0, sizeof rc501);  rc501.f_KIND = p_KIND; rc501.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc501.f_LEVEL = l_LEVEL_500; S_R10(&rc501.f_NAME, p_NAME, 0); rc501.f_T = NULL; S_R10(&rc501.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc501.f_FIELD, r_NO_TEXT(), 0); rc501.f_INPUT = 0; rc501.f_BYREF = 0; rc501.f_HASMV = 0; rc501.f_MV = ((rt_int)0LL); rc501.f_TS = NULL; rc501.f_BUSY = 0; S_R10(&rc501.f_FWD, r_NO_TEXT(), 0); rc501.f_PARAMS = NULL; rc501.f_RESULT = NULL; rc501.f_DECL = NULL; S_R10(&rc501.f_PREFIX, r_NO_TEXT(), 0); rc501.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc501.f_EXPORTED = 0; rc501.f_GENERIC = 0; rc501.f_FRAMED = 0; rc501.f_USES = NULL; rc501.f_INSTANCES = NULL; rc501.f_BINDINGS = NULL; rc501.f_ORIG = NULL; rc501.f_MEMBERS = NULL; rc501.f_SAVED = NULL; rc501.f_OWNER = r_CUR_OWNER(); rc501.f_CHAIN = NULL; rc501.f_SNEXT = NULL; rc501; }), 0);
{ R12 * rv502 = l_Y_499;
return rv502; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv503 = ((rt_int)0LL);
return rv503; }
}
{ rt_int rv504 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv504; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv505 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv505; }
}
{ R12 * rv506 = p_Y;
return rv506; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv507 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv507; }
}
{ rt_int rv508 = (p_NAME).f_H;
return rv508; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_509; memset(&l_Y_509, 0, sizeof l_Y_509);
l_Y_509 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_509 == NULL)) goto L_end510;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_509))).f_NAME, p_NAME))
{
{ R12 * rv511 = l_Y_509;
return rv511; }
}
l_Y_509 = ((*(R12 *)rt_nil_check(l_Y_509))).f_CHAIN;
}
RT_B_TICK();
} L_end510: ;
{ R12 * rv512 = NULL;
return rv512; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_513; memset(&l_Y_513, 0, sizeof l_Y_513);
l_Y_513 = r_LOOKUP(p_NAME);
if ((l_Y_513 == NULL))
{
{ R12 * rv514 = NULL;
return rv514; }
}
{ R12 * rv515 = r_ORIGINAL(l_Y_513);
return rv515; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv516 = r_LOOKUP(r_MKN(p_NAME));
return rv516; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_517; memset(&l_Z_517, 0, sizeof l_Z_517);
l_Z_517 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_517 == NULL)) goto L_end518;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_517))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv519 = l_Z_517;
return rv519; }
}
l_Z_517 = ((*(R12 *)rt_nil_check(l_Z_517))).f_CHAIN;
}
RT_B_TICK();
} L_end518: ;
{ R12 * rv520 = NULL;
return rv520; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv521 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv521; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_522; memset(&l_B_522, 0, sizeof l_B_522);
l_B_522 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_523; memset(&l_OLD_523, 0, sizeof l_OLD_523);
l_OLD_523 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_523 == NULL)) goto L_end524;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_523))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end524;
}
if ((!((((r_IS_ROUTINE(l_OLD_523) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_523))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_523 = r_LOOKUP_NEXT(l_OLD_523);
}
RT_B_TICK();
} L_end524: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_522, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_522, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end525;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end525;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end525: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_526; memset(&l_B_526, 0, sizeof l_B_526);
l_B_526 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_527; memset(&l_P_527, 0, sizeof l_P_527);
l_P_527 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_526, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_527 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_526, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_527 == NULL)) goto L_end528;
{
if ((((*(R12 *)rt_nil_check(l_P_527))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_527))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_527 = ((*(R12 *)rt_nil_check(l_P_527))).f_CHAIN;
}
RT_B_TICK();
} L_end528: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_529; memset(&l_HEAD_529, 0, sizeof l_HEAD_529);
l_HEAD_529 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end530;
{
{
R12 * l_Y_531; memset(&l_Y_531, 0, sizeof l_Y_531);
l_Y_531 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_531);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_531))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_531))).f_SNEXT = l_HEAD_529;
l_HEAD_529 = l_Y_531;
}
}
RT_B_TICK();
} L_end530: ;
{ R12 * rv532 = l_HEAD_529;
return rv532; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_533; memset(&l_T_533, 0, sizeof l_T_533);
l_T_533 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_533)), ({ R22 rc534; memset(&rc534, 0, sizeof rc534);  rc534.f_KIND = p_KIND; rc534.f_SCALE = ((rt_int)0LL); S_R10(&rc534.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc534.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc534.f_MLO, r_NO_MVAL(), 0); S_R23(&rc534.f_MHI, r_NO_MVAL(), 0); rc534.f_RLEVEL = ((rt_int)0LL); S_R10(&rc534.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc534.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc534.f_GEN, r_NO_TEXT(), 0); rc534.f_BASE = NULL; rc534.f_ELEM = NULL; rc534.f_TARGET = NULL; rc534.f_TARGET_TS = NULL; rc534.f_FIELDS = NULL; rc534.f_LITS = NULL; rc534.f_NLITS = ((rt_int)0LL); rc534.f_UNORDERED = 0; rc534.f_BOUNDS = NULL; rc534.f_DIMS = ((rt_int)0LL); rc534.f_ARGS = NULL; S_R10(&rc534.f_NAME, r_NO_TEXT(), 0); S_R10(&rc534.f_CNAME, r_NO_TEXT(), 0); rc534.f_MODL = NULL; rc534.f_REPS = NULL; rc534.f_DECL = NULL; rc534; }), 0);
{ R22 * rv535 = l_T_533;
return rv535; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_536; memset(&l_C_536, 0, sizeof l_C_536);
l_C_536 = ((R22 *)rt_alloc(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_536)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv537 = l_C_536;
return rv537; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_538; memset(&l_Y_538, 0, sizeof l_Y_538);
l_Y_538 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_538))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_538))).f_NAME, 0);
}
r_DEFINE(l_Y_538, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_539; memset(&l_Y_539, 0, sizeof l_Y_539);
l_Y_539 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_539))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_539))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_539))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_539))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_539))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_539, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_540; memset(&l_HEAD_540, 0, sizeof l_HEAD_540);
l_HEAD_540 = NULL;
R21 * l_TAIL_541; memset(&l_TAIL_541, 0, sizeof l_TAIL_541);
l_TAIL_541 = NULL;
rt_int l_START_542; memset(&l_START_542, 0, sizeof l_START_542);
l_START_542 = ((rt_int)0LL);
{ rt_int it544_lo = ((rt_int)0LL), it544_hi = (rt_int)(p_NAMES).len;
for (rt_int it544 = it544_lo; it544 <= it544_hi; it544++) {
{
if (((it544 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it544, it544), rt_str(" ", 1))))
{
if ((it544 > l_START_542))
{
{
R21 * l_N_545; memset(&l_N_545, 0, sizeof l_N_545);
l_N_545 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_545))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_542, rt_sub(it544, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_545, &l_HEAD_540, &l_TAIL_541);
}
}
l_START_542 = rt_add(it544, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it544 == it544_hi) break;
} } L_end543: ;
{
R22 * l_T_546; memset(&l_T_546, 0, sizeof l_T_546);
l_T_546 = r_ENUM_CLASS(l_HEAD_540, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_546);
{ R22 * rv547 = l_T_546;
return rv547; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_548; memset(&l_T_548, 0, sizeof l_T_548);
R21 * l_ASCII_LITS_549; memset(&l_ASCII_LITS_549, 0, sizeof l_ASCII_LITS_549);
l_ASCII_LITS_549 = NULL;
R21 * l_TAIL_550; memset(&l_TAIL_550, 0, sizeof l_TAIL_550);
l_TAIL_550 = NULL;
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
{ rt_int it552_lo = ((rt_int)0LL), it552_hi = ((rt_int)127LL);
for (rt_int it552 = it552_lo; it552 <= it552_hi; it552++) {
{
{
R21 * l_N_553; memset(&l_N_553, 0, sizeof l_N_553);
l_N_553 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_553))).f_NAME, r_ASCII_NAME(it552), 0);
r_ADD_LIST(l_N_553, &l_ASCII_LITS_549, &l_TAIL_550);
}
}
RT_B_TICK();
if (it552 == it552_hi) break;
} } L_end551: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_549, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_548 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_548 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_548 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_548 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_554; memset(&l_OPS_554, 0, sizeof l_OPS_554);
l_OPS_554 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_554, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_555; memset(&l_START_555, 0, sizeof l_START_555);
l_START_555 = ((rt_int)1LL);
{ rt_int it557_lo = ((rt_int)1LL), it557_hi = ((rt_int)270LL);
for (rt_int it557 = it557_lo; it557 <= it557_hi; it557++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_554, it557, it557), rt_str(" ", 1)))
{
if ((it557 > l_START_555))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_554, l_START_555, rt_sub(it557, ((rt_int)1LL))));
}
l_START_555 = rt_add(it557, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it557 == it557_hi) break;
} } L_end556: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
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
rstr l_CONTROLS_558; memset(&l_CONTROLS_558, 0, sizeof l_CONTROLS_558);
l_CONTROLS_558 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_558, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_558, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv559 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_558, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv559; }
}
{ R10 rv560 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_558, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv560; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv561 = r_MKN(rt_str("\\''''", 5));
return rv561; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv562 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv562; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv563 = r_MKN(rt_str("\\ACCENT", 7));
return rv563; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv564 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv564; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv565 = r_MKN(rt_str("\\[", 2));
return rv565; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv566 = r_MKN(rt_str("\\BAR", 4));
return rv566; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv567 = r_MKN(rt_str("\\]", 2));
return rv567; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv568 = r_MKN(rt_str("\\TILDE", 6));
return rv568; }
}
{ R10 rv569 = r_MKN(rt_str("\\DEL", 4));
return rv569; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv570 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv570; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv571 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv571; }
}
{ R22 * rv572 = p_T;
return rv572; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_573; memset(&l_K_573, 0, sizeof l_K_573);
l_K_573 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv574 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv574; }
}
else if ((l_K_573 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv575 = r_MK(rt_str("INTEGER", 7));
return rv575; }
}
{ R10 rv576 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv576; }
}
else if ((l_K_573 == g_T_BOOL))
{
{ R10 rv577 = r_MK(rt_str("BOOLEAN", 7));
return rv577; }
}
else if ((l_K_573 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv578 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv578; }
}
{ R10 rv579 = r_MK(rt_str("an enumerated type", 18));
return rv579; }
}
else if ((l_K_573 == g_T_STR))
{
{ R10 rv580 = r_MK(rt_str("CHAR_STR", 8));
return rv580; }
}
else if ((l_K_573 == g_T_BITS))
{
{ R10 rv581 = r_MK(rt_str("BIT", 3));
return rv581; }
}
else if ((l_K_573 == g_T_FLOAT))
{
{ R10 rv582 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv582; }
}
else if ((l_K_573 == g_T_ARR))
{
{ R10 rv583 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv583; }
}
else if ((l_K_573 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv584 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv584; }
}
{ R10 rv585 = r_MK(rt_str("RECORD", 6));
return rv585; }
}
else if ((l_K_573 == g_T_PTR))
{
{ R10 rv586 = r_MK(rt_str("PTR", 3));
return rv586; }
}
else if ((l_K_573 == g_T_SEM))
{
{ R10 rv587 = r_MK(rt_str("SEMAPHORE", 9));
return rv587; }
}
else if ((l_K_573 == g_T_NIL))
{
{ R10 rv588 = r_MK(rt_str("NIL", 3));
return rv588; }
}
else if ((l_K_573 == g_T_VOID))
{
{ R10 rv589 = r_MK(rt_str("no value", 8));
return rv589; }
}
{ R10 rv590 = r_MK(rt_str("a type", 6));
return rv590; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_591; memset(&l_S_591, 0, sizeof l_S_591);
l_S_591 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_591, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_592; memset(&l_AT_592, 0, sizeof l_AT_592);
l_AT_592 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_593; memset(&l_START_593, 0, sizeof l_START_593);
l_START_593 = ((rt_int)0LL);
R10 l_R_594; memset(&l_R_594, 0, sizeof l_R_594);
rt_int l_I_595; memset(&l_I_595, 0, sizeof l_I_595);
l_I_595 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv596 = p_T;
return rv596; }
}
for (;;) {
if ((l_I_595 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end597;
{
if (rt_b_eq(rt_b_slice(l_S_591, l_I_595, rt_add(l_I_595, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_594, r_MK(rt_b_slice(l_S_591, l_START_593, rt_sub(l_I_595, ((rt_int)1LL)))), 0);
S_R10(&l_R_594, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_595 = rt_add(l_I_595, ((rt_int)2LL));
l_START_593 = l_I_595;
}
else
{
l_I_595 = rt_add(l_I_595, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end597: ;
if ((l_START_593 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_592;
{ R10 rv598 = p_T;
return rv598; }
}
S_R10(&l_R_594, r_MK(rt_b_slice(l_S_591, l_START_593, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv599 = ({ R10 rc600; memset(&rc600, 0, sizeof rc600);  rc600.f_AT = l_AT_592; rc600.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_592); rc600.f_H = rt_neg(((rt_int)1LL)); rc600; });
return rv599; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_601; memset(&l_P_601, 0, sizeof l_P_601);
l_P_601 = p_A;
R21 * l_Q_602; memset(&l_Q_602, 0, sizeof l_Q_602);
l_Q_602 = p_B;
for (;;) {
if (((l_P_601 == NULL) || (l_Q_602 == NULL))) goto L_end603;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_601))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_602))).f_NAME)))
{
{ rt_int rv604 = 0;
return rv604; }
}
l_P_601 = ((*(R21 *)rt_nil_check(l_P_601))).f_NEXT;
l_Q_602 = ((*(R21 *)rt_nil_check(l_Q_602))).f_NEXT;
}
RT_B_TICK();
} L_end603: ;
{ rt_int rv605 = ((l_P_601 == NULL) && (l_Q_602 == NULL));
return rv605; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_606; memset(&l_Y_606, 0, sizeof l_Y_606);
l_Y_606 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_607; memset(&l_T_607, 0, sizeof l_T_607);
{
R21 * l_P_608; memset(&l_P_608, 0, sizeof l_P_608);
l_P_608 = p_LITS;
for (;;) {
if ((l_P_608 == NULL)) goto L_end609;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_608))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_608))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_608))).f_NAME);
}
l_P_608 = ((*(R21 *)rt_nil_check(l_P_608))).f_NEXT;
}
RT_B_TICK();
} L_end609: ;
}
for (;;) {
if ((l_Y_606 == NULL)) goto L_end610;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_606))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_606))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_606))).f_T, p_LINE);
{ R22 * rv611 = ((*(R12 *)rt_nil_check(l_Y_606))).f_T;
return rv611; }
}
l_Y_606 = ((*(R12 *)rt_nil_check(l_Y_606))).f_INSTANCES;
}
RT_B_TICK();
} L_end610: ;
l_T_607 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_607))).f_BASE = l_T_607;
((*(R22 *)rt_nil_check(l_T_607))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_607))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_607))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_607))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_606 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_606))).f_T = l_T_607;
((*(R12 *)rt_nil_check(l_Y_606))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_606;
{
R21 * l_P_612; memset(&l_P_612, 0, sizeof l_P_612);
l_P_612 = p_LITS;
R10 l_NAMES_613; memset(&l_NAMES_613, 0, sizeof l_NAMES_613);
S_R10(&l_NAMES_613, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_612 == NULL)) goto L_end614;
{
S_R10(&l_NAMES_613, r_FMT2(rt_str("@@, ", 4), l_NAMES_613, r_CSTRING(((*(R21 *)rt_nil_check(l_P_612))).f_NAME)), 0);
l_P_612 = ((*(R21 *)rt_nil_check(l_P_612))).f_NEXT;
}
RT_B_TICK();
} L_end614: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_607))).f_CNAME, l_NAMES_613));
}
r_DECLARE_LITERALS(l_T_607, p_LINE);
{ R22 * rv615 = l_T_607;
return rv615; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_616; memset(&l_P_616, 0, sizeof l_P_616);
l_P_616 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_617; memset(&l_I_617, 0, sizeof l_I_617);
l_I_617 = ((rt_int)0LL);
for (;;) {
if ((l_P_616 == NULL)) goto L_end618;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_616))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_619; memset(&l_Y_619, 0, sizeof l_Y_619);
l_Y_619 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_616))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_619))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_619))).f_MV = l_I_617;
((*(R12 *)rt_nil_check(l_Y_619))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_619))).f_INPUT = 1;
r_DEFINE(l_Y_619, p_LINE);
}
}
l_I_617 = rt_add(l_I_617, ((rt_int)1LL));
l_P_616 = ((*(R21 *)rt_nil_check(l_P_616))).f_NEXT;
}
RT_B_TICK();
} L_end618: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_620; memset(&l_V_620, 0, sizeof l_V_620);
l_V_620 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_620 == NULL)) || (p_T == NULL)))
{
{ R12 * rv621 = l_V_620;
return rv621; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv622 = NULL;
return rv622; }
}
{
R21 * l_P_623; memset(&l_P_623, 0, sizeof l_P_623);
l_P_623 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_624; memset(&l_I_624, 0, sizeof l_I_624);
l_I_624 = ((rt_int)0LL);
for (;;) {
if ((l_P_623 == NULL)) goto L_end625;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_623))).f_NAME, p_NAME))
{
{
R12 * l_Y_626; memset(&l_Y_626, 0, sizeof l_Y_626);
l_Y_626 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_626))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_626))).f_MV = l_I_624;
((*(R12 *)rt_nil_check(l_Y_626))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_626))).f_INPUT = 1;
{ R12 * rv627 = l_Y_626;
return rv627; }
}
}
l_I_624 = rt_add(l_I_624, ((rt_int)1LL));
l_P_623 = ((*(R21 *)rt_nil_check(l_P_623))).f_NEXT;
}
RT_B_TICK();
} L_end625: ;
}
{ R12 * rv628 = NULL;
return rv628; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_629; memset(&l_Y_629, 0, sizeof l_Y_629);
l_Y_629 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_629 == NULL)) goto L_end630;
{
if ((((*(R12 *)rt_nil_check(l_Y_629))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv631 = l_Y_629;
return rv631; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_629))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv632 = l_Y_629;
return rv632; }
}
}
l_Y_629 = r_LOOKUP_NEXT(l_Y_629);
}
RT_B_TICK();
} L_end630: ;
{ R12 * rv633 = NULL;
return rv633; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_634; memset(&l_Y_634, 0, sizeof l_Y_634);
l_Y_634 = r_LOOKUP(p_NAME);
rt_int l_N_635; memset(&l_N_635, 0, sizeof l_N_635);
l_N_635 = ((rt_int)0LL);
for (;;) {
if ((l_Y_634 == NULL)) goto L_end636;
{
if ((((*(R12 *)rt_nil_check(l_Y_634))).f_KIND == g_Y_ENUMLIT))
{
l_N_635 = rt_add(l_N_635, ((rt_int)1LL));
}
l_Y_634 = r_LOOKUP_NEXT(l_Y_634);
}
RT_B_TICK();
} L_end636: ;
{ rt_int rv637 = l_N_635;
return rv637; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv638 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv638; }
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
R22 * l_N_639; memset(&l_N_639, 0, sizeof l_N_639);
if ((p_R == NULL))
{
{ R22 * rv640 = p_T;
return rv640; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_639 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv641 = l_N_639;
return rv641; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_639 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_639))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_642; memset(&l_LO_642, 0, sizeof l_LO_642);
R26 l_HI_643; memset(&l_HI_643, 0, sizeof l_HI_643);
S_R26(&l_LO_642, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_643, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_LO_C, (l_LO_642).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_HI_C, (l_HI_643).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_639))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_639))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_639))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_639))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_642).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_643).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_LO_C, r_RESCALE(l_LO_642, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_HI_C, r_RESCALE(l_HI_643, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_642).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_643).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_639))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_639))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_639))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_639))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_639))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_639))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_639))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_639))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_639))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_639))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_639))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv644 = l_N_639;
return rv644; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_645; memset(&l_Y_645, 0, sizeof l_Y_645);
l_Y_645 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_645 == NULL)))
{
{ R23 rv646 = r_SOME(((*(R12 *)rt_nil_check(l_Y_645))).f_MV);
return rv646; }
}
}
}
{ R23 rv647 = r_MANIFEST(p_E);
return rv647; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv648 = ((rt_int)0LL);
return rv648; }
}
{ rt_int rv649 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv649; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv650 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv650; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_651; memset(&l_A_651, 0, sizeof l_A_651);
l_A_651 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it653_lo = ((rt_int)1LL), it653_hi = p_K;
for (rt_int it653 = it653_lo; it653 <= it653_hi; it653++) {
{
if ((l_A_651 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_651 = ((*(R21 *)rt_nil_check(l_A_651))).f_NEXT;
}
RT_B_TICK();
if (it653 == it653_hi) break;
} } L_end652: ;
if ((l_A_651 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv654 = l_A_651;
return rv654; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_655; memset(&l_T_655, 0, sizeof l_T_655);
rt_int l_K_656; memset(&l_K_656, 0, sizeof l_K_656);
l_K_656 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_656 == g_TS_ARRAY))
{
{ R22 * rv657 = r_RESOLVE_ARRAY(p_TS);
return rv657; }
}
else if ((l_K_656 == g_TS_RECORD))
{
{ R22 * rv658 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv658; }
}
else if ((l_K_656 == g_TS_ENUM))
{
l_T_655 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_655 = r_WITH_RANGE(l_T_655, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_655 = r_COPY_TYP(l_T_655);
((*(R22 *)rt_nil_check(l_T_655))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
r_CHECK_ENUM_REP(l_T_655, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv659 = l_T_655;
return rv659; }
}
else if ((l_K_656 == g_TS_GEN))
{
{ R22 * rv660 = r_GEN_TYPE(p_TS);
return rv660; }
}
else if ((!(l_K_656 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_655 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_655 == NULL))
{
l_T_655 = r_RESOLVE_USER(p_TS);
}
l_T_655 = r_WITH_RANGE(l_T_655, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_655 = r_COPY_TYP(l_T_655);
((*(R22 *)rt_nil_check(l_T_655))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((((*(R22 *)rt_nil_check(l_T_655))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_655, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
{ R22 * rv661 = l_T_655;
return rv661; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_662; memset(&l_B_662, 0, sizeof l_B_662);
l_B_662 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_662 == NULL)) goto L_end663;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_662))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_662))).f_T == NULL))))
{
{ R22 * rv664 = ((*(R20 *)rt_nil_check(l_B_662))).f_T;
return rv664; }
}
l_B_662 = ((*(R20 *)rt_nil_check(l_B_662))).f_NEXT;
}
RT_B_TICK();
} L_end663: ;
{
R12 * l_Y_665; memset(&l_Y_665, 0, sizeof l_Y_665);
l_Y_665 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_665 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_665))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_665))).f_T == NULL))))
{
{ R22 * rv666 = ((*(R12 *)rt_nil_check(l_Y_665))).f_T;
return rv666; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_667; memset(&l_NAME_667, 0, sizeof l_NAME_667);
S_R10(&l_NAME_667, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_668; memset(&l_T_668, 0, sizeof l_T_668);
if (r_TEQS(l_NAME_667, rt_str("FIXED", 5)))
{
{
R23 l_S_669; memset(&l_S_669, 0, sizeof l_S_669);
S_R23(&l_S_669, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_670; memset(&l_R_670, 0, sizeof l_R_670);
S_R23(&l_R_670, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_671; memset(&l_P_671, 0, sizeof l_P_671);
l_P_671 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_670).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_671, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_669).f_V == ((rt_int)0LL)))
{
{ R22 * rv672 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv672; }
}
l_T_668 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_668))).f_SCALE = (l_S_669).f_V;
{ R22 * rv673 = l_T_668;
return rv673; }
}
}
else if (r_TEQS(l_NAME_667, rt_str("FLOAT", 5)))
{
{
R23 l_P_674; memset(&l_P_674, 0, sizeof l_P_674);
S_R23(&l_P_674, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_668 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_668))).f_SCALE = (l_P_674).f_V;
{ R22 * rv675 = l_T_668;
return rv675; }
}
}
else if (r_TEQS(l_NAME_667, rt_str("BIT", 3)))
{
l_T_668 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_668, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv676 = l_T_668;
return rv676; }
}
else if ((r_TEQS(l_NAME_667, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_667, rt_str("ASCII_STR", 9))))
{
l_T_668 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_668, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_668))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_667, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_677; memset(&l_CS_677, 0, sizeof l_CS_677);
l_CS_677 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_678; memset(&l_C_678, 0, sizeof l_C_678);
if (((((*(R21 *)rt_nil_check(l_CS_677))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_677))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_668))).f_BASE = NULL;
{ R22 * rv679 = l_T_668;
return rv679; }
}
if (((((*(R21 *)rt_nil_check(l_CS_677))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_677))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_680; memset(&l_SAVED_CODE_680, 0, sizeof l_SAVED_CODE_680);
S_R14(&l_SAVED_CODE_680, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_681; memset(&l_V_681, 0, sizeof l_V_681);
S_R26(&l_V_681, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_677))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_680, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_681).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_668))).f_BASE = r_CHARSET_OF((l_V_681).f_T);
}
{ R22 * rv682 = l_T_668;
return rv682; }
}
l_C_678 = r_REAL_TYPE(r_ARG_TYPE(l_CS_677));
if ((!(((*(R22 *)rt_nil_check(l_C_678))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_678))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_678))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_668))).f_BASE = ((*(R22 *)rt_nil_check(l_C_678))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv683 = l_T_668;
return rv683; }
}
else if (r_TEQS(l_NAME_667, rt_str("PTR", 3)))
{
l_T_668 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_668))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv684 = l_T_668;
return rv684; }
}
else if (r_TEQS(l_NAME_667, rt_str("SEMAPHORE", 9)))
{
l_T_668 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_685; memset(&l_U_685, 0, sizeof l_U_685);
l_U_685 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_685))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_668))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_685))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv686 = l_T_668;
return rv686; }
}
{ R22 * rv687 = NULL;
return rv687; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_688; memset(&l_M_688, 0, sizeof l_M_688);
S_R23(&l_M_688, r_MANIFEST(p_A), 0);
if ((!(l_M_688).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_689; memset(&l_SAVED_CODE_689, 0, sizeof l_SAVED_CODE_689);
S_R14(&l_SAVED_CODE_689, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_690; memset(&l_T_690, 0, sizeof l_T_690);
l_T_690 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_689, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_690)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_690))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_688).f_V < p_LO) || ((l_M_688).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv691 = l_M_688;
return rv691; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv692 = 0;
return rv692; }
}
{ rt_int rv693 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv693; }
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
R12 * l_Y_694; memset(&l_Y_694, 0, sizeof l_Y_694);
l_Y_694 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_694 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_694))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_694))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_694))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_695; memset(&l_R_695, 0, sizeof l_R_695);
l_R_695 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_696; memset(&l_NAME_696, 0, sizeof l_NAME_696);
S_R10(&l_NAME_696, ((*(R21 *)rt_nil_check(l_R_695))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_695))).f_KIND == g_TS_GEN))
{
return;
}
if (r_TEQS(l_NAME_696, rt_str("ENUM_STD", 8)))
{
return;
}
if ((!((r_TEQS(l_NAME_696, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_696, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_696) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_696)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_696);
}
if ((((*(R21 *)rt_nil_check(l_R_695))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_696);
}
{
R23 l_N_697; memset(&l_N_697, 0, sizeof l_N_697);
S_R23(&l_N_697, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_695))).f_A), 0);
rt_int l_NL_698; memset(&l_NL_698, 0, sizeof l_NL_698);
l_NL_698 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_697).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_697).f_V > ((rt_int)64LL)) || ((l_N_697).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_696, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_695))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_697).f_V < r_BITS_FOR(l_NL_698)))
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
R21 * l_L_699; memset(&l_L_699, 0, sizeof l_L_699);
l_L_699 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_699 == NULL)) goto L_end700;
{
{
R21 * l_V_701; memset(&l_V_701, 0, sizeof l_V_701);
l_V_701 = ((*(R21 *)rt_nil_check(l_R_695))).f_B;
rt_int l_FOUND_702; memset(&l_FOUND_702, 0, sizeof l_FOUND_702);
l_FOUND_702 = ((rt_int)0LL);
for (;;) {
if ((l_V_701 == NULL)) goto L_end703;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_701))).f_NAME, ((*(R21 *)rt_nil_check(l_L_699))).f_NAME))
{
l_FOUND_702 = rt_add(l_FOUND_702, ((rt_int)1LL));
}
l_V_701 = ((*(R21 *)rt_nil_check(l_V_701))).f_NEXT;
}
RT_B_TICK();
} L_end703: ;
if ((!(l_FOUND_702 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_699))).f_NAME);
}
}
l_L_699 = ((*(R21 *)rt_nil_check(l_L_699))).f_NEXT;
}
RT_B_TICK();
} L_end700: ;
}
{
R21 * l_V_704; memset(&l_V_704, 0, sizeof l_V_704);
l_V_704 = ((*(R21 *)rt_nil_check(l_R_695))).f_B;
for (;;) {
if ((l_V_704 == NULL)) goto L_end705;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_704))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_704))).f_NAME);
}
{
R14 l_SAVED_CODE_706; memset(&l_SAVED_CODE_706, 0, sizeof l_SAVED_CODE_706);
S_R14(&l_SAVED_CODE_706, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_707; memset(&l_B_707, 0, sizeof l_B_707);
S_R26(&l_B_707, r_EXPR(((*(R21 *)rt_nil_check(l_V_704))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_706, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_707).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_707).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_707).f_T))).f_MLEN).f_V == (l_N_697).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_704))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_704))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_708; memset(&l_U_708, 0, sizeof l_U_708);
l_U_708 = ((*(R21 *)rt_nil_check(l_V_704))).f_NEXT;
for (;;) {
if ((l_U_708 == NULL)) goto L_end709;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_708))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_708))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_704))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_708))).f_NAME);
}
}
l_U_708 = ((*(R21 *)rt_nil_check(l_U_708))).f_NEXT;
}
RT_B_TICK();
} L_end709: ;
}
}
}
l_V_704 = ((*(R21 *)rt_nil_check(l_V_704))).f_NEXT;
}
RT_B_TICK();
} L_end705: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_710; memset(&l_B_710, 0, sizeof l_B_710);
l_B_710 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_710 == NULL)) goto L_end711;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_710))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_710))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_710))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc712; memset(&rc712, 0, sizeof rc712);  rc712.f_OK = ((*(R20 *)rt_nil_check(l_B_710))).f_HASMV; rc712.f_V = ((*(R20 *)rt_nil_check(l_B_710))).f_MV; rc712; }), 0);
return;
}
l_B_710 = ((*(R20 *)rt_nil_check(l_B_710))).f_NEXT;
}
RT_B_TICK();
} L_end711: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_713; memset(&l_C_713, 0, sizeof l_C_713);
R23 l_M_714; memset(&l_M_714, 0, sizeof l_M_714);
r_ATTR_VALUE(p_A, &l_C_713, &l_M_714);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_713, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_714, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_715; memset(&l_T_715, 0, sizeof l_T_715);
l_T_715 = r_NEW_TYP(g_T_ARR);
R21 * l_R_716; memset(&l_R_716, 0, sizeof l_R_716);
l_R_716 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_717; memset(&l_TAIL_717, 0, sizeof l_TAIL_717);
l_TAIL_717 = NULL;
for (;;) {
if ((l_R_716 == NULL)) goto L_end718;
{
{
R25 * l_B_719; memset(&l_B_719, 0, sizeof l_B_719);
l_B_719 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_720; memset(&l_LO_720, 0, sizeof l_LO_720);
R26 l_HI_721; memset(&l_HI_721, 0, sizeof l_HI_721);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_716))).f_A))
{
S_R26(&l_LO_720, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_716))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_716))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_720, r_EXPR(((*(R21 *)rt_nil_check(l_R_716))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_716))).f_B))
{
S_R26(&l_HI_721, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_716))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_716))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_721, r_EXPR(((*(R21 *)rt_nil_check(l_R_716))).f_B, (l_LO_720).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_719)), ({ R25 rc722; memset(&rc722, 0, sizeof rc722);  S_R10(&rc722.f_LO, (l_LO_720).f_C, 0); S_R10(&rc722.f_HI, (l_HI_721).f_C, 0); S_R23(&rc722.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_716))).f_A), 0); S_R23(&rc722.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_716))).f_B), 0); rc722.f_ANYARG = 0; rc722.f_NEXT = NULL; rc722; }), 0);
if ((((*(R22 *)rt_nil_check((l_LO_720).f_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_719))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_716))).f_A, (l_LO_720).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_719))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_716))).f_B, (l_LO_720).f_T), 0);
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_720).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_716))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_717 == NULL))
{
((*(R22 *)rt_nil_check(l_T_715))).f_BOUNDS = l_B_719;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_717))).f_NEXT = l_B_719;
}
l_TAIL_717 = l_B_719;
((*(R22 *)rt_nil_check(l_T_715))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_715))).f_DIMS, ((rt_int)1LL));
}
l_R_716 = ((*(R21 *)rt_nil_check(l_R_716))).f_NEXT;
}
RT_B_TICK();
} L_end718: ;
((*(R22 *)rt_nil_check(l_T_715))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_715))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_715))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_715))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_715))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_715))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_715))).f_DIMS), 0);
{ R22 * rv723 = l_T_715;
return rv723; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_724; memset(&l_Y_724, 0, sizeof l_Y_724);
l_Y_724 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_725; memset(&l_B_725, 0, sizeof l_B_725);
l_B_725 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_725 == NULL)) goto L_end726;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_725))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_725))).f_T == NULL))))
{
{ R22 * rv727 = ((*(R20 *)rt_nil_check(l_B_725))).f_T;
return rv727; }
}
l_B_725 = ((*(R20 *)rt_nil_check(l_B_725))).f_NEXT;
}
RT_B_TICK();
} L_end726: ;
}
}
if ((l_Y_724 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_724))).f_KIND == g_Y_GEN))
{
{ R22 * rv728 = r_GEN_TYPE(p_TS);
return rv728; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_724))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_724))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv729 = ((*(R12 *)rt_nil_check(l_Y_724))).f_T;
return rv729; }
}
{
R21 * l_D_730; memset(&l_D_730, 0, sizeof l_D_730);
l_D_730 = ((*(R12 *)rt_nil_check(l_Y_724))).f_DECL;
R22 * l_T_731; memset(&l_T_731, 0, sizeof l_T_731);
if ((((*(R21 *)rt_nil_check(l_D_730))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_724))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_724))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_724))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_730))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_724))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_730))).f_B, r_RECORD_NAME(l_Y_724), l_Y_724, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_724))).f_T = r_RESOLVE_IN_DECL(l_Y_724, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_724))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_724))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_724))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_724))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_724))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_724))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_724))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_724))).f_BUSY = 0;
}
l_T_731 = ((*(R12 *)rt_nil_check(l_Y_724))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_730))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_731 = r_RECORD_INSTANCE(l_Y_724, p_TS);
}
else
{
l_T_731 = r_RESOLVE_IN_DECL(l_Y_724, p_TS);
}
}
{ R22 * rv732 = r_ABSTRACT_VIEW(l_Y_724, l_T_731);
return rv732; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_733; memset(&l_A_733, 0, sizeof l_A_733);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv734 = p_T;
return rv734; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv735 = p_T;
return rv735; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv736 = p_T;
return rv736; }
}
l_A_733 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_733))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_733))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_733))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_733))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_733))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv737 = l_A_733;
return rv737; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_738; memset(&l_P_738, 0, sizeof l_P_738);
l_P_738 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_738 == NULL)) goto L_end739;
{
if ((l_P_738 == p_M))
{
{ rt_int rv740 = 1;
return rv740; }
}
l_P_738 = ((*(R12 *)rt_nil_check(l_P_738))).f_MODL;
}
RT_B_TICK();
} L_end739: ;
{ rt_int rv741 = 0;
return rv741; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_742; memset(&l_D_742, 0, sizeof l_D_742);
l_D_742 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_743; memset(&l_T_743, 0, sizeof l_T_743);
if ((p_TS == NULL))
{
{ R22 * rv744 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_742))).f_B);
return rv744; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_742))).f_A, p_TS);
l_T_743 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_742))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv745 = l_T_743;
return rv745; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_746; memset(&l_F_746, 0, sizeof l_F_746);
l_F_746 = p_FORMALS;
R21 * l_A_747; memset(&l_A_747, 0, sizeof l_A_747);
l_A_747 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_746 == NULL)) goto L_end748;
{
{
R21 * l_N_749; memset(&l_N_749, 0, sizeof l_N_749);
l_N_749 = ((*(R21 *)rt_nil_check(l_F_746))).f_A;
for (;;) {
if ((l_N_749 == NULL)) goto L_end750;
{
if ((l_A_747 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_746))).f_B == NULL))
{
{
R12 * l_Y_751; memset(&l_Y_751, 0, sizeof l_Y_751);
l_Y_751 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_749))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_751))).f_T = r_ARG_TYPE(l_A_747);
r_DEFINE(l_Y_751, ((*(R21 *)rt_nil_check(l_A_747))).f_LINE);
}
}
else
{
{
R12 * l_Y_752; memset(&l_Y_752, 0, sizeof l_Y_752);
l_Y_752 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_749))).f_NAME);
R10 l_C_753; memset(&l_C_753, 0, sizeof l_C_753);
R23 l_M_754; memset(&l_M_754, 0, sizeof l_M_754);
((*(R12 *)rt_nil_check(l_Y_752))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_746))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_747))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_747))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_747))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_747))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_753, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_747))).f_NAME, (((*(R21 *)rt_nil_check(l_A_747))).f_NAME).f_LEN))), 0);
S_R23(&l_M_754, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_747, &l_C_753, &l_M_754);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_752))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_753))))
{
S_R10(&l_C_753, (r_EXPR(l_A_747, ((*(R12 *)rt_nil_check(l_Y_752))).f_T)).f_C, 0);
S_R23(&l_M_754, r_ENUM_MANIFEST(l_A_747, ((*(R12 *)rt_nil_check(l_Y_752))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_752))).f_ACCESS, l_C_753, 0);
((*(R12 *)rt_nil_check(l_Y_752))).f_HASMV = (l_M_754).f_OK;
((*(R12 *)rt_nil_check(l_Y_752))).f_MV = (l_M_754).f_V;
((*(R12 *)rt_nil_check(l_Y_752))).f_INPUT = 1;
r_DEFINE(l_Y_752, ((*(R21 *)rt_nil_check(l_A_747))).f_LINE);
}
}
l_A_747 = ((*(R21 *)rt_nil_check(l_A_747))).f_NEXT;
l_N_749 = ((*(R21 *)rt_nil_check(l_N_749))).f_NEXT;
}
RT_B_TICK();
} L_end750: ;
}
l_F_746 = ((*(R21 *)rt_nil_check(l_F_746))).f_NEXT;
}
RT_B_TICK();
} L_end748: ;
if ((!(l_A_747 == NULL)))
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
{ R10 rv755 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv755; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv756 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv756; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_757; memset(&l_K_757, 0, sizeof l_K_757);
l_K_757 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv758 = r_MK(rt_str("rt_int", 6));
return rv758; }
}
else if ((l_K_757 == g_T_FLOAT))
{
{ R10 rv759 = r_MK(rt_str("double", 6));
return rv759; }
}
else if (((l_K_757 == g_T_STR) || (l_K_757 == g_T_BITS)))
{
{ R10 rv760 = r_MK(rt_str("rstr", 4));
return rv760; }
}
else if (((l_K_757 == g_T_REC) || (l_K_757 == g_T_ARR)))
{
{ R10 rv761 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv761; }
}
else if ((l_K_757 == g_T_ABS))
{
{ R10 rv762 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv762; }
}
else if ((l_K_757 == g_T_SEM))
{
{ R10 rv763 = r_MK(rt_str("rt_b_sem *", 10));
return rv763; }
}
else if ((l_K_757 == g_T_PATHS))
{
{ R10 rv764 = r_MK(rt_str("rt_b_paths", 10));
return rv764; }
}
else if ((l_K_757 == g_T_VOID))
{
{ R10 rv765 = r_MK(rt_str("void", 4));
return rv765; }
}
else if ((l_K_757 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_766; memset(&l_TT_766, 0, sizeof l_TT_766);
l_TT_766 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_766))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_766))).f_A == NULL)))
{
{
R12 * l_Y_767; memset(&l_Y_767, 0, sizeof l_Y_767);
l_Y_767 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_766))).f_NAME);
if ((!(l_Y_767 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_767))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_767))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_767))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_767))).f_DECL))).f_A == NULL)))
{
{ R10 rv768 = r_CATS(r_RECORD_NAME(l_Y_767), rt_str(" *", 2));
return rv768; }
}
}
}
}
}
}
}
{ R10 rv769 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv769; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv770 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv770; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_771; memset(&l_F_771, 0, sizeof l_F_771);
l_F_771 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_771)), ({ R24 rc772; memset(&rc772, 0, sizeof rc772);  S_R10(&rc772.f_NAME, p_NAME, 0); S_R10(&rc772.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc772.f_T = p_T; rc772.f_KIND = p_KIND; S_R10(&rc772.f_TAGF, r_NO_TEXT(), 0); rc772.f_LABELS = NULL; rc772.f_NEXT = NULL; rc772; }), 0);
{ R24 * rv773 = l_F_771;
return rv773; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_774; memset(&l_F_774, 0, sizeof l_F_774);
l_F_774 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_774 == NULL)) goto L_end775;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_774))).f_NAME, p_NAME))
{
{ R24 * rv776 = l_F_774;
return rv776; }
}
l_F_774 = ((*(R24 *)rt_nil_check(l_F_774))).f_NEXT;
}
RT_B_TICK();
} L_end775: ;
{ R24 * rv777 = NULL;
return rv777; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_778; memset(&l_F_778, 0, sizeof l_F_778);
l_F_778 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_779; memset(&l_FIRST_779, 0, sizeof l_FIRST_779);
l_FIRST_779 = NULL;
for (;;) {
if ((l_F_778 == NULL)) goto L_end780;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_778))).f_NAME, p_NAME))
{
if ((l_FIRST_779 == NULL))
{
l_FIRST_779 = l_F_778;
}
if (((((*(R24 *)rt_nil_check(l_F_778))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv781 = l_F_778;
return rv781; }
}
{
R23 l_TAGV_782; memset(&l_TAGV_782, 0, sizeof l_TAGV_782);
S_R23(&l_TAGV_782, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_778))).f_TAGF), 0);
if ((l_TAGV_782).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_778))).f_LABELS, (l_TAGV_782).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_778))).f_TAGF)))).f_T))
{
{ R24 * rv783 = l_F_778;
return rv783; }
}
}
}
}
l_F_778 = ((*(R24 *)rt_nil_check(l_F_778))).f_NEXT;
}
RT_B_TICK();
} L_end780: ;
{ R24 * rv784 = l_FIRST_779;
return rv784; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_785; memset(&l_P_785, 0, sizeof l_P_785);
l_P_785 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_786; memset(&l_N_786, 0, sizeof l_N_786);
l_N_786 = ((rt_int)0LL);
for (;;) {
if ((l_P_785 == NULL)) goto L_end787;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_785))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_786 = rt_add(l_N_786, ((rt_int)1LL));
}
l_P_785 = ((*(R24 *)rt_nil_check(l_P_785))).f_NEXT;
}
RT_B_TICK();
} L_end787: ;
if ((l_N_786 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_786)), 0);
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
R21 * l_D_788; memset(&l_D_788, 0, sizeof l_D_788);
l_D_788 = p_DECLS;
for (;;) {
if ((l_D_788 == NULL)) goto L_end789;
{
if ((((*(R21 *)rt_nil_check(l_D_788))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_790; memset(&l_FT_790, 0, sizeof l_FT_790);
l_FT_790 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_788))).f_B);
R21 * l_N_791; memset(&l_N_791, 0, sizeof l_N_791);
l_N_791 = ((*(R21 *)rt_nil_check(l_D_788))).f_A;
for (;;) {
if ((l_N_791 == NULL)) goto L_end792;
{
{
R24 * l_F_793; memset(&l_F_793, 0, sizeof l_F_793);
l_F_793 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_791))).f_NAME, l_FT_790, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_793))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_793))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_793, &(*p_TAIL));
}
l_N_791 = ((*(R21 *)rt_nil_check(l_N_791))).f_NEXT;
}
RT_B_TICK();
} L_end792: ;
}
}
else
{
{
R24 * l_TF_794; memset(&l_TF_794, 0, sizeof l_TF_794);
l_TF_794 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_788))).f_NAME);
R21 * l_S_795; memset(&l_S_795, 0, sizeof l_S_795);
l_S_795 = ((*(R21 *)rt_nil_check(l_D_788))).f_A;
if ((l_TF_794 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_788))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_788))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_794))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_788))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_788))).f_NAME);
}
for (;;) {
if ((l_S_795 == NULL)) goto L_end796;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_795))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_788))).f_NAME), ((*(R21 *)rt_nil_check(l_S_795))).f_A, &(*p_TAIL));
l_S_795 = ((*(R21 *)rt_nil_check(l_S_795))).f_NEXT;
}
RT_B_TICK();
} L_end796: ;
}
}
l_D_788 = ((*(R21 *)rt_nil_check(l_D_788))).f_NEXT;
}
RT_B_TICK();
} L_end789: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_797; memset(&l_T_797, 0, sizeof l_T_797);
l_T_797 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_798; memset(&l_TAIL_798, 0, sizeof l_TAIL_798);
l_TAIL_798 = NULL;
((*(R22 *)rt_nil_check(l_T_797))).f_BASE = l_T_797;
((*(R22 *)rt_nil_check(l_T_797))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_797))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_797))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_797))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_797))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_797))).f_CNAME));
}
{
R21 * l_F_799; memset(&l_F_799, 0, sizeof l_F_799);
l_F_799 = p_FORMALS;
for (;;) {
if ((l_F_799 == NULL)) goto L_end800;
{
if ((!(((*(R21 *)rt_nil_check(l_F_799))).f_B == NULL)))
{
{
R22 * l_FT_801; memset(&l_FT_801, 0, sizeof l_FT_801);
l_FT_801 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_799))).f_B);
R21 * l_N_802; memset(&l_N_802, 0, sizeof l_N_802);
l_N_802 = ((*(R21 *)rt_nil_check(l_F_799))).f_A;
rt_int l_KIND_803; memset(&l_KIND_803, 0, sizeof l_KIND_803);
l_KIND_803 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_799))).f_IV == ((rt_int)1LL)))
{
l_KIND_803 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_801))) || (!(((*(R22 *)rt_nil_check(l_FT_801))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_799))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_802 == NULL)) goto L_end804;
{
r_ADD_FIELD(l_T_797, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_802))).f_NAME, l_FT_801, l_KIND_803), &l_TAIL_798);
l_N_802 = ((*(R21 *)rt_nil_check(l_N_802))).f_NEXT;
}
RT_B_TICK();
} L_end804: ;
}
}
l_F_799 = ((*(R21 *)rt_nil_check(l_F_799))).f_NEXT;
}
RT_B_TICK();
} L_end800: ;
}
r_RECORD_FIELDS(l_T_797, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_798);
r_COMPLETE_RECORD(l_T_797);
{ R22 * rv805 = l_T_797;
return rv805; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_806; memset(&l_D_806, 0, sizeof l_D_806);
l_D_806 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_807; memset(&l_CLASS_807, 0, sizeof l_CLASS_807);
l_CLASS_807 = NULL;
R20 * l_TARGS_808; memset(&l_TARGS_808, 0, sizeof l_TARGS_808);
l_TARGS_808 = NULL;
R25 * l_VARGS_809; memset(&l_VARGS_809, 0, sizeof l_VARGS_809);
l_VARGS_809 = NULL;
R25 * l_VTAIL_810; memset(&l_VTAIL_810, 0, sizeof l_VTAIL_810);
l_VTAIL_810 = NULL;
R21 * l_A_811; memset(&l_A_811, 0, sizeof l_A_811);
l_A_811 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_812; memset(&l_F_812, 0, sizeof l_F_812);
l_F_812 = ((*(R21 *)rt_nil_check(l_D_806))).f_A;
for (;;) {
if ((l_F_812 == NULL)) goto L_end813;
{
{
R21 * l_N_814; memset(&l_N_814, 0, sizeof l_N_814);
l_N_814 = ((*(R21 *)rt_nil_check(l_F_812))).f_A;
for (;;) {
if ((l_N_814 == NULL)) goto L_end815;
{
if ((l_A_811 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_812))).f_B == NULL))
{
{
R20 * l_B_816; memset(&l_B_816, 0, sizeof l_B_816);
l_B_816 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_816)), ({ R20 rc817; memset(&rc817, 0, sizeof rc817);  S_R10(&rc817.f_NAME, ((*(R21 *)rt_nil_check(l_N_814))).f_NAME, 0); rc817.f_T = r_ARG_TYPE(l_A_811); S_R10(&rc817.f_C, r_NO_TEXT(), 0); rc817.f_HASMV = 0; rc817.f_MV = ((rt_int)0LL); rc817.f_R = NULL; rc817.f_NEXT = l_TARGS_808; rc817; }), 0);
l_TARGS_808 = l_B_816;
}
}
else
{
{
R25 * l_V_818; memset(&l_V_818, 0, sizeof l_V_818);
l_V_818 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_818)), ({ R25 rc819; memset(&rc819, 0, sizeof rc819);  S_R10(&rc819.f_LO, r_NO_TEXT(), 0); S_R10(&rc819.f_HI, r_NO_TEXT(), 0); S_R23(&rc819.f_MLO, r_NO_MVAL(), 0); S_R23(&rc819.f_MHI, r_NO_MVAL(), 0); rc819.f_ANYARG = 0; rc819.f_NEXT = NULL; rc819; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_811))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_812))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_811))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_818))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_811))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_818))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_818))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_811))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_818))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_818))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_811))).f_NAME, (((*(R21 *)rt_nil_check(l_A_811))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_820; memset(&l_FT_820, 0, sizeof l_FT_820);
l_FT_820 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_812))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_818))).f_LO, (r_EXPR(l_A_811, l_FT_820)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_818))).f_MLO, r_ENUM_MANIFEST(l_A_811, l_FT_820), 0);
if (((((*(R21 *)rt_nil_check(l_F_812))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_818))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_811))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_810 == NULL))
{
l_VARGS_809 = l_V_818;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_810))).f_NEXT = l_V_818;
}
l_VTAIL_810 = l_V_818;
}
}
l_A_811 = ((*(R21 *)rt_nil_check(l_A_811))).f_NEXT;
l_N_814 = ((*(R21 *)rt_nil_check(l_N_814))).f_NEXT;
}
RT_B_TICK();
} L_end815: ;
}
l_F_812 = ((*(R21 *)rt_nil_check(l_F_812))).f_NEXT;
}
RT_B_TICK();
} L_end813: ;
if ((!(l_A_811 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_821; memset(&l_R_821, 0, sizeof l_R_821);
l_R_821 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_821 == NULL)) goto L_end822;
{
if (((((*(R12 *)rt_nil_check(l_R_821))).f_DECL == l_D_806) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_821))).f_BINDINGS, l_TARGS_808)))
{
l_CLASS_807 = ((*(R12 *)rt_nil_check(l_R_821))).f_T;
goto L_end822;
}
l_R_821 = ((*(R12 *)rt_nil_check(l_R_821))).f_INSTANCES;
}
RT_B_TICK();
} L_end822: ;
}
if ((l_CLASS_807 == NULL))
{
{
R12 * l_R_823; memset(&l_R_823, 0, sizeof l_R_823);
l_R_823 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_824; memset(&l_B_824, 0, sizeof l_B_824);
l_B_824 = l_TARGS_808;
R20 * l_SAVED_825; memset(&l_SAVED_825, 0, sizeof l_SAVED_825);
l_SAVED_825 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_826; memset(&l_ENTERED_826, 0, sizeof l_ENTERED_826);
((*(R12 *)rt_nil_check(l_R_823))).f_DECL = l_D_806;
((*(R12 *)rt_nil_check(l_R_823))).f_BINDINGS = l_TARGS_808;
((*(R12 *)rt_nil_check(l_R_823))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_823;
l_ENTERED_826 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_824 == NULL)) goto L_end827;
{
{
R12 * l_TY_828; memset(&l_TY_828, 0, sizeof l_TY_828);
l_TY_828 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_824))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_828))).f_T = ((*(R20 *)rt_nil_check(l_B_824))).f_T;
r_DEFINE(l_TY_828, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_824 = ((*(R20 *)rt_nil_check(l_B_824))).f_NEXT;
}
RT_B_TICK();
} L_end827: ;
l_F_812 = ((*(R21 *)rt_nil_check(l_D_806))).f_A;
for (;;) {
if ((l_F_812 == NULL)) goto L_end829;
{
if ((!(((*(R21 *)rt_nil_check(l_F_812))).f_B == NULL)))
{
{
R21 * l_N_830; memset(&l_N_830, 0, sizeof l_N_830);
l_N_830 = ((*(R21 *)rt_nil_check(l_F_812))).f_A;
for (;;) {
if ((l_N_830 == NULL)) goto L_end831;
{
{
R12 * l_P_832; memset(&l_P_832, 0, sizeof l_P_832);
l_P_832 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_830))).f_NAME);
((*(R12 *)rt_nil_check(l_P_832))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_812))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_832))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_830))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_832))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_832))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_832, ((*(R21 *)rt_nil_check(l_F_812))).f_LINE);
}
l_N_830 = ((*(R21 *)rt_nil_check(l_N_830))).f_NEXT;
}
RT_B_TICK();
} L_end831: ;
}
}
l_F_812 = ((*(R21 *)rt_nil_check(l_F_812))).f_NEXT;
}
RT_B_TICK();
} L_end829: ;
if ((l_TARGS_808 == NULL))
{
l_CLASS_807 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_806))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_806))).f_A);
}
else
{
l_CLASS_807 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_806))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_806))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_807))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_823))).f_T = l_CLASS_807;
r_CLOSE_SCOPE();
if (l_ENTERED_826)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_825;
}
}
{
R22 * l_T_833; memset(&l_T_833, 0, sizeof l_T_833);
l_T_833 = r_COPY_TYP(l_CLASS_807);
((*(R22 *)rt_nil_check(l_T_833))).f_ARGS = l_VARGS_809;
{ R22 * rv834 = l_T_833;
return rv834; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_835; memset(&l_P_835, 0, sizeof l_P_835);
l_P_835 = p_A;
R20 * l_Q_836; memset(&l_Q_836, 0, sizeof l_Q_836);
l_Q_836 = p_B;
for (;;) {
if (((l_P_835 == NULL) || (l_Q_836 == NULL))) goto L_end837;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_835))).f_T, ((*(R20 *)rt_nil_check(l_Q_836))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_835))).f_T, ((*(R20 *)rt_nil_check(l_Q_836))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_835))).f_T, ((*(R20 *)rt_nil_check(l_Q_836))).f_T))))
{
{ rt_int rv838 = 0;
return rv838; }
}
l_P_835 = ((*(R20 *)rt_nil_check(l_P_835))).f_NEXT;
l_Q_836 = ((*(R20 *)rt_nil_check(l_Q_836))).f_NEXT;
}
RT_B_TICK();
} L_end837: ;
{ rt_int rv839 = ((l_P_835 == NULL) && (l_Q_836 == NULL));
return rv839; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_840; memset(&l_A_840, 0, sizeof l_A_840);
l_A_840 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_840 == NULL)) goto L_end841;
{
if (((*(R25 *)rt_nil_check(l_A_840))).f_ANYARG)
{
{ rt_int rv842 = 1;
return rv842; }
}
l_A_840 = ((*(R25 *)rt_nil_check(l_A_840))).f_NEXT;
}
RT_B_TICK();
} L_end841: ;
{ rt_int rv843 = 0;
return rv843; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_844; memset(&l_L_844, 0, sizeof l_L_844);
l_L_844 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_845; memset(&l_C_845, 0, sizeof l_C_845);
S_R10(&l_C_845, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_846; memset(&l_TF_846, 0, sizeof l_TF_846);
l_TF_846 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_844 == NULL)) goto L_end847;
{
if ((((*(R21 *)rt_nil_check(l_L_844))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_845, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_845, p_SELF, ((*(R24 *)rt_nil_check(l_TF_846))).f_CNAME), 0);
S_R10(&l_C_845, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_845, (r_EXPR(((*(R21 *)rt_nil_check(l_L_844))).f_A, ((*(R24 *)rt_nil_check(l_TF_846))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_846))).f_CNAME), 0);
S_R10(&l_C_845, r_FMT2(rt_str("@@)", 3), l_C_845, (r_EXPR(((*(R21 *)rt_nil_check(l_L_844))).f_B, ((*(R24 *)rt_nil_check(l_TF_846))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_845, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_845, p_SELF, ((*(R24 *)rt_nil_check(l_TF_846))).f_CNAME, (r_EXPR(l_L_844, ((*(R24 *)rt_nil_check(l_TF_846))).f_T)).f_C), 0);
}
l_L_844 = ((*(R21 *)rt_nil_check(l_L_844))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
{ R10 rv848 = r_FMT1(rt_str("(@)", 3), l_C_845);
return rv848; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_849; memset(&l_C_849, 0, sizeof l_C_849);
S_R10(&l_C_849, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_850; memset(&l_F_850, 0, sizeof l_F_850);
l_F_850 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_851; memset(&l_BODY_851, 0, sizeof l_BODY_851);
S_R10(&l_BODY_851, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_852; memset(&l_ASSIGN_852, 0, sizeof l_ASSIGN_852);
S_R10(&l_ASSIGN_852, r_MK(rt_str("", 0)), 0);
R10 l_COPY_853; memset(&l_COPY_853, 0, sizeof l_COPY_853);
S_R10(&l_COPY_853, r_MK(rt_str("", 0)), 0);
R10 l_EQ_854; memset(&l_EQ_854, 0, sizeof l_EQ_854);
S_R10(&l_EQ_854, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_850 == NULL)) goto L_end855;
{
S_R10(&l_BODY_851, r_FMT3(rt_str("@ @ @;", 6), l_BODY_851, r_CTYPE(((*(R24 *)rt_nil_check(l_F_850))).f_T), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME), 0);
S_R10(&l_COPY_853, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_853, ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_850))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_850))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_852, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_852, ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_850))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_852, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_852, ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_852, r_FMT2(rt_str("@ @", 3), l_ASSIGN_852, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_850))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_850))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_854, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_854, r_VARIANT_COND(l_F_850, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_850))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_854, r_FMT2(rt_str("@ && @", 6), l_EQ_854, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_850))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_850))).f_CNAME))), 0);
}
l_F_850 = ((*(R24 *)rt_nil_check(l_F_850))).f_NEXT;
}
RT_B_TICK();
} L_end855: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_849, l_BODY_851));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_849, l_C_849, l_C_849));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_849, l_C_849, l_C_849));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_849, l_C_849, l_C_849, l_ASSIGN_852));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_849, l_C_849, l_C_849, l_EQ_854));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_849, l_C_849, l_C_849));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_849, l_C_849, l_C_849, l_C_849));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_853));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_856; memset(&l_ET_C_856, 0, sizeof l_ET_C_856);
S_R10(&l_ET_C_856, r_CTYPE(p_ELEM), 0);
R10 l_KEY_857; memset(&l_KEY_857, 0, sizeof l_KEY_857);
S_R10(&l_KEY_857, r_FMT3(rt_str("@/@/@", 5), l_ET_C_856, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_858; memset(&l_Y_858, 0, sizeof l_Y_858);
l_Y_858 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_858 == NULL)) goto L_end859;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_858))).f_NAME, l_KEY_857) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_858))).f_T, p_ELEM)))
{
{ R10 rv860 = ((*(R12 *)rt_nil_check(l_Y_858))).f_ACCESS;
return rv860; }
}
l_Y_858 = ((*(R12 *)rt_nil_check(l_Y_858))).f_INSTANCES;
}
RT_B_TICK();
} L_end859: ;
l_Y_858 = r_NEW_SYM(g_Y_TYPE, l_KEY_857);
((*(R12 *)rt_nil_check(l_Y_858))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_858))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_858))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_858;
{
R10 l_C_861; memset(&l_C_861, 0, sizeof l_C_861);
S_R10(&l_C_861, ((*(R12 *)rt_nil_check(l_Y_858))).f_ACCESS, 0);
R10 l_D_862; memset(&l_D_862, 0, sizeof l_D_862);
S_R10(&l_D_862, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_861, l_C_861));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_861, l_D_862, l_D_862, l_ET_C_856));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_861, l_C_861, l_C_861));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_861, l_C_861, l_C_861));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_861, l_C_861, l_C_861, l_D_862));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_862, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_861, l_C_861, l_C_861, l_D_862));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_862, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_861, l_C_861, l_C_861));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_861, l_C_861, l_C_861, l_C_861));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_862, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv863 = ((*(R12 *)rt_nil_check(l_Y_858))).f_ACCESS;
return rv863; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_864; memset(&l_K_864, 0, sizeof l_K_864);
l_K_864 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_864 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv865 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv865; }
}
{ R10 rv866 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv866; }
}
else if ((l_K_864 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv867 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv867; }
}
{ R10 rv868 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv868; }
}
else if ((l_K_864 == g_T_SEM))
{
{ R10 rv869 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv869; }
}
else if ((l_K_864 == g_T_ABS))
{
{ R10 rv870 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv870; }
}
else if ((l_K_864 == g_T_ARR))
{
{
R25 * l_B_871; memset(&l_B_871, 0, sizeof l_B_871);
l_B_871 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_872; memset(&l_I_872, 0, sizeof l_I_872);
l_I_872 = ((rt_int)0LL);
R10 l_R_873; memset(&l_R_873, 0, sizeof l_R_873);
S_R10(&l_R_873, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_871 == NULL)) goto L_end874;
{
S_R10(&l_R_873, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_873, p_LV, r_NUM(l_I_872), ((*(R25 *)rt_nil_check(l_B_871))).f_LO), 0);
S_R10(&l_R_873, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_873, p_LV, r_NUM(l_I_872), ((*(R25 *)rt_nil_check(l_B_871))).f_HI), 0);
l_I_872 = rt_add(l_I_872, ((rt_int)1LL));
l_B_871 = ((*(R25 *)rt_nil_check(l_B_871))).f_NEXT;
}
RT_B_TICK();
} L_end874: ;
S_R10(&l_R_873, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_873, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_873, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_873, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_875; memset(&l_IV_875, 0, sizeof l_IV_875);
S_R10(&l_IV_875, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_873, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_873, l_IV_875, l_IV_875, l_IV_875), 0);
S_R10(&l_R_873, r_FMT2(rt_str("@ @ }", 5), l_R_873, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_875))), 0);
}
}
{ R10 rv876 = r_CATS(l_R_873, rt_str(" }", 2));
return rv876; }
}
}
else if ((l_K_864 == g_T_REC))
{
{
R24 * l_F_877; memset(&l_F_877, 0, sizeof l_F_877);
l_F_877 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_878; memset(&l_A_878, 0, sizeof l_A_878);
l_A_878 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_879; memset(&l_R_879, 0, sizeof l_R_879);
S_R10(&l_R_879, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_877 == NULL)) goto L_end880;
{
if ((!(((*(R24 *)rt_nil_check(l_F_877))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_878 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_878))).f_ANYARG))
{
S_R10(&l_R_879, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_879, p_LV, ((*(R24 *)rt_nil_check(l_F_877))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_878))).f_LO), 0);
}
l_A_878 = ((*(R25 *)rt_nil_check(l_A_878))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_877))).f_T))
{
S_R10(&l_R_879, r_FMT2(rt_str("@ @", 3), l_R_879, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_877))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_877))).f_CNAME)), p_LV)), 0);
}
l_F_877 = ((*(R24 *)rt_nil_check(l_F_877))).f_NEXT;
}
RT_B_TICK();
} L_end880: ;
{ R10 rv881 = l_R_879;
return rv881; }
}
}
{ R10 rv882 = r_NO_TEXT();
return rv882; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_883; memset(&l_K_883, 0, sizeof l_K_883);
l_K_883 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_883 == g_T_STR) || (l_K_883 == g_T_BITS)) || (l_K_883 == g_T_ARR)) || (l_K_883 == g_T_SEM)))
{
{ rt_int rv884 = 1;
return rv884; }
}
else if ((l_K_883 == g_T_ABS))
{
{ rt_int rv885 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv885; }
}
else if ((l_K_883 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv886 = 1;
return rv886; }
}
{
R24 * l_F_887; memset(&l_F_887, 0, sizeof l_F_887);
l_F_887 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_887 == NULL)) goto L_end888;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_887))).f_T))
{
{ rt_int rv889 = 1;
return rv889; }
}
l_F_887 = ((*(R24 *)rt_nil_check(l_F_887))).f_NEXT;
}
RT_B_TICK();
} L_end888: ;
}
}
{ rt_int rv890 = 0;
return rv890; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_891; memset(&l_K_891, 0, sizeof l_K_891);
l_K_891 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_891 == g_T_STR) || (l_K_891 == g_T_BITS)))
{
{ R10 rv892 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv892; }
}
else if ((l_K_891 == g_T_ABS))
{
{ R10 rv893 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv893; }
}
else if (((l_K_891 == g_T_ARR) || (l_K_891 == g_T_REC)))
{
{ R10 rv894 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv894; }
}
{ R10 rv895 = p_V;
return rv895; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_896; memset(&l_K_896, 0, sizeof l_K_896);
l_K_896 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_896 == g_T_STR) || (l_K_896 == g_T_BITS)))
{
{ R10 rv897 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv897; }
}
else if ((l_K_896 == g_T_ABS))
{
{ R10 rv898 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv898; }
}
else if ((l_K_896 == g_T_SEM))
{
{ R10 rv899 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv899; }
}
else if ((l_K_896 == g_T_ARR))
{
{ R10 rv900 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv900; }
}
else if ((l_K_896 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv901 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv901; }
}
{ R10 rv902 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv902; }
}
{ R10 rv903 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv903; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_904; memset(&l_K_904, 0, sizeof l_K_904);
l_K_904 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_904 == g_T_STR) || (l_K_904 == g_T_BITS)))
{
{ R10 rv905 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv905; }
}
else if ((l_K_904 == g_T_ABS))
{
{ R10 rv906 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv906; }
}
else if (((l_K_904 == g_T_ARR) || (l_K_904 == g_T_REC)))
{
{ R10 rv907 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv907; }
}
else if ((l_K_904 == g_T_SEM))
{
{ R10 rv908 = r_MK(rt_str("0", 1));
return rv908; }
}
{ R10 rv909 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv909; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv910 = p_V;
return rv910; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv911 = p_V;
return rv911; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv912 = p_V;
return rv912; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv913 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv913; }
}
{ R10 rv914 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv914; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv915 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv915; }
}
{ R10 rv916 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv916; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv917 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv917; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv918 = 1;
return rv918; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv919 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv919; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv920 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv920; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv921 = 0;
return rv921; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv922 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv922; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv923 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv923; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv924 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv924; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv925 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv925; }
}
{ rt_int rv926 = 1;
return rv926; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv927 = 1;
return rv927; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv928 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv928; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv929 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv929; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv930 = 0;
return rv930; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv931 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv931; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv932 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv932; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv933 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv933; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv934 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv934; }
}
{ rt_int rv935 = 1;
return rv935; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv936 = 0;
return rv936; }
}
{ rt_int rv937 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv937; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_938; memset(&l_P_938, 0, sizeof l_P_938);
l_P_938 = p_A;
R25 * l_Q_939; memset(&l_Q_939, 0, sizeof l_Q_939);
l_Q_939 = p_B;
for (;;) {
if (((l_P_938 == NULL) || (l_Q_939 == NULL))) goto L_end940;
{
if ((r_IS_GEN_ARG(l_P_938) || r_IS_GEN_ARG(l_Q_939)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_938))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_939))).f_ANYARG)))
{
{ rt_int rv941 = 0;
return rv941; }
}
if (((((*(R25 *)rt_nil_check(l_P_938))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_939))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_938))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_939))).f_MLO).f_V)))
{
{ rt_int rv942 = 0;
return rv942; }
}
}
l_P_938 = ((*(R25 *)rt_nil_check(l_P_938))).f_NEXT;
l_Q_939 = ((*(R25 *)rt_nil_check(l_Q_939))).f_NEXT;
}
RT_B_TICK();
} L_end940: ;
{ rt_int rv943 = ((l_P_938 == NULL) && (l_Q_939 == NULL));
return rv943; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_944; memset(&l_CS_944, 0, sizeof l_CS_944);
l_CS_944 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_945; memset(&l_T_945, 0, sizeof l_T_945);
rt_int l_LEV_946; memset(&l_LEV_946, 0, sizeof l_LEV_946);
if ((((*(R18 *)rt_nil_check(l_CS_944))).f_LEVEL == p_LEVEL))
{
{ R10 rv947 = r_MK(rt_str("F", 1));
return rv947; }
}
if (((*(R18 *)rt_nil_check(l_CS_944))).f_FRAMED)
{
S_R10(&l_T_945, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_945, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_946 = rt_sub(((*(R18 *)rt_nil_check(l_CS_944))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_946 <= p_LEVEL)) goto L_end948;
{
S_R10(&l_T_945, r_CATS(l_T_945, rt_str("->up", 4)), 0);
l_LEV_946 = rt_sub(l_LEV_946, ((rt_int)1LL));
}
RT_B_TICK();
} L_end948: ;
{ R10 rv949 = l_T_945;
return rv949; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv950 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv950; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv951 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv951; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv952 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv952; }
}
{ R10 rv953 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv953; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_954; memset(&l_CS_954, 0, sizeof l_CS_954);
l_CS_954 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_955; memset(&l_T_955, 0, sizeof l_T_955);
l_T_955 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_956; memset(&l_CN_956, 0, sizeof l_CN_956);
if ((((*(R18 *)rt_nil_check(l_CS_954))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_956, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_956, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_955), l_CN_956));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_956, 0);
{ R10 rv957 = l_CN_956;
return rv957; }
}
S_R10(&l_CN_956, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_956, 0);
if (((*(R18 *)rt_nil_check(l_CS_954))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_955), l_CN_956), &((*(R18 *)rt_nil_check(l_CS_954))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_956), 0);
{ R10 rv958 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv958; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_955), l_CN_956, l_CN_956, l_CN_956));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_956, 0);
{ R10 rv959 = l_CN_956;
return rv959; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_960; memset(&l_T_960, 0, sizeof l_T_960);
l_T_960 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_961; memset(&l_N_961, 0, sizeof l_N_961);
l_N_961 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_962; memset(&l_V_962, 0, sizeof l_V_962);
rt_int l_HAVE_V_963; memset(&l_HAVE_V_963, 0, sizeof l_HAVE_V_963);
l_HAVE_V_963 = 0;
if (((((*(R22 *)rt_nil_check(l_T_960))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_960))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_961 == NULL)) goto L_end964;
{
{
R12 * l_Y_965; memset(&l_Y_965, 0, sizeof l_Y_965);
l_Y_965 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_961))).f_NAME);
R10 l_CN_966; memset(&l_CN_966, 0, sizeof l_CN_966);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_965))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_965))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_960) && (((*(R22 *)rt_nil_check(l_T_960))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_967; memset(&l_M_967, 0, sizeof l_M_967);
S_R23(&l_M_967, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_965))).f_HASMV = (l_M_967).f_OK;
((*(R12 *)rt_nil_check(l_Y_965))).f_MV = (l_M_967).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_965))).f_T = l_T_960;
S_R10(&l_CN_966, r_NEW_OBJECT(l_Y_965, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_960))
{
r_CODE(r_INIT_CODE(l_T_960, l_CN_966));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_963))
{
S_R26(&l_V_962, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_960), 0);
l_HAVE_V_963 = 1;
}
r_CODE(r_STORE_CODE(l_T_960, l_CN_966, l_V_962, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_965, ((*(R21 *)rt_nil_check(l_N_961))).f_LINE);
}
l_N_961 = ((*(R21 *)rt_nil_check(l_N_961))).f_NEXT;
}
RT_B_TICK();
} L_end964: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv968 = ({ R26 rc969; memset(&rc969, 0, sizeof rc969);  S_R10(&rc969.f_C, p_C, 0); rc969.f_T = p_T; rc969.f_LVAL = 0; S_R10(&rc969.f_SELF, r_NO_TEXT(), 0); rc969; });
return rv968; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv970 = ({ R26 rc971; memset(&rc971, 0, sizeof rc971);  S_R10(&rc971.f_C, p_C, 0); rc971.f_T = p_T; rc971.f_LVAL = p_LVAL; S_R10(&rc971.f_SELF, p_SELF, 0); rc971; });
return rv970; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_972; memset(&l_T_972, 0, sizeof l_T_972);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv973 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv973; }
}
l_T_972 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_972))).f_SCALE = p_SCALE;
{ R22 * rv974 = l_T_972;
return rv974; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_975; memset(&l_T_975, 0, sizeof l_T_975);
l_T_975 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_975))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_975))).f_MLEN, p_M, 0);
{ R22 * rv976 = l_T_975;
return rv976; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_977; memset(&l_S_977, 0, sizeof l_S_977);
l_S_977 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_977, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_978; memset(&l_AT_978, 0, sizeof l_AT_978);
l_AT_978 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_979; memset(&l_R_979, 0, sizeof l_R_979);
S_R10(&l_R_979, r_MK(rt_str("\"", 1)), 0);
{ rt_int it981_lo = ((rt_int)0LL), it981_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it981 = it981_lo; it981 <= it981_hi; it981++) {
{
if ((rt_b_eq(rt_b_slice(l_S_977, it981, it981), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_977, it981, it981), rt_str("\\", 1))))
{
S_R10(&l_R_979, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_977, it981, it981))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_977, it981, it981), rt_str("\?", 1)))
{
S_R10(&l_R_979, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_982; memset(&l_C_982, 0, sizeof l_C_982);
l_C_982 = r_CODE_OF(rt_b_slice(l_S_977, it981, it981));
if (({ rt_int iv983 = l_C_982; (((rt_int)32LL) <= iv983) && (iv983 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_979, r_MK(rt_b_slice(l_S_977, it981, it981)), 0);
}
else
{
S_R10(&l_R_979, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_982, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_982, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_982, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it981 == it981_hi) break;
} } L_end980: ;
S_R10(&l_R_979, r_MK(rt_str("\"", 1)), 0);
{ R10 rv984 = ({ R10 rc985; memset(&rc985, 0, sizeof rc985);  rc985.f_AT = l_AT_978; rc985.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_978); rc985.f_H = rt_neg(((rt_int)1LL)); rc985; });
return rv984; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_986; memset(&l_K_986, 0, sizeof l_K_986);
l_K_986 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_987; memset(&l_NO_987, 0, sizeof l_NO_987);
S_R23(&l_NO_987, ({ R23 rc988; memset(&rc988, 0, sizeof rc988);  rc988.f_OK = 0; rc988.f_V = ((rt_int)0LL); rc988; }), 0);
if ((l_K_986 == g_N_INT))
{
{ R23 rv989 = ({ R23 rc990; memset(&rc990, 0, sizeof rc990);  rc990.f_OK = 1; rc990.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc990; });
return rv989; }
}
else if ((l_K_986 == g_N_PAREN))
{
{ R23 rv991 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv991; }
}
else if ((l_K_986 == g_N_BOOL))
{
{ R23 rv992 = ({ R23 rc993; memset(&rc993, 0, sizeof rc993);  rc993.f_OK = 1; rc993.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc993; });
return rv992; }
}
else if ((l_K_986 == g_N_UNOP))
{
{
R23 l_A_994; memset(&l_A_994, 0, sizeof l_A_994);
S_R23(&l_A_994, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_994).f_OK))
{
{ R23 rv995 = l_NO_987;
return rv995; }
}
{ R23 rv996 = ({ R23 rc997; memset(&rc997, 0, sizeof rc997);  rc997.f_OK = 1; rc997.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_994).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc997; });
return rv996; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv998 = l_A_994;
return rv998; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv999 = ({ R23 rc1000; memset(&rc1000, 0, sizeof rc1000);  rc1000.f_OK = (l_A_994).f_OK; rc1000.f_V = rt_sub(((rt_int)1LL), (l_A_994).f_V); rc1000; });
return rv999; }
}
}
}
else if ((l_K_986 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1001 = l_NO_987;
return rv1001; }
}
{
R23 l_A_1002; memset(&l_A_1002, 0, sizeof l_A_1002);
S_R23(&l_A_1002, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1003; memset(&l_B_1003, 0, sizeof l_B_1003);
S_R23(&l_B_1003, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1004; memset(&l_OP_1004, 0, sizeof l_OP_1004);
S_R10(&l_OP_1004, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1004, rt_str("&", 1)))
{
if (((((l_A_1002).f_OK && ((l_A_1002).f_V == ((rt_int)0LL)))) || (((l_B_1003).f_OK && ((l_B_1003).f_V == ((rt_int)0LL))))))
{
{ R23 rv1005 = ({ R23 rc1006; memset(&rc1006, 0, sizeof rc1006);  rc1006.f_OK = 1; rc1006.f_V = ((rt_int)0LL); rc1006; });
return rv1005; }
}
if (((l_A_1002).f_OK && (l_B_1003).f_OK))
{
{ R23 rv1007 = ({ R23 rc1008; memset(&rc1008, 0, sizeof rc1008);  rc1008.f_OK = 1; rc1008.f_V = ((rt_int)1LL); rc1008; });
return rv1007; }
}
{ R23 rv1009 = l_NO_987;
return rv1009; }
}
else if (r_TEQS(l_OP_1004, rt_str("!", 1)))
{
if (((((l_A_1002).f_OK && ((l_A_1002).f_V == ((rt_int)1LL)))) || (((l_B_1003).f_OK && ((l_B_1003).f_V == ((rt_int)1LL))))))
{
{ R23 rv1010 = ({ R23 rc1011; memset(&rc1011, 0, sizeof rc1011);  rc1011.f_OK = 1; rc1011.f_V = ((rt_int)1LL); rc1011; });
return rv1010; }
}
if (((l_A_1002).f_OK && (l_B_1003).f_OK))
{
{ R23 rv1012 = ({ R23 rc1013; memset(&rc1013, 0, sizeof rc1013);  rc1013.f_OK = 1; rc1013.f_V = ((rt_int)0LL); rc1013; });
return rv1012; }
}
{ R23 rv1014 = l_NO_987;
return rv1014; }
}
if ((!(((l_A_1002).f_OK && (l_B_1003).f_OK))))
{
{ R23 rv1015 = l_NO_987;
return rv1015; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1016 = l_NO_987;
return rv1016; }
}
if (((r_TEQS(l_OP_1004, rt_str("+", 1)) || r_TEQS(l_OP_1004, rt_str("-", 1))) || r_TEQS(l_OP_1004, rt_str("*", 1))))
{
{ R23 rv1017 = ({ R23 rc1018; memset(&rc1018, 0, sizeof rc1018);  rc1018.f_OK = 1; rc1018.f_V = r_MANIFEST_ARITH(l_OP_1004, (l_A_1002).f_V, (l_B_1003).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1018; });
return rv1017; }
}
else if ((r_TEQS(l_OP_1004, rt_str("//", 2)) && (!((l_B_1003).f_V == ((rt_int)0LL)))))
{
{ R23 rv1019 = ({ R23 rc1020; memset(&rc1020, 0, sizeof rc1020);  rc1020.f_OK = 1; rc1020.f_V = rt_quot((l_A_1002).f_V, (l_B_1003).f_V); rc1020; });
return rv1019; }
}
else if ((r_TEQS(l_OP_1004, rt_str("MOD", 3)) && (!((l_B_1003).f_V == ((rt_int)0LL)))))
{
{ R23 rv1021 = ({ R23 rc1022; memset(&rc1022, 0, sizeof rc1022);  rc1022.f_OK = 1; rc1022.f_V = rt_rem((l_A_1002).f_V, (l_B_1003).f_V); rc1022; });
return rv1021; }
}
else if (r_TEQS(l_OP_1004, rt_str("=", 1)))
{
{ R23 rv1023 = ({ R23 rc1024; memset(&rc1024, 0, sizeof rc1024);  rc1024.f_OK = 1; rc1024.f_V = r_BOOL_INT(((l_A_1002).f_V == (l_B_1003).f_V)); rc1024; });
return rv1023; }
}
else if (r_TEQS(l_OP_1004, rt_str("<>", 2)))
{
{ R23 rv1025 = ({ R23 rc1026; memset(&rc1026, 0, sizeof rc1026);  rc1026.f_OK = 1; rc1026.f_V = r_BOOL_INT((!((l_A_1002).f_V == (l_B_1003).f_V))); rc1026; });
return rv1025; }
}
else if (r_TEQS(l_OP_1004, rt_str("<", 1)))
{
{ R23 rv1027 = ({ R23 rc1028; memset(&rc1028, 0, sizeof rc1028);  rc1028.f_OK = 1; rc1028.f_V = r_BOOL_INT(((l_A_1002).f_V < (l_B_1003).f_V)); rc1028; });
return rv1027; }
}
else if (r_TEQS(l_OP_1004, rt_str(">", 1)))
{
{ R23 rv1029 = ({ R23 rc1030; memset(&rc1030, 0, sizeof rc1030);  rc1030.f_OK = 1; rc1030.f_V = r_BOOL_INT(((l_A_1002).f_V > (l_B_1003).f_V)); rc1030; });
return rv1029; }
}
else if (r_TEQS(l_OP_1004, rt_str("<=", 2)))
{
{ R23 rv1031 = ({ R23 rc1032; memset(&rc1032, 0, sizeof rc1032);  rc1032.f_OK = 1; rc1032.f_V = r_BOOL_INT(((l_A_1002).f_V <= (l_B_1003).f_V)); rc1032; });
return rv1031; }
}
else if (r_TEQS(l_OP_1004, rt_str(">=", 2)))
{
{ R23 rv1033 = ({ R23 rc1034; memset(&rc1034, 0, sizeof rc1034);  rc1034.f_OK = 1; rc1034.f_V = r_BOOL_INT(((l_A_1002).f_V >= (l_B_1003).f_V)); rc1034; });
return rv1033; }
}
}
}
else if ((l_K_986 == g_N_IN))
{
{
R23 l_A_1035; memset(&l_A_1035, 0, sizeof l_A_1035);
S_R23(&l_A_1035, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1036; memset(&l_L_1036, 0, sizeof l_L_1036);
S_R23(&l_L_1036, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1037; memset(&l_U_1037, 0, sizeof l_U_1037);
S_R23(&l_U_1037, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1038; memset(&l_LO_1038, 0, sizeof l_LO_1038);
rt_int l_HI_1039; memset(&l_HI_1039, 0, sizeof l_HI_1039);
if ((!(((((l_A_1035).f_OK && (l_L_1036).f_OK) && (l_U_1037).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1040 = l_NO_987;
return rv1040; }
}
l_LO_1038 = (l_L_1036).f_V;
l_HI_1039 = (l_U_1037).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1038 = rt_add(l_LO_1038, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1039 = rt_sub(l_HI_1039, ((rt_int)1LL));
}
{ R23 rv1041 = ({ R23 rc1042; memset(&rc1042, 0, sizeof rc1042);  rc1042.f_OK = 1; rc1042.f_V = r_BOOL_INT((((l_A_1035).f_V >= l_LO_1038) && ((l_A_1035).f_V <= l_HI_1039))); rc1042; });
return rv1041; }
}
}
else if (((l_K_986 == g_N_NAME) || (l_K_986 == g_TS_GEN)))
{
{
R12 * l_Y_1043; memset(&l_Y_1043, 0, sizeof l_Y_1043);
l_Y_1043 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1044; memset(&l_B_1044, 0, sizeof l_B_1044);
l_B_1044 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1044 == NULL)) goto L_end1045;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1044))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1044))).f_HASMV))
{
{ R23 rv1046 = ({ R23 rc1047; memset(&rc1047, 0, sizeof rc1047);  rc1047.f_OK = 1; rc1047.f_V = ((*(R20 *)rt_nil_check(l_B_1044))).f_MV; rc1047; });
return rv1046; }
}
l_B_1044 = ((*(R20 *)rt_nil_check(l_B_1044))).f_NEXT;
}
RT_B_TICK();
} L_end1045: ;
if ((!(l_Y_1043 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1043))).f_HASMV))
{
{ R23 rv1048 = ({ R23 rc1049; memset(&rc1049, 0, sizeof rc1049);  rc1049.f_OK = 1; rc1049.f_V = ((*(R12 *)rt_nil_check(l_Y_1043))).f_MV; rc1049; });
return rv1048; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1050 = ({ R23 rc1051; memset(&rc1051, 0, sizeof rc1051);  rc1051.f_OK = 1; rc1051.f_V = ((*(R12 *)rt_nil_check(l_Y_1043))).f_MV; rc1051; });
return rv1050; }
}
}
}
}
}
else if ((l_K_986 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1052 = ({ R23 rc1053; memset(&rc1053, 0, sizeof rc1053);  rc1053.f_OK = 1; rc1053.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1053; });
return rv1052; }
}
}
else if ((l_K_986 == g_N_FIELD))
{
{ R23 rv1054 = r_ATTR_MANIFEST(p_E);
return rv1054; }
}
else if ((l_K_986 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1055 = ({ R23 rc1056; memset(&rc1056, 0, sizeof rc1056);  rc1056.f_OK = 1; rc1056.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1056; });
return rv1055; }
}
}
{ R23 rv1057 = l_NO_987;
return rv1057; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1058; memset(&l_A_1058, 0, sizeof l_A_1058);
l_A_1058 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1059; memset(&l_NAME_1059, 0, sizeof l_NAME_1059);
S_R10(&l_NAME_1059, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1060; memset(&l_T_1060, 0, sizeof l_T_1060);
l_T_1060 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1058))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1061; memset(&l_INNER_1061, 0, sizeof l_INNER_1061);
l_INNER_1061 = ((*(R21 *)rt_nil_check(l_A_1058))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1061))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1059, rt_str("MAX", 3)))
{
{ R23 rv1062 = r_SOME(r_MAX_LENGTH());
return rv1062; }
}
else if (r_TEQS(l_NAME_1059, rt_str("MIN", 3)))
{
{ R23 rv1063 = r_SOME(((rt_int)0LL));
return rv1063; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1061))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1061))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1059, rt_str("MAX", 3)))
{
{ R23 rv1064 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1064; }
}
else if (r_TEQS(l_NAME_1059, rt_str("MIN", 3)))
{
{ R23 rv1065 = r_SOME(((rt_int)1LL));
return rv1065; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1061))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1059, rt_str("MAX", 3)))
{
{ R23 rv1066 = r_SOME(((rt_int)1000LL));
return rv1066; }
}
else if (r_TEQS(l_NAME_1059, rt_str("MIN", 3)))
{
{ R23 rv1067 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1067; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1061))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1059, rt_str("MAX", 3)))
{
{ R23 rv1068 = r_SOME(((rt_int)1000LL));
return rv1068; }
}
else if (r_TEQS(l_NAME_1059, rt_str("MIN", 3)))
{
{ R23 rv1069 = r_SOME(((rt_int)2LL));
return rv1069; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1070; memset(&l_Y_1070, 0, sizeof l_Y_1070);
l_Y_1070 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1058))).f_NAME);
if ((l_Y_1070 == NULL))
{
{ R23 rv1071 = r_NO_MVAL();
return rv1071; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1070))).f_KIND == g_Y_TYPE))
{
l_T_1060 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1058))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1058))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1070))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1070))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1070))).f_KIND == g_Y_GEN)))
{
l_T_1060 = ((*(R12 *)rt_nil_check(l_Y_1070))).f_T;
}
else
{
{ R23 rv1072 = r_NO_MVAL();
return rv1072; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1059, rt_str("MIN", 3)) || r_TEQS(l_NAME_1059, rt_str("MAX", 3))))
{
{ R23 rv1073 = r_SOME(((*(R21 *)rt_nil_check(l_A_1058))).f_IV);
return rv1073; }
}
l_T_1060 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1058))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1058))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1059, rt_str("MIN", 3)) || r_TEQS(l_NAME_1059, rt_str("MAX", 3))))))
{
{ R23 rv1074 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1058))).f_A))).f_IV);
return rv1074; }
}
}
{
R14 l_SAVED_CODE_1075; memset(&l_SAVED_CODE_1075, 0, sizeof l_SAVED_CODE_1075);
S_R14(&l_SAVED_CODE_1075, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1076; memset(&rc1076, 0, sizeof rc1076);  rc1076.f_HEAD = NULL; rc1076.f_TAIL = NULL; rc1076; }), 0);
l_T_1060 = (r_EXPR(l_A_1058, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1075, 0);
}
}
else
{
{ R23 rv1077 = r_NO_MVAL();
return rv1077; }
}
if ((l_T_1060 == NULL))
{
{ R23 rv1078 = r_NO_MVAL();
return rv1078; }
}
{ R23 rv1079 = r_TYPE_ATTR_MANIFEST(l_T_1060, l_NAME_1059);
return rv1079; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1080; memset(&l_T_1080, 0, sizeof l_T_1080);
l_T_1080 = r_REAL_TYPE(p_T0);
rt_int l_K_1081; memset(&l_K_1081, 0, sizeof l_K_1081);
l_K_1081 = ((*(R22 *)rt_nil_check(l_T_1080))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1082 = r_STATIC_SIZE(p_T0);
return rv1082; }
}
if ((l_K_1081 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1083 = r_SOME(((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE);
return rv1083; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1084 = r_SOME(((rt_int)2LL));
return rv1084; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1080))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1085 = ((*(R22 *)rt_nil_check(l_T_1080))).f_MLO;
return rv1085; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1080))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1086 = ((*(R22 *)rt_nil_check(l_T_1080))).f_MHI;
return rv1086; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1087 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1087; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1088 = r_SOME(INT64_MAX);
return rv1088; }
}
}
else if ((l_K_1081 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1089 = r_SOME(((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE);
return rv1089; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1090 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE));
return rv1090; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1091 = r_SOME(((rt_int)2LL));
return rv1091; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1092 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1080))).f_SCALE, p_NAME));
return rv1092; }
}
}
else if ((l_K_1081 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1080))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1093 = ((*(R22 *)rt_nil_check(l_T_1080))).f_MLO;
return rv1093; }
}
{ R23 rv1094 = r_SOME(((rt_int)0LL));
return rv1094; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1080))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1095 = ((*(R22 *)rt_nil_check(l_T_1080))).f_MHI;
return rv1095; }
}
{ R23 rv1096 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1080))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1096; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1080))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1097 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1080))).f_BASE))).f_NLITS);
return rv1097; }
}
if (((((*(R22 *)rt_nil_check(l_T_1080))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1080))).f_MHI).f_OK))
{
{ R23 rv1098 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1080))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1080))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1098; }
}
}
}
else if (((l_K_1081 == g_T_STR) || (l_K_1081 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1099 = ((*(R22 *)rt_nil_check(l_T_1080))).f_MLEN;
return rv1099; }
}
}
else if ((l_K_1081 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1100 = r_SOME(((*(R22 *)rt_nil_check(l_T_1080))).f_DIMS);
return rv1100; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1080))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1080))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1080))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1101 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1080))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1080))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1101; }
}
}
}
else if ((l_K_1081 == g_T_REC))
{
{
R24 * l_F_1102; memset(&l_F_1102, 0, sizeof l_F_1102);
l_F_1102 = ((*(R22 *)rt_nil_check(l_T_1080))).f_FIELDS;
R25 * l_B_1103; memset(&l_B_1103, 0, sizeof l_B_1103);
l_B_1103 = ((*(R22 *)rt_nil_check(l_T_1080))).f_ARGS;
for (;;) {
if (((l_F_1102 == NULL) || (l_B_1103 == NULL))) goto L_end1104;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1102))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1102))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1103))).f_ANYARG)
{
{ R23 rv1105 = r_NO_MVAL();
return rv1105; }
}
{ R23 rv1106 = ((*(R25 *)rt_nil_check(l_B_1103))).f_MLO;
return rv1106; }
}
l_B_1103 = ((*(R25 *)rt_nil_check(l_B_1103))).f_NEXT;
}
l_F_1102 = ((*(R24 *)rt_nil_check(l_F_1102))).f_NEXT;
}
RT_B_TICK();
} L_end1104: ;
}
}
{ R23 rv1107 = r_NO_MVAL();
return rv1107; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1108 = ((rt_int)0LL);
{ rt_frame xf1109; if (RT_TRY(xf1109)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1108 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1108 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1108 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1109); } else { RT_POP(xf1109); int xf1109x = rt_xcur;
if (0 || xf1109x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1109x); } }
{ rt_int rv1110 = F->l_R_1108;
return rv1110; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1111 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1111; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1112 = ((rt_int)1LL);
return rv1112; }
}
{ rt_int rv1113 = ((rt_int)0LL);
return rv1113; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1114; memset(&l_K_1114, 0, sizeof l_K_1114);
l_K_1114 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1114 == g_N_INT))
{
{ R26 rv1115 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1115; }
}
else if ((l_K_1114 == g_N_REAL))
{
{ R26 rv1116 = r_REAL_LITERAL(p_E);
return rv1116; }
}
else if ((l_K_1114 == g_N_BOOL))
{
{ R26 rv1117 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1117; }
}
else if ((l_K_1114 == g_N_NIL))
{
{ R26 rv1118 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1118; }
}
else if ((l_K_1114 == g_N_PAREN))
{
{
R26 l_V_1119; memset(&l_V_1119, 0, sizeof l_V_1119);
S_R26(&l_V_1119, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1119).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1119).f_C), 0);
{ R26 rv1120 = l_V_1119;
return rv1120; }
}
}
else if ((l_K_1114 == g_N_STR))
{
{ R26 rv1121 = r_STRING_LITERAL(p_E);
return rv1121; }
}
else if ((l_K_1114 == g_N_BITS))
{
{ R26 rv1122 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1122; }
}
else if ((l_K_1114 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1123 = r_NAME_EXPR(p_E, p_WANT);
return rv1123; }
}
{ R26 rv1124 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1124; }
}
else if ((l_K_1114 == g_N_RECCONS))
{
{ R26 rv1125 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1125; }
}
else if ((l_K_1114 == g_N_ARRCONS))
{
{ R26 rv1126 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1126; }
}
else if ((l_K_1114 == g_N_TYPESPEC))
{
{ R26 rv1127 = r_TYPE_SPECIFIER(p_E);
return rv1127; }
}
else if ((l_K_1114 == g_N_QUAL))
{
{
rt_int l_SAVED_1128; memset(&l_SAVED_1128, 0, sizeof l_SAVED_1128);
l_SAVED_1128 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1129; memset(&l_SAVED_Q_1129, 0, sizeof l_SAVED_Q_1129);
l_SAVED_Q_1129 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1130; memset(&l_V_1130, 0, sizeof l_V_1130);
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
R23 l_P_1131; memset(&l_P_1131, 0, sizeof l_P_1131);
S_R23(&l_P_1131, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1130, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1128;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1129;
{ R26 rv1132 = l_V_1130;
return rv1132; }
}
}
else if ((l_K_1114 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1133; memset(&l_N_1133, 0, sizeof l_N_1133);
l_N_1133 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1133))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1133))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1134 = r_EXPR(l_N_1133, p_WANT);
return rv1134; }
}
}
{ R26 rv1135 = r_NEW_EXPR(p_E, p_WANT);
return rv1135; }
}
else if ((l_K_1114 == g_N_NAME))
{
{ R26 rv1136 = r_NAME_EXPR(p_E, p_WANT);
return rv1136; }
}
else if ((l_K_1114 == g_N_APPLY))
{
{
R12 * l_Y_1137; memset(&l_Y_1137, 0, sizeof l_Y_1137);
l_Y_1137 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1137 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1137))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1137))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1138; memset(&l_N_1138, 0, sizeof l_N_1138);
l_N_1138 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1139; memset(&l_A_1139, 0, sizeof l_A_1139);
l_A_1139 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1139))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1138))).f_A = l_A_1139;
((*(R21 *)rt_nil_check(l_N_1138))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1140 = r_EXPR(l_N_1138, p_WANT);
return rv1140; }
}
}
}
{ R26 rv1141 = r_CALL_EXPR(p_E, p_WANT);
return rv1141; }
}
}
else if ((l_K_1114 == g_N_FIELD))
{
{ R26 rv1142 = r_FIELD_EXPR(p_E);
return rv1142; }
}
else if ((l_K_1114 == g_N_DEREF))
{
{
R26 l_B_1143; memset(&l_B_1143, 0, sizeof l_B_1143);
S_R26(&l_B_1143, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1143).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1144; memset(&l_TT_1144, 0, sizeof l_TT_1144);
l_TT_1144 = r_TARGET((l_B_1143).f_T);
{ R26 rv1145 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1144), (l_B_1143).f_C), l_TT_1144, 1, r_NO_TEXT());
return rv1145; }
}
}
}
else if ((l_K_1114 == g_N_INDEX))
{
{ R26 rv1146 = r_INDEX_EXPR(p_E);
return rv1146; }
}
else if ((l_K_1114 == g_N_SUBSTR))
{
{
R26 l_B_1147; memset(&l_B_1147, 0, sizeof l_B_1147);
S_R26(&l_B_1147, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1148; memset(&l_BT_1148, 0, sizeof l_BT_1148);
l_BT_1148 = r_REAL_TYPE((l_B_1147).f_T);
R10 l_LO_1149; memset(&l_LO_1149, 0, sizeof l_LO_1149);
R10 l_HI_1150; memset(&l_HI_1150, 0, sizeof l_HI_1150);
if (((((*(R22 *)rt_nil_check((l_B_1147).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1151; memset(&l_ARGS_1151, 0, sizeof l_ARGS_1151);
l_ARGS_1151 = r_VAL_ARG(l_B_1147, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1152; memset(&l_Y_1152, 0, sizeof l_Y_1152);
l_Y_1152 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1151, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1152 == NULL)))
{
{ R26 rv1153 = r_CALL_SYM(l_Y_1152, l_ARGS_1151, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1153; }
}
if ((((*(R22 *)rt_nil_check((l_B_1147).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1148))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1148))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1149, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1150, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1148))).f_KIND == g_T_BITS))
{
{ R26 rv1154 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1147).f_C, l_LO_1149, l_HI_1150), r_BITS_TYPE(((rt_int)1LL)));
return rv1154; }
}
{
R22 * l_T_1155; memset(&l_T_1155, 0, sizeof l_T_1155);
l_T_1155 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1155))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1148))).f_BASE;
{ R26 rv1156 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1147).f_C, l_LO_1149, l_HI_1150), l_T_1155);
return rv1156; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1148))).f_KIND == g_T_BITS))
{
{ R26 rv1157 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1147).f_C, l_LO_1149, l_HI_1150), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1157; }
}
{
R22 * l_T_1158; memset(&l_T_1158, 0, sizeof l_T_1158);
l_T_1158 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1158))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1148))).f_BASE;
{ R26 rv1159 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1147).f_C, l_LO_1149, l_HI_1150), l_T_1158);
return rv1159; }
}
}
}
else if ((l_K_1114 == g_N_UNOP))
{
{ R26 rv1160 = r_UNARY(p_E);
return rv1160; }
}
else if ((l_K_1114 == g_N_BINOP))
{
{ R26 rv1161 = r_BINARY(p_E);
return rv1161; }
}
else if ((l_K_1114 == g_N_IN))
{
{ R26 rv1162 = r_IN_EXPR(p_E);
return rv1162; }
}
else if (((l_K_1114 == g_N_ANY) || (l_K_1114 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1114 == g_TS_GEN))
{
{
R21 * l_N_1163; memset(&l_N_1163, 0, sizeof l_N_1163);
l_N_1163 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1163))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1163))).f_NAME))
{
{ R26 rv1164 = r_NAME_EXPR(l_N_1163, p_WANT);
return rv1164; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1114 == g_TS_NAME) || (l_K_1114 == g_TS_ARRAY)) || (l_K_1114 == g_TS_RECORD)) || (l_K_1114 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1165; memset(&l_SAVED_1165, 0, sizeof l_SAVED_1165);
l_SAVED_1165 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1166; memset(&l_SAVED_Q_1166, 0, sizeof l_SAVED_Q_1166);
l_SAVED_Q_1166 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1167; memset(&l_V_1167, 0, sizeof l_V_1167);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1167, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1165;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1166;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1167).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1168 = (l_V_1167).f_C;
return rv1168; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1167).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1167).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1167).f_T));
}
{ R10 rv1169 = (l_V_1167).f_C;
return rv1169; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1170; memset(&l_V_1170, 0, sizeof l_V_1170);
S_R26(&l_V_1170, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1170).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1170).f_T));
}
{ R10 rv1171 = (l_V_1170).f_C;
return rv1171; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1172; memset(&l_T_1172, 0, sizeof l_T_1172);
l_T_1172 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1172))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1172))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1173 = l_T_1172;
return rv1173; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1174; memset(&l_T_1174, 0, sizeof l_T_1174);
S_R10(&l_T_1174, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1175; memset(&l_S_1175, 0, sizeof l_S_1175);
l_S_1175 = rt_b_str_new((l_T_1174).f_LEN, 0);
rt_b_assign(&l_S_1175, r_STR(l_T_1174, (l_T_1174).f_LEN));
rt_int l_POINT_1176; memset(&l_POINT_1176, 0, sizeof l_POINT_1176);
l_POINT_1176 = 0;
rt_int l_DIGITS_1177; memset(&l_DIGITS_1177, 0, sizeof l_DIGITS_1177);
l_DIGITS_1177 = ((rt_int)0LL);
{ rt_int it1179_lo = ((rt_int)0LL), it1179_hi = rt_sub((l_T_1174).f_LEN, ((rt_int)1LL));
for (rt_int it1179 = it1179_lo; it1179 <= it1179_hi; it1179++) {
{
if (rt_b_eq(rt_b_slice(l_S_1175, it1179, it1179), rt_str(".", 1)))
{
l_POINT_1176 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1175, it1179, it1179), rt_str("E", 1)))
{
goto L_end1178;
}
else
{
l_DIGITS_1177 = rt_add(l_DIGITS_1177, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1179 == it1179_hi) break;
} } L_end1178: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1176)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1180 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1174), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1180; }
}
if ((!l_POINT_1176))
{
{ R26 rv1181 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1174)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1181; }
}
{
R22 * l_F_1182; memset(&l_F_1182, 0, sizeof l_F_1182);
l_F_1182 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1183; memset(&l_C_1183, 0, sizeof l_C_1183);
S_R10(&l_C_1183, l_T_1174, 0);
((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE = r_MAX_INT(l_DIGITS_1177, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1175, rt_sub((l_T_1174).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1174).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1183, r_FMT1(rt_str("@0", 2), l_T_1174), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1175, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1183, r_FMT1(rt_str("0@", 2), l_T_1174), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1182))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1184 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1183), l_F_1182);
return rv1184; }
}
{ R26 rv1185 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1183), l_F_1182);
return rv1185; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1186; memset(&l_T_1186, 0, sizeof l_T_1186);
S_R10(&l_T_1186, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1187; memset(&l_S_1187, 0, sizeof l_S_1187);
l_S_1187 = rt_b_str_new((l_T_1186).f_LEN, 0);
rt_b_assign(&l_S_1187, r_STR(l_T_1186, (l_T_1186).f_LEN));
rt_int l_INT_1188; memset(&l_INT_1188, 0, sizeof l_INT_1188);
l_INT_1188 = ((rt_int)0LL);
rt_int l_SIG_1189; memset(&l_SIG_1189, 0, sizeof l_SIG_1189);
l_SIG_1189 = 0;
rt_int l_POINT_1190; memset(&l_POINT_1190, 0, sizeof l_POINT_1190);
l_POINT_1190 = 0;
rt_int l_LEAD_1191; memset(&l_LEAD_1191, 0, sizeof l_LEAD_1191);
l_LEAD_1191 = ((rt_int)0LL);
rt_int l_I_1192; memset(&l_I_1192, 0, sizeof l_I_1192);
l_I_1192 = ((rt_int)0LL);
rt_int l_EXP_1193; memset(&l_EXP_1193, 0, sizeof l_EXP_1193);
l_EXP_1193 = ((rt_int)0LL);
for (;;) {
if ((l_I_1192 >= (l_T_1186).f_LEN)) goto L_end1194;
{
if (rt_b_eq(rt_b_slice(l_S_1187, l_I_1192, l_I_1192), rt_str("E", 1)))
{
goto L_end1194;
}
else if (rt_b_eq(rt_b_slice(l_S_1187, l_I_1192, l_I_1192), rt_str(".", 1)))
{
l_POINT_1190 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1187, l_I_1192, l_I_1192), rt_str("0", 1))))
{
if ((!l_POINT_1190))
{
l_INT_1188 = rt_add(l_INT_1188, ((rt_int)1LL));
}
l_SIG_1189 = 1;
}
else if ((l_SIG_1189 && (!l_POINT_1190)))
{
l_INT_1188 = rt_add(l_INT_1188, ((rt_int)1LL));
}
else if ((l_POINT_1190 && (!l_SIG_1189)))
{
l_LEAD_1191 = rt_add(l_LEAD_1191, ((rt_int)1LL));
}
l_I_1192 = rt_add(l_I_1192, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1194: ;
if ((!l_SIG_1189))
{
{ rt_int rv1195 = 1;
return rv1195; }
}
if ((l_I_1192 < (l_T_1186).f_LEN))
{
{
rt_int l_NEG_1196; memset(&l_NEG_1196, 0, sizeof l_NEG_1196);
l_NEG_1196 = 0;
l_I_1192 = rt_add(l_I_1192, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1187, l_I_1192, l_I_1192), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1187, l_I_1192, l_I_1192), rt_str("+", 1))))
{
l_NEG_1196 = rt_b_eq(rt_b_slice(l_S_1187, l_I_1192, l_I_1192), rt_str("-", 1));
l_I_1192 = rt_add(l_I_1192, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1192 >= (l_T_1186).f_LEN)) goto L_end1197;
{
if ((l_EXP_1193 <= ((rt_int)100000LL)))
{
l_EXP_1193 = rt_add(rt_mul(l_EXP_1193, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1187, l_I_1192, l_I_1192)), ((rt_int)48LL))));
}
l_I_1192 = rt_add(l_I_1192, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1197: ;
if (l_NEG_1196)
{
l_EXP_1193 = rt_neg(l_EXP_1193);
}
}
}
{
rt_int l_D_1198; memset(&l_D_1198, 0, sizeof l_D_1198);
l_D_1198 = rt_add(rt_sub(l_INT_1188, ((rt_int)1LL)), l_EXP_1193);
rt_int l_LIM_1199; memset(&l_LIM_1199, 0, sizeof l_LIM_1199);
l_LIM_1199 = ((rt_int)308LL);
if ((l_INT_1188 == ((rt_int)0LL)))
{
l_D_1198 = rt_add(rt_sub(rt_neg(l_LEAD_1191), ((rt_int)1LL)), l_EXP_1193);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1199 = ((rt_int)38LL);
}
{ rt_int rv1200 = ((l_D_1198 <= l_LIM_1199) && (l_D_1198 >= rt_add(rt_neg(l_LIM_1199), ((rt_int)1LL))));
return rv1200; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1201; memset(&l_T_1201, 0, sizeof l_T_1201);
S_R10(&l_T_1201, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1202; memset(&l_S_1202, 0, sizeof l_S_1202);
l_S_1202 = rt_b_str_new((l_T_1201).f_LEN, 0);
rt_b_assign(&l_S_1202, r_STR(l_T_1201, (l_T_1201).f_LEN));
rt_int l_SIG_1203; memset(&l_SIG_1203, 0, sizeof l_SIG_1203);
l_SIG_1203 = ((rt_int)0LL);
rt_int l_FRAC_1204; memset(&l_FRAC_1204, 0, sizeof l_FRAC_1204);
l_FRAC_1204 = ((rt_int)0LL);
rt_int l_POINT_1205; memset(&l_POINT_1205, 0, sizeof l_POINT_1205);
l_POINT_1205 = 0;
rt_int l_EXP_1206; memset(&l_EXP_1206, 0, sizeof l_EXP_1206);
l_EXP_1206 = ((rt_int)0LL);
rt_int l_I_1207; memset(&l_I_1207, 0, sizeof l_I_1207);
l_I_1207 = ((rt_int)0LL);
for (;;) {
if ((l_I_1207 >= (l_T_1201).f_LEN)) goto L_end1208;
{
if (rt_b_eq(rt_b_slice(l_S_1202, l_I_1207, l_I_1207), rt_str("E", 1)))
{
goto L_end1208;
}
if (rt_b_eq(rt_b_slice(l_S_1202, l_I_1207, l_I_1207), rt_str(".", 1)))
{
l_POINT_1205 = 1;
}
else
{
if (((l_SIG_1203 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1202, l_I_1207, l_I_1207), rt_str("0", 1)))))
{
l_SIG_1203 = rt_add(l_SIG_1203, ((rt_int)1LL));
}
if (l_POINT_1205)
{
l_FRAC_1204 = rt_add(l_FRAC_1204, ((rt_int)1LL));
}
}
l_I_1207 = rt_add(l_I_1207, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1208: ;
if ((rt_sub(l_I_1207, r_BOOL_INT(l_POINT_1205)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1207 < (l_T_1201).f_LEN))
{
{
rt_int l_NEG_1209; memset(&l_NEG_1209, 0, sizeof l_NEG_1209);
l_NEG_1209 = 0;
l_I_1207 = rt_add(l_I_1207, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1202, l_I_1207, l_I_1207), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1202, l_I_1207, l_I_1207), rt_str("+", 1))))
{
l_NEG_1209 = rt_b_eq(rt_b_slice(l_S_1202, l_I_1207, l_I_1207), rt_str("-", 1));
l_I_1207 = rt_add(l_I_1207, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1207 >= (l_T_1201).f_LEN)) goto L_end1210;
{
if ((l_EXP_1206 <= ((rt_int)1000LL)))
{
l_EXP_1206 = rt_sub(rt_add(rt_mul(l_EXP_1206, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1202, l_I_1207, l_I_1207))), ((rt_int)48LL));
}
l_I_1207 = rt_add(l_I_1207, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1210: ;
if ((l_EXP_1206 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1209)
{
l_EXP_1206 = rt_neg(l_EXP_1206);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1203 > ((rt_int)0LL)))
{
{
rt_int l_P10_1211; memset(&l_P10_1211, 0, sizeof l_P10_1211);
l_P10_1211 = rt_sub(rt_add(rt_sub(l_SIG_1203, ((rt_int)1LL)), l_EXP_1206), l_FRAC_1204);
rt_int l_BITS_1212; memset(&l_BITS_1212, 0, sizeof l_BITS_1212);
l_BITS_1212 = rt_add(rt_quot((rt_mul(l_P10_1211, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1211 < ((rt_int)0LL)))
{
l_BITS_1212 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1211), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1212 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1213; memset(&l_CS_1213, 0, sizeof l_CS_1213);
l_CS_1213 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1214; memset(&l_P_1214, 0, sizeof l_P_1214);
l_P_1214 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1215; memset(&l_S_1215, 0, sizeof l_S_1215);
S_R10(&l_S_1215, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1213 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1216; memset(&l_Y_1216, 0, sizeof l_Y_1216);
l_Y_1216 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1216 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1216))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1213 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1213)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1213 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1213)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1213))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1214 == NULL)) goto L_end1217;
{
if ((((*(R21 *)rt_nil_check(l_P_1214))).f_IV == g_K_STR))
{
if ((l_CS_1213 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1215, r_CAT(l_S_1215, ((*(R21 *)rt_nil_check(l_P_1214))).f_NAME), 0);
}
else
{
{
R10 l_Q_1218; memset(&l_Q_1218, 0, sizeof l_Q_1218);
S_R10(&l_Q_1218, ((*(R21 *)rt_nil_check(l_P_1214))).f_NAME, 0);
rstr l_QS_1219; memset(&l_QS_1219, 0, sizeof l_QS_1219);
l_QS_1219 = rt_b_str_new((l_Q_1218).f_LEN, 0);
rt_b_assign(&l_QS_1219, r_STR(l_Q_1218, (l_Q_1218).f_LEN));
{ rt_int it1221_lo = ((rt_int)0LL), it1221_hi = rt_sub((l_Q_1218).f_LEN, ((rt_int)1LL));
for (rt_int it1221 = it1221_lo; it1221 <= it1221_hi; it1221++) {
{
{
R10 l_LIT_1222; memset(&l_LIT_1222, 0, sizeof l_LIT_1222);
R12 * l_Y_1223; memset(&l_Y_1223, 0, sizeof l_Y_1223);
if (rt_b_eq(rt_b_slice(l_QS_1219, it1221, it1221), rt_str("'", 1)))
{
S_R10(&l_LIT_1222, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1222, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1219, it1221, it1221)), rt_str("'", 1))), 0);
}
l_Y_1223 = r_FIND_LITERAL(l_LIT_1222, l_CS_1213);
if ((l_Y_1223 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1214))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1219, it1221, it1221)));
}
S_R10(&l_S_1215, r_CATS(l_S_1215, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1223))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1221 == it1221_hi) break;
} } L_end1220: ;
}
}
}
else
{
{
R12 * l_Y_1224; memset(&l_Y_1224, 0, sizeof l_Y_1224);
l_Y_1224 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1214))).f_NAME, l_CS_1213);
if ((l_Y_1224 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1214))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1214))).f_NAME);
}
S_R10(&l_S_1215, r_CATS(l_S_1215, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1224))).f_MV)), 0);
}
}
l_P_1214 = ((*(R21 *)rt_nil_check(l_P_1214))).f_NEXT;
}
RT_B_TICK();
} L_end1217: ;
{
R22 * l_T_1225; memset(&l_T_1225, 0, sizeof l_T_1225);
l_T_1225 = r_STR_TYPE(r_NUM((l_S_1215).f_LEN), r_SOME((l_S_1215).f_LEN));
((*(R22 *)rt_nil_check(l_T_1225))).f_BASE = l_CS_1213;
{ R26 rv1226 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1215), r_NUM((l_S_1215).f_LEN)), l_T_1225);
return rv1226; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1227; memset(&l_TS_1227, 0, sizeof l_TS_1227);
l_TS_1227 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1227))).f_NAME, p_NAME, 0);
{ R22 * rv1228 = r_RESOLVE(l_TS_1227);
return rv1228; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1229; memset(&l_Y_1229, 0, sizeof l_Y_1229);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1230; memset(&l_WT_1230, 0, sizeof l_WT_1230);
l_WT_1230 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1230))).f_KIND == g_T_ENUM))
{
l_Y_1229 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1230);
if ((!(l_Y_1229 == NULL)))
{
{ R26 rv1231 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1229))).f_MV), r_ENUM_RESULT(l_Y_1229, p_WANT));
return rv1231; }
}
}
}
}
l_Y_1229 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1232; memset(&l_FOUND_1232, 0, sizeof l_FOUND_1232);
l_FOUND_1232 = NULL;
rt_int l_N_1233; memset(&l_N_1233, 0, sizeof l_N_1233);
l_N_1233 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1229 == NULL)) goto L_end1234;
{
if ((((*(R12 *)rt_nil_check(l_Y_1229))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1232 == NULL))
{
l_FOUND_1232 = l_Y_1229;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1232))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1229))).f_T))).f_BASE)))
{
l_N_1233 = rt_add(l_N_1233, ((rt_int)1LL));
}
}
l_Y_1229 = r_LOOKUP_NEXT(l_Y_1229);
}
RT_B_TICK();
} L_end1234: ;
if ((l_FOUND_1232 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1233 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1235 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1232))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1232))).f_T);
return rv1235; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1236 = p_WANT;
return rv1236; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1237; memset(&l_T_1237, 0, sizeof l_T_1237);
l_T_1237 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1237))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1238 = l_T_1237;
return rv1238; }
}
}
{ R22 * rv1239 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1239; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1240; memset(&l_Y_1240, 0, sizeof l_Y_1240);
l_Y_1240 = r_LOOKUP(p_NAME);
if ((l_Y_1240 == NULL))
{
{ rt_int rv1241 = 0;
return rv1241; }
}
{ rt_int rv1242 = (((((*(R12 *)rt_nil_check(l_Y_1240))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1240))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1240))).f_KIND == g_Y_ROUTINE));
return rv1242; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1243; memset(&l_Y_1243, 0, sizeof l_Y_1243);
l_Y_1243 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1243 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1244; memset(&l_WRITABLE_1244, 0, sizeof l_WRITABLE_1244);
l_WRITABLE_1244 = r_CHECK_IMPORTED(l_Y_1243, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1245 = r_MKLV(r_OBJ_ACCESS(l_Y_1243), ((*(R12 *)rt_nil_check(l_Y_1243))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_VAR) && l_WRITABLE_1244), r_NO_TEXT());
return rv1245; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_GEN))
{
{ R26 rv1246 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1243))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1243))).f_T);
return rv1246; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1247 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1247; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1243))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1248; memset(&l_N_1248, 0, sizeof l_N_1248);
l_N_1248 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1248))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1249 = r_CALL_EXPR(l_N_1248, p_WANT);
return rv1249; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1250; memset(&l_A_1250, 0, sizeof l_A_1250);
l_A_1250 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1250)))
{
{ R26 rv1251 = r_EXPR(l_A_1250, NULL);
return rv1251; }
}
if ((((*(R21 *)rt_nil_check(l_A_1250))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1252; memset(&l_B_1252, 0, sizeof l_B_1252);
S_R26(&l_B_1252, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_A), 0);
R10 l_I_1253; memset(&l_I_1253, 0, sizeof l_I_1253);
S_R10(&l_I_1253, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1250))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1252).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1254 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1252).f_C, l_I_1253, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1252).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1254; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1255 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1252).f_C, l_I_1253, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1252).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1255; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1250))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_A))).f_NAME))
{
{ R26 rv1256 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1250))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1256; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1250))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1257; memset(&l_Y_1257, 0, sizeof l_Y_1257);
l_Y_1257 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1250))).f_NAME);
if ((!(l_Y_1257 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1257))).f_KIND == g_Y_TYPE))
{
{ R26 rv1258 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1250))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1258; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1250))).f_NAME))
{
{ R26 rv1259 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1250))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1259; }
}
}
}
{
R26 l_B_1260; memset(&l_B_1260, 0, sizeof l_B_1260);
S_R26(&l_B_1260, r_EXPR(l_A_1250, NULL), 0);
R22 * l_BT_1261; memset(&l_BT_1261, 0, sizeof l_BT_1261);
l_BT_1261 = (l_B_1260).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1261))).f_KIND == g_T_REC))
{
{
R24 * l_F_1262; memset(&l_F_1262, 0, sizeof l_F_1262);
l_F_1262 = r_FIND_VFIELD(l_BT_1261, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1262 == NULL)))
{
r_CHECK_VARIANT(l_F_1262, l_BT_1261, l_A_1250, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1263 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1260).f_C, ((*(R24 *)rt_nil_check(l_F_1262))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1262))).f_T, ((l_B_1260).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1262))).f_KIND == ((rt_int)0LL))), (l_B_1260).f_C);
return rv1263; }
}
}
}
{ R26 rv1264 = r_ATTRIBUTE(l_B_1260, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1264; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1265 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1265; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1266 = 1;
return rv1266; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1267 = 1;
return rv1267; }
}
{
rstr l_S_1268; memset(&l_S_1268, 0, sizeof l_S_1268);
l_S_1268 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1268, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1270_lo = ((rt_int)0LL), it1270_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1270 = it1270_lo; it1270 <= it1270_hi; it1270++) {
{
if (rt_b_eq(rt_b_slice(l_S_1268, it1270, it1270), rt_str(".", 1)))
{
{ rt_int rv1271 = 0;
return rv1271; }
}
}
RT_B_TICK();
if (it1270 == it1270_hi) break;
} } L_end1269: ;
}
{ rt_int rv1272 = 1;
return rv1272; }
}
{ rt_int rv1273 = 0;
return rv1273; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1274 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1274; }
}
{ rt_int rv1275 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1275; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1276 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1276; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1277; memset(&l_TAGV_1277, 0, sizeof l_TAGV_1277);
S_R23(&l_TAGV_1277, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1277).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1277).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1278; memset(&l_F_1278, 0, sizeof l_F_1278);
l_F_1278 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1279; memset(&l_A_1279, 0, sizeof l_A_1279);
l_A_1279 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1278 == NULL)) goto L_end1280;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1278))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1279 == NULL))
{
{ R23 rv1281 = r_NO_MVAL();
return rv1281; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1278))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1279))).f_ANYARG)
{
{ R23 rv1282 = r_NO_MVAL();
return rv1282; }
}
{ R23 rv1283 = ((*(R25 *)rt_nil_check(l_A_1279))).f_MLO;
return rv1283; }
}
l_A_1279 = ((*(R25 *)rt_nil_check(l_A_1279))).f_NEXT;
}
l_F_1278 = ((*(R24 *)rt_nil_check(l_F_1278))).f_NEXT;
}
RT_B_TICK();
} L_end1280: ;
{ R23 rv1284 = r_NO_MVAL();
return rv1284; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1285; memset(&l_P_1285, 0, sizeof l_P_1285);
l_P_1285 = p_L;
for (;;) {
if ((l_P_1285 == NULL)) goto L_end1286;
{
if ((((*(R21 *)rt_nil_check(l_P_1285))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1285))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1285))).f_B, p_T)).f_V)))
{
{ rt_int rv1287 = 1;
return rv1287; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1285, p_T)).f_V == p_V))
{
{ rt_int rv1288 = 1;
return rv1288; }
}
l_P_1285 = ((*(R21 *)rt_nil_check(l_P_1285))).f_NEXT;
}
RT_B_TICK();
} L_end1286: ;
{ rt_int rv1289 = 0;
return rv1289; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1290 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1290; }
}
{ R26 rv1291 = r_EXPR(p_E, NULL);
return rv1291; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1292; memset(&l_A_1292, 0, sizeof l_A_1292);
S_R26(&l_A_1292, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1293; memset(&l_I_1293, 0, sizeof l_I_1293);
S_R10(&l_I_1293, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1292).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1294 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1292).f_C, (l_A_1292).f_C, l_I_1293, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1292).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1294; }
}
}
}
{ R26 rv1295 = r_INDEX_EXPR2(p_E);
return rv1295; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1296; memset(&l_B_1296, 0, sizeof l_B_1296);
S_R26(&l_B_1296, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1297; memset(&l_T_1297, 0, sizeof l_T_1297);
l_T_1297 = r_REAL_TYPE((l_B_1296).f_T);
R21 * l_S_1298; memset(&l_S_1298, 0, sizeof l_S_1298);
l_S_1298 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1299; memset(&l_IX_1299, 0, sizeof l_IX_1299);
S_R10(&l_IX_1299, r_MK(rt_str("", 0)), 0);
rt_int l_N_1300; memset(&l_N_1300, 0, sizeof l_N_1300);
l_N_1300 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1297))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1298 == NULL)) goto L_end1301;
{
if ((l_N_1300 > ((rt_int)0LL)))
{
S_R10(&l_IX_1299, r_CATS(l_IX_1299, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1299, r_CAT(l_IX_1299, r_INT_EXPR(l_S_1298)), 0);
l_N_1300 = rt_add(l_N_1300, ((rt_int)1LL));
l_S_1298 = ((*(R21 *)rt_nil_check(l_S_1298))).f_NEXT;
}
RT_B_TICK();
} L_end1301: ;
if ((!(l_N_1300 == ((*(R22 *)rt_nil_check(l_T_1297))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1300 == ((rt_int)1LL)))
{
{ R26 rv1302 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1296).f_C, l_IX_1299, (l_B_1296).f_C, (l_B_1296).f_C), ((*(R22 *)rt_nil_check(l_T_1297))).f_ELEM, (l_B_1296).f_LVAL, r_NO_TEXT());
return rv1302; }
}
{
R10 l_X_1303; memset(&l_X_1303, 0, sizeof l_X_1303);
S_R10(&l_X_1303, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1296).f_C, r_NUM(l_N_1300), (l_B_1296).f_C, (l_B_1296).f_C), 0);
{ R26 rv1304 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1303, l_IX_1299), ((*(R22 *)rt_nil_check(l_T_1297))).f_ELEM, (l_B_1296).f_LVAL, r_NO_TEXT());
return rv1304; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1305 = r_MKN(rt_str("NEGATE_", 7));
return rv1305; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1306 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1306; }
}
{ R10 rv1307 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1307; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1308 = r_MKN(rt_str("ADD_", 4));
return rv1308; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1309 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1309; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1310 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1310; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1311 = r_MKN(rt_str("DIVIDE_", 7));
return rv1311; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1312 = r_MKN(rt_str("MODULUS_", 8));
return rv1312; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1313 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1313; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1314 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1314; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1315 = r_MKN(rt_str("EQUAL_", 6));
return rv1315; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1316 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1316; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1317 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1317; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1318 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1318; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1319 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1319; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1320 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1320; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1321 = r_MKN(rt_str("AND_", 4));
return rv1321; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1322 = r_MKN(rt_str("OR_", 3));
return rv1322; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1323 = r_MKN(rt_str("XOR_", 4));
return rv1323; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1324 = r_MKN(rt_str("IMPLIES_", 8));
return rv1324; }
}
{ R10 rv1325 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1325; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1326; memset(&l_A_1326, 0, sizeof l_A_1326);
l_A_1326 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1326)), ({ R27 rc1327; memset(&rc1327, 0, sizeof rc1327);  rc1327.f_E = NULL; S_R26(&rc1327.f_V, p_V, 0); rc1327.f_HAVE = 1; rc1327.f_MODE = g_M_IN; rc1327.f_NEXT = p_NEXT; rc1327; }), 0);
{ R27 * rv1328 = l_A_1326;
return rv1328; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1329; memset(&l_A_1329, 0, sizeof l_A_1329);
l_A_1329 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1329)), ({ R27 rc1330; memset(&rc1330, 0, sizeof rc1330);  rc1330.f_E = p_E; S_R26(&rc1330.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1330.f_HAVE = 0; rc1330.f_MODE = p_MODE; rc1330.f_NEXT = p_NEXT; rc1330; }), 0);
{ R27 * rv1331 = l_A_1329;
return rv1331; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1332; memset(&l_Y_1332, 0, sizeof l_Y_1332);
l_Y_1332 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1332 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1332 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1333 = l_Y_1332;
return rv1333; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1334; memset(&l_Y_1334, 0, sizeof l_Y_1334);
l_Y_1334 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1334 == NULL)) goto L_end1335;
{
if ((((*(R12 *)rt_nil_check(l_Y_1334))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1336 = 1;
return rv1336; }
}
l_Y_1334 = r_LOOKUP_NEXT(l_Y_1334);
}
RT_B_TICK();
} L_end1335: ;
l_Y_1334 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1334 == NULL)) goto L_end1337;
{
if ((((*(R12 *)rt_nil_check(l_Y_1334))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1338 = 1;
return rv1338; }
}
l_Y_1334 = r_LOOKUP_NEXT(l_Y_1334);
}
RT_B_TICK();
} L_end1337: ;
{ rt_int rv1339 = 0;
return rv1339; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1340; memset(&l_Q_1340, 0, sizeof l_Q_1340);
l_Q_1340 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1341; memset(&l_R_1341, 0, sizeof l_R_1341);
l_R_1341 = NULL;
if ((l_Q_1340 == NULL))
{
{ R27 * rv1342 = NULL;
return rv1342; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1340))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1341 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1340))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1340))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1340))).f_B == NULL)))
{
l_R_1341 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1340))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1341);
}
{ R27 * rv1343 = l_R_1341;
return rv1343; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1344; memset(&l_ARGS_1344, 0, sizeof l_ARGS_1344);
l_ARGS_1344 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1345; memset(&l_Y_1345, 0, sizeof l_Y_1345);
l_Y_1345 = r_USER_OPERATOR(p_NAME, l_ARGS_1344, p_LINE);
if ((l_Y_1345 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1346 = r_CALL_SYM(l_Y_1345, l_ARGS_1344, p_LINE);
return rv1346; }
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
{ R10 rv1347 = p_C;
return rv1347; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1348 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1348; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1349 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1349; }
}
{ R10 rv1350 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1350; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1351 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1351; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1352; memset(&l_RT_1352, 0, sizeof l_RT_1352);
l_RT_1352 = r_REAL_TYPE(p_T);
R22 * l_VT_1353; memset(&l_VT_1353, 0, sizeof l_VT_1353);
l_VT_1353 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1353))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_PTR)))
{
{ R10 rv1354 = (p_V).f_C;
return rv1354; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1353))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1353)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1355 = (p_V).f_C;
return rv1355; }
}
if ((!r_SAME_CLASS(l_RT_1352, l_VT_1353)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1353), (r_TYPE_NAME(l_VT_1353)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1352), (r_TYPE_NAME(l_RT_1352)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1352))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1352))).f_SCALE))
{
{ R10 rv1356 = r_RANGE_CHECK(l_RT_1352, (p_V).f_C, p_SELF);
return rv1356; }
}
{ R10 rv1357 = r_RANGE_CHECK(l_RT_1352, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1352))).f_SCALE)), p_SELF);
return rv1357; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1352))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1353))).f_SCALE)))
{
{ R10 rv1358 = r_RANGE_CHECK(l_RT_1352, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1352))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1358; }
}
{ R10 rv1359 = r_RANGE_CHECK(l_RT_1352, (p_V).f_C, p_SELF);
return rv1359; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1352))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1352) || r_HAS_VALUES(l_VT_1353)))) && (!r_SAME_REPS(l_RT_1352, l_VT_1353))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1360 = r_RANGE_CHECK(l_RT_1352, (p_V).f_C, p_SELF);
return rv1360; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1352, l_VT_1353, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1352))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1353))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1352))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1353))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1352), r_TARGET(l_VT_1353))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1352)) && (!r_HAS_ANY(l_VT_1353))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1352))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1353))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1352))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1352))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1353))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1361 = (p_V).f_C;
return rv1361; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1362; memset(&l_ARGS_1362, 0, sizeof l_ARGS_1362);
l_ARGS_1362 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1363; memset(&l_Y_1363, 0, sizeof l_Y_1363);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1364; memset(&l_SAVED_Q_1364, 0, sizeof l_SAVED_Q_1364);
l_SAVED_Q_1364 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1365; memset(&l_X_1365, 0, sizeof l_X_1365);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1365 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1364;
if ((!(l_X_1365 == NULL)))
{
{
R27 * l_P_1366; memset(&l_P_1366, 0, sizeof l_P_1366);
l_P_1366 = l_X_1365;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1366))).f_NEXT == NULL)) goto L_end1367;
{
l_P_1366 = ((*(R27 *)rt_nil_check(l_P_1366))).f_NEXT;
}
RT_B_TICK();
} L_end1367: ;
((*(R27 *)rt_nil_check(l_P_1366))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1362))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1362))).f_NEXT = l_X_1365;
}
}
}
}
{
R27 * l_LAST_1368; memset(&l_LAST_1368, 0, sizeof l_LAST_1368);
l_LAST_1368 = l_ARGS_1362;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1368))).f_NEXT == NULL)) goto L_end1369;
{
l_LAST_1368 = ((*(R27 *)rt_nil_check(l_LAST_1368))).f_NEXT;
}
RT_B_TICK();
} L_end1369: ;
((*(R27 *)rt_nil_check(l_LAST_1368))).f_MODE = g_M_OUT;
l_Y_1363 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1362, p_LINE, 0);
if ((l_Y_1363 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1368))).f_MODE = g_M_INOUT;
l_Y_1363 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1362, p_LINE, 0);
}
}
if ((l_Y_1363 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1370 = r_CATS((r_CALL_SYM(l_Y_1363, l_ARGS_1362, p_LINE)).f_C, rt_str(";", 1));
return rv1370; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1371 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1371; }
}
}
{ R10 rv1372 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1372; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1373 = 1;
return rv1373; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1374 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1374; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1375; memset(&l_F_1375, 0, sizeof l_F_1375);
l_F_1375 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1375 == NULL)) goto L_end1376;
{
if ((((*(R24 *)rt_nil_check(l_F_1375))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1375))).f_T))
{
{ rt_int rv1377 = 1;
return rv1377; }
}
}
l_F_1375 = ((*(R24 *)rt_nil_check(l_F_1375))).f_NEXT;
}
RT_B_TICK();
} L_end1376: ;
}
}
{ rt_int rv1378 = 0;
return rv1378; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1379 = 0;
return rv1379; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1380 = 0;
return rv1380; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1381 = 0;
return rv1381; }
}
{ rt_int rv1382 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1382; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1383 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1383; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1384; memset(&l_D_1384, 0, sizeof l_D_1384);
S_R10(&l_D_1384, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1385; memset(&l_S_1385, 0, sizeof l_S_1385);
S_R10(&l_S_1385, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1386; memset(&l_I_1386, 0, sizeof l_I_1386);
S_R10(&l_I_1386, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1387; memset(&l_N_1387, 0, sizeof l_N_1387);
S_R10(&l_N_1387, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1388; memset(&l_VE_1388, 0, sizeof l_VE_1388);
l_VE_1388 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1389; memset(&l_R_1389, 0, sizeof l_R_1389);
S_R10(&l_R_1389, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1384, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1389, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1389, l_S_1385, p_RV), 0);
S_R10(&l_R_1389, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1389, l_N_1387, l_D_1384, l_D_1384), 0);
S_R10(&l_R_1389, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1389, l_S_1385, l_S_1385), 0);
S_R10(&l_R_1389, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1389, l_I_1386, l_N_1387, l_D_1384), 0);
S_R10(&l_R_1389, r_FMT2(rt_str("@@->hi);", 8), l_R_1389, l_D_1384), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1389, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1389, l_I_1386, l_I_1386, l_I_1386), 0);
S_R10(&l_R_1389, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1389, l_I_1386, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1385, l_I_1386), r_NO_TEXT())), 0);
}
S_R10(&l_R_1389, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1389, l_I_1386, l_I_1386, l_I_1386), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1389, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1389, l_I_1386, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1388, r_FMT2(rt_str("@->p[@]", 7), l_D_1384, l_I_1386), r_FMT2(rt_str("@.p[@]", 6), l_S_1385, l_I_1386), p_LINE)), 0);
}
else
{
S_R10(&l_R_1389, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1389, l_I_1386, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1384, l_I_1386), r_FMT2(rt_str("@.p[@]", 6), l_S_1385, l_I_1386))), 0);
}
{ R10 rv1390 = l_R_1389;
return rv1390; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1391; memset(&l_D_1391, 0, sizeof l_D_1391);
S_R10(&l_D_1391, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1392; memset(&l_S_1392, 0, sizeof l_S_1392);
S_R10(&l_S_1392, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1393; memset(&l_F_1393, 0, sizeof l_F_1393);
l_F_1393 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1394; memset(&l_R_1394, 0, sizeof l_R_1394);
S_R10(&l_R_1394, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1391, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1394, r_FMT3(rt_str("@@ = @;", 7), l_R_1394, l_S_1392, p_RV), 0);
for (;;) {
if ((l_F_1393 == NULL)) goto L_end1395;
{
{
R10 l_DF_1396; memset(&l_DF_1396, 0, sizeof l_DF_1396);
S_R10(&l_DF_1396, r_FMT2(rt_str("@->@", 4), l_D_1391, ((*(R24 *)rt_nil_check(l_F_1393))).f_CNAME), 0);
R10 l_SF_1397; memset(&l_SF_1397, 0, sizeof l_SF_1397);
S_R10(&l_SF_1397, r_FMT2(rt_str("@.@", 3), l_S_1392, ((*(R24 *)rt_nil_check(l_F_1393))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1393))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1393))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1394, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1394, l_DF_1396, l_SF_1397), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1393))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1394, r_FMT3(rt_str("@ @ = @;", 8), l_R_1394, l_DF_1396, l_SF_1397), 0);
}
else
{
S_R10(&l_R_1394, r_FMT2(rt_str("@ @", 3), l_R_1394, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1393))).f_T, ((*(R24 *)rt_nil_check(l_F_1393))).f_T, l_DF_1396, l_SF_1397, p_LINE)), 0);
}
}
l_F_1393 = ((*(R24 *)rt_nil_check(l_F_1393))).f_NEXT;
}
RT_B_TICK();
} L_end1395: ;
{ R10 rv1398 = r_CATS(l_R_1394, rt_str(" }", 2));
return rv1398; }
}
}
{ R10 rv1399 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1399; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1400; memset(&l_ARGS_1400, 0, sizeof l_ARGS_1400);
l_ARGS_1400 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1401; memset(&l_Y_1401, 0, sizeof l_Y_1401);
l_Y_1401 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1400, p_LINE);
if ((l_Y_1401 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1402 = (r_CALL_SYM(l_Y_1401, l_ARGS_1400, p_LINE)).f_C;
return rv1402; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1403; memset(&l_X_1403, 0, sizeof l_X_1403);
S_R10(&l_X_1403, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1404; memset(&l_Z_1404, 0, sizeof l_Z_1404);
S_R10(&l_Z_1404, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1405; memset(&l_I_1405, 0, sizeof l_I_1405);
S_R10(&l_I_1405, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1406; memset(&l_N_1406, 0, sizeof l_N_1406);
S_R10(&l_N_1406, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1407; memset(&l_R_1407, 0, sizeof l_R_1407);
S_R10(&l_R_1407, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1403, p_A, l_Z_1404), 0);
S_R10(&l_R_1407, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1407, p_B, l_I_1405, l_N_1406), 0);
S_R10(&l_R_1407, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1407, l_X_1403, l_X_1403, l_Z_1404), 0);
S_R10(&l_R_1407, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1407, l_Z_1404, l_I_1405, l_N_1406), 0);
S_R10(&l_R_1407, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1407, l_X_1403, l_X_1403), 0);
S_R10(&l_R_1407, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1407, l_I_1405, l_I_1405, l_I_1405), 0);
S_R10(&l_R_1407, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1407, l_I_1405, l_I_1405, l_I_1405), 0);
S_R10(&l_R_1407, r_FMT2(rt_str("@@;", 3), l_R_1407, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1403, l_I_1405), r_FMT2(rt_str("@.p[@]", 6), l_Z_1404, l_I_1405), p_LINE)), 0);
{ R10 rv1408 = r_FMT2(rt_str("@ @r; })", 8), l_R_1407, l_I_1405);
return rv1408; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1409; memset(&l_X_1409, 0, sizeof l_X_1409);
S_R10(&l_X_1409, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1410; memset(&l_Z_1410, 0, sizeof l_Z_1410);
S_R10(&l_Z_1410, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1411; memset(&l_F_1411, 0, sizeof l_F_1411);
l_F_1411 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1412; memset(&l_R_1412, 0, sizeof l_R_1412);
S_R10(&l_R_1412, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1409, p_A, l_Z_1410), 0);
R10 l_EQ_1413; memset(&l_EQ_1413, 0, sizeof l_EQ_1413);
S_R10(&l_EQ_1413, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1412, r_FMT2(rt_str("@@;", 3), l_R_1412, p_B), 0);
for (;;) {
if ((l_F_1411 == NULL)) goto L_end1414;
{
{
R10 l_C_1415; memset(&l_C_1415, 0, sizeof l_C_1415);
S_R10(&l_C_1415, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1411))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1409, ((*(R24 *)rt_nil_check(l_F_1411))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1410, ((*(R24 *)rt_nil_check(l_F_1411))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1411))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1413, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1413, r_VARIANT_COND(l_F_1411, p_T, l_X_1409), l_C_1415), 0);
}
else
{
S_R10(&l_EQ_1413, r_FMT2(rt_str("@ && @", 6), l_EQ_1413, l_C_1415), 0);
}
}
l_F_1411 = ((*(R24 *)rt_nil_check(l_F_1411))).f_NEXT;
}
RT_B_TICK();
} L_end1414: ;
{ R10 rv1416 = r_FMT2(rt_str("@ @; })", 7), l_R_1412, l_EQ_1413);
return rv1416; }
}
}
{ R10 rv1417 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1417; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1418; memset(&l_A_1418, 0, sizeof l_A_1418);
S_R26(&l_A_1418, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1419; memset(&l_T_1419, 0, sizeof l_T_1419);
l_T_1419 = (l_A_1418).f_T;
R10 l_OP_1420; memset(&l_OP_1420, 0, sizeof l_OP_1420);
S_R10(&l_OP_1420, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1419))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1420, 1))))
{
{
R27 * l_ARGS_1421; memset(&l_ARGS_1421, 0, sizeof l_ARGS_1421);
l_ARGS_1421 = r_VAL_ARG(l_A_1418, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1422; memset(&l_Y_1422, 0, sizeof l_Y_1422);
l_Y_1422 = r_USER_OPERATOR(r_OP_NAME(l_OP_1420, 1), l_ARGS_1421, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1422 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1421))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1421))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1420, 1), l_ARGS_1421, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1420, 1));
}
}
if ((!(l_Y_1422 == NULL)))
{
{ R26 rv1423 = r_CALL_SYM(l_Y_1422, l_ARGS_1421, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1423; }
}
if ((((*(R22 *)rt_nil_check(l_T_1419))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1419));
}
}
}
if (r_TEQS(l_OP_1420, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1419))).f_KIND == g_T_BOOL))
{
{ R26 rv1424 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1418).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1424; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1419))).f_KIND == g_T_BITS))
{
{ R26 rv1425 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1418).f_C), l_T_1419);
return rv1425; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1419))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1420, rt_str("-", 1)))
{
{ R26 rv1426 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1418).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1419))).f_SCALE));
return rv1426; }
}
{ R26 rv1427 = r_MKET((l_A_1418).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1419))).f_SCALE));
return rv1427; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1419))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1428; memset(&l_FT_1428, 0, sizeof l_FT_1428);
l_FT_1428 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1419))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1420, rt_str("-", 1)))
{
{ R26 rv1429 = r_MKET(r_FLOAT_OP(l_OP_1420, r_MK(rt_str("0.0", 3)), (l_A_1418).f_C, l_FT_1428), l_FT_1428);
return rv1429; }
}
{ R26 rv1430 = r_MKET((l_A_1418).f_C, l_FT_1428);
return rv1430; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1419));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1431 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1431; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1432; memset(&l_OP_1432, 0, sizeof l_OP_1432);
S_R10(&l_OP_1432, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1433; memset(&l_A_1433, 0, sizeof l_A_1433);
R26 l_B_1434; memset(&l_B_1434, 0, sizeof l_B_1434);
if ((r_TEQS(l_OP_1432, rt_str("&", 1)) || r_TEQS(l_OP_1432, rt_str("!", 1))))
{
{
R23 l_MA_1435; memset(&l_MA_1435, 0, sizeof l_MA_1435);
S_R23(&l_MA_1435, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1436; memset(&l_CA_1436, 0, sizeof l_CA_1436);
S_R10(&l_CA_1436, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1437; memset(&l_CB_1437, 0, sizeof l_CB_1437);
S_R10(&l_CB_1437, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1432, rt_str("&", 1)))
{
{ R26 rv1438 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1436, l_CB_1437), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1438; }
}
{ R26 rv1439 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1436, l_CB_1437), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1439; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1434, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1433, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1434).f_T), 0);
}
else
{
S_R26(&l_A_1433, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1434, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1433).f_T), 0);
}
{ R26 rv1440 = r_APPLY_OPERATOR(p_E, l_OP_1432, l_A_1433, l_B_1434);
return rv1440; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1441; memset(&l_AT_1441, 0, sizeof l_AT_1441);
l_AT_1441 = (p_A).f_T;
R22 * l_BT_1442; memset(&l_BT_1442, 0, sizeof l_BT_1442);
l_BT_1442 = (p_B).f_T;
rt_int l_LINE_1443; memset(&l_LINE_1443, 0, sizeof l_LINE_1443);
l_LINE_1443 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1444; memset(&l_NAME_1444, 0, sizeof l_NAME_1444);
S_R10(&l_NAME_1444, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1444, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1444, (l_NAME_1444).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1444) || (((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1445; memset(&l_ARGS_1445, 0, sizeof l_ARGS_1445);
l_ARGS_1445 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1446; memset(&l_EXTRA_1446, 0, sizeof l_EXTRA_1446);
l_EXTRA_1446 = r_QUAL_ARGS(l_LINE_1443);
R12 * l_Y_1447; memset(&l_Y_1447, 0, sizeof l_Y_1447);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1446 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1446);
}
if ((!(l_EXTRA_1446 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1445))).f_NEXT))).f_NEXT = l_EXTRA_1446;
l_Y_1447 = r_USER_OPERATOR(l_NAME_1444, l_ARGS_1445, l_LINE_1443);
if ((!(l_Y_1447 == NULL)))
{
{ R26 rv1448 = r_CALL_SYM(l_Y_1447, l_ARGS_1445, l_LINE_1443);
return rv1448; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1445))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1444, l_ARGS_1445, l_LINE_1443) == NULL)))
{
r_FAILT(l_LINE_1443, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1444);
}
}
else
{
l_Y_1447 = r_USER_OPERATOR(l_NAME_1444, l_ARGS_1445, l_LINE_1443);
if ((!(l_Y_1447 == NULL)))
{
{ R26 rv1449 = r_CALL_SYM(l_Y_1447, l_ARGS_1445, l_LINE_1443);
return rv1449; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1450; memset(&l_Q_1450, 0, sizeof l_Q_1450);
l_Q_1450 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1445, l_LINE_1443);
if ((!(l_Q_1450 == NULL)))
{
{ R26 rv1451 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1450, l_ARGS_1445, l_LINE_1443)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1451; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1443, rt_str("no such operation for the abstract type: ", 41), l_NAME_1444);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1443, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1452 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1452; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1453 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1453; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_INT)))
{
{ R26 rv1454 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1454; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1455 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1455; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1441, l_BT_1442)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1441))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1443, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1456 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1456; }
}
r_FAILT(l_LINE_1443, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1441, l_BT_1442, l_LINE_1443);
{
R22 * l_T_1457; memset(&l_T_1457, 0, sizeof l_T_1457);
l_T_1457 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1457))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1441))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1442))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1457))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1441))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1442))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1457))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1457))).f_MLEN).f_V), 0);
}
{ R26 rv1458 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1457);
return rv1458; }
}
}
r_FAIL(l_LINE_1443, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_BITS)))
{
{ R26 rv1459 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1441);
return rv1459; }
}
r_FAILT(l_LINE_1443, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_INT)))
{
{ R26 rv1460 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1460; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1461; memset(&l_T_1461, 0, sizeof l_T_1461);
l_T_1461 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1441))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1442))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1462 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1461), l_T_1461);
return rv1462; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1443, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1441))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1442))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1443, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1443, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1441), (r_TYPE_NAME(l_AT_1441)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1463 = 0;
return rv1463; }
}
{ rt_int rv1464 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1464; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1465; memset(&l_T_1465, 0, sizeof l_T_1465);
l_T_1465 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1465))).f_SCALE = p_P;
{ R22 * rv1466 = l_T_1465;
return rv1466; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1467 = r_MK(rt_str("1", 1));
return rv1467; }
}
{ R10 rv1468 = r_MK(rt_str("0", 1));
return rv1468; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1469 = r_MK(rt_str("1", 1));
return rv1469; }
}
}
{ R10 rv1470 = r_MK(rt_str("0", 1));
return rv1470; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1471 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1471; }
}
}
{ rt_int rv1472 = ((rt_int)0LL);
return rv1472; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1473 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1473; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1474 = r_MK(rt_str("and", 3));
return rv1474; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1475 = r_MK(rt_str("or", 2));
return rv1475; }
}
{ R10 rv1476 = r_MK(rt_str("xor", 3));
return rv1476; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1477 = p_A;
return rv1477; }
}
{ rt_int rv1478 = p_B;
return rv1478; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1479 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1479; }
}
{ R10 rv1480 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1480; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1481; memset(&l_AT_1481, 0, sizeof l_AT_1481);
l_AT_1481 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1482; memset(&l_BT_1482, 0, sizeof l_BT_1482);
l_BT_1482 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1483; memset(&l_R_1483, 0, sizeof l_R_1483);
if (((((*(R22 *)rt_nil_check(l_AT_1481))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1482))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1481))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1482))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1481))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1482))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1483, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1481))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1482))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1483, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1481, l_BT_1482)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1481))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1481, l_BT_1482, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1481))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1481) || r_HAS_ANY(l_BT_1482)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1481))
{
S_R10(&l_R_1483, r_COMPONENT_EQUAL(l_AT_1481, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1483, r_EQUAL_CODE(l_AT_1481, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1483, r_FMT1(rt_str("(!@)", 4), l_R_1483), 0);
}
{ R26 rv1484 = r_MKET(l_R_1483, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1484; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1485; memset(&l_S1_1485, 0, sizeof l_S1_1485);
l_S1_1485 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1486; memset(&l_S2_1486, 0, sizeof l_S2_1486);
l_S2_1486 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1487; memset(&l_S_1487, 0, sizeof l_S_1487);
l_S_1487 = r_MAX_INT(l_S1_1485, l_S2_1486);
R10 l_FN_1488; memset(&l_FN_1488, 0, sizeof l_FN_1488);
S_R10(&l_FN_1488, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1488, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1489 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1488, r_RESCALE_C((p_A).f_C, l_S1_1485, l_S_1487), r_RESCALE_C((p_B).f_C, l_S2_1486, l_S_1487)), r_INT_TYPE(l_S_1487));
return rv1489; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1490 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1485, l_S2_1486)));
return rv1490; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1491 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1485, l_S2_1486)));
return rv1491; }
}
{ R26 rv1492 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1485, l_S2_1486)));
return rv1492; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1493 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1485));
return rv1493; }
}
{ R26 rv1494 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1485));
return rv1494; }
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
rt_int l_S1_1495; memset(&l_S1_1495, 0, sizeof l_S1_1495);
l_S1_1495 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1496; memset(&l_S2_1496, 0, sizeof l_S2_1496);
l_S2_1496 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1497; memset(&l_RND_1497, 0, sizeof l_RND_1497);
S_R10(&l_RND_1497, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1498 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1498; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1497, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1499 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1499; }
}
{
R23 l_SM_1500; memset(&l_SM_1500, 0, sizeof l_SM_1500);
S_R23(&l_SM_1500, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1501; memset(&l_S_1501, 0, sizeof l_S_1501);
l_S_1501 = (l_SM_1500).f_V;
rt_int l_SR_1502; memset(&l_SR_1502, 0, sizeof l_SR_1502);
l_SR_1502 = r_MAX_INT(l_S1_1495, l_S2_1496);
if ((!(l_SM_1500).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1503 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1501, l_S1_1495), l_S2_1496)), l_RND_1497), r_INT_TYPE(l_S_1501));
return rv1503; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1504 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1501, l_S1_1495), l_S2_1496)), l_RND_1497), r_INT_TYPE(l_S_1501));
return rv1504; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1505 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1495), r_NUM(l_S_1501), l_RND_1497), r_INT_TYPE(l_S_1501));
return rv1505; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1506; memset(&l_SUB_1506, 0, sizeof l_SUB_1506);
S_R10(&l_SUB_1506, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1506, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1507 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1495), (p_B).f_C, r_NUM(l_S2_1496)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1501), l_SUB_1506, l_RND_1497)), r_INT_TYPE(l_S_1501));
return rv1507; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1508; memset(&l_V_1508, 0, sizeof l_V_1508);
S_R26(&l_V_1508, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1509; memset(&l_T_1509, 0, sizeof l_T_1509);
l_T_1509 = r_REAL_TYPE((l_V_1508).f_T);
R21 * l_R_1510; memset(&l_R_1510, 0, sizeof l_R_1510);
l_R_1510 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1511; memset(&l_TMP_1511, 0, sizeof l_TMP_1511);
S_R10(&l_TMP_1511, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1512; memset(&l_LO_1512, 0, sizeof l_LO_1512);
R26 l_HI_1513; memset(&l_HI_1513, 0, sizeof l_HI_1513);
R10 l_LOC_1514; memset(&l_LOC_1514, 0, sizeof l_LOC_1514);
R10 l_HIC_1515; memset(&l_HIC_1515, 0, sizeof l_HIC_1515);
R10 l_LO_OP_1516; memset(&l_LO_OP_1516, 0, sizeof l_LO_OP_1516);
S_R10(&l_LO_OP_1516, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1517; memset(&l_HI_OP_1517, 0, sizeof l_HI_OP_1517);
S_R10(&l_HI_OP_1517, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1512, r_EXPR(((*(R21 *)rt_nil_check(l_R_1510))).f_A, l_T_1509), 0);
S_R26(&l_HI_1513, r_EXPR(((*(R21 *)rt_nil_check(l_R_1510))).f_B, l_T_1509), 0);
if (((((*(R22 *)rt_nil_check(l_T_1509))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1509))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1509))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1509))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1509))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1512).f_T), l_T_1509)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1513).f_T), l_T_1509))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1510))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1510))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1516, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1510))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1517, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1509))).f_KIND == g_T_INT))
{
{
R26 l_X_1518; memset(&l_X_1518, 0, sizeof l_X_1518);
S_R26(&l_X_1518, r_MKET(l_TMP_1511, (l_V_1508).f_T), 0);
S_R10(&l_LOC_1514, r_FIXED_COMPARE(l_LO_1512, l_X_1518, l_LO_OP_1516), 0);
S_R10(&l_HIC_1515, r_FIXED_COMPARE(l_X_1518, l_HI_1513, l_HI_OP_1517), 0);
}
}
else
{
S_R10(&l_LOC_1514, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1512).f_C, l_LO_OP_1516, l_TMP_1511), 0);
S_R10(&l_HIC_1515, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1511, l_HI_OP_1517, (l_HI_1513).f_C), 0);
}
{ R26 rv1519 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1509), l_TMP_1511, (l_V_1508).f_C, l_LOC_1514), r_FMT1(rt_str("@; })", 5), l_HIC_1515)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1519; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1520 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1520; }
}
{ R10 rv1521 = (p_V).f_C;
return rv1521; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1522 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1522; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1523; memset(&l_B_1523, 0, sizeof l_B_1523);
l_B_1523 = ((rt_int)0LL);
rt_int l_P_1524; memset(&l_P_1524, 0, sizeof l_P_1524);
l_P_1524 = ((rt_int)1LL);
for (;;) {
if ((l_P_1524 >= p_N)) goto L_end1525;
{
l_B_1523 = rt_add(l_B_1523, ((rt_int)1LL));
l_P_1524 = rt_mul(l_P_1524, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1525: ;
{ rt_int rv1526 = l_B_1523;
return rv1526; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1527; memset(&l_M_1527, 0, sizeof l_M_1527);
S_R23(&l_M_1527, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1527).f_OK)
{
{ rt_int rv1528 = (l_M_1527).f_V;
return rv1528; }
}
}
}
}
{ rt_int rv1529 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1529; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1530 = ((rt_int)100000000LL);
return rv1530; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1531 = ((rt_int)15LL);
return rv1531; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1532 = ((rt_int)7LL);
return rv1532; }
}
{ rt_int rv1533 = ((rt_int)15LL);
return rv1533; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1534; memset(&l_SINGLE_1534, 0, sizeof l_SINGLE_1534);
l_SINGLE_1534 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1534)
{
{ rt_int rv1535 = rt_neg(((rt_int)125LL));
return rv1535; }
}
{ rt_int rv1536 = rt_neg(((rt_int)1021LL));
return rv1536; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1534)
{
{ rt_int rv1537 = ((rt_int)128LL);
return rv1537; }
}
{ rt_int rv1538 = ((rt_int)1024LL);
return rv1538; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1534)
{
{ rt_int rv1539 = ((rt_int)25LL);
return rv1539; }
}
{ rt_int rv1540 = ((rt_int)54LL);
return rv1540; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1534)
{
{ rt_int rv1541 = ((rt_int)8LL);
return rv1541; }
}
{ rt_int rv1542 = ((rt_int)11LL);
return rv1542; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1534)
{
{ rt_int rv1543 = ((rt_int)32LL);
return rv1543; }
}
{ rt_int rv1544 = ((rt_int)64LL);
return rv1544; }
}
{ rt_int rv1545 = ((rt_int)0LL);
return rv1545; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1546; memset(&l_K_1546, 0, sizeof l_K_1546);
l_K_1546 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1546 == g_T_ABS))
{
{ R23 rv1547 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1547; }
}
else if ((l_K_1546 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1548 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1548; }
}
}
{ R23 rv1549 = r_SOME(((rt_int)64LL));
return rv1549; }
}
else if ((l_K_1546 == g_T_FLOAT))
{
{ R23 rv1550 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1550; }
}
else if ((l_K_1546 == g_T_BOOL))
{
{ R23 rv1551 = r_SOME(((rt_int)1LL));
return rv1551; }
}
else if ((l_K_1546 == g_T_ENUM))
{
{ R23 rv1552 = r_SOME(r_ENUM_SIZE(p_T));
return rv1552; }
}
else if ((l_K_1546 == g_T_BITS))
{
{ R23 rv1553 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1553; }
}
else if ((l_K_1546 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1554 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1554; }
}
}
else if (((l_K_1546 == g_T_PTR) || (l_K_1546 == g_T_SEM)))
{
{ R23 rv1555 = r_SOME(((rt_int)64LL));
return rv1555; }
}
{ R23 rv1556 = r_NO_MVAL();
return rv1556; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1557; memset(&l_T_1557, 0, sizeof l_T_1557);
l_T_1557 = (p_B).f_T;
rt_int l_K_1558; memset(&l_K_1558, 0, sizeof l_K_1558);
l_K_1558 = ((*(R22 *)rt_nil_check(l_T_1557))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1559 = r_SIZE_OF(l_T_1557, (p_B).f_C);
return rv1559; }
}
if ((l_K_1558 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1560 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE);
return rv1560; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1561 = r_INT_ET(((rt_int)2LL));
return rv1561; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1562 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1562; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1563 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1563; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1564 = r_MKET(((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE));
return rv1564; }
}
{ R26 rv1565 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE));
return rv1565; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1566 = r_MKET(((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE));
return rv1566; }
}
{ R26 rv1567 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE));
return rv1567; }
}
}
else if ((l_K_1558 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1568 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE);
return rv1568; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1569 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE));
return rv1569; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1570 = r_INT_ET(((rt_int)2LL));
return rv1570; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1571 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE, p_NAME));
return rv1571; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1572; memset(&l_MT_1572, 0, sizeof l_MT_1572);
l_MT_1572 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE));
R10 l_C_1573; memset(&l_C_1573, 0, sizeof l_C_1573);
S_R10(&l_C_1573, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1573, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1574 = r_MKET(((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C, l_MT_1572);
return rv1574; }
}
{ R26 rv1575 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1573), l_MT_1572);
return rv1575; }
}
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1576 = r_MKET(((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C, l_MT_1572);
return rv1576; }
}
{ R26 rv1577 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1573), l_MT_1572);
return rv1577; }
}
}
}
else if ((l_K_1558 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1578 = r_MKET(((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1557))).f_BASE);
return rv1578; }
}
{ R26 rv1579 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1557))).f_BASE);
return rv1579; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1580 = r_MKET(((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1557))).f_BASE);
return rv1580; }
}
{ R26 rv1581 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1557))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1557))).f_BASE);
return rv1581; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1582 = r_MKET(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1557))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1557))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1582; }
}
{ R26 rv1583 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1557))).f_BASE))).f_NLITS);
return rv1583; }
}
}
else if (((l_K_1558 == g_T_STR) || (l_K_1558 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1584 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1584; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1585 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1585; }
}
}
else if ((l_K_1558 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1586 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1557))).f_DIMS);
return rv1586; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1557))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1587 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1587; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1588 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1588; }
}
}
else if ((l_K_1558 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1557))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1589 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1589; }
}
{ R26 rv1590 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1590; }
}
}
else if (((l_K_1558 == g_T_ABS) || (l_K_1558 == g_T_REC)))
{
{
R22 * l_U_1591; memset(&l_U_1591, 0, sizeof l_U_1591);
l_U_1591 = l_T_1557;
if ((l_K_1558 == g_T_ABS))
{
l_U_1591 = ((*(R22 *)rt_nil_check(l_T_1557))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1591))).f_KIND == g_T_REC))
{
{
R24 * l_F_1592; memset(&l_F_1592, 0, sizeof l_F_1592);
l_F_1592 = r_FIND_FIELD(l_U_1591, p_NAME);
if ((!(l_F_1592 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1592))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1593 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1592))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1592))).f_T);
return rv1593; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1594; memset(&l_N_1594, 0, sizeof l_N_1594);
l_N_1594 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1594))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1595 = l_N_1594;
return rv1595; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1596; memset(&l_K_1596, 0, sizeof l_K_1596);
l_K_1596 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1596 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1597 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1597; }
}
}
{ R26 rv1598 = r_INT_ET(((rt_int)64LL));
return rv1598; }
}
else if ((l_K_1596 == g_T_FLOAT))
{
{ R26 rv1599 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1599; }
}
else if ((l_K_1596 == g_T_BOOL))
{
{ R26 rv1600 = r_INT_ET(((rt_int)1LL));
return rv1600; }
}
else if ((l_K_1596 == g_T_ENUM))
{
{ R26 rv1601 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1601; }
}
else if ((l_K_1596 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1602 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1602; }
}
{ R26 rv1603 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1603; }
}
else if ((l_K_1596 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1604 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1604; }
}
{ R26 rv1605 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1605; }
}
else if (((l_K_1596 == g_T_PTR) || (l_K_1596 == g_T_SEM)))
{
{ R26 rv1606 = r_INT_ET(((rt_int)64LL));
return rv1606; }
}
else if ((l_K_1596 == g_T_ABS))
{
{ R26 rv1607 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1607; }
}
else if ((l_K_1596 == g_T_ARR))
{
{ R26 rv1608 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1608; }
}
{ R26 rv1609 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1609; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1610 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1610; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1611; memset(&l_T_1611, 0, sizeof l_T_1611);
l_T_1611 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
R22 * l_RT_1612; memset(&l_RT_1612, 0, sizeof l_RT_1612);
l_RT_1612 = r_REAL_TYPE(l_T_1611);
if (((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1613; memset(&l_TMP_1613, 0, sizeof l_TMP_1613);
S_R10(&l_TMP_1613, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1614; memset(&l_C_1614, 0, sizeof l_C_1614);
S_R10(&l_C_1614, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(l_T_1611), l_TMP_1613, l_TMP_1613, l_TMP_1613), 0);
S_R10(&l_C_1614, r_FMT3(rt_str("@@ @; })", 8), l_C_1614, r_INIT_CODE(l_RT_1612, l_TMP_1613), l_TMP_1613), 0);
{ R26 rv1615 = r_MKET(l_C_1614, l_T_1611);
return rv1615; }
}
}
{ R26 rv1616 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1611)), l_T_1611);
return rv1616; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1617 = 0;
return rv1617; }
}
{
R12 * l_Y_1618; memset(&l_Y_1618, 0, sizeof l_Y_1618);
l_Y_1618 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1618 == NULL))
{
{ rt_int rv1619 = 0;
return rv1619; }
}
{ rt_int rv1620 = (((*(R12 *)rt_nil_check(l_Y_1618))).f_KIND == g_Y_TYPE);
return rv1620; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1621 = r_INT_ET(((rt_int)100000000LL));
return rv1621; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1622 = r_INT_ET(((rt_int)15LL));
return rv1622; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1623 = r_INT_ET(((rt_int)0LL));
return rv1623; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1624; memset(&l_T_1624, 0, sizeof l_T_1624);
l_T_1624 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1624 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1624 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1624 = r_REAL_TYPE(l_T_1624);
if ((!(((*(R22 *)rt_nil_check(l_T_1624))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1624))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1625; memset(&l_TMP_1625, 0, sizeof l_TMP_1625);
S_R10(&l_TMP_1625, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1626; memset(&l_R_1626, 0, sizeof l_R_1626);
S_R10(&l_R_1626, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1624))).f_CNAME, l_TMP_1625, l_TMP_1625, l_TMP_1625), 0);
R24 * l_F_1627; memset(&l_F_1627, 0, sizeof l_F_1627);
l_F_1627 = ((*(R22 *)rt_nil_check(l_T_1624))).f_FIELDS;
S_R10(&l_R_1626, r_FMT2(rt_str("@@", 2), l_R_1626, r_INIT_CODE(l_T_1624, l_TMP_1625)), 0);
for (;;) {
if ((l_F_1627 == NULL)) goto L_end1628;
{
if ((((*(R24 *)rt_nil_check(l_F_1627))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1627))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1627))).f_LABELS, (r_TAG_VALUE(l_T_1624, ((*(R24 *)rt_nil_check(l_F_1627))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1624, ((*(R24 *)rt_nil_check(l_F_1627))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1629; memset(&l_INIT_1629, 0, sizeof l_INIT_1629);
l_INIT_1629 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1627))).f_NAME);
if ((l_INIT_1629 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1627))).f_NAME);
}
S_R10(&l_R_1626, r_FMT2(rt_str("@ @", 3), l_R_1626, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1627))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1625, ((*(R24 *)rt_nil_check(l_F_1627))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1629))).f_A, ((*(R24 *)rt_nil_check(l_F_1627))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1629))).f_LINE, l_TMP_1625)), 0);
}
}
}
l_F_1627 = ((*(R24 *)rt_nil_check(l_F_1627))).f_NEXT;
}
RT_B_TICK();
} L_end1628: ;
{
R21 * l_P_1630; memset(&l_P_1630, 0, sizeof l_P_1630);
l_P_1630 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1630 == NULL)) goto L_end1631;
{
{
R24 * l_G_1632; memset(&l_G_1632, 0, sizeof l_G_1632);
l_G_1632 = r_FIND_VFIELD(l_T_1624, ((*(R21 *)rt_nil_check(l_P_1630))).f_NAME);
if ((l_G_1632 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1630))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1630))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1632))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1630))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1630))).f_NAME);
}
r_CHECK_VARIANT(l_G_1632, l_T_1624, NULL, ((*(R21 *)rt_nil_check(l_P_1630))).f_LINE);
}
l_P_1630 = ((*(R21 *)rt_nil_check(l_P_1630))).f_NEXT;
}
RT_B_TICK();
} L_end1631: ;
}
{ R26 rv1633 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1626, l_TMP_1625), l_T_1624);
return rv1633; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1634; memset(&l_P_1634, 0, sizeof l_P_1634);
l_P_1634 = p_L;
for (;;) {
if ((l_P_1634 == NULL)) goto L_end1635;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1634))).f_NAME, p_NAME))
{
{ R21 * rv1636 = l_P_1634;
return rv1636; }
}
l_P_1634 = ((*(R21 *)rt_nil_check(l_P_1634))).f_NEXT;
}
RT_B_TICK();
} L_end1635: ;
{ R21 * rv1637 = NULL;
return rv1637; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1638; memset(&l_DIMS_1638, 0, sizeof l_DIMS_1638);
l_DIMS_1638 = ((rt_int)0LL);
R21 * l_P_1639; memset(&l_P_1639, 0, sizeof l_P_1639);
l_P_1639 = p_E;
R22 * l_ELEM_1640; memset(&l_ELEM_1640, 0, sizeof l_ELEM_1640);
l_ELEM_1640 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1639))).f_KIND == g_N_ARRCONS))) goto L_end1641;
{
l_DIMS_1638 = rt_add(l_DIMS_1638, ((rt_int)1LL));
l_P_1639 = ((*(R21 *)rt_nil_check(l_P_1639))).f_A;
}
RT_B_TICK();
} L_end1641: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1640 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1640 == NULL))
{
l_ELEM_1640 = (r_EXPR(l_P_1639, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1640))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1640))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1640 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1642; memset(&l_A_1642, 0, sizeof l_A_1642);
l_A_1642 = r_ARRAY_OF(l_ELEM_1640, l_DIMS_1638);
R10 l_TMP_1643; memset(&l_TMP_1643, 0, sizeof l_TMP_1643);
S_R10(&l_TMP_1643, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1644; memset(&l_R_1644, 0, sizeof l_R_1644);
S_R10(&l_R_1644, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1642))).f_CNAME, l_TMP_1643, l_TMP_1643), 0);
rt_int l_K_1645; memset(&l_K_1645, 0, sizeof l_K_1645);
l_K_1645 = ((rt_int)0LL);
S_R10(&l_R_1644, r_FMT2(rt_str("@@); ", 5), l_R_1644, l_TMP_1643), 0);
l_P_1639 = p_E;
{ rt_int it1647_lo = ((rt_int)0LL), it1647_hi = rt_sub(l_DIMS_1638, ((rt_int)1LL));
for (rt_int it1647 = it1647_lo; it1647 <= it1647_hi; it1647++) {
{
S_R10(&l_R_1644, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1644, l_TMP_1643, r_NUM(it1647), l_TMP_1643), 0);
S_R10(&l_R_1644, r_FMT3(rt_str("@@] = @;", 8), l_R_1644, r_NUM(it1647), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1639))).f_A), ((rt_int)1LL)))), 0);
l_P_1639 = ((*(R21 *)rt_nil_check(l_P_1639))).f_A;
}
RT_B_TICK();
if (it1647 == it1647_hi) break;
} } L_end1646: ;
S_R10(&l_R_1644, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1644, l_TMP_1643, l_TMP_1643, r_NUM(l_DIMS_1638)), 0);
S_R10(&l_R_1644, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1644, l_TMP_1643, l_TMP_1643), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1638, l_A_1642, l_TMP_1643, &l_R_1644, &l_K_1645);
{ R26 rv1648 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1644, l_TMP_1643), l_A_1642);
return rv1648; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1649; memset(&l_P_1649, 0, sizeof l_P_1649);
l_P_1649 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1649 == NULL)) goto L_end1650;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1649, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1649))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1649))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1649, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1649))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1649 = ((*(R21 *)rt_nil_check(l_P_1649))).f_NEXT;
}
RT_B_TICK();
} L_end1650: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1651; memset(&l_T_1651, 0, sizeof l_T_1651);
l_T_1651 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1651))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1651))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1651))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1652 = l_T_1651;
return rv1652; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1653; memset(&l_T_1653, 0, sizeof l_T_1653);
l_T_1653 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1654; memset(&l_V_1654, 0, sizeof l_V_1654);
S_R26(&l_V_1654, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1653), 0);
R22 * l_RT_1655; memset(&l_RT_1655, 0, sizeof l_RT_1655);
l_RT_1655 = r_REAL_TYPE(l_T_1653);
if (((((*(R22 *)rt_nil_check((l_V_1654).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_INT))
{
{ R26 rv1656 = r_MKET(r_RANGE_CHECK(l_RT_1655, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1654).f_C), r_NO_TEXT()), l_T_1653);
return rv1656; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_BOOL))
{
{ R26 rv1657 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1654).f_C), l_T_1653);
return rv1657; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_ENUM))
{
{ R26 rv1658 = r_MKET(r_ENUM_OF_BITS(l_RT_1655, (l_V_1654).f_C), l_T_1653);
return rv1658; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_FLOAT))
{
{ R26 rv1659 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1654).f_C), l_T_1653);
return rv1659; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_STR))
{
{ R26 rv1660 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1654).f_C), l_T_1653);
return rv1660; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1661; memset(&l_C_1661, 0, sizeof l_C_1661);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1661, r_CONVERT(l_V_1654, l_T_1653, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1655))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1655))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1655))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1654).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1661, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1661, ((*(R22 *)rt_nil_check(l_RT_1655))).f_LEN_C), 0);
}
{ R26 rv1662 = r_MKET(l_C_1661, l_T_1653);
return rv1662; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1663 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1663; }
}
}
{ R10 rv1664 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1664; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1665; memset(&l_NAME_1665, 0, sizeof l_NAME_1665);
S_R10(&l_NAME_1665, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1666; memset(&l_L_1666, 0, sizeof l_L_1666);
l_L_1666 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1667; memset(&l_R_1667, 0, sizeof l_R_1667);
S_R10(&l_R_1667, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1666 == NULL)) goto L_end1668;
{
{
R21 * l_V_1669; memset(&l_V_1669, 0, sizeof l_V_1669);
l_V_1669 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1670; memset(&l_FOUND_1670, 0, sizeof l_FOUND_1670);
l_FOUND_1670 = 0;
for (;;) {
if ((l_V_1669 == NULL)) goto L_end1671;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1669))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1666))).f_NAME))
{
S_R10(&l_R_1667, r_FMT2(rt_str("@@, ", 4), l_R_1667, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1669))).f_A, NULL)).f_C), 0);
l_FOUND_1670 = 1;
}
l_V_1669 = ((*(R21 *)rt_nil_check(l_V_1669))).f_NEXT;
}
RT_B_TICK();
} L_end1671: ;
if ((!l_FOUND_1670))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1666))).f_NAME);
}
}
l_L_1666 = ((*(R21 *)rt_nil_check(l_L_1666))).f_NEXT;
}
RT_B_TICK();
} L_end1668: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1665, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1667, l_NAME_1665, l_NAME_1665));
{ R10 rv1672 = r_FMT2(rt_str("@, @", 4), l_NAME_1665, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1672; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1673; memset(&l_SEM_1673, 0, sizeof l_SEM_1673);
l_SEM_1673 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1673 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1673)
{
{
R22 * l_T_1674; memset(&l_T_1674, 0, sizeof l_T_1674);
l_T_1674 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1674 = p_WANT;
}
}
{ R26 rv1675 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1674))).f_SCALE)), l_T_1674);
return rv1675; }
}
}
{
R22 * l_T_1676; memset(&l_T_1676, 0, sizeof l_T_1676);
l_T_1676 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1677; memset(&l_P_1677, 0, sizeof l_P_1677);
l_P_1677 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1677))).f_TARGET = l_T_1676;
((*(R22 *)rt_nil_check(l_P_1677))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1676))
{
{ R26 rv1678 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1676), r_INIT_CODE(l_T_1676, r_MK(rt_str("(*p)", 4)))), l_P_1677);
return rv1678; }
}
{ R26 rv1679 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1676), r_CTYPE(l_T_1676)), l_P_1677);
return rv1679; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1680; memset(&l_P_1680, 0, sizeof l_P_1680);
l_P_1680 = p_L;
{ rt_int it1682_lo = ((rt_int)1LL), it1682_hi = p_K;
for (rt_int it1682 = it1682_lo; it1682 <= it1682_hi; it1682++) {
{
if ((!(l_P_1680 == NULL)))
{
l_P_1680 = ((*(R21 *)rt_nil_check(l_P_1680))).f_NEXT;
}
}
RT_B_TICK();
if (it1682 == it1682_hi) break;
} } L_end1681: ;
{ R21 * rv1683 = l_P_1680;
return rv1683; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1684; memset(&l_N_1684, 0, sizeof l_N_1684);
l_N_1684 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1684 < p_LO) || (l_N_1684 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1685; memset(&l_L_1685, 0, sizeof l_L_1685);
l_L_1685 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1685 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1685))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1685))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1685))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1686 = r_MK(rt_str("1", 1));
return rv1686; }
}
{ R10 rv1687 = r_MK(rt_str("0", 1));
return rv1687; }
}
if (((((*(R21 *)rt_nil_check(l_L_1685))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1685))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1685))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1688 = r_MK(rt_str("1", 1));
return rv1688; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1685))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1689 = r_MK(rt_str("0", 1));
return rv1689; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1690 = r_MK(rt_str("1", 1));
return rv1690; }
}
{ R10 rv1691 = r_MK(rt_str("0", 1));
return rv1691; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1692 = 0;
return rv1692; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1693 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1693; }
}
{ rt_int rv1694 = 0;
return rv1694; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1695 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1695; }
}
{ R21 * rv1696 = p_E;
return rv1696; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1697; memset(&l_NAMES_1697, 0, sizeof l_NAMES_1697);
l_NAMES_1697 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_1697, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1698; memset(&l_L_1698, 0, sizeof l_L_1698);
l_L_1698 = (p_NAME).f_LEN;
{ rt_int it1700_lo = ((rt_int)0LL), it1700_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1698), ((rt_int)2LL));
for (rt_int it1700 = it1700_lo; it1700 <= it1700_hi; it1700++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1697, it1700, it1700), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1697, rt_add(rt_add(it1700, l_L_1698), ((rt_int)1LL)), rt_add(rt_add(it1700, l_L_1698), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1697, rt_add(it1700, ((rt_int)1LL)), rt_add(it1700, l_L_1698)), r_STR(p_NAME, l_L_1698)))
{
{
rt_int l_J_1701; memset(&l_J_1701, 0, sizeof l_J_1701);
l_J_1701 = rt_add(rt_add(it1700, l_L_1698), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1697, l_J_1701, l_J_1701), rt_str(" ", 1))) goto L_end1702;
{
l_J_1701 = rt_add(l_J_1701, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1702: ;
{ R10 rv1703 = r_MKN(rt_b_slice(l_NAMES_1697, rt_add(rt_add(it1700, l_L_1698), ((rt_int)2LL)), rt_sub(l_J_1701, ((rt_int)1LL))));
return rv1703; }
}
}
}
}
RT_B_TICK();
if (it1700 == it1700_hi) break;
} } L_end1699: ;
{ R10 rv1704 = r_NO_TEXT();
return rv1704; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1705; memset(&l_NAME_1705, 0, sizeof l_NAME_1705);
S_R10(&l_NAME_1705, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1706; memset(&l_LINE_1706, 0, sizeof l_LINE_1706);
l_LINE_1706 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1707; memset(&l_N_1707, 0, sizeof l_N_1707);
l_N_1707 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1705, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1705, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1708; memset(&l_TGT_1708, 0, sizeof l_TGT_1708);
l_TGT_1708 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1709; memset(&l_S_1709, 0, sizeof l_S_1709);
l_S_1709 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1706);
R21 * l_SRC_1710; memset(&l_SRC_1710, 0, sizeof l_SRC_1710);
l_SRC_1710 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1708 == NULL) || (l_SRC_1710 == NULL)))
{
r_FAILT(l_LINE_1706, rt_str("the wrong arguments for ", 24), l_NAME_1705);
}
if (r_TEQS(l_NAME_1705, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1709))).f_A = l_TGT_1708;
}
else
{
if ((l_N_1707 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1706, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1709))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1706);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1709))).f_A))).f_A = l_TGT_1708;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1709))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1709))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1709))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1710), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1705, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1706);
{
R14 l_SAVED_CODE_1711; memset(&l_SAVED_CODE_1711, 0, sizeof l_SAVED_CODE_1711);
S_R14(&l_SAVED_CODE_1711, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1712; memset(&l_C_1712, 0, sizeof l_C_1712);
S_R10(&l_C_1712, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1713; memset(&l_P_1713, 0, sizeof l_P_1713);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1714; memset(&rc1714, 0, sizeof rc1714);  rc1714.f_HEAD = NULL; rc1714.f_TAIL = NULL; rc1714; }), 0);
r_ASSIGN_STMT(l_S_1709);
l_P_1713 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1713 == NULL)) goto L_end1715;
{
S_R10(&l_C_1712, r_FMT2(rt_str("@ @", 3), l_C_1712, ((*(R15 *)rt_nil_check(l_P_1713))).f_T), 0);
l_P_1713 = ((*(R15 *)rt_nil_check(l_P_1713))).f_NEXT;
}
RT_B_TICK();
} L_end1715: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1711, 0);
{ R26 rv1716 = r_MKET(r_CATS(l_C_1712, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1716; }
}
}
}
if (r_TEQS(l_NAME_1705, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1717; memset(&l_S_1717, 0, sizeof l_S_1717);
l_S_1717 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1706);
((*(R21 *)rt_nil_check(l_S_1717))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1717))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1717))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1717))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1718 = r_EXPR(l_S_1717, p_WANT);
return rv1718; }
}
}
{
R10 l_SYM__1719; memset(&l_SYM__1719, 0, sizeof l_SYM__1719);
S_R10(&l_SYM__1719, r_OPERATOR_SYMBOL(l_NAME_1705), 0);
rt_int l_UNARY_OP_1720; memset(&l_UNARY_OP_1720, 0, sizeof l_UNARY_OP_1720);
l_UNARY_OP_1720 = ((r_TEQS(l_NAME_1705, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1705, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1705, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1721; memset(&l_X_1721, 0, sizeof l_X_1721);
if (l_UNARY_OP_1720)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1721 = r_NEW_NODE(g_N_UNOP, l_LINE_1706);
S_R10(&((*(R21 *)rt_nil_check(l_X_1721))).f_NAME, l_SYM__1719, 0);
((*(R21 *)rt_nil_check(l_X_1721))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1722 = r_EXPR(r_QUALIFIED(l_X_1721, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1706), p_WANT);
return rv1722; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1721 = r_BIN_NODE(l_SYM__1719, l_LINE_1706, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1719, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1721))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1705, (l_NAME_1705).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1721))).f_FL = ((rt_int)2LL);
}
{ R26 rv1723 = r_EXPR(r_QUALIFIED(l_X_1721, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1706), p_WANT);
return rv1723; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1724; memset(&l_R_1724, 0, sizeof l_R_1724);
l_R_1724 = p_X;
R21 * l_P_1725; memset(&l_P_1725, 0, sizeof l_P_1725);
l_P_1725 = p_Q;
for (;;) {
if ((l_P_1725 == NULL)) goto L_end1726;
{
if ((l_R_1724 == p_X))
{
l_R_1724 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1724))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1725))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1725))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1725))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1724))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1725))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1724))).f_B = l_P_1725;
}
l_P_1725 = ((*(R21 *)rt_nil_check(l_P_1725))).f_NEXT;
}
RT_B_TICK();
} L_end1726: ;
{ R21 * rv1727 = l_R_1724;
return rv1727; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1728 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1728; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1729; memset(&l_Y_1729, 0, sizeof l_Y_1729);
l_Y_1729 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1729 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1729))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1730; memset(&l_T_1730, 0, sizeof l_T_1730);
l_T_1730 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1729))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1730))).f_KIND == g_T_ENUM))
{
{ R22 * rv1731 = l_T_1730;
return rv1731; }
}
}
}
}
{ R22 * rv1732 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1732; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1733 = 1;
return rv1733; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1734 = 1;
return rv1734; }
}
{ rt_int rv1735 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1735; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1736 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1736; }
}
{ R21 * rv1737 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1737; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1738; memset(&l_NAME_1738, 0, sizeof l_NAME_1738);
S_R10(&l_NAME_1738, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1739; memset(&l_LINE_1739, 0, sizeof l_LINE_1739);
l_LINE_1739 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1738)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1738, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1738, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1738, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1740 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1740; }
}
if ((r_TEQS(l_NAME_1738, rt_str("PUT", 3)) || r_TEQS(l_NAME_1738, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1741; memset(&l_V_1741, 0, sizeof l_V_1741);
S_R26(&l_V_1741, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1741).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1739, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_1741).f_T, rt_str("the terminal", 12), l_LINE_1739);
if (r_TEQS(l_NAME_1738, rt_str("PUT", 3)))
{
{ R26 rv1742 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1741).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1742; }
}
{ R26 rv1743 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1741).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1743; }
}
}
else if (r_TEQS(l_NAME_1738, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1744 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1744; }
}
else if (r_TEQS(l_NAME_1738, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1745 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1745; }
}
else if (r_TEQS(l_NAME_1738, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1746 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1746; }
}
else if (r_TEQS(l_NAME_1738, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1747 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1747; }
}
else if (r_TEQS(l_NAME_1738, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1748 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1748; }
}
else if (r_TEQS(l_NAME_1738, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1749 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1749; }
}
if (r_TEQS(l_NAME_1738, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1750 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1739);
return rv1750; }
}
else if (r_TEQS(l_NAME_1738, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1751 = r_TO_FIXED_CALL(p_E);
return rv1751; }
}
else if (r_TEQS(l_NAME_1738, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1752; memset(&l_V_1752, 0, sizeof l_V_1752);
S_R26(&l_V_1752, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1753; memset(&l_P_1753, 0, sizeof l_P_1753);
S_R23(&l_P_1753, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1754; memset(&l_VT_1754, 0, sizeof l_VT_1754);
l_VT_1754 = r_REAL_TYPE((l_V_1752).f_T);
R22 * l_T_1755; memset(&l_T_1755, 0, sizeof l_T_1755);
l_T_1755 = r_FLOAT_TYPE((l_P_1753).f_V);
R10 l_SINGLE_1756; memset(&l_SINGLE_1756, 0, sizeof l_SINGLE_1756);
S_R10(&l_SINGLE_1756, r_SINGLE_C((l_P_1753).f_V), 0);
R10 l_TR_1757; memset(&l_TR_1757, 0, sizeof l_TR_1757);
S_R10(&l_TR_1757, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1758; memset(&l_R_1758, 0, sizeof l_R_1758);
l_R_1758 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1758 == NULL))
{
l_R_1758 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1758))).f_KIND == g_N_QUAL))
{
l_R_1758 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1758))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1758))).f_NAME).f_LEN), l_LINE_1739);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1758))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1757, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1758))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1739, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1754))).f_KIND == g_T_INT))
{
{ R26 rv1759 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1752).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1754))).f_SCALE), l_SINGLE_1756, l_TR_1757), l_T_1755);
return rv1759; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1754))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1753).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1754))).f_SCALE))))
{
{
R21 * l_Q_1760; memset(&l_Q_1760, 0, sizeof l_Q_1760);
l_Q_1760 = r_NEW_NODE(g_N_QUAL, l_LINE_1739);
R21 * l_SAVED_Q_1761; memset(&l_SAVED_Q_1761, 0, sizeof l_SAVED_Q_1761);
l_SAVED_Q_1761 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1762; memset(&l_L_1762, 0, sizeof l_L_1762);
((*(R21 *)rt_nil_check(l_Q_1760))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1760;
S_R26(&l_L_1762, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1761;
{ R26 rv1763 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1762).f_C, l_SINGLE_1756, l_TR_1757), l_T_1755);
return rv1763; }
}
}
{ R26 rv1764 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1752).f_C, l_SINGLE_1756, l_TR_1757), l_T_1755);
return rv1764; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1754))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1754))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1754))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1739, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1765 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1752).f_C, l_SINGLE_1756, l_TR_1757), l_T_1755);
return rv1765; }
}
r_FAIL(l_LINE_1739, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1738, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1766 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1739);
return rv1766; }
}
else if (r_TEQS(l_NAME_1738, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1767; memset(&l_V_1767, 0, sizeof l_V_1767);
S_R26(&l_V_1767, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1767).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1768 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1767).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1767).f_T))).f_SCALE));
return rv1768; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1767).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1769 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1767).f_C), (l_V_1767).f_T);
return rv1769; }
}
r_FAIL(l_LINE_1739, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1738, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1738, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1770; memset(&l_V_1770, 0, sizeof l_V_1770);
S_R26(&l_V_1770, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1771; memset(&l_T_1771, 0, sizeof l_T_1771);
l_T_1771 = r_REAL_TYPE((l_V_1770).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1771))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1739, rt_str("an enumerated value expected by ", 32), l_NAME_1738);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1771))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1739, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1738);
}
if (r_TEQS(l_NAME_1738, rt_str("SUCC", 4)))
{
{ R26 rv1772 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1770).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1771))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1771))).f_BASE);
return rv1772; }
}
{ R26 rv1773 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1770).f_C), ((*(R22 *)rt_nil_check(l_T_1771))).f_BASE);
return rv1773; }
}
}
else if (r_TEQS(l_NAME_1738, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1774; memset(&l_V_1774, 0, sizeof l_V_1774);
S_R26(&l_V_1774, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1775; memset(&l_K_1775, 0, sizeof l_K_1775);
l_K_1775 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1774).f_T)))).f_KIND;
R22 * l_T_1776; memset(&l_T_1776, 0, sizeof l_T_1776);
l_T_1776 = r_NEW_TYP(l_K_1775);
if (((!(l_K_1775 == g_T_STR)) && (!(l_K_1775 == g_T_BITS))))
{
r_FAIL(l_LINE_1739, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1776))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1774).f_T))).f_BASE;
{ R26 rv1777 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1774).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1776);
return rv1777; }
}
}
else if (r_TEQS(l_NAME_1738, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1778 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1778; }
}
else if (r_TEQS(l_NAME_1738, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1779 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1779; }
}
else if (((r_TEQS(l_NAME_1738, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1738, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1738, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1780; memset(&l_BITS_1780, 0, sizeof l_BITS_1780);
S_R10(&l_BITS_1780, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1738, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1780, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1738, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1780, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_1781; memset(&l_V_1781, 0, sizeof l_V_1781);
S_R26(&l_V_1781, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1781).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_1739, rt_str("a character string expected by ", 31), l_NAME_1738);
}
r_ASCII_ONLY((l_V_1781).f_T, r_STR(l_NAME_1738, (l_NAME_1738).f_LEN), l_LINE_1739);
{ R26 rv1782 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_1781).f_C, l_BITS_1780), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1782; }
}
}
}
else if ((r_TEQS(l_NAME_1738, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1738, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1783; memset(&l_S_1783, 0, sizeof l_S_1783);
S_R23(&l_S_1783, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1784; memset(&l_R_1784, 0, sizeof l_R_1784);
S_R23(&l_R_1784, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1784).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1739, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1739);
if (r_TEQS(l_NAME_1738, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1785 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1783).f_V));
return rv1785; }
}
{ R26 rv1786 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1783).f_V));
return rv1786; }
}
}
else if (((r_TEQS(l_NAME_1738, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1738, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1738, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1787; memset(&l_P_1787, 0, sizeof l_P_1787);
S_R23(&l_P_1787, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1788; memset(&l_T_1788, 0, sizeof l_T_1788);
l_T_1788 = r_FLOAT_TYPE((l_P_1787).f_V);
R10 l_C_1789; memset(&l_C_1789, 0, sizeof l_C_1789);
S_R10(&l_C_1789, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1787).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1789, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1738, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1790 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1789), l_T_1788);
return rv1790; }
}
else if (r_TEQS(l_NAME_1738, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1791 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1789), l_T_1788);
return rv1791; }
}
{ R26 rv1792 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1789), l_T_1788);
return rv1792; }
}
}
else if (r_TEQS(l_NAME_1738, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1793 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1793; }
}
else if (r_TEQS(l_NAME_1738, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1794 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1794; }
}
else if (r_TEQS(l_NAME_1738, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1795 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1795; }
}
{ R26 rv1796 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1796; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1797; memset(&l_T_1797, 0, sizeof l_T_1797);
l_T_1797 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1798; memset(&l_K_1798, 0, sizeof l_K_1798);
l_K_1798 = ((*(R22 *)rt_nil_check(l_T_1797))).f_KIND;
R22 * l_S_1799; memset(&l_S_1799, 0, sizeof l_S_1799);
l_S_1799 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1798 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1797))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1800 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1799);
return rv1800; }
}
{ R26 rv1801 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1797))).f_SCALE)), l_S_1799);
return rv1801; }
}
else if ((l_K_1798 == g_T_FLOAT))
{
{ R26 rv1802 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1797))).f_SCALE)), l_S_1799);
return rv1802; }
}
else if ((l_K_1798 == g_T_BOOL))
{
{ R26 rv1803 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1799);
return rv1803; }
}
else if ((l_K_1798 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1797))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1804 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1799);
return rv1804; }
}
{ R26 rv1805 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1797))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1799);
return rv1805; }
}
else if (((l_K_1798 == g_T_STR) || (l_K_1798 == g_T_BITS)))
{
{ R26 rv1806 = r_MKET((p_V).f_C, l_S_1799);
return rv1806; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1797));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1807; memset(&l_V_1807, 0, sizeof l_V_1807);
S_R26(&l_V_1807, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1808; memset(&l_T_1808, 0, sizeof l_T_1808);
l_T_1808 = r_REAL_TYPE((l_V_1807).f_T);
rt_int l_N_1809; memset(&l_N_1809, 0, sizeof l_N_1809);
l_N_1809 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1810; memset(&l_RND_1810, 0, sizeof l_RND_1810);
S_R10(&l_RND_1810, r_ROUNDING_ARG(p_E, l_N_1809), 0);
rt_int l_S_1811; memset(&l_S_1811, 0, sizeof l_S_1811);
l_S_1811 = ((rt_int)0LL);
if (((l_N_1809 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1811 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1812; memset(&l_K_1812, 0, sizeof l_K_1812);
l_K_1812 = ((rt_int)2LL);
for (;;) {
if ((l_K_1812 >= l_N_1809)) goto L_end1813;
{
{
R21 * l_R_1814; memset(&l_R_1814, 0, sizeof l_R_1814);
l_R_1814 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1812));
if ((r_IS_ROUNDING(l_R_1814) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1812)))).f_KIND == g_N_QUAL) && (l_K_1812 == rt_sub(l_N_1809, ((rt_int)1LL)))))))
{
if ((!(l_K_1812 == rt_sub(l_N_1809, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1814))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1814))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1814))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1814, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1814))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1814))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1814, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1812 = rt_add(l_K_1812, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1813: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1815 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1811), l_RND_1810), r_INT_TYPE(l_S_1811));
return rv1815; }
}
if ((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1816; memset(&l_SAVED_1816, 0, sizeof l_SAVED_1816);
l_SAVED_1816 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1817; memset(&l_C_1817, 0, sizeof l_C_1817);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1810, rt_str("1", 1));
S_R10(&l_C_1817, r_RESCALE_C((l_V_1807).f_C, ((*(R22 *)rt_nil_check(l_T_1808))).f_SCALE, l_S_1811), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1816;
{ R26 rv1818 = r_MKET(l_C_1817, r_INT_TYPE(l_S_1811));
return rv1818; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_FLOAT))
{
{ R26 rv1819 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1807).f_C, r_NUM(l_S_1811), l_RND_1810), r_INT_TYPE(l_S_1811));
return rv1819; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1808))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1808))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1808))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1820 = r_MKET(r_RESCALE_C((l_V_1807).f_C, ((rt_int)0LL), l_S_1811), r_INT_TYPE(l_S_1811));
return rv1820; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_BITS))
{
{ R26 rv1821 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1807).f_C), ((rt_int)0LL), l_S_1811), r_INT_TYPE(l_S_1811));
return rv1821; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1808))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_1808, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1822 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1807).f_C, r_NUM(l_S_1811), l_RND_1810), r_INT_TYPE(l_S_1811));
return rv1822; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1807).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1823; memset(&l_T_1823, 0, sizeof l_T_1823);
l_T_1823 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1824; memset(&l_K_1824, 0, sizeof l_K_1824);
l_K_1824 = ((*(R22 *)rt_nil_check(l_T_1823))).f_KIND;
if ((l_K_1824 == g_T_BITS))
{
{ R26 rv1825 = p_V;
return rv1825; }
}
else if ((l_K_1824 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1823))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1823))).f_REPS))).f_B == NULL)))
{
{ R26 rv1826 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1823)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1823)));
return rv1826; }
}
}
{ R26 rv1827 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1823))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1823)));
return rv1827; }
}
else if ((l_K_1824 == g_T_STR))
{
{ R26 rv1828 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1828; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1824 == g_T_INT))
{
{ R26 rv1829 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1829; }
}
else if ((l_K_1824 == g_T_BOOL))
{
{ R26 rv1830 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1830; }
}
else if ((l_K_1824 == g_T_FLOAT))
{
{ R26 rv1831 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1831; }
}
else if ((l_K_1824 == g_T_STR))
{
{ R26 rv1832 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1832; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1823));
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
{ rt_int rv1833 = 0;
return rv1833; }
}
{ rt_int rv1834 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1834; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1835; memset(&l_N_1835, 0, sizeof l_N_1835);
l_N_1835 = ((rt_int)0LL);
R27 * l_P_1836; memset(&l_P_1836, 0, sizeof l_P_1836);
l_P_1836 = p_A;
for (;;) {
if ((l_P_1836 == NULL)) goto L_end1837;
{
l_N_1835 = rt_add(l_N_1835, ((rt_int)1LL));
l_P_1836 = ((*(R27 *)rt_nil_check(l_P_1836))).f_NEXT;
}
RT_B_TICK();
} L_end1837: ;
{ rt_int rv1838 = l_N_1835;
return rv1838; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1839; memset(&l_HEAD_1839, 0, sizeof l_HEAD_1839);
l_HEAD_1839 = NULL;
R27 * l_TAIL_1840; memset(&l_TAIL_1840, 0, sizeof l_TAIL_1840);
l_TAIL_1840 = NULL;
rt_int l_G_1841; memset(&l_G_1841, 0, sizeof l_G_1841);
l_G_1841 = ((rt_int)0LL);
{ rt_int it1843_lo = ((rt_int)0LL), it1843_hi = ((rt_int)2LL);
for (rt_int it1843 = it1843_lo; it1843 <= it1843_hi; it1843++) {
{
{
R21 * l_P_1844; memset(&l_P_1844, 0, sizeof l_P_1844);
l_P_1844 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1843 == ((rt_int)1LL)))
{
l_P_1844 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1843 == ((rt_int)2LL)))
{
l_P_1844 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1844 == NULL)) goto L_end1845;
{
{
R27 * l_A_1846; memset(&l_A_1846, 0, sizeof l_A_1846);
l_A_1846 = r_NODE_ARG(l_P_1844, it1843, NULL);
if ((l_TAIL_1840 == NULL))
{
l_HEAD_1839 = l_A_1846;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1840))).f_NEXT = l_A_1846;
}
l_TAIL_1840 = l_A_1846;
}
l_P_1844 = ((*(R21 *)rt_nil_check(l_P_1844))).f_NEXT;
}
RT_B_TICK();
} L_end1845: ;
}
}
RT_B_TICK();
if (it1843 == it1843_hi) break;
} } L_end1842: ;
{ R27 * rv1847 = l_HEAD_1839;
return rv1847; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1848; memset(&l_SAVED_1848, 0, sizeof l_SAVED_1848);
l_SAVED_1848 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1849; memset(&l_SAVED_Q_1849, 0, sizeof l_SAVED_Q_1849);
l_SAVED_Q_1849 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1850; memset(&l_V_1850, 0, sizeof l_V_1850);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1850, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1848;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1849;
{ R26 rv1851 = l_V_1850;
return rv1851; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1852; memset(&l_ARGS_1852, 0, sizeof l_ARGS_1852);
l_ARGS_1852 = r_CALL_ARGS(p_E);
R12 * l_Y_1853; memset(&l_Y_1853, 0, sizeof l_Y_1853);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1854 = r_START_IO_CALL(p_E);
return rv1854; }
}
l_Y_1853 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1853 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1853))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1855 = r_BUILTIN(p_E, p_WANT);
return rv1855; }
}
{ R26 rv1856 = r_CALL_SYM(l_Y_1853, l_ARGS_1852, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1856; }
}
l_Y_1853 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1852, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1853 == NULL))
{
{
R12 * l_P_1857; memset(&l_P_1857, 0, sizeof l_P_1857);
l_P_1857 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1857 == NULL)) goto L_end1858;
{
if ((((*(R12 *)rt_nil_check(l_P_1857))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1859 = r_BUILTIN(p_E, p_WANT);
return rv1859; }
}
l_P_1857 = r_LOOKUP_NEXT(l_P_1857);
}
RT_B_TICK();
} L_end1858: ;
}
{
R12 * l_B_1860; memset(&l_B_1860, 0, sizeof l_B_1860);
l_B_1860 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1860 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1860))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1861 = r_BUILTIN(p_E, p_WANT);
return rv1861; }
}
if (((((*(R12 *)rt_nil_check(l_B_1860))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1860))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1862; memset(&l_BASE_1862, 0, sizeof l_BASE_1862);
S_R10(&l_BASE_1862, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1862).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1863; memset(&l_N_1863, 0, sizeof l_N_1863);
l_N_1863 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1863))).f_NAME, l_BASE_1862, 0);
{ R26 rv1864 = r_BUILTIN(l_N_1863, p_WANT);
return rv1864; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1865 = r_CALL_SYM(l_Y_1853, l_ARGS_1852, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1865; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1866; memset(&l_S_1866, 0, sizeof l_S_1866);
l_S_1866 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1866, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1868_lo = ((rt_int)1LL), it1868_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1868 = it1868_lo; it1868 <= it1868_hi; it1868++) {
{
if (rt_b_eq(rt_b_slice(l_S_1866, it1868, it1868), rt_str("$", 1)))
{
{
R10 l_P_1869; memset(&l_P_1869, 0, sizeof l_P_1869);
S_R10(&l_P_1869, r_MKN(rt_b_slice(l_S_1866, ((rt_int)0LL), rt_sub(it1868, ((rt_int)1LL)))), 0);
R10 l_B_1870; memset(&l_B_1870, 0, sizeof l_B_1870);
S_R10(&l_B_1870, r_MKN(rt_b_slice(l_S_1866, rt_add(it1868, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1869) || r_TEQS(l_P_1869, rt_str("INTEGER", 7))) || r_TEQS(l_P_1869, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1869, rt_str("ENUM", 4))) || r_TEQS(l_P_1869, rt_str("ARRAY", 5))) || r_TEQS(l_P_1869, rt_str("RECORD", 6))) || r_TEQS(l_P_1869, rt_str("PTR", 3))) || r_TEQS(l_P_1869, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1871; memset(&l_Y_1871, 0, sizeof l_Y_1871);
l_Y_1871 = r_LOOKUP(l_B_1870);
for (;;) {
if ((l_Y_1871 == NULL)) goto L_end1872;
{
if ((((*(R12 *)rt_nil_check(l_Y_1871))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1873 = l_B_1870;
return rv1873; }
}
l_Y_1871 = r_LOOKUP_NEXT(l_Y_1871);
}
RT_B_TICK();
} L_end1872: ;
}
}
}
{ R10 rv1874 = r_NO_TEXT();
return rv1874; }
}
}
RT_B_TICK();
if (it1868 == it1868_hi) break;
} } L_end1867: ;
{ R10 rv1875 = r_NO_TEXT();
return rv1875; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1876; memset(&l_B_1876, 0, sizeof l_B_1876);
l_B_1876 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1877; memset(&l_S_1877, 0, sizeof l_S_1877);
l_S_1877 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_1877, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1879_lo = ((rt_int)1LL), it1879_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1879 = it1879_lo; it1879 <= it1879_hi; it1879++) {
{
if (rt_b_eq(rt_b_slice(l_S_1877, it1879, it1879), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1877, ((rt_int)0LL), rt_sub(it1879, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1880 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1877, rt_add(it1879, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1880; }
}
goto L_end1878;
}
}
RT_B_TICK();
if (it1879 == it1879_hi) break;
} } L_end1878: ;
}
for (;;) {
if ((l_B_1876 == NULL)) goto L_end1881;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1876))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1876))).f_NAME, p_NAME)))
{
{ R12 * rv1882 = ((*(R20 *)rt_nil_check(l_B_1876))).f_R;
return rv1882; }
}
l_B_1876 = ((*(R20 *)rt_nil_check(l_B_1876))).f_NEXT;
}
RT_B_TICK();
} L_end1881: ;
{ R12 * rv1883 = NULL;
return rv1883; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1884 = 0;
return rv1884; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1885 = 0;
return rv1885; }
}
}
}
{ rt_int rv1886 = 1;
return rv1886; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1887; memset(&l_Y_1887, 0, sizeof l_Y_1887);
l_Y_1887 = r_LOOKUP(p_NAME);
R12 * l_BEST_1888; memset(&l_BEST_1888, 0, sizeof l_BEST_1888);
l_BEST_1888 = NULL;
rt_int l_BEST_SCORE_1889; memset(&l_BEST_SCORE_1889, 0, sizeof l_BEST_SCORE_1889);
l_BEST_SCORE_1889 = ((rt_int)0LL);
rt_int l_TIES_1890; memset(&l_TIES_1890, 0, sizeof l_TIES_1890);
l_TIES_1890 = ((rt_int)0LL);
rt_int l_COUNT_1891; memset(&l_COUNT_1891, 0, sizeof l_COUNT_1891);
l_COUNT_1891 = ((rt_int)0LL);
rt_int l_N_1892; memset(&l_N_1892, 0, sizeof l_N_1892);
l_N_1892 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1887 == NULL)) goto L_end1893;
{
if ((!r_IS_ROUTINE(l_Y_1887)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1887))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1893;
}
}
else if (r_CANDIDATE(l_Y_1887, p_NAME))
{
{
R12 * l_R_1894; memset(&l_R_1894, 0, sizeof l_R_1894);
l_R_1894 = r_ORIGINAL(l_Y_1887);
rt_int l_SCORE_1895; memset(&l_SCORE_1895, 0, sizeof l_SCORE_1895);
r_ROUTINE_HEADER(l_R_1894);
if ((((r_PARAM_COUNT(l_R_1894) == l_N_1892) && (!r_SEEN_ROUTINE(l_R_1894, p_NAME, l_Y_1887))) && (!r_HIDDEN_ROUTINE(l_R_1894, p_NAME, l_Y_1887))))
{
l_COUNT_1891 = rt_add(l_COUNT_1891, ((rt_int)1LL));
l_SCORE_1895 = r_MATCH_SCORE(l_R_1894, p_ARGS);
if ((l_SCORE_1895 > l_BEST_SCORE_1889))
{
l_BEST_1888 = l_R_1894;
l_BEST_SCORE_1889 = l_SCORE_1895;
l_TIES_1890 = ((rt_int)0LL);
}
else if (((l_SCORE_1895 == l_BEST_SCORE_1889) && (l_SCORE_1895 > ((rt_int)0LL))))
{
l_TIES_1890 = rt_add(l_TIES_1890, ((rt_int)1LL));
}
}
}
}
l_Y_1887 = r_LOOKUP_NEXT(l_Y_1887);
}
RT_B_TICK();
} L_end1893: ;
if (((l_TIES_1890 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1896 = l_BEST_1888;
return rv1896; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1897; memset(&l_Y_1897, 0, sizeof l_Y_1897);
l_Y_1897 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1897 == p_STOP) || (l_Y_1897 == NULL))) goto L_end1898;
{
if ((((*(R12 *)rt_nil_check(l_Y_1897))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1897) == p_R))
{
{ rt_int rv1899 = 1;
return rv1899; }
}
}
l_Y_1897 = r_LOOKUP_NEXT(l_Y_1897);
}
RT_B_TICK();
} L_end1898: ;
{ rt_int rv1900 = 0;
return rv1900; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1901; memset(&l_Y_1901, 0, sizeof l_Y_1901);
l_Y_1901 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1901 == p_STOP) || (l_Y_1901 == NULL))) goto L_end1902;
{
if (((((*(R12 *)rt_nil_check(l_Y_1901))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1901))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1903; memset(&l_O_1903, 0, sizeof l_O_1903);
l_O_1903 = r_ORIGINAL(l_Y_1901);
if ((!(l_O_1903 == p_R)))
{
r_ROUTINE_HEADER(l_O_1903);
if (r_SAME_SIGNATURE(l_O_1903, p_R))
{
{ rt_int rv1904 = 1;
return rv1904; }
}
}
}
}
l_Y_1901 = r_LOOKUP_NEXT(l_Y_1901);
}
RT_B_TICK();
} L_end1902: ;
{ rt_int rv1905 = 0;
return rv1905; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1906; memset(&l_P_1906, 0, sizeof l_P_1906);
l_P_1906 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1907; memset(&l_Q_1907, 0, sizeof l_Q_1907);
l_Q_1907 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1908 = 0;
return rv1908; }
}
for (;;) {
if (((l_P_1906 == NULL) || (l_Q_1907 == NULL))) goto L_end1909;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1906))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1907))).f_MODE)))
{
{ rt_int rv1910 = 0;
return rv1910; }
}
if (((((*(R28 *)rt_nil_check(l_P_1906))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1907))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1906))).f_T == ((*(R28 *)rt_nil_check(l_Q_1907))).f_T)))
{
{ rt_int rv1911 = 0;
return rv1911; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1906))).f_T, ((*(R28 *)rt_nil_check(l_Q_1907))).f_T)))
{
{ rt_int rv1912 = 0;
return rv1912; }
}
l_P_1906 = ((*(R28 *)rt_nil_check(l_P_1906))).f_NEXT;
l_Q_1907 = ((*(R28 *)rt_nil_check(l_Q_1907))).f_NEXT;
}
RT_B_TICK();
} L_end1909: ;
{ rt_int rv1913 = ((l_P_1906 == NULL) && (l_Q_1907 == NULL));
return rv1913; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1914; memset(&l_N_1914, 0, sizeof l_N_1914);
l_N_1914 = ((rt_int)0LL);
R28 * l_P_1915; memset(&l_P_1915, 0, sizeof l_P_1915);
l_P_1915 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1915 == NULL)) goto L_end1916;
{
l_N_1914 = rt_add(l_N_1914, ((rt_int)1LL));
l_P_1915 = ((*(R28 *)rt_nil_check(l_P_1915))).f_NEXT;
}
RT_B_TICK();
} L_end1916: ;
{ rt_int rv1917 = l_N_1914;
return rv1917; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1918; memset(&l_P_1918, 0, sizeof l_P_1918);
l_P_1918 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1919; memset(&l_A_1919, 0, sizeof l_A_1919);
l_A_1919 = p_ARGS;
rt_int l_EXACT_1920; memset(&l_EXACT_1920, 0, sizeof l_EXACT_1920);
l_EXACT_1920 = 1;
R20 * l_BS_1921; memset(&l_BS_1921, 0, sizeof l_BS_1921);
l_BS_1921 = r_NEW_BINDS();
R22 * l_PT_1922; memset(&l_PT_1922, 0, sizeof l_PT_1922);
for (;;) {
if ((l_P_1918 == NULL)) goto L_end1923;
{
l_PT_1922 = r_FORMAL_VIEW(p_R, l_P_1918);
if ((!(((*(R28 *)rt_nil_check(l_P_1918))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1919))).f_MODE)))
{
{ rt_int rv1924 = ((rt_int)0LL);
return rv1924; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1918))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1918, l_A_1919, l_BS_1921)))
{
{ rt_int rv1925 = ((rt_int)0LL);
return rv1925; }
}
}
else if ((l_PT_1922 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1919))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1919))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1926 = ((rt_int)0LL);
return rv1926; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1919))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1919))).f_E, l_PT_1922)))
{
{ rt_int rv1927 = ((rt_int)0LL);
return rv1927; }
}
}
else
{
r_TYPE_ARG(l_A_1919);
{
R22 * l_AT_1928; memset(&l_AT_1928, 0, sizeof l_AT_1928);
l_AT_1928 = (((*(R27 *)rt_nil_check(l_A_1919))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_1922, l_AT_1928) || (((((*(R22 *)rt_nil_check(l_AT_1928))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1922)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1929 = ((rt_int)0LL);
return rv1929; }
}
if ((!r_SAME_TYPE(l_PT_1922, l_AT_1928)))
{
if ((((*(R28 *)rt_nil_check(l_P_1918))).f_MODE == g_M_INOUT))
{
{ rt_int rv1930 = ((rt_int)0LL);
return rv1930; }
}
l_EXACT_1920 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1928)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1922)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1918))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1928))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_1922))).f_SCALE)))
{
{ rt_int rv1931 = ((rt_int)0LL);
return rv1931; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1918))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_1922))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1928))).f_SCALE)))
{
{ rt_int rv1932 = ((rt_int)0LL);
return rv1932; }
}
}
}
}
l_P_1918 = ((*(R28 *)rt_nil_check(l_P_1918))).f_NEXT;
l_A_1919 = ((*(R27 *)rt_nil_check(l_A_1919))).f_NEXT;
}
RT_B_TICK();
} L_end1923: ;
if (l_EXACT_1920)
{
{ rt_int rv1933 = ((rt_int)2LL);
return rv1933; }
}
{ rt_int rv1934 = ((rt_int)1LL);
return rv1934; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1935; memset(&l_RT_1935, 0, sizeof l_RT_1935);
l_RT_1935 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_ENUM))
{
{ rt_int rv1936 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1935) == NULL));
return rv1936; }
}
{ rt_int rv1937 = 0;
return rv1937; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1938 = (((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_PTR);
return rv1938; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1939 = (((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_REC);
return rv1939; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1940 = (((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_ARR);
return rv1940; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1941 = (((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_INT);
return rv1941; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1942 = ((((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1935))).f_KIND == g_T_SEM));
return rv1942; }
}
{ rt_int rv1943 = 0;
return rv1943; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1944; memset(&l_Y_1944, 0, sizeof l_Y_1944);
l_Y_1944 = r_ORIGINAL(p_Y0);
R28 * l_P_1945; memset(&l_P_1945, 0, sizeof l_P_1945);
R27 * l_A_1946; memset(&l_A_1946, 0, sizeof l_A_1946);
l_A_1946 = p_ARGS;
R10 l_C_1947; memset(&l_C_1947, 0, sizeof l_C_1947);
S_R10(&l_C_1947, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1948; memset(&l_SEP_1948, 0, sizeof l_SEP_1948);
S_R10(&l_SEP_1948, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1949; memset(&l_PRE_1949, 0, sizeof l_PRE_1949);
S_R10(&l_PRE_1949, r_MK(rt_str("", 0)), 0);
R10 l_POST_1950; memset(&l_POST_1950, 0, sizeof l_POST_1950);
S_R10(&l_POST_1950, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1951; memset(&l_SHARED_1951, 0, sizeof l_SHARED_1951);
l_SHARED_1951 = 0;
R22 * l_PT_1952; memset(&l_PT_1952, 0, sizeof l_PT_1952);
if (((*(R12 *)rt_nil_check(l_Y_1944))).f_GENERIC)
{
l_Y_1944 = r_INSTANCE(l_Y_1944, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1944, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1944))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1947, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1944))).f_LEVEL), 0);
S_R10(&l_SEP_1948, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1953; memset(&l_Q_1953, 0, sizeof l_Q_1953);
l_Q_1953 = p_ARGS;
for (;;) {
if ((l_Q_1953 == NULL)) goto L_end1954;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1953))).f_MODE == g_M_IN)))
{
l_SHARED_1951 = 1;
}
l_Q_1953 = ((*(R27 *)rt_nil_check(l_Q_1953))).f_NEXT;
}
RT_B_TICK();
} L_end1954: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1944))).f_USES == NULL)))
{
l_SHARED_1951 = 1;
}
}
l_P_1945 = ((*(R12 *)rt_nil_check(l_Y_1944))).f_PARAMS;
for (;;) {
if ((l_P_1945 == NULL)) goto L_end1955;
{
if ((l_A_1946 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_1952 = r_FORMAL_VIEW(l_Y_1944, l_P_1945);
if ((l_PT_1952 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1945))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1952)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1956; memset(&l_V_1956, 0, sizeof l_V_1956);
R10 l_CV_1957; memset(&l_CV_1957, 0, sizeof l_CV_1957);
if ((((*(R27 *)rt_nil_check(l_A_1946))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1946))))
{
S_R26(&l_V_1956, ((*(R27 *)rt_nil_check(l_A_1946))).f_V, 0);
}
else
{
S_R26(&l_V_1956, r_EXPR(((*(R27 *)rt_nil_check(l_A_1946))).f_E, l_PT_1952), 0);
}
S_R10(&l_CV_1957, r_CONVERT(l_V_1956, l_PT_1952, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1951 && (l_V_1956).f_LVAL) && r_IS_STRUCTURED(l_PT_1952)))
{
S_R10(&l_CV_1957, r_COPY_OF(l_PT_1952, l_CV_1957), 0);
}
S_R10(&l_C_1947, r_FMT3(rt_str("@@@", 3), l_C_1947, l_SEP_1948, l_CV_1957), 0);
S_R10(&l_SEP_1948, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1958; memset(&l_V_1958, 0, sizeof l_V_1958);
if (((*(R27 *)rt_nil_check(l_A_1946))).f_HAVE)
{
S_R26(&l_V_1958, ((*(R27 *)rt_nil_check(l_A_1946))).f_V, 0);
}
else
{
S_R26(&l_V_1958, r_EXPR(((*(R27 *)rt_nil_check(l_A_1946))).f_E, l_PT_1952), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1946))).f_E == NULL)) && (!(l_V_1958).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1946))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1946))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1958, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1958).f_C), (l_V_1958).f_T), 0);
(l_V_1958).f_LVAL = 1;
}
}
if ((!(l_V_1958).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_1952, (l_V_1958).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_1952));
}
if (((((*(R28 *)rt_nil_check(l_P_1945))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_1952, (l_V_1958).f_T) && r_SAME_RANGE(l_PT_1952, (l_V_1958).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1945))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_1952, (l_V_1958).f_T) && r_SAME_RANGE(l_PT_1952, (l_V_1958).f_T))))))
{
{
R10 l_TMP_1959; memset(&l_TMP_1959, 0, sizeof l_TMP_1959);
S_R10(&l_TMP_1959, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1960; memset(&l_AP_1960, 0, sizeof l_AP_1960);
S_R10(&l_AP_1960, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1949, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1949, r_CTYPE((l_V_1958).f_T), l_AP_1960, (l_V_1958).f_C), 0);
S_R10(&l_PRE_1949, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1949, r_CTYPE(l_PT_1952), l_TMP_1959, r_COPY_OF((l_V_1958).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1960))), 0);
S_R10(&l_POST_1950, r_FMT2(rt_str("@ @", 3), l_POST_1950, r_STORE_CODE((l_V_1958).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1960), r_MKET(l_TMP_1959, l_PT_1952), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1947, r_FMT3(rt_str("@@&@", 4), l_C_1947, l_SEP_1948, l_TMP_1959), 0);
}
}
else
{
S_R10(&l_C_1947, r_FMT3(rt_str("@@&@", 4), l_C_1947, l_SEP_1948, (l_V_1958).f_C), 0);
}
S_R10(&l_SEP_1948, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1946 = ((*(R27 *)rt_nil_check(l_A_1946))).f_NEXT;
l_P_1945 = ((*(R28 *)rt_nil_check(l_P_1945))).f_NEXT;
}
RT_B_TICK();
} L_end1955: ;
if ((!(l_A_1946 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1949).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1961 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1949, ((*(R12 *)rt_nil_check(l_Y_1944))).f_ACCESS, l_C_1947, l_POST_1950), r_RESULT_VIEW(l_Y_1944));
return rv1961; }
}
{ R26 rv1962 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1944))).f_ACCESS, l_C_1947), r_RESULT_VIEW(l_Y_1944));
return rv1962; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv1963 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv1963; }
}
{ R22 * rv1964 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv1964; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv1965 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1965; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv1966 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1966; }
}
{ R22 * rv1967 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv1967; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv1968 = p_T;
return rv1968; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv1969 = p_T;
return rv1969; }
}
{
R12 * l_M_1970; memset(&l_M_1970, 0, sizeof l_M_1970);
l_M_1970 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_1970 == NULL)) goto L_end1971;
{
{
R12 * l_Y_1972; memset(&l_Y_1972, 0, sizeof l_Y_1972);
l_Y_1972 = r_MEMBER_TYPE(l_M_1970, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_1972 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_1972))).f_EXPORTED)
{
{ R22 * rv1973 = r_ABSTRACT_VIEW(l_Y_1972, p_T);
return rv1973; }
}
{ R22 * rv1974 = p_T;
return rv1974; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_1970))).f_MODL))
{
goto L_end1971;
}
l_M_1970 = ((*(R12 *)rt_nil_check(l_M_1970))).f_MODL;
}
RT_B_TICK();
} L_end1971: ;
}
{ R22 * rv1975 = p_T;
return rv1975; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1976; memset(&l_Y_1976, 0, sizeof l_Y_1976);
l_Y_1976 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_1977; memset(&l_Z_1977, 0, sizeof l_Z_1977);
l_Z_1977 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_1977 == NULL)) goto L_end1978;
{
if ((((((*(R12 *)rt_nil_check(l_Z_1977))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_1977))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_1977))).f_ORIG == NULL)))
{
{ R12 * rv1979 = l_Z_1977;
return rv1979; }
}
l_Z_1977 = r_LOOKUP_NEXT(l_Z_1977);
}
RT_B_TICK();
} L_end1978: ;
}
{ R12 * rv1980 = NULL;
return rv1980; }
}
for (;;) {
if ((l_Y_1976 == NULL)) goto L_end1981;
{
if (((((*(R12 *)rt_nil_check(l_Y_1976))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_1976))).f_NAME, p_NAME)))
{
{ R12 * rv1982 = l_Y_1976;
return rv1982; }
}
l_Y_1976 = ((*(R12 *)rt_nil_check(l_Y_1976))).f_SNEXT;
}
RT_B_TICK();
} L_end1981: ;
{ R12 * rv1983 = NULL;
return rv1983; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1984; memset(&l_K_1984, 0, sizeof l_K_1984);
l_K_1984 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1985 = ((((l_K_1984 == g_T_STR) || (l_K_1984 == g_T_BITS)) || (l_K_1984 == g_T_ARR)) || (l_K_1984 == g_T_REC));
return rv1985; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1986; memset(&l_RA_1986, 0, sizeof l_RA_1986);
l_RA_1986 = r_REAL_TYPE(p_A);
R22 * l_RB_1987; memset(&l_RB_1987, 0, sizeof l_RB_1987);
l_RB_1987 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1986)))
{
{ rt_int rv1988 = 1;
return rv1988; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1986))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1986))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1987))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1987))).f_HI_C)))
{
{ rt_int rv1989 = 1;
return rv1989; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1986))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1987))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1990 = ((((*(R22 *)rt_nil_check(l_RA_1986))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1987))).f_LO_C).f_LEN);
return rv1990; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1986))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1987))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1986))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1987))).f_MHI).f_OK))
{
{ rt_int rv1991 = (((((*(R22 *)rt_nil_check(l_RA_1986))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1987))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1986))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1987))).f_MHI).f_V));
return rv1991; }
}
{ rt_int rv1992 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1986))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1987))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1986))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1987))).f_HI_C));
return rv1992; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1993 = 0;
return rv1993; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1994 = 1;
return rv1994; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1995 = 1;
return rv1995; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1996 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1996; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1997 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1997; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1998 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1998; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1999 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1999; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2000 = 0;
return rv2000; }
}
{
R12 * l_Y_2001; memset(&l_Y_2001, 0, sizeof l_Y_2001);
l_Y_2001 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2002; memset(&l_A_2002, 0, sizeof l_A_2002);
l_A_2002 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2003; memset(&l_F_2003, 0, sizeof l_F_2003);
if ((l_Y_2001 == NULL))
{
{ rt_int rv2004 = 0;
return rv2004; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2001))).f_KIND == g_Y_GEN))
{
{ rt_int rv2005 = 1;
return rv2005; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2001))).f_DECL == NULL))
{
{ rt_int rv2006 = 0;
return rv2006; }
}
l_F_2003 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2001))).f_DECL))).f_A;
for (;;) {
if ((l_F_2003 == NULL)) goto L_end2007;
{
{
R21 * l_N_2008; memset(&l_N_2008, 0, sizeof l_N_2008);
l_N_2008 = ((*(R21 *)rt_nil_check(l_F_2003))).f_A;
for (;;) {
if ((l_N_2008 == NULL)) goto L_end2009;
{
if ((l_A_2002 == NULL))
{
{ rt_int rv2010 = 0;
return rv2010; }
}
if (((((*(R21 *)rt_nil_check(l_F_2003))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2002))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2002))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2002)))))
{
{ rt_int rv2011 = 1;
return rv2011; }
}
l_A_2002 = ((*(R21 *)rt_nil_check(l_A_2002))).f_NEXT;
l_N_2008 = ((*(R21 *)rt_nil_check(l_N_2008))).f_NEXT;
}
RT_B_TICK();
} L_end2009: ;
}
l_F_2003 = ((*(R21 *)rt_nil_check(l_F_2003))).f_NEXT;
}
RT_B_TICK();
} L_end2007: ;
}
}
{ rt_int rv2012 = 0;
return rv2012; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2013; memset(&l_P_2013, 0, sizeof l_P_2013);
l_P_2013 = p_A;
for (;;) {
if ((l_P_2013 == NULL)) goto L_end2014;
{
if (((((*(R21 *)rt_nil_check(l_P_2013))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2013))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2015 = 1;
return rv2015; }
}
l_P_2013 = ((*(R21 *)rt_nil_check(l_P_2013))).f_NEXT;
}
RT_B_TICK();
} L_end2014: ;
{ rt_int rv2016 = 0;
return rv2016; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2017; memset(&l_ENTERED_2017, 0, sizeof l_ENTERED_2017);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2017 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_2017)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2018; memset(&l_R_2018, 0, sizeof l_R_2018);
l_R_2018 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2019; memset(&l_P_2019, 0, sizeof l_P_2019);
R28 * l_TAIL_2020; memset(&l_TAIL_2020, 0, sizeof l_TAIL_2020);
l_TAIL_2020 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2019 = ((*(R21 *)rt_nil_check(l_R_2018))).f_A;
for (;;) {
if ((l_P_2019 == NULL)) goto L_end2021;
{
if (((((*(R21 *)rt_nil_check(l_P_2019))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2019))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2019 = ((*(R21 *)rt_nil_check(l_P_2019))).f_NEXT;
}
RT_B_TICK();
} L_end2021: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2018))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2019 = ((*(R21 *)rt_nil_check(l_R_2018))).f_A;
for (;;) {
if ((l_P_2019 == NULL)) goto L_end2022;
{
{
R28 * l_PM_2023; memset(&l_PM_2023, 0, sizeof l_PM_2023);
l_PM_2023 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2023)), ({ R28 rc2024; memset(&rc2024, 0, sizeof rc2024);  S_R10(&rc2024.f_NAME, ((*(R21 *)rt_nil_check(l_P_2019))).f_NAME, 0); rc2024.f_MODE = ((*(R21 *)rt_nil_check(l_P_2019))).f_IV; rc2024.f_T = NULL; rc2024.f_TS = ((*(R21 *)rt_nil_check(l_P_2019))).f_B; rc2024.f_NEXT = NULL; rc2024; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2018))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2019))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2019))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2023))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2019))).f_B);
}
if ((l_TAIL_2020 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2023;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2020))).f_NEXT = l_PM_2023;
}
l_TAIL_2020 = l_PM_2023;
}
l_P_2019 = ((*(R21 *)rt_nil_check(l_P_2019))).f_NEXT;
}
RT_B_TICK();
} L_end2022: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2025; memset(&l_R_2025, 0, sizeof l_R_2025);
l_R_2025 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2026; memset(&l_T_2026, 0, sizeof l_T_2026);
if ((((*(R21 *)rt_nil_check(l_R_2025))).f_B == NULL))
{
{ R22 * rv2027 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2027; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2028; memset(&l_P_2028, 0, sizeof l_P_2028);
l_P_2028 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2028 == NULL)) goto L_end2029;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2028))).f_T == NULL)))
{
{
R12 * l_V_2030; memset(&l_V_2030, 0, sizeof l_V_2030);
l_V_2030 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2028))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2030))).f_T = ((*(R28 *)rt_nil_check(l_P_2028))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2030))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2028))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2030))).f_INPUT = 1;
r_DEFINE(l_V_2030, ((*(R21 *)rt_nil_check(l_R_2025))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2028))).f_T, ((*(R12 *)rt_nil_check(l_V_2030))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2025))).f_LINE, 0);
}
}
l_P_2028 = ((*(R28 *)rt_nil_check(l_P_2028))).f_NEXT;
}
RT_B_TICK();
} L_end2029: ;
}
l_T_2026 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2025))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2031 = l_T_2026;
return rv2031; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2032; memset(&l_PS_2032, 0, sizeof l_PS_2032);
S_R10(&l_PS_2032, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2033; memset(&l_SEP_2033, 0, sizeof l_SEP_2033);
S_R10(&l_SEP_2033, r_MK(rt_str("", 0)), 0);
R28 * l_P_2034; memset(&l_P_2034, 0, sizeof l_P_2034);
l_P_2034 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2032, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2033, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2034 == NULL)) goto L_end2035;
{
if ((((*(R28 *)rt_nil_check(l_P_2034))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2034))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2034))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2032, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2032, l_SEP_2033, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2034))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2034))).f_NAME)), 0);
S_R10(&l_SEP_2033, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2032, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2032, l_SEP_2033, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2034))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2034))).f_NAME)), 0);
S_R10(&l_SEP_2033, r_MK(rt_str(", ", 2)), 0);
}
l_P_2034 = ((*(R28 *)rt_nil_check(l_P_2034))).f_NEXT;
}
RT_B_TICK();
} L_end2035: ;
if (((l_PS_2032).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2032, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2036 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2032);
return rv2036; }
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
R25 * l_B_2037; memset(&l_B_2037, 0, sizeof l_B_2037);
l_B_2037 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2038; memset(&l_I_2038, 0, sizeof l_I_2038);
l_I_2038 = ((rt_int)0LL);
for (;;) {
if ((l_B_2037 == NULL)) goto L_end2039;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2037))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2037))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2038)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2037))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2037))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2037))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2037))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2038)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2037))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2038), p_PC, r_NUM(l_I_2038)), ((*(R25 *)rt_nil_check(l_B_2037))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2038 = rt_add(l_I_2038, ((rt_int)1LL));
l_B_2037 = ((*(R25 *)rt_nil_check(l_B_2037))).f_NEXT;
}
RT_B_TICK();
} L_end2039: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2040; memset(&l_U_2040, 0, sizeof l_U_2040);
l_U_2040 = r_REAL_TYPE(p_T);
R24 * l_F_2041; memset(&l_F_2041, 0, sizeof l_F_2041);
l_F_2041 = ((*(R22 *)rt_nil_check(l_U_2040))).f_FIELDS;
R25 * l_A_2042; memset(&l_A_2042, 0, sizeof l_A_2042);
l_A_2042 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2041 == NULL) || (l_A_2042 == NULL))) goto L_end2043;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2041))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2042))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2042))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2041))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2042 = ((*(R25 *)rt_nil_check(l_A_2042))).f_NEXT;
}
l_F_2041 = ((*(R24 *)rt_nil_check(l_F_2041))).f_NEXT;
}
RT_B_TICK();
} L_end2043: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2044 = 0;
return rv2044; }
}
{ rt_int rv2045 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2045; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2046 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2046; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2047; memset(&l_OLD_2047, 0, sizeof l_OLD_2047);
l_OLD_2047 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2047 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2047))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2047))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2047))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2048; memset(&l_G_2048, 0, sizeof l_G_2048);
l_G_2048 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2048))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2048))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2048))).f_INPUT = 1;
r_DEFINE(l_G_2048, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2049; memset(&l_B_2049, 0, sizeof l_B_2049);
l_B_2049 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2049)), ({ R20 rc2050; memset(&rc2050, 0, sizeof rc2050);  S_R10(&rc2050.f_NAME, r_NO_TEXT(), 0); rc2050.f_T = NULL; S_R10(&rc2050.f_C, r_NO_TEXT(), 0); rc2050.f_HASMV = 0; rc2050.f_MV = ((rt_int)0LL); rc2050.f_R = NULL; rc2050.f_NEXT = NULL; rc2050; }), 0);
{ R20 * rv2051 = l_B_2049;
return rv2051; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2052; memset(&l_B_2052, 0, sizeof l_B_2052);
l_B_2052 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2052)), ({ R20 rc2053; memset(&rc2053, 0, sizeof rc2053);  S_R10(&rc2053.f_NAME, p_NAME, 0); rc2053.f_T = p_T; S_R10(&rc2053.f_C, r_NO_TEXT(), 0); rc2053.f_HASMV = (p_M).f_OK; rc2053.f_MV = (p_M).f_V; rc2053.f_R = p_R; rc2053.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2053; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2052))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2052;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2054; memset(&l_B_2054, 0, sizeof l_B_2054);
l_B_2054 = p_BS;
for (;;) {
if ((l_B_2054 == NULL)) goto L_end2055;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2054))).f_NAME, p_NAME))
{
{ R20 * rv2056 = l_B_2054;
return rv2056; }
}
l_B_2054 = ((*(R20 *)rt_nil_check(l_B_2054))).f_NEXT;
}
RT_B_TICK();
} L_end2055: ;
{ R20 * rv2057 = NULL;
return rv2057; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2058; memset(&l_RT_2058, 0, sizeof l_RT_2058);
l_RT_2058 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2059 = 1;
return rv2059; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2060 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2060; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2061 = 1;
return rv2061; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2062 = 1;
return rv2062; }
}
{
R20 * l_B_2063; memset(&l_B_2063, 0, sizeof l_B_2063);
l_B_2063 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2063 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2063))).f_T == NULL))
{
{ rt_int rv2064 = 0;
return rv2064; }
}
{ rt_int rv2065 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2063))).f_T, p_T);
return rv2065; }
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
{ rt_int rv2066 = 1;
return rv2066; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_ARR)))
{
{ rt_int rv2067 = 0;
return rv2067; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2058))).f_DIMS)))
{
{ rt_int rv2068 = 0;
return rv2068; }
}
{ rt_int rv2069 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2058))).f_ELEM, p_BS);
return rv2069; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2070 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2070; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2071 = 0;
return rv2071; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2058))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2058))).f_MHI, p_BS))))
{
{ rt_int rv2072 = 0;
return rv2072; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_INT)))
{
{ rt_int rv2073 = 0;
return rv2073; }
}
{ rt_int rv2074 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2058))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2074; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2075 = ((((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2058))).f_SCALE == ((rt_int)0LL)));
return rv2075; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2076 = 0;
return rv2076; }
}
{ rt_int rv2077 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2058))).f_SCALE), p_BS);
return rv2077; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2078 = (((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_BOOL);
return rv2078; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2079 = (((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_STR);
return rv2079; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_STR)))
{
{ rt_int rv2080 = 0;
return rv2080; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2081 = 1;
return rv2081; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_BASE == NULL)))
{
{ rt_int rv2082 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2058))).f_BASE, p_BS);
return rv2082; }
}
{ rt_int rv2083 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2083; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2084 = (((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_BITS);
return rv2084; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2085 = (((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_SEM);
return rv2085; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_PTR)))
{
{ rt_int rv2086 = 0;
return rv2086; }
}
{ rt_int rv2087 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2058), p_BS);
return rv2087; }
}
{
R12 * l_Y_2088; memset(&l_Y_2088, 0, sizeof l_Y_2088);
l_Y_2088 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2088 == NULL))
{
{ rt_int rv2089 = 0;
return rv2089; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2088))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2088))).f_DECL == NULL)))
{
{ rt_int rv2090 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2088))).f_T, p_T);
return rv2090; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2088))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2091 = 0;
return rv2091; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2088))))
{
{ rt_int rv2092 = 0;
return rv2092; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2088))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2058))).f_KIND == g_T_REC)))
{
{ rt_int rv2093 = 0;
return rv2093; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2058))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2094 = 0;
return rv2094; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2058))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2088))))
{
{ rt_int rv2095 = 0;
return rv2095; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2096 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2096; }
}
{ rt_int rv2097 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2088))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2088))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2058, p_BS);
return rv2097; }
}
{
R21 * l_F_2098; memset(&l_F_2098, 0, sizeof l_F_2098);
l_F_2098 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2088))).f_DECL))).f_A;
R21 * l_A_2099; memset(&l_A_2099, 0, sizeof l_A_2099);
l_A_2099 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2100; memset(&l_V_2100, 0, sizeof l_V_2100);
l_V_2100 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2101; memset(&l_CLASS_2101, 0, sizeof l_CLASS_2101);
l_CLASS_2101 = r_RECORD_CLASS_OF(l_RT_2058);
for (;;) {
if ((l_F_2098 == NULL)) goto L_end2102;
{
{
R21 * l_N_2103; memset(&l_N_2103, 0, sizeof l_N_2103);
l_N_2103 = ((*(R21 *)rt_nil_check(l_F_2098))).f_A;
for (;;) {
if ((l_N_2103 == NULL)) goto L_end2104;
{
if ((l_A_2099 == NULL))
{
{ rt_int rv2105 = 0;
return rv2105; }
}
if ((((*(R21 *)rt_nil_check(l_F_2098))).f_B == NULL))
{
if ((!(l_CLASS_2101 == NULL)))
{
{
R20 * l_B_2106; memset(&l_B_2106, 0, sizeof l_B_2106);
l_B_2106 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2101))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2103))).f_NAME);
if ((!(l_B_2106 == NULL)))
{
if ((!r_UNIFY(l_A_2099, ((*(R20 *)rt_nil_check(l_B_2106))).f_T, p_BS)))
{
{ rt_int rv2107 = 0;
return rv2107; }
}
}
}
}
}
else
{
if ((!(l_V_2100 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2099))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2099))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2099))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2108; memset(&l_M_2108, 0, sizeof l_M_2108);
S_R23(&l_M_2108, r_MANIFEST(l_A_2099), 0);
if (((l_M_2108).f_OK && (((*(R25 *)rt_nil_check(l_V_2100))).f_MLO).f_OK))
{
if ((!((l_M_2108).f_V == (((*(R25 *)rt_nil_check(l_V_2100))).f_MLO).f_V)))
{
{ rt_int rv2109 = 0;
return rv2109; }
}
}
}
}
l_V_2100 = ((*(R25 *)rt_nil_check(l_V_2100))).f_NEXT;
}
}
l_A_2099 = ((*(R21 *)rt_nil_check(l_A_2099))).f_NEXT;
l_N_2103 = ((*(R21 *)rt_nil_check(l_N_2103))).f_NEXT;
}
RT_B_TICK();
} L_end2104: ;
}
l_F_2098 = ((*(R21 *)rt_nil_check(l_F_2098))).f_NEXT;
}
RT_B_TICK();
} L_end2102: ;
}
{ rt_int rv2110 = 1;
return rv2110; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2111; memset(&l_R_2111, 0, sizeof l_R_2111);
l_R_2111 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2112 = NULL;
return rv2112; }
}
for (;;) {
if ((l_R_2111 == NULL)) goto L_end2113;
{
if ((((*(R12 *)rt_nil_check(l_R_2111))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2114 = l_R_2111;
return rv2114; }
}
l_R_2111 = ((*(R12 *)rt_nil_check(l_R_2111))).f_INSTANCES;
}
RT_B_TICK();
} L_end2113: ;
{ R12 * rv2115 = NULL;
return rv2115; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2116 = 1;
return rv2116; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2117 = 1;
return rv2117; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2118 = 1;
return rv2118; }
}
{
R20 * l_B_2119; memset(&l_B_2119, 0, sizeof l_B_2119);
l_B_2119 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2119 == NULL)))
{
{ rt_int rv2120 = ((((*(R20 *)rt_nil_check(l_B_2119))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2119))).f_MV == (p_M).f_V));
return rv2120; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2121 = 0;
return rv2121; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2122 = 1;
return rv2122; }
}
{
R23 l_V_2123; memset(&l_V_2123, 0, sizeof l_V_2123);
S_R23(&l_V_2123, r_MANIFEST(p_A), 0);
if (((l_V_2123).f_OK && (p_M).f_OK))
{
{ rt_int rv2124 = ((l_V_2123).f_V == (p_M).f_V);
return rv2124; }
}
}
{ rt_int rv2125 = 1;
return rv2125; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2126 = 0;
return rv2126; }
}
{ rt_int rv2127 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2127; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2128 = 1;
return rv2128; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2129 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2129; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2130; memset(&l_BS_2130, 0, sizeof l_BS_2130);
l_BS_2130 = r_NEW_BINDS();
R28 * l_P_2131; memset(&l_P_2131, 0, sizeof l_P_2131);
l_P_2131 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2132; memset(&l_A_2132, 0, sizeof l_A_2132);
l_A_2132 = p_ARGS;
for (;;) {
if ((l_P_2131 == NULL)) goto L_end2133;
{
if ((((*(R28 *)rt_nil_check(l_P_2131))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2132))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2131))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2132))).f_E), r_NO_MVAL(), NULL, l_BS_2130);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2131))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2131))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2131))).f_TS, ((*(R27 *)rt_nil_check(l_A_2132))).f_E, p_LINE), l_BS_2130);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2132))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2132))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2131))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2132))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2132))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2132))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2132))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2132))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2131))).f_TS, (((*(R27 *)rt_nil_check(l_A_2132))).f_V).f_T, l_BS_2130)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2131))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2131))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2131))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2131))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2132))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2130);
}
}
l_P_2131 = ((*(R28 *)rt_nil_check(l_P_2131))).f_NEXT;
l_A_2132 = ((*(R27 *)rt_nil_check(l_A_2132))).f_NEXT;
}
RT_B_TICK();
} L_end2133: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2130);
{
R12 * l_I_2134; memset(&l_I_2134, 0, sizeof l_I_2134);
l_I_2134 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2134 == NULL)) goto L_end2135;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2134))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2130))).f_NEXT))
{
{ R12 * rv2136 = l_I_2134;
return rv2136; }
}
l_I_2134 = ((*(R12 *)rt_nil_check(l_I_2134))).f_INSTANCES;
}
RT_B_TICK();
} L_end2135: ;
}
{ R12 * rv2137 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2130))).f_NEXT, p_ARGS);
return rv2137; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2138; memset(&l_P_2138, 0, sizeof l_P_2138);
l_P_2138 = p_A;
for (;;) {
if ((l_P_2138 == NULL)) goto L_end2139;
{
{
R20 * l_Q_2140; memset(&l_Q_2140, 0, sizeof l_Q_2140);
l_Q_2140 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2138))).f_NAME);
if ((l_Q_2140 == NULL))
{
{ rt_int rv2141 = 0;
return rv2141; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2138))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2140))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2138))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2140))).f_T == NULL)))
{
{ rt_int rv2142 = 0;
return rv2142; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2138))).f_T, ((*(R20 *)rt_nil_check(l_Q_2140))).f_T)))
{
{ rt_int rv2143 = 0;
return rv2143; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2138))).f_T, ((*(R20 *)rt_nil_check(l_Q_2140))).f_T)))
{
{ rt_int rv2144 = 0;
return rv2144; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2138))).f_T, ((*(R20 *)rt_nil_check(l_Q_2140))).f_T)))
{
{ rt_int rv2145 = 0;
return rv2145; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2138))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2140))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2138))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2140))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2138))).f_R == ((*(R20 *)rt_nil_check(l_Q_2140))).f_R))))
{
{ rt_int rv2146 = 0;
return rv2146; }
}
}
l_P_2138 = ((*(R20 *)rt_nil_check(l_P_2138))).f_NEXT;
}
RT_B_TICK();
} L_end2139: ;
{ rt_int rv2147 = 1;
return rv2147; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2148; memset(&l_RA_2148, 0, sizeof l_RA_2148);
l_RA_2148 = r_REAL_TYPE(p_A);
R22 * l_RB_2149; memset(&l_RB_2149, 0, sizeof l_RB_2149);
l_RB_2149 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2148))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2148))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2148))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2149))).f_KIND))))
{
{ rt_int rv2150 = 1;
return rv2150; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2148))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2149))).f_MLEN).f_OK))
{
{ rt_int rv2151 = ((((*(R22 *)rt_nil_check(l_RA_2148))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2149))).f_MLEN).f_V);
return rv2151; }
}
{ rt_int rv2152 = ((((*(R22 *)rt_nil_check(l_RA_2148))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2149))).f_MLEN).f_OK);
return rv2152; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2153; memset(&l_RA_2153, 0, sizeof l_RA_2153);
l_RA_2153 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2154; memset(&l_RB_2154, 0, sizeof l_RB_2154);
l_RB_2154 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2153 == NULL) || (l_RB_2154 == NULL)))
{
{ rt_int rv2155 = (l_RA_2153 == l_RB_2154);
return rv2155; }
}
if ((l_RA_2153 == l_RB_2154))
{
{ rt_int rv2156 = 1;
return rv2156; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2153))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2154))).f_NAME)))
{
{ rt_int rv2157 = 0;
return rv2157; }
}
{
R21 * l_X_2158; memset(&l_X_2158, 0, sizeof l_X_2158);
l_X_2158 = ((*(R21 *)rt_nil_check(l_RA_2153))).f_A;
R21 * l_Y_2159; memset(&l_Y_2159, 0, sizeof l_Y_2159);
l_Y_2159 = ((*(R21 *)rt_nil_check(l_RB_2154))).f_A;
for (;;) {
if (((l_X_2158 == NULL) || (l_Y_2159 == NULL))) goto L_end2160;
{
if (((((((*(R21 *)rt_nil_check(l_X_2158))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2158))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2159))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2159))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2158))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2159))).f_NAME)))
{
{ rt_int rv2161 = 0;
return rv2161; }
}
}
else
{
{
R23 l_MX_2162; memset(&l_MX_2162, 0, sizeof l_MX_2162);
S_R23(&l_MX_2162, r_MANIFEST(l_X_2158), 0);
R23 l_MY_2163; memset(&l_MY_2163, 0, sizeof l_MY_2163);
S_R23(&l_MY_2163, r_MANIFEST(l_Y_2159), 0);
if (((!((l_MX_2162).f_OK == (l_MY_2163).f_OK)) || (!((l_MX_2162).f_V == (l_MY_2163).f_V))))
{
{ rt_int rv2164 = 0;
return rv2164; }
}
}
}
l_X_2158 = ((*(R21 *)rt_nil_check(l_X_2158))).f_NEXT;
l_Y_2159 = ((*(R21 *)rt_nil_check(l_Y_2159))).f_NEXT;
}
RT_B_TICK();
} L_end2160: ;
{ rt_int rv2165 = ((((l_X_2158 == NULL) && (l_Y_2159 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2153))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2154))).f_B == NULL));
return rv2165; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2166; memset(&l_Y_2166, 0, sizeof l_Y_2166);
l_Y_2166 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2167; memset(&l_FOUND_2167, 0, sizeof l_FOUND_2167);
l_FOUND_2167 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2166 == NULL)) goto L_end2168;
{
if ((((*(R12 *)rt_nil_check(l_Y_2166))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2169; memset(&l_R_2169, 0, sizeof l_R_2169);
l_R_2169 = r_ORIGINAL(l_Y_2166);
r_ROUTINE_HEADER(l_R_2169);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2169)) && (!((*(R12 *)rt_nil_check(l_R_2169))).f_GENERIC)))
{
if (((!(l_FOUND_2167 == NULL)) && (!(l_FOUND_2167 == l_R_2169))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2167 = l_R_2169;
}
}
}
l_Y_2166 = r_LOOKUP_NEXT(l_Y_2166);
}
RT_B_TICK();
} L_end2168: ;
if ((l_FOUND_2167 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2167))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2170 = l_FOUND_2167;
return rv2170; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2171; memset(&l_NEEDL_2171, 0, sizeof l_NEEDL_2171);
l_NEEDL_2171 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2172; memset(&l_SAVED_2172, 0, sizeof l_SAVED_2172);
l_SAVED_2172 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2171 == NULL)) goto L_end2173;
{
{
R21 * l_T_2174; memset(&l_T_2174, 0, sizeof l_T_2174);
l_T_2174 = ((*(R21 *)rt_nil_check(l_NEEDL_2171))).f_A;
for (;;) {
if ((l_T_2174 == NULL)) goto L_end2175;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2174))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2176; memset(&l_ARGS_2176, 0, sizeof l_ARGS_2176);
l_ARGS_2176 = NULL;
R27 * l_TAIL_2177; memset(&l_TAIL_2177, 0, sizeof l_TAIL_2177);
l_TAIL_2177 = NULL;
R21 * l_P_2178; memset(&l_P_2178, 0, sizeof l_P_2178);
l_P_2178 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2174))).f_B))).f_A;
R12 * l_R_2179; memset(&l_R_2179, 0, sizeof l_R_2179);
rt_int l_ENTERED_2180; memset(&l_ENTERED_2180, 0, sizeof l_ENTERED_2180);
l_ENTERED_2180 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2178 == NULL)) goto L_end2181;
{
{
R27 * l_A_2182; memset(&l_A_2182, 0, sizeof l_A_2182);
if ((((*(R21 *)rt_nil_check(l_P_2178))).f_B == NULL))
{
l_A_2182 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2182 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2178))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2182))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2178))).f_IV;
if ((l_TAIL_2177 == NULL))
{
l_ARGS_2176 = l_A_2182;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2177))).f_NEXT = l_A_2182;
}
l_TAIL_2177 = l_A_2182;
}
l_P_2178 = ((*(R21 *)rt_nil_check(l_P_2178))).f_NEXT;
}
RT_B_TICK();
} L_end2181: ;
if (l_ENTERED_2180)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2179 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2174))).f_NAME, l_ARGS_2176, p_LINE, 0);
if ((l_R_2179 == NULL))
{
l_R_2179 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2174))).f_NAME);
for (;;) {
if ((l_R_2179 == NULL)) goto L_end2183;
{
if ((((*(R12 *)rt_nil_check(l_R_2179))).f_KIND == g_Y_BUILTIN))
{
goto L_end2183;
}
l_R_2179 = r_LOOKUP_NEXT(l_R_2179);
}
RT_B_TICK();
} L_end2183: ;
}
if (((l_R_2179 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2174))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2174))).f_NAME);
}
if ((!(l_R_2179 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2174))).f_NAME, NULL, r_NO_MVAL(), l_R_2179, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2174 = ((*(R21 *)rt_nil_check(l_T_2174))).f_NEXT;
}
RT_B_TICK();
} L_end2175: ;
}
l_NEEDL_2171 = ((*(R21 *)rt_nil_check(l_NEEDL_2171))).f_NEXT;
}
RT_B_TICK();
} L_end2173: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2172;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2184 = 0;
return rv2184; }
}
{
R12 * l_Y_2185; memset(&l_Y_2185, 0, sizeof l_Y_2185);
l_Y_2185 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2186; memset(&l_A_2186, 0, sizeof l_A_2186);
l_A_2186 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2187; memset(&l_F_2187, 0, sizeof l_F_2187);
if ((l_Y_2185 == NULL))
{
{ rt_int rv2188 = 0;
return rv2188; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2185))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2185))).f_DECL == NULL)))
{
{ rt_int rv2189 = 0;
return rv2189; }
}
l_F_2187 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2185))).f_DECL))).f_A;
for (;;) {
if ((l_F_2187 == NULL)) goto L_end2190;
{
{
R21 * l_N_2191; memset(&l_N_2191, 0, sizeof l_N_2191);
l_N_2191 = ((*(R21 *)rt_nil_check(l_F_2187))).f_A;
for (;;) {
if ((l_N_2191 == NULL)) goto L_end2192;
{
if ((l_A_2186 == NULL))
{
{ rt_int rv2193 = 0;
return rv2193; }
}
if (((((*(R21 *)rt_nil_check(l_F_2187))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2186))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2194 = 1;
return rv2194; }
}
l_A_2186 = ((*(R21 *)rt_nil_check(l_A_2186))).f_NEXT;
l_N_2191 = ((*(R21 *)rt_nil_check(l_N_2191))).f_NEXT;
}
RT_B_TICK();
} L_end2192: ;
}
l_F_2187 = ((*(R21 *)rt_nil_check(l_F_2187))).f_NEXT;
}
RT_B_TICK();
} L_end2190: ;
}
{ rt_int rv2195 = 0;
return rv2195; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2196; memset(&l_A_2196, 0, sizeof l_A_2196);
l_A_2196 = p_ARGS;
R12 * l_I_2197; memset(&l_I_2197, 0, sizeof l_I_2197);
l_I_2197 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2198; memset(&l_SAVED_2198, 0, sizeof l_SAVED_2198);
l_SAVED_2198 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2199; memset(&l_P_2199, 0, sizeof l_P_2199);
l_P_2199 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2200; memset(&l_TAIL_2200, 0, sizeof l_TAIL_2200);
l_TAIL_2200 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2197)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2197))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2197))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2197))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2197))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2197))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2197;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2199 == NULL)) goto L_end2201;
{
{
R28 * l_PM_2202; memset(&l_PM_2202, 0, sizeof l_PM_2202);
l_PM_2202 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2202)), (*(R28 *)rt_nil_check(l_P_2199)), 0);
((*(R28 *)rt_nil_check(l_PM_2202))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2199))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2202))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2199))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2202))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2199))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2196))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2202))).f_T = (((*(R27 *)rt_nil_check(l_A_2196))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2202))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2202))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2202))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2202))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2202))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2199))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2202))).f_TS = NULL;
if ((l_TAIL_2200 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2197))).f_PARAMS = l_PM_2202;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2200))).f_NEXT = l_PM_2202;
}
l_TAIL_2200 = l_PM_2202;
}
l_P_2199 = ((*(R28 *)rt_nil_check(l_P_2199))).f_NEXT;
l_A_2196 = ((*(R27 *)rt_nil_check(l_A_2196))).f_NEXT;
}
RT_B_TICK();
} L_end2201: ;
((*(R12 *)rt_nil_check(l_I_2197))).f_RESULT = r_RESULT_TYPE(l_I_2197);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2198;
S_R10(&((*(R12 *)rt_nil_check(l_I_2197))).f_FWD, r_C_HEADER(l_I_2197), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2197))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2197))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2197;
{ R12 * rv2203 = l_I_2197;
return rv2203; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2204 = 0;
return rv2204; }
}
{ rt_int rv2205 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2205; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2206; memset(&l_C_2206, 0, sizeof l_C_2206);
if ((p_TS == NULL))
{
{ R21 * rv2207 = NULL;
return rv2207; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2208; memset(&l_F_2208, 0, sizeof l_F_2208);
l_F_2208 = p_FORMALS;
R21 * l_A_2209; memset(&l_A_2209, 0, sizeof l_A_2209);
l_A_2209 = p_ARGS;
for (;;) {
if ((l_F_2208 == NULL)) goto L_end2210;
{
{
R21 * l_N_2211; memset(&l_N_2211, 0, sizeof l_N_2211);
l_N_2211 = ((*(R21 *)rt_nil_check(l_F_2208))).f_A;
for (;;) {
if ((l_N_2211 == NULL)) goto L_end2212;
{
if ((l_A_2209 == NULL))
{
{ R21 * rv2213 = p_TS;
return rv2213; }
}
if (((((*(R21 *)rt_nil_check(l_F_2208))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2211))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2214 = l_A_2209;
return rv2214; }
}
l_A_2209 = ((*(R21 *)rt_nil_check(l_A_2209))).f_NEXT;
l_N_2211 = ((*(R21 *)rt_nil_check(l_N_2211))).f_NEXT;
}
RT_B_TICK();
} L_end2212: ;
}
l_F_2208 = ((*(R21 *)rt_nil_check(l_F_2208))).f_NEXT;
}
RT_B_TICK();
} L_end2210: ;
}
{ R21 * rv2215 = p_TS;
return rv2215; }
}
l_C_2206 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2206))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2206))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2216 = l_C_2206;
return rv2216; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2217; memset(&l_C_2217, 0, sizeof l_C_2217);
l_C_2217 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2217)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2217))).f_NEXT = NULL;
{ R21 * rv2218 = l_C_2217;
return rv2218; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2219; memset(&l_P_2219, 0, sizeof l_P_2219);
l_P_2219 = p_L;
for (;;) {
if ((l_P_2219 == NULL)) goto L_end2220;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2219))).f_NAME, p_NAME))
{
{ rt_int rv2221 = 1;
return rv2221; }
}
l_P_2219 = ((*(R21 *)rt_nil_check(l_P_2219))).f_NEXT;
}
RT_B_TICK();
} L_end2220: ;
{ rt_int rv2222 = 0;
return rv2222; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2223; memset(&l_IS_2223, 0, sizeof l_IS_2223);
l_IS_2223 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2224 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2224; }
}
if ((l_IS_2223 == NULL))
{
{ rt_int rv2225 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2225; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2223))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2223))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2226 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2226; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2223))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2223))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2227 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2227; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2223))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2228 = 0;
return rv2228; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2229; memset(&l_ITEMS_2229, 0, sizeof l_ITEMS_2229);
l_ITEMS_2229 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2230; memset(&l_HEAD_2230, 0, sizeof l_HEAD_2230);
l_HEAD_2230 = NULL;
R21 * l_TAIL_2231; memset(&l_TAIL_2231, 0, sizeof l_TAIL_2231);
l_TAIL_2231 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2229 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2229))).f_A, &l_HEAD_2230, &l_TAIL_2231);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2229))).f_B, &l_HEAD_2230, &l_TAIL_2231);
{
R21 * l_R_2232; memset(&l_R_2232, 0, sizeof l_R_2232);
l_R_2232 = ((*(R21 *)rt_nil_check(l_ITEMS_2229))).f_C;
for (;;) {
if ((l_R_2232 == NULL)) goto L_end2233;
{
{
R12 * l_Z_2234; memset(&l_Z_2234, 0, sizeof l_Z_2234);
l_Z_2234 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2232))).f_NAME);
if (((l_Z_2234 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2232))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2232))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2232))).f_NAME);
}
for (;;) {
if ((l_Z_2234 == NULL)) goto L_end2235;
{
if ((((*(R12 *)rt_nil_check(l_Z_2234))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2236; memset(&l_O_2236, 0, sizeof l_O_2236);
l_O_2236 = r_ORIGINAL(l_Z_2234);
R21 * l_U_2237; memset(&l_U_2237, 0, sizeof l_U_2237);
r_COMPUTE_USES(l_O_2236);
l_U_2237 = ((*(R12 *)rt_nil_check(l_O_2236))).f_USES;
for (;;) {
if ((l_U_2237 == NULL)) goto L_end2238;
{
if ((!r_IN_IDENTS(l_HEAD_2230, ((*(R21 *)rt_nil_check(l_U_2237))).f_NAME)))
{
{
R21 * l_N_2239; memset(&l_N_2239, 0, sizeof l_N_2239);
l_N_2239 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2237))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2239))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2237))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2239))).f_IV = ((*(R21 *)rt_nil_check(l_U_2237))).f_IV;
r_ADD_LIST(l_N_2239, &l_HEAD_2230, &l_TAIL_2231);
}
}
l_U_2237 = ((*(R21 *)rt_nil_check(l_U_2237))).f_NEXT;
}
RT_B_TICK();
} L_end2238: ;
}
}
l_Z_2234 = r_LOOKUP_NEXT(l_Z_2234);
}
RT_B_TICK();
} L_end2235: ;
}
l_R_2232 = ((*(R21 *)rt_nil_check(l_R_2232))).f_NEXT;
}
RT_B_TICK();
} L_end2233: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2230;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2240; memset(&l_M_2240, 0, sizeof l_M_2240);
if ((p_B == NULL))
{
{ rt_int rv2241 = 0;
return rv2241; }
}
l_M_2240 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2240 == NULL)) goto L_end2242;
{
if ((((*(R21 *)rt_nil_check(l_M_2240))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2240))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2240))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2240))).f_C, p_NAME)))
{
{ rt_int rv2243 = 1;
return rv2243; }
}
}
l_M_2240 = ((*(R21 *)rt_nil_check(l_M_2240))).f_NEXT;
}
RT_B_TICK();
} L_end2242: ;
{ rt_int rv2244 = 0;
return rv2244; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2245; memset(&l_R_2245, 0, sizeof l_R_2245);
l_R_2245 = p_RS;
for (;;) {
if ((l_R_2245 == NULL)) goto L_end2246;
{
if ((((*(R21 *)rt_nil_check(l_R_2245))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2245));
}
l_R_2245 = ((*(R21 *)rt_nil_check(l_R_2245))).f_NEXT;
}
RT_B_TICK();
} L_end2246: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2247; memset(&l_P_2247, 0, sizeof l_P_2247);
l_P_2247 = p_L;
for (;;) {
if ((l_P_2247 == NULL)) goto L_end2248;
{
{
R12 * l_V_2249; memset(&l_V_2249, 0, sizeof l_V_2249);
l_V_2249 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2247))).f_NAME);
R21 * l_N_2250; memset(&l_N_2250, 0, sizeof l_N_2250);
l_N_2250 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2247))).f_LINE);
if ((l_V_2249 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2247))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2247))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2250))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2247))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2250))).f_IV = ((*(R12 *)rt_nil_check(l_V_2249))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2249))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2250, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2247 = ((*(R21 *)rt_nil_check(l_P_2247))).f_NEXT;
}
RT_B_TICK();
} L_end2248: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2251; memset(&l_IS_2251, 0, sizeof l_IS_2251);
l_IS_2251 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2252; memset(&l_U_2252, 0, sizeof l_U_2252);
l_U_2252 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2251 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2251))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2252 == NULL)) goto L_end2253;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2252))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2251))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2252))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2252))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2252))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2252))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2251))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2252))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2252))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2252))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2252 = ((*(R21 *)rt_nil_check(l_U_2252))).f_NEXT;
}
RT_B_TICK();
} L_end2253: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2254; memset(&l_R_2254, 0, sizeof l_R_2254);
l_R_2254 = p_RS;
for (;;) {
if ((l_R_2254 == NULL)) goto L_end2255;
{
{
R12 * l_Z_2256; memset(&l_Z_2256, 0, sizeof l_Z_2256);
l_Z_2256 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2254))).f_NAME);
for (;;) {
if ((l_Z_2256 == NULL)) goto L_end2257;
{
if ((((*(R12 *)rt_nil_check(l_Z_2256))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2258; memset(&l_O_2258, 0, sizeof l_O_2258);
l_O_2258 = r_ORIGINAL(l_Z_2256);
r_COMPUTE_USES(l_O_2258);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2258))).f_USES, p_NAME))
{
{ rt_int rv2259 = 1;
return rv2259; }
}
}
}
l_Z_2256 = r_LOOKUP_NEXT(l_Z_2256);
}
RT_B_TICK();
} L_end2257: ;
}
l_R_2254 = ((*(R21 *)rt_nil_check(l_R_2254))).f_NEXT;
}
RT_B_TICK();
} L_end2255: ;
{ rt_int rv2260 = 0;
return rv2260; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2261; memset(&l_M_2261, 0, sizeof l_M_2261);
l_M_2261 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2261 == NULL)) goto L_end2262;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2261))).f_NAME))
{
{ rt_int rv2263 = 1;
return rv2263; }
}
l_M_2261 = ((*(R12 *)rt_nil_check(l_M_2261))).f_MODL;
}
RT_B_TICK();
} L_end2262: ;
{ rt_int rv2264 = 0;
return rv2264; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2265 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2265; }
}
{ R10 rv2266 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2266; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2267; memset(&l_C_2267, 0, sizeof l_C_2267);
l_C_2267 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2267 == NULL)) goto L_end2268;
{
if ((((*(R17 *)rt_nil_check(l_C_2267))).f_KIND == ((rt_int)1LL)))
{
goto L_end2268;
}
if ((((*(R17 *)rt_nil_check(l_C_2267))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2269; memset(&l_H_2269, 0, sizeof l_H_2269);
l_H_2269 = ((*(R17 *)rt_nil_check(l_C_2267))).f_HANDLERS;
for (;;) {
if ((l_H_2269 == NULL)) goto L_end2270;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2269))).f_A, p_NAME))
{
{ rt_int rv2271 = 1;
return rv2271; }
}
l_H_2269 = ((*(R21 *)rt_nil_check(l_H_2269))).f_NEXT;
}
RT_B_TICK();
} L_end2270: ;
}
}
l_C_2267 = ((*(R17 *)rt_nil_check(l_C_2267))).f_NEXT;
}
RT_B_TICK();
} L_end2268: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2272 = 1;
return rv2272; }
}
}
{ rt_int rv2273 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2273; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2274; memset(&l_C_2274, 0, sizeof l_C_2274);
l_C_2274 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2274)), ({ R17 rc2275; memset(&rc2275, 0, sizeof rc2275);  rc2275.f_KIND = p_KIND; S_R10(&rc2275.f_NAME, p_NAME, 0); rc2275.f_HANDLERS = NULL; rc2275.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2275; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2274;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2276; memset(&l_C_2276, 0, sizeof l_C_2276);
l_C_2276 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2276 == NULL)) goto L_end2277;
{
if ((((*(R17 *)rt_nil_check(l_C_2276))).f_KIND == p_KIND))
{
{ R17 * rv2278 = l_C_2276;
return rv2278; }
}
if ((((*(R17 *)rt_nil_check(l_C_2276))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2279 = NULL;
return rv2279; }
}
if ((((*(R17 *)rt_nil_check(l_C_2276))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2276))).f_NAME));
}
l_C_2276 = ((*(R17 *)rt_nil_check(l_C_2276))).f_NEXT;
}
RT_B_TICK();
} L_end2277: ;
{ R17 * rv2280 = NULL;
return rv2280; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2281; memset(&l_C_2281, 0, sizeof l_C_2281);
l_C_2281 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2282; memset(&l_N_2282, 0, sizeof l_N_2282);
l_N_2282 = ((rt_int)0LL);
for (;;) {
if ((l_C_2281 == NULL)) goto L_end2283;
{
if ((((*(R17 *)rt_nil_check(l_C_2281))).f_KIND == ((rt_int)1LL)))
{
goto L_end2283;
}
if ((((*(R17 *)rt_nil_check(l_C_2281))).f_KIND == ((rt_int)3LL)))
{
l_N_2282 = rt_add(l_N_2282, ((rt_int)1LL));
}
l_C_2281 = ((*(R17 *)rt_nil_check(l_C_2281))).f_NEXT;
}
RT_B_TICK();
} L_end2283: ;
{ rt_int rv2284 = l_N_2282;
return rv2284; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2285; memset(&l_N_2285, 0, sizeof l_N_2285);
l_N_2285 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2285 == NULL)) goto L_end2286;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2285))).f_NAME, p_NAME))
{
{ R10 rv2287 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2287; }
}
l_N_2285 = ((*(R21 *)rt_nil_check(l_N_2285))).f_NEXT;
}
RT_B_TICK();
} L_end2286: ;
l_N_2285 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2285))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2285))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2285;
{ R10 rv2288 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2288; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2289; memset(&l_D_2289, 0, sizeof l_D_2289);
l_D_2289 = p_DECLS;
for (;;) {
if ((l_D_2289 == NULL)) goto L_end2290;
{
if (((((*(R21 *)rt_nil_check(l_D_2289))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2289))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2291; memset(&l_Y_2291, 0, sizeof l_Y_2291);
l_Y_2291 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2289))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2289))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2291))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2291))).f_DECL = l_D_2289;
r_DEFINE(l_Y_2291, ((*(R21 *)rt_nil_check(l_D_2289))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2289))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2289))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2289))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2289 = ((*(R21 *)rt_nil_check(l_D_2289))).f_NEXT;
}
RT_B_TICK();
} L_end2290: ;
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2292; memset(&l_P_2292, 0, sizeof l_P_2292);
l_P_2292 = p_L;
for (;;) {
if ((l_P_2292 == NULL)) goto L_end2293;
{
if (((((*(R21 *)rt_nil_check(l_P_2292))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2292))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2294 = 1;
return rv2294; }
}
}
l_P_2292 = ((*(R21 *)rt_nil_check(l_P_2292))).f_NEXT;
}
RT_B_TICK();
} L_end2293: ;
{ rt_int rv2295 = 0;
return rv2295; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2296; memset(&l_A_2296, 0, sizeof l_A_2296);
l_A_2296 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2297; memset(&l_FOUND_2297, 0, sizeof l_FOUND_2297);
l_FOUND_2297 = NULL;
rt_int l_N_2298; memset(&l_N_2298, 0, sizeof l_N_2298);
l_N_2298 = ((rt_int)0LL);
R12 * l_Y_2299; memset(&l_Y_2299, 0, sizeof l_Y_2299);
l_Y_2299 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2296 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2296))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2296))).f_DECL == NULL)))
{
{ R22 * rv2300 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2300; }
}
}
for (;;) {
if ((l_Y_2299 == NULL)) goto L_end2301;
{
if (((((*(R12 *)rt_nil_check(l_Y_2299))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2299))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2299))).f_NAME) == l_Y_2299))
{
{
R22 * l_T_2302; memset(&l_T_2302, 0, sizeof l_T_2302);
l_T_2302 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2299))).f_DECL == NULL))
{
l_T_2302 = ((*(R12 *)rt_nil_check(l_Y_2299))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2299))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2299))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2299))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2299))).f_DECL))).f_B))).f_A)))
{
l_T_2302 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2299))).f_NAME, p_LINE);
}
}
if ((!(l_T_2302 == NULL)))
{
l_T_2302 = r_REAL_TYPE(l_T_2302);
if ((((*(R22 *)rt_nil_check(l_T_2302))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2302))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2302))).f_BASE == l_FOUND_2297))))
{
if ((!(l_FOUND_2297 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2297 = ((*(R22 *)rt_nil_check(l_T_2302))).f_BASE;
}
}
}
}
}
}
l_Y_2299 = ((*(R12 *)rt_nil_check(l_Y_2299))).f_SNEXT;
}
RT_B_TICK();
} L_end2301: ;
if ((l_FOUND_2297 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2303 = l_FOUND_2297;
return rv2303; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2304; memset(&l_R_2304, 0, sizeof l_R_2304);
l_R_2304 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2304))).f_BASE == NULL))
{
{ R22 * rv2305 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2305; }
}
{ R22 * rv2306 = ((*(R22 *)rt_nil_check(l_R_2304))).f_BASE;
return rv2306; }
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
R21 * l_S_2307; memset(&l_S_2307, 0, sizeof l_S_2307);
l_S_2307 = p_S0;
for (;;) {
if ((l_S_2307 == NULL)) goto L_end2308;
{
{
R21 * l_L_2309; memset(&l_L_2309, 0, sizeof l_L_2309);
l_L_2309 = l_S_2307;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2309))).f_KIND == g_N_LABELED))) goto L_end2310;
{
{
R12 * l_Y_2311; memset(&l_Y_2311, 0, sizeof l_Y_2311);
l_Y_2311 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2309))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2311))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2309))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2309))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2311))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2311, ((*(R21 *)rt_nil_check(l_L_2309))).f_LINE);
}
l_L_2309 = ((*(R21 *)rt_nil_check(l_L_2309))).f_A;
}
RT_B_TICK();
} L_end2310: ;
}
l_S_2307 = ((*(R21 *)rt_nil_check(l_S_2307))).f_NEXT;
}
RT_B_TICK();
} L_end2308: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2312; memset(&l_D_2312, 0, sizeof l_D_2312);
l_D_2312 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2313; memset(&l_S_2313, 0, sizeof l_S_2313);
l_S_2313 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2312 == NULL)) goto L_end2314;
{
if (((((*(R21 *)rt_nil_check(l_D_2312))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2312))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2312);
}
l_D_2312 = ((*(R21 *)rt_nil_check(l_D_2312))).f_NEXT;
}
RT_B_TICK();
} L_end2314: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2313 == NULL)) goto L_end2315;
{
r_STMT(l_S_2313);
l_S_2313 = ((*(R21 *)rt_nil_check(l_S_2313))).f_NEXT;
}
RT_B_TICK();
} L_end2315: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2316; memset(&l_F_2316, 0, sizeof l_F_2316);
S_R10(&l_F_2316, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2317; memset(&l_H_2317, 0, sizeof l_H_2317);
l_H_2317 = p_HANDLERS;
R10 l_WORD_2318; memset(&l_WORD_2318, 0, sizeof l_WORD_2318);
S_R10(&l_WORD_2318, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2316, l_F_2316));
r_PUSH_CTX(((rt_int)3LL), l_F_2316);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2316, l_F_2316, l_F_2316));
for (;;) {
if ((l_H_2317 == NULL)) goto L_end2319;
{
{
R21 * l_N_2320; memset(&l_N_2320, 0, sizeof l_N_2320);
l_N_2320 = ((*(R21 *)rt_nil_check(l_H_2317))).f_A;
R10 l_COND_2321; memset(&l_COND_2321, 0, sizeof l_COND_2321);
S_R10(&l_COND_2321, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2320 == NULL)) goto L_end2322;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2320))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2320))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2320))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2320))).f_NAME);
}
S_R10(&l_COND_2321, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2321, l_F_2316, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2320))).f_NAME)), 0);
l_N_2320 = ((*(R21 *)rt_nil_check(l_N_2320))).f_NEXT;
}
RT_B_TICK();
} L_end2322: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2318, l_COND_2321));
S_R10(&l_WORD_2318, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2316, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2317))).f_B);
r_POP_CTX();
}
l_H_2317 = ((*(R21 *)rt_nil_check(l_H_2317))).f_NEXT;
}
RT_B_TICK();
} L_end2319: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2316));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2323; memset(&l_K_2323, 0, sizeof l_K_2323);
l_K_2323 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2323 == g_N_NULL))
{
return;
}
else if ((l_K_2323 == g_N_LABELED))
{
{
R12 * l_Y_2324; memset(&l_Y_2324, 0, sizeof l_Y_2324);
l_Y_2324 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2324))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2323 == g_N_GOTO))
{
{
R12 * l_Y_2325; memset(&l_Y_2325, 0, sizeof l_Y_2325);
l_Y_2325 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2326; memset(&l_N_2326, 0, sizeof l_N_2326);
R17 * l_C_2327; memset(&l_C_2327, 0, sizeof l_C_2327);
l_C_2327 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2325 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2325))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2325))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2326 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2325))).f_MV);
for (;;) {
if ((l_N_2326 <= ((rt_int)0LL))) goto L_end2328;
{
if ((((*(R17 *)rt_nil_check(l_C_2327))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2327))).f_NAME));
l_N_2326 = rt_sub(l_N_2326, ((rt_int)1LL));
}
l_C_2327 = ((*(R17 *)rt_nil_check(l_C_2327))).f_NEXT;
}
RT_B_TICK();
} L_end2328: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2325))).f_ACCESS));
}
}
else if ((l_K_2323 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2323 == g_N_CALL))
{
{
R26 l_V_2329; memset(&l_V_2329, 0, sizeof l_V_2329);
S_R26(&l_V_2329, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2329).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2329).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2329).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2323 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2323 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2323 == g_N_LOOP))
{
{
R10 l_END_L_2330; memset(&l_END_L_2330, 0, sizeof l_END_L_2330);
S_R10(&l_END_L_2330, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2330));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2330);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2330));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2330));
}
}
else if ((l_K_2323 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2323 == g_N_EXIT))
{
{
R17 * l_C_2331; memset(&l_C_2331, 0, sizeof l_C_2331);
l_C_2331 = r_LEAVE(((rt_int)2LL));
if ((l_C_2331 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2331))).f_NAME));
}
}
else if ((l_K_2323 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2323 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2323 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2323 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2323 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2323 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2323 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2323 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2332; memset(&l_Y_2332, 0, sizeof l_Y_2332);
l_Y_2332 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2332 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2332))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2332))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2333 = r_CALL_EXPR(p_S, NULL);
return rv2333; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2334; memset(&l_ARM_2334, 0, sizeof l_ARM_2334);
l_ARM_2334 = p_ARMS;
R10 l_WORD_2335; memset(&l_WORD_2335, 0, sizeof l_WORD_2335);
S_R10(&l_WORD_2335, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2336; memset(&l_OPEN_2336, 0, sizeof l_OPEN_2336);
l_OPEN_2336 = ((rt_int)0LL);
rt_int l_CHOSEN_2337; memset(&l_CHOSEN_2337, 0, sizeof l_CHOSEN_2337);
l_CHOSEN_2337 = 0;
for (;;) {
if ((l_ARM_2334 == NULL)) goto L_end2338;
{
{
R23 l_M_2339; memset(&l_M_2339, 0, sizeof l_M_2339);
S_R23(&l_M_2339, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2334))).f_A), 0);
if (l_CHOSEN_2337)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2334))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2334))).f_B);
}
else if ((l_M_2339).f_OK)
{
if ((!r_TEQS(l_WORD_2335, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2336 = rt_add(l_OPEN_2336, ((rt_int)1LL));
S_R10(&l_WORD_2335, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2334))).f_A)));
if (((l_M_2339).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2334))).f_B);
l_CHOSEN_2337 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2334))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2335, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2334))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2334))).f_B);
S_R10(&l_WORD_2335, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2334 = ((*(R21 *)rt_nil_check(l_ARM_2334))).f_NEXT;
}
RT_B_TICK();
} L_end2338: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2337)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2335, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2341_lo = ((rt_int)1LL), it2341_hi = l_OPEN_2336;
for (rt_int it2341 = it2341_lo; it2341 <= it2341_hi; it2341++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2341 == it2341_hi) break;
} } L_end2340: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2342; memset(&l_SAVED_CODE_2342, 0, sizeof l_SAVED_CODE_2342);
S_R14(&l_SAVED_CODE_2342, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2343; memset(&rc2343, 0, sizeof rc2343);  rc2343.f_HEAD = NULL; rc2343.f_TAIL = NULL; rc2343; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2342, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2344; memset(&l_C_2344, 0, sizeof l_C_2344);
S_R10(&l_C_2344, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2345; memset(&l_END_L_2345, 0, sizeof l_END_L_2345);
S_R10(&l_END_L_2345, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2346; memset(&l_IT_2346, 0, sizeof l_IT_2346);
S_R10(&l_IT_2346, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2347; memset(&l_R_2347, 0, sizeof l_R_2347);
l_R_2347 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2348; memset(&l_LO_2348, 0, sizeof l_LO_2348);
S_R26(&l_LO_2348, r_EXPR(((*(R21 *)rt_nil_check(l_R_2347))).f_A, NULL), 0);
R26 l_HI_2349; memset(&l_HI_2349, 0, sizeof l_HI_2349);
S_R26(&l_HI_2349, r_EXPR(((*(R21 *)rt_nil_check(l_R_2347))).f_B, (l_LO_2348).f_T), 0);
R22 * l_T_2350; memset(&l_T_2350, 0, sizeof l_T_2350);
l_T_2350 = r_REAL_TYPE((l_LO_2348).f_T);
R10 l_LOC_2351; memset(&l_LOC_2351, 0, sizeof l_LOC_2351);
R10 l_HIC_2352; memset(&l_HIC_2352, 0, sizeof l_HIC_2352);
if ((((*(R22 *)rt_nil_check(l_T_2350))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2350))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2350))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2350))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2351, (l_LO_2348).f_C, 0);
S_R10(&l_HIC_2352, (l_HI_2349).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2347))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2347))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2351, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2351), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2347))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2352, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2352), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2346, l_LOC_2351, l_IT_2346, l_HIC_2352));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2346, l_IT_2346, l_IT_2346, l_IT_2346));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2353; memset(&l_Y_2353, 0, sizeof l_Y_2353);
l_Y_2353 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2353))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2350))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2353))).f_T = ((*(R22 *)rt_nil_check(l_T_2350))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2353))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2353, rt_str("", 0)), l_IT_2346));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2353, rt_str("", 0)), l_IT_2346));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2353))).f_ACCESS, l_IT_2346, 0);
}
r_DEFINE(l_Y_2353, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2345);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2346, l_IT_2346));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2345));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2354; memset(&l_CS_2354, 0, sizeof l_CS_2354);
l_CS_2354 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2355; memset(&l_C_2355, 0, sizeof l_C_2355);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2355 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2354))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2354))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2354))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2354))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2356; memset(&l_V_2356, 0, sizeof l_V_2356);
S_R10(&l_V_2356, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT), l_V_2356, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2354))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2355 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2356));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2357; memset(&l_C_2357, 0, sizeof l_C_2357);
l_C_2357 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2357 == NULL)) goto L_end2358;
{
if ((((*(R17 *)rt_nil_check(l_C_2357))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2357))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2357))).f_KIND == ((rt_int)1LL)))
{
goto L_end2358;
}
l_C_2357 = ((*(R17 *)rt_nil_check(l_C_2357))).f_NEXT;
}
RT_B_TICK();
} L_end2358: ;
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
R21 * l_TG_2359; memset(&l_TG_2359, 0, sizeof l_TG_2359);
l_TG_2359 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2359))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2360; memset(&l_B_2360, 0, sizeof l_B_2360);
S_R26(&l_B_2360, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2359))).f_A, NULL), 0);
if ((!(l_B_2360).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2360).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2361; memset(&l_ARGS_2361, 0, sizeof l_ARGS_2361);
l_ARGS_2361 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2359))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2359))).f_C, g_M_IN, r_VAL_ARG(l_B_2360, NULL))));
R12 * l_Y_2362; memset(&l_Y_2362, 0, sizeof l_Y_2362);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2361))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2362 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2361, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2362 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2361))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2362 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2361, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2362 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2362, l_ARGS_2361, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2360).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2360).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2363; memset(&l_V_2363, 0, sizeof l_V_2363);
S_R26(&l_V_2363, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2360).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2363).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2360).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2360).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2359))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2359))).f_C), (l_V_2363).f_C));
}
}
return;
}
{
R26 l_LV_2364; memset(&l_LV_2364, 0, sizeof l_LV_2364);
S_R26(&l_LV_2364, r_EXPR(l_TG_2359, NULL), 0);
R21 * l_SAVED_Q_2365; memset(&l_SAVED_Q_2365, 0, sizeof l_SAVED_Q_2365);
l_SAVED_Q_2365 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2364).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
r_CODE(r_STORE_CODE((l_LV_2364).f_T, (l_LV_2364).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2364).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2364).f_SELF));
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2365;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2366; memset(&l_Y_2366, 0, sizeof l_Y_2366);
l_Y_2366 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2367; memset(&l_V_2367, 0, sizeof l_V_2367);
S_R26(&l_V_2367, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2366))).f_T = (l_V_2367).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2368; memset(&l_CN_2368, 0, sizeof l_CN_2368);
S_R10(&l_CN_2368, r_NEW_OBJECT(l_Y_2366, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2367).f_T))
{
r_CODE(r_INIT_CODE((l_V_2367).f_T, l_CN_2368));
}
r_CODE(r_ASSIGN_CODE((l_V_2367).f_T, l_CN_2368, (l_V_2367).f_C));
}
}
else
{
if ((!(l_V_2367).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2369; memset(&l_P_2369, 0, sizeof l_P_2369);
S_R10(&l_P_2369, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2367).f_T), l_P_2369, (l_V_2367).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2366))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2369), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2366))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2366))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2366))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2366, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2370; memset(&l_ARM_2370, 0, sizeof l_ARM_2370);
l_ARM_2370 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2371; memset(&l_CH_2371, 0, sizeof l_CH_2371);
S_R26(&l_CH_2371, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2372; memset(&l_T_2372, 0, sizeof l_T_2372);
l_T_2372 = r_REAL_TYPE((l_CH_2371).f_T);
R12 * l_BOUND_2373; memset(&l_BOUND_2373, 0, sizeof l_BOUND_2373);
l_BOUND_2373 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2372))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2372))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2374; memset(&l_TMP_2374, 0, sizeof l_TMP_2374);
S_R10(&l_TMP_2374, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2375; memset(&l_WORD_2375, 0, sizeof l_WORD_2375);
S_R10(&l_WORD_2375, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2374, (l_CH_2371).f_C));
for (;;) {
if ((l_ARM_2370 == NULL)) goto L_end2376;
{
{
R21 * l_L_2377; memset(&l_L_2377, 0, sizeof l_L_2377);
l_L_2377 = ((*(R21 *)rt_nil_check(l_ARM_2370))).f_A;
R10 l_COND_2378; memset(&l_COND_2378, 0, sizeof l_COND_2378);
S_R10(&l_COND_2378, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2377 == NULL)) goto L_end2379;
{
S_R10(&l_COND_2378, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2378, l_TMP_2374, (r_EXPR(l_L_2377, l_T_2372)).f_C), 0);
l_L_2377 = ((*(R21 *)rt_nil_check(l_L_2377))).f_NEXT;
}
RT_B_TICK();
} L_end2379: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2375, l_COND_2378));
S_R10(&l_WORD_2375, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2370))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2370))).f_C);
}
l_ARM_2370 = ((*(R21 *)rt_nil_check(l_ARM_2370))).f_NEXT;
}
RT_B_TICK();
} L_end2376: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2375, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2372))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2372))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2372))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2372))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2372));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2371).f_C));
for (;;) {
if ((l_ARM_2370 == NULL)) goto L_end2380;
{
{
R21 * l_L_2381; memset(&l_L_2381, 0, sizeof l_L_2381);
l_L_2381 = ((*(R21 *)rt_nil_check(l_ARM_2370))).f_A;
R23 l_FIRST_2382; memset(&l_FIRST_2382, 0, sizeof l_FIRST_2382);
S_R23(&l_FIRST_2382, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2381 == NULL)) goto L_end2383;
{
if ((((*(R21 *)rt_nil_check(l_L_2381))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2384; memset(&l_LO_2384, 0, sizeof l_LO_2384);
S_R23(&l_LO_2384, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2381))).f_A, l_T_2372), 0);
R23 l_HI_2385; memset(&l_HI_2385, 0, sizeof l_HI_2385);
S_R23(&l_HI_2385, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2381))).f_B, l_T_2372), 0);
rt_int l_A_2386; memset(&l_A_2386, 0, sizeof l_A_2386);
l_A_2386 = (l_LO_2384).f_V;
rt_int l_B_2387; memset(&l_B_2387, 0, sizeof l_B_2387);
l_B_2387 = (l_HI_2385).f_V;
if ((!(((l_LO_2384).f_OK && (l_HI_2385).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2381))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2381))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2381))).f_IV == ((rt_int)3LL))))
{
l_A_2386 = rt_add(l_A_2386, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2381))).f_IV >= ((rt_int)2LL)))
{
l_B_2387 = rt_sub(l_B_2387, ((rt_int)1LL));
}
if ((!(l_FIRST_2382).f_OK))
{
S_R23(&l_FIRST_2382, r_SOME(l_A_2386), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2386), r_NUM(l_B_2387)));
}
}
else
{
{
R23 l_M_2388; memset(&l_M_2388, 0, sizeof l_M_2388);
S_R23(&l_M_2388, r_ENUM_MANIFEST(l_L_2381, l_T_2372), 0);
if ((!(l_M_2388).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2381))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2382).f_OK))
{
S_R23(&l_FIRST_2382, l_M_2388, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2388).f_V)));
}
}
l_L_2381 = ((*(R21 *)rt_nil_check(l_L_2381))).f_NEXT;
}
RT_B_TICK();
} L_end2383: ;
if ((!(l_BOUND_2373 == NULL)))
{
{
R22 * l_SAVED_2389; memset(&l_SAVED_2389, 0, sizeof l_SAVED_2389);
l_SAVED_2389 = ((*(R12 *)rt_nil_check(l_BOUND_2373))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2373))).f_T = r_NARROW(l_SAVED_2389, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2382).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2370))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2370))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2373))).f_T = l_SAVED_2389;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2370))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2370))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2370 = ((*(R21 *)rt_nil_check(l_ARM_2370))).f_NEXT;
}
RT_B_TICK();
} L_end2380: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
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
{ R12 * rv2390 = NULL;
return rv2390; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2391 = NULL;
return rv2391; }
}
{
R12 * l_Y_2392; memset(&l_Y_2392, 0, sizeof l_Y_2392);
l_Y_2392 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2392 == NULL))
{
{ R12 * rv2393 = NULL;
return rv2393; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2392))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2394 = NULL;
return rv2394; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2392))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2395 = NULL;
return rv2395; }
}
{
R24 * l_F_2396; memset(&l_F_2396, 0, sizeof l_F_2396);
l_F_2396 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2392))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2396 == NULL))
{
{ R12 * rv2397 = NULL;
return rv2397; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2396))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2398 = NULL;
return rv2398; }
}
}
{ R12 * rv2399 = l_Y_2392;
return rv2399; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2400; memset(&l_N_2400, 0, sizeof l_N_2400);
l_N_2400 = r_COPY_TYP(p_T);
R24 * l_F_2401; memset(&l_F_2401, 0, sizeof l_F_2401);
l_F_2401 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2402; memset(&l_A_2402, 0, sizeof l_A_2402);
l_A_2402 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2403; memset(&l_HEAD_2403, 0, sizeof l_HEAD_2403);
l_HEAD_2403 = NULL;
R25 * l_TAIL_2404; memset(&l_TAIL_2404, 0, sizeof l_TAIL_2404);
l_TAIL_2404 = NULL;
for (;;) {
if ((l_F_2401 == NULL)) goto L_end2405;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2401))).f_KIND == ((rt_int)0LL))) && (!(l_A_2402 == NULL))))
{
{
R25 * l_B_2406; memset(&l_B_2406, 0, sizeof l_B_2406);
l_B_2406 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2406)), (*(R25 *)rt_nil_check(l_A_2402)), 0);
((*(R25 *)rt_nil_check(l_B_2406))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2401))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2406))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2406))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2406))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2404 == NULL))
{
l_HEAD_2403 = l_B_2406;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2404))).f_NEXT = l_B_2406;
}
l_TAIL_2404 = l_B_2406;
}
l_A_2402 = ((*(R25 *)rt_nil_check(l_A_2402))).f_NEXT;
}
l_F_2401 = ((*(R24 *)rt_nil_check(l_F_2401))).f_NEXT;
}
RT_B_TICK();
} L_end2405: ;
((*(R22 *)rt_nil_check(l_N_2400))).f_ARGS = l_HEAD_2403;
{ R22 * rv2407 = l_N_2400;
return rv2407; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2408; memset(&l_ARM_2408, 0, sizeof l_ARM_2408);
l_ARM_2408 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2409; memset(&l_SAVED_2409, 0, sizeof l_SAVED_2409);
l_SAVED_2409 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2408 == NULL)) goto L_end2410;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2408))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2408))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2408))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2409;
return;
}
l_ARM_2408 = ((*(R21 *)rt_nil_check(l_ARM_2408))).f_NEXT;
}
RT_B_TICK();
} L_end2410: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2409;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2411; memset(&l_T_2411, 0, sizeof l_T_2411);
l_T_2411 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2411))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2412 = l_T_2411;
return rv2412; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2413; memset(&l_TD_2413, 0, sizeof l_TD_2413);
S_R10(&l_TD_2413, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2414; memset(&l_P_2414, 0, sizeof l_P_2414);
l_P_2414 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2414 == NULL)) goto L_end2415;
{
{
R12 * l_Y_2416; memset(&l_Y_2416, 0, sizeof l_Y_2416);
l_Y_2416 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2414))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2416))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2416))).f_DECL = l_P_2414;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2416, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2416))).f_INPUT = 1;
r_DEFINE(l_Y_2416, ((*(R21 *)rt_nil_check(l_P_2414))).f_LINE);
}
l_P_2414 = ((*(R21 *)rt_nil_check(l_P_2414))).f_NEXT;
}
RT_B_TICK();
} L_end2415: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2413));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2413, l_TD_2413));
l_P_2414 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2414 == NULL)) goto L_end2417;
{
r_ACTIVATE_PATH(l_P_2414, l_TD_2413);
l_P_2414 = ((*(R21 *)rt_nil_check(l_P_2414))).f_NEXT;
}
RT_B_TICK();
} L_end2417: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2413, l_TD_2413, l_TD_2413));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2413));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2418; memset(&l_FN_2418, 0, sizeof l_FN_2418);
S_R10(&l_FN_2418, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2419; memset(&l_FT_2419, 0, sizeof l_FT_2419);
S_R10(&l_FT_2419, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2420; memset(&l_Y_2420, 0, sizeof l_Y_2420);
l_Y_2420 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2421; memset(&l_H_2421, 0, sizeof l_H_2421);
S_R10(&l_H_2421, r_OBJ_ACCESS(l_Y_2420), 0);
R10 l_IT_2422; memset(&l_IT_2422, 0, sizeof l_IT_2422);
S_R10(&l_IT_2422, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2423; memset(&l_PRIO_2423, 0, sizeof l_PRIO_2423);
S_R10(&l_PRIO_2423, r_MK(rt_str("0", 1)), 0);
R10 l_START_2424; memset(&l_START_2424, 0, sizeof l_START_2424);
R22 * l_LT_2425; memset(&l_LT_2425, 0, sizeof l_LT_2425);
l_LT_2425 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2419, l_FT_2419));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2423, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2426; memset(&l_R_2426, 0, sizeof l_R_2426);
l_R_2426 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2427; memset(&l_LV_2427, 0, sizeof l_LV_2427);
S_R26(&l_LV_2427, r_EXPR(((*(R21 *)rt_nil_check(l_R_2426))).f_A, NULL), 0);
R10 l_LO_2428; memset(&l_LO_2428, 0, sizeof l_LO_2428);
S_R10(&l_LO_2428, (l_LV_2427).f_C, 0);
R10 l_HI_2429; memset(&l_HI_2429, 0, sizeof l_HI_2429);
S_R10(&l_HI_2429, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2426))).f_B, (l_LV_2427).f_T)).f_C, 0);
R22 * l_RT_2430; memset(&l_RT_2430, 0, sizeof l_RT_2430);
l_RT_2430 = r_REAL_TYPE((l_LV_2427).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2430))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2430))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2425 = ((*(R22 *)rt_nil_check(l_RT_2430))).f_BASE;
S_R10(&l_HI_2429, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2426))).f_B, l_LT_2425)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2430))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2430))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2426))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2426))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2428, r_FMT1(rt_str("(@) + 1", 7), l_LO_2428), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2426))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2429, r_FMT1(rt_str("(@) - 1", 7), l_HI_2429), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2421, l_LO_2428, l_HI_2429));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2422, l_H_2421, l_IT_2422, l_H_2421), l_IT_2422));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2422));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2419, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2422));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2431; memset(&l_V_2431, 0, sizeof l_V_2431);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2432; memset(&l_I_2432, 0, sizeof l_I_2432);
l_I_2432 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2432))).f_T = l_LT_2425;
((*(R12 *)rt_nil_check(l_I_2432))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2432))).f_ACCESS, l_IT_2422, 0);
((*(R12 *)rt_nil_check(l_I_2432))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2432, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2431, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2431).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2431).f_C));
}
}
S_R10(&l_START_2424, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2421, l_IT_2422, l_FN_2418, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2424, p_TD, l_PRIO_2423, l_IT_2422));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2421));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2424, p_TD, l_PRIO_2423));
}
r_PATH_BODY(p_P, l_FN_2418, l_FT_2419, l_LT_2425);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2433 = r_MK(rt_str("NULL", 4));
return rv2433; }
}
{ R10 rv2434 = r_MK(rt_str("F", 1));
return rv2434; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2435; memset(&l_SAVED_CODE_2435, 0, sizeof l_SAVED_CODE_2435);
S_R14(&l_SAVED_CODE_2435, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2436; memset(&l_SAVED_CTXS_2436, 0, sizeof l_SAVED_CTXS_2436);
l_SAVED_CTXS_2436 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2437; memset(&l_OUTER_2437, 0, sizeof l_OUTER_2437);
l_OUTER_2437 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2438; memset(&l_H_2438, 0, sizeof l_H_2438);
l_H_2438 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2439; memset(&l_CS_2439, 0, sizeof l_CS_2439);
l_CS_2439 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2440; memset(&l_UPT_2440, 0, sizeof l_UPT_2440);
S_R10(&l_UPT_2440, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2437))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2440, ((*(R18 *)rt_nil_check(l_OUTER_2437))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2439)), ({ R18 rc2441; memset(&rc2441, 0, sizeof rc2441);  rc2441.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2437))).f_LEVEL, ((rt_int)1LL)); rc2441.f_R = NULL; rc2441.f_FRAMED = 1; S_R10(&rc2441.f_FTYPE, p_FT, 0); S_R14(&rc2441.f_FIELDS, ({ R14 rc2442; memset(&rc2442, 0, sizeof rc2442);  rc2442.f_HEAD = NULL; rc2442.f_TAIL = NULL; rc2442; }), 0); rc2441.f_UP = l_OUTER_2437; rc2441.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2438))).f_B; rc2441.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2438))).f_A; rc2441.f_RESULT = NULL; rc2441.f_IS_PATH = 1; S_R10(&rc2441.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2441; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2440), &((*(R18 *)rt_nil_check(l_CS_2439))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2439;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2443; memset(&rc2443, 0, sizeof rc2443);  rc2443.f_HEAD = NULL; rc2443.f_TAIL = NULL; rc2443; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2438))).f_B, ((*(R21 *)rt_nil_check(l_H_2438))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2444; memset(&l_I_2444, 0, sizeof l_I_2444);
l_I_2444 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2444))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2444))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2444))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2444))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2439))).f_FIELDS);
r_DEFINE(l_I_2444, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2445; memset(&l_L_2445, 0, sizeof l_L_2445);
l_L_2445 = ((*(R21 *)rt_nil_check(l_H_2438))).f_A;
R10 l_C_2446; memset(&l_C_2446, 0, sizeof l_C_2446);
S_R10(&l_C_2446, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2445 == NULL)) goto L_end2447;
{
S_R10(&l_C_2446, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2446, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2445))).f_NAME)), 0);
l_L_2445 = ((*(R21 *)rt_nil_check(l_L_2445))).f_NEXT;
}
RT_B_TICK();
} L_end2447: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2446));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2439))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2437;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2435, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2436;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2448; memset(&l_C_2448, 0, sizeof l_C_2448);
l_C_2448 = (p_B).f_HEAD;
R10 l_R_2449; memset(&l_R_2449, 0, sizeof l_R_2449);
S_R10(&l_R_2449, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2448 == NULL)) goto L_end2450;
{
S_R10(&l_R_2449, r_CAT(l_R_2449, ((*(R15 *)rt_nil_check(l_C_2448))).f_T), 0);
l_C_2448 = ((*(R15 *)rt_nil_check(l_C_2448))).f_NEXT;
}
RT_B_TICK();
} L_end2450: ;
{ R10 rv2451 = l_R_2449;
return rv2451; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2452; memset(&l_NAME_2452, 0, sizeof l_NAME_2452);
S_R10(&l_NAME_2452, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2453; memset(&l_SUB_2453, 0, sizeof l_SUB_2453);
S_R10(&l_SUB_2453, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2453, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2454; memset(&l_Y_2454, 0, sizeof l_Y_2454);
l_Y_2454 = r_LOOKUP(l_NAME_2452);
if ((l_Y_2454 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2452);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2454))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2452);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2454))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2455 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2454), l_SUB_2453);
return rv2455; }
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
R10 l_NAME_2456; memset(&l_NAME_2456, 0, sizeof l_NAME_2456);
S_R10(&l_NAME_2456, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2457; memset(&l_LINE_2457, 0, sizeof l_LINE_2457);
l_LINE_2457 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2456, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2458; memset(&l_V_2458, 0, sizeof l_V_2458);
S_R26(&l_V_2458, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2458).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2457, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2459 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2458).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2458).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2459; }
}
}
else if (r_TEQS(l_NAME_2456, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2460 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2460; }
}
{ R26 rv2461 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2461; }
}
else if (r_TEQS(l_NAME_2456, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2462 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2462; }
}
{ R26 rv2463 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2463; }
}
else if ((r_TEQS(l_NAME_2456, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2456, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2457, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2456);
}
{
R26 l_V_2464; memset(&l_V_2464, 0, sizeof l_V_2464);
S_R26(&l_V_2464, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2464).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2457, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2464).f_LVAL))
{
r_FAIL(l_LINE_2457, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2456, rt_str("REQUEST", 7)))
{
{ R26 rv2465 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2464).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2465; }
}
{ R26 rv2466 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2464).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2466; }
}
}
else if (r_TEQS(l_NAME_2456, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2457);
{ R26 rv2467 = r_START_IO_CALL(p_E);
return rv2467; }
}
r_FAILT(l_LINE_2457, rt_str("unknown routine ", 16), l_NAME_2456);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2468; memset(&l_ARGS_2468, 0, sizeof l_ARGS_2468);
l_ARGS_2468 = r_CALL_ARGS(p_E);
R12 * l_Y_2469; memset(&l_Y_2469, 0, sizeof l_Y_2469);
l_Y_2469 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2468, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2470; memset(&l_R_2470, 0, sizeof l_R_2470);
if ((l_Y_2469 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2470, r_CALL_SYM(l_Y_2469, l_ARGS_2468, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2471 = l_R_2470;
return rv2471; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2472; memset(&l_I_2472, 0, sizeof l_I_2472);
l_I_2472 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2472)), ({ R19 rc2473; memset(&rc2473, 0, sizeof rc2473);  rc2473.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2473.f_IMPORTS = p_IMPORTS; rc2473.f_SIGNALS = p_SIGNALS; S_R10(&rc2473.f_NAME, p_NAME, 0); rc2473.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2473; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2472;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2474; memset(&l_BASE_2474, 0, sizeof l_BASE_2474);
S_R10(&l_BASE_2474, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2475; memset(&l_S_2475, 0, sizeof l_S_2475);
l_S_2475 = rt_b_str_new((l_BASE_2474).f_LEN, 0);
rt_b_assign(&l_S_2475, r_STR(l_BASE_2474, (l_BASE_2474).f_LEN));
R21 * l_N_2476; memset(&l_N_2476, 0, sizeof l_N_2476);
l_N_2476 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2478_lo = ((rt_int)0LL), it2478_hi = rt_sub((l_BASE_2474).f_LEN, ((rt_int)1LL));
for (rt_int it2478 = it2478_lo; it2478 <= it2478_hi; it2478++) {
{
if (rt_b_eq(rt_b_slice(l_S_2475, it2478, it2478), rt_str("$", 1)))
{
S_R10(&l_BASE_2474, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_2475, ((rt_int)0LL), rt_sub(it2478, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2475, rt_add(it2478, ((rt_int)1LL)), rt_sub((l_BASE_2474).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2478 == it2478_hi) break;
} } L_end2477: ;
for (;;) {
if ((l_N_2476 == NULL)) goto L_end2479;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2476))).f_NAME, l_BASE_2474))
{
{ R10 rv2480 = r_FMT2(rt_str("@_@", 3), l_BASE_2474, r_NEW_NAME(rt_str("", 0)));
return rv2480; }
}
l_N_2476 = ((*(R21 *)rt_nil_check(l_N_2476))).f_NEXT;
}
RT_B_TICK();
} L_end2479: ;
l_N_2476 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2476))).f_NAME, l_BASE_2474, 0);
((*(R21 *)rt_nil_check(l_N_2476))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2476;
{ R10 rv2481 = l_BASE_2474;
return rv2481; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2482 = 0;
return rv2482; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2483 = 1;
return rv2483; }
}
{ rt_int rv2484 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2484; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2485; memset(&l_S_2485, 0, sizeof l_S_2485);
l_S_2485 = p_S0;
for (;;) {
if ((l_S_2485 == NULL)) goto L_end2486;
{
if (((((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_PAR)))
{
{ rt_int rv2487 = 1;
return rv2487; }
}
if (((((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2485))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2485))).f_B)))
{
{ rt_int rv2488 = 1;
return rv2488; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2485))).f_A))).f_B))
{
{ rt_int rv2489 = 1;
return rv2489; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2485))).f_B))).f_B))
{
{ rt_int rv2490 = 1;
return rv2490; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2491; memset(&l_A_2491, 0, sizeof l_A_2491);
l_A_2491 = ((*(R21 *)rt_nil_check(l_S_2485))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2485))).f_KIND == g_N_CASE))
{
l_A_2491 = ((*(R21 *)rt_nil_check(l_S_2485))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2485))).f_D == NULL)))
{
{ rt_int rv2492 = 1;
return rv2492; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2485))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2485))).f_C))).f_B))
{
{ rt_int rv2493 = 1;
return rv2493; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2485))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2485))).f_B))).f_B))
{
{ rt_int rv2494 = 1;
return rv2494; }
}
}
for (;;) {
if ((l_A_2491 == NULL)) goto L_end2495;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2491))).f_C == NULL)))
{
{ rt_int rv2496 = 1;
return rv2496; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2491))).f_B))).f_B))
{
{ rt_int rv2497 = 1;
return rv2497; }
}
l_A_2491 = ((*(R21 *)rt_nil_check(l_A_2491))).f_NEXT;
}
RT_B_TICK();
} L_end2495: ;
}
}
l_S_2485 = ((*(R21 *)rt_nil_check(l_S_2485))).f_NEXT;
}
RT_B_TICK();
} L_end2486: ;
{ rt_int rv2498 = 0;
return rv2498; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2499; memset(&l_Y_2499, 0, sizeof l_Y_2499);
l_Y_2499 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2500; memset(&l_S_2500, 0, sizeof l_S_2500);
l_S_2500 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_2500, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2499))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2499))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2499))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2499))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2499, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2502_lo = ((rt_int)1LL), it2502_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2502 = it2502_lo; it2502 <= it2502_hi; it2502++) {
{
if (rt_b_eq(rt_b_slice(l_S_2500, it2502, it2502), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2499))).f_PREFIX, r_MKN(rt_b_slice(l_S_2500, ((rt_int)0LL), rt_sub(it2502, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2503; memset(&l_SHORT_2503, 0, sizeof l_SHORT_2503);
l_SHORT_2503 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2500, rt_add(it2502, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2503))).f_ORIG = l_Y_2499;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2503))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2499))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2503))).f_DECL = p_R;
r_DEFINE(l_SHORT_2503, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2501;
}
}
RT_B_TICK();
if (it2502 == it2502_hi) break;
} } L_end2501: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2504; memset(&l_R_2504, 0, sizeof l_R_2504);
l_R_2504 = p_RS;
for (;;) {
if ((l_R_2504 == NULL)) goto L_end2505;
{
if ((((*(R21 *)rt_nil_check(l_R_2504))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2504);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2504);
}
l_R_2504 = ((*(R21 *)rt_nil_check(l_R_2504))).f_NEXT;
}
RT_B_TICK();
} L_end2505: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2506; memset(&l_R_2506, 0, sizeof l_R_2506);
l_R_2506 = p_RS;
for (;;) {
if ((l_R_2506 == NULL)) goto L_end2507;
{
if ((((*(R21 *)rt_nil_check(l_R_2506))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2508; memset(&l_M_2508, 0, sizeof l_M_2508);
l_M_2508 = r_FIND_DECL(l_R_2506);
r_ENTER_MODULE(l_M_2508);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2506))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2508);
}
}
else
{
{
R12 * l_Y_2509; memset(&l_Y_2509, 0, sizeof l_Y_2509);
l_Y_2509 = r_FIND_DECL(l_R_2506);
r_ROUTINE_HEADER(l_Y_2509);
}
}
l_R_2506 = ((*(R21 *)rt_nil_check(l_R_2506))).f_NEXT;
}
RT_B_TICK();
} L_end2507: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2510; memset(&l_Y_2510, 0, sizeof l_Y_2510);
l_Y_2510 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2510 == NULL)) goto L_end2511;
{
if (((((*(R12 *)rt_nil_check(l_Y_2510))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2510))).f_ORIG == NULL)))
{
{ R12 * rv2512 = l_Y_2510;
return rv2512; }
}
l_Y_2510 = r_LOOKUP_NEXT(l_Y_2510);
}
RT_B_TICK();
} L_end2511: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2513; memset(&l_D_2513, 0, sizeof l_D_2513);
l_D_2513 = p_DECLS;
for (;;) {
if ((l_D_2513 == NULL)) goto L_end2514;
{
if (((((*(R21 *)rt_nil_check(l_D_2513))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2513))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2513))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2515; memset(&l_Y_2515, 0, sizeof l_Y_2515);
l_Y_2515 = r_FIND_DECL(l_D_2513);
R22 * l_T_2516; memset(&l_T_2516, 0, sizeof l_T_2516);
l_T_2516 = r_RESOLVE_USER(r_TYPE_REF(l_D_2513));
}
}
}
l_D_2513 = ((*(R21 *)rt_nil_check(l_D_2513))).f_NEXT;
}
RT_B_TICK();
} L_end2514: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2517; memset(&l_TS_2517, 0, sizeof l_TS_2517);
l_TS_2517 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2517))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2518 = l_TS_2517;
return rv2518; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2519; memset(&l_Y_2519, 0, sizeof l_Y_2519);
l_Y_2519 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2520; memset(&l_SAVED_2520, 0, sizeof l_SAVED_2520);
l_SAVED_2520 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2519))).f_DECL = p_M;
r_DEFINE(l_Y_2519, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2521; memset(&l_MARK_2521, 0, sizeof l_MARK_2521);
l_MARK_2521 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2519;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2519))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2521);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2520;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2519);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2522; memset(&l_Y_2522, 0, sizeof l_Y_2522);
l_Y_2522 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2522 == NULL)) goto L_end2523;
{
{
R12 * l_NEXT_2524; memset(&l_NEXT_2524, 0, sizeof l_NEXT_2524);
l_NEXT_2524 = ((*(R12 *)rt_nil_check(l_Y_2522))).f_SNEXT;
r_DEFINE(l_Y_2522, ((rt_int)0LL));
l_Y_2522 = l_NEXT_2524;
}
}
RT_B_TICK();
} L_end2523: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2525; memset(&l_MARK_2525, 0, sizeof l_MARK_2525);
l_MARK_2525 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2525 == NULL)) goto L_end2526;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2525))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2526;
}
l_MARK_2525 = ((*(R12 *)rt_nil_check(l_MARK_2525))).f_SNEXT;
}
RT_B_TICK();
} L_end2526: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2525);
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
{ rt_int rv2527 = 1;
return rv2527; }
}
}
{ rt_int rv2528 = 0;
return rv2528; }
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
R21 * l_D_2529; memset(&l_D_2529, 0, sizeof l_D_2529);
l_D_2529 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2530; memset(&l_Y_2530, 0, sizeof l_Y_2530);
l_Y_2530 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2530 == NULL)) goto L_end2531;
{
if (r_EXPORTED_BY(l_D_2529, l_Y_2530))
{
((*(R12 *)rt_nil_check(l_Y_2530))).f_EXPORTED = 1;
{
R12 * l_A_2532; memset(&l_A_2532, 0, sizeof l_A_2532);
l_A_2532 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2530))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2530))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2532)), (*(R12 *)rt_nil_check(l_Y_2530)), 0);
((*(R12 *)rt_nil_check(l_A_2532))).f_ORIG = r_ORIGINAL(l_Y_2530);
((*(R12 *)rt_nil_check(l_A_2532))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2532, ((*(R21 *)rt_nil_check(l_D_2529))).f_LINE);
}
}
l_Y_2530 = ((*(R12 *)rt_nil_check(l_Y_2530))).f_SNEXT;
}
RT_B_TICK();
} L_end2531: ;
{
R21 * l_X_2533; memset(&l_X_2533, 0, sizeof l_X_2533);
l_X_2533 = ((*(R21 *)rt_nil_check(l_D_2529))).f_B;
for (;;) {
if ((l_X_2533 == NULL)) goto L_end2534;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2533))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2533))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2533))).f_NAME);
}
l_X_2533 = ((*(R21 *)rt_nil_check(l_X_2533))).f_NEXT;
}
RT_B_TICK();
} L_end2534: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2535; memset(&l_Y_2535, 0, sizeof l_Y_2535);
l_Y_2535 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2535 == NULL)) goto L_end2536;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2535))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2535))).f_PREFIX, p_NAME)))
{
{ rt_int rv2537 = 1;
return rv2537; }
}
l_Y_2535 = ((*(R12 *)rt_nil_check(l_Y_2535))).f_SNEXT;
}
RT_B_TICK();
} L_end2536: ;
{ rt_int rv2538 = 0;
return rv2538; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2539; memset(&l_X_2539, 0, sizeof l_X_2539);
l_X_2539 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2540 = 0;
return rv2540; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2541 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2541; }
}
for (;;) {
if ((l_X_2539 == NULL)) goto L_end2542;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2539))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2543 = 1;
return rv2543; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2539))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2539))).f_A == NULL))
{
{ rt_int rv2544 = 1;
return rv2544; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2539))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2545 = 1;
return rv2545; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2546; memset(&l_T_2546, 0, sizeof l_T_2546);
l_T_2546 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2539))).f_NAME, p_Y);
if ((!(l_T_2546 == NULL)))
{
{ rt_int rv2547 = 1;
return rv2547; }
}
}
}
l_X_2539 = ((*(R21 *)rt_nil_check(l_X_2539))).f_NEXT;
}
RT_B_TICK();
} L_end2542: ;
{ rt_int rv2548 = 0;
return rv2548; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2549; memset(&l_M_2549, 0, sizeof l_M_2549);
l_M_2549 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2550; memset(&l_Z_2550, 0, sizeof l_Z_2550);
if ((l_M_2549 == NULL))
{
{ R12 * rv2551 = NULL;
return rv2551; }
}
l_Z_2550 = ((*(R12 *)rt_nil_check(l_M_2549))).f_MEMBERS;
for (;;) {
if ((l_Z_2550 == NULL)) goto L_end2552;
{
if (((((*(R12 *)rt_nil_check(l_Z_2550))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2550))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2550))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2550))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2550))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2553 = l_Z_2550;
return rv2553; }
}
}
}
}
l_Z_2550 = ((*(R12 *)rt_nil_check(l_Z_2550))).f_SNEXT;
}
RT_B_TICK();
} L_end2552: ;
{ R12 * rv2554 = NULL;
return rv2554; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2555; memset(&l_R_2555, 0, sizeof l_R_2555);
l_R_2555 = p_RS;
for (;;) {
if ((l_R_2555 == NULL)) goto L_end2556;
{
if ((((*(R21 *)rt_nil_check(l_R_2555))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2557; memset(&l_M_2557, 0, sizeof l_M_2557);
l_M_2557 = r_FIND_DECL(l_R_2555);
R21 * l_D_2558; memset(&l_D_2558, 0, sizeof l_D_2558);
l_D_2558 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2555))).f_C))).f_A;
r_ENTER_MODULE(l_M_2557);
for (;;) {
if ((l_D_2558 == NULL)) goto L_end2559;
{
if (((((*(R21 *)rt_nil_check(l_D_2558))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2558))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2558);
}
l_D_2558 = ((*(R21 *)rt_nil_check(l_D_2558))).f_NEXT;
}
RT_B_TICK();
} L_end2559: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2555))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2555))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2557);
}
}
l_R_2555 = ((*(R21 *)rt_nil_check(l_R_2555))).f_NEXT;
}
RT_B_TICK();
} L_end2556: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2560; memset(&l_R_2560, 0, sizeof l_R_2560);
l_R_2560 = p_RS;
for (;;) {
if ((l_R_2560 == NULL)) goto L_end2561;
{
if ((((*(R21 *)rt_nil_check(l_R_2560))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2562; memset(&l_M_2562, 0, sizeof l_M_2562);
l_M_2562 = r_FIND_DECL(l_R_2560);
r_ENTER_MODULE(l_M_2562);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2560))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2562);
}
}
else
{
{
R12 * l_Y_2563; memset(&l_Y_2563, 0, sizeof l_Y_2563);
l_Y_2563 = r_FIND_DECL(l_R_2560);
if ((!((*(R12 *)rt_nil_check(l_Y_2563))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2563);
}
}
}
l_R_2560 = ((*(R21 *)rt_nil_check(l_R_2560))).f_NEXT;
}
RT_B_TICK();
} L_end2561: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2564; memset(&l_LEVEL_2564, 0, sizeof l_LEVEL_2564);
l_LEVEL_2564 = r_CUR_LEVEL();
rt_int l_MORE_2565; memset(&l_MORE_2565, 0, sizeof l_MORE_2565);
l_MORE_2565 = 1;
for (;;) {
if ((!l_MORE_2565)) goto L_end2566;
{
l_MORE_2565 = 0;
{
R12 * l_P_2567; memset(&l_P_2567, 0, sizeof l_P_2567);
l_P_2567 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2568; memset(&l_PREV_2568, 0, sizeof l_PREV_2568);
l_PREV_2568 = NULL;
for (;;) {
if ((l_P_2567 == NULL)) goto L_end2569;
{
if ((((*(R12 *)rt_nil_check(l_P_2567))).f_LEVEL == l_LEVEL_2564))
{
if ((l_PREV_2568 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2567))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2568))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2567))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2567);
r_ROUTINE_BODY(l_P_2567);
r_LEAVE_MODULE_OF(l_P_2567);
l_MORE_2565 = 1;
goto L_end2569;
}
l_PREV_2568 = l_P_2567;
l_P_2567 = ((*(R12 *)rt_nil_check(l_P_2567))).f_MEMBERS;
}
RT_B_TICK();
} L_end2569: ;
}
}
RT_B_TICK();
} L_end2566: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2570; memset(&l_D_2570, 0, sizeof l_D_2570);
l_D_2570 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2571; memset(&l_S_2571, 0, sizeof l_S_2571);
l_S_2571 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2570 == NULL)) goto L_end2572;
{
if (((((*(R21 *)rt_nil_check(l_D_2570))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2570))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2570);
}
l_D_2570 = ((*(R21 *)rt_nil_check(l_D_2570))).f_NEXT;
}
RT_B_TICK();
} L_end2572: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2571 == NULL)) goto L_end2573;
{
r_STMT(l_S_2571);
l_S_2571 = ((*(R21 *)rt_nil_check(l_S_2571))).f_NEXT;
}
RT_B_TICK();
} L_end2573: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2574; memset(&l_R_2574, 0, sizeof l_R_2574);
l_R_2574 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2575; memset(&l_SAVED_CODE_2575, 0, sizeof l_SAVED_CODE_2575);
S_R14(&l_SAVED_CODE_2575, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2576; memset(&l_SAVED_CTXS_2576, 0, sizeof l_SAVED_CTXS_2576);
l_SAVED_CTXS_2576 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2577; memset(&l_SAVED_BINDS_2577, 0, sizeof l_SAVED_BINDS_2577);
l_SAVED_BINDS_2577 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2578; memset(&l_OUTER_2578, 0, sizeof l_OUTER_2578);
l_OUTER_2578 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2579; memset(&l_CS_2579, 0, sizeof l_CS_2579);
l_CS_2579 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2580; memset(&l_PROLOGUE_2580, 0, sizeof l_PROLOGUE_2580);
S_R10(&l_PROLOGUE_2580, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2579)), ({ R18 rc2581; memset(&rc2581, 0, sizeof rc2581);  rc2581.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2581.f_R = p_Y; rc2581.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2581.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2581.f_FIELDS, ({ R14 rc2582; memset(&rc2582, 0, sizeof rc2582);  rc2582.f_HEAD = NULL; rc2582.f_TAIL = NULL; rc2582; }), 0); rc2581.f_UP = l_OUTER_2578; rc2581.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2574))).f_E; rc2581.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2574))).f_D))).f_A; rc2581.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2581.f_IS_PATH = 0; S_R10(&rc2581.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2581; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2579))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2579))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2579))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2579))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2580, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2579))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2579))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2580, r_CATS(l_PROLOGUE_2580, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2579;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2583; memset(&rc2583, 0, sizeof rc2583);  rc2583.f_HEAD = NULL; rc2583.f_TAIL = NULL; rc2583; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2574))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2574))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2574))).f_LINE);
{
R28 * l_P_2584; memset(&l_P_2584, 0, sizeof l_P_2584);
l_P_2584 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2584 == NULL)) goto L_end2585;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2584))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2584))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2586; memset(&l_V_2586, 0, sizeof l_V_2586);
l_V_2586 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2584))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2586))).f_T = ((*(R28 *)rt_nil_check(l_P_2584))).f_T;
((*(R12 *)rt_nil_check(l_V_2586))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2584))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2586))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2584))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2586))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2584))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2579))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2584))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2579))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2580, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2580, r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2586))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2584))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2587; memset(&l_ARGA_2587, 0, sizeof l_ARGA_2587);
S_R10(&l_ARGA_2587, ((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2584))).f_T, l_ARGA_2587, ((*(R21 *)rt_nil_check(l_R_2574))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2586))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2584))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2579))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2580, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2580, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2584))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2584))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2580, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2580, ((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, l_ARGA_2587), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2584))).f_T))
{
S_R10(&l_PROLOGUE_2580, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2580, ((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2584))).f_T, l_ARGA_2587)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2579))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2579))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2584))).f_T, l_ARGA_2587, ((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS)), 0);
r_DEFINE(l_V_2586, ((*(R21 *)rt_nil_check(l_R_2574))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2586, ((*(R21 *)rt_nil_check(l_R_2574))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2584))).f_T, ((*(R12 *)rt_nil_check(l_V_2586))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2574))).f_LINE, 1);
}
}
}
}
l_P_2584 = ((*(R28 *)rt_nil_check(l_P_2584))).f_NEXT;
}
RT_B_TICK();
} L_end2585: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2574))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2574))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2574))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2579))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2579))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2580));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2579))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2579))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2578;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2575, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2576;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2577;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2588; memset(&l_B_2588, 0, sizeof l_B_2588);
l_B_2588 = p_BS;
for (;;) {
if ((l_B_2588 == NULL)) goto L_end2589;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2588))).f_T == NULL)))
{
{
R12 * l_Y_2590; memset(&l_Y_2590, 0, sizeof l_Y_2590);
l_Y_2590 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2588))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2590))).f_T = ((*(R20 *)rt_nil_check(l_B_2588))).f_T;
r_DEFINE(l_Y_2590, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2588))).f_HASMV)
{
{
R12 * l_Y_2591; memset(&l_Y_2591, 0, sizeof l_Y_2591);
l_Y_2591 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2588))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2591))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2591))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2591))).f_MV = ((*(R20 *)rt_nil_check(l_B_2588))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2591))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2588))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2591))).f_INPUT = 1;
r_DEFINE(l_Y_2591, p_LINE);
}
}
l_B_2588 = ((*(R20 *)rt_nil_check(l_B_2588))).f_NEXT;
}
RT_B_TICK();
} L_end2589: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2592; memset(&l_C_2592, 0, sizeof l_C_2592);
l_C_2592 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2592 == NULL)) goto L_end2593;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2592))).f_T), &(*p_DST));
l_C_2592 = ((*(R15 *)rt_nil_check(l_C_2592))).f_NEXT;
}
RT_B_TICK();
} L_end2593: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2594; memset(&l_U_2594, 0, sizeof l_U_2594);
l_U_2594 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2594 == NULL)) goto L_end2595;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2594))).f_NAME, p_NAME))
{
{ rt_int rv2596 = 1;
return rv2596; }
}
l_U_2594 = ((*(R21 *)rt_nil_check(l_U_2594))).f_NEXT;
}
RT_B_TICK();
} L_end2595: ;
{ rt_int rv2597 = 0;
return rv2597; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2598; memset(&l_U_2598, 0, sizeof l_U_2598);
l_U_2598 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2598 == NULL)) goto L_end2599;
{
{
R21 * l_T_2600; memset(&l_T_2600, 0, sizeof l_T_2600);
l_T_2600 = p_SEGS;
for (;;) {
if ((l_T_2600 == NULL)) goto L_end2601;
{
if ((((!(l_T_2600 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2600))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2600))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2598))).f_NAME)))
{
{ rt_int rv2602 = 0;
return rv2602; }
}
l_T_2600 = ((*(R21 *)rt_nil_check(l_T_2600))).f_NEXT;
}
RT_B_TICK();
} L_end2601: ;
}
l_U_2598 = ((*(R21 *)rt_nil_check(l_U_2598))).f_NEXT;
}
RT_B_TICK();
} L_end2599: ;
{ rt_int rv2603 = 1;
return rv2603; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2604; memset(&l_S_2604, 0, sizeof l_S_2604);
l_S_2604 = p_SEGS;
rt_int l_MAINS_2605; memset(&l_MAINS_2605, 0, sizeof l_MAINS_2605);
l_MAINS_2605 = ((rt_int)0LL);
R18 * l_ROOT_2606; memset(&l_ROOT_2606, 0, sizeof l_ROOT_2606);
l_ROOT_2606 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2606)), ({ R18 rc2607; memset(&rc2607, 0, sizeof rc2607);  rc2607.f_LEVEL = ((rt_int)0LL); rc2607.f_R = NULL; rc2607.f_FRAMED = 0; S_R10(&rc2607.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2607.f_FIELDS, ({ R14 rc2608; memset(&rc2608, 0, sizeof rc2608);  rc2608.f_HEAD = NULL; rc2608.f_TAIL = NULL; rc2608; }), 0); rc2607.f_UP = NULL; rc2607.f_IMPORTS = NULL; rc2607.f_SIGNALS = NULL; rc2607.f_RESULT = NULL; rc2607.f_IS_PATH = 0; S_R10(&rc2607.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2607; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2606;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2609; memset(&rc2609, 0, sizeof rc2609);  rc2609.f_HEAD = NULL; rc2609.f_TAIL = NULL; rc2609; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2604 = p_SEGS;
for (;;) {
if ((l_S_2604 == NULL)) goto L_end2611;
{
if ((((*(R21 *)rt_nil_check(l_S_2604))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2604, p_SEGS))
{
goto L_end2611;
}
}
l_S_2604 = ((*(R21 *)rt_nil_check(l_S_2604))).f_NEXT;
}
RT_B_TICK();
} L_end2611: ;
if ((l_S_2604 == NULL))
{
goto L_end2610;
}
((*(R21 *)rt_nil_check(l_S_2604))).f_D = l_S_2604;
l_MAINS_2605 = rt_add(l_MAINS_2605, ((*(R21 *)rt_nil_check(l_S_2604))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2604))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2604))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2604))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2604, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2604))).f_B);
r_SEGMENT_EXPORTS(l_S_2604);
}
RT_B_TICK();
} L_end2610: ;
l_S_2604 = p_SEGS;
for (;;) {
if ((l_S_2604 == NULL)) goto L_end2612;
{
if ((((*(R21 *)rt_nil_check(l_S_2604))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2604))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2604))).f_NAME);
}
l_S_2604 = ((*(R21 *)rt_nil_check(l_S_2604))).f_NEXT;
}
RT_B_TICK();
} L_end2612: ;
if ((!(l_MAINS_2605 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2613; memset(&l_X_2613, 0, sizeof l_X_2613);
l_X_2613 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2613 == NULL)) goto L_end2614;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2613))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2613))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2613))).f_NAME)));
l_X_2613 = ((*(R21 *)rt_nil_check(l_X_2613))).f_NEXT;
}
RT_B_TICK();
} L_end2614: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2615; memset(&l_M_2615, 0, sizeof l_M_2615);
l_M_2615 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2616 = 0;
return rv2616; }
}
for (;;) {
if ((l_M_2615 == NULL)) goto L_end2617;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2615))).f_NAME))
{
{ rt_int rv2618 = 1;
return rv2618; }
}
l_M_2615 = ((*(R12 *)rt_nil_check(l_M_2615))).f_MODL;
}
RT_B_TICK();
} L_end2617: ;
{ rt_int rv2619 = 0;
return rv2619; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2620; memset(&l_MARK_2620, 0, sizeof l_MARK_2620);
l_MARK_2620 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2621; memset(&l_TAKEN_2621, 0, sizeof l_TAKEN_2621);
for (;;) {
if ((l_MARK_2620 == NULL)) goto L_end2622;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2620))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2622;
}
l_MARK_2620 = ((*(R12 *)rt_nil_check(l_MARK_2620))).f_SNEXT;
}
RT_B_TICK();
} L_end2622: ;
l_TAKEN_2621 = r_TAKE_SCOPE(l_MARK_2620);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2621 == NULL)) goto L_end2623;
{
{
R12 * l_NEXT_2624; memset(&l_NEXT_2624, 0, sizeof l_NEXT_2624);
l_NEXT_2624 = ((*(R12 *)rt_nil_check(l_TAKEN_2621))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2621))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2621))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2621))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2621)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2621))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2621))))))
{
r_DEFINE(l_TAKEN_2621, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2621 = l_NEXT_2624;
}
}
RT_B_TICK();
} L_end2623: ;
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
g_W = ({ R7 *p = rt_alloc(sizeof *p);  (*p).f_ARENA = rt_b_str_new(((rt_int)64000000LL), 0); { (*p).f_SRC.lo[0] = ((rt_int)0LL); (*p).f_SRC.hi[0] = g_MAX_SOURCE; rt_int n = rt_b_extent(1, (*p).f_SRC.lo, (*p).f_SRC.hi); (*p).f_SRC.p = rt_alloc(sizeof *(*p).f_SRC.p * (size_t)(n ? n : 1)); } { (*p).f_TOKS.lo[0] = ((rt_int)0LL); (*p).f_TOKS.hi[0] = g_MAX_TOKENS; rt_int n = rt_b_extent(1, (*p).f_TOKS.lo, (*p).f_TOKS.hi); (*p).f_TOKS.p = rt_alloc(sizeof *(*p).f_TOKS.p * (size_t)(n ? n : 1)); } { (*p).f_TABLE.lo[0] = ((rt_int)0LL); (*p).f_TABLE.hi[0] = g_HASH_SIZE; rt_int n = rt_b_extent(1, (*p).f_TABLE.lo, (*p).f_TABLE.hi); (*p).f_TABLE.p = rt_alloc(sizeof *(*p).f_TABLE.p * (size_t)(n ? n : 1)); } { (*p).f_OUT.lo[0] = ((rt_int)0LL); (*p).f_OUT.hi[0] = g_O_LAST; rt_int n = rt_b_extent(1, (*p).f_OUT.lo, (*p).f_OUT.hi); (*p).f_OUT.p = rt_alloc(sizeof *(*p).f_OUT.p * (size_t)(n ? n : 1)); } p; });
r_READ_SOURCE();
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
