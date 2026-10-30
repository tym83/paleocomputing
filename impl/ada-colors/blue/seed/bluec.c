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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_ARRAYS; R12 * f_RECS; };
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
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1081; };
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
l_B_31 = rt_b_zeros(((rt_int)8LL));
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
{ R10 rv51 = r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv51; }
rt_raise(RT_X_INIT);
}
static R10 r_CATS(R10 p_A, rstr p_S) { RT_B_TICK(); 
{ R10 rv52 = r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), p_S));
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
l_S_65 = rt_str_new((p_T).f_LEN);
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
{ R10 rv71 = r_MK(rt_str_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
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
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R10 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_str_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
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
l_WORDS_94 = rt_str_new(((rt_int)290LL));
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
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_141, (l_T_141).f_LEN)));
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
l_S_144 = rt_str_new(((rt_int)2LL));
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
S_R10(&((*(R21 *)rt_nil_check(l_N_161))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR(((*(R21 *)rt_nil_check(l_N_161))).f_NAME, (((*(R21 *)rt_nil_check(l_N_161))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
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
l_S_384 = rt_str_new((l_T_383).f_LEN);
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
if ((((l_T_396).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
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
if (((l_STRINGS_427 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R21 *)rt_nil_check(l_HEAD_425))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_424, rt_str("two enumerated literals in a row", 32));
}
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
l_OPS_554 = rt_str_new(((rt_int)271LL));
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
l_CONTROLS_558 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_558, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_558, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv559 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_558, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv559; }
}
{ R10 rv560 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_558, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv560; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv561 = r_MKN(rt_str("\\''''", 5));
return rv561; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv562 = r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv562; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv563 = r_MKN(rt_str("\\ACCENT", 7));
return rv563; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv564 = r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
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
l_S_591 = rt_str_new((p_T).f_LEN);
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
for (;;) {
if ((l_Y_606 == NULL)) goto L_end608;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_606))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_606))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_606))).f_T, p_LINE);
{ R22 * rv609 = ((*(R12 *)rt_nil_check(l_Y_606))).f_T;
return rv609; }
}
l_Y_606 = ((*(R12 *)rt_nil_check(l_Y_606))).f_INSTANCES;
}
RT_B_TICK();
} L_end608: ;
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
R21 * l_P_610; memset(&l_P_610, 0, sizeof l_P_610);
l_P_610 = p_LITS;
R10 l_NAMES_611; memset(&l_NAMES_611, 0, sizeof l_NAMES_611);
S_R10(&l_NAMES_611, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_610 == NULL)) goto L_end612;
{
S_R10(&l_NAMES_611, r_FMT2(rt_str("@@, ", 4), l_NAMES_611, r_CSTRING(((*(R21 *)rt_nil_check(l_P_610))).f_NAME)), 0);
l_P_610 = ((*(R21 *)rt_nil_check(l_P_610))).f_NEXT;
}
RT_B_TICK();
} L_end612: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_607))).f_CNAME, l_NAMES_611));
}
r_DECLARE_LITERALS(l_T_607, p_LINE);
{ R22 * rv613 = l_T_607;
return rv613; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_614; memset(&l_P_614, 0, sizeof l_P_614);
l_P_614 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_615; memset(&l_I_615, 0, sizeof l_I_615);
l_I_615 = ((rt_int)0LL);
for (;;) {
if ((l_P_614 == NULL)) goto L_end616;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_614))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_617; memset(&l_Y_617, 0, sizeof l_Y_617);
l_Y_617 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_614))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_617))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_617))).f_MV = l_I_615;
((*(R12 *)rt_nil_check(l_Y_617))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_617))).f_INPUT = 1;
r_DEFINE(l_Y_617, p_LINE);
}
}
l_I_615 = rt_add(l_I_615, ((rt_int)1LL));
l_P_614 = ((*(R21 *)rt_nil_check(l_P_614))).f_NEXT;
}
RT_B_TICK();
} L_end616: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_618; memset(&l_V_618, 0, sizeof l_V_618);
l_V_618 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_618 == NULL)) || (p_T == NULL)))
{
{ R12 * rv619 = l_V_618;
return rv619; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv620 = NULL;
return rv620; }
}
{
R21 * l_P_621; memset(&l_P_621, 0, sizeof l_P_621);
l_P_621 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_622; memset(&l_I_622, 0, sizeof l_I_622);
l_I_622 = ((rt_int)0LL);
for (;;) {
if ((l_P_621 == NULL)) goto L_end623;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_621))).f_NAME, p_NAME))
{
{
R12 * l_Y_624; memset(&l_Y_624, 0, sizeof l_Y_624);
l_Y_624 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_624))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_624))).f_MV = l_I_622;
((*(R12 *)rt_nil_check(l_Y_624))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_624))).f_INPUT = 1;
{ R12 * rv625 = l_Y_624;
return rv625; }
}
}
l_I_622 = rt_add(l_I_622, ((rt_int)1LL));
l_P_621 = ((*(R21 *)rt_nil_check(l_P_621))).f_NEXT;
}
RT_B_TICK();
} L_end623: ;
}
{ R12 * rv626 = NULL;
return rv626; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_627; memset(&l_Y_627, 0, sizeof l_Y_627);
l_Y_627 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_627 == NULL)) goto L_end628;
{
if ((((*(R12 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv629 = l_Y_627;
return rv629; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_627))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv630 = l_Y_627;
return rv630; }
}
}
l_Y_627 = r_LOOKUP_NEXT(l_Y_627);
}
RT_B_TICK();
} L_end628: ;
{ R12 * rv631 = NULL;
return rv631; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_632; memset(&l_Y_632, 0, sizeof l_Y_632);
l_Y_632 = r_LOOKUP(p_NAME);
rt_int l_N_633; memset(&l_N_633, 0, sizeof l_N_633);
l_N_633 = ((rt_int)0LL);
for (;;) {
if ((l_Y_632 == NULL)) goto L_end634;
{
if ((((*(R12 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_ENUMLIT))
{
l_N_633 = rt_add(l_N_633, ((rt_int)1LL));
}
l_Y_632 = r_LOOKUP_NEXT(l_Y_632);
}
RT_B_TICK();
} L_end634: ;
{ rt_int rv635 = l_N_633;
return rv635; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv636 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv636; }
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
R22 * l_N_637; memset(&l_N_637, 0, sizeof l_N_637);
if ((p_R == NULL))
{
{ R22 * rv638 = p_T;
return rv638; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_637 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_LO_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_HI_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv639 = l_N_637;
return rv639; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_637 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_637))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_640; memset(&l_LO_640, 0, sizeof l_LO_640);
R26 l_HI_641; memset(&l_HI_641, 0, sizeof l_HI_641);
S_R26(&l_LO_640, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_641, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_LO_C, (l_LO_640).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_HI_C, (l_HI_641).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_637))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_637))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_637))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_637))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_640).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_641).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_LO_C, r_RESCALE(l_LO_640, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_HI_C, r_RESCALE(l_HI_641, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_640).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_641).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_637))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_637))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_637))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_637))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_637))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_637))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_637))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_637))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_637))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_637))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_637))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv642 = l_N_637;
return rv642; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_643; memset(&l_Y_643, 0, sizeof l_Y_643);
l_Y_643 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_643 == NULL)))
{
{ R23 rv644 = r_SOME(((*(R12 *)rt_nil_check(l_Y_643))).f_MV);
return rv644; }
}
}
}
{ R23 rv645 = r_MANIFEST(p_E);
return rv645; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv646 = ((rt_int)0LL);
return rv646; }
}
{ rt_int rv647 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv647; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv648 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv648; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_649; memset(&l_A_649, 0, sizeof l_A_649);
l_A_649 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it651_lo = ((rt_int)1LL), it651_hi = p_K;
for (rt_int it651 = it651_lo; it651 <= it651_hi; it651++) {
{
if ((l_A_649 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_649 = ((*(R21 *)rt_nil_check(l_A_649))).f_NEXT;
}
RT_B_TICK();
if (it651 == it651_hi) break;
} } L_end650: ;
if ((l_A_649 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv652 = l_A_649;
return rv652; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_653; memset(&l_T_653, 0, sizeof l_T_653);
rt_int l_K_654; memset(&l_K_654, 0, sizeof l_K_654);
l_K_654 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_654 == g_TS_ARRAY))
{
{ R22 * rv655 = r_RESOLVE_ARRAY(p_TS);
return rv655; }
}
else if ((l_K_654 == g_TS_RECORD))
{
{ R22 * rv656 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv656; }
}
else if ((l_K_654 == g_TS_ENUM))
{
l_T_653 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_653 = r_WITH_RANGE(l_T_653, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_653 = r_COPY_TYP(l_T_653);
((*(R22 *)rt_nil_check(l_T_653))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
}
{ R22 * rv657 = l_T_653;
return rv657; }
}
else if ((l_K_654 == g_TS_GEN))
{
{ R22 * rv658 = r_GEN_TYPE(p_TS);
return rv658; }
}
else if ((!(l_K_654 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_653 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_653 == NULL))
{
l_T_653 = r_RESOLVE_USER(p_TS);
}
l_T_653 = r_WITH_RANGE(l_T_653, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_653 = r_COPY_TYP(l_T_653);
((*(R22 *)rt_nil_check(l_T_653))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R22 *)rt_nil_check(l_T_653))).f_KIND == g_T_ENUM)) || (!((*(R22 *)rt_nil_check(l_T_653))).f_UNORDERED)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
{ R22 * rv659 = l_T_653;
return rv659; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_660; memset(&l_B_660, 0, sizeof l_B_660);
l_B_660 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_660 == NULL)) goto L_end661;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_660))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_660))).f_T == NULL))))
{
{ R22 * rv662 = ((*(R20 *)rt_nil_check(l_B_660))).f_T;
return rv662; }
}
l_B_660 = ((*(R20 *)rt_nil_check(l_B_660))).f_NEXT;
}
RT_B_TICK();
} L_end661: ;
{
R12 * l_Y_663; memset(&l_Y_663, 0, sizeof l_Y_663);
l_Y_663 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_663 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_663))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_663))).f_T == NULL))))
{
{ R22 * rv664 = ((*(R12 *)rt_nil_check(l_Y_663))).f_T;
return rv664; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_665; memset(&l_NAME_665, 0, sizeof l_NAME_665);
S_R10(&l_NAME_665, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_666; memset(&l_T_666, 0, sizeof l_T_666);
if (r_TEQS(l_NAME_665, rt_str("FIXED", 5)))
{
{
R23 l_S_667; memset(&l_S_667, 0, sizeof l_S_667);
S_R23(&l_S_667, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_668; memset(&l_R_668, 0, sizeof l_R_668);
S_R23(&l_R_668, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_669; memset(&l_P_669, 0, sizeof l_P_669);
l_P_669 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_668).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_669, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_667).f_V == ((rt_int)0LL)))
{
{ R22 * rv670 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv670; }
}
l_T_666 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_666))).f_SCALE = (l_S_667).f_V;
{ R22 * rv671 = l_T_666;
return rv671; }
}
}
else if (r_TEQS(l_NAME_665, rt_str("FLOAT", 5)))
{
{
R23 l_P_672; memset(&l_P_672, 0, sizeof l_P_672);
S_R23(&l_P_672, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_666 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_666))).f_SCALE = (l_P_672).f_V;
{ R22 * rv673 = l_T_666;
return rv673; }
}
}
else if (r_TEQS(l_NAME_665, rt_str("BIT", 3)))
{
l_T_666 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_666, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv674 = l_T_666;
return rv674; }
}
else if ((r_TEQS(l_NAME_665, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_665, rt_str("ASCII_STR", 9))))
{
l_T_666 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_666, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_665, rt_str("CHAR_STR", 8)))
{
{
R21 * l_CS_675; memset(&l_CS_675, 0, sizeof l_CS_675);
l_CS_675 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if (((((*(R21 *)rt_nil_check(l_CS_675))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_675))).f_KIND == g_N_DONTCARE)))
{
{ R22 * rv676 = l_T_666;
return rv676; }
}
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_CS_675))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R22 *)rt_nil_check(r_ARG_TYPE(l_CS_675)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R22 * rv677 = l_T_666;
return rv677; }
}
else if (r_TEQS(l_NAME_665, rt_str("PTR", 3)))
{
l_T_666 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_666))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv678 = l_T_666;
return rv678; }
}
else if (r_TEQS(l_NAME_665, rt_str("SEMAPHORE", 9)))
{
l_T_666 = r_NEW_TYP(g_T_SEM);
{
R21 * l_U_679; memset(&l_U_679, 0, sizeof l_U_679);
l_U_679 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_679))).f_NAME, rt_str("REGION", 6)))
{
((*(R22 *)rt_nil_check(l_T_666))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_679))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R22 * rv680 = l_T_666;
return rv680; }
}
{ R22 * rv681 = NULL;
return rv681; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_682; memset(&l_M_682, 0, sizeof l_M_682);
S_R23(&l_M_682, r_MANIFEST(p_A), 0);
if ((!(l_M_682).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_str_cat(rt_str_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_683; memset(&l_SAVED_CODE_683, 0, sizeof l_SAVED_CODE_683);
S_R14(&l_SAVED_CODE_683, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_684; memset(&l_T_684, 0, sizeof l_T_684);
l_T_684 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_683, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_684)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_684))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_str_cat(rt_str_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_682).f_V < p_LO) || ((l_M_682).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_str_cat(rt_str_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv685 = l_M_682;
return rv685; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv686 = 0;
return rv686; }
}
{ rt_int rv687 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv687; }
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
R12 * l_Y_688; memset(&l_Y_688, 0, sizeof l_Y_688);
l_Y_688 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_688 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_688))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_688))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_688))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_689; memset(&l_B_689, 0, sizeof l_B_689);
l_B_689 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_689 == NULL)) goto L_end690;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_689))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_689))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_689))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc691; memset(&rc691, 0, sizeof rc691);  rc691.f_OK = ((*(R20 *)rt_nil_check(l_B_689))).f_HASMV; rc691.f_V = ((*(R20 *)rt_nil_check(l_B_689))).f_MV; rc691; }), 0);
return;
}
l_B_689 = ((*(R20 *)rt_nil_check(l_B_689))).f_NEXT;
}
RT_B_TICK();
} L_end690: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_692; memset(&l_C_692, 0, sizeof l_C_692);
R23 l_M_693; memset(&l_M_693, 0, sizeof l_M_693);
r_ATTR_VALUE(p_A, &l_C_692, &l_M_693);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_692, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_693, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_694; memset(&l_T_694, 0, sizeof l_T_694);
l_T_694 = r_NEW_TYP(g_T_ARR);
R21 * l_R_695; memset(&l_R_695, 0, sizeof l_R_695);
l_R_695 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_696; memset(&l_TAIL_696, 0, sizeof l_TAIL_696);
l_TAIL_696 = NULL;
for (;;) {
if ((l_R_695 == NULL)) goto L_end697;
{
{
R25 * l_B_698; memset(&l_B_698, 0, sizeof l_B_698);
l_B_698 = ((R25 *)rt_alloc(sizeof (R25)));
R26 l_LO_699; memset(&l_LO_699, 0, sizeof l_LO_699);
R26 l_HI_700; memset(&l_HI_700, 0, sizeof l_HI_700);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_695))).f_A))
{
S_R26(&l_LO_699, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_695))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_695))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_699, r_EXPR(((*(R21 *)rt_nil_check(l_R_695))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_695))).f_B))
{
S_R26(&l_HI_700, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_695))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_695))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_700, r_EXPR(((*(R21 *)rt_nil_check(l_R_695))).f_B, (l_LO_699).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_698)), ({ R25 rc701; memset(&rc701, 0, sizeof rc701);  S_R10(&rc701.f_LO, (l_LO_699).f_C, 0); S_R10(&rc701.f_HI, (l_HI_700).f_C, 0); S_R23(&rc701.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_695))).f_A), 0); S_R23(&rc701.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_695))).f_B), 0); rc701.f_ANYARG = 0; rc701.f_NEXT = NULL; rc701; }), 0);
if ((((*(R22 *)rt_nil_check((l_LO_699).f_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_698))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_695))).f_A, (l_LO_699).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_698))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_695))).f_B, (l_LO_699).f_T), 0);
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_699).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_695))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_696 == NULL))
{
((*(R22 *)rt_nil_check(l_T_694))).f_BOUNDS = l_B_698;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_696))).f_NEXT = l_B_698;
}
l_TAIL_696 = l_B_698;
((*(R22 *)rt_nil_check(l_T_694))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_694))).f_DIMS, ((rt_int)1LL));
}
l_R_695 = ((*(R21 *)rt_nil_check(l_R_695))).f_NEXT;
}
RT_B_TICK();
} L_end697: ;
((*(R22 *)rt_nil_check(l_T_694))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_694))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_694))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R22 *)rt_nil_check(l_T_694))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
S_R10(&((*(R22 *)rt_nil_check(l_T_694))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_694))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_694))).f_DIMS), 0);
{ R22 * rv702 = l_T_694;
return rv702; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_703; memset(&l_Y_703, 0, sizeof l_Y_703);
l_Y_703 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_704; memset(&l_B_704, 0, sizeof l_B_704);
l_B_704 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_704 == NULL)) goto L_end705;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_704))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_704))).f_T == NULL))))
{
{ R22 * rv706 = ((*(R20 *)rt_nil_check(l_B_704))).f_T;
return rv706; }
}
l_B_704 = ((*(R20 *)rt_nil_check(l_B_704))).f_NEXT;
}
RT_B_TICK();
} L_end705: ;
}
}
if ((l_Y_703 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_703))).f_KIND == g_Y_GEN))
{
{ R22 * rv707 = r_GEN_TYPE(p_TS);
return rv707; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_703))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_703))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv708 = ((*(R12 *)rt_nil_check(l_Y_703))).f_T;
return rv708; }
}
{
R21 * l_D_709; memset(&l_D_709, 0, sizeof l_D_709);
l_D_709 = ((*(R12 *)rt_nil_check(l_Y_703))).f_DECL;
R22 * l_T_710; memset(&l_T_710, 0, sizeof l_T_710);
if ((((*(R21 *)rt_nil_check(l_D_709))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_703))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_703))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_703))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_709))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_703))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_709))).f_B, r_RECORD_NAME(l_Y_703), l_Y_703, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_703))).f_T = r_RESOLVE_IN_DECL(l_Y_703, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_703))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_703))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_703))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_703))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_703))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_703))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_703))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_703))).f_BUSY = 0;
}
l_T_710 = ((*(R12 *)rt_nil_check(l_Y_703))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_709))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_710 = r_RECORD_INSTANCE(l_Y_703, p_TS);
}
else
{
l_T_710 = r_RESOLVE_IN_DECL(l_Y_703, p_TS);
}
}
{ R22 * rv711 = r_ABSTRACT_VIEW(l_Y_703, l_T_710);
return rv711; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_712; memset(&l_A_712, 0, sizeof l_A_712);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv713 = p_T;
return rv713; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv714 = p_T;
return rv714; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R22 * rv715 = p_T;
return rv715; }
}
l_A_712 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_712))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_712))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_712))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_712))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_712))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv716 = l_A_712;
return rv716; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_717; memset(&l_P_717, 0, sizeof l_P_717);
l_P_717 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_717 == NULL)) goto L_end718;
{
if ((l_P_717 == p_M))
{
{ rt_int rv719 = 1;
return rv719; }
}
l_P_717 = ((*(R12 *)rt_nil_check(l_P_717))).f_MODL;
}
RT_B_TICK();
} L_end718: ;
{ rt_int rv720 = 0;
return rv720; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_721; memset(&l_D_721, 0, sizeof l_D_721);
l_D_721 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_722; memset(&l_T_722, 0, sizeof l_T_722);
if ((p_TS == NULL))
{
{ R22 * rv723 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_721))).f_B);
return rv723; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_721))).f_A, p_TS);
l_T_722 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_721))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv724 = l_T_722;
return rv724; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_725; memset(&l_F_725, 0, sizeof l_F_725);
l_F_725 = p_FORMALS;
R21 * l_A_726; memset(&l_A_726, 0, sizeof l_A_726);
l_A_726 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_725 == NULL)) goto L_end727;
{
{
R21 * l_N_728; memset(&l_N_728, 0, sizeof l_N_728);
l_N_728 = ((*(R21 *)rt_nil_check(l_F_725))).f_A;
for (;;) {
if ((l_N_728 == NULL)) goto L_end729;
{
if ((l_A_726 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_725))).f_B == NULL))
{
{
R12 * l_Y_730; memset(&l_Y_730, 0, sizeof l_Y_730);
l_Y_730 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_728))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_730))).f_T = r_ARG_TYPE(l_A_726);
r_DEFINE(l_Y_730, ((*(R21 *)rt_nil_check(l_A_726))).f_LINE);
}
}
else
{
{
R12 * l_Y_731; memset(&l_Y_731, 0, sizeof l_Y_731);
l_Y_731 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_728))).f_NAME);
R10 l_C_732; memset(&l_C_732, 0, sizeof l_C_732);
R23 l_M_733; memset(&l_M_733, 0, sizeof l_M_733);
((*(R12 *)rt_nil_check(l_Y_731))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_725))).f_B);
if ((((*(R21 *)rt_nil_check(l_A_726))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_726))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R21 *)rt_nil_check(l_A_726))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_726))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_732, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_726))).f_NAME, (((*(R21 *)rt_nil_check(l_A_726))).f_NAME).f_LEN))), 0);
S_R23(&l_M_733, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_726, &l_C_732, &l_M_733);
}
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_731))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_732))))
{
S_R10(&l_C_732, (r_EXPR(l_A_726, ((*(R12 *)rt_nil_check(l_Y_731))).f_T)).f_C, 0);
S_R23(&l_M_733, r_ENUM_MANIFEST(l_A_726, ((*(R12 *)rt_nil_check(l_Y_731))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_731))).f_ACCESS, l_C_732, 0);
((*(R12 *)rt_nil_check(l_Y_731))).f_HASMV = (l_M_733).f_OK;
((*(R12 *)rt_nil_check(l_Y_731))).f_MV = (l_M_733).f_V;
((*(R12 *)rt_nil_check(l_Y_731))).f_INPUT = 1;
r_DEFINE(l_Y_731, ((*(R21 *)rt_nil_check(l_A_726))).f_LINE);
}
}
l_A_726 = ((*(R21 *)rt_nil_check(l_A_726))).f_NEXT;
l_N_728 = ((*(R21 *)rt_nil_check(l_N_728))).f_NEXT;
}
RT_B_TICK();
} L_end729: ;
}
l_F_725 = ((*(R21 *)rt_nil_check(l_F_725))).f_NEXT;
}
RT_B_TICK();
} L_end727: ;
if ((!(l_A_726 == NULL)))
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
{ R10 rv734 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv734; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv735 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv735; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_736; memset(&l_K_736, 0, sizeof l_K_736);
l_K_736 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv737 = r_MK(rt_str("rt_int", 6));
return rv737; }
}
else if ((l_K_736 == g_T_FLOAT))
{
{ R10 rv738 = r_MK(rt_str("double", 6));
return rv738; }
}
else if (((l_K_736 == g_T_STR) || (l_K_736 == g_T_BITS)))
{
{ R10 rv739 = r_MK(rt_str("rstr", 4));
return rv739; }
}
else if (((l_K_736 == g_T_REC) || (l_K_736 == g_T_ARR)))
{
{ R10 rv740 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv740; }
}
else if ((l_K_736 == g_T_ABS))
{
{ R10 rv741 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv741; }
}
else if ((l_K_736 == g_T_SEM))
{
{ R10 rv742 = r_MK(rt_str("rt_b_sem *", 10));
return rv742; }
}
else if ((l_K_736 == g_T_PATHS))
{
{ R10 rv743 = r_MK(rt_str("rt_b_paths", 10));
return rv743; }
}
else if ((l_K_736 == g_T_VOID))
{
{ R10 rv744 = r_MK(rt_str("void", 4));
return rv744; }
}
else if ((l_K_736 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_745; memset(&l_TT_745, 0, sizeof l_TT_745);
l_TT_745 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_745))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_745))).f_A == NULL)))
{
{
R12 * l_Y_746; memset(&l_Y_746, 0, sizeof l_Y_746);
l_Y_746 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_745))).f_NAME);
if ((!(l_Y_746 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_746))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_746))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_746))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_746))).f_DECL))).f_A == NULL)))
{
{ R10 rv747 = r_CATS(r_RECORD_NAME(l_Y_746), rt_str(" *", 2));
return rv747; }
}
}
}
}
}
}
}
{ R10 rv748 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv748; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv749 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv749; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_750; memset(&l_F_750, 0, sizeof l_F_750);
l_F_750 = ((R24 *)rt_alloc(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_750)), ({ R24 rc751; memset(&rc751, 0, sizeof rc751);  S_R10(&rc751.f_NAME, p_NAME, 0); S_R10(&rc751.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc751.f_T = p_T; rc751.f_KIND = p_KIND; S_R10(&rc751.f_TAGF, r_NO_TEXT(), 0); rc751.f_LABELS = NULL; rc751.f_NEXT = NULL; rc751; }), 0);
{ R24 * rv752 = l_F_750;
return rv752; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_753; memset(&l_F_753, 0, sizeof l_F_753);
l_F_753 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_753 == NULL)) goto L_end754;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_753))).f_NAME, p_NAME))
{
{ R24 * rv755 = l_F_753;
return rv755; }
}
l_F_753 = ((*(R24 *)rt_nil_check(l_F_753))).f_NEXT;
}
RT_B_TICK();
} L_end754: ;
{ R24 * rv756 = NULL;
return rv756; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_757; memset(&l_F_757, 0, sizeof l_F_757);
l_F_757 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_758; memset(&l_FIRST_758, 0, sizeof l_FIRST_758);
l_FIRST_758 = NULL;
for (;;) {
if ((l_F_757 == NULL)) goto L_end759;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_757))).f_NAME, p_NAME))
{
if ((l_FIRST_758 == NULL))
{
l_FIRST_758 = l_F_757;
}
if (((((*(R24 *)rt_nil_check(l_F_757))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv760 = l_F_757;
return rv760; }
}
{
R23 l_TAGV_761; memset(&l_TAGV_761, 0, sizeof l_TAGV_761);
S_R23(&l_TAGV_761, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_757))).f_TAGF), 0);
if ((l_TAGV_761).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_757))).f_LABELS, (l_TAGV_761).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_757))).f_TAGF)))).f_T))
{
{ R24 * rv762 = l_F_757;
return rv762; }
}
}
}
}
l_F_757 = ((*(R24 *)rt_nil_check(l_F_757))).f_NEXT;
}
RT_B_TICK();
} L_end759: ;
{ R24 * rv763 = l_FIRST_758;
return rv763; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_764; memset(&l_P_764, 0, sizeof l_P_764);
l_P_764 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_765; memset(&l_N_765, 0, sizeof l_N_765);
l_N_765 = ((rt_int)0LL);
for (;;) {
if ((l_P_764 == NULL)) goto L_end766;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_764))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
l_N_765 = rt_add(l_N_765, ((rt_int)1LL));
}
l_P_764 = ((*(R24 *)rt_nil_check(l_P_764))).f_NEXT;
}
RT_B_TICK();
} L_end766: ;
if ((l_N_765 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_765)), 0);
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
R21 * l_D_767; memset(&l_D_767, 0, sizeof l_D_767);
l_D_767 = p_DECLS;
for (;;) {
if ((l_D_767 == NULL)) goto L_end768;
{
if ((((*(R21 *)rt_nil_check(l_D_767))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_769; memset(&l_FT_769, 0, sizeof l_FT_769);
l_FT_769 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_767))).f_B);
R21 * l_N_770; memset(&l_N_770, 0, sizeof l_N_770);
l_N_770 = ((*(R21 *)rt_nil_check(l_D_767))).f_A;
for (;;) {
if ((l_N_770 == NULL)) goto L_end771;
{
{
R24 * l_F_772; memset(&l_F_772, 0, sizeof l_F_772);
l_F_772 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_770))).f_NAME, l_FT_769, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_772))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_772))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_772, &(*p_TAIL));
}
l_N_770 = ((*(R21 *)rt_nil_check(l_N_770))).f_NEXT;
}
RT_B_TICK();
} L_end771: ;
}
}
else
{
{
R24 * l_TF_773; memset(&l_TF_773, 0, sizeof l_TF_773);
l_TF_773 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_767))).f_NAME);
R21 * l_S_774; memset(&l_S_774, 0, sizeof l_S_774);
l_S_774 = ((*(R21 *)rt_nil_check(l_D_767))).f_A;
if ((l_TF_773 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_767))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_767))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_773))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_767))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_767))).f_NAME);
}
for (;;) {
if ((l_S_774 == NULL)) goto L_end775;
{
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_774))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_767))).f_NAME), ((*(R21 *)rt_nil_check(l_S_774))).f_A, &(*p_TAIL));
l_S_774 = ((*(R21 *)rt_nil_check(l_S_774))).f_NEXT;
}
RT_B_TICK();
} L_end775: ;
}
}
l_D_767 = ((*(R21 *)rt_nil_check(l_D_767))).f_NEXT;
}
RT_B_TICK();
} L_end768: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_776; memset(&l_T_776, 0, sizeof l_T_776);
l_T_776 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_777; memset(&l_TAIL_777, 0, sizeof l_TAIL_777);
l_TAIL_777 = NULL;
((*(R22 *)rt_nil_check(l_T_776))).f_BASE = l_T_776;
((*(R22 *)rt_nil_check(l_T_776))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_T_776))).f_REPS = ((*(R21 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_776))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_776))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_776))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_776))).f_CNAME));
}
{
R21 * l_F_778; memset(&l_F_778, 0, sizeof l_F_778);
l_F_778 = p_FORMALS;
for (;;) {
if ((l_F_778 == NULL)) goto L_end779;
{
if ((!(((*(R21 *)rt_nil_check(l_F_778))).f_B == NULL)))
{
{
R22 * l_FT_780; memset(&l_FT_780, 0, sizeof l_FT_780);
l_FT_780 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_778))).f_B);
R21 * l_N_781; memset(&l_N_781, 0, sizeof l_N_781);
l_N_781 = ((*(R21 *)rt_nil_check(l_F_778))).f_A;
rt_int l_KIND_782; memset(&l_KIND_782, 0, sizeof l_KIND_782);
l_KIND_782 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_778))).f_IV == ((rt_int)1LL)))
{
l_KIND_782 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_780))) || (!(((*(R22 *)rt_nil_check(l_FT_780))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_778))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_781 == NULL)) goto L_end783;
{
r_ADD_FIELD(l_T_776, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_781))).f_NAME, l_FT_780, l_KIND_782), &l_TAIL_777);
l_N_781 = ((*(R21 *)rt_nil_check(l_N_781))).f_NEXT;
}
RT_B_TICK();
} L_end783: ;
}
}
l_F_778 = ((*(R21 *)rt_nil_check(l_F_778))).f_NEXT;
}
RT_B_TICK();
} L_end779: ;
}
r_RECORD_FIELDS(l_T_776, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_777);
r_COMPLETE_RECORD(l_T_776);
{ R22 * rv784 = l_T_776;
return rv784; }
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_785; memset(&l_D_785, 0, sizeof l_D_785);
l_D_785 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_786; memset(&l_CLASS_786, 0, sizeof l_CLASS_786);
l_CLASS_786 = NULL;
R20 * l_TARGS_787; memset(&l_TARGS_787, 0, sizeof l_TARGS_787);
l_TARGS_787 = NULL;
R25 * l_VARGS_788; memset(&l_VARGS_788, 0, sizeof l_VARGS_788);
l_VARGS_788 = NULL;
R25 * l_VTAIL_789; memset(&l_VTAIL_789, 0, sizeof l_VTAIL_789);
l_VTAIL_789 = NULL;
R21 * l_A_790; memset(&l_A_790, 0, sizeof l_A_790);
l_A_790 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_791; memset(&l_F_791, 0, sizeof l_F_791);
l_F_791 = ((*(R21 *)rt_nil_check(l_D_785))).f_A;
for (;;) {
if ((l_F_791 == NULL)) goto L_end792;
{
{
R21 * l_N_793; memset(&l_N_793, 0, sizeof l_N_793);
l_N_793 = ((*(R21 *)rt_nil_check(l_F_791))).f_A;
for (;;) {
if ((l_N_793 == NULL)) goto L_end794;
{
if ((l_A_790 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_791))).f_B == NULL))
{
{
R20 * l_B_795; memset(&l_B_795, 0, sizeof l_B_795);
l_B_795 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_795)), ({ R20 rc796; memset(&rc796, 0, sizeof rc796);  S_R10(&rc796.f_NAME, ((*(R21 *)rt_nil_check(l_N_793))).f_NAME, 0); rc796.f_T = r_ARG_TYPE(l_A_790); S_R10(&rc796.f_C, r_NO_TEXT(), 0); rc796.f_HASMV = 0; rc796.f_MV = ((rt_int)0LL); rc796.f_R = NULL; rc796.f_NEXT = l_TARGS_787; rc796; }), 0);
l_TARGS_787 = l_B_795;
}
}
else
{
{
R25 * l_V_797; memset(&l_V_797, 0, sizeof l_V_797);
l_V_797 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_797)), ({ R25 rc798; memset(&rc798, 0, sizeof rc798);  S_R10(&rc798.f_LO, r_NO_TEXT(), 0); S_R10(&rc798.f_HI, r_NO_TEXT(), 0); S_R23(&rc798.f_MLO, r_NO_MVAL(), 0); S_R23(&rc798.f_MHI, r_NO_MVAL(), 0); rc798.f_ANYARG = 0; rc798.f_NEXT = NULL; rc798; }), 0);
if ((((*(R21 *)rt_nil_check(l_A_790))).f_KIND == g_N_ANY))
{
if ((!(((*(R21 *)rt_nil_check(l_F_791))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_790))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_797))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_790))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_797))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_797))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_790))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_797))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_797))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_790))).f_NAME, (((*(R21 *)rt_nil_check(l_A_790))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_799; memset(&l_FT_799, 0, sizeof l_FT_799);
l_FT_799 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_791))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_797))).f_LO, (r_EXPR(l_A_790, l_FT_799)).f_C, 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_797))).f_MLO, r_ENUM_MANIFEST(l_A_790, l_FT_799), 0);
if (((((*(R21 *)rt_nil_check(l_F_791))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_797))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_790))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_789 == NULL))
{
l_VARGS_788 = l_V_797;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_789))).f_NEXT = l_V_797;
}
l_VTAIL_789 = l_V_797;
}
}
l_A_790 = ((*(R21 *)rt_nil_check(l_A_790))).f_NEXT;
l_N_793 = ((*(R21 *)rt_nil_check(l_N_793))).f_NEXT;
}
RT_B_TICK();
} L_end794: ;
}
l_F_791 = ((*(R21 *)rt_nil_check(l_F_791))).f_NEXT;
}
RT_B_TICK();
} L_end792: ;
if ((!(l_A_790 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_800; memset(&l_R_800, 0, sizeof l_R_800);
l_R_800 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_800 == NULL)) goto L_end801;
{
if (((((*(R12 *)rt_nil_check(l_R_800))).f_DECL == l_D_785) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_800))).f_BINDINGS, l_TARGS_787)))
{
l_CLASS_786 = ((*(R12 *)rt_nil_check(l_R_800))).f_T;
goto L_end801;
}
l_R_800 = ((*(R12 *)rt_nil_check(l_R_800))).f_INSTANCES;
}
RT_B_TICK();
} L_end801: ;
}
if ((l_CLASS_786 == NULL))
{
{
R12 * l_R_802; memset(&l_R_802, 0, sizeof l_R_802);
l_R_802 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_803; memset(&l_B_803, 0, sizeof l_B_803);
l_B_803 = l_TARGS_787;
R20 * l_SAVED_804; memset(&l_SAVED_804, 0, sizeof l_SAVED_804);
l_SAVED_804 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_805; memset(&l_ENTERED_805, 0, sizeof l_ENTERED_805);
((*(R12 *)rt_nil_check(l_R_802))).f_DECL = l_D_785;
((*(R12 *)rt_nil_check(l_R_802))).f_BINDINGS = l_TARGS_787;
((*(R12 *)rt_nil_check(l_R_802))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_802;
l_ENTERED_805 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_803 == NULL)) goto L_end806;
{
{
R12 * l_TY_807; memset(&l_TY_807, 0, sizeof l_TY_807);
l_TY_807 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_803))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_807))).f_T = ((*(R20 *)rt_nil_check(l_B_803))).f_T;
r_DEFINE(l_TY_807, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_803 = ((*(R20 *)rt_nil_check(l_B_803))).f_NEXT;
}
RT_B_TICK();
} L_end806: ;
l_F_791 = ((*(R21 *)rt_nil_check(l_D_785))).f_A;
for (;;) {
if ((l_F_791 == NULL)) goto L_end808;
{
if ((!(((*(R21 *)rt_nil_check(l_F_791))).f_B == NULL)))
{
{
R21 * l_N_809; memset(&l_N_809, 0, sizeof l_N_809);
l_N_809 = ((*(R21 *)rt_nil_check(l_F_791))).f_A;
for (;;) {
if ((l_N_809 == NULL)) goto L_end810;
{
{
R12 * l_P_811; memset(&l_P_811, 0, sizeof l_P_811);
l_P_811 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_809))).f_NAME);
((*(R12 *)rt_nil_check(l_P_811))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_791))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_811))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_809))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_811))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_811))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_811, ((*(R21 *)rt_nil_check(l_F_791))).f_LINE);
}
l_N_809 = ((*(R21 *)rt_nil_check(l_N_809))).f_NEXT;
}
RT_B_TICK();
} L_end810: ;
}
}
l_F_791 = ((*(R21 *)rt_nil_check(l_F_791))).f_NEXT;
}
RT_B_TICK();
} L_end808: ;
if ((l_TARGS_787 == NULL))
{
l_CLASS_786 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_785))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_785))).f_A);
}
else
{
l_CLASS_786 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_785))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_785))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_786))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_802))).f_T = l_CLASS_786;
r_CLOSE_SCOPE();
if (l_ENTERED_805)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_804;
}
}
{
R22 * l_T_812; memset(&l_T_812, 0, sizeof l_T_812);
l_T_812 = r_COPY_TYP(l_CLASS_786);
((*(R22 *)rt_nil_check(l_T_812))).f_ARGS = l_VARGS_788;
{ R22 * rv813 = l_T_812;
return rv813; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_814; memset(&l_P_814, 0, sizeof l_P_814);
l_P_814 = p_A;
R20 * l_Q_815; memset(&l_Q_815, 0, sizeof l_Q_815);
l_Q_815 = p_B;
for (;;) {
if (((l_P_814 == NULL) || (l_Q_815 == NULL))) goto L_end816;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_814))).f_T, ((*(R20 *)rt_nil_check(l_Q_815))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_814))).f_T, ((*(R20 *)rt_nil_check(l_Q_815))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_814))).f_T, ((*(R20 *)rt_nil_check(l_Q_815))).f_T))))
{
{ rt_int rv817 = 0;
return rv817; }
}
l_P_814 = ((*(R20 *)rt_nil_check(l_P_814))).f_NEXT;
l_Q_815 = ((*(R20 *)rt_nil_check(l_Q_815))).f_NEXT;
}
RT_B_TICK();
} L_end816: ;
{ rt_int rv818 = ((l_P_814 == NULL) && (l_Q_815 == NULL));
return rv818; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_819; memset(&l_A_819, 0, sizeof l_A_819);
l_A_819 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_819 == NULL)) goto L_end820;
{
if (((*(R25 *)rt_nil_check(l_A_819))).f_ANYARG)
{
{ rt_int rv821 = 1;
return rv821; }
}
l_A_819 = ((*(R25 *)rt_nil_check(l_A_819))).f_NEXT;
}
RT_B_TICK();
} L_end820: ;
{ rt_int rv822 = 0;
return rv822; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_823; memset(&l_L_823, 0, sizeof l_L_823);
l_L_823 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_824; memset(&l_C_824, 0, sizeof l_C_824);
S_R10(&l_C_824, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_825; memset(&l_TF_825, 0, sizeof l_TF_825);
l_TF_825 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_823 == NULL)) goto L_end826;
{
if ((((*(R21 *)rt_nil_check(l_L_823))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_824, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_824, p_SELF, ((*(R24 *)rt_nil_check(l_TF_825))).f_CNAME), 0);
S_R10(&l_C_824, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_824, (r_EXPR(((*(R21 *)rt_nil_check(l_L_823))).f_A, ((*(R24 *)rt_nil_check(l_TF_825))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_825))).f_CNAME), 0);
S_R10(&l_C_824, r_FMT2(rt_str("@@)", 3), l_C_824, (r_EXPR(((*(R21 *)rt_nil_check(l_L_823))).f_B, ((*(R24 *)rt_nil_check(l_TF_825))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_824, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_824, p_SELF, ((*(R24 *)rt_nil_check(l_TF_825))).f_CNAME, (r_EXPR(l_L_823, ((*(R24 *)rt_nil_check(l_TF_825))).f_T)).f_C), 0);
}
l_L_823 = ((*(R21 *)rt_nil_check(l_L_823))).f_NEXT;
}
RT_B_TICK();
} L_end826: ;
{ R10 rv827 = r_FMT1(rt_str("(@)", 3), l_C_824);
return rv827; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_828; memset(&l_C_828, 0, sizeof l_C_828);
S_R10(&l_C_828, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_829; memset(&l_F_829, 0, sizeof l_F_829);
l_F_829 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_830; memset(&l_BODY_830, 0, sizeof l_BODY_830);
S_R10(&l_BODY_830, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_831; memset(&l_ASSIGN_831, 0, sizeof l_ASSIGN_831);
S_R10(&l_ASSIGN_831, r_MK(rt_str("", 0)), 0);
R10 l_COPY_832; memset(&l_COPY_832, 0, sizeof l_COPY_832);
S_R10(&l_COPY_832, r_MK(rt_str("", 0)), 0);
R10 l_EQ_833; memset(&l_EQ_833, 0, sizeof l_EQ_833);
S_R10(&l_EQ_833, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_829 == NULL)) goto L_end834;
{
S_R10(&l_BODY_830, r_FMT3(rt_str("@ @ @;", 6), l_BODY_830, r_CTYPE(((*(R24 *)rt_nil_check(l_F_829))).f_T), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME), 0);
S_R10(&l_COPY_832, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_832, ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_829))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_829))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_831, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_831, ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_829))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_831, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_831, ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_831, r_FMT2(rt_str("@ @", 3), l_ASSIGN_831, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_829))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_829))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_833, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_833, r_VARIANT_COND(l_F_829, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_829))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_833, r_FMT2(rt_str("@ && @", 6), l_EQ_833, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_829))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_829))).f_CNAME))), 0);
}
l_F_829 = ((*(R24 *)rt_nil_check(l_F_829))).f_NEXT;
}
RT_B_TICK();
} L_end834: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_828, l_BODY_830));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_828, l_C_828, l_C_828));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_828, l_C_828, l_C_828));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_828, l_C_828, l_C_828, l_ASSIGN_831));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_828, l_C_828, l_C_828, l_EQ_833));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_828, l_C_828, l_C_828));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_828, l_C_828, l_C_828, l_C_828));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_832));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_835; memset(&l_ET_C_835, 0, sizeof l_ET_C_835);
S_R10(&l_ET_C_835, r_CTYPE(p_ELEM), 0);
R10 l_KEY_836; memset(&l_KEY_836, 0, sizeof l_KEY_836);
S_R10(&l_KEY_836, r_FMT3(rt_str("@/@/@", 5), l_ET_C_835, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_837; memset(&l_Y_837, 0, sizeof l_Y_837);
l_Y_837 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_837 == NULL)) goto L_end838;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_837))).f_NAME, l_KEY_836) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_837))).f_T, p_ELEM)))
{
{ R10 rv839 = ((*(R12 *)rt_nil_check(l_Y_837))).f_ACCESS;
return rv839; }
}
l_Y_837 = ((*(R12 *)rt_nil_check(l_Y_837))).f_INSTANCES;
}
RT_B_TICK();
} L_end838: ;
l_Y_837 = r_NEW_SYM(g_Y_TYPE, l_KEY_836);
((*(R12 *)rt_nil_check(l_Y_837))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_837))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_837))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_837;
{
R10 l_C_840; memset(&l_C_840, 0, sizeof l_C_840);
S_R10(&l_C_840, ((*(R12 *)rt_nil_check(l_Y_837))).f_ACCESS, 0);
R10 l_D_841; memset(&l_D_841, 0, sizeof l_D_841);
S_R10(&l_D_841, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_840, l_C_840));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_840, l_D_841, l_D_841, l_ET_C_835));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_840, l_C_840, l_C_840));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_840, l_C_840, l_C_840));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_840, l_C_840, l_C_840, l_D_841));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_841, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_840, l_C_840, l_C_840, l_D_841));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_841, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_840, l_C_840, l_C_840));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_840, l_C_840, l_C_840, l_C_840));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_841, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv842 = ((*(R12 *)rt_nil_check(l_Y_837))).f_ACCESS;
return rv842; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_843; memset(&l_K_843, 0, sizeof l_K_843);
l_K_843 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_843 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv844 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv844; }
}
{ R10 rv845 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv845; }
}
else if ((l_K_843 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv846 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv846; }
}
{ R10 rv847 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv847; }
}
else if ((l_K_843 == g_T_SEM))
{
{ R10 rv848 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv848; }
}
else if ((l_K_843 == g_T_ABS))
{
{ R10 rv849 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv849; }
}
else if ((l_K_843 == g_T_ARR))
{
{
R25 * l_B_850; memset(&l_B_850, 0, sizeof l_B_850);
l_B_850 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_851; memset(&l_I_851, 0, sizeof l_I_851);
l_I_851 = ((rt_int)0LL);
R10 l_R_852; memset(&l_R_852, 0, sizeof l_R_852);
S_R10(&l_R_852, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_850 == NULL)) goto L_end853;
{
S_R10(&l_R_852, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_852, p_LV, r_NUM(l_I_851), ((*(R25 *)rt_nil_check(l_B_850))).f_LO), 0);
S_R10(&l_R_852, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_852, p_LV, r_NUM(l_I_851), ((*(R25 *)rt_nil_check(l_B_850))).f_HI), 0);
l_I_851 = rt_add(l_I_851, ((rt_int)1LL));
l_B_850 = ((*(R25 *)rt_nil_check(l_B_850))).f_NEXT;
}
RT_B_TICK();
} L_end853: ;
S_R10(&l_R_852, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_852, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_852, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_852, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_854; memset(&l_IV_854, 0, sizeof l_IV_854);
S_R10(&l_IV_854, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_852, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_852, l_IV_854, l_IV_854, l_IV_854), 0);
S_R10(&l_R_852, r_FMT2(rt_str("@ @ }", 5), l_R_852, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_854))), 0);
}
}
{ R10 rv855 = r_CATS(l_R_852, rt_str(" }", 2));
return rv855; }
}
}
else if ((l_K_843 == g_T_REC))
{
{
R24 * l_F_856; memset(&l_F_856, 0, sizeof l_F_856);
l_F_856 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_857; memset(&l_A_857, 0, sizeof l_A_857);
l_A_857 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_858; memset(&l_R_858, 0, sizeof l_R_858);
S_R10(&l_R_858, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_856 == NULL)) goto L_end859;
{
if ((!(((*(R24 *)rt_nil_check(l_F_856))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_857 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_857))).f_ANYARG))
{
S_R10(&l_R_858, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_858, p_LV, ((*(R24 *)rt_nil_check(l_F_856))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_857))).f_LO), 0);
}
l_A_857 = ((*(R25 *)rt_nil_check(l_A_857))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_856))).f_T))
{
S_R10(&l_R_858, r_FMT2(rt_str("@ @", 3), l_R_858, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_856))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_856))).f_CNAME)), p_LV)), 0);
}
l_F_856 = ((*(R24 *)rt_nil_check(l_F_856))).f_NEXT;
}
RT_B_TICK();
} L_end859: ;
{ R10 rv860 = l_R_858;
return rv860; }
}
}
{ R10 rv861 = r_NO_TEXT();
return rv861; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_862; memset(&l_K_862, 0, sizeof l_K_862);
l_K_862 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_862 == g_T_STR) || (l_K_862 == g_T_BITS)) || (l_K_862 == g_T_ARR)) || (l_K_862 == g_T_SEM)))
{
{ rt_int rv863 = 1;
return rv863; }
}
else if ((l_K_862 == g_T_ABS))
{
{ rt_int rv864 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv864; }
}
else if ((l_K_862 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv865 = 1;
return rv865; }
}
{
R24 * l_F_866; memset(&l_F_866, 0, sizeof l_F_866);
l_F_866 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_866 == NULL)) goto L_end867;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_866))).f_T))
{
{ rt_int rv868 = 1;
return rv868; }
}
l_F_866 = ((*(R24 *)rt_nil_check(l_F_866))).f_NEXT;
}
RT_B_TICK();
} L_end867: ;
}
}
{ rt_int rv869 = 0;
return rv869; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_870; memset(&l_K_870, 0, sizeof l_K_870);
l_K_870 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_870 == g_T_STR) || (l_K_870 == g_T_BITS)))
{
{ R10 rv871 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv871; }
}
else if ((l_K_870 == g_T_ABS))
{
{ R10 rv872 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv872; }
}
else if (((l_K_870 == g_T_ARR) || (l_K_870 == g_T_REC)))
{
{ R10 rv873 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv873; }
}
{ R10 rv874 = p_V;
return rv874; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_875; memset(&l_K_875, 0, sizeof l_K_875);
l_K_875 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_875 == g_T_STR) || (l_K_875 == g_T_BITS)))
{
{ R10 rv876 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv876; }
}
else if ((l_K_875 == g_T_ABS))
{
{ R10 rv877 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv877; }
}
else if ((l_K_875 == g_T_SEM))
{
{ R10 rv878 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv878; }
}
else if ((l_K_875 == g_T_ARR))
{
{ R10 rv879 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv879; }
}
else if ((l_K_875 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv880 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv880; }
}
{ R10 rv881 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv881; }
}
{ R10 rv882 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv882; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_883; memset(&l_K_883, 0, sizeof l_K_883);
l_K_883 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_883 == g_T_STR) || (l_K_883 == g_T_BITS)))
{
{ R10 rv884 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv884; }
}
else if ((l_K_883 == g_T_ABS))
{
{ R10 rv885 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv885; }
}
else if (((l_K_883 == g_T_ARR) || (l_K_883 == g_T_REC)))
{
{ R10 rv886 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv886; }
}
else if ((l_K_883 == g_T_SEM))
{
{ R10 rv887 = r_MK(rt_str("0", 1));
return rv887; }
}
{ R10 rv888 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv888; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv889 = p_V;
return rv889; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv890 = p_V;
return rv890; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv891 = p_V;
return rv891; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv892 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv892; }
}
{ R10 rv893 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv893; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv894 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv894; }
}
{ R10 rv895 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv895; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv896 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv896; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv897 = 1;
return rv897; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv898 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv898; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv899 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv899; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv900 = 0;
return rv900; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv901 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv901; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv902 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv902; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv903 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv903; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv904 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv904; }
}
{ rt_int rv905 = 1;
return rv905; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv906 = 1;
return rv906; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv907 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv907; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv908 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv908; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv909 = 0;
return rv909; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv910 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv910; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv911 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv911; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv912 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv912; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv913 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv913; }
}
{ rt_int rv914 = 1;
return rv914; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv915 = 0;
return rv915; }
}
{ rt_int rv916 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv916; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_917; memset(&l_P_917, 0, sizeof l_P_917);
l_P_917 = p_A;
R25 * l_Q_918; memset(&l_Q_918, 0, sizeof l_Q_918);
l_Q_918 = p_B;
for (;;) {
if (((l_P_917 == NULL) || (l_Q_918 == NULL))) goto L_end919;
{
if ((r_IS_GEN_ARG(l_P_917) || r_IS_GEN_ARG(l_Q_918)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_917))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_918))).f_ANYARG)))
{
{ rt_int rv920 = 0;
return rv920; }
}
if (((((*(R25 *)rt_nil_check(l_P_917))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_918))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_917))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_918))).f_MLO).f_V)))
{
{ rt_int rv921 = 0;
return rv921; }
}
}
l_P_917 = ((*(R25 *)rt_nil_check(l_P_917))).f_NEXT;
l_Q_918 = ((*(R25 *)rt_nil_check(l_Q_918))).f_NEXT;
}
RT_B_TICK();
} L_end919: ;
{ rt_int rv922 = ((l_P_917 == NULL) && (l_Q_918 == NULL));
return rv922; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_923; memset(&l_CS_923, 0, sizeof l_CS_923);
l_CS_923 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_924; memset(&l_T_924, 0, sizeof l_T_924);
rt_int l_LEV_925; memset(&l_LEV_925, 0, sizeof l_LEV_925);
if ((((*(R18 *)rt_nil_check(l_CS_923))).f_LEVEL == p_LEVEL))
{
{ R10 rv926 = r_MK(rt_str("F", 1));
return rv926; }
}
if (((*(R18 *)rt_nil_check(l_CS_923))).f_FRAMED)
{
S_R10(&l_T_924, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_924, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_925 = rt_sub(((*(R18 *)rt_nil_check(l_CS_923))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_925 <= p_LEVEL)) goto L_end927;
{
S_R10(&l_T_924, r_CATS(l_T_924, rt_str("->up", 4)), 0);
l_LEV_925 = rt_sub(l_LEV_925, ((rt_int)1LL));
}
RT_B_TICK();
} L_end927: ;
{ R10 rv928 = l_T_924;
return rv928; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv929 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv929; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv930 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv930; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv931 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv931; }
}
{ R10 rv932 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv932; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_933; memset(&l_CS_933, 0, sizeof l_CS_933);
l_CS_933 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_934; memset(&l_T_934, 0, sizeof l_T_934);
l_T_934 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_935; memset(&l_CN_935, 0, sizeof l_CN_935);
if ((((*(R18 *)rt_nil_check(l_CS_933))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_935, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_935, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_934), l_CN_935));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_935, 0);
{ R10 rv936 = l_CN_935;
return rv936; }
}
S_R10(&l_CN_935, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_935, 0);
if (((*(R18 *)rt_nil_check(l_CS_933))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_934), l_CN_935), &((*(R18 *)rt_nil_check(l_CS_933))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_935), 0);
{ R10 rv937 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv937; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_934), l_CN_935, l_CN_935, l_CN_935));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_935, 0);
{ R10 rv938 = l_CN_935;
return rv938; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_939; memset(&l_T_939, 0, sizeof l_T_939);
l_T_939 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_940; memset(&l_N_940, 0, sizeof l_N_940);
l_N_940 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_941; memset(&l_V_941, 0, sizeof l_V_941);
rt_int l_HAVE_V_942; memset(&l_HAVE_V_942, 0, sizeof l_HAVE_V_942);
l_HAVE_V_942 = 0;
if (((((*(R22 *)rt_nil_check(l_T_939))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_939))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_940 == NULL)) goto L_end943;
{
{
R12 * l_Y_944; memset(&l_Y_944, 0, sizeof l_Y_944);
l_Y_944 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_940))).f_NAME);
R10 l_CN_945; memset(&l_CN_945, 0, sizeof l_CN_945);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_944))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_944))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_939) && (((*(R22 *)rt_nil_check(l_T_939))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_946; memset(&l_M_946, 0, sizeof l_M_946);
S_R23(&l_M_946, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_944))).f_HASMV = (l_M_946).f_OK;
((*(R12 *)rt_nil_check(l_Y_944))).f_MV = (l_M_946).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_944))).f_T = l_T_939;
S_R10(&l_CN_945, r_NEW_OBJECT(l_Y_944, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_939))
{
r_CODE(r_INIT_CODE(l_T_939, l_CN_945));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_942))
{
S_R26(&l_V_941, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_939), 0);
l_HAVE_V_942 = 1;
}
r_CODE(r_STORE_CODE(l_T_939, l_CN_945, l_V_941, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_944, ((*(R21 *)rt_nil_check(l_N_940))).f_LINE);
}
l_N_940 = ((*(R21 *)rt_nil_check(l_N_940))).f_NEXT;
}
RT_B_TICK();
} L_end943: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv947 = ({ R26 rc948; memset(&rc948, 0, sizeof rc948);  S_R10(&rc948.f_C, p_C, 0); rc948.f_T = p_T; rc948.f_LVAL = 0; S_R10(&rc948.f_SELF, r_NO_TEXT(), 0); rc948; });
return rv947; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv949 = ({ R26 rc950; memset(&rc950, 0, sizeof rc950);  S_R10(&rc950.f_C, p_C, 0); rc950.f_T = p_T; rc950.f_LVAL = p_LVAL; S_R10(&rc950.f_SELF, p_SELF, 0); rc950; });
return rv949; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_951; memset(&l_T_951, 0, sizeof l_T_951);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv952 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv952; }
}
l_T_951 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_951))).f_SCALE = p_SCALE;
{ R22 * rv953 = l_T_951;
return rv953; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_954; memset(&l_T_954, 0, sizeof l_T_954);
l_T_954 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_954))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_954))).f_MLEN, p_M, 0);
{ R22 * rv955 = l_T_954;
return rv955; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_956; memset(&l_S_956, 0, sizeof l_S_956);
l_S_956 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_956, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_957; memset(&l_AT_957, 0, sizeof l_AT_957);
l_AT_957 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_958; memset(&l_R_958, 0, sizeof l_R_958);
S_R10(&l_R_958, r_MK(rt_str("\"", 1)), 0);
{ rt_int it960_lo = ((rt_int)0LL), it960_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it960 = it960_lo; it960 <= it960_hi; it960++) {
{
if ((rt_b_eq(rt_b_slice(l_S_956, it960, it960), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_956, it960, it960), rt_str("\\", 1))))
{
S_R10(&l_R_958, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_956, it960, it960))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_956, it960, it960), rt_str("\?", 1)))
{
S_R10(&l_R_958, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_961; memset(&l_C_961, 0, sizeof l_C_961);
l_C_961 = r_CODE_OF(rt_b_slice(l_S_956, it960, it960));
if (({ rt_int iv962 = l_C_961; (((rt_int)32LL) <= iv962) && (iv962 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_958, r_MK(rt_b_slice(l_S_956, it960, it960)), 0);
}
else
{
S_R10(&l_R_958, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_961, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_961, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_961, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it960 == it960_hi) break;
} } L_end959: ;
S_R10(&l_R_958, r_MK(rt_str("\"", 1)), 0);
{ R10 rv963 = ({ R10 rc964; memset(&rc964, 0, sizeof rc964);  rc964.f_AT = l_AT_957; rc964.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_957); rc964.f_H = rt_neg(((rt_int)1LL)); rc964; });
return rv963; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_965; memset(&l_K_965, 0, sizeof l_K_965);
l_K_965 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_966; memset(&l_NO_966, 0, sizeof l_NO_966);
S_R23(&l_NO_966, ({ R23 rc967; memset(&rc967, 0, sizeof rc967);  rc967.f_OK = 0; rc967.f_V = ((rt_int)0LL); rc967; }), 0);
if ((l_K_965 == g_N_INT))
{
{ R23 rv968 = ({ R23 rc969; memset(&rc969, 0, sizeof rc969);  rc969.f_OK = 1; rc969.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc969; });
return rv968; }
}
else if ((l_K_965 == g_N_PAREN))
{
{ R23 rv970 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv970; }
}
else if ((l_K_965 == g_N_BOOL))
{
{ R23 rv971 = ({ R23 rc972; memset(&rc972, 0, sizeof rc972);  rc972.f_OK = 1; rc972.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc972; });
return rv971; }
}
else if ((l_K_965 == g_N_UNOP))
{
{
R23 l_A_973; memset(&l_A_973, 0, sizeof l_A_973);
S_R23(&l_A_973, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_973).f_OK))
{
{ R23 rv974 = l_NO_966;
return rv974; }
}
{ R23 rv975 = ({ R23 rc976; memset(&rc976, 0, sizeof rc976);  rc976.f_OK = 1; rc976.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_973).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc976; });
return rv975; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv977 = l_A_973;
return rv977; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv978 = ({ R23 rc979; memset(&rc979, 0, sizeof rc979);  rc979.f_OK = (l_A_973).f_OK; rc979.f_V = rt_sub(((rt_int)1LL), (l_A_973).f_V); rc979; });
return rv978; }
}
}
}
else if ((l_K_965 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv980 = l_NO_966;
return rv980; }
}
{
R23 l_A_981; memset(&l_A_981, 0, sizeof l_A_981);
S_R23(&l_A_981, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_982; memset(&l_B_982, 0, sizeof l_B_982);
S_R23(&l_B_982, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_983; memset(&l_OP_983, 0, sizeof l_OP_983);
S_R10(&l_OP_983, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_983, rt_str("&", 1)) && (l_A_981).f_OK))
{
if (((l_A_981).f_V == ((rt_int)0LL)))
{
{ R23 rv984 = l_A_981;
return rv984; }
}
{ R23 rv985 = l_B_982;
return rv985; }
}
else if ((r_TEQS(l_OP_983, rt_str("!", 1)) && (l_A_981).f_OK))
{
if (((l_A_981).f_V == ((rt_int)1LL)))
{
{ R23 rv986 = l_A_981;
return rv986; }
}
{ R23 rv987 = l_B_982;
return rv987; }
}
if ((!(((l_A_981).f_OK && (l_B_982).f_OK))))
{
{ R23 rv988 = l_NO_966;
return rv988; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv989 = l_NO_966;
return rv989; }
}
if (((r_TEQS(l_OP_983, rt_str("+", 1)) || r_TEQS(l_OP_983, rt_str("-", 1))) || r_TEQS(l_OP_983, rt_str("*", 1))))
{
{ R23 rv990 = ({ R23 rc991; memset(&rc991, 0, sizeof rc991);  rc991.f_OK = 1; rc991.f_V = r_MANIFEST_ARITH(l_OP_983, (l_A_981).f_V, (l_B_982).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc991; });
return rv990; }
}
else if ((r_TEQS(l_OP_983, rt_str("//", 2)) && (!((l_B_982).f_V == ((rt_int)0LL)))))
{
{ R23 rv992 = ({ R23 rc993; memset(&rc993, 0, sizeof rc993);  rc993.f_OK = 1; rc993.f_V = rt_quot((l_A_981).f_V, (l_B_982).f_V); rc993; });
return rv992; }
}
else if ((r_TEQS(l_OP_983, rt_str("MOD", 3)) && (!((l_B_982).f_V == ((rt_int)0LL)))))
{
{ R23 rv994 = ({ R23 rc995; memset(&rc995, 0, sizeof rc995);  rc995.f_OK = 1; rc995.f_V = rt_rem((l_A_981).f_V, (l_B_982).f_V); rc995; });
return rv994; }
}
else if (r_TEQS(l_OP_983, rt_str("=", 1)))
{
{ R23 rv996 = ({ R23 rc997; memset(&rc997, 0, sizeof rc997);  rc997.f_OK = 1; rc997.f_V = r_BOOL_INT(((l_A_981).f_V == (l_B_982).f_V)); rc997; });
return rv996; }
}
else if (r_TEQS(l_OP_983, rt_str("<>", 2)))
{
{ R23 rv998 = ({ R23 rc999; memset(&rc999, 0, sizeof rc999);  rc999.f_OK = 1; rc999.f_V = r_BOOL_INT((!((l_A_981).f_V == (l_B_982).f_V))); rc999; });
return rv998; }
}
else if (r_TEQS(l_OP_983, rt_str("<", 1)))
{
{ R23 rv1000 = ({ R23 rc1001; memset(&rc1001, 0, sizeof rc1001);  rc1001.f_OK = 1; rc1001.f_V = r_BOOL_INT(((l_A_981).f_V < (l_B_982).f_V)); rc1001; });
return rv1000; }
}
else if (r_TEQS(l_OP_983, rt_str(">", 1)))
{
{ R23 rv1002 = ({ R23 rc1003; memset(&rc1003, 0, sizeof rc1003);  rc1003.f_OK = 1; rc1003.f_V = r_BOOL_INT(((l_A_981).f_V > (l_B_982).f_V)); rc1003; });
return rv1002; }
}
else if (r_TEQS(l_OP_983, rt_str("<=", 2)))
{
{ R23 rv1004 = ({ R23 rc1005; memset(&rc1005, 0, sizeof rc1005);  rc1005.f_OK = 1; rc1005.f_V = r_BOOL_INT(((l_A_981).f_V <= (l_B_982).f_V)); rc1005; });
return rv1004; }
}
else if (r_TEQS(l_OP_983, rt_str(">=", 2)))
{
{ R23 rv1006 = ({ R23 rc1007; memset(&rc1007, 0, sizeof rc1007);  rc1007.f_OK = 1; rc1007.f_V = r_BOOL_INT(((l_A_981).f_V >= (l_B_982).f_V)); rc1007; });
return rv1006; }
}
}
}
else if ((l_K_965 == g_N_IN))
{
{
R23 l_A_1008; memset(&l_A_1008, 0, sizeof l_A_1008);
S_R23(&l_A_1008, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1009; memset(&l_L_1009, 0, sizeof l_L_1009);
S_R23(&l_L_1009, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1010; memset(&l_U_1010, 0, sizeof l_U_1010);
S_R23(&l_U_1010, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1011; memset(&l_LO_1011, 0, sizeof l_LO_1011);
rt_int l_HI_1012; memset(&l_HI_1012, 0, sizeof l_HI_1012);
if ((!(((((l_A_1008).f_OK && (l_L_1009).f_OK) && (l_U_1010).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1013 = l_NO_966;
return rv1013; }
}
l_LO_1011 = (l_L_1009).f_V;
l_HI_1012 = (l_U_1010).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1011 = rt_add(l_LO_1011, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1012 = rt_sub(l_HI_1012, ((rt_int)1LL));
}
{ R23 rv1014 = ({ R23 rc1015; memset(&rc1015, 0, sizeof rc1015);  rc1015.f_OK = 1; rc1015.f_V = r_BOOL_INT((((l_A_1008).f_V >= l_LO_1011) && ((l_A_1008).f_V <= l_HI_1012))); rc1015; });
return rv1014; }
}
}
else if (((l_K_965 == g_N_NAME) || (l_K_965 == g_TS_GEN)))
{
{
R12 * l_Y_1016; memset(&l_Y_1016, 0, sizeof l_Y_1016);
l_Y_1016 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1017; memset(&l_B_1017, 0, sizeof l_B_1017);
l_B_1017 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1017 == NULL)) goto L_end1018;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1017))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1017))).f_HASMV))
{
{ R23 rv1019 = ({ R23 rc1020; memset(&rc1020, 0, sizeof rc1020);  rc1020.f_OK = 1; rc1020.f_V = ((*(R20 *)rt_nil_check(l_B_1017))).f_MV; rc1020; });
return rv1019; }
}
l_B_1017 = ((*(R20 *)rt_nil_check(l_B_1017))).f_NEXT;
}
RT_B_TICK();
} L_end1018: ;
if ((!(l_Y_1016 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_1016))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1016))).f_KIND == g_Y_GEN))) && ((*(R12 *)rt_nil_check(l_Y_1016))).f_HASMV))
{
{ R23 rv1021 = ({ R23 rc1022; memset(&rc1022, 0, sizeof rc1022);  rc1022.f_OK = 1; rc1022.f_V = ((*(R12 *)rt_nil_check(l_Y_1016))).f_MV; rc1022; });
return rv1021; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1016))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1023 = ({ R23 rc1024; memset(&rc1024, 0, sizeof rc1024);  rc1024.f_OK = 1; rc1024.f_V = ((*(R12 *)rt_nil_check(l_Y_1016))).f_MV; rc1024; });
return rv1023; }
}
}
}
}
}
else if ((l_K_965 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1025 = ({ R23 rc1026; memset(&rc1026, 0, sizeof rc1026);  rc1026.f_OK = 1; rc1026.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1026; });
return rv1025; }
}
}
else if ((l_K_965 == g_N_FIELD))
{
{ R23 rv1027 = r_ATTR_MANIFEST(p_E);
return rv1027; }
}
else if ((l_K_965 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1028 = ({ R23 rc1029; memset(&rc1029, 0, sizeof rc1029);  rc1029.f_OK = 1; rc1029.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1029; });
return rv1028; }
}
}
{ R23 rv1030 = l_NO_966;
return rv1030; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1031; memset(&l_A_1031, 0, sizeof l_A_1031);
l_A_1031 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1032; memset(&l_NAME_1032, 0, sizeof l_NAME_1032);
S_R10(&l_NAME_1032, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1033; memset(&l_T_1033, 0, sizeof l_T_1033);
l_T_1033 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1031))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1034; memset(&l_INNER_1034, 0, sizeof l_INNER_1034);
l_INNER_1034 = ((*(R21 *)rt_nil_check(l_A_1031))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1034))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1032, rt_str("MAX", 3)))
{
{ R23 rv1035 = r_SOME(r_MAX_LENGTH());
return rv1035; }
}
else if (r_TEQS(l_NAME_1032, rt_str("MIN", 3)))
{
{ R23 rv1036 = r_SOME(((rt_int)0LL));
return rv1036; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1034))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1034))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1032, rt_str("MAX", 3)))
{
{ R23 rv1037 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1037; }
}
else if (r_TEQS(l_NAME_1032, rt_str("MIN", 3)))
{
{ R23 rv1038 = r_SOME(((rt_int)1LL));
return rv1038; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1034))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1032, rt_str("MAX", 3)))
{
{ R23 rv1039 = r_SOME(((rt_int)1000LL));
return rv1039; }
}
else if (r_TEQS(l_NAME_1032, rt_str("MIN", 3)))
{
{ R23 rv1040 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1040; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1034))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1032, rt_str("MAX", 3)))
{
{ R23 rv1041 = r_SOME(((rt_int)1000LL));
return rv1041; }
}
else if (r_TEQS(l_NAME_1032, rt_str("MIN", 3)))
{
{ R23 rv1042 = r_SOME(((rt_int)2LL));
return rv1042; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1043; memset(&l_Y_1043, 0, sizeof l_Y_1043);
l_Y_1043 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1031))).f_NAME);
if ((l_Y_1043 == NULL))
{
{ R23 rv1044 = r_NO_MVAL();
return rv1044; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_TYPE))
{
l_T_1033 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1031))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1031))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_GEN)))
{
l_T_1033 = ((*(R12 *)rt_nil_check(l_Y_1043))).f_T;
}
else
{
{ R23 rv1045 = r_NO_MVAL();
return rv1045; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1032, rt_str("MIN", 3)) || r_TEQS(l_NAME_1032, rt_str("MAX", 3))))
{
{ R23 rv1046 = r_SOME(((*(R21 *)rt_nil_check(l_A_1031))).f_IV);
return rv1046; }
}
l_T_1033 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1031))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1032, rt_str("MIN", 3)) || r_TEQS(l_NAME_1032, rt_str("MAX", 3))))))
{
{ R23 rv1047 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1031))).f_A))).f_IV);
return rv1047; }
}
}
{
R14 l_SAVED_CODE_1048; memset(&l_SAVED_CODE_1048, 0, sizeof l_SAVED_CODE_1048);
S_R14(&l_SAVED_CODE_1048, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1049; memset(&rc1049, 0, sizeof rc1049);  rc1049.f_HEAD = NULL; rc1049.f_TAIL = NULL; rc1049; }), 0);
l_T_1033 = (r_EXPR(l_A_1031, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1048, 0);
}
}
else
{
{ R23 rv1050 = r_NO_MVAL();
return rv1050; }
}
if ((l_T_1033 == NULL))
{
{ R23 rv1051 = r_NO_MVAL();
return rv1051; }
}
{ R23 rv1052 = r_TYPE_ATTR_MANIFEST(l_T_1033, l_NAME_1032);
return rv1052; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1053; memset(&l_T_1053, 0, sizeof l_T_1053);
l_T_1053 = r_REAL_TYPE(p_T0);
rt_int l_K_1054; memset(&l_K_1054, 0, sizeof l_K_1054);
l_K_1054 = ((*(R22 *)rt_nil_check(l_T_1053))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1055 = r_STATIC_SIZE(p_T0);
return rv1055; }
}
if ((l_K_1054 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1056 = r_SOME(((*(R22 *)rt_nil_check(l_T_1053))).f_SCALE);
return rv1056; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1057 = r_SOME(((rt_int)2LL));
return rv1057; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1053))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1058 = ((*(R22 *)rt_nil_check(l_T_1053))).f_MLO;
return rv1058; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1053))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1059 = ((*(R22 *)rt_nil_check(l_T_1053))).f_MHI;
return rv1059; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1053))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1060 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1060; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1053))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1061 = r_SOME(INT64_MAX);
return rv1061; }
}
}
else if ((l_K_1054 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1062 = r_SOME(((*(R22 *)rt_nil_check(l_T_1053))).f_SCALE);
return rv1062; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1063 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1053))).f_SCALE));
return rv1063; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1064 = r_SOME(((rt_int)2LL));
return rv1064; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1065 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1053))).f_SCALE, p_NAME));
return rv1065; }
}
}
else if ((l_K_1054 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1053))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1066 = ((*(R22 *)rt_nil_check(l_T_1053))).f_MLO;
return rv1066; }
}
{ R23 rv1067 = r_SOME(((rt_int)0LL));
return rv1067; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1053))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1068 = ((*(R22 *)rt_nil_check(l_T_1053))).f_MHI;
return rv1068; }
}
{ R23 rv1069 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1053))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1069; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1053))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1070 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1053))).f_BASE))).f_NLITS);
return rv1070; }
}
if (((((*(R22 *)rt_nil_check(l_T_1053))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1053))).f_MHI).f_OK))
{
{ R23 rv1071 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1053))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1053))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1071; }
}
}
}
else if (((l_K_1054 == g_T_STR) || (l_K_1054 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1072 = ((*(R22 *)rt_nil_check(l_T_1053))).f_MLEN;
return rv1072; }
}
}
else if ((l_K_1054 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1073 = r_SOME(((*(R22 *)rt_nil_check(l_T_1053))).f_DIMS);
return rv1073; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1053))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1053))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1053))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1074 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1053))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1053))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1074; }
}
}
}
else if ((l_K_1054 == g_T_REC))
{
{
R24 * l_F_1075; memset(&l_F_1075, 0, sizeof l_F_1075);
l_F_1075 = ((*(R22 *)rt_nil_check(l_T_1053))).f_FIELDS;
R25 * l_B_1076; memset(&l_B_1076, 0, sizeof l_B_1076);
l_B_1076 = ((*(R22 *)rt_nil_check(l_T_1053))).f_ARGS;
for (;;) {
if (((l_F_1075 == NULL) || (l_B_1076 == NULL))) goto L_end1077;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1075))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1075))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1076))).f_ANYARG)
{
{ R23 rv1078 = r_NO_MVAL();
return rv1078; }
}
{ R23 rv1079 = ((*(R25 *)rt_nil_check(l_B_1076))).f_MLO;
return rv1079; }
}
l_B_1076 = ((*(R25 *)rt_nil_check(l_B_1076))).f_NEXT;
}
l_F_1075 = ((*(R24 *)rt_nil_check(l_F_1075))).f_NEXT;
}
RT_B_TICK();
} L_end1077: ;
}
}
{ R23 rv1080 = r_NO_MVAL();
return rv1080; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1081 = ((rt_int)0LL);
{ rt_frame xf1082; if (RT_TRY(xf1082)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1081 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1081 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1081 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1082); } else { RT_POP(xf1082); int xf1082x = rt_xcur;
if (0 || xf1082x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1082x); } }
{ rt_int rv1083 = F->l_R_1081;
return rv1083; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1084 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1084; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1085 = ((rt_int)1LL);
return rv1085; }
}
{ rt_int rv1086 = ((rt_int)0LL);
return rv1086; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1087; memset(&l_K_1087, 0, sizeof l_K_1087);
l_K_1087 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1087 == g_N_INT))
{
{ R26 rv1088 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1088; }
}
else if ((l_K_1087 == g_N_REAL))
{
{ R26 rv1089 = r_REAL_LITERAL(p_E);
return rv1089; }
}
else if ((l_K_1087 == g_N_BOOL))
{
{ R26 rv1090 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1090; }
}
else if ((l_K_1087 == g_N_NIL))
{
{ R26 rv1091 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1091; }
}
else if ((l_K_1087 == g_N_PAREN))
{
{
R26 l_V_1092; memset(&l_V_1092, 0, sizeof l_V_1092);
S_R26(&l_V_1092, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1092).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1092).f_C), 0);
{ R26 rv1093 = l_V_1092;
return rv1093; }
}
}
else if ((l_K_1087 == g_N_STR))
{
{ R26 rv1094 = r_STRING_LITERAL(p_E);
return rv1094; }
}
else if ((l_K_1087 == g_N_BITS))
{
{ R26 rv1095 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1095; }
}
else if ((l_K_1087 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1096 = r_NAME_EXPR(p_E, p_WANT);
return rv1096; }
}
{ R26 rv1097 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1097; }
}
else if ((l_K_1087 == g_N_RECCONS))
{
{ R26 rv1098 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1098; }
}
else if ((l_K_1087 == g_N_ARRCONS))
{
{ R26 rv1099 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1099; }
}
else if ((l_K_1087 == g_N_TYPESPEC))
{
{ R26 rv1100 = r_TYPE_SPECIFIER(p_E);
return rv1100; }
}
else if ((l_K_1087 == g_N_QUAL))
{
{
rt_int l_SAVED_1101; memset(&l_SAVED_1101, 0, sizeof l_SAVED_1101);
l_SAVED_1101 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1102; memset(&l_SAVED_Q_1102, 0, sizeof l_SAVED_Q_1102);
l_SAVED_Q_1102 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1103; memset(&l_V_1103, 0, sizeof l_V_1103);
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
R23 l_P_1104; memset(&l_P_1104, 0, sizeof l_P_1104);
S_R23(&l_P_1104, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1103, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1101;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1102;
{ R26 rv1105 = l_V_1103;
return rv1105; }
}
}
else if ((l_K_1087 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1106; memset(&l_N_1106, 0, sizeof l_N_1106);
l_N_1106 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1106))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1106))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1107 = r_EXPR(l_N_1106, p_WANT);
return rv1107; }
}
}
{ R26 rv1108 = r_NEW_EXPR(p_E, p_WANT);
return rv1108; }
}
else if ((l_K_1087 == g_N_NAME))
{
{ R26 rv1109 = r_NAME_EXPR(p_E, p_WANT);
return rv1109; }
}
else if ((l_K_1087 == g_N_APPLY))
{
{
R12 * l_Y_1110; memset(&l_Y_1110, 0, sizeof l_Y_1110);
l_Y_1110 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1110 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1110))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1110))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1111; memset(&l_N_1111, 0, sizeof l_N_1111);
l_N_1111 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1112; memset(&l_A_1112, 0, sizeof l_A_1112);
l_A_1112 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1112))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1111))).f_A = l_A_1112;
((*(R21 *)rt_nil_check(l_N_1111))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1113 = r_EXPR(l_N_1111, p_WANT);
return rv1113; }
}
}
}
{ R26 rv1114 = r_CALL_EXPR(p_E, p_WANT);
return rv1114; }
}
}
else if ((l_K_1087 == g_N_FIELD))
{
{ R26 rv1115 = r_FIELD_EXPR(p_E);
return rv1115; }
}
else if ((l_K_1087 == g_N_DEREF))
{
{
R26 l_B_1116; memset(&l_B_1116, 0, sizeof l_B_1116);
S_R26(&l_B_1116, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1116).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1117; memset(&l_TT_1117, 0, sizeof l_TT_1117);
l_TT_1117 = r_TARGET((l_B_1116).f_T);
{ R26 rv1118 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1117), (l_B_1116).f_C), l_TT_1117, 1, r_NO_TEXT());
return rv1118; }
}
}
}
else if ((l_K_1087 == g_N_INDEX))
{
{ R26 rv1119 = r_INDEX_EXPR(p_E);
return rv1119; }
}
else if ((l_K_1087 == g_N_SUBSTR))
{
{
R26 l_B_1120; memset(&l_B_1120, 0, sizeof l_B_1120);
S_R26(&l_B_1120, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1121; memset(&l_BT_1121, 0, sizeof l_BT_1121);
l_BT_1121 = r_REAL_TYPE((l_B_1120).f_T);
R10 l_LO_1122; memset(&l_LO_1122, 0, sizeof l_LO_1122);
R10 l_HI_1123; memset(&l_HI_1123, 0, sizeof l_HI_1123);
if (((((*(R22 *)rt_nil_check((l_B_1120).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1124; memset(&l_ARGS_1124, 0, sizeof l_ARGS_1124);
l_ARGS_1124 = r_VAL_ARG(l_B_1120, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1125; memset(&l_Y_1125, 0, sizeof l_Y_1125);
l_Y_1125 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1124, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1125 == NULL)))
{
{ R26 rv1126 = r_CALL_SYM(l_Y_1125, l_ARGS_1124, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1126; }
}
if ((((*(R22 *)rt_nil_check((l_B_1120).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1121))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1121))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1122, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1123, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1121))).f_KIND == g_T_BITS))
{
{ R26 rv1127 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1120).f_C, l_LO_1122, l_HI_1123), r_BITS_TYPE(((rt_int)1LL)));
return rv1127; }
}
{
R22 * l_T_1128; memset(&l_T_1128, 0, sizeof l_T_1128);
l_T_1128 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1128))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1121))).f_BASE;
{ R26 rv1129 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1120).f_C, l_LO_1122, l_HI_1123), l_T_1128);
return rv1129; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1121))).f_KIND == g_T_BITS))
{
{ R26 rv1130 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1120).f_C, l_LO_1122, l_HI_1123), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1130; }
}
{
R22 * l_T_1131; memset(&l_T_1131, 0, sizeof l_T_1131);
l_T_1131 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1131))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1121))).f_BASE;
{ R26 rv1132 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1120).f_C, l_LO_1122, l_HI_1123), l_T_1131);
return rv1132; }
}
}
}
else if ((l_K_1087 == g_N_UNOP))
{
{ R26 rv1133 = r_UNARY(p_E);
return rv1133; }
}
else if ((l_K_1087 == g_N_BINOP))
{
{ R26 rv1134 = r_BINARY(p_E);
return rv1134; }
}
else if ((l_K_1087 == g_N_IN))
{
{ R26 rv1135 = r_IN_EXPR(p_E);
return rv1135; }
}
else if (((l_K_1087 == g_N_ANY) || (l_K_1087 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1087 == g_TS_GEN))
{
{
R21 * l_N_1136; memset(&l_N_1136, 0, sizeof l_N_1136);
l_N_1136 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1136))).f_NAME, r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1136))).f_NAME))
{
{ R26 rv1137 = r_NAME_EXPR(l_N_1136, p_WANT);
return rv1137; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1087 == g_TS_NAME) || (l_K_1087 == g_TS_ARRAY)) || (l_K_1087 == g_TS_RECORD)) || (l_K_1087 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1138; memset(&l_SAVED_1138, 0, sizeof l_SAVED_1138);
l_SAVED_1138 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1139; memset(&l_SAVED_Q_1139, 0, sizeof l_SAVED_Q_1139);
l_SAVED_Q_1139 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1140; memset(&l_V_1140, 0, sizeof l_V_1140);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1140, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1138;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1139;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1140).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1141 = (l_V_1140).f_C;
return rv1141; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1140).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1140).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1140).f_T));
}
{ R10 rv1142 = (l_V_1140).f_C;
return rv1142; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1143; memset(&l_V_1143, 0, sizeof l_V_1143);
S_R26(&l_V_1143, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1143).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1143).f_T));
}
{ R10 rv1144 = (l_V_1143).f_C;
return rv1144; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1145; memset(&l_T_1145, 0, sizeof l_T_1145);
l_T_1145 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1145))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1145))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1146 = l_T_1145;
return rv1146; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1147; memset(&l_T_1147, 0, sizeof l_T_1147);
S_R10(&l_T_1147, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1148; memset(&l_S_1148, 0, sizeof l_S_1148);
l_S_1148 = rt_str_new((l_T_1147).f_LEN);
rt_b_assign(&l_S_1148, r_STR(l_T_1147, (l_T_1147).f_LEN));
rt_int l_POINT_1149; memset(&l_POINT_1149, 0, sizeof l_POINT_1149);
l_POINT_1149 = 0;
rt_int l_DIGITS_1150; memset(&l_DIGITS_1150, 0, sizeof l_DIGITS_1150);
l_DIGITS_1150 = ((rt_int)0LL);
{ rt_int it1152_lo = ((rt_int)0LL), it1152_hi = rt_sub((l_T_1147).f_LEN, ((rt_int)1LL));
for (rt_int it1152 = it1152_lo; it1152 <= it1152_hi; it1152++) {
{
if (rt_b_eq(rt_b_slice(l_S_1148, it1152, it1152), rt_str(".", 1)))
{
l_POINT_1149 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1148, it1152, it1152), rt_str("E", 1)))
{
goto L_end1151;
}
else
{
l_DIGITS_1150 = rt_add(l_DIGITS_1150, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1152 == it1152_hi) break;
} } L_end1151: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1149)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1153 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1147), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1153; }
}
if ((!l_POINT_1149))
{
{ R26 rv1154 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1147)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1154; }
}
{
R22 * l_F_1155; memset(&l_F_1155, 0, sizeof l_F_1155);
l_F_1155 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1156; memset(&l_C_1156, 0, sizeof l_C_1156);
S_R10(&l_C_1156, l_T_1147, 0);
((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE = r_MAX_INT(l_DIGITS_1150, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1148, rt_sub((l_T_1147).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1147).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1156, r_FMT1(rt_str("@0", 2), l_T_1147), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1148, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1156, r_FMT1(rt_str("0@", 2), l_T_1147), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1155))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1157 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1156), l_F_1155);
return rv1157; }
}
{ R26 rv1158 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1156), l_F_1155);
return rv1158; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1159; memset(&l_T_1159, 0, sizeof l_T_1159);
S_R10(&l_T_1159, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1160; memset(&l_S_1160, 0, sizeof l_S_1160);
l_S_1160 = rt_str_new((l_T_1159).f_LEN);
rt_b_assign(&l_S_1160, r_STR(l_T_1159, (l_T_1159).f_LEN));
rt_int l_INT_1161; memset(&l_INT_1161, 0, sizeof l_INT_1161);
l_INT_1161 = ((rt_int)0LL);
rt_int l_SIG_1162; memset(&l_SIG_1162, 0, sizeof l_SIG_1162);
l_SIG_1162 = 0;
rt_int l_POINT_1163; memset(&l_POINT_1163, 0, sizeof l_POINT_1163);
l_POINT_1163 = 0;
rt_int l_LEAD_1164; memset(&l_LEAD_1164, 0, sizeof l_LEAD_1164);
l_LEAD_1164 = ((rt_int)0LL);
rt_int l_I_1165; memset(&l_I_1165, 0, sizeof l_I_1165);
l_I_1165 = ((rt_int)0LL);
rt_int l_EXP_1166; memset(&l_EXP_1166, 0, sizeof l_EXP_1166);
l_EXP_1166 = ((rt_int)0LL);
for (;;) {
if ((l_I_1165 >= (l_T_1159).f_LEN)) goto L_end1167;
{
if (rt_b_eq(rt_b_slice(l_S_1160, l_I_1165, l_I_1165), rt_str("E", 1)))
{
goto L_end1167;
}
else if (rt_b_eq(rt_b_slice(l_S_1160, l_I_1165, l_I_1165), rt_str(".", 1)))
{
l_POINT_1163 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1160, l_I_1165, l_I_1165), rt_str("0", 1))))
{
if ((!l_POINT_1163))
{
l_INT_1161 = rt_add(l_INT_1161, ((rt_int)1LL));
}
l_SIG_1162 = 1;
}
else if ((l_SIG_1162 && (!l_POINT_1163)))
{
l_INT_1161 = rt_add(l_INT_1161, ((rt_int)1LL));
}
else if ((l_POINT_1163 && (!l_SIG_1162)))
{
l_LEAD_1164 = rt_add(l_LEAD_1164, ((rt_int)1LL));
}
l_I_1165 = rt_add(l_I_1165, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1167: ;
if ((!l_SIG_1162))
{
{ rt_int rv1168 = 1;
return rv1168; }
}
if ((l_I_1165 < (l_T_1159).f_LEN))
{
{
rt_int l_NEG_1169; memset(&l_NEG_1169, 0, sizeof l_NEG_1169);
l_NEG_1169 = 0;
l_I_1165 = rt_add(l_I_1165, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1160, l_I_1165, l_I_1165), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1160, l_I_1165, l_I_1165), rt_str("+", 1))))
{
l_NEG_1169 = rt_b_eq(rt_b_slice(l_S_1160, l_I_1165, l_I_1165), rt_str("-", 1));
l_I_1165 = rt_add(l_I_1165, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1165 >= (l_T_1159).f_LEN)) goto L_end1170;
{
if ((l_EXP_1166 <= ((rt_int)100000LL)))
{
l_EXP_1166 = rt_add(rt_mul(l_EXP_1166, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1160, l_I_1165, l_I_1165)), ((rt_int)48LL))));
}
l_I_1165 = rt_add(l_I_1165, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1170: ;
if (l_NEG_1169)
{
l_EXP_1166 = rt_neg(l_EXP_1166);
}
}
}
{
rt_int l_D_1171; memset(&l_D_1171, 0, sizeof l_D_1171);
l_D_1171 = rt_add(rt_sub(l_INT_1161, ((rt_int)1LL)), l_EXP_1166);
rt_int l_LIM_1172; memset(&l_LIM_1172, 0, sizeof l_LIM_1172);
l_LIM_1172 = ((rt_int)308LL);
if ((l_INT_1161 == ((rt_int)0LL)))
{
l_D_1171 = rt_add(rt_sub(rt_neg(l_LEAD_1164), ((rt_int)1LL)), l_EXP_1166);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1172 = ((rt_int)38LL);
}
{ rt_int rv1173 = ((l_D_1171 <= l_LIM_1172) && (l_D_1171 >= rt_add(rt_neg(l_LIM_1172), ((rt_int)1LL))));
return rv1173; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1174; memset(&l_T_1174, 0, sizeof l_T_1174);
S_R10(&l_T_1174, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1175; memset(&l_S_1175, 0, sizeof l_S_1175);
l_S_1175 = rt_str_new((l_T_1174).f_LEN);
rt_b_assign(&l_S_1175, r_STR(l_T_1174, (l_T_1174).f_LEN));
rt_int l_SIG_1176; memset(&l_SIG_1176, 0, sizeof l_SIG_1176);
l_SIG_1176 = ((rt_int)0LL);
rt_int l_FRAC_1177; memset(&l_FRAC_1177, 0, sizeof l_FRAC_1177);
l_FRAC_1177 = ((rt_int)0LL);
rt_int l_POINT_1178; memset(&l_POINT_1178, 0, sizeof l_POINT_1178);
l_POINT_1178 = 0;
rt_int l_EXP_1179; memset(&l_EXP_1179, 0, sizeof l_EXP_1179);
l_EXP_1179 = ((rt_int)0LL);
rt_int l_I_1180; memset(&l_I_1180, 0, sizeof l_I_1180);
l_I_1180 = ((rt_int)0LL);
for (;;) {
if ((l_I_1180 >= (l_T_1174).f_LEN)) goto L_end1181;
{
if (rt_b_eq(rt_b_slice(l_S_1175, l_I_1180, l_I_1180), rt_str("E", 1)))
{
goto L_end1181;
}
if (rt_b_eq(rt_b_slice(l_S_1175, l_I_1180, l_I_1180), rt_str(".", 1)))
{
l_POINT_1178 = 1;
}
else
{
if (((l_SIG_1176 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1175, l_I_1180, l_I_1180), rt_str("0", 1)))))
{
l_SIG_1176 = rt_add(l_SIG_1176, ((rt_int)1LL));
}
if (l_POINT_1178)
{
l_FRAC_1177 = rt_add(l_FRAC_1177, ((rt_int)1LL));
}
}
l_I_1180 = rt_add(l_I_1180, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1181: ;
if ((rt_sub(l_I_1180, r_BOOL_INT(l_POINT_1178)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1180 < (l_T_1174).f_LEN))
{
{
rt_int l_NEG_1182; memset(&l_NEG_1182, 0, sizeof l_NEG_1182);
l_NEG_1182 = 0;
l_I_1180 = rt_add(l_I_1180, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1175, l_I_1180, l_I_1180), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1175, l_I_1180, l_I_1180), rt_str("+", 1))))
{
l_NEG_1182 = rt_b_eq(rt_b_slice(l_S_1175, l_I_1180, l_I_1180), rt_str("-", 1));
l_I_1180 = rt_add(l_I_1180, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1180 >= (l_T_1174).f_LEN)) goto L_end1183;
{
if ((l_EXP_1179 <= ((rt_int)1000LL)))
{
l_EXP_1179 = rt_sub(rt_add(rt_mul(l_EXP_1179, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1175, l_I_1180, l_I_1180))), ((rt_int)48LL));
}
l_I_1180 = rt_add(l_I_1180, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1183: ;
if ((l_EXP_1179 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1182)
{
l_EXP_1179 = rt_neg(l_EXP_1179);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1176 > ((rt_int)0LL)))
{
{
rt_int l_P10_1184; memset(&l_P10_1184, 0, sizeof l_P10_1184);
l_P10_1184 = rt_sub(rt_add(rt_sub(l_SIG_1176, ((rt_int)1LL)), l_EXP_1179), l_FRAC_1177);
rt_int l_BITS_1185; memset(&l_BITS_1185, 0, sizeof l_BITS_1185);
l_BITS_1185 = rt_add(rt_quot((rt_mul(l_P10_1184, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1184 < ((rt_int)0LL)))
{
l_BITS_1185 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1184), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1185 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1186; memset(&l_CS_1186, 0, sizeof l_CS_1186);
l_CS_1186 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1187; memset(&l_P_1187, 0, sizeof l_P_1187);
l_P_1187 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1188; memset(&l_S_1188, 0, sizeof l_S_1188);
S_R10(&l_S_1188, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_1189; memset(&l_Y_1189, 0, sizeof l_Y_1189);
l_Y_1189 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1189 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1189))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1186 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1186)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1186 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1186)))).f_BASE;
}
}
for (;;) {
if ((l_P_1187 == NULL)) goto L_end1190;
{
if ((((*(R21 *)rt_nil_check(l_P_1187))).f_IV == g_K_STR))
{
if ((l_CS_1186 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1188, r_CAT(l_S_1188, ((*(R21 *)rt_nil_check(l_P_1187))).f_NAME), 0);
}
else
{
{
R10 l_Q_1191; memset(&l_Q_1191, 0, sizeof l_Q_1191);
S_R10(&l_Q_1191, ((*(R21 *)rt_nil_check(l_P_1187))).f_NAME, 0);
rstr l_QS_1192; memset(&l_QS_1192, 0, sizeof l_QS_1192);
l_QS_1192 = rt_str_new((l_Q_1191).f_LEN);
rt_b_assign(&l_QS_1192, r_STR(l_Q_1191, (l_Q_1191).f_LEN));
{ rt_int it1194_lo = ((rt_int)0LL), it1194_hi = rt_sub((l_Q_1191).f_LEN, ((rt_int)1LL));
for (rt_int it1194 = it1194_lo; it1194 <= it1194_hi; it1194++) {
{
{
R10 l_LIT_1195; memset(&l_LIT_1195, 0, sizeof l_LIT_1195);
R12 * l_Y_1196; memset(&l_Y_1196, 0, sizeof l_Y_1196);
if (rt_b_eq(rt_b_slice(l_QS_1192, it1194, it1194), rt_str("'", 1)))
{
S_R10(&l_LIT_1195, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1195, r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1192, it1194, it1194)), rt_str("'", 1))), 0);
}
l_Y_1196 = r_FIND_LITERAL(l_LIT_1195, l_CS_1186);
if ((l_Y_1196 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1187))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1192, it1194, it1194)));
}
S_R10(&l_S_1188, r_CATS(l_S_1188, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1196))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1194 == it1194_hi) break;
} } L_end1193: ;
}
}
}
else
{
{
R12 * l_Y_1197; memset(&l_Y_1197, 0, sizeof l_Y_1197);
l_Y_1197 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1187))).f_NAME, l_CS_1186);
if ((l_Y_1197 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1187))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1187))).f_NAME);
}
S_R10(&l_S_1188, r_CATS(l_S_1188, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1197))).f_MV)), 0);
}
}
l_P_1187 = ((*(R21 *)rt_nil_check(l_P_1187))).f_NEXT;
}
RT_B_TICK();
} L_end1190: ;
{
R22 * l_T_1198; memset(&l_T_1198, 0, sizeof l_T_1198);
l_T_1198 = r_STR_TYPE(r_NUM((l_S_1188).f_LEN), r_SOME((l_S_1188).f_LEN));
((*(R22 *)rt_nil_check(l_T_1198))).f_BASE = l_CS_1186;
{ R26 rv1199 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1188), r_NUM((l_S_1188).f_LEN)), l_T_1198);
return rv1199; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1200; memset(&l_TS_1200, 0, sizeof l_TS_1200);
l_TS_1200 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1200))).f_NAME, p_NAME, 0);
{ R22 * rv1201 = r_RESOLVE(l_TS_1200);
return rv1201; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1202; memset(&l_Y_1202, 0, sizeof l_Y_1202);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1203; memset(&l_WT_1203, 0, sizeof l_WT_1203);
l_WT_1203 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1203))).f_KIND == g_T_ENUM))
{
l_Y_1202 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1203);
if ((!(l_Y_1202 == NULL)))
{
{ R26 rv1204 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1202))).f_MV), r_ENUM_RESULT(l_Y_1202, p_WANT));
return rv1204; }
}
}
}
}
l_Y_1202 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1205; memset(&l_FOUND_1205, 0, sizeof l_FOUND_1205);
l_FOUND_1205 = NULL;
rt_int l_N_1206; memset(&l_N_1206, 0, sizeof l_N_1206);
l_N_1206 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1202 == NULL)) goto L_end1207;
{
if ((((*(R12 *)rt_nil_check(l_Y_1202))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1202))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1205 == NULL)))
{
if (((l_FOUND_1205 == NULL) || (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1205))).f_T))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1205 = l_Y_1202;
}
else
{
l_N_1206 = rt_add(l_N_1206, ((rt_int)1LL));
}
}
}
l_Y_1202 = r_LOOKUP_NEXT(l_Y_1202);
}
RT_B_TICK();
} L_end1207: ;
if ((l_FOUND_1205 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1206 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1208 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1205))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1205))).f_T);
return rv1208; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1209 = p_WANT;
return rv1209; }
}
{ R22 * rv1210 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1210; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1211; memset(&l_Y_1211, 0, sizeof l_Y_1211);
l_Y_1211 = r_LOOKUP(p_NAME);
if ((l_Y_1211 == NULL))
{
{ rt_int rv1212 = 0;
return rv1212; }
}
{ rt_int rv1213 = (((((*(R12 *)rt_nil_check(l_Y_1211))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1211))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1211))).f_KIND == g_Y_ROUTINE));
return rv1213; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1214; memset(&l_Y_1214, 0, sizeof l_Y_1214);
l_Y_1214 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1214 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1215; memset(&l_WRITABLE_1215, 0, sizeof l_WRITABLE_1215);
l_WRITABLE_1215 = r_CHECK_IMPORTED(l_Y_1214, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1216 = r_MKLV(r_OBJ_ACCESS(l_Y_1214), ((*(R12 *)rt_nil_check(l_Y_1214))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_VAR) && l_WRITABLE_1215), r_NO_TEXT());
return rv1216; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_GEN))
{
{ R26 rv1217 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1214))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1214))).f_T);
return rv1217; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1218 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1218; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1214))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1219; memset(&l_N_1219, 0, sizeof l_N_1219);
l_N_1219 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1219))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1220 = r_CALL_EXPR(l_N_1219, p_WANT);
return rv1220; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1221; memset(&l_A_1221, 0, sizeof l_A_1221);
l_A_1221 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1221)))
{
{ R26 rv1222 = r_EXPR(l_A_1221, NULL);
return rv1222; }
}
if ((((*(R21 *)rt_nil_check(l_A_1221))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1223; memset(&l_B_1223, 0, sizeof l_B_1223);
S_R26(&l_B_1223, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_A), 0);
R10 l_I_1224; memset(&l_I_1224, 0, sizeof l_I_1224);
S_R10(&l_I_1224, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1221))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1223).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1225 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1223).f_C, l_I_1224, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1223).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1225; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1226 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1223).f_C, l_I_1224, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1223).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1226; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1221))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_A))).f_NAME))
{
{ R26 rv1227 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1221))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1227; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1221))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1228; memset(&l_Y_1228, 0, sizeof l_Y_1228);
l_Y_1228 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1221))).f_NAME);
if ((!(l_Y_1228 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1228))).f_KIND == g_Y_TYPE))
{
{ R26 rv1229 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1221))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1229; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1221))).f_NAME))
{
{ R26 rv1230 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1221))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1230; }
}
}
}
{
R26 l_B_1231; memset(&l_B_1231, 0, sizeof l_B_1231);
S_R26(&l_B_1231, r_EXPR(l_A_1221, NULL), 0);
R22 * l_BT_1232; memset(&l_BT_1232, 0, sizeof l_BT_1232);
l_BT_1232 = (l_B_1231).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1232))).f_KIND == g_T_REC))
{
{
R24 * l_F_1233; memset(&l_F_1233, 0, sizeof l_F_1233);
l_F_1233 = r_FIND_VFIELD(l_BT_1232, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1233 == NULL)))
{
r_CHECK_VARIANT(l_F_1233, l_BT_1232, l_A_1221, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1234 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1231).f_C, ((*(R24 *)rt_nil_check(l_F_1233))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1233))).f_T, ((l_B_1231).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1233))).f_KIND == ((rt_int)0LL))), (l_B_1231).f_C);
return rv1234; }
}
}
}
{ R26 rv1235 = r_ATTRIBUTE(l_B_1231, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1235; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1236 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1236; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1237 = 1;
return rv1237; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1238 = 1;
return rv1238; }
}
{
rstr l_S_1239; memset(&l_S_1239, 0, sizeof l_S_1239);
l_S_1239 = rt_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN);
rt_b_assign(&l_S_1239, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1241_lo = ((rt_int)0LL), it1241_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1241 = it1241_lo; it1241 <= it1241_hi; it1241++) {
{
if (rt_b_eq(rt_b_slice(l_S_1239, it1241, it1241), rt_str(".", 1)))
{
{ rt_int rv1242 = 0;
return rv1242; }
}
}
RT_B_TICK();
if (it1241 == it1241_hi) break;
} } L_end1240: ;
}
{ rt_int rv1243 = 1;
return rv1243; }
}
{ rt_int rv1244 = 0;
return rv1244; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1245 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1245; }
}
{ rt_int rv1246 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1246; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1247 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1247; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1248; memset(&l_TAGV_1248, 0, sizeof l_TAGV_1248);
S_R23(&l_TAGV_1248, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1248).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1248).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1249; memset(&l_F_1249, 0, sizeof l_F_1249);
l_F_1249 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1250; memset(&l_A_1250, 0, sizeof l_A_1250);
l_A_1250 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1249 == NULL)) goto L_end1251;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1249))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1250 == NULL))
{
{ R23 rv1252 = r_NO_MVAL();
return rv1252; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1249))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1250))).f_ANYARG)
{
{ R23 rv1253 = r_NO_MVAL();
return rv1253; }
}
{ R23 rv1254 = ((*(R25 *)rt_nil_check(l_A_1250))).f_MLO;
return rv1254; }
}
l_A_1250 = ((*(R25 *)rt_nil_check(l_A_1250))).f_NEXT;
}
l_F_1249 = ((*(R24 *)rt_nil_check(l_F_1249))).f_NEXT;
}
RT_B_TICK();
} L_end1251: ;
{ R23 rv1255 = r_NO_MVAL();
return rv1255; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1256; memset(&l_P_1256, 0, sizeof l_P_1256);
l_P_1256 = p_L;
for (;;) {
if ((l_P_1256 == NULL)) goto L_end1257;
{
if ((((*(R21 *)rt_nil_check(l_P_1256))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1256))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1256))).f_B, p_T)).f_V)))
{
{ rt_int rv1258 = 1;
return rv1258; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1256, p_T)).f_V == p_V))
{
{ rt_int rv1259 = 1;
return rv1259; }
}
l_P_1256 = ((*(R21 *)rt_nil_check(l_P_1256))).f_NEXT;
}
RT_B_TICK();
} L_end1257: ;
{ rt_int rv1260 = 0;
return rv1260; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1261 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1261; }
}
{ R26 rv1262 = r_EXPR(p_E, NULL);
return rv1262; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1263; memset(&l_A_1263, 0, sizeof l_A_1263);
S_R26(&l_A_1263, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1264; memset(&l_I_1264, 0, sizeof l_I_1264);
S_R10(&l_I_1264, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1263).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1265 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1263).f_C, (l_A_1263).f_C, l_I_1264, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1263).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1265; }
}
}
}
{ R26 rv1266 = r_INDEX_EXPR2(p_E);
return rv1266; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1267; memset(&l_B_1267, 0, sizeof l_B_1267);
S_R26(&l_B_1267, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1268; memset(&l_T_1268, 0, sizeof l_T_1268);
l_T_1268 = r_REAL_TYPE((l_B_1267).f_T);
R21 * l_S_1269; memset(&l_S_1269, 0, sizeof l_S_1269);
l_S_1269 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1270; memset(&l_IX_1270, 0, sizeof l_IX_1270);
S_R10(&l_IX_1270, r_MK(rt_str("", 0)), 0);
rt_int l_N_1271; memset(&l_N_1271, 0, sizeof l_N_1271);
l_N_1271 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1268))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1269 == NULL)) goto L_end1272;
{
if ((l_N_1271 > ((rt_int)0LL)))
{
S_R10(&l_IX_1270, r_CATS(l_IX_1270, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1270, r_CAT(l_IX_1270, r_INT_EXPR(l_S_1269)), 0);
l_N_1271 = rt_add(l_N_1271, ((rt_int)1LL));
l_S_1269 = ((*(R21 *)rt_nil_check(l_S_1269))).f_NEXT;
}
RT_B_TICK();
} L_end1272: ;
if ((!(l_N_1271 == ((*(R22 *)rt_nil_check(l_T_1268))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1271 == ((rt_int)1LL)))
{
{ R26 rv1273 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1267).f_C, l_IX_1270, (l_B_1267).f_C, (l_B_1267).f_C), ((*(R22 *)rt_nil_check(l_T_1268))).f_ELEM, (l_B_1267).f_LVAL, r_NO_TEXT());
return rv1273; }
}
{
R10 l_X_1274; memset(&l_X_1274, 0, sizeof l_X_1274);
S_R10(&l_X_1274, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1267).f_C, r_NUM(l_N_1271), (l_B_1267).f_C, (l_B_1267).f_C), 0);
{ R26 rv1275 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1274, l_IX_1270), ((*(R22 *)rt_nil_check(l_T_1268))).f_ELEM, (l_B_1267).f_LVAL, r_NO_TEXT());
return rv1275; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1276 = r_MKN(rt_str("NEGATE_", 7));
return rv1276; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1277 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1277; }
}
{ R10 rv1278 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1278; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1279 = r_MKN(rt_str("ADD_", 4));
return rv1279; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1280 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1280; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1281 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1281; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1282 = r_MKN(rt_str("DIVIDE_", 7));
return rv1282; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1283 = r_MKN(rt_str("MODULUS_", 8));
return rv1283; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1284 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1284; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1285 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1285; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1286 = r_MKN(rt_str("EQUAL_", 6));
return rv1286; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1287 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1287; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1288 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1288; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1289 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1289; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1290 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1290; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1291 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1291; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1292 = r_MKN(rt_str("AND_", 4));
return rv1292; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1293 = r_MKN(rt_str("OR_", 3));
return rv1293; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1294 = r_MKN(rt_str("XOR_", 4));
return rv1294; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1295 = r_MKN(rt_str("IMPLIES_", 8));
return rv1295; }
}
{ R10 rv1296 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1296; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1297; memset(&l_A_1297, 0, sizeof l_A_1297);
l_A_1297 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1297)), ({ R27 rc1298; memset(&rc1298, 0, sizeof rc1298);  rc1298.f_E = NULL; S_R26(&rc1298.f_V, p_V, 0); rc1298.f_HAVE = 1; rc1298.f_MODE = g_M_IN; rc1298.f_NEXT = p_NEXT; rc1298; }), 0);
{ R27 * rv1299 = l_A_1297;
return rv1299; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1300; memset(&l_A_1300, 0, sizeof l_A_1300);
l_A_1300 = ((R27 *)rt_alloc(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1300)), ({ R27 rc1301; memset(&rc1301, 0, sizeof rc1301);  rc1301.f_E = p_E; S_R26(&rc1301.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1301.f_HAVE = 0; rc1301.f_MODE = p_MODE; rc1301.f_NEXT = p_NEXT; rc1301; }), 0);
{ R27 * rv1302 = l_A_1300;
return rv1302; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1303; memset(&l_Y_1303, 0, sizeof l_Y_1303);
l_Y_1303 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1303 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1303 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1304 = l_Y_1303;
return rv1304; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1305; memset(&l_Y_1305, 0, sizeof l_Y_1305);
l_Y_1305 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1305 == NULL)) goto L_end1306;
{
if ((((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1307 = 1;
return rv1307; }
}
l_Y_1305 = r_LOOKUP_NEXT(l_Y_1305);
}
RT_B_TICK();
} L_end1306: ;
l_Y_1305 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1305 == NULL)) goto L_end1308;
{
if ((((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1309 = 1;
return rv1309; }
}
l_Y_1305 = r_LOOKUP_NEXT(l_Y_1305);
}
RT_B_TICK();
} L_end1308: ;
{ rt_int rv1310 = 0;
return rv1310; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1311; memset(&l_Q_1311, 0, sizeof l_Q_1311);
l_Q_1311 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1312; memset(&l_R_1312, 0, sizeof l_R_1312);
l_R_1312 = NULL;
if ((l_Q_1311 == NULL))
{
{ R27 * rv1313 = NULL;
return rv1313; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1311))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1312 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1311))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1311))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1311))).f_B == NULL)))
{
l_R_1312 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1311))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1312);
}
{ R27 * rv1314 = l_R_1312;
return rv1314; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1315; memset(&l_ARGS_1315, 0, sizeof l_ARGS_1315);
l_ARGS_1315 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1316; memset(&l_Y_1316, 0, sizeof l_Y_1316);
l_Y_1316 = r_USER_OPERATOR(p_NAME, l_ARGS_1315, p_LINE);
if ((l_Y_1316 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1317 = r_CALL_SYM(l_Y_1316, l_ARGS_1315, p_LINE);
return rv1317; }
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
{ R10 rv1318 = p_C;
return rv1318; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1319 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1319; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1320 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1320; }
}
{ R10 rv1321 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1321; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1322 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1322; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1323; memset(&l_RT_1323, 0, sizeof l_RT_1323);
l_RT_1323 = r_REAL_TYPE(p_T);
R22 * l_VT_1324; memset(&l_VT_1324, 0, sizeof l_VT_1324);
l_VT_1324 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1324))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_PTR)))
{
{ R10 rv1325 = (p_V).f_C;
return rv1325; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1324))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1324)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1326 = (p_V).f_C;
return rv1326; }
}
if ((!r_SAME_CLASS(l_RT_1323, l_VT_1324)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1324), (r_TYPE_NAME(l_VT_1324)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1323), (r_TYPE_NAME(l_RT_1323)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1323))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1323))).f_SCALE))
{
{ R10 rv1327 = r_RANGE_CHECK(l_RT_1323, (p_V).f_C, p_SELF);
return rv1327; }
}
{ R10 rv1328 = r_RANGE_CHECK(l_RT_1323, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1323))).f_SCALE)), p_SELF);
return rv1328; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1323))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1324))).f_SCALE)))
{
{ R10 rv1329 = r_RANGE_CHECK(l_RT_1323, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1323))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1329; }
}
{ R10 rv1330 = r_RANGE_CHECK(l_RT_1323, (p_V).f_C, p_SELF);
return rv1330; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_ENUM))
{
{ R10 rv1331 = r_RANGE_CHECK(l_RT_1323, (p_V).f_C, p_SELF);
return rv1331; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RT_1323))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1324))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1323))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1324))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1323), r_TARGET(l_VT_1324))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1323)) && (!r_HAS_ANY(l_VT_1324))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1323))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1324))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1323))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1323))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1324))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R10 rv1332 = (p_V).f_C;
return rv1332; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1333; memset(&l_ARGS_1333, 0, sizeof l_ARGS_1333);
l_ARGS_1333 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1334; memset(&l_Y_1334, 0, sizeof l_Y_1334);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1335; memset(&l_SAVED_Q_1335, 0, sizeof l_SAVED_Q_1335);
l_SAVED_Q_1335 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1336; memset(&l_X_1336, 0, sizeof l_X_1336);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1336 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1335;
if ((!(l_X_1336 == NULL)))
{
{
R27 * l_P_1337; memset(&l_P_1337, 0, sizeof l_P_1337);
l_P_1337 = l_X_1336;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1337))).f_NEXT == NULL)) goto L_end1338;
{
l_P_1337 = ((*(R27 *)rt_nil_check(l_P_1337))).f_NEXT;
}
RT_B_TICK();
} L_end1338: ;
((*(R27 *)rt_nil_check(l_P_1337))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1333))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1333))).f_NEXT = l_X_1336;
}
}
}
}
{
R27 * l_LAST_1339; memset(&l_LAST_1339, 0, sizeof l_LAST_1339);
l_LAST_1339 = l_ARGS_1333;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1339))).f_NEXT == NULL)) goto L_end1340;
{
l_LAST_1339 = ((*(R27 *)rt_nil_check(l_LAST_1339))).f_NEXT;
}
RT_B_TICK();
} L_end1340: ;
((*(R27 *)rt_nil_check(l_LAST_1339))).f_MODE = g_M_OUT;
l_Y_1334 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1333, p_LINE, 0);
if ((l_Y_1334 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1339))).f_MODE = g_M_INOUT;
l_Y_1334 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1333, p_LINE, 0);
}
}
if ((l_Y_1334 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1341 = r_CATS((r_CALL_SYM(l_Y_1334, l_ARGS_1333, p_LINE)).f_C, rt_str(";", 1));
return rv1341; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1342 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1342; }
}
}
{ R10 rv1343 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1343; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1344 = 1;
return rv1344; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1345 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1345; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1346; memset(&l_F_1346, 0, sizeof l_F_1346);
l_F_1346 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1346 == NULL)) goto L_end1347;
{
if ((((*(R24 *)rt_nil_check(l_F_1346))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1346))).f_T))
{
{ rt_int rv1348 = 1;
return rv1348; }
}
}
l_F_1346 = ((*(R24 *)rt_nil_check(l_F_1346))).f_NEXT;
}
RT_B_TICK();
} L_end1347: ;
}
}
{ rt_int rv1349 = 0;
return rv1349; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1350 = 0;
return rv1350; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1351 = 0;
return rv1351; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1352 = 0;
return rv1352; }
}
{ rt_int rv1353 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1353; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1354 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1354; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1355; memset(&l_D_1355, 0, sizeof l_D_1355);
S_R10(&l_D_1355, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1356; memset(&l_S_1356, 0, sizeof l_S_1356);
S_R10(&l_S_1356, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1357; memset(&l_I_1357, 0, sizeof l_I_1357);
S_R10(&l_I_1357, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1358; memset(&l_N_1358, 0, sizeof l_N_1358);
S_R10(&l_N_1358, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1359; memset(&l_VE_1359, 0, sizeof l_VE_1359);
l_VE_1359 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1360; memset(&l_R_1360, 0, sizeof l_R_1360);
S_R10(&l_R_1360, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1355, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1360, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1360, l_S_1356, p_RV), 0);
S_R10(&l_R_1360, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1360, l_N_1358, l_D_1355, l_D_1355), 0);
S_R10(&l_R_1360, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1360, l_S_1356, l_S_1356), 0);
S_R10(&l_R_1360, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1360, l_I_1357, l_N_1358, l_D_1355), 0);
S_R10(&l_R_1360, r_FMT2(rt_str("@@->hi);", 8), l_R_1360, l_D_1355), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1360, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1360, l_I_1357, l_I_1357, l_I_1357), 0);
S_R10(&l_R_1360, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1360, l_I_1357, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1356, l_I_1357), r_NO_TEXT())), 0);
}
S_R10(&l_R_1360, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1360, l_I_1357, l_I_1357, l_I_1357), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1360, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1360, l_I_1357, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1359, r_FMT2(rt_str("@->p[@]", 7), l_D_1355, l_I_1357), r_FMT2(rt_str("@.p[@]", 6), l_S_1356, l_I_1357), p_LINE)), 0);
}
else
{
S_R10(&l_R_1360, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1360, l_I_1357, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1355, l_I_1357), r_FMT2(rt_str("@.p[@]", 6), l_S_1356, l_I_1357))), 0);
}
{ R10 rv1361 = l_R_1360;
return rv1361; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1362; memset(&l_D_1362, 0, sizeof l_D_1362);
S_R10(&l_D_1362, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1363; memset(&l_S_1363, 0, sizeof l_S_1363);
S_R10(&l_S_1363, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1364; memset(&l_F_1364, 0, sizeof l_F_1364);
l_F_1364 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1365; memset(&l_R_1365, 0, sizeof l_R_1365);
S_R10(&l_R_1365, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1362, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1365, r_FMT3(rt_str("@@ = @;", 7), l_R_1365, l_S_1363, p_RV), 0);
for (;;) {
if ((l_F_1364 == NULL)) goto L_end1366;
{
{
R10 l_DF_1367; memset(&l_DF_1367, 0, sizeof l_DF_1367);
S_R10(&l_DF_1367, r_FMT2(rt_str("@->@", 4), l_D_1362, ((*(R24 *)rt_nil_check(l_F_1364))).f_CNAME), 0);
R10 l_SF_1368; memset(&l_SF_1368, 0, sizeof l_SF_1368);
S_R10(&l_SF_1368, r_FMT2(rt_str("@.@", 3), l_S_1363, ((*(R24 *)rt_nil_check(l_F_1364))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1364))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1364))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1365, r_FMT3(rt_str("@ if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 43), l_R_1365, l_DF_1367, l_SF_1368), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1364))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1365, r_FMT3(rt_str("@ @ = @;", 8), l_R_1365, l_DF_1367, l_SF_1368), 0);
}
else
{
S_R10(&l_R_1365, r_FMT2(rt_str("@ @", 3), l_R_1365, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1364))).f_T, ((*(R24 *)rt_nil_check(l_F_1364))).f_T, l_DF_1367, l_SF_1368, p_LINE)), 0);
}
}
l_F_1364 = ((*(R24 *)rt_nil_check(l_F_1364))).f_NEXT;
}
RT_B_TICK();
} L_end1366: ;
{ R10 rv1369 = r_CATS(l_R_1365, rt_str(" }", 2));
return rv1369; }
}
}
{ R10 rv1370 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1370; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1371; memset(&l_ARGS_1371, 0, sizeof l_ARGS_1371);
l_ARGS_1371 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1372; memset(&l_Y_1372, 0, sizeof l_Y_1372);
l_Y_1372 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1371, p_LINE);
if ((l_Y_1372 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1373 = (r_CALL_SYM(l_Y_1372, l_ARGS_1371, p_LINE)).f_C;
return rv1373; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1374; memset(&l_X_1374, 0, sizeof l_X_1374);
S_R10(&l_X_1374, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1375; memset(&l_Z_1375, 0, sizeof l_Z_1375);
S_R10(&l_Z_1375, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1376; memset(&l_I_1376, 0, sizeof l_I_1376);
S_R10(&l_I_1376, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1377; memset(&l_N_1377, 0, sizeof l_N_1377);
S_R10(&l_N_1377, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1378; memset(&l_R_1378, 0, sizeof l_R_1378);
S_R10(&l_R_1378, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1374, p_A, l_Z_1375), 0);
S_R10(&l_R_1378, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1378, p_B, l_I_1376, l_N_1377), 0);
S_R10(&l_R_1378, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1378, l_X_1374, l_X_1374, l_Z_1375), 0);
S_R10(&l_R_1378, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1378, l_Z_1375, l_I_1376, l_N_1377), 0);
S_R10(&l_R_1378, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1378, l_X_1374, l_X_1374), 0);
S_R10(&l_R_1378, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1378, l_I_1376, l_I_1376, l_I_1376), 0);
S_R10(&l_R_1378, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1378, l_I_1376, l_I_1376, l_I_1376), 0);
S_R10(&l_R_1378, r_FMT2(rt_str("@@;", 3), l_R_1378, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1374, l_I_1376), r_FMT2(rt_str("@.p[@]", 6), l_Z_1375, l_I_1376), p_LINE)), 0);
{ R10 rv1379 = r_FMT2(rt_str("@ @r; })", 8), l_R_1378, l_I_1376);
return rv1379; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1380; memset(&l_X_1380, 0, sizeof l_X_1380);
S_R10(&l_X_1380, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1381; memset(&l_Z_1381, 0, sizeof l_Z_1381);
S_R10(&l_Z_1381, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1382; memset(&l_F_1382, 0, sizeof l_F_1382);
l_F_1382 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1383; memset(&l_R_1383, 0, sizeof l_R_1383);
S_R10(&l_R_1383, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1380, p_A, l_Z_1381), 0);
R10 l_EQ_1384; memset(&l_EQ_1384, 0, sizeof l_EQ_1384);
S_R10(&l_EQ_1384, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1383, r_FMT2(rt_str("@@;", 3), l_R_1383, p_B), 0);
for (;;) {
if ((l_F_1382 == NULL)) goto L_end1385;
{
{
R10 l_C_1386; memset(&l_C_1386, 0, sizeof l_C_1386);
S_R10(&l_C_1386, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1382))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1380, ((*(R24 *)rt_nil_check(l_F_1382))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1381, ((*(R24 *)rt_nil_check(l_F_1382))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1382))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1384, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1384, r_VARIANT_COND(l_F_1382, p_T, l_X_1380), l_C_1386), 0);
}
else
{
S_R10(&l_EQ_1384, r_FMT2(rt_str("@ && @", 6), l_EQ_1384, l_C_1386), 0);
}
}
l_F_1382 = ((*(R24 *)rt_nil_check(l_F_1382))).f_NEXT;
}
RT_B_TICK();
} L_end1385: ;
{ R10 rv1387 = r_FMT2(rt_str("@ @; })", 7), l_R_1383, l_EQ_1384);
return rv1387; }
}
}
{ R10 rv1388 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1388; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1389; memset(&l_A_1389, 0, sizeof l_A_1389);
S_R26(&l_A_1389, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1390; memset(&l_T_1390, 0, sizeof l_T_1390);
l_T_1390 = (l_A_1389).f_T;
R10 l_OP_1391; memset(&l_OP_1391, 0, sizeof l_OP_1391);
S_R10(&l_OP_1391, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1390))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1391, 1))))
{
{
R27 * l_ARGS_1392; memset(&l_ARGS_1392, 0, sizeof l_ARGS_1392);
l_ARGS_1392 = r_VAL_ARG(l_A_1389, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1393; memset(&l_Y_1393, 0, sizeof l_Y_1393);
l_Y_1393 = r_USER_OPERATOR(r_OP_NAME(l_OP_1391, 1), l_ARGS_1392, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1393 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1392))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1392))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1391, 1), l_ARGS_1392, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1391, 1));
}
}
if ((!(l_Y_1393 == NULL)))
{
{ R26 rv1394 = r_CALL_SYM(l_Y_1393, l_ARGS_1392, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1394; }
}
if ((((*(R22 *)rt_nil_check(l_T_1390))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1390));
}
}
}
if (r_TEQS(l_OP_1391, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1390))).f_KIND == g_T_BOOL))
{
{ R26 rv1395 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1389).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1395; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1390))).f_KIND == g_T_BITS))
{
{ R26 rv1396 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1389).f_C), l_T_1390);
return rv1396; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1390))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1391, rt_str("-", 1)))
{
{ R26 rv1397 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1389).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1390))).f_SCALE));
return rv1397; }
}
{ R26 rv1398 = r_MKET((l_A_1389).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1390))).f_SCALE));
return rv1398; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1390))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1399; memset(&l_FT_1399, 0, sizeof l_FT_1399);
l_FT_1399 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1390))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1391, rt_str("-", 1)))
{
{ R26 rv1400 = r_MKET(r_FLOAT_OP(l_OP_1391, r_MK(rt_str("0.0", 3)), (l_A_1389).f_C, l_FT_1399), l_FT_1399);
return rv1400; }
}
{ R26 rv1401 = r_MKET((l_A_1389).f_C, l_FT_1399);
return rv1401; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1390));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1402 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1402; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1403; memset(&l_OP_1403, 0, sizeof l_OP_1403);
S_R10(&l_OP_1403, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1404; memset(&l_A_1404, 0, sizeof l_A_1404);
R26 l_B_1405; memset(&l_B_1405, 0, sizeof l_B_1405);
if ((r_TEQS(l_OP_1403, rt_str("&", 1)) || r_TEQS(l_OP_1403, rt_str("!", 1))))
{
{
R23 l_MA_1406; memset(&l_MA_1406, 0, sizeof l_MA_1406);
S_R23(&l_MA_1406, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1407; memset(&l_CA_1407, 0, sizeof l_CA_1407);
S_R10(&l_CA_1407, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1408; memset(&l_CB_1408, 0, sizeof l_CB_1408);
S_R10(&l_CB_1408, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1403, rt_str("&", 1)))
{
{ R26 rv1409 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1407, l_CB_1408), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1409; }
}
{ R26 rv1410 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1407, l_CB_1408), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1410; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1405, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1404, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1405).f_T), 0);
}
else
{
S_R26(&l_A_1404, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1405, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1404).f_T), 0);
}
{ R26 rv1411 = r_APPLY_OPERATOR(p_E, l_OP_1403, l_A_1404, l_B_1405);
return rv1411; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1412; memset(&l_AT_1412, 0, sizeof l_AT_1412);
l_AT_1412 = (p_A).f_T;
R22 * l_BT_1413; memset(&l_BT_1413, 0, sizeof l_BT_1413);
l_BT_1413 = (p_B).f_T;
rt_int l_LINE_1414; memset(&l_LINE_1414, 0, sizeof l_LINE_1414);
l_LINE_1414 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1415; memset(&l_NAME_1415, 0, sizeof l_NAME_1415);
S_R10(&l_NAME_1415, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1415, r_MKN(rt_str_cat(rt_str("MD_", 3), r_STR(l_NAME_1415, (l_NAME_1415).f_LEN))), 0);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1415) || (((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1416; memset(&l_ARGS_1416, 0, sizeof l_ARGS_1416);
l_ARGS_1416 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1417; memset(&l_EXTRA_1417, 0, sizeof l_EXTRA_1417);
l_EXTRA_1417 = r_QUAL_ARGS(l_LINE_1414);
R12 * l_Y_1418; memset(&l_Y_1418, 0, sizeof l_Y_1418);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1417 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1417);
}
if ((!(l_EXTRA_1417 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1416))).f_NEXT))).f_NEXT = l_EXTRA_1417;
l_Y_1418 = r_USER_OPERATOR(l_NAME_1415, l_ARGS_1416, l_LINE_1414);
if ((!(l_Y_1418 == NULL)))
{
{ R26 rv1419 = r_CALL_SYM(l_Y_1418, l_ARGS_1416, l_LINE_1414);
return rv1419; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1416))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1415, l_ARGS_1416, l_LINE_1414) == NULL)))
{
r_FAILT(l_LINE_1414, rt_str_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1415);
}
}
else
{
l_Y_1418 = r_USER_OPERATOR(l_NAME_1415, l_ARGS_1416, l_LINE_1414);
if ((!(l_Y_1418 == NULL)))
{
{ R26 rv1420 = r_CALL_SYM(l_Y_1418, l_ARGS_1416, l_LINE_1414);
return rv1420; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1421; memset(&l_Q_1421, 0, sizeof l_Q_1421);
l_Q_1421 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1416, l_LINE_1414);
if ((!(l_Q_1421 == NULL)))
{
{ R26 rv1422 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1421, l_ARGS_1416, l_LINE_1414)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1422; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1414, rt_str("no such operation for the abstract type: ", 41), l_NAME_1415);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1414, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1423 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1423; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1424 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1424; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_INT)))
{
{ R26 rv1425 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1425; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1426 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1426; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1412, l_BT_1413)))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_AT_1412))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1414, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1427 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1427; }
}
r_FAILT(l_LINE_1414, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_BITS)))))
{
{
R22 * l_T_1428; memset(&l_T_1428, 0, sizeof l_T_1428);
l_T_1428 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1428))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1412))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1413))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1428))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1412))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1413))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1428))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1428))).f_MLEN).f_V), 0);
}
{ R26 rv1429 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1428);
return rv1429; }
}
}
r_FAIL(l_LINE_1414, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_BITS)))
{
{ R26 rv1430 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1412);
return rv1430; }
}
r_FAILT(l_LINE_1414, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_INT)))
{
{ R26 rv1431 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1431; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1432; memset(&l_T_1432, 0, sizeof l_T_1432);
l_T_1432 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1412))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1413))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1433 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1432), l_T_1432);
return rv1433; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1414, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1412))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1413))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1414, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1414, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1412), (r_TYPE_NAME(l_AT_1412)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1434; memset(&l_T_1434, 0, sizeof l_T_1434);
l_T_1434 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1434))).f_SCALE = p_P;
{ R22 * rv1435 = l_T_1434;
return rv1435; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1436 = r_MK(rt_str("1", 1));
return rv1436; }
}
{ R10 rv1437 = r_MK(rt_str("0", 1));
return rv1437; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1438 = r_MK(rt_str("1", 1));
return rv1438; }
}
}
{ R10 rv1439 = r_MK(rt_str("0", 1));
return rv1439; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1440 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1440; }
}
}
{ rt_int rv1441 = ((rt_int)0LL);
return rv1441; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1442 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1442; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1443 = r_MK(rt_str("and", 3));
return rv1443; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1444 = r_MK(rt_str("or", 2));
return rv1444; }
}
{ R10 rv1445 = r_MK(rt_str("xor", 3));
return rv1445; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1446 = p_A;
return rv1446; }
}
{ rt_int rv1447 = p_B;
return rv1447; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1448 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1448; }
}
{ R10 rv1449 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1449; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1450; memset(&l_AT_1450, 0, sizeof l_AT_1450);
l_AT_1450 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1451; memset(&l_BT_1451, 0, sizeof l_BT_1451);
l_BT_1451 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1452; memset(&l_R_1452, 0, sizeof l_R_1452);
if (((((*(R22 *)rt_nil_check(l_AT_1450))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1451))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1450))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1451))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1450))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1451))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1452, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1450))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1451))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1452, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1450, l_BT_1451)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1450))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R22 *)rt_nil_check(l_AT_1450))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1450) || r_HAS_ANY(l_BT_1451)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if (r_HAS_ABS_PART(l_AT_1450))
{
S_R10(&l_R_1452, r_COMPONENT_EQUAL(l_AT_1450, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1452, r_EQUAL_CODE(l_AT_1450, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1452, r_FMT1(rt_str("(!@)", 4), l_R_1452), 0);
}
{ R26 rv1453 = r_MKET(l_R_1452, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1453; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1454; memset(&l_S1_1454, 0, sizeof l_S1_1454);
l_S1_1454 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1455; memset(&l_S2_1455, 0, sizeof l_S2_1455);
l_S2_1455 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1456; memset(&l_S_1456, 0, sizeof l_S_1456);
l_S_1456 = r_MAX_INT(l_S1_1454, l_S2_1455);
R10 l_FN_1457; memset(&l_FN_1457, 0, sizeof l_FN_1457);
S_R10(&l_FN_1457, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1457, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1458 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1457, r_RESCALE_C((p_A).f_C, l_S1_1454, l_S_1456), r_RESCALE_C((p_B).f_C, l_S2_1455, l_S_1456)), r_INT_TYPE(l_S_1456));
return rv1458; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1459 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1454, l_S2_1455)));
return rv1459; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1460 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1454, l_S2_1455)));
return rv1460; }
}
{ R26 rv1461 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1454, l_S2_1455)));
return rv1461; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1462 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1454));
return rv1462; }
}
{ R26 rv1463 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1454));
return rv1463; }
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
rt_int l_S1_1464; memset(&l_S1_1464, 0, sizeof l_S1_1464);
l_S1_1464 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1465; memset(&l_S2_1465, 0, sizeof l_S2_1465);
l_S2_1465 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1466; memset(&l_RND_1466, 0, sizeof l_RND_1466);
S_R10(&l_RND_1466, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1467 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1467; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1466, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1468 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1468; }
}
{
R23 l_SM_1469; memset(&l_SM_1469, 0, sizeof l_SM_1469);
S_R23(&l_SM_1469, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1470; memset(&l_S_1470, 0, sizeof l_S_1470);
l_S_1470 = (l_SM_1469).f_V;
rt_int l_SR_1471; memset(&l_SR_1471, 0, sizeof l_SR_1471);
l_SR_1471 = r_MAX_INT(l_S1_1464, l_S2_1465);
if ((!(l_SM_1469).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1472 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1470, l_S1_1464), l_S2_1465)), l_RND_1466), r_INT_TYPE(l_S_1470));
return rv1472; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1473 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1470, l_S1_1464), l_S2_1465)), l_RND_1466), r_INT_TYPE(l_S_1470));
return rv1473; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1474 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1464), r_NUM(l_S_1470), l_RND_1466), r_INT_TYPE(l_S_1470));
return rv1474; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1475; memset(&l_SUB_1475, 0, sizeof l_SUB_1475);
S_R10(&l_SUB_1475, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1475, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1476 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1464), (p_B).f_C, r_NUM(l_S2_1465)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1470), l_SUB_1475, l_RND_1466)), r_INT_TYPE(l_S_1470));
return rv1476; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1477; memset(&l_V_1477, 0, sizeof l_V_1477);
S_R26(&l_V_1477, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1478; memset(&l_T_1478, 0, sizeof l_T_1478);
l_T_1478 = r_REAL_TYPE((l_V_1477).f_T);
R21 * l_R_1479; memset(&l_R_1479, 0, sizeof l_R_1479);
l_R_1479 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1480; memset(&l_TMP_1480, 0, sizeof l_TMP_1480);
S_R10(&l_TMP_1480, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1481; memset(&l_LO_1481, 0, sizeof l_LO_1481);
R26 l_HI_1482; memset(&l_HI_1482, 0, sizeof l_HI_1482);
R10 l_LOC_1483; memset(&l_LOC_1483, 0, sizeof l_LOC_1483);
R10 l_HIC_1484; memset(&l_HIC_1484, 0, sizeof l_HIC_1484);
R10 l_LO_OP_1485; memset(&l_LO_OP_1485, 0, sizeof l_LO_OP_1485);
S_R10(&l_LO_OP_1485, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1486; memset(&l_HI_OP_1486, 0, sizeof l_HI_OP_1486);
S_R10(&l_HI_OP_1486, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1481, r_EXPR(((*(R21 *)rt_nil_check(l_R_1479))).f_A, l_T_1478), 0);
S_R26(&l_HI_1482, r_EXPR(((*(R21 *)rt_nil_check(l_R_1479))).f_B, l_T_1478), 0);
if (((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_ENUM) && ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1478))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1481).f_T), l_T_1478)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1482).f_T), l_T_1478))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1479))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1479))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1485, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1479))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1486, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1478))).f_KIND == g_T_INT))
{
{
R26 l_X_1487; memset(&l_X_1487, 0, sizeof l_X_1487);
S_R26(&l_X_1487, r_MKET(l_TMP_1480, (l_V_1477).f_T), 0);
S_R10(&l_LOC_1483, r_FIXED_COMPARE(l_LO_1481, l_X_1487, l_LO_OP_1485), 0);
S_R10(&l_HIC_1484, r_FIXED_COMPARE(l_X_1487, l_HI_1482, l_HI_OP_1486), 0);
}
}
else
{
S_R10(&l_LOC_1483, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1481).f_C, l_LO_OP_1485, l_TMP_1480), 0);
S_R10(&l_HIC_1484, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1480, l_HI_OP_1486, (l_HI_1482).f_C), 0);
}
{ R26 rv1488 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1478), l_TMP_1480, (l_V_1477).f_C, l_LOC_1483), r_FMT1(rt_str("@; })", 5), l_HIC_1484)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1488; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1489 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1489; }
}
{ R10 rv1490 = (p_V).f_C;
return rv1490; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1491 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1491; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1492; memset(&l_B_1492, 0, sizeof l_B_1492);
l_B_1492 = ((rt_int)0LL);
rt_int l_P_1493; memset(&l_P_1493, 0, sizeof l_P_1493);
l_P_1493 = ((rt_int)1LL);
for (;;) {
if ((l_P_1493 >= p_N)) goto L_end1494;
{
l_B_1492 = rt_add(l_B_1492, ((rt_int)1LL));
l_P_1493 = rt_mul(l_P_1493, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1494: ;
{ rt_int rv1495 = l_B_1492;
return rv1495; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1496; memset(&l_M_1496, 0, sizeof l_M_1496);
S_R23(&l_M_1496, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1496).f_OK)
{
{ rt_int rv1497 = (l_M_1496).f_V;
return rv1497; }
}
}
}
}
{ rt_int rv1498 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1498; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1499 = ((rt_int)100000000LL);
return rv1499; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1500 = ((rt_int)15LL);
return rv1500; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1501 = ((rt_int)7LL);
return rv1501; }
}
{ rt_int rv1502 = ((rt_int)15LL);
return rv1502; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1503; memset(&l_SINGLE_1503, 0, sizeof l_SINGLE_1503);
l_SINGLE_1503 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1503)
{
{ rt_int rv1504 = rt_neg(((rt_int)125LL));
return rv1504; }
}
{ rt_int rv1505 = rt_neg(((rt_int)1021LL));
return rv1505; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1503)
{
{ rt_int rv1506 = ((rt_int)128LL);
return rv1506; }
}
{ rt_int rv1507 = ((rt_int)1024LL);
return rv1507; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1503)
{
{ rt_int rv1508 = ((rt_int)25LL);
return rv1508; }
}
{ rt_int rv1509 = ((rt_int)54LL);
return rv1509; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1503)
{
{ rt_int rv1510 = ((rt_int)8LL);
return rv1510; }
}
{ rt_int rv1511 = ((rt_int)11LL);
return rv1511; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1503)
{
{ rt_int rv1512 = ((rt_int)32LL);
return rv1512; }
}
{ rt_int rv1513 = ((rt_int)64LL);
return rv1513; }
}
{ rt_int rv1514 = ((rt_int)0LL);
return rv1514; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1515; memset(&l_K_1515, 0, sizeof l_K_1515);
l_K_1515 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1515 == g_T_ABS))
{
{ R23 rv1516 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1516; }
}
else if ((l_K_1515 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1517 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1517; }
}
}
{ R23 rv1518 = r_SOME(((rt_int)64LL));
return rv1518; }
}
else if ((l_K_1515 == g_T_FLOAT))
{
{ R23 rv1519 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1519; }
}
else if ((l_K_1515 == g_T_BOOL))
{
{ R23 rv1520 = r_SOME(((rt_int)1LL));
return rv1520; }
}
else if ((l_K_1515 == g_T_ENUM))
{
{ R23 rv1521 = r_SOME(r_ENUM_SIZE(p_T));
return rv1521; }
}
else if ((l_K_1515 == g_T_BITS))
{
{ R23 rv1522 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1522; }
}
else if ((l_K_1515 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1523 = r_SOME(rt_mul((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, ((rt_int)8LL)));
return rv1523; }
}
}
else if (((l_K_1515 == g_T_PTR) || (l_K_1515 == g_T_SEM)))
{
{ R23 rv1524 = r_SOME(((rt_int)64LL));
return rv1524; }
}
{ R23 rv1525 = r_NO_MVAL();
return rv1525; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1526; memset(&l_T_1526, 0, sizeof l_T_1526);
l_T_1526 = (p_B).f_T;
rt_int l_K_1527; memset(&l_K_1527, 0, sizeof l_K_1527);
l_K_1527 = ((*(R22 *)rt_nil_check(l_T_1526))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1528 = r_SIZE_OF(l_T_1526, (p_B).f_C);
return rv1528; }
}
if ((l_K_1527 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1529 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE);
return rv1529; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1530 = r_INT_ET(((rt_int)2LL));
return rv1530; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1531 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1531; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R26 rv1532 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1532; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1533 = r_MKET(((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE));
return rv1533; }
}
{ R26 rv1534 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE));
return rv1534; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1535 = r_MKET(((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE));
return rv1535; }
}
{ R26 rv1536 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE));
return rv1536; }
}
}
else if ((l_K_1527 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1537 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE);
return rv1537; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1538 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE));
return rv1538; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1539 = r_INT_ET(((rt_int)2LL));
return rv1539; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1540 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE, p_NAME));
return rv1540; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1541; memset(&l_MT_1541, 0, sizeof l_MT_1541);
l_MT_1541 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE));
R10 l_C_1542; memset(&l_C_1542, 0, sizeof l_C_1542);
S_R10(&l_C_1542, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1542, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1543 = r_MKET(((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C, l_MT_1541);
return rv1543; }
}
{ R26 rv1544 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1542), l_MT_1541);
return rv1544; }
}
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1545 = r_MKET(((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C, l_MT_1541);
return rv1545; }
}
{ R26 rv1546 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1542), l_MT_1541);
return rv1546; }
}
}
}
else if ((l_K_1527 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1547 = r_MKET(((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1526))).f_BASE);
return rv1547; }
}
{ R26 rv1548 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1526))).f_BASE);
return rv1548; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1549 = r_MKET(((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1526))).f_BASE);
return rv1549; }
}
{ R26 rv1550 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1526))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1526))).f_BASE);
return rv1550; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1551 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R22 *)rt_nil_check(l_T_1526))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1526))).f_LO_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1551; }
}
{ R26 rv1552 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1526))).f_BASE))).f_NLITS);
return rv1552; }
}
}
else if (((l_K_1527 == g_T_STR) || (l_K_1527 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1553 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1553; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1554 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1554; }
}
}
else if ((l_K_1527 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1555 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1526))).f_DIMS);
return rv1555; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1526))).f_DIMS == ((rt_int)1LL))))
{
{ R26 rv1556 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1556; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1557 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1557; }
}
}
else if ((l_K_1527 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1526))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1558 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1558; }
}
{ R26 rv1559 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1559; }
}
}
else if (((l_K_1527 == g_T_ABS) || (l_K_1527 == g_T_REC)))
{
{
R22 * l_U_1560; memset(&l_U_1560, 0, sizeof l_U_1560);
l_U_1560 = l_T_1526;
if ((l_K_1527 == g_T_ABS))
{
l_U_1560 = ((*(R22 *)rt_nil_check(l_T_1526))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1560))).f_KIND == g_T_REC))
{
{
R24 * l_F_1561; memset(&l_F_1561, 0, sizeof l_F_1561);
l_F_1561 = r_FIND_FIELD(l_U_1560, p_NAME);
if ((!(l_F_1561 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1561))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1562 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1561))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1561))).f_T);
return rv1562; }
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
R21 * l_N_1563; memset(&l_N_1563, 0, sizeof l_N_1563);
l_N_1563 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1563))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1564 = l_N_1563;
return rv1564; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1565; memset(&l_K_1565, 0, sizeof l_K_1565);
l_K_1565 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1565 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1566 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1566; }
}
}
{ R26 rv1567 = r_INT_ET(((rt_int)64LL));
return rv1567; }
}
else if ((l_K_1565 == g_T_FLOAT))
{
{ R26 rv1568 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1568; }
}
else if ((l_K_1565 == g_T_BOOL))
{
{ R26 rv1569 = r_INT_ET(((rt_int)1LL));
return rv1569; }
}
else if ((l_K_1565 == g_T_ENUM))
{
{ R26 rv1570 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1570; }
}
else if ((l_K_1565 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1571 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1571; }
}
{ R26 rv1572 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1572; }
}
else if ((l_K_1565 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1573 = r_MKET(r_FMT1(rt_str("(rt_int)((@) * 8)", 17), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1573; }
}
{ R26 rv1574 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1574; }
}
else if (((l_K_1565 == g_T_PTR) || (l_K_1565 == g_T_SEM)))
{
{ R26 rv1575 = r_INT_ET(((rt_int)64LL));
return rv1575; }
}
else if ((l_K_1565 == g_T_ABS))
{
{ R26 rv1576 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1576; }
}
else if ((l_K_1565 == g_T_ARR))
{
{ R26 rv1577 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1577; }
}
{ R26 rv1578 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1578; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1579 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1579; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1580; memset(&l_T_1580, 0, sizeof l_T_1580);
l_T_1580 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
R22 * l_RT_1581; memset(&l_RT_1581, 0, sizeof l_RT_1581);
l_RT_1581 = r_REAL_TYPE(l_T_1580);
if (((((*(R22 *)rt_nil_check(l_RT_1581))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1581))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1582; memset(&l_TMP_1582, 0, sizeof l_TMP_1582);
S_R10(&l_TMP_1582, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1583; memset(&l_C_1583, 0, sizeof l_C_1583);
S_R10(&l_C_1583, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(l_T_1580), l_TMP_1582, l_TMP_1582, l_TMP_1582), 0);
S_R10(&l_C_1583, r_FMT3(rt_str("@@ @; })", 8), l_C_1583, r_INIT_CODE(l_RT_1581, l_TMP_1582), l_TMP_1582), 0);
{ R26 rv1584 = r_MKET(l_C_1583, l_T_1580);
return rv1584; }
}
}
{ R26 rv1585 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1580)), l_T_1580);
return rv1585; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1586 = 0;
return rv1586; }
}
{
R12 * l_Y_1587; memset(&l_Y_1587, 0, sizeof l_Y_1587);
l_Y_1587 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1587 == NULL))
{
{ rt_int rv1588 = 0;
return rv1588; }
}
{ rt_int rv1589 = (((*(R12 *)rt_nil_check(l_Y_1587))).f_KIND == g_Y_TYPE);
return rv1589; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1590 = r_INT_ET(((rt_int)100000000LL));
return rv1590; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1591 = r_INT_ET(((rt_int)15LL));
return rv1591; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1592 = r_INT_ET(((rt_int)0LL));
return rv1592; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1593; memset(&l_T_1593, 0, sizeof l_T_1593);
l_T_1593 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1593 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1593 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1593 = r_REAL_TYPE(l_T_1593);
if ((!(((*(R22 *)rt_nil_check(l_T_1593))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1593))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1594; memset(&l_TMP_1594, 0, sizeof l_TMP_1594);
S_R10(&l_TMP_1594, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1595; memset(&l_R_1595, 0, sizeof l_R_1595);
S_R10(&l_R_1595, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1593))).f_CNAME, l_TMP_1594, l_TMP_1594, l_TMP_1594), 0);
R24 * l_F_1596; memset(&l_F_1596, 0, sizeof l_F_1596);
l_F_1596 = ((*(R22 *)rt_nil_check(l_T_1593))).f_FIELDS;
S_R10(&l_R_1595, r_FMT2(rt_str("@@", 2), l_R_1595, r_INIT_CODE(l_T_1593, l_TMP_1594)), 0);
for (;;) {
if ((l_F_1596 == NULL)) goto L_end1597;
{
if ((((*(R24 *)rt_nil_check(l_F_1596))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1596))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1596))).f_LABELS, (r_TAG_VALUE(l_T_1593, ((*(R24 *)rt_nil_check(l_F_1596))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1593, ((*(R24 *)rt_nil_check(l_F_1596))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1598; memset(&l_INIT_1598, 0, sizeof l_INIT_1598);
l_INIT_1598 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1596))).f_NAME);
if ((l_INIT_1598 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1596))).f_NAME);
}
S_R10(&l_R_1595, r_FMT2(rt_str("@ @", 3), l_R_1595, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1596))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1594, ((*(R24 *)rt_nil_check(l_F_1596))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1598))).f_A, ((*(R24 *)rt_nil_check(l_F_1596))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1598))).f_LINE, l_TMP_1594)), 0);
}
}
}
l_F_1596 = ((*(R24 *)rt_nil_check(l_F_1596))).f_NEXT;
}
RT_B_TICK();
} L_end1597: ;
{
R21 * l_P_1599; memset(&l_P_1599, 0, sizeof l_P_1599);
l_P_1599 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1599 == NULL)) goto L_end1600;
{
{
R24 * l_G_1601; memset(&l_G_1601, 0, sizeof l_G_1601);
l_G_1601 = r_FIND_VFIELD(l_T_1593, ((*(R21 *)rt_nil_check(l_P_1599))).f_NAME);
if ((l_G_1601 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1599))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1599))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1601))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1599))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1599))).f_NAME);
}
r_CHECK_VARIANT(l_G_1601, l_T_1593, NULL, ((*(R21 *)rt_nil_check(l_P_1599))).f_LINE);
}
l_P_1599 = ((*(R21 *)rt_nil_check(l_P_1599))).f_NEXT;
}
RT_B_TICK();
} L_end1600: ;
}
{ R26 rv1602 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1595, l_TMP_1594), l_T_1593);
return rv1602; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1603; memset(&l_P_1603, 0, sizeof l_P_1603);
l_P_1603 = p_L;
for (;;) {
if ((l_P_1603 == NULL)) goto L_end1604;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1603))).f_NAME, p_NAME))
{
{ R21 * rv1605 = l_P_1603;
return rv1605; }
}
l_P_1603 = ((*(R21 *)rt_nil_check(l_P_1603))).f_NEXT;
}
RT_B_TICK();
} L_end1604: ;
{ R21 * rv1606 = NULL;
return rv1606; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1607; memset(&l_DIMS_1607, 0, sizeof l_DIMS_1607);
l_DIMS_1607 = ((rt_int)0LL);
R21 * l_P_1608; memset(&l_P_1608, 0, sizeof l_P_1608);
l_P_1608 = p_E;
R22 * l_ELEM_1609; memset(&l_ELEM_1609, 0, sizeof l_ELEM_1609);
l_ELEM_1609 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1608))).f_KIND == g_N_ARRCONS))) goto L_end1610;
{
l_DIMS_1607 = rt_add(l_DIMS_1607, ((rt_int)1LL));
l_P_1608 = ((*(R21 *)rt_nil_check(l_P_1608))).f_A;
}
RT_B_TICK();
} L_end1610: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1609 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1609 == NULL))
{
l_ELEM_1609 = (r_EXPR(l_P_1608, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1609))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1609))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1609 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R22 * l_A_1611; memset(&l_A_1611, 0, sizeof l_A_1611);
l_A_1611 = r_ARRAY_OF(l_ELEM_1609, l_DIMS_1607);
R10 l_TMP_1612; memset(&l_TMP_1612, 0, sizeof l_TMP_1612);
S_R10(&l_TMP_1612, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1613; memset(&l_R_1613, 0, sizeof l_R_1613);
S_R10(&l_R_1613, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1611))).f_CNAME, l_TMP_1612, l_TMP_1612), 0);
rt_int l_K_1614; memset(&l_K_1614, 0, sizeof l_K_1614);
l_K_1614 = ((rt_int)0LL);
S_R10(&l_R_1613, r_FMT2(rt_str("@@); ", 5), l_R_1613, l_TMP_1612), 0);
l_P_1608 = p_E;
{ rt_int it1616_lo = ((rt_int)0LL), it1616_hi = rt_sub(l_DIMS_1607, ((rt_int)1LL));
for (rt_int it1616 = it1616_lo; it1616 <= it1616_hi; it1616++) {
{
S_R10(&l_R_1613, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1613, l_TMP_1612, r_NUM(it1616), l_TMP_1612), 0);
S_R10(&l_R_1613, r_FMT3(rt_str("@@] = @;", 8), l_R_1613, r_NUM(it1616), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1608))).f_A), ((rt_int)1LL)))), 0);
l_P_1608 = ((*(R21 *)rt_nil_check(l_P_1608))).f_A;
}
RT_B_TICK();
if (it1616 == it1616_hi) break;
} } L_end1615: ;
S_R10(&l_R_1613, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1613, l_TMP_1612, l_TMP_1612, r_NUM(l_DIMS_1607)), 0);
S_R10(&l_R_1613, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1613, l_TMP_1612, l_TMP_1612), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1607, l_A_1611, l_TMP_1612, &l_R_1613, &l_K_1614);
{ R26 rv1617 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1613, l_TMP_1612), l_A_1611);
return rv1617; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1618; memset(&l_P_1618, 0, sizeof l_P_1618);
l_P_1618 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1618 == NULL)) goto L_end1619;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1618, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1618))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1618))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1618, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1618))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1618 = ((*(R21 *)rt_nil_check(l_P_1618))).f_NEXT;
}
RT_B_TICK();
} L_end1619: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1620; memset(&l_T_1620, 0, sizeof l_T_1620);
l_T_1620 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1620))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1620))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1620))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1621 = l_T_1620;
return rv1621; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1622; memset(&l_T_1622, 0, sizeof l_T_1622);
l_T_1622 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1623; memset(&l_V_1623, 0, sizeof l_V_1623);
S_R26(&l_V_1623, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1622), 0);
R22 * l_RT_1624; memset(&l_RT_1624, 0, sizeof l_RT_1624);
l_RT_1624 = r_REAL_TYPE(l_T_1622);
if (((((*(R22 *)rt_nil_check((l_V_1623).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_INT))
{
{ R26 rv1625 = r_MKET(r_RANGE_CHECK(l_RT_1624, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1623).f_C), r_NO_TEXT()), l_T_1622);
return rv1625; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_BOOL))
{
{ R26 rv1626 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1623).f_C), l_T_1622);
return rv1626; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_ENUM))
{
{ R26 rv1627 = r_MKET(r_ENUM_OF_BITS(l_RT_1624, (l_V_1623).f_C), l_T_1622);
return rv1627; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_FLOAT))
{
{ R26 rv1628 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1623).f_C), l_T_1622);
return rv1628; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_STR))
{
{ R26 rv1629 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1623).f_C), l_T_1622);
return rv1629; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1630; memset(&l_C_1630, 0, sizeof l_C_1630);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1630, r_CONVERT(l_V_1623, l_T_1622, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1624))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1624))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1624))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1623).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1630, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1630, ((*(R22 *)rt_nil_check(l_RT_1624))).f_LEN_C), 0);
}
{ R26 rv1631 = r_MKET(l_C_1630, l_T_1622);
return rv1631; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1632 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1632; }
}
}
{ R10 rv1633 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1633; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1634; memset(&l_NAME_1634, 0, sizeof l_NAME_1634);
S_R10(&l_NAME_1634, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1635; memset(&l_L_1635, 0, sizeof l_L_1635);
l_L_1635 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1636; memset(&l_R_1636, 0, sizeof l_R_1636);
S_R10(&l_R_1636, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1635 == NULL)) goto L_end1637;
{
{
R21 * l_V_1638; memset(&l_V_1638, 0, sizeof l_V_1638);
l_V_1638 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1639; memset(&l_FOUND_1639, 0, sizeof l_FOUND_1639);
l_FOUND_1639 = 0;
for (;;) {
if ((l_V_1638 == NULL)) goto L_end1640;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1638))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1635))).f_NAME))
{
S_R10(&l_R_1636, r_FMT2(rt_str("@@, ", 4), l_R_1636, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1638))).f_A, NULL)).f_C), 0);
l_FOUND_1639 = 1;
}
l_V_1638 = ((*(R21 *)rt_nil_check(l_V_1638))).f_NEXT;
}
RT_B_TICK();
} L_end1640: ;
if ((!l_FOUND_1639))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1635))).f_NAME);
}
}
l_L_1635 = ((*(R21 *)rt_nil_check(l_L_1635))).f_NEXT;
}
RT_B_TICK();
} L_end1637: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1634, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1636, l_NAME_1634, l_NAME_1634));
{ R10 rv1641 = r_FMT2(rt_str("@, @", 4), l_NAME_1634, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1641; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1642; memset(&l_SEM_1642, 0, sizeof l_SEM_1642);
l_SEM_1642 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1642 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1642)
{
{
R22 * l_T_1643; memset(&l_T_1643, 0, sizeof l_T_1643);
l_T_1643 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1643 = p_WANT;
}
}
{ R26 rv1644 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_1643))).f_SCALE)), l_T_1643);
return rv1644; }
}
}
{
R22 * l_T_1645; memset(&l_T_1645, 0, sizeof l_T_1645);
l_T_1645 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_1646; memset(&l_P_1646, 0, sizeof l_P_1646);
l_P_1646 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_1646))).f_TARGET = l_T_1645;
((*(R22 *)rt_nil_check(l_P_1646))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1645))
{
{ R26 rv1647 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1645), r_INIT_CODE(l_T_1645, r_MK(rt_str("(*p)", 4)))), l_P_1646);
return rv1647; }
}
{ R26 rv1648 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1645), r_CTYPE(l_T_1645)), l_P_1646);
return rv1648; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_1649; memset(&l_P_1649, 0, sizeof l_P_1649);
l_P_1649 = p_L;
{ rt_int it1651_lo = ((rt_int)1LL), it1651_hi = p_K;
for (rt_int it1651 = it1651_lo; it1651 <= it1651_hi; it1651++) {
{
if ((!(l_P_1649 == NULL)))
{
l_P_1649 = ((*(R21 *)rt_nil_check(l_P_1649))).f_NEXT;
}
}
RT_B_TICK();
if (it1651 == it1651_hi) break;
} } L_end1650: ;
{ R21 * rv1652 = l_P_1649;
return rv1652; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_1653; memset(&l_N_1653, 0, sizeof l_N_1653);
l_N_1653 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_1653 < p_LO) || (l_N_1653 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_1654; memset(&l_L_1654, 0, sizeof l_L_1654);
l_L_1654 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1654 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_1654))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_1654))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1654))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1655 = r_MK(rt_str("1", 1));
return rv1655; }
}
{ R10 rv1656 = r_MK(rt_str("0", 1));
return rv1656; }
}
if (((((*(R21 *)rt_nil_check(l_L_1654))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_1654))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1654))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv1657 = r_MK(rt_str("1", 1));
return rv1657; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_1654))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv1658 = r_MK(rt_str("0", 1));
return rv1658; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1659 = r_MK(rt_str("1", 1));
return rv1659; }
}
{ R10 rv1660 = r_MK(rt_str("0", 1));
return rv1660; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv1661 = 0;
return rv1661; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1662 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1662; }
}
{ rt_int rv1663 = 0;
return rv1663; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv1664 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv1664; }
}
{ R21 * rv1665 = p_E;
return rv1665; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_1666; memset(&l_NAMES_1666, 0, sizeof l_NAMES_1666);
l_NAMES_1666 = rt_str_new(((rt_int)299LL));
rt_b_assign(&l_NAMES_1666, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_1667; memset(&l_L_1667, 0, sizeof l_L_1667);
l_L_1667 = (p_NAME).f_LEN;
{ rt_int it1669_lo = ((rt_int)0LL), it1669_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_1667), ((rt_int)2LL));
for (rt_int it1669 = it1669_lo; it1669 <= it1669_hi; it1669++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_1666, it1669, it1669), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_1666, rt_add(rt_add(it1669, l_L_1667), ((rt_int)1LL)), rt_add(rt_add(it1669, l_L_1667), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_1666, rt_add(it1669, ((rt_int)1LL)), rt_add(it1669, l_L_1667)), r_STR(p_NAME, l_L_1667)))
{
{
rt_int l_J_1670; memset(&l_J_1670, 0, sizeof l_J_1670);
l_J_1670 = rt_add(rt_add(it1669, l_L_1667), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_1666, l_J_1670, l_J_1670), rt_str(" ", 1))) goto L_end1671;
{
l_J_1670 = rt_add(l_J_1670, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1671: ;
{ R10 rv1672 = r_MKN(rt_b_slice(l_NAMES_1666, rt_add(rt_add(it1669, l_L_1667), ((rt_int)2LL)), rt_sub(l_J_1670, ((rt_int)1LL))));
return rv1672; }
}
}
}
}
RT_B_TICK();
if (it1669 == it1669_hi) break;
} } L_end1668: ;
{ R10 rv1673 = r_NO_TEXT();
return rv1673; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1674; memset(&l_NAME_1674, 0, sizeof l_NAME_1674);
S_R10(&l_NAME_1674, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1675; memset(&l_LINE_1675, 0, sizeof l_LINE_1675);
l_LINE_1675 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_1676; memset(&l_N_1676, 0, sizeof l_N_1676);
l_N_1676 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_1674, rt_str("STORE_", 6)) || r_TEQS(l_NAME_1674, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_1677; memset(&l_TGT_1677, 0, sizeof l_TGT_1677);
l_TGT_1677 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_1678; memset(&l_S_1678, 0, sizeof l_S_1678);
l_S_1678 = r_NEW_NODE(g_N_ASSIGN, l_LINE_1675);
R21 * l_SRC_1679; memset(&l_SRC_1679, 0, sizeof l_SRC_1679);
l_SRC_1679 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_1677 == NULL) || (l_SRC_1679 == NULL)))
{
r_FAILT(l_LINE_1675, rt_str("the wrong arguments for ", 24), l_NAME_1674);
}
if (r_TEQS(l_NAME_1674, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_1678))).f_A = l_TGT_1677;
}
else
{
if ((l_N_1676 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_1675, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_1678))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_1675);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1678))).f_A))).f_A = l_TGT_1677;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1678))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_1678))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_1678))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_1679), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_1674, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_1675);
{
R14 l_SAVED_CODE_1680; memset(&l_SAVED_CODE_1680, 0, sizeof l_SAVED_CODE_1680);
S_R14(&l_SAVED_CODE_1680, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_1681; memset(&l_C_1681, 0, sizeof l_C_1681);
S_R10(&l_C_1681, r_MK(rt_str("({", 2)), 0);
R15 * l_P_1682; memset(&l_P_1682, 0, sizeof l_P_1682);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1683; memset(&rc1683, 0, sizeof rc1683);  rc1683.f_HEAD = NULL; rc1683.f_TAIL = NULL; rc1683; }), 0);
r_ASSIGN_STMT(l_S_1678);
l_P_1682 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_1682 == NULL)) goto L_end1684;
{
S_R10(&l_C_1681, r_FMT2(rt_str("@ @", 3), l_C_1681, ((*(R15 *)rt_nil_check(l_P_1682))).f_T), 0);
l_P_1682 = ((*(R15 *)rt_nil_check(l_P_1682))).f_NEXT;
}
RT_B_TICK();
} L_end1684: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1680, 0);
{ R26 rv1685 = r_MKET(r_CATS(l_C_1681, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1685; }
}
}
}
if (r_TEQS(l_NAME_1674, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_1686; memset(&l_S_1686, 0, sizeof l_S_1686);
l_S_1686 = r_NEW_NODE(g_N_SUBSTR, l_LINE_1675);
((*(R21 *)rt_nil_check(l_S_1686))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_1686))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_1686))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_1686))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1687 = r_EXPR(l_S_1686, p_WANT);
return rv1687; }
}
}
{
R10 l_SYM__1688; memset(&l_SYM__1688, 0, sizeof l_SYM__1688);
S_R10(&l_SYM__1688, r_OPERATOR_SYMBOL(l_NAME_1674), 0);
rt_int l_UNARY_OP_1689; memset(&l_UNARY_OP_1689, 0, sizeof l_UNARY_OP_1689);
l_UNARY_OP_1689 = ((r_TEQS(l_NAME_1674, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_1674, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_1674, rt_str("COMPLEMENT_", 11)));
R21 * l_X_1690; memset(&l_X_1690, 0, sizeof l_X_1690);
if (l_UNARY_OP_1689)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_1690 = r_NEW_NODE(g_N_UNOP, l_LINE_1675);
S_R10(&((*(R21 *)rt_nil_check(l_X_1690))).f_NAME, l_SYM__1688, 0);
((*(R21 *)rt_nil_check(l_X_1690))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv1691 = r_EXPR(r_QUALIFIED(l_X_1690, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_1675), p_WANT);
return rv1691; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_1690 = r_BIN_NODE(l_SYM__1688, l_LINE_1675, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__1688, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_1690))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_1674, (l_NAME_1674).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_1690))).f_FL = ((rt_int)2LL);
}
{ R26 rv1692 = r_EXPR(r_QUALIFIED(l_X_1690, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1675), p_WANT);
return rv1692; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_1693; memset(&l_R_1693, 0, sizeof l_R_1693);
l_R_1693 = p_X;
R21 * l_P_1694; memset(&l_P_1694, 0, sizeof l_P_1694);
l_P_1694 = p_Q;
for (;;) {
if ((l_P_1694 == NULL)) goto L_end1695;
{
if ((l_R_1693 == p_X))
{
l_R_1693 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_1693))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_1694))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_1694))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_1694))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_1693))).f_NAME, ((*(R21 *)rt_nil_check(l_P_1694))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_1693))).f_B = l_P_1694;
}
l_P_1694 = ((*(R21 *)rt_nil_check(l_P_1694))).f_NEXT;
}
RT_B_TICK();
} L_end1695: ;
{ R21 * rv1696 = l_R_1693;
return rv1696; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1697 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv1697; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_1698; memset(&l_Y_1698, 0, sizeof l_Y_1698);
l_Y_1698 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_1698 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1698))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_1699; memset(&l_T_1699, 0, sizeof l_T_1699);
l_T_1699 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_1698))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_1699))).f_KIND == g_T_ENUM))
{
{ R22 * rv1700 = l_T_1699;
return rv1700; }
}
}
}
}
{ R22 * rv1701 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv1701; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv1702 = 1;
return rv1702; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1703 = 1;
return rv1703; }
}
{ rt_int rv1704 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv1704; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv1705 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv1705; }
}
{ R21 * rv1706 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv1706; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_1707; memset(&l_NAME_1707, 0, sizeof l_NAME_1707);
S_R10(&l_NAME_1707, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1708; memset(&l_LINE_1708, 0, sizeof l_LINE_1708);
l_LINE_1708 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((((((r_OPERATOR_SYMBOL(l_NAME_1707)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_1707, rt_str("STORE_", 6))) || r_TEQS(l_NAME_1707, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_1707, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv1709 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv1709; }
}
if ((r_TEQS(l_NAME_1707, rt_str("PUT", 3)) || r_TEQS(l_NAME_1707, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1710; memset(&l_V_1710, 0, sizeof l_V_1710);
S_R26(&l_V_1710, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1710).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1708, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1707, rt_str("PUT", 3)))
{
{ R26 rv1711 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1710).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1711; }
}
{ R26 rv1712 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1710).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1712; }
}
}
else if (r_TEQS(l_NAME_1707, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1713 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1713; }
}
else if (r_TEQS(l_NAME_1707, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1714 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1714; }
}
else if (r_TEQS(l_NAME_1707, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1715 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1715; }
}
else if (r_TEQS(l_NAME_1707, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1716 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1716; }
}
else if (r_TEQS(l_NAME_1707, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1717 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1717; }
}
else if (r_TEQS(l_NAME_1707, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv1718 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1718; }
}
if (r_TEQS(l_NAME_1707, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1719 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1708);
return rv1719; }
}
else if (r_TEQS(l_NAME_1707, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv1720 = r_TO_FIXED_CALL(p_E);
return rv1720; }
}
else if (r_TEQS(l_NAME_1707, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_1721; memset(&l_V_1721, 0, sizeof l_V_1721);
S_R26(&l_V_1721, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_1722; memset(&l_P_1722, 0, sizeof l_P_1722);
S_R23(&l_P_1722, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_1723; memset(&l_VT_1723, 0, sizeof l_VT_1723);
l_VT_1723 = r_REAL_TYPE((l_V_1721).f_T);
R22 * l_T_1724; memset(&l_T_1724, 0, sizeof l_T_1724);
l_T_1724 = r_FLOAT_TYPE((l_P_1722).f_V);
R10 l_SINGLE_1725; memset(&l_SINGLE_1725, 0, sizeof l_SINGLE_1725);
S_R10(&l_SINGLE_1725, r_SINGLE_C((l_P_1722).f_V), 0);
R10 l_TR_1726; memset(&l_TR_1726, 0, sizeof l_TR_1726);
S_R10(&l_TR_1726, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_1727; memset(&l_R_1727, 0, sizeof l_R_1727);
l_R_1727 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_1727 == NULL))
{
l_R_1727 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_1727))).f_KIND == g_N_QUAL))
{
l_R_1727 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_1727))).f_NAME, (((*(R21 *)rt_nil_check(l_R_1727))).f_NAME).f_LEN), l_LINE_1708);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_1727))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_1726, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_1727))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_1708, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_1723))).f_KIND == g_T_INT))
{
{ R26 rv1728 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_1721).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_1723))).f_SCALE), l_SINGLE_1725, l_TR_1726), l_T_1724);
return rv1728; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1723))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_1722).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1723))).f_SCALE))))
{
{
R21 * l_Q_1729; memset(&l_Q_1729, 0, sizeof l_Q_1729);
l_Q_1729 = r_NEW_NODE(g_N_QUAL, l_LINE_1708);
R21 * l_SAVED_Q_1730; memset(&l_SAVED_Q_1730, 0, sizeof l_SAVED_Q_1730);
l_SAVED_Q_1730 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_1731; memset(&l_L_1731, 0, sizeof l_L_1731);
((*(R21 *)rt_nil_check(l_Q_1729))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_1729;
S_R26(&l_L_1731, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1730;
{ R26 rv1732 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_1731).f_C, l_SINGLE_1725, l_TR_1726), l_T_1724);
return rv1732; }
}
}
{ R26 rv1733 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_1721).f_C, l_SINGLE_1725, l_TR_1726), l_T_1724);
return rv1733; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_1723))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_1723))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_1723))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_1708, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv1734 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_1721).f_C, l_SINGLE_1725, l_TR_1726), l_T_1724);
return rv1734; }
}
r_FAIL(l_LINE_1708, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1707, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1735 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1708);
return rv1735; }
}
else if (r_TEQS(l_NAME_1707, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1736; memset(&l_V_1736, 0, sizeof l_V_1736);
S_R26(&l_V_1736, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1736).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv1737 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1736).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_1736).f_T))).f_SCALE));
return rv1737; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1736).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv1738 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1736).f_C), (l_V_1736).f_T);
return rv1738; }
}
r_FAIL(l_LINE_1708, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1707, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1707, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_1739; memset(&l_V_1739, 0, sizeof l_V_1739);
S_R26(&l_V_1739, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1740; memset(&l_T_1740, 0, sizeof l_T_1740);
l_T_1740 = r_REAL_TYPE((l_V_1739).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_1740))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1708, rt_str("an enumerated value expected by ", 32), l_NAME_1707);
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1740))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1708, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1707);
}
if (r_TEQS(l_NAME_1707, rt_str("SUCC", 4)))
{
{ R26 rv1741 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1739).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1740))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_1740))).f_BASE);
return rv1741; }
}
{ R26 rv1742 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1739).f_C), ((*(R22 *)rt_nil_check(l_T_1740))).f_BASE);
return rv1742; }
}
}
else if (r_TEQS(l_NAME_1707, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_1743; memset(&l_V_1743, 0, sizeof l_V_1743);
S_R26(&l_V_1743, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1744; memset(&l_K_1744, 0, sizeof l_K_1744);
l_K_1744 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1743).f_T)))).f_KIND;
R22 * l_T_1745; memset(&l_T_1745, 0, sizeof l_T_1745);
l_T_1745 = r_NEW_TYP(l_K_1744);
if (((!(l_K_1744 == g_T_STR)) && (!(l_K_1744 == g_T_BITS))))
{
r_FAIL(l_LINE_1708, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_1745))).f_BASE = ((*(R22 *)rt_nil_check((l_V_1743).f_T))).f_BASE;
{ R26 rv1746 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1743).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1745);
return rv1746; }
}
}
else if (r_TEQS(l_NAME_1707, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1747 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1747; }
}
else if (r_TEQS(l_NAME_1707, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1748 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1748; }
}
else if (((r_TEQS(l_NAME_1707, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1707, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1707, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_1749; memset(&l_BITS_1749, 0, sizeof l_BITS_1749);
S_R10(&l_BITS_1749, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1707, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_1749, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1707, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_1749, r_MK(rt_str("4", 1)), 0);
}
{ R26 rv1750 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1749), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1750; }
}
}
else if ((r_TEQS(l_NAME_1707, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1707, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_1751; memset(&l_S_1751, 0, sizeof l_S_1751);
S_R23(&l_S_1751, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_1752; memset(&l_R_1752, 0, sizeof l_R_1752);
S_R23(&l_R_1752, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_1752).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_1708, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_1708);
if (r_TEQS(l_NAME_1707, rt_str("FIXED_MIN", 9)))
{
{ R26 rv1753 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1751).f_V));
return rv1753; }
}
{ R26 rv1754 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1751).f_V));
return rv1754; }
}
}
else if (((r_TEQS(l_NAME_1707, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1707, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1707, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_1755; memset(&l_P_1755, 0, sizeof l_P_1755);
S_R23(&l_P_1755, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_1756; memset(&l_T_1756, 0, sizeof l_T_1756);
l_T_1756 = r_FLOAT_TYPE((l_P_1755).f_V);
R10 l_C_1757; memset(&l_C_1757, 0, sizeof l_C_1757);
S_R10(&l_C_1757, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_1755).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_1757, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_1707, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv1758 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1757), l_T_1756);
return rv1758; }
}
else if (r_TEQS(l_NAME_1707, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv1759 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1757), l_T_1756);
return rv1759; }
}
{ R26 rv1760 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_1757), l_T_1756);
return rv1760; }
}
}
else if (r_TEQS(l_NAME_1707, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1761 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv1761; }
}
else if (r_TEQS(l_NAME_1707, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1762 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1762; }
}
else if (r_TEQS(l_NAME_1707, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv1763 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1763; }
}
{ R26 rv1764 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1764; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1765; memset(&l_T_1765, 0, sizeof l_T_1765);
l_T_1765 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1766; memset(&l_K_1766, 0, sizeof l_K_1766);
l_K_1766 = ((*(R22 *)rt_nil_check(l_T_1765))).f_KIND;
R22 * l_S_1767; memset(&l_S_1767, 0, sizeof l_S_1767);
l_S_1767 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1766 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_1765))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv1768 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1767);
return rv1768; }
}
{ R26 rv1769 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1765))).f_SCALE)), l_S_1767);
return rv1769; }
}
else if ((l_K_1766 == g_T_FLOAT))
{
{ R26 rv1770 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_1765))).f_SCALE)), l_S_1767);
return rv1770; }
}
else if ((l_K_1766 == g_T_BOOL))
{
{ R26 rv1771 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1767);
return rv1771; }
}
else if ((l_K_1766 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_1765))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv1772 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1767);
return rv1772; }
}
{ R26 rv1773 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1765))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1767);
return rv1773; }
}
else if (((l_K_1766 == g_T_STR) || (l_K_1766 == g_T_BITS)))
{
{ R26 rv1774 = r_MKET((p_V).f_C, l_S_1767);
return rv1774; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1765));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1775; memset(&l_V_1775, 0, sizeof l_V_1775);
S_R26(&l_V_1775, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_1776; memset(&l_T_1776, 0, sizeof l_T_1776);
l_T_1776 = r_REAL_TYPE((l_V_1775).f_T);
rt_int l_N_1777; memset(&l_N_1777, 0, sizeof l_N_1777);
l_N_1777 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_1778; memset(&l_RND_1778, 0, sizeof l_RND_1778);
S_R10(&l_RND_1778, r_ROUNDING_ARG(p_E, l_N_1777), 0);
rt_int l_S_1779; memset(&l_S_1779, 0, sizeof l_S_1779);
l_S_1779 = ((rt_int)0LL);
if (((l_N_1777 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_1779 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_1780; memset(&l_K_1780, 0, sizeof l_K_1780);
l_K_1780 = ((rt_int)2LL);
for (;;) {
if ((l_K_1780 >= l_N_1777)) goto L_end1781;
{
{
R21 * l_R_1782; memset(&l_R_1782, 0, sizeof l_R_1782);
l_R_1782 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1780));
if ((r_IS_ROUNDING(l_R_1782) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_1780)))).f_KIND == g_N_QUAL) && (l_K_1780 == rt_sub(l_N_1777, ((rt_int)1LL)))))))
{
if ((!(l_K_1780 == rt_sub(l_N_1777, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_1782))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_1782))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_1782))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_1782, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_1782))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_1782))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_1782, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_1780 = rt_add(l_K_1780, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1781: ;
}
if (((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv1783 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_1779), l_RND_1778), r_INT_TYPE(l_S_1779));
return rv1783; }
}
if ((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1784; memset(&l_SAVED_1784, 0, sizeof l_SAVED_1784);
l_SAVED_1784 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_1785; memset(&l_C_1785, 0, sizeof l_C_1785);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1778, rt_str("1", 1));
S_R10(&l_C_1785, r_RESCALE_C((l_V_1775).f_C, ((*(R22 *)rt_nil_check(l_T_1776))).f_SCALE, l_S_1779), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1784;
{ R26 rv1786 = r_MKET(l_C_1785, r_INT_TYPE(l_S_1779));
return rv1786; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_FLOAT))
{
{ R26 rv1787 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1775).f_C, r_NUM(l_S_1779), l_RND_1778), r_INT_TYPE(l_S_1779));
return rv1787; }
}
else if (((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1776))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_1776))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1776))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv1788 = r_MKET(r_RESCALE_C((l_V_1775).f_C, ((rt_int)0LL), l_S_1779), r_INT_TYPE(l_S_1779));
return rv1788; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_BITS))
{
{ R26 rv1789 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1775).f_C), ((rt_int)0LL), l_S_1779), r_INT_TYPE(l_S_1779));
return rv1789; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1776))).f_KIND == g_T_STR))
{
{ R26 rv1790 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1775).f_C, r_NUM(l_S_1779), l_RND_1778), r_INT_TYPE(l_S_1779));
return rv1790; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1775).f_T));
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1791; memset(&l_T_1791, 0, sizeof l_T_1791);
l_T_1791 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1792; memset(&l_K_1792, 0, sizeof l_K_1792);
l_K_1792 = ((*(R22 *)rt_nil_check(l_T_1791))).f_KIND;
if ((l_K_1792 == g_T_BITS))
{
{ R26 rv1793 = p_V;
return rv1793; }
}
else if ((l_K_1792 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1791))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1791))).f_REPS))).f_B == NULL)))
{
{ R26 rv1794 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1791)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1791)));
return rv1794; }
}
}
{ R26 rv1795 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1791))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1791)));
return rv1795; }
}
else if ((l_K_1792 == g_T_STR))
{
{ R26 rv1796 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1796; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1792 == g_T_INT))
{
{ R26 rv1797 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1797; }
}
else if ((l_K_1792 == g_T_BOOL))
{
{ R26 rv1798 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1798; }
}
else if ((l_K_1792 == g_T_FLOAT))
{
{ R26 rv1799 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1799; }
}
else if ((l_K_1792 == g_T_STR))
{
{ R26 rv1800 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1800; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1791));
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
{ rt_int rv1801 = 0;
return rv1801; }
}
{ rt_int rv1802 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1802; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_1803; memset(&l_N_1803, 0, sizeof l_N_1803);
l_N_1803 = ((rt_int)0LL);
R27 * l_P_1804; memset(&l_P_1804, 0, sizeof l_P_1804);
l_P_1804 = p_A;
for (;;) {
if ((l_P_1804 == NULL)) goto L_end1805;
{
l_N_1803 = rt_add(l_N_1803, ((rt_int)1LL));
l_P_1804 = ((*(R27 *)rt_nil_check(l_P_1804))).f_NEXT;
}
RT_B_TICK();
} L_end1805: ;
{ rt_int rv1806 = l_N_1803;
return rv1806; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_1807; memset(&l_HEAD_1807, 0, sizeof l_HEAD_1807);
l_HEAD_1807 = NULL;
R27 * l_TAIL_1808; memset(&l_TAIL_1808, 0, sizeof l_TAIL_1808);
l_TAIL_1808 = NULL;
rt_int l_G_1809; memset(&l_G_1809, 0, sizeof l_G_1809);
l_G_1809 = ((rt_int)0LL);
{ rt_int it1811_lo = ((rt_int)0LL), it1811_hi = ((rt_int)2LL);
for (rt_int it1811 = it1811_lo; it1811 <= it1811_hi; it1811++) {
{
{
R21 * l_P_1812; memset(&l_P_1812, 0, sizeof l_P_1812);
l_P_1812 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it1811 == ((rt_int)1LL)))
{
l_P_1812 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it1811 == ((rt_int)2LL)))
{
l_P_1812 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1812 == NULL)) goto L_end1813;
{
{
R27 * l_A_1814; memset(&l_A_1814, 0, sizeof l_A_1814);
l_A_1814 = r_NODE_ARG(l_P_1812, it1811, NULL);
if ((l_TAIL_1808 == NULL))
{
l_HEAD_1807 = l_A_1814;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_1808))).f_NEXT = l_A_1814;
}
l_TAIL_1808 = l_A_1814;
}
l_P_1812 = ((*(R21 *)rt_nil_check(l_P_1812))).f_NEXT;
}
RT_B_TICK();
} L_end1813: ;
}
}
RT_B_TICK();
if (it1811 == it1811_hi) break;
} } L_end1810: ;
{ R27 * rv1815 = l_HEAD_1807;
return rv1815; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_1816; memset(&l_SAVED_1816, 0, sizeof l_SAVED_1816);
l_SAVED_1816 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1817; memset(&l_SAVED_Q_1817, 0, sizeof l_SAVED_Q_1817);
l_SAVED_Q_1817 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1818; memset(&l_V_1818, 0, sizeof l_V_1818);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1818, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1816;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1817;
{ R26 rv1819 = l_V_1818;
return rv1819; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_1820; memset(&l_ARGS_1820, 0, sizeof l_ARGS_1820);
l_ARGS_1820 = r_CALL_ARGS(p_E);
R12 * l_Y_1821; memset(&l_Y_1821, 0, sizeof l_Y_1821);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv1822 = r_START_IO_CALL(p_E);
return rv1822; }
}
l_Y_1821 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1821 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1821))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1823 = r_BUILTIN(p_E, p_WANT);
return rv1823; }
}
{ R26 rv1824 = r_CALL_SYM(l_Y_1821, l_ARGS_1820, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1824; }
}
l_Y_1821 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1820, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1821 == NULL))
{
{
R12 * l_P_1825; memset(&l_P_1825, 0, sizeof l_P_1825);
l_P_1825 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1825 == NULL)) goto L_end1826;
{
if ((((*(R12 *)rt_nil_check(l_P_1825))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1827 = r_BUILTIN(p_E, p_WANT);
return rv1827; }
}
l_P_1825 = r_LOOKUP_NEXT(l_P_1825);
}
RT_B_TICK();
} L_end1826: ;
}
{
R12 * l_B_1828; memset(&l_B_1828, 0, sizeof l_B_1828);
l_B_1828 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1828 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_1828))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv1829 = r_BUILTIN(p_E, p_WANT);
return rv1829; }
}
if (((((*(R12 *)rt_nil_check(l_B_1828))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_1828))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_1830; memset(&l_BASE_1830, 0, sizeof l_BASE_1830);
S_R10(&l_BASE_1830, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_1830).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_1831; memset(&l_N_1831, 0, sizeof l_N_1831);
l_N_1831 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_1831))).f_NAME, l_BASE_1830, 0);
{ R26 rv1832 = r_BUILTIN(l_N_1831, p_WANT);
return rv1832; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1833 = r_CALL_SYM(l_Y_1821, l_ARGS_1820, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1833; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_1834; memset(&l_S_1834, 0, sizeof l_S_1834);
l_S_1834 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1834, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1836_lo = ((rt_int)1LL), it1836_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1836 = it1836_lo; it1836 <= it1836_hi; it1836++) {
{
if (rt_b_eq(rt_b_slice(l_S_1834, it1836, it1836), rt_str("$", 1)))
{
{
R10 l_P_1837; memset(&l_P_1837, 0, sizeof l_P_1837);
S_R10(&l_P_1837, r_MKN(rt_b_slice(l_S_1834, ((rt_int)0LL), rt_sub(it1836, ((rt_int)1LL)))), 0);
R10 l_B_1838; memset(&l_B_1838, 0, sizeof l_B_1838);
S_R10(&l_B_1838, r_MKN(rt_b_slice(l_S_1834, rt_add(it1836, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_1837) || r_TEQS(l_P_1837, rt_str("INTEGER", 7))) || r_TEQS(l_P_1837, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_1837, rt_str("ENUM", 4))) || r_TEQS(l_P_1837, rt_str("ARRAY", 5))) || r_TEQS(l_P_1837, rt_str("RECORD", 6))) || r_TEQS(l_P_1837, rt_str("PTR", 3))) || r_TEQS(l_P_1837, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_1839; memset(&l_Y_1839, 0, sizeof l_Y_1839);
l_Y_1839 = r_LOOKUP(l_B_1838);
for (;;) {
if ((l_Y_1839 == NULL)) goto L_end1840;
{
if ((((*(R12 *)rt_nil_check(l_Y_1839))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv1841 = l_B_1838;
return rv1841; }
}
l_Y_1839 = r_LOOKUP_NEXT(l_Y_1839);
}
RT_B_TICK();
} L_end1840: ;
}
}
}
{ R10 rv1842 = r_NO_TEXT();
return rv1842; }
}
}
RT_B_TICK();
if (it1836 == it1836_hi) break;
} } L_end1835: ;
{ R10 rv1843 = r_NO_TEXT();
return rv1843; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_1844; memset(&l_B_1844, 0, sizeof l_B_1844);
l_B_1844 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_1845; memset(&l_S_1845, 0, sizeof l_S_1845);
l_S_1845 = rt_str_new((p_NAME).f_LEN);
rt_b_assign(&l_S_1845, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it1847_lo = ((rt_int)1LL), it1847_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1847 = it1847_lo; it1847 <= it1847_hi; it1847++) {
{
if (rt_b_eq(rt_b_slice(l_S_1845, it1847, it1847), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_1845, ((rt_int)0LL), rt_sub(it1847, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv1848 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_1845, rt_add(it1847, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv1848; }
}
goto L_end1846;
}
}
RT_B_TICK();
if (it1847 == it1847_hi) break;
} } L_end1846: ;
}
for (;;) {
if ((l_B_1844 == NULL)) goto L_end1849;
{
if (((!(((*(R20 *)rt_nil_check(l_B_1844))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_1844))).f_NAME, p_NAME)))
{
{ R12 * rv1850 = ((*(R20 *)rt_nil_check(l_B_1844))).f_R;
return rv1850; }
}
l_B_1844 = ((*(R20 *)rt_nil_check(l_B_1844))).f_NEXT;
}
RT_B_TICK();
} L_end1849: ;
{ R12 * rv1851 = NULL;
return rv1851; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1852 = 0;
return rv1852; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1853 = 0;
return rv1853; }
}
}
}
{ rt_int rv1854 = 1;
return rv1854; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_1855; memset(&l_Y_1855, 0, sizeof l_Y_1855);
l_Y_1855 = r_LOOKUP(p_NAME);
R12 * l_BEST_1856; memset(&l_BEST_1856, 0, sizeof l_BEST_1856);
l_BEST_1856 = NULL;
rt_int l_BEST_SCORE_1857; memset(&l_BEST_SCORE_1857, 0, sizeof l_BEST_SCORE_1857);
l_BEST_SCORE_1857 = ((rt_int)0LL);
rt_int l_TIES_1858; memset(&l_TIES_1858, 0, sizeof l_TIES_1858);
l_TIES_1858 = ((rt_int)0LL);
rt_int l_COUNT_1859; memset(&l_COUNT_1859, 0, sizeof l_COUNT_1859);
l_COUNT_1859 = ((rt_int)0LL);
rt_int l_N_1860; memset(&l_N_1860, 0, sizeof l_N_1860);
l_N_1860 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1855 == NULL)) goto L_end1861;
{
if ((!r_IS_ROUTINE(l_Y_1855)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_1855))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1861;
}
}
else if (r_CANDIDATE(l_Y_1855, p_NAME))
{
{
R12 * l_R_1862; memset(&l_R_1862, 0, sizeof l_R_1862);
l_R_1862 = r_ORIGINAL(l_Y_1855);
rt_int l_SCORE_1863; memset(&l_SCORE_1863, 0, sizeof l_SCORE_1863);
r_ROUTINE_HEADER(l_R_1862);
if ((((r_PARAM_COUNT(l_R_1862) == l_N_1860) && (!r_SEEN_ROUTINE(l_R_1862, p_NAME, l_Y_1855))) && (!r_HIDDEN_ROUTINE(l_R_1862, p_NAME, l_Y_1855))))
{
l_COUNT_1859 = rt_add(l_COUNT_1859, ((rt_int)1LL));
l_SCORE_1863 = r_MATCH_SCORE(l_R_1862, p_ARGS);
if ((l_SCORE_1863 > l_BEST_SCORE_1857))
{
l_BEST_1856 = l_R_1862;
l_BEST_SCORE_1857 = l_SCORE_1863;
l_TIES_1858 = ((rt_int)0LL);
}
else if (((l_SCORE_1863 == l_BEST_SCORE_1857) && (l_SCORE_1863 > ((rt_int)0LL))))
{
l_TIES_1858 = rt_add(l_TIES_1858, ((rt_int)1LL));
}
}
}
}
l_Y_1855 = r_LOOKUP_NEXT(l_Y_1855);
}
RT_B_TICK();
} L_end1861: ;
if (((l_TIES_1858 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv1864 = l_BEST_1856;
return rv1864; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1865; memset(&l_Y_1865, 0, sizeof l_Y_1865);
l_Y_1865 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1865 == p_STOP) || (l_Y_1865 == NULL))) goto L_end1866;
{
if ((((*(R12 *)rt_nil_check(l_Y_1865))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1865) == p_R))
{
{ rt_int rv1867 = 1;
return rv1867; }
}
}
l_Y_1865 = r_LOOKUP_NEXT(l_Y_1865);
}
RT_B_TICK();
} L_end1866: ;
{ rt_int rv1868 = 0;
return rv1868; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_1869; memset(&l_Y_1869, 0, sizeof l_Y_1869);
l_Y_1869 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1869 == p_STOP) || (l_Y_1869 == NULL))) goto L_end1870;
{
if (((((*(R12 *)rt_nil_check(l_Y_1869))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_1869))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_1871; memset(&l_O_1871, 0, sizeof l_O_1871);
l_O_1871 = r_ORIGINAL(l_Y_1869);
if ((!(l_O_1871 == p_R)))
{
r_ROUTINE_HEADER(l_O_1871);
if (r_SAME_SIGNATURE(l_O_1871, p_R))
{
{ rt_int rv1872 = 1;
return rv1872; }
}
}
}
}
l_Y_1869 = r_LOOKUP_NEXT(l_Y_1869);
}
RT_B_TICK();
} L_end1870: ;
{ rt_int rv1873 = 0;
return rv1873; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_1874; memset(&l_P_1874, 0, sizeof l_P_1874);
l_P_1874 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_1875; memset(&l_Q_1875, 0, sizeof l_Q_1875);
l_Q_1875 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv1876 = 0;
return rv1876; }
}
for (;;) {
if (((l_P_1874 == NULL) || (l_Q_1875 == NULL))) goto L_end1877;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1874))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_1875))).f_MODE)))
{
{ rt_int rv1878 = 0;
return rv1878; }
}
if (((((*(R28 *)rt_nil_check(l_P_1874))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_1875))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_1874))).f_T == ((*(R28 *)rt_nil_check(l_Q_1875))).f_T)))
{
{ rt_int rv1879 = 0;
return rv1879; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_1874))).f_T, ((*(R28 *)rt_nil_check(l_Q_1875))).f_T)))
{
{ rt_int rv1880 = 0;
return rv1880; }
}
l_P_1874 = ((*(R28 *)rt_nil_check(l_P_1874))).f_NEXT;
l_Q_1875 = ((*(R28 *)rt_nil_check(l_Q_1875))).f_NEXT;
}
RT_B_TICK();
} L_end1877: ;
{ rt_int rv1881 = ((l_P_1874 == NULL) && (l_Q_1875 == NULL));
return rv1881; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_1882; memset(&l_N_1882, 0, sizeof l_N_1882);
l_N_1882 = ((rt_int)0LL);
R28 * l_P_1883; memset(&l_P_1883, 0, sizeof l_P_1883);
l_P_1883 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1883 == NULL)) goto L_end1884;
{
l_N_1882 = rt_add(l_N_1882, ((rt_int)1LL));
l_P_1883 = ((*(R28 *)rt_nil_check(l_P_1883))).f_NEXT;
}
RT_B_TICK();
} L_end1884: ;
{ rt_int rv1885 = l_N_1882;
return rv1885; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_1886; memset(&l_P_1886, 0, sizeof l_P_1886);
l_P_1886 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_1887; memset(&l_A_1887, 0, sizeof l_A_1887);
l_A_1887 = p_ARGS;
rt_int l_EXACT_1888; memset(&l_EXACT_1888, 0, sizeof l_EXACT_1888);
l_EXACT_1888 = 1;
R20 * l_BS_1889; memset(&l_BS_1889, 0, sizeof l_BS_1889);
l_BS_1889 = r_NEW_BINDS();
R22 * l_PT_1890; memset(&l_PT_1890, 0, sizeof l_PT_1890);
for (;;) {
if ((l_P_1886 == NULL)) goto L_end1891;
{
l_PT_1890 = r_FORMAL_VIEW(p_R, l_P_1886);
if ((!(((*(R28 *)rt_nil_check(l_P_1886))).f_MODE == ((*(R27 *)rt_nil_check(l_A_1887))).f_MODE)))
{
{ rt_int rv1892 = ((rt_int)0LL);
return rv1892; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_1886))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1886, l_A_1887, l_BS_1889)))
{
{ rt_int rv1893 = ((rt_int)0LL);
return rv1893; }
}
}
else if ((l_PT_1890 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_1887))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_1887))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv1894 = ((rt_int)0LL);
return rv1894; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_1887))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_1887))).f_E, l_PT_1890)))
{
{ rt_int rv1895 = ((rt_int)0LL);
return rv1895; }
}
}
else
{
r_TYPE_ARG(l_A_1887);
{
R22 * l_AT_1896; memset(&l_AT_1896, 0, sizeof l_AT_1896);
l_AT_1896 = (((*(R27 *)rt_nil_check(l_A_1887))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_1890, l_AT_1896) || (((((*(R22 *)rt_nil_check(l_AT_1896))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1890)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1897 = ((rt_int)0LL);
return rv1897; }
}
if ((!r_SAME_TYPE(l_PT_1890, l_AT_1896)))
{
if ((((*(R28 *)rt_nil_check(l_P_1886))).f_MODE == g_M_INOUT))
{
{ rt_int rv1898 = ((rt_int)0LL);
return rv1898; }
}
l_EXACT_1888 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1896)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1890)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_1886))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_1896))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_1890))).f_SCALE)))
{
{ rt_int rv1899 = ((rt_int)0LL);
return rv1899; }
}
else if (((((*(R28 *)rt_nil_check(l_P_1886))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_1890))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_1896))).f_SCALE)))
{
{ rt_int rv1900 = ((rt_int)0LL);
return rv1900; }
}
}
}
}
l_P_1886 = ((*(R28 *)rt_nil_check(l_P_1886))).f_NEXT;
l_A_1887 = ((*(R27 *)rt_nil_check(l_A_1887))).f_NEXT;
}
RT_B_TICK();
} L_end1891: ;
if (l_EXACT_1888)
{
{ rt_int rv1901 = ((rt_int)2LL);
return rv1901; }
}
{ rt_int rv1902 = ((rt_int)1LL);
return rv1902; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1903; memset(&l_RT_1903, 0, sizeof l_RT_1903);
l_RT_1903 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_ENUM))
{
{ rt_int rv1904 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_1903) == NULL));
return rv1904; }
}
{ rt_int rv1905 = 0;
return rv1905; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1906 = (((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_PTR);
return rv1906; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1907 = (((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_REC);
return rv1907; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1908 = (((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_ARR);
return rv1908; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1909 = (((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_INT);
return rv1909; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1910 = ((((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_1903))).f_KIND == g_T_SEM));
return rv1910; }
}
{ rt_int rv1911 = 0;
return rv1911; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1912; memset(&l_Y_1912, 0, sizeof l_Y_1912);
l_Y_1912 = r_ORIGINAL(p_Y0);
R28 * l_P_1913; memset(&l_P_1913, 0, sizeof l_P_1913);
R27 * l_A_1914; memset(&l_A_1914, 0, sizeof l_A_1914);
l_A_1914 = p_ARGS;
R10 l_C_1915; memset(&l_C_1915, 0, sizeof l_C_1915);
S_R10(&l_C_1915, r_MK(rt_str("", 0)), 0);
R10 l_SEP_1916; memset(&l_SEP_1916, 0, sizeof l_SEP_1916);
S_R10(&l_SEP_1916, r_MK(rt_str("", 0)), 0);
R10 l_PRE_1917; memset(&l_PRE_1917, 0, sizeof l_PRE_1917);
S_R10(&l_PRE_1917, r_MK(rt_str("", 0)), 0);
R10 l_POST_1918; memset(&l_POST_1918, 0, sizeof l_POST_1918);
S_R10(&l_POST_1918, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_1919; memset(&l_SHARED_1919, 0, sizeof l_SHARED_1919);
l_SHARED_1919 = 0;
R22 * l_PT_1920; memset(&l_PT_1920, 0, sizeof l_PT_1920);
if (((*(R12 *)rt_nil_check(l_Y_1912))).f_GENERIC)
{
l_Y_1912 = r_INSTANCE(l_Y_1912, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1912, p_LINE);
if ((((*(R12 *)rt_nil_check(l_Y_1912))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_1915, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_1912))).f_LEVEL), 0);
S_R10(&l_SEP_1916, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_1921; memset(&l_Q_1921, 0, sizeof l_Q_1921);
l_Q_1921 = p_ARGS;
for (;;) {
if ((l_Q_1921 == NULL)) goto L_end1922;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_1921))).f_MODE == g_M_IN)))
{
l_SHARED_1919 = 1;
}
l_Q_1921 = ((*(R27 *)rt_nil_check(l_Q_1921))).f_NEXT;
}
RT_B_TICK();
} L_end1922: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_1912))).f_USES == NULL)))
{
l_SHARED_1919 = 1;
}
}
l_P_1913 = ((*(R12 *)rt_nil_check(l_Y_1912))).f_PARAMS;
for (;;) {
if ((l_P_1913 == NULL)) goto L_end1923;
{
if ((l_A_1914 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_1920 = r_FORMAL_VIEW(l_Y_1912, l_P_1913);
if ((l_PT_1920 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_1920)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_1924; memset(&l_V_1924, 0, sizeof l_V_1924);
R10 l_CV_1925; memset(&l_CV_1925, 0, sizeof l_CV_1925);
if ((((*(R27 *)rt_nil_check(l_A_1914))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1914))))
{
S_R26(&l_V_1924, ((*(R27 *)rt_nil_check(l_A_1914))).f_V, 0);
}
else
{
S_R26(&l_V_1924, r_EXPR(((*(R27 *)rt_nil_check(l_A_1914))).f_E, l_PT_1920), 0);
}
S_R10(&l_CV_1925, r_CONVERT(l_V_1924, l_PT_1920, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_1919 && (l_V_1924).f_LVAL) && r_IS_STRUCTURED(l_PT_1920)))
{
S_R10(&l_CV_1925, r_COPY_OF(l_PT_1920, l_CV_1925), 0);
}
S_R10(&l_C_1915, r_FMT3(rt_str("@@@", 3), l_C_1915, l_SEP_1916, l_CV_1925), 0);
S_R10(&l_SEP_1916, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_1926; memset(&l_V_1926, 0, sizeof l_V_1926);
if (((*(R27 *)rt_nil_check(l_A_1914))).f_HAVE)
{
S_R26(&l_V_1926, ((*(R27 *)rt_nil_check(l_A_1914))).f_V, 0);
}
else
{
S_R26(&l_V_1926, r_EXPR(((*(R27 *)rt_nil_check(l_A_1914))).f_E, l_PT_1920), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_1914))).f_E == NULL)) && (!(l_V_1926).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1914))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_1914))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_1926, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_1926).f_C), (l_V_1926).f_T), 0);
(l_V_1926).f_LVAL = 1;
}
}
if ((!(l_V_1926).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_1920, (l_V_1926).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_1920));
}
if (((((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_1920, (l_V_1926).f_T) && r_SAME_RANGE(l_PT_1920, (l_V_1926).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_1913))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_1920, (l_V_1926).f_T) && r_SAME_RANGE(l_PT_1920, (l_V_1926).f_T))))))
{
{
R10 l_TMP_1927; memset(&l_TMP_1927, 0, sizeof l_TMP_1927);
S_R10(&l_TMP_1927, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_1928; memset(&l_AP_1928, 0, sizeof l_AP_1928);
S_R10(&l_AP_1928, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_1917, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_1917, r_CTYPE((l_V_1926).f_T), l_AP_1928, (l_V_1926).f_C), 0);
S_R10(&l_PRE_1917, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_1917, r_CTYPE(l_PT_1920), l_TMP_1927, r_COPY_OF((l_V_1926).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1928))), 0);
S_R10(&l_POST_1918, r_FMT2(rt_str("@ @", 3), l_POST_1918, r_STORE_CODE((l_V_1926).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_1928), r_MKET(l_TMP_1927, l_PT_1920), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_1915, r_FMT3(rt_str("@@&@", 4), l_C_1915, l_SEP_1916, l_TMP_1927), 0);
}
}
else
{
S_R10(&l_C_1915, r_FMT3(rt_str("@@&@", 4), l_C_1915, l_SEP_1916, (l_V_1926).f_C), 0);
}
S_R10(&l_SEP_1916, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1914 = ((*(R27 *)rt_nil_check(l_A_1914))).f_NEXT;
l_P_1913 = ((*(R28 *)rt_nil_check(l_P_1913))).f_NEXT;
}
RT_B_TICK();
} L_end1923: ;
if ((!(l_A_1914 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_1917).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1929 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_1917, ((*(R12 *)rt_nil_check(l_Y_1912))).f_ACCESS, l_C_1915, l_POST_1918), r_RESULT_VIEW(l_Y_1912));
return rv1929; }
}
{ R26 rv1930 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_1912))).f_ACCESS, l_C_1915), r_RESULT_VIEW(l_Y_1912));
return rv1930; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv1931 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv1931; }
}
{ R22 * rv1932 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv1932; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv1933 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1933; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv1934 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv1934; }
}
{ R22 * rv1935 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv1935; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv1936 = p_T;
return rv1936; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv1937 = p_T;
return rv1937; }
}
{
R12 * l_M_1938; memset(&l_M_1938, 0, sizeof l_M_1938);
l_M_1938 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_1938 == NULL)) goto L_end1939;
{
{
R12 * l_Y_1940; memset(&l_Y_1940, 0, sizeof l_Y_1940);
l_Y_1940 = r_MEMBER_TYPE(l_M_1938, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_1940 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_1940))).f_EXPORTED)
{
{ R22 * rv1941 = r_ABSTRACT_VIEW(l_Y_1940, p_T);
return rv1941; }
}
{ R22 * rv1942 = p_T;
return rv1942; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_1938))).f_MODL))
{
goto L_end1939;
}
l_M_1938 = ((*(R12 *)rt_nil_check(l_M_1938))).f_MODL;
}
RT_B_TICK();
} L_end1939: ;
}
{ R22 * rv1943 = p_T;
return rv1943; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1944; memset(&l_Y_1944, 0, sizeof l_Y_1944);
l_Y_1944 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_1945; memset(&l_Z_1945, 0, sizeof l_Z_1945);
l_Z_1945 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_1945 == NULL)) goto L_end1946;
{
if ((((((*(R12 *)rt_nil_check(l_Z_1945))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_1945))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_1945))).f_ORIG == NULL)))
{
{ R12 * rv1947 = l_Z_1945;
return rv1947; }
}
l_Z_1945 = r_LOOKUP_NEXT(l_Z_1945);
}
RT_B_TICK();
} L_end1946: ;
}
{ R12 * rv1948 = NULL;
return rv1948; }
}
for (;;) {
if ((l_Y_1944 == NULL)) goto L_end1949;
{
if (((((*(R12 *)rt_nil_check(l_Y_1944))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_1944))).f_NAME, p_NAME)))
{
{ R12 * rv1950 = l_Y_1944;
return rv1950; }
}
l_Y_1944 = ((*(R12 *)rt_nil_check(l_Y_1944))).f_SNEXT;
}
RT_B_TICK();
} L_end1949: ;
{ R12 * rv1951 = NULL;
return rv1951; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1952; memset(&l_K_1952, 0, sizeof l_K_1952);
l_K_1952 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv1953 = ((((l_K_1952 == g_T_STR) || (l_K_1952 == g_T_BITS)) || (l_K_1952 == g_T_ARR)) || (l_K_1952 == g_T_REC));
return rv1953; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1954; memset(&l_RA_1954, 0, sizeof l_RA_1954);
l_RA_1954 = r_REAL_TYPE(p_A);
R22 * l_RB_1955; memset(&l_RB_1955, 0, sizeof l_RB_1955);
l_RB_1955 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_1954)))
{
{ rt_int rv1956 = 1;
return rv1956; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1954))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_1954))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1955))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_1955))).f_HI_C)))
{
{ rt_int rv1957 = 1;
return rv1957; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_1954))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_1955))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv1958 = ((((*(R22 *)rt_nil_check(l_RA_1954))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_1955))).f_LO_C).f_LEN);
return rv1958; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_1954))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_1955))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_1954))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_1955))).f_MHI).f_OK))
{
{ rt_int rv1959 = (((((*(R22 *)rt_nil_check(l_RA_1954))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_1955))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_1954))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_1955))).f_MHI).f_V));
return rv1959; }
}
{ rt_int rv1960 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_1954))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_1955))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_1954))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_1955))).f_HI_C));
return rv1960; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv1961 = 0;
return rv1961; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1962 = 1;
return rv1962; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1963 = 1;
return rv1963; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1964 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv1964; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1965 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1965; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1966 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv1966; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1967 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1967; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1968 = 0;
return rv1968; }
}
{
R12 * l_Y_1969; memset(&l_Y_1969, 0, sizeof l_Y_1969);
l_Y_1969 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_1970; memset(&l_A_1970, 0, sizeof l_A_1970);
l_A_1970 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1971; memset(&l_F_1971, 0, sizeof l_F_1971);
if ((l_Y_1969 == NULL))
{
{ rt_int rv1972 = 0;
return rv1972; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1969))).f_KIND == g_Y_GEN))
{
{ rt_int rv1973 = 1;
return rv1973; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1969))).f_DECL == NULL))
{
{ rt_int rv1974 = 0;
return rv1974; }
}
l_F_1971 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1969))).f_DECL))).f_A;
for (;;) {
if ((l_F_1971 == NULL)) goto L_end1975;
{
{
R21 * l_N_1976; memset(&l_N_1976, 0, sizeof l_N_1976);
l_N_1976 = ((*(R21 *)rt_nil_check(l_F_1971))).f_A;
for (;;) {
if ((l_N_1976 == NULL)) goto L_end1977;
{
if ((l_A_1970 == NULL))
{
{ rt_int rv1978 = 0;
return rv1978; }
}
if (((((*(R21 *)rt_nil_check(l_F_1971))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_1970))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_1970))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1970)))))
{
{ rt_int rv1979 = 1;
return rv1979; }
}
l_A_1970 = ((*(R21 *)rt_nil_check(l_A_1970))).f_NEXT;
l_N_1976 = ((*(R21 *)rt_nil_check(l_N_1976))).f_NEXT;
}
RT_B_TICK();
} L_end1977: ;
}
l_F_1971 = ((*(R21 *)rt_nil_check(l_F_1971))).f_NEXT;
}
RT_B_TICK();
} L_end1975: ;
}
}
{ rt_int rv1980 = 0;
return rv1980; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_1981; memset(&l_P_1981, 0, sizeof l_P_1981);
l_P_1981 = p_A;
for (;;) {
if ((l_P_1981 == NULL)) goto L_end1982;
{
if (((((*(R21 *)rt_nil_check(l_P_1981))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_1981))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1983 = 1;
return rv1983; }
}
l_P_1981 = ((*(R21 *)rt_nil_check(l_P_1981))).f_NEXT;
}
RT_B_TICK();
} L_end1982: ;
{ rt_int rv1984 = 0;
return rv1984; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_1985; memset(&l_ENTERED_1985, 0, sizeof l_ENTERED_1985);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_1985 = r_ENTER_MODULE_FOR(p_Y);
r_ROUTINE_HEADER1(p_Y);
if (l_ENTERED_1985)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1986; memset(&l_R_1986, 0, sizeof l_R_1986);
l_R_1986 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_1987; memset(&l_P_1987, 0, sizeof l_P_1987);
R28 * l_TAIL_1988; memset(&l_TAIL_1988, 0, sizeof l_TAIL_1988);
l_TAIL_1988 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1987 = ((*(R21 *)rt_nil_check(l_R_1986))).f_A;
for (;;) {
if ((l_P_1987 == NULL)) goto L_end1989;
{
if (((((*(R21 *)rt_nil_check(l_P_1987))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_1987))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1987 = ((*(R21 *)rt_nil_check(l_P_1987))).f_NEXT;
}
RT_B_TICK();
} L_end1989: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_1986))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1987 = ((*(R21 *)rt_nil_check(l_R_1986))).f_A;
for (;;) {
if ((l_P_1987 == NULL)) goto L_end1990;
{
{
R28 * l_PM_1991; memset(&l_PM_1991, 0, sizeof l_PM_1991);
l_PM_1991 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_1991)), ({ R28 rc1992; memset(&rc1992, 0, sizeof rc1992);  S_R10(&rc1992.f_NAME, ((*(R21 *)rt_nil_check(l_P_1987))).f_NAME, 0); rc1992.f_MODE = ((*(R21 *)rt_nil_check(l_P_1987))).f_IV; rc1992.f_T = NULL; rc1992.f_TS = ((*(R21 *)rt_nil_check(l_P_1987))).f_B; rc1992.f_NEXT = NULL; rc1992; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_1986))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_1987))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1987))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_1991))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_1987))).f_B);
}
if ((l_TAIL_1988 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1991;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_1988))).f_NEXT = l_PM_1991;
}
l_TAIL_1988 = l_PM_1991;
}
l_P_1987 = ((*(R21 *)rt_nil_check(l_P_1987))).f_NEXT;
}
RT_B_TICK();
} L_end1990: ;
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_1993; memset(&l_R_1993, 0, sizeof l_R_1993);
l_R_1993 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_1994; memset(&l_T_1994, 0, sizeof l_T_1994);
if ((((*(R21 *)rt_nil_check(l_R_1993))).f_B == NULL))
{
{ R22 * rv1995 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1995; }
}
r_OPEN_SCOPE();
{
R28 * l_P_1996; memset(&l_P_1996, 0, sizeof l_P_1996);
l_P_1996 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1996 == NULL)) goto L_end1997;
{
if ((!(((*(R28 *)rt_nil_check(l_P_1996))).f_T == NULL)))
{
{
R12 * l_V_1998; memset(&l_V_1998, 0, sizeof l_V_1998);
l_V_1998 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_1996))).f_NAME);
((*(R12 *)rt_nil_check(l_V_1998))).f_T = ((*(R28 *)rt_nil_check(l_P_1996))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_1998))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_1996))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_1998))).f_INPUT = 1;
r_DEFINE(l_V_1998, ((*(R21 *)rt_nil_check(l_R_1993))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_1996))).f_T, ((*(R12 *)rt_nil_check(l_V_1998))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_1993))).f_LINE, 0);
}
}
l_P_1996 = ((*(R28 *)rt_nil_check(l_P_1996))).f_NEXT;
}
RT_B_TICK();
} L_end1997: ;
}
l_T_1994 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_1993))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv1999 = l_T_1994;
return rv1999; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2000; memset(&l_PS_2000, 0, sizeof l_PS_2000);
S_R10(&l_PS_2000, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2001; memset(&l_SEP_2001, 0, sizeof l_SEP_2001);
S_R10(&l_SEP_2001, r_MK(rt_str("", 0)), 0);
R28 * l_P_2002; memset(&l_P_2002, 0, sizeof l_P_2002);
l_P_2002 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2000, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2001, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2002 == NULL)) goto L_end2003;
{
if ((((*(R28 *)rt_nil_check(l_P_2002))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2002))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2002))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2000, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2000, l_SEP_2001, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2002))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2002))).f_NAME)), 0);
S_R10(&l_SEP_2001, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2000, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2000, l_SEP_2001, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2002))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2002))).f_NAME)), 0);
S_R10(&l_SEP_2001, r_MK(rt_str(", ", 2)), 0);
}
l_P_2002 = ((*(R28 *)rt_nil_check(l_P_2002))).f_NEXT;
}
RT_B_TICK();
} L_end2003: ;
if (((l_PS_2000).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2000, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2004 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2000);
return rv2004; }
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
R25 * l_B_2005; memset(&l_B_2005, 0, sizeof l_B_2005);
l_B_2005 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2006; memset(&l_I_2006, 0, sizeof l_I_2006);
l_I_2006 = ((rt_int)0LL);
for (;;) {
if ((l_B_2005 == NULL)) goto L_end2007;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2005))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2005))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2006)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2005))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2005))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2005))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2005))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2006)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2005))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2006), p_PC, r_NUM(l_I_2006)), ((*(R25 *)rt_nil_check(l_B_2005))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2006 = rt_add(l_I_2006, ((rt_int)1LL));
l_B_2005 = ((*(R25 *)rt_nil_check(l_B_2005))).f_NEXT;
}
RT_B_TICK();
} L_end2007: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2008; memset(&l_U_2008, 0, sizeof l_U_2008);
l_U_2008 = r_REAL_TYPE(p_T);
R24 * l_F_2009; memset(&l_F_2009, 0, sizeof l_F_2009);
l_F_2009 = ((*(R22 *)rt_nil_check(l_U_2008))).f_FIELDS;
R25 * l_A_2010; memset(&l_A_2010, 0, sizeof l_A_2010);
l_A_2010 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2009 == NULL) || (l_A_2010 == NULL))) goto L_end2011;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2009))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2010))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2010))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2009))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2010 = ((*(R25 *)rt_nil_check(l_A_2010))).f_NEXT;
}
l_F_2009 = ((*(R24 *)rt_nil_check(l_F_2009))).f_NEXT;
}
RT_B_TICK();
} L_end2011: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2012 = 0;
return rv2012; }
}
{ rt_int rv2013 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2013; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2014 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2014; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2015; memset(&l_OLD_2015, 0, sizeof l_OLD_2015);
l_OLD_2015 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2015 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2015))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2015))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2015))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2016; memset(&l_G_2016, 0, sizeof l_G_2016);
l_G_2016 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2016))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2016))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2016))).f_INPUT = 1;
r_DEFINE(l_G_2016, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2017; memset(&l_B_2017, 0, sizeof l_B_2017);
l_B_2017 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2017)), ({ R20 rc2018; memset(&rc2018, 0, sizeof rc2018);  S_R10(&rc2018.f_NAME, r_NO_TEXT(), 0); rc2018.f_T = NULL; S_R10(&rc2018.f_C, r_NO_TEXT(), 0); rc2018.f_HASMV = 0; rc2018.f_MV = ((rt_int)0LL); rc2018.f_R = NULL; rc2018.f_NEXT = NULL; rc2018; }), 0);
{ R20 * rv2019 = l_B_2017;
return rv2019; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2020; memset(&l_B_2020, 0, sizeof l_B_2020);
l_B_2020 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2020)), ({ R20 rc2021; memset(&rc2021, 0, sizeof rc2021);  S_R10(&rc2021.f_NAME, p_NAME, 0); rc2021.f_T = p_T; S_R10(&rc2021.f_C, r_NO_TEXT(), 0); rc2021.f_HASMV = (p_M).f_OK; rc2021.f_MV = (p_M).f_V; rc2021.f_R = p_R; rc2021.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2021; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2020))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2020;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2022; memset(&l_B_2022, 0, sizeof l_B_2022);
l_B_2022 = p_BS;
for (;;) {
if ((l_B_2022 == NULL)) goto L_end2023;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2022))).f_NAME, p_NAME))
{
{ R20 * rv2024 = l_B_2022;
return rv2024; }
}
l_B_2022 = ((*(R20 *)rt_nil_check(l_B_2022))).f_NEXT;
}
RT_B_TICK();
} L_end2023: ;
{ R20 * rv2025 = NULL;
return rv2025; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2026; memset(&l_RT_2026, 0, sizeof l_RT_2026);
l_RT_2026 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2027 = 1;
return rv2027; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2028 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2028; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2029 = 1;
return rv2029; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2030 = 1;
return rv2030; }
}
{
R20 * l_B_2031; memset(&l_B_2031, 0, sizeof l_B_2031);
l_B_2031 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2031 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2031))).f_T == NULL))
{
{ rt_int rv2032 = 0;
return rv2032; }
}
{ rt_int rv2033 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2031))).f_T, p_T);
return rv2033; }
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
{ rt_int rv2034 = 1;
return rv2034; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_ARR)))
{
{ rt_int rv2035 = 0;
return rv2035; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2026))).f_DIMS)))
{
{ rt_int rv2036 = 0;
return rv2036; }
}
{ rt_int rv2037 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2026))).f_ELEM, p_BS);
return rv2037; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2038 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2038; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2039 = 0;
return rv2039; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2026))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2026))).f_MHI, p_BS))))
{
{ rt_int rv2040 = 0;
return rv2040; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_INT)))
{
{ rt_int rv2041 = 0;
return rv2041; }
}
{ rt_int rv2042 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2026))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2042; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2043 = ((((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2026))).f_SCALE == ((rt_int)0LL)));
return rv2043; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2044 = 0;
return rv2044; }
}
{ rt_int rv2045 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2026))).f_SCALE), p_BS);
return rv2045; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2046 = (((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_BOOL);
return rv2046; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2047 = (((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_STR);
return rv2047; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_STR)))
{
{ rt_int rv2048 = 0;
return rv2048; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2049 = 1;
return rv2049; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_BASE == NULL)))
{
{ rt_int rv2050 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2026))).f_BASE, p_BS);
return rv2050; }
}
{ rt_int rv2051 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2051; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2052 = (((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_BITS);
return rv2052; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2053 = (((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_SEM);
return rv2053; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_PTR)))
{
{ rt_int rv2054 = 0;
return rv2054; }
}
{ rt_int rv2055 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2026), p_BS);
return rv2055; }
}
{
R12 * l_Y_2056; memset(&l_Y_2056, 0, sizeof l_Y_2056);
l_Y_2056 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2056 == NULL))
{
{ rt_int rv2057 = 0;
return rv2057; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2056))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2056))).f_DECL == NULL)))
{
{ rt_int rv2058 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2056))).f_T, p_T);
return rv2058; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2056))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2059 = 0;
return rv2059; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2056))))
{
{ rt_int rv2060 = 0;
return rv2060; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2056))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2026))).f_KIND == g_T_REC)))
{
{ rt_int rv2061 = 0;
return rv2061; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2026))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2062 = 0;
return rv2062; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2026))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2056))))
{
{ rt_int rv2063 = 0;
return rv2063; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2064 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2064; }
}
{ rt_int rv2065 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2056))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2056))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2026, p_BS);
return rv2065; }
}
{
R21 * l_F_2066; memset(&l_F_2066, 0, sizeof l_F_2066);
l_F_2066 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2056))).f_DECL))).f_A;
R21 * l_A_2067; memset(&l_A_2067, 0, sizeof l_A_2067);
l_A_2067 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2068; memset(&l_V_2068, 0, sizeof l_V_2068);
l_V_2068 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2069; memset(&l_CLASS_2069, 0, sizeof l_CLASS_2069);
l_CLASS_2069 = r_RECORD_CLASS_OF(l_RT_2026);
for (;;) {
if ((l_F_2066 == NULL)) goto L_end2070;
{
{
R21 * l_N_2071; memset(&l_N_2071, 0, sizeof l_N_2071);
l_N_2071 = ((*(R21 *)rt_nil_check(l_F_2066))).f_A;
for (;;) {
if ((l_N_2071 == NULL)) goto L_end2072;
{
if ((l_A_2067 == NULL))
{
{ rt_int rv2073 = 0;
return rv2073; }
}
if ((((*(R21 *)rt_nil_check(l_F_2066))).f_B == NULL))
{
if ((!(l_CLASS_2069 == NULL)))
{
{
R20 * l_B_2074; memset(&l_B_2074, 0, sizeof l_B_2074);
l_B_2074 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2069))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2071))).f_NAME);
if ((!(l_B_2074 == NULL)))
{
if ((!r_UNIFY(l_A_2067, ((*(R20 *)rt_nil_check(l_B_2074))).f_T, p_BS)))
{
{ rt_int rv2075 = 0;
return rv2075; }
}
}
}
}
}
else
{
if ((!(l_V_2068 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2067))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2067))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2067))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2076; memset(&l_M_2076, 0, sizeof l_M_2076);
S_R23(&l_M_2076, r_MANIFEST(l_A_2067), 0);
if (((l_M_2076).f_OK && (((*(R25 *)rt_nil_check(l_V_2068))).f_MLO).f_OK))
{
if ((!((l_M_2076).f_V == (((*(R25 *)rt_nil_check(l_V_2068))).f_MLO).f_V)))
{
{ rt_int rv2077 = 0;
return rv2077; }
}
}
}
}
l_V_2068 = ((*(R25 *)rt_nil_check(l_V_2068))).f_NEXT;
}
}
l_A_2067 = ((*(R21 *)rt_nil_check(l_A_2067))).f_NEXT;
l_N_2071 = ((*(R21 *)rt_nil_check(l_N_2071))).f_NEXT;
}
RT_B_TICK();
} L_end2072: ;
}
l_F_2066 = ((*(R21 *)rt_nil_check(l_F_2066))).f_NEXT;
}
RT_B_TICK();
} L_end2070: ;
}
{ rt_int rv2078 = 1;
return rv2078; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2079; memset(&l_R_2079, 0, sizeof l_R_2079);
l_R_2079 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2080 = NULL;
return rv2080; }
}
for (;;) {
if ((l_R_2079 == NULL)) goto L_end2081;
{
if ((((*(R12 *)rt_nil_check(l_R_2079))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2082 = l_R_2079;
return rv2082; }
}
l_R_2079 = ((*(R12 *)rt_nil_check(l_R_2079))).f_INSTANCES;
}
RT_B_TICK();
} L_end2081: ;
{ R12 * rv2083 = NULL;
return rv2083; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2084 = 1;
return rv2084; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2085 = 1;
return rv2085; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2086 = 1;
return rv2086; }
}
{
R20 * l_B_2087; memset(&l_B_2087, 0, sizeof l_B_2087);
l_B_2087 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2087 == NULL)))
{
{ rt_int rv2088 = ((((*(R20 *)rt_nil_check(l_B_2087))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2087))).f_MV == (p_M).f_V));
return rv2088; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2089 = 0;
return rv2089; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2090 = 1;
return rv2090; }
}
{
R23 l_V_2091; memset(&l_V_2091, 0, sizeof l_V_2091);
S_R23(&l_V_2091, r_MANIFEST(p_A), 0);
if (((l_V_2091).f_OK && (p_M).f_OK))
{
{ rt_int rv2092 = ((l_V_2091).f_V == (p_M).f_V);
return rv2092; }
}
}
{ rt_int rv2093 = 1;
return rv2093; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2094 = 0;
return rv2094; }
}
{ rt_int rv2095 = (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv2095; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2096 = 1;
return rv2096; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2097 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2097; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2098; memset(&l_BS_2098, 0, sizeof l_BS_2098);
l_BS_2098 = r_NEW_BINDS();
R28 * l_P_2099; memset(&l_P_2099, 0, sizeof l_P_2099);
l_P_2099 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2100; memset(&l_A_2100, 0, sizeof l_A_2100);
l_A_2100 = p_ARGS;
for (;;) {
if ((l_P_2099 == NULL)) goto L_end2101;
{
if ((((*(R28 *)rt_nil_check(l_P_2099))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2100))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2099))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2100))).f_E), r_NO_MVAL(), NULL, l_BS_2098);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2099))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2099))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2099))).f_TS, ((*(R27 *)rt_nil_check(l_A_2100))).f_E, p_LINE), l_BS_2098);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2100))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2100))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2099))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2100))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2100))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2100))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2100))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2100))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2099))).f_TS, (((*(R27 *)rt_nil_check(l_A_2100))).f_V).f_T, l_BS_2098)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2099))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2099))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2099))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2099))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2100))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2098);
}
}
l_P_2099 = ((*(R28 *)rt_nil_check(l_P_2099))).f_NEXT;
l_A_2100 = ((*(R27 *)rt_nil_check(l_A_2100))).f_NEXT;
}
RT_B_TICK();
} L_end2101: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2098);
{
R12 * l_I_2102; memset(&l_I_2102, 0, sizeof l_I_2102);
l_I_2102 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2102 == NULL)) goto L_end2103;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2102))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2098))).f_NEXT))
{
{ R12 * rv2104 = l_I_2102;
return rv2104; }
}
l_I_2102 = ((*(R12 *)rt_nil_check(l_I_2102))).f_INSTANCES;
}
RT_B_TICK();
} L_end2103: ;
}
{ R12 * rv2105 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2098))).f_NEXT, p_ARGS);
return rv2105; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2106; memset(&l_P_2106, 0, sizeof l_P_2106);
l_P_2106 = p_A;
for (;;) {
if ((l_P_2106 == NULL)) goto L_end2107;
{
{
R20 * l_Q_2108; memset(&l_Q_2108, 0, sizeof l_Q_2108);
l_Q_2108 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2106))).f_NAME);
if ((l_Q_2108 == NULL))
{
{ rt_int rv2109 = 0;
return rv2109; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2106))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2108))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2106))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2108))).f_T == NULL)))
{
{ rt_int rv2110 = 0;
return rv2110; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2106))).f_T, ((*(R20 *)rt_nil_check(l_Q_2108))).f_T)))
{
{ rt_int rv2111 = 0;
return rv2111; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2106))).f_T, ((*(R20 *)rt_nil_check(l_Q_2108))).f_T)))
{
{ rt_int rv2112 = 0;
return rv2112; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2106))).f_T, ((*(R20 *)rt_nil_check(l_Q_2108))).f_T)))
{
{ rt_int rv2113 = 0;
return rv2113; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2106))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2108))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2106))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2108))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2106))).f_R == ((*(R20 *)rt_nil_check(l_Q_2108))).f_R))))
{
{ rt_int rv2114 = 0;
return rv2114; }
}
}
l_P_2106 = ((*(R20 *)rt_nil_check(l_P_2106))).f_NEXT;
}
RT_B_TICK();
} L_end2107: ;
{ rt_int rv2115 = 1;
return rv2115; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2116; memset(&l_RA_2116, 0, sizeof l_RA_2116);
l_RA_2116 = r_REAL_TYPE(p_A);
R22 * l_RB_2117; memset(&l_RB_2117, 0, sizeof l_RB_2117);
l_RB_2117 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2116))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2116))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2116))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2117))).f_KIND))))
{
{ rt_int rv2118 = 1;
return rv2118; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2116))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2117))).f_MLEN).f_OK))
{
{ rt_int rv2119 = ((((*(R22 *)rt_nil_check(l_RA_2116))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2117))).f_MLEN).f_V);
return rv2119; }
}
{ rt_int rv2120 = ((((*(R22 *)rt_nil_check(l_RA_2116))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2117))).f_MLEN).f_OK);
return rv2120; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2121; memset(&l_RA_2121, 0, sizeof l_RA_2121);
l_RA_2121 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2122; memset(&l_RB_2122, 0, sizeof l_RB_2122);
l_RB_2122 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2121 == NULL) || (l_RB_2122 == NULL)))
{
{ rt_int rv2123 = (l_RA_2121 == l_RB_2122);
return rv2123; }
}
if ((l_RA_2121 == l_RB_2122))
{
{ rt_int rv2124 = 1;
return rv2124; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2121))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2122))).f_NAME)))
{
{ rt_int rv2125 = 0;
return rv2125; }
}
{
R21 * l_X_2126; memset(&l_X_2126, 0, sizeof l_X_2126);
l_X_2126 = ((*(R21 *)rt_nil_check(l_RA_2121))).f_A;
R21 * l_Y_2127; memset(&l_Y_2127, 0, sizeof l_Y_2127);
l_Y_2127 = ((*(R21 *)rt_nil_check(l_RB_2122))).f_A;
for (;;) {
if (((l_X_2126 == NULL) || (l_Y_2127 == NULL))) goto L_end2128;
{
if (((((((*(R21 *)rt_nil_check(l_X_2126))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2126))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2127))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2127))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2126))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2127))).f_NAME)))
{
{ rt_int rv2129 = 0;
return rv2129; }
}
}
else
{
{
R23 l_MX_2130; memset(&l_MX_2130, 0, sizeof l_MX_2130);
S_R23(&l_MX_2130, r_MANIFEST(l_X_2126), 0);
R23 l_MY_2131; memset(&l_MY_2131, 0, sizeof l_MY_2131);
S_R23(&l_MY_2131, r_MANIFEST(l_Y_2127), 0);
if (((!((l_MX_2130).f_OK == (l_MY_2131).f_OK)) || (!((l_MX_2130).f_V == (l_MY_2131).f_V))))
{
{ rt_int rv2132 = 0;
return rv2132; }
}
}
}
l_X_2126 = ((*(R21 *)rt_nil_check(l_X_2126))).f_NEXT;
l_Y_2127 = ((*(R21 *)rt_nil_check(l_Y_2127))).f_NEXT;
}
RT_B_TICK();
} L_end2128: ;
{ rt_int rv2133 = ((((l_X_2126 == NULL) && (l_Y_2127 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2121))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2122))).f_B == NULL));
return rv2133; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_2134; memset(&l_Y_2134, 0, sizeof l_Y_2134);
l_Y_2134 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2135; memset(&l_FOUND_2135, 0, sizeof l_FOUND_2135);
l_FOUND_2135 = NULL;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_2134 == NULL)) goto L_end2136;
{
if ((((*(R12 *)rt_nil_check(l_Y_2134))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2137; memset(&l_R_2137, 0, sizeof l_R_2137);
l_R_2137 = r_ORIGINAL(l_Y_2134);
r_ROUTINE_HEADER(l_R_2137);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_2137)) && (!((*(R12 *)rt_nil_check(l_R_2137))).f_GENERIC)))
{
if (((!(l_FOUND_2135 == NULL)) && (!(l_FOUND_2135 == l_R_2137))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2135 = l_R_2137;
}
}
}
l_Y_2134 = r_LOOKUP_NEXT(l_Y_2134);
}
RT_B_TICK();
} L_end2136: ;
if ((l_FOUND_2135 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2135))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R12 * rv2138 = l_FOUND_2135;
return rv2138; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2139; memset(&l_NEEDL_2139, 0, sizeof l_NEEDL_2139);
l_NEEDL_2139 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2140; memset(&l_SAVED_2140, 0, sizeof l_SAVED_2140);
l_SAVED_2140 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2139 == NULL)) goto L_end2141;
{
{
R21 * l_T_2142; memset(&l_T_2142, 0, sizeof l_T_2142);
l_T_2142 = ((*(R21 *)rt_nil_check(l_NEEDL_2139))).f_A;
for (;;) {
if ((l_T_2142 == NULL)) goto L_end2143;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2142))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2144; memset(&l_ARGS_2144, 0, sizeof l_ARGS_2144);
l_ARGS_2144 = NULL;
R27 * l_TAIL_2145; memset(&l_TAIL_2145, 0, sizeof l_TAIL_2145);
l_TAIL_2145 = NULL;
R21 * l_P_2146; memset(&l_P_2146, 0, sizeof l_P_2146);
l_P_2146 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2142))).f_B))).f_A;
R12 * l_R_2147; memset(&l_R_2147, 0, sizeof l_R_2147);
rt_int l_ENTERED_2148; memset(&l_ENTERED_2148, 0, sizeof l_ENTERED_2148);
l_ENTERED_2148 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2146 == NULL)) goto L_end2149;
{
{
R27 * l_A_2150; memset(&l_A_2150, 0, sizeof l_A_2150);
if ((((*(R21 *)rt_nil_check(l_P_2146))).f_B == NULL))
{
l_A_2150 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2150 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2146))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2150))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2146))).f_IV;
if ((l_TAIL_2145 == NULL))
{
l_ARGS_2144 = l_A_2150;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2145))).f_NEXT = l_A_2150;
}
l_TAIL_2145 = l_A_2150;
}
l_P_2146 = ((*(R21 *)rt_nil_check(l_P_2146))).f_NEXT;
}
RT_B_TICK();
} L_end2149: ;
if (l_ENTERED_2148)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2147 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2142))).f_NAME, l_ARGS_2144, p_LINE, 0);
if ((l_R_2147 == NULL))
{
l_R_2147 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2142))).f_NAME);
for (;;) {
if ((l_R_2147 == NULL)) goto L_end2151;
{
if ((((*(R12 *)rt_nil_check(l_R_2147))).f_KIND == g_Y_BUILTIN))
{
goto L_end2151;
}
l_R_2147 = r_LOOKUP_NEXT(l_R_2147);
}
RT_B_TICK();
} L_end2151: ;
}
if (((l_R_2147 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2142))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2142))).f_NAME);
}
if ((!(l_R_2147 == NULL)))
{
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2142))).f_NAME, NULL, r_NO_MVAL(), l_R_2147, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2142 = ((*(R21 *)rt_nil_check(l_T_2142))).f_NEXT;
}
RT_B_TICK();
} L_end2143: ;
}
l_NEEDL_2139 = ((*(R21 *)rt_nil_check(l_NEEDL_2139))).f_NEXT;
}
RT_B_TICK();
} L_end2141: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2140;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2152 = 0;
return rv2152; }
}
{
R12 * l_Y_2153; memset(&l_Y_2153, 0, sizeof l_Y_2153);
l_Y_2153 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2154; memset(&l_A_2154, 0, sizeof l_A_2154);
l_A_2154 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2155; memset(&l_F_2155, 0, sizeof l_F_2155);
if ((l_Y_2153 == NULL))
{
{ rt_int rv2156 = 0;
return rv2156; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2153))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2153))).f_DECL == NULL)))
{
{ rt_int rv2157 = 0;
return rv2157; }
}
l_F_2155 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2153))).f_DECL))).f_A;
for (;;) {
if ((l_F_2155 == NULL)) goto L_end2158;
{
{
R21 * l_N_2159; memset(&l_N_2159, 0, sizeof l_N_2159);
l_N_2159 = ((*(R21 *)rt_nil_check(l_F_2155))).f_A;
for (;;) {
if ((l_N_2159 == NULL)) goto L_end2160;
{
if ((l_A_2154 == NULL))
{
{ rt_int rv2161 = 0;
return rv2161; }
}
if (((((*(R21 *)rt_nil_check(l_F_2155))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2154))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2162 = 1;
return rv2162; }
}
l_A_2154 = ((*(R21 *)rt_nil_check(l_A_2154))).f_NEXT;
l_N_2159 = ((*(R21 *)rt_nil_check(l_N_2159))).f_NEXT;
}
RT_B_TICK();
} L_end2160: ;
}
l_F_2155 = ((*(R21 *)rt_nil_check(l_F_2155))).f_NEXT;
}
RT_B_TICK();
} L_end2158: ;
}
{ rt_int rv2163 = 0;
return rv2163; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2164; memset(&l_A_2164, 0, sizeof l_A_2164);
l_A_2164 = p_ARGS;
R12 * l_I_2165; memset(&l_I_2165, 0, sizeof l_I_2165);
l_I_2165 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2166; memset(&l_SAVED_2166, 0, sizeof l_SAVED_2166);
l_SAVED_2166 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R28 * l_P_2167; memset(&l_P_2167, 0, sizeof l_P_2167);
l_P_2167 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2168; memset(&l_TAIL_2168, 0, sizeof l_TAIL_2168);
l_TAIL_2168 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2165)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2165))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2165))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2165))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2165))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2165))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2165;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2167 == NULL)) goto L_end2169;
{
{
R28 * l_PM_2170; memset(&l_PM_2170, 0, sizeof l_PM_2170);
l_PM_2170 = ((R28 *)rt_alloc(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2170)), (*(R28 *)rt_nil_check(l_P_2167)), 0);
((*(R28 *)rt_nil_check(l_PM_2170))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2167))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2170))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2167))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2170))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2167))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2164))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2170))).f_T = (((*(R27 *)rt_nil_check(l_A_2164))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2170))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2170))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2170))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2170))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2170))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2167))).f_TS);
}
((*(R28 *)rt_nil_check(l_PM_2170))).f_TS = NULL;
if ((l_TAIL_2168 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2165))).f_PARAMS = l_PM_2170;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2168))).f_NEXT = l_PM_2170;
}
l_TAIL_2168 = l_PM_2170;
}
l_P_2167 = ((*(R28 *)rt_nil_check(l_P_2167))).f_NEXT;
l_A_2164 = ((*(R27 *)rt_nil_check(l_A_2164))).f_NEXT;
}
RT_B_TICK();
} L_end2169: ;
((*(R12 *)rt_nil_check(l_I_2165))).f_RESULT = r_RESULT_TYPE(l_I_2165);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2166;
S_R10(&((*(R12 *)rt_nil_check(l_I_2165))).f_FWD, r_C_HEADER(l_I_2165), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2165))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2165))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2165;
{ R12 * rv2171 = l_I_2165;
return rv2171; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2172 = 0;
return rv2172; }
}
{ rt_int rv2173 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2173; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2174; memset(&l_C_2174, 0, sizeof l_C_2174);
if ((p_TS == NULL))
{
{ R21 * rv2175 = NULL;
return rv2175; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2176; memset(&l_F_2176, 0, sizeof l_F_2176);
l_F_2176 = p_FORMALS;
R21 * l_A_2177; memset(&l_A_2177, 0, sizeof l_A_2177);
l_A_2177 = p_ARGS;
for (;;) {
if ((l_F_2176 == NULL)) goto L_end2178;
{
{
R21 * l_N_2179; memset(&l_N_2179, 0, sizeof l_N_2179);
l_N_2179 = ((*(R21 *)rt_nil_check(l_F_2176))).f_A;
for (;;) {
if ((l_N_2179 == NULL)) goto L_end2180;
{
if ((l_A_2177 == NULL))
{
{ R21 * rv2181 = p_TS;
return rv2181; }
}
if (((((*(R21 *)rt_nil_check(l_F_2176))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2179))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2182 = l_A_2177;
return rv2182; }
}
l_A_2177 = ((*(R21 *)rt_nil_check(l_A_2177))).f_NEXT;
l_N_2179 = ((*(R21 *)rt_nil_check(l_N_2179))).f_NEXT;
}
RT_B_TICK();
} L_end2180: ;
}
l_F_2176 = ((*(R21 *)rt_nil_check(l_F_2176))).f_NEXT;
}
RT_B_TICK();
} L_end2178: ;
}
{ R21 * rv2183 = p_TS;
return rv2183; }
}
l_C_2174 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2174))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2174))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2184 = l_C_2174;
return rv2184; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2185; memset(&l_C_2185, 0, sizeof l_C_2185);
l_C_2185 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2185)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2185))).f_NEXT = NULL;
{ R21 * rv2186 = l_C_2185;
return rv2186; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2187; memset(&l_P_2187, 0, sizeof l_P_2187);
l_P_2187 = p_L;
for (;;) {
if ((l_P_2187 == NULL)) goto L_end2188;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2187))).f_NAME, p_NAME))
{
{ rt_int rv2189 = 1;
return rv2189; }
}
l_P_2187 = ((*(R21 *)rt_nil_check(l_P_2187))).f_NEXT;
}
RT_B_TICK();
} L_end2188: ;
{ rt_int rv2190 = 0;
return rv2190; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2191; memset(&l_IS_2191, 0, sizeof l_IS_2191);
l_IS_2191 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2192 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2192; }
}
if ((l_IS_2191 == NULL))
{
{ rt_int rv2193 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2193; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2191))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2191))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2194 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2194; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2191))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2191))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2195 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2195; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2191))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2196 = 0;
return rv2196; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2197; memset(&l_ITEMS_2197, 0, sizeof l_ITEMS_2197);
l_ITEMS_2197 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2198; memset(&l_HEAD_2198, 0, sizeof l_HEAD_2198);
l_HEAD_2198 = NULL;
R21 * l_TAIL_2199; memset(&l_TAIL_2199, 0, sizeof l_TAIL_2199);
l_TAIL_2199 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2197 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2197))).f_A, &l_HEAD_2198, &l_TAIL_2199);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2197))).f_B, &l_HEAD_2198, &l_TAIL_2199);
{
R21 * l_R_2200; memset(&l_R_2200, 0, sizeof l_R_2200);
l_R_2200 = ((*(R21 *)rt_nil_check(l_ITEMS_2197))).f_C;
for (;;) {
if ((l_R_2200 == NULL)) goto L_end2201;
{
{
R12 * l_Z_2202; memset(&l_Z_2202, 0, sizeof l_Z_2202);
l_Z_2202 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2200))).f_NAME);
if (((l_Z_2202 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2200))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2200))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2200))).f_NAME);
}
for (;;) {
if ((l_Z_2202 == NULL)) goto L_end2203;
{
if ((((*(R12 *)rt_nil_check(l_Z_2202))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2204; memset(&l_O_2204, 0, sizeof l_O_2204);
l_O_2204 = r_ORIGINAL(l_Z_2202);
R21 * l_U_2205; memset(&l_U_2205, 0, sizeof l_U_2205);
r_COMPUTE_USES(l_O_2204);
l_U_2205 = ((*(R12 *)rt_nil_check(l_O_2204))).f_USES;
for (;;) {
if ((l_U_2205 == NULL)) goto L_end2206;
{
if ((!r_IN_IDENTS(l_HEAD_2198, ((*(R21 *)rt_nil_check(l_U_2205))).f_NAME)))
{
{
R21 * l_N_2207; memset(&l_N_2207, 0, sizeof l_N_2207);
l_N_2207 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2205))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2207))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2205))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2207))).f_IV = ((*(R21 *)rt_nil_check(l_U_2205))).f_IV;
r_ADD_LIST(l_N_2207, &l_HEAD_2198, &l_TAIL_2199);
}
}
l_U_2205 = ((*(R21 *)rt_nil_check(l_U_2205))).f_NEXT;
}
RT_B_TICK();
} L_end2206: ;
}
}
l_Z_2202 = r_LOOKUP_NEXT(l_Z_2202);
}
RT_B_TICK();
} L_end2203: ;
}
l_R_2200 = ((*(R21 *)rt_nil_check(l_R_2200))).f_NEXT;
}
RT_B_TICK();
} L_end2201: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2198;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2208; memset(&l_M_2208, 0, sizeof l_M_2208);
if ((p_B == NULL))
{
{ rt_int rv2209 = 0;
return rv2209; }
}
l_M_2208 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2208 == NULL)) goto L_end2210;
{
if ((((*(R21 *)rt_nil_check(l_M_2208))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2208))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2208))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2208))).f_C, p_NAME)))
{
{ rt_int rv2211 = 1;
return rv2211; }
}
}
l_M_2208 = ((*(R21 *)rt_nil_check(l_M_2208))).f_NEXT;
}
RT_B_TICK();
} L_end2210: ;
{ rt_int rv2212 = 0;
return rv2212; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2213; memset(&l_R_2213, 0, sizeof l_R_2213);
l_R_2213 = p_RS;
for (;;) {
if ((l_R_2213 == NULL)) goto L_end2214;
{
if ((((*(R21 *)rt_nil_check(l_R_2213))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2213));
}
l_R_2213 = ((*(R21 *)rt_nil_check(l_R_2213))).f_NEXT;
}
RT_B_TICK();
} L_end2214: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2215; memset(&l_P_2215, 0, sizeof l_P_2215);
l_P_2215 = p_L;
for (;;) {
if ((l_P_2215 == NULL)) goto L_end2216;
{
{
R12 * l_V_2217; memset(&l_V_2217, 0, sizeof l_V_2217);
l_V_2217 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2215))).f_NAME);
R21 * l_N_2218; memset(&l_N_2218, 0, sizeof l_N_2218);
l_N_2218 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2215))).f_LINE);
if ((l_V_2217 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2215))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2215))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2218))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2215))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2218))).f_IV = ((*(R12 *)rt_nil_check(l_V_2217))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2217))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2218, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2215 = ((*(R21 *)rt_nil_check(l_P_2215))).f_NEXT;
}
RT_B_TICK();
} L_end2216: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2219; memset(&l_IS_2219, 0, sizeof l_IS_2219);
l_IS_2219 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2220; memset(&l_U_2220, 0, sizeof l_U_2220);
l_U_2220 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2219 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2219))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2220 == NULL)) goto L_end2221;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2220))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2219))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2220))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2220))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2220))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2220))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS))).f_E, p_Y)) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2219))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2220))).f_NAME)))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2220))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2220))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2220 = ((*(R21 *)rt_nil_check(l_U_2220))).f_NEXT;
}
RT_B_TICK();
} L_end2221: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2222; memset(&l_R_2222, 0, sizeof l_R_2222);
l_R_2222 = p_RS;
for (;;) {
if ((l_R_2222 == NULL)) goto L_end2223;
{
{
R12 * l_Z_2224; memset(&l_Z_2224, 0, sizeof l_Z_2224);
l_Z_2224 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2222))).f_NAME);
for (;;) {
if ((l_Z_2224 == NULL)) goto L_end2225;
{
if ((((*(R12 *)rt_nil_check(l_Z_2224))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2226; memset(&l_O_2226, 0, sizeof l_O_2226);
l_O_2226 = r_ORIGINAL(l_Z_2224);
r_COMPUTE_USES(l_O_2226);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2226))).f_USES, p_NAME))
{
{ rt_int rv2227 = 1;
return rv2227; }
}
}
}
l_Z_2224 = r_LOOKUP_NEXT(l_Z_2224);
}
RT_B_TICK();
} L_end2225: ;
}
l_R_2222 = ((*(R21 *)rt_nil_check(l_R_2222))).f_NEXT;
}
RT_B_TICK();
} L_end2223: ;
{ rt_int rv2228 = 0;
return rv2228; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2229; memset(&l_M_2229, 0, sizeof l_M_2229);
l_M_2229 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2229 == NULL)) goto L_end2230;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2229))).f_NAME))
{
{ rt_int rv2231 = 1;
return rv2231; }
}
l_M_2229 = ((*(R12 *)rt_nil_check(l_M_2229))).f_MODL;
}
RT_B_TICK();
} L_end2230: ;
{ rt_int rv2232 = 0;
return rv2232; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2233 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2233; }
}
{ R10 rv2234 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2234; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2235; memset(&l_C_2235, 0, sizeof l_C_2235);
l_C_2235 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2235 == NULL)) goto L_end2236;
{
if ((((*(R17 *)rt_nil_check(l_C_2235))).f_KIND == ((rt_int)1LL)))
{
goto L_end2236;
}
if ((((*(R17 *)rt_nil_check(l_C_2235))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2237; memset(&l_H_2237, 0, sizeof l_H_2237);
l_H_2237 = ((*(R17 *)rt_nil_check(l_C_2235))).f_HANDLERS;
for (;;) {
if ((l_H_2237 == NULL)) goto L_end2238;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2237))).f_A, p_NAME))
{
{ rt_int rv2239 = 1;
return rv2239; }
}
l_H_2237 = ((*(R21 *)rt_nil_check(l_H_2237))).f_NEXT;
}
RT_B_TICK();
} L_end2238: ;
}
}
l_C_2235 = ((*(R17 *)rt_nil_check(l_C_2235))).f_NEXT;
}
RT_B_TICK();
} L_end2236: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2240 = 1;
return rv2240; }
}
}
{ rt_int rv2241 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2241; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2242; memset(&l_C_2242, 0, sizeof l_C_2242);
l_C_2242 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2242)), ({ R17 rc2243; memset(&rc2243, 0, sizeof rc2243);  rc2243.f_KIND = p_KIND; S_R10(&rc2243.f_NAME, p_NAME, 0); rc2243.f_HANDLERS = NULL; rc2243.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2243; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2242;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2244; memset(&l_C_2244, 0, sizeof l_C_2244);
l_C_2244 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2244 == NULL)) goto L_end2245;
{
if ((((*(R17 *)rt_nil_check(l_C_2244))).f_KIND == p_KIND))
{
{ R17 * rv2246 = l_C_2244;
return rv2246; }
}
if ((((*(R17 *)rt_nil_check(l_C_2244))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2247 = NULL;
return rv2247; }
}
if ((((*(R17 *)rt_nil_check(l_C_2244))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2244))).f_NAME));
}
l_C_2244 = ((*(R17 *)rt_nil_check(l_C_2244))).f_NEXT;
}
RT_B_TICK();
} L_end2245: ;
{ R17 * rv2248 = NULL;
return rv2248; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2249; memset(&l_C_2249, 0, sizeof l_C_2249);
l_C_2249 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2250; memset(&l_N_2250, 0, sizeof l_N_2250);
l_N_2250 = ((rt_int)0LL);
for (;;) {
if ((l_C_2249 == NULL)) goto L_end2251;
{
if ((((*(R17 *)rt_nil_check(l_C_2249))).f_KIND == ((rt_int)1LL)))
{
goto L_end2251;
}
if ((((*(R17 *)rt_nil_check(l_C_2249))).f_KIND == ((rt_int)3LL)))
{
l_N_2250 = rt_add(l_N_2250, ((rt_int)1LL));
}
l_C_2249 = ((*(R17 *)rt_nil_check(l_C_2249))).f_NEXT;
}
RT_B_TICK();
} L_end2251: ;
{ rt_int rv2252 = l_N_2250;
return rv2252; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2253; memset(&l_N_2253, 0, sizeof l_N_2253);
l_N_2253 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2253 == NULL)) goto L_end2254;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2253))).f_NAME, p_NAME))
{
{ R10 rv2255 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2255; }
}
l_N_2253 = ((*(R21 *)rt_nil_check(l_N_2253))).f_NEXT;
}
RT_B_TICK();
} L_end2254: ;
l_N_2253 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2253))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2253))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2253;
{ R10 rv2256 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2256; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2257; memset(&l_D_2257, 0, sizeof l_D_2257);
l_D_2257 = p_DECLS;
for (;;) {
if ((l_D_2257 == NULL)) goto L_end2258;
{
if (((((*(R21 *)rt_nil_check(l_D_2257))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2257))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2259; memset(&l_Y_2259, 0, sizeof l_Y_2259);
l_Y_2259 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2257))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2257))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2259))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2259))).f_DECL = l_D_2257;
r_DEFINE(l_Y_2259, ((*(R21 *)rt_nil_check(l_D_2257))).f_LINE);
}
}
l_D_2257 = ((*(R21 *)rt_nil_check(l_D_2257))).f_NEXT;
}
RT_B_TICK();
} L_end2258: ;
}
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2260; memset(&l_S_2260, 0, sizeof l_S_2260);
l_S_2260 = p_S0;
for (;;) {
if ((l_S_2260 == NULL)) goto L_end2261;
{
{
R21 * l_L_2262; memset(&l_L_2262, 0, sizeof l_L_2262);
l_L_2262 = l_S_2260;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2262))).f_KIND == g_N_LABELED))) goto L_end2263;
{
{
R12 * l_Y_2264; memset(&l_Y_2264, 0, sizeof l_Y_2264);
l_Y_2264 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2262))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2264))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2262))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2262))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2264))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2264, ((*(R21 *)rt_nil_check(l_L_2262))).f_LINE);
}
l_L_2262 = ((*(R21 *)rt_nil_check(l_L_2262))).f_A;
}
RT_B_TICK();
} L_end2263: ;
}
l_S_2260 = ((*(R21 *)rt_nil_check(l_S_2260))).f_NEXT;
}
RT_B_TICK();
} L_end2261: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2265; memset(&l_D_2265, 0, sizeof l_D_2265);
l_D_2265 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2266; memset(&l_S_2266, 0, sizeof l_S_2266);
l_S_2266 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2265 == NULL)) goto L_end2267;
{
if (((((*(R21 *)rt_nil_check(l_D_2265))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2265))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2265);
}
l_D_2265 = ((*(R21 *)rt_nil_check(l_D_2265))).f_NEXT;
}
RT_B_TICK();
} L_end2267: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2266 == NULL)) goto L_end2268;
{
r_STMT(l_S_2266);
l_S_2266 = ((*(R21 *)rt_nil_check(l_S_2266))).f_NEXT;
}
RT_B_TICK();
} L_end2268: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2269; memset(&l_F_2269, 0, sizeof l_F_2269);
S_R10(&l_F_2269, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2270; memset(&l_H_2270, 0, sizeof l_H_2270);
l_H_2270 = p_HANDLERS;
R10 l_WORD_2271; memset(&l_WORD_2271, 0, sizeof l_WORD_2271);
S_R10(&l_WORD_2271, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2269, l_F_2269));
r_PUSH_CTX(((rt_int)3LL), l_F_2269);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2269, l_F_2269, l_F_2269));
for (;;) {
if ((l_H_2270 == NULL)) goto L_end2272;
{
{
R21 * l_N_2273; memset(&l_N_2273, 0, sizeof l_N_2273);
l_N_2273 = ((*(R21 *)rt_nil_check(l_H_2270))).f_A;
R10 l_COND_2274; memset(&l_COND_2274, 0, sizeof l_COND_2274);
S_R10(&l_COND_2274, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2273 == NULL)) goto L_end2275;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2273))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2273))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2273))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2273))).f_NAME);
}
S_R10(&l_COND_2274, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2274, l_F_2269, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2273))).f_NAME)), 0);
l_N_2273 = ((*(R21 *)rt_nil_check(l_N_2273))).f_NEXT;
}
RT_B_TICK();
} L_end2275: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2271, l_COND_2274));
S_R10(&l_WORD_2271, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2269, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2270))).f_B);
r_POP_CTX();
}
l_H_2270 = ((*(R21 *)rt_nil_check(l_H_2270))).f_NEXT;
}
RT_B_TICK();
} L_end2272: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2269));
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2276; memset(&l_K_2276, 0, sizeof l_K_2276);
l_K_2276 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2276 == g_N_NULL))
{
return;
}
else if ((l_K_2276 == g_N_LABELED))
{
{
R12 * l_Y_2277; memset(&l_Y_2277, 0, sizeof l_Y_2277);
l_Y_2277 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2277))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2276 == g_N_GOTO))
{
{
R12 * l_Y_2278; memset(&l_Y_2278, 0, sizeof l_Y_2278);
l_Y_2278 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2279; memset(&l_N_2279, 0, sizeof l_N_2279);
R17 * l_C_2280; memset(&l_C_2280, 0, sizeof l_C_2280);
l_C_2280 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2278 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2278))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2278))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2279 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2278))).f_MV);
for (;;) {
if ((l_N_2279 <= ((rt_int)0LL))) goto L_end2281;
{
if ((((*(R17 *)rt_nil_check(l_C_2280))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2280))).f_NAME));
l_N_2279 = rt_sub(l_N_2279, ((rt_int)1LL));
}
l_C_2280 = ((*(R17 *)rt_nil_check(l_C_2280))).f_NEXT;
}
RT_B_TICK();
} L_end2281: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2278))).f_ACCESS));
}
}
else if ((l_K_2276 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2276 == g_N_CALL))
{
{
R26 l_V_2282; memset(&l_V_2282, 0, sizeof l_V_2282);
S_R26(&l_V_2282, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2282).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2282).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2282).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2276 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2276 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2276 == g_N_LOOP))
{
{
R10 l_END_L_2283; memset(&l_END_L_2283, 0, sizeof l_END_L_2283);
S_R10(&l_END_L_2283, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2283));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2283);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2283));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2283));
}
}
else if ((l_K_2276 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2276 == g_N_EXIT))
{
{
R17 * l_C_2284; memset(&l_C_2284, 0, sizeof l_C_2284);
l_C_2284 = r_LEAVE(((rt_int)2LL));
if ((l_C_2284 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2284))).f_NAME));
}
}
else if ((l_K_2276 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2276 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2276 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2276 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2276 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2276 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2276 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2276 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2285; memset(&l_Y_2285, 0, sizeof l_Y_2285);
l_Y_2285 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2285 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2285))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2285))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2286 = r_CALL_EXPR(p_S, NULL);
return rv2286; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2287; memset(&l_ARM_2287, 0, sizeof l_ARM_2287);
l_ARM_2287 = p_ARMS;
R10 l_WORD_2288; memset(&l_WORD_2288, 0, sizeof l_WORD_2288);
S_R10(&l_WORD_2288, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2289; memset(&l_OPEN_2289, 0, sizeof l_OPEN_2289);
l_OPEN_2289 = ((rt_int)0LL);
rt_int l_CHOSEN_2290; memset(&l_CHOSEN_2290, 0, sizeof l_CHOSEN_2290);
l_CHOSEN_2290 = 0;
for (;;) {
if ((l_ARM_2287 == NULL)) goto L_end2291;
{
{
R23 l_M_2292; memset(&l_M_2292, 0, sizeof l_M_2292);
S_R23(&l_M_2292, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2287))).f_A), 0);
if (l_CHOSEN_2290)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2287))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B);
}
else if ((l_M_2292).f_OK)
{
if ((!r_TEQS(l_WORD_2288, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2289 = rt_add(l_OPEN_2289, ((rt_int)1LL));
S_R10(&l_WORD_2288, r_MK(rt_str("if", 2)), 0);
}
if (((l_M_2292).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B);
l_CHOSEN_2290 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2288, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2287))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2287))).f_B);
S_R10(&l_WORD_2288, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2287 = ((*(R21 *)rt_nil_check(l_ARM_2287))).f_NEXT;
}
RT_B_TICK();
} L_end2291: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2290)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2288, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2294_lo = ((rt_int)1LL), it2294_hi = l_OPEN_2289;
for (rt_int it2294 = it2294_lo; it2294 <= it2294_hi; it2294++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2294 == it2294_hi) break;
} } L_end2293: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2295; memset(&l_SAVED_CODE_2295, 0, sizeof l_SAVED_CODE_2295);
S_R14(&l_SAVED_CODE_2295, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2296; memset(&rc2296, 0, sizeof rc2296);  rc2296.f_HEAD = NULL; rc2296.f_TAIL = NULL; rc2296; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2295, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2297; memset(&l_C_2297, 0, sizeof l_C_2297);
S_R10(&l_C_2297, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2298; memset(&l_END_L_2298, 0, sizeof l_END_L_2298);
S_R10(&l_END_L_2298, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2299; memset(&l_IT_2299, 0, sizeof l_IT_2299);
S_R10(&l_IT_2299, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2300; memset(&l_R_2300, 0, sizeof l_R_2300);
l_R_2300 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2301; memset(&l_LO_2301, 0, sizeof l_LO_2301);
S_R26(&l_LO_2301, r_EXPR(((*(R21 *)rt_nil_check(l_R_2300))).f_A, NULL), 0);
R26 l_HI_2302; memset(&l_HI_2302, 0, sizeof l_HI_2302);
S_R26(&l_HI_2302, r_EXPR(((*(R21 *)rt_nil_check(l_R_2300))).f_B, (l_LO_2301).f_T), 0);
R22 * l_T_2303; memset(&l_T_2303, 0, sizeof l_T_2303);
l_T_2303 = r_REAL_TYPE((l_LO_2301).f_T);
R10 l_LOC_2304; memset(&l_LOC_2304, 0, sizeof l_LOC_2304);
R10 l_HIC_2305; memset(&l_HIC_2305, 0, sizeof l_HIC_2305);
if ((((*(R22 *)rt_nil_check(l_T_2303))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2303))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2303))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2303))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2304, (l_LO_2301).f_C, 0);
S_R10(&l_HIC_2305, (l_HI_2302).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2300))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2300))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2304, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2304), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2300))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2305, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2305), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2299, l_LOC_2304, l_IT_2299, l_HIC_2305));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2299, l_IT_2299, l_IT_2299, l_IT_2299));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2306; memset(&l_Y_2306, 0, sizeof l_Y_2306);
l_Y_2306 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2306))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2303))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2306))).f_T = ((*(R22 *)rt_nil_check(l_T_2303))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2306))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2306, rt_str("", 0)), l_IT_2299));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2306, rt_str("", 0)), l_IT_2299));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2306))).f_ACCESS, l_IT_2299, 0);
}
r_DEFINE(l_Y_2306, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2298);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2299, l_IT_2299));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2298));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_2307; memset(&l_CS_2307, 0, sizeof l_CS_2307);
l_CS_2307 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_2308; memset(&l_C_2308, 0, sizeof l_C_2308);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_2308 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_2307))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_2307))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_2307))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_2307))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_2309; memset(&l_V_2309, 0, sizeof l_V_2309);
S_R10(&l_V_2309, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT), l_V_2309, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_2307))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_2308 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_2309));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_2310; memset(&l_C_2310, 0, sizeof l_C_2310);
l_C_2310 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2310 == NULL)) goto L_end2311;
{
if ((((*(R17 *)rt_nil_check(l_C_2310))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_2310))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_2310))).f_KIND == ((rt_int)1LL)))
{
goto L_end2311;
}
l_C_2310 = ((*(R17 *)rt_nil_check(l_C_2310))).f_NEXT;
}
RT_B_TICK();
} L_end2311: ;
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
R21 * l_TG_2312; memset(&l_TG_2312, 0, sizeof l_TG_2312);
l_TG_2312 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_2312))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_2313; memset(&l_B_2313, 0, sizeof l_B_2313);
S_R26(&l_B_2313, r_EXPR(((*(R21 *)rt_nil_check(l_TG_2312))).f_A, NULL), 0);
if ((!(l_B_2313).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_2313).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_2314; memset(&l_ARGS_2314, 0, sizeof l_ARGS_2314);
l_ARGS_2314 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2312))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_2312))).f_C, g_M_IN, r_VAL_ARG(l_B_2313, NULL))));
R12 * l_Y_2315; memset(&l_Y_2315, 0, sizeof l_Y_2315);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2314))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_2315 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2314, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_2315 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_2314))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_2315 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_2314, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_2315 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_2315, l_ARGS_2314, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_2313).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_2313).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_2316; memset(&l_V_2316, 0, sizeof l_V_2316);
S_R26(&l_V_2316, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_2313).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_2316).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_2313).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_2313).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2312))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_2312))).f_C), (l_V_2316).f_C));
}
}
return;
}
{
R26 l_LV_2317; memset(&l_LV_2317, 0, sizeof l_LV_2317);
S_R26(&l_LV_2317, r_EXPR(l_TG_2312, NULL), 0);
R21 * l_SAVED_Q_2318; memset(&l_SAVED_Q_2318, 0, sizeof l_SAVED_Q_2318);
l_SAVED_Q_2318 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_2317).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
r_CODE(r_STORE_CODE((l_LV_2317).f_T, (l_LV_2317).f_C, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_2317).f_T), ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_2317).f_SELF));
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_2318;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_2319; memset(&l_Y_2319, 0, sizeof l_Y_2319);
l_Y_2319 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_2320; memset(&l_V_2320, 0, sizeof l_V_2320);
S_R26(&l_V_2320, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_2319))).f_T = (l_V_2320).f_T;
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_2321; memset(&l_CN_2321, 0, sizeof l_CN_2321);
S_R10(&l_CN_2321, r_NEW_OBJECT(l_Y_2319, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_2320).f_T))
{
r_CODE(r_INIT_CODE((l_V_2320).f_T, l_CN_2321));
}
r_CODE(r_ASSIGN_CODE((l_V_2320).f_T, l_CN_2321, (l_V_2320).f_C));
}
}
else
{
if ((!(l_V_2320).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_2322; memset(&l_P_2322, 0, sizeof l_P_2322);
S_R10(&l_P_2322, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_2320).f_T), l_P_2322, (l_V_2320).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_2319))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_2322), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2319))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_2319))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_2319))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_2319, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2323; memset(&l_ARM_2323, 0, sizeof l_ARM_2323);
l_ARM_2323 = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_2324; memset(&l_CH_2324, 0, sizeof l_CH_2324);
S_R26(&l_CH_2324, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_2325; memset(&l_T_2325, 0, sizeof l_T_2325);
l_T_2325 = r_REAL_TYPE((l_CH_2324).f_T);
R12 * l_BOUND_2326; memset(&l_BOUND_2326, 0, sizeof l_BOUND_2326);
l_BOUND_2326 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_2325))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_2325))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_2327; memset(&l_TMP_2327, 0, sizeof l_TMP_2327);
S_R10(&l_TMP_2327, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_2328; memset(&l_WORD_2328, 0, sizeof l_WORD_2328);
S_R10(&l_WORD_2328, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_2327, (l_CH_2324).f_C));
for (;;) {
if ((l_ARM_2323 == NULL)) goto L_end2329;
{
{
R21 * l_L_2330; memset(&l_L_2330, 0, sizeof l_L_2330);
l_L_2330 = ((*(R21 *)rt_nil_check(l_ARM_2323))).f_A;
R10 l_COND_2331; memset(&l_COND_2331, 0, sizeof l_COND_2331);
S_R10(&l_COND_2331, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2330 == NULL)) goto L_end2332;
{
S_R10(&l_COND_2331, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_2331, l_TMP_2327, (r_EXPR(l_L_2330, l_T_2325)).f_C), 0);
l_L_2330 = ((*(R21 *)rt_nil_check(l_L_2330))).f_NEXT;
}
RT_B_TICK();
} L_end2332: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2328, l_COND_2331));
S_R10(&l_WORD_2328, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2323))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2323))).f_C);
}
l_ARM_2323 = ((*(R21 *)rt_nil_check(l_ARM_2323))).f_NEXT;
}
RT_B_TICK();
} L_end2329: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_2328, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_2325))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_2325))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_2325))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_2325))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_2325));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_2324).f_C));
for (;;) {
if ((l_ARM_2323 == NULL)) goto L_end2333;
{
{
R21 * l_L_2334; memset(&l_L_2334, 0, sizeof l_L_2334);
l_L_2334 = ((*(R21 *)rt_nil_check(l_ARM_2323))).f_A;
R23 l_FIRST_2335; memset(&l_FIRST_2335, 0, sizeof l_FIRST_2335);
S_R23(&l_FIRST_2335, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_2334 == NULL)) goto L_end2336;
{
if ((((*(R21 *)rt_nil_check(l_L_2334))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_2337; memset(&l_LO_2337, 0, sizeof l_LO_2337);
S_R23(&l_LO_2337, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2334))).f_A, l_T_2325), 0);
R23 l_HI_2338; memset(&l_HI_2338, 0, sizeof l_HI_2338);
S_R23(&l_HI_2338, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_2334))).f_B, l_T_2325), 0);
rt_int l_A_2339; memset(&l_A_2339, 0, sizeof l_A_2339);
l_A_2339 = (l_LO_2337).f_V;
rt_int l_B_2340; memset(&l_B_2340, 0, sizeof l_B_2340);
l_B_2340 = (l_HI_2338).f_V;
if ((!(((l_LO_2337).f_OK && (l_HI_2338).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2334))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_2334))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_2334))).f_IV == ((rt_int)3LL))))
{
l_A_2339 = rt_add(l_A_2339, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_2334))).f_IV >= ((rt_int)2LL)))
{
l_B_2340 = rt_sub(l_B_2340, ((rt_int)1LL));
}
if ((!(l_FIRST_2335).f_OK))
{
S_R23(&l_FIRST_2335, r_SOME(l_A_2339), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_2339), r_NUM(l_B_2340)));
}
}
else
{
{
R23 l_M_2341; memset(&l_M_2341, 0, sizeof l_M_2341);
S_R23(&l_M_2341, r_ENUM_MANIFEST(l_L_2334, l_T_2325), 0);
if ((!(l_M_2341).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_2334))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_2335).f_OK))
{
S_R23(&l_FIRST_2335, l_M_2341, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_2341).f_V)));
}
}
l_L_2334 = ((*(R21 *)rt_nil_check(l_L_2334))).f_NEXT;
}
RT_B_TICK();
} L_end2336: ;
if ((!(l_BOUND_2326 == NULL)))
{
{
R22 * l_SAVED_2342; memset(&l_SAVED_2342, 0, sizeof l_SAVED_2342);
l_SAVED_2342 = ((*(R12 *)rt_nil_check(l_BOUND_2326))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_2326))).f_T = r_NARROW(l_SAVED_2342, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_2335).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2323))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2323))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_2326))).f_T = l_SAVED_2342;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2323))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2323))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_2323 = ((*(R21 *)rt_nil_check(l_ARM_2323))).f_NEXT;
}
RT_B_TICK();
} L_end2333: ;
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
{ R12 * rv2343 = NULL;
return rv2343; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv2344 = NULL;
return rv2344; }
}
{
R12 * l_Y_2345; memset(&l_Y_2345, 0, sizeof l_Y_2345);
l_Y_2345 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_2345 == NULL))
{
{ R12 * rv2346 = NULL;
return rv2346; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2345))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2347 = NULL;
return rv2347; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2345))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv2348 = NULL;
return rv2348; }
}
{
R24 * l_F_2349; memset(&l_F_2349, 0, sizeof l_F_2349);
l_F_2349 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2345))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_2349 == NULL))
{
{ R12 * rv2350 = NULL;
return rv2350; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_2349))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv2351 = NULL;
return rv2351; }
}
}
{ R12 * rv2352 = l_Y_2345;
return rv2352; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_2353; memset(&l_N_2353, 0, sizeof l_N_2353);
l_N_2353 = r_COPY_TYP(p_T);
R24 * l_F_2354; memset(&l_F_2354, 0, sizeof l_F_2354);
l_F_2354 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_2355; memset(&l_A_2355, 0, sizeof l_A_2355);
l_A_2355 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_2356; memset(&l_HEAD_2356, 0, sizeof l_HEAD_2356);
l_HEAD_2356 = NULL;
R25 * l_TAIL_2357; memset(&l_TAIL_2357, 0, sizeof l_TAIL_2357);
l_TAIL_2357 = NULL;
for (;;) {
if ((l_F_2354 == NULL)) goto L_end2358;
{
if (((!(((*(R24 *)rt_nil_check(l_F_2354))).f_KIND == ((rt_int)0LL))) && (!(l_A_2355 == NULL))))
{
{
R25 * l_B_2359; memset(&l_B_2359, 0, sizeof l_B_2359);
l_B_2359 = ((R25 *)rt_alloc(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_2359)), (*(R25 *)rt_nil_check(l_A_2355)), 0);
((*(R25 *)rt_nil_check(l_B_2359))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_2354))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_2359))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_2359))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_2359))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_2357 == NULL))
{
l_HEAD_2356 = l_B_2359;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2357))).f_NEXT = l_B_2359;
}
l_TAIL_2357 = l_B_2359;
}
l_A_2355 = ((*(R25 *)rt_nil_check(l_A_2355))).f_NEXT;
}
l_F_2354 = ((*(R24 *)rt_nil_check(l_F_2354))).f_NEXT;
}
RT_B_TICK();
} L_end2358: ;
((*(R22 *)rt_nil_check(l_N_2353))).f_ARGS = l_HEAD_2356;
{ R22 * rv2360 = l_N_2353;
return rv2360; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_2361; memset(&l_ARM_2361, 0, sizeof l_ARM_2361);
l_ARM_2361 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_2362; memset(&l_SAVED_2362, 0, sizeof l_SAVED_2362);
l_SAVED_2362 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_2361 == NULL)) goto L_end2363;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_2361))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_2361))).f_B, ((*(R21 *)rt_nil_check(l_ARM_2361))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2362;
return;
}
l_ARM_2361 = ((*(R21 *)rt_nil_check(l_ARM_2361))).f_NEXT;
}
RT_B_TICK();
} L_end2363: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_2362;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_2364; memset(&l_T_2364, 0, sizeof l_T_2364);
l_T_2364 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_2364))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv2365 = l_T_2364;
return rv2365; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_2366; memset(&l_TD_2366, 0, sizeof l_TD_2366);
S_R10(&l_TD_2366, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_2367; memset(&l_P_2367, 0, sizeof l_P_2367);
l_P_2367 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_2367 == NULL)) goto L_end2368;
{
{
R12 * l_Y_2369; memset(&l_Y_2369, 0, sizeof l_Y_2369);
l_Y_2369 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_2367))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2369))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_2369))).f_DECL = l_P_2367;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_2369, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_2369))).f_INPUT = 1;
r_DEFINE(l_Y_2369, ((*(R21 *)rt_nil_check(l_P_2367))).f_LINE);
}
l_P_2367 = ((*(R21 *)rt_nil_check(l_P_2367))).f_NEXT;
}
RT_B_TICK();
} L_end2368: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_2366));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_2366, l_TD_2366));
l_P_2367 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_2367 == NULL)) goto L_end2370;
{
r_ACTIVATE_PATH(l_P_2367, l_TD_2366);
l_P_2367 = ((*(R21 *)rt_nil_check(l_P_2367))).f_NEXT;
}
RT_B_TICK();
} L_end2370: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_2366, l_TD_2366, l_TD_2366));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_2366));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_2371; memset(&l_FN_2371, 0, sizeof l_FN_2371);
S_R10(&l_FN_2371, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_2372; memset(&l_FT_2372, 0, sizeof l_FT_2372);
S_R10(&l_FT_2372, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_2373; memset(&l_Y_2373, 0, sizeof l_Y_2373);
l_Y_2373 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_2374; memset(&l_H_2374, 0, sizeof l_H_2374);
S_R10(&l_H_2374, r_OBJ_ACCESS(l_Y_2373), 0);
R10 l_IT_2375; memset(&l_IT_2375, 0, sizeof l_IT_2375);
S_R10(&l_IT_2375, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_2376; memset(&l_PRIO_2376, 0, sizeof l_PRIO_2376);
S_R10(&l_PRIO_2376, r_MK(rt_str("0", 1)), 0);
R10 l_START_2377; memset(&l_START_2377, 0, sizeof l_START_2377);
R22 * l_LT_2378; memset(&l_LT_2378, 0, sizeof l_LT_2378);
l_LT_2378 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_2372, l_FT_2372));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_2376, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_2379; memset(&l_R_2379, 0, sizeof l_R_2379);
l_R_2379 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_2380; memset(&l_LV_2380, 0, sizeof l_LV_2380);
S_R26(&l_LV_2380, r_EXPR(((*(R21 *)rt_nil_check(l_R_2379))).f_A, NULL), 0);
R10 l_LO_2381; memset(&l_LO_2381, 0, sizeof l_LO_2381);
S_R10(&l_LO_2381, (l_LV_2380).f_C, 0);
R10 l_HI_2382; memset(&l_HI_2382, 0, sizeof l_HI_2382);
S_R10(&l_HI_2382, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2379))).f_B, (l_LV_2380).f_T)).f_C, 0);
R22 * l_RT_2383; memset(&l_RT_2383, 0, sizeof l_RT_2383);
l_RT_2383 = r_REAL_TYPE((l_LV_2380).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_2383))).f_KIND == g_T_ENUM))
{
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2383))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_2378 = ((*(R22 *)rt_nil_check(l_RT_2383))).f_BASE;
S_R10(&l_HI_2382, (r_EXPR(((*(R21 *)rt_nil_check(l_R_2379))).f_B, l_LT_2378)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_2383))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_2383))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_2379))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2379))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_2381, r_FMT1(rt_str("(@) + 1", 7), l_LO_2381), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2379))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_2382, r_FMT1(rt_str("(@) - 1", 7), l_HI_2382), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_2374, l_LO_2381, l_HI_2382));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_2375, l_H_2374, l_IT_2375, l_H_2374), l_IT_2375));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_2375));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_2372, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_2375));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_2384; memset(&l_V_2384, 0, sizeof l_V_2384);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2385; memset(&l_I_2385, 0, sizeof l_I_2385);
l_I_2385 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2385))).f_T = l_LT_2378;
((*(R12 *)rt_nil_check(l_I_2385))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2385))).f_ACCESS, l_IT_2375, 0);
((*(R12 *)rt_nil_check(l_I_2385))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_2385, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_2384, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2384).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_2384).f_C));
}
}
S_R10(&l_START_2377, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_2374, l_IT_2375, l_FN_2371, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_2377, p_TD, l_PRIO_2376, l_IT_2375));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_2374));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_2377, p_TD, l_PRIO_2376));
}
r_PATH_BODY(p_P, l_FN_2371, l_FT_2372, l_LT_2378);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv2386 = r_MK(rt_str("NULL", 4));
return rv2386; }
}
{ R10 rv2387 = r_MK(rt_str("F", 1));
return rv2387; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_2388; memset(&l_SAVED_CODE_2388, 0, sizeof l_SAVED_CODE_2388);
S_R14(&l_SAVED_CODE_2388, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2389; memset(&l_SAVED_CTXS_2389, 0, sizeof l_SAVED_CTXS_2389);
l_SAVED_CTXS_2389 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_2390; memset(&l_OUTER_2390, 0, sizeof l_OUTER_2390);
l_OUTER_2390 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_2391; memset(&l_H_2391, 0, sizeof l_H_2391);
l_H_2391 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_2392; memset(&l_CS_2392, 0, sizeof l_CS_2392);
l_CS_2392 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_UPT_2393; memset(&l_UPT_2393, 0, sizeof l_UPT_2393);
S_R10(&l_UPT_2393, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_2390))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_2393, ((*(R18 *)rt_nil_check(l_OUTER_2390))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_2392)), ({ R18 rc2394; memset(&rc2394, 0, sizeof rc2394);  rc2394.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_2390))).f_LEVEL, ((rt_int)1LL)); rc2394.f_R = NULL; rc2394.f_FRAMED = 1; S_R10(&rc2394.f_FTYPE, p_FT, 0); S_R14(&rc2394.f_FIELDS, ({ R14 rc2395; memset(&rc2395, 0, sizeof rc2395);  rc2395.f_HEAD = NULL; rc2395.f_TAIL = NULL; rc2395; }), 0); rc2394.f_UP = l_OUTER_2390; rc2394.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_2391))).f_B; rc2394.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_2391))).f_A; rc2394.f_RESULT = NULL; rc2394.f_IS_PATH = 1; S_R10(&rc2394.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2394; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_2393), &((*(R18 *)rt_nil_check(l_CS_2392))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2392;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2396; memset(&rc2396, 0, sizeof rc2396);  rc2396.f_HEAD = NULL; rc2396.f_TAIL = NULL; rc2396; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_2391))).f_B, ((*(R21 *)rt_nil_check(l_H_2391))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_2397; memset(&l_I_2397, 0, sizeof l_I_2397);
l_I_2397 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_2397))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_2397))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_2397))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_2397))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2392))).f_FIELDS);
r_DEFINE(l_I_2397, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_2398; memset(&l_L_2398, 0, sizeof l_L_2398);
l_L_2398 = ((*(R21 *)rt_nil_check(l_H_2391))).f_A;
R10 l_C_2399; memset(&l_C_2399, 0, sizeof l_C_2399);
S_R10(&l_C_2399, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_2398 == NULL)) goto L_end2400;
{
S_R10(&l_C_2399, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_2399, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_2398))).f_NAME)), 0);
l_L_2398 = ((*(R21 *)rt_nil_check(l_L_2398))).f_NEXT;
}
RT_B_TICK();
} L_end2400: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_2399));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2392))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2390;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2388, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2389;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_2401; memset(&l_C_2401, 0, sizeof l_C_2401);
l_C_2401 = (p_B).f_HEAD;
R10 l_R_2402; memset(&l_R_2402, 0, sizeof l_R_2402);
S_R10(&l_R_2402, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_2401 == NULL)) goto L_end2403;
{
S_R10(&l_R_2402, r_CAT(l_R_2402, ((*(R15 *)rt_nil_check(l_C_2401))).f_T), 0);
l_C_2401 = ((*(R15 *)rt_nil_check(l_C_2401))).f_NEXT;
}
RT_B_TICK();
} L_end2403: ;
{ R10 rv2404 = l_R_2402;
return rv2404; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_2405; memset(&l_NAME_2405, 0, sizeof l_NAME_2405);
S_R10(&l_NAME_2405, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_2406; memset(&l_SUB_2406, 0, sizeof l_SUB_2406);
S_R10(&l_SUB_2406, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_2406, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_2407; memset(&l_Y_2407, 0, sizeof l_Y_2407);
l_Y_2407 = r_LOOKUP(l_NAME_2405);
if ((l_Y_2407 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_2405);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2407))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_2405);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2407))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv2408 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_2407), l_SUB_2406);
return rv2408; }
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
R10 l_NAME_2409; memset(&l_NAME_2409, 0, sizeof l_NAME_2409);
S_R10(&l_NAME_2409, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2410; memset(&l_LINE_2410, 0, sizeof l_LINE_2410);
l_LINE_2410 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_2409, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2411; memset(&l_V_2411, 0, sizeof l_V_2411);
S_R26(&l_V_2411, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2411).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_2410, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv2412 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_2411).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_2411).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2412; }
}
}
else if (r_TEQS(l_NAME_2409, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv2413 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2413; }
}
{ R26 rv2414 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2414; }
}
else if (r_TEQS(l_NAME_2409, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv2415 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2415; }
}
{ R26 rv2416 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv2416; }
}
else if ((r_TEQS(l_NAME_2409, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_2409, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_2410, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_2409);
}
{
R26 l_V_2417; memset(&l_V_2417, 0, sizeof l_V_2417);
S_R26(&l_V_2417, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2417).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_2410, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_2417).f_LVAL))
{
r_FAIL(l_LINE_2410, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_2409, rt_str("REQUEST", 7)))
{
{ R26 rv2418 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_2417).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2418; }
}
{ R26 rv2419 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_2417).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2419; }
}
}
else if (r_TEQS(l_NAME_2409, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_2410);
{ R26 rv2420 = r_START_IO_CALL(p_E);
return rv2420; }
}
r_FAILT(l_LINE_2410, rt_str("unknown routine ", 16), l_NAME_2409);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_2421; memset(&l_ARGS_2421, 0, sizeof l_ARGS_2421);
l_ARGS_2421 = r_CALL_ARGS(p_E);
R12 * l_Y_2422; memset(&l_Y_2422, 0, sizeof l_Y_2422);
l_Y_2422 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2421, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_2423; memset(&l_R_2423, 0, sizeof l_R_2423);
if ((l_Y_2422 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_2423, r_CALL_SYM(l_Y_2422, l_ARGS_2421, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv2424 = l_R_2423;
return rv2424; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_2425; memset(&l_I_2425, 0, sizeof l_I_2425);
l_I_2425 = ((R19 *)rt_alloc(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_2425)), ({ R19 rc2426; memset(&rc2426, 0, sizeof rc2426);  rc2426.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc2426.f_IMPORTS = p_IMPORTS; rc2426.f_SIGNALS = p_SIGNALS; S_R10(&rc2426.f_NAME, p_NAME, 0); rc2426.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc2426; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_2425;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_2427; memset(&l_BASE_2427, 0, sizeof l_BASE_2427);
S_R10(&l_BASE_2427, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_2428; memset(&l_S_2428, 0, sizeof l_S_2428);
l_S_2428 = rt_str_new((l_BASE_2427).f_LEN);
rt_b_assign(&l_S_2428, r_STR(l_BASE_2427, (l_BASE_2427).f_LEN));
R21 * l_N_2429; memset(&l_N_2429, 0, sizeof l_N_2429);
l_N_2429 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it2431_lo = ((rt_int)0LL), it2431_hi = rt_sub((l_BASE_2427).f_LEN, ((rt_int)1LL));
for (rt_int it2431 = it2431_lo; it2431 <= it2431_hi; it2431++) {
{
if (rt_b_eq(rt_b_slice(l_S_2428, it2431, it2431), rt_str("$", 1)))
{
S_R10(&l_BASE_2427, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_2428, ((rt_int)0LL), rt_sub(it2431, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_2428, rt_add(it2431, ((rt_int)1LL)), rt_sub((l_BASE_2427).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it2431 == it2431_hi) break;
} } L_end2430: ;
for (;;) {
if ((l_N_2429 == NULL)) goto L_end2432;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2429))).f_NAME, l_BASE_2427))
{
{ R10 rv2433 = r_FMT2(rt_str("@_@", 3), l_BASE_2427, r_NEW_NAME(rt_str("", 0)));
return rv2433; }
}
l_N_2429 = ((*(R21 *)rt_nil_check(l_N_2429))).f_NEXT;
}
RT_B_TICK();
} L_end2432: ;
l_N_2429 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2429))).f_NAME, l_BASE_2427, 0);
((*(R21 *)rt_nil_check(l_N_2429))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_2429;
{ R10 rv2434 = l_BASE_2427;
return rv2434; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv2435 = 0;
return rv2435; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv2436 = 1;
return rv2436; }
}
{ rt_int rv2437 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv2437; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2438; memset(&l_S_2438, 0, sizeof l_S_2438);
l_S_2438 = p_S0;
for (;;) {
if ((l_S_2438 == NULL)) goto L_end2439;
{
if (((((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_PAR)))
{
{ rt_int rv2440 = 1;
return rv2440; }
}
if (((((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2438))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_2438))).f_B)))
{
{ rt_int rv2441 = 1;
return rv2441; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2438))).f_A))).f_B))
{
{ rt_int rv2442 = 1;
return rv2442; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2438))).f_B))).f_B))
{
{ rt_int rv2443 = 1;
return rv2443; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_2444; memset(&l_A_2444, 0, sizeof l_A_2444);
l_A_2444 = ((*(R21 *)rt_nil_check(l_S_2438))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_2438))).f_KIND == g_N_CASE))
{
l_A_2444 = ((*(R21 *)rt_nil_check(l_S_2438))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_2438))).f_D == NULL)))
{
{ rt_int rv2445 = 1;
return rv2445; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_2438))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2438))).f_C))).f_B))
{
{ rt_int rv2446 = 1;
return rv2446; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_2438))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2438))).f_B))).f_B))
{
{ rt_int rv2447 = 1;
return rv2447; }
}
}
for (;;) {
if ((l_A_2444 == NULL)) goto L_end2448;
{
if ((!(((*(R21 *)rt_nil_check(l_A_2444))).f_C == NULL)))
{
{ rt_int rv2449 = 1;
return rv2449; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2444))).f_B))).f_B))
{
{ rt_int rv2450 = 1;
return rv2450; }
}
l_A_2444 = ((*(R21 *)rt_nil_check(l_A_2444))).f_NEXT;
}
RT_B_TICK();
} L_end2448: ;
}
}
l_S_2438 = ((*(R21 *)rt_nil_check(l_S_2438))).f_NEXT;
}
RT_B_TICK();
} L_end2439: ;
{ rt_int rv2451 = 0;
return rv2451; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_2452; memset(&l_Y_2452, 0, sizeof l_Y_2452);
l_Y_2452 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2453; memset(&l_S_2453, 0, sizeof l_S_2453);
l_S_2453 = rt_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2453, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_2452))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2452))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_2452))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2452))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2452, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2455_lo = ((rt_int)1LL), it2455_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2455 = it2455_lo; it2455 <= it2455_hi; it2455++) {
{
if (rt_b_eq(rt_b_slice(l_S_2453, it2455, it2455), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2452))).f_PREFIX, r_MKN(rt_b_slice(l_S_2453, ((rt_int)0LL), rt_sub(it2455, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_2456; memset(&l_SHORT_2456, 0, sizeof l_SHORT_2456);
l_SHORT_2456 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2453, rt_add(it2455, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_2456))).f_ORIG = l_Y_2452;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_2456))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_2452))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_2456))).f_DECL = p_R;
r_DEFINE(l_SHORT_2456, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2454;
}
}
RT_B_TICK();
if (it2455 == it2455_hi) break;
} } L_end2454: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2457; memset(&l_R_2457, 0, sizeof l_R_2457);
l_R_2457 = p_RS;
for (;;) {
if ((l_R_2457 == NULL)) goto L_end2458;
{
if ((((*(R21 *)rt_nil_check(l_R_2457))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2457);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2457);
}
l_R_2457 = ((*(R21 *)rt_nil_check(l_R_2457))).f_NEXT;
}
RT_B_TICK();
} L_end2458: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2459; memset(&l_R_2459, 0, sizeof l_R_2459);
l_R_2459 = p_RS;
for (;;) {
if ((l_R_2459 == NULL)) goto L_end2460;
{
if ((((*(R21 *)rt_nil_check(l_R_2459))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2461; memset(&l_M_2461, 0, sizeof l_M_2461);
l_M_2461 = r_FIND_DECL(l_R_2459);
r_ENTER_MODULE(l_M_2461);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2459))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2461);
}
}
else
{
{
R12 * l_Y_2462; memset(&l_Y_2462, 0, sizeof l_Y_2462);
l_Y_2462 = r_FIND_DECL(l_R_2459);
r_ROUTINE_HEADER(l_Y_2462);
}
}
l_R_2459 = ((*(R21 *)rt_nil_check(l_R_2459))).f_NEXT;
}
RT_B_TICK();
} L_end2460: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_2463; memset(&l_Y_2463, 0, sizeof l_Y_2463);
l_Y_2463 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2463 == NULL)) goto L_end2464;
{
if (((((*(R12 *)rt_nil_check(l_Y_2463))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_2463))).f_ORIG == NULL)))
{
{ R12 * rv2465 = l_Y_2463;
return rv2465; }
}
l_Y_2463 = r_LOOKUP_NEXT(l_Y_2463);
}
RT_B_TICK();
} L_end2464: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2466; memset(&l_D_2466, 0, sizeof l_D_2466);
l_D_2466 = p_DECLS;
for (;;) {
if ((l_D_2466 == NULL)) goto L_end2467;
{
if (((((*(R21 *)rt_nil_check(l_D_2466))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_2466))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2466))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_2468; memset(&l_Y_2468, 0, sizeof l_Y_2468);
l_Y_2468 = r_FIND_DECL(l_D_2466);
R22 * l_T_2469; memset(&l_T_2469, 0, sizeof l_T_2469);
l_T_2469 = r_RESOLVE_USER(r_TYPE_REF(l_D_2466));
}
}
}
l_D_2466 = ((*(R21 *)rt_nil_check(l_D_2466))).f_NEXT;
}
RT_B_TICK();
} L_end2467: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_2470; memset(&l_TS_2470, 0, sizeof l_TS_2470);
l_TS_2470 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_2470))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv2471 = l_TS_2470;
return rv2471; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_2472; memset(&l_Y_2472, 0, sizeof l_Y_2472);
l_Y_2472 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_2473; memset(&l_SAVED_2473, 0, sizeof l_SAVED_2473);
l_SAVED_2473 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_2472))).f_DECL = p_M;
r_DEFINE(l_Y_2472, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_2474; memset(&l_MARK_2474, 0, sizeof l_MARK_2474);
l_MARK_2474 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_2472;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_2472))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2474);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2473;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2472);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_2475; memset(&l_Y_2475, 0, sizeof l_Y_2475);
l_Y_2475 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2475 == NULL)) goto L_end2476;
{
{
R12 * l_NEXT_2477; memset(&l_NEXT_2477, 0, sizeof l_NEXT_2477);
l_NEXT_2477 = ((*(R12 *)rt_nil_check(l_Y_2475))).f_SNEXT;
r_DEFINE(l_Y_2475, ((rt_int)0LL));
l_Y_2475 = l_NEXT_2477;
}
}
RT_B_TICK();
} L_end2476: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_2478; memset(&l_MARK_2478, 0, sizeof l_MARK_2478);
l_MARK_2478 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2478 == NULL)) goto L_end2479;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2478))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2479;
}
l_MARK_2478 = ((*(R12 *)rt_nil_check(l_MARK_2478))).f_SNEXT;
}
RT_B_TICK();
} L_end2479: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2478);
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
{ rt_int rv2480 = 1;
return rv2480; }
}
}
{ rt_int rv2481 = 0;
return rv2481; }
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
R21 * l_D_2482; memset(&l_D_2482, 0, sizeof l_D_2482);
l_D_2482 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_2483; memset(&l_Y_2483, 0, sizeof l_Y_2483);
l_Y_2483 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2483 == NULL)) goto L_end2484;
{
if (r_EXPORTED_BY(l_D_2482, l_Y_2483))
{
((*(R12 *)rt_nil_check(l_Y_2483))).f_EXPORTED = 1;
{
R12 * l_A_2485; memset(&l_A_2485, 0, sizeof l_A_2485);
l_A_2485 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_2483))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_2483))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_2485)), (*(R12 *)rt_nil_check(l_Y_2483)), 0);
((*(R12 *)rt_nil_check(l_A_2485))).f_ORIG = r_ORIGINAL(l_Y_2483);
((*(R12 *)rt_nil_check(l_A_2485))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2485, ((*(R21 *)rt_nil_check(l_D_2482))).f_LINE);
}
}
l_Y_2483 = ((*(R12 *)rt_nil_check(l_Y_2483))).f_SNEXT;
}
RT_B_TICK();
} L_end2484: ;
{
R21 * l_X_2486; memset(&l_X_2486, 0, sizeof l_X_2486);
l_X_2486 = ((*(R21 *)rt_nil_check(l_D_2482))).f_B;
for (;;) {
if ((l_X_2486 == NULL)) goto L_end2487;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_2486))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_2486))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_2486))).f_NAME);
}
l_X_2486 = ((*(R21 *)rt_nil_check(l_X_2486))).f_NEXT;
}
RT_B_TICK();
} L_end2487: ;
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2488; memset(&l_Y_2488, 0, sizeof l_Y_2488);
l_Y_2488 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2488 == NULL)) goto L_end2489;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_2488))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_2488))).f_PREFIX, p_NAME)))
{
{ rt_int rv2490 = 1;
return rv2490; }
}
l_Y_2488 = ((*(R12 *)rt_nil_check(l_Y_2488))).f_SNEXT;
}
RT_B_TICK();
} L_end2489: ;
{ rt_int rv2491 = 0;
return rv2491; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_2492; memset(&l_X_2492, 0, sizeof l_X_2492);
l_X_2492 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2493 = 0;
return rv2493; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2494 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2494; }
}
for (;;) {
if ((l_X_2492 == NULL)) goto L_end2495;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_2492))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2496 = 1;
return rv2496; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_2492))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_2492))).f_A == NULL))
{
{ rt_int rv2497 = 1;
return rv2497; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_2492))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2498 = 1;
return rv2498; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_2499; memset(&l_T_2499, 0, sizeof l_T_2499);
l_T_2499 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_2492))).f_NAME, p_Y);
if ((!(l_T_2499 == NULL)))
{
{ rt_int rv2500 = 1;
return rv2500; }
}
}
}
l_X_2492 = ((*(R21 *)rt_nil_check(l_X_2492))).f_NEXT;
}
RT_B_TICK();
} L_end2495: ;
{ rt_int rv2501 = 0;
return rv2501; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2502; memset(&l_M_2502, 0, sizeof l_M_2502);
l_M_2502 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_2503; memset(&l_Z_2503, 0, sizeof l_Z_2503);
if ((l_M_2502 == NULL))
{
{ R12 * rv2504 = NULL;
return rv2504; }
}
l_Z_2503 = ((*(R12 *)rt_nil_check(l_M_2502))).f_MEMBERS;
for (;;) {
if ((l_Z_2503 == NULL)) goto L_end2505;
{
if (((((*(R12 *)rt_nil_check(l_Z_2503))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_2503))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_2503))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2503))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_2503))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv2506 = l_Z_2503;
return rv2506; }
}
}
}
}
l_Z_2503 = ((*(R12 *)rt_nil_check(l_Z_2503))).f_SNEXT;
}
RT_B_TICK();
} L_end2505: ;
{ R12 * rv2507 = NULL;
return rv2507; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2508; memset(&l_R_2508, 0, sizeof l_R_2508);
l_R_2508 = p_RS;
for (;;) {
if ((l_R_2508 == NULL)) goto L_end2509;
{
if ((((*(R21 *)rt_nil_check(l_R_2508))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2510; memset(&l_M_2510, 0, sizeof l_M_2510);
l_M_2510 = r_FIND_DECL(l_R_2508);
R21 * l_D_2511; memset(&l_D_2511, 0, sizeof l_D_2511);
l_D_2511 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2508))).f_C))).f_A;
r_ENTER_MODULE(l_M_2510);
for (;;) {
if ((l_D_2511 == NULL)) goto L_end2512;
{
if (((((*(R21 *)rt_nil_check(l_D_2511))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2511))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2511);
}
l_D_2511 = ((*(R21 *)rt_nil_check(l_D_2511))).f_NEXT;
}
RT_B_TICK();
} L_end2512: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2508))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2508))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2510);
}
}
l_R_2508 = ((*(R21 *)rt_nil_check(l_R_2508))).f_NEXT;
}
RT_B_TICK();
} L_end2509: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2513; memset(&l_R_2513, 0, sizeof l_R_2513);
l_R_2513 = p_RS;
for (;;) {
if ((l_R_2513 == NULL)) goto L_end2514;
{
if ((((*(R21 *)rt_nil_check(l_R_2513))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_2515; memset(&l_M_2515, 0, sizeof l_M_2515);
l_M_2515 = r_FIND_DECL(l_R_2513);
r_ENTER_MODULE(l_M_2515);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2513))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2515);
}
}
else
{
{
R12 * l_Y_2516; memset(&l_Y_2516, 0, sizeof l_Y_2516);
l_Y_2516 = r_FIND_DECL(l_R_2513);
if ((!((*(R12 *)rt_nil_check(l_Y_2516))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2516);
}
}
}
l_R_2513 = ((*(R21 *)rt_nil_check(l_R_2513))).f_NEXT;
}
RT_B_TICK();
} L_end2514: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_2517; memset(&l_LEVEL_2517, 0, sizeof l_LEVEL_2517);
l_LEVEL_2517 = r_CUR_LEVEL();
rt_int l_MORE_2518; memset(&l_MORE_2518, 0, sizeof l_MORE_2518);
l_MORE_2518 = 1;
for (;;) {
if ((!l_MORE_2518)) goto L_end2519;
{
l_MORE_2518 = 0;
{
R12 * l_P_2520; memset(&l_P_2520, 0, sizeof l_P_2520);
l_P_2520 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_2521; memset(&l_PREV_2521, 0, sizeof l_PREV_2521);
l_PREV_2521 = NULL;
for (;;) {
if ((l_P_2520 == NULL)) goto L_end2522;
{
if ((((*(R12 *)rt_nil_check(l_P_2520))).f_LEVEL == l_LEVEL_2517))
{
if ((l_PREV_2521 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_2520))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_2521))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_2520))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2520);
r_ROUTINE_BODY(l_P_2520);
r_LEAVE_MODULE_OF(l_P_2520);
l_MORE_2518 = 1;
goto L_end2522;
}
l_PREV_2521 = l_P_2520;
l_P_2520 = ((*(R12 *)rt_nil_check(l_P_2520))).f_MEMBERS;
}
RT_B_TICK();
} L_end2522: ;
}
}
RT_B_TICK();
} L_end2519: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2523; memset(&l_D_2523, 0, sizeof l_D_2523);
l_D_2523 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2524; memset(&l_S_2524, 0, sizeof l_S_2524);
l_S_2524 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2523 == NULL)) goto L_end2525;
{
if (((((*(R21 *)rt_nil_check(l_D_2523))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2523))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2523);
}
l_D_2523 = ((*(R21 *)rt_nil_check(l_D_2523))).f_NEXT;
}
RT_B_TICK();
} L_end2525: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2524 == NULL)) goto L_end2526;
{
r_STMT(l_S_2524);
l_S_2524 = ((*(R21 *)rt_nil_check(l_S_2524))).f_NEXT;
}
RT_B_TICK();
} L_end2526: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2527; memset(&l_R_2527, 0, sizeof l_R_2527);
l_R_2527 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_2528; memset(&l_SAVED_CODE_2528, 0, sizeof l_SAVED_CODE_2528);
S_R14(&l_SAVED_CODE_2528, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_2529; memset(&l_SAVED_CTXS_2529, 0, sizeof l_SAVED_CTXS_2529);
l_SAVED_CTXS_2529 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_2530; memset(&l_SAVED_BINDS_2530, 0, sizeof l_SAVED_BINDS_2530);
l_SAVED_BINDS_2530 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_2531; memset(&l_OUTER_2531, 0, sizeof l_OUTER_2531);
l_OUTER_2531 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_2532; memset(&l_CS_2532, 0, sizeof l_CS_2532);
l_CS_2532 = ((R18 *)rt_alloc(sizeof (R18)));
R10 l_PROLOGUE_2533; memset(&l_PROLOGUE_2533, 0, sizeof l_PROLOGUE_2533);
S_R10(&l_PROLOGUE_2533, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_2532)), ({ R18 rc2534; memset(&rc2534, 0, sizeof rc2534);  rc2534.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2534.f_R = p_Y; rc2534.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc2534.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc2534.f_FIELDS, ({ R14 rc2535; memset(&rc2535, 0, sizeof rc2535);  rc2535.f_HEAD = NULL; rc2535.f_TAIL = NULL; rc2535; }), 0); rc2534.f_UP = l_OUTER_2531; rc2534.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_2527))).f_E; rc2534.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2527))).f_D))).f_A; rc2534.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc2534.f_IS_PATH = 0; S_R10(&rc2534.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2534; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_2532))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2532))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_2532))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_2532))).f_FIELDS);
}
S_R10(&l_PROLOGUE_2533, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_2532))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_2532))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_2533, r_CATS(l_PROLOGUE_2533, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_2532;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2536; memset(&rc2536, 0, sizeof rc2536);  rc2536.f_HEAD = NULL; rc2536.f_TAIL = NULL; rc2536; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_2527))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2527))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_2527))).f_LINE);
{
R28 * l_P_2537; memset(&l_P_2537, 0, sizeof l_P_2537);
l_P_2537 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2537 == NULL)) goto L_end2538;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2537))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2537))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_2539; memset(&l_V_2539, 0, sizeof l_V_2539);
l_V_2539 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_2537))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2539))).f_T = ((*(R28 *)rt_nil_check(l_P_2537))).f_T;
((*(R12 *)rt_nil_check(l_V_2539))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_2537))).f_MODE == g_M_IN);
((*(R12 *)rt_nil_check(l_V_2539))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_2537))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_2539))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2537))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2532))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2537))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2532))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2533, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2533, r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_2539))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_2537))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_2540; memset(&l_ARGA_2540, 0, sizeof l_ARGA_2540);
S_R10(&l_ARGA_2540, ((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2537))).f_T, l_ARGA_2540, ((*(R21 *)rt_nil_check(l_R_2527))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_2539))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_2537))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_2532))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_2533, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_2533, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2537))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2537))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_2533, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2533, ((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, l_ARGA_2540), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_2537))).f_T))
{
S_R10(&l_PROLOGUE_2533, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_2533, ((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_2537))).f_T, l_ARGA_2540)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_2532))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_2532))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_2537))).f_T, l_ARGA_2540, ((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS)), 0);
r_DEFINE(l_V_2539, ((*(R21 *)rt_nil_check(l_R_2527))).f_LINE);
}
}
else
{
r_DEFINE(l_V_2539, ((*(R21 *)rt_nil_check(l_R_2527))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2537))).f_T, ((*(R12 *)rt_nil_check(l_V_2539))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2527))).f_LINE, 1);
}
}
}
}
l_P_2537 = ((*(R28 *)rt_nil_check(l_P_2537))).f_NEXT;
}
RT_B_TICK();
} L_end2538: ;
}
if ((((*(R21 *)rt_nil_check(l_R_2527))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_2527))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_2527))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_2532))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_2532))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2533));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_2532))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_2532))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_2531;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2528, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2529;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2530;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_2541; memset(&l_B_2541, 0, sizeof l_B_2541);
l_B_2541 = p_BS;
for (;;) {
if ((l_B_2541 == NULL)) goto L_end2542;
{
if ((!(((*(R20 *)rt_nil_check(l_B_2541))).f_T == NULL)))
{
{
R12 * l_Y_2543; memset(&l_Y_2543, 0, sizeof l_Y_2543);
l_Y_2543 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_2541))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2543))).f_T = ((*(R20 *)rt_nil_check(l_B_2541))).f_T;
r_DEFINE(l_Y_2543, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_2541))).f_HASMV)
{
{
R12 * l_Y_2544; memset(&l_Y_2544, 0, sizeof l_Y_2544);
l_Y_2544 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_2541))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2544))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_2544))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_2544))).f_MV = ((*(R20 *)rt_nil_check(l_B_2541))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_2544))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_2541))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_2544))).f_INPUT = 1;
r_DEFINE(l_Y_2544, p_LINE);
}
}
l_B_2541 = ((*(R20 *)rt_nil_check(l_B_2541))).f_NEXT;
}
RT_B_TICK();
} L_end2542: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_2545; memset(&l_C_2545, 0, sizeof l_C_2545);
l_C_2545 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2545 == NULL)) goto L_end2546;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_2545))).f_T), &(*p_DST));
l_C_2545 = ((*(R15 *)rt_nil_check(l_C_2545))).f_NEXT;
}
RT_B_TICK();
} L_end2546: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_2547; memset(&l_U_2547, 0, sizeof l_U_2547);
l_U_2547 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2547 == NULL)) goto L_end2548;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_2547))).f_NAME, p_NAME))
{
{ rt_int rv2549 = 1;
return rv2549; }
}
l_U_2547 = ((*(R21 *)rt_nil_check(l_U_2547))).f_NEXT;
}
RT_B_TICK();
} L_end2548: ;
{ rt_int rv2550 = 0;
return rv2550; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_2551; memset(&l_U_2551, 0, sizeof l_U_2551);
l_U_2551 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2551 == NULL)) goto L_end2552;
{
{
R21 * l_T_2553; memset(&l_T_2553, 0, sizeof l_T_2553);
l_T_2553 = p_SEGS;
for (;;) {
if ((l_T_2553 == NULL)) goto L_end2554;
{
if ((((!(l_T_2553 == p_S)) && (((*(R21 *)rt_nil_check(l_T_2553))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_2553))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2551))).f_NAME)))
{
{ rt_int rv2555 = 0;
return rv2555; }
}
l_T_2553 = ((*(R21 *)rt_nil_check(l_T_2553))).f_NEXT;
}
RT_B_TICK();
} L_end2554: ;
}
l_U_2551 = ((*(R21 *)rt_nil_check(l_U_2551))).f_NEXT;
}
RT_B_TICK();
} L_end2552: ;
{ rt_int rv2556 = 1;
return rv2556; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_2557; memset(&l_S_2557, 0, sizeof l_S_2557);
l_S_2557 = p_SEGS;
rt_int l_MAINS_2558; memset(&l_MAINS_2558, 0, sizeof l_MAINS_2558);
l_MAINS_2558 = ((rt_int)0LL);
R18 * l_ROOT_2559; memset(&l_ROOT_2559, 0, sizeof l_ROOT_2559);
l_ROOT_2559 = ((R18 *)rt_alloc(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_2559)), ({ R18 rc2560; memset(&rc2560, 0, sizeof rc2560);  rc2560.f_LEVEL = ((rt_int)0LL); rc2560.f_R = NULL; rc2560.f_FRAMED = 0; S_R10(&rc2560.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc2560.f_FIELDS, ({ R14 rc2561; memset(&rc2561, 0, sizeof rc2561);  rc2561.f_HEAD = NULL; rc2561.f_TAIL = NULL; rc2561; }), 0); rc2560.f_UP = NULL; rc2560.f_IMPORTS = NULL; rc2560.f_SIGNALS = NULL; rc2560.f_RESULT = NULL; rc2560.f_IS_PATH = 0; S_R10(&rc2560.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc2560; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_2559;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2562; memset(&rc2562, 0, sizeof rc2562);  rc2562.f_HEAD = NULL; rc2562.f_TAIL = NULL; rc2562; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_2557 = p_SEGS;
for (;;) {
if ((l_S_2557 == NULL)) goto L_end2564;
{
if ((((*(R21 *)rt_nil_check(l_S_2557))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_2557, p_SEGS))
{
goto L_end2564;
}
}
l_S_2557 = ((*(R21 *)rt_nil_check(l_S_2557))).f_NEXT;
}
RT_B_TICK();
} L_end2564: ;
if ((l_S_2557 == NULL))
{
goto L_end2563;
}
((*(R21 *)rt_nil_check(l_S_2557))).f_D = l_S_2557;
l_MAINS_2558 = rt_add(l_MAINS_2558, ((*(R21 *)rt_nil_check(l_S_2557))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_2557))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2557))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_2557))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2557, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_2557))).f_B);
r_SEGMENT_EXPORTS(l_S_2557);
}
RT_B_TICK();
} L_end2563: ;
l_S_2557 = p_SEGS;
for (;;) {
if ((l_S_2557 == NULL)) goto L_end2565;
{
if ((((*(R21 *)rt_nil_check(l_S_2557))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_2557))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_2557))).f_NAME);
}
l_S_2557 = ((*(R21 *)rt_nil_check(l_S_2557))).f_NEXT;
}
RT_B_TICK();
} L_end2565: ;
if ((!(l_MAINS_2558 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_2566; memset(&l_X_2566, 0, sizeof l_X_2566);
l_X_2566 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2566 == NULL)) goto L_end2567;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_2566))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_2566))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_2566))).f_NAME)));
l_X_2566 = ((*(R21 *)rt_nil_check(l_X_2566))).f_NEXT;
}
RT_B_TICK();
} L_end2567: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2568; memset(&l_M_2568, 0, sizeof l_M_2568);
l_M_2568 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv2569 = 0;
return rv2569; }
}
for (;;) {
if ((l_M_2568 == NULL)) goto L_end2570;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_2568))).f_NAME))
{
{ rt_int rv2571 = 1;
return rv2571; }
}
l_M_2568 = ((*(R12 *)rt_nil_check(l_M_2568))).f_MODL;
}
RT_B_TICK();
} L_end2570: ;
{ rt_int rv2572 = 0;
return rv2572; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_2573; memset(&l_MARK_2573, 0, sizeof l_MARK_2573);
l_MARK_2573 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_2574; memset(&l_TAKEN_2574, 0, sizeof l_TAKEN_2574);
for (;;) {
if ((l_MARK_2573 == NULL)) goto L_end2575;
{
if ((((*(R12 *)rt_nil_check(l_MARK_2573))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2575;
}
l_MARK_2573 = ((*(R12 *)rt_nil_check(l_MARK_2573))).f_SNEXT;
}
RT_B_TICK();
} L_end2575: ;
l_TAKEN_2574 = r_TAKE_SCOPE(l_MARK_2573);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2574 == NULL)) goto L_end2576;
{
{
R12 * l_NEXT_2577; memset(&l_NEXT_2577, 0, sizeof l_NEXT_2577);
l_NEXT_2577 = ((*(R12 *)rt_nil_check(l_TAKEN_2574))).f_SNEXT;
if (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2574))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_2574))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_2574))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_2574)) || (((((*(R12 *)rt_nil_check(l_TAKEN_2574))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_2574))))))
{
r_DEFINE(l_TAKEN_2574, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2574 = l_NEXT_2577;
}
}
RT_B_TICK();
} L_end2576: ;
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
g_GRAPHIC = rt_str_new(((rt_int)95LL));
rt_b_assign(&g_GRAPHIC, rt_str(" !\"#$%&'()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 95));
g_W = ({ R7 *p = rt_alloc(sizeof *p);  (*p).f_ARENA = rt_str_new(((rt_int)64000000LL)); { (*p).f_SRC.lo[0] = ((rt_int)0LL); (*p).f_SRC.hi[0] = g_MAX_SOURCE; rt_int n = rt_b_extent(1, (*p).f_SRC.lo, (*p).f_SRC.hi); (*p).f_SRC.p = rt_alloc(sizeof *(*p).f_SRC.p * (size_t)(n ? n : 1)); } { (*p).f_TOKS.lo[0] = ((rt_int)0LL); (*p).f_TOKS.hi[0] = g_MAX_TOKENS; rt_int n = rt_b_extent(1, (*p).f_TOKS.lo, (*p).f_TOKS.hi); (*p).f_TOKS.p = rt_alloc(sizeof *(*p).f_TOKS.p * (size_t)(n ? n : 1)); } { (*p).f_TABLE.lo[0] = ((rt_int)0LL); (*p).f_TABLE.hi[0] = g_HASH_SIZE; rt_int n = rt_b_extent(1, (*p).f_TABLE.lo, (*p).f_TABLE.hi); (*p).f_TABLE.p = rt_alloc(sizeof *(*p).f_TABLE.p * (size_t)(n ? n : 1)); } { (*p).f_OUT.lo[0] = ((rt_int)0LL); (*p).f_OUT.hi[0] = g_O_LAST; rt_int n = rt_b_extent(1, (*p).f_OUT.lo, (*p).f_OUT.hi); (*p).f_OUT.p = rt_alloc(sizeof *(*p).f_OUT.p * (size_t)(n ? n : 1)); } p; });
r_READ_SOURCE();
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
